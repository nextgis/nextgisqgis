/***************************************************************************
    qgsmaptoolrectangleextent.cpp  -  map tool for adding rectangle
    from extent
    ---------------------
    begin                : July 2017
    copyright            : (C) 2017 by Loïc Bartoletti
    email                : lbartoletti at tuxfamily dot org
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsmaptoolrectangleextent.h"
#include "qgsgeometryrubberband.h"
#include "qgsgeometryutils.h"
#include "qgsmapcanvas.h"
#include "qgslinestring.h"
#include "qgspoint.h"
#include "qgsmapmouseevent.h"
#include "qgssnapindicator.h"
#include <memory>

QgsMapToolRectangleExtent::QgsMapToolRectangleExtent( QgsMapToolCapture *parentTool,
    QgsMapCanvas *canvas, CaptureMode mode )
  : QgsMapToolAddRectangle( parentTool, canvas, mode )
{
  mToolName = tr( "Add rectangle from extent" );
}

void QgsMapToolRectangleExtent::cadCanvasReleaseEvent( QgsMapMouseEvent *e )
{
  const QgsPoint point = mapPoint( *e );

  if ( !currentVectorLayer() )
  {
    notifyNotVectorLayer();
    clean();
    stopCapturing();
    e->ignore();
    return;
  }

  if ( e->button() == Qt::LeftButton )
  {
    if ( mPoints.empty() )
      mPoints.append( point );

    if ( !mTempRubberBand )
    {
      mTempRubberBand = createGeometryRubberBand( mLayerType, true );
      mTempRubberBand->show();
    }
  }
  else if ( e->button() == Qt::RightButton )
  {
    mPoints.append( point );

    release( e );
  }
}

void QgsMapToolRectangleExtent::cadCanvasMoveEvent( QgsMapMouseEvent *e )
{
  const QgsPoint point = mapPoint( *e );

  mSnapIndicator->setMatch( e->mapPointMatch() );

  if ( mTempRubberBand )
  {
    switch ( mPoints.size() )
    {
      case 1:
      {
        const double dist = mPoints.at( 0 ).distance( point );
        const double angle = mPoints.at( 0 ).azimuth( point );

        mRectangle = QgsQuadrilateral::rectangleFromExtent( mPoints.at( 0 ), mPoints.at( 0 ).project( dist, angle ) );
        mTempRubberBand->setGeometry( mRectangle.toPolygon() );
      }
      break;
      default:
        break;
    }
  }
}
