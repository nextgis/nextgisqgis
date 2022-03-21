/***************************************************************************
    qgsmaptooladdfeature.h  -  map tool for adding point/line/polygon features
    ---------------------
    begin                : April 2007
    copyright            : (C) 2007 by Marco Hugentobler
    email                : marco dot hugentobler at karto dot baug dot ethz dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsmaptooldigitizefeature.h"
#include "qgis_app.h"

//! This tool adds new point/line/polygon features to already existing vector layers
class APP_EXPORT QgsMapToolAddFeature : public QgsMapToolDigitizeFeature
{
    Q_OBJECT
  public:
    //! \since QGIS 2.12
    QgsMapToolAddFeature( QgsMapCanvas *canvas, CaptureMode mode );

  private:

    bool addFeature( QgsVectorLayer *vlayer, const QgsFeature &f, bool showModal = true );

    void digitized( const QgsFeature &f ) override;

    /**
     * Check if CaptureMode matches layer type. Default is TRUE.
     * \since QGIS 2.12
    */
    bool mCheckGeometryType;
};
