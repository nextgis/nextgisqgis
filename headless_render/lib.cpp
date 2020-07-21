/******************************************************************************
*  Project: NextGIS GIS libraries
*  Purpose: Core Library
*  Author:  Dmitry Baryshnikov, bishop.dev@gmail.com
*******************************************************************************
*  Copyright (C) 2012-2020 NextGIS, info@nextgis.ru
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 2 of the License, or
*   (at your option) any later version.
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

#include "lib.h"

#include "version.h"
#include "qgsmaplayer.h"
#include "qgsvectorlayer.h"
#include "qgsrasterlayer.h"
#include "qgsmapsettings.h"
#include "qgsnetworkaccessmanager.h"
#include "qgsmaprendererparalleljob.h"
#include "qgscoordinatereferencesystem.h"

HeadlessRender::Image imageData(const QImage &image);
QImage renderLayer(QPointer<QgsMapLayer> layer, const char *qmlString, int width, int height, int epsg);

void HeadlessRender::init()
{
    QgsNetworkAccessManager::instance();
}

const char * HeadlessRender::getVersion()
{
    return HEADLESS_RENDER_LIB_VERSION_STRING;
}

HeadlessRender::Image HeadlessRender::renderVector(const char *uri, const char *qmlString, int width, int height, int epsg)
{
    QPointer<QgsMapLayer> layer = new QgsVectorLayer( uri, "layername", QStringLiteral( "ogr" ));
    return imageData( renderLayer( layer, qmlString, width, height, epsg ) );
}

HeadlessRender::Image HeadlessRender::renderRaster(const char *uri, const char *qmlString, int width, int height, int epsg)
{
    QPointer<QgsMapLayer> layer = new QgsRasterLayer( uri );
    return imageData( renderLayer( layer, qmlString, width, height, epsg ) );
}

QImage renderLayer(QPointer<QgsMapLayer> layer, const char *qmlString, int width, int height, int epsg)
{
    QString readStyleError;
    QDomDocument domDocument;
    domDocument.setContent( QString(qmlString) );
    QgsReadWriteContext context;

    layer->readStyle(domDocument.firstChild(), readStyleError, context);

    QgsMapSettings settings;
    settings.setOutputSize( { width, height } );
    settings.setDestinationCrs( QgsCoordinateReferenceSystem::fromEpsgId( epsg ) );
    settings.setLayers( QList<QgsMapLayer *>() << layer );
    settings.setExtent( settings.fullExtent() );

    QPointer<QgsMapRendererParallelJob> job = new QgsMapRendererParallelJob( settings );

    job->start();
    job->waitForFinished();

    return job->renderedImage();
}

HeadlessRender::Image imageData(const QImage &image)
{
    QByteArray bytes;
    QBuffer buffer( &bytes );

    buffer.open( QIODevice::WriteOnly );
    image.save( &buffer, "PNG" );
    buffer.close();

    const int size = bytes.size();
    uchar *data = (uchar *) malloc( size );
    memcpy( data, reinterpret_cast<uchar *>(bytes.data()), size );

    return { .data = data, .size = size };
}
