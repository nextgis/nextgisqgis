/***************************************************************************
  classifierdialog.h
  Raster classification using decision tree
  -------------------
  begin                : Mar 22, 2011
  copyright            : (C) 2011 by Alexander Bruy
  email                : alexander.bruy@gmail.com

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef CLASSIFIERDIALOG_H
#define CLASSIFIERDIALOG_H

#include <QDialog>
#include <QProcess>
#include <QThread>

#include "qgisinterface.h"

#include "rasterfileinfo.h"

#include "ui_classifierdialogbase.h"
#include "classifierworker.h"

class GDALDataset;

class ClassifierDialog : public QDialog, private Ui::ClassifierDialogBase
{
    Q_OBJECT
  public:
    ClassifierDialog( QWidget* parent);
    ~ClassifierDialog();

  private:
    static const int context_id = 0;

  private slots:
    void selectLayers();
    void selectOutputFile();
    // void doClassification();
    void doClassificationExt();
    void updateInputRasters();
    void updateStepProgress();
    void toggleDiscreteLabelsCheckBoxState( bool checked );
    void toggleKernelSizeSpinState( int state );
    void cmbUserSelectionHandler( int index );
    void validateKernelSize();
    void setStepProgress(int count);
    void setSubStepProgress(int count);

  private:
    QgisInterface* mIface;

    ClassifierWorkerConfig config;

    ClassifierWorker* worker;
    QThread* thread;

    QString mMultLayersSelectText;
    QStringList mPresenceLayers;
    QStringList mAbsenceLayers;
    QStringList mInputRasters;
    QString mOutputFileName;

    RasterFileInfo mFileInfo;

    // void rasterClassification( const QString& rasterFileName );

    // QString createSingleBandRaster();

    // void applyRasterStyle( QgsRasterLayer* layer, const QColor resColor );
    // void smoothRaster( const QString& path );

    void manageGui();
    void enableOrDisableOkButton();

    // QgsVectorLayer* createTrainLayer();

    // //! merge multiple vectors with different geometry into one point in-memory layer
    // void mergeLayers( QgsVectorLayer* outLayer, const QStringList& layers, GDALDataset* raster, int layerType );

    // //! generate points inside polygons and write them to destination layer with pixel values
    // void pointsFromPolygons( QgsVectorLayer* src, QgsVectorLayer* dst, GDALDataset* raster, int layerType );

    // //! copy points with pixel values from source to destination layer
    // void copyPoints( QgsVectorLayer* src, QgsVectorLayer* dst, GDALDataset* raster, int layerType );

    // //! create buffers around lines and write them to output layer
    // QgsVectorLayer* createBuffer( QgsVectorLayer* src );

    void layersCmbCustomization();

    void setPresenceLayersValidationError(const QString& msg);
    void clearPresenceLayersValidationError();
    void setAbsenceLayersValidationError(const QString& msg);
    void clearAbsenceLayersValidationError();

  private slots:
    void finishedProcess();
};

#endif // CLASSIFIERDIALOG_H
