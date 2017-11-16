/***************************************************************************
                            main.cpp  -  description
                              -------------------
              begin                : Fri Jun 21 10:48:28 AKDT 2002
              copyright            : (C) 2002 by Gary E.Sherman
              email                : sherman at mrcc.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifdef _MSC_VER
#undef APP_EXPORT
#define APP_EXPORT __declspec(dllimport)
#endif

//qt includes
#include <QBitmap>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QFont>
#include <QFontDatabase>
#include <QPixmap>
#include <QLocale>
#include <QLibraryInfo>
#include <QSettings>
#include <QSplashScreen>
#include <QString>
#include <QStringList>
#include <QStyle>
#if QT_VERSION < 0x050000
#include <QPlastiqueStyle>
#endif
#include <QDesktopWidget>
#include <QTranslator>
#include <QImageReader>
#include <QMessageBox>

#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#ifdef WIN32
// Open files in binary mode
#include <fcntl.h> /*  _O_BINARY */
#include <windows.h>
#include <dbghelp.h>
#include <time.h>
#ifdef MSVC
#undef _fmode
int _fmode = _O_BINARY;
#else
// Only do this if we are not building on windows with msvc.
// Recommended method for doing this with msvc is with a call to _set_fmode
// which is the first thing we do in main().
// Similarly, with MinGW set _fmode in main().
#endif  //_MSC_VER
#else
#include <getopt.h>
#endif

#ifdef Q_OS_MACX
#include <ApplicationServices/ApplicationServices.h>
#if MAC_OS_X_VERSION_MAX_ALLOWED < 1050
typedef SInt32 SRefCon;
#endif
// For setting the maximum open files limit higher
#include <sys/resource.h>
#include <limits.h>
#endif

#if ((defined(linux) || defined(__linux__)) && !defined(ANDROID)) || defined(__FreeBSD__)
#include <unistd.h>
#include <execinfo.h>
#include <signal.h>
#include <sys/wait.h>
#include <errno.h>
#endif

#include "qgscustomization.h"
#include "qgsfontutils.h"
#include "qgspluginregistry.h"
#include "qgsmessagelog.h"
#include "qgspythonrunner.h"
#include "qgslocalec.h"
#include "qgsmapcanvas.h"
#include "qgsexception.h"
#include "qgsproject.h"
#include "qgsrectangle.h"
#include "qgslogger.h"
#include "qgsdxfexport.h"
#include "qgsvisibilitypresets.h"
#include "qgsmaplayerregistry.h"
#include "qgsvectorlayer.h"

#include "ngqgsapplication.h"
#include "ngcustomization.h"

/** Print usage text
 */
void usage( QString appName )
{
  QStringList msg;

  msg
  << VENDOR << " QGIS - " << VENDOR_VERSION << " (" << VERSION << ")\n"
  << VENDOR << " QGIS is a user friendly Open Source Geographic Information System.\n"
  << "Usage: " << appName <<  " [OPTION] [FILE]\n"
  << "  OPTION:\n"
  << "\t[--snapshot filename]\temit snapshot of loaded datasets to given file\n"
  << "\t[--width width]\twidth of snapshot to emit\n"
  << "\t[--height height]\theight of snapshot to emit\n"
  << "\t[--lang language]\tuse language for interface text\n"
  << "\t[--project projectfile]\tload the given QGIS project\n"
  << "\t[--extent xmin,ymin,xmax,ymax]\tset initial map extent\n"
  << "\t[--nologo]\thide splash screen\n"
  << "\t[--noversioncheck]\tdon't check for new version of QGIS at startup\n"
  << "\t[--noplugins]\tdon't restore plugins on startup\n"
  << "\t[--nocustomization]\tdon't apply GUI customization\n"
  << "\t[--customizationfile]\tuse the given ini file as GUI customization\n"
  << "\t[--optionspath path]\tuse the given QSettings path\n"
  << "\t[--configpath path]\tuse the given path for all user configuration\n"
  << "\t[--authdbdirectory path] use the given directory for authentication database\n"
  << "\t[--code path]\trun the given python file on load\n"
  << "\t[--defaultui]\tstart by resetting user ui settings to default\n"
  << "\t[--dxf-export filename.dxf]\temit dxf output of loaded datasets to given file\n"
  << "\t[--dxf-extent xmin,ymin,xmax,ymax]\tset extent to export to dxf\n"
  << "\t[--dxf-symbology-mode none|symbollayer|feature]\tsymbology mode for dxf output\n"
  << "\t[--dxf-scale-denom scale]\tscale for dxf output\n"
  << "\t[--dxf-encoding encoding]\tencoding to use for dxf output\n"
  << "\t[--dxf-preset visiblity-preset]\tlayer visibility preset to use for dxf output\n"
  << "\t[--help]\tthis text\n"
  << "\t[--]\ttreat all following arguments as FILEs\n\n"
  << "  FILE:\n"
  << "    Files specified on the command line can include rasters,\n"
  << "    vectors, and QGIS project files (.qgs): \n"
  << "     1. Rasters - supported formats include GeoTiff, DEM \n"
  << "        and others supported by GDAL\n"
  << "     2. Vectors - supported formats include ESRI Shapefiles\n"
  << "        and others supported by OGR and PostgreSQL layers using\n"
  << "        the PostGIS extension\n"  ; // OK

#ifdef Q_OS_WIN
  MessageBox( nullptr,
              msg.join( QString() ).toLocal8Bit().constData(),
              "QGIS command line options",
              MB_OK );
#else
  std::cerr << msg.join( QString() ).toLocal8Bit().constData();
#endif

} // usage()


