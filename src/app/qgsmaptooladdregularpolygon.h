/***************************************************************************
    qgsmaptooladdregularpolygon.h  -  map tool for adding regular polygon
    ---------------------
    begin                : July 2017
    copyright            : (C) 2017
    email                : lbartoletti at tuxfamily dot org
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSMAPTOOLADDREGULARPOLYGON_H
#define QGSMAPTOOLADDREGULARPOLYGON_H

#include "qgsmaptooladdabstract.h"
#include "qgsregularpolygon.h"
#include "qgsspinbox.h"
#include "qgis_app.h"

class QSpinBox;

class APP_EXPORT QgsMapToolAddRegularPolygon: public QgsMapToolAddAbstract
{
    Q_OBJECT

  public:
    QgsMapToolAddRegularPolygon( QgsMapToolCapture *parentTool, QgsMapCanvas *canvas, CaptureMode mode = CaptureLine );

    void deactivate() override;
    void clean() override;

  protected:
    explicit QgsMapToolAddRegularPolygon( QgsMapCanvas *canvas ) = delete; //forbidden

    std::unique_ptr<QgsSpinBox> mNumberSidesSpinBox;
    int mNumberSides = 6;

    //! (re-)create the spin box to enter the number of sides
    void createNumberSidesSpinBox();
    //! delete the spin box to enter the number of sides, if it exists
    void deleteNumberSidesSpinBox();

    //! Regular shape as a regular polygon
    QgsRegularPolygon mRegularPolygon;
};

#endif // QGSMAPTOOLADDREGULARPOLYGON_H
