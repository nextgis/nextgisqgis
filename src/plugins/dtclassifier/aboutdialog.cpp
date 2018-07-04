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
#include <QPixmap>
#include <QLayout>

#include "aboutdialog.h"

AboutDialog::AboutDialog( QWidget *parent, 
                          QString name,
                          QString version,
                          QString description,
                          QString ext_description,
                          QString icon_48x48,
                          QString developers_name,
                          QString developers_site,
                          QString home_page,
                          QString bagtracker_page)
    : QDialog( parent ),
      pl_name(name),
      pl_version(version),
      pl_description(description),
      pl_ext_description(ext_description),
      pl_icon_48x48(icon_48x48),
      pl_developers_name(developers_name),
      pl_developers_site(developers_site),
      pl_home_page(home_page),
      pl_bagtracker_page(bagtracker_page)
{
  setupUi( this );
  
  verticalLayout->setSizeConstraint(QLayout::SetFixedSize);

  QString title = QString("%1 %2").arg(tr("About")).arg(pl_name);
  QString sVersion = QString("%2: <strong>%3</strong>").arg(tr("Version"), pl_version);
  QString developers = QString("%1: <a href=\"%3\"> %2 </a>").arg(tr("Developers"), pl_developers_name, pl_developers_site);
  QString homepage = QString("%1: <a href=\"%2\"> %2 </a>").arg(tr("Homepage"), pl_home_page);
  QString bagtraking = QString("%1 <a href=\"%3\"> %2 </a>").arg(tr("Please report bugs at"), tr("bugtracker"), pl_bagtracker_page);

  QString html("");
  html += QString("<h2> %1 </h2>").arg(title);
  html += QString("<div> %1 </div>").arg(sVersion);
  html += QString("<div> %1 </div>").arg(pl_description);
  html += QString("<div> %1 </div>").arg(pl_ext_description);
  html += QString("<br/><div> %1 </div>").arg(developers);
  html += QString("<div> %1 </div>").arg(homepage);
  html += QString("<div> %1 </div>").arg(bagtraking);

  lAboutText->setText(html);

  this->setWindowTitle(title);

  lIcon->setPixmap(QPixmap(pl_icon_48x48));
}