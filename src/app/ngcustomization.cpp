/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS Customization
 * Copyright (c) 2022 NextGIS, <info@nextgis.com>
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

#include "ngcustomization.h"

#include "ngsaboutdialog.h"
#include "qgsmessagelogviewer.h"
#include "qgsmessagebar.h"
#include "qgsmessagebaritem.h"
#include "qgsapplication.h"

#include <QMessageBox>

#ifdef NGSTD_USING
#include "core/version.h"
#include "framework/access/access.h"
#include "framework/access/signbutton.h"
#endif // NGSTD_USING

static const QString SENTRY_KEY = "https://71159235f0b542adb8ef214aa24f5aa6@sentry.nextgis.com/9";

static const QString NextGIS = "NextGIS";

NGQgisApp::NGQgisApp( QSplashScreen *splash, bool restorePlugins, bool skipBadLayers,
             bool skipVersionCheck, const QString &rootProfileLocation,
             const QString &activeProfile, QWidget *parent, Qt::WindowFlags fl )
             : QgisApp( splash, restorePlugins, skipBadLayers, skipVersionCheck, rootProfileLocation, activeProfile, parent, fl)
{
  
#ifdef NGSTD_USING
    mNGUpdater = new NGQgisUpdater(this);
    connect(mNGUpdater, SIGNAL(checkUpdatesStarted()), this, SLOT(updatesSearchStart()));
    connect(mNGUpdater, SIGNAL(checkUpdatesFinished(bool)), this, SLOT(updatesSearchStop(bool)));
    m_CPLHTTPFetchOverrider = nullptr;
#endif // NGSTD_USING

    QSettings settings;
    if (settings.value("/qgis/checkVersion", true).toBool())
        connect(this, SIGNAL(initializationCompleted()), this, SLOT(checkQgisVersion()));

    functionProfileNG(&NGQgisApp::createToolBars, this, "Toolbars");

    addNextGISAuthentication();
}

NGQgisApp::~NGQgisApp()
{
#ifdef NGSTD_USING
    NGAccess::instance().save();
    if (m_CPLHTTPFetchOverrider)
        delete m_CPLHTTPFetchOverrider;
#endif // NGSTD_USING
}

void NGQgisApp::about()
{
    static NgsAboutDialog *about = new NgsAboutDialog (this);
    about->exec();
}

void NGQgisApp::checkQgisVersion()
{
    QObject* obj = sender();
    mUpdatesCheckStartByUser = (obj == mActionCheckQgisVersion);

    QgsMessageLog::logMessage( tr("Started check updates ..."), QString::null, Qgis::Info );
#ifdef NGSTD_USING
    mNGUpdater->checkUpdates();

    if (mUpdatesCheckStartByUser)
    {
        QApplication::setOverrideCursor(Qt::WaitCursor);
    }
#endif // NGSTD_USING
}

void NGQgisApp::updatesSearchStart()
{
}

void NGQgisApp::updatesSearchStop(bool updatesAvailable)
{
  if (!updatesAvailable && !mUpdatesCheckStartByUser)
    return;

  QWidget *banner = new QWidget;
  QHBoxLayout* bannerLayout = new QHBoxLayout(banner);
  bannerLayout->setContentsMargins(0, 0, 0, 0);
  bannerLayout->setSpacing(20);

  if ( updatesAvailable )
  {
      QLabel* msg = new QLabel(QString("<strong>%1</strong>").arg(this->tr("QGIS updates are available")), banner);
      msg->setTextFormat(Qt::RichText);
      bannerLayout->addWidget(msg);

      QPushButton* upgrade = new QPushButton(this->tr("Update"), banner);
      bannerLayout->addWidget(upgrade);
      connect(upgrade, SIGNAL(clicked(bool)), this, SLOT(startUpdate()));

  }
  else
  {
      QLabel* msg = new QLabel(QString("<strong>%1</strong>").arg(this->tr("There are no available QGIS updates")), banner);
      msg->setTextFormat(Qt::RichText);
      bannerLayout->addWidget(msg);
  }

  bannerLayout->insertStretch(-1, 1);

  QgsMessageBarItem* item = new QgsMessageBarItem(banner);
  this->messageBar()->pushItem(item);
  

  if (mUpdatesCheckStartByUser)
  {
    QApplication::setOverrideCursor(Qt::ArrowCursor);
  }
}

void NGQgisApp::startUpdate()
{
#ifdef NGSTD_USING
    QMessageBox::StandardButton answer = QMessageBox::question(
        static_cast<QWidget*>(parent()),
		tr("Close QGIS?"),
		tr("We'll need to close QGIS to start updating. OK?"),
		QMessageBox::Cancel | QMessageBox::Ok
	);

	if ( QMessageBox::Ok == answer )
	{
		if(saveDirty())
        {
            closeProject();
			QString lastProject;
			if(!mRecentProjects.isEmpty())
				lastProject = mRecentProjects.at( 0 ).path;
            mNGUpdater->startUpdate(lastProject);
            qApp->exit( 0 );
        }
    }
#endif // NGSTD_USING
}

