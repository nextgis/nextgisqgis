/***************************************************************************
    qgsmaptoolcircularstringcurvepoint.cpp
    ---------------------
    begin                : August 2015
    copyright            : (C) 2015 by Marco Hugentobler
    email                : marco dot hugentobler at sourcepole dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include "qgsmaptoolcircularstringcurvepoint.h"
#include "qgscircularstring.h"
#include "qgscompoundcurve.h"
#include "qgsgeometryrubberband.h"
#include "qgsmapcanvas.h"
#include "qgspoint.h"
#include "qgsmapmouseevent.h"
#include "qgssnapindicator.h"


QgsMapToolCircularStringCurvePoint::QgsMapToolCircularStringCurvePoint( QgsMapToolCapture *parentTool,
    QgsMapCanvas *canvas, CaptureMode mode )
  : QgsMapToolAddCircularString( parentTool, canvas, mode )
{
  mToolName = tr( "Add circular string curve point" );
}

void QgsMapToolCircularStringCurvePoint::cadCanvasReleaseEvent( QgsMapMouseEvent *e )
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
    mPoints.append( point );
    if ( !mCenterPointRubberBand && mShowCenterPointRubberBand )
    {
      createCenterPointRubberBand();
    }

    if ( !mPoints.isEmpty() )
    {
      if ( !mTempRubberBand )
      {
        mTempRubberBand = createGeometryRubberBand( mLayerType, true );
        mTempRubberBand->show();
      }

      QgsCircularString *c = new QgsCircularString();
      QgsPointSequence rubberBandPoints = mPoints.mid( mPoints.size() - 1 - ( mPoints.size() + 1 ) % 2 );
      rubberBandPoints.append( point );
      c->setPoints( rubberBandPoints );
      mTempRubberBand->setGeometry( c );
    }
    if ( mPoints.size() > 1 && mPoints.size() % 2 )
    {
      if ( !mRubberBand )
      {
        mRubberBand = createGeometryRubberBand( mLayerType );
        mRubberBand->show();
      }

      QgsCircularString *c = new QgsCircularString();
      QgsPointSequence rubberBandPoints = mPoints;
      rubberBandPoints.append( point );
      c->setPoints( rubberBandPoints );
      mRubberBand->setGeometry( c );
      removeCenterPointRubberBand();
    }
  }
  else if ( e->button() == Qt::RightButton )
  {
    release( e );
  }
}

void QgsMapToolCircularStringCurvePoint::cadCanvasMoveEvent( QgsMapMouseEvent *e )
{
  const QgsPoint mapPoint( e->mapPoint() );

  mSnapIndicator->setMatch( e->mapPointMatch() );

  if ( mTempRubberBand )
  {
    QgsPointSequence mTempPoints = mPoints.mid( mPoints.size() - 1 - ( mPoints.size() + 1 ) % 2 );
    mTempPoints.append( mapPoint );
    std::unique_ptr<QgsCircularString> geom( new QgsCircularString() );
    geom->setPoints( mTempPoints );
    mTempRubberBand->setGeometry( geom.release() );

    updateCenterPointRubberBand( mapPoint );
  }
}
