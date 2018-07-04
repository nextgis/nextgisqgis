/***************************************************************************
  rasterfileinfo.cpp
  Raster classification using decision tree
  -------------------
  begin                : Apr 20, 2011
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

#include <cmath>

#include "gdal.h"
#include "gdal_priv.h"
#include "cpl_conv.h"

#include <QString>

#include "rasterfileinfo.h"

RasterFileInfo::RasterFileInfo()
{
}

RasterFileInfo::RasterFileInfo( const QString& fileName )
{
  GDALDataset *raster;
  raster = (GDALDataset*) GDALOpen( fileName.toUtf8(), GA_ReadOnly );

  mXSize = raster->GetRasterXSize();
  mYSize = raster->GetRasterYSize();
  mBandCount = raster->GetRasterCount();
  raster->GetGeoTransform( mGeoTransform );
  mProjection = QString( raster->GetProjectionRef() );

  // assume that pixels has same dimensions in both directions
  mPixelSize = mGeoTransform[ 1 ]; // and 5

  GDALClose( (GDALDatasetH)raster );

  // calculate invert geotransform
  invertGeoTransform();
}

RasterFileInfo::~RasterFileInfo()
{
}

void RasterFileInfo::initFromFileName( const QString& fileName )
{
  GDALDataset *raster;
  raster = (GDALDataset*) GDALOpen( fileName.toUtf8(), GA_ReadOnly );

  mXSize = raster->GetRasterXSize();
  mYSize = raster->GetRasterYSize();
  mBandCount = raster->GetRasterCount();
  raster->GetGeoTransform( mGeoTransform );
  mProjection = QString( raster->GetProjectionRef() );

  // assume that pixels has same dimensions in both directions
  mPixelSize = mGeoTransform[ 1 ]; // and 5

  GDALClose( (GDALDatasetH)raster );

  // calculate invert geotransform
  invertGeoTransform();
}

void RasterFileInfo::geoTransform( double* geoTransform )
{
  for ( int i = 0; i < 6; i++ )
  {
    geoTransform[ i ] = mGeoTransform[ i ];
  }
}

void RasterFileInfo::invGeoTransform( double* geoTransform )
{
  for ( int i = 0; i < 6; i++ )
  {
    geoTransform[ i ] = mInvGeoTransform[ i ];
  }
}

void RasterFileInfo::mapToPixel( double mapX, double mapY, double& pixX, double& pixY )
{
  double x, y;

  if ( mGeoTransform[ 2 ] + mGeoTransform[ 4 ] == 0 )
  {
    x = ( mapX - mGeoTransform[ 0 ] ) / mGeoTransform[ 1 ];
    y = ( mapY - mGeoTransform[ 3 ] ) / mGeoTransform[ 5 ];
  }
  else
  {
    applyGeoTransform( mapX, mapY, true, x, y );
  }
  pixX = floor( x + 0.5 );
  pixY = floor( y + 0.5 );
}

void RasterFileInfo::pixelToMap( double pixX, double pixY, double& mapX, double& mapY )
{
  applyGeoTransform( pixX, pixY, false, mapX, mapY );
}

void RasterFileInfo::applyGeoTransform( double inX, double inY, bool invert, double& outX, double& outY )
{
  if ( invert )
  {
    outX = mInvGeoTransform[ 0 ] + inX * mInvGeoTransform[ 1 ] + inY * mInvGeoTransform[ 2 ];
    outY = mInvGeoTransform[ 3 ] + inX * mInvGeoTransform[ 4 ] + inY * mInvGeoTransform[ 5 ];
  }
  else
  {
    outX = mGeoTransform[ 0 ] + inX * mGeoTransform[ 1 ] + inY * mGeoTransform[ 2 ];
    outY = mGeoTransform[ 3 ] + inX * mGeoTransform[ 4 ] + inY * mGeoTransform[ 5 ];
  }
}

void RasterFileInfo::invertGeoTransform()
{
  double det = mGeoTransform[ 1 ] * mGeoTransform[ 5 ] - mGeoTransform[ 2 ] * mGeoTransform[ 4 ];

  if ( fabs( det ) < 0.000000000000001 )
  {
    return;
  }

  double invDet = 1.0 / det;

  mInvGeoTransform[ 1 ] = mGeoTransform[ 5 ] * invDet;
  mInvGeoTransform[ 4 ] = -mGeoTransform[ 4 ] * invDet;

  mInvGeoTransform[ 2 ] = -mGeoTransform[ 2 ] * invDet;
  mInvGeoTransform[ 5 ] = mGeoTransform[ 1 ] * invDet;

  mInvGeoTransform[ 0 ] = ( mGeoTransform[ 2 ] * mGeoTransform[ 3 ] - mGeoTransform[ 0 ] * mGeoTransform[ 5 ] ) * invDet;
  mInvGeoTransform[ 3 ] = ( -mGeoTransform[ 1 ] * mGeoTransform[ 3 ] + mGeoTransform[ 0 ] * mGeoTransform[ 4 ] ) * invDet;
}

int RasterFileInfo::bandCount()
{
  return mBandCount;
}

double RasterFileInfo::xSize()
{
  return mXSize;
}

double RasterFileInfo::ySize()
{
  return mYSize;
}

double RasterFileInfo::pixelSize()
{
  return mPixelSize;
}

QString RasterFileInfo::projection()
{
  return mProjection;
}
