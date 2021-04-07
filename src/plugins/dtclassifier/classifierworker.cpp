/***************************************************************************
  classifierworker.cpp
  Raster classification using decision tree
  -------------------
  begin                : Jun 16, 2016
  copyright            : (C) 2016 by Alexander Lisovenko
  email                : alexander.lisovenko@gmail.com

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include <vector>

#include <QProcess>
#include <QUuid>
#include "gdal.h"
#include "gdal_priv.h"
#include "cpl_conv.h"

#include "qgscontexthelp.h"
#include "qgsgeometry.h"
#include "qgsmaplayerregistry.h"
#include "qgspoint.h"
#include "qgsrasterlayer.h"
#include "qgsvectordataprovider.h"
#include "qgsvectorlayer.h"
#include "qgsvectorfilewriter.h"
#include <qgssinglebandpseudocolorrenderer.h>

#include "classifierutils.h"
#include "classifierworker.h"

#if CV_MAJOR_VERSION == 2
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/imgproc/imgproc_c.h"
#elif CV_MAJOR_VERSION > 2
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#define CV_ROW_SAMPLE ml::ROW_SAMPLE
#endif

ClassifierWorker::ClassifierWorker(ClassifierWorkerConfig config)
    : QObject(),
      mConfig(config),
      mStepNumber(0),
      mSubStepNumber(0)
{
    GDALAllRegister();
}

ClassifierWorker::~ClassifierWorker()
{
    delete mEnv;
}

void ClassifierWorker::process()
{

    QgsDebugMsg( QString("mConfig mOutputRaster: %1").arg(mConfig.mOutputRaster) );
    QgsDebugMsg( QString("mConfig mOutputModel: %1").arg(mConfig.mOutputModel) );
    QgsDebugMsg( QString("mConfig mInputModel: %1").arg(mConfig.mInputModel) );
    QgsDebugMsg( QString("mConfig mInputRasters: %1").arg(mConfig.mInputRasters.join("; ")) );
    QgsDebugMsg( QString("mConfig mPresence: %1").arg(mConfig.mPresence.join("; ")) );
    QgsDebugMsg( QString("mConfig mAbsence: %1").arg(mConfig.mAbsence.join("; ")) );
    QgsDebugMsg( QString("mConfig save_points_layer_to_disk: %1").arg(mConfig.save_points_layer_to_disk) );
    QgsDebugMsg( QString("mConfig use_decision_tree: %1").arg(mConfig.use_decision_tree) );
    QgsDebugMsg( QString("mConfig discrete_classes: %1").arg(mConfig.discrete_classes) );
    QgsDebugMsg( QString("mConfig do_generalization: %1").arg(mConfig.do_generalization) );
    QgsDebugMsg( QString("mConfig kernel_size: %1").arg(mConfig.do_generalization) );

    mEnv = new ClassifierWorkerEnv();

    std::vector<ClassifierWorkerStep*> steps;

    if (mConfig.needToPrepareRaster())
        steps.push_back(new PrepareInputRaster(&mConfig, mEnv));

    if (mConfig.needToCreateTrainLayer())
        steps.push_back(new CreateTrainLayer(&mConfig, mEnv));

    if (mConfig.needToPrepareModel())
    {
        if (mConfig.mInputModel.isEmpty())
            steps.push_back(new CreateTrainData(&mConfig, mEnv));
        steps.push_back(new PrepareModel(&mConfig, mEnv));
    }

    if (!mConfig.mOutputRaster.isEmpty())
        steps.push_back(new Classify(&mConfig, mEnv));

    emit this->stepCount(steps.size());

    for (size_t i = 0; i < steps.size(); i++)
    {
        ClassifierWorkerStep* step = steps[i];

        connect( step, SIGNAL( started(size_t) ), this, SLOT( nextStep(size_t) ) );
        connect( step, SIGNAL( nextStep() ), this, SLOT( nextSubStep() ) );
        connect( step, SIGNAL( errorOccured(QString) ), this, SIGNAL( errorOccured(QString) ) );

        try
        {
            step->process();
        }
        catch (std::runtime_error& e)
        {
            emit errorOccured(e.what());
            emit finished();
            return;
        }
    }

    if (!mConfig.mOutputRaster.isEmpty())
    {
      this->saveQgisStyle(mConfig.mOutputRaster, Qt::red);
      if ( mConfig.do_generalization )
      {
        QString smoothOutputRaster = smoothRaster( mConfig.mOutputRaster );
        QgsDebugMsg( QString("smoothOutputRaster: %1").arg(smoothOutputRaster) );
        this->saveQgisStyle(smoothOutputRaster, Qt::blue);
      }
    }

    nextStep(0);

    emit finished();
}

QString ClassifierWorker::smoothRaster( const QString& path )
{
    QgsDebugMsg(QString("ClassifierWorker::smoothRaster: %1").arg(path));
#if CV_MAJOR_VERSION == 2
    CvMat* img = cvLoadImageM( path.toUtf8(), CV_LOAD_IMAGE_UNCHANGED );
    QgsDebugMsg(QString("ClassifierWorker::smoothRaster img->rows: %1").arg(img->rows));
    CvMat* outImg = cvCreateMat( img->rows, img->cols, CV_8UC1 );
    QgsDebugMsg(QString("ClassifierWorker::smoothRaster img->cols: %1").arg(img->cols));

    cvSmooth( img, outImg, CV_MEDIAN, mConfig.kernel_size );
#elif CV_MAJOR_VERSION > 2

    Mat img = imread( path.toStdString(), cv::IMREAD_UNCHANGED );
    QgsDebugMsg(QString("ClassifierWorker::smoothRaster img.rows: %1").arg(img.rows));
    Mat outImg( img.rows, img.cols, CV_8UC1 );
    QgsDebugMsg(QString("ClassifierWorker::smoothRaster img.cols: %1").arg(img.cols));

    medianBlur( img, outImg, mConfig.kernel_size );
#endif
    QgsDebugMsg(QString("ClassifierWorker::smoothRaster mConfig.kernel_size: %1").arg(mConfig.kernel_size));

/*
  int size = spnKernelSize->value();
  IplConvKernel* kernel = cvCreateStructuringElementEx( size * 2 + 1, size * 2 + 1, size, size, CV_SHAPE_RECT, 0 );

  cvDilate( img, img, kernel, 1 );

  cvReleaseStructuringElement( &kernel );
  size += 1;
  kernel = cvCreateStructuringElementEx( size * 2 + 1, size * 2 + 1, size, size, CV_SHAPE_RECT, 0 );
  cvErode( img, img, kernel, 1 );
  cvReleaseStructuringElement( &kernel );
*/

    QFileInfo fi( path );
    QString smoothFileName;
    smoothFileName = fi.absoluteDir().absolutePath() + "/" + fi.baseName() + "_smooth.tif";

    // create output file
    GDALDriver *driver;
    driver = GetGDALDriverManager()->GetDriverByName( "GTiff" );
    GDALDataset *outRaster;
    outRaster = driver->Create(
        smoothFileName.toUtf8(),
        mEnv->mResultInputRasterFileInfo->xSize(),
        mEnv->mResultInputRasterFileInfo->ySize(),
        1, GDT_Byte, NULL
    );

    double geotransform[6];
    mEnv->mResultInputRasterFileInfo->geoTransform( geotransform );

    outRaster->SetGeoTransform( geotransform );
    outRaster->SetProjection( mEnv->mResultInputRasterFileInfo->projection().toUtf8() );
