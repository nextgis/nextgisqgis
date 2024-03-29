/***************************************************************************
    QgsHTMLAnnotationDialog.cpp
    ---------------------
    begin                : March 2010
    copyright            : (C) 2010 by Marco Hugentobler
    email                : marco dot hugentobler at sourcepole dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include "qgshtmlannotationdialog.h"
#include "qgsannotationwidget.h"
#include "qgsvectorlayer.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QGraphicsScene>

QgsHtmlAnnotationDialog::QgsHtmlAnnotationDialog( QgsHtmlAnnotationItem* item, QWidget * parent, Qt::WindowFlags f )
    : QDialog( parent, f )
    , mItem( item )
    , mEmbeddedWidget( nullptr )
{
  setupUi( this );
  setWindowTitle( tr( "HTML annotation" ) );
  mEmbeddedWidget = new QgsAnnotationWidget( mItem );
  mStackedWidget->addWidget( mEmbeddedWidget );
  mStackedWidget->setCurrentWidget( mEmbeddedWidget );

  if ( item )
  {
    mFileLineEdit->setText( item->htmlPage() );
  }

  QObject::connect( mButtonBox, SIGNAL( accepted() ), this, SLOT( applySettingsToItem() ) );
  QPushButton* deleteButton = new QPushButton( tr( "Delete" ) );
  QObject::connect( deleteButton, SIGNAL( clicked() ), this, SLOT( deleteItem() ) );
  mButtonBox->addButton( deleteButton, QDialogButtonBox::RejectRole );
}

QgsHtmlAnnotationDialog::~QgsHtmlAnnotationDialog()
{

}

void QgsHtmlAnnotationDialog::applySettingsToItem()
{
  //apply settings from embedded item widget
  if ( mEmbeddedWidget )
  {
    mEmbeddedWidget->apply();
  }

  if ( mItem )
  {
    mItem->setHTMLPage( mFileLineEdit->text() );
    QgsVectorLayer* layer = mItem->vectorLayer();
    if ( layer )
    {
      //set last used annotation form as default for the layer
      //layer->setAnnotationForm( mFileLineEdit->text() );
    }
    mItem->update();
  }
}

void QgsHtmlAnnotationDialog::on_mBrowseToolButton_clicked()
{
  QString directory;
  QFileInfo fi( mFileLineEdit->text() );
  if ( fi.exists() )
  {
    directory = fi.absolutePath();
  }
  else
  {
    directory = QDir::homePath();
  }
  QString filename = QFileDialog::getOpenFileName( nullptr, tr( "html" ), directory, "HTML (*.html *.htm);;All files (*.*)" );
  mFileLineEdit->setText( filename );
}

void QgsHtmlAnnotationDialog::deleteItem()
{
  QGraphicsScene* scene = mItem->scene();
  if ( scene )
  {
    scene->removeItem( mItem );
  }
  delete mItem;
  mItem = nullptr;
}

void QgsHtmlAnnotationDialog::on_mButtonBox_clicked( QAbstractButton* button )
{
  if ( mButtonBox->buttonRole( button ) == QDialogButtonBox::ApplyRole )
  {
    applySettingsToItem();
  }
}