/////////////////////////////////////////////////////////////////
// Command line options 'behaviour' flag setup
////////////////////////////////////////////////////////////////

// These two are global so that they can be set by the OpenDocuments
// AppleEvent handler as well as by the main routine argv processing

// This behaviour will cause QGIS to autoload a project
static QString myProjectFileName = "";

// This is the 'leftover' arguments collection
static QStringList myFileList;


/* Test to determine if this program was started on Mac OS X by double-clicking
 * the application bundle rather then from a command line. If clicked, argv[1]
 * contains a process serial number in the form -psn_0_1234567. Don't process
 * the command line arguments in this case because argv[1] confuses the processing.
 */
bool bundleclicked( int argc, char *argv[] )
{
  return ( argc > 1 && memcmp( argv[1], "-psn_", 5 ) == 0 );
}

void myPrint( const char *fmt, ... )
{
  va_list ap;
  va_start( ap, fmt );
#if defined(Q_OS_WIN)
  char buffer[1024];
  vsnprintf( buffer, sizeof buffer, fmt, ap );
  OutputDebugString( buffer );
#else
  vfprintf( stderr, fmt, ap );
#endif
  va_end( ap );
}

static void dumpBacktrace( unsigned int depth )
{
    //TODO: Google breakpud
    Q_UNUSED( depth );
}

/*
 * Hook into the qWarning/qFatal mechanism so that we can channel messages
 * from libpng to the user.
 *
 * Some JPL WMS images tend to overload the libpng 1.2.2 implementation
 * somehow (especially when zoomed in)
 * and it would be useful for the user to know why their picture turned up blank
 *
 * Based on qInstallMsgHandler example code in the Qt documentation.
 *
 */
void myMessageOutput( QtMsgType type, const char *msg )
{
  switch ( type )
  {
    case QtDebugMsg:
      myPrint( "%s\n", msg );
      if ( strncmp( msg, "Backtrace", 9 ) == 0 )
        dumpBacktrace( atoi( msg + 9 ) );
      break;
    case QtCriticalMsg:
      myPrint( "Critical: %s\n", msg );
      break;
    case QtWarningMsg:
      myPrint( "Warning: %s\n", msg );

#ifdef QGISDEBUG
      // Print all warnings except setNamedColor.
      // Only seems to happen on windows
      if ( 0 != strncmp( msg, "QColor::setNamedColor: Unknown color name 'param", 48 ) )
      {
        // TODO: Verify this code in action.
        dumpBacktrace( 20 );
        QgsMessageLog::logMessage( msg, "Qt" );
      }
#endif

      // TODO: Verify this code in action.
      if ( 0 == strncmp( msg, "libpng error:", 13 ) )
      {
        // Let the user know
        QgsMessageLog::logMessage( msg, "libpng" );
      }

      break;
    case QtFatalMsg:
    {
      myPrint( "Fatal: %s\n", msg );
      dumpBacktrace( 256 );
      abort();                    // deliberately dump core
    }


#if QT_VERSION >= 0x050500
    case QtInfoMsg:
      myPrint( "Info: %s\n", msg );
      break;
#endif

  }
}

template<typename Char>
static QVector<Char*> qWinCmdLine(Char *cmdParam, int length, int &argc)
{
    QVector<Char*> argv(8);
    Char *p = cmdParam;
    Char *p_end = p + length;

    argc = 0;

    while (*p && p < p_end) {                                // parse cmd line arguments
        while (QChar((short)(*p)).isSpace())                          // skip white space
            p++;
        if (*p && p < p_end) {                                // arg starts
            int quote;
            Char *start, *r;
            if (*p == Char('\"') || *p == Char('\'')) {        // " or ' quote
                quote = *p;
                start = ++p;
            } else {
                quote = 0;
                start = p;
            }
            r = start;
            while (*p && p < p_end) {
                if (quote) {
                    if (*p == quote) {
                        p++;
                        if (QChar((short)(*p)).isSpace())
                            break;
                        quote = 0;
                    }
                }
                if (*p == '\\') {                // escape char?
                    p++;
                    if (*p == Char('\"') || *p == Char('\''))
                        ;                        // yes
                    else
                        p--;                        // treat \ literally
                } else {
                    if (!quote && (*p == Char('\"') || *p == Char('\''))) {        // " or ' quote
                        quote = *p++;
                        continue;
                    } else if (QChar((short)(*p)).isSpace() && !quote)
                        break;
                }
                if (*p)
                    *r++ = *p++;
            }
            if (*p && p < p_end)
                p++;
            *r = Char('\0');

            if (argc >= (int)argv.size()-1)        // expand array
                argv.resize(argv.size()*2);
            argv[argc++] = start;
        }
    }
    argv[argc] = 0;

    return argv;
}
static inline QStringList qWinCmdArgs(QString cmdLine) // not const-ref: this might be modified
{
    QStringList args;

    int argc = 0;
    QVector<wchar_t*> argv = qWinCmdLine<wchar_t>((wchar_t *)cmdLine.utf16(), cmdLine.length(), argc);
    for (int a = 0; a < argc; ++a) {
        args << QString::fromWCharArray(argv[a]);
    }

    return args;
}

