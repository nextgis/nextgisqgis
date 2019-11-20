/***************************************************************************
  classifierdialog.cpp
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

#include <QComboBox>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QSettings>
#include <QColor>
#include <QApplication>
#include <QList>
#include <QDir>
#include <QToolTip>
#include <QStandardItemModel>
#include <QStandardItem>

#include <cmath>

#include <qgsmessagelog.h>
#include <qgssinglebandpseudocolorrenderer.h>

#include "gdal.h"
#include "gdal_priv.h"
#include "cpl_conv.h"

#include "opencv2/core/core_c.h"
#include "opencv2/ml/ml.hpp"
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/imgproc/imgproc_c.h"

#include "qgscontexthelp.h"
#include "qgsgeometry.h"
#include "qgsmaplayerregistry.h"
#include "qgspoint.h"
#include "qgsrasterlayer.h"
#include "qgsvectordataprovider.h"
#include "qgsvectorlayer.h"
#include "qgsvectorfilewriter.h"
#include "qgsgeometryvalidator.h"

#include "classifierdialog.h"
#include "layerselectordialog.h"
#include "classifierutils.h"

ClassifierDialog::ClassifierDialog( QWidget* parent)
    : QDialog( parent )
{
  setupUi( this );

  mMultLayersSelectText = tr( "[multiple layers]" );

  cmbPresenceLayer->clear();
  cmbAbsenceLayer->clear();

  manageGui();

	clearPresenceLayersValidationError();
	clearAbsenceLayersValidationError();

  // need this for working with rasters
  GDALAllRegister();

  connect( cmbPresenceLayer, SIGNAL( activated( int ) ), this, SLOT( cmbUserSelectionHandler( int ) ) );
  connect( cmbAbsenceLayer, SIGNAL( activated( int ) ), this, SLOT( cmbUserSelectionHandler( int ) ) );
  connect( btnMultiPresence, SIGNAL( clicked() ), this, SLOT( selectLayers() ) );
  connect( btnMultiAbsence, SIGNAL( clicked() ), this, SLOT( selectLayers() ) );
  connect( btnOutputFile, SIGNAL( clicked() ), this, SLOT( selectOutputFile() ) );
  connect( rastersList, SIGNAL( itemSelectionChanged() ), this, SLOT( updateInputRasters() ) );
  // connect( rbDecisionTree, SIGNAL( toggled( bool ) ), this, SLOT( toggleDiscreteLabelsCheckBoxState( bool ) ) );
  connect( generalizeCheckBox, SIGNAL( stateChanged( int ) ), this, SLOT( toggleKernelSizeSpinState( int ) ) );
  // connect( spnKernelSize, SIGNAL( editingFinished() ), this, SLOT( validateSize() ) );

  // use Ok button for starting classification
  buttonBox->button(QDialogButtonBox::Ok)->setText(tr("Run"));

  disconnect( buttonBox, SIGNAL( accepted() ), this, SLOT( accept() ) );
  // connect( buttonBox, SIGNAL( accepted() ), this, SLOT( doClassification() ) );
  connect( buttonBox, SIGNAL( accepted() ), this, SLOT( doClassificationExt() ) );
  connect( buttonBox, SIGNAL( rejected() ), this, SLOT( reject() ) );

  QgsDebugMsg( QString( "ClassifierDialog::ClassifierDialog" ) );
}

ClassifierDialog::~ClassifierDialog()
{
}

void ClassifierDialog::selectLayers()
{
  QString senderName = sender()->objectName();

  QStringList* alreadySelectedLayers;
  QStringList* willbeSelected;

  if ( senderName == "btnMultiPresence" )
  {
		clearPresenceLayersValidationError();
    if ( btnMultiPresence->isChecked() )
    {
      //dlg.setLayerList( &mPresenceLayers );
    alreadySelectedLayers = &mAbsenceLayers;
    willbeSelected = &mPresenceLayers;
    }
    else
    {
    cmbPresenceLayer->removeItem( cmbPresenceLayer->count() - 1 );
      cmbPresenceLayer->setEnabled( true );
      cmbPresenceLayer->setCurrentIndex( -1 );
      mPresenceLayers.clear();

    layersCmbCustomization();
      return;
    }
  }
  else
  {
		clearAbsenceLayersValidationError();
    if ( btnMultiAbsence->isChecked() )
    {
      //dlg.setLayerList( &mAbsenceLayers );
    alreadySelectedLayers = &mPresenceLayers;
    willbeSelected = &mAbsenceLayers;
    }
    else
    {
    cmbAbsenceLayer->removeItem( cmbAbsenceLayer->count() - 1 );
      cmbAbsenceLayer->setEnabled( true );
      cmbAbsenceLayer->setCurrentIndex( -1 );
      mAbsenceLayers.clear();

    layersCmbCustomization();
      return;
    }
  }

  LayerSelectorDialog dlg( this, alreadySelectedLayers);
  dlg.setLayerList( willbeSelected );

  if ( dlg.exec() )
  {
    if ( senderName == "btnMultiPresence" && btnMultiPresence->isChecked() )
    {
    cmbPresenceLayer->insertItem(cmbPresenceLayer->count(), mMultLayersSelectText);
      cmbPresenceLayer->setCurrentIndex( cmbPresenceLayer->count() - 1 );
      cmbPresenceLayer->setEnabled( false );
      //dlg.setLayerList( &mPresenceLayers );
    }
    else if ( senderName == "btnMultiAbsence" && btnMultiAbsence->isChecked() )
    {
    cmbAbsenceLayer->insertItem(cmbAbsenceLayer->count(), mMultLayersSelectText);
      cmbAbsenceLayer->setCurrentIndex( cmbAbsenceLayer->count() - 1 );
      cmbAbsenceLayer->setEnabled( false );
      //dlg.setLayerList( &mAbsenceLayers );
    }
  }
  else
  {
    if ( senderName == "btnMultiPresence" && btnMultiPresence->isChecked() )
    {
      btnMultiPresence->setChecked( false );
    }
    else if ( senderName == "btnMultiAbsence" && btnMultiAbsence->isChecked() )
    {
      btnMultiAbsence->setChecked( false );
    }
  }

  layersCmbCustomization();
}

void ClassifierDialog::selectOutputFile()
{
  // get last used directory
  QSettings settings( "NextGIS", "DTclassifier" );
  QString lastDir;

  lastDir = settings.value( "lastUsedDir", "." ).toString();

  QString fileName = QFileDialog::getSaveFileName( this, tr( "Select output file" ), lastDir, "GeoTiff (*.tif *.tiff *.TIF *.TIFF)" );

  if ( fileName.isEmpty() )
  {
    return;
  }

  // ensure the user never ommited the extension from the file name
  if ( !fileName.toLower().endsWith( ".tif" ) && !fileName.toLower().endsWith( ".tiff" ) )
  {
    fileName += ".tif";
  }

  mOutputFileName = fileName;
  leOutputRaster->setText( mOutputFileName );

  // save last used directory
  settings.setValue( "lastUsedDir", QFileInfo( fileName ).absolutePath() );

  enableOrDisableOkButton();
  qDebug() << "OutFileName" << mOutputFileName;
}

void ClassifierDialog::doClassificationExt()
{
  bool is_valid = true;

  if (leOutputRaster->text().isEmpty())
  {
    leOutputRaster->setPlaceholderText( tr("Please, choose output file!") );
  leOutputRaster->setStyleSheet("background-color: rgba(255, 0, 0, 50);");
  is_valid = false;
  }
  else
  {
  leOutputRaster->setStyleSheet("");
  }

  if (rastersList->selectedItems().count() == 0)
  {
    rastersList->setStyleSheet("background-color: rgba(255, 0, 0, 50);");
  QPoint point = QPoint(geometry().left() + rastersList->geometry().left(),
                              geometry().top() + rastersList->geometry().top());
  QToolTip::showText(point, tr("Select one or more layers!"));
  is_valid = false;
  }
  else
  {
  rastersList->setStyleSheet("");
  }

  if (cmbAbsenceLayer->currentIndex() == -1)
  {
  cmbAbsenceLayer->setEditable(true);
  cmbAbsenceLayer->lineEdit()->setEnabled(false);
  cmbAbsenceLayer->lineEdit()->setStyleSheet("background-color: rgba(255, 0, 0, 50);");
  cmbAbsenceLayer->lineEdit()->setPlaceholderText(tr("Select one or more layers!"));

  is_valid = false;
  }
  else
  {
  cmbAbsenceLayer->setEditable(false);
  }

  if (cmbPresenceLayer->currentIndex() == -1)
  {
  cmbPresenceLayer->setEditable(true);
  cmbPresenceLayer->lineEdit()->setEnabled(false);
  cmbPresenceLayer->lineEdit()->setStyleSheet("background-color: rgba(255, 0, 0, 50);");
  cmbPresenceLayer->lineEdit()->setPlaceholderText(tr("Select one or more layers!"));

  is_valid = false;
  }
  else
  {
  cmbPresenceLayer->setEditable(false);
  }

  if (is_valid == false)
    return;

	for (int i = 0; i < mPresenceLayers.size(); ++i )
	{
		QString layerName = mPresenceLayers.at( i );
		QgsVectorLayer* layer = vectorLayerByName( layerName );

		QgsFeature inFeat;
		QgsVectorDataProvider* srcProvider = layer->dataProvider();
		QgsFeatureIterator fit = srcProvider->getFeatures();
		fit.rewind();
		while ( fit.nextFeature( inFeat ) )
		{
			QList< QgsGeometry::Error > errors;
			QgsGeometryValidator::validateGeometry(inFeat.geometry(), errors);

			if (errors.size() > 0)
			{
				setPresenceLayersValidationError(tr("There are invalid geometries in selected layer(s)!"));
			  return;
			}
		}
	}

	for (int i = 0; i < mAbsenceLayers.size(); ++i )
	{
		QString layerName = mAbsenceLayers.at( i );
		QgsVectorLayer* layer = vectorLayerByName( layerName );

		QgsFeature inFeat;
		QgsVectorDataProvider* srcProvider = layer->dataProvider();
		QgsFeatureIterator fit = srcProvider->getFeatures();
		fit.rewind();
		while ( fit.nextFeature( inFeat ) )
		{
			QList< QgsGeometry::Error > errors;
			QgsGeometryValidator::validateGeometry(inFeat.geometry(), errors);

			if (errors.size() > 0)
			{
				setAbsenceLayersValidationError(tr("There are invalid geometries in selected layer(s)!"));
			  return;
			}
		}
	}

  buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

  // save checkboxes state
  QSettings settings( "NextGIS", "DTclassifier" );

  // settings.setValue( "discreteClasses", discreteLabelsCheckBox->isChecked() );
  settings.setValue( "addToCanvas", addToCanvasCheckBox->isChecked() );
  settings.setValue( "saveTempLayers", savePointLayersCheckBox->isChecked() );

  settings.setValue( "doGeneralization", generalizeCheckBox->isChecked() );
  settings.setValue( "kernelSize", spnKernelSize->value() );

  QgsDebugMsg(QString("ClassifierDialog::doClassificationExt"));

  for (int i = 0; i < mInputRasters.size(); ++i )
  {
    QString layerName = mInputRasters.at( i );
    QString layerPath = rasterLayerByName( layerName )->source();
    config.mInputRasters << layerPath;
  }
  for (int i = 0; i < mPresenceLayers.size(); ++i )
  {
    QString layerName = mPresenceLayers.at( i );
    QString layerPath = vectorLayerByName( layerName )->source();
    config.mPresence << layerPath;
  }
  for (int i = 0; i < mAbsenceLayers.size(); ++i )
  {
    QString layerName = mAbsenceLayers.at( i );
    QString layerPath = vectorLayerByName( layerName )->source();
    config.mAbsence << layerPath;
  }
  config.mOutputRaster = mOutputFileName;
  // config.save_points_layer_to_disk = savePointLayersCheckBox->isChecked();
  QFileInfo fi = QFileInfo(mOutputFileName);
  config.mOutputTrainLayer = fi.absoluteDir().absolutePath() + "/" + fi.baseName() + "_train_points.shp";
  config.mOutputModel = fi.absoluteDir().absolutePath() + "/" + fi.baseName() + "_tree.yaml";

  config.use_decision_tree = false; //rbDecisionTree->isChecked();
  config.discrete_classes = false; //discreteLabelsCheckBox->isChecked();

  config.do_generalization = generalizeCheckBox->isChecked();
  config.kernel_size = spnKernelSize->value();

  worker = new ClassifierWorker(config);
  connect( worker, SIGNAL( stepCount(int) ), this, SLOT( setStepProgress(int) ) );
  connect( worker, SIGNAL( progressStep(int) ), totalProgress, SLOT( setValue(int) ) );
  connect( worker, SIGNAL( subStepCount(int) ), this, SLOT( setSubStepProgress(int) ) );
  connect( worker, SIGNAL( progressSubStep(int) ), stepProgress, SLOT( setValue(int) ) );
  connect( worker, SIGNAL( finished() ), this, SLOT( finishedProcess() ) );
  QgsDebugMsg(QString("worker"));

  thread = new QThread(this);
  worker->moveToThread(thread);
  connect( thread, SIGNAL( started() ), worker, SLOT( process() ) );

  thread->start();
  QgsDebugMsg(QString("process"));
}

void ClassifierDialog::finishedProcess()
{
  // totalProgress->setFormat( "%p%" );
  totalProgress->setRange( 0, 100 );
  totalProgress->setValue( 100 );

  // stepProgress->setFormat( "%p%" );
  stepProgress->setRange( 0, 100 );
  stepProgress->setValue( 100 );

  // add classified rasters to map canvas if requested
  if ( addToCanvasCheckBox->isChecked() )
  {
    QgsRasterLayer* newLayer;
    newLayer = new QgsRasterLayer( config.mOutputRaster, QFileInfo( config.mOutputRaster ).baseName() );
    QgsMapLayerRegistry::instance()->addMapLayer( newLayer );

    QFileInfo fi( config.mOutputRaster );
    QString smoothFileName = fi.absoluteDir().absolutePath() + "/" + fi.baseName() + "_smooth.tif";
    QgsRasterLayer* smoothLayer;
    smoothLayer = new QgsRasterLayer( smoothFileName, QFileInfo( smoothFileName ).baseName() );
    QgsMapLayerRegistry::instance()->addMapLayer( smoothLayer );
  }

  buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
}

void ClassifierDialog::setStepProgress(int count)
{
  totalProgress->setRange(0, count);
}

void ClassifierDialog::setSubStepProgress(int count)
{
  stepProgress->setRange(0, count) ;
}


void ClassifierDialog::manageGui()
{
  // restore ui state from settings
  QSettings settings( "NextGIS", "DTclassifier" );

  //addToCanvasCheckBox->setChecked( settings.value( "addToCanvas", true ).toBool() );
  addToCanvasCheckBox->setChecked(true);
  savePointLayersCheckBox->setChecked( settings.value( "saveTempLayers", false ).toBool() );

  generalizeCheckBox->setChecked( settings.value( "doGeneralization", false ).toBool() );
  spnKernelSize->setValue( settings.value( "kernelSize", 3 ).toInt() );
  if ( generalizeCheckBox->isChecked() )
  {
    spnKernelSize->setEnabled( true );
  }
  else
  {
    spnKernelSize->setEnabled( false );
  }

  // classification settings
  QString algorithm = settings.value( "classificationAlg", "dtree" ).toString();
  // if ( algorithm == "dtree" )
  // {
  //   rbDecisionTree->setChecked( true );
  //   discreteLabelsCheckBox->setEnabled( true );
  // }
  // else
  {
    rbRandomTrees->setChecked( true );
    // discreteLabelsCheckBox->setEnabled( false );
  }
  // discreteLabelsCheckBox->setChecked( settings.value( "discreteClasses", true ).toBool() );

  // populate vector layers comboboxes
  QMap<QString, QgsMapLayer*> mapLayers = QgsMapLayerRegistry::instance()->mapLayers();
  QMap<QString, QgsMapLayer*>::iterator layer_it = mapLayers.begin();

  if ( mapLayers.count() == 0)
  {
  cmbPresenceLayer->setEnabled( false );
  cmbAbsenceLayer->setEnabled( false );
  btnMultiPresence->setEnabled( false );
  btnMultiAbsence->setEnabled( false );
  return;
  }

  for ( ; layer_it != mapLayers.end(); ++layer_it )
  {
  if ( layer_it.value()->type() == QgsMapLayer::VectorLayer )
  {
    cmbPresenceLayer->insertItem( 0, layer_it.value()->name() );
    cmbAbsenceLayer->insertItem( 0, layer_it.value()->name() );
  }
  else if ( layer_it.value()->type() == QgsMapLayer::RasterLayer )
  {
    QgsRasterLayer* layer = qobject_cast<QgsRasterLayer *> ( layer_it.value() );

    if ( layer->providerType() != "gdal" ) //if ( layer->usesProvider() && layer->providerKey() != "gdal" )
    {
    continue;
    }
    rastersList->addItem( new QListWidgetItem( layer_it.value()->name() ) );
  }
  }

  cmbPresenceLayer->setCurrentIndex( -1 );
  cmbAbsenceLayer->setCurrentIndex( -1 );

  // display different layers in combos. I don't know why this is so neccessary
  /*
  if ( cmbPresenceLayer->count() > 3 )
  {
    cmbPresenceLayer->setCurrentIndex( 0 );
    cmbAbsenceLayer->setCurrentIndex( 1 );
  }
  else
  {
    cmbPresenceLayer->setCurrentIndex( -1 );
    cmbAbsenceLayer->setCurrentIndex( -1 );
  }
  */
}

