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
#include "ngcustomization.h"
#include "ngqgsapplication.h"

#include "qgisappinterface.h"
#include "qgisappstylesheet.h"
#include "qgsadvanceddigitizingdockwidget.h"
#include "qgsapplayertreeviewmenuprovider.h"
#include "qgsattributeaction.h"
#include "qgsauthguiutils.h"
#include "qgsbrowserdockwidget.h"
#include "qgsclipboard.h"
#include "qgscredentialdialog.h"
#include "qgscomposer.h"
#include "qgscrscache.h"
#include "qgscustomization.h"
#include "qgscustomlayerorderwidget.h"
#include "qgsdoublespinbox.h"
#include "qgsguivectorlayertools.h"
#include "qgslayertreelayer.h"
#include "qgslayertreemapcanvasbridge.h"
#include "qgslayertreemodel.h"
#include "qgslayertreeregistrybridge.h"
#include "qgslayertreeview.h"
#include "qgslayertreeviewdefaultactions.h"
#include "qgslayertreeutils.h"
#include "qgslegendfilterbutton.h"
#include "qgsmapcanvas.h"
#include "qgsmapcanvassnappingutils.h"
#include "qgsmapcanvastracer.h"
#include "qgsmaplayerregistry.h"
#include "qgsmapoverviewcanvas.h"
#include "qgsmaptoolpinlabels.h"
#include "qgsmaptoolmovelabel.h"
#include "qgsmaptooloffsetpointsymbol.h"
#include "qgsmaptoolshowhidelabels.h"
#include "qgsmaptoolrotatelabel.h"
#include "qgsmaptoolrotatepointsymbols.h"
#include "qgsmaplayeractionregistry.h"
#include "qgsmessagelogviewer.h"
#include "qgsmessageoutput.h"
#include "qgsmessageviewer.h"
#include "qgsnetworkaccessmanager.h"
#include "qgshandlebadlayers.h"
#include "qgsshortcutsmanager.h"
#include "qgsscalecombobox.h"
#include "qgspluginregistry.h"
#include "qgsproject.h"
#include "qgsproviderregistry.h"
#include "qgspythonrunner.h"
#include "qgspythonutilsimpl.h"
#include "qgsstatisticalsummarydockwidget.h"
#include "qgsstatusbarcoordinateswidget.h"
#include "qgsstatusbarscalewidget.h"
#include "qgsstatusbarmagnifierwidget.h"
#include "qgsvisibilitypresets.h"
#include "qgsvectordataprovider.h"
#include "qgsundowidget.h"
#include "qgsuserinputdockwidget.h"
#include "qgstipgui.h"
#include "qgswelcomepage.h"
#include "qgsprojectproperties.h"
#include "qgsmeasuretool.h"
#include "qgsmaptoolmeasureangle.h"
#include "qgslayerstylingwidget.h"

#include <QCheckBox>
#include <QFileDialog>
#include <QFileSystemWatcher>
#include <QMainWindow>
#include <QMessageBox>
#include <QProgressBar>
#include <QShortcut>
#include <QSplashScreen>
#include <QStackedWidget>
#include <QDesktopServices>
#include <QtXml>

#include <pg_config.h>
#include <sqlite3.h>
extern "C"
{
#include <spatialite.h>
}

// Editor widgets
#include "qgseditorwidgetregistry.h"

#include "ngsaboutdialog.h"

#ifdef Q_OS_MAC
#include <ApplicationServices/ApplicationServices.h>
#include <CoreFoundation/CoreFoundation.h>
#endif // Q_OS_MAC

#ifdef NGSTD_USING
#include "core/version.h"
#include "framework/access/access.h"
#include "framework/access/signbutton.h"
#endif // NGSTD_USING

static const QString SENTRY_KEY = "https://71159235f0b542adb8ef214aa24f5aa6@sentry.nextgis.com/9";

//------------------------------------------------------------------------------
// Implementation of the python runner
//------------------------------------------------------------------------------
class NGQgsPythonRunnerImpl : public QgsPythonRunner
{
  public:
    explicit NGQgsPythonRunnerImpl( QgsPythonUtils* pythonUtils ) : mPythonUtils( pythonUtils ) {}

    virtual bool runCommand( QString command, QString messageOnError = QString() ) override
    {
      if ( mPythonUtils && mPythonUtils->isEnabled() )
      {
        return mPythonUtils->runString( command, messageOnError, false );
      }
      return false;
    }

    virtual bool evalCommand( QString command, QString &result ) override
    {
      if ( mPythonUtils && mPythonUtils->isEnabled() )
      {
        return mPythonUtils->evalString( command, result );
      }
      return false;
    }

  protected:
    QgsPythonUtils* mPythonUtils;
};

//------------------------------------------------------------------------------
// NGQgisApp
//------------------------------------------------------------------------------
static bool ngCmpByText_( QAction* a, QAction* b )
{
  return QString::localeAwareCompare( a->text(), b->text() ) < 0;
}

static void ngSetTitleBarText_( QWidget & qgisApp )
{
    QString caption = QgisApp::tr( VENDOR " QGIS " ) +
            QLatin1String(VENDOR_VERSION);


  if ( QgsProject::instance()->title().isEmpty() )
  {
    if ( QgsProject::instance()->fileName().isEmpty() )
    {
      // no project title nor file name, so just leave caption with
      // application name and version
    }
    else
    {
      QFileInfo projectFileInfo( QgsProject::instance()->fileName() );
      caption += " - " + projectFileInfo.completeBaseName();
    }
  }
  else
  {
    caption += " - " + QgsProject::instance()->title();
  }

  qgisApp.setWindowTitle( caption );
}

static void ngCustomSrsValidation_( QgsCoordinateReferenceSystem &srs )
{
  NGQgisApp::instance()->emitCustomSrsValidation( srs );
}

static QgsMessageOutput *ngMessageOutputViewer_()
{
  if ( QThread::currentThread() == qApp->thread() )
    return new QgsMessageViewer( QgisApp::instance() );
  else
    return new QgsMessageOutputConsole();
}

NGQgisApp::NGQgisApp(QSplashScreen *splash, bool restorePlugins,
                     bool skipVersionCheck, QWidget *parent,
                     Qt::WindowFlags fl) : QgisApp( parent, fl )
{
    mSplash = splash;
    if ( smInstance )
    {
      QMessageBox::critical(
        this,
        tr( "Multiple Instances of QgisApp" ),
        tr( "Multiple instances of QGIS application object detected.\nPlease contact the developers.\n" ) );
      abort();
    }

    smInstance = this;
    mProfiler = QgsRuntimeProfiler::instance();

    setupNetworkAccessManager();

    setupAppUi();

    setupDatabase();

    setupAuthentication();

    // Create the themes folder for the user
    startProfile( "Creating theme folder" );
    NGQgsApplication::createThemeFolder();
    endProfile();

    mSplash->showMessage( tr( "Reading settings" ), Qt::AlignHCenter | Qt::AlignBottom );
    qApp->processEvents();

    mSplash->showMessage( tr( "Setting up the GUI" ), Qt::AlignHCenter | Qt::AlignBottom );
    qApp->processEvents();

    setupStyleSheet();

    setupCentralContainer(skipVersionCheck);

    functionProfileNG( &NGQgisApp::createActions, this, "Create actions" );
    functionProfileNG( &NGQgisApp::createActionGroups, this, "Create action group" );
    functionProfileNG( &NGQgisApp::createMenus, this, "Create menus" );
    functionProfileNG( &NGQgisApp::createToolBars, this, "Toolbars" );
    functionProfileNG( &NGQgisApp::createStatusBar, this, "Status bar" );
    functionProfileNG( &NGQgisApp::createCanvasTools, this, "Create canvas tools" );
    mMapCanvas->freeze();
    functionProfileNG( &NGQgisApp::initLayerTreeView, this, "Init Layer tree view" );
    functionProfileNG( &NGQgisApp::createOverview, this, "Create overview" );
    functionProfileNG( &NGQgisApp::createMapTips, this, "Create map tips" );
    functionProfileNG( &NGQgisApp::createDecorations, this, "Create decorations" );
    functionProfileNG( &NGQgisApp::readSettings, this, "Read settings" );
    functionProfileNG( &NGQgisApp::updateRecentProjectPaths, this, "Update recent project paths" );
    functionProfileNG( &NGQgisApp::updateProjectFromTemplates, this, "Update project from templates" );
    functionProfileNG( &NGQgisApp::legendLayerSelectionChanged, this, "Legend layer selection changed" );
    mSaveRollbackInProgress = false;

    QSettings settings;
    QFileSystemWatcher* projectsTemplateWatcher = new QFileSystemWatcher( this );
    QString templateDirName = settings.value( "/qgis/projectTemplateDir",
      NGQgsApplication::qgisSettingsDirPath() + "project_templates" ).toString();
    projectsTemplateWatcher->addPath( templateDirName );
    connect( projectsTemplateWatcher, SIGNAL( directoryChanged( QString ) ),
             this, SLOT( updateProjectFromTemplates() ) );

    // initialize the plugin manager
    startProfile( "Plugin manager" );
    mPluginManager = new QgsPluginManager( this, restorePlugins );
    endProfile();

    addDockWidget( Qt::LeftDockWidgetArea, mUndoDock );
    mUndoDock->hide();

    startProfile( "Layer Style dock" );
    mMapStylingDock = new QgsDockWidget( this );
    mMapStylingDock->setWindowTitle( tr( "Layer Styling" ) );
    mMapStylingDock->setObjectName( "LayerStyling" );
    mMapStyleWidget = new QgsLayerStylingWidget( mMapCanvas, mMapLayerPanelFactories );
    mMapStylingDock->setWidget( mMapStyleWidget );
    connect( mMapStyleWidget, SIGNAL( styleChanged( QgsMapLayer* ) ), this, SLOT( updateLabelToolButtons() ) );
    connect( mMapStylingDock, SIGNAL( visibilityChanged( bool ) ), mActionStyleDock, SLOT( setChecked( bool ) ) );

    addDockWidget( Qt::RightDockWidgetArea, mMapStylingDock );
    mMapStylingDock->hide();
    endProfile();

    startProfile( "Snapping dialog" );
    mSnappingDialog = new QgsSnappingDialog( this, mMapCanvas );
    mSnappingDialog->setObjectName( "SnappingOption" );
    endProfile();

    mBrowserWidget = new QgsBrowserDockWidget( tr( "Browser Panel" ), this );
    mBrowserWidget->setObjectName( "Browser" );
    addDockWidget( Qt::LeftDockWidgetArea, mBrowserWidget );
    mBrowserWidget->hide();

    mBrowserWidget2 = new QgsBrowserDockWidget( tr( "Browser Panel (2)" ), this );
    mBrowserWidget2->setObjectName( "Browser2" );
    addDockWidget( Qt::LeftDockWidgetArea, mBrowserWidget2 );
    mBrowserWidget2->hide();

    addDockWidget( Qt::LeftDockWidgetArea, mAdvancedDigitizingDockWidget );
    mAdvancedDigitizingDockWidget->hide();

    addDockWidget( Qt::LeftDockWidgetArea, mStatisticalSummaryDockWidget );
    mStatisticalSummaryDockWidget->hide();

    addDockWidget( Qt::LeftDockWidgetArea, mBookMarksDockWidget );
    mBookMarksDockWidget->hide();

    QMainWindow::addDockWidget( Qt::BottomDockWidgetArea, mUserInputDockWidget );
    mUserInputDockWidget->setFloating( true );

    mLastMapToolMessage = nullptr;

    mLogViewer = new QgsMessageLogViewer( statusBar(), this );

    mLogDock = new QgsDockWidget( tr( "Log Messages Panel" ), this );
    mLogDock->setObjectName( "MessageLog" );
    mLogDock->setAllowedAreas( Qt::BottomDockWidgetArea | Qt::TopDockWidgetArea );
    addDockWidget( Qt::BottomDockWidgetArea, mLogDock );
    mLogDock->setWidget( mLogViewer );
    mLogDock->hide();
    connect( mMessageButton, SIGNAL( toggled( bool ) ), mLogDock, SLOT( setVisible( bool ) ) );
    connect( mLogDock, SIGNAL( visibilityChanged( bool ) ), mMessageButton, SLOT( setChecked( bool ) ) );
    connect( QgsMessageLog::instance(), SIGNAL( messageReceived( bool ) ), this, SLOT( toggleLogMessageIcon( bool ) ) );
    connect( mMessageButton, SIGNAL( toggled( bool ) ), this, SLOT( toggleLogMessageIcon( bool ) ) );
    mVectorLayerTools = new QgsGuiVectorLayerTools();

    // Init the editor widget types
    QgsEditorWidgetRegistry::initEditors( mMapCanvas, mInfoBar );

    mInternalClipboard = new QgsClipboard; // create clipboard
    connect( mInternalClipboard, SIGNAL( changed() ), this, SLOT( clipboardChanged() ) );
    mQgisInterface = new QgisAppInterface( this ); // create the interfce

#ifdef Q_OS_MAC
  // action for Window menu (create before generating WindowTitleChange event))
  mWindowAction = new QAction( this );
  connect( mWindowAction, SIGNAL( triggered() ), this, SLOT( activate() ) );

  // add this window to Window menu
  addWindow( mWindowAction );
#endif

  activateDeactivateLayerRelatedActions( nullptr ); // after members were created

  connect( QgsMapLayerActionRegistry::instance(), SIGNAL( changed() ), this, SLOT( refreshActionFeatureAction() ) );


    // set application's caption
    QString caption = QgisApp::tr( VENDOR " QGIS " ) +
            QLatin1String(VENDOR_VERSION);
    setWindowTitle( caption );

    QgsMessageLog::logMessage( tr( "QGIS starting..." ), QString::null,
                               QgsMessageLog::INFO );

    // set QGIS specific srs validation
    connect( this, SIGNAL( customSrsValidation( QgsCoordinateReferenceSystem& ) ),
             this, SLOT( validateSrs( QgsCoordinateReferenceSystem& ) ) );
    QgsCoordinateReferenceSystem::setCustomSrsValidation( ngCustomSrsValidation_ );

    // set QGIS specific srs validation
    connect( this, SIGNAL( customSrsValidation( QgsCoordinateReferenceSystem& ) ),
             this, SLOT( validateSrs( QgsCoordinateReferenceSystem& ) ) );
    QgsCoordinateReferenceSystem::setCustomSrsValidation( ngCustomSrsValidation_ );

    // set graphical message output
    QgsMessageOutput::setMessageOutputCreator( ngMessageOutputViewer_ );

    // set graphical credential requester
    new QgsCredentialDialog( this );

    qApp->processEvents();


    // load providers
    mSplash->showMessage( tr( "Checking provider plugins" ), Qt::AlignHCenter |
                          Qt::AlignBottom );
    qApp->processEvents();
    NGQgsApplication::initQgis();

    mSplash->showMessage( tr( "Starting Python" ), Qt::AlignHCenter |
                          Qt::AlignBottom );
    qApp->processEvents();
    loadPythonSupport();

    // Create the plugin registry and load plugins
    // load any plugins that were running in the last session
    mSplash->showMessage( tr( "Restoring loaded plugins" ), Qt::AlignHCenter |
                          Qt::AlignBottom );
    qApp->processEvents();
    QgsPluginRegistry::instance()->setQgisInterface( mQgisInterface );
    if ( restorePlugins )
    {
      // Restoring of plugins can be disabled with --noplugins command line option
      // because some plugins may cause QGIS to crash during startup
      QgsPluginRegistry::instance()->restoreSessionPlugins(
                  NGQgsApplication::pluginPath() );

      // Also restore plugins from user specified plugin directories
      QString myPaths = settings.value( "plugins/searchPathsForPlugins", "" ).toString();
      if ( !myPaths.isEmpty() )
      {
        QStringList myPathList = myPaths.split( '|' );
        QgsPluginRegistry::instance()->restoreSessionPlugins( myPathList );
      }
    }

    if ( mPythonUtils && mPythonUtils->isEnabled() )
    {
        startProfile( "initPluginInstaller" );
        // initialize the plugin installer to start fetching repositories in background
        QgsPythonRunner::run( "import pyplugin_installer" );
        QgsPythonRunner::run( "pyplugin_installer.initPluginInstaller()" );
        // enable Python in the Plugin Manager and pass the PythonUtils to it
        mPluginManager->setPythonUtils( mPythonUtils );
        endProfile();
    }
    else if ( mActionShowPythonDialog )
    {
      // python is disabled so get rid of the action for python console
      delete mActionShowPythonDialog;
      mActionShowPythonDialog = nullptr;
    }

    // Set icon size of toolbars
    int size = settings.value( "/IconSize", QGIS_ICON_SIZE ).toInt();
    setIconSizes( size );

    mSplash->showMessage( tr( "Initializing file filters" ), Qt::AlignHCenter |
                          Qt::AlignBottom );
    qApp->processEvents();

    // now build vector and raster file filters
    mVectorFileFilter = QgsProviderRegistry::instance()->fileVectorFilters();
    mRasterFileFilter = QgsProviderRegistry::instance()->fileRasterFilters();

    QgsProject::instance()->setBadLayerHandler( new QgsHandleBadLayersHandler() );

    setupConnections();

    mSplash->showMessage( tr( "Restoring window state" ), Qt::AlignHCenter |
                          Qt::AlignBottom );
    qApp->processEvents();
    startProfile( "Restore window state" );
    restoreWindowState();
    endProfile();

    startProfile( "Update customiziation on main window" );
    QgsCustomization::instance()->updateMainWindow( mToolbarMenu );
    endProfile();

    mSplash->showMessage( tr( "QGIS Ready!" ), Qt::AlignHCenter |
                          Qt::AlignBottom );

    QgsMessageLog::logMessage( NGQgsApplication::showSettings(), QString::null,
                               QgsMessageLog::INFO );

    QgsMessageLog::logMessage( tr( "QGIS Ready!" ), QString::null,
                               QgsMessageLog::INFO );

    mMapTipsVisible = false;
    // This turns on the map tip if they where active in the last session
    if ( settings.value( "/qgis/enableMapTips", false ).toBool() )
    {
      toggleMapTips( true );
    }

    mTrustedMacros = false;

    // setup drag drop
    setAcceptDrops( true );

    mFullScreenMode = false;
    mPrevScreenModeMaximized = false;
    startProfile( "Show main window" );
    show();
    qApp->processEvents();
    endProfile();

    mMapCanvas->freeze( false );
    mMapCanvas->clearExtentHistory(); // reset zoomnext/zoomlast
    mLastComposerId = 0;

    QShortcut* zoomInShortCut = new QShortcut( QKeySequence( tr( "Ctrl++" ) ), this );
    connect( zoomInShortCut, SIGNAL( activated() ), mMapCanvas, SLOT( zoomIn() ) );
    zoomInShortCut->setObjectName( "ZoomInToCanvas" );
    zoomInShortCut->setWhatsThis( "Zoom in to canvas" );
    QShortcut* zoomShortCut2 = new QShortcut( QKeySequence( tr( "Ctrl+=" ) ), this );
    connect( zoomShortCut2, SIGNAL( activated() ), mMapCanvas, SLOT( zoomIn() ) );
    zoomShortCut2->setObjectName( "ZoomInToCanvas2" );
    zoomShortCut2->setWhatsThis( "Zoom in to canvas (secondary)" );
    QShortcut* zoomOutShortCut = new QShortcut( QKeySequence( tr( "Ctrl+-" ) ), this );
    connect( zoomOutShortCut, SIGNAL( activated() ), mMapCanvas, SLOT( zoomOut() ) );
    zoomOutShortCut->setObjectName( "ZoomOutOfCanvas" );
    zoomOutShortCut->setWhatsThis( "Zoom out of canvas" );

    //also make ctrl+alt+= a shortcut to switch to zoom in map tool
    QShortcut* zoomInToolShortCut = new QShortcut( QKeySequence( tr( "Ctrl+Alt+=" ) ), this );
    connect( zoomInToolShortCut, SIGNAL( activated() ), this, SLOT( zoomIn() ) );
    zoomInToolShortCut->setObjectName( "ZoomIn2" );
    zoomInToolShortCut->setWhatsThis( "Zoom in (secondary)" );

    // Show a nice tip of the day
    if ( settings.value( QString( "/qgis/showTips%1" ).arg( VERSION_INT / 100 ),
                         true ).toBool() )
    {
      mSplash->hide();
      QDir::setCurrent(NGQgsApplication::iconsPath());
      QgsTipGui myTip( this );
      myTip.exec();
    }
    else
    {
      QgsDebugMsg( "Tips are disabled" );
    }

    //remove mActionTouch button
    delete mActionTouch;
    mActionTouch = nullptr;

    // supposedly all actions have been added, now register them to the shortcut manager
    QgsShortcutsManager::instance()->registerAllChildren( this );

    QgsProviderRegistry::instance()->registerGuis( this );

    // update windows
    qApp->processEvents();

    // notify user if authentication system is disabled
    ( void )QgsAuthGuiUtils::isDisabled( messageBar() );

    startProfile( "New project" );
    fileNewBlank(); // prepare empty project, also skips any default templates from loading
    endProfile();

    NGQgsApplication::setFileOpenEventReceiver( this );

    mProfiler->endGroup();
    mProfiler->endGroup();

    QgsDebugMsg( "PROFILE TIMES" );
    QgsDebugMsg( QString( "PROFILE TIMES TOTAL - %1 " ).arg( mProfiler->totalTime() ) );

#ifdef NGSTD_USING
    mNGUpdater = new NGQgisUpdater(this);
    connect(mNGUpdater, SIGNAL(checkUpdatesStarted()), this, SLOT(updatesSearchStart()));
    connect(mNGUpdater, SIGNAL(checkUpdatesFinished(bool)), this, SLOT(updatesSearchStop(bool)));
#endif // NGSTD_USING
}

