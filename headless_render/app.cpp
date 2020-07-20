#include <QApplication>
#include <QPainter>
#include <QImage>
#include <QList>

#include "qgsvectorlayer.h"
#include "qgsmapsettings.h"
#include "qgsmaplayer.h"
#include "qgscoordinatereferencesystem.h"
#include "qgsnetworkaccessmanager.h"

#include "lib.h"

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "Usage: ./qgis filepath_to_geodata filepath_to_style output_path\n";
        return 1;
    }

    QApplication app( argc, argv );

    QgsNetworkAccessManager::instance();

    QgsVectorLayer *layer = new QgsVectorLayer( argv[1], "layername", QStringLiteral( "ogr" ));

    bool loadNamedStyleResult;
    layer->loadNamedStyle( argv[2], loadNamedStyleResult);

    QgsMapSettings settings;
    settings.setOutputSize( { 800, 600 } );
    settings.setOutputImageFormat( QImage::Format_ARGB32_Premultiplied );
    settings.setDestinationCrs(QgsCoordinateReferenceSystem( QStringLiteral( "EPSG:4326" ) ));
    settings.setLayers( QList<QgsMapLayer *>() << layer );
    settings.setExtent( settings.fullExtent() );

    HeadlessRender render;

    auto job = render.renderVector(settings);
    QObject::connect(job, &HeadlessRenderJob::finished, [&](const QImage &image)
    {

        image.save( QString(argv[3]) + "/result.png", "PNG" );

        job->deleteLater();
        layer->deleteLater();

        app.quit();
    });

    return app.exec();
}