void ClassifierDialog::toggleDiscreteLabelsCheckBoxState( bool checked )
{
  // if ( checked )
  // {
  //   discreteLabelsCheckBox->setEnabled( true );
  // }
  // else
  // {
  //   discreteLabelsCheckBox->setEnabled( false );
  // }
}

void ClassifierDialog::toggleKernelSizeSpinState( int state )
{
  if ( state == Qt::Checked )
  {
    spnKernelSize->setEnabled( true );
  }
  else
  {
    spnKernelSize->setEnabled( false );
  }
}

void ClassifierDialog::validateKernelSize()
{
  int i = spnKernelSize->value();
  if ( i / 2 )
  {
    spnKernelSize->setValue( ++i );
  }
}

void ClassifierDialog::cmbUserSelectionHandler( int index )
{
  QString senderName = sender()->objectName();
  if (senderName == cmbPresenceLayer->objectName())
  {
    clearPresenceLayersValidationError();

    mPresenceLayers.clear();
    if (index != -1)
    {
      mPresenceLayers.append(cmbPresenceLayer->itemText(index));
    }
  }
  if (senderName == cmbAbsenceLayer->objectName())
  {
    clearAbsenceLayersValidationError();

    mAbsenceLayers.clear();
    if (index != -1)
    {
      mAbsenceLayers.append(cmbAbsenceLayer->itemText(index));
    }
  }

  layersCmbCustomization();
}

