#include <QApplication>
#include <QPainter>
#include <QImage>
#include <QList>

#include "qgsvectorlayer.h"
#include "qgsmaprenderercustompainterjob.h"
#include "qgsmapsettings.h"
#include "qgsmaplayer.h"
#include "qgscoordinatereferencesystem.h"
#include "qgsnetworkaccessmanager.h"

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "Usage: ./qgis filepath_to_geodata filepath_to_style output_path\n";
        return 1;
    }

    QApplication app( argc, argv );

    QgsNetworkAccessManager::instance();

    QgsVectorLayer *layer = new QgsVectorLayer( argv[1], "settlement", QStringLiteral( "ogr" ));

    bool loadNamedStyleResult;
    layer->loadNamedStyle( argv[2], loadNamedStyleResult);

    QgsMapSettings settings;
    settings.setOutputSize( { 800, 600 } );
    settings.setOutputImageFormat(QImage::Format_ARGB32_Premultiplied);
    settings.setDestinationCrs(QgsCoordinateReferenceSystem( QStringLiteral( "EPSG:4326" ) ));
    settings.setLayers(QList<QgsMapLayer *>() << layer);
    settings.setExtent(settings.fullExtent());

    QImage image = QImage( settings.deviceOutputSize(), settings.outputImageFormat()  );
    QPainter painter;
    painter.begin( &image );

    auto renderJob = new QgsMapRendererCustomPainterJob( settings, &painter );
    QObject::connect( renderJob, &QgsMapRendererJob::finished, [&]()
    {
        image.save( QString(argv[3]) + "/result.png", "PNG" );

        layer->deleteLater();
        renderJob->deleteLater();
        app.quit();
    });
    renderJob->start();

    return app.exec();
}
