/***************************************************************************
  qgsterraintileloader_p.cpp
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

#include "qgsterraintileloader_p.h"

#include "qgs3dmapsettings.h"
#include "qgschunknode_p.h"
#include "qgsterrainentity_p.h"
#include "qgsterraingenerator.h"
#include "qgsterraintextureimage_p.h"
#include "qgsterraintexturegenerator_p.h"
#include "qgsterraintileentity_p.h"
#include "qgscoordinatetransform.h"

#include <Qt3DRender/QTexture>

#include <Qt3DExtras/QTextureMaterial>
#include <Qt3DExtras/QDiffuseSpecularMaterial>
#include <Qt3DExtras/QPhongMaterial>

#include "quantizedmeshterraingenerator.h"

/// @cond PRIVATE

QgsTerrainTileLoader::QgsTerrainTileLoader( QgsTerrainEntity *terrain, QgsChunkNode *node )
  : QgsChunkLoader( node )
  , mTerrain( terrain )
{
  const Qgs3DMapSettings &map = mTerrain->map3D();
#if 0
  int tx, ty, tz;
  if ( map.terrainGenerator->type() == TerrainGenerator::QuantizedMesh )
  {
    // TODO: sort out - should not be here
    QuantizedMeshTerrainGenerator *generator = static_cast<QuantizedMeshTerrainGenerator *>( map.terrainGenerator.get() );
    generator->quadTreeTileToBaseTile( node->x, node->y, node->z, tx, ty, tz );
  }
#endif

  const QgsChunkNodeId nodeId = node->tileId();
  const QgsRectangle extentTerrainCrs = map.terrainGenerator()->tilingScheme().tileToExtent( nodeId );
  QgsCoordinateTransform transform = terrain->terrainToMapTransform();
  transform.setBallparkTransformsAreAppropriate( true );
  mExtentMapCrs = transform.transformBoundingBox( extentTerrainCrs );
  mTileDebugText = nodeId.text();
}

void QgsTerrainTileLoader::loadTexture()
{
  connect( mTerrain->textureGenerator(), &QgsTerrainTextureGenerator::tileReady, this, &QgsTerrainTileLoader::onImageReady );
  mTextureJobId = mTerrain->textureGenerator()->render( mExtentMapCrs, mNode->tileId(), mTileDebugText );
}

void QgsTerrainTileLoader::createTextureComponent( QgsTerrainTileEntity *entity, bool isShadingEnabled, const QgsPhongMaterialSettings &shadingMaterial, bool useTexture )
{
  Qt3DRender::QTexture2D *texture = useTexture || !isShadingEnabled ? createTexture( entity ) : nullptr;

  Qt3DRender::QMaterial *material = nullptr;
  if ( texture )
  {
    if ( isShadingEnabled )
    {
      Qt3DExtras::QDiffuseSpecularMaterial *diffuseMapMaterial = new Qt3DExtras::QDiffuseSpecularMaterial;
      diffuseMapMaterial->setDiffuse( QVariant::fromValue( texture ) );
      material = diffuseMapMaterial;
      diffuseMapMaterial->setAmbient( shadingMaterial.ambient() );
      diffuseMapMaterial->setSpecular( shadingMaterial.specular() );
      diffuseMapMaterial->setShininess( shadingMaterial.shininess() );
      material = diffuseMapMaterial;
    }
    else
    {
      Qt3DExtras::QTextureMaterial *textureMaterial = new Qt3DExtras::QTextureMaterial;
      textureMaterial->setTexture( texture );
      material = textureMaterial;
    }
  }
  else
  {
    Qt3DExtras::QPhongMaterial *phongMaterial  = new Qt3DExtras::QPhongMaterial;
    phongMaterial->setDiffuse( shadingMaterial.diffuse() );
    phongMaterial->setAmbient( shadingMaterial.ambient() );
    phongMaterial->setSpecular( shadingMaterial.specular() );
    phongMaterial->setShininess( shadingMaterial.shininess() );
    material = phongMaterial;
  }

  entity->addComponent( material ); // takes ownership if the component has no parent
}

Qt3DRender::QTexture2D *QgsTerrainTileLoader::createTexture( QgsTerrainTileEntity *entity )
{
  Qt3DRender::QTexture2D *texture = new Qt3DRender::QTexture2D;
  QgsTerrainTextureImage *textureImage = new QgsTerrainTextureImage( mTextureImage, mExtentMapCrs, mTileDebugText );
  texture->addTextureImage( textureImage );//texture take the ownership of textureImage if has no parant
  texture->setMinificationFilter( Qt3DRender::QTexture2D::Linear );
  texture->setMagnificationFilter( Qt3DRender::QTexture2D::Linear );

  entity->setTextureImage( textureImage );

  return texture;
}

void QgsTerrainTileLoader::onImageReady( int jobId, const QImage &image )
{
  if ( mTextureJobId == jobId )
  {
    mTextureImage = image;
    mTextureJobId = -1;
    emit finished();  // TODO: this should be left for derived class!
  }
}

/// @endcond
