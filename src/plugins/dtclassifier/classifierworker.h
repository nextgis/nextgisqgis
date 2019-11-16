/***************************************************************************
  classifierworker.h
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

#ifndef CLASSIFIERWORKER_H
#define CLASSIFIERWORKER_H

#include <exception>
#include <stdexcept>

#include <QObject>
#include <QString>
#include <QStringList>

#include "opencv2/core/version.hpp"
#include "opencv2/ml/ml.hpp"
#if CV_MAJOR_VERSION == 2
#include "opencv2/core/core_c.h"
#define CV_DTREES CvDTree*
#define CV_RTREES CvRTrees*
#elif CV_MAJOR_VERSION > 2
#include "opencv2/core/core.hpp"
#define CV_DTREES Ptr<ml::DTrees>
#define CV_RTREES Ptr<ml::RTrees>
#endif

#include "qgisinterface.h"
#include "rasterfileinfo.h"

using namespace cv;

struct ClassifierWorkerConfig
{
    ClassifierWorkerConfig():
        save_points_layer_to_disk(false), // depricated
        use_decision_tree(false),
        discrete_classes(false),
        do_generalization(false),
        kernel_size(3) {}

    QString mOutputRaster;
    QString mOutputModel;
    QString mOutputTrainLayer;

    QString mInputModel;
    QString mInputPoints;
    QStringList mInputRasters;
    QStringList mPresence;
    QStringList mAbsence;

    bool save_points_layer_to_disk; // depricated
    bool use_decision_tree;
    bool discrete_classes;

    bool do_generalization;
    size_t kernel_size;

    bool needToPrepareRaster()
    {
        if (!mOutputRaster.isEmpty())
            return true;
        if (!mOutputModel.isEmpty())
            if (mInputModel.isEmpty() && mInputPoints.isEmpty())
                return true;
        if (!mOutputTrainLayer.isEmpty())
            if (mInputPoints.isEmpty())
                return true;

        return false;
    }

    bool needToCreateTrainLayer()
    {
        if (!mInputModel.isEmpty())
            return false;
        return true;
    }

    bool needToPrepareModel()
    {
        if (!mOutputRaster.isEmpty())
            return true;
        if (!mOutputModel.isEmpty())
            return true;

        return false;
    }
};

class GDALDataset;

struct ClassifierWorkerEnv
{
    RasterFileInfo* mResultInputRasterFileInfo;
    GDALDataset* mInRaster;

    QgsVectorLayer* mTrainLayer;

    Mat mTrainData;
    Mat mTrainResponses;

    CV_DTREES mDTree;
    CV_RTREES mRTree;
};


class ClassifierWorker : public QObject
{
    Q_OBJECT
    public:
        ClassifierWorker(ClassifierWorkerConfig config);
        ~ClassifierWorker();

    private:
        ClassifierWorkerConfig mConfig;
        ClassifierWorkerEnv* mEnv;

        size_t mStepNumber;
        size_t mSubStepNumber;

        QString smoothRaster( const QString& path );
        void saveQgisStyle(const QString& filePath, const QColor& color);
        void applyRasterStyle( QgsRasterLayer* layer, const QColor resColor );

    private slots:
        void nextStep(size_t subStepsCount);
        void nextSubStep();

    public slots:
        void process();
        void stop();

    signals:
        void stepCount(int count);
        void progressStep(int count);
        void subStepCount(int count);
        void progressSubStep(int count);
        void errorOccured(QString msg);
        void finished();
};

class ClassifierWorkerStep : public QObject
{
    Q_OBJECT

    public:
        ClassifierWorkerStep(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env);
        ~ClassifierWorkerStep();

        void process();

    protected:
        ClassifierWorkerConfig* mConfig;
        ClassifierWorkerEnv* mEnv;

        virtual void doWork() = 0;
        virtual size_t stepCount() = 0;
        virtual void validate() = 0;

    signals:
        void started(size_t count);
        void nextStep();
        void errorOccured(QString msg);
        void finished();
};

class PrepareInputRaster : public ClassifierWorkerStep
{
    Q_OBJECT

    public:
        PrepareInputRaster(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env);
        ~PrepareInputRaster();

    private:
        QString mResultInputRasterFileName;
        bool mResultInputRasterFileNameIsTemp;
        RasterFileInfo mResultInputRasterFileInfo;
        GDALDataset *mInRaster;

        void doWork();
        size_t stepCount();
        void validate();
};

class CreateTrainLayer : public ClassifierWorkerStep
{
     Q_OBJECT
     public:
        CreateTrainLayer(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env);
        ~CreateTrainLayer();

    private:
        QgsVectorLayer* mTrainLayer;

        void doWork();
        size_t stepCount();
        void validate();

        void createTrainLayer();
        //! merge multiple vectors with different geometry into one point in-memory layer
        void mergeLayers( QgsVectorLayer* outLayer, const QStringList& layers, GDALDataset* raster, int layerType );
        //! generate points inside polygons and write them to destination layer with pixel values
        void pointsFromPolygons( QgsVectorLayer* src, QgsVectorLayer* dst, GDALDataset* raster, int layerType );
        //! copy points with pixel values from source to destination layer
        void copyPoints( QgsVectorLayer* src, QgsVectorLayer* dst, GDALDataset* raster, int layerType );
        //! create buffers around lines and write them to output layer
        QgsVectorLayer* createBuffer( QgsVectorLayer* src );
};

class CreateTrainData : public ClassifierWorkerStep
{
     Q_OBJECT
     public:
        CreateTrainData(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env);
        ~CreateTrainData();

    private:
        Mat mTrainData;
        Mat mTrainResponses;

        void doWork();
        size_t stepCount();
        void validate();
};

class PrepareModel : public ClassifierWorkerStep
{
     Q_OBJECT
     public:
        PrepareModel(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env);
        ~PrepareModel();

    private:
        CV_DTREES mDTree;
        CV_RTREES mRTree;

        void doWork();
        size_t stepCount();
        void validate();
};

class Classify : public ClassifierWorkerStep
{
     Q_OBJECT
     public:
        Classify(ClassifierWorkerConfig* config, ClassifierWorkerEnv* env);
        ~Classify();

    private:
        void doWork();
        size_t stepCount();
        void validate();
};

#endif // CLASSIFIERWORKER_H
