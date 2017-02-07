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
#include "ngqgsapplication.h"

#include "qgsgeometry.h"
#include "qgslogger.h"

#include <QDir>
#include <QProcess>


QString NGQgsApplication::sPlatformName = "desktop";

const char* NGQgsApplication::QGIS_ORGANIZATION_NAME = VENDOR;
const char* NGQgsApplication::QGIS_ORGANIZATION_DOMAIN = VENDOR_DOMAIN;
const char* NGQgsApplication::QGIS_APPLICATION_NAME = APP_NAME;

QString ABISYM( NGQgsApplication::mNgConfigPath );
QMap<QString, QString> ABISYM( NGQgsApplication::mNgSystemEnvVars );

//------------------------------------------------------------------------------
// NGQgsApplication
//------------------------------------------------------------------------------

NGQgsApplication::NGQgsApplication(int &argc, char **argv, bool GUIenabled,
                                   const QString &customConfigPath,
                                   const QString &platformName) :
    QgsApplication(argc, argv, GUIenabled, customConfigPath, platformName)
{
    sPlatformName = platformName;

    init( customConfigPath );
}

void NGQgsApplication::init(QString customConfigPath)
{
    if ( customConfigPath.isEmpty() )
    {
      if ( getenv( "QGIS_CUSTOM_CONFIG_PATH" ) )
      {
        customConfigPath = getenv( "QGIS_CUSTOM_CONFIG_PATH" );
      }
      else
      {
        customConfigPath = QString( "%1/.nextgis/qgis%2/" ).arg(
                    QDir::homePath() ).arg( VERSION_INT / 10000 );
      }
    }

    qRegisterMetaType<QgsGeometry::Error>( "QgsGeometry::Error" );

#ifdef Q_OS_WIN
    QDir defaultPrefixDir(applicationDirPath() + QDir::separator() + "..");
#elif defined(Q_OS_MACX)
    QDir defaultPrefixDir(applicationDirPath() + QDir::separator() + ".."
                           + QDir::separator() + ".."
                           + QDir::separator() + ".."
                           + QDir::separator() + "..");
#else
    QString defaultPrefixPath("/usr");
#endif
    QString defaultPrefixPath =  defaultPrefixDir.absolutePath();

    QString prefixPath( getenv( "QGIS_PREFIX_PATH" ) ?
                            getenv( "QGIS_PREFIX_PATH" ) : defaultPrefixPath );
    QgsDebugMsg( QString( "prefixPath(): %1" ).arg( prefixPath ) );
    // NOTE: Set prefix, plugin, data (package), svg paths here
    setPrefixPath( prefixPath, true );

    if ( !customConfigPath.isEmpty() )
    {
      ABISYM( mNgConfigPath ) = customConfigPath + '/'; // make sure trailing slash is included
    }

    if ( getenv( "QGIS_AUTH_DB_DIR_PATH" ) )
    {
        setAuthDbDirPath( getenv( "QGIS_AUTH_DB_DIR_PATH" ) );
    }
    else
    {
        setAuthDbDirPath(qgisSettingsDirPath());
    }

    // store system environment variables passed to application, before they are adjusted
    QMap<QString, QString> systemEnvVarMap;
    QString passfile( "QGIS_AUTH_PASSWORD_FILE" ); // QString, for comparison
    Q_FOREACH ( const QString &varStr, QProcess::systemEnvironment() )
    {
      int pos = varStr.indexOf( QLatin1Char( '=' ) );
      if ( -1 == pos )
        continue;
      QString varStrName = varStr.left( pos );
      QString varStrValue = varStr.mid( pos + 1 );
      if ( varStrName != passfile )
      {
        systemEnvVarMap.insert( varStrName, varStrValue );
      }
    }
    ABISYM( mNgSystemEnvVars ) = systemEnvVarMap;

    // set max. thread count to -1
    // this should be read from QSettings but we don't know where they are at this point
    // so we read actual value in main.cpp
    setMaxThreads(-1);
}

QString NGQgsApplication::i18nPath()
{
    return pkgDataPath() + QLatin1String( "/i18n/" );
}

QString NGQgsApplication::pluginsPath()
{
    return prefixPath() + QLatin1String(QGIS_PLUGIN_SUBDIR);
}

QString NGQgsApplication::qtPluginsPath()
{
    return prefixPath() + QLatin1String(QT_PLUGIN_SUBDIR);
}

QString NGQgsApplication::qgisSettingsDirPath()
{
    return ABISYM( mNgConfigPath );
}

QMap<QString, QString> NGQgsApplication::systemEnvVars()
{
    return ABISYM( mNgSystemEnvVars );
}

QString NGQgsApplication::platform()
{
    return sPlatformName;
}

QString NGQgsApplication::qgisMasterDbFilePath()
{
    return prefixPath() + QLatin1String(QGIS_DATA_SUBDIR) + QDir::separator() +
            QLatin1String("qgis.db");
}

QString NGQgsApplication::srsDbFilePath()
{
    return prefixPath() + QLatin1String(QGIS_DATA_SUBDIR) + QDir::separator() +
            QLatin1String("srs.db");
}

QString NGQgsApplication::defaultStyleV2Path()
{
    return prefixPath() + QLatin1String(QGIS_DATA_SUBDIR) + QDir::separator() +
            QLatin1String("symbology-ng-style.db");
}

QString NGQgsApplication::defaultThemesFolder()
{
    return prefixPath() + QLatin1String(QGIS_DATA_SUBDIR) + QDir::separator() +
            QLatin1String("themes");
}
