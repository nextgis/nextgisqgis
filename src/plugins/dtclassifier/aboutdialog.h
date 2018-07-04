/***************************************************************************
  aboutdialog.h
  Raster classification using decision tree
  -------------------
  begin                : Aug 18, 2015
  copyright            : (C) 2015 by Alexander Lisovenko
  email                : alexander.lisovenko@gmail.com

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

#include "ui_about.h"
#include "classifier.h"

// QGISEXTERN const QString _name;
// QGISEXTERN const QString _version;
// QGISEXTERN const QString _description;
// QGISEXTERN const QString _ext_description;
// QGISEXTERN const QString _icon_48x48;
// QGISEXTERN const QString _developers_name;
// QGISEXTERN const QString _developers_site;
// QGISEXTERN const QString _home_page;
// QGISEXTERN const QString _bagtracker_page;


class AboutDialog : public QDialog, private Ui::AboutDialog
{
    Q_OBJECT
  public:
    AboutDialog(  QWidget* parent,
    			  QString name,
                  QString version,
                  QString description,
                  QString ext_description,
                  QString icon_48x48,
                  QString developers_name,
                  QString developers_site,
                  QString home_page,
                  QString bagtracker_page);

  private:
  	QString pl_name;
  	QString pl_version;
  	QString pl_description;
  	QString pl_ext_description;
  	QString pl_icon_48x48;
  	QString pl_developers_name;
  	QString pl_developers_site;
  	QString pl_home_page;
  	QString pl_bagtracker_page;

};

#endif // ABOUTDIALOG_H