NGQgisApp::~NGQgisApp()
{
#ifdef NGSTD_USING
    NGAccess::instance().save();
#endif // NGSTD_USING
}

void NGQgisApp::setupAppUi()
{
    // load GUI: actions, menus, toolbars
    mProfiler->beginGroup( "qgisapp" );
    mProfiler->beginGroup( "startup" );
    startProfile( "Setting up UI" );
    setupUi( this );
    endProfile();
}

void NGQgisApp::setupNetworkAccessManager()
{
  QgsNetworkAccessManager *nam = QgsNetworkAccessManager::instance();

  connect( nam, SIGNAL( authenticationRequired( QNetworkReply *,
                                                QAuthenticator * ) ),
           this, SLOT( namAuthenticationRequired( QNetworkReply *,
                                                  QAuthenticator * ) ) );

  connect( nam, SIGNAL( proxyAuthenticationRequired( const QNetworkProxy &,
                                                     QAuthenticator * ) ),
           this, SLOT( namProxyAuthenticationRequired( const QNetworkProxy &,
                                                       QAuthenticator * ) ) );

  connect( nam, SIGNAL( requestTimedOut( QNetworkReply* ) ),
           this, SLOT( namRequestTimedOut( QNetworkReply* ) ) );

#ifndef QT_NO_OPENSSL
  connect( nam, SIGNAL( sslErrors( QNetworkReply *, const QList<QSslError> & ) ),
           this, SLOT( namSslErrors( QNetworkReply *, const QList<QSslError> & ) ) );
#endif
}

void NGQgisApp::setupDatabase()
{
    startProfile( "Checking database" );
    mSplash->showMessage( tr( "Checking database" ), Qt::AlignHCenter |
                          Qt::AlignBottom );
    qApp->processEvents();
    // Do this early on before anyone else opens it and prevents us copying it
    QString dbError;
    if ( !NGQgsApplication::createDB( &dbError ) )
    {
      QMessageBox::critical( this, tr( "Private qgis.db" ), dbError );
    }
    endProfile();
}

void NGQgisApp::setupAuthentication()
{
    mSplash->showMessage( tr( "Initializing authentication" ), Qt::AlignHCenter |
                          Qt::AlignBottom );
    qApp->processEvents();
    QgsAuthManager::instance()->init( NGQgsApplication::pluginPath() );
    if ( !QgsAuthManager::instance()->isDisabled() )
    {
        connect( QgsAuthManager::instance(), SIGNAL( messageOut( const QString&,
                                const QString&, QgsAuthManager::MessageLevel ) ),
                 this, SLOT( authMessageOut( const QString&, const QString&,
                                             QgsAuthManager::MessageLevel ) ) );
        connect( QgsAuthManager::instance(), SIGNAL( authDatabaseEraseRequested() ),
                 this, SLOT( eraseAuthenticationDatabase() ) );
    }
}

void NGQgisApp::setupStyleSheet()
{
    startProfile( "Building style sheet" );
    // set up stylesheet builder and apply saved or default style options
    mStyleSheetBuilder = new QgisAppStyleSheet( this );
    connect( mStyleSheetBuilder, SIGNAL( appStyleSheetChanged( const QString& ) ),
             this, SLOT( setAppStyleSheet( const QString& ) ) );
    mStyleSheetBuilder->buildStyleSheet( mStyleSheetBuilder->defaultOptions() );
    endProfile();
}

void NGQgisApp::setupCentralContainer(bool skipVersionCheck)
{
    QSettings settings;
    QWidget *centralWidget = this->centralWidget();
    QGridLayout *centralLayout = new QGridLayout( centralWidget );
    centralWidget->setLayout( centralLayout );
    centralLayout->setContentsMargins( 0, 0, 0, 0 );

    // "theMapCanvas" used to find this canonical instance later
    startProfile( "Creating map canvas" );
    mMapCanvas = new QgsMapCanvas( centralWidget, "theMapCanvas" );
    connect( mMapCanvas, SIGNAL( messageEmitted( const QString&,
                                const QString&, QgsMessageBar::MessageLevel ) ),
             this, SLOT( displayMessage( const QString&, const QString&,
                                         QgsMessageBar::MessageLevel ) ) );
    mMapCanvas->setWhatsThis( tr( "Map canvas. This is where raster and vector "
                                  "layers are displayed when added to the map" ) );

    // set canvas color right away
    int myRed = settings.value( "/qgis/default_canvas_color_red", 255 ).toInt();
    int myGreen = settings.value( "/qgis/default_canvas_color_green", 255 ).toInt();
    int myBlue = settings.value( "/qgis/default_canvas_color_blue", 255 ).toInt();
    mMapCanvas->setCanvasColor( QColor( myRed, myGreen, myBlue ) );
    endProfile();

    // what type of project to auto-open
    mProjOpen = settings.value( "/qgis/projOpenAtLaunch", 0 ).toInt();

    startProfile( "Welcome page" );
    mWelcomePage = new QgsWelcomePage( skipVersionCheck );
    endProfile();

    mCentralContainer = new QStackedWidget;
    mCentralContainer->insertWidget( 0, mMapCanvas );
    mCentralContainer->insertWidget( 1, mWelcomePage );

    centralLayout->addWidget( mCentralContainer, 0, 0, 2, 1 );

    connect( mMapCanvas, SIGNAL( layersChanged() ), this, SLOT( showMapCanvas() ) );

    mCentralContainer->setCurrentIndex( mProjOpen ? 0 : 1 );

    // a bar to warn the user with non-blocking messages
    startProfile( "Message bar" );
    mInfoBar = new QgsMessageBar( centralWidget );
    mInfoBar->setSizePolicy( QSizePolicy::Minimum, QSizePolicy::Fixed );
    centralLayout->addWidget( mInfoBar, 0, 0, 1, 1 );
    endProfile();

    // User Input Dock Widget
    startProfile( "User input dock" );
    mUserInputDockWidget = new QgsUserInputDockWidget( this );
    mUserInputDockWidget->setObjectName( "UserInputDockWidget" );
    endProfile();

    //set the focus to the map canvas
    mMapCanvas->setFocus();

    startProfile( "Layer tree" );
    mLayerTreeView = new QgsLayerTreeView( this );
    mLayerTreeView->setObjectName( "theLayerTreeView" );
    endProfile();

    // create undo widget
    startProfile( "Undo dock" );
    mUndoDock = new QgsDockWidget( tr( "Undo/Redo Panel" ), this );
    mUndoWidget = new QgsUndoWidget( mUndoDock, mMapCanvas );
    mUndoWidget->setObjectName( "Undo" );
    mUndoDock->setWidget( mUndoWidget );
    mUndoDock->setObjectName( "undo/redo dock" );
    endProfile();

    // Advanced Digitizing dock
    startProfile( "Advanced digitize panel" );
    mAdvancedDigitizingDockWidget = new QgsAdvancedDigitizingDockWidget( mMapCanvas, this );
    mAdvancedDigitizingDockWidget->setObjectName( "AdvancedDigitizingTools" );
    endProfile();

    // Statistical Summary dock
    startProfile( "Stats dock" );
    mStatisticalSummaryDockWidget = new QgsStatisticalSummaryDockWidget( this );
    mStatisticalSummaryDockWidget->setObjectName( "StatistalSummaryDockWidget" );
    endProfile();

    // Bookmarks dock
    startProfile( "Bookmarks widget" );
    mBookMarksDockWidget = new QgsBookmarks( this );
    mBookMarksDockWidget->setObjectName( "BookmarksDockWidget" );
    endProfile();

    startProfile( "Snapping utils" );
    mSnappingUtils = new QgsMapCanvasSnappingUtils( mMapCanvas, this );
    mMapCanvas->setSnappingUtils( mSnappingUtils );
    connect( QgsProject::instance(), SIGNAL( snapSettingsChanged() ), mSnappingUtils, SLOT( readConfigFromProject() ) );
    connect( this, SIGNAL( projectRead() ), mSnappingUtils, SLOT( readConfigFromProject() ) );
    endProfile();
}

