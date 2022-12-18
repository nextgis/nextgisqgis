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

#ifndef NGAUTHMANAGER_H
#define NGAUTHMANAGER_H

#include "qgsauthmanager.h"

class CORE_EXPORT NGAuthManager : public QgsAuthManager
{
    Q_OBJECT

public:
    static void initInstance();
    bool verifyMasterPassword( const QString &compare = QString() ) override;
    void passwordHelperProcessError() override;

protected:
    bool passwordHelperEnabled() const override;
    bool masterPasswordInput() override;
};

#endif // NGAUTHMANAGER_H
