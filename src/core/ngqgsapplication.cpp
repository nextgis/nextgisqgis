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

#ifdef Q_OS_WIN
#include <winsock.h>
#include <windows.h>
#include <Lmcons.h>
#define SECURITY_WIN32
#include <Security.h>
#pragma comment( lib, "Secur32.lib" )
#else
#include <unistd.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <pwd.h>
#endif

const char* NGQgsApplication::NGQGIS_ORGANIZATION_NAME = VENDOR;
const char* NGQgsApplication::NGQGIS_ORGANIZATION_DOMAIN = VENDOR_DOMAIN;
const char* NGQgsApplication::NGQGIS_APPLICATION_NAME = APP_NAME;

//------------------------------------------------------------------------------
// NGQgsApplication
//------------------------------------------------------------------------------

NGQgsApplication::NGQgsApplication(int &argc, char **argv, bool GUIenabled,
                                   const QString &customConfigPath,
                                   const QString &platformName) :
    QgsApplication(argc, argv, GUIenabled, customConfigPath, platformName)
{
    sPlatformName = platformName;

    NGQgsApplication::init( customConfigPath );
}

void NGQgsApplication::putenv( const QString &var, const QString &val, int defaultVal )
{
#ifdef _MSC_VER
  _putenv_s( var.toStdString().c_str(), val.toStdString().c_str() );
#else
  setenv( var.toStdString().c_str(), val.toStdString().c_str(), defaultVal );
#endif
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
        customConfigPath = QString( "%1.config%2qgis%3" )
                .arg( QDir::homePath() + QDir::separator() )
                .arg( QDir::separator() + QLatin1String(VENDOR) + QDir::separator() )
                .arg( VERSION_INT / 10000 );
        putenv("QGIS_CUSTOM_CONFIG_PATH", customConfigPath.toUtf8(), FALSE);
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
    QDir defaultPrefixDir("/usr");
#endif
    QString defaultPrefixPath =  defaultPrefixDir.absolutePath();

    QString prefixPath( getenv( "QGIS_PREFIX_PATH" ) ?
                            getenv( "QGIS_PREFIX_PATH" ) : defaultPrefixPath );
    QgsDebugMsg( QString( "prefixPath(): %1" ).arg( prefixPath ) );
    // NOTE: Set prefix, plugin, data (package), svg paths here
    ABISYM( mDefaultSvgPaths ).clear();
    setPrefixPath( prefixPath, true );
    putenv("QGIS_PREFIX_PATH", prefixPath.toUtf8(), FALSE);

    if ( !customConfigPath.isEmpty() )
    {
      ABISYM( mConfigPath ) = customConfigPath + QDir::separator(); // make sure trailing slash is included
    }

    ABISYM( mDefaultSvgPaths ) << customConfigPath + QDir::separator() +
                                  QLatin1String("svg");
    ABISYM( mRunningFromBuildDir ) = false;

    if ( getenv( "QGIS_AUTH_DB_DIR_PATH" ) )
    {
        setAuthDbDirPath( getenv( "QGIS_AUTH_DB_DIR_PATH" ) );
    }
    else
    {
        ABISYM( mAuthDbDirPath ) = qgisSettingsDirPath();
        setAuthDbDirPath(qgisSettingsDirPath());
        putenv( "QGIS_AUTH_DB_DIR_PATH", qgisSettingsDirPath().toUtf8(), FALSE );
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
    ABISYM( mSystemEnvVars ) = systemEnvVarMap;

#ifdef Q_OS_WIN
  TCHAR name [ UNLEN + 1 ];
  DWORD size = UNLEN + 1;

  //note - this only works for accounts connected to domain
  if ( GetUserNameEx( NameDisplay, ( TCHAR* )name, &size ) )
  {
    sUserFullName = QString( name );
  }

  //fall back to login name
  if ( sUserFullName.isEmpty() )
    sUserFullName = userLoginName();
#else
  struct passwd *p = getpwuid( getuid() );

  if ( p )
  {
    QString gecosName = QString::fromUtf8( p->pw_gecos );
    sUserFullName = gecosName.left( gecosName.indexOf( ',', 0 ) );
  }

#endif

    // set max. thread count to -1
    // this should be read from QSettings but we don't know where they are at this point
    // so we read actual value in main.cpp
    setMaxThreads(-1);
}

QString NGQgsApplication::pluginsPath()
{
    return prefixPath() + QLatin1String(QGIS_PLUGIN_SUBDIR);
}

QString NGQgsApplication::qtPluginsPath()
{
    return prefixPath() + QLatin1String(QT_PLUGIN_SUBDIR);
}

QString NGQgsApplication::showSettings()
{
  QString myEnvironmentVar( getenv( "QGIS_PREFIX_PATH" ) );
  QString myState = tr( "Application state:\n"
                        "QGIS_PREFIX_PATH:\t%1\n"
                        "Prefix:\t\t%2\n"
                        "Library Path:\t\t%3\n"
                        "Plugin Path:\t\t%4\n"
                        "Package Data Path:\t%5\n"
                        "Active Theme Name:\t%6\n"
                        "Active Theme Path:\t%7\n"
                        "Default Theme Path:\t%8\n"
                        "SVG Search Paths:\t%9\n"
                        "User DB Path:\t%10\n"
                        "Auth DB Path:\t%11\n" )
                    .arg( myEnvironmentVar,
                          prefixPath(),
                          libraryPath(),
                          pluginPath(),
                          pkgDataPath(),
                          themeName(),
                          activeThemePath(),
                          defaultThemePath(),
                          svgPaths().join( tr( "\n\t\t", "match indentation of application state" ) )
                    )
                    .arg( qgisMasterDbFilePath(),
                          qgisAuthDbFilePath()
                    );
  return myState;
}

QString NGQgsApplication::fontsPath()
{
    return pkgDataPath() + QDir::separator() + QLatin1String( "fonts" );
}
/*
QString NGQgsApplication::i18nPath()
{
    return pkgDataPath() + QLatin1String( "/i18n/" );
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
*/
