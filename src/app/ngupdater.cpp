/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS Customization
 * Author:  Alexander Lisovenko, alexander.lisovenko@nextgis.com
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

#include "ngupdater.h"

#ifdef NGSTD_USING

#include <QDir>

#include "ngqgsapplication.h"

const QStringList packages = (QStringList() <<
                              "Qt5" << "Formbuilder" << "Python" <<
                              "Operation for all python" << "Utilities" <<
                              "SQLite3 utilities" << "QHULL utilities" <<
                              "QCA utilities" << "Proj4 utilities" <<
                              "OpenCAD utilities" << "GIF utilities" <<
                              "EXPAT utilities" << "CURL utilities" <<
                              "Operation for all utils" << "Spatial libraries"
                             );

NGQgisUpdater::NGQgisUpdater(QWidget *parent) : NGUpdater (parent)
{

}

const QStringList NGQgisUpdater::ignorePackages()
{
    return packages;
}

const QString NGQgisUpdater::updaterPath()
{
#if defined Q_OS_WIN
    return NGQgsApplication::prefixPath() + QDir::separator() + NGUpdater::updaterPath();
#elif defined(Q_OS_MAC)
    return NGQgsApplication::prefixPath() + QDir::separator() + NGUpdater::updaterPath();
#else
    return NGUpdater::updaterPath();
#endif
}

#endif // NGSTD_USING
