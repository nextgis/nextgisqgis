/***************************************************************************
    qgsvectorsimplifymethod.h
    ---------------------
    begin                : December 2013
    copyright            : (C) 2013 by Alvaro Huarte
    email                : http://wiki.osgeo.org/wiki/Alvaro_Huarte
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSVECTORSIMPLIFYMETHOD_H
#define QGSVECTORSIMPLIFYMETHOD_H

#include <QFlags>
#include <QObject>

#include "qgis_core.h"

/**
 * \ingroup core
 * \brief This class contains information how to simplify geometries fetched from a vector layer
 * \since QGIS 2.2
 */
class CORE_EXPORT QgsVectorSimplifyMethod
{
    Q_GADGET
  public:
    //! construct a default object
    QgsVectorSimplifyMethod();

    //! Simplification flags for fast rendering of features
    enum SimplifyHint
    {
      NoSimplification           = 0, //!< No simplification can be applied
      GeometrySimplification     = 1, //!< The geometries can be simplified using the current map2pixel context state
      AntialiasingSimplification = 2, //!< The geometries can be rendered with 'AntiAliasing' disabled because of it is '1-pixel size'
      FullSimplification         = 3, //!< All simplification hints can be applied ( Geometry + AA-disabling )
    };
    Q_ENUM( SimplifyHint )
    Q_DECLARE_FLAGS( SimplifyHints, SimplifyHint )
    Q_FLAG( SimplifyHints )

    //! Sets the simplification hints of the vector layer managed
    void setSimplifyHints( SimplifyHints simplifyHints ) { mSimplifyHints = simplifyHints; }
    //! Gets the simplification hints of the vector layer managed
    inline SimplifyHints simplifyHints() const { return mSimplifyHints; }

    //! Types of local simplification algorithms that can be used
    enum SimplifyAlgorithm
    {
      Distance    = 0, //!< The simplification uses the distance between points to remove duplicate points
      SnapToGrid  = 1, //!< The simplification uses a grid (similar to ST_SnapToGrid) to remove duplicate points
      Visvalingam = 2, //!< The simplification gives each point in a line an importance weighting, so that least important points are removed first
      SnappedToGridGlobal = 3, //!< Snap to a global grid based on the tolerance. Good for consistent results for incoming vertices, regardless of their feature
    };
    Q_ENUM( SimplifyAlgorithm )

    //! Sets the local simplification algorithm of the vector layer managed
    void setSimplifyAlgorithm( SimplifyAlgorithm simplifyAlgorithm ) { mSimplifyAlgorithm = simplifyAlgorithm; }
    //! Gets the local simplification algorithm of the vector layer managed
    inline SimplifyAlgorithm simplifyAlgorithm() const { return mSimplifyAlgorithm; }

    //! Sets the tolerance of simplification in map units. Represents the maximum distance in map units between two coordinates which can be considered equal
    void setTolerance( double tolerance ) { mTolerance = tolerance; }
    //! Gets the tolerance of simplification in map units. Represents the maximum distance in map units between two coordinates which can be considered equal
    inline double tolerance() const { return mTolerance; }

    //! Sets the simplification threshold of the vector layer managed
    void setThreshold( float threshold ) { mThreshold = threshold; }
    //! Gets the simplification threshold of the vector layer managed
    inline float threshold() const { return mThreshold; }

    //! Sets where the simplification executes, after fetch the geometries from provider, or when supported, in provider before fetch the geometries
    void setForceLocalOptimization( bool localOptimization ) { mLocalOptimization = localOptimization; }
    //! Gets where the simplification executes, after fetch the geometries from provider, or when supported, in provider before fetch the geometries
    inline bool forceLocalOptimization() const { return mLocalOptimization; }

    //! Sets the maximum scale at which the layer should be simplified
    void setMaximumScale( float maximumScale ) { mMaximumScale = maximumScale; }
    //! Gets the maximum scale at which the layer should be simplified
    inline float maximumScale() const { return mMaximumScale; }

  private:
    //! Simplification hints for fast rendering of features of the vector layer managed
    SimplifyHints mSimplifyHints;
    //! Simplification algorithm
    SimplifyAlgorithm mSimplifyAlgorithm = QgsVectorSimplifyMethod::Distance;
    //! Simplification tolerance, it represents the maximum distance between two coordinates which can be considered equal
    double mTolerance = 1;
    //! Simplification threshold
    float mThreshold;
    //! Simplification executes after fetch the geometries from provider, otherwise it executes, when supported, in provider before fetch the geometries
    bool mLocalOptimization = true;
    //! Maximum scale at which the layer should be simplified (Maximum scale at which generalisation should be carried out)
    float mMaximumScale = 1;
};

Q_DECLARE_OPERATORS_FOR_FLAGS( QgsVectorSimplifyMethod::SimplifyHints )

#endif // QGSVECTORSIMPLIFYMETHOD_H