void ClassifierDialog::layersCmbCustomization()
{
  QStandardItemModel* aModel = qobject_cast<QStandardItemModel*>(cmbAbsenceLayer->model());
  for (int i = 0; i < aModel->rowCount(); ++i)
  {
    QStandardItem* aItem = aModel->item(i);
    aItem->setEnabled(true);

    for (int j = 0; j < mPresenceLayers.count(); ++j)
    {
      if (aItem->text() == mPresenceLayers[j])
        aItem->setEnabled(false);
    }
  }

  QStandardItemModel* pModel = qobject_cast<QStandardItemModel*>(cmbPresenceLayer->model());
  for (int i = 0; i < pModel->rowCount(); ++i)
  {
    QStandardItem* pItem = pModel->item(i);
    pItem->setEnabled(true);

    for (int j = 0; j < mAbsenceLayers.count(); ++j)
    {
      if (pItem->text() == mAbsenceLayers[j])
        pItem->setEnabled(false);
    }
  }
}
void ClassifierDialog::updateInputRasters()
{
  QList<QListWidgetItem *> selection = rastersList->selectedItems();

  mInputRasters.clear();

  for ( int i = 0; i < selection.size(); ++i )
  {
    // write file path instead of layer name ?
    mInputRasters.append( selection.at( i )->text() );
  }
}

