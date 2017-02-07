/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: OSM classes stub
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
#ifndef QGSOSMIMPORTDIALOG_H
#define QGSOSMIMPORTDIALOG_H

#include <QDialog>

class APP_EXPORT QgsOSMImportDialog : public QDialog
{
public:
    QgsOSMImportDialog(QWidget* parent = nullptr) : QDialog(parent) {}
};

#endif // QGSOSMIMPORTDIALOG_H
