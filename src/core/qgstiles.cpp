/***************************************************************************
  qgstiles.cpp
  --------------------------------------
  Date                 : March 2020
  Copyright            : (C) 2020 by Martin Dobias
  Email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgstiles.h"

#include "qgslogger.h"
#include "qgscoordinatereferencesystem.h"
#include "qgssettings.h"

QgsTileMatrix QgsTileMatrix::fromWebMercator( int zoomLevel )
{
  double z0xMin = -20037508.3427892, z0yMax =  20037508.3427892;

  return fromCustomDef( zoomLevel, QgsCoordinateReferenceSystem( "EPSG:3857" ), QgsPointXY( z0xMin, z0yMax ), 2 * z0yMax );
}

QgsTileMatrix QgsTileMatrix::fromCustomDef( int zoomLevel, const QgsCoordinateReferenceSystem &crs,
    const QgsPointXY &z0TopLeftPoint, double z0Dimension, int z0MatrixWidth, int z0MatrixHeight )
{
  // Square extent calculation
  double z0xMin = z0TopLeftPoint.x();
  double z0yMax = z0TopLeftPoint.y();
  double z0xMax = z0xMin + z0MatrixWidth * z0Dimension;
  double z0yMin = z0yMax - z0MatrixHeight * z0Dimension;

  // Constant for scale denominator calculation
  const double tileSize = 256.0;
  const double PIXELS_TO_M = 2.8 / 10000.0;  // WMS/WMTS define "standardized rendering pixel size" as 0.28mm
  const double UNIT_TO_M = QgsUnitTypes::fromUnitToUnitFactor( crs.mapUnits(), QgsUnitTypes::DistanceMeters );
  // Scale denominator calculation
  double scaleDenom0 = ( z0Dimension / tileSize ) * ( UNIT_TO_M / PIXELS_TO_M );

  int numTiles = static_cast<int>( pow( 2, zoomLevel ) ); // assuming we won't ever go over 30 zoom levels

  QgsTileMatrix tm;
  tm.mCrs = crs;
  tm.mZoomLevel = zoomLevel;
  tm.mMatrixWidth = z0MatrixWidth * numTiles;
  tm.mMatrixHeight = z0MatrixHeight * numTiles;
  tm.mTileXSpan = ( z0xMax - z0xMin ) / tm.mMatrixWidth;
  tm.mTileYSpan = ( z0yMax - z0yMin ) / tm.mMatrixHeight;
  tm.mExtent = QgsRectangle( z0xMin, z0yMin, z0xMax, z0yMax );
  tm.mScaleDenom = scaleDenom0 / pow( 2, zoomLevel );
  return tm;
}


QgsTileMatrix QgsTileMatrix::fromTileMatrix( const int &zoomLevel, const QgsTileMatrix &tileMatrix )
{
  QgsTileMatrix tm;
  int numTiles = static_cast<int>( pow( 2, zoomLevel ) ); // assuming we won't ever go over 30 zoom levels
  int aZoomLevel = tileMatrix.zoomLevel();
  int aNumTiles = static_cast<int>( pow( 2, aZoomLevel ) );
  int aMatrixWidth = tileMatrix.matrixWidth();
  int aMatrixHeight = tileMatrix.matrixHeight();
  QgsRectangle aExtent = tileMatrix.extent();
  tm.mCrs = tileMatrix.crs();
  tm.mZoomLevel = zoomLevel;
  tm.mMatrixWidth = aMatrixWidth * numTiles / aNumTiles;
  tm.mMatrixHeight = aMatrixHeight * numTiles / aNumTiles;
  tm.mTileXSpan = aExtent.width() / tm.mMatrixWidth;
  tm.mTileYSpan = aExtent.height() / tm.mMatrixHeight;
  tm.mExtent = aExtent;
  tm.mScaleDenom = tileMatrix.scale() * pow( 2, aZoomLevel )  / pow( 2, zoomLevel );
  return tm;
}

QgsRectangle QgsTileMatrix::tileExtent( QgsTileXYZ id ) const
{
  double xMin = mExtent.xMinimum() + mTileXSpan * id.column();
  double xMax = xMin + mTileXSpan;
  double yMax = mExtent.yMaximum() - mTileYSpan * id.row();
  double yMin = yMax - mTileYSpan;
  return QgsRectangle( xMin, yMin, xMax, yMax );
}

QgsPointXY QgsTileMatrix::tileCenter( QgsTileXYZ id ) const
{
  double x = mExtent.xMinimum() + mTileXSpan * id.column() + mTileXSpan / 2;
  double y = mExtent.yMaximum() - mTileYSpan * id.row() - mTileYSpan / 2;
  return QgsPointXY( x, y );
}

QgsTileRange QgsTileMatrix::tileRangeFromExtent( const QgsRectangle &r ) const
{
  double x0 = std::clamp( r.xMinimum(), mExtent.xMinimum(), mExtent.xMaximum() );
  double y0 = std::clamp( r.yMinimum(), mExtent.yMinimum(), mExtent.yMaximum() );
  double x1 = std::clamp( r.xMaximum(), mExtent.xMinimum(), mExtent.xMaximum() );
  double y1 = std::clamp( r.yMaximum(), mExtent.yMinimum(), mExtent.yMaximum() );
  if ( x0 >= x1 || y0 >= y1 )
    return QgsTileRange();   // nothing to display

  double tileX1 = ( x0 - mExtent.xMinimum() ) / mTileXSpan;
  double tileX2 = ( x1 - mExtent.xMinimum() ) / mTileXSpan;
  double tileY1 = ( mExtent.yMaximum() - y1 ) / mTileYSpan;
  double tileY2 = ( mExtent.yMaximum() - y0 ) / mTileYSpan;

  QgsDebugMsgLevel( QStringLiteral( "Tile range of edges [%1,%2] - [%3,%4]" ).arg( tileX1 ).arg( tileY1 ).arg( tileX2 ).arg( tileY2 ), 2 );

  // figure out tile range from zoom
  int startColumn = std::clamp( static_cast<int>( floor( tileX1 ) ), 0, mMatrixWidth - 1 );
  int endColumn = std::clamp( static_cast<int>( floor( tileX2 ) ), 0, mMatrixWidth - 1 );
  int startRow = std::clamp( static_cast<int>( floor( tileY1 ) ), 0, mMatrixHeight - 1 );
  int endRow = std::clamp( static_cast<int>( floor( tileY2 ) ), 0, mMatrixHeight - 1 );
  return QgsTileRange( startColumn, endColumn, startRow, endRow );
}

QPointF QgsTileMatrix::mapToTileCoordinates( const QgsPointXY &mapPoint ) const
{
  double dx = mapPoint.x() - mExtent.xMinimum();
  double dy = mExtent.yMaximum() - mapPoint.y();
  return QPointF( dx / mTileXSpan, dy / mTileYSpan );
}