void ClassifierDialog::enableOrDisableOkButton()
{
  bool enabled = true;

  if ( mOutputFileName.isEmpty() )
  {
    enabled = false;
  }

  buttonBox->button( QDialogButtonBox::Ok )->setEnabled( enabled );
}

void ClassifierDialog::updateStepProgress()
{
  stepProgress->setValue( stepProgress->value() + 1 );
  QApplication::processEvents();
}

void ClassifierDialog::setPresenceLayersValidationError(const QString& msg)
{
	cmbPresenceLayer->setEditable(true);
	cmbPresenceLayer->lineEdit()->setEnabled(false);
	cmbPresenceLayer->lineEdit()->setStyleSheet("background-color: rgba(255, 0, 0, 50);");
	presence_msg->setText(msg);
}

void ClassifierDialog::clearPresenceLayersValidationError()
{
	if (cmbPresenceLayer->lineEdit())
	{
	  cmbPresenceLayer->lineEdit()->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
		cmbPresenceLayer->setEditable(false);
	}
	presence_msg->setText("");
}

void ClassifierDialog::setAbsenceLayersValidationError(const QString& msg)
{
	cmbAbsenceLayer->setEditable(true);
	cmbAbsenceLayer->lineEdit()->setEnabled(false);
	cmbAbsenceLayer->lineEdit()->setStyleSheet("background-color: rgba(255, 0, 0, 50);");
	absence_msg->setText(msg);
}

void ClassifierDialog::clearAbsenceLayersValidationError()
{
	if (cmbAbsenceLayer->lineEdit())
	{
		cmbAbsenceLayer->lineEdit()->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
		cmbAbsenceLayer->setEditable(false);
	}
	absence_msg->setText("");
}