#if CV_MAJOR_VERSION == 2
    int res = outRaster->RasterIO( GF_Write, 0, 0, mEnv->mResultInputRasterFileInfo->xSize(), mEnv->mResultInputRasterFileInfo->ySize(), (void*)outImg->data.ptr, mEnv->mResultInputRasterFileInfo->xSize(), mEnv->mResultInputRasterFileInfo->ySize(), GDT_Byte, 1, 0, 0, 0, 0 );

    cvReleaseMat( &img );
    cvReleaseMat( &outImg );
#elif CV_MAJOR_VERSION > 2
    int res = outRaster->RasterIO( GF_Write, 0, 0, mEnv->mResultInputRasterFileInfo->xSize(), mEnv->mResultInputRasterFileInfo->ySize(), (void*)outImg.data, mEnv->mResultInputRasterFileInfo->xSize(), mEnv->mResultInputRasterFileInfo->ySize(), GDT_Byte, 1, 0, 0, 0, 0 );
#endif
    Q_UNUSED(res)

    GDALClose( (GDALDatasetH) outRaster );

    return smoothFileName;
}

void ClassifierWorker::nextStep(size_t subStepsCount)
{
    emit progressStep(mStepNumber);
    mStepNumber++;

    emit subStepCount(subStepsCount);
    mSubStepNumber = 0;
    nextSubStep();
};

void ClassifierWorker::nextSubStep()
{
    emit progressSubStep(mSubStepNumber);
    mSubStepNumber++;
};

void ClassifierWorker::stop()
{

};

void ClassifierWorker::saveQgisStyle(const QString& filePath, const QColor& color)
{
    QgsDebugMsg(QString("ClassifierWorker::saveQgisStyle"));
    QFileInfo fileInfo = QFileInfo( filePath );

    QgsRasterLayer* newLayer;
    newLayer = new QgsRasterLayer( filePath, fileInfo.baseName() );
    this->applyRasterStyle( newLayer, color);
    bool theResultFlag;

    newLayer->saveNamedStyle(
        fileInfo.absolutePath() + "/" + fileInfo.baseName() + ".qml",
        theResultFlag
    );
}

void ClassifierWorker::applyRasterStyle( QgsRasterLayer* layer, const QColor resColor)
{
  // draw as singleBand image with ColorRampShader
  layer->setDrawingStyle( QString("SingleBandPseudoColor") );
  //layer->setColorShadingAlgorithm( QgsRasterLayer::ColorRampShader );

  QgsRasterShader* rs = new QgsRasterShader(0.0, 1.0);
  QgsColorRampShader* crs = new QgsColorRampShader(0.0, 1.0);
  crs->setColorRampType(QgsColorRampShader::INTERPOLATED);

  // create color ramp
  /*
  QgsColorRampShader* myRasterShaderFunction = ( QgsColorRampShader* )layer->rasterShader()->rasterShaderFunction();
  */
  QList<QgsColorRampShader::ColorRampItem> myColorRampItems;

  QgsColorRampShader::ColorRampItem absenceItem, presenceItem;
  absenceItem.value = 0.0;
  absenceItem.color = QColor( Qt::white );
  absenceItem.color.setAlpha(0);
  absenceItem.label = "none";

  presenceItem.value = 1.1;
  presenceItem.color = resColor;
  presenceItem.label = "presence";

  myColorRampItems.append( absenceItem );
  myColorRampItems.append( presenceItem );

  crs->setColorRampItemList(myColorRampItems);

  rs->setRasterShaderFunction(crs);

  QgsSingleBandPseudoColorRenderer* render = new QgsSingleBandPseudoColorRenderer(layer->dataProvider(), 1, rs);
  render->setClassificationMin( 0.0 );
  render->setClassificationMax( 1.0 );
  layer->setRenderer(render);
  // sort the shader items
  /*
  qSort( myColorRampItems );
  myRasterShaderFunction->setColorRampItemList( myColorRampItems );
  */
  // make 0 transparent
  //layer->rasterTransparency()->initializeTransparentPixelList( 0.0 );
}