void NGQgisApp::createActions()
{
  mActionPluginSeparator1 = nullptr;  // plugin list separator will be created when the first plugin is loaded
  mActionPluginSeparator2 = nullptr;  // python separator will be created only if python is found
  mActionRasterSeparator = nullptr;   // raster plugins list separator will be created when the first plugin is loaded

  // Project Menu Items
  connect( mActionNewProject, SIGNAL( triggered() ), this, SLOT( fileNew() ) );
  connect( mActionNewBlankProject, SIGNAL( triggered() ), this, SLOT( fileNewBlank() ) );
  connect( mActionOpenProject, SIGNAL( triggered() ), this, SLOT( fileOpen() ) );
  connect( mActionSaveProject, SIGNAL( triggered() ), this, SLOT( fileSave() ) );
  connect( mActionSaveProjectAs, SIGNAL( triggered() ), this, SLOT( fileSaveAs() ) );
  connect( mActionSaveMapAsImage, SIGNAL( triggered() ), this, SLOT( saveMapAsImage() ) );
  connect( mActionNewPrintComposer, SIGNAL( triggered() ), this, SLOT( newPrintComposer() ) );
  connect( mActionShowComposerManager, SIGNAL( triggered() ), this, SLOT( showComposerManager() ) );
  connect( mActionExit, SIGNAL( triggered() ), this, SLOT( fileExit() ) );
  connect( mActionDxfExport, SIGNAL( triggered() ), this, SLOT( dxfExport() ) );

  // Edit Menu Items
  connect( mActionUndo, SIGNAL( triggered() ), mUndoWidget, SLOT( undo() ) );
  connect( mActionRedo, SIGNAL( triggered() ), mUndoWidget, SLOT( redo() ) );
  connect( mActionCutFeatures, SIGNAL( triggered() ), this, SLOT( editCut() ) );
  connect( mActionCopyFeatures, SIGNAL( triggered() ), this, SLOT( editCopy() ) );
  connect( mActionPasteFeatures, SIGNAL( triggered() ), this, SLOT( editPaste() ) );
  connect( mActionPasteAsNewVector, SIGNAL( triggered() ), this, SLOT( pasteAsNewVector() ) );
  connect( mActionPasteAsNewMemoryVector, SIGNAL( triggered() ), this, SLOT( pasteAsNewMemoryVector() ) );
  connect( mActionCopyStyle, SIGNAL( triggered() ), this, SLOT( copyStyle() ) );
  connect( mActionPasteStyle, SIGNAL( triggered() ), this, SLOT( pasteStyle() ) );
  connect( mActionAddFeature, SIGNAL( triggered() ), this, SLOT( addFeature() ) );
  connect( mActionCircularStringCurvePoint, SIGNAL( triggered() ), this, SLOT( circularStringCurvePoint() ) );
  connect( mActionCircularStringRadius, SIGNAL( triggered() ), this, SLOT( circularStringRadius() ) );
  connect( mActionMoveFeature, SIGNAL( triggered() ), this, SLOT( moveFeature() ) );
  connect( mActionRotateFeature, SIGNAL( triggered() ), this, SLOT( rotateFeature() ) );

  connect( mActionReshapeFeatures, SIGNAL( triggered() ), this, SLOT( reshapeFeatures() ) );
  connect( mActionSplitFeatures, SIGNAL( triggered() ), this, SLOT( splitFeatures() ) );
  connect( mActionSplitParts, SIGNAL( triggered() ), this, SLOT( splitParts() ) );
  connect( mActionDeleteSelected, SIGNAL( triggered() ), this, SLOT( deleteSelected() ) );
  connect( mActionAddRing, SIGNAL( triggered() ), this, SLOT( addRing() ) );
  connect( mActionFillRing, SIGNAL( triggered() ), this, SLOT( fillRing() ) );
  connect( mActionAddPart, SIGNAL( triggered() ), this, SLOT( addPart() ) );
  connect( mActionSimplifyFeature, SIGNAL( triggered() ), this, SLOT( simplifyFeature() ) );
  connect( mActionDeleteRing, SIGNAL( triggered() ), this, SLOT( deleteRing() ) );
  connect( mActionDeletePart, SIGNAL( triggered() ), this, SLOT( deletePart() ) );
  connect( mActionMergeFeatures, SIGNAL( triggered() ), this, SLOT( mergeSelectedFeatures() ) );
  connect( mActionMergeFeatureAttributes, SIGNAL( triggered() ), this, SLOT( mergeAttributesOfSelectedFeatures() ) );
  connect( mActionMultiEditAttributes, SIGNAL( triggered() ), this, SLOT( modifyAttributesOfSelectedFeatures() ) );
  connect( mActionNodeTool, SIGNAL( triggered() ), this, SLOT( nodeTool() ) );
  connect( mActionRotatePointSymbols, SIGNAL( triggered() ), this, SLOT( rotatePointSymbols() ) );
  connect( mActionOffsetPointSymbol, SIGNAL( triggered() ), this, SLOT( offsetPointSymbol() ) );
  connect( mActionSnappingOptions, SIGNAL( triggered() ), this, SLOT( snappingOptions() ) );
  connect( mActionOffsetCurve, SIGNAL( triggered() ), this, SLOT( offsetCurve() ) );

  // View Menu Items
  connect( mActionPan, SIGNAL( triggered() ), this, SLOT( pan() ) );
  connect( mActionPanToSelected, SIGNAL( triggered() ), this, SLOT( panToSelected() ) );
  connect( mActionZoomIn, SIGNAL( triggered() ), this, SLOT( zoomIn() ) );
  connect( mActionZoomOut, SIGNAL( triggered() ), this, SLOT( zoomOut() ) );
  connect( mActionSelectFeatures, SIGNAL( triggered() ), this, SLOT( selectFeatures() ) );
  connect( mActionSelectPolygon, SIGNAL( triggered() ), this, SLOT( selectByPolygon() ) );
  connect( mActionSelectFreehand, SIGNAL( triggered() ), this, SLOT( selectByFreehand() ) );
  connect( mActionSelectRadius, SIGNAL( triggered() ), this, SLOT( selectByRadius() ) );
  connect( mActionDeselectAll, SIGNAL( triggered() ), this, SLOT( deselectAll() ) );
  connect( mActionSelectAll, SIGNAL( triggered() ), this, SLOT( selectAll() ) );
  connect( mActionInvertSelection, SIGNAL( triggered() ), this, SLOT( invertSelection() ) );
  connect( mActionSelectByExpression, SIGNAL( triggered() ), this, SLOT( selectByExpression() ) );
  connect( mActionSelectByForm, SIGNAL( triggered() ), this, SLOT( selectByForm() ) );
  connect( mActionIdentify, SIGNAL( triggered() ), this, SLOT( identify() ) );
  connect( mActionFeatureAction, SIGNAL( triggered() ), this, SLOT( doFeatureAction() ) );
  connect( mActionMeasure, SIGNAL( triggered() ), this, SLOT( measure() ) );
  connect( mActionMeasureArea, SIGNAL( triggered() ), this, SLOT( measureArea() ) );
  connect( mActionMeasureAngle, SIGNAL( triggered() ), this, SLOT( measureAngle() ) );
  connect( mActionZoomFullExtent, SIGNAL( triggered() ), this, SLOT( zoomFull() ) );
  connect( mActionZoomToLayer, SIGNAL( triggered() ), this, SLOT( zoomToLayerExtent() ) );
  connect( mActionZoomToSelected, SIGNAL( triggered() ), this, SLOT( zoomToSelected() ) );
  connect( mActionZoomLast, SIGNAL( triggered() ), this, SLOT( zoomToPrevious() ) );
  connect( mActionZoomNext, SIGNAL( triggered() ), this, SLOT( zoomToNext() ) );
  connect( mActionZoomActualSize, SIGNAL( triggered() ), this, SLOT( zoomActualSize() ) );
  connect( mActionMapTips, SIGNAL( toggled( bool ) ), this, SLOT( toggleMapTips( bool ) ) );
  connect( mActionNewBookmark, SIGNAL( triggered() ), this, SLOT( newBookmark() ) );
  connect( mActionShowBookmarks, SIGNAL( triggered() ), this, SLOT( showBookmarks() ) );
  connect( mActionDraw, SIGNAL( triggered() ), this, SLOT( refreshMapCanvas() ) );
  connect( mActionTextAnnotation, SIGNAL( triggered() ), this, SLOT( addTextAnnotation() ) );
  connect( mActionFormAnnotation, SIGNAL( triggered() ), this, SLOT( addFormAnnotation() ) );
  connect( mActionHtmlAnnotation, SIGNAL( triggered() ), this, SLOT( addHtmlAnnotation() ) );
  connect( mActionSvgAnnotation, SIGNAL( triggered() ), this, SLOT( addSvgAnnotation() ) );
  connect( mActionAnnotation, SIGNAL( triggered() ), this, SLOT( modifyAnnotation() ) );
  connect( mActionLabeling, SIGNAL( triggered() ), this, SLOT( labeling() ) );
  connect( mActionStatisticalSummary, SIGNAL( triggered() ), this, SLOT( showStatisticsDockWidget() ) );

  // Layer Menu Items
  connect( mActionNewVectorLayer, SIGNAL( triggered() ), this, SLOT( newVectorLayer() ) );
  connect( mActionNewSpatiaLiteLayer, SIGNAL( triggered() ), this, SLOT( newSpatialiteLayer() ) );
  connect( mActionNewGeoPackageLayer, SIGNAL( triggered() ), this, SLOT( newGeoPackageLayer() ) );
  connect( mActionNewMemoryLayer, SIGNAL( triggered() ), this, SLOT( newMemoryLayer() ) );
  connect( mActionShowRasterCalculator, SIGNAL( triggered() ), this, SLOT( showRasterCalculator() ) );
  connect( mActionShowAlignRasterTool, SIGNAL( triggered() ), this, SLOT( showAlignRasterTool() ) );
  connect( mActionEmbedLayers, SIGNAL( triggered() ), this, SLOT( embedLayers() ) );
  connect( mActionAddLayerDefinition, SIGNAL( triggered() ), this, SLOT( addLayerDefinition() ) );
  connect( mActionAddOgrLayer, SIGNAL( triggered() ), this, SLOT( addVectorLayer() ) );
  connect( mActionAddRasterLayer, SIGNAL( triggered() ), this, SLOT( addRasterLayer() ) );
  connect( mActionAddPgLayer, SIGNAL( triggered() ), this, SLOT( addDatabaseLayer() ) );
  connect( mActionAddSpatiaLiteLayer, SIGNAL( triggered() ), this, SLOT( addSpatiaLiteLayer() ) );
  connect( mActionAddMssqlLayer, SIGNAL( triggered() ), this, SLOT( addMssqlLayer() ) );
  // connect( mActionAddDb2Layer, SIGNAL( triggered() ), this, SLOT( addDb2Layer() ) );
  connect( mActionAddOracleLayer, SIGNAL( triggered() ), this, SLOT( addOracleLayer() ) );
  connect( mActionAddWmsLayer, SIGNAL( triggered() ), this, SLOT( addWmsLayer() ) );
  connect( mActionAddWcsLayer, SIGNAL( triggered() ), this, SLOT( addWcsLayer() ) );
  connect( mActionAddWfsLayer, SIGNAL( triggered() ), this, SLOT( addWfsLayer() ) );
  connect( mActionAddAfsLayer, SIGNAL( triggered() ), this, SLOT( addAfsLayer() ) );
  connect( mActionAddAmsLayer, SIGNAL( triggered() ), this, SLOT( addAmsLayer() ) );
  connect( mActionAddDelimitedText, SIGNAL( triggered() ), this, SLOT( addDelimitedTextLayer() ) );
  connect( mActionAddVirtualLayer, SIGNAL( triggered() ), this, SLOT( addVirtualLayer() ) );
  connect( mActionOpenTable, SIGNAL( triggered() ), this, SLOT( attributeTable() ) );
  connect( mActionOpenFieldCalc, SIGNAL( triggered() ), this, SLOT( fieldCalculator() ) );
  connect( mActionToggleEditing, SIGNAL( triggered() ), this, SLOT( toggleEditing() ) );
  connect( mActionSaveLayerEdits, SIGNAL( triggered() ), this, SLOT( saveActiveLayerEdits() ) );
  connect( mActionSaveEdits, SIGNAL( triggered() ), this, SLOT( saveEdits() ) );
  connect( mActionSaveAllEdits, SIGNAL( triggered() ), this, SLOT( saveAllEdits() ) );
  connect( mActionRollbackEdits, SIGNAL( triggered() ), this, SLOT( rollbackEdits() ) );
  connect( mActionRollbackAllEdits, SIGNAL( triggered() ), this, SLOT( rollbackAllEdits() ) );
  connect( mActionCancelEdits, SIGNAL( triggered() ), this, SLOT( cancelEdits() ) );
  connect( mActionCancelAllEdits, SIGNAL( triggered() ), this, SLOT( cancelAllEdits() ) );
  connect( mActionLayerSaveAs, SIGNAL( triggered() ), this, SLOT( saveAsFile() ) );
  connect( mActionSaveLayerDefinition, SIGNAL( triggered() ), this, SLOT( saveAsLayerDefinition() ) );
  connect( mActionRemoveLayer, SIGNAL( triggered() ), this, SLOT( removeLayer() ) );
  connect( mActionDuplicateLayer, SIGNAL( triggered() ), this, SLOT( duplicateLayers() ) );
  connect( mActionSetLayerScaleVisibility, SIGNAL( triggered() ), this, SLOT( setLayerScaleVisibility() ) );
  connect( mActionSetLayerCRS, SIGNAL( triggered() ), this, SLOT( setLayerCRS() ) );
  connect( mActionSetProjectCRSFromLayer, SIGNAL( triggered() ), this, SLOT( setProjectCRSFromLayer() ) );
  connect( mActionLayerProperties, SIGNAL( triggered() ), this, SLOT( layerProperties() ) );
  connect( mActionLayerSubsetString, SIGNAL( triggered() ), this, SLOT( layerSubsetString() ) );
  connect( mActionAddToOverview, SIGNAL( triggered() ), this, SLOT( isInOverview() ) );
  connect( mActionAddAllToOverview, SIGNAL( triggered() ), this, SLOT( addAllToOverview() ) );
  connect( mActionRemoveAllFromOverview, SIGNAL( triggered() ), this, SLOT( removeAllFromOverview() ) );
  connect( mActionShowAllLayers, SIGNAL( triggered() ), this, SLOT( showAllLayers() ) );
  connect( mActionHideAllLayers, SIGNAL( triggered() ), this, SLOT( hideAllLayers() ) );
  connect( mActionShowSelectedLayers, SIGNAL( triggered() ), this, SLOT( showSelectedLayers() ) );
  connect( mActionHideSelectedLayers, SIGNAL( triggered() ), this, SLOT( hideSelectedLayers() ) );

  // Plugin Menu Items
  connect( mActionManagePlugins, SIGNAL( triggered() ), this, SLOT( showPluginManager() ) );
  connect( mActionShowPythonDialog, SIGNAL( triggered() ), this, SLOT( showPythonDialog() ) );

  // Settings Menu Items
  connect( mActionToggleFullScreen, SIGNAL( triggered() ), this, SLOT( toggleFullScreen() ) );
  connect( mActionProjectProperties, SIGNAL( triggered() ), this, SLOT( projectProperties() ) );
  connect( mActionOptions, SIGNAL( triggered() ), this, SLOT( options() ) );
  connect( mActionCustomProjection, SIGNAL( triggered() ), this, SLOT( customProjection() ) );
  connect( mActionConfigureShortcuts, SIGNAL( triggered() ), this, SLOT( configureShortcuts() ) );
  connect( mActionStyleManagerV2, SIGNAL( triggered() ), this, SLOT( showStyleManagerV2() ) );
//  connect( mActionCustomization, SIGNAL( triggered() ), this, SLOT( customize() ) );

#ifdef Q_OS_MAC
  // Window Menu Items

  mActionWindowMinimize = new QAction( tr( "Minimize" ), this );
  mActionWindowMinimize->setShortcut( tr( "Ctrl+M", "Minimize Window" ) );
  mActionWindowMinimize->setStatusTip( tr( "Minimizes the active window to the dock" ) );
  connect( mActionWindowMinimize, SIGNAL( triggered() ), this, SLOT( showActiveWindowMinimized() ) );

  mActionWindowZoom = new QAction( tr( "Zoom" ), this );
  mActionWindowZoom->setStatusTip( tr( "Toggles between a predefined size and the window size set by the user" ) );
  connect( mActionWindowZoom, SIGNAL( triggered() ), this, SLOT( toggleActiveWindowMaximized() ) );

  mActionWindowAllToFront = new QAction( tr( "Bring All to Front" ), this );
  mActionWindowAllToFront->setStatusTip( tr( "Bring forward all open windows" ) );
  connect( mActionWindowAllToFront, SIGNAL( triggered() ), this, SLOT( bringAllToFront() ) );

  // list of open windows
  mWindowActions = new QActionGroup( this );
#endif

  // Vector edits menu
  QMenu* menuAllEdits = new QMenu( tr( "Current Edits" ), this );
  menuAllEdits->addAction( mActionSaveEdits );
  menuAllEdits->addAction( mActionRollbackEdits );
  menuAllEdits->addAction( mActionCancelEdits );
  menuAllEdits->addSeparator();
  menuAllEdits->addAction( mActionSaveAllEdits );
  menuAllEdits->addAction( mActionRollbackAllEdits );
  menuAllEdits->addAction( mActionCancelAllEdits );
  mActionAllEdits->setMenu( menuAllEdits );

  // Raster toolbar items
  connect( mActionLocalHistogramStretch, SIGNAL( triggered() ), this, SLOT( localHistogramStretch() ) );
  connect( mActionFullHistogramStretch, SIGNAL( triggered() ), this, SLOT( fullHistogramStretch() ) );
  connect( mActionLocalCumulativeCutStretch, SIGNAL( triggered() ), this, SLOT( localCumulativeCutStretch() ) );
  connect( mActionFullCumulativeCutStretch, SIGNAL( triggered() ), this, SLOT( fullCumulativeCutStretch() ) );
  connect( mActionIncreaseBrightness, SIGNAL( triggered() ), this, SLOT( increaseBrightness() ) );
  connect( mActionDecreaseBrightness, SIGNAL( triggered() ), this, SLOT( decreaseBrightness() ) );
  connect( mActionIncreaseContrast, SIGNAL( triggered() ), this, SLOT( increaseContrast() ) );
  connect( mActionDecreaseContrast, SIGNAL( triggered() ), this, SLOT( decreaseContrast() ) );

  // Vector Menu Items
//  connect( mActionOSMDownload, SIGNAL( triggered() ), this, SLOT( osmDownloadDialog() ) );
//  connect( mActionOSMImport, SIGNAL( triggered() ), this, SLOT( osmImportDialog() ) );
//  connect( mActionOSMExport, SIGNAL( triggered() ), this, SLOT( osmExportDialog() ) );

  // Help Menu Items
#ifdef Q_OS_MAC
  mActionHelpContents->setShortcut( QString( "Ctrl+?" ) );
  mActionQgisHomePage->setShortcut( QString() );
  mActionReportaBug->setShortcut( QString() );
#endif

// TODO: path to pdf
//  mActionHelpContents->setEnabled( QFileInfo( NGQgsApplication::pkgDataPath() + "/doc/NextGISQGIS.pdf" ).exists() );

  connect( mActionHelpContents, SIGNAL( triggered() ), this, SLOT( helpContents() ) );
//  connect( mActionHelpAPI, SIGNAL( triggered() ), this, SLOT( apiDocumentation() ) );
  connect( mActionReportaBug, SIGNAL( triggered() ), this, SLOT( reportaBug() ) );
  connect( mActionNeedSupport, SIGNAL( triggered() ), this, SLOT( supportProviders() ) );
  connect( mActionQgisHomePage, SIGNAL( triggered() ), this, SLOT( helpQgisHomePage() ) );
  connect( mActionCheckQgisVersion, SIGNAL( triggered() ), this, SLOT( checkQgisVersion() ) );
  connect( mActionAbout, SIGNAL( triggered() ), this, SLOT( about() ) );
//  connect( mActionSponsors, SIGNAL( triggered() ), this, SLOT( sponsors() ) );

  connect( mActionShowPinnedLabels, SIGNAL( toggled( bool ) ), this, SLOT( showPinnedLabels( bool ) ) );
  connect( mActionPinLabels, SIGNAL( triggered() ), this, SLOT( pinLabels() ) );
  connect( mActionShowHideLabels, SIGNAL( triggered() ), this, SLOT( showHideLabels() ) );
  connect( mActionMoveLabel, SIGNAL( triggered() ), this, SLOT( moveLabel() ) );
  connect( mActionRotateLabel, SIGNAL( triggered() ), this, SLOT( rotateLabel() ) );
  connect( mActionChangeLabelProperties, SIGNAL( triggered() ), this, SLOT( changeLabelProperties() ) );

  connect( mActionDiagramProperties, SIGNAL( triggered() ), this, SLOT( diagramProperties() ) );

  QSettings settings;
  if( settings.value( "/qgis/checkVersion", true ).toBool() )
    connect( this, SIGNAL( initializationCompleted() ), this, SLOT(checkQgisVersion()));


#ifndef HAVE_POSTGRESQL
  delete mActionAddPgLayer;
  mActionAddPgLayer = 0;
#endif

#ifndef WITH_ARCGIS
  delete mActionAddAfsLayer;
  mActionAddAfsLayer = 0;
  delete mActionAddAmsLayer;
  mActionAddAmsLayer = 0;
#endif

#ifndef HAVE_ORACLE
  delete mActionAddOracleLayer;
  mActionAddOracleLayer = nullptr;
#endif

}

void NGQgisApp::createActionGroups()
{
    //
    // Map Tool Group
    mMapToolGroup = new QActionGroup( this );
  // #ifdef HAVE_TOUCH
  //   mMapToolGroup->addAction( mActionTouch );
  // #endif
    mMapToolGroup->addAction( mActionPan );
    mMapToolGroup->addAction( mActionZoomIn );
    mMapToolGroup->addAction( mActionZoomOut );
    mMapToolGroup->addAction( mActionIdentify );
    mMapToolGroup->addAction( mActionFeatureAction );
    mMapToolGroup->addAction( mActionSelectFeatures );
    mMapToolGroup->addAction( mActionSelectPolygon );
    mMapToolGroup->addAction( mActionSelectFreehand );
    mMapToolGroup->addAction( mActionSelectRadius );
    mMapToolGroup->addAction( mActionDeselectAll );
    mMapToolGroup->addAction( mActionSelectAll );
    mMapToolGroup->addAction( mActionInvertSelection );
    mMapToolGroup->addAction( mActionMeasure );
    mMapToolGroup->addAction( mActionMeasureArea );
    mMapToolGroup->addAction( mActionMeasureAngle );
    mMapToolGroup->addAction( mActionAddFeature );
    mMapToolGroup->addAction( mActionCircularStringCurvePoint );
    mMapToolGroup->addAction( mActionCircularStringRadius );
    mMapToolGroup->addAction( mActionMoveFeature );
    mMapToolGroup->addAction( mActionRotateFeature );
  #if defined(GEOS_VERSION_MAJOR) && defined(GEOS_VERSION_MINOR) && \
      ((GEOS_VERSION_MAJOR>3) || ((GEOS_VERSION_MAJOR==3) && (GEOS_VERSION_MINOR>=3)))
    mMapToolGroup->addAction( mActionOffsetCurve );
  #endif
    mMapToolGroup->addAction( mActionReshapeFeatures );
    mMapToolGroup->addAction( mActionSplitFeatures );
    mMapToolGroup->addAction( mActionSplitParts );
    mMapToolGroup->addAction( mActionDeleteSelected );
    mMapToolGroup->addAction( mActionAddRing );
    mMapToolGroup->addAction( mActionFillRing );
    mMapToolGroup->addAction( mActionAddPart );
    mMapToolGroup->addAction( mActionSimplifyFeature );
    mMapToolGroup->addAction( mActionDeleteRing );
    mMapToolGroup->addAction( mActionDeletePart );
    mMapToolGroup->addAction( mActionMergeFeatures );
    mMapToolGroup->addAction( mActionMergeFeatureAttributes );
    mMapToolGroup->addAction( mActionNodeTool );
    mMapToolGroup->addAction( mActionRotatePointSymbols );
    mMapToolGroup->addAction( mActionOffsetPointSymbol );
    mMapToolGroup->addAction( mActionPinLabels );
    mMapToolGroup->addAction( mActionShowHideLabels );
    mMapToolGroup->addAction( mActionMoveLabel );
    mMapToolGroup->addAction( mActionRotateLabel );
    mMapToolGroup->addAction( mActionChangeLabelProperties );

    // Preview Modes Group
    QActionGroup* mPreviewGroup = new QActionGroup( this );
    mPreviewGroup->setExclusive( true );
    mActionPreviewModeOff->setActionGroup( mPreviewGroup );
    mActionPreviewModeGrayscale->setActionGroup( mPreviewGroup );
    mActionPreviewModeMono->setActionGroup( mPreviewGroup );
    mActionPreviewProtanope->setActionGroup( mPreviewGroup );
    mActionPreviewDeuteranope->setActionGroup( mPreviewGroup );
}

