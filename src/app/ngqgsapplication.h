/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS Customization
 * Author:  Dmitry Baryshnikov, dmitry.baryshnikov@nextgis.com
 ******************************************************************************
 *   Copyright (c) 2017 NextGIS, <info@nextgis.com>
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#ifndef NGQGSAPPLICATION_H
#define NGQGSAPPLICATION_H

#include "qgsapplication.h"

class APP_EXPORT NGQgsApplication : public QgsApplication
{
    Q_OBJECT
  public:
    NGQgsApplication( int & argc, char ** argv, bool GUIenabled,
                      const QString& customConfigPath = QString(),
                      const QString& platformName = "desktop" );
public:
    static void init( QString customConfigPath = QString() );
    static QString pluginsPath();
    static QString qtPluginsPath();

/*  static QString i18nPath();
    static QString qgisMasterDbFilePath();
    static QString srsDbFilePath();
    static QString defaultStyleV2Path();
    static QString defaultThemesFolder();*/
};

#endif // NGQGSAPPLICATION_H