ClassifierWorkerStep::ClassifierWorkerStep(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env)
    :   QObject(),
        mConfig(config),
        mEnv(env)
{}

ClassifierWorkerStep::~ClassifierWorkerStep()
{}

void ClassifierWorkerStep::process()
{
    emit started(this->stepCount());

    this->validate();
    this->doWork();

    emit finished();
}

PrepareInputRaster::PrepareInputRaster(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env)
    : ClassifierWorkerStep(config, env)
{
    QgsDebugMsg( QString("PrepareInputRaster::PrepareInputRaster") );
}

PrepareInputRaster::~PrepareInputRaster()
{
    QgsDebugMsg( QString("PrepareInputRaster::~PrepareInputRaster") );

    mEnv->mResultInputRasterFileInfo = NULL;
    mEnv->mInRaster = NULL;

    QgsDebugMsg( QString("PrepareInputRaster::~PrepareInputRaster 1") );
    GDALClose( (GDALDatasetH) mInRaster );
    QgsDebugMsg( QString("PrepareInputRaster::~PrepareInputRaster 2") );

    QgsDebugMsg( QString("PrepareInputRaster::~PrepareInputRaster 3") );
    if (mResultInputRasterFileNameIsTemp)
        QFile::remove(mResultInputRasterFileName);
}

size_t PrepareInputRaster::stepCount()
{
    if (mConfig->mInputRasters.size() == 1)
    {
        return 0;
    }
    else
    {
        size_t allBandsCount = 0;
        for (int i = 0; i < mConfig->mInputRasters.size(); ++i )
        {
          QString layerPath = mConfig->mInputRasters.at(i);
          GDALDataset* raster = (GDALDataset*) GDALOpen( layerPath.toUtf8(), GA_ReadOnly );

          if (raster == NULL)
          {
              QString msg = QString("Can't open raster %1").arg(layerPath);
              QgsDebugMsg( msg );
              throw std::runtime_error(msg.toStdString());
          }
          allBandsCount += raster->GetRasterCount();

          GDALClose( (GDALDatasetH) raster );
        }

        return allBandsCount + allBandsCount + 1;
    }
}

void PrepareInputRaster::validate()
{
    if (mConfig->mInputRasters.size() == 0)
        throw std::runtime_error("There is no input rasters");
}

