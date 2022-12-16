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

#include "qgsauthnextgisedit.h"
#include "ui_qgsauthnextgisedit.h"
#include "qgssettings.h"

#include "framework/access/access.h"

QgsAuthNextGISEdit::QgsAuthNextGISEdit( QWidget *parent )
  : QgsAuthMethodEdit( parent )
  , mSettings(new QgsSettings)
{
  setupUi( this );
  ngAuthOptions->init(mSettings);
}

QgsAuthNextGISEdit::~QgsAuthNextGISEdit()
{
    delete mSettings;
}

bool QgsAuthNextGISEdit::validateConfig()
{
  return true;
}

QgsStringMap QgsAuthNextGISEdit::configMap() const
{
    mSettings->setValue("nextgis/send_crashes", ngAuthOptions->sendCrashes->isChecked());
    mSettings->setValue("nextgis/endpoint", ngAuthOptions->endpointEdit->text());
    mSettings->setValue("nextgis/auth_endpoint", ngAuthOptions->authEndpointEdit->text());
    mSettings->setValue("nextgis/token_endpoint", ngAuthOptions->tokenEndpointEdit->text());
    mSettings->setValue("nextgis/user_info_endpoint", ngAuthOptions->userInfoEndpointEdit->text());
    mSettings->setValue("nextgis/auth_type", ngAuthOptions->authTypeSelector->currentIndex());
    mSettings->setValue("nextgis/use_code_challenge", ngAuthOptions->codeChallengeCheckBox->isChecked());

    NGAccess::AuthSourceType type =
        static_cast<NGAccess::AuthSourceType>(ngAuthOptions->authTypeSelector->currentIndex());
    NGAccess::instance().setAuthEndpoint(ngAuthOptions->authEndpointEdit->text());
    NGAccess::instance().setTokenEndpoint(ngAuthOptions->tokenEndpointEdit->text());
    NGAccess::instance().setUserInfoEndpoint(ngAuthOptions->userInfoEndpointEdit->text());
    NGAccess::instance().setUseCodeChallenge(ngAuthOptions->codeChallengeCheckBox->isChecked());
    if (type == NGAccess::AuthSourceType::NGID) {
        NGAccess::instance().setUseCodeChallenge(true);
    }
    NGAccess::instance().setEndPoint(ngAuthOptions->endpointEdit->text(), type);
    NGAccess::instance().initSentry(ngAuthOptions->sendCrashes->isChecked(), "");

    emit NGAccess::instance().userInfoUpdated();

    QgsStringMap map;
    map.insert("NextGIS", "NextGIS");
    return map;
}

void QgsAuthNextGISEdit::loadConfig( const QgsStringMap &configmap )
{
    Q_UNUSED(configmap)
}

void QgsAuthNextGISEdit::resetConfig()
{
}

void QgsAuthNextGISEdit::clearConfig()
{
}
