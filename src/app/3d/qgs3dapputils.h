/***************************************************************************
  qgs3dapputils.h
  --------------------------------------
  Date                 : July 2020
  Copyright            : (C) 2020 by Nyall Dawson
  Email                : nyall dot dawson at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGS3DAPPUTILS_H
#define QGS3DAPPUTILS_H

#include <memory>

class QgsPointCloudLayer3DRenderer;
class QgsPointCloudRenderer;

class Qgs3DAppUtils
{
  public:

    /**
     * Initializes 3D components belonging to the app library.
     */
    static void initialize();

    static std::unique_ptr< QgsPointCloudLayer3DRenderer > convert2dPointCloudRendererTo3d( QgsPointCloudRenderer *renderer );

};

#endif // QGS3DAPPUTILS_H