void NGQgisApp::createToolBars()
{
    QSettings settings;

    // Add NextGIS account toolbar
    QWidget *spacer = new QWidget();
    spacer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    mNGAccountToolBar->addWidget(spacer);

#ifdef NGSTD_USING 
#if defined(NGLIB_COMPUTE_VERSION) && NGLIB_VERSION_NUMBER > NGLIB_COMPUTE_VERSION(0,11,0)
    QString endPointStr = settings.value("nextgis/endpoint",
        NGAccess::instance().endPoint()).toString();
    QString authEndPointStr = settings.value("nextgis/auth_endpoint",
        NGAccess::instance().authEndpoint()).toString();
    QString tokenEndPointStr = settings.value("nextgis/token_endpoint",
        NGAccess::instance().tokenEndpoint()).toString();
    QString userInfoEndPointStr = settings.value("nextgis/user_info_endpoint",
        NGAccess::instance().userInfoEndpoint()).toString();
    int authType = settings.value("nextgis/auth_type", 0).toInt();
    NGAccess::AuthSourceType type = static_cast<NGAccess::AuthSourceType>(authType);
    auto scopes = settings.value("nextgis/auth_scopes", "").toString();
    NGAccess::instance().setAuthEndpoint(authEndPointStr);
    NGAccess::instance().setTokenEndpoint(tokenEndPointStr);
    NGAccess::instance().setUserInfoEndpoint(userInfoEndPointStr);
    bool codeChallenge = settings.value("nextgis/use_code_challenge", "1").toBool();
    NGAccess::instance().setUseCodeChallenge(codeChallenge);
    NGSignInButton *toolbAuth = new NGSignInButton(QLatin1String("tv88lHLi6I9vUIck7eHxhkoJRfSLR74eLRx4YrpN"),
        scopes, endPointStr, type);

    QString version = QLatin1String(VENDOR_VERSION) + " (" + QLatin1String(VERSION) + ")";
    NGAccess::instance().initSentry(settings.value("nextgis/send_crashes", "0").toBool(), SENTRY_KEY, version);
#else
    NGSignInButton *toolbAuth = new NGSignInButton(QLatin1String("tv88lHLi6I9vUIck7eHxhkoJRfSLR74eLRx4YrpN"),
        QLatin1String("user_info.read"));
#endif // NGLIB_VERSION_NUMBER > 1100
    toolbAuth->setCursor(Qt::PointingHandCursor);
    mNGAccountToolBar->addWidget(toolbAuth);
    // TODO: QObject::connect(toolbAuth, SIGNAL(supportInfoUpdated()), this, SLOT(onSupportInfoUpdated()));
#endif // NGSTD_USING
}

void NGQgisApp::functionProfileNG(void (NGQgisApp:: *fnc)(),
    NGQgisApp *instance, QString name)
{
    startProfile(name);
    (instance->*fnc)();
    endProfile();
}

void NGQgisApp::addNextGISAuthentication()
{
    QgsAuthManager *authManager = QgsApplication::authManager();
    auto pNextGISAuthMethod = authManager->authMethod(NextGIS);

    if (pNextGISAuthMethod && !authManager->configIds().contains(NextGIS))
    {
        QgsAuthMethodConfig config(NextGIS);
        config.setName(NextGIS);
        config.setId(NextGIS);
        config.setConfig(NextGIS, NextGIS);

        authManager->storeAuthenticationConfig(config);
    }

#ifdef NGSTD_USING
//    m_oCPLHTTPFetcher = new QgsCPLHTTPFetchOverrider(NextGIS);
    m_CPLHTTPFetchOverrider = new NGCPLHTTPFetchOverrider();

    constexpr int sFilePrefixLength = CMAKE_SOURCE_DIR[sizeof( CMAKE_SOURCE_DIR ) - 1] == '/' ? sizeof( CMAKE_SOURCE_DIR ) + 1 : sizeof( CMAKE_SOURCE_DIR );
    m_CPLHTTPFetchOverrider->setAttribute( static_cast< QNetworkRequest::Attribute >( QgsNetworkRequestParameters::AttributeInitiatorClass ), "NGRequest" );
    m_CPLHTTPFetchOverrider->setAttribute( static_cast< QNetworkRequest::Attribute >( QgsNetworkRequestParameters::AttributeInitiatorRequestId ), QString(QString( __FILE__ ).mid( sFilePrefixLength ) + ':' + QString::number( __LINE__ ) + " (" + __FUNCTION__ + ")") );
#endif
}

NGCPLHTTPFetchOverrider::NGCPLHTTPFetchOverrider( const QString &authCfg )
{
    mAuthCfg = authCfg;
    CPLHTTPSetFetchCallback( NGCPLHTTPFetchOverrider::callback, this );
}

NGCPLHTTPFetchOverrider::~NGCPLHTTPFetchOverrider()
{
    CPLHTTPSetFetchCallback( nullptr, nullptr );
}