void NGQgisApp::createMenus()
{
#ifndef SUPPORT_GEOPACKAGE
  mNewLayerMenu->removeAction( mActionNewGeoPackageLayer );
#endif

  // Panel and Toolbar Submenus
  mPanelMenu = new QMenu( tr( "Panels" ), this );
  mPanelMenu->setObjectName( "mPanelMenu" );
  mToolbarMenu = new QMenu( tr( "Toolbars" ), this );
  mToolbarMenu->setObjectName( "mToolbarMenu" );

  // Get platform for menu layout customization (Gnome, Kde, Mac, Win)
  QDialogButtonBox::ButtonLayout layout =
    QDialogButtonBox::ButtonLayout( style()->styleHint(
                             QStyle::SH_DialogButtonLayout, nullptr, this ) );

  // Project Menu

  // Connect once for the entire submenu.
  connect( mRecentProjectsMenu, SIGNAL( triggered( QAction * ) ),
           this, SLOT( openProject( QAction * ) ) );
  connect( mProjectFromTemplateMenu, SIGNAL( triggered( QAction * ) ),
           this, SLOT( fileNewFromTemplateAction( QAction * ) ) );

  if ( layout == QDialogButtonBox::GnomeLayout ||
       layout == QDialogButtonBox::MacLayout ||
       layout == QDialogButtonBox::WinLayout )
  {
    QAction* before = mActionNewPrintComposer;
    mSettingsMenu->removeAction( mActionProjectProperties );
    mProjectMenu->insertAction( before, mActionProjectProperties );
    mProjectMenu->insertSeparator( before );
  }

  // View Menu

  if ( layout != QDialogButtonBox::KdeLayout )
  {
    mViewMenu->addSeparator();
    mViewMenu->addMenu( mPanelMenu );
    mViewMenu->addMenu( mToolbarMenu );
    mViewMenu->addAction( mActionToggleFullScreen );
  }
  else
  {
    // on the top of the settings menu
    QAction* before = mActionProjectProperties;
    mSettingsMenu->insertMenu( before, mPanelMenu );
    mSettingsMenu->insertMenu( before, mToolbarMenu );
    mSettingsMenu->insertAction( before, mActionToggleFullScreen );
    mSettingsMenu->insertSeparator( before );
  }


#ifdef Q_OS_MAC
  mMenuPreviewMode->menuAction()->setVisible( false );

  mProjectMenu->addAction( mActionAbout );
  mProjectMenu->addAction( mActionOptions );

  // Window Menu

  mWindowMenu = new QMenu( tr( "Window" ), this );

  mWindowMenu->addAction( mActionWindowMinimize );
  mWindowMenu->addAction( mActionWindowZoom );
  mWindowMenu->addSeparator();

  mWindowMenu->addAction( mActionWindowAllToFront );
  mWindowMenu->addSeparator();

  // insert before Help menu, as per Mac OS convention
  menuBar()->insertMenu( mHelpMenu->menuAction(), mWindowMenu );
#endif

  // Database Menu
  // don't add it yet, wait for a plugin
  mDatabaseMenu = new QMenu( tr( "&Database" ), menuBar() );
  mDatabaseMenu->setObjectName( "mDatabaseMenu" );
  // Web Menu
  // don't add it yet, wait for a plugin
  mWebMenu = new QMenu( tr( "&Web" ), menuBar() );
  mWebMenu->setObjectName( "mWebMenu" );
}

void NGQgisApp::createToolBars()
{
  QSettings settings;
  // QSize myIconSize ( 32,32 ); //large icons
  // Note: we need to set each object name to ensure that
  // qmainwindow::saveState and qmainwindow::restoreState
  // work properly

  QList<QToolBar*> toolbarMenuToolBars;
  toolbarMenuToolBars << mFileToolBar
  << mLayerToolBar
  << mDigitizeToolBar
  << mAdvancedDigitizeToolBar
  << mMapNavToolBar
  << mAttributesToolBar
  << mPluginToolBar
//  << mHelpToolBar
  << mRasterToolBar
  << mVectorToolBar
  << mDatabaseToolBar
  << mWebToolBar
  << mLabelToolBar;

  delete mHelpToolBar;
  mHelpToolBar = nullptr;

  QList<QAction*> toolbarMenuActions;
  // Set action names so that they can be used in customization
  Q_FOREACH ( QToolBar *toolBar, toolbarMenuToolBars )
  {
    toolBar->toggleViewAction()->setObjectName( "mActionToggle" +
                                                toolBar->objectName().mid( 1 ) );
    toolbarMenuActions << toolBar->toggleViewAction();
  }

  // sort actions in toolbar menu
  qSort( toolbarMenuActions.begin(), toolbarMenuActions.end(), ngCmpByText_ );

  mToolbarMenu->addActions( toolbarMenuActions );

  // selection tool button

  QToolButton *bt = new QToolButton( mAttributesToolBar );
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  QList<QAction*> selectActions;
  selectActions << mActionSelectByExpression << mActionSelectAll
  << mActionInvertSelection;
  bt->addActions( selectActions );
  bt->setDefaultAction( mActionSelectByExpression );
  QAction* selectionAction = mAttributesToolBar->insertWidget( mActionDeselectAll, bt );
  selectionAction->setObjectName( "ActionSelection" );

  // select tool button
  bt = new QToolButton( mAttributesToolBar );
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  QList<QAction*> selectionActions;
  selectionActions << mActionSelectFeatures << mActionSelectPolygon
  << mActionSelectFreehand << mActionSelectRadius;
  bt->addActions( selectionActions );

  QAction* defSelectAction = mActionSelectFeatures;
  switch ( settings.value( "/UI/selectTool", 0 ).toInt() )
  {
    case 0:
      defSelectAction = mActionSelectFeatures;
      break;
    case 1:
      defSelectAction = mActionSelectFeatures;
      break;
    case 2:
      defSelectAction = mActionSelectRadius;
      break;
    case 3:
      defSelectAction = mActionSelectPolygon;
      break;
    case 4:
      defSelectAction = mActionSelectFreehand;
      break;
  }
  bt->setDefaultAction( defSelectAction );
  QAction* selectAction = mAttributesToolBar->insertWidget( selectionAction, bt );
  selectAction->setObjectName( "ActionSelect" );
  connect( bt, SIGNAL( triggered( QAction * ) ), this,
           SLOT( toolButtonActionTriggered( QAction * ) ) );

  // feature action tool button

  bt = new QToolButton( mAttributesToolBar );
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  bt->setDefaultAction( mActionFeatureAction );
  mFeatureActionMenu = new QMenu( bt );
  connect( mFeatureActionMenu, SIGNAL( triggered( QAction * ) ), this,
           SLOT( updateDefaultFeatureAction( QAction * ) ) );
  connect( mFeatureActionMenu, SIGNAL( aboutToShow() ), this,
           SLOT( refreshFeatureActions() ) );
  bt->setMenu( mFeatureActionMenu );
  QAction* featureActionAction = mAttributesToolBar->insertWidget( selectAction, bt );
  featureActionAction->setObjectName( "ActionFeatureAction" );

  // measure tool button
  bt = new QToolButton( mAttributesToolBar );
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  bt->addAction( mActionMeasure );
  bt->addAction( mActionMeasureArea );
  bt->addAction( mActionMeasureAngle );

  QAction* defMeasureAction = mActionMeasure;
  switch ( settings.value( "/UI/measureTool", 0 ).toInt() )
  {
    case 0:
      defMeasureAction = mActionMeasure;
      break;
    case 1:
      defMeasureAction = mActionMeasureArea;
      break;
    case 2:
      defMeasureAction = mActionMeasureAngle;
      break;
  }
  bt->setDefaultAction( defMeasureAction );
  QAction* measureAction = mAttributesToolBar->insertWidget( mActionMapTips, bt );
  measureAction->setObjectName( "ActionMeasure" );
  connect( bt, SIGNAL( triggered( QAction * ) ), this,
           SLOT( toolButtonActionTriggered( QAction * ) ) );

  // annotation tool button
  bt = new QToolButton();
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  bt->addAction( mActionTextAnnotation );
  bt->addAction( mActionFormAnnotation );
  bt->addAction( mActionHtmlAnnotation );
  bt->addAction( mActionSvgAnnotation );
  bt->addAction( mActionAnnotation );

  QAction* defAnnotationAction = mActionTextAnnotation;
  switch ( settings.value( "/UI/annotationTool", 0 ).toInt() )
  {
    case 0:
      defAnnotationAction = mActionTextAnnotation;
      break;
    case 1:
      defAnnotationAction = mActionFormAnnotation;
      break;
    case 2:
      defAnnotationAction = mActionHtmlAnnotation;
      break;
    case 3:
      defAnnotationAction = mActionSvgAnnotation;
      break;
    case 4:
      defAnnotationAction =  mActionAnnotation;
      break;

  }
  bt->setDefaultAction( defAnnotationAction );
  QAction* annotationAction = mAttributesToolBar->addWidget( bt );
  annotationAction->setObjectName( "ActionAnnotation" );
  connect( bt, SIGNAL( triggered( QAction * ) ), this,
           SLOT( toolButtonActionTriggered( QAction * ) ) );

  // vector layer edits tool buttons
  QToolButton* tbAllEdits = qobject_cast<QToolButton *>(
              mDigitizeToolBar->widgetForAction( mActionAllEdits ) );
  tbAllEdits->setPopupMode( QToolButton::InstantPopup );

  // new layer tool button

  bt = new QToolButton();
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  bt->addAction( mActionNewVectorLayer );
  bt->addAction( mActionNewSpatiaLiteLayer );
#ifdef SUPPORT_GEOPACKAGE
  bt->addAction( mActionNewGeoPackageLayer );
#endif
  bt->addAction( mActionNewMemoryLayer );

  QAction* defNewLayerAction = mActionNewVectorLayer;
  switch ( settings.value( "/UI/defaultNewLayer", 1 ).toInt() )
  {
    case 0:
      defNewLayerAction = mActionNewSpatiaLiteLayer;
      break;
    case 1:
      defNewLayerAction = mActionNewVectorLayer;
      break;
    case 2:
      defNewLayerAction = mActionNewMemoryLayer;
      break;
#ifdef SUPPORT_GEOPACKAGE
    case 3:
      defNewLayerAction = mActionNewGeoPackageLayer;
      break;
#endif
  }
  bt->setDefaultAction( defNewLayerAction );
  QAction* newLayerAction = mLayerToolBar->addWidget( bt );

  newLayerAction->setObjectName( "ActionNewLayer" );
  connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );

#ifdef WITH_ARCGIS
  // map service tool button
  bt = new QToolButton();
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  bt->addAction( mActionAddWmsLayer );
  bt->addAction( mActionAddAmsLayer );
  QAction* defMapServiceAction = mActionAddWmsLayer;
  switch ( settings.value( "/UI/defaultMapService", 0 ).toInt() )
  {
    case 0:
      defMapServiceAction = mActionAddWmsLayer;
      break;
    case 1:
      defMapServiceAction = mActionAddAmsLayer;
      break;
  };
  bt->setDefaultAction( defMapServiceAction );
  QAction* mapServiceAction = mLayerToolBar->insertWidget( mActionAddWmsLayer, bt );
  mLayerToolBar->removeAction( mActionAddWmsLayer );
  mapServiceAction->setObjectName( "ActionMapService" );
  connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );

  // feature service tool button
  bt = new QToolButton();
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  bt->addAction( mActionAddWfsLayer );
  bt->addAction( mActionAddAfsLayer );
  QAction* defFeatureServiceAction = mActionAddWfsLayer;
  switch ( settings.value( "/UI/defaultFeatureService", 0 ).toInt() )
  {
    case 0:
      defFeatureServiceAction = mActionAddWfsLayer;
      break;
    case 1:
      defFeatureServiceAction = mActionAddAfsLayer;
      break;
  };
  bt->setDefaultAction( defFeatureServiceAction );
  QAction* featureServiceAction = mLayerToolBar->insertWidget( mActionAddWfsLayer, bt );
  mLayerToolBar->removeAction( mActionAddWfsLayer );
  featureServiceAction->setObjectName( "ActionFeatureService" );
  connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );
#else
  QAction* mapServiceAction = mActionAddWmsLayer;
#endif

  // add db layer button
  bt = new QToolButton();
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  if ( mActionAddPgLayer )
    bt->addAction( mActionAddPgLayer );
  if ( mActionAddMssqlLayer )
    bt->addAction( mActionAddMssqlLayer );
  // if ( mActionAddDb2Layer )
  //   bt->addAction( mActionAddDb2Layer );
  if ( mActionAddOracleLayer )
    bt->addAction( mActionAddOracleLayer );
  QAction* defAddDbLayerAction = mActionAddPgLayer;
  switch ( settings.value( "/UI/defaultAddDbLayerAction", 0 ).toInt() )
  {
    case 0:
      defAddDbLayerAction = mActionAddPgLayer;
      break;
    case 1:
      defAddDbLayerAction = mActionAddMssqlLayer;
      break;
    case 2:
      // defAddDbLayerAction = mActionAddDb2Layer;
      break;
    case 3:
      defAddDbLayerAction = mActionAddOracleLayer;
      break;
  }
  if ( defAddDbLayerAction )
    bt->setDefaultAction( defAddDbLayerAction );
  QAction* addDbLayerAction = mLayerToolBar->insertWidget( mapServiceAction, bt );
  addDbLayerAction->setObjectName( "ActionAddDbLayer" );
  connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );

  QLayout *layout = mLayerToolBar->layout();
  for ( int i = 0; i < layout->count(); ++i )
  {
    layout->itemAt( i )->setAlignment( Qt::AlignLeft );
  }

  //circular string digitize tool button
  QToolButton* tbAddCircularString = new QToolButton( mDigitizeToolBar );
  tbAddCircularString->setPopupMode( QToolButton::MenuButtonPopup );
  tbAddCircularString->addAction( mActionCircularStringCurvePoint );
  tbAddCircularString->addAction( mActionCircularStringRadius );
  tbAddCircularString->setDefaultAction( mActionCircularStringCurvePoint );
  connect( tbAddCircularString, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );
  mDigitizeToolBar->insertWidget( mActionMoveFeature, tbAddCircularString );

  bt = new QToolButton();
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  bt->addAction( mActionRotatePointSymbols );
  bt->addAction( mActionOffsetPointSymbol );

  QAction* defPointSymbolAction = mActionRotatePointSymbols;
  switch ( settings.value( "/UI/defaultPointSymbolAction", 0 ).toInt() )
  {
    case 0:
      defPointSymbolAction = mActionRotatePointSymbols;
      break;
    case 1:
      defPointSymbolAction = mActionOffsetPointSymbol;
      break;
  }
  bt->setDefaultAction( defPointSymbolAction );
  QAction* pointSymbolAction = mAdvancedDigitizeToolBar->addWidget( bt );
  pointSymbolAction->setObjectName( "ActionPointSymbolTools" );
  connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );

  // Cad toolbar
  mAdvancedDigitizeToolBar->insertAction( mActionEnableTracing, mAdvancedDigitizingDockWidget->enableAction() );

  mTracer = new QgsMapCanvasTracer( mMapCanvas, messageBar() );
  mTracer->setActionEnableTracing( mActionEnableTracing );

  // Add NextGIS account toolbar
  QWidget* spacer = new QWidget();
  spacer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
  mNGAccountToolBar->addWidget(spacer);

#ifdef NGSTD_USING 
#if defined(NGLIB_COMPUTE_VERSION) && NGLIB_VERSION_NUMBER > NGLIB_COMPUTE_VERSION(0,11,0)
  QString endPoint = settings.value("nextgis/endpoint", 
    NGAccess::instance().endPoint() ).toString();
  QString authEndPoint = settings.value("nextgis/auth_endpoint", 
    NGAccess::instance().authEndpoint() ).toString();
  QString tokenEndPoint = settings.value("nextgis/token_endpoint", 
    NGAccess::instance().tokenEndpoint() ).toString();
  QString userInfoEndPoint = settings.value("nextgis/user_info_endpoint", 
    NGAccess::instance().userInfoEndpoint() ).toString();    
  QString authTypeStr = settings.value("nextgis/auth_type", QLatin1String("NextGIS ID")).toString();
  NGAccess::AuthSourceType type = NGAccess::AuthSourceType::Custom;
  if(authTypeStr == "NextGIS ID") {
      type = NGAccess::AuthSourceType::NGID;
  }
  else if(authTypeStr == "Keycloak") {
      type = NGAccess::AuthSourceType::KeyCloakOpenID;
  }
  NGAccess::instance().setAuthEndpoint(authEndPoint);
  NGAccess::instance().setTokenEndpoint(tokenEndPoint);
  NGAccess::instance().setUserInfoEndpoint(userInfoEndPoint);
  NGSignInButton *toolbAuth = new NGSignInButton(QLatin1String("tv88lHLi6I9vUIck7eHxhkoJRfSLR74eLRx4YrpN"),
                                     QLatin1String("user_info.read"), endPoint, type);

  NGAccess::instance().initSentry(settings.value("nextgis/sendCrashes", "0").toBool(), SENTRY_KEY);
#else
  NGSignInButton *toolbAuth = new NGSignInButton(QLatin1String("tv88lHLi6I9vUIck7eHxhkoJRfSLR74eLRx4YrpN"),
                                     QLatin1String("user_info.read"));
#endif // NGLIB_VERSION_NUMBER > 1100
  toolbAuth->setCursor(Qt::PointingHandCursor);
  mNGAccountToolBar->addWidget(toolbAuth);
  // TODO: QObject::connect(toolbAuth, SIGNAL(supportInfoUpdated()), this, SLOT(onSupportInfoUpdated()));
#endif // NGSTD_USING

}

