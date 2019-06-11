/***************************************************************************
  classifier.cpp
  Raster classification using decision tree
  -------------------
  begin                : Mar 22, 2011
  copyright            : (C) 2011 by Alexander Bruy
  email                : alexander.bruy@gmail.com
  Copyright (C) 2011-2018, NextGIS <info@nextgis.com>
  Author: Dmitry Baryshnikov, <dmitry.baryshnikov@nextgis.com>

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <QAction>
#include <QMessageBox>
#include <QToolBar>

#include <qgisinterface.h>
#include <qgisgui.h>
#include <qgsmessagelog.h>

#include "classifier.h"
#include "classifierdialog.h"

#include "aboutdialog.h"

#include <framework/access/access.h>

static const QString _developers_name = "NextGIS";
static const QString _developers_site = QObject::tr("http://nextgis.ru/en/");

static const QString _home_page = "https://github.com/nextgis/dtclassifier";
static const QString _bagtracker_page = "https://github.com/nextgis/dtclassifier/issues";

static const QString _name = QObject::tr( "DTclassifier" );
static const QString _description = QObject::tr( "Raster classification using decision tree" );
static const QString _ext_description = QObject::tr( "This plugin allows to selected areas of interest (presence) and areas of no interest (absence) and then classifies raster data using collected training data to find more of areas of interest." );

static const QString _category = QObject::tr( "Raster" );
static const QString _version = QString( "0.5.0" ); // Update to OpenCV 3.x
static const QString _icon = ":/classifier/icons/classifier.svg"; //":/classifier/icons/classifier.png";
static const QString _icon_48x48 = ":/classifier/icons/classifier.svg"; //":/classifier/icons/classifier_48x48.png";


Classifier::Classifier( QgisInterface* iface ):
	QgisPlugin( _name, _description, _category, _version, QgisPlugin::UI ),
	mIface( iface ),
	mActionClassify( 0 ),
	mActionAbout( 0 )
{
}

Classifier::~Classifier()
{
}

void Classifier::initGui()
{
    QIcon dtclIcon(":/classifier/icons/classifier.svg");
    if(!NGAccess::instance().isFunctionAvailable("QGIS", "dtclassifier")) {
        dtclIcon = NGAccess::lockIcon(dtclIcon, QSize(48,48));
    }

  mActionClassify = new QAction( dtclIcon, tr( "DTclassifier" ), this );
  mActionClassify->setWhatsThis( tr( "Raster classification using decision tree" ) );
  connect( mActionClassify, SIGNAL( triggered() ), this, SLOT( showMainDialog() ) );

  mActionAbout = new QAction( QIcon( ":/classifier/icons/about.png" ), tr( "About" ), this );
  mActionAbout->setWhatsThis( tr( "About DTclassifier" ) );
  connect( mActionAbout, SIGNAL( triggered() ), this, SLOT( showAboutDialog() ) );

  // Add the icon to the toolbar
  mIface->addToolBarIcon( mActionClassify );
  mIface->addPluginToMenu( tr( "DTclassifier" ), mActionClassify );
  mIface->addPluginToMenu( tr( "DTclassifier" ), mActionAbout );

  connect(&NGAccess::instance(), SIGNAL( supportInfoUpdated() ),
            this, SLOT( onSupportInfoUpdated() ) );
}

void Classifier::onSupportInfoUpdated()
{
    QIcon dtclIcon(":/classifier/icons/classifier.svg");
    if(!NGAccess::instance().isFunctionAvailable("QGIS", "dtclassifier")) {
        dtclIcon = NGAccess::lockIcon(dtclIcon, QSize(48,48));
    }
    mActionClassify->setIcon(dtclIcon);
}

void Classifier::help()
{
    QMessageBox::information(nullptr, _name, _ext_description);
}

void Classifier::showMainDialog()
{
    // If unsupported show dialog to select plan
    if(NGAccess::instance().isFunctionAvailable("QGIS", "dtclassifier")) {
        ClassifierDialog dlg(nullptr);
        dlg.exec();
    }
    else {
        NGAccess::showUnsupportedMessage();
    }
}

void Classifier::showAboutDialog()
{
  AboutDialog dlg(
      nullptr,
      _name,
      _version,
      _description,
      _ext_description,
      _icon_48x48,
      _developers_name,
      _developers_site,
      _home_page,
      _bagtracker_page
  );

  dlg.exec();
}

void Classifier::unload()
{
  mIface->removePluginMenu( "DTclassifier", mActionClassify );
  mIface->removePluginMenu( "DTclassifier", mActionAbout );
  mIface->removeToolBarIcon( mActionClassify );
  delete mActionClassify;
  delete mActionAbout;
}

QGISEXTERN QgisPlugin* classFactory( QgisInterface * theQgisInterfacePointer )
{
  return new Classifier( theQgisInterfacePointer );
}

QGISEXTERN QString name()
{
  return _name;
}

QGISEXTERN QString description()
{
  return _description;
}

QGISEXTERN QString category()
{
  return _category;
}

QGISEXTERN QString version()
{
  return _version;
}

QGISEXTERN QString icon()
{
  return _icon;
}

QGISEXTERN int type()
{
  return QgisPlugin::UI;
}

QGISEXTERN void unload( QgisPlugin * thePluginPointer )
{
  delete thePluginPointer;
}