void PrepareInputRaster::doWork()
{
    QgsDebugMsg( QString("ClassifierWorker::prepareInputRaster") );

    if (mConfig->mInputRasters.size() == 1)
    {
        mResultInputRasterFileName = mConfig->mInputRasters[0];
        mResultInputRasterFileNameIsTemp = false;
    }
    else
    {
        mResultInputRasterFileNameIsTemp = true;

        // create dir for our temp files
        QString tempDir = QDir().tempPath() + "/dtclassifier";
        QgsDebugMsg( QString("tempDir: %1").arg(tempDir) );
        if ( !QDir().mkpath( tempDir ) )
        {
          QString msg = QString("Can't create temporary directory %1").arg(tempDir);
          QgsDebugMsg( msg );
          throw std::runtime_error(msg.toStdString());
        }

        QString templateName = tempDir + "/raster_";

        size_t allBandsCount = 0;
        for (int i = 0; i < mConfig->mInputRasters.size(); ++i )
        {
          QString layerPath = mConfig->mInputRasters.at(i);
          GDALDataset* raster = (GDALDataset*) GDALOpen( layerPath.toUtf8(), GA_ReadOnly );

          if (raster == NULL)
          {
              QString msg = QString("Can't open raster %1").arg(layerPath);
              QgsDebugMsg( msg );
              throw std::runtime_error(msg.toStdString());
          }
          allBandsCount += raster->GetRasterCount();
        }

        // nextStep(allBandsCount + allBandsCount + 1);

        QProcess* process = new QProcess();
        connect(
            process,
            SIGNAL( finished( int, QProcess::ExitStatus ) ),
            this,
            SIGNAL( nextStep() )
        );

        QString command = "gdal_translate";
        QStringList args;
        QString layerName, layerPath;
        GDALDataset* raster;
        int bandCount;
        int rasterCount = 1;
        for (int i = 0; i < mConfig->mInputRasters.size(); ++i )
        {
            QFileInfo fileInfo = QFileInfo(mConfig->mInputRasters.at(i));
            layerName = fileInfo.baseName();
            layerPath = fileInfo.absoluteFilePath();

            QgsDebugMsg( QString("Process raster: %1").arg(layerPath) );

            raster = (GDALDataset*) GDALOpen( layerPath.toUtf8(), GA_ReadOnly );
            if (raster == NULL)
            {
                QString msg = QString("Can't open raster %1").arg(layerPath);
                QgsDebugMsg( msg );
                throw std::runtime_error(msg.toStdString());
            }

            bandCount = raster->GetRasterCount();
            GDALClose( (GDALDatasetH)raster );

            // iterate over bands
            for ( int j = 0; j < bandCount; ++j )
            {
                QString bandRasterFileName = templateName + QString( "%1.tif" ).arg( rasterCount, 2, 10, QChar( 48 ) );
                QgsDebugMsg( QString("bandRasterFileName: %1").arg(bandRasterFileName) );
                args.clear();
                args << "-b" << QString::number( j + 1 ) << layerPath << bandRasterFileName;

                process->start( command, args, QIODevice::ReadOnly );
                if ( !process->waitForFinished( -1 ) )
                {
                    QString msg = QString("Failed to extract bands from raster %1").arg(layerPath);
                    QgsDebugMsg( msg );
                    throw std::runtime_error(msg.toStdString());
                }
                rasterCount++;
            } //for j
        } //for i

        disconnect( process, SIGNAL( finished( int, QProcess::ExitStatus ) ), this, SIGNAL( nextStep() ) );
        connect( process, SIGNAL( readyReadStandardOutput() ), this, SIGNAL( nextStep() ) );

        // Second step started !!! --------------------------------------------------------
        // get raster files in temp dir
        QDir workDir( tempDir );
        workDir.setFilter( QDir::Files | QDir::NoSymLinks | QDir::NoDotAndDotDot );
        QStringList nameFilter( "*.tif" );
        workDir.setNameFilters( nameFilter );
        QStringList bands = workDir.entryList();
        bands.sort();

        mResultInputRasterFileName = QDir().tempPath() + "/" + QUuid::createUuid().toString() + ".tiff";

        // merge into single raster
        #ifdef Q_OS_WIN32
            command = "gdal_merge.bat";
        #else
            command = "gdal_merge.py";
        #endif

        args.clear();
        args << "-separate" << "-of" << "HFA" << "-o" << mResultInputRasterFileName << bands;

        // gdal_merge output
        process->setWorkingDirectory( tempDir );
        process->setReadChannel( QProcess::StandardOutput );
        process->start( command, args, QIODevice::ReadWrite );
        QgsDebugMsg( QString("command: %1 %2").arg(command, args.join( " " )) );
        if ( !process->waitForFinished( -1 ) )
        {
            QString msg = QString("Failed to merge bands into single raster");
            QgsDebugMsg( msg );
            throw std::runtime_error(msg.toStdString());
        }

        removeDirectory(tempDir);
    }

    try
    {
        QgsDebugMsg( QString("mResultInputRasterFileName: %1").arg(mResultInputRasterFileName) );

        mResultInputRasterFileInfo.initFromFileName( mResultInputRasterFileName );
        QgsDebugMsg(QString("Result input raster xSize(): %1").arg(mResultInputRasterFileInfo.xSize()));
        QgsDebugMsg(QString("Result input raster bandCount(): %1").arg(mResultInputRasterFileInfo.bandCount()));

        mInRaster = (GDALDataset *) GDALOpen( mResultInputRasterFileName.toUtf8(), GA_ReadOnly );
        if (mInRaster == NULL)
        {
        QString msg = QString("Can't open raster: %1").arg(mResultInputRasterFileName);
        throw std::runtime_error(msg.toStdString());
        }
        QgsDebugMsg( QString("Result input raster opened") );
    }
    catch (std::runtime_error& e)
    {
        emit errorOccured(e.what());
        emit finished();
        return;
    }

    mEnv->mResultInputRasterFileInfo = &mResultInputRasterFileInfo;
    mEnv->mInRaster = mInRaster;
}

CreateTrainLayer::CreateTrainLayer(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env)
    : ClassifierWorkerStep(config, env)
{
    QgsDebugMsg( QString("CreateTrainLayer::CreateTrainLayer") );
}

CreateTrainLayer::~CreateTrainLayer()
{
    QgsDebugMsg( QString("CreateTrainLayer::~CreateTrainLayer") );
    mEnv->mTrainLayer = NULL;
}

size_t CreateTrainLayer::stepCount()
{
    return 2;
}

void CreateTrainLayer::validate()
{
    if (mConfig->mInputPoints.isEmpty())
    {
        if (!mEnv->mInRaster || !mEnv->mResultInputRasterFileInfo)
            throw std::runtime_error("There is no input raster info in ClassifierWorkerEnv");
    }
}

