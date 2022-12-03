/***************************************************************************
  qgsterrainentity_p.h
  --------------------------------------
  Date                 : July 2017
  Copyright            : (C) 2017 by Martin Dobias
  Email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSTERRAINENTITY_P_H
#define QGSTERRAINENTITY_P_H

///@cond PRIVATE

//
//  W A R N I N G
//  -------------
//
// This file is not part of the QGIS API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//

#define SIP_NO_FILE

#include "qgschunkedentity_p.h"
#include "qgschunkqueuejob_p.h"

#include <memory>

namespace Qt3DRender
{
  class QObjectPicker;
}

namespace Qt3DCore
{
  class QTransform;
}

namespace QgsRayCastingUtils
{
  class Ray3D;
}

class Qgs3DMapSettings;
class QgsTerrainTextureGenerator;
class QgsCoordinateTransform;
class QgsMapLayer;
class QgsTerrainGenerator;
class TerrainMapUpdateJobFactory;

/**
 * \ingroup 3d
 * \brief Controller for terrain - decides on what terrain tiles to show based on camera position
 * and creates them using map's terrain tile generator.
 * \since QGIS 3.0
 */
class QgsTerrainEntity : public QgsChunkedEntity
{
    Q_OBJECT
  public:
    //! Constructs terrain entity. The argument maxLevel determines how deep the tree of tiles will be
    explicit QgsTerrainEntity( const Qgs3DMapSettings &map, Qt3DCore::QNode *parent = nullptr );

    ~QgsTerrainEntity() override;

    //! Returns associated 3D map settings
    const Qgs3DMapSettings &map3D() const { return mMap; }
    //! Returns pointer to the generator of textures for terrain tiles
    QgsTerrainTextureGenerator *textureGenerator() { return mTextureGenerator; }
    //! Returns transform from terrain's CRS to map CRS
    const QgsCoordinateTransform &terrainToMapTransform() const { return *mTerrainToMapTransform; }

    //! Returns object picker attached to the terrain entity - used by camera controller
    Qt3DRender::QObjectPicker *terrainPicker() const { return mTerrainPicker; }
    //! Returns the transform attached to the terrain entity
    Qt3DCore::QTransform *transform() const { return mTerrainTransform; }
    //! Returns the terrain elevation offset (adjusts the terrain position up and down)
    float terrainElevationOffset() const;

    //! Tests whether the ray intersects the terrain - if it does, it sets the intersection point (in world coordinates)
    bool rayIntersection( const QgsRayCastingUtils::Ray3D &ray, QVector3D &intersectionPoint );

  private slots:
    void onShowBoundingBoxesChanged();
    void invalidateMapImages();
    void onLayersChanged();
    void onTerrainElevationOffsetChanged( float newOffset );

  private:

    void connectToLayersRepaintRequest();

    const Qgs3DMapSettings &mMap;
    //! picker of terrain to know height of terrain when dragging
    Qt3DRender::QObjectPicker *mTerrainPicker = nullptr;
    QgsTerrainTextureGenerator *mTextureGenerator = nullptr;
    QgsCoordinateTransform *mTerrainToMapTransform = nullptr;
    Qt3DCore::QTransform *mTerrainTransform = nullptr;

    std::unique_ptr<TerrainMapUpdateJobFactory> mUpdateJobFactory;

    //! layers that are currently being used for map rendering (and thus being watched for renderer updates)
    QList<QgsMapLayer *> mLayers;
};



//! Handles asynchronous updates of terrain's map images when layers change
class TerrainMapUpdateJob : public QgsChunkQueueJob
{
    Q_OBJECT
  public:
    TerrainMapUpdateJob( QgsTerrainTextureGenerator *textureGenerator, QgsChunkNode *mNode );

    void cancel() override;

  private slots:
    void onTileReady( int jobId, const QImage &image );

  private:
    QgsTerrainTextureGenerator *mTextureGenerator = nullptr;
    int mJobId;
};

/// @endcond

#endif // QGSTERRAINENTITY_P_H
