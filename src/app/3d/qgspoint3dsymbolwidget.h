/***************************************************************************
  qgspoint3dsymbolwidget.h
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

#ifndef QGSPOINT3DSYMBOLWIDGET_H
#define QGSPOINT3DSYMBOLWIDGET_H

#include "qgs3dsymbolwidget.h"
#include "ui_point3dsymbolwidget.h"

class QgsPoint3DSymbol;


//! A widget for configuration of 3D symbol for points
class QgsPoint3DSymbolWidget : public Qgs3DSymbolWidget, private Ui::Point3DSymbolWidget
{
    Q_OBJECT
  public:
    explicit QgsPoint3DSymbolWidget( QWidget *parent = nullptr );

    static Qgs3DSymbolWidget *create( QgsVectorLayer *layer );

    void setSymbol( const QgsAbstract3DSymbol *symbol, QgsVectorLayer *layer ) override;
    QgsAbstract3DSymbol *symbol() override;
    QString symbolType() const override;

  private slots:
    void onShapeChanged();
};

#endif // QGSPOINT3DSYMBOLWIDGET_H
