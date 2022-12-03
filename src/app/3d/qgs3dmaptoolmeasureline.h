/***************************************************************************
  qgs3dmaptoolmeasureline.h
  --------------------------------------
  Date                 : Jun 2019
  Copyright            : (C) 2019 by Ismail Sunni
  Email                : imajimatika at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGS3DMAPTOOLMEASURELINE_H
#define QGS3DMAPTOOLMEASURELINE_H

#include "qgs3dmaptool.h"
#include "qgsvector3d.h"
#include "qgspoint.h"

#include <memory>

namespace Qt3DRender
{
  class QPickEvent;
}

class Qgs3DMapToolMeasureLinePickHandler;
class Qgs3DMeasureDialog;
class QgsRubberBand3D;


class Qgs3DMapToolMeasureLine : public Qgs3DMapTool
{
    Q_OBJECT

  public:
    Qgs3DMapToolMeasureLine( Qgs3DMapCanvas *canvas );
    ~Qgs3DMapToolMeasureLine() override;

    //! When we have added our last point, and not following
    bool done() const { return mDone; }

    //! Reset and start new
    void restart();

    //! Add new point
    void addPoint( const QgsPoint &point );

    //! Removes the last point
    void undo();

    //! Returns reference to array of the points
    QVector<QgsPoint> points() const;

    //! Update values from settings
    void updateSettings();

    void activate() override;
    void deactivate() override;

    QCursor cursor() const override;

  private slots:
    void onTerrainPicked( Qt3DRender::QPickEvent *event );
    void onTerrainEntityChanged();
    void handleClick( Qt3DRender::QPickEvent *event, const QgsVector3D &worldIntersection );
    void onMapSettingsChanged() override;

  private:
    std::unique_ptr<Qgs3DMapToolMeasureLinePickHandler> mPickHandler;

    friend class Qgs3DMapToolMeasureLinePickHandler;

    bool mIsAlreadyActivated = false;

    //! Store points
    QVector<QgsPoint> mPoints;

    //! Indicates whether we've just done a right mouse click
    bool mDone = true;

    //! Dialog
    Qgs3DMeasureDialog *mDialog = nullptr;

    std::unique_ptr<QgsRubberBand3D> mRubberBand;

};

#endif // QGS3DMAPTOOLMEASURELINE_H