void CreateTrainLayer::doWork()
{
    QgsDebugMsg( QString("ClassifierWorker::createTrainLayer") );

    if (mConfig->mInputPoints.isEmpty())
    {
      // create memory layer
      QgsCoordinateReferenceSystem srcCRS(mEnv->mResultInputRasterFileInfo->projection());
      mTrainLayer = new QgsVectorLayer( QString("Point?crs=%1").arg(srcCRS.authid()), "train_points", "memory" );

      QgsVectorDataProvider* provider = mTrainLayer->dataProvider();

      // add attributes to provider
      QList<QgsField> attrList;
      for ( int i = 0; i < mEnv->mResultInputRasterFileInfo->bandCount(); ++i )
      {
      QgsField* field = new QgsField( QString( "Band_%1").arg( i + 1 ), QVariant::Double );
      attrList.append( *field );
      }
      attrList.append( QgsField( "Class", QVariant::Int ) );

      provider->addAttributes( attrList );

      this->mergeLayers( mTrainLayer, mConfig->mPresence, mEnv->mInRaster, 1 );
      this->mergeLayers( mTrainLayer, mConfig->mAbsence, mEnv->mInRaster, 0 );
    }
    else
    {
      mTrainLayer = new QgsVectorLayer(mConfig->mInputPoints, "train_points", "ogr");
    }

    mEnv->mTrainLayer = mTrainLayer;

    emit nextStep();

    if (!mConfig->mOutputTrainLayer.isEmpty())
    {
        QString vectorFilename = mConfig->mOutputTrainLayer;
        QgsDebugMsg( QString("Train points layer: %1").arg(vectorFilename));

        QgsCoordinateReferenceSystem destCRS;
        destCRS = mTrainLayer->crs();

        QgsVectorFileWriter::WriterError error;
        QString errorMessage;
        error = QgsVectorFileWriter::writeAsVectorFormat(
            mTrainLayer, vectorFilename, "System", &destCRS,
            "ESRI Shapefile",
            false,
            &errorMessage
        );

        if ( error != QgsVectorFileWriter::NoError )
        {
            emit errorOccured(
                tr( "Save train points layer. Export to vector file failed.\nError: %1" ).arg( errorMessage )
            );
        }
    }

    emit nextStep();
}

void CreateTrainLayer::mergeLayers( QgsVectorLayer *outLayer, const QStringList& layers, GDALDataset* raster, int layerType )
{
  QgsDebugMsg( QString("ClassifierWorker::mergeLayers"));
  QgsVectorLayer *vl;
  // iterate over layers
  for (int i = 0; i < layers.size(); ++i )
  {
    // vl = vectorLayerByName( layers.at( i ) );
    QgsDebugMsg( QString("layers.at( i ): %1").arg(layers.at( i )));
    vl = new QgsVectorLayer(layers.at( i ), "tmp", "ogr");
    QgsDebugMsg( QString("vl->wkbType(): %1").arg(vl->wkbType()));

    switch ( vl->wkbType() )
    {
      // polygon
      case QGis::WKBPolygon:
      case QGis::WKBPolygon25D:
      {
        pointsFromPolygons( vl, outLayer, raster, layerType );
        break;
      }
      // point
      case QGis::WKBPoint:
      case QGis::WKBPoint25D:
      {
        copyPoints( vl, outLayer, raster, layerType );
        break;
      }
      // line
      case QGis::WKBLineString:
      case QGis::WKBLineString25D:
      {
        QgsVectorLayer* poly = createBuffer( vl );
        pointsFromPolygons( poly, outLayer, raster, layerType );
        delete poly;
        break;
      }
      default:
        break;
    } // switch

    delete vl;
  }
}

void CreateTrainLayer::pointsFromPolygons( QgsVectorLayer* src, QgsVectorLayer* dst, GDALDataset* raster, int layerType )
{
  QgsDebugMsg( QString("pointsFromPolygons"));
  QgsVectorDataProvider *srcProvider = src->dataProvider();
  QgsVectorDataProvider *dstProvider = dst->dataProvider();

  int bandCount = mEnv->mResultInputRasterFileInfo->bandCount();

  // create points
  QgsFeature feat;
  QgsFeature* newFeat;
  QgsGeometry* geom;
  QgsRectangle bbox;
  double xMin, xMax, yMin, yMax;
  double startCol, startRow, endCol, endRow;
  double x, y;
  QgsPoint* pnt = new QgsPoint();
  QgsFeatureList lstFeatures;

  QVector<float> rasterData( mEnv->mResultInputRasterFileInfo->xSize() * bandCount );

  QgsCoordinateReferenceSystem srcCRS;
  srcCRS = src->crs();

  QgsCoordinateReferenceSystem destCRS;
  destCRS = dst->crs();

  QgsCoordinateTransform* xform = new QgsCoordinateTransform();
  xform->setSourceCrs(srcCRS);
  xform->setDestCRS(destCRS);
  //srcProvider->rewind();
  //srcProvider->select();

  //while ( srcProvider->nextFeature( feat ) )
  QgsFeatureIterator fit = srcProvider->getFeatures();
  fit.rewind();
  while ( fit.nextFeature( feat ) )
  {
    geom = feat.geometry();
    geom->transform(*xform);

    bbox = geom->boundingBox();

    xMin = bbox.xMinimum();
    xMax = bbox.xMaximum();
    yMin = bbox.yMinimum();
    yMax = bbox.yMaximum();

    mEnv->mResultInputRasterFileInfo->mapToPixel( xMin, yMax, startRow, startCol );
    mEnv->mResultInputRasterFileInfo->mapToPixel( xMax, yMin, endRow, endCol );

    for ( int row = startRow; row < endRow + 1; row++ )
    {
      for ( int col = startCol; col < endCol + 1; col++ )
      {
        // create point and test
        mEnv->mResultInputRasterFileInfo->pixelToMap( row - 0.5, col - 0.5, x, y );
        pnt->setX( x );
        pnt->setY( y );
        if ( geom->contains( pnt ) )
        {
          newFeat = new QgsFeature();
          newFeat->setGeometry( QgsGeometry::fromPoint( *pnt ) );
          newFeat->initAttributes(bandCount + 1);
          // get pixel value
          int res = raster->RasterIO(
            GF_Read,
            row - 0.5,
            col - 0.5,
            1,
            1,
            (void*)rasterData.data(),
            1,
            1,
            GDT_Float32,
            bandCount,
            0, 0, 0, 0
          );

          Q_UNUSED(res)

          for ( int i = 0; i < bandCount; ++i )
          {
            //newFeat->addAttribute( i, QVariant( (double)rasterData[ i ] ) );
        newFeat->setAttribute( i, QVariant( (double)rasterData[ i ] ) );
          }
          //newFeat->addAttribute( bandCount, QVariant( layerType ) );
      newFeat->setAttribute( bandCount, QVariant( layerType ) );
          lstFeatures.append( *newFeat );
        }
      }
    }
    // update progress and process messages
    //~ stepProgress->setValue( stepProgress->value() + 1 );
    //QApplication::processEvents();
  }
  // write to memory layer
  dstProvider->addFeatures( lstFeatures );
  dst->updateExtents();
  // workaround to save added fetures
  dst->startEditing();
  dst->commitChanges();
}