void NGQgisApp::createStatusBar()
{
    //remove borders from children under Windows
    statusBar()->setStyleSheet( "QStatusBar::item {border: none;}" );

    // Add a panel to the status bar for the scale, coords and progress
    // And also rendering suppression checkbox
    mProgressBar = new QProgressBar( statusBar() );
    mProgressBar->setObjectName( "mProgressBar" );
    mProgressBar->setMaximumWidth( 100 );
    mProgressBar->hide();
    mProgressBar->setWhatsThis( tr( "Progress bar that displays the status "
                                    "of rendering layers and other time-intensive operations" ) );
    statusBar()->addPermanentWidget( mProgressBar, 1 );

    connect( mMapCanvas, SIGNAL( renderStarting() ), this, SLOT( canvasRefreshStarted() ) );
    connect( mMapCanvas, SIGNAL( mapCanvasRefreshed() ), this, SLOT( canvasRefreshFinished() ) );

    // Bumped the font up one point size since 8 was too
    // small on some platforms. A point size of 9 still provides
    // plenty of display space on 1024x768 resolutions
    QFont myFont( "Arial", 9 );
    statusBar()->setFont( myFont );

    //coords status bar widget
    mCoordsEdit = new QgsStatusBarCoordinatesWidget( statusBar() );
    mCoordsEdit->setObjectName( "mCoordsEdit" );
    mCoordsEdit->setMapCanvas( mMapCanvas );
    mCoordsEdit->setFont( myFont );
    statusBar()->addPermanentWidget( mCoordsEdit, 0 );

    mScaleWidget = new QgsStatusBarScaleWidget( mMapCanvas, statusBar() );
    mScaleWidget->setObjectName( "mScaleWidget" );
    mScaleWidget->setFont( myFont );
    connect( mScaleWidget, SIGNAL( scaleLockChanged( bool ) ), mMapCanvas, SLOT( setScaleLocked( bool ) ) );
    statusBar()->addPermanentWidget( mScaleWidget, 0 );

    // zoom widget
    mMagnifierWidget = new QgsStatusBarMagnifierWidget( statusBar() );
    mMagnifierWidget->setObjectName( "mMagnifierWidget" );
    mMagnifierWidget->setFont( myFont );
    connect( mMapCanvas, SIGNAL( magnificationChanged( double ) ), mMagnifierWidget, SLOT( updateMagnification( double ) ) );
    connect( mMagnifierWidget, SIGNAL( magnificationChanged( double ) ), mMapCanvas, SLOT( setMagnificationFactor( double ) ) );
    mMagnifierWidget->updateMagnification( QSettings().value( "/qgis/magnifier_factor_default", 1.0 ).toDouble() );
    statusBar()->addPermanentWidget( mMagnifierWidget, 0 );

    if ( QgsMapCanvas::rotationEnabled() )
    {
      // add a widget to show/set current rotation
      mRotationLabel = new QLabel( QString(), statusBar() );
      mRotationLabel->setObjectName( "mRotationLabel" );
      mRotationLabel->setFont( myFont );
      mRotationLabel->setMinimumWidth( 10 );
      //mRotationLabel->setMaximumHeight( 20 );
      mRotationLabel->setMargin( 3 );
      mRotationLabel->setAlignment( Qt::AlignCenter );
      mRotationLabel->setFrameStyle( QFrame::NoFrame );
      mRotationLabel->setText( tr( "Rotation" ) );
      mRotationLabel->setToolTip( tr( "Current clockwise map rotation in degrees" ) );
      statusBar()->addPermanentWidget( mRotationLabel, 0 );

      mRotationEdit = new QgsDoubleSpinBox( statusBar() );
      mRotationEdit->setObjectName( "mRotationEdit" );
      mRotationEdit->setClearValue( 0.0 );
      mRotationEdit->setKeyboardTracking( false );
      mRotationEdit->setMaximumWidth( 120 );
      mRotationEdit->setDecimals( 1 );
      mRotationEdit->setRange( -180.0, 180.0 );
      mRotationEdit->setWrapping( true );
      mRotationEdit->setSingleStep( 5.0 );
      mRotationEdit->setFont( myFont );
      mRotationEdit->setWhatsThis( tr( "Shows the current map clockwise rotation "
                                       "in degrees. It also allows editing to set "
                                       "the rotation" ) );
      mRotationEdit->setToolTip( tr( "Current clockwise map rotation in degrees" ) );
      statusBar()->addPermanentWidget( mRotationEdit, 0 );
      connect( mRotationEdit, SIGNAL( valueChanged( double ) ), this, SLOT( userRotation() ) );

      showRotation();
    }

    // render suppression status bar widget
    mRenderSuppressionCBox = new QCheckBox( tr( "Render" ), statusBar() );
    mRenderSuppressionCBox->setObjectName( "mRenderSuppressionCBox" );
    mRenderSuppressionCBox->setChecked( true );
    mRenderSuppressionCBox->setFont( myFont );
    mRenderSuppressionCBox->setWhatsThis( tr( "When checked, the map layers "
                                          "are rendered in response to map navigation commands and other "
                                          "events. When not checked, no rendering is done. This allows you "
                                          "to add a large number of layers and symbolize them before rendering." ) );
    mRenderSuppressionCBox->setToolTip( tr( "Toggle map rendering" ) );
    statusBar()->addPermanentWidget( mRenderSuppressionCBox, 0 );
    // On the fly projection status bar icon
    // Changed this to a tool button since a QPushButton is
    // sculpted on OS X and the icon is never displayed [gsherman]
    mOnTheFlyProjectionStatusButton = new QToolButton( statusBar() );
    mOnTheFlyProjectionStatusButton->setAutoRaise( true );
    mOnTheFlyProjectionStatusButton->setToolButtonStyle( Qt::ToolButtonTextBesideIcon );
    mOnTheFlyProjectionStatusButton->setObjectName( "mOntheFlyProjectionStatusButton" );
    // Maintain uniform widget height in status bar by setting button height same as labels
    // For Qt/Mac 3.3, the default toolbutton height is 30 and labels were expanding to match
    mOnTheFlyProjectionStatusButton->setMaximumHeight( mScaleWidget->height() );
    mOnTheFlyProjectionStatusButton->setIcon( NGQgsApplication::getThemeIcon( "mIconProjectionEnabled.png" ) );
    mOnTheFlyProjectionStatusButton->setWhatsThis( tr( "This icon shows whether "
        "on the fly coordinate reference system transformation is enabled or not. "
        "Click the icon to bring up "
        "the project properties dialog to alter this behaviour." ) );
    mOnTheFlyProjectionStatusButton->setToolTip( tr( "CRS status - Click "
        "to open coordinate reference system dialog" ) );
    connect( mOnTheFlyProjectionStatusButton, SIGNAL( clicked() ),
             this, SLOT( projectPropertiesProjections() ) );//bring up the project props dialog when clicked
    statusBar()->addPermanentWidget( mOnTheFlyProjectionStatusButton, 0 );
    statusBar()->showMessage( tr( "Ready" ) );

    mMessageButton = new QToolButton( statusBar() );
    mMessageButton->setAutoRaise( true );
    mMessageButton->setIcon( NGQgsApplication::getThemeIcon( "/mMessageLogRead.svg" ) );
    mMessageButton->setToolTip( tr( "Messages" ) );
    mMessageButton->setWhatsThis( tr( "Messages" ) );
    mMessageButton->setToolButtonStyle( Qt::ToolButtonTextBesideIcon );
    mMessageButton->setObjectName( "mMessageLogViewerButton" );
    mMessageButton->setMaximumHeight( mScaleWidget->height() );
    mMessageButton->setCheckable( true );
    statusBar()->addPermanentWidget( mMessageButton, 0 );
}

void NGQgisApp::readSettings()
{
  QSettings settings;
  QString themename = settings.value( "UI/UITheme", "default" ).toString();
  setTheme( themename );

  // Read legacy settings
  readRecentProjects();

  // this is a new session! reset enable macros value to "ask"
  // whether set to "just for this session"
  if ( settings.value( "/qgis/enableMacros", 1 ).toInt() == 2 )
  {
    settings.setValue( "/qgis/enableMacros", 1 );
  }
}

void NGQgisApp::setTheme( const QString& theThemeName )
{
  NGQgsApplication::setUITheme( theThemeName );
  //QgsDebugMsg("Setting theme to \n" + theThemeName);
  mActionNewProject->setIcon( NGQgsApplication::getThemeIcon( "/mActionFileNew.svg" ) );
  mActionOpenProject->setIcon( NGQgsApplication::getThemeIcon( "/mActionFileOpen.svg" ) );
  mActionSaveProject->setIcon( NGQgsApplication::getThemeIcon( "/mActionFileSave.svg" ) );
  mActionSaveProjectAs->setIcon( NGQgsApplication::getThemeIcon( "/mActionFileSaveAs.svg" ) );
  mActionNewPrintComposer->setIcon( NGQgsApplication::getThemeIcon( "/mActionNewComposer.svg" ) );
  mActionShowComposerManager->setIcon( NGQgsApplication::getThemeIcon( "/mActionComposerManager.svg" ) );
  mActionSaveMapAsImage->setIcon( NGQgsApplication::getThemeIcon( "/mActionSaveMapAsImage.svg" ) );
  mActionExit->setIcon( NGQgsApplication::getThemeIcon( "/mActionFileExit.png" ) );
  mActionAddOgrLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddOgrLayer.svg" ) );
  mActionAddRasterLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddRasterLayer.svg" ) );
#ifdef HAVE_POSTGRESQL
  mActionAddPgLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddPostgisLayer.svg" ) );
#endif
  mActionNewSpatiaLiteLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionNewSpatiaLiteLayer.svg" ) );
  mActionAddSpatiaLiteLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddSpatiaLiteLayer.svg" ) );
  mActionAddMssqlLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddMssqlLayer.svg" ) );
  // mActionAddDb2Layer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddDb2Layer.svg" ) );
#ifdef HAVE_ORACLE
  mActionAddOracleLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddOracleLayer.svg" ) );
#endif
  mActionRemoveLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionRemoveLayer.svg" ) );
  mActionDuplicateLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionDuplicateLayer.svg" ) );
  mActionSetLayerCRS->setIcon( NGQgsApplication::getThemeIcon( "/mActionSetLayerCRS.png" ) );
  mActionSetProjectCRSFromLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionSetProjectCRSFromLayer.png" ) );
  mActionNewVectorLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionNewVectorLayer.svg" ) );
  mActionNewMemoryLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionCreateMemory.svg" ) );
  mActionAddAllToOverview->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddAllToOverview.svg" ) );
  mActionHideAllLayers->setIcon( NGQgsApplication::getThemeIcon( "/mActionHideAllLayers.svg" ) );
  mActionShowAllLayers->setIcon( NGQgsApplication::getThemeIcon( "/mActionShowAllLayers.svg" ) );
  mActionHideSelectedLayers->setIcon( NGQgsApplication::getThemeIcon( "/mActionHideSelectedLayers.png" ) );
  mActionShowSelectedLayers->setIcon( NGQgsApplication::getThemeIcon( "/mActionShowSelectedLayers.png" ) );
  mActionRemoveAllFromOverview->setIcon( NGQgsApplication::getThemeIcon( "/mActionRemoveAllFromOverview.svg" ) );
  mActionToggleFullScreen->setIcon( NGQgsApplication::getThemeIcon( "/mActionToggleFullScreen.png" ) );
  mActionProjectProperties->setIcon( NGQgsApplication::getThemeIcon( "/mActionProjectProperties.png" ) );
  mActionManagePlugins->setIcon( NGQgsApplication::getThemeIcon( "/mActionShowPluginManager.svg" ) );
  mActionShowPythonDialog->setIcon( NGQgsApplication::getThemeIcon( "console/iconRunConsole.png" ) );
  mActionCheckQgisVersion->setIcon( NGQgsApplication::getThemeIcon( "/mActionCheckQgisVersion.png" ) );
  mActionOptions->setIcon( NGQgsApplication::getThemeIcon( "/mActionOptions.svg" ) );
  mActionConfigureShortcuts->setIcon( NGQgsApplication::getThemeIcon( "/mActionOptions.svg" ) );
  mActionCustomization->setIcon( NGQgsApplication::getThemeIcon( "/mActionOptions.svg" ) );
  mActionHelpContents->setIcon( NGQgsApplication::getThemeIcon( "/mActionHelpContents.svg" ) );
  mActionLocalHistogramStretch->setIcon( NGQgsApplication::getThemeIcon( "/mActionLocalHistogramStretch.svg" ) );
  mActionFullHistogramStretch->setIcon( NGQgsApplication::getThemeIcon( "/mActionFullHistogramStretch.svg" ) );
  mActionIncreaseBrightness->setIcon( NGQgsApplication::getThemeIcon( "/mActionIncreaseBrightness.svg" ) );
  mActionDecreaseBrightness->setIcon( NGQgsApplication::getThemeIcon( "/mActionDecreaseBrightness.svg" ) );
  mActionIncreaseContrast->setIcon( NGQgsApplication::getThemeIcon( "/mActionIncreaseContrast.svg" ) );
  mActionDecreaseContrast->setIcon( NGQgsApplication::getThemeIcon( "/mActionDecreaseContrast.svg" ) );
  mActionZoomActualSize->setIcon( NGQgsApplication::getThemeIcon( "/mActionZoomNative.png" ) );
  mActionQgisHomePage->setIcon( NGQgsApplication::getThemeIcon( "/mActionQgisHomePage.png" ) );
  mActionAbout->setIcon( NGQgsApplication::getThemeIcon( "/mActionHelpAbout.png" ) );
  mActionSponsors->setIcon( NGQgsApplication::getThemeIcon( "/mActionHelpSponsors.png" ) );
  mActionDraw->setIcon( NGQgsApplication::getThemeIcon( "/mActionDraw.svg" ) );
  mActionToggleEditing->setIcon( NGQgsApplication::getThemeIcon( "/mActionToggleEditing.svg" ) );
  mActionSaveLayerEdits->setIcon( NGQgsApplication::getThemeIcon( "/mActionSaveAllEdits.svg" ) );
  mActionAllEdits->setIcon( NGQgsApplication::getThemeIcon( "/mActionAllEdits.svg" ) );
  mActionSaveEdits->setIcon( NGQgsApplication::getThemeIcon( "/mActionSaveEdits.svg" ) );
  mActionSaveAllEdits->setIcon( NGQgsApplication::getThemeIcon( "/mActionSaveAllEdits.svg" ) );
  mActionRollbackEdits->setIcon( NGQgsApplication::getThemeIcon( "/mActionRollbackEdits.svg" ) );
  mActionRollbackAllEdits->setIcon( NGQgsApplication::getThemeIcon( "/mActionRollbackAllEdits.svg" ) );
  mActionCancelEdits->setIcon( NGQgsApplication::getThemeIcon( "/mActionCancelEdits.svg" ) );
  mActionCancelAllEdits->setIcon( NGQgsApplication::getThemeIcon( "/mActionCancelAllEdits.svg" ) );
  mActionCutFeatures->setIcon( NGQgsApplication::getThemeIcon( "/mActionEditCut.svg" ) );
  mActionCopyFeatures->setIcon( NGQgsApplication::getThemeIcon( "/mActionEditCopy.svg" ) );
  mActionPasteFeatures->setIcon( NGQgsApplication::getThemeIcon( "/mActionEditPaste.svg" ) );
  mActionAddFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionCapturePoint.svg" ) );
  mActionMoveFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionMoveFeaturePoint.svg" ) );
  mActionRotateFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionRotateFeature.svg" ) );
  mActionReshapeFeatures->setIcon( NGQgsApplication::getThemeIcon( "/mActionReshape.svg" ) );
  mActionSplitFeatures->setIcon( NGQgsApplication::getThemeIcon( "/mActionSplitFeatures.svg" ) );
  mActionSplitParts->setIcon( NGQgsApplication::getThemeIcon( "/mActionSplitParts.svg" ) );
  mActionDeleteSelected->setIcon( NGQgsApplication::getThemeIcon( "/mActionDeleteSelected.svg" ) );
  mActionNodeTool->setIcon( NGQgsApplication::getThemeIcon( "/mActionNodeTool.svg" ) );
  mActionSimplifyFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionSimplify.svg" ) );
  mActionUndo->setIcon( NGQgsApplication::getThemeIcon( "/mActionUndo.svg" ) );
  mActionRedo->setIcon( NGQgsApplication::getThemeIcon( "/mActionRedo.svg" ) );
  mActionAddRing->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddRing.svg" ) );
  mActionFillRing->setIcon( NGQgsApplication::getThemeIcon( "/mActionFillRing.svg" ) );
  mActionAddPart->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddPart.svg" ) );
  mActionDeleteRing->setIcon( NGQgsApplication::getThemeIcon( "/mActionDeleteRing.svg" ) );
  mActionDeletePart->setIcon( NGQgsApplication::getThemeIcon( "/mActionDeletePart.svg" ) );
  mActionMergeFeatures->setIcon( NGQgsApplication::getThemeIcon( "/mActionMergeFeatures.svg" ) );
  mActionOffsetCurve->setIcon( NGQgsApplication::getThemeIcon( "/mActionOffsetCurve.svg" ) );
  mActionMergeFeatureAttributes->setIcon( NGQgsApplication::getThemeIcon( "/mActionMergeFeatureAttributes.svg" ) );
  mActionRotatePointSymbols->setIcon( NGQgsApplication::getThemeIcon( "mActionRotatePointSymbols.svg" ) );
  mActionOffsetPointSymbol->setIcon( NGQgsApplication::getThemeIcon( "mActionOffsetPointSymbols.svg" ) );
  mActionZoomIn->setIcon( NGQgsApplication::getThemeIcon( "/mActionZoomIn.svg" ) );
  mActionZoomOut->setIcon( NGQgsApplication::getThemeIcon( "/mActionZoomOut.svg" ) );
  mActionZoomFullExtent->setIcon( NGQgsApplication::getThemeIcon( "/mActionZoomFullExtent.svg" ) );
  mActionZoomToSelected->setIcon( NGQgsApplication::getThemeIcon( "/mActionZoomToSelected.svg" ) );
  mActionShowRasterCalculator->setIcon( NGQgsApplication::getThemeIcon( "/mActionShowRasterCalculator.png" ) );
#ifdef HAVE_TOUCH
  mActionTouch->setIcon( NGQgsApplication::getThemeIcon( "/mActionTouch.svg" ) );
#endif
  mActionPan->setIcon( NGQgsApplication::getThemeIcon( "/mActionPan.svg" ) );
  mActionPanToSelected->setIcon( NGQgsApplication::getThemeIcon( "/mActionPanToSelected.svg" ) );
  mActionZoomLast->setIcon( NGQgsApplication::getThemeIcon( "/mActionZoomLast.svg" ) );
  mActionZoomNext->setIcon( NGQgsApplication::getThemeIcon( "/mActionZoomNext.svg" ) );
  mActionZoomToLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionZoomToLayer.svg" ) );
  mActionZoomActualSize->setIcon( NGQgsApplication::getThemeIcon( "/mActionZoomActual.svg" ) );
  mActionIdentify->setIcon( NGQgsApplication::getThemeIcon( "/mActionIdentify.svg" ) );
  mActionFeatureAction->setIcon( NGQgsApplication::getThemeIcon( "/mAction.svg" ) );
  mActionSelectFeatures->setIcon( NGQgsApplication::getThemeIcon( "/mActionSelectRectangle.svg" ) );
  mActionSelectPolygon->setIcon( NGQgsApplication::getThemeIcon( "/mActionSelectPolygon.svg" ) );
  mActionSelectFreehand->setIcon( NGQgsApplication::getThemeIcon( "/mActionSelectFreehand.svg" ) );
  mActionSelectRadius->setIcon( NGQgsApplication::getThemeIcon( "/mActionSelectRadius.svg" ) );
  mActionDeselectAll->setIcon( NGQgsApplication::getThemeIcon( "/mActionDeselectAll.svg" ) );
  mActionSelectAll->setIcon( NGQgsApplication::getThemeIcon( "/mActionSelectAll.svg" ) );
  mActionInvertSelection->setIcon( NGQgsApplication::getThemeIcon( "/mActionInvertSelection.svg" ) );
  mActionSelectByExpression->setIcon( NGQgsApplication::getThemeIcon( "/mIconExpressionSelect.svg" ) );
  mActionSelectByForm->setIcon( NGQgsApplication::getThemeIcon( "/mIconFormSelect.svg" ) );
  mActionOpenTable->setIcon( NGQgsApplication::getThemeIcon( "/mActionOpenTable.svg" ) );
  mActionOpenFieldCalc->setIcon( NGQgsApplication::getThemeIcon( "/mActionCalculateField.svg" ) );
  mActionMeasure->setIcon( NGQgsApplication::getThemeIcon( "/mActionMeasure.svg" ) );
  mActionMeasureArea->setIcon( NGQgsApplication::getThemeIcon( "/mActionMeasureArea.svg" ) );
  mActionMeasureAngle->setIcon( NGQgsApplication::getThemeIcon( "/mActionMeasureAngle.svg" ) );
  mActionMapTips->setIcon( NGQgsApplication::getThemeIcon( "/mActionMapTips.svg" ) );
  mActionShowBookmarks->setIcon( NGQgsApplication::getThemeIcon( "/mActionShowBookmarks.svg" ) );
  mActionNewBookmark->setIcon( NGQgsApplication::getThemeIcon( "/mActionNewBookmark.svg" ) );
  mActionCustomProjection->setIcon( NGQgsApplication::getThemeIcon( "/mActionCustomProjection.svg" ) );
  mActionAddWmsLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddWmsLayer.svg" ) );
  mActionAddWcsLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddWcsLayer.svg" ) );
  mActionAddWfsLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddWfsLayer.svg" ) );
#ifdef WITH_ARCGIS
  mActionAddAfsLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddAfsLayer.svg" ) );
  mActionAddAmsLayer->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddAmsLayer.svg" ) );
#endif
  mActionAddToOverview->setIcon( NGQgsApplication::getThemeIcon( "/mActionInOverview.svg" ) );
  mActionAnnotation->setIcon( NGQgsApplication::getThemeIcon( "/mActionAnnotation.svg" ) );
  mActionFormAnnotation->setIcon( NGQgsApplication::getThemeIcon( "/mActionFormAnnotation.svg" ) );
  mActionHtmlAnnotation->setIcon( NGQgsApplication::getThemeIcon( "/mActionHtmlAnnotation.svg" ) );
  mActionSvgAnnotation->setIcon( NGQgsApplication::getThemeIcon( "/mActionSvgAnnotation.svg" ) );
  mActionTextAnnotation->setIcon( NGQgsApplication::getThemeIcon( "/mActionTextAnnotation.svg" ) );
  mActionLabeling->setIcon( NGQgsApplication::getThemeIcon( "/mActionLabeling.svg" ) );
  mActionShowPinnedLabels->setIcon( NGQgsApplication::getThemeIcon( "/mActionShowPinnedLabels.svg" ) );
  mActionPinLabels->setIcon( NGQgsApplication::getThemeIcon( "/mActionPinLabels.svg" ) );
  mActionShowHideLabels->setIcon( NGQgsApplication::getThemeIcon( "/mActionShowHideLabels.svg" ) );
  mActionMoveLabel->setIcon( NGQgsApplication::getThemeIcon( "/mActionMoveLabel.svg" ) );
  mActionRotateLabel->setIcon( NGQgsApplication::getThemeIcon( "/mActionRotateLabel.svg" ) );
  mActionChangeLabelProperties->setIcon( NGQgsApplication::getThemeIcon( "/mActionChangeLabelProperties.svg" ) );
  mActionDiagramProperties->setIcon( NGQgsApplication::getThemeIcon( "/mActionDiagramProperties.svg" ) );
  mActionDecorationCopyright->setIcon( NGQgsApplication::getThemeIcon( "/copyright_label.png" ) );
  mActionDecorationNorthArrow->setIcon( NGQgsApplication::getThemeIcon( "/north_arrow.png" ) );
  mActionDecorationScaleBar->setIcon( NGQgsApplication::getThemeIcon( "/scale_bar.png" ) );
  mActionDecorationGrid->setIcon( NGQgsApplication::getThemeIcon( "/transformed.svg" ) );

  //change themes of all composers
  QSet<QgsComposer*>::const_iterator composerIt = mPrintComposers.constBegin();
  for ( ; composerIt != mPrintComposers.constEnd(); ++composerIt )
  {
    ( *composerIt )->setupTheme();
  }

  emit currentThemeChanged( theThemeName );
}

