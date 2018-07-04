/***************************************************************************
  layerselector.cpp
  Raster classification using decision tree
  -------------------
  begin                : Jun 14, 2011
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

#include "qgsmaplayer.h"
#include "qgsvectorlayer.h"
#include "qgsmaplayerregistry.h"

#include "layerselectordialog.h"

LayerSelectorDialog::LayerSelectorDialog( QWidget *parent )
    : QDialog( parent )
{
  setupUi( this );

  // additional buttons
  //~ QPushButton *pb;
  //~ pb = new QPushButton( tr( "Select all" ) );
  //~ buttonBox->addButton( pb, QDialogButtonBox::ActionRole );
  //~ connect( pb, SIGNAL( clicked() ), this, SLOT( selectAll() ) );
//~
  //~ pb = new QPushButton( tr( "Clear selection" ) );
  //~ buttonBox->addButton( pb, QDialogButtonBox::ActionRole );
  //~ connect( pb, SIGNAL( clicked() ), this, SLOT( clearSelection() ) );

  connect( treeLayers, SIGNAL( itemSelectionChanged() ), this, SLOT( updateSelectedLayers() ) );

  populateLayers();
}

LayerSelectorDialog::LayerSelectorDialog( QWidget *parent, QStringList *layers )
    : QDialog( parent )
    , mUnavailableLayers( layers )
{
  setupUi( this );

  // additional buttons
  //~ QPushButton *pb;
  //~ pb = new QPushButton( tr( "Select all" ) );
  //~ buttonBox->addButton( pb, QDialogButtonBox::ActionRole );
  //~ connect( pb, SIGNAL( clicked() ), this, SLOT( selectAll() ) );
//~
  //~ pb = new QPushButton( tr( "Clear selection" ) );
  //~ buttonBox->addButton( pb, QDialogButtonBox::ActionRole );
  //~ connect( pb, SIGNAL( clicked() ), this, SLOT( clearSelection() ) );

  connect( treeLayers, SIGNAL( itemSelectionChanged() ), this, SLOT( updateSelectedLayers() ) );

  populateLayers();
}

LayerSelectorDialog::~LayerSelectorDialog()
{
}

void LayerSelectorDialog::setLayerList( QStringList *layers )
{
  mLayers = layers;
}

void LayerSelectorDialog::on_buttonBox_accepted()
{
  accept();
}

void LayerSelectorDialog::on_buttonBox_rejected()
{
  reject();
}

void LayerSelectorDialog::populateLayers()
{
  QgsVectorLayer* layer;
  QMap<QString, QgsMapLayer*> mapLayers = QgsMapLayerRegistry::instance()->mapLayers();
  QMap<QString, QgsMapLayer*>::iterator layer_it = mapLayers.begin();

  for ( ; layer_it != mapLayers.end(); ++layer_it )
  {
    if ( layer_it.value()->type() == QgsMapLayer::VectorLayer )
    {
      layer = qobject_cast<QgsVectorLayer *> ( layer_it.value() );
      QTreeWidgetItem *item = new QTreeWidgetItem( treeLayers );
      item->setText( 0, layer_it.value()->name() );
      switch ( layer->wkbType() )
      {
        // polygon
        case QGis::WKBPolygon:
        case QGis::WKBPolygon25D:
        {
          item->setText( 1, "Polygon" );
          break;
        }
        // point
        case QGis::WKBPoint:
        case QGis::WKBPoint25D:
        {
          item->setText( 1, "Point" );
          break;
        }
        // line
        case QGis::WKBLineString:
        case QGis::WKBLineString25D:
        {
          item->setText( 1, "Line" );
          break;
        }
        default:
          break;
      } // switch

	  for( int i = 0; i < mUnavailableLayers->count(); ++i)
	  {
		if (mUnavailableLayers->at(i) == item->text(0))
		{
			item->setFlags(Qt::NoItemFlags);
		}
	  }

    }
  }
}

void LayerSelectorDialog::updateSelectedLayers()
{
  QList<QTreeWidgetItem *> selection = treeLayers->selectedItems();

  mLayers->clear();

  for ( int i = 0; i < selection.size(); ++i )
  {
    // write file path instead of layer name ?
    mLayers->append( selection.at( i )->text( 0 ) );
  }
}

//~ void LayerSelectorDialog::selectAll()
//~ {
  //~ layersList->selectAll();
//~ }
//~
//~ void LayerSelectorDialog::clearSelection()
//~ {
  //~ layersList->clearSelection();
//~ }
