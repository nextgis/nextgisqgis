#include "lib.h"

#include "version.h"
#include "qgsmaplayer.h"
#include "qgsvectorlayer.h"
#include "qgsmapsettings.h"
#include "qgsnetworkaccessmanager.h"
#include "qgsmaprendererparalleljob.h"
#include "qgscoordinatereferencesystem.h"

HeadlessRender::Image imageData(const QImage &image);

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
    QString readStyleError;
    QDomDocument domDocument;
    domDocument.setContent( QString(qmlString) );
    QgsReadWriteContext context;

    QPointer<QgsVectorLayer> layer = new QgsVectorLayer( uri, "layername", QStringLiteral( "ogr" ));
    layer->readStyle(domDocument.firstChild(), readStyleError, context);

    QgsMapSettings settings;
    settings.setOutputSize( { width, height } );
    settings.setDestinationCrs( QgsCoordinateReferenceSystem::fromEpsgId( epsg ) );
    settings.setLayers( QList<QgsMapLayer *>() << layer );
    settings.setExtent( settings.fullExtent() );

    QPointer<QgsMapRendererParallelJob> job = new QgsMapRendererParallelJob( settings );

    job->start();
    job->waitForFinished();

    return imageData(job->renderedImage());
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
