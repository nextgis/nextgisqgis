/***************************************************************************
  classifierutils.h
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

#ifndef CLASSIFIERUTILS_H
#define CLASSIFIERUTILS_H

class QgsRasterLayer;
class QgsVectorLayer;

//! recursively remove directory. Returns false when direcory removed without errors
bool removeDirectory( const QString& path );

//! remove *.tif files from directory
bool removeTempFiles( const QString& path );

//! get vector layer by it's name
QgsVectorLayer* vectorLayerByName( const QString& name );

//! get raster layer by it's name
QgsRasterLayer* rasterLayerByName( const QString& name );

#endif // CLASSIFIERUTILS_H
