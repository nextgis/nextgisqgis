/***************************************************************************
  layerselector.h
  Raster classification using decision tree
  -------------------
  begin                : Jun 14, 2011
  copyright            : (C) 2011 by Alexander Bruy
  email                : alexander.bruy@gmail.com

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/


#ifndef LAYERSELECTORDIALOG_H
#define LAYERSELECTORDIALOG_H

#include <QDialog>
#include <QDomDocument>
#include "ui_layerselectordialogbase.h"

class LayerSelectorDialog : public QDialog, private Ui::LayerSelectorDialogBase
{
    Q_OBJECT

  public:
    LayerSelectorDialog( QWidget *parent );
    LayerSelectorDialog( QWidget *parent, QStringList *layers );
    ~LayerSelectorDialog();

    void setLayerList( QStringList *layers );

  public slots:
    void updateSelectedLayers();

    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    //~ void selectAll();
    //~ void clearSelection();

  private:
    void populateLayers();


    QStringList *mLayers;
	QStringList *mUnavailableLayers;
};

#endif // LAYERSELECTORDIALOG_H

