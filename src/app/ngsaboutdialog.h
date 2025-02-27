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
#ifndef NGSABOUTDIALOG_H
#define NGSABOUTDIALOG_H

#include <QDialog>

namespace Ui {
class NgsAboutDialog;
}

class NgsAboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NgsAboutDialog(QWidget *parent = 0);
    ~NgsAboutDialog();

private:
    Ui::NgsAboutDialog *ui;

protected:
    void showEvent( QShowEvent *event ) override;
};

#endif // NGSABOUTDIALOG_H