void CreateTrainLayer::copyPoints( QgsVectorLayer* src, QgsVectorLayer* dst, GDALDataset* raster, int layerType )
{
  QgsDebugMsg( QString("copyPoints"));
  QgsVectorDataProvider* dstProvider = dst->dataProvider();
  QgsVectorDataProvider* srcProvider = src->dataProvider();

  int bandCount = mEnv->mResultInputRasterFileInfo->bandCount();

  QgsFeature inFeat;
  QgsFeature* outFeat;
  QgsGeometry* geom;
  QgsFeatureList lstFeatures;
  double col, row;

  QVector<float> rasterData( mEnv->mResultInputRasterFileInfo->xSize() * bandCount );

  QgsCoordinateReferenceSystem srcCRS;
  srcCRS = src->crs();

  QgsCoordinateReferenceSystem destCRS;
  destCRS = dst->crs();

  QgsCoordinateTransform* xform = new QgsCoordinateTransform();
  xform->setSourceCrs(srcCRS);
  xform->setDestCRS(destCRS);
  /*
  srcProvider->rewind();
  srcProvider->select();
  while ( srcProvider->nextFeature( inFeat ) )
  */
  QgsFeatureIterator fit = srcProvider->getFeatures();
  fit.rewind();
  while ( fit.nextFeature( inFeat ) )
  {
    geom = inFeat.geometry();
    geom->transform(*xform);

    outFeat = new QgsFeature();
    outFeat->setGeometry( geom );
    outFeat->initAttributes(bandCount + 1);

    mEnv->mResultInputRasterFileInfo->mapToPixel( geom->asPoint().x(), geom->asPoint().y(), row, col );
    int res = raster->RasterIO( GF_Read, row - 0.5, col - 0.5, 1, 1, (void*)rasterData.data(), 1, 1, GDT_Float32, bandCount, 0, 0, 0, 0 );
    Q_UNUSED(res)
    for ( int i = 0; i < bandCount; ++i )
    {
      //outFeat->addAttribute( i, QVariant( (double)rasterData[ i ] ) );
    outFeat->setAttribute( i, QVariant( (double)rasterData[ i ] ) );
    }
//    outFeat->addAttribute( bandCount, QVariant( layerType ) );
  outFeat->setAttribute( bandCount, QVariant( layerType ) );

    lstFeatures.append( *outFeat );
  }
  // write to memory layer
  dstProvider->addFeatures( lstFeatures );
  dst->updateExtents();
  // workaround to save added fetures
  dst->startEditing();
  dst->commitChanges();
}

QgsVectorLayer* CreateTrainLayer::createBuffer( QgsVectorLayer* src )
{
  QgsDebugMsg( QString("createBuffer"));
  QgsVectorLayer* dst = new QgsVectorLayer( "Polygon", "buffer", "memory" );
  QgsVectorDataProvider* dstProvider = dst->dataProvider();
  QgsVectorDataProvider* srcProvider = src->dataProvider();

  double dist = mEnv->mResultInputRasterFileInfo->pixelSize() / 2;

  QgsFeature inFeat;
  QgsFeature* outFeat;
  QgsGeometry* inGeom;
  QgsGeometry* outGeom;
  QgsFeatureList lstFeatures;

  //srcProvider->rewind();
  //srcProvider->select();
  //while ( srcProvider->nextFeature( inFeat ) )
  QgsFeatureIterator fit = srcProvider->getFeatures();
  fit.rewind();
  while ( fit.nextFeature( inFeat ) )
  {
    inGeom = inFeat.geometry();
    outGeom = inGeom->buffer( dist, 5 );
    outFeat = new QgsFeature();
    outFeat->setGeometry( outGeom );
    lstFeatures.append( *outFeat );
  }
  // write to memory layer
  dstProvider->addFeatures( lstFeatures );
  dst->updateExtents();
  // workaround to save added fetures
  dst->startEditing();
  dst->commitChanges();

  return dst;
}

CreateTrainData::CreateTrainData(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env)
    : ClassifierWorkerStep(config, env)
{
    QgsDebugMsg( QString("CreateTrainData::CreateTrainData") );
}

CreateTrainData::~CreateTrainData()
{
    QgsDebugMsg( QString("CreateTrainData::~CreateTrainData") );
}

size_t CreateTrainData::stepCount()
{
    QgsVectorDataProvider *provider = mEnv->mTrainLayer->dataProvider();
    return provider->featureCount();
}

void CreateTrainData::validate()
{
    if (!mEnv->mTrainLayer)
        throw std::runtime_error("There is no train layer in ClassifierWorkerEnv");
}

