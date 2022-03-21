/***************************************************************************
    qgsmaptooladdcircularstring.h  -  map tool for adding circular strings
    ---------------------
    begin                : December 2014
    copyright            : (C) 2014 by Marco Hugentobler
    email                : marco dot hugentobler at sourcepole dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsmaptooladdcircularstring.h"
#include "qgscircularstring.h"
#include "qgscompoundcurve.h"
#include "qgscurvepolygon.h"
#include "qgsgeometryrubberband.h"
#include "qgsgeometryutils.h"
#include "qgslinestring.h"
#include "qgsmapcanvas.h"
#include "qgspoint.h"
#include "qgisapp.h"
#include "qgssnapindicator.h"

QgsMapToolAddCircularString::QgsMapToolAddCircularString( QgsMapToolCapture *parentTool, QgsMapCanvas *canvas, CaptureMode mode )
  : QgsMapToolCapture( canvas, QgisApp::instance()->cadDockWidget(), mode )
  , mParentTool( parentTool )
  , mShowCenterPointRubberBand( false )
  , mSnapIndicator( std::make_unique< QgsSnapIndicator>( canvas ) )
{
  mToolName = tr( "Add circular string" );
  connect( QgisApp::instance(), &QgisApp::newProject, this, &QgsMapToolAddCircularString::stopCapturing );
  connect( QgisApp::instance(), &QgisApp::projectRead, this, &QgsMapToolAddCircularString::stopCapturing );
}

QgsMapToolAddCircularString::~QgsMapToolAddCircularString()
{
  delete mRubberBand;
  delete mTempRubberBand;
  removeCenterPointRubberBand();
}

void QgsMapToolAddCircularString::keyPressEvent( QKeyEvent *e )
{
  if ( e && e->isAutoRepeat() )
  {
    return;
  }

  if ( e && e->key() == Qt::Key_R )
  {
    mShowCenterPointRubberBand = true;
    createCenterPointRubberBand();
  }

  if ( ( e && e->key() == Qt::Key_Escape ) || ( ( e && e->key() == Qt::Key_Backspace ) && ( mPoints.size() == 1 ) ) )
  {
    clean();
    if ( mParentTool )
      mParentTool->keyPressEvent( e );
  }
  if ( ( e && e->key() == Qt::Key_Backspace ) && ( mPoints.size() > 1 ) )
  {
    mPoints.removeLast();
    std::unique_ptr<QgsCircularString> geomRubberBand( new QgsCircularString() );
    std::unique_ptr<QgsLineString> geomTempRubberBand( new QgsLineString() );
    const int lastPositionCompleteCircularString = mPoints.size() - 1 - ( mPoints.size() + 1 ) % 2 ;

    geomTempRubberBand->setPoints( mPoints.mid( lastPositionCompleteCircularString ) );
    mTempRubberBand->setGeometry( geomTempRubberBand.release() );

    if ( mRubberBand )
    {
      geomRubberBand->setPoints( mPoints.mid( 0, lastPositionCompleteCircularString + 1 ) );
      mRubberBand->setGeometry( geomRubberBand.release() );
    }

    const QgsVertexId idx( 0, 0, ( mPoints.size() + 1 ) % 2 );
    if ( mTempRubberBand )
    {
      mTempRubberBand->moveVertex( idx, mPoints.last() );
      updateCenterPointRubberBand( mPoints.last() );
    }

    if ( mParentTool )
      mParentTool->keyPressEvent( e );

  }
}

void QgsMapToolAddCircularString::keyReleaseEvent( QKeyEvent *e )
{
  if ( e && e->isAutoRepeat() )
  {
    return;
  }

  if ( e && e->key() == Qt::Key_R )
  {
    removeCenterPointRubberBand();
    mShowCenterPointRubberBand = false;
  }
}

void QgsMapToolAddCircularString::deactivate()
{
  if ( !mParentTool || mPoints.size() < 3 )
  {
    return;
  }

  if ( mPoints.size() % 2 == 0 ) //a valid circularstring needs to have an odd number of vertices
  {
    mPoints.removeLast();
  }

  QgsCircularString *c = new QgsCircularString();
  c->setPoints( mPoints );
  mParentTool->addCurve( c );
  clean();
  QgsMapToolCapture::deactivate();
}

void QgsMapToolAddCircularString::activate()
{

  QgsVectorLayer *vLayer = static_cast<QgsVectorLayer *>( QgisApp::instance()->activeLayer() );
  if ( vLayer )
    mLayerType = vLayer->geometryType();
  if ( mParentTool )
  {
    mParentTool->deleteTempRubberBand();
    if ( mPoints.isEmpty() )
    {
      // if the parent tool has a curve, use its last point as the first point in this curve
      const QgsCompoundCurve *compoundCurve = mParentTool->captureCurve();
      if ( compoundCurve && compoundCurve->nCurves() > 0 )
      {
        const QgsCurve *curve = compoundCurve->curveAt( compoundCurve->nCurves() - 1 );
        if ( curve )
        {
          //mParentTool->captureCurve() is in layer coordinates, but we need map coordinates
          const QgsPoint endPointLayerCoord = curve->endPoint();
          const QgsPoint mapPoint = toMapCoordinates( mCanvas->currentLayer(),  endPointLayerCoord );
          mPoints.append( mapPoint );
          if ( !mTempRubberBand )
          {
            mTempRubberBand = createGeometryRubberBand( mLayerType, true );
            mTempRubberBand->show();
          }
          QgsCircularString *c = new QgsCircularString();
          QgsPointSequence rubberBandPoints = mPoints;
          rubberBandPoints.append( QgsPoint( mapPoint ) );
          c->setPoints( rubberBandPoints );
          mTempRubberBand->setGeometry( c );
        }
      }
    }
  }
  QgsMapToolCapture::activate();
}

void QgsMapToolAddCircularString::createCenterPointRubberBand()
{
  if ( !mShowCenterPointRubberBand || mPoints.size() < 2 || mPoints.size() % 2 != 0 )
  {
    return;
  }

  mCenterPointRubberBand = createGeometryRubberBand( QgsWkbTypes::PolygonGeometry );
  mCenterPointRubberBand->show();

  if ( mTempRubberBand )
  {
    const QgsAbstractGeometry *rubberBandGeom = mTempRubberBand->geometry();
    if ( rubberBandGeom )
    {
      const QgsVertexId idx( 0, 0, 2 );
      const QgsPoint pt = rubberBandGeom->vertexAt( idx );
      updateCenterPointRubberBand( pt );
    }
  }
}

void QgsMapToolAddCircularString::updateCenterPointRubberBand( const QgsPoint &pt )
{
  if ( !mShowCenterPointRubberBand || !mCenterPointRubberBand || mPoints.size() < 2 )
  {
    return;
  }

  if ( ( mPoints.size() ) % 2 != 0 )
  {
    return;
  }

  //create circular string
  QgsCircularString *cs = new QgsCircularString();
  QgsPointSequence csPoints;
  csPoints.append( mPoints.at( mPoints.size() - 2 ) );
  csPoints.append( mPoints.at( mPoints.size() - 1 ) );
  csPoints.append( pt );
  cs->setPoints( csPoints );

  QgsPoint center;
  double radius;
  QgsGeometryUtils::circleCenterRadius( csPoints.at( 0 ), csPoints.at( 1 ), csPoints.at( 2 ), radius, center.rx(), center.ry() );

  QgsLineString *segment1 = new QgsLineString();
  segment1->addVertex( center );
  segment1->addVertex( csPoints.at( 0 ) );

  QgsLineString *segment2 = new QgsLineString();
  segment2->addVertex( csPoints.at( 2 ) );
  segment2->addVertex( center );

  QgsCompoundCurve *cc = new QgsCompoundCurve();
  cc->addCurve( segment1 );
  cc->addCurve( cs );
  cc->addCurve( segment2 );

  QgsCurvePolygon *cp = new QgsCurvePolygon();
  cp->setExteriorRing( cc );
  mCenterPointRubberBand->setGeometry( cp );
  mCenterPointRubberBand->show();
}

void QgsMapToolAddCircularString::removeCenterPointRubberBand()
{
  delete mCenterPointRubberBand;
  mCenterPointRubberBand = nullptr;
}

void QgsMapToolAddCircularString::release( QgsMapMouseEvent *e )
{
  deactivate();
  if ( mParentTool )
  {
    mParentTool->canvasReleaseEvent( e );
  }
  activate();
}

void QgsMapToolAddCircularString::clean()
{
  mPoints.clear();
  delete mRubberBand;
  mRubberBand = nullptr;
  delete mTempRubberBand;
  mTempRubberBand = nullptr;
  removeCenterPointRubberBand();
}
