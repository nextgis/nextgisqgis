/***************************************************************************
                         qgssurface.h
                         --------------
    begin                : September 2014
    copyright            : (C) 2014 by Marco Hugentobler
    email                : marco at sourcepole dot ch
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSSURFACE_H
#define QGSSURFACE_H

#include "qgis_core.h"
#include "qgis_sip.h"
#include "qgsabstractgeometry.h"
#include "qgsrectangle.h"

class QgsPolygon;

/**
 * \ingroup core
 * \class QgsSurface
 * \brief Surface geometry type.
 */
class CORE_EXPORT QgsSurface: public QgsAbstractGeometry
{
  public:

    /**
     * Gets a polygon representation of this surface.
     * Ownership is transferred to the caller.
     */
    virtual QgsPolygon *surfaceToPolygon() const = 0 SIP_FACTORY;

    QgsRectangle boundingBox() const override
    {
      if ( mBoundingBox.isNull() )
      {
        mBoundingBox = calculateBoundingBox();
      }
      return mBoundingBox;
    }

    bool isValid( QString &error SIP_OUT, Qgis::GeometryValidityFlags flags = Qgis::GeometryValidityFlags() ) const override;


#ifndef SIP_RUN

    /**
     * Cast the \a geom to a QgsSurface.
     * Should be used by qgsgeometry_cast<QgsSurface *>( geometry ).
     *
     * \note Not available in Python. Objects will be automatically be converted to the appropriate target type.
     * \since QGIS 3.0
     */
    inline static const QgsSurface *cast( const QgsAbstractGeometry *geom )
    {
      if ( !geom )
        return nullptr;

      const QgsWkbTypes::Type flatType = QgsWkbTypes::flatType( geom->wkbType() );
      if ( flatType == QgsWkbTypes::CurvePolygon
           || flatType == QgsWkbTypes::Polygon
           || flatType == QgsWkbTypes::Triangle )
        return static_cast<const QgsSurface *>( geom );
      return nullptr;
    }
#endif
  protected:

    void clearCache() const override;

    mutable QgsRectangle mBoundingBox;
    mutable bool mHasCachedValidity = false;
    mutable QString mValidityFailureReason;
};

#endif // QGSSURFACE_H