void CreateTrainData::doWork()
{
    QgsDebugMsg(QString("ClassifierWorker::generateTrainData"));

    long featCount = mEnv->mTrainLayer->featureCount();

    //int bc = mResultInputRasterFileInfo.bandCount();
    int bc = mEnv->mTrainLayer->attributeList().size() - 1;

    QgsDebugMsg(QString("Train layer fetures count %1 (%2)").arg(featCount).arg(bc));

    mTrainData = Mat( featCount, bc, CV_32F );
    mTrainResponses = Mat( featCount, 1, CV_32F );

    QgsFeature feat;
    int i = 0;

    QgsVectorDataProvider *provider = mEnv->mTrainLayer->dataProvider();
    // QgsAttributeList attrList = provider->attributeIndexes();
    // provider->rewind();
    // provider->select( attrList );

    // QgsAttributeMap atMap;

    QgsFeatureIterator fit = provider->getFeatures();
    fit.rewind();
    while ( fit.nextFeature( feat ) )
    {
    //while ( provider->nextFeature( feat ) )
    //{
      //atMap = feat.attributeMap();
        for (int j = 0; j < bc; j++)
        {
            mTrainData.at<float>(i,j) = feat.attribute(j).toDouble();
        }
        mTrainResponses.at<float>(i,0) = feat.attribute(bc).toDouble();
      i++;

      nextStep();
    }
    QgsDebugMsg(QString("cvmSet all"));
    // cvSave( "d:\\data.yaml", data );
    // cvSave( "d:\\resp.yaml", responses );

    mEnv->mTrainData = mTrainData;
    mEnv->mTrainResponses = mTrainResponses;
}

PrepareModel::PrepareModel(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env)
    : ClassifierWorkerStep(config, env)
{
    QgsDebugMsg( QString("PrepareModel::PrepareModel") );
}

PrepareModel::~PrepareModel()
{
    QgsDebugMsg( QString("PrepareModel::~PrepareModel") );
#if CV_MAJOR_VERSION == 2
    mEnv->mDTree = NULL;
    mEnv->mRTree = NULL;
#elif CV_MAJOR_VERSION > 2
    mEnv->mDTree.release();
    mEnv->mRTree.release();
#endif
    mDTree->clear();
    mRTree->clear();
}

size_t PrepareModel::stepCount()
{
    return 1;
}

void PrepareModel::validate()
{
    if (mConfig->mInputModel.isEmpty())
    {
        if (mEnv->mTrainData.empty() || mEnv->mTrainResponses.empty())
            throw std::runtime_error("There is no train data in ClassifierWorkerEnv");
    }
}

void PrepareModel::doWork()
{
    QgsDebugMsg(QString("ClassifierWorker::prepareModel"));

#if CV_MAJOR_VERSION == 2
    mDTree = new CvDTree();
    mRTree = new CvRTrees();
#elif CV_MAJOR_VERSION > 2
    mDTree = ml::DTrees::create();
    mRTree = ml::RTrees::create();
#endif

    if (!mConfig->mInputModel.isEmpty())
    {
#if CV_MAJOR_VERSION == 2
        if ( mConfig->use_decision_tree )
            mDTree->load(mConfig->mInputModel.toUtf8());
        else
            mRTree->load(mConfig->mInputModel.toUtf8());
#elif CV_MAJOR_VERSION > 2
        if ( mConfig->use_decision_tree )
        // https://docs.opencv.org/3.2.0/d3/d46/classcv_1_1Algorithm.html#a623841c33b58ea9c4847da04607e067b
        // Ptr<SVM> svm = Algorithm::load<SVM>("my_svm_model.xml");
            mDTree = Algorithm::load<ml::DTrees>(mConfig->mInputModel.toStdString());
        else
            mRTree = Algorithm::load<ml::RTrees>(mConfig->mInputModel.toStdString());
#endif
        mEnv->mDTree = mDTree;
        mEnv->mRTree = mRTree;

        nextStep();
        return;
    }

    if ( mConfig->use_decision_tree )
    {
#if CV_MAJOR_VERSION == 2
        CvDTreeParams params( 8,     // max depth
                              10,    // min sample count
                              0,     // regression accuracy
                              true,  // use surrogates
                              10,    // max number of categories
                              10,    // prune tree with K fold cross-validation
                              false, // use 1 rule
                              false, // throw away the pruned tree branches
                              0      // the array of priors, the bigger p_weight, the more attention
                             );

        // build decision tree classifier
        if ( mConfig->discrete_classes )
        {
          QgsDebugMsg(QString("ClassifierWorker::prepareModel 1"));
          Mat var_type( mEnv->mTrainData.cols + 1, 1, CV_8U, Scalar::all(CV_VAR_CATEGORICAL) );
          mDTree->train( mEnv->mTrainData, CV_ROW_SAMPLE, mEnv->mTrainResponses, Mat(), Mat(), var_type, Mat(), params );
          QgsDebugMsg(QString("ClassifierWorker::prepareModel 2"));
        }
        else
        {
          mDTree->train( mEnv->mTrainData, CV_ROW_SAMPLE, mEnv->mTrainResponses, Mat(), Mat(), Mat(), Mat(), params );
        }
#elif CV_MAJOR_VERSION > 2
        mDTree->setMaxDepth(8);
        mDTree->setMinSampleCount(10);
        mDTree->setRegressionAccuracy(0);
        mDTree->setUseSurrogates(true);
        mDTree->setMaxCategories(10);
        mDTree->setTruncatePrunedTree(false);
        mDTree->setUse1SERule(false);
        mDTree->setPriors(Mat());

      // build decision tree classifier
      if ( mConfig->discrete_classes )
      {
        QgsDebugMsg(QString("ClassifierWorker::prepareModel 1"));
        Mat var_types( mEnv->mTrainData.cols + 1, 1, CV_8U, Scalar::all(ml::VAR_CATEGORICAL) );
        Ptr<ml::TrainData> td = ml::TrainData::create( mEnv->mTrainData,
            ml::ROW_SAMPLE, mEnv->mTrainResponses, noArray(), noArray(),
            var_types, noArray());
        mDTree->train( td );
        QgsDebugMsg(QString("ClassifierWorker::prepareModel 2"));
      }
      else
      {
        mDTree->train( mEnv->mTrainData, ml::ROW_SAMPLE, mEnv->mTrainResponses );
      }
#endif
    }
    else // or random trees
    {
      // build random trees classifier
      mRTree->train( mEnv->mTrainData, CV_ROW_SAMPLE, mEnv->mTrainResponses );
    }

    QgsDebugMsg(QString("prepareModel Finish"));

    if (!mConfig->mOutputModel.isEmpty())
    {
        QString treeFileName = mConfig->mOutputModel;
        QgsDebugMsg(QString("Model save file: %1").arg(treeFileName));
#if CV_MAJOR_VERSION == 2
    if ( mConfig->use_decision_tree )
        mDTree->save( treeFileName.toUtf8(), "MyTree" );
    else
        mRTree->save( treeFileName.toUtf8(), "MyTree" );
#elif CV_MAJOR_VERSION > 2
    if ( mConfig->use_decision_tree )
        mDTree->save( treeFileName.toStdString() );
    else
        mRTree->save( treeFileName.toStdString() );
#endif
    }

    mEnv->mDTree = mDTree;
    mEnv->mRTree = mRTree;

    nextStep();
}

