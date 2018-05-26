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
#ifndef NGUPDATER_H
#define NGUPDATER_H

#ifdef NGSTD_USING

#include "framework/updater.h"


class NGQgisUpdater: public NGUpdater
{
    Q_OBJECT
public:
    explicit NGQgisUpdater( QWidget *parent = nullptr );
    virtual ~NGQgisUpdater() = default;

protected:
    virtual const QStringList ignorePackages() override;
    virtual const QString updaterPath() override;

};

#endif // NGSTD_USING

#endif //NGUPDATER_H