int main( int argc, char *argv[] )
{

#ifdef Q_OS_MACX
  // Increase file resource limits (i.e., number of allowed open files)
  // (from code provided by Larry Biehl, Purdue University, USA, from 'MultiSpec' project)
  // This is generally 256 for the soft limit on Mac
  // NOTE: setrlimit() must come *before* initialization of stdio strings,
  //       e.g. before any debug messages, or setrlimit() gets ignored
  // see: http://stackoverflow.com/a/17726104/2865523
  struct rlimit rescLimit;
  if ( getrlimit( RLIMIT_NOFILE, &rescLimit ) == 0 )
  {
    rlim_t oldSoft( rescLimit.rlim_cur );
    rlim_t oldHard( rescLimit.rlim_max );
#ifdef OPEN_MAX
    rlim_t newSoft( OPEN_MAX );
    rlim_t newHard( std::min( oldHard, newSoft ) );
#else
    rlim_t newSoft( 4096 );
    rlim_t newHard( std::min(( rlim_t )8192, oldHard ) );
#endif
    if ( rescLimit.rlim_cur < newSoft )
    {
      rescLimit.rlim_cur = newSoft;
      rescLimit.rlim_max = newHard;

      if ( setrlimit( RLIMIT_NOFILE, &rescLimit ) == 0 )
      {
        QgsDebugMsg( QString( "Mac RLIMIT_NOFILE Soft/Hard NEW: %1 / %2" )
                     .arg( rescLimit.rlim_cur ).arg( rescLimit.rlim_max ) );
      }
    }
    Q_UNUSED( oldSoft ); //avoid warnings
    QgsDebugMsg( QString( "Mac RLIMIT_NOFILE Soft/Hard ORIG: %1 / %2" )
                 .arg( oldSoft ).arg( oldHard ) );
  }
#endif

  QgsDebugMsg( QString( "Starting qgis main" ) );
#ifdef WIN32  // Windows
#ifdef _MSC_VER
  _set_fmode( _O_BINARY );
#else //MinGW
  _fmode = _O_BINARY;
#endif  // _MSC_VER
#endif  // WIN32

// TODO: Add Google breakpad here
  // Set up the custom qWarning/qDebug custom handler
#ifndef ANDROID
  qInstallMsgHandler( myMessageOutput );
#endif

#ifdef Q_OS_WIN
  SetUnhandledExceptionFilter( QgisApp::qgisCrashDump );
#endif

  // initialize random number seed
  qsrand( time( nullptr ) );

  /////////////////////////////////////////////////////////////////
  // Command line options 'behaviour' flag setup
  ////////////////////////////////////////////////////////////////

  //
  // Parse the command line arguments, looking to see if the user has asked for any
  // special behaviours. Any remaining non command arguments will be kept aside to
  // be passed as a list of layers and / or a project that should be loaded.
  //

  // This behaviour is used to load the app, snapshot the map,
  // save the image to disk and then exit
  QString mySnapshotFileName = "";
  int mySnapshotWidth = 800;
  int mySnapshotHeight = 600;

  bool myHideSplash = false;
  bool mySkipVersionCheck = true; // disable QGIS version check (we have own NextGIS QGIS version check)
  bool myRestoreDefaultWindowState = false;
  bool myRestorePlugins = true;
  bool myCustomization = true;

  QString dxfOutputFile;
  QgsDxfExport::SymbologyExport dxfSymbologyMode = QgsDxfExport::SymbolLayerSymbology;
  double dxfScaleDenom = 50000.0;
  QString dxfEncoding = "CP1252";
  QString dxfPreset;
  QgsRectangle dxfExtent;

  // This behaviour will set initial extent of map canvas, but only if
  // there are no command line arguments. This gives a usable map
  // extent when qgis starts with no layers loaded. When layers are
  // loaded, we let the layers define the initial extent.
  QString myInitialExtent = "";
  if ( argc == 1 )
    myInitialExtent = "-1,-1,1,1";

  // This behaviour will allow you to force the use of a translation file
  // which is useful for testing
  QString myTranslationCode;

  // The user can specify a path which will override the default path of custom
  // user settings (~/.qgis) and it will be used for QSettings INI file
  QString configpath;
  QString optionpath;
  QString authdbdirectory;

  QString pythonfile;

  QString customizationfile;

  QStringList args;

  if ( !bundleclicked( argc, argv ) )
  {
    // It will use QString::fromLocal8Bit( argv ) under Unix and GetCommandLine() under Windows.
    // NOTE: Don't create QCoreApplication as after it destruction qt.conf not used any more
#ifdef Q_OS_WIN
    QString cmdline = QString::fromWCharArray(GetCommandLineW());
    args = qWinCmdArgs(cmdline);
#else
    for (int a = 0; a < argc; ++a)
    {
        args << QString::fromLocal8Bit(argv[a]);
    }
#endif

    for ( int i = 1; i < args.size(); ++i )
    {
      const QString &arg = args[i];

      if ( arg == "--help" || arg == "-?" )
      {
        usage( args[0] );
        return 2;
      }
      else if ( arg == "--nologo" || arg == "-n" )
      {
        myHideSplash = true;
      }
      else if ( arg == "--noversioncheck" || arg == "-V" )
      {
        mySkipVersionCheck = true;
      }
      else if ( arg == "--noplugins" || arg == "-P" )
      {
        myRestorePlugins = false;
      }
      else if ( arg == "--nocustomization" || arg == "-C" )
      {
        myCustomization = false;
      }
      else if ( i + 1 < argc && ( arg == "--snapshot" || arg == "-s" ) )
      {
        mySnapshotFileName = QDir::toNativeSeparators( QFileInfo( args[++i] ).absoluteFilePath() );
      }
      else if ( i + 1 < argc && ( arg == "--width" || arg == "-w" ) )
      {
        mySnapshotWidth = QString( args[++i] ).toInt();
      }
      else if ( i + 1 < argc && ( arg == "--height" || arg == "-h" ) )
      {
        mySnapshotHeight = QString( args[++i] ).toInt();
      }
      else if ( i + 1 < argc && ( arg == "--lang" || arg == "-l" ) )
      {
        myTranslationCode = args[++i];
      }
      else if ( i + 1 < argc && ( arg == "--project" || arg == "-p" ) )
      {
        myProjectFileName = QDir::toNativeSeparators( QFileInfo( args[++i] ).absoluteFilePath() );
      }
      else if ( i + 1 < argc && ( arg == "--extent" || arg == "-e" ) )
      {
        myInitialExtent = args[++i];
      }
      else if ( i + 1 < argc && ( arg == "--optionspath" || arg == "-o" ) )
      {
        optionpath = QDir::toNativeSeparators( QDir( args[++i] ).absolutePath() );
      }
      else if ( i + 1 < argc && ( arg == "--configpath" || arg == "-c" ) )
      {
        configpath = QDir::toNativeSeparators( QDir( args[++i] ).absolutePath() );
      }
      else if ( i + 1 < argc && ( arg == "--authdbdirectory" || arg == "-a" ) )
      {
        authdbdirectory = QDir::toNativeSeparators( QDir( args[++i] ).absolutePath() );
      }
      else if ( i + 1 < argc && ( arg == "--code" || arg == "-f" ) )
      {
        pythonfile = QDir::toNativeSeparators( QFileInfo( args[++i] ).absoluteFilePath() );
      }
      else if ( i + 1 < argc && ( arg == "--customizationfile" || arg == "-z" ) )
      {
        customizationfile = QDir::toNativeSeparators( QFileInfo( args[++i] ).absoluteFilePath() );
      }
      else if ( arg == "--defaultui" || arg == "-d" )
      {
        myRestoreDefaultWindowState = true;
      }
      else if ( arg == "--dxf-export" )
      {
        dxfOutputFile = args[++i];
      }
      else if ( arg == "--dxf-extent" )
      {
        QgsLocaleNumC l;
        QString ext( args[++i] );
        QStringList coords( ext.split( ',' ) );

        if ( coords.size() != 4 )
        {
          std::cerr << "invalid dxf extent " << ext.toStdString() << std::endl;
          return 2;
        }

        for ( int i = 0; i < 4; i++ )
        {
          bool ok;
          double d;

          d = coords[i].toDouble( &ok );
          if ( !ok )
          {
            std::cerr << "invalid dxf coordinate " << coords[i].toStdString() << " in extent " << ext.toStdString() << std::endl;
            return 2;
          }

          switch ( i )
          {
            case 0:
              dxfExtent.setXMinimum( d );
              break;
            case 1:
              dxfExtent.setYMinimum( d );
              break;
            case 2:
              dxfExtent.setXMaximum( d );
              break;
            case 3:
              dxfExtent.setYMaximum( d );
              break;
          }
        }
      }
      else if ( arg == "--dxf-symbology-mode" )
      {
        QString mode( args[++i] );
        if ( mode == "none" )
        {
          dxfSymbologyMode = QgsDxfExport::NoSymbology;
        }
        else if ( mode == "symbollayer" )
        {
          dxfSymbologyMode = QgsDxfExport::SymbolLayerSymbology;
        }
        else if ( mode == "feature" )
        {
          dxfSymbologyMode = QgsDxfExport::FeatureSymbology;
        }
        else
        {
          std::cerr << "invalid dxf symbology mode " << mode.toStdString() << std::endl;
          return 2;
        }
      }
      else if ( arg == "--dxf-scale-denom" )
      {
        bool ok;
        QString scale( args[++i] );
        dxfScaleDenom = scale.toDouble( &ok );
        if ( !ok )
        {
          std::cerr << "invalid dxf scale " << scale.toStdString() << std::endl;
          return 2;
        }
      }
      else if ( arg == "--dxf-encoding" )
      {
        dxfEncoding = args[++i];
      }
      else if ( arg == "--dxf-preset" )
      {
        dxfPreset = args[++i];
      }
      else if ( arg == "--" )
      {
        for ( i++; i < args.size(); ++i )
          myFileList.append( QDir::toNativeSeparators( QFileInfo( args[i] ).absoluteFilePath() ) );
      }
      else
      {
        myFileList.append( QDir::toNativeSeparators( QFileInfo( args[i] ).absoluteFilePath() ) );
      }
    }
  }

  /////////////////////////////////////////////////////////////////////
  // If no --project was specified, parse the args to look for a     //
  // .qgs file and set myProjectFileName to it. This allows loading  //
  // of a project file by clicking on it in various desktop managers //
  // where an appropriate mime-type has been set up.                 //
  /////////////////////////////////////////////////////////////////////
  if ( myProjectFileName.isEmpty() )
  {
    // check for a .qgs
    for ( int i = 0; i < args.size(); i++ )
    {
      QString arg = QDir::toNativeSeparators( QFileInfo( args[i] ).absoluteFilePath() );
      if ( arg.contains( ".qgs" ) )
      {
        myProjectFileName = arg;
        break;
      }
    }
  }

  /////////////////////////////////////////////////////////////////////
  // Now we have the handlers for the different behaviours...
  ////////////////////////////////////////////////////////////////////

  /////////////////////////////////////////////////////////////////////
  // Initialise the application and the translation stuff
  /////////////////////////////////////////////////////////////////////

#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC) && !defined(ANDROID)
  bool myUseGuiFlag = nullptr != getenv( "DISPLAY" );
#else
  bool myUseGuiFlag = true;
#endif
  if ( !myUseGuiFlag )
  {
    std::cerr << QObject::tr(
                "QGIS starting in non-interactive mode not supported.\n"
                "You are seeing this message most likely because you "
                "have no DISPLAY environment variable set.\n"
              ).toUtf8().constData();
    exit( 1 ); //exit for now until a version of qgis is capabable of running non interactive
  }

  if ( !optionpath.isEmpty() || !configpath.isEmpty() )
  {
    // tell QSettings to use INI format and save the file in custom config path
    QSettings::setDefaultFormat( QSettings::IniFormat );
    QSettings::setPath( QSettings::IniFormat, QSettings::UserScope, optionpath.isEmpty() ? configpath : optionpath );
  }

  // GUI customization is enabled according to settings (loaded when instance is created)
  // we force disabled here if --nocustomization argument is used
  if ( !myCustomization )
  {
    QgsCustomization::instance()->setEnabled( false );
  }

  NGQgsApplication myApp( argc, argv, myUseGuiFlag, configpath );

  qDebug("Plugin path: %s", QLibraryInfo::location(QLibraryInfo::PluginsPath).toLocal8Bit().constData());
  qDebug("Prefix: %s", QLibraryInfo::location(QLibraryInfo::PrefixPath).toLocal8Bit().constData());

  // List font directory
  QDir fontsDir(NGQgsApplication::fontsPath());
  QStringList filters;
  filters << "*.ttf" << "*.otf";
  QStringList fontsList = fontsDir.entryList(filters,  QDir::Files);
  // Add font to database
  QStringList::Iterator it = fontsList.begin();
  while (it != fontsList.end()) {
      QFontDatabase::addApplicationFont( fontsDir.filePath(*it) );
      ++it;
  }

  myApp.setWindowIcon( QIcon( QgsApplication::appIconPath() ) );

  //
  // Set up the QSettings environment must be done after qapp is created
  QCoreApplication::setOrganizationName( NGQgsApplication::NGQGIS_ORGANIZATION_NAME );
  QCoreApplication::setOrganizationDomain( NGQgsApplication::NGQGIS_ORGANIZATION_DOMAIN );
  QCoreApplication::setApplicationName( NGQgsApplication::NGQGIS_APPLICATION_NAME );
  QCoreApplication::setAttribute( Qt::AA_DontShowIconsInMenus, false );

  QSettings* customizationsettings;
  if ( !optionpath.isEmpty() || !configpath.isEmpty() )
  {
    // tell QSettings to use INI format and save the file in custom config path
    QSettings::setDefaultFormat( QSettings::IniFormat );
    QString path = optionpath.isEmpty() ? configpath : optionpath;
    QSettings::setPath( QSettings::IniFormat, QSettings::UserScope, path );
    customizationsettings = new QSettings( QSettings::IniFormat, QSettings::UserScope, "QGIS", "QGISCUSTOMIZATION2" );
  }
  else
  {
    customizationsettings = new QSettings( "QGIS", "QGISCUSTOMIZATION2" );
  }

  // Using the customizationfile option always overrides the option and config path options.
  if ( !customizationfile.isEmpty() )
  {
    customizationsettings = new QSettings( customizationfile, QSettings::IniFormat );
    QgsCustomization::instance()->setEnabled( true );
  }

  // Load and set possible default customization, must be done afterQgsApplication init and QSettings ( QCoreApplication ) init
  QgsCustomization::instance()->setSettings( customizationsettings );
  QgsCustomization::instance()->loadDefault();

#ifdef Q_OS_MACX
  // If the GDAL plugins are bundled with the application and GDAL_DRIVER_PATH
  // is not already defined, use the GDAL plugins in the application bundle.
  QString gdalPlugins( QCoreApplication::applicationDirPath().append( "/../../../../" + QString( QGIS_PLUGIN_SUBDIR ) ) );
  if ( QFile::exists( gdalPlugins ) && !getenv( "GDAL_DRIVER_PATH" ) )
  {
    setenv( "GDAL_DRIVER_PATH", gdalPlugins.toUtf8(), 1 );
  }

  // Point GDAL_DATA at any GDAL share directory embedded in the app bundle
  // TODO: On Windows and Mac OS X get gdal_data path from env in Linux not needed at all
  if ( !getenv( "GDAL_DATA" ) )
  {
    QStringList gdalShares;
    QString appResources( QDir::cleanPath( QgsApplication::pkgDataPath() ) );
    gdalShares << QCoreApplication::applicationDirPath().append( "/share/gdal" )
    << appResources.append( "/share/gdal" )
    << appResources.append( "/gdal" );
    Q_FOREACH ( const QString& gdalShare, gdalShares )
    {
      if ( QFile::exists( gdalShare ) )
      {
        setenv( "GDAL_DATA", gdalShare.toUtf8().constData(), 1 );
        break;
      }
    }
  }
#endif
#ifdef Q_OS_WIN
  putenv( QString("GDAL_DATA=" + QCoreApplication::applicationDirPath().append( "/../share/gdal" )).toUtf8().constData() );
  putenv( QString("GDAL_DRIVER_PATH=" + QCoreApplication::applicationDirPath().append( "/../" ) + QString( QGIS_PLUGIN_SUBDIR ) ).toUtf8().constData() );
#endif

  QSettings mySettings;

  // update any saved setting for older themes to new default 'gis' theme (2013-04-15)
  if ( mySettings.contains( "/Themes" ) )
  {
    QString theme = mySettings.value( "/Themes", "default" ).toString();
    if ( theme == "gis"
         || theme == "classic"
         || theme == "nkids" )
    {
      mySettings.setValue( "/Themes", QString( "default" ) );
    }
  }


  // custom environment variables
  QMap<QString, QString> systemEnvVars = NGQgsApplication::systemEnvVars();
  bool useCustomVars = mySettings.value( "qgis/customEnvVarsUse", QVariant( false ) ).toBool();
  if ( useCustomVars )
  {
    QStringList customVarsList = mySettings.value( "qgis/customEnvVars", "" ).toStringList();
    if ( !customVarsList.isEmpty() )
    {
      Q_FOREACH ( const QString &varStr, customVarsList )
      {
        int pos = varStr.indexOf( QLatin1Char( '|' ) );
        if ( pos == -1 )
          continue;
        QString envVarApply = varStr.left( pos );
        QString varStrNameValue = varStr.mid( pos + 1 );
        pos = varStrNameValue.indexOf( QLatin1Char( '=' ) );
        if ( pos == -1 )
          continue;
        QString envVarName = varStrNameValue.left( pos );
        QString envVarValue = varStrNameValue.mid( pos + 1 );

        if ( systemEnvVars.contains( envVarName ) )
        {
          if ( envVarApply == "prepend" )
          {
            envVarValue += systemEnvVars.value( envVarName );
          }
          else if ( envVarApply == "append" )
          {
            envVarValue = systemEnvVars.value( envVarName ) + envVarValue;
          }
        }

        if ( systemEnvVars.contains( envVarName ) && envVarApply == "unset" )
        {
#ifdef Q_OS_WIN
          putenv( envVarName.toUtf8().constData() );
#else
          unsetenv( envVarName.toUtf8().constData() );
#endif
        }
        else
        {
#ifdef Q_OS_WIN
          if ( envVarApply != "undefined" || !getenv( envVarName.toUtf8().constData() ) )
            putenv( QString( "%1=%2" ).arg( envVarName ).arg( envVarValue ).toUtf8().constData() );
#else
          setenv( envVarName.toUtf8().constData(), envVarValue.toUtf8().constData(), envVarApply == "undefined" ? 0 : 1 );
#endif
        }
      }
    }
  }

#ifdef QGISDEBUG
  QgsFontUtils::loadStandardTestFonts( QStringList() << "Roman" << "Bold" );
#endif

  // Set the application style.  If it's not set QT will use the platform style except on Windows
  // as it looks really ugly so we use QPlastiqueStyle.
  QString style = mySettings.value( "/qgis/style" ).toString();
  if ( !style.isNull() )
  {
    QApplication::setStyle( style );
    mySettings.setValue( "/qgis/style", QApplication::style()->objectName() );
  }
#ifdef Q_OS_WIN
#if QT_VERSION < 0x050000
  else
    QApplication::setStyle( new QPlastiqueStyle );
#endif
#endif

  /* Translation file for QGIS.
   */
  QString i18nPath = NGQgsApplication::i18nPath();
  QString myUserLocale = mySettings.value( "locale/userLocale", "" ).toString();
  bool myLocaleOverrideFlag = mySettings.value( "locale/overrideFlag", false ).toBool();

  //
  // Priority of translation is:
  //  - command line
  //  - user specified in options dialog (with group checked on)
  //  - system locale
  //
  //  When specifying from the command line it will change the user
  //  specified user locale
  //
  if ( !myTranslationCode.isNull() && !myTranslationCode.isEmpty() )
  {
    mySettings.setValue( "locale/userLocale", myTranslationCode );
  }
  else
  {
    if ( !myLocaleOverrideFlag || myUserLocale.isEmpty() )
    {
      myTranslationCode = QLocale::system().name();
      //setting the locale/userLocale when the --lang= option is not set will allow third party
      //plugins to always use the same locale as the QGIS, otherwise they can be out of sync
      mySettings.setValue( "locale/userLocale", myTranslationCode );
    }
    else
    {
      myTranslationCode = myUserLocale;
    }
  }

  QTranslator qgistor( nullptr );
  QTranslator qttor( nullptr );
  if ( myTranslationCode != "C" )
  {
    if ( qgistor.load( QString( "qgis_" ) + myTranslationCode, i18nPath ) )
    {
      myApp.installTranslator( &qgistor );
    }
    else
    {
      qWarning( "loading of qgis translation failed [%s]", QString( "%1/qgis_%2" ).arg( i18nPath, myTranslationCode ).toLocal8Bit().constData() );
    }

    /* Translation file for Qt.
     * The strings from the QMenuBar context section are used by Qt/Mac to shift
     * the About, Preferences and Quit items to the Mac Application menu.
     * These items must be translated identically in both qt_ and qgis_ files.
     */
    if ( qttor.load( QString( "qt_" ) + myTranslationCode, QLibraryInfo::location( QLibraryInfo::TranslationsPath ) ) )
    {
      myApp.installTranslator( &qttor );
    }
    else
    {
      qWarning( "loading of qt translation failed [%s]", QString( "%1/qt_%2" ).arg( QLibraryInfo::location( QLibraryInfo::TranslationsPath ), myTranslationCode ).toLocal8Bit().constData() );
    }
  }

  QgsDebugMsg( QString( "Adding QGIS and Qt plugins dirs to search path: %1"
                      ).arg( NGQgsApplication::pluginPath() ) );
  QCoreApplication::addLibraryPath( NGQgsApplication::pluginsPath() );
  QCoreApplication::addLibraryPath( NGQgsApplication::qtPluginsPath() );

  // set authentication database directory
  if ( !authdbdirectory.isEmpty() )
  {
    NGQgsApplication::setAuthDbDirPath( authdbdirectory );
  }

  //set up splash screen
  QString mySplashPath( QgsCustomization::instance()->splashPath() );
  QPixmap myPixmap( mySplashPath + QLatin1String( "splash.png" ) );

  int w = 600 * qApp->desktop()->logicalDpiX() / 96;
  int h = 300 * qApp->desktop()->logicalDpiY() / 96;

  QSplashScreen *mypSplash = new QSplashScreen( myPixmap.scaled( w, h, Qt::KeepAspectRatio, Qt::SmoothTransformation ) );
  if ( !myHideSplash && !mySettings.value( "/qgis/hideSplash" ).toBool() )
  {
    //for win and linux we can just automask and png transparency areas will be used
    mypSplash->setMask( myPixmap.mask() );
    mypSplash->show();
  }

  // optionally restore default window state
  // use restoreDefaultWindowState setting only if NOT using command line (then it is set already)
  if ( myRestoreDefaultWindowState || mySettings.value( "/qgis/restoreDefaultWindowState", false ).toBool() )
  {
    QgsDebugMsg( "Resetting /UI/state settings!" );
    mySettings.remove( "/UI/state" );
    mySettings.remove( "/qgis/restoreDefaultWindowState" );
  }

  // set max. thread count
  // this should be done in QgsApplication::init() but it doesn't know the settings dir.
  NGQgsApplication::setMaxThreads( QSettings().value( "/qgis/max_threads", -1 ).toInt() );

  NGQgisApp *qgis = new NGQgisApp( mypSplash, myRestorePlugins, mySkipVersionCheck ); // "QgisApp" used to find canonical instance
  qgis->setObjectName( "NgQgisApp" );

  myApp.connect(
    &myApp, SIGNAL( preNotify( QObject *, QEvent *, bool * ) ),
    //qgis, SLOT( preNotify( QObject *, QEvent *))
    QgsCustomization::instance(), SLOT( preNotify( QObject *, QEvent *, bool * ) )
  );

  /////////////////////////////////////////////////////////////////////
  // Load a project file if one was specified
  /////////////////////////////////////////////////////////////////////
  if ( ! myProjectFileName.isEmpty() )
  {
    qgis->openProject( myProjectFileName );
  }

  /////////////////////////////////////////////////////////////////////
  // autoload any file names that were passed in on the command line
  /////////////////////////////////////////////////////////////////////
  QgsDebugMsg( QString( "Number of files in myFileList: %1" ).arg( myFileList.count() ) );
  for ( QStringList::Iterator myIterator = myFileList.begin(); myIterator != myFileList.end(); ++myIterator )
  {
    QgsDebugMsg( QString( "Trying to load file : %1" ).arg(( *myIterator ) ) );
    QString myLayerName = *myIterator;
    // don't load anything with a .qgs extension - these are project files
    if ( !myLayerName.contains( ".qgs" ) )
    {
      qgis->openLayer( myLayerName );
    }
  }


  /////////////////////////////////////////////////////////////////////
  // Set initial extent if requested
  /////////////////////////////////////////////////////////////////////
  if ( ! myInitialExtent.isEmpty() )
  {
    QgsLocaleNumC l;
    double coords[4];
    int pos, posOld = 0;
    bool ok = true;

    // parse values from string
    // extent is defined by string "xmin,ymin,xmax,ymax"
    for ( int i = 0; i < 3; i++ )
    {
      // find comma and get coordinate
      pos = myInitialExtent.indexOf( ',', posOld );
      if ( pos == -1 )
      {
        ok = false;
        break;
      }

      coords[i] = QString( myInitialExtent.mid( posOld, pos - posOld ) ).toDouble( &ok );
      if ( !ok )
        break;

      posOld = pos + 1;
    }

    // parse last coordinate
    if ( ok )
      coords[3] = QString( myInitialExtent.mid( posOld ) ).toDouble( &ok );

    if ( !ok )
    {
      QgsDebugMsg( "Error while parsing initial extent!" );
    }
    else
    {
      // set extent from parsed values
      QgsRectangle rect( coords[0], coords[1], coords[2], coords[3] );
      qgis->setExtent( rect );
      if ( qgis->mapCanvas() )
      {
        qgis->mapCanvas()->refresh();
      }
    }
  }

  if ( !pythonfile.isEmpty() )
  {
#ifdef Q_OS_WIN
    //replace backslashes with forward slashes
    pythonfile.replace( '\\', '/' );
#endif
    QgsPythonRunner::run( QString( "exec(open('%1').read())" ).arg( pythonfile ) );
  }

  /////////////////////////////////`////////////////////////////////////
  // Take a snapshot of the map view then exit if snapshot mode requested
  /////////////////////////////////////////////////////////////////////
  if ( mySnapshotFileName != "" )
  {
    /*You must have at least one paintEvent() delivered for the window to be
      rendered properly.

      It looks like you don't run the event loop in non-interactive mode, so the
      event is never occurring.

      To achieve this without running the event loop: show the window, then call
      qApp->processEvents(), grab the pixmap, save it, hide the window and exit.
      */
    //qgis->show();
    myApp.processEvents();
    QPixmap * myQPixmap = new QPixmap( mySnapshotWidth, mySnapshotHeight );
    myQPixmap->fill();
    qgis->saveMapAsImage( mySnapshotFileName, myQPixmap );
    myApp.processEvents();
    qgis->hide();

    return 1;
  }

  if ( !dxfOutputFile.isEmpty() )
  {
    qgis->hide();

    QgsDxfExport dxfExport;
    dxfExport.setSymbologyScaleDenominator( dxfScaleDenom );
    dxfExport.setSymbologyExport( dxfSymbologyMode );
    dxfExport.setExtent( dxfExtent );

    QStringList layerIds;
    QList< QPair<QgsVectorLayer *, int > > layers;
    if ( !dxfPreset.isEmpty() )
    {
      Q_FOREACH ( const QString& layer, QgsProject::instance()->visibilityPresetCollection()->presetVisibleLayers( dxfPreset ) )
      {
        QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>( QgsMapLayerRegistry::instance()->mapLayer( layer ) );
        if ( !vl )
          continue;
        layers << qMakePair<QgsVectorLayer *, int>( vl, -1 );
        layerIds << vl->id();
      }
    }
    else
    {
      Q_FOREACH ( QgsMapLayer *ml, QgsMapLayerRegistry::instance()->mapLayers() )
      {
        QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>( ml );
        if ( !vl )
          continue;
        layers << qMakePair<QgsVectorLayer *, int>( vl, -1 );
        layerIds << vl->id();
      }
    }

    if ( !layers.isEmpty() )
    {
      dxfExport.addLayers( layers );
    }

    QFile dxfFile;
    if ( dxfOutputFile == "-" )
    {
      if ( !dxfFile.open( stdout, QIODevice::WriteOnly ) )
      {
        std::cerr << "could not open stdout" << std::endl;
        return 2;
      }
    }
    else
    {
      if ( !dxfOutputFile.endsWith( ".dxf", Qt::CaseInsensitive ) )
        dxfOutputFile += ".dxf";
      dxfFile.setFileName( dxfOutputFile );
    }

    int res = dxfExport.writeToFile( &dxfFile, dxfEncoding );
    if ( res )
      std::cerr << "dxf output failed with error code " << res << std::endl;

    delete qgis;

    return res;
  }

  /////////////////////////////////////////////////////////////////////
  // Continue on to interactive gui...
  /////////////////////////////////////////////////////////////////////
  qgis->show();
  myApp.connect( &myApp, SIGNAL( lastWindowClosed() ), &myApp, SLOT( quit() ) );

  mypSplash->finish( qgis );
  delete mypSplash;

  qgis->completeInitialization();

#if defined(ANDROID)
  // fix for Qt Ministro hiding app's menubar in favor of native Android menus
  qgis->menuBar()->setNativeMenuBar( false );
  qgis->menuBar()->setVisible( true );
#endif

  int retval = myApp.exec();
  delete qgis;
  return retval;
}