Classify::Classify(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env)
    : ClassifierWorkerStep(config, env)
{
    QgsDebugMsg( QString("Classify::Classify") );
}

Classify::~Classify()
{
    QgsDebugMsg( QString("Classify::~Classify") );
}

size_t Classify::stepCount()
{
    return mEnv->mResultInputRasterFileInfo->ySize();
}

void Classify::validate()
{
    if (!mEnv->mResultInputRasterFileInfo || (!mEnv->mDTree && !mEnv->mRTree))
        throw std::runtime_error("There are no input raster info or model in ClassifierWorkerEnv");
}

void Classify::doWork()
{
    GDALDriver *driver = GetGDALDriverManager()->GetDriverByName( "GTiff" );
    GDALDataset *outRaster = driver->Create(
      mConfig->mOutputRaster.toUtf8(),
      mEnv->mResultInputRasterFileInfo->xSize(),
      mEnv->mResultInputRasterFileInfo->ySize(),
      1,
      GDT_Byte,
      NULL
    );
    double geotransform[6];
    mEnv->mResultInputRasterFileInfo->geoTransform( geotransform );

    outRaster->SetGeoTransform( geotransform );
    outRaster->SetProjection( mEnv->mResultInputRasterFileInfo->projection().toUtf8() );
    QgsDebugMsg(QString("Output raster created"));

    QVector<float> rasterData( mEnv->mResultInputRasterFileInfo->xSize() * mEnv->mResultInputRasterFileInfo->bandCount() );
    Mat sample( mEnv->mResultInputRasterFileInfo->bandCount(), 1, CV_32F );
    QVector<unsigned char> outData( mEnv->mResultInputRasterFileInfo->xSize() );

    for ( int row = 0; row < mEnv->mResultInputRasterFileInfo->ySize(); ++row )
    {
      int res = mEnv->mInRaster->RasterIO( GF_Read, 0, row, mEnv->mResultInputRasterFileInfo->xSize(), 1, (void *)rasterData.data(), mEnv->mResultInputRasterFileInfo->xSize(), 1, GDT_Float32, mEnv->mResultInputRasterFileInfo->bandCount(), 0, 0, 0, 0 );
      for ( int col = 0; col < mEnv->mResultInputRasterFileInfo->xSize(); ++col )
      {
        for ( int j = 0; j < mEnv->mResultInputRasterFileInfo->bandCount(); j++)
        {
          sample.at<float>(j,0) = rasterData[ mEnv->mResultInputRasterFileInfo->xSize() * j + col ];
        }

        if ( mConfig->use_decision_tree )
        {
#if CV_MAJOR_VERSION == 2
          outData[ col ] = (unsigned char)mEnv->mDTree->predict( sample )->value;
#elif CV_MAJOR_VERSION > 2
          outData[ col ] = (unsigned char)mEnv->mDTree->predict( sample );
#endif
        }
        else
        {
          outData[ col ] = (unsigned char)mEnv->mRTree->predict( sample );
        }
      }
      res = outRaster->RasterIO( GF_Write, 0, row, mEnv->mResultInputRasterFileInfo->xSize(), 1, (void *)outData.data(), mEnv->mResultInputRasterFileInfo->xSize(), 1, GDT_Byte, 1, 0, 0, 0, 0 );
      Q_UNUSED(res)
      nextStep();
    }

    GDALClose( (GDALDatasetH) outRaster );
}
