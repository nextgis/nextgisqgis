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

#include "ngauthoptions.h"
#include "qgssettings.h"

#ifdef NGSTD_USING
#   include "core/request.h"
#   include "core/version.h"
#   include "framework/access/access.h"
#endif // NGSTD_USING

NGAuthOptions::NGAuthOptions(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
}

void NGAuthOptions::onUserInfoUpdated()
{
    ngInitControls();
}

void NGAuthOptions::ngInitControls()
{
#ifdef NGSTD_USING   
    if (NGAccess::instance().isEnterprise()) {
        authGroupBox->hide();
    }
    else if (NGAccess::instance().isUserAuthorized()) {
        avatar->setText(QString("<html><head/><body><p><img src=\"%1\" height=\"64\"/></p></body></html>")
            .arg(NGAccess::instance().avatarFilePath()));

        QString supportedText;
        if (NGAccess::instance().authType() == NGAccess::AuthSourceType::NGID) {
            supportedText = NGAccess::instance().isUserSupported() ?
                tr("Supported") : tr("Unsupported");
        }
        descriptionText->setText(QString("<html><head/><body><p>%1<br>%2</p><p><b>%3</b></p></body></html>")
            .arg(NGAccess::instance().firstName())
            .arg(NGAccess::instance().lastName())
            .arg(supportedText));
        authGroupBox->show();
        signinButton->setText(tr("Exit"));
    }
    else {
        avatar->setText("");
        descriptionText->setText(tr("Not authorized"));
        authGroupBox->show();
        signinButton->setText(tr("Sign in"));
    }
#if defined(NGLIB_COMPUTE_VERSION) && NGLIB_VERSION_NUMBER > NGLIB_COMPUTE_VERSION(0,11,0)
    int index = mSettings->value("nextgis/auth_type", 0).toInt();
    authTypeSelector->setCurrentIndex(index);
    endpointEdit->setText(mSettings->value("nextgis/endpoint", NGAccess::instance().endPoint()).toString());
    authEndpointEdit->setText(mSettings->value("nextgis/auth_endpoint", NGAccess::instance().authEndpoint()).toString());
    tokenEndpointEdit->setText(mSettings->value("nextgis/token_endpoint", NGAccess::instance().tokenEndpoint()).toString());
    userInfoEndpointEdit->setText(mSettings->value("nextgis/user_info_endpoint", NGAccess::instance().userInfoEndpoint()).toString());
    codeChallengeCheckBox->setChecked(mSettings->value("nextgis/use_code_challenge").toBool());
    updateAuthControls(index);

#endif // NGLIB_VERSION_NUMBER > 1100

    sendCrashes->setChecked(mSettings->value("nextgis/send_crashes", "0").toBool());
#endif // NGSTD_USING  
}

void NGAuthOptions::updateAuthControls(int type)
{
    if (type == 2) {
        authEndpointLabel->show();
        authEndpointEdit->show();
        tokenEndpointLabel->show();
        tokenEndpointEdit->show();
        userInfoEndpoinLabel->show();
        userInfoEndpointEdit->show();
        codeChallengeLabel->show();
        codeChallengeCheckBox->show();
    }
    else {
        authEndpointLabel->hide();
        authEndpointEdit->hide();
        tokenEndpointLabel->hide();
        tokenEndpointEdit->hide();
        userInfoEndpoinLabel->hide();
        userInfoEndpointEdit->hide();
        if (type == 0) {
            codeChallengeLabel->hide();
            codeChallengeCheckBox->hide();
        }
        else {
            codeChallengeLabel->show();
            codeChallengeCheckBox->show();
        }
    }
}

void NGAuthOptions::init(QgsSettings *settings)
{
    mSettings = settings;

    // NextGIS settings
#ifdef NGSTD_USING
    ngInitControls();
    connect(&NGAccess::instance(), SIGNAL(userInfoUpdated()), this, SLOT(onUserInfoUpdated()));
    connect(&NGAccess::instance(), &NGAccess::endpointAvailableUpdated, this, [ = ] () {
        availableEndpointLabel->setText(NGAccess::instance().isEndpointAvailable()
                                        ? "Authorization server is ready."
                                        : "Authorization server is not available!");
        signinButton->setEnabled(NGAccess::instance().isUserAuthorized() || NGAccess::instance().isEndpointAvailable());
    });
    connect(endpointEdit, &QLineEdit::textChanged, &NGAccess::instance(), &NGAccess::checkEndpointAsync);

    signinButton->installEventFilter(NGAccess::instance().getSignInEventFilter());
#endif // NGSTD_USING
}

void NGAuthOptions::on_signinButton_clicked()
{
    mSettings->setValue("nextgis/endpoint", endpointEdit->text());
    mSettings->setValue("nextgis/auth_endpoint", authEndpointEdit->text());
    mSettings->setValue("nextgis/token_endpoint", tokenEndpointEdit->text());
    mSettings->setValue("nextgis/user_info_endpoint", userInfoEndpointEdit->text());
    mSettings->setValue("nextgis/auth_type", authTypeSelector->currentIndex());
    mSettings->setValue("nextgis/use_code_challenge", codeChallengeCheckBox->isChecked());
#ifdef NGSTD_USING  
    if (NGAccess::instance().isUserAuthorized()) {
        NGAccess::instance().exit();
    }
    else {
#if defined(NGLIB_COMPUTE_VERSION) && NGLIB_VERSION_NUMBER > NGLIB_COMPUTE_VERSION(0,11,0)
        NGAccess::AuthSourceType type =
            static_cast<NGAccess::AuthSourceType>(authTypeSelector->currentIndex());
        NGAccess::instance().setAuthEndpoint(authEndpointEdit->text());
        NGAccess::instance().setTokenEndpoint(tokenEndpointEdit->text());
        NGAccess::instance().setUserInfoEndpoint(userInfoEndpointEdit->text());
        NGAccess::instance().setUseCodeChallenge(codeChallengeCheckBox->isChecked());
        if (type == NGAccess::AuthSourceType::NGID) {
            NGAccess::instance().setUseCodeChallenge(true);
        }
        NGAccess::instance().setEndPoint(endpointEdit->text(), type);
#endif // NGLIB_VERSION_NUMBER > 1100
        NGAccess::instance().authorize();
    }
#endif // NGSTD_USING
}

void NGAuthOptions::on_defaultsButton_clicked()
{
    endpointEdit->setText("https://my.nextgis.com");
    authTypeSelector->setCurrentIndex(0);
}

void NGAuthOptions::on_authTypeSelector_currentIndexChanged(int index)
{
#ifdef NGSTD_USING   
    updateAuthControls(index);
#endif // NGSTD_USING      
}