void NGQgisApp::updateProjectFromTemplates()
{
    // get list of project files in template dir
    QSettings settings;
    QString templateDirName = settings.value( "/qgis/projectTemplateDir",
                              NGQgsApplication::qgisSettingsDirPath() +
                                              "project_templates" ).toString();
    QDir templateDir( templateDirName );
    QStringList filters( "*.qgs" );
    templateDir.setNameFilters( filters );
    QStringList templateFiles = templateDir.entryList( filters );

    // Remove existing entries
    mProjectFromTemplateMenu->clear();

    // Add entries
    Q_FOREACH ( const QString& templateFile, templateFiles )
    {
      mProjectFromTemplateMenu->addAction( templateFile );
    }

    // add <blank> entry, which loads a blank template (regardless of "default template")
    if ( settings.value( "/qgis/newProjectDefault", QVariant( false ) ).toBool() )
      mProjectFromTemplateMenu->addAction( tr( "< Blank >" ) );
}

void NGQgisApp::toggleLogMessageIcon( bool hasLogMessage )
{
  if ( hasLogMessage && !mLogDock->isVisible() )
  {
    mMessageButton->setIcon( NGQgsApplication::getThemeIcon( "/mMessageLog.svg" ) );
  }
  else
  {
    mMessageButton->setIcon( NGQgsApplication::getThemeIcon( "/mMessageLogRead.svg" ) );
  }
}

void NGQgisApp::initLayerTreeView()
{
    mLayerTreeView->setWhatsThis( tr( "Map legend that displays all the layers currently on the map canvas. Click on the check box to turn a layer on or off. Double click on a layer in the legend to customize its appearance and set other properties." ) );

    mLayerTreeDock = new QgsDockWidget( tr( "Layers Panel" ), this );
    mLayerTreeDock->setObjectName( "Layers" );
    mLayerTreeDock->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );

    QgsLayerTreeModel* model = new QgsLayerTreeModel( QgsProject::instance()->layerTreeRoot(), this );
  #ifdef ENABLE_MODELTEST
    new ModelTest( model, this );
  #endif
    model->setFlag( QgsLayerTreeModel::AllowNodeReorder );
    model->setFlag( QgsLayerTreeModel::AllowNodeRename );
    model->setFlag( QgsLayerTreeModel::AllowNodeChangeVisibility );
    model->setFlag( QgsLayerTreeModel::ShowLegendAsTree );
    model->setFlag( QgsLayerTreeModel::UseEmbeddedWidgets );
    model->setAutoCollapseLegendNodes( 10 );

    mLayerTreeView->setModel( model );
    mLayerTreeView->setMenuProvider( new QgsAppLayerTreeViewMenuProvider( mLayerTreeView, mMapCanvas ) );

    setupLayerTreeViewFromSettings();

    connect( mLayerTreeView, SIGNAL( doubleClicked( QModelIndex ) ), this, SLOT( layerTreeViewDoubleClicked( QModelIndex ) ) );
    connect( mLayerTreeView, SIGNAL( currentLayerChanged( QgsMapLayer* ) ), this, SLOT( activeLayerChanged( QgsMapLayer* ) ) );
    connect( mLayerTreeView->selectionModel(), SIGNAL( currentChanged( QModelIndex, QModelIndex ) ), this, SLOT( updateNewLayerInsertionPoint() ) );
    connect( QgsProject::instance()->layerTreeRegistryBridge(), SIGNAL( addedLayersToLayerTree( QList<QgsMapLayer*> ) ),
             this, SLOT( autoSelectAddedLayer( QList<QgsMapLayer*> ) ) );

  // add group action
  QAction* actionAddGroup = new QAction( tr( "Add Group" ), this );
  actionAddGroup->setIcon( NGQgsApplication::getThemeIcon( "/mActionAddGroup.svg" ) );
  actionAddGroup->setToolTip( tr( "Add Group" ) );
  connect( actionAddGroup, SIGNAL( triggered( bool ) ),
           mLayerTreeView->defaultActions(), SLOT( addGroup() ) );

  // visibility groups tool button
  QToolButton* btnVisibilityPresets = new QToolButton;
  btnVisibilityPresets->setAutoRaise( true );
  btnVisibilityPresets->setToolTip( tr( "Manage Layer Visibility" ) );
  btnVisibilityPresets->setIcon( NGQgsApplication::getThemeIcon( "/mActionShowAllLayers.svg" ) );
  btnVisibilityPresets->setPopupMode( QToolButton::InstantPopup );
  btnVisibilityPresets->setMenu( QgsVisibilityPresets::instance()->menu() );

  // filter legend action
  mActionFilterLegend = new QAction( tr( "Filter Legend By Map Content" ), this );
  mActionFilterLegend->setCheckable( true );
  mActionFilterLegend->setToolTip( tr( "Filter Legend By Map Content" ) );
  mActionFilterLegend->setIcon( NGQgsApplication::getThemeIcon( "/mActionFilter2.svg" ) );
  connect( mActionFilterLegend, SIGNAL( toggled( bool ) ), this, SLOT( updateFilterLegend() ) );

  mLegendExpressionFilterButton = new QgsLegendFilterButton( this );
  mLegendExpressionFilterButton->setToolTip( tr( "Filter legend by expression" ) );
  connect( mLegendExpressionFilterButton, SIGNAL( toggled( bool ) ), this, SLOT( toggleFilterLegendByExpression( bool ) ) );

  mActionStyleDock = new QAction( tr( "Layer Styling" ), this );
  mActionStyleDock->setCheckable( true );
  mActionStyleDock->setToolTip( tr( "Open the layer styling dock" ) );
  mActionStyleDock->setShortcut( QString( "F7" ) );
  mActionStyleDock->setIcon( NGQgsApplication::getThemeIcon( "propertyicons/symbology.svg" ) );
  connect( mActionStyleDock, SIGNAL( toggled( bool ) ), this, SLOT( mapStyleDock( bool ) ) );

  // expand / collapse tool buttons
  QAction* actionExpandAll = new QAction( tr( "Expand All" ), this );
  actionExpandAll->setIcon( NGQgsApplication::getThemeIcon( "/mActionExpandTree.svg" ) );
  actionExpandAll->setToolTip( tr( "Expand All" ) );
  connect( actionExpandAll, SIGNAL( triggered( bool ) ), mLayerTreeView, SLOT( expandAllNodes() ) );
  QAction* actionCollapseAll = new QAction( tr( "Collapse All" ), this );
  actionCollapseAll->setIcon( NGQgsApplication::getThemeIcon( "/mActionCollapseTree.svg" ) );
  actionCollapseAll->setToolTip( tr( "Collapse All" ) );
  connect( actionCollapseAll, SIGNAL( triggered( bool ) ), mLayerTreeView, SLOT( collapseAllNodes() ) );

  QWidget* spacer = new QWidget();
  spacer->setSizePolicy( QSizePolicy::Expanding, QSizePolicy::Expanding );

  QToolBar* toolbar = new QToolBar();
  toolbar->setIconSize( QSize( 16, 16 ) );
  toolbar->addAction( mActionStyleDock );
  toolbar->addAction( actionAddGroup );
  toolbar->addWidget( btnVisibilityPresets );
  toolbar->addAction( mActionFilterLegend );
  toolbar->addWidget( mLegendExpressionFilterButton );
  toolbar->addAction( actionExpandAll );
  toolbar->addAction( actionCollapseAll );
  toolbar->addAction( mActionRemoveLayer );

  QVBoxLayout* vboxLayout = new QVBoxLayout;
  vboxLayout->setMargin( 0 );
  vboxLayout->setContentsMargins( 0, 0, 0, 0 );
  vboxLayout->setSpacing( 0 );
  vboxLayout->addWidget( toolbar );
  vboxLayout->addWidget( mLayerTreeView );

  QWidget* w = new QWidget;
  w->setLayout( vboxLayout );
  mLayerTreeDock->setWidget( w );
  addDockWidget( Qt::LeftDockWidgetArea, mLayerTreeDock );

  mLayerTreeCanvasBridge = new QgsLayerTreeMapCanvasBridge( QgsProject::instance()->layerTreeRoot(), mMapCanvas, this );
  connect( QgsProject::instance(), SIGNAL( writeProject( QDomDocument& ) ), mLayerTreeCanvasBridge, SLOT( writeProject( QDomDocument& ) ) );
  connect( QgsProject::instance(), SIGNAL( readProject( QDomDocument ) ), mLayerTreeCanvasBridge, SLOT( readProject( QDomDocument ) ) );

  bool otfTransformAutoEnable = QSettings().value( "/Projections/otfTransformAutoEnable", true ).toBool();
  mLayerTreeCanvasBridge->setAutoEnableCrsTransform( otfTransformAutoEnable );

  mMapLayerOrder = new QgsCustomLayerOrderWidget( mLayerTreeCanvasBridge, this );
  mMapLayerOrder->setObjectName( "theMapLayerOrder" );

  mMapLayerOrder->setWhatsThis( tr( "Map layer list that displays all layers in drawing order." ) );
  mLayerOrderDock = new QgsDockWidget( tr( "Layer Order Panel" ), this );
  mLayerOrderDock->setObjectName( "LayerOrder" );
  mLayerOrderDock->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );

  mLayerOrderDock->setWidget( mMapLayerOrder );
  addDockWidget( Qt::LeftDockWidgetArea, mLayerOrderDock );
  mLayerOrderDock->hide();

  connect( mMapCanvas, SIGNAL( mapCanvasRefreshed() ), this, SLOT( updateFilterLegend() ) );
}

void NGQgisApp::saveRecentProjectPath( const QString& projectPath, bool savePreviewImage )
{
    // first, re-read the recent project paths. This prevents loss of recent
    // projects when multiple QGIS sessions are open
    readRecentProjects();

    QSettings settings;

    // Get canonical absolute path
    QFileInfo myFileInfo( projectPath );
    QgsWelcomePageItemsModel::RecentProjectData projectData;
    projectData.path = myFileInfo.absoluteFilePath();
    projectData.title = QgsProject::instance()->title();
    if ( projectData.title.isEmpty() )
      projectData.title = projectData.path;

    projectData.crs = mMapCanvas->mapSettings().destinationCrs().authid();

    if ( savePreviewImage )
    {
      // Generate a unique file name
      QString fileName( QCryptographicHash::hash(( projectData.path.toUtf8() ), QCryptographicHash::Md5 ).toHex() );
      QString previewDir = QString( "%1/previewImages" ).arg( NGQgsApplication::qgisSettingsDirPath() );
      projectData.previewImagePath = QString( "%1/%2.png" ).arg( previewDir, fileName );
      QDir().mkdir( previewDir );

      // Render the map canvas
      QSize previewSize( 250, 177 ); // h = w / sqrt(2)
      QRect previewRect( QPoint(( mMapCanvas->width() - previewSize.width() ) / 2
                                , ( mMapCanvas->height() - previewSize.height() ) / 2 )
                         , previewSize );

      QPixmap previewImage( previewSize );
      QPainter previewPainter( &previewImage );
      mMapCanvas->render( &previewPainter, QRect( QPoint(), previewSize ), previewRect );

      // Save
      previewImage.save( projectData.previewImagePath );
    }
    else
    {
      int idx = mRecentProjects.indexOf( projectData );
      if ( idx != -1 )
        projectData.previewImagePath = mRecentProjects.at( idx ).previewImagePath;
    }

    // If this file is already in the list, remove it
    mRecentProjects.removeAll( projectData );

    // Prepend this file to the list
    mRecentProjects.prepend( projectData );

    // Keep the list to 10 items by trimming excess off the bottom
    // And remove the associated image
    while ( mRecentProjects.count() > 10 )
    {
      QFile( mRecentProjects.takeLast().previewImagePath ).remove();
    }

    settings.remove( "/UI/recentProjects" );
    int idx = 0;

    // Persist the list
    Q_FOREACH ( const QgsWelcomePageItemsModel::RecentProjectData& recentProject, mRecentProjects )
    {
      ++idx;
      settings.beginGroup( QString( "/UI/recentProjects/%1" ).arg( idx ) );
      settings.setValue( "title", recentProject.title );
      settings.setValue( "path", recentProject.path );
      settings.setValue( "previewImage", recentProject.previewImagePath );
      settings.setValue( "crs", recentProject.crs );
      settings.endGroup();
    }

    // Update menu list of paths
    updateRecentProjectPaths();

}

void NGQgisApp::fileNewFromDefaultTemplate()
{
  QString projectTemplate = NGQgsApplication::qgisSettingsDirPath() +
          QLatin1String( "project_default.qgs" );
  QString msgTxt;
  if ( !projectTemplate.isEmpty() && QFile::exists( projectTemplate ) )
  {
    if ( fileNewFromTemplate( projectTemplate ) )
    {
      return;
    }
    msgTxt = tr( "Default failed to open: %1" );
  }
  else
  {
    msgTxt = tr( "Default not found: %1" );
  }
  messageBar()->pushMessage( tr( "Open Template Project" ),
                             msgTxt.arg( projectTemplate ),
                             QgsMessageBar::WARNING );
}

void NGQgisApp::about()
{
    static NgsAboutDialog *about = new NgsAboutDialog (this);
    about->exec();
}

void NGQgisApp::loadPythonSupport()
{
    QString pythonlibName( "ngqgis_python" );
#if defined(Q_OS_MAC)
    pythonlibName.prepend( NGQgsApplication::libraryPath() + QDir::separator() );
    pythonlibName.append( QLatin1String(".framework") + QDir::separator() +
                          QLatin1String("ngqgis_python") );
#elif defined(Q_OS_LINUX)
    pythonlibName.prepend( NGQgsApplication::libraryPath() );
#elif defined(__MINGW32__)
    pythonlibName.prepend( "lib" );
#endif
  QString version = QString( "%1.%2.%3" ).arg( VERSION_INT / 10000 ).arg( VERSION_INT / 100 % 100 ).arg( VERSION_INT % 100 );
  QgsDebugMsg( QString( "load library %1 (%2)" ).arg( pythonlibName, version ) );

  QLibrary pythonlib( pythonlibName, version );
  // It's necessary to set these two load hints, otherwise Python library won't work correctly
  // see http://lists.kde.org/?l=pykde&m=117190116820758&w=2
  pythonlib.setLoadHints( QLibrary::ResolveAllSymbolsHint |
                          QLibrary::ExportExternalSymbolsHint );
  if ( !pythonlib.load() )
  {
    pythonlib.setFileName( pythonlibName );
    if ( !pythonlib.load() )
    {
      QgsMessageLog::logMessage( tr( "Couldn't load Python support library: %1" ).arg( pythonlib.errorString() ),
        QString::null, QgsMessageLog::WARNING);
      return;
    }
  }

  //QgsDebugMsg("Python support library loaded successfully.");
  typedef QgsPythonUtils*( *inst )();
  inst pythonlib_inst = reinterpret_cast< inst >( cast_to_fptr( pythonlib.resolve( "instance" ) ) );
  if ( !pythonlib_inst )
  {
    //using stderr on purpose because we want end users to see this [TS]
    QgsMessageLog::logMessage( tr( "Couldn't resolve python support library's instance() symbol." ),
      QString::null, QgsMessageLog::WARNING );
    return;
  }

  //QgsDebugMsg("Python support library's instance() symbol resolved.");
  mPythonUtils = pythonlib_inst();
  if ( mPythonUtils )
  {
    mPythonUtils->initPython( mQgisInterface );
  }

  if ( mPythonUtils && mPythonUtils->isEnabled() )
  {
    QgsPluginRegistry::instance()->setPythonUtils( mPythonUtils );

    // init python runner
    QgsPythonRunner::setInstance( new NGQgsPythonRunnerImpl( mPythonUtils ) );

    QgsMessageLog::logMessage( tr( "Python support ENABLED" ), QString::null,
                               QgsMessageLog::INFO );
  }
}

