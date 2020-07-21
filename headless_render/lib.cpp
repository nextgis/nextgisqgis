#include "lib.h"

#include "version.h"
#include "qgsmaplayer.h"
#include "qgsvectorlayer.h"
#include "qgsmapsettings.h"
#include "qgsnetworkaccessmanager.h"
#include "qgsmaprendererparalleljob.h"
#include "qgscoordinatereferencesystem.h"

uchar *imageData(const QImage &image);

void HeadlessRender::init()
{
    QgsNetworkAccessManager::instance();
}

const char * HeadlessRender::getVersion()
{
    return HEADLESS_RENDER_LIB_VERSION_STRING;
}

uchar *HeadlessRender::renderVector(const char *uri, const char *qmlString, int width, int height, int epsg)
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

uchar *imageData(const QImage &image)
{
    QByteArray bytes;
    QBuffer buffer( &bytes );

    buffer.open( QIODevice::WriteOnly );
    image.save( &buffer, "PNG" );
    buffer.close();

    uchar *data = (uchar *) malloc( bytes.size() );
    memcpy( data, reinterpret_cast<uchar *>(bytes.data()), bytes.size() );

    return data;
}
