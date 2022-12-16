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

#ifndef QGSAUTHNEXTGISEDIT_H
#define QGSAUTHNEXTGISEDIT_H

#include <QWidget>

#include "qgsauthmethodedit.h"
#include "ui_qgsauthnextgisedit.h"

#include "qgsauthconfig.h"

class QgsAuthNextGISEdit : public QgsAuthMethodEdit, private Ui::QgsAuthNextGISEdit
{
    Q_OBJECT

  public:
    explicit QgsAuthNextGISEdit( QWidget *parent = nullptr );
    ~QgsAuthNextGISEdit();

    bool validateConfig() override;

    QgsStringMap configMap() const override;

  public slots:
    void loadConfig( const QgsStringMap &configmap ) override;

    void resetConfig() override;

    void clearConfig() override;
private:
    QgsSettings *mSettings = nullptr;
};

#endif // QGSAUTHNEXTGISEDIT_H
