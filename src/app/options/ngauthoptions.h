/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS Customization
 ******************************************************************************
 *   Copyright (c) 2022 NextGIS, <info@nextgis.com>
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

#ifndef NGAUTHOPTIONS_H
#define NGAUTHOPTIONS_H

#include "qgis_app.h"
#include <QWidget>
#include "ui_ngauthoptions.h"

class QgsSettings;

class APP_EXPORT NGAuthOptions : public QWidget, public Ui::NGAuthOptions
{
    Q_OBJECT
public:
    explicit NGAuthOptions(QWidget *parent = 0);
    void init(QgsSettings *settings);

public slots:
    void onUserInfoUpdated();
    void on_signinButton_clicked();
    void on_defaultsButton_clicked();
    void on_authTypeSelector_currentIndexChanged(int index);

private:
    void ngInitControls();
    void updateAuthControls(int type);

    QgsSettings *mSettings = nullptr;
};

#endif // NGAUTHOPTIONS_H
