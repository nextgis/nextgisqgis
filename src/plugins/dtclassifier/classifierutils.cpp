/***************************************************************************
  classifierutils.cpp
  Raster classification using decision tree
  -------------------
  begin                : Apr 27, 2011
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

#include <QDir>
#include <QFile>
#include <QFileInfo>

#include "qgsmaplayerregistry.h"
#include "qgsrasterlayer.h"
#include "qgsvectorlayer.h"

#include "classifierutils.h"

bool removeDirectory( const QString& path )
{
  bool hasError = false;
  QDir myDir( path );
  if ( myDir.exists() )
  {
    QFileInfoList entries = myDir.entryInfoList( QDir::NoDotAndDotDot | QDir::Dirs | QDir::Files );
    int count = entries.size();
    for ( int i = 0; ( ( i < count ) && ( !hasError ) ); i++ )
    {
      QFileInfo entryInfo = entries[ i ];
      QString path = entryInfo.absoluteFilePath();
      if ( entryInfo.isDir() )
      {
        hasError = removeDirectory( path );
      }
      else
      {
        QFile file( path );
        if ( !file.remove() )
        {
          hasError = true;
        }
      }
    }
    if ( !myDir.rmdir( myDir.absolutePath() ) )
    {
      hasError = true;
    }
  }
  return hasError;
}

bool removeTempFiles( const QString& path )
{
  bool hasError = false;
  QDir myDir( path );

  myDir.setFilter( QDir::Files | QDir::NoSymLinks | QDir::NoDotAndDotDot );
  QStringList nameFilter( "*.tif" );
  myDir.setNameFilters( nameFilter );
  QStringList files = myDir.entryList();

  for ( int i = 0; i < files.size(); ++i )
  {
    QFile file( path + "/" + files.at( i ) );
    if ( !file.remove() )
    {
      hasError = true;
    }
  }

  return hasError;
}

QgsVectorLayer* vectorLayerByName( const QString& name )
{
  QMap<QString, QgsMapLayer*> mapLayers = QgsMapLayerRegistry::instance()->mapLayers();
  QMap<QString, QgsMapLayer*>::iterator layer_it = mapLayers.begin();

  for ( ; layer_it != mapLayers.end(); ++layer_it )
  {
    if ( layer_it.value()->type() == QgsMapLayer::VectorLayer && layer_it.value()->name() == name )
    {
      return qobject_cast<QgsVectorLayer*>( layer_it.value() );
    }
  }

  return 0;
}

QgsRasterLayer* rasterLayerByName( const QString& name )
{
  QMap<QString, QgsMapLayer*> mapLayers = QgsMapLayerRegistry::instance()->mapLayers();
  QMap<QString, QgsMapLayer*>::iterator layer_it = mapLayers.begin();

  QgsRasterLayer* layer;

  for ( ; layer_it != mapLayers.end(); ++layer_it )
  {
    if ( layer_it.value()->type() == QgsMapLayer::RasterLayer )
    {
      layer = qobject_cast<QgsRasterLayer*> ( layer_it.value() );
      //if ( layer->usesProvider() && layer->providerKey() != "gdal" )
      if ( layer->providerType() != "gdal" )
      {
        continue;
      }
      if ( layer->name() == name )
      {
        return layer;
      }
    }
  }

  return 0;
}

/*
QStringList* ClassifierDialog::getVectorLayerNames()
{
  QStringList* layers = new QStringList();

  QMap<QString, QgsMapLayer*> mapLayers = QgsMapLayerRegistry::instance()->mapLayers();
  QMap<QString, QgsMapLayer*>::iterator layer_it = mapLayers.begin();

  for ( ; layer_it != mapLayers.end(); ++layer_it )
  {
    if ( layer_it.value()->type() == QgsMapLayer::VectorLayer )
    {
      layers->append( layer_it.value()->name() );
    }
  }

  return layers;
}

QStringList* ClassifierDialog::getRasterLayerNames()
{
  QStringList* layers = new QStringList();

  QMap<QString, QgsMapLayer*> mapLayers = QgsMapLayerRegistry::instance()->mapLayers();
  QMap<QString, QgsMapLayer*>::iterator layer_it = mapLayers.begin();

  for ( ; layer_it != mapLayers.end(); ++layer_it )
  {
    if ( layer_it.value()->type() == QgsMapLayer::RasterLayer )
    {
      if ( layer_it.value()->usesProvider() && layer_it.value()->providerKey() != "gdal" )
      {
        continue;
      }
      layers->append( layer_it.value()->name() );
    }
  }

  return layers;
}
*/
