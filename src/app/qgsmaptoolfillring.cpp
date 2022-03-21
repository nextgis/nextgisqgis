/***************************************************************************
    qgsmaptoolfillring.h  - map tool to cut rings in polygon and multipolygon
                            features and fill them with new feature
    ---------------------
    begin                : December 2013
    copyright            : (C) 2013 by Alexander Bruy
    email                : alexander dot bruy at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsmaptoolfillring.h"
#include "qgsgeometry.h"
#include "qgsfeatureiterator.h"
#include "qgsmapcanvas.h"
#include "qgsvectorlayer.h"
#include "qgsattributedialog.h"
#include "qgisapp.h"
#include "qgsvectorlayerutils.h"
#include "qgsmapmouseevent.h"
#include "qgspolygon.h"

#include <limits>

QgsMapToolFillRing::QgsMapToolFillRing( QgsMapCanvas *canvas )
  : QgsMapToolCapture( canvas, QgisApp::instance()->cadDockWidget(), QgsMapToolCapture::CapturePolygon )
{
  mToolName = tr( "Fill ring" );
}

bool QgsMapToolFillRing::supportsTechnique( QgsMapToolCapture::CaptureTechnique technique ) const
{
  switch ( technique )
  {
    case QgsMapToolCapture::StraightSegments:
    case QgsMapToolCapture::Streaming:
    case QgsMapToolCapture::CircularString:
      return true;
  }
  return false;
}

void QgsMapToolFillRing::cadCanvasReleaseEvent( QgsMapMouseEvent *e )
{
  //check if we operate on a vector layer
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mCanvas->currentLayer() );

  if ( !vlayer )
  {
    notifyNotVectorLayer();
    return;
  }

  if ( !vlayer->isEditable() )
  {
    notifyNotEditableLayer();
    return;
  }

  if ( e->button() == Qt::LeftButton && QApplication::keyboardModifiers() == Qt::ShiftModifier && !isCapturing() )
  {
    // left button with shift fills an existing ring
  }
  else if ( e->button() == Qt::LeftButton )
  {
    // add point to list and to rubber band

    const int error = addVertex( e->mapPoint() );
    if ( error == 2 )
    {
      // problem with coordinate transformation
      emit messageEmitted( tr( "Cannot transform the point to the layers coordinate system" ), Qgis::MessageLevel::Warning );
      return;
    }

    startCapturing();
    return;
  }
  else if ( e->button() != Qt::RightButton || !isCapturing() )
  {
    return;
  }

  QgsGeometry g;
  QgsFeatureId fid;

  if ( isCapturing() )
  {
    deleteTempRubberBand();

    closePolygon();

    vlayer->beginEditCommand( tr( "Ring added and filled" ) );

    const QgsPointSequence pointList = pointsZM();

    const Qgis::GeometryOperationResult addRingReturnCode = vlayer->addRing( pointList, &fid );

    // AP: this is all dead code:
    //todo: open message box to communicate errors
    if ( addRingReturnCode != Qgis::GeometryOperationResult::Success )
    {
      QString errorMessage;
      if ( addRingReturnCode == Qgis::GeometryOperationResult::InvalidInputGeometryType )
      {
        errorMessage = tr( "a problem with geometry type occurred" );
      }
      else if ( addRingReturnCode == Qgis::GeometryOperationResult::AddRingNotClosed )
      {
        errorMessage = tr( "the inserted Ring is not closed" );
      }
      else if ( addRingReturnCode ==  Qgis::GeometryOperationResult::AddRingNotValid )
      {
        errorMessage = tr( "the inserted Ring is not a valid geometry" );
      }
      else if ( addRingReturnCode == Qgis::GeometryOperationResult::AddRingCrossesExistingRings )
      {
        errorMessage = tr( "the inserted Ring crosses existing rings" );
      }
      else if ( addRingReturnCode == Qgis::GeometryOperationResult::AddRingNotInExistingFeature )
      {
        errorMessage = tr( "the inserted Ring is not contained in a feature" );
      }
      else
      {
        errorMessage = tr( "an unknown error occurred" );
      }
      emit messageEmitted( tr( "could not add ring: %1." ).arg( errorMessage ), Qgis::MessageLevel::Critical );
      vlayer->destroyEditCommand();

      return;
    }

    const QgsLineString ext( pointList );
    std::unique_ptr< QgsPolygon > polygon = std::make_unique< QgsPolygon >( );
    polygon->setExteriorRing( ext.clone() );
    g = QgsGeometry( std::move( polygon ) );
  }
  else
  {
    vlayer->beginEditCommand( tr( "Ring filled" ) );

    g = ringUnderPoint( e->mapPoint(), fid );

    if ( fid == -1 )
    {
      emit messageEmitted( tr( "No ring found to fill." ), Qgis::MessageLevel::Critical );
      vlayer->destroyEditCommand();
      return;
    }
  }

  QgsExpressionContext context = vlayer->createExpressionContext();

  QgsFeatureIterator fit = vlayer->getFeatures( QgsFeatureRequest().setFilterFid( fid ) );

  QgsFeature f;
  if ( fit.nextFeature( f ) )
  {
    //create QgsFeature with wkb representation
    QgsFeature ft = QgsVectorLayerUtils::createFeature( vlayer, g, f.attributes().toMap(), &context );

    bool res = false;
    if ( QApplication::keyboardModifiers() == Qt::ControlModifier )
    {
      res = vlayer->addFeature( ft );
    }
    else
    {
      QgsAttributeEditorContext context;
      // don't set cadDockwidget in context because we don't want to be able to create geometries from this dialog
      // there is one modified and one created feature, so it's a mess of we start to digitize a relation feature geometry
      context.setVectorLayerTools( QgisApp::instance()->vectorLayerTools() );
      QgsAttributeDialog *dialog = new QgsAttributeDialog( vlayer, &ft, false, nullptr, true, context );
      dialog->setMode( QgsAttributeEditorContext::AddFeatureMode );
      res = dialog->exec(); // will also add the feature
    }

    if ( res )
    {
      vlayer->endEditCommand();
    }
    else
    {
      vlayer->destroyEditCommand();
    }
  }

  if ( isCapturing() )
    stopCapturing();
}

// TODO refactor - shamelessly copied from QgsMapToolDeleteRing::ringUnderPoint
QgsGeometry QgsMapToolFillRing::ringUnderPoint( const QgsPointXY &p, QgsFeatureId &fid )
{
  //check if we operate on a vector layer
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mCanvas->currentLayer() );

  //There is no clean way to find if we are inside the ring of a feature,
  //so we iterate over all the features visible in the canvas
  //If several rings are found at this position, the smallest one is chosen,
  //in order to be able to delete a ring inside another ring
  double area = std::numeric_limits<double>::max();

  QgsGeometry ringGeom;
  QgsFeatureIterator fit = vlayer->getFeatures( QgsFeatureRequest().setFilterRect( toLayerCoordinates( vlayer, mCanvas->extent() ) ) );

  QgsFeature f;
  while ( fit.nextFeature( f ) )
  {
    const QgsGeometry g = f.geometry();
    if ( g.isNull() || QgsWkbTypes::geometryType( g.wkbType() ) != QgsWkbTypes::PolygonGeometry )
      continue;

    QgsMultiPolygonXY pol;
    if ( !QgsWkbTypes::isMultiType( g.wkbType() ) )
    {
      pol = QgsMultiPolygonXY() << g.asPolygon();
    }
    else
    {
      pol = g.asMultiPolygon();
    }

    for ( int i = 0; i < pol.size() ; ++i )
    {
      //for each part
      if ( pol[i].size() > 1 )
      {
        for ( int j = 1; j < pol[i].size(); ++j )
        {
          const QgsPolygonXY tempPol = QgsPolygonXY() << pol[i][j];
          const QgsGeometry tempGeom = QgsGeometry::fromPolygonXY( tempPol );
          if ( tempGeom.area() < area && tempGeom.contains( &p ) )
          {
            fid = f.id();
            area = tempGeom.area();
            ringGeom = tempGeom;
          }
        }
      }
    }
  }
  return ringGeom;
}
