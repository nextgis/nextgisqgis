/***************************************************************************
  qgsrulebasedchunkloader_p.cpp
  --------------------------------------
  Date                 : November 2019
  Copyright            : (C) 2019 by Martin Dobias
  Email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsrulebasedchunkloader_p.h"

#include "qgs3dutils.h"
#include "qgschunknode_p.h"
#include "qgspolygon3dsymbol_p.h"
#include "qgseventtracing.h"

#include "qgsvectorlayer.h"
#include "qgsvectorlayerfeatureiterator.h"

#include "qgsrulebased3drenderer.h"

#include <QtConcurrent>
#include <Qt3DCore/QTransform>

///@cond PRIVATE


QgsRuleBasedChunkLoader::QgsRuleBasedChunkLoader( const QgsRuleBasedChunkLoaderFactory *factory, QgsChunkNode *node )
  : QgsChunkLoader( node )
  , mFactory( factory )
  , mContext( factory->mMap )
  , mSource( new QgsVectorLayerFeatureSource( factory->mLayer ) )
{
  if ( node->level() < mFactory->mLeafLevel )
  {
    QTimer::singleShot( 0, this, &QgsRuleBasedChunkLoader::finished );
    return;
  }

  QgsVectorLayer *layer = mFactory->mLayer;
  const Qgs3DMapSettings &map = mFactory->mMap;

  QgsExpressionContext exprContext( Qgs3DUtils::globalProjectLayerExpressionContext( layer ) );
  exprContext.setFields( layer->fields() );
  mContext.setExpressionContext( exprContext );

  // factory is shared among multiple loaders which may be run at the same time
  // so we need a local copy of our rule tree that does not intefere with others
  // (e.g. it happened that filter expressions with invalid syntax would cause
  // nasty crashes when trying to simultaneously record evaluation error)
  mRootRule.reset( mFactory->mRootRule->clone() );

  mRootRule->createHandlers( layer, mHandlers );

  QSet<QString> attributeNames;
  mRootRule->prepare( mContext, attributeNames, mHandlers );

  // build the feature request
  QgsFeatureRequest req;
  req.setDestinationCrs( map.crs(), map.transformContext() );
  req.setSubsetOfAttributes( attributeNames, layer->fields() );

  // only a subset of data to be queried
  const QgsRectangle rect = Qgs3DUtils::worldToMapExtent( node->bbox(), map.origin() );
  req.setFilterRect( rect );

  //
  // this will be run in a background thread
  //
  mFutureWatcher = new QFutureWatcher<void>( this );
  connect( mFutureWatcher, &QFutureWatcher<void>::finished, this, &QgsChunkQueueJob::finished );

  const QFuture<void> future = QtConcurrent::run( [req, this]
  {
    const QgsEventTracing::ScopedEvent e( QStringLiteral( "3D" ), QStringLiteral( "RB chunk load" ) );

    QgsFeature f;
    QgsFeatureIterator fi = mSource->getFeatures( req );
    while ( fi.nextFeature( f ) )
    {
      if ( mCanceled )
        break;
      mContext.expressionContext().setFeature( f );
      mRootRule->registerFeature( f, mContext, mHandlers );
    }
  } );

  // emit finished() as soon as the handler is populated with features
  mFutureWatcher->setFuture( future );
}

QgsRuleBasedChunkLoader::~QgsRuleBasedChunkLoader()
{
  if ( mFutureWatcher && !mFutureWatcher->isFinished() )
  {
    disconnect( mFutureWatcher, &QFutureWatcher<void>::finished, this, &QgsChunkQueueJob::finished );
    mFutureWatcher->waitForFinished();
  }

  qDeleteAll( mHandlers );
  mHandlers.clear();
}

void QgsRuleBasedChunkLoader::cancel()
{
  mCanceled = true;
}

Qt3DCore::QEntity *QgsRuleBasedChunkLoader::createEntity( Qt3DCore::QEntity *parent )
{
  if ( mNode->level() < mFactory->mLeafLevel )
  {
    return new Qt3DCore::QEntity( parent );  // dummy entity
  }

  float zMin = std::numeric_limits<float>::max();
  float zMax = std::numeric_limits<float>::min();

  Qt3DCore::QEntity *entity = new Qt3DCore::QEntity( parent );
  for ( QgsFeature3DHandler *handler : mHandlers.values() )
  {
    handler->finalize( entity, mContext );
    if ( handler->zMinimum() < zMin )
      zMin = handler->zMinimum();
    if ( handler->zMaximum() > zMax )
      zMax = handler->zMaximum();
  }

  // fix the vertical range of the node from the estimated vertical range to the true range
  if ( zMin != std::numeric_limits<float>::max() && zMax != std::numeric_limits<float>::min() )
  {
    QgsAABB box = mNode->bbox();
    box.yMin = zMin;
    box.yMax = zMax;
    mNode->setExactBbox( box );
  }

  return entity;
}


///////////////


QgsRuleBasedChunkLoaderFactory::QgsRuleBasedChunkLoaderFactory( const Qgs3DMapSettings &map, QgsVectorLayer *vl, QgsRuleBased3DRenderer::Rule *rootRule, int leafLevel, double zMin, double zMax )
  : mMap( map )
  , mLayer( vl )
  , mRootRule( rootRule->clone() )
  , mLeafLevel( leafLevel )
{
  const QgsAABB rootBbox = Qgs3DUtils::layerToWorldExtent( vl->extent(), zMin, zMax, vl->crs(), map.origin(), map.crs(), map.transformContext() );
  setupQuadtree( rootBbox, -1, leafLevel );  // negative root error means that the node does not contain anything
}

QgsRuleBasedChunkLoaderFactory::~QgsRuleBasedChunkLoaderFactory() = default;

QgsChunkLoader *QgsRuleBasedChunkLoaderFactory::createChunkLoader( QgsChunkNode *node ) const
{
  return new QgsRuleBasedChunkLoader( this, node );
}


///////////////

QgsRuleBasedChunkedEntity::QgsRuleBasedChunkedEntity( QgsVectorLayer *vl, double zMin, double zMax, const QgsVectorLayer3DTilingSettings &tilingSettings, QgsRuleBased3DRenderer::Rule *rootRule, const Qgs3DMapSettings &map )
  : QgsChunkedEntity( -1, // max. allowed screen error (negative tau means that we need to go until leaves are reached)
                      new QgsRuleBasedChunkLoaderFactory( map, vl, rootRule, tilingSettings.zoomLevelsCount() - 1, zMin, zMax ), true )
{
  mTransform = new Qt3DCore::QTransform;
  mTransform->setTranslation( QVector3D( 0.0f, map.terrainElevationOffset(), 0.0f ) );
  this->addComponent( mTransform );
  connect( &map, &Qgs3DMapSettings::terrainElevationOffsetChanged, this, &QgsRuleBasedChunkedEntity::onTerrainElevationOffsetChanged );

  setShowBoundingBoxes( tilingSettings.showBoundingBoxes() );
}

QgsRuleBasedChunkedEntity::~QgsRuleBasedChunkedEntity()
{
  // cancel / wait for jobs
  cancelActiveJobs();
}

void QgsRuleBasedChunkedEntity::onTerrainElevationOffsetChanged( float newOffset )
{
  mTransform->setTranslation( QVector3D( 0.0f, newOffset, 0.0f ) );
}

/// @endcond