void NGQgisApp::checkQgisVersion()
{
    QObject* obj = sender();
    mUpdatesCheckStartByUser = (obj == mActionCheckQgisVersion);

    QgsMessageLog::logMessage( tr("Started check updates ..."), QString::null,
                               QgsMessageLog::INFO );
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

  QWidget* banner = new QWidget(this->messageBar());
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

void NGQgisApp::increaseBrightness()
{
  int step = 1;
  if ( NGQgsApplication::keyboardModifiers() == Qt::ShiftModifier )
  {
    step = 10;
  }
  adjustBrightnessContrast( step );
}

void NGQgisApp::decreaseBrightness()
{
  int step = -1;
  if ( NGQgsApplication::keyboardModifiers() == Qt::ShiftModifier )
  {
    step = -10;
  }
  adjustBrightnessContrast( step );
}

void NGQgisApp::increaseContrast()
{
  int step = 1;
  if ( NGQgsApplication::keyboardModifiers() == Qt::ShiftModifier )
  {
    step = 10;
  }
  adjustBrightnessContrast( step, false );
}

void NGQgisApp::decreaseContrast()
{
  int step = -1;
  if ( NGQgsApplication::keyboardModifiers() == Qt::ShiftModifier )
  {
    step = -10;
  }
  adjustBrightnessContrast( step, false );
}

void NGQgisApp::helpContents()
{
    openURL( "http://docs.nextgis.ru/docs_ngqgis/source/toc.html", false );
}

void NGQgisApp::apiDocumentation()
{
    // TODO:
}

void NGQgisApp::reportaBug()
{
  openURL( tr( "https://github.com/nextgis/nextgisqgis/issues" ), false );
}

void NGQgisApp::supportProviders()
{
  openURL( tr( "http://nextgis.com" ), false );
}

void NGQgisApp::helpQgisHomePage()
{
  openURL( "http://docs.nextgis.ru/docs_ngqgis/source/toc.html", false );
}

void NGQgisApp::updateCRSStatusBar()
{
  mOnTheFlyProjectionStatusButton->setText(
              mMapCanvas->mapSettings().destinationCrs().authid() );

  if ( mMapCanvas->mapSettings().hasCrsTransformEnabled() )
  {
    mOnTheFlyProjectionStatusButton->setText( tr( "%1 (OTF)" ).arg(
                                    mOnTheFlyProjectionStatusButton->text() ) );
    mOnTheFlyProjectionStatusButton->setToolTip(
      tr( "Current CRS: %1 (OTFR enabled)" ).arg(
                    mMapCanvas->mapSettings().destinationCrs().description() ) );
    mOnTheFlyProjectionStatusButton->setIcon(
                NGQgsApplication::getThemeIcon( "mIconProjectionEnabled.png" ) );
  }
  else
  {
    mOnTheFlyProjectionStatusButton->setToolTip(
      tr( "Current CRS: %1 (OTFR disabled)" ).arg(
                    mMapCanvas->mapSettings().destinationCrs().description() ) );
    mOnTheFlyProjectionStatusButton->setIcon(
                NGQgsApplication::getThemeIcon( "mIconProjectionDisabled.png" ) );
  }
}

void NGQgisApp::activateDeactivateLayerRelatedActions( QgsMapLayer* layer )
{
    updateLabelToolButtons();

    mMenuPasteAs->setEnabled( clipboard() && !clipboard()->isEmpty() );
    mActionPasteAsNewVector->setEnabled( clipboard() && !clipboard()->isEmpty() );
    mActionPasteAsNewMemoryVector->setEnabled( clipboard() && !clipboard()->isEmpty() );

    updateLayerModifiedActions();

    if ( !layer )
    {
      mActionSelectFeatures->setEnabled( false );
      mActionSelectPolygon->setEnabled( false );
      mActionSelectFreehand->setEnabled( false );
      mActionSelectRadius->setEnabled( false );
      mActionIdentify->setEnabled( QSettings().value( "/Map/identifyMode", 0 ).toInt() != 0 );
      mActionSelectByExpression->setEnabled( false );
      mActionSelectByForm->setEnabled( false );
      mActionLabeling->setEnabled( false );
      mActionOpenTable->setEnabled( false );
      mActionSelectAll->setEnabled( false );
      mActionInvertSelection->setEnabled( false );
      mActionOpenFieldCalc->setEnabled( false );
      mActionToggleEditing->setEnabled( false );
      mActionToggleEditing->setChecked( false );
      mActionSaveLayerEdits->setEnabled( false );
      mActionSaveLayerDefinition->setEnabled( false );
      mActionLayerSaveAs->setEnabled( false );
      mActionLayerProperties->setEnabled( false );
      mActionLayerSubsetString->setEnabled( false );
      mActionAddToOverview->setEnabled( false );
      mActionFeatureAction->setEnabled( false );
      mActionAddFeature->setEnabled( false );
      mActionCircularStringCurvePoint->setEnabled( false );
      mActionCircularStringRadius->setEnabled( false );
      mActionMoveFeature->setEnabled( false );
      mActionRotateFeature->setEnabled( false );
      mActionOffsetCurve->setEnabled( false );
      mActionNodeTool->setEnabled( false );
      mActionDeleteSelected->setEnabled( false );
      mActionCutFeatures->setEnabled( false );
      mActionCopyFeatures->setEnabled( false );
      mActionPasteFeatures->setEnabled( false );
      mActionCopyStyle->setEnabled( false );
      mActionPasteStyle->setEnabled( false );

      mUndoDock->widget()->setEnabled( false );
      mActionUndo->setEnabled( false );
      mActionRedo->setEnabled( false );
      mActionSimplifyFeature->setEnabled( false );
      mActionAddRing->setEnabled( false );
      mActionFillRing->setEnabled( false );
      mActionAddPart->setEnabled( false );
      mActionDeleteRing->setEnabled( false );
      mActionDeletePart->setEnabled( false );
      mActionReshapeFeatures->setEnabled( false );
      mActionOffsetCurve->setEnabled( false );
      mActionSplitFeatures->setEnabled( false );
      mActionSplitParts->setEnabled( false );
      mActionMergeFeatures->setEnabled( false );
      mActionMergeFeatureAttributes->setEnabled( false );
      mActionMultiEditAttributes->setEnabled( false );
      mActionRotatePointSymbols->setEnabled( false );
      mActionOffsetPointSymbol->setEnabled( false );
      mActionEnableTracing->setEnabled( false );

      mActionPinLabels->setEnabled( false );
      mActionShowHideLabels->setEnabled( false );
      mActionMoveLabel->setEnabled( false );
      mActionRotateLabel->setEnabled( false );
      mActionChangeLabelProperties->setEnabled( false );

      mActionDiagramProperties->setEnabled( false );

      mActionLocalHistogramStretch->setEnabled( false );
      mActionFullHistogramStretch->setEnabled( false );
      mActionLocalCumulativeCutStretch->setEnabled( false );
      mActionFullCumulativeCutStretch->setEnabled( false );
      mActionIncreaseBrightness->setEnabled( false );
      mActionDecreaseBrightness->setEnabled( false );
      mActionIncreaseContrast->setEnabled( false );
      mActionDecreaseContrast->setEnabled( false );
      mActionZoomActualSize->setEnabled( false );
      mActionZoomToLayer->setEnabled( false );
      return;
    }

    mActionLayerProperties->setEnabled( QgsProject::instance()->layerIsEmbedded( layer->id() ).isEmpty() );
    mActionAddToOverview->setEnabled( true );
    mActionZoomToLayer->setEnabled( true );

    mActionCopyStyle->setEnabled( true );
    mActionPasteStyle->setEnabled( clipboard()->hasFormat( QGSCLIPBOARD_STYLE_MIME ) );

    /***********Vector layers****************/
    if ( layer->type() == QgsMapLayer::VectorLayer )
    {
      QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>( layer );
      QgsVectorDataProvider* dprovider = vlayer->dataProvider();

      bool isEditable = vlayer->isEditable();
      bool layerHasSelection = vlayer->selectedFeatureCount() > 0;
      bool layerHasActions = vlayer->actions()->size() || !QgsMapLayerActionRegistry::instance()->mapLayerActions( vlayer ).isEmpty();

      mActionLocalHistogramStretch->setEnabled( false );
      mActionFullHistogramStretch->setEnabled( false );
      mActionLocalCumulativeCutStretch->setEnabled( false );
      mActionFullCumulativeCutStretch->setEnabled( false );
      mActionIncreaseBrightness->setEnabled( false );
      mActionDecreaseBrightness->setEnabled( false );
      mActionIncreaseContrast->setEnabled( false );
      mActionDecreaseContrast->setEnabled( false );
      mActionZoomActualSize->setEnabled( false );
      mActionLabeling->setEnabled( true );
      mActionDiagramProperties->setEnabled( true );

      mActionSelectFeatures->setEnabled( true );
      mActionSelectPolygon->setEnabled( true );
      mActionSelectFreehand->setEnabled( true );
      mActionSelectRadius->setEnabled( true );
      mActionIdentify->setEnabled( true );
      mActionSelectByExpression->setEnabled( true );
      mActionSelectByForm->setEnabled( true );
      mActionOpenTable->setEnabled( true );
      mActionSelectAll->setEnabled( true );
      mActionInvertSelection->setEnabled( true );
      mActionSaveLayerDefinition->setEnabled( true );
      mActionLayerSaveAs->setEnabled( true );
      mActionCopyFeatures->setEnabled( layerHasSelection );
      mActionFeatureAction->setEnabled( layerHasActions );

      if ( !isEditable && mMapCanvas && mMapCanvas->mapTool()
           && ( mMapCanvas->mapTool()->flags() & QgsMapTool::EditTool ) && !mSaveRollbackInProgress )
      {
        mMapCanvas->setMapTool( mNonEditMapTool );
      }

      if ( dprovider )
      {
        bool canChangeAttributes = dprovider->capabilities() & QgsVectorDataProvider::ChangeAttributeValues;
        bool canDeleteFeatures = dprovider->capabilities() & QgsVectorDataProvider::DeleteFeatures;
        bool canAddFeatures = dprovider->capabilities() & QgsVectorDataProvider::AddFeatures;
        bool canSupportEditing = dprovider->capabilities() & QgsVectorDataProvider::EditingCapabilities;
        bool canChangeGeometry = dprovider->capabilities() & QgsVectorDataProvider::ChangeGeometries;

        mActionLayerSubsetString->setEnabled( !isEditable && dprovider->supportsSubsetString() );

        mActionToggleEditing->setEnabled( canSupportEditing && !vlayer->readOnly() );
        mActionToggleEditing->setChecked( canSupportEditing && isEditable );
        mActionSaveLayerEdits->setEnabled( canSupportEditing && isEditable && vlayer->isModified() );
        mUndoDock->widget()->setEnabled( canSupportEditing && isEditable );
        mActionUndo->setEnabled( canSupportEditing );
        mActionRedo->setEnabled( canSupportEditing );

        //start editing/stop editing
        if ( canSupportEditing )
        {
          updateUndoActions();
        }

        mActionPasteFeatures->setEnabled( isEditable && canAddFeatures && !clipboard()->isEmpty() );

        mActionAddFeature->setEnabled( isEditable && canAddFeatures );
        mActionCircularStringCurvePoint->setEnabled( isEditable && ( canAddFeatures || canChangeGeometry )
            && ( vlayer->geometryType() == QGis::Line || vlayer->geometryType() == QGis::Polygon ) );
        mActionCircularStringRadius->setEnabled( isEditable && ( canAddFeatures || canChangeGeometry )
            && ( vlayer->geometryType() == QGis::Line || vlayer->geometryType() == QGis::Polygon ) );


        //does provider allow deleting of features?
        mActionDeleteSelected->setEnabled( isEditable && canDeleteFeatures && layerHasSelection );
        mActionCutFeatures->setEnabled( isEditable && canDeleteFeatures && layerHasSelection );

        //merge tool needs editable layer and provider with the capability of adding and deleting features
        if ( isEditable && canChangeAttributes )
        {
          mActionMergeFeatures->setEnabled( layerHasSelection && canDeleteFeatures && canAddFeatures );
          mActionMergeFeatureAttributes->setEnabled( layerHasSelection );
          mActionMultiEditAttributes->setEnabled( layerHasSelection );
        }
        else
        {
          mActionMergeFeatures->setEnabled( false );
          mActionMergeFeatureAttributes->setEnabled( false );
          mActionMultiEditAttributes->setEnabled( false );
        }

        bool isMultiPart = QGis::isMultiType( vlayer->wkbType() ) || !dprovider->doesStrictFeatureTypeCheck();

        // moving enabled if geometry changes are supported
        mActionAddPart->setEnabled( isEditable && canChangeGeometry );
        mActionDeletePart->setEnabled( isEditable && canChangeGeometry );
        mActionMoveFeature->setEnabled( isEditable && canChangeGeometry );
        mActionRotateFeature->setEnabled( isEditable && canChangeGeometry );
        mActionNodeTool->setEnabled( isEditable && canChangeGeometry );

        mActionEnableTracing->setEnabled( isEditable && canAddFeatures &&
                                          ( vlayer->geometryType() == QGis::Line || vlayer->geometryType() == QGis::Polygon ) );

        if ( vlayer->geometryType() == QGis::Point )
        {
          mActionAddFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionCapturePoint.svg" ) );
          mActionMoveFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionMoveFeaturePoint.svg" ) );

          mActionAddRing->setEnabled( false );
          mActionFillRing->setEnabled( false );
          mActionReshapeFeatures->setEnabled( false );
          mActionSplitFeatures->setEnabled( false );
          mActionSplitParts->setEnabled( false );
          mActionSimplifyFeature->setEnabled( false );
          mActionDeleteRing->setEnabled( false );
          mActionRotatePointSymbols->setEnabled( false );
          mActionOffsetPointSymbol->setEnabled( false );
          mActionOffsetCurve->setEnabled( false );

          if ( isEditable && canChangeAttributes )
          {
            if ( QgsMapToolRotatePointSymbols::layerIsRotatable( vlayer ) )
            {
              mActionRotatePointSymbols->setEnabled( true );
            }
            if ( QgsMapToolOffsetPointSymbol::layerIsOffsetable( vlayer ) )
            {
              mActionOffsetPointSymbol->setEnabled( true );
            }
          }
        }
        else if ( vlayer->geometryType() == QGis::Line )
        {
          mActionAddFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionCaptureLine.svg" ) );
          mActionMoveFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionMoveFeatureLine.svg" ) );

          mActionReshapeFeatures->setEnabled( isEditable && canChangeGeometry );
          mActionSplitFeatures->setEnabled( isEditable && canAddFeatures );
          mActionSplitParts->setEnabled( isEditable && canChangeGeometry && isMultiPart );
          mActionSimplifyFeature->setEnabled( isEditable && canChangeGeometry );
          mActionOffsetCurve->setEnabled( isEditable && canAddFeatures && canChangeAttributes );

          mActionAddRing->setEnabled( false );
          mActionFillRing->setEnabled( false );
          mActionDeleteRing->setEnabled( false );
        }
        else if ( vlayer->geometryType() == QGis::Polygon )
        {
          mActionAddFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionCapturePolygon.svg" ) );
          mActionMoveFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionMoveFeature.svg" ) );

          mActionAddRing->setEnabled( isEditable && canChangeGeometry );
          mActionFillRing->setEnabled( isEditable && canChangeGeometry );
          mActionReshapeFeatures->setEnabled( isEditable && canChangeGeometry );
          mActionSplitFeatures->setEnabled( isEditable && canAddFeatures );
          mActionSplitParts->setEnabled( isEditable && canChangeGeometry && isMultiPart );
          mActionSimplifyFeature->setEnabled( isEditable && canChangeGeometry );
          mActionDeleteRing->setEnabled( isEditable && canChangeGeometry );
          mActionOffsetCurve->setEnabled( false );
        }
        else if ( vlayer->geometryType() == QGis::NoGeometry )
        {
          mActionAddFeature->setIcon( NGQgsApplication::getThemeIcon( "/mActionNewTableRow.svg" ) );
        }

        mActionOpenFieldCalc->setEnabled( true );
      }
      else
      {
        mUndoDock->widget()->setEnabled( false );
        mActionUndo->setEnabled( false );
        mActionRedo->setEnabled( false );
        mActionLayerSubsetString->setEnabled( false );
      }
    } //end vector layer block
    /*************Raster layers*************/
    else if ( layer->type() == QgsMapLayer::RasterLayer )
    {
      const QgsRasterLayer *rlayer = qobject_cast<const QgsRasterLayer *>( layer );
      if ( rlayer->dataProvider()->dataType( 1 ) != QGis::ARGB32
           && rlayer->dataProvider()->dataType( 1 ) != QGis::ARGB32_Premultiplied )
      {
        if ( rlayer->dataProvider()->capabilities() & QgsRasterDataProvider::Size )
        {
          mActionFullHistogramStretch->setEnabled( true );
        }
        else
        {
          // it would hang up reading the data for WMS for example
          mActionFullHistogramStretch->setEnabled( false );
        }
        mActionLocalHistogramStretch->setEnabled( true );
      }
      else
      {
        mActionLocalHistogramStretch->setEnabled( false );
        mActionFullHistogramStretch->setEnabled( false );
      }

      mActionLocalCumulativeCutStretch->setEnabled( true );
      mActionFullCumulativeCutStretch->setEnabled( true );
      mActionIncreaseBrightness->setEnabled( true );
      mActionDecreaseBrightness->setEnabled( true );
      mActionIncreaseContrast->setEnabled( true );
      mActionDecreaseContrast->setEnabled( true );

      mActionLayerSubsetString->setEnabled( false );
      mActionFeatureAction->setEnabled( false );
      mActionSelectFeatures->setEnabled( false );
      mActionSelectPolygon->setEnabled( false );
      mActionSelectFreehand->setEnabled( false );
      mActionSelectRadius->setEnabled( false );
      mActionZoomActualSize->setEnabled( true );
      mActionOpenTable->setEnabled( false );
      mActionSelectAll->setEnabled( false );
      mActionInvertSelection->setEnabled( false );
      mActionSelectByExpression->setEnabled( false );
      mActionSelectByForm->setEnabled( false );
      mActionOpenFieldCalc->setEnabled( false );
      mActionToggleEditing->setEnabled( false );
      mActionToggleEditing->setChecked( false );
      mActionSaveLayerEdits->setEnabled( false );
      mUndoDock->widget()->setEnabled( false );
      mActionUndo->setEnabled( false );
      mActionRedo->setEnabled( false );
      mActionSaveLayerDefinition->setEnabled( true );
      mActionLayerSaveAs->setEnabled( true );
      mActionAddFeature->setEnabled( false );
      mActionCircularStringCurvePoint->setEnabled( false );
      mActionCircularStringRadius->setEnabled( false );
      mActionDeleteSelected->setEnabled( false );
      mActionAddRing->setEnabled( false );
      mActionFillRing->setEnabled( false );
      mActionAddPart->setEnabled( false );
      mActionNodeTool->setEnabled( false );
      mActionMoveFeature->setEnabled( false );
      mActionRotateFeature->setEnabled( false );
      mActionOffsetCurve->setEnabled( false );
      mActionCopyFeatures->setEnabled( false );
      mActionCutFeatures->setEnabled( false );
      mActionPasteFeatures->setEnabled( false );
      mActionRotatePointSymbols->setEnabled( false );
      mActionOffsetPointSymbol->setEnabled( false );
      mActionDeletePart->setEnabled( false );
      mActionDeleteRing->setEnabled( false );
      mActionSimplifyFeature->setEnabled( false );
      mActionReshapeFeatures->setEnabled( false );
      mActionSplitFeatures->setEnabled( false );
      mActionSplitParts->setEnabled( false );
      mActionLabeling->setEnabled( false );
      mActionDiagramProperties->setEnabled( false );

      //NOTE: This check does not really add any protection, as it is called on load not on layer select/activate
      //If you load a layer with a provider and idenitfy ability then load another without, the tool would be disabled for both

      //Enable the Identify tool ( GDAL datasets draw without a provider )
      //but turn off if data provider exists and has no Identify capabilities
      mActionIdentify->setEnabled( true );

      QSettings settings;
      int identifyMode = settings.value( "/Map/identifyMode", 0 ).toInt();
      if ( identifyMode == 0 )
      {
        const QgsRasterLayer *rlayer = qobject_cast<const QgsRasterLayer *>( layer );
        const QgsRasterDataProvider* dprovider = rlayer->dataProvider();
        if ( dprovider )
        {
          // does provider allow the identify map tool?
          if ( dprovider->capabilities() & QgsRasterDataProvider::Identify )
          {
            mActionIdentify->setEnabled( true );
          }
          else
          {
            mActionIdentify->setEnabled( false );
          }
        }
      }
    }

    refreshFeatureActions();
}

void NGQgisApp::fileNew( bool thePromptToSaveFlag, bool forceBlank )
{
  if ( thePromptToSaveFlag )
  {
    if ( !saveDirty() )
    {
      return; //cancel pressed
    }
  }

  mProjectLastModified = QDateTime();

  QSettings settings;

  closeProject();

  QgsProject* prj = QgsProject::instance();
  prj->clear();

  prj->layerTreeRegistryBridge()->setNewLayersVisible( settings.value(
                                    "/qgis/new_layers_visible", true ).toBool() );

  mLayerTreeCanvasBridge->clear();

  //set the color for selections
  //the default can be set in qgisoptions
  //use project properties to override the color on a per project basis
  int myRed = settings.value( "/qgis/default_selection_color_red", 255 ).toInt();
  int myGreen = settings.value( "/qgis/default_selection_color_green", 255 ).toInt();
  int myBlue = settings.value( "/qgis/default_selection_color_blue", 0 ).toInt();
  int myAlpha = settings.value( "/qgis/default_selection_color_alpha", 255 ).toInt();
  prj->writeEntry( "Gui", "/SelectionColorRedPart", myRed );
  prj->writeEntry( "Gui", "/SelectionColorGreenPart", myGreen );
  prj->writeEntry( "Gui", "/SelectionColorBluePart", myBlue );
  prj->writeEntry( "Gui", "/SelectionColorAlphaPart", myAlpha );
  mMapCanvas->setSelectionColor( QColor( myRed, myGreen, myBlue, myAlpha ) );

  //set the canvas to the default background color
  //the default can be set in qgisoptions
  //use project properties to override the color on a per project basis
  myRed = settings.value( "/qgis/default_canvas_color_red", 255 ).toInt();
  myGreen = settings.value( "/qgis/default_canvas_color_green", 255 ).toInt();
  myBlue = settings.value( "/qgis/default_canvas_color_blue", 255 ).toInt();
  prj->writeEntry( "Gui", "/CanvasColorRedPart", myRed );
  prj->writeEntry( "Gui", "/CanvasColorGreenPart", myGreen );
  prj->writeEntry( "Gui", "/CanvasColorBluePart", myBlue );
  mMapCanvas->setCanvasColor( QColor( myRed, myGreen, myBlue ) );
  mOverviewCanvas->setBackgroundColor( QColor( myRed, myGreen, myBlue ) );

  prj->setDirty( false );

  ngSetTitleBarText_( *this );

  //QgsDebugMsg("emiting new project signal");

  // emit signal so listeners know we have a new project
  emit newProject();

  mMapCanvas->freeze( false );
  mMapCanvas->refresh();
  mMapCanvas->clearExtentHistory();
  mMapCanvas->setRotation( 0.0 );
  mScaleWidget->updateScales();

  // set project CRS
  QString defCrs = settings.value( "/Projections/projectDefaultCrs", GEO_EPSG_CRS_AUTHID ).toString();
  QgsCoordinateReferenceSystem srs = QgsCRSCache::instance()->crsByOgcWmsCrs( defCrs );
  mMapCanvas->setDestinationCrs( srs );
  // write the projections _proj string_ to project settings
  prj->writeEntry( "SpatialRefSys", "/ProjectCRSProj4String", srs.toProj4() );
  prj->writeEntry( "SpatialRefSys", "/ProjectCrs", srs.authid() );
  prj->writeEntry( "SpatialRefSys", "/ProjectCRSID", static_cast< int >( srs.srsid() ) );
  prj->setDirty( false );
  if ( srs.mapUnits() != QGis::UnknownUnit )
  {
    mMapCanvas->setMapUnits( srs.mapUnits() );
  }

  // enable OTF CRS transformation if necessary
  mMapCanvas->setCrsTransformEnabled( settings.value(
                            "/Projections/otfTransformEnabled", 0 ).toBool() );

  updateCRSStatusBar();

  /** New Empty Project Created
      (before attempting to load custom project templates/filepaths) */

  // load default template
  /* NOTE: don't open default template on launch until after initialization,
           in case a project was defined via command line */

  // don't open template if last auto-opening of a project failed
  if ( ! forceBlank )
  {
    forceBlank = ! settings.value( "/qgis/projOpenedOKAtLaunch",
                                   QVariant( true ) ).toBool();
  }

  if ( ! forceBlank && settings.value( "/qgis/newProjectDefault",
                                       QVariant( false ) ).toBool() )
  {
    fileNewFromDefaultTemplate();
  }

  mMapCanvas->setMapTool( mMapTools.mPan );
  mNonEditMapTool = mMapTools.mPan;  // signals are not yet setup to catch this
}

bool NGQgisApp::addProject( const QString& projectFile )
{
  QFileInfo pfi( projectFile );
  statusBar()->showMessage( tr( "Loading project: %1" ).arg( pfi.fileName() ) );
  qApp->processEvents();

  QApplication::setOverrideCursor( Qt::WaitCursor );

  // close the previous opened project if any
  closeProject();

  if ( !QgsProject::instance()->read( projectFile ) )
  {
    QString backupFile = projectFile + "~";
    QString loadBackupPrompt;
    QMessageBox::StandardButtons buttons;
    if ( QFile( backupFile ).exists() )
    {
      loadBackupPrompt = "\n\n" + tr( "Do you want to open the backup file\n%1\ninstead?" ).arg( backupFile );
      buttons |= QMessageBox::Yes;
      buttons |= QMessageBox::No;
    }
    else
    {
      buttons |= QMessageBox::Ok;
    }
    QApplication::restoreOverrideCursor();
    statusBar()->clearMessage();

    int r = QMessageBox::critical( this,
                                   tr( "Unable to open project" ),
                                   QgsProject::instance()->error() + loadBackupPrompt,
                                   buttons );

    if ( QMessageBox::Yes == r && addProject( backupFile ) )
    {
      // We loaded data from the backup file, but we pretend to work on the original project file.
      QgsProject::instance()->setFileName( projectFile );
      QgsProject::instance()->setDirty( true );
      mProjectLastModified = pfi.lastModified();
      return true;
    }

    mMapCanvas->freeze( false );
    mMapCanvas->refresh();
    return false;
  }

  mProjectLastModified = pfi.lastModified();

  ngSetTitleBarText_( *this );
  int  myRedInt = QgsProject::instance()->readNumEntry( "Gui", "/CanvasColorRedPart", 255 );
  int  myGreenInt = QgsProject::instance()->readNumEntry( "Gui", "/CanvasColorGreenPart", 255 );
  int  myBlueInt = QgsProject::instance()->readNumEntry( "Gui", "/CanvasColorBluePart", 255 );
  QColor myColor = QColor( myRedInt, myGreenInt, myBlueInt );
  mMapCanvas->setCanvasColor( myColor ); //this is fill color before rendering starts
  mOverviewCanvas->setBackgroundColor( myColor );

  QgsDebugMsg( "Canvas background color restored..." );
  int myAlphaInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorAlphaPart", 255 );
  myRedInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorRedPart", 255 );
  myGreenInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorGreenPart", 255 );
  myBlueInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorBluePart", 0 );
  myColor = QColor( myRedInt, myGreenInt, myBlueInt, myAlphaInt );
  mMapCanvas->setSelectionColor( myColor ); //this is selection color before rendering starts

  //load project scales
  bool projectScales = QgsProject::instance()->readBoolEntry( "Scales", "/useProjectScales" );
  if ( projectScales )
  {
    mScaleWidget->updateScales( QgsProject::instance()->readListEntry( "Scales", "/ScalesList" ) );
  }

  mMapCanvas->updateScale();
  QgsDebugMsg( "Scale restored..." );

  mActionFilterLegend->setChecked( QgsProject::instance()->readBoolEntry( "Legend", "filterByMap" ) );

  QSettings settings;

  // does the project have any macros?
  if ( mPythonUtils && mPythonUtils->isEnabled() )
  {
    if ( !QgsProject::instance()->readEntry( "Macros", "/pythonCode", QString::null ).isEmpty() )
    {
      int enableMacros = settings.value( "/qgis/enableMacros", 1 ).toInt();
      // 0 = never, 1 = ask, 2 = just for this session, 3 = always

      if ( enableMacros == 3 || enableMacros == 2 )
      {
        enableProjectMacros();
      }
      else if ( enableMacros == 1 ) // ask
      {
        // create the notification widget for macros


        QToolButton *btnEnableMacros = new QToolButton();
        btnEnableMacros->setText( tr( "Enable macros" ) );
        btnEnableMacros->setStyleSheet( "background-color: rgba(255, 255, 255, 0); color: black; text-decoration: underline;" );
        btnEnableMacros->setCursor( Qt::PointingHandCursor );
        btnEnableMacros->setSizePolicy( QSizePolicy::Maximum, QSizePolicy::Preferred );
        connect( btnEnableMacros, SIGNAL( clicked() ), mInfoBar, SLOT( popWidget() ) );
        connect( btnEnableMacros, SIGNAL( clicked() ), this, SLOT( enableProjectMacros() ) );

        QgsMessageBarItem *macroMsg = new QgsMessageBarItem(
          tr( "Security warning" ),
          tr( "project macros have been disabled." ),
          btnEnableMacros,
          QgsMessageBar::WARNING,
          0,
          mInfoBar );
        // display the macros notification widget
        mInfoBar->pushItem( macroMsg );
      }
    }
  }

  emit projectRead(); // let plug-ins know that we've read in a new
  // project so that they can check any project
  // specific plug-in state

  // add this to the list of recently used project files
  saveRecentProjectPath( projectFile, false );

  QApplication::restoreOverrideCursor();

  mMapCanvas->freeze( false );
  mMapCanvas->refresh();

  statusBar()->showMessage( tr( "Project loaded" ), 3000 );
  return true;
}

bool NGQgisApp::fileSave()
{
    // if we don't have a file name, then obviously we need to get one; note
    // that the project file name is reset to null in fileNew()
    QFileInfo fullPath;

    if ( QgsProject::instance()->fileName().isNull() )
    {
      // Retrieve last used project dir from persistent settings
      QSettings settings;
      QString lastUsedDir = settings.value( "/UI/lastProjectDir", QDir::homePath() ).toString();

      QString path = QFileDialog::getSaveFileName(
                       this,
                       tr( "Choose a QGIS project file" ),
                       lastUsedDir + '/' + QgsProject::instance()->title(),
                       tr( "QGIS files" ) + " (*.qgs *.QGS)" );
      if ( path.isEmpty() )
        return false;

      fullPath.setFile( path );

      // make sure we have the .qgs extension in the file name
      if ( "qgs" != fullPath.suffix().toLower() )
      {
        fullPath.setFile( fullPath.filePath() + ".qgs" );
      }


      QgsProject::instance()->setFileName( fullPath.filePath() );
    }
    else
    {
      QFileInfo fi( QgsProject::instance()->fileName() );
      fullPath = fi.absoluteFilePath();
      if ( fi.exists() && !mProjectLastModified.isNull() && mProjectLastModified != fi.lastModified() )
      {
        if ( QMessageBox::warning( this,
                                   tr( "Project file was changed" ),
                                   tr( "The loaded project file on disk was meanwhile changed.  Do you want to overwrite the changes?\n"
                                       "\nLast modification date on load was: %1"
                                       "\nCurrent last modification date is: %2" )
                                   .arg( mProjectLastModified.toString( Qt::DefaultLocaleLongDate ),
                                         fi.lastModified().toString( Qt::DefaultLocaleLongDate ) ),
                                   QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
          return false;
      }

      if ( fi.exists() && ! fi.isWritable() )
      {
        messageBar()->pushMessage( tr( "Insufficient permissions" ),
                                   tr( "The project file is not writable." ),
                                   QgsMessageBar::WARNING );
        return false;
      }
    }

  if ( QgsProject::instance()->write() )
    {
      ngSetTitleBarText_( *this ); // update title bar
      statusBar()->showMessage( tr( "Saved project to: %1" ).arg( QDir::toNativeSeparators( QgsProject::instance()->fileName() ) ), 5000 );

      saveRecentProjectPath( fullPath.filePath() );

      QFileInfo fi( QgsProject::instance()->fileName() );
      mProjectLastModified = fi.lastModified();
    }
    else
    {
      QMessageBox::critical( this,
                             tr( "Unable to save project %1" ).arg( QDir::toNativeSeparators( QgsProject::instance()->fileName() ) ),
                             QgsProject::instance()->error() );
      return false;
    }

    // run the saved project macro
    if ( mTrustedMacros )
    {
      QgsPythonRunner::run( "qgis.utils.saveProjectMacro();" );
    }

    return true;
}

void NGQgisApp::fileSaveAs()
{
    // Retrieve last used project dir from persistent settings
    QSettings settings;
    QString lastUsedDir = settings.value( "/UI/lastProjectDir", QDir::homePath() ).toString();

    QString path = QFileDialog::getSaveFileName( this,
                   tr( "Choose a file name to save the QGIS project file as" ),
                   lastUsedDir + '/' + QgsProject::instance()->title(),
                   tr( "QGIS files" ) + " (*.qgs *.QGS)" );
    if ( path.isEmpty() )
      return;

    QFileInfo fullPath( path );

    settings.setValue( "/UI/lastProjectDir", fullPath.path() );

    // make sure the .qgs extension is included in the path name. if not, add it...
    if ( "qgs" != fullPath.suffix().toLower() )
    {
      fullPath.setFile( fullPath.filePath() + ".qgs" );
    }

    QgsProject::instance()->setFileName( fullPath.filePath() );

    if ( QgsProject::instance()->write() )
    {
      ngSetTitleBarText_( *this ); // update title bar
      statusBar()->showMessage( tr( "Saved project to: %1" ).arg( QDir::toNativeSeparators( QgsProject::instance()->fileName() ) ), 5000 );
      // add this to the list of recently used project files
      saveRecentProjectPath( fullPath.filePath() );
      mProjectLastModified = fullPath.lastModified();
    }
    else
    {
      QMessageBox::critical( this,
                             tr( "Unable to save project %1" ).arg( QDir::toNativeSeparators( QgsProject::instance()->fileName() ) ),
                             QgsProject::instance()->error(),
                             QMessageBox::Ok,
                             Qt::NoButton );
    }
}

void NGQgisApp::functionProfileNG(void (NGQgisApp::*fnc)(),
                                NGQgisApp* instance, QString name)
{
    startProfile( name );
    ( instance->*fnc )();
    endProfile();
}

void NGQgisApp::projectProperties()
{
    /* Display the property sheet for the Project */
    // set wait cursor since construction of the project properties
    // dialog results in the construction of the spatial reference
    // system QMap
    QApplication::setOverrideCursor( Qt::WaitCursor );
    QgsProjectProperties *pp = new QgsProjectProperties( mMapCanvas, this );
    // if called from the status bar, show the projection tab
    if ( mShowProjectionTab )
    {
      pp->showProjectionsTab();
      mShowProjectionTab = false;
    }
    qApp->processEvents();
    // Be told if the mouse display precision may have changed by the user
    // changing things in the project properties dialog box
    connect( pp, SIGNAL( displayPrecisionChanged() ), this,
             SLOT( updateMouseCoordinatePrecision() ) );

    connect( pp, SIGNAL( scalesChanged( const QStringList & ) ), mScaleWidget,
             SLOT( updateScales( const QStringList & ) ) );
    QApplication::restoreOverrideCursor();

    //pass any refresh signals off to canvases
    // Line below was commented out by wonder three years ago (r4949).
    // It is needed to refresh scale bar after changing display units.
    connect( pp, SIGNAL( refresh() ), mMapCanvas, SLOT( refresh() ) );

    // Display the modal dialog box.
    pp->exec();

    qobject_cast<QgsMeasureTool*>( mMapTools.mMeasureDist )->updateSettings();
    qobject_cast<QgsMeasureTool*>( mMapTools.mMeasureArea )->updateSettings();
    qobject_cast<QgsMapToolMeasureAngle*>( mMapTools.mMeasureAngle )->updateSettings();

    // Set the window title.
    ngSetTitleBarText_( *this );

    // delete the property sheet object
    delete pp;
}
