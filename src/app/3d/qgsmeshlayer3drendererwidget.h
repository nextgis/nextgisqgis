/***************************************************************************
  qgsmeshlayer3drendererwidget.h
  ------------------------------
  Date                 : January 2019
  Copyright            : (C) 2019 by Peter Petrik
  Email                : zilolv at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSMESHLAYER3DRENDERERWIDGET_H
#define QGSMESHLAYER3DRENDERERWIDGET_H

#include <memory>

#include "qgsmaplayerconfigwidget.h"
#include "qgsmeshlayer3drenderer.h"
#include "qgsmaplayerconfigwidgetfactory.h"

class QCheckBox;

class QgsMesh3dSymbolWidget;
class QgsMeshLayer;
class QgsMapCanvas;


//! Widget for configuration of 3D renderer of a mesh layer
class QgsMeshLayer3DRendererWidget : public QgsMapLayerConfigWidget
{
    Q_OBJECT
  public:
    explicit QgsMeshLayer3DRendererWidget( QgsMeshLayer *layer, QgsMapCanvas *canvas, QWidget *parent = nullptr );

    void syncToLayer( QgsMapLayer *layer ) override;

    //! no transfer of ownership
    void setRenderer( const QgsMeshLayer3DRenderer *renderer );
    //! no transfer of ownership
    QgsMeshLayer3DRenderer *renderer();

  public slots:
    void apply() override;

  private slots:
    void onEnabledClicked();

  private:
    QCheckBox *mChkEnabled = nullptr;
    QgsMesh3dSymbolWidget *mWidgetMesh = nullptr;
    std::unique_ptr<QgsMeshLayer3DRenderer> mRenderer;
};

class QgsMeshLayer3DRendererWidgetFactory : public QObject, public QgsMapLayerConfigWidgetFactory
{
    Q_OBJECT
  public:
    explicit QgsMeshLayer3DRendererWidgetFactory( QObject *parent = nullptr );

    QgsMapLayerConfigWidget *createWidget( QgsMapLayer *layer, QgsMapCanvas *canvas, bool dockWidget, QWidget *parent ) const override;
    bool supportLayerPropertiesDialog() const override;
    bool supportsLayer( QgsMapLayer *layer ) const override;
    QString layerPropertiesPagePositionHint() const override;
};

#endif // QGSMESHLAYER3DRENDERERWIDGET_H
