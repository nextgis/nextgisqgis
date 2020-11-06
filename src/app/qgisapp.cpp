/***************************************************************************
  qgisapp.cpp  -  description
  -------------------

           begin                : Sat Jun 22 2002
           copyright            : (C) 2002 by Gary E.Sherman
           email                : sherman at mrcc.com
           Romans 3:23=>Romans 6:23=>Romans 10:9,10=>Romans 12
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

//
// QT4 includes make sure to use the new <CamelCase> style!
//
#include <QAction>
#include <QApplication>
#include <QBitmap>
#include <QCheckBox>
#include <QClipboard>
#include <QColor>
#include <QCursor>
#include <QDesktopServices>
#include <QDesktopWidget>
#include <QDialog>
#include <QDir>
#include <QEvent>
#include <QFile>
#include <QFileInfo>
#include <QImageWriter>
#include <QInputDialog>
#include <QKeyEvent>
#include <QLabel>
#include <QLibrary>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QPainter>
#include <QPictureIO>
#include <QPixmap>
#include <QPoint>
#include <QPrinter>
#include <QProcess>
#include <QProgressBar>
#include <QProgressDialog>
#include <QRegExp>
#include <QRegExpValidator>
#include <QSettings>
#include <QShortcut>
#include <QSpinBox>
#include <QSplashScreen>
#ifndef QT_NO_OPENSSL
#include <QSslConfiguration>
#endif
#include <QStatusBar>
#include <QStringList>
#include <QTcpSocket>
#include <QTextStream>
#include <QtGlobal>
#include <QThread>
#include <QTimer>
#include <QToolButton>
#include <QUuid>
#include <QVBoxLayout>
#include <QWhatsThis>
#include <QWidgetAction>

#include <qgsnetworkaccessmanager.h>
#include <qgsapplication.h>
#include <qgscomposition.h>
#include <qgslayerstylingwidget.h>

#include <QNetworkReply>
#include <QNetworkProxy>
#include <QAuthenticator>

//
// Mac OS X Includes
// Must include before GEOS 3 due to unqualified use of 'Point'
//
#ifdef Q_OS_MAC
#include <ApplicationServices/ApplicationServices.h>

// check macro breaks QItemDelegate
#ifdef check
#undef check
#endif
#endif

//
// QGIS Specific Includes
//

#include "qgisapp.h"
#include "qgisappinterface.h"
#include "qgisappstylesheet.h"
#include "qgis.h"
#include "qgisplugin.h"
#include "qgsabout.h"
#include "qgsalignrasterdialog.h"
#include "qgsapplayertreeviewmenuprovider.h"
#include "qgsapplication.h"
#include "qgsactionmanager.h"
#include "qgsattributetabledialog.h"
#include "qgsauthmanager.h"
#include "qgsauthguiutils.h"
#ifndef QT_NO_OPENSSL
#include "qgsauthcertutils.h"
#include "qgsauthsslerrorsdialog.h"
#endif
#include "qgsbookmarks.h"
#include "qgsbrowsermodel.h"
#include "qgsbrowserdockwidget.h"
#include "qgsadvanceddigitizingdockwidget.h"
#include "qgsclipboard.h"
#include "qgscomposer.h"
#include "qgscomposermanager.h"
#include "qgscomposerview.h"
#include "qgsconfigureshortcutsdialog.h"
#include "qgscoordinatetransform.h"
#include "qgscoordinateutils.h"
#include "qgscredentialdialog.h"
#include "qgscrscache.h"
#include "qgscursors.h"
#include "qgscustomization.h"
#include "qgscustomlayerorderwidget.h"
#include "qgscustomprojectiondialog.h"
#include "qgsdatasourceuri.h"
#include "qgsdatumtransformdialog.h"
#include "qgsdoublespinbox.h"
#include "qgsdockwidget.h"
#include "qgsdxfexport.h"
#include "qgsdxfexportdialog.h"
//#include "qgsdwgimportdialog.h"
#include "qgsdecorationcopyright.h"
#include "qgsdecorationnortharrow.h"
#include "qgsdecorationscalebar.h"
#include "qgsdecorationgrid.h"
#include "qgsencodingfiledialog.h"
#include "qgserror.h"
#include "qgserrordialog.h"
#include "qgsexception.h"
#include "qgsexpressionselectiondialog.h"
#include "qgsfeature.h"
#include "qgsformannotationitem.h"
#include "qgsfieldcalculator.h"
#include "qgshtmlannotationitem.h"
#include "qgsgenericprojectionselector.h"
#include "qgsgpsinformationwidget.h"
#include "qgsguivectorlayertools.h"
#include "qgslabelingwidget.h"
#include "qgsdiagramproperties.h"
#include "qgslayerdefinition.h"
#include "qgslayertree.h"
#include "qgslayertreemapcanvasbridge.h"
#include "qgslayertreemodel.h"
#include "qgslayertreemodellegendnode.h"
#include "qgslayertreeregistrybridge.h"
#include "qgslayertreeutils.h"
#include "qgslayertreeview.h"
#include "qgslayertreeviewdefaultactions.h"
#include "qgslogger.h"
#include "qgsmapcanvas.h"
#include "qgsmapcanvassnappingutils.h"
#include "qgsmapcanvastracer.h"
#include "qgsmaplayer.h"
#include "qgsmaplayerregistry.h"
#include "qgsmaplayerstyleguiutils.h"
#include "qgsmapoverviewcanvas.h"
#include "qgsmaprenderer.h"
#include "qgsmapsettings.h"
#include "qgsmaptip.h"
#include "qgsmergeattributesdialog.h"
#include "qgsmessageviewer.h"
#include "qgsmessagebar.h"
#include "qgsmessagebaritem.h"
#include "qgsmimedatautils.h"
#include "qgsmessagelog.h"
#include "qgsmultibandcolorrenderer.h"
#include "qgsnewvectorlayerdialog.h"
#include "qgsnewmemorylayerdialog.h"
#include "qgsoptions.h"
#include "qgspluginlayer.h"
#include "qgspluginlayerregistry.h"
#include "qgspluginmanager.h"
#include "qgspluginregistry.h"
#include "qgspoint.h"
#include "qgshandlebadlayers.h"
#include "qgsproject.h"
#include "qgsprojectlayergroupdialog.h"
#include "qgsprojectproperties.h"
#include "qgsproviderregistry.h"
#include "qgspythonrunner.h"
#include "qgsquerybuilder.h"
#include "qgsrastercalcdialog.h"
#include "qgsrasterfilewriter.h"
#include "qgsrasteriterator.h"
#include "qgsrasterlayer.h"
#include "qgsrasterlayerproperties.h"
#include "qgsrasternuller.h"
#include "qgsbrightnesscontrastfilter.h"
#include "qgsrasterrenderer.h"
#include "qgsrasterlayersaveasdialog.h"
#include "qgsrectangle.h"
#include "qgsscalevisibilitydialog.h"
#include "qgsgroupwmsdatadialog.h"
#include "qgsselectbyformdialog.h"
#include "qgsshortcutsmanager.h"
#include "qgssinglebandgrayrenderer.h"
#include "qgssnappingdialog.h"
#include "qgssourceselectdialog.h"
#include "qgsstatisticalsummarydockwidget.h"
#include "qgsstatusbarcoordinateswidget.h"
#include "qgsstatusbarmagnifierwidget.h"
#include "qgsstatusbarscalewidget.h"
#include "qgsstylev2.h"
#include "qgssvgannotationitem.h"
#include "qgssymbolv2selectordialog.h"
#include "qgstextannotationitem.h"
#include "qgstipgui.h"
#include "qgsundowidget.h"
#include "qgsuserinputdockwidget.h"
#include "qgsvectordataprovider.h"
#include "qgsvectorfilewriter.h"
#include "qgsvectorlayer.h"
#include "qgsvectorlayerproperties.h"
#include "qgsvisibilitypresets.h"
#include "qgsmessagelogviewer.h"
#include "qgsdataitem.h"
#include "qgsmaplayeractionregistry.h"
#include "qgswelcomepage.h"
#include "qgsmaprendererparalleljob.h"
#include "qgsversioninfo.h"
#include "qgslegendfilterbutton.h"
#include "qgsvirtuallayerdefinition.h"
#include "qgsvirtuallayerdefinitionutils.h"
#include "qgstransaction.h"
#include "qgstransactiongroup.h"

#include "qgssublayersdialog.h"
#include "ogr/qgsopenvectorlayerdialog.h"
#include "ogr/qgsvectorlayersaveasdialog.h"

#include "qgsosmdownloaddialog.h"
#include "qgsosmimportdialog.h"
#include "qgsosmexportdialog.h"

#ifdef ENABLE_MODELTEST
#include "modeltest.h"
#endif

//
// GDAL/OGR includes
//
#include <ogr_api.h>
#include <gdal_version.h>
#include <proj_api.h>

#if defined(GDAL_COMPUTE_VERSION) && GDAL_VERSION_NUM >= GDAL_COMPUTE_VERSION(1,11,0)
#define SUPPORT_GEOPACKAGE
#endif

//
// Other includes
//
#include <algorithm>
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <list>
#include <memory>
#include <vector>

//
// Map tools
//
#include "qgsmaptooladdfeature.h"
#include "qgsmaptooladdpart.h"
#include "qgsmaptooladdring.h"
#include "qgsmaptoolfillring.h"
#include "qgsmaptoolannotation.h"
#include "qgsmaptoolcircularstringcurvepoint.h"
#include "qgsmaptoolcircularstringradius.h"
#include "qgsmaptooldeletering.h"
#include "qgsmaptooldeletepart.h"
#include "qgsmaptoolfeatureaction.h"
#include "qgsmaptoolformannotation.h"
#include "qgsmaptoolhtmlannotation.h"
#include "qgsmaptoolidentifyaction.h"
#include "qgsmaptoolmeasureangle.h"
#include "qgsmaptoolmovefeature.h"
#include "qgsmaptoolrotatefeature.h"
#include "qgsmaptooloffsetcurve.h"
#include "qgsmaptooloffsetpointsymbol.h"
#include "qgsmaptoolpan.h"
#include "qgsmaptoolselect.h"
#include "qgsmaptoolselectrectangle.h"
#include "qgsmaptoolselectfreehand.h"
#include "qgsmaptoolselectpolygon.h"
#include "qgsmaptoolselectradius.h"
#include "qgsmaptoolsvgannotation.h"
#include "qgsmaptoolreshape.h"
#include "qgsmaptoolrotatepointsymbols.h"
#include "qgsmaptoolsplitfeatures.h"
#include "qgsmaptoolsplitparts.h"
#include "qgsmaptooltextannotation.h"
#include "qgsmaptoolzoom.h"
#include "qgsmaptoolsimplify.h"
#include "qgsmeasuretool.h"
#include "qgsmaptoolpinlabels.h"
#include "qgsmaptoolshowhidelabels.h"
#include "qgsmaptoolmovelabel.h"
#include "qgsmaptoolrotatelabel.h"
#include "qgsmaptoolchangelabelproperties.h"

#include "nodetool/qgsmaptoolnodetool.h"

// Editor widgets
#include "qgseditorwidgetregistry.h"
//
// Conditional Includes
//
#ifdef HAVE_PGCONFIG
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION
#include <pg_config.h>
#else
#define PG_VERSION "unknown"
#endif

#include <sqlite3.h>

extern "C"
{
#include <spatialite.h>
}
#include "qgsnewspatialitelayerdialog.h"
#include "qgsnewgeopackagelayerdialog.h"

#include "qgspythonutils.h"

#ifndef Q_OS_WIN
#include <dlfcn.h>
#else
#include <windows.h>
#include <DbgHelp.h>
#endif

#ifdef HAVE_TOUCH
#include "qgsmaptooltouch.h"
#endif

class QTreeWidgetItem;

/** Set the application title bar text

  If the current project title is null
  if the project file is null then
  set title text to just application name and version
  else
  set set title text to the project file name
  else
  set the title text to project title
  */
static void setTitleBarText_( QWidget & qgisApp )
{
  QString caption = QgisApp::tr( "QGIS " );

  if ( QGis::QGIS_RELEASE_NAME == "Master" )
  {
    caption += QString( "%1" ).arg( QGis::QGIS_DEV_VERSION );
  }
  else
  {
    caption += QGis::QGIS_VERSION;
  }

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
} // setTitleBarText_( QWidget * qgisApp )

/**
 Creator function for output viewer
*/
static QgsMessageOutput *messageOutputViewer_()
{
  if ( QThread::currentThread() == qApp->thread() )
    return new QgsMessageViewer( QgisApp::instance() );
  else
    return new QgsMessageOutputConsole();
}

static void customSrsValidation_( QgsCoordinateReferenceSystem &srs )
{
  QgisApp::instance()->emitCustomSrsValidation( srs );
}

void QgisApp::emitCustomSrsValidation( QgsCoordinateReferenceSystem &srs )
{
  emit customSrsValidation( srs );
}

void QgisApp::layerTreeViewDoubleClicked( const QModelIndex& index )
{
  Q_UNUSED( index )
  QSettings settings;
  switch ( settings.value( "/qgis/legendDoubleClickAction", 0 ).toInt() )
  {
    case 0:
    {
      //show properties
      if ( mLayerTreeView )
      {
        // if it's a legend node, open symbol editor directly
        if ( QgsSymbolV2LegendNode* node = dynamic_cast<QgsSymbolV2LegendNode*>( mLayerTreeView->currentLegendNode() ) )
        {
          const QgsSymbolV2* originalSymbol = node->symbol();
          if ( !originalSymbol )
            return;

          QScopedPointer< QgsSymbolV2 > symbol( originalSymbol->clone() );
          QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer*>( node->layerNode()->layer() );
          QgsSymbolV2SelectorDialog dlg( symbol.data(), QgsStyleV2::defaultStyle(), vlayer, this );
          dlg.setMapCanvas( mMapCanvas );
          if ( dlg.exec() )
          {
            node->setSymbol( symbol.take() );
          }

          return;
        }
      }
      QgisApp::instance()->layerProperties();
      break;
    }
    case 1:
      QgisApp::instance()->attributeTable();
      break;
    case 2:
      mapStyleDock( true );
      break;
    default:
      break;
  }
}

void QgisApp::activeLayerChanged( QgsMapLayer* layer )
{
  if ( mMapCanvas )
    mMapCanvas->setCurrentLayer( layer );

  if ( mUndoWidget )
  {
    if ( layer )
    {
      mUndoWidget->setUndoStack( layer->undoStack() );
    }
    else
    {
      mUndoWidget->destroyStack();
    }
    updateUndoActions();
  }
}

/**
 * This function contains forced validation of CRS used in QGIS.
 * There are 3 options depending on the settings:
 * - ask for CRS using projection selecter
 * - use project's CRS
 * - use predefined global CRS
 */
void QgisApp::validateSrs( QgsCoordinateReferenceSystem &srs )
{
  static QString authid = QString::null;
  QSettings mySettings;
  QString myDefaultProjectionOption = mySettings.value( "/Projections/defaultBehaviour", "prompt" ).toString();
  if ( myDefaultProjectionOption == "prompt" )
  {
    // @note this class is not a descendent of QWidget so we can't pass
    // it in the ctor of the layer projection selector

    QgsGenericProjectionSelector *mySelector = new QgsGenericProjectionSelector();
    mySelector->setMessage( srs.validationHint() ); //shows a generic message, if not specified
    if ( authid.isNull() )
      authid = QgisApp::instance()->mapCanvas()->mapSettings().destinationCrs().authid();

    QgsCoordinateReferenceSystem defaultCrs = QgsCRSCache::instance()->crsByOgcWmsCrs( authid );
    if ( defaultCrs.isValid() )
    {
      mySelector->setSelectedCrsId( defaultCrs.srsid() );
    }

    bool waiting = QApplication::overrideCursor() && QApplication::overrideCursor()->shape() == Qt::WaitCursor;
    if ( waiting )
      QApplication::setOverrideCursor( Qt::ArrowCursor );

    if ( mySelector->exec() )
    {
      QgsDebugMsg( "Layer srs set from dialog: " + QString::number( mySelector->selectedCrsId() ) );
      authid = mySelector->selectedAuthId();
      srs.createFromOgcWmsCrs( mySelector->selectedAuthId() );
    }

    if ( waiting )
      QApplication::restoreOverrideCursor();

    delete mySelector;
  }
  else if ( myDefaultProjectionOption == "useProject" )
  {
    // XXX TODO: Change project to store selected CS as 'projectCRS' not 'selectedWkt'
    authid = QgisApp::instance()->mapCanvas()->mapSettings().destinationCrs().authid();
    srs.createFromOgcWmsCrs( authid );
    QgsDebugMsg( "Layer srs set from project: " + authid );
    messageBar()->pushMessage( tr( "CRS was undefined" ), tr( "defaulting to project CRS %1 - %2" ).arg( authid, srs.description() ), QgsMessageBar::WARNING, messageTimeout() );
  }
  else ///Projections/defaultBehaviour==useGlobal
  {
    authid = mySettings.value( "/Projections/layerDefaultCrs", GEO_EPSG_CRS_AUTHID ).toString();
    srs.createFromOgcWmsCrs( authid );
    QgsDebugMsg( "Layer srs set from default: " + authid );
    messageBar()->pushMessage( tr( "CRS was undefined" ), tr( "defaulting to CRS %1 - %2" ).arg( authid, srs.description() ), QgsMessageBar::WARNING, messageTimeout() );
  }
}

static bool cmpByText_( QAction* a, QAction* b )
{
  return QString::localeAwareCompare( a->text(), b->text() ) < 0;
}


QgisApp *QgisApp::smInstance = nullptr;

// constructor starts here
QgisApp::QgisApp( QSplashScreen *splash, bool restorePlugins, bool skipVersionCheck, QWidget * parent, Qt::WindowFlags fl )
    : QMainWindow( parent, fl )
    , mProfiler( nullptr )
    , mNonEditMapTool( nullptr )
    , mScaleWidget( nullptr )
    , mMagnifierWidget( nullptr )
    , mCoordsEdit( nullptr )
    , mRotationLabel( nullptr )
    , mRotationEdit( nullptr )
    , mRotationEditValidator( nullptr )
    , mProgressBar( nullptr )
    , mRenderSuppressionCBox( nullptr )
    , mOnTheFlyProjectionStatusLabel( nullptr )
    , mOnTheFlyProjectionStatusButton( nullptr )
    , mMessageButton( nullptr )
    , mFeatureActionMenu( nullptr )
    , mPopupMenu( nullptr )
    , mDatabaseMenu( nullptr )
    , mWebMenu( nullptr )
    , mToolPopupOverviews( nullptr )
    , mToolPopupDisplay( nullptr )
    , mLayerTreeCanvasBridge( nullptr )
    , mSplash( splash )
    , mInternalClipboard( nullptr )
    , mShowProjectionTab( false )
    , mPythonUtils( nullptr )
    , mMapStylingDock( nullptr )
    , mComposerManager( nullptr )
    , mpTileScaleWidget( nullptr )
    , mpGpsWidget( nullptr )
    , mTracer( nullptr )
    , mSnappingUtils( nullptr )
    , mProjectLastModified()
    , mWelcomePage( nullptr )
    , mCentralContainer( nullptr )
{
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

  namSetup();

  // load GUI: actions, menus, toolbars
  mProfiler->beginGroup( "qgisapp" );
  mProfiler->beginGroup( "startup" );
  startProfile( "Setting up UI" );
  setupUi( this );
  endProfile();

  //////////

  startProfile( "Checking database" );
  mSplash->showMessage( tr( "Checking database" ), Qt::AlignHCenter | Qt::AlignBottom );
  qApp->processEvents();
  // Do this early on before anyone else opens it and prevents us copying it
  QString dbError;
  if ( !QgsApplication::createDB( &dbError ) )
  {
    QMessageBox::critical( this, tr( "Private qgis.db" ), dbError );
  }
  endProfile();

  startProfile( "Initializing authentication" );
  mSplash->showMessage( tr( "Initializing authentication" ), Qt::AlignHCenter | Qt::AlignBottom );
  qApp->processEvents();
  QgsAuthManager::instance()->init( QgsApplication::pluginPath() );
  if ( !QgsAuthManager::instance()->isDisabled() )
  {
    masterPasswordSetup();
  }
  endProfile();

  // Create the themes folder for the user
  startProfile( "Creating theme folder" );
  QgsApplication::createThemeFolder();
  endProfile();

  mSplash->showMessage( tr( "Reading settings" ), Qt::AlignHCenter | Qt::AlignBottom );
  qApp->processEvents();

  mSplash->showMessage( tr( "Setting up the GUI" ), Qt::AlignHCenter | Qt::AlignBottom );
  qApp->processEvents();

  QSettings settings;

  startProfile( "Building style sheet" );
  // set up stylesheet builder and apply saved or default style options
  mStyleSheetBuilder = new QgisAppStyleSheet( this );
  connect( mStyleSheetBuilder, SIGNAL( appStyleSheetChanged( const QString& ) ),
           this, SLOT( setAppStyleSheet( const QString& ) ) );
  mStyleSheetBuilder->buildStyleSheet( mStyleSheetBuilder->defaultOptions() );
  endProfile();

  QWidget *centralWidget = this->centralWidget();
  QGridLayout *centralLayout = new QGridLayout( centralWidget );
  centralWidget->setLayout( centralLayout );
  centralLayout->setContentsMargins( 0, 0, 0, 0 );

  // "theMapCanvas" used to find this canonical instance later
  startProfile( "Creating map canvas" );
  mMapCanvas = new QgsMapCanvas( centralWidget, "theMapCanvas" );
  connect( mMapCanvas, SIGNAL( messageEmitted( const QString&, const QString&, QgsMessageBar::MessageLevel ) ),
           this, SLOT( displayMessage( const QString&, const QString&, QgsMessageBar::MessageLevel ) ) );
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

  startProfile( "User input dock" );
  // User Input Dock Widget
  mUserInputDockWidget = new QgsUserInputDockWidget( this );
  mUserInputDockWidget->setObjectName( "UserInputDockWidget" );
  endProfile();

  //set the focus to the map canvas
  mMapCanvas->setFocus();

  startProfile( "Layer tree" );
  mLayerTreeView = new QgsLayerTreeView( this );
  mLayerTreeView->setObjectName( "theLayerTreeView" ); // "theLayerTreeView" used to find this canonical instance later
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

  functionProfile( &QgisApp::createActions, this, "Create actions" );
  functionProfile( &QgisApp::createActionGroups, this, "Create action group" );
  functionProfile( &QgisApp::createMenus, this, "Create menus" );
  functionProfile( &QgisApp::createToolBars, this, "Toolbars" );
  functionProfile( &QgisApp::createStatusBar, this, "Status bar" );
  functionProfile( &QgisApp::createCanvasTools, this, "Create canvas tools" );
  mMapCanvas->freeze();
  functionProfile( &QgisApp::initLayerTreeView, this, "Init Layer tree view" );
  functionProfile( &QgisApp::createOverview, this, "Create overview" );
  functionProfile( &QgisApp::createMapTips, this, "Create map tips" );
  functionProfile( &QgisApp::createDecorations, this, "Create decorations" );
  functionProfile( &QgisApp::readSettings, this, "Read settings" );
  functionProfile( &QgisApp::updateRecentProjectPaths, this, "Update recent project paths" );
  functionProfile( &QgisApp::updateProjectFromTemplates, this, "Update project from templates" );
  functionProfile( &QgisApp::legendLayerSelectionChanged, this, "Legend layer selection changed" );
  mSaveRollbackInProgress = false;

  QFileSystemWatcher* projectsTemplateWatcher = new QFileSystemWatcher( this );
  QString templateDirName = settings.value( "/qgis/projectTemplateDir",
                            QgsApplication::qgisSettingsDirPath() + "project_templates" ).toString();
  projectsTemplateWatcher->addPath( templateDirName );
  connect( projectsTemplateWatcher, SIGNAL( directoryChanged( QString ) ), this, SLOT( updateProjectFromTemplates() ) );

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

  // Create the (shared) model with delayed initialization
  mBrowserModel = new QgsBrowserModel( this, false );
  mBrowserWidget = new QgsBrowserDockWidget( tr( "Browser Panel" ), mBrowserModel, this );
  mBrowserWidget->setObjectName( "Browser" );
  addDockWidget( Qt::LeftDockWidgetArea, mBrowserWidget );
  mBrowserWidget->hide();

  mBrowserWidget2 = new QgsBrowserDockWidget( tr( "Browser Panel (2)" ), mBrowserModel, this );
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

  // create the GPS tool on starting QGIS - this is like the browser
  mpGpsWidget = new QgsGPSInformationWidget( mMapCanvas );
  //create the dock widget
  mpGpsDock = new QgsDockWidget( tr( "GPS Information Panel" ), this );
  mpGpsDock->setObjectName( "GPSInformation" );
  mpGpsDock->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );
  addDockWidget( Qt::LeftDockWidgetArea, mpGpsDock );
  // add to the Panel submenu
  // now add our widget to the dock - ownership of the widget is passed to the dock
  mpGpsDock->setWidget( mpGpsWidget );
  mpGpsDock->hide();

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
  QString caption = tr( "QGIS - %1 ('%2')" ).arg( QGis::QGIS_VERSION, QGis::QGIS_RELEASE_NAME );
  setWindowTitle( caption );

  QgsMessageLog::logMessage( tr( "QGIS starting..." ), QString::null, QgsMessageLog::INFO );

  // set QGIS specific srs validation
  connect( this, SIGNAL( customSrsValidation( QgsCoordinateReferenceSystem& ) ),
           this, SLOT( validateSrs( QgsCoordinateReferenceSystem& ) ) );
  QgsCoordinateReferenceSystem::setCustomSrsValidation( customSrsValidation_ );

  // set graphical message output
  QgsMessageOutput::setMessageOutputCreator( messageOutputViewer_ );

  // set graphical credential requester
  new QgsCredentialDialog( this );

  qApp->processEvents();

  // load providers
  mSplash->showMessage( tr( "Checking provider plugins" ), Qt::AlignHCenter | Qt::AlignBottom );
  qApp->processEvents();
  QgsApplication::initQgis();

  mSplash->showMessage( tr( "Starting Python" ), Qt::AlignHCenter | Qt::AlignBottom );
  qApp->processEvents();
  loadPythonSupport();

  // Create the plugin registry and load plugins
  // load any plugins that were running in the last session
  mSplash->showMessage( tr( "Restoring loaded plugins" ), Qt::AlignHCenter | Qt::AlignBottom );
  qApp->processEvents();
  QgsPluginRegistry::instance()->setQgisInterface( mQgisInterface );
  if ( restorePlugins )
  {
    // Restoring of plugins can be disabled with --noplugins command line option
    // because some plugins may cause QGIS to crash during startup
    QgsPluginRegistry::instance()->restoreSessionPlugins( QgsApplication::pluginPath() );

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

  mSplash->showMessage( tr( "Initializing file filters" ), Qt::AlignHCenter | Qt::AlignBottom );
  qApp->processEvents();

  // now build vector and raster file filters
  mVectorFileFilter = QgsProviderRegistry::instance()->fileVectorFilters();
  mRasterFileFilter = QgsProviderRegistry::instance()->fileRasterFilters();

  // set handler for missing layers (will be owned by QgsProject)
  QgsProject::instance()->setBadLayerHandler( new QgsHandleBadLayersHandler() );

#if 0
  // Set the background color for toolbox and overview as they default to
  // white instead of the window color
  QPalette myPalette = toolBox->palette();
  myPalette.setColor( QPalette::Button, myPalette.window().color() );
  toolBox->setPalette( myPalette );
  //do the same for legend control
  myPalette = toolBox->palette();
  myPalette.setColor( QPalette::Button, myPalette.window().color() );
  mMapLegend->setPalette( myPalette );
  //and for overview control this is done in createOverView method
#endif
  // Do this last in the ctor to ensure that all members are instantiated properly
  setupConnections();
  //
  // Please make sure this is the last thing the ctor does so that we can ensure the
  // widgets are all initialized before trying to restore their state.
  //
  mSplash->showMessage( tr( "Restoring window state" ), Qt::AlignHCenter | Qt::AlignBottom );
  qApp->processEvents();
  startProfile( "Restore window state" );
  restoreWindowState();
  endProfile();

  // do main window customization - after window state has been restored, before the window is shown
  startProfile( "Update customiziation on main window" );
  QgsCustomization::instance()->updateMainWindow( mToolbarMenu );
  endProfile();

  mSplash->showMessage( tr( "QGIS Ready!" ), Qt::AlignHCenter | Qt::AlignBottom );

  QgsMessageLog::logMessage( QgsApplication::showSettings(), QString::null, QgsMessageLog::INFO );

  QgsMessageLog::logMessage( tr( "QGIS Ready!" ), QString::null, QgsMessageLog::INFO );

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
  if ( settings.value( QString( "/qgis/showTips%1" ).arg( QGis::QGIS_VERSION_INT / 100 ), true ).toBool() )
  {
    mSplash->hide();
    QgsTipGui myTip( this );
    myTip.exec();
  }
  else
  {
    QgsDebugMsg( "Tips are disabled" );
  }

#ifdef HAVE_TOUCH
  //add reacting to long click in touch
  grabGesture( Qt::TapAndHoldGesture );
#else
  //remove mActionTouch button
  delete mActionTouch;
  mActionTouch = nullptr;
#endif

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

  // request notification of FileOpen events (double clicking a file icon in Mac OS X Finder)
  // should come after fileNewBlank to ensure project is properly set up to receive any data source files
  QgsApplication::setFileOpenEventReceiver( this );


#ifdef ANDROID
  toggleFullScreen();
#endif
  mProfiler->endGroup();
  mProfiler->endGroup();

  QgsDebugMsg( "PROFILE TIMES" );
  QgsDebugMsg( QString( "PROFILE TIMES TOTAL - %1 " ).arg( mProfiler->totalTime() ) );
#ifdef QGISDEBUG
  QList<QPair<QString, double> >::const_iterator it = mProfiler->profileTimes().constBegin();
  for ( ; it != mProfiler->profileTimes().constEnd(); ++it )
  {
    QString name = ( *it ).first;
    double time = ( *it ).second;
    QgsDebugMsg( QString( " - %1 - %2" ).arg( name ).arg( time ) );
  }
#endif

} // QgisApp ctor

QgisApp::QgisApp()
    : QMainWindow( nullptr, nullptr )
    , mProfiler( nullptr )
    , mStyleSheetBuilder( nullptr )
    , mActionPluginSeparator1( nullptr )
    , mActionPluginSeparator2( nullptr )
    , mActionRasterSeparator( nullptr )
    , mMapToolGroup( nullptr )
    , mPreviewGroup( nullptr )
#ifdef Q_OS_MAC
    , mWindowMenu( 0 )
#endif
    , mPanelMenu( nullptr )
    , mToolbarMenu( nullptr )
    , mLayerTreeDock( nullptr )
    , mLayerOrderDock( nullptr )
    , mOverviewDock( nullptr )
    , mpGpsDock( nullptr )
    , mLogDock( nullptr )
    , mNonEditMapTool( nullptr )
    , mScaleWidget( nullptr )
    , mMagnifierWidget( nullptr )
    , mCoordsEdit( nullptr )
    , mRotationLabel( nullptr )
    , mRotationEdit( nullptr )
    , mRotationEditValidator( nullptr )
    , mProgressBar( nullptr )
    , mRenderSuppressionCBox( nullptr )
    , mOnTheFlyProjectionStatusLabel( nullptr )
    , mOnTheFlyProjectionStatusButton( nullptr )
    , mMessageButton( nullptr )
    , mFeatureActionMenu( nullptr )
    , mPopupMenu( nullptr )
    , mDatabaseMenu( nullptr )
    , mWebMenu( nullptr )
    , mToolPopupOverviews( nullptr )
    , mToolPopupDisplay( nullptr )
    , mMapCanvas( nullptr )
    , mOverviewCanvas( nullptr )
    , mLayerTreeView( nullptr )
    , mLayerTreeCanvasBridge( nullptr )
    , mMapLayerOrder( nullptr )
    , mOverviewMapCursor( nullptr )
    , mMapWindow( nullptr )
    , mQgisInterface( nullptr )
    , mSplash( nullptr )
    , mInternalClipboard( nullptr )
    , mShowProjectionTab( false )
    , mpMapTipsTimer( nullptr )
    , mpMaptip( nullptr )
    , mMapTipsVisible( false )
    , mFullScreenMode( false )
    , mPrevScreenModeMaximized( false )
    , mSaveRollbackInProgress( false )
    , mPythonUtils( nullptr )
    , mUndoWidget( nullptr )
    , mUndoDock( nullptr )
    , mBrowserModel( nullptr )
    , mBrowserWidget( nullptr )
    , mBrowserWidget2( nullptr )
    , mAdvancedDigitizingDockWidget( nullptr )
    , mStatisticalSummaryDockWidget( nullptr )
    , mBookMarksDockWidget( nullptr )
    , mSnappingDialog( nullptr )
    , mPluginManager( nullptr )
    , mMapStylingDock( nullptr )
    , mMapStyleWidget( nullptr )
    , mComposerManager( nullptr )
    , mpTileScaleWidget( nullptr )
    , mLastComposerId( 0 )
    , mpGpsWidget( nullptr )
    , mLastMapToolMessage( nullptr )
    , mLogViewer( nullptr )
    , mTrustedMacros( false )
    , mMacrosWarn( nullptr )
    , mUserInputDockWidget( nullptr )
    , mVectorLayerTools( nullptr )
    , mTracer( nullptr )
    , mActionFilterLegend( nullptr )
    , mActionStyleDock( nullptr )
    , mLegendExpressionFilterButton( nullptr )
    , mSnappingUtils( nullptr )
    , mProjectLastModified()
    , mWelcomePage( nullptr )
    , mCentralContainer( nullptr )
    , mProjOpen( 0 )
{
  smInstance = this;
  setupUi( this );
  mInternalClipboard = new QgsClipboard;
  mMapCanvas = new QgsMapCanvas();
  connect( mMapCanvas, SIGNAL( messageEmitted( const QString&, const QString&, QgsMessageBar::MessageLevel ) ),
           this, SLOT( displayMessage( const QString&, const QString&, QgsMessageBar::MessageLevel ) ) );
  mMapCanvas->freeze();
  mLayerTreeView = new QgsLayerTreeView( this );
  mUndoWidget = new QgsUndoWidget( nullptr, mMapCanvas );
  mInfoBar = new QgsMessageBar( centralWidget() );
  mPanelMenu = new QMenu( this );
  mProgressBar = new QProgressBar( this );
  // More tests may need more members to be initialized
}

QgisApp::~QgisApp()
{
  mMapCanvas->stopRendering();

  delete mInternalClipboard;
  delete mQgisInterface;
  delete mStyleSheetBuilder;

  delete mMapTools.mZoomIn;
  delete mMapTools.mZoomOut;
  delete mMapTools.mPan;
#ifdef HAVE_TOUCH
  delete mMapTools.mTouch;
#endif
  delete mMapTools.mAddFeature;
  delete mMapTools.mAddPart;
  delete mMapTools.mAddRing;
  delete mMapTools.mFillRing;
  delete mMapTools.mAnnotation;
  delete mMapTools.mChangeLabelProperties;
  delete mMapTools.mDeletePart;
  delete mMapTools.mDeleteRing;
  delete mMapTools.mFeatureAction;
  delete mMapTools.mFormAnnotation;
  delete mMapTools.mHtmlAnnotation;
  delete mMapTools.mIdentify;
  delete mMapTools.mMeasureAngle;
  delete mMapTools.mMeasureArea;
  delete mMapTools.mMeasureDist;
  delete mMapTools.mMoveFeature;
  delete mMapTools.mMoveLabel;
  delete mMapTools.mNodeTool;
  delete mMapTools.mOffsetCurve;
  delete mMapTools.mPinLabels;
  delete mMapTools.mReshapeFeatures;
  delete mMapTools.mRotateFeature;
  delete mMapTools.mRotateLabel;
  delete mMapTools.mRotatePointSymbolsTool;
  delete mMapTools.mOffsetPointSymbolTool;
  delete mMapTools.mSelectFreehand;
  delete mMapTools.mSelectPolygon;
  delete mMapTools.mSelectRadius;
  delete mMapTools.mSelectFeatures;
  delete mMapTools.mShowHideLabels;
  delete mMapTools.mSimplifyFeature;
  delete mMapTools.mSplitFeatures;
  delete mMapTools.mSplitParts;
  delete mMapTools.mSvgAnnotation;
  delete mMapTools.mTextAnnotation;
  delete mMapTools.mCircularStringCurvePoint;
  delete mMapTools.mCircularStringRadius;

  delete mpMaptip;

  delete mpGpsWidget;

  delete mOverviewMapCursor;

  delete mComposerManager;

  delete mTracer;

  delete mVectorLayerTools;
  delete mWelcomePage;

  deletePrintComposers();
  removeAnnotationItems();

  // cancel request for FileOpen events
  QgsApplication::setFileOpenEventReceiver( nullptr );

  QgsApplication::exitQgis();

  // While destructing some widgets access QgsProject::instance() after this line
  // delete QgsProject::instance();

  delete mPythonUtils;
}

void QgisApp::dragEnterEvent( QDragEnterEvent *event )
{
  if ( event->mimeData()->hasUrls() || event->mimeData()->hasFormat( "application/x-vnd.qgis.qgis.uri" ) )
  {
    event->acceptProposedAction();
  }
}

void QgisApp::dropEvent( QDropEvent *event )
{
  // dragging app is locked for the duration of dropEvent. This causes explorer windows to hang
  // while large projects/layers are loaded. So instead we return from dropEvent as quickly as possible
  // and do the actual handling of the drop after a very short timeout
  QTimer* timer = new QTimer( this );
  timer->setSingleShot( true );
  timer->setInterval( 50 );

  // get the file list
  QList<QUrl>::iterator i;
  QList<QUrl>urls = event->mimeData()->urls();
  QStringList files;
  for ( i = urls.begin(); i != urls.end(); ++i )
  {
    QString fileName = i->toLocalFile();
#ifdef Q_OS_MAC
    // Mac OS X 10.10, under Qt4.8 ,changes dropped URL format
    // https://bugreports.qt.io/browse/QTBUG-40449
    // [pzion 20150805] Work around
    if ( fileName.startsWith( "/.file/id=" ) )
    {
      QgsDebugMsg( "Mac dropped URL with /.file/id= (converting)" );
      CFStringRef relCFStringRef =
        CFStringCreateWithCString(
          kCFAllocatorDefault,
          fileName.toUtf8().constData(),
          kCFStringEncodingUTF8
        );
      CFURLRef relCFURL =
        CFURLCreateWithFileSystemPath(
          kCFAllocatorDefault,
          relCFStringRef,
          kCFURLPOSIXPathStyle,
          false // isDirectory
        );
      CFErrorRef error = 0;
      CFURLRef absCFURL =
        CFURLCreateFilePathURL(
          kCFAllocatorDefault,
          relCFURL,
          &error
        );
      if ( !error )
      {
        static const CFIndex maxAbsPathCStrBufLen = 4096;
        char absPathCStr[maxAbsPathCStrBufLen];
        if ( CFURLGetFileSystemRepresentation(
               absCFURL,
               true, // resolveAgainstBase
               reinterpret_cast<UInt8 *>( &absPathCStr[0] ),
               maxAbsPathCStrBufLen ) )
        {
          fileName = QString( absPathCStr );
        }
      }
      CFRelease( absCFURL );
      CFRelease( relCFURL );
      CFRelease( relCFStringRef );
    }
#endif
    // seems that some drag and drop operations include an empty url
    // so we test for length to make sure we have something
    if ( !fileName.isEmpty() )
    {
      files << fileName;
    }
  }
  timer->setProperty( "files", files );

  QgsMimeDataUtils::UriList lst;
  if ( QgsMimeDataUtils::isUriList( event->mimeData() ) )
  {
    lst = QgsMimeDataUtils::decodeUriList( event->mimeData() );
  }
  timer->setProperty( "uris", QVariant::fromValue( lst ) );

  connect( timer, SIGNAL( timeout() ), this, SLOT( dropEventTimeout() ) );

  event->acceptProposedAction();
  timer->start();
}

void QgisApp::dropEventTimeout()
{
  mMapCanvas->freeze();
  QStringList files = sender()->property( "files" ).toStringList();

  Q_FOREACH ( const QString& file, files )
  {
    openFile( file );
  }

  QgsMimeDataUtils::UriList lst = sender()->property( "uris" ).value<QgsMimeDataUtils::UriList>();
  if ( !lst.isEmpty() )
  {
    Q_FOREACH ( const QgsMimeDataUtils::Uri& u, lst )
    {
      QString uri = crsAndFormatAdjustedLayerUri( u.uri, u.supportedCrs, u.supportedFormats );

      if ( u.layerType == "vector" )
      {
        addVectorLayer( uri, u.name, u.providerKey );
      }
      else if ( u.layerType == "raster" )
      {
        addRasterLayer( uri, u.name, u.providerKey );
      }
      else if ( u.layerType == "plugin" )
      {
        addPluginLayer( uri, u.name, u.providerKey );
      }
    }
  }
  sender()->deleteLater();

  mMapCanvas->freeze( false );
  mMapCanvas->refresh();
}

bool QgisApp::event( QEvent * event )
{
  bool done = false;
  if ( event->type() == QEvent::FileOpen )
  {
    // handle FileOpen event (double clicking a file icon in Mac OS X Finder)
    QFileOpenEvent *foe = static_cast<QFileOpenEvent *>( event );
    openFile( foe->file() );
    done = true;
  }
#ifdef HAVE_TOUCH
  else if ( event->type() == QEvent::Gesture )
  {
    done = gestureEvent( static_cast<QGestureEvent*>( event ) );
  }
#endif
  else
  {
    // pass other events to base class
    done = QMainWindow::event( event );
  }
  return done;
}

QgisAppStyleSheet* QgisApp::styleSheetBuilder()
{
  Q_ASSERT( mStyleSheetBuilder );
  return mStyleSheetBuilder;
}

void QgisApp::readRecentProjects()
{
  QSettings settings;
  mRecentProjects.clear();

  settings.beginGroup( "/UI" );

  // Migrate old recent projects if first time with new system
  if ( !settings.childGroups().contains( "recentProjects" ) )
  {
    QStringList oldRecentProjects = settings.value( "/UI/recentProjectsList" ).toStringList();

    Q_FOREACH ( const QString& project, oldRecentProjects )
    {
      QgsWelcomePageItemsModel::RecentProjectData data;
      data.path = project;
      data.title = project;

      mRecentProjects.append( data );
    }
  }
  settings.endGroup();

  settings.beginGroup( "/UI/recentProjects" );
  QStringList projectKeysList = settings.childGroups();

  //convert list to int values to obtain proper order
  QList<int> projectKeys;
  Q_FOREACH ( const QString& key, projectKeysList )
  {
    projectKeys.append( key.toInt() );
  }
  qSort( projectKeys );

  Q_FOREACH ( int key, projectKeys )
  {
    QgsWelcomePageItemsModel::RecentProjectData data;
    settings.beginGroup( QString::number( key ) );
    data.title = settings.value( "title" ).toString();
    data.path = settings.value( "path" ).toString();
    data.previewImagePath = settings.value( "previewImage" ).toString();
    data.crs = settings.value( "crs" ).toString();
    settings.endGroup();
    mRecentProjects.append( data );
  }
  settings.endGroup();
}

void QgisApp::readSettings()
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


//////////////////////////////////////////////////////////////////////
//            Set Up the gui toolbars, menus, statusbar etc
//////////////////////////////////////////////////////////////////////

void QgisApp::createActions()
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
  //connect( mActionDwgImport, SIGNAL( triggered() ), this, SLOT( dwgImport() ) );

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

#ifdef HAVE_TOUCH
  connect( mActionTouch, SIGNAL( triggered() ), this, SLOT( touch() ) );
#endif
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
  connect( mActionCustomization, SIGNAL( triggered() ), this, SLOT( customize() ) );

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
  connect( mActionOSMDownload, SIGNAL( triggered() ), this, SLOT( osmDownloadDialog() ) );
  connect( mActionOSMImport, SIGNAL( triggered() ), this, SLOT( osmImportDialog() ) );
  connect( mActionOSMExport, SIGNAL( triggered() ), this, SLOT( osmExportDialog() ) );

  // Help Menu Items

#ifdef Q_OS_MAC
  mActionHelpContents->setShortcut( QString( "Ctrl+?" ) );
  mActionQgisHomePage->setShortcut( QString() );
  mActionReportaBug->setShortcut( QString() );
#endif

  mActionHelpContents->setEnabled( QFileInfo( QgsApplication::pkgDataPath() + "/doc/index.html" ).exists() );

  connect( mActionHelpContents, SIGNAL( triggered() ), this, SLOT( helpContents() ) );
  connect( mActionHelpAPI, SIGNAL( triggered() ), this, SLOT( apiDocumentation() ) );
  connect( mActionReportaBug, SIGNAL( triggered() ), this, SLOT( reportaBug() ) );
  connect( mActionNeedSupport, SIGNAL( triggered() ), this, SLOT( supportProviders() ) );
  connect( mActionQgisHomePage, SIGNAL( triggered() ), this, SLOT( helpQgisHomePage() ) );
  connect( mActionCheckQgisVersion, SIGNAL( triggered() ), this, SLOT( checkQgisVersion() ) );
  connect( mActionAbout, SIGNAL( triggered() ), this, SLOT( about() ) );
  connect( mActionSponsors, SIGNAL( triggered() ), this, SLOT( sponsors() ) );

  connect( mActionShowPinnedLabels, SIGNAL( toggled( bool ) ), this, SLOT( showPinnedLabels( bool ) ) );
  connect( mActionPinLabels, SIGNAL( triggered() ), this, SLOT( pinLabels() ) );
  connect( mActionShowHideLabels, SIGNAL( triggered() ), this, SLOT( showHideLabels() ) );
  connect( mActionMoveLabel, SIGNAL( triggered() ), this, SLOT( moveLabel() ) );
  connect( mActionRotateLabel, SIGNAL( triggered() ), this, SLOT( rotateLabel() ) );
  connect( mActionChangeLabelProperties, SIGNAL( triggered() ), this, SLOT( changeLabelProperties() ) );

  connect( mActionDiagramProperties, SIGNAL( triggered() ), this, SLOT( diagramProperties() ) );

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

#include "qgsstylev2.h"
#include "qgsstylev2managerdialog.h"

void QgisApp::showStyleManagerV2()
{
  QgsStyleV2ManagerDialog dlg( QgsStyleV2::defaultStyle(), this );
  dlg.exec();
}

void QgisApp::writeAnnotationItemsToProject( QDomDocument& doc )
{
  QList<QgsAnnotationItem*> items = annotationItems();
  QgsAnnotationItem* item;
  QListIterator<QgsAnnotationItem*> i( items );
  // save lowermost annotation (at end of list) first
  i.toBack();
  while ( i.hasPrevious() )
  {
    item = i.previous();

    if ( ! item )
    {
      continue;
    }
    item->writeXML( doc );
  }
}

void QgisApp::showPythonDialog()
{
  if ( !mPythonUtils || !mPythonUtils->isEnabled() )
    return;

  bool res = mPythonUtils->runString(
               "import console\n"
               "console.show_console()\n", tr( "Failed to open Python console:" ), false );

  if ( !res )
  {
    QString className, text;
    mPythonUtils->getError( className, text );
    messageBar()->pushMessage( tr( "Error" ), tr( "Failed to open Python console:" ) + '\n' + className + ": " + text, QgsMessageBar::WARNING );
  }
#ifdef Q_OS_MAC
  else
  {
    addWindow( mActionShowPythonDialog );
  }
#endif
}

void QgisApp::createActionGroups()
{
  //
  // Map Tool Group
  mMapToolGroup = new QActionGroup( this );
#ifdef HAVE_TOUCH
  mMapToolGroup->addAction( mActionTouch );
#endif
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

  //
  // Preview Modes Group
  QActionGroup* mPreviewGroup = new QActionGroup( this );
  mPreviewGroup->setExclusive( true );
  mActionPreviewModeOff->setActionGroup( mPreviewGroup );
  mActionPreviewModeGrayscale->setActionGroup( mPreviewGroup );
  mActionPreviewModeMono->setActionGroup( mPreviewGroup );
  mActionPreviewProtanope->setActionGroup( mPreviewGroup );
  mActionPreviewDeuteranope->setActionGroup( mPreviewGroup );
}

void QgisApp::setAppStyleSheet( const QString& stylesheet )
{
  setStyleSheet( stylesheet );

  // cascade styles to any current project composers
  Q_FOREACH ( QgsComposer *c, mPrintComposers )
  {
    c->setStyleSheet( stylesheet );
  }
}

int QgisApp::messageTimeout()
{
  QSettings settings;
  return settings.value( "/qgis/messageTimeout", 5 ).toInt();
}

void QgisApp::createMenus()
{
  /*
   * The User Interface Guidelines for each platform specify different locations
   * for the following items.
   *
   * Project Properties:
   * Gnome, Mac, Win - File/Project menu above print commands (Win doesn't specify)
   * Kde - Settings menu
   *
   * Custom CRS, Options:
   * Gnome - bottom of Edit menu
   * Mac - Application menu (moved automatically by Qt)
   * Kde, Win - Settings menu (Win should use Tools menu but we don't have one)
   *
   * Panel and Toolbar submenus, Toggle Full Screen:
   * Gnome, Mac, Win - View menu
   * Kde - Settings menu
   *
   * For Mac, About and Exit are also automatically moved by Qt to the Application menu.
   */

  // Layer menu
//#if !defined(GDAL_COMPUTE_VERSION) || GDAL_VERSION_NUM < GDAL_COMPUTE_VERSION(2,0,0)
 // mProjectMenu->removeAction( mActionDwgImport );
//#endif
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
    QDialogButtonBox::ButtonLayout( style()->styleHint( QStyle::SH_DialogButtonLayout, nullptr, this ) );

  // Project Menu

  // Connect once for the entire submenu.
  connect( mRecentProjectsMenu, SIGNAL( triggered( QAction * ) ),
           this, SLOT( openProject( QAction * ) ) );
  connect( mProjectFromTemplateMenu, SIGNAL( triggered( QAction * ) ),
           this, SLOT( fileNewFromTemplateAction( QAction * ) ) );

  if ( layout == QDialogButtonBox::GnomeLayout || layout == QDialogButtonBox::MacLayout || layout == QDialogButtonBox::WinLayout )
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
  //disabled for OSX - see #10761
  //also see http://qt-project.org/forums/viewthread/3630 QGraphicsEffects are not well supported on OSX
  mMenuPreviewMode->menuAction()->setVisible( false );
#endif


#ifdef Q_OS_MAC

  // keep plugins from hijacking About and Preferences application menus
  // these duplicate actions will be moved to application menus by Qt
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

  // Help menu
  // add What's this button to it
  QAction* before = mActionHelpAPI;
  QAction* actionWhatsThis = QWhatsThis::createAction( this );
  actionWhatsThis->setIcon( QgsApplication::getThemeIcon( "/mActionWhatsThis.svg" ) );
  mHelpMenu->insertAction( before, actionWhatsThis );
}

void QgisApp::createToolBars()
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
  << mHelpToolBar
  << mRasterToolBar
  << mVectorToolBar
  << mDatabaseToolBar
  << mWebToolBar
  << mLabelToolBar;

  QList<QAction*> toolbarMenuActions;
  // Set action names so that they can be used in customization
  Q_FOREACH ( QToolBar *toolBar, toolbarMenuToolBars )
  {
    toolBar->toggleViewAction()->setObjectName( "mActionToggle" + toolBar->objectName().mid( 1 ) );
    toolbarMenuActions << toolBar->toggleViewAction();
  }

  // sort actions in toolbar menu
  qSort( toolbarMenuActions.begin(), toolbarMenuActions.end(), cmpByText_ );

  mToolbarMenu->addActions( toolbarMenuActions );

  // selection tool button

  QToolButton *bt = new QToolButton( mAttributesToolBar );
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  QList<QAction*> selectActions;
  selectActions << mActionSelectByExpression << mActionSelectByForm << mActionSelectAll
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
  connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );

  // feature action tool button

  bt = new QToolButton( mAttributesToolBar );
  bt->setPopupMode( QToolButton::MenuButtonPopup );
  bt->setDefaultAction( mActionFeatureAction );
  mFeatureActionMenu = new QMenu( bt );
  connect( mFeatureActionMenu, SIGNAL( triggered( QAction * ) ), this, SLOT( updateDefaultFeatureAction( QAction * ) ) );
  connect( mFeatureActionMenu, SIGNAL( triggered( QAction * ) ), this, SLOT( doFeatureAction() ) );
  connect( mFeatureActionMenu, SIGNAL( aboutToShow() ), this, SLOT( refreshFeatureActions() ) );
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
  connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );

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
  connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );

  // vector layer edits tool buttons
  QToolButton* tbAllEdits = qobject_cast<QToolButton *>( mDigitizeToolBar->widgetForAction( mActionAllEdits ) );
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
}

void QgisApp::createStatusBar()
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
  mOnTheFlyProjectionStatusButton->setIcon( QgsApplication::getThemeIcon( "mIconProjectionEnabled.png" ) );
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
  mMessageButton->setIcon( QgsApplication::getThemeIcon( "/mMessageLogRead.svg" ) );
  mMessageButton->setToolTip( tr( "Messages" ) );
  mMessageButton->setWhatsThis( tr( "Messages" ) );
  mMessageButton->setToolButtonStyle( Qt::ToolButtonTextBesideIcon );
  mMessageButton->setObjectName( "mMessageLogViewerButton" );
  mMessageButton->setMaximumHeight( mScaleWidget->height() );
  mMessageButton->setCheckable( true );
  statusBar()->addPermanentWidget( mMessageButton, 0 );
}

void QgisApp::setIconSizes( int size )
{
  int dockSize;
  if ( size > 32 )
  {
    dockSize = size - 16;
  }
  else if ( size == 32 )
  {
    dockSize = 24;
  }
  else
  {
    dockSize = 16;
  }

  //Set the icon size of for all the toolbars created in the future.
  setIconSize( QSize( size, size ) );

  //Change all current icon sizes.
  QList<QToolBar *> toolbars = findChildren<QToolBar *>();
  Q_FOREACH ( QToolBar * toolbar, toolbars )
  {
    QString className = toolbar->parent()->metaObject()->className();
    if ( className == this->metaObject()->className() )
    {
      toolbar->setIconSize( QSize( size, size ) );
    }
    else
    {
      toolbar->setIconSize( QSize( dockSize, dockSize ) );
    }
  }

  Q_FOREACH ( QgsComposer *c, mPrintComposers )
  {
    c->setIconSizes( size );
  }
}

void QgisApp::setTheme( const QString& theThemeName )
{
  /*****************************************************************
  // Init the toolbar icons by setting the icon for each action.
  // All toolbar/menu items must be a QAction in order for this
  // to work.
  //
  // When new toolbar/menu QAction objects are added to the interface,
  // add an entry below to set the icon
  //
  // PNG names must match those defined for the default theme. The
  // default theme is installed in <prefix>/share/qgis/themes/default.
  //
  // New core themes can be added by creating a subdirectory under src/themes
  // and modifying the appropriate CMakeLists.txt files. User contributed themes
  // will be installed directly into <prefix>/share/qgis/themes/<themedir>.
  //
  // Themes can be selected from the preferences dialog. The dialog parses
  // the themes directory and builds a list of themes (ie subdirectories)
  // for the user to choose from.
  //
  */
  QgsApplication::setUITheme( theThemeName );
  //QgsDebugMsg("Setting theme to \n" + theThemeName);
  mActionNewProject->setIcon( QgsApplication::getThemeIcon( "/mActionFileNew.svg" ) );
  mActionOpenProject->setIcon( QgsApplication::getThemeIcon( "/mActionFileOpen.svg" ) );
  mActionSaveProject->setIcon( QgsApplication::getThemeIcon( "/mActionFileSave.svg" ) );
  mActionSaveProjectAs->setIcon( QgsApplication::getThemeIcon( "/mActionFileSaveAs.svg" ) );
  mActionNewPrintComposer->setIcon( QgsApplication::getThemeIcon( "/mActionNewComposer.svg" ) );
  mActionShowComposerManager->setIcon( QgsApplication::getThemeIcon( "/mActionComposerManager.svg" ) );
  mActionSaveMapAsImage->setIcon( QgsApplication::getThemeIcon( "/mActionSaveMapAsImage.svg" ) );
  mActionExit->setIcon( QgsApplication::getThemeIcon( "/mActionFileExit.png" ) );
  mActionAddOgrLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddOgrLayer.svg" ) );
  mActionAddRasterLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddRasterLayer.svg" ) );
#ifdef HAVE_POSTGRESQL
  mActionAddPgLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddPostgisLayer.svg" ) );
#endif
  mActionNewSpatiaLiteLayer->setIcon( QgsApplication::getThemeIcon( "/mActionNewSpatiaLiteLayer.svg" ) );
  mActionAddSpatiaLiteLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddSpatiaLiteLayer.svg" ) );
  mActionAddMssqlLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddMssqlLayer.svg" ) );
  // mActionAddDb2Layer->setIcon( QgsApplication::getThemeIcon( "/mActionAddDb2Layer.svg" ) );
#ifdef HAVE_ORACLE
  mActionAddOracleLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddOracleLayer.svg" ) );
#endif
  mActionRemoveLayer->setIcon( QgsApplication::getThemeIcon( "/mActionRemoveLayer.svg" ) );
  mActionDuplicateLayer->setIcon( QgsApplication::getThemeIcon( "/mActionDuplicateLayer.svg" ) );
  mActionSetLayerCRS->setIcon( QgsApplication::getThemeIcon( "/mActionSetLayerCRS.png" ) );
  mActionSetProjectCRSFromLayer->setIcon( QgsApplication::getThemeIcon( "/mActionSetProjectCRSFromLayer.png" ) );
  mActionNewVectorLayer->setIcon( QgsApplication::getThemeIcon( "/mActionNewVectorLayer.svg" ) );
  mActionNewMemoryLayer->setIcon( QgsApplication::getThemeIcon( "/mActionCreateMemory.svg" ) );
  mActionAddAllToOverview->setIcon( QgsApplication::getThemeIcon( "/mActionAddAllToOverview.svg" ) );
  mActionHideAllLayers->setIcon( QgsApplication::getThemeIcon( "/mActionHideAllLayers.svg" ) );
  mActionShowAllLayers->setIcon( QgsApplication::getThemeIcon( "/mActionShowAllLayers.svg" ) );
  mActionHideSelectedLayers->setIcon( QgsApplication::getThemeIcon( "/mActionHideSelectedLayers.png" ) );
  mActionShowSelectedLayers->setIcon( QgsApplication::getThemeIcon( "/mActionShowSelectedLayers.png" ) );
  mActionRemoveAllFromOverview->setIcon( QgsApplication::getThemeIcon( "/mActionRemoveAllFromOverview.svg" ) );
  mActionToggleFullScreen->setIcon( QgsApplication::getThemeIcon( "/mActionToggleFullScreen.png" ) );
  mActionProjectProperties->setIcon( QgsApplication::getThemeIcon( "/mActionProjectProperties.png" ) );
  mActionManagePlugins->setIcon( QgsApplication::getThemeIcon( "/mActionShowPluginManager.svg" ) );
  mActionShowPythonDialog->setIcon( QgsApplication::getThemeIcon( "console/iconRunConsole.png" ) );
  mActionCheckQgisVersion->setIcon( QgsApplication::getThemeIcon( "/mActionCheckQgisVersion.png" ) );
  mActionOptions->setIcon( QgsApplication::getThemeIcon( "/mActionOptions.svg" ) );
  mActionConfigureShortcuts->setIcon( QgsApplication::getThemeIcon( "/mActionOptions.svg" ) );
  mActionCustomization->setIcon( QgsApplication::getThemeIcon( "/mActionOptions.svg" ) );
  mActionHelpContents->setIcon( QgsApplication::getThemeIcon( "/mActionHelpContents.svg" ) );
  mActionLocalHistogramStretch->setIcon( QgsApplication::getThemeIcon( "/mActionLocalHistogramStretch.svg" ) );
  mActionFullHistogramStretch->setIcon( QgsApplication::getThemeIcon( "/mActionFullHistogramStretch.svg" ) );
  mActionIncreaseBrightness->setIcon( QgsApplication::getThemeIcon( "/mActionIncreaseBrightness.svg" ) );
  mActionDecreaseBrightness->setIcon( QgsApplication::getThemeIcon( "/mActionDecreaseBrightness.svg" ) );
  mActionIncreaseContrast->setIcon( QgsApplication::getThemeIcon( "/mActionIncreaseContrast.svg" ) );
  mActionDecreaseContrast->setIcon( QgsApplication::getThemeIcon( "/mActionDecreaseContrast.svg" ) );
  mActionZoomActualSize->setIcon( QgsApplication::getThemeIcon( "/mActionZoomNative.png" ) );
  mActionQgisHomePage->setIcon( QgsApplication::getThemeIcon( "/mActionQgisHomePage.png" ) );
  mActionAbout->setIcon( QgsApplication::getThemeIcon( "/mActionHelpAbout.png" ) );
  mActionSponsors->setIcon( QgsApplication::getThemeIcon( "/mActionHelpSponsors.png" ) );
  mActionDraw->setIcon( QgsApplication::getThemeIcon( "/mActionDraw.svg" ) );
  mActionToggleEditing->setIcon( QgsApplication::getThemeIcon( "/mActionToggleEditing.svg" ) );
  mActionSaveLayerEdits->setIcon( QgsApplication::getThemeIcon( "/mActionSaveAllEdits.svg" ) );
  mActionAllEdits->setIcon( QgsApplication::getThemeIcon( "/mActionAllEdits.svg" ) );
  mActionSaveEdits->setIcon( QgsApplication::getThemeIcon( "/mActionSaveEdits.svg" ) );
  mActionSaveAllEdits->setIcon( QgsApplication::getThemeIcon( "/mActionSaveAllEdits.svg" ) );
  mActionRollbackEdits->setIcon( QgsApplication::getThemeIcon( "/mActionRollbackEdits.svg" ) );
  mActionRollbackAllEdits->setIcon( QgsApplication::getThemeIcon( "/mActionRollbackAllEdits.svg" ) );
  mActionCancelEdits->setIcon( QgsApplication::getThemeIcon( "/mActionCancelEdits.svg" ) );
  mActionCancelAllEdits->setIcon( QgsApplication::getThemeIcon( "/mActionCancelAllEdits.svg" ) );
  mActionCutFeatures->setIcon( QgsApplication::getThemeIcon( "/mActionEditCut.svg" ) );
  mActionCopyFeatures->setIcon( QgsApplication::getThemeIcon( "/mActionEditCopy.svg" ) );
  mActionPasteFeatures->setIcon( QgsApplication::getThemeIcon( "/mActionEditPaste.svg" ) );
  mActionAddFeature->setIcon( QgsApplication::getThemeIcon( "/mActionCapturePoint.svg" ) );
  mActionMoveFeature->setIcon( QgsApplication::getThemeIcon( "/mActionMoveFeaturePoint.svg" ) );
  mActionRotateFeature->setIcon( QgsApplication::getThemeIcon( "/mActionRotateFeature.svg" ) );
  mActionReshapeFeatures->setIcon( QgsApplication::getThemeIcon( "/mActionReshape.svg" ) );
  mActionSplitFeatures->setIcon( QgsApplication::getThemeIcon( "/mActionSplitFeatures.svg" ) );
  mActionSplitParts->setIcon( QgsApplication::getThemeIcon( "/mActionSplitParts.svg" ) );
  mActionDeleteSelected->setIcon( QgsApplication::getThemeIcon( "/mActionDeleteSelected.svg" ) );
  mActionNodeTool->setIcon( QgsApplication::getThemeIcon( "/mActionNodeTool.svg" ) );
  mActionSimplifyFeature->setIcon( QgsApplication::getThemeIcon( "/mActionSimplify.svg" ) );
  mActionUndo->setIcon( QgsApplication::getThemeIcon( "/mActionUndo.svg" ) );
  mActionRedo->setIcon( QgsApplication::getThemeIcon( "/mActionRedo.svg" ) );
  mActionAddRing->setIcon( QgsApplication::getThemeIcon( "/mActionAddRing.svg" ) );
  mActionFillRing->setIcon( QgsApplication::getThemeIcon( "/mActionFillRing.svg" ) );
  mActionAddPart->setIcon( QgsApplication::getThemeIcon( "/mActionAddPart.svg" ) );
  mActionDeleteRing->setIcon( QgsApplication::getThemeIcon( "/mActionDeleteRing.svg" ) );
  mActionDeletePart->setIcon( QgsApplication::getThemeIcon( "/mActionDeletePart.svg" ) );
  mActionMergeFeatures->setIcon( QgsApplication::getThemeIcon( "/mActionMergeFeatures.svg" ) );
  mActionOffsetCurve->setIcon( QgsApplication::getThemeIcon( "/mActionOffsetCurve.svg" ) );
  mActionMergeFeatureAttributes->setIcon( QgsApplication::getThemeIcon( "/mActionMergeFeatureAttributes.svg" ) );
  mActionRotatePointSymbols->setIcon( QgsApplication::getThemeIcon( "mActionRotatePointSymbols.svg" ) );
  mActionOffsetPointSymbol->setIcon( QgsApplication::getThemeIcon( "mActionOffsetPointSymbols.svg" ) );
  mActionZoomIn->setIcon( QgsApplication::getThemeIcon( "/mActionZoomIn.svg" ) );
  mActionZoomOut->setIcon( QgsApplication::getThemeIcon( "/mActionZoomOut.svg" ) );
  mActionZoomFullExtent->setIcon( QgsApplication::getThemeIcon( "/mActionZoomFullExtent.svg" ) );
  mActionZoomToSelected->setIcon( QgsApplication::getThemeIcon( "/mActionZoomToSelected.svg" ) );
  mActionShowRasterCalculator->setIcon( QgsApplication::getThemeIcon( "/mActionShowRasterCalculator.png" ) );
#ifdef HAVE_TOUCH
  mActionTouch->setIcon( QgsApplication::getThemeIcon( "/mActionTouch.svg" ) );
#endif
  mActionPan->setIcon( QgsApplication::getThemeIcon( "/mActionPan.svg" ) );
  mActionPanToSelected->setIcon( QgsApplication::getThemeIcon( "/mActionPanToSelected.svg" ) );
  mActionZoomLast->setIcon( QgsApplication::getThemeIcon( "/mActionZoomLast.svg" ) );
  mActionZoomNext->setIcon( QgsApplication::getThemeIcon( "/mActionZoomNext.svg" ) );
  mActionZoomToLayer->setIcon( QgsApplication::getThemeIcon( "/mActionZoomToLayer.svg" ) );
  mActionZoomActualSize->setIcon( QgsApplication::getThemeIcon( "/mActionZoomActual.svg" ) );
  mActionIdentify->setIcon( QgsApplication::getThemeIcon( "/mActionIdentify.svg" ) );
  mActionFeatureAction->setIcon( QgsApplication::getThemeIcon( "/mAction.svg" ) );
  mActionSelectFeatures->setIcon( QgsApplication::getThemeIcon( "/mActionSelectRectangle.svg" ) );
  mActionSelectPolygon->setIcon( QgsApplication::getThemeIcon( "/mActionSelectPolygon.svg" ) );
  mActionSelectFreehand->setIcon( QgsApplication::getThemeIcon( "/mActionSelectFreehand.svg" ) );
  mActionSelectRadius->setIcon( QgsApplication::getThemeIcon( "/mActionSelectRadius.svg" ) );
  mActionDeselectAll->setIcon( QgsApplication::getThemeIcon( "/mActionDeselectAll.svg" ) );
  mActionSelectAll->setIcon( QgsApplication::getThemeIcon( "/mActionSelectAll.svg" ) );
  mActionInvertSelection->setIcon( QgsApplication::getThemeIcon( "/mActionInvertSelection.svg" ) );
  mActionSelectByExpression->setIcon( QgsApplication::getThemeIcon( "/mIconExpressionSelect.svg" ) );
  mActionSelectByForm->setIcon( QgsApplication::getThemeIcon( "/mIconFormSelect.svg" ) );
  mActionOpenTable->setIcon( QgsApplication::getThemeIcon( "/mActionOpenTable.svg" ) );
  mActionOpenFieldCalc->setIcon( QgsApplication::getThemeIcon( "/mActionCalculateField.svg" ) );
  mActionMeasure->setIcon( QgsApplication::getThemeIcon( "/mActionMeasure.svg" ) );
  mActionMeasureArea->setIcon( QgsApplication::getThemeIcon( "/mActionMeasureArea.svg" ) );
  mActionMeasureAngle->setIcon( QgsApplication::getThemeIcon( "/mActionMeasureAngle.svg" ) );
  mActionMapTips->setIcon( QgsApplication::getThemeIcon( "/mActionMapTips.svg" ) );
  mActionShowBookmarks->setIcon( QgsApplication::getThemeIcon( "/mActionShowBookmarks.svg" ) );
  mActionNewBookmark->setIcon( QgsApplication::getThemeIcon( "/mActionNewBookmark.svg" ) );
  mActionCustomProjection->setIcon( QgsApplication::getThemeIcon( "/mActionCustomProjection.svg" ) );
  mActionAddWmsLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddWmsLayer.svg" ) );
  mActionAddWcsLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddWcsLayer.svg" ) );
  mActionAddWfsLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddWfsLayer.svg" ) );
#ifdef WITH_ARCGIS
  mActionAddAfsLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddAfsLayer.svg" ) );
  mActionAddAmsLayer->setIcon( QgsApplication::getThemeIcon( "/mActionAddAmsLayer.svg" ) );
#endif
  mActionAddToOverview->setIcon( QgsApplication::getThemeIcon( "/mActionInOverview.svg" ) );
  mActionAnnotation->setIcon( QgsApplication::getThemeIcon( "/mActionAnnotation.svg" ) );
  mActionFormAnnotation->setIcon( QgsApplication::getThemeIcon( "/mActionFormAnnotation.svg" ) );
  mActionHtmlAnnotation->setIcon( QgsApplication::getThemeIcon( "/mActionHtmlAnnotation.svg" ) );
  mActionSvgAnnotation->setIcon( QgsApplication::getThemeIcon( "/mActionSvgAnnotation.svg" ) );
  mActionTextAnnotation->setIcon( QgsApplication::getThemeIcon( "/mActionTextAnnotation.svg" ) );
  mActionLabeling->setIcon( QgsApplication::getThemeIcon( "/mActionLabeling.svg" ) );
  mActionShowPinnedLabels->setIcon( QgsApplication::getThemeIcon( "/mActionShowPinnedLabels.svg" ) );
  mActionPinLabels->setIcon( QgsApplication::getThemeIcon( "/mActionPinLabels.svg" ) );
  mActionShowHideLabels->setIcon( QgsApplication::getThemeIcon( "/mActionShowHideLabels.svg" ) );
  mActionMoveLabel->setIcon( QgsApplication::getThemeIcon( "/mActionMoveLabel.svg" ) );
  mActionRotateLabel->setIcon( QgsApplication::getThemeIcon( "/mActionRotateLabel.svg" ) );
  mActionChangeLabelProperties->setIcon( QgsApplication::getThemeIcon( "/mActionChangeLabelProperties.svg" ) );
  mActionDiagramProperties->setIcon( QgsApplication::getThemeIcon( "/mActionDiagramProperties.svg" ) );
  mActionDecorationCopyright->setIcon( QgsApplication::getThemeIcon( "/copyright_label.png" ) );
  mActionDecorationNorthArrow->setIcon( QgsApplication::getThemeIcon( "/north_arrow.png" ) );
  mActionDecorationScaleBar->setIcon( QgsApplication::getThemeIcon( "/scale_bar.png" ) );
  mActionDecorationGrid->setIcon( QgsApplication::getThemeIcon( "/transformed.svg" ) );

  //change themes of all composers
  QSet<QgsComposer*>::const_iterator composerIt = mPrintComposers.constBegin();
  for ( ; composerIt != mPrintComposers.constEnd(); ++composerIt )
  {
    ( *composerIt )->setupTheme();
  }

  emit currentThemeChanged( theThemeName );
}

void QgisApp::setupConnections()
{
  // connect the "cleanup" slot
  connect( qApp, SIGNAL( aboutToQuit() ), this, SLOT( saveWindowState() ) );

  // signal when mouse moved over window (coords display in status bar)
  connect( mMapCanvas, SIGNAL( xyCoordinates( const QgsPoint & ) ),
           this, SLOT( saveLastMousePosition( const QgsPoint & ) ) );
  connect( mMapCanvas, SIGNAL( extentsChanged() ),
           this, SLOT( extentChanged() ) );
  connect( mMapCanvas, SIGNAL( scaleChanged( double ) ),
           this, SLOT( showScale( double ) ) );
  connect( mMapCanvas, SIGNAL( rotationChanged( double ) ),
           this, SLOT( showRotation() ) );
  connect( mMapCanvas, SIGNAL( scaleChanged( double ) ),
           this, SLOT( updateMouseCoordinatePrecision() ) );
  connect( mMapCanvas, SIGNAL( mapToolSet( QgsMapTool *, QgsMapTool * ) ),
           this, SLOT( mapToolChanged( QgsMapTool *, QgsMapTool * ) ) );
  connect( mMapCanvas, SIGNAL( selectionChanged( QgsMapLayer * ) ),
           this, SLOT( selectionChanged( QgsMapLayer * ) ) );
  connect( mMapCanvas, SIGNAL( extentsChanged() ),
           this, SLOT( markDirty() ) );
  connect( mMapCanvas, SIGNAL( layersChanged() ),
           this, SLOT( markDirty() ) );

  connect( mMapCanvas, SIGNAL( zoomLastStatusChanged( bool ) ),
           mActionZoomLast, SLOT( setEnabled( bool ) ) );
  connect( mMapCanvas, SIGNAL( zoomNextStatusChanged( bool ) ),
           mActionZoomNext, SLOT( setEnabled( bool ) ) );
  connect( mRenderSuppressionCBox, SIGNAL( toggled( bool ) ),
           mMapCanvas, SLOT( setRenderFlag( bool ) ) );

  connect( mMapCanvas, SIGNAL( destinationCrsChanged() ),
           this, SLOT( reprojectAnnotations() ) );

  // connect MapCanvas keyPress event so we can check if selected feature collection must be deleted
  connect( mMapCanvas, SIGNAL( keyPressed( QKeyEvent * ) ),
           this, SLOT( mapCanvas_keyPressed( QKeyEvent * ) ) );

  // connect renderer
  connect( mMapCanvas, SIGNAL( hasCrsTransformEnabledChanged( bool ) ),
           this, SLOT( hasCrsTransformEnabled( bool ) ) );
  connect( mMapCanvas, SIGNAL( destinationCrsChanged() ),
           this, SLOT( destinationCrsChanged() ) );

  // connect legend signals
  connect( mLayerTreeView, SIGNAL( currentLayerChanged( QgsMapLayer * ) ),
           this, SLOT( activateDeactivateLayerRelatedActions( QgsMapLayer * ) ) );
  connect( mLayerTreeView, SIGNAL( currentLayerChanged( QgsMapLayer * ) ),
           this, SLOT( setMapStyleDockLayer( QgsMapLayer* ) ) );

  connect( mLayerTreeView->selectionModel(), SIGNAL( selectionChanged( QItemSelection, QItemSelection ) ),
           this, SLOT( legendLayerSelectionChanged() ) );
  connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( addedChildren( QgsLayerTreeNode*, int, int ) ),
           this, SLOT( markDirty() ) );
  connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( addedChildren( QgsLayerTreeNode*, int, int ) ),
           this, SLOT( updateNewLayerInsertionPoint() ) );
  connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( removedChildren( QgsLayerTreeNode*, int, int ) ),
           this, SLOT( markDirty() ) );
  connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( removedChildren( QgsLayerTreeNode*, int, int ) ),
           this, SLOT( updateNewLayerInsertionPoint() ) );
  connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( visibilityChanged( QgsLayerTreeNode*, Qt::CheckState ) ),
           this, SLOT( markDirty() ) );
  connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( customPropertyChanged( QgsLayerTreeNode*, QString ) ),
           this, SLOT( markDirty() ) );

  // connect map layer registry
  connect( QgsMapLayerRegistry::instance(), SIGNAL( layersAdded( QList<QgsMapLayer *> ) ),
           this, SLOT( layersWereAdded( QList<QgsMapLayer *> ) ) );
  connect( QgsMapLayerRegistry::instance(),
           SIGNAL( layersWillBeRemoved( QStringList ) ),
           this, SLOT( removingLayers( QStringList ) ) );

  // connect initialization signal
  connect( this, SIGNAL( initializationCompleted() ),
           this, SLOT( fileOpenAfterLaunch() ) );

  // Connect warning dialog from project reading
  connect( QgsProject::instance(), SIGNAL( oldProjectVersionWarning( QString ) ),
           this, SLOT( oldProjectVersionWarning( QString ) ) );
  connect( QgsProject::instance(), SIGNAL( layerLoaded( int, int ) ),
           this, SLOT( showProgress( int, int ) ) );
  connect( QgsProject::instance(), SIGNAL( loadingLayer( QString ) ),
           this, SLOT( showStatusMessage( QString ) ) );
  connect( QgsProject::instance(), SIGNAL( readProject( const QDomDocument & ) ),
           this, SLOT( readProject( const QDomDocument & ) ) );
  connect( QgsProject::instance(), SIGNAL( writeProject( QDomDocument & ) ),
           this, SLOT( writeProject( QDomDocument & ) ) );
  connect( QgsProject::instance(), SIGNAL( writeProject( QDomDocument& ) ),
           this, SLOT( writeAnnotationItemsToProject( QDomDocument& ) ) );

  connect( QgsProject::instance(), SIGNAL( readProject( const QDomDocument & ) ), this, SLOT( loadComposersFromProject( const QDomDocument& ) ) );
  connect( QgsProject::instance(), SIGNAL( readProject( const QDomDocument & ) ), this, SLOT( loadAnnotationItemsFromProject( const QDomDocument& ) ) );

  connect( this, SIGNAL( projectRead() ),
           this, SLOT( fileOpenedOKAfterLaunch() ) );

  // connect preview modes actions
  connect( mActionPreviewModeOff, SIGNAL( triggered() ), this, SLOT( disablePreviewMode() ) );
  connect( mActionPreviewModeGrayscale, SIGNAL( triggered() ), this, SLOT( activateGrayscalePreview() ) );
  connect( mActionPreviewModeMono, SIGNAL( triggered() ), this, SLOT( activateMonoPreview() ) );
  connect( mActionPreviewProtanope, SIGNAL( triggered() ), this, SLOT( activateProtanopePreview() ) );
  connect( mActionPreviewDeuteranope, SIGNAL( triggered() ), this, SLOT( activateDeuteranopePreview() ) );

  // handle deprecated labels in project for QGIS 2.0
  connect( this, SIGNAL( newProject() ),
           this, SLOT( checkForDeprecatedLabelsInProject() ) );
  connect( this, SIGNAL( projectRead() ),
           this, SLOT( checkForDeprecatedLabelsInProject() ) );

  // setup undo/redo actions
  connect( mUndoWidget, SIGNAL( undoStackChanged() ), this, SLOT( updateUndoActions() ) );
}

void QgisApp::createCanvasTools()
{
  // create tools
  mMapTools.mZoomIn = new QgsMapToolZoom( mMapCanvas, false /* zoomIn */ );
  mMapTools.mZoomIn->setAction( mActionZoomIn );
  mMapTools.mZoomOut = new QgsMapToolZoom( mMapCanvas, true /* zoomOut */ );
  mMapTools.mZoomOut->setAction( mActionZoomOut );
  mMapTools.mPan = new QgsMapToolPan( mMapCanvas );
  mMapTools.mPan->setAction( mActionPan );
#ifdef HAVE_TOUCH
  mMapTools.mTouch = new QgsMapToolTouch( mMapCanvas );
  mMapTools.mTouch->setAction( mActionTouch );
#endif
  mMapTools.mIdentify = new QgsMapToolIdentifyAction( mMapCanvas );
  mMapTools.mIdentify->setAction( mActionIdentify );
  connect( mMapTools.mIdentify, SIGNAL( copyToClipboard( QgsFeatureStore & ) ),
           this, SLOT( copyFeatures( QgsFeatureStore & ) ) );
  mMapTools.mFeatureAction = new QgsMapToolFeatureAction( mMapCanvas );
  mMapTools.mFeatureAction->setAction( mActionFeatureAction );
  mMapTools.mMeasureDist = new QgsMeasureTool( mMapCanvas, false /* area */ );
  mMapTools.mMeasureDist->setAction( mActionMeasure );
  mMapTools.mMeasureArea = new QgsMeasureTool( mMapCanvas, true /* area */ );
  mMapTools.mMeasureArea->setAction( mActionMeasureArea );
  mMapTools.mMeasureAngle = new QgsMapToolMeasureAngle( mMapCanvas );
  mMapTools.mMeasureAngle->setAction( mActionMeasureAngle );
  mMapTools.mTextAnnotation = new QgsMapToolTextAnnotation( mMapCanvas );
  mMapTools.mTextAnnotation->setAction( mActionTextAnnotation );
  mMapTools.mFormAnnotation = new QgsMapToolFormAnnotation( mMapCanvas );
  mMapTools.mFormAnnotation->setAction( mActionFormAnnotation );
  mMapTools.mHtmlAnnotation = new QgsMapToolHtmlAnnotation( mMapCanvas );
  mMapTools.mHtmlAnnotation->setAction( mActionHtmlAnnotation );
  mMapTools.mSvgAnnotation = new QgsMapToolSvgAnnotation( mMapCanvas );
  mMapTools.mSvgAnnotation->setAction( mActionSvgAnnotation );
  mMapTools.mAnnotation = new QgsMapToolAnnotation( mMapCanvas );
  mMapTools.mAnnotation->setAction( mActionAnnotation );
  mMapTools.mAddFeature = new QgsMapToolAddFeature( mMapCanvas );
  mMapTools.mAddFeature->setAction( mActionAddFeature );
  mMapTools.mCircularStringCurvePoint = new QgsMapToolCircularStringCurvePoint( dynamic_cast<QgsMapToolAddFeature*>( mMapTools.mAddFeature ), mMapCanvas );
  mMapTools.mCircularStringCurvePoint->setAction( mActionCircularStringCurvePoint );
  mMapTools.mCircularStringRadius = new QgsMapToolCircularStringRadius( dynamic_cast<QgsMapToolAddFeature*>( mMapTools.mAddFeature ), mMapCanvas );
  mMapTools.mCircularStringRadius->setAction( mActionCircularStringRadius );
  mMapTools.mMoveFeature = new QgsMapToolMoveFeature( mMapCanvas );
  mMapTools.mMoveFeature->setAction( mActionMoveFeature );
  mMapTools.mRotateFeature = new QgsMapToolRotateFeature( mMapCanvas );
  mMapTools.mRotateFeature->setAction( mActionRotateFeature );
//need at least geos 3.3 for OffsetCurve tool
#if defined(GEOS_VERSION_MAJOR) && defined(GEOS_VERSION_MINOR) && \
((GEOS_VERSION_MAJOR>3) || ((GEOS_VERSION_MAJOR==3) && (GEOS_VERSION_MINOR>=3)))
  mMapTools.mOffsetCurve = new QgsMapToolOffsetCurve( mMapCanvas );
  mMapTools.mOffsetCurve->setAction( mActionOffsetCurve );
#else
  mAdvancedDigitizeToolBar->removeAction( mActionOffsetCurve );
  mEditMenu->removeAction( mActionOffsetCurve );
  mMapTools.mOffsetCurve = 0;
#endif //GEOS_VERSION
  mMapTools.mReshapeFeatures = new QgsMapToolReshape( mMapCanvas );
  mMapTools.mReshapeFeatures->setAction( mActionReshapeFeatures );
  mMapTools.mSplitFeatures = new QgsMapToolSplitFeatures( mMapCanvas );
  mMapTools.mSplitFeatures->setAction( mActionSplitFeatures );
  mMapTools.mSplitParts = new QgsMapToolSplitParts( mMapCanvas );
  mMapTools.mSplitParts->setAction( mActionSplitParts );
  mMapTools.mSelectFeatures = new QgsMapToolSelectFeatures( mMapCanvas );
  mMapTools.mSelectFeatures->setAction( mActionSelectFeatures );
  mMapTools.mSelectPolygon = new QgsMapToolSelectPolygon( mMapCanvas );
  mMapTools.mSelectPolygon->setAction( mActionSelectPolygon );
  mMapTools.mSelectFreehand = new QgsMapToolSelectFreehand( mMapCanvas );
  mMapTools.mSelectFreehand->setAction( mActionSelectFreehand );
  mMapTools.mSelectRadius = new QgsMapToolSelectRadius( mMapCanvas );
  mMapTools.mSelectRadius->setAction( mActionSelectRadius );
  mMapTools.mAddRing = new QgsMapToolAddRing( mMapCanvas );
  mMapTools.mAddRing->setAction( mActionAddRing );
  mMapTools.mFillRing = new QgsMapToolFillRing( mMapCanvas );
  mMapTools.mFillRing->setAction( mActionFillRing );
  mMapTools.mAddPart = new QgsMapToolAddPart( mMapCanvas );
  mMapTools.mAddPart->setAction( mActionAddPart );
  mMapTools.mSimplifyFeature = new QgsMapToolSimplify( mMapCanvas );
  mMapTools.mSimplifyFeature->setAction( mActionSimplifyFeature );
  mMapTools.mDeleteRing = new QgsMapToolDeleteRing( mMapCanvas );
  mMapTools.mDeleteRing->setAction( mActionDeleteRing );
  mMapTools.mDeletePart = new QgsMapToolDeletePart( mMapCanvas );
  mMapTools.mDeletePart->setAction( mActionDeletePart );
  mMapTools.mNodeTool = new QgsMapToolNodeTool( mMapCanvas );
  mMapTools.mNodeTool->setAction( mActionNodeTool );
  mMapTools.mRotatePointSymbolsTool = new QgsMapToolRotatePointSymbols( mMapCanvas );
  mMapTools.mRotatePointSymbolsTool->setAction( mActionRotatePointSymbols );
  mMapTools.mOffsetPointSymbolTool = new QgsMapToolOffsetPointSymbol( mMapCanvas );
  mMapTools.mOffsetPointSymbolTool->setAction( mActionOffsetPointSymbol );

  mMapTools.mPinLabels = new QgsMapToolPinLabels( mMapCanvas );
  mMapTools.mPinLabels->setAction( mActionPinLabels );
  mMapTools.mShowHideLabels = new QgsMapToolShowHideLabels( mMapCanvas );
  mMapTools.mShowHideLabels->setAction( mActionShowHideLabels );
  mMapTools.mMoveLabel = new QgsMapToolMoveLabel( mMapCanvas );
  mMapTools.mMoveLabel->setAction( mActionMoveLabel );

  mMapTools.mRotateLabel = new QgsMapToolRotateLabel( mMapCanvas );
  mMapTools.mRotateLabel->setAction( mActionRotateLabel );
  mMapTools.mChangeLabelProperties = new QgsMapToolChangeLabelProperties( mMapCanvas );
  mMapTools.mChangeLabelProperties->setAction( mActionChangeLabelProperties );
//ensure that non edit tool is initialized or we will get crashes in some situations
  mNonEditMapTool = mMapTools.mPan;
}

void QgisApp::createOverview()
{
  // overview canvas
  mOverviewCanvas = new QgsMapOverviewCanvas( nullptr, mMapCanvas );

  //set canvas color to default
  QSettings settings;
  int red = settings.value( "/qgis/default_canvas_color_red", 255 ).toInt();
  int green = settings.value( "/qgis/default_canvas_color_green", 255 ).toInt();
  int blue = settings.value( "/qgis/default_canvas_color_blue", 255 ).toInt();
  mOverviewCanvas->setBackgroundColor( QColor( red, green, blue ) );

  mOverviewCanvas->setWhatsThis( tr( "Map overview canvas. This canvas can be used to display a locator map that shows the current extent of the map canvas. The current extent is shown as a red rectangle. Any layer on the map can be added to the overview canvas." ) );

  mOverviewMapCursor = new QCursor( Qt::OpenHandCursor );
  mOverviewCanvas->setCursor( *mOverviewMapCursor );
//  QVBoxLayout *myOverviewLayout = new QVBoxLayout;
//  myOverviewLayout->addWidget(overviewCanvas);
//  overviewFrame->setLayout(myOverviewLayout);
  mOverviewDock = new QgsDockWidget( tr( "Overview Panel" ), this );
  mOverviewDock->setObjectName( "Overview" );
  mOverviewDock->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );
  mOverviewDock->setWidget( mOverviewCanvas );
  addDockWidget( Qt::LeftDockWidgetArea, mOverviewDock );
  // add to the Panel submenu
  mPanelMenu->addAction( mOverviewDock->toggleViewAction() );

  mMapCanvas->enableOverviewMode( mOverviewCanvas );

  // moved here to set anti aliasing to both map canvas and overview
  QSettings mySettings;
  // Anti Aliasing enabled by default as of QGIS 1.7
  mMapCanvas->enableAntiAliasing( mySettings.value( "/qgis/enable_anti_aliasing", true ).toBool() );

  double zoomFactor = mySettings.value( "/qgis/zoom_factor", 2 ).toDouble();
  mMapCanvas->setWheelFactor( zoomFactor );

  mMapCanvas->setCachingEnabled( mySettings.value( "/qgis/enable_render_caching", true ).toBool() );

  mMapCanvas->setParallelRenderingEnabled( mySettings.value( "/qgis/parallel_rendering", true ).toBool() );

  mMapCanvas->setMapUpdateInterval( mySettings.value( "/qgis/map_update_interval", 250 ).toInt() );
}

void QgisApp::addDockWidget( Qt::DockWidgetArea theArea, QDockWidget* thepDockWidget )
{
  QMainWindow::addDockWidget( theArea, thepDockWidget );
  // Make the right and left docks consume all vertical space and top
  // and bottom docks nest between them
  setCorner( Qt::TopLeftCorner, Qt::LeftDockWidgetArea );
  setCorner( Qt::BottomLeftCorner, Qt::LeftDockWidgetArea );
  setCorner( Qt::TopRightCorner, Qt::RightDockWidgetArea );
  setCorner( Qt::BottomRightCorner, Qt::RightDockWidgetArea );
  // add to the Panel submenu
  mPanelMenu->addAction( thepDockWidget->toggleViewAction() );

  thepDockWidget->show();

  // refresh the map canvas
  mMapCanvas->refresh();
}

void QgisApp::removeDockWidget( QDockWidget * thepDockWidget )
{
  QMainWindow::removeDockWidget( thepDockWidget );
  mPanelMenu->removeAction( thepDockWidget->toggleViewAction() );
}

QToolBar *QgisApp::addToolBar( const QString& name )
{
  QToolBar *toolBar = QMainWindow::addToolBar( name );
  // add to the Toolbar submenu
  mToolbarMenu->addAction( toolBar->toggleViewAction() );
  return toolBar;
}

void QgisApp::addToolBar( QToolBar* toolBar, Qt::ToolBarArea area )
{
  QMainWindow::addToolBar( area, toolBar );
  // add to the Toolbar submenu
  mToolbarMenu->addAction( toolBar->toggleViewAction() );
}

QgsLayerTreeView* QgisApp::layerTreeView()
{
  Q_ASSERT( mLayerTreeView );
  return mLayerTreeView;
}

QgsPluginManager *QgisApp::pluginManager()
{
  Q_ASSERT( mPluginManager );
  return mPluginManager;
}

QgsMapCanvas *QgisApp::mapCanvas()
{
  Q_ASSERT( mMapCanvas );
  return mMapCanvas;
}

QgsMessageBar* QgisApp::messageBar()
{
  Q_ASSERT( mInfoBar );
  return mInfoBar;
}

void QgisApp::toggleLogMessageIcon( bool hasLogMessage )
{
  if ( hasLogMessage && !mLogDock->isVisible() )
  {
    mMessageButton->setIcon( QgsApplication::getThemeIcon( "/mMessageLog.svg" ) );
  }
  else
  {
    mMessageButton->setIcon( QgsApplication::getThemeIcon( "/mMessageLogRead.svg" ) );
  }
}

void QgisApp::openMessageLog()
{
  mMessageButton->setChecked( true );
}

void QgisApp::addUserInputWidget( QWidget *widget )
{
  mUserInputDockWidget->addUserInputWidget( widget );
}


void QgisApp::initLayerTreeView()
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
  actionAddGroup->setIcon( QgsApplication::getThemeIcon( "/mActionAddGroup.svg" ) );
  actionAddGroup->setToolTip( tr( "Add Group" ) );
  connect( actionAddGroup, SIGNAL( triggered( bool ) ), mLayerTreeView->defaultActions(), SLOT( addGroup() ) );

  // visibility groups tool button
  QToolButton* btnVisibilityPresets = new QToolButton;
  btnVisibilityPresets->setAutoRaise( true );
  btnVisibilityPresets->setToolTip( tr( "Manage Layer Visibility" ) );
  btnVisibilityPresets->setIcon( QgsApplication::getThemeIcon( "/mActionShowAllLayers.svg" ) );
  btnVisibilityPresets->setPopupMode( QToolButton::InstantPopup );
  btnVisibilityPresets->setMenu( QgsVisibilityPresets::instance()->menu() );

  // filter legend action
  mActionFilterLegend = new QAction( tr( "Filter Legend By Map Content" ), this );
  mActionFilterLegend->setCheckable( true );
  mActionFilterLegend->setToolTip( tr( "Filter Legend By Map Content" ) );
  mActionFilterLegend->setIcon( QgsApplication::getThemeIcon( "/mActionFilter2.svg" ) );
  connect( mActionFilterLegend, SIGNAL( toggled( bool ) ), this, SLOT( updateFilterLegend() ) );

  mLegendExpressionFilterButton = new QgsLegendFilterButton( this );
  mLegendExpressionFilterButton->setToolTip( tr( "Filter legend by expression" ) );
  connect( mLegendExpressionFilterButton, SIGNAL( toggled( bool ) ), this, SLOT( toggleFilterLegendByExpression( bool ) ) );

  mActionStyleDock = new QAction( tr( "Layer Styling" ), this );
  mActionStyleDock->setCheckable( true );
  mActionStyleDock->setToolTip( tr( "Open the layer styling dock" ) );
  mActionStyleDock->setShortcut( QString( "F7" ) );
  mActionStyleDock->setIcon( QgsApplication::getThemeIcon( "propertyicons/symbology.svg" ) );
  connect( mActionStyleDock, SIGNAL( toggled( bool ) ), this, SLOT( mapStyleDock( bool ) ) );

  // expand / collapse tool buttons
  QAction* actionExpandAll = new QAction( tr( "Expand All" ), this );
  actionExpandAll->setIcon( QgsApplication::getThemeIcon( "/mActionExpandTree.svg" ) );
  actionExpandAll->setToolTip( tr( "Expand All" ) );
  connect( actionExpandAll, SIGNAL( triggered( bool ) ), mLayerTreeView, SLOT( expandAllNodes() ) );
  QAction* actionCollapseAll = new QAction( tr( "Collapse All" ), this );
  actionCollapseAll->setIcon( QgsApplication::getThemeIcon( "/mActionCollapseTree.svg" ) );
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

void QgisApp::setupLayerTreeViewFromSettings()
{
  QSettings s;

  QgsLayerTreeModel* model = mLayerTreeView->layerTreeModel();
  model->setFlag( QgsLayerTreeModel::ShowRasterPreviewIcon, s.value( "/qgis/createRasterLegendIcons", false ).toBool() );

  QFont fontLayer, fontGroup;
  fontLayer.setBold( s.value( "/qgis/legendLayersBold", true ).toBool() );
  fontGroup.setBold( s.value( "/qgis/legendGroupsBold", false ).toBool() );
  model->setLayerTreeNodeFont( QgsLayerTreeNode::NodeLayer, fontLayer );
  model->setLayerTreeNodeFont( QgsLayerTreeNode::NodeGroup, fontGroup );
}


void QgisApp::updateNewLayerInsertionPoint()
{
  // defaults
  QgsLayerTreeGroup* parentGroup = mLayerTreeView->layerTreeModel()->rootGroup();
  int index = 0;
  QModelIndex current = mLayerTreeView->currentIndex();

  if ( current.isValid() )
  {
    if ( QgsLayerTreeNode* currentNode = mLayerTreeView->currentNode() )
    {
      // if the insertion point is actually a group, insert new layers into the group
      if ( QgsLayerTree::isGroup( currentNode ) )
      {
        QgsProject::instance()->layerTreeRegistryBridge()->setLayerInsertionPoint( QgsLayerTree::toGroup( currentNode ), 0 );
        return;
      }

      // otherwise just set the insertion point in front of the current node
      QgsLayerTreeNode* parentNode = currentNode->parent();
      if ( QgsLayerTree::isGroup( parentNode ) )
        parentGroup = QgsLayerTree::toGroup( parentNode );
    }

    index = current.row();
  }

  QgsProject::instance()->layerTreeRegistryBridge()->setLayerInsertionPoint( parentGroup, index );
}

void QgisApp::autoSelectAddedLayer( QList<QgsMapLayer*> layers )
{
  if ( !layers.isEmpty() )
  {
    QgsLayerTreeLayer* nodeLayer = QgsProject::instance()->layerTreeRoot()->findLayer( layers[0]->id() );

    if ( !nodeLayer )
      return;

    QModelIndex index = mLayerTreeView->layerTreeModel()->node2index( nodeLayer );
    mLayerTreeView->setCurrentIndex( index );
  }
}

void QgisApp::createMapTips()
{
  // Set up the timer for maptips. The timer is reset everytime the mouse is moved
  mpMapTipsTimer = new QTimer( mMapCanvas );
  // connect the timer to the maptips slot
  connect( mpMapTipsTimer, SIGNAL( timeout() ), this, SLOT( showMapTip() ) );
  // set the interval to 0.850 seconds - timer will be started next time the mouse moves
  mpMapTipsTimer->setInterval( 850 );
  // Create the maptips object
  mpMaptip = new QgsMapTip();
}

void QgisApp::createDecorations()
{
  QgsDecorationCopyright* mDecorationCopyright = new QgsDecorationCopyright( this );
  connect( mActionDecorationCopyright, SIGNAL( triggered() ), mDecorationCopyright, SLOT( run() ) );

  QgsDecorationNorthArrow* mDecorationNorthArrow = new QgsDecorationNorthArrow( this );
  connect( mActionDecorationNorthArrow, SIGNAL( triggered() ), mDecorationNorthArrow, SLOT( run() ) );

  QgsDecorationScaleBar* mDecorationScaleBar = new QgsDecorationScaleBar( this );
  connect( mActionDecorationScaleBar, SIGNAL( triggered() ), mDecorationScaleBar, SLOT( run() ) );

  QgsDecorationGrid* mDecorationGrid = new QgsDecorationGrid( this );
  connect( mActionDecorationGrid, SIGNAL( triggered() ), mDecorationGrid, SLOT( run() ) );

  // add the decorations in a particular order so they are rendered in that order
  addDecorationItem( mDecorationGrid );
  addDecorationItem( mDecorationCopyright );
  addDecorationItem( mDecorationNorthArrow );
  addDecorationItem( mDecorationScaleBar );
  connect( mMapCanvas, SIGNAL( renderComplete( QPainter * ) ), this, SLOT( renderDecorationItems( QPainter * ) ) );
  connect( this, SIGNAL( newProject() ), this, SLOT( projectReadDecorationItems() ) );
  connect( this, SIGNAL( projectRead() ), this, SLOT( projectReadDecorationItems() ) );
}

void QgisApp::renderDecorationItems( QPainter *p )
{
  Q_FOREACH ( QgsDecorationItem* item, mDecorationItems )
  {
    item->render( p );
  }
}

void QgisApp::projectReadDecorationItems()
{
  Q_FOREACH ( QgsDecorationItem* item, mDecorationItems )
  {
    item->projectRead();
  }
}

// Update project menu with the current list of recently accessed projects
void QgisApp::updateRecentProjectPaths()
{
  mRecentProjectsMenu->clear();

  Q_FOREACH ( const QgsWelcomePageItemsModel::RecentProjectData& recentProject, mRecentProjects )
  {
    QAction* action = mRecentProjectsMenu->addAction( QString( "%1 (%2)" ).arg( recentProject.title != recentProject.path ? recentProject.title : QFileInfo( recentProject.path ).completeBaseName(), QDir::toNativeSeparators( recentProject.path ) ) );
    action->setEnabled( QFile::exists(( recentProject.path ) ) );
    action->setData( recentProject.path );
  }

  if ( mWelcomePage )
    mWelcomePage->setRecentProjects( mRecentProjects );
} // QgisApp::updateRecentProjectPaths

// add this file to the recently opened/saved projects list
void QgisApp::saveRecentProjectPath( const QString& projectPath, bool savePreviewImage )
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
    QString previewDir = QString( "%1/previewImages" ).arg( QgsApplication::qgisSettingsDirPath() );
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

} // QgisApp::saveRecentProjectPath

// Update project menu with the project templates
void QgisApp::updateProjectFromTemplates()
{
  // get list of project files in template dir
  QSettings settings;
  QString templateDirName = settings.value( "/qgis/projectTemplateDir",
                            QgsApplication::qgisSettingsDirPath() + "project_templates" ).toString();
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

} // QgisApp::updateProjectFromTemplates

void QgisApp::saveWindowState()
{
  // store window and toolbar positions
  QSettings settings;
  // store the toolbar/dock widget settings using Qt4 settings API
  settings.setValue( "/UI/state", saveState() );

  // store window geometry
  settings.setValue( "/UI/geometry", saveGeometry() );

  QgsPluginRegistry::instance()->unloadAll();
}

#include "ui_defaults.h"

void QgisApp::restoreWindowState()
{
  // restore the toolbar and dock widgets positions using Qt4 settings API
  QSettings settings;

  if ( !restoreState( settings.value( "/UI/state", QByteArray::fromRawData( reinterpret_cast< const char * >( defaultUIstate ), sizeof defaultUIstate ) ).toByteArray() ) )
  {
    QgsDebugMsg( "restore of UI state failed" );
  }

  // restore window geometry
  if ( !restoreGeometry( settings.value( "/UI/geometry", QByteArray::fromRawData( reinterpret_cast< const char * >( defaultUIgeometry ), sizeof defaultUIgeometry ) ).toByteArray() ) )
  {
    QgsDebugMsg( "restore of UI geometry failed" );
  }

}
///////////// END OF GUI SETUP ROUTINES ///////////////
void QgisApp::sponsors()
{
  openURL( tr( "http://qgis.org/en/site/about/sponsorship.html" ), false );
}

void QgisApp::about()
{
  static QgsAbout *abt = nullptr;
  if ( !abt )
  {
    QApplication::setOverrideCursor( Qt::WaitCursor );
    abt = new QgsAbout( this );
    QString versionString = "<html><body><div align='center'><table width='100%'>";

    versionString += "<tr>";
    versionString += "<td>" + tr( "QGIS version" )       + "</td><td>" + QGis::QGIS_VERSION + "</td><td>";


    if ( QString( QGis::QGIS_DEV_VERSION ) == "exported" )
    {
      versionString += tr( "QGIS code branch" ) + QString( "</td><td><a href=\"https://github.com/qgis/QGIS/tree/release-%1_%2\">Release %1.%2</a></td>" )
                       .arg( QGis::QGIS_VERSION_INT / 10000 ).arg( QGis::QGIS_VERSION_INT / 100 % 100 );
    }
    else
    {
      versionString += tr( "QGIS code revision" ) + QString( "</td><td><a href=\"https://github.com/qgis/QGIS/commit/%1\">%1</a></td>" ).arg( QGis::QGIS_DEV_VERSION );
    }

    versionString += "</tr><tr>";

    versionString += "<td>" + tr( "Compiled against Qt" ) + "</td><td>" + QT_VERSION_STR + "</td>";
    versionString += "<td>" + tr( "Running against Qt" )  + "</td><td>" + qVersion() + "</td>";

    versionString += "</tr><tr>";

    versionString += "<td>" + tr( "Compiled against GDAL/OGR" ) + "</td><td>" + GDAL_RELEASE_NAME + "</td>";
    versionString += "<td>" + tr( "Running against GDAL/OGR" )  + "</td><td>" + GDALVersionInfo( "RELEASE_NAME" ) + "</td>";

    versionString += "</tr><tr>";

    versionString += "<td>" + tr( "Compiled against GEOS" ) + "</td><td>" + GEOS_CAPI_VERSION + "</td>";
    versionString += "<td>" + tr( "Running against GEOS" ) + "</td><td>" + GEOSversion() + "</td>";

    versionString += "</tr><tr>";

    versionString += "<td>" + tr( "PostgreSQL Client Version" ) + "</td><td>";
#ifdef HAVE_POSTGRESQL
    versionString += PG_VERSION;
#else
    versionString += tr( "No support." );
#endif
    versionString += "</td>";

    versionString += "<td>" +  tr( "SpatiaLite Version" ) + "</td><td>";
    versionString += spatialite_version();
    versionString += "</td>";

    versionString += "</tr><tr>";

    versionString += "<td>" + tr( "QWT Version" ) + "</td><td>" + QWT_VERSION_STR + "</td>";
    versionString += "<td>" + tr( "PROJ.4 Version" ) + "</td><td>" + QString::number( PJ_VERSION ) + "</td>";

    versionString += "</tr><tr>";

    versionString += "<td>" + tr( "QScintilla2 Version" ) + "</td><td>" + QSCINTILLA_VERSION_STR + "</td>";

#ifdef QGISDEBUG
    versionString += "<td colspan=2>" + tr( "This copy of QGIS writes debugging output." ) + "</td>";
#endif

    versionString += "</tr></table></div></body></html>";

    abt->setVersion( versionString );

    QApplication::restoreOverrideCursor();
  }
  abt->show();
  abt->raise();
  abt->activateWindow();
}

void QgisApp::addLayerDefinition()
{
  QString path = QFileDialog::getOpenFileName( this, "Add Layer Definition File", QDir::home().path(), "*.qlr" );
  if ( path.isEmpty() )
    return;

  openLayerDefinition( path );
}

QString QgisApp::crsAndFormatAdjustedLayerUri( const QString &uri, const QStringList &supportedCrs, const QStringList &supportedFormats ) const
{
  QString newuri = uri;

  // Adjust layer CRS to project CRS
  QgsCoordinateReferenceSystem testCrs;
  Q_FOREACH ( const QString& c, supportedCrs )
  {
    testCrs.createFromOgcWmsCrs( c );
    if ( testCrs == mMapCanvas->mapSettings().destinationCrs() )
    {
      newuri.replace( QRegExp( "crs=[^&]+" ), "crs=" + c );
      QgsDebugMsg( QString( "Changing layer crs to %1, new uri: %2" ).arg( c, uri ) );
      break;
    }
  }

  // Use the last used image format
  QString lastImageEncoding = QSettings().value( "/qgis/lastWmsImageEncoding", "image/png" ).toString();
  Q_FOREACH ( const QString& fmt, supportedFormats )
  {
    if ( fmt == lastImageEncoding )
    {
      newuri.replace( QRegExp( "format=[^&]+" ), "format=" + fmt );
      QgsDebugMsg( QString( "Changing layer format to %1, new uri: %2" ).arg( fmt, uri ) );
      break;
    }
  }
  return newuri;
}

/**
  This method prompts the user for a list of vector file names  with a dialog.
  */
void QgisApp::addVectorLayer()
{
  mMapCanvas->freeze();
  QgsOpenVectorLayerDialog *ovl = new QgsOpenVectorLayerDialog( this );

  if ( ovl->exec() )
  {
    QStringList selectedSources = ovl->dataSources();
    QString enc = ovl->encoding();
    if ( !selectedSources.isEmpty() )
    {
      addVectorLayers( selectedSources, enc, ovl->dataSourceType() );
    }
  }

  mMapCanvas->freeze( false );
  mMapCanvas->refresh();

  delete ovl;
}


bool QgisApp::addVectorLayers( const QStringList &theLayerQStringList, const QString &enc, const QString &dataSourceType )
{
  bool wasfrozen = mMapCanvas->isFrozen();
  QList<QgsMapLayer *> myList;
  Q_FOREACH ( QString src, theLayerQStringList )
  {
    src = src.trimmed();
    QString base;
    if ( dataSourceType == "file" )
    {
      QString srcWithoutLayername( src );
      int posPipe = srcWithoutLayername.indexOf( '|' );
      if ( posPipe >= 0 )
        srcWithoutLayername.resize( posPipe );
      QFileInfo fi( srcWithoutLayername );
      base = fi.completeBaseName();

      // if needed prompt for zipitem layers
      QString vsiPrefix = QgsZipItem::vsiPrefix( src );
      if ( ! src.startsWith( "/vsi", Qt::CaseInsensitive ) &&
           ( vsiPrefix == "/vsizip/" || vsiPrefix == "/vsitar/" ) )
      {
        if ( askUserForZipItemLayers( src ) )
          continue;
      }
    }
    else if ( dataSourceType == "database" )
    {
      base = src;
    }
    else //directory //protocol
    {
      QFileInfo fi( src );
      base = fi.completeBaseName();
    }

    QgsDebugMsg( "completeBaseName: " + base );

    // create the layer

    QgsVectorLayer *layer = new QgsVectorLayer( src, base, "ogr", false );
    Q_CHECK_PTR( layer );

    if ( ! layer )
    {
      mMapCanvas->freeze( false );

      // Let render() do its own cursor management
      //      QApplication::restoreOverrideCursor();

      // XXX insert meaningful whine to the user here
      return false;
    }

    if ( layer->isValid() )
    {
      layer->setProviderEncoding( enc );

      QStringList sublayers = layer->dataProvider()->subLayers();
      QgsDebugMsg( QString( "got valid layer with %1 sublayers" ).arg( sublayers.count() ) );

      // If the newly created layer has more than 1 layer of data available, we show the
      // sublayers selection dialog so the user can select the sublayers to actually load.
      if ( sublayers.count() > 1 )
      {
        askUserForOGRSublayers( layer );

        // The first layer loaded is not useful in that case. The user can select it in
        // the list if he wants to load it.
        delete layer;

      }
      else if ( !sublayers.isEmpty() ) // there is 1 layer of data available
      {
        //set friendly name for datasources with only one layer
        QStringList elements = sublayers.at( 0 ).split( ':' );

        if ( elements.size() >= 4 && layer->name() != elements.at( 1 ) )
        {
          layer->setName( QString( "%1 %2 %3" ).arg( layer->name(), elements.at( 1 ), elements.at( 3 ) ) );
        }

        myList << layer;
      }
      else
      {
        QString msg = tr( "%1 doesn't have any layers" ).arg( src );
        messageBar()->pushMessage( tr( "Invalid Data Source" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );
        delete layer;
      }
    }
    else
    {
      QString msg = tr( "%1 is not a valid or recognized data source" ).arg( src );
      messageBar()->pushMessage( tr( "Invalid Data Source" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );

      // since the layer is bad, stomp on it
      delete layer;
    }

  }

  // make sure at least one layer was successfully added
  if ( myList.isEmpty() )
  {
    return false;
  }

  // Register this layer with the layers registry
  QgsMapLayerRegistry::instance()->addMapLayers( myList );
  Q_FOREACH ( QgsMapLayer *l, myList )
  {
    bool ok;
    l->loadDefaultStyle( ok );
  }
  activateDeactivateLayerRelatedActions( activeLayer() );

  // Only update the map if we frozen in this method
  // Let the caller do it otherwise
  if ( !wasfrozen )
  {
    mMapCanvas->freeze( false );
    mMapCanvas->refresh();
  }
// Let render() do its own cursor management
//  QApplication::restoreOverrideCursor();

  // statusBar()->showMessage( mMapCanvas->extent().toString( 2 ) );

  return true;
} // QgisApp::addVectorLayer()

// present a dialog to choose zipitem layers
bool QgisApp::askUserForZipItemLayers( QString path )
{
  bool ok = false;
  QVector<QgsDataItem*> childItems;
  QgsZipItem *zipItem = nullptr;
  QSettings settings;
  int promptLayers = settings.value( "/qgis/promptForRasterSublayers", 1 ).toInt();

  QgsDebugMsg( "askUserForZipItemLayers( " + path + ')' );

  // if scanZipBrowser == no: skip to the next file
  if ( settings.value( "/qgis/scanZipInBrowser2", "basic" ).toString() == "no" )
  {
    return false;
  }

  zipItem = new QgsZipItem( nullptr, path, path );
  if ( ! zipItem )
    return false;

  zipItem->populate();
  QgsDebugMsg( QString( "Path= %1 got zipitem with %2 children" ).arg( path ).arg( zipItem->rowCount() ) );

  // if 1 or 0 child found, exit so a normal item is created by gdal or ogr provider
  if ( zipItem->rowCount() <= 1 )
  {
    zipItem->deleteLater();
    return false;
  }

  // if promptLayers=Load all, load all layers without prompting
  if ( promptLayers == 3 )
  {
    childItems = zipItem->children();
  }
  // exit if promptLayers=Never
  else if ( promptLayers == 2 )
  {
    zipItem->deleteLater();
    return false;
  }
  else
  {
    // We initialize a selection dialog and display it.
    QgsSublayersDialog chooseSublayersDialog( QgsSublayersDialog::Vsifile, "vsi", this );
    QgsSublayersDialog::LayerDefinitionList layers;

    for ( int i = 0; i < zipItem->children().size(); i++ )
    {
      QgsDataItem *item = zipItem->children().at( i );
      QgsLayerItem *layerItem = dynamic_cast<QgsLayerItem *>( item );
      if ( !layerItem )
        continue;

      QgsDebugMsgLevel( QString( "item path=%1 provider=%2" ).arg( item->path(), layerItem->providerKey() ), 2 );

      QgsSublayersDialog::LayerDefinition def;
      def.layerId = i;
      def.layerName = item->name();
      if ( layerItem->providerKey() == "gdal" )
      {
        def.type = tr( "Raster" );
      }
      else if ( layerItem->providerKey() == "ogr" )
      {
        def.type = tr( "Vector" );
      }
      layers << def;
    }

    chooseSublayersDialog.populateLayerTable( layers );

    if ( chooseSublayersDialog.exec() )
    {
      Q_FOREACH ( const QgsSublayersDialog::LayerDefinition& def, chooseSublayersDialog.selection() )
      {
        childItems << zipItem->children().at( def.layerId );
      }
    }
  }

  if ( childItems.isEmpty() )
  {
    // return true so dialog doesn't popup again (#6225) - hopefully this doesn't create other trouble
    ok = true;
  }

  // add childItems
  Q_FOREACH ( QgsDataItem* item, childItems )
  {
    QgsLayerItem *layerItem = dynamic_cast<QgsLayerItem *>( item );
    if ( !layerItem )
      continue;

    QgsDebugMsg( QString( "item path=%1 provider=%2" ).arg( item->path(), layerItem->providerKey() ) );
    if ( layerItem->providerKey() == "gdal" )
    {
      if ( addRasterLayer( item->path(), QFileInfo( item->name() ).completeBaseName() ) )
        ok = true;
    }
    else if ( layerItem->providerKey() == "ogr" )
    {
      if ( addVectorLayers( QStringList( item->path() ), "System", "file" ) )
        ok = true;
    }
  }

  zipItem->deleteLater();
  return ok;
}

// present a dialog to choose GDAL raster sublayers
void QgisApp::askUserForGDALSublayers( QgsRasterLayer *layer )
{
  if ( !layer )
    return;

  QStringList sublayers = layer->subLayers();
  QgsDebugMsg( QString( "raster has %1 sublayers" ).arg( layer->subLayers().size() ) );

  if ( sublayers.size() < 1 )
    return;

  // if promptLayers=Load all, load all sublayers without prompting
  QSettings settings;
  if ( settings.value( "/qgis/promptForRasterSublayers", 1 ).toInt() == 3 )
  {
    loadGDALSublayers( layer->source(), sublayers );
    return;
  }

  // We initialize a selection dialog and display it.
  QgsSublayersDialog chooseSublayersDialog( QgsSublayersDialog::Gdal, "gdal", this );

  QgsSublayersDialog::LayerDefinitionList layers;
  QStringList names;
  for ( int i = 0; i < sublayers.size(); i++ )
  {
    // simplify raster sublayer name - should add a function in gdal provider for this?
    // code is copied from QgsGdalLayerItem::createChildren
    QString name = sublayers[i];
    QString path = layer->source();
    // if netcdf/hdf use all text after filename
    // for hdf4 it would be best to get description, because the subdataset_index is not very practical
    if ( name.startsWith( "netcdf", Qt::CaseInsensitive ) ||
         name.startsWith( "hdf", Qt::CaseInsensitive ) )
      name = name.mid( name.indexOf( path ) + path.length() + 1 );
    else
    {
      // remove driver name and file name
      name.remove( name.split( ':' )[0] );
      name.remove( path );
    }
    // remove any : or " left over
    if ( name.startsWith( ':' ) )
      name.remove( 0, 1 );

    if ( name.startsWith( '\"' ) )
      name.remove( 0, 1 );

    if ( name.endsWith( ':' ) )
      name.chop( 1 );

    if ( name.endsWith( '\"' ) )
      name.chop( 1 );

    names << name;

    QgsSublayersDialog::LayerDefinition def;
    def.layerId = i;
    def.layerName = name;
    layers << def;
  }

  chooseSublayersDialog.populateLayerTable( layers );

  if ( chooseSublayersDialog.exec() )
  {
    // create more informative layer names, containing filename as well as sublayer name
    QRegExp rx( "\"(.*)\"" );
    QString uri, name;

    Q_FOREACH ( const QgsSublayersDialog::LayerDefinition& def, chooseSublayersDialog.selection() )
    {
      int i = def.layerId;
      if ( rx.indexIn( sublayers[i] ) != -1 )
      {
        uri = rx.cap( 1 );
        name = sublayers[i];
        name.replace( uri, QFileInfo( uri ).completeBaseName() );
      }
      else
      {
        name = names[i];
      }

      QgsRasterLayer *rlayer = new QgsRasterLayer( sublayers[i], name );
      if ( rlayer && rlayer->isValid() )
      {
        addRasterLayer( rlayer );
      }
    }
  }
}

// should the GDAL sublayers dialog should be presented to the user?
bool QgisApp::shouldAskUserForGDALSublayers( QgsRasterLayer *layer )
{
  // return false if layer is empty or raster has no sublayers
  if ( !layer || layer->providerType() != "gdal" || layer->subLayers().size() < 1 )
    return false;

  QSettings settings;
  int promptLayers = settings.value( "/qgis/promptForRasterSublayers", 1 ).toInt();
  // 0 = Always -> always ask (if there are existing sublayers)
  // 1 = If needed -> ask if layer has no bands, but has sublayers
  // 2 = Never -> never prompt, will not load anything
  // 3 = Load all -> never prompt, but load all sublayers

  return promptLayers == 0 || promptLayers == 3 || ( promptLayers == 1 && layer->bandCount() == 0 );
}

// This method will load with GDAL the layers in parameter.
// It is normally triggered by the sublayer selection dialog.
void QgisApp::loadGDALSublayers( const QString& uri, const QStringList& list )
{
  QString path, name;
  QgsRasterLayer *subLayer = nullptr;

  //add layers in reverse order so they appear in the right order in the layer dock
  for ( int i = list.size() - 1; i >= 0 ; i-- )
  {
    path = list[i];
    // shorten name by replacing complete path with filename
    name = path;
    name.replace( uri, QFileInfo( uri ).completeBaseName() );
    subLayer = new QgsRasterLayer( path, name );
    if ( subLayer )
    {
      if ( subLayer->isValid() )
        addRasterLayer( subLayer );
      else
        delete subLayer;
    }

  }
}

// This method is the method that does the real job. If the layer given in
// parameter is nullptr, then the method tries to act on the activeLayer.
void QgisApp::askUserForOGRSublayers( QgsVectorLayer *layer )
{
  if ( !layer )
  {
    layer = qobject_cast<QgsVectorLayer *>( activeLayer() );
    if ( !layer || layer->dataProvider()->name() != "ogr" )
      return;
  }

  QStringList sublayers = layer->dataProvider()->subLayers();
  QString layertype = layer->dataProvider()->storageType();

  QgsSublayersDialog::LayerDefinitionList list;
  QMap< QString, int > mapLayerNameToCount;
  bool uniqueNames = true;
  int lastLayerId = -1;
  Q_FOREACH ( const QString& sublayer, sublayers )
  {
    // OGR provider returns items in this format:
    // <layer_index>:<name>:<feature_count>:<geom_type>

    QStringList elements = sublayer.split( ":" );
    // merge back parts of the name that may have been split
    while ( elements.size() > 4 )
    {
      elements[1] += ":" + elements[2];
      elements.removeAt( 2 );
    }

    if ( elements.count() == 4 )
    {
      QgsSublayersDialog::LayerDefinition def;
      def.layerId = elements[0].toInt();
      def.layerName = elements[1];
      def.count = elements[2].toInt();
      def.type = elements[3];
      if ( lastLayerId != def.layerId )
      {
        int count = ++mapLayerNameToCount[def.layerName];
        if ( count > 1 || def.layerName.isEmpty() )
          uniqueNames = false;
        lastLayerId = def.layerId;
      }
      list << def;
    }
    else
    {
      QgsDebugMsg( "Unexpected output from OGR provider's subLayers()! " + sublayer );
    }
  }


  // We initialize a selection dialog and display it.
  QgsSublayersDialog chooseSublayersDialog( QgsSublayersDialog::Ogr, "ogr", this );
  chooseSublayersDialog.populateLayerTable( list );

  if ( !chooseSublayersDialog.exec() )
    return;

  QString uri = layer->source();
  //the separator char & was changed to | to be compatible
  //with url for protocol drivers
  if ( uri.contains( '|', Qt::CaseSensitive ) )
  {
    // If we get here, there are some options added to the filename.
    // A valid uri is of the form: filename&option1=value1&option2=value2,...
    // We want only the filename here, so we get the first part of the split.
    QStringList theURIParts = uri.split( '|' );
    uri = theURIParts.at( 0 );
  }
  QgsDebugMsg( "Layer type " + layertype );

  // The uri must contain the actual uri of the vectorLayer from which we are
  // going to load the sublayers.
  QString fileName = QFileInfo( uri ).baseName();
  QList<QgsMapLayer *> myList;
  Q_FOREACH ( const QgsSublayersDialog::LayerDefinition& def, chooseSublayersDialog.selection() )
  {
    QString layerGeometryType = def.type;
    QString composedURI = uri;
    if ( uniqueNames )
    {
      composedURI += "|layername=" + def.layerName;
    }
    else
    {
      // Only use layerId if there are ambiguities with names
      composedURI += "|layerid=" + QString::number( def.layerId );
    }

    if ( !layerGeometryType.isEmpty() )
    {
      composedURI += "|geometrytype=" + layerGeometryType;
    }

    QgsDebugMsg( "Creating new vector layer using " + composedURI );
    QString name = fileName + " " + def.layerName;
    if ( !layerGeometryType.isEmpty() )
      name += " " + layerGeometryType;
    QgsVectorLayer *layer = new QgsVectorLayer( composedURI, name, "ogr", false );
    if ( layer && layer->isValid() )
    {
      myList << layer;
    }
    else
    {
      QString msg = tr( "%1 is not a valid or recognized data source" ).arg( composedURI );
      messageBar()->pushMessage( tr( "Invalid Data Source" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );
      if ( layer )
        delete layer;
    }
  }

  if ( ! myList.isEmpty() )
  {
    // Register layer(s) with the layers registry
    QgsMapLayerRegistry::instance()->addMapLayers( myList );
    Q_FOREACH ( QgsMapLayer *l, myList )
    {
      bool ok;
      l->loadDefaultStyle( ok );
    }
  }
}

void QgisApp::addDatabaseLayer()
{
#ifdef HAVE_POSTGRESQL
  // Fudge for now
  QgsDebugMsg( "about to addRasterLayer" );

  // TODO: QDialog for now, switch to QWidget in future
  QDialog *dbs = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( "postgres", this ) );
  if ( !dbs )
  {
    QMessageBox::warning( this, tr( "PostgreSQL" ), tr( "Cannot get PostgreSQL select dialog from provider." ) );
    return;
  }
  connect( dbs, SIGNAL( addDatabaseLayers( QStringList const &, QString const & ) ),
           this, SLOT( addDatabaseLayers( QStringList const &, QString const & ) ) );
  connect( dbs, SIGNAL( progress( int, int ) ),
           this, SLOT( showProgress( int, int ) ) );
  connect( dbs, SIGNAL( progressMessage( QString ) ),
           this, SLOT( showStatusMessage( QString ) ) );
  dbs->exec();
  delete dbs;
#endif
} // QgisApp::addDatabaseLayer()

void QgisApp::addDatabaseLayers( QStringList const & layerPathList, QString const & providerKey )
{
  QList<QgsMapLayer *> myList;

  if ( layerPathList.empty() )
  {
    // no layers to add so bail out, but
    // allow mMapCanvas to handle events
    // first
    mMapCanvas->freeze( false );
    return;
  }

  mMapCanvas->freeze( true );

  QApplication::setOverrideCursor( Qt::WaitCursor );

  Q_FOREACH ( const QString& layerPath, layerPathList )
  {
    // create the layer
    QgsDataSourceURI uri( layerPath );

    QgsVectorLayer *layer = new QgsVectorLayer( uri.uri( false ), uri.table(), providerKey, false );
    Q_CHECK_PTR( layer );

    if ( ! layer )
    {
      mMapCanvas->freeze( false );
      QApplication::restoreOverrideCursor();

      // XXX insert meaningful whine to the user here
      return;
    }

    if ( layer->isValid() )
    {
      // add to list of layers to register
      //with the central layers registry
      myList << layer;
    }
    else
    {
      QgsMessageLog::logMessage( tr( "%1 is an invalid layer - not loaded" ).arg( layerPath ) );
      QLabel *msgLabel = new QLabel( tr( "%1 is an invalid layer and cannot be loaded. Please check the <a href=\"#messageLog\">message log</a> for further info." ).arg( layerPath ), messageBar() );
      msgLabel->setWordWrap( true );
      connect( msgLabel, SIGNAL( linkActivated( QString ) ), mLogDock, SLOT( show() ) );
      QgsMessageBarItem *item = new QgsMessageBarItem( msgLabel, QgsMessageBar::WARNING );
      messageBar()->pushItem( item );
      delete layer;
    }
    //qWarning("incrementing iterator");
  }

  QgsMapLayerRegistry::instance()->addMapLayers( myList );

  // load default style after adding to process readCustomSymbology signals
  Q_FOREACH ( QgsMapLayer *l, myList )
  {
    bool ok;
    l->loadDefaultStyle( ok );
  }

  // draw the map
  mMapCanvas->freeze( false );
  mMapCanvas->refresh();

  QApplication::restoreOverrideCursor();
}


void QgisApp::addSpatiaLiteLayer()
{
  // show the SpatiaLite dialog
  QDialog *dbs = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( "spatialite", this ) );
  if ( !dbs )
  {
    QMessageBox::warning( this, tr( "SpatiaLite" ), tr( "Cannot get SpatiaLite select dialog from provider." ) );
    return;
  }
  connect( dbs, SIGNAL( addDatabaseLayers( QStringList const &, QString const & ) ),
           this, SLOT( addDatabaseLayers( QStringList const &, QString const & ) ) );
  dbs->exec();
  delete dbs;
} // QgisApp::addSpatiaLiteLayer()

void QgisApp::addDelimitedTextLayer()
{
  // show the Delimited text dialog
  QDialog *dts = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( "delimitedtext", this ) );
  if ( !dts )
  {
    QMessageBox::warning( this, tr( "Delimited Text" ), tr( "Cannot get Delimited Text select dialog from provider." ) );
    return;
  }
  connect( dts, SIGNAL( addVectorLayer( QString, QString, QString ) ),
           this, SLOT( addSelectedVectorLayer( QString, QString, QString ) ) );
  dts->exec();
  delete dts;
} // QgisApp::addDelimitedTextLayer()

void QgisApp::addVirtualLayer()
{
  // show the Delimited text dialog
  QDialog *dts = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( "virtual", this ) );
  if ( !dts )
  {
    QMessageBox::warning( this, tr( "Virtual layer" ), tr( "Cannot get virtual layer select dialog from provider." ) );
    return;
  }
  connect( dts, SIGNAL( addVectorLayer( QString, QString, QString ) ),
           this, SLOT( addSelectedVectorLayer( QString, QString, QString ) ) );
  connect( dts, SIGNAL( replaceVectorLayer( QString, QString, QString, QString ) ),
           this, SLOT( replaceSelectedVectorLayer( QString, QString, QString, QString ) ) );
  dts->exec();
  delete dts;
} // QgisApp::addVirtualLayer()

void QgisApp::addSelectedVectorLayer( const QString& uri, const QString& layerName, const QString& provider )
{
  addVectorLayer( uri, layerName, provider );
} // QgisApp:addSelectedVectorLayer

void QgisApp::replaceSelectedVectorLayer( const QString& oldId, const QString& uri, const QString& layerName, const QString& provider )
{
  QgsMapLayer* old = QgsMapLayerRegistry::instance()->mapLayer( oldId );
  if ( !old )
    return;
  QgsVectorLayer* oldLayer = static_cast<QgsVectorLayer*>( old );
  QgsVectorLayer* newLayer = new QgsVectorLayer( uri, layerName, provider );
  if ( !newLayer || !newLayer->isValid() )
    return;

  QgsMapLayerRegistry::instance()->addMapLayer( newLayer, /*addToLegend*/ false, /*takeOwnership*/ true );
  duplicateVectorStyle( oldLayer, newLayer );

  // insert the new layer just below the old one
  QgsLayerTreeUtils::insertLayerBelow( QgsProject::instance()->layerTreeRoot(), oldLayer, newLayer );
  // and remove the old layer
  QgsMapLayerRegistry::instance()->removeMapLayer( oldLayer );
} // QgisApp:replaceSelectedVectorLayer

void QgisApp::addMssqlLayer()
{
  // show the MSSQL dialog
  QDialog *dbs = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( "mssql", this ) );
  if ( !dbs )
  {
    QMessageBox::warning( this, tr( "MSSQL" ), tr( "Cannot get MSSQL select dialog from provider." ) );
    return;
  }
  connect( dbs, SIGNAL( addDatabaseLayers( QStringList const &, QString const & ) ),
           this, SLOT( addDatabaseLayers( QStringList const &, QString const & ) ) );
  dbs->exec();
  delete dbs;
} // QgisApp::addMssqlLayer()

void QgisApp::addDb2Layer()
{
  // show the DB2 dialog
  QgsDebugMsg( "Show dialog for DB2 " );
  QDialog *dbs = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( "DB2", this ) );
  if ( !dbs )
  {
    QMessageBox::warning( this, tr( "DB2" ), tr( "Cannot get DB2 select dialog from provider." ) );
    return;
  }
  connect( dbs, SIGNAL( addDatabaseLayers( QStringList const &, QString const & ) ),
           this, SLOT( addDatabaseLayers( QStringList const &, QString const & ) ) );
  dbs->exec();
  delete dbs;
} // QgisApp::addDb2Layer()

void QgisApp::addOracleLayer()
{
#ifdef HAVE_ORACLE
  // show the Oracle dialog
  QDialog *dbs = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( "oracle", this ) );
  if ( !dbs )
  {
    QMessageBox::warning( this, tr( "Oracle" ), tr( "Cannot get Oracle select dialog from provider." ) );
    return;
  }
  connect( dbs, SIGNAL( addDatabaseLayers( QStringList const &, QString const & ) ),
           this, SLOT( addDatabaseLayers( QStringList const &, QString const & ) ) );
  connect( dbs, SIGNAL( progress( int, int ) ),
           this, SLOT( showProgress( int, int ) ) );
  connect( dbs, SIGNAL( progressMessage( QString ) ),
           this, SLOT( showStatusMessage( QString ) ) );
  dbs->exec();
  delete dbs;
#endif
} // QgisApp::addOracleLayer()

void QgisApp::addWmsLayer()
{
  // Fudge for now
  QgsDebugMsg( "about to addRasterLayer" );

  // TODO: QDialog for now, switch to QWidget in future
  QDialog *wmss = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( QString( "wms" ), this ) );
  if ( !wmss )
  {
    QMessageBox::warning( this, tr( "WMS" ), tr( "Cannot get WMS select dialog from provider." ) );
    return;
  }
  connect( wmss, SIGNAL( addRasterLayer( QString const &, QString const &, QString const & ) ),
           this, SLOT( addRasterLayer( QString const &, QString const &, QString const & ) ) );
  wmss->exec();
  delete wmss;
}

void QgisApp::addWcsLayer()
{
  QgsDebugMsg( "about to addWcsLayer" );

  // TODO: QDialog for now, switch to QWidget in future
  QDialog *wcss = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( QString( "wcs" ), this ) );
  if ( !wcss )
  {
    QMessageBox::warning( this, tr( "WCS" ), tr( "Cannot get WCS select dialog from provider." ) );
    return;
  }
  connect( wcss, SIGNAL( addRasterLayer( QString const &, QString const &, QString const & ) ),
           this, SLOT( addRasterLayer( QString const &, QString const &, QString const & ) ) );
  wcss->exec();
  delete wcss;
}

void QgisApp::addWfsLayer()
{
  QgsDebugMsg( "about to addWfsLayer" );

  // TODO: QDialog for now, switch to QWidget in future
  QDialog *wfss = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( QString( "WFS" ), this ) );
  if ( !wfss )
  {
    QMessageBox::warning( this, tr( "WFS" ), tr( "Cannot get WFS select dialog from provider." ) );
    return;
  }
  connect( wfss, SIGNAL( addWfsLayer( QString, QString ) ),
           this, SLOT( addWfsLayer( QString, QString ) ) );

  wfss->exec();
  delete wfss;
}

void QgisApp::addWfsLayer( const QString& uri, const QString& typeName )
{
  // TODO: this should be eventually moved to a more reasonable place
  addVectorLayer( uri, typeName, "WFS" );
}

void QgisApp::addAfsLayer()
{
  if ( !mapCanvas() )
  {
    return;
  }

  QgsDebugMsg( "about to addAfsLayer" );

  // TODO: QDialog for now, switch to QWidget in future
  QgsSourceSelectDialog *afss = dynamic_cast<QgsSourceSelectDialog*>( QgsProviderRegistry::instance()->selectWidget( "arcgisfeatureserver", this ) );
  if ( !afss )
  {
    QMessageBox::warning( this, tr( "ArcGIS Feature Server" ), tr( "Cannot get ArcGIS Feature Server select dialog from provider." ) );
    return;
  }
  afss->setCurrentExtentAndCrs( mapCanvas()->extent(), mapCanvas()->mapSettings().destinationCrs() );
  connect( afss, SIGNAL( addLayer( QString, QString ) ),
           this, SLOT( addAfsLayer( QString, QString ) ) );

  bool bkRenderFlag = mapCanvas()->renderFlag();
  mapCanvas()->setRenderFlag( false );
  afss->exec();
  mapCanvas()->setRenderFlag( bkRenderFlag );
  delete afss;
}

void QgisApp::addAfsLayer( const QString &uri, const QString &typeName )
{
  // TODO: this should be eventually moved to a more reasonable place
  addVectorLayer( uri, typeName, "arcgisfeatureserver" );
}

void QgisApp::addAmsLayer()
{
  if ( !mapCanvas() )
  {
    return;
  }

  QgsDebugMsg( "about to addAmsLayer" );

  // TODO: QDialog for now, switch to QWidget in future
  QgsSourceSelectDialog *amss = dynamic_cast<QgsSourceSelectDialog*>( QgsProviderRegistry::instance()->selectWidget( "arcgismapserver", this ) );
  if ( !amss )
  {
    QMessageBox::warning( this, tr( "ArcGIS Map Server" ), tr( "Cannot get ArcGIS Map Server select dialog from provider." ) );
    return;
  }
  amss->setCurrentExtentAndCrs( mapCanvas()->extent(), mapCanvas()->mapSettings().destinationCrs() );
  connect( amss, SIGNAL( addLayer( QString, QString ) ),
           this, SLOT( addAmsLayer( QString, QString ) ) );

  bool bkRenderFlag = mapCanvas()->renderFlag();
  mapCanvas()->setRenderFlag( false );
  amss->exec();
  mapCanvas()->setRenderFlag( bkRenderFlag );
  delete amss;
}

void QgisApp::addAmsLayer( const QString& uri, const QString& typeName )
{
  // TODO: this should be eventually moved to a more reasonable place
  addRasterLayer( uri, typeName, QString( "arcgismapserver" ) );
}

void QgisApp::fileExit()
{
  if ( saveDirty() )
  {
    closeProject();
    qApp->exit( 0 );
  }
}


void QgisApp::fileNew()
{
  fileNew( true ); // prompts whether to save project
} // fileNew()


void QgisApp::fileNewBlank()
{
  fileNew( true, true );
}


//as file new but accepts flags to indicate whether we should prompt to save
void QgisApp::fileNew( bool thePromptToSaveFlag, bool forceBlank )
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

  prj->layerTreeRegistryBridge()->setNewLayersVisible( settings.value( "/qgis/new_layers_visible", true ).toBool() );

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

  setTitleBarText_( *this );

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
  mMapCanvas->setCrsTransformEnabled( settings.value( "/Projections/otfTransformEnabled", 0 ).toBool() );

  updateCRSStatusBar();

  /** New Empty Project Created
      (before attempting to load custom project templates/filepaths) */

  // load default template
  /* NOTE: don't open default template on launch until after initialization,
           in case a project was defined via command line */

  // don't open template if last auto-opening of a project failed
  if ( ! forceBlank )
  {
    forceBlank = ! settings.value( "/qgis/projOpenedOKAtLaunch", QVariant( true ) ).toBool();
  }

  if ( ! forceBlank && settings.value( "/qgis/newProjectDefault", QVariant( false ) ).toBool() )
  {
    fileNewFromDefaultTemplate();
  }

  // set the initial map tool
#ifndef HAVE_TOUCH
  mMapCanvas->setMapTool( mMapTools.mPan );
  mNonEditMapTool = mMapTools.mPan;  // signals are not yet setup to catch this
#else
  mMapCanvas->setMapTool( mMapTools.mTouch );
  mNonEditMapTool = mMapTools.mTouch;  // signals are not yet setup to catch this
#endif

} // QgisApp::fileNew(bool thePromptToSaveFlag)

bool QgisApp::fileNewFromTemplate( const QString& fileName )
{
  if ( !saveDirty() )
  {
    return false; //cancel pressed
  }

  QgsDebugMsg( QString( "loading project template: %1" ).arg( fileName ) );
  if ( addProject( fileName ) )
  {
    // set null filename so we don't override the template
    QgsProject::instance()->setFileName( QString() );
    return true;
  }
  return false;
}

void QgisApp::fileNewFromDefaultTemplate()
{
  QString projectTemplate = QgsApplication::qgisSettingsDirPath() + QLatin1String( "project_default.qgs" );
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

void QgisApp::fileOpenAfterLaunch()
{
  // TODO: move auto-open project options to enums

  // check if a project is already loaded via command line or filesystem
  if ( !QgsProject::instance()->fileName().isNull() )
  {
    return;
  }

  // check if a data source is already loaded via command line or filesystem
  // empty project with layer loaded, but may not trigger a dirty project at this point
  if ( QgsProject::instance() && QgsMapLayerRegistry::instance()->count() > 0 )
  {
    return;
  }

  // fileNewBlank() has already been called in QgisApp constructor
  // loaded project is either a new blank one, or one from command line/filesystem
  QSettings settings;
  QString autoOpenMsgTitle = tr( "Auto-open Project" );

  // get path of project file to open, or was attempted
  QString projPath;

  if ( mProjOpen == 0 ) // welcome page
  {
    connect( this, SIGNAL( newProject() ), this, SLOT( showMapCanvas() ) );
    connect( this, SIGNAL( projectRead() ), this, SLOT( showMapCanvas() ) );
    return;
  }
  if ( mProjOpen == 1 && !mRecentProjects.isEmpty() ) // most recent project
  {
    projPath = mRecentProjects.at( 0 ).path;
  }
  if ( mProjOpen == 2 ) // specific project
  {
    projPath = settings.value( "/qgis/projOpenAtLaunchPath" ).toString();
  }

  // whether last auto-opening of a project failed
  bool projOpenedOK = settings.value( "/qgis/projOpenedOKAtLaunch", QVariant( true ) ).toBool();

  // notify user if last attempt at auto-opening a project failed
  /** NOTE: Notification will not show if last auto-opened project failed but
      next project opened is from command line (minor issue) */
  /** TODO: Keep projOpenedOKAtLaunch from being reset to true after
      reading command line project (which happens before initialization signal) */
  if ( !projOpenedOK )
  {
    // only show the following 'auto-open project failed' message once, at launch
    settings.setValue( "/qgis/projOpenedOKAtLaunch", QVariant( true ) );

    // set auto-open project back to 'New' to avoid re-opening bad project
    settings.setValue( "/qgis/projOpenAtLaunch", QVariant( 0 ) );

    messageBar()->pushMessage( autoOpenMsgTitle,
                               tr( "Failed to open: %1" ).arg( projPath ),
                               QgsMessageBar::CRITICAL );
    return;
  }

  if ( mProjOpen == 3 ) // new project
  {
    // open default template, if defined
    if ( settings.value( "/qgis/newProjectDefault", QVariant( false ) ).toBool() )
    {
      fileNewFromDefaultTemplate();
    }
    return;
  }

  if ( projPath.isEmpty() ) // projPath required from here
  {
    return;
  }

  if ( !projPath.endsWith( QLatin1String( "qgs" ), Qt::CaseInsensitive ) )
  {
    messageBar()->pushMessage( autoOpenMsgTitle,
                               tr( "Not valid project file: %1" ).arg( projPath ),
                               QgsMessageBar::WARNING );
    return;
  }

  if ( QFile::exists( projPath ) )
  {
    // set flag to check on next app launch if the following project opened OK
    settings.setValue( "/qgis/projOpenedOKAtLaunch", QVariant( false ) );

    if ( !addProject( projPath ) )
    {
      messageBar()->pushMessage( autoOpenMsgTitle,
                                 tr( "Project failed to open: %1" ).arg( projPath ),
                                 QgsMessageBar::WARNING );
    }

    if ( projPath.endsWith( QLatin1String( "project_default.qgs" ) ) )
    {
      messageBar()->pushMessage( autoOpenMsgTitle,
                                 tr( "Default template has been reopened: %1" ).arg( projPath ),
                                 QgsMessageBar::INFO );
    }
  }
  else
  {
    messageBar()->pushMessage( autoOpenMsgTitle,
                               tr( "File not found: %1" ).arg( projPath ),
                               QgsMessageBar::WARNING );
  }
}

void QgisApp::fileOpenedOKAfterLaunch()
{
  QSettings settings;
  settings.setValue( "/qgis/projOpenedOKAtLaunch", QVariant( true ) );
}

void QgisApp::fileNewFromTemplateAction( QAction * qAction )
{
  if ( ! qAction )
    return;

  if ( qAction->text() == tr( "< Blank >" ) )
  {
    fileNewBlank();
  }
  else
  {
    QSettings settings;
    QString templateDirName = settings.value( "/qgis/projectTemplateDir",
                              QgsApplication::qgisSettingsDirPath() + "project_templates" ).toString();
    fileNewFromTemplate( templateDirName + QDir::separator() + qAction->text() );
  }
}


void QgisApp::newVectorLayer()
{
  QString enc;
  QString fileName = QgsNewVectorLayerDialog::runAndCreateLayer( this, &enc );

  if ( !fileName.isEmpty() )
  {
    //then add the layer to the view
    QStringList fileNames;
    fileNames.append( fileName );
    //todo: the last parameter will change accordingly to layer type
    addVectorLayers( fileNames, enc, "file" );
  }
  else if ( fileName.isNull() )
  {
    QLabel *msgLabel = new QLabel( tr( "Layer creation failed. Please check the <a href=\"#messageLog\">message log</a> for further information." ), messageBar() );
    msgLabel->setWordWrap( true );
    connect( msgLabel, SIGNAL( linkActivated( QString ) ), mLogDock, SLOT( show() ) );
    QgsMessageBarItem *item = new QgsMessageBarItem( msgLabel, QgsMessageBar::WARNING );
    messageBar()->pushItem( item );
  }
}

void QgisApp::newMemoryLayer()
{
  QgsVectorLayer* newLayer = QgsNewMemoryLayerDialog::runAndCreateLayer( this );

  if ( newLayer )
  {
    //then add the layer to the view
    QList< QgsMapLayer* > layers;
    layers << newLayer;

    QgsMapLayerRegistry::instance()->addMapLayers( layers );
    newLayer->startEditing();
  }
}

void QgisApp::newSpatialiteLayer()
{
  QgsNewSpatialiteLayerDialog spatialiteDialog( this );
  spatialiteDialog.exec();
}

void QgisApp::newGeoPackageLayer()
{
  QgsNewGeoPackageLayerDialog dialog( this );
  dialog.exec();
}

void QgisApp::showRasterCalculator()
{
  QgsRasterCalcDialog d( this );
  if ( d.exec() == QDialog::Accepted )
  {
    //invoke analysis library
    QgsRasterCalculator rc( d.formulaString(), d.outputFile(), d.outputFormat(), d.outputRectangle(), d.outputCrs(), d.numberOfColumns(), d.numberOfRows(), d.rasterEntries() );

    QProgressDialog p( tr( "Calculating..." ), tr( "Abort..." ), 0, 0 );
    p.setWindowModality( Qt::WindowModal );
    QgsRasterCalculator::Result res = static_cast< QgsRasterCalculator::Result >( rc.processCalculation( &p ) );
    switch ( res )
    {
      case QgsRasterCalculator::Success:
        if ( d.addLayerToProject() )
        {
          addRasterLayer( d.outputFile(), QFileInfo( d.outputFile() ).baseName() );
        }
        messageBar()->pushMessage( tr( "Raster calculator" ),
                                   tr( "Calculation complete." ),
                                   QgsMessageBar::INFO, messageTimeout() );
        break;

      case QgsRasterCalculator::CreateOutputError:
        messageBar()->pushMessage( tr( "Raster calculator" ),
                                   tr( "Could not create destination file." ),
                                   QgsMessageBar::CRITICAL );
        break;

      case QgsRasterCalculator::InputLayerError:
        messageBar()->pushMessage( tr( "Raster calculator" ),
                                   tr( "Could not read input layer." ),
                                   QgsMessageBar::CRITICAL );
        break;

      case QgsRasterCalculator::Cancelled:
        break;

      case QgsRasterCalculator::ParserError:
        messageBar()->pushMessage( tr( "Raster calculator" ),
                                   tr( "Could not parse raster formula." ),
                                   QgsMessageBar::CRITICAL );
        break;

      case QgsRasterCalculator::MemoryError:
        messageBar()->pushMessage( tr( "Raster calculator" ),
                                   tr( "Insufficient memory available for operation." ),
                                   QgsMessageBar::CRITICAL );
        break;

    }
  }
}


void QgisApp::showAlignRasterTool()
{
  QgsAlignRasterDialog dlg( this );
  dlg.exec();
}


void QgisApp::fileOpen()
{
  // possibly save any pending work before opening a new project
  if ( saveDirty() )
  {
    // Retrieve last used project dir from persistent settings
    QSettings settings;
    QString lastUsedDir = settings.value( "/UI/lastProjectDir", QDir::homePath() ).toString();
    QString fullPath = QFileDialog::getOpenFileName( this,
                       tr( "Choose a QGIS project file to open" ),
                       lastUsedDir,
                       tr( "QGIS files" ) + " (*.qgs *.QGS)" );
    if ( fullPath.isNull() )
    {
      return;
    }

    // Fix by Tim - getting the dirPath from the dialog
    // directly truncates the last node in the dir path.
    // This is a workaround for that
    QFileInfo myFI( fullPath );
    QString myPath = myFI.path();
    // Persist last used project dir
    settings.setValue( "/UI/lastProjectDir", myPath );

    // open the selected project
    addProject( fullPath );
  }
} // QgisApp::fileOpen

void QgisApp::enableProjectMacros()
{
  mTrustedMacros = true;

  // load macros
  QgsPythonRunner::run( "qgis.utils.reloadProjectMacros()" );
}

/**
  adds a saved project to qgis, usually called on startup by specifying a
  project file on the command line
  */
bool QgisApp::addProject( const QString& projectFile )
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

  setTitleBarText_( *this );
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
} // QgisApp::addProject(QString projectFile)



bool QgisApp::fileSave()
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
    setTitleBarText_( *this ); // update title bar
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
} // QgisApp::fileSave

void QgisApp::fileSaveAs()
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
    setTitleBarText_( *this ); // update title bar
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
} // QgisApp::fileSaveAs

void QgisApp::dxfExport()
{
  QgsDxfExportDialog d;
  if ( d.exec() == QDialog::Accepted )
  {
    QgsDxfExport dxfExport;
    QgsMapSettings settings( mapCanvas()->mapSettings() );
    settings.setLayerStyleOverrides( QgsProject::instance()->visibilityPresetCollection()->presetStyleOverrides( d.mapTheme() ) );
    dxfExport.setMapSettings( settings );
    dxfExport.addLayers( d.layers() );
    dxfExport.setSymbologyScaleDenominator( d.symbologyScale() );
    dxfExport.setSymbologyExport( d.symbologyMode() );
    dxfExport.setLayerTitleAsName( d.layerTitleAsName() );
    dxfExport.setDestinationCrs( d.crs() );
    dxfExport.setForce2d( d.force2d() );
    if ( mapCanvas() )
    {
      dxfExport.setMapUnits( mapCanvas()->mapUnits() );
      //extent
      if ( d.exportMapExtent() )
      {
        QgsCoordinateTransform t( mapCanvas()->mapSettings().destinationCrs(), QgsCoordinateReferenceSystem( d.crs(), QgsCoordinateReferenceSystem::InternalCrsId ) );
        dxfExport.setExtent( t.transformBoundingBox( mapCanvas()->extent() ) );
      }
    }

    QString fileName( d.saveFile() );
    if ( !fileName.endsWith( ".dxf", Qt::CaseInsensitive ) )
      fileName += ".dxf";
    QFile dxfFile( fileName );
    QApplication::setOverrideCursor( Qt::BusyCursor );
    if ( dxfExport.writeToFile( &dxfFile, d.encoding() ) == 0 )
    {
      messageBar()->pushMessage( tr( "DXF export completed" ), QgsMessageBar::INFO, 4 );
    }
    else
    {
      messageBar()->pushMessage( tr( "DXF export failed" ), QgsMessageBar::CRITICAL, 4 );
    }
    QApplication::restoreOverrideCursor();
  }
}

/*
void QgisApp::dwgImport()
{
  QgsDwgImportDialog d;
  d.exec();
}
*/

void QgisApp::openLayerDefinition( const QString & path )
{
  QString errorMessage;
  bool loaded = QgsLayerDefinition::loadLayerDefinition( path, QgsProject::instance()->layerTreeRoot(), errorMessage );
  if ( !loaded )
  {
    QgsDebugMsg( errorMessage );
    messageBar()->pushMessage( tr( "Error loading layer definition" ), errorMessage, QgsMessageBar::WARNING );
  }
}

// Open the project file corresponding to the
// path at the given index in mRecentProjectPaths
void QgisApp::openProject( QAction *action )
{
  // possibly save any pending work before opening a different project
  Q_ASSERT( action );

  QString debugme = action->data().toString();
  if ( saveDirty() )
    addProject( debugme );

  //set the projections enabled icon in the status bar
  int myProjectionEnabledFlag =
    QgsProject::instance()->readNumEntry( "SpatialRefSys", "/ProjectionsEnabled", 0 );
  mMapCanvas->setCrsTransformEnabled( myProjectionEnabledFlag );
}

void QgisApp::runScript( const QString &filePath )
{
  if ( !mPythonUtils || !mPythonUtils->isEnabled() )
    return;

  mPythonUtils->runString(
    QString( "import sys\n"
             "execfile(\"%1\".replace(\"\\\\\", \"/\").encode(sys.getfilesystemencoding()))\n" ).arg( filePath )
    , tr( "Failed to run Python script:" ), false );
}


/**
  Open the specified project file; prompt to save previous project if necessary.
  Used to process a commandline argument or OpenDocument AppleEvent.
  */
void QgisApp::openProject( const QString & fileName )
{
  // possibly save any pending work before opening a different project
  if ( saveDirty() )
  {
    // error handling and reporting is in addProject() function
    addProject( fileName );
  }
  return;
}

/**
  Open a raster or vector file; ignore other files.
  Used to process a commandline argument or OpenDocument AppleEvent.
  @returns true if the file is successfully opened
  */
bool QgisApp::openLayer( const QString & fileName, bool allowInteractive )
{
  QFileInfo fileInfo( fileName );
  bool ok( false );

  CPLPushErrorHandler( CPLQuietErrorHandler );

  // if needed prompt for zipitem layers
  QString vsiPrefix = QgsZipItem::vsiPrefix( fileName );
  if ( vsiPrefix == "/vsizip/" || vsiPrefix == "/vsitar/" )
  {
    if ( askUserForZipItemLayers( fileName ) )
    {
      CPLPopErrorHandler();
      return true;
    }
  }

  // try to load it as raster
  if ( QgsRasterLayer::isValidRasterFileName( fileName ) )
  {
    // open .adf as a directory
    if ( fileName.endsWith( ".adf", Qt::CaseInsensitive ) )
    {
      QString dirName = fileInfo.path();
      ok  = addRasterLayer( dirName, QFileInfo( dirName ).completeBaseName() );
    }
    else
      ok  = addRasterLayer( fileName, fileInfo.completeBaseName() );
  }
  // TODO - should we really call isValidRasterFileName() before addRasterLayer()
  //        this results in 2 calls to GDALOpen()
  // I think (Radim) that it is better to test only first if valid,
  // addRasterLayer() is really trying to add layer and gives error if fails
  //
  // if ( addRasterLayer( fileName, fileInfo.completeBaseName() ) )
  // {
  //   ok  = true );
  // }
  else // nope - try to load it as a shape/ogr
  {
    if ( allowInteractive )
    {
      ok = addVectorLayers( QStringList( fileName ), "System", "file" );
    }
    else
    {
      ok = addVectorLayer( fileName, fileInfo.completeBaseName(), "ogr" );
    }
  }

  CPLPopErrorHandler();

  if ( !ok )
  {
    // we have no idea what this file is...
    QgsMessageLog::logMessage( tr( "Unable to load %1" ).arg( fileName ) );
  }

  return ok;
}


// Open a file specified by a commandline argument, Drop or FileOpen event.
void QgisApp::openFile( const QString & fileName )
{
  // check to see if we are opening a project file
  QFileInfo fi( fileName );
  if ( fi.completeSuffix() == "qgs" )
  {
    QgsDebugMsg( "Opening project " + fileName );
    openProject( fileName );
  }
  else if ( fi.completeSuffix() == "qlr" )
  {
    openLayerDefinition( fileName );
  }
  else if ( fi.completeSuffix() == "py" )
  {
    runScript( fileName );
  }
  else
  {
    QgsDebugMsg( "Adding " + fileName + " to the map canvas" );
    openLayer( fileName, true );
  }
}


void QgisApp::newPrintComposer()
{
  QString title;
  if ( !uniqueComposerTitle( this, title, true ) )
  {
    return;
  }
  createNewComposer( title );
}

void QgisApp::showComposerManager()
{
  if ( !mComposerManager )
  {
    mComposerManager = new QgsComposerManager( nullptr, Qt::Window );
    connect( mComposerManager, SIGNAL( finished( int ) ), this, SLOT( deleteComposerManager() ) );
  }
  mComposerManager->show();
  mComposerManager->activate();
}

void QgisApp::deleteComposerManager()
{
  mComposerManager->deleteLater();
  mComposerManager = nullptr;
}

void QgisApp::disablePreviewMode()
{
  mMapCanvas->setPreviewModeEnabled( false );
}

void QgisApp::activateGrayscalePreview()
{
  mMapCanvas->setPreviewModeEnabled( true );
  mMapCanvas->setPreviewMode( QgsPreviewEffect::PreviewGrayscale );
}

void QgisApp::activateMonoPreview()
{
  mMapCanvas->setPreviewModeEnabled( true );
  mMapCanvas->setPreviewMode( QgsPreviewEffect::PreviewMono );
}

void QgisApp::activateProtanopePreview()
{
  mMapCanvas->setPreviewModeEnabled( true );
  mMapCanvas->setPreviewMode( QgsPreviewEffect::PreviewProtanope );
}

void QgisApp::activateDeuteranopePreview()
{
  mMapCanvas->setPreviewModeEnabled( true );
  mMapCanvas->setPreviewMode( QgsPreviewEffect::PreviewDeuteranope );
}

void QgisApp::toggleFilterLegendByExpression( bool checked )
{
  QgsLayerTreeNode* node = mLayerTreeView->currentNode();
  if ( ! node )
    return;

  if ( QgsLayerTree::isLayer( node ) )
  {
    QString e = mLegendExpressionFilterButton->expressionText();
    QgsLayerTreeUtils::setLegendFilterByExpression( *QgsLayerTree::toLayer( node ), e, checked );
  }

  updateFilterLegend();
}

void QgisApp::updateFilterLegend()
{
  bool hasExpressions = mLegendExpressionFilterButton->isChecked() && QgsLayerTreeUtils::hasLegendFilterExpression( *mLayerTreeView->layerTreeModel()->rootGroup() );
  if ( mActionFilterLegend->isChecked() || hasExpressions )
  {
    layerTreeView()->layerTreeModel()->setLegendFilter( &mMapCanvas->mapSettings(),
        /* useExtent */ mActionFilterLegend->isChecked(),
        /* polygon */ QgsGeometry(),
        hasExpressions );
  }
  else
  {
    layerTreeView()->layerTreeModel()->setLegendFilterByMap( nullptr );
  }
}

void QgisApp::saveMapAsImage()
{
  QPair< QString, QString> myFileNameAndFilter = QgisGui::getSaveAsImageName( this, tr( "Choose a file name to save the map image as" ) );
  if ( myFileNameAndFilter.first != "" )
  {
    //save the mapview to the selected file
    mMapCanvas->saveAsImage( myFileNameAndFilter.first, nullptr, myFileNameAndFilter.second );
    statusBar()->showMessage( tr( "Saved map image to %1" ).arg( myFileNameAndFilter.first ) );
  }

} // saveMapAsImage

//overloaded version of the above function
void QgisApp::saveMapAsImage( const QString& theImageFileNameQString, QPixmap * theQPixmap )
{
  if ( theImageFileNameQString == "" )
  {
    //no fileName chosen
    return;
  }
  else
  {
    //force the size of the canvase
    mMapCanvas->resize( theQPixmap->width(), theQPixmap->height() );
    //save the mapview to the selected file
    mMapCanvas->saveAsImage( theImageFileNameQString, theQPixmap );
  }
} // saveMapAsImage

//reimplements method from base (gui) class
void QgisApp::addAllToOverview()
{
  if ( mLayerTreeView )
  {
    Q_FOREACH ( QgsLayerTreeLayer* nodeL, mLayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
      nodeL->setCustomProperty( "overview", 1 );
  }

  markDirty();
}

//reimplements method from base (gui) class
void QgisApp::removeAllFromOverview()
{
  if ( mLayerTreeView )
  {
    Q_FOREACH ( QgsLayerTreeLayer* nodeL, mLayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
      nodeL->setCustomProperty( "overview", 0 );
  }

  markDirty();
}

void QgisApp::toggleFullScreen()
{
  if ( mFullScreenMode )
  {
    if ( mPrevScreenModeMaximized )
    {
      // Change to maximized state. Just calling showMaximized() results in
      // the window going to the normal state. Calling showNormal() then
      // showMaxmized() is a work-around. Turn off rendering for this as it
      // would otherwise cause two re-renders of the map, which can take a
      // long time.
      bool renderFlag = mapCanvas()->renderFlag();
      if ( renderFlag )
        mapCanvas()->setRenderFlag( false );
      showNormal();
      showMaximized();
      if ( renderFlag )
        mapCanvas()->setRenderFlag( true );
      mPrevScreenModeMaximized = false;
    }
    else
    {
      showNormal();
    }
    mFullScreenMode = false;
  }
  else
  {
    if ( isMaximized() )
    {
      mPrevScreenModeMaximized = true;
    }
    showFullScreen();
    mFullScreenMode = true;
  }
}

void QgisApp::showActiveWindowMinimized()
{
  QWidget *window = QApplication::activeWindow();
  if ( window )
  {
    window->showMinimized();
  }
}

void QgisApp::toggleActiveWindowMaximized()
{
  QWidget *window = QApplication::activeWindow();
  if ( window )
  {
    if ( window->isMaximized() )
      window->showNormal();
    else
      window->showMaximized();
  }
}

void QgisApp::activate()
{
  raise();
  setWindowState( windowState() & ~Qt::WindowMinimized );
  activateWindow();
}

void QgisApp::bringAllToFront()
{
#ifdef Q_OS_MAC
  // Bring forward all open windows while maintaining layering order
  ProcessSerialNumber psn;
  GetCurrentProcess( &psn );
  SetFrontProcess( &psn );
#endif
}

void QgisApp::addWindow( QAction *action )
{
#ifdef Q_OS_MAC
  mWindowActions->addAction( action );
  mWindowMenu->addAction( action );
  action->setCheckable( true );
  action->setChecked( true );
#else
  Q_UNUSED( action );
#endif
}

void QgisApp::removeWindow( QAction *action )
{
#ifdef Q_OS_MAC
  mWindowActions->removeAction( action );
  mWindowMenu->removeAction( action );
#else
  Q_UNUSED( action );
#endif
}

void QgisApp::stopRendering()
{
  if ( mMapCanvas )
    mMapCanvas->stopRendering();
}

//reimplements method from base (gui) class
void QgisApp::hideAllLayers()
{
  QgsDebugMsg( "hiding all layers!" );

  Q_FOREACH ( QgsLayerTreeLayer* nodeLayer, mLayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
    nodeLayer->setVisible( Qt::Unchecked );
}


// reimplements method from base (gui) class
void QgisApp::showAllLayers()
{
  QgsDebugMsg( "Showing all layers!" );

  Q_FOREACH ( QgsLayerTreeLayer* nodeLayer, mLayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
    nodeLayer->setVisible( Qt::Checked );
}

//reimplements method from base (gui) class
void QgisApp::hideSelectedLayers()
{
  QgsDebugMsg( "hiding selected layers!" );

  Q_FOREACH ( QgsLayerTreeNode* node, mLayerTreeView->selectedNodes() )
  {
    if ( QgsLayerTree::isGroup( node ) )
      QgsLayerTree::toGroup( node )->setVisible( Qt::Unchecked );
    else if ( QgsLayerTree::isLayer( node ) )
      QgsLayerTree::toLayer( node )->setVisible( Qt::Unchecked );
  }
}


// reimplements method from base (gui) class
void QgisApp::showSelectedLayers()
{
  QgsDebugMsg( "show selected layers!" );

  Q_FOREACH ( QgsLayerTreeNode* node, mLayerTreeView->selectedNodes() )
  {
    if ( QgsLayerTree::isGroup( node ) )
      QgsLayerTree::toGroup( node )->setVisible( Qt::Checked );
    else if ( QgsLayerTree::isLayer( node ) )
      QgsLayerTree::toLayer( node )->setVisible( Qt::Checked );
  }
}


void QgisApp::zoomIn()
{
  QgsDebugMsg( "Setting map tool to zoomIn" );

  mMapCanvas->setMapTool( mMapTools.mZoomIn );
}


void QgisApp::zoomOut()
{
  mMapCanvas->setMapTool( mMapTools.mZoomOut );
}

void QgisApp::zoomToSelected()
{
  mMapCanvas->zoomToSelected();
}

void QgisApp::panToSelected()
{
  mMapCanvas->panToSelected();
}

void QgisApp::pan()
{
  mMapCanvas->setMapTool( mMapTools.mPan );
}

#ifdef HAVE_TOUCH
void QgisApp::touch()
{
  mMapCanvas->setMapTool( mMapTools.mTouch );
}
#endif

void QgisApp::zoomFull()
{
  mMapCanvas->zoomToFullExtent();
}

void QgisApp::zoomToPrevious()
{
  mMapCanvas->zoomToPreviousExtent();
}

void QgisApp::zoomToNext()
{
  mMapCanvas->zoomToNextExtent();
}

void QgisApp::zoomActualSize()
{
  legendLayerZoomNative();
}

void QgisApp::identify()
{
  mMapCanvas->setMapTool( mMapTools.mIdentify );
}

void QgisApp::doFeatureAction()
{
  mMapCanvas->setMapTool( mMapTools.mFeatureAction );
}

void QgisApp::updateDefaultFeatureAction( QAction *action )
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( activeLayer() );
  if ( !vlayer )
    return;

  mActionFeatureAction->setIcon( QgsApplication::getThemeIcon( "/mAction.svg" ) );
  mActionFeatureAction->setToolTip( tr( "No action selected" ) );

  mFeatureActionMenu->setActiveAction( action );

  int index = mFeatureActionMenu->actions().indexOf( action );

  if ( vlayer->actions()->size() > 0 && index < vlayer->actions()->size() )
  {
    vlayer->actions()->setDefaultAction( index );
    QgsMapLayerActionRegistry::instance()->setDefaultActionForLayer( vlayer, nullptr );

    if ( index == -1 )
      index = 0;
    QgsAction a = vlayer->actions()->listActions().at( index );

    if ( !a.name().isEmpty() )
      mActionFeatureAction->setToolTip( tr( "Run feature action<br><b>%1</b>" ).arg( a.name() ) );
    else if ( !a.shortTitle().isEmpty() )
      mActionFeatureAction->setToolTip( tr( "Run feature action<br><b>%1</b>" ).arg( a.shortTitle() ) );

    if ( !a.icon().isNull() )
      mActionFeatureAction->setIcon( a.icon() );
  }
  else
  {
    //action is from QgsMapLayerActionRegistry
    vlayer->actions()->setDefaultAction( -1 );

    QgsMapLayerAction * mapLayerAction = dynamic_cast<QgsMapLayerAction *>( action );
    if ( mapLayerAction )
    {
      QgsMapLayerActionRegistry::instance()->setDefaultActionForLayer( vlayer, mapLayerAction );

      if ( !mapLayerAction->text().isEmpty() )
        mActionFeatureAction->setToolTip( tr( "Run feature action<br><b>%1</b>" ).arg( mapLayerAction->text() ) );

      if ( !mapLayerAction->icon().isNull() )
        mActionFeatureAction->setIcon( mapLayerAction->icon() );
    }
    else
    {
      QgsMapLayerActionRegistry::instance()->setDefaultActionForLayer( vlayer, nullptr );
    }
  }
}

void QgisApp::refreshFeatureActions()
{
  mFeatureActionMenu->clear();

  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( activeLayer() );
  if ( !vlayer )
    return;

  QgsActionManager *actions = vlayer->actions();
  for ( int i = 0; i < actions->size(); i++ )
  {
    QAction *action = mFeatureActionMenu->addAction( actions->at( i ).icon(), actions->at( i ).name() );
    if ( i == actions->defaultAction() )
    {
      mFeatureActionMenu->setActiveAction( action );
    }
  }

  //add actions registered in QgsMapLayerActionRegistry
  QList<QgsMapLayerAction *> registeredActions = QgsMapLayerActionRegistry::instance()->mapLayerActions( vlayer );
  if ( actions->size() > 0 && registeredActions.size() > 0 )
  {
    //add a separator between user defined and standard actions
    mFeatureActionMenu->addSeparator();
  }

  for ( int i = 0; i < registeredActions.size(); i++ )
  {
    mFeatureActionMenu->addAction( registeredActions.at( i ) );
    if ( registeredActions.at( i ) == QgsMapLayerActionRegistry::instance()->defaultActionForLayer( vlayer ) )
    {
      mFeatureActionMenu->setActiveAction( registeredActions.at( i ) );
    }
  }

  updateDefaultFeatureAction( mFeatureActionMenu->activeAction() );
}

void QgisApp::measure()
{
  mMapCanvas->setMapTool( mMapTools.mMeasureDist );
}

void QgisApp::measureArea()
{
  mMapCanvas->setMapTool( mMapTools.mMeasureArea );
}

void QgisApp::measureAngle()
{
  mMapCanvas->setMapTool( mMapTools.mMeasureAngle );
}

void QgisApp::addFormAnnotation()
{
  mMapCanvas->setMapTool( mMapTools.mFormAnnotation );
}

void QgisApp::addHtmlAnnotation()
{
  mMapCanvas->setMapTool( mMapTools.mHtmlAnnotation );
}

void QgisApp::addTextAnnotation()
{
  mMapCanvas->setMapTool( mMapTools.mTextAnnotation );
}

void QgisApp::addSvgAnnotation()
{
  mMapCanvas->setMapTool( mMapTools.mSvgAnnotation );
}

void QgisApp::modifyAnnotation()
{
  mMapCanvas->setMapTool( mMapTools.mAnnotation );
}

void QgisApp::reprojectAnnotations()
{
  Q_FOREACH ( QgsAnnotationItem * annotation, annotationItems() )
  {
    annotation->updatePosition();
  }
}

void QgisApp::labelingFontNotFound( QgsVectorLayer* vlayer, const QString& fontfamily )
{
  // TODO: update when pref for how to resolve missing family (use matching algorithm or just default font) is implemented
  QString substitute = tr( "Default system font substituted." );

  QToolButton* btnOpenPrefs = new QToolButton();
  btnOpenPrefs->setStyleSheet( "QToolButton{ background-color: rgba(255, 255, 255, 0); color: black; text-decoration: underline; }" );
  btnOpenPrefs->setCursor( Qt::PointingHandCursor );
  btnOpenPrefs->setSizePolicy( QSizePolicy::Maximum, QSizePolicy::Preferred );
  btnOpenPrefs->setToolButtonStyle( Qt::ToolButtonTextOnly );

  // store pointer to vlayer in data of QAction
  QAction* act = new QAction( btnOpenPrefs );
  act->setData( QVariant( QMetaType::QObjectStar, &vlayer ) );
  act->setText( tr( "Open labeling dialog" ) );
  btnOpenPrefs->addAction( act );
  btnOpenPrefs->setDefaultAction( act );
  btnOpenPrefs->setToolTip( "" );
  connect( btnOpenPrefs, SIGNAL( triggered( QAction* ) ), this, SLOT( labelingDialogFontNotFound( QAction* ) ) );

  // no timeout set, since notice needs attention and is only shown first time layer is labeled
  QgsMessageBarItem* fontMsg = new QgsMessageBarItem(
    tr( "Labeling" ),
    tr( "Font for layer <b><u>%1</u></b> was not found (<i>%2</i>). %3" ).arg( vlayer->name(), fontfamily, substitute ),
    btnOpenPrefs,
    QgsMessageBar::WARNING,
    0,
    messageBar() );
  messageBar()->pushItem( fontMsg );
}

void QgisApp::commitError( QgsVectorLayer* vlayer )
{
  QgsMessageViewer *mv = new QgsMessageViewer();
  mv->setWindowTitle( tr( "Commit errors" ) );
  mv->setMessageAsPlainText( tr( "Could not commit changes to layer %1" ).arg( vlayer->name() )
                             + "\n\n"
                             + tr( "Errors: %1\n" ).arg( vlayer->commitErrors().join( "\n  " ) )
                           );

  QToolButton *showMore = new QToolButton();
  // store pointer to vlayer in data of QAction
  QAction *act = new QAction( showMore );
  act->setData( QVariant( QMetaType::QObjectStar, &vlayer ) );
  act->setText( tr( "Show more" ) );
  showMore->setStyleSheet( "background-color: rgba(255, 255, 255, 0); color: black; text-decoration: underline;" );
  showMore->setCursor( Qt::PointingHandCursor );
  showMore->setSizePolicy( QSizePolicy::Maximum, QSizePolicy::Preferred );
  showMore->addAction( act );
  showMore->setDefaultAction( act );
  connect( showMore, SIGNAL( triggered( QAction* ) ), mv, SLOT( exec() ) );
  connect( showMore, SIGNAL( triggered( QAction* ) ), showMore, SLOT( deleteLater() ) );

  // no timeout set, since notice needs attention and is only shown first time layer is labeled
  QgsMessageBarItem *errorMsg = new QgsMessageBarItem(
    tr( "Commit errors" ),
    tr( "Could not commit changes to layer %1" ).arg( vlayer->name() ),
    showMore,
    QgsMessageBar::WARNING,
    0,
    messageBar() );
  messageBar()->pushItem( errorMsg );
}

void QgisApp::labelingDialogFontNotFound( QAction* act )
{
  if ( !act )
  {
    return;
  }

  // get base pointer to layer
  QObject* obj = qvariant_cast<QObject*>( act->data() );

  // remove calling messagebar widget
  messageBar()->popWidget();

  if ( !obj )
  {
    return;
  }

  QgsMapLayer* layer = qobject_cast<QgsMapLayer*>( obj );
  if ( layer && setActiveLayer( layer ) )
  {
    labeling();
  }
}

void QgisApp::labeling()
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>( activeLayer() );
  if ( !vlayer )
  {
    return;
  }

  mapStyleDock( true );
  mMapStyleWidget->setCurrentPage( QgsLayerStylingWidget::VectorLabeling );
}

void QgisApp::setMapStyleDockLayer( QgsMapLayer* layer )
{
  if ( !layer )
  {
    return;
  }

  mMapStyleWidget->setEnabled( true );
  // We don't set the layer if the dock isn't open mainly to save
  // the extra work if it's not needed
  if ( mMapStylingDock->isVisible() )
  {
    mMapStyleWidget->setLayer( layer );
  }
}

void QgisApp::mapStyleDock( bool enabled )
{
  mMapStylingDock->setUserVisible( enabled );
  setMapStyleDockLayer( activeLayer() );
}

void QgisApp::diagramProperties()
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>( activeLayer() );
  if ( !vlayer )
  {
    messageBar()->pushMessage( tr( "Diagram Properties" ),
                               tr( "Please select a vector layer first" ),
                               QgsMessageBar::INFO,
                               messageTimeout() );
    return;
  }

  QDialog dlg;
  dlg.setWindowTitle( tr( "Layer diagram properties" ) );
  QgsDiagramProperties *gui = new QgsDiagramProperties( vlayer, &dlg, mMapCanvas );
  gui->layout()->setContentsMargins( 0, 0, 0, 0 );
  QVBoxLayout *layout = new QVBoxLayout( &dlg );
  layout->addWidget( gui );

  QDialogButtonBox *buttonBox = new QDialogButtonBox(
    QDialogButtonBox::Ok | QDialogButtonBox::Cancel | QDialogButtonBox::Apply,
    Qt::Horizontal, &dlg );
  layout->addWidget( buttonBox );

  dlg.setLayout( layout );

  connect( buttonBox->button( QDialogButtonBox::Ok ), SIGNAL( clicked() ),
           &dlg, SLOT( accept() ) );
  connect( buttonBox->button( QDialogButtonBox::Cancel ), SIGNAL( clicked() ),
           &dlg, SLOT( reject() ) );
  connect( buttonBox->button( QDialogButtonBox::Apply ), SIGNAL( clicked() ),
           gui, SLOT( apply() ) );

  if ( dlg.exec() )
    gui->apply();

  activateDeactivateLayerRelatedActions( vlayer );
}

void QgisApp::setCadDockVisible( bool visible )
{
  mAdvancedDigitizingDockWidget->setVisible( visible );
}

void QgisApp::fieldCalculator()
{
  QgsVectorLayer *myLayer = qobject_cast<QgsVectorLayer *>( activeLayer() );
  if ( !myLayer )
  {
    return;
  }

  QgsFieldCalculator calc( myLayer, this );
  if ( calc.exec() )
  {
    myLayer->triggerRepaint();
  }
}

void QgisApp::attributeTable()
{
  QgsVectorLayer *myLayer = qobject_cast<QgsVectorLayer *>( activeLayer() );
  if ( !myLayer )
  {
    return;
  }

  QgsAttributeTableDialog *mDialog = new QgsAttributeTableDialog( myLayer );
  mDialog->show();
  // the dialog will be deleted by itself on close
}

void QgisApp::saveAsRasterFile()
{
  QgsRasterLayer* rasterLayer = qobject_cast<QgsRasterLayer *>( activeLayer() );
  if ( !rasterLayer )
  {
    return;
  }

  QgsRasterLayerSaveAsDialog d( rasterLayer, rasterLayer->dataProvider(),
                                mMapCanvas->extent(), rasterLayer->crs(),
                                mMapCanvas->mapSettings().destinationCrs(),
                                this );
  if ( d.exec() == QDialog::Rejected )
    return;

  QSettings settings;
  settings.setValue( "/UI/lastRasterFileDir", QFileInfo( d.outputFileName() ).absolutePath() );

  QgsRasterFileWriter fileWriter( d.outputFileName() );
  if ( d.tileMode() )
  {
    fileWriter.setTiledMode( true );
    fileWriter.setMaxTileWidth( d.maximumTileSizeX() );
    fileWriter.setMaxTileHeight( d.maximumTileSizeY() );
  }

  QProgressDialog pd( nullptr, tr( "Abort..." ), 0, 0 );
  // Show the dialo immediately because cloning pipe can take some time (WCS)
  pd.setLabelText( tr( "Reading raster" ) );
  pd.setWindowTitle( tr( "Saving raster" ) );
  pd.show();
  pd.setWindowModality( Qt::WindowModal );

  // TODO: show error dialogs
  // TODO: this code should go somewhere else, but probably not into QgsRasterFileWriter
  // clone pipe/provider is not really necessary, ready for threads
  QScopedPointer<QgsRasterPipe> pipe( nullptr );

  if ( d.mode() == QgsRasterLayerSaveAsDialog::RawDataMode )
  {
    QgsDebugMsg( "Writing raw data" );
    //QgsDebugMsg( QString( "Writing raw data" ).arg( pos ) );
    pipe.reset( new QgsRasterPipe() );
    if ( !pipe->set( rasterLayer->dataProvider()->clone() ) )
    {
      QgsDebugMsg( "Cannot set pipe provider" );
      return;
    }

    QgsRasterNuller *nuller = new QgsRasterNuller();
    for ( int band = 1; band <= rasterLayer->dataProvider()->bandCount(); band ++ )
    {
      nuller->setNoData( band, d.noData() );
    }
    if ( !pipe->insert( 1, nuller ) )
    {
      QgsDebugMsg( "Cannot set pipe nuller" );
      return;
    }

    // add projector if necessary
    if ( d.outputCrs() != rasterLayer->crs() )
    {
      QgsRasterProjector * projector = new QgsRasterProjector;
      projector->setCRS( rasterLayer->crs(), d.outputCrs() );
      if ( !pipe->insert( 2, projector ) )
      {
        QgsDebugMsg( "Cannot set pipe projector" );
        return;
      }
    }
  }
  else // RenderedImageMode
  {
    // clone the whole pipe
    QgsDebugMsg( "Writing rendered image" );
    pipe.reset( new QgsRasterPipe( *rasterLayer->pipe() ) );
    QgsRasterProjector *projector = pipe->projector();
    if ( !projector )
    {
      QgsDebugMsg( "Cannot get pipe projector" );
      return;
    }
    projector->setCRS( rasterLayer->crs(), d.outputCrs() );
  }

  if ( !pipe->last() )
  {
    return;
  }
  fileWriter.setCreateOptions( d.createOptions() );

  fileWriter.setBuildPyramidsFlag( d.buildPyramidsFlag() );
  fileWriter.setPyramidsList( d.pyramidsList() );
  fileWriter.setPyramidsResampling( d.pyramidsResamplingMethod() );
  fileWriter.setPyramidsFormat( d.pyramidsFormat() );
  fileWriter.setPyramidsConfigOptions( d.pyramidsConfigOptions() );

  QgsRasterFileWriter::WriterError err = fileWriter.writeRaster( pipe.data(), d.nColumns(), d.nRows(), d.outputRectangle(), d.outputCrs(), &pd );
  if ( err != QgsRasterFileWriter::NoError )
  {
    QMessageBox::warning( this, tr( "Error" ),
                          tr( "Cannot write raster error code: %1" ).arg( err ),
                          QMessageBox::Ok );

  }
  else
  {
    QString fileName( d.outputFileName() );
    if ( d.tileMode() )
    {
      QFileInfo outputInfo( fileName );
      fileName = QString( "%1/%2.vrt" ).arg( fileName, outputInfo.fileName() );
    }

    if ( d.addToCanvas() )
    {
      addRasterLayers( QStringList( fileName ) );
    }

    emit layerSavedAs( rasterLayer, fileName );
    messageBar()->pushMessage( tr( "Saving done" ),
                               tr( "Export to raster file has been completed" ),
                               QgsMessageBar::INFO, messageTimeout() );
  }
}

void QgisApp::saveAsFile()
{
  QgsMapLayer* layer = activeLayer();
  if ( !layer )
    return;

  QgsMapLayer::LayerType layerType = layer->type();
  if ( layerType == QgsMapLayer::RasterLayer )
  {
    saveAsRasterFile();
  }
  else if ( layerType == QgsMapLayer::VectorLayer )
  {
    saveAsVectorFileGeneral();
  }
}

void QgisApp::saveAsLayerDefinition()
{
  QString path = QFileDialog::getSaveFileName( this, "Save as Layer Definition File", QDir::home().path(), "*.qlr" );
  QgsDebugMsg( path );
  if ( path.isEmpty() )
    return;

  QString errorMessage;
  bool saved = QgsLayerDefinition::exportLayerDefinition( path, mLayerTreeView->selectedNodes(), errorMessage );
  if ( !saved )
  {
    messageBar()->pushMessage( tr( "Error saving layer definintion file" ), errorMessage, QgsMessageBar::WARNING );
  }
}

///@cond PRIVATE
/** Field value converter for export as vecotr layer
 * \note Not available in Python bindings
 */
class QgisAppFieldValueConverter : public QgsVectorFileWriter::FieldValueConverter
{
  public:
    QgisAppFieldValueConverter( QgsVectorLayer* vl, QgsAttributeList attributesAsDisplayedValues );

    virtual QgsField fieldDefinition( const QgsField& field ) override;

    virtual QVariant convert( int idx, const QVariant& value ) override;

  private:
    QgsVectorLayer* mLayer;
    QgsAttributeList mAttributesAsDisplayedValues;
};

QgisAppFieldValueConverter::QgisAppFieldValueConverter( QgsVectorLayer* vl, QgsAttributeList attributesAsDisplayedValues )
    : mLayer( vl )
    , mAttributesAsDisplayedValues( attributesAsDisplayedValues )
{
}

QgsField QgisAppFieldValueConverter::fieldDefinition( const QgsField& field )
{
  int idx = mLayer->fields().indexFromName( field.name() );
  if ( mAttributesAsDisplayedValues.contains( idx ) )
  {
    return QgsField( field.name(), QVariant::String );
  }
  return field;
}

QVariant QgisAppFieldValueConverter::convert( int idx, const QVariant& value )
{
  if ( !mAttributesAsDisplayedValues.contains( idx ) )
  {
    return value;
  }
  QgsEditorWidgetFactory *factory = QgsEditorWidgetRegistry::instance()->factory( mLayer->editFormConfig()->widgetType( idx ) );
  if ( factory )
  {
    QgsEditorWidgetConfig cfg( mLayer->editFormConfig()->widgetConfig( idx ) );
    return QVariant( factory->representValue( mLayer, idx, cfg, QVariant(), value ) );
  }
  return value;
}

///@endcond

void QgisApp::saveAsVectorFileGeneral( QgsVectorLayer* vlayer, bool symbologyOption )
{
  if ( !vlayer )
  {
    vlayer = qobject_cast<QgsVectorLayer *>( activeLayer() ); // FIXME: output of multiple layers at once?
  }

  if ( !vlayer )
    return;

  QgsCoordinateReferenceSystem destCRS;

  int options = QgsVectorLayerSaveAsDialog::AllOptions;
  if ( !symbologyOption )
  {
    options &= ~QgsVectorLayerSaveAsDialog::Symbology;
  }

  QgsVectorLayerSaveAsDialog *dialog = new QgsVectorLayerSaveAsDialog( vlayer, options, this );

  dialog->setCanvasExtent( mMapCanvas->mapSettings().visibleExtent(), mMapCanvas->mapSettings().destinationCrs() );
  dialog->setIncludeZ( QgsWKBTypes::hasZ( QGis::fromOldWkbType( vlayer->wkbType() ) ) );

  if ( dialog->exec() == QDialog::Accepted )
  {
    QString encoding = dialog->encoding();
    QString vectorFilename = dialog->filename();
    QString format = dialog->format();
    QStringList datasourceOptions = dialog->datasourceOptions();
    bool autoGeometryType = dialog->automaticGeometryType();
    QgsWKBTypes::Type forcedGeometryType = dialog->geometryType();

    QgsCoordinateTransform* ct = nullptr;
    destCRS = QgsCRSCache::instance()->crsBySrsId( dialog->crs() );

    if ( destCRS.isValid() && destCRS != vlayer->crs() )
    {
      ct = new QgsCoordinateTransform( vlayer->crs(), destCRS );

      //ask user about datum transformation
      QSettings settings;
      QList< QList< int > > dt = QgsCoordinateTransform::datumTransformations( vlayer->crs(), destCRS );
      if ( dt.size() > 1 && settings.value( "/Projections/showDatumTransformDialog", false ).toBool() )
      {
        QgsDatumTransformDialog d( vlayer->name(), dt );
        if ( d.exec() == QDialog::Accepted )
        {
          QList< int > sdt = d.selectedDatumTransform();
          if ( !sdt.isEmpty() )
          {
            ct->setSourceDatumTransform( sdt.at( 0 ) );
          }
          if ( sdt.size() > 1 )
          {
            ct->setDestinationDatumTransform( sdt.at( 1 ) );
          }
          ct->initialise();
        }
      }
    }

    // ok if the file existed it should be deleted now so we can continue...
    QApplication::setOverrideCursor( Qt::WaitCursor );

    QgsVectorFileWriter::WriterError error;
    QString errorMessage;
    QString newFilename;
    QgsRectangle filterExtent = dialog->filterExtent();
    QgisAppFieldValueConverter converter( vlayer, dialog->attributesAsDisplayedValues() );
    QgisAppFieldValueConverter* converterPtr = nullptr;
    // No need to use the converter if there is nothing to convert
    if ( !dialog->attributesAsDisplayedValues().isEmpty() )
      converterPtr = &converter;

    QgsVectorFileWriter::SaveVectorOptions options;
    options.driverName = format;
    options.layerName = dialog->layername();
    options.actionOnExistingFile = dialog->creationActionOnExistingFile();
    options.fileEncoding = encoding;
    options.ct = ct;
    options.onlySelectedFeatures = dialog->onlySelected();
    options.datasourceOptions = datasourceOptions;
    options.layerOptions = dialog->layerOptions();
    options.skipAttributeCreation = dialog->selectedAttributes().isEmpty();
    options.symbologyExport = static_cast< QgsVectorFileWriter::SymbologyExport >( dialog->symbologyExport() );
    options.symbologyScale = dialog->scaleDenominator();
    if ( dialog->hasFilterExtent() )
      options.filterExtent = filterExtent;
    options.overrideGeometryType = autoGeometryType ? QgsWKBTypes::Unknown : forcedGeometryType;
    options.forceMulti = dialog->forceMulti();
    options.includeZ = dialog->includeZ();
    options.attributes = dialog->selectedAttributes();
    options.fieldValueConverter = converterPtr;

    error = QgsVectorFileWriter::writeAsVectorFormat(
              vlayer, vectorFilename, options, &newFilename, &errorMessage );

    delete ct;

    QApplication::restoreOverrideCursor();

    if ( error == QgsVectorFileWriter::NoError )
    {
      if ( dialog->addToCanvas() )
      {
        QString uri( newFilename );
        if ( !dialog->layername().isEmpty() )
          uri += "|layername=" + dialog->layername();
        addVectorLayers( QStringList( uri ), encoding, "file" );
      }
      emit layerSavedAs( vlayer, vectorFilename );
      messageBar()->pushMessage( tr( "Saving done" ),
                                 tr( "Export to vector file has been completed" ),
                                 QgsMessageBar::INFO, messageTimeout() );
    }
    else
    {
      QgsMessageViewer *m = new QgsMessageViewer( nullptr );
      m->setWindowTitle( tr( "Save error" ) );
      m->setMessageAsPlainText( tr( "Export to vector file failed.\nError: %1" ).arg( errorMessage ) );
      m->exec();
    }
  }

  delete dialog;
}

void QgisApp::checkForDeprecatedLabelsInProject()
{
  bool ok = false;
  QgsProject::instance()->readBoolEntry( "DeprecatedLabels", "/Enabled", false, &ok );
  if ( ok ) // project already flagged (regardless of project property value)
  {
    return;
  }

  if ( QgsMapLayerRegistry::instance()->count() > 0 )
  {
    bool depLabelsUsed = false;
    QMap<QString, QgsMapLayer*> layers = QgsMapLayerRegistry::instance()->mapLayers();
    for ( QMap<QString, QgsMapLayer*>::iterator it = layers.begin(); it != layers.end(); ++it )
    {
      QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>( it.value() );
      if ( !vl )
      {
        continue;
      }

      Q_NOWARN_DEPRECATED_PUSH
      depLabelsUsed = vl->hasLabelsEnabled();
      if ( depLabelsUsed )
      {
        break;
      }
      Q_NOWARN_DEPRECATED_POP
    }
    if ( depLabelsUsed )
    {
      QgsProject::instance()->writeEntry( "DeprecatedLabels", "/Enabled", true );
    }
  }
}

void QgisApp::layerProperties()
{
  showLayerProperties( activeLayer() );
}

void QgisApp::deleteSelected( QgsMapLayer *layer, QWidget* parent, bool promptConfirmation )
{
  if ( !layer )
  {
    layer = mLayerTreeView->currentLayer();
  }

  if ( !parent )
  {
    parent = this;
  }

  if ( !layer )
  {
    messageBar()->pushMessage( tr( "No Layer Selected" ),
                               tr( "To delete features, you must select a vector layer in the legend" ),
                               QgsMessageBar::INFO, messageTimeout() );
    return;
  }

  QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>( layer );
  if ( !vlayer )
  {
    messageBar()->pushMessage( tr( "No Vector Layer Selected" ),
                               tr( "Deleting features only works on vector layers" ),
                               QgsMessageBar::INFO, messageTimeout() );
    return;
  }

  if ( !( vlayer->dataProvider()->capabilities() & QgsVectorDataProvider::DeleteFeatures ) )
  {
    messageBar()->pushMessage( tr( "Provider does not support deletion" ),
                               tr( "Data provider does not support deleting features" ),
                               QgsMessageBar::INFO, messageTimeout() );
    return;
  }

  if ( !vlayer->isEditable() )
  {
    messageBar()->pushMessage( tr( "Layer not editable" ),
                               tr( "The current layer is not editable. Choose 'Start editing' in the digitizing toolbar." ),
                               QgsMessageBar::INFO, messageTimeout() );
    return;
  }

  //validate selection
  int numberOfSelectedFeatures = vlayer->selectedFeaturesIds().size();
  if ( numberOfSelectedFeatures == 0 )
  {
    messageBar()->pushMessage( tr( "No Features Selected" ),
                               tr( "The current layer has no selected features" ),
                               QgsMessageBar::INFO, messageTimeout() );
    return;
  }
  //display a warning
  if ( promptConfirmation && QMessageBox::warning( parent, tr( "Delete features" ), tr( "Delete %n feature(s)?", "number of features to delete", numberOfSelectedFeatures ), QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
  {
    return;
  }

  vlayer->beginEditCommand( tr( "Features deleted" ) );
  int deletedCount = 0;
  if ( !vlayer->deleteSelectedFeatures( &deletedCount ) )
  {
    messageBar()->pushMessage( tr( "Problem deleting features" ),
                               tr( "A problem occurred during deletion of %1 feature(s)" ).arg( numberOfSelectedFeatures - deletedCount ),
                               QgsMessageBar::WARNING );
  }
  else
  {
    showStatusMessage( tr( "%n feature(s) deleted.", "number of features deleted", numberOfSelectedFeatures ) );
  }

  vlayer->endEditCommand();
}

void QgisApp::moveFeature()
{
  mMapCanvas->setMapTool( mMapTools.mMoveFeature );
}

void QgisApp::offsetCurve()
{
  mMapCanvas->setMapTool( mMapTools.mOffsetCurve );
}

void QgisApp::simplifyFeature()
{
  mMapCanvas->setMapTool( mMapTools.mSimplifyFeature );
}

void QgisApp::deleteRing()
{
  mMapCanvas->setMapTool( mMapTools.mDeleteRing );
}

void QgisApp::deletePart()
{
  mMapCanvas->setMapTool( mMapTools.mDeletePart );
}

QgsGeometry* QgisApp::unionGeometries( const QgsVectorLayer* vl, QgsFeatureList& featureList, bool& canceled )
{
  canceled = false;
  if ( !vl || featureList.size() < 2 )
  {
    return nullptr;
  }

  QgsGeometry* unionGeom = featureList[0].geometry();
  QgsGeometry* backupPtr = nullptr; //pointer to delete intermediate results
  if ( !unionGeom )
  {
    return nullptr;
  }

  QProgressDialog progress( tr( "Merging features..." ), tr( "Abort" ), 0, featureList.size(), this );
  progress.setWindowModality( Qt::WindowModal );

  QApplication::setOverrideCursor( Qt::WaitCursor );

  for ( int i = 1; i < featureList.size(); ++i )
  {
    if ( progress.wasCanceled() )
    {
      delete unionGeom;
      QApplication::restoreOverrideCursor();
      canceled = true;
      return nullptr;
    }
    progress.setValue( i );
    QgsGeometry* currentGeom = featureList[i].geometry();
    if ( currentGeom )
    {
      backupPtr = unionGeom;
      unionGeom = unionGeom->combine( currentGeom );
      if ( i > 1 ) //delete previous intermediate results
      {
        delete backupPtr;
        backupPtr = nullptr;
      }
      if ( !unionGeom )
      {
        QApplication::restoreOverrideCursor();
        return nullptr;
      }
    }
  }

  //convert unionGeom to a multipart geometry in case it is necessary to match the layer type
  if ( QGis::isMultiType( vl->wkbType() ) && !unionGeom->isMultipart() )
  {
    unionGeom->convertToMultiType();
  }

  QApplication::restoreOverrideCursor();
  progress.setValue( featureList.size() );
  return unionGeom;
}

bool QgisApp::uniqueComposerTitle( QWidget* parent, QString& composerTitle, bool acceptEmpty, const QString& currentName )
{
  if ( !parent )
  {
    parent = this;
  }
  bool ok = false;
  bool titleValid = false;
  QString newTitle = QString( currentName );
  QString chooseMsg = tr( "Create unique print composer title" );
  if ( acceptEmpty )
  {
    chooseMsg += '\n' + tr( "(title generated if left empty)" );
  }
  QString titleMsg = chooseMsg;

  QStringList cNames;
  cNames << newTitle;
  Q_FOREACH ( QgsComposer* c, printComposers() )
  {
    cNames << c->title();
  }

  while ( !titleValid )
  {
    newTitle = QInputDialog::getItem( parent,
                                      tr( "Composer title" ),
                                      titleMsg,
                                      cNames,
                                      cNames.indexOf( newTitle ),
                                      true,
                                      &ok );
    if ( !ok )
    {
      return false;
    }

    if ( newTitle.isEmpty() )
    {
      if ( !acceptEmpty )
      {
        titleMsg = chooseMsg + "\n\n" + tr( "Title can not be empty!" );
      }
      else
      {
        titleValid = true;
      }
    }
    else if ( cNames.indexOf( newTitle, 1 ) >= 0 )
    {
      cNames[0] = QString(); // clear non-unique name
      titleMsg = chooseMsg + "\n\n" + tr( "Title already exists!" );
    }
    else
    {
      titleValid = true;
    }
  }

  composerTitle = newTitle;

  return true;
}

QgsComposer* QgisApp::createNewComposer( QString title )
{
  //ask user about name
  mLastComposerId++;
  if ( title.isEmpty() )
  {
    title = tr( "Composer %1" ).arg( mLastComposerId );
  }
  //create new composer object
  QgsComposer* newComposerObject = new QgsComposer( this, title );

  //add it to the map of existing print composers
  mPrintComposers.insert( newComposerObject );
  //and place action into print composers menu
  mPrintComposersMenu->addAction( newComposerObject->windowAction() );
  newComposerObject->open();
  emit composerAdded( newComposerObject->view() );
  connect( newComposerObject, SIGNAL( composerAdded( QgsComposerView* ) ), this, SIGNAL( composerAdded( QgsComposerView* ) ) );
  connect( newComposerObject, SIGNAL( composerWillBeRemoved( QgsComposerView* ) ), this, SIGNAL( composerWillBeRemoved( QgsComposerView* ) ) );
  connect( newComposerObject, SIGNAL( atlasPreviewFeatureChanged() ), this, SLOT( refreshMapCanvas() ) );
  markDirty();
  return newComposerObject;
}

void QgisApp::deleteComposer( QgsComposer* c )
{
  emit composerWillBeRemoved( c->view() );
  mPrintComposers.remove( c );
  mPrintComposersMenu->removeAction( c->windowAction() );
  markDirty();
  emit composerRemoved( c->view() );

  //save a reference to the composition
  QgsComposition* composition = c->composition();

  //first, delete the composer. This must occur before deleting the composition as some of the cleanup code in
  //composer or in composer item widgets may require the composition to still be around
  delete c;

  //next, delete the composition
  if ( composition )
  {
    delete composition;
  }
}

QgsComposer* QgisApp::duplicateComposer( QgsComposer* currentComposer, QString title )
{
  QgsComposer* newComposer = nullptr;

  // test that current composer template write is valid
  QDomDocument currentDoc;
  currentComposer->templateXML( currentDoc );
  QDomElement compositionElem = currentDoc.documentElement().firstChildElement( "Composition" );
  if ( compositionElem.isNull() )
  {
    QgsDebugMsg( "selected composer could not be stored as temporary template" );
    return newComposer;
  }

  if ( title.isEmpty() )
  {
    // TODO: inject a bit of randomness in auto-titles?
    title = currentComposer->title() + tr( " copy" );
  }

  newComposer = createNewComposer( title );
  if ( !newComposer )
  {
    QgsDebugMsg( "could not create new composer" );
    return newComposer;
  }

  // hiding composer until template is loaded is much faster, provide feedback to user
  newComposer->hide();
  if ( !newComposer->loadFromTemplate( currentDoc, true ) )
  {
    deleteComposer( newComposer );
    newComposer = nullptr;
    QgsDebugMsg( "Error, composer could not be duplicated" );
    return newComposer;
  }
  newComposer->activate();

  return newComposer;
}

bool QgisApp::loadComposersFromProject( const QDomDocument& doc )
{
  if ( doc.isNull() )
  {
    return false;
  }

  //restore each composer
  QDomNodeList composerNodes = doc.elementsByTagName( "Composer" );
  for ( int i = 0; i < composerNodes.size(); ++i )
  {
    QString title( composerNodes.at( i ).toElement().attribute( "title" ) );
    showStatusMessage( tr( "Loading composer %1" ).arg( title ) );
    showProgress( i,  composerNodes.size() );
    ++mLastComposerId;

    QTime t;
    t.start();
    QgsComposer* composer = new QgsComposer( this, tr( "Composer %1" ).arg( mLastComposerId ) );
    composer->readXML( composerNodes.at( i ).toElement(), doc );
    mPrintComposers.insert( composer );
    mPrintComposersMenu->addAction( composer->windowAction() );
#ifndef Q_OS_MAC
    composer->setWindowState( Qt::WindowMinimized );
    composer->show();
#endif
    composer->zoomFull();
    QgsComposerView* composerView = composer->view();
    if ( composerView )
    {
      composerView->updateRulers();
    }
    if ( composerNodes.at( i ).toElement().attribute( "visible", "1" ).toInt() < 1 )
    {
      composer->close();
    }
    emit composerAdded( composer->view() );
    connect( composer, SIGNAL( composerAdded( QgsComposerView* ) ), this, SIGNAL( composerAdded( QgsComposerView* ) ) );
    connect( composer, SIGNAL( composerWillBeRemoved( QgsComposerView* ) ), this, SIGNAL( composerWillBeRemoved( QgsComposerView* ) ) );
    connect( composer, SIGNAL( atlasPreviewFeatureChanged() ), this, SLOT( refreshMapCanvas() ) );

    QgsDebugMsg( QString( "Loaded composer %1: %2ms" ).arg( title ).arg( t.elapsed() ) );
  }

  showProgress( 0, 0 );

  return true;
}

void QgisApp::deletePrintComposers()
{
  QSet<QgsComposer*>::iterator it = mPrintComposers.begin();
  while ( it != mPrintComposers.end() )
  {
    QgsComposer* c = ( *it );
    emit composerWillBeRemoved( c->view() );
    it = mPrintComposers.erase( it );
    emit composerRemoved( c->view() );

    //save a reference to the composition
    QgsComposition* composition = c->composition();

    //first, delete the composer. This must occur before deleting the composition as some of the cleanup code in
    //composer or in composer item widgets may require the composition to still be around
    delete( c );

    //next, delete the composition
    if ( composition )
    {
      delete composition;
    }
  }
  mLastComposerId = 0;
  markDirty();
}

void QgisApp::on_mPrintComposersMenu_aboutToShow()
{
  QList<QAction*> acts = mPrintComposersMenu->actions();
  mPrintComposersMenu->clear();
  if ( acts.size() > 1 )
  {
    // sort actions by text
    qSort( acts.begin(), acts.end(), cmpByText_ );
  }
  mPrintComposersMenu->addActions( acts );
}

bool QgisApp::loadAnnotationItemsFromProject( const QDomDocument& doc )
{
  if ( !mMapCanvas )
  {
    return false;
  }

  removeAnnotationItems();

  if ( doc.isNull() )
  {
    return false;
  }

  QDomNodeList textItemList = doc.elementsByTagName( "TextAnnotationItem" );
  for ( int i = 0; i < textItemList.size(); ++i )
  {
    QgsTextAnnotationItem* newTextItem = new QgsTextAnnotationItem( mMapCanvas );
    newTextItem->readXML( doc, textItemList.at( i ).toElement() );
  }

  QDomNodeList formItemList = doc.elementsByTagName( "FormAnnotationItem" );
  for ( int i = 0; i < formItemList.size(); ++i )
  {
    QgsFormAnnotationItem* newFormItem = new QgsFormAnnotationItem( mMapCanvas );
    newFormItem->readXML( doc, formItemList.at( i ).toElement() );
  }

#ifdef WITH_QTWEBKIT
  QDomNodeList htmlItemList = doc.elementsByTagName( "HtmlAnnotationItem" );
  for ( int i = 0; i < htmlItemList.size(); ++i )
  {
    QgsHtmlAnnotationItem* newHtmlItem = new QgsHtmlAnnotationItem( mMapCanvas );
    newHtmlItem->readXML( doc, htmlItemList.at( i ).toElement() );
  }
#endif

  QDomNodeList svgItemList = doc.elementsByTagName( "SVGAnnotationItem" );
  for ( int i = 0; i < svgItemList.size(); ++i )
  {
    QgsSvgAnnotationItem* newSvgItem = new QgsSvgAnnotationItem( mMapCanvas );
    newSvgItem->readXML( doc, svgItemList.at( i ).toElement() );
  }
  return true;
}

void QgisApp::showPinnedLabels( bool show )
{
  qobject_cast<QgsMapToolPinLabels*>( mMapTools.mPinLabels )->showPinnedLabels( show );
}

void QgisApp::pinLabels()
{
  mActionShowPinnedLabels->setChecked( true );
  mMapCanvas->setMapTool( mMapTools.mPinLabels );
}

void QgisApp::showHideLabels()
{
  mMapCanvas->setMapTool( mMapTools.mShowHideLabels );
}

void QgisApp::moveLabel()
{
  mMapCanvas->setMapTool( mMapTools.mMoveLabel );
}

void QgisApp::rotateFeature()
{
  mMapCanvas->setMapTool( mMapTools.mRotateFeature );
}

void QgisApp::rotateLabel()
{
  mMapCanvas->setMapTool( mMapTools.mRotateLabel );
}

void QgisApp::changeLabelProperties()
{
  mMapCanvas->setMapTool( mMapTools.mChangeLabelProperties );
}

QList<QgsAnnotationItem*> QgisApp::annotationItems()
{
  QList<QgsAnnotationItem*> itemList;

  if ( !mMapCanvas )
  {
    return itemList;
  }

  if ( mMapCanvas )
  {
    QList<QGraphicsItem*> graphicsItems = mMapCanvas->items();
    QList<QGraphicsItem*>::iterator gIt = graphicsItems.begin();
    for ( ; gIt != graphicsItems.end(); ++gIt )
    {
      QgsAnnotationItem* currentItem = dynamic_cast<QgsAnnotationItem*>( *gIt );
      if ( currentItem )
      {
        itemList.push_back( currentItem );
      }
    }
  }
  return itemList;
}

void QgisApp::removeAnnotationItems()
{
  if ( !mMapCanvas )
  {
    return;
  }
  QGraphicsScene* scene = mMapCanvas->scene();
  if ( !scene )
  {
    return;
  }
  QList<QgsAnnotationItem*> itemList = annotationItems();
  QList<QgsAnnotationItem*>::iterator itemIt = itemList.begin();
  for ( ; itemIt != itemList.end(); ++itemIt )
  {
    if ( *itemIt )
    {
      scene->removeItem( *itemIt );
      delete *itemIt;
    }
  }
}

void QgisApp::mergeAttributesOfSelectedFeatures()
{
  //get active layer (hopefully vector)
  QgsMapLayer *activeMapLayer = activeLayer();
  if ( !activeMapLayer )
  {
    messageBar()->pushMessage( tr( "No active layer" ),
                               tr( "No active layer found. Please select a layer in the layer list" ),
                               QgsMessageBar::INFO, messageTimeout() );
    return;
  }

  QgsVectorLayer* vl = qobject_cast<QgsVectorLayer *>( activeMapLayer );
  if ( !vl )
  {
    messageBar()->pushMessage(
      tr( "Layer not editable" ),
      tr( "The merge features tool only works on vector layers." ),
      QgsMessageBar::WARNING );
    return;
  }

  if ( !vl->isEditable() )
  {
    messageBar()->pushMessage(
      tr( "Layer not editable" ),
      tr( "Merging features can only be done for layers in editing mode." ),
      QgsMessageBar::WARNING );

    return;
  }

  //get selected feature ids (as a QSet<int> )
  const QgsFeatureIds& featureIdSet = vl->selectedFeaturesIds();
  if ( featureIdSet.size() < 2 )
  {
    messageBar()->pushMessage(
      tr( "Not enough features selected" ),
      tr( "The merge tool requires at least two selected features" ),
      QgsMessageBar::WARNING );
    return;
  }

  //get initial selection (may be altered by attribute merge dialog later)
  QgsFeatureList featureList = vl->selectedFeatures();  //get QList<QgsFeature>

  //merge the attributes together
  QgsMergeAttributesDialog d( featureList, vl, mapCanvas() );
  //intialise dialog with all columns set to skip
  d.setAllToSkip();
  if ( d.exec() == QDialog::Rejected )
  {
    return;
  }

  vl->beginEditCommand( tr( "Merged feature attributes" ) );

  QgsAttributes merged = d.mergedAttributes();
  QSet<int> toSkip = d.skippedAttributeIndexes();

  bool firstFeature = true;
  Q_FOREACH ( QgsFeatureId fid, vl->selectedFeaturesIds() )
  {
    for ( int i = 0; i < merged.count(); ++i )
    {
      if ( toSkip.contains( i ) )
        continue;

      QVariant val = merged.at( i );
      const QgsField &fld( vl->fields().at( i ) );
      bool isDefaultValue = vl->fields().fieldOrigin( i ) == QgsFields::OriginProvider &&
                            vl->dataProvider() &&
                            vl->dataProvider()->defaultValue( vl->fields().fieldOriginIndex( i ) ) == val;

      // convert to destination data type
      if ( !isDefaultValue && !fld.convertCompatible( val ) )
      {
        if ( firstFeature )
        {
          //only warn on first feature
          messageBar()->pushMessage(
            tr( "Invalid result" ),
            tr( "Could not store value '%1' in field of type %2" ).arg( merged.at( i ).toString(), fld.typeName() ),
            QgsMessageBar::WARNING );
        }
      }
      else
      {
        vl->changeAttributeValue( fid, i, val );
      }
    }
    firstFeature = false;
  }

  vl->endEditCommand();

  if ( mapCanvas() )
  {
    vl->triggerRepaint();
  }
}

void QgisApp::modifyAttributesOfSelectedFeatures()
{
  QgsMapLayer* activeMapLayer = activeLayer();
  if ( !activeMapLayer )
  {
    messageBar()->pushMessage(
      tr( "No active layer" ),
      tr( "Please select a layer in the layer list" ),
      QgsMessageBar::WARNING );
    return;
  }

  QgsVectorLayer* vl = qobject_cast<QgsVectorLayer *>( activeMapLayer );
  if ( !vl )
  {
    messageBar()->pushMessage(
      tr( "Invalid layer" ),
      tr( "The merge features tool only works on vector layers." ),
      QgsMessageBar::WARNING );
    return;
  }
  if ( !vl->isEditable() )
  {
    messageBar()->pushMessage(
      tr( "Layer not editable" ),
      tr( "Modifying features can only be done for layers in editing mode." ),
      QgsMessageBar::WARNING );

    return;
  }

  //dummy feature
  QgsFeature f;
  QgsAttributeEditorContext context;
  context.setAllowCustomUi( false );

  QgsAttributeDialog* dialog = new QgsAttributeDialog( vl, &f, false, this, true, context );
  dialog->setMode( QgsAttributeForm::MultiEditMode );
  dialog->exec();
}

void QgisApp::mergeSelectedFeatures()
{
  //get active layer (hopefully vector)
  QgsMapLayer* activeMapLayer = activeLayer();
  if ( !activeMapLayer )
  {
    messageBar()->pushMessage(
      tr( "No active layer" ),
      tr( "Please select a layer in the layer list" ),
      QgsMessageBar::WARNING );
    return;
  }
  QgsVectorLayer* vl = qobject_cast<QgsVectorLayer *>( activeMapLayer );
  if ( !vl )
  {
    messageBar()->pushMessage(
      tr( "Invalid layer" ),
      tr( "The merge features tool only works on vector layers." ),
      QgsMessageBar::WARNING );
    return;
  }
  if ( !vl->isEditable() )
  {
    messageBar()->pushMessage(
      tr( "Layer not editable" ),
      tr( "Merging features can only be done for layers in editing mode." ),
      QgsMessageBar::WARNING );

    return;
  }

  //get selected feature ids (as a QSet<int> )
  const QgsFeatureIds& featureIdSet = vl->selectedFeaturesIds();
  if ( featureIdSet.size() < 2 )
  {
    messageBar()->pushMessage(
      tr( "Not enough features selected" ),
      tr( "The merge tool requires at least two selected features" ),
      QgsMessageBar::WARNING );
    return;
  }

  //get initial selection (may be altered by attribute merge dialog later)
  QgsFeatureIds featureIds = vl->selectedFeaturesIds();
  QgsFeatureList featureList = vl->selectedFeatures();  //get QList<QgsFeature>
  bool canceled;
  QgsGeometry* unionGeom = unionGeometries( vl, featureList, canceled );
  if ( !unionGeom )
  {
    if ( !canceled )
    {
      messageBar()->pushMessage(
        tr( "Merge failed" ),
        tr( "An error occurred during the merge operation" ),
        QgsMessageBar::CRITICAL );
    }
    return;
  }

  //merge the attributes together
  QgsMergeAttributesDialog d( featureList, vl, mapCanvas() );
  if ( d.exec() == QDialog::Rejected )
  {
    delete unionGeom;
    return;
  }

  QgsFeatureIds featureIdsAfter = vl->selectedFeaturesIds();

  if ( featureIdsAfter.size() < 2 )
  {
    messageBar()->pushMessage(
      tr( "Not enough features selected" ),
      tr( "The merge tool requires at least two selected features" ),
      QgsMessageBar::WARNING );
    delete unionGeom;
    return;
  }

  //if the user changed the feature selection in the merge dialog, we need to repeat the union and check the type
  if ( featureIds.size() != featureIdsAfter.size() )
  {
    delete unionGeom;
    bool canceled;
    QgsFeatureList featureListAfter = vl->selectedFeatures();
    unionGeom = unionGeometries( vl, featureListAfter, canceled );
    if ( !unionGeom )
    {
      if ( !canceled )
      {
        messageBar()->pushMessage(
          tr( "Merge failed" ),
          tr( "An error occurred during the merge operation" ),
          QgsMessageBar::CRITICAL );
      }
      return;
    }
  }

  vl->beginEditCommand( tr( "Merged features" ) );

  //create new feature
  QgsFeature newFeature;
  newFeature.setGeometry( unionGeom );

  QgsAttributes attrs = d.mergedAttributes();
  for ( int i = 0; i < attrs.count(); ++i )
  {
    QVariant val = attrs.at( i );
    bool isDefaultValue = vl->fields().fieldOrigin( i ) == QgsFields::OriginProvider &&
                          vl->dataProvider() &&
                          vl->dataProvider()->defaultValue( vl->fields().fieldOriginIndex( i ) ) == val;

    // convert to destination data type
    if ( !isDefaultValue && !vl->fields().at( i ).convertCompatible( val ) )
    {
      messageBar()->pushMessage(
        tr( "Merge features" ),
        tr( "Could not store value '%1' in field of type %2" ).arg( attrs.at( i ).toString(), vl->fields().at( i ).typeName() ),
        QgsMessageBar::WARNING );
    }
    attrs[i] = val;
  }
  newFeature.setAttributes( attrs );

  QgsFeatureIds::const_iterator feature_it = featureIdsAfter.constBegin();
  for ( ; feature_it != featureIdsAfter.constEnd(); ++feature_it )
  {
    vl->deleteFeature( *feature_it );
  }

  // addFeature can fail if newFeature has no compatibile geometry
  if ( !vl->addFeature( newFeature, false ) )
  {
    vl->destroyEditCommand();
  }
  else
  {
  vl->endEditCommand();
  }

  if ( mapCanvas() )
  {
    vl->triggerRepaint();
  }
}

void QgisApp::nodeTool()
{
  mMapCanvas->setMapTool( mMapTools.mNodeTool );
}

void QgisApp::rotatePointSymbols()
{
  mMapCanvas->setMapTool( mMapTools.mRotatePointSymbolsTool );
}

void QgisApp::offsetPointSymbol()
{
  mMapCanvas->setMapTool( mMapTools.mOffsetPointSymbolTool );
}

void QgisApp::snappingOptions()
{
  mSnappingDialog->show();
}

void QgisApp::splitFeatures()
{
  mMapCanvas->setMapTool( mMapTools.mSplitFeatures );
}

void QgisApp::splitParts()
{
  mMapCanvas->setMapTool( mMapTools.mSplitParts );
}

void QgisApp::reshapeFeatures()
{
  mMapCanvas->setMapTool( mMapTools.mReshapeFeatures );
}

void QgisApp::addFeature()
{
  mMapCanvas->setMapTool( mMapTools.mAddFeature );
}

void QgisApp::circularStringCurvePoint()
{
  mMapCanvas->setMapTool( mMapTools.mCircularStringCurvePoint );
}

void QgisApp::circularStringRadius()
{
  mMapCanvas->setMapTool( mMapTools.mCircularStringRadius );
}

void QgisApp::selectFeatures()
{
  mMapCanvas->setMapTool( mMapTools.mSelectFeatures );
}

void QgisApp::selectByPolygon()
{
  mMapCanvas->setMapTool( mMapTools.mSelectPolygon );
}

void QgisApp::selectByFreehand()
{
  mMapCanvas->setMapTool( mMapTools.mSelectFreehand );
}

void QgisApp::selectByRadius()
{
  mMapCanvas->setMapTool( mMapTools.mSelectRadius );
}

void QgisApp::deselectAll()
{
  // Turn off rendering to improve speed.
  bool renderFlagState = mMapCanvas->renderFlag();
  if ( renderFlagState )
    mMapCanvas->setRenderFlag( false );

  QMap<QString, QgsMapLayer*> layers = QgsMapLayerRegistry::instance()->mapLayers();
  for ( QMap<QString, QgsMapLayer*>::iterator it = layers.begin(); it != layers.end(); ++it )
  {
    QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>( it.value() );
    if ( !vl )
      continue;

    vl->removeSelection();
  }

  // Turn on rendering (if it was on previously)
  if ( renderFlagState )
    mMapCanvas->setRenderFlag( true );
}

void QgisApp::invertSelection()
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mMapCanvas->currentLayer() );
  if ( !vlayer )
  {
    messageBar()->pushMessage(
      tr( "No active vector layer" ),
      tr( "To invert selection, choose a vector layer in the legend" ),
      QgsMessageBar::INFO,
      messageTimeout() );
    return;
  }

  // Turn off rendering to improve speed.
  bool renderFlagState = mMapCanvas->renderFlag();
  if ( renderFlagState )
    mMapCanvas->setRenderFlag( false );

  vlayer->invertSelection();

  // Turn on rendering (if it was on previously)
  if ( renderFlagState )
    mMapCanvas->setRenderFlag( true );
}

void QgisApp::selectAll()
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mMapCanvas->currentLayer() );
  if ( !vlayer )
  {
    messageBar()->pushMessage(
      tr( "No active vector layer" ),
      tr( "To select all, choose a vector layer in the legend" ),
      QgsMessageBar::INFO,
      messageTimeout() );
    return;
  }

  // Turn off rendering to improve speed.
  bool renderFlagState = mMapCanvas->renderFlag();
  if ( renderFlagState )
    mMapCanvas->setRenderFlag( false );

  vlayer->selectAll();

  // Turn on rendering (if it was on previously)
  if ( renderFlagState )
    mMapCanvas->setRenderFlag( true );
}

void QgisApp::selectByExpression()
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mMapCanvas->currentLayer() );
  if ( !vlayer )
  {
    messageBar()->pushMessage(
      tr( "No active vector layer" ),
      tr( "To select features, choose a vector layer in the legend" ),
      QgsMessageBar::INFO,
      messageTimeout() );
    return;
  }

  QgsExpressionSelectionDialog* dlg = new QgsExpressionSelectionDialog( vlayer, QString(), this );
  dlg->setAttribute( Qt::WA_DeleteOnClose );
  dlg->show();
}

void QgisApp::selectByForm()
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mMapCanvas->currentLayer() );
  if ( !vlayer )
  {
    messageBar()->pushMessage(
      tr( "No active vector layer" ),
      tr( "To select features, choose a vector layer in the legend" ),
      QgsMessageBar::INFO,
      messageTimeout() );
    return;
  }
  QgsDistanceArea myDa;

  myDa.setSourceCrs( vlayer->crs().srsid() );
  myDa.setEllipsoidalMode( mMapCanvas->mapSettings().hasCrsTransformEnabled() );
  myDa.setEllipsoid( QgsProject::instance()->readEntry( "Measure", "/Ellipsoid", GEO_NONE ) );

  QgsAttributeEditorContext context;
  context.setDistanceArea( myDa );
  context.setVectorLayerTools( mVectorLayerTools );

  QgsSelectByFormDialog* dlg = new QgsSelectByFormDialog( vlayer, context, this );
  dlg->setMessageBar( messageBar() );
  dlg->setAttribute( Qt::WA_DeleteOnClose );
  dlg->show();
}

void QgisApp::addRing()
{
  mMapCanvas->setMapTool( mMapTools.mAddRing );
}

void QgisApp::fillRing()
{
  mMapCanvas->setMapTool( mMapTools.mFillRing );
}


void QgisApp::addPart()
{
  mMapCanvas->setMapTool( mMapTools.mAddPart );
}


void QgisApp::editCut( QgsMapLayer * layerContainingSelection )
{
  // Test for feature support in this layer
  QgsVectorLayer* selectionVectorLayer = qobject_cast<QgsVectorLayer *>( layerContainingSelection ? layerContainingSelection : activeLayer() );
  if ( !selectionVectorLayer )
    return;

  clipboard()->replaceWithCopyOf( selectionVectorLayer );

  selectionVectorLayer->beginEditCommand( tr( "Features cut" ) );
  selectionVectorLayer->deleteSelectedFeatures();
  selectionVectorLayer->endEditCommand();
}

void QgisApp::editCopy( QgsMapLayer * layerContainingSelection )
{
  QgsVectorLayer* selectionVectorLayer = qobject_cast<QgsVectorLayer *>( layerContainingSelection ? layerContainingSelection : activeLayer() );
  if ( !selectionVectorLayer )
    return;

  // Test for feature support in this layer
  clipboard()->replaceWithCopyOf( selectionVectorLayer );
}

void QgisApp::clipboardChanged()
{
  activateDeactivateLayerRelatedActions( activeLayer() );
}

void QgisApp::editPaste( QgsMapLayer *destinationLayer )
{
  QgsVectorLayer *pasteVectorLayer = qobject_cast<QgsVectorLayer *>( destinationLayer ? destinationLayer : activeLayer() );
  if ( !pasteVectorLayer )
    return;

  pasteVectorLayer->beginEditCommand( tr( "Features pasted" ) );
  QgsFeatureList features;
  if ( mMapCanvas->mapSettings().hasCrsTransformEnabled() )
  {
    features = clipboard()->transformedCopyOf( pasteVectorLayer->crs(), pasteVectorLayer->fields() );
  }
  else
  {
    features = clipboard()->copyOf( pasteVectorLayer->fields() );
  }
  int nTotalFeatures = features.count();

  QHash<int, int> remap;
  QgsFields fields = clipboard()->fields();
  QgsAttributeList pkAttrList = pasteVectorLayer->pkAttributeList();
  for ( int idx = 0; idx < fields.count(); ++idx )
  {
    int dst = pasteVectorLayer->fieldNameIndex( fields.at( idx ).name() );
    if ( dst < 0 )
      continue;

    remap.insert( idx, dst );
  }

  QgsExpressionContext context;
  context << QgsExpressionContextUtils::globalScope()
  << QgsExpressionContextUtils::projectScope()
  << QgsExpressionContextUtils::layerScope( pasteVectorLayer );

  int dstAttrCount = pasteVectorLayer->fields().count();

  QgsFeatureList::iterator featureIt = features.begin();
  while ( featureIt != features.end() )
  {
    QgsAttributes srcAttr = featureIt->attributes();
    QgsAttributes dstAttr( dstAttrCount );

    // pre-initialized with default values
    for ( int dst = 0; dst < dstAttr.count(); ++dst )
    {
      QVariant defVal;
      if ( !pasteVectorLayer->defaultValueExpression( dst ).isEmpty() )
      {
        // client side default expression set - use this in preference to provider default
        defVal = pasteVectorLayer->defaultValue( dst, *featureIt, &context );
      }
      else
      {
        defVal = pasteVectorLayer->dataProvider()->defaultValue( dst );
      }

      if ( defVal.isValid() && !defVal.isNull() )
      {
        dstAttr[ dst ] = defVal;
      }
    }

    for ( int src = 0; src < srcAttr.count(); ++src )
    {
      int dst = remap.value( src, -1 );
      if ( dst < 0 )
        continue;

      // don't overwrite default value for primary key fields if it's NOT NULL
      // or for spatialite layers
      if ( pkAttrList.contains( dst ) )
      {
        if ( !dstAttr.at( dst ).isNull() )
          continue;
        else if ( pasteVectorLayer->providerType() == "spatialite" )
          continue;
      }

      dstAttr[ dst ] = srcAttr.at( src );
    }

    featureIt->setAttributes( dstAttr );

    if ( featureIt->constGeometry() )
    {
      // convert geometry to match destination layer
      QGis::GeometryType destType = pasteVectorLayer->geometryType();
      bool destIsMulti = QGis::isMultiType( pasteVectorLayer->wkbType() );
      if ( pasteVectorLayer->dataProvider() &&
           !pasteVectorLayer->dataProvider()->doesStrictFeatureTypeCheck() )
      {
        // force destination to multi if provider doesn't do a feature strict check
        destIsMulti = true;
      }

      if ( destType != QGis::UnknownGeometry )
      {
        QgsGeometry* newGeometry = featureIt->constGeometry()->convertToType( destType, destIsMulti );
        if ( !newGeometry )
        {
          featureIt = features.erase( featureIt );
          continue;
        }
        featureIt->setGeometry( newGeometry );
      }
      // avoid intersection if enabled in digitize settings
      featureIt->geometry()->avoidIntersections();
    }

    ++featureIt;
  }

  if ( !pasteVectorLayer->addFeatures( features ) )
  {
    pasteVectorLayer->destroyEditCommand();
  }
  else
  {
  pasteVectorLayer->endEditCommand();
  }

  int nCopiedFeatures = features.count();
  if ( nCopiedFeatures == 0 )
  {
    messageBar()->pushMessage( tr( "Paste features" ),
                               tr( "no features could be successfully pasted." ),
                               QgsMessageBar::WARNING, messageTimeout() );

  }
  else if ( nCopiedFeatures == nTotalFeatures )
  {
    messageBar()->pushMessage( tr( "Paste features" ),
                               tr( "%1 features were successfully pasted." ).arg( nCopiedFeatures ),
                               QgsMessageBar::INFO, messageTimeout() );
  }
  else
  {
    messageBar()->pushMessage( tr( "Paste features" ),
                               tr( "%1 of %2 features could be successfully pasted." ).arg( nCopiedFeatures ).arg( nTotalFeatures ),
                               QgsMessageBar::WARNING, messageTimeout() );
  }

  pasteVectorLayer->triggerRepaint();
}

void QgisApp::pasteAsNewVector()
{

  QgsVectorLayer *layer = pasteToNewMemoryVector();
  if ( !layer )
    return;

  saveAsVectorFileGeneral( layer, false );

  delete layer;
}

QgsVectorLayer *QgisApp::pasteAsNewMemoryVector( const QString & theLayerName )
{

  QString layerName = theLayerName;

  if ( layerName.isEmpty() )
  {
    bool ok;
    QString defaultName = tr( "Pasted" );
    layerName = QInputDialog::getText( this, tr( "New temporary scratch layer name" ),
                                       tr( "Layer name" ), QLineEdit::Normal,
                                       defaultName, &ok );
    if ( !ok )
      return nullptr;

    if ( layerName.isEmpty() )
    {
      layerName = defaultName;
    }
  }

  QgsVectorLayer *layer = pasteToNewMemoryVector();
  if ( !layer )
    return nullptr;

  layer->setName( layerName );

  mMapCanvas->freeze();

  QgsMapLayerRegistry::instance()->addMapLayer( layer );

  mMapCanvas->freeze( false );
  mMapCanvas->refresh();

  return layer;
}

QgsVectorLayer *QgisApp::pasteToNewMemoryVector()
{
  QgsFields fields = clipboard()->fields();

  // Decide geometry type from features, switch to multi type if at least one multi is found
  QMap<QGis::WkbType, int> typeCounts;
  QgsFeatureList features = clipboard()->copyOf( fields );
  for ( int i = 0; i < features.size(); i++ )
  {
    QgsFeature &feature = features[i];
    if ( !feature.constGeometry() )
      continue;

    QGis::WkbType type = QGis::flatType( feature.constGeometry()->wkbType() );

    if ( type == QGis::WKBUnknown || type == QGis::WKBNoGeometry )
      continue;

    if ( QGis::isSingleType( type ) )
    {
      if ( typeCounts.contains( QGis::multiType( type ) ) )
      {
        typeCounts[ QGis::multiType( type )] = typeCounts[ QGis::multiType( type )] + 1;
      }
      else
      {
        typeCounts[ type ] = typeCounts[ type ] + 1;
      }
    }
    else if ( QGis::isMultiType( type ) )
    {
      if ( typeCounts.contains( QGis::singleType( type ) ) )
      {
        // switch to multi type
        typeCounts[type] = typeCounts[ QGis::singleType( type )];
        typeCounts.remove( QGis::singleType( type ) );
      }
      typeCounts[type] = typeCounts[type] + 1;
    }
  }

  QGis::WkbType wkbType = !typeCounts.isEmpty() ? typeCounts.keys().value( 0 ) : QGis::WKBNoGeometry;

  QString typeName = wkbType != QGis::WKBNoGeometry ? QString( QGis::featureType( wkbType ) ).remove( "WKB" ) : "none";

  if ( features.isEmpty() )
  {
    // should not happen
    messageBar()->pushMessage( tr( "Paste features" ),
                               tr( "No features in clipboard." ),
                               QgsMessageBar::WARNING, messageTimeout() );
    return nullptr;
  }
  else if ( typeCounts.size() > 1 )
  {
    messageBar()->pushMessage( tr( "Paste features" ),
                               tr( "Multiple geometry types found, features with geometry different from %1 will be created without geometry." ).arg( typeName ),
                               QgsMessageBar::INFO, messageTimeout() );
  }

  typeName += QString( "?memoryid=%1" ).arg( QUuid::createUuid().toString() );
  QgsDebugMsg( QString( "output wkbType = %1 typeName = %2" ).arg( wkbType ).arg( typeName ) );

  QgsVectorLayer *layer = new QgsVectorLayer( typeName, "pasted_features", "memory" );

  if ( !layer->isValid() || !layer->dataProvider() )
  {
    delete layer;
    messageBar()->pushMessage( tr( "Paste features" ),
                               tr( "Cannot create new layer." ),
                               QgsMessageBar::WARNING, messageTimeout() );
    return nullptr;
  }

  layer->startEditing();
  if ( wkbType != QGis::WKBNoGeometry )
    layer->setCrs( clipboard()->crs(), false );

  Q_FOREACH ( QgsField f, clipboard()->fields().toList() )
  {
    QgsDebugMsg( QString( "field %1 (%2)" ).arg( f.name(), QVariant::typeToName( f.type() ) ) );
    if ( !layer->addAttribute( f ) )
    {
      messageBar()->pushMessage( tr( "Paste features" ),
                                 tr( "Cannot create field %1 (%2,%3)" ).arg( f.name(), f.typeName(), QVariant::typeToName( f.type() ) ),
                                 QgsMessageBar::WARNING, messageTimeout() );
      delete layer;
      return nullptr;
    }
  }

  // Convert to multi if necessary
  for ( int i = 0; i < features.size(); i++ )
  {
    QgsFeature &feature = features[i];
    if ( !feature.constGeometry() )
      continue;

    QGis::WkbType type = QGis::flatType( feature.constGeometry()->wkbType() );
    if ( type == QGis::WKBUnknown || type == QGis::WKBNoGeometry )
      continue;

    if ( QGis::singleType( wkbType ) != QGis::singleType( type ) )
    {
      feature.setGeometry( nullptr );
    }

    if ( QGis::isMultiType( wkbType ) &&  QGis::isSingleType( type ) )
    {
      feature.geometry()->convertToMultiType();
    }
  }
  if ( ! layer->addFeatures( features, false ) || !layer->commitChanges() )
  {
    QgsDebugMsg( "Cannot add features or commit changes" );
    delete layer;
    return nullptr;
  }

  QgsDebugMsg( QString( "%1 features pasted to temporary scratch layer" ).arg( layer->featureCount() ) );
  return layer;
}

void QgisApp::copyStyle( QgsMapLayer * sourceLayer )
{
  QgsMapLayer *selectionLayer = sourceLayer ? sourceLayer : activeLayer();

  if ( selectionLayer )
  {
    QString errorMsg;
    QDomDocument doc( "qgis" );
    selectionLayer->exportNamedStyle( doc, errorMsg );


    if ( !errorMsg.isEmpty() )
    {
      messageBar()->pushMessage( tr( "Cannot copy style" ),
                                 errorMsg,
                                 QgsMessageBar::CRITICAL, messageTimeout() );
      return;
    }
    // Copies data in text form as well, so the XML can be pasted into a text editor
    clipboard()->setData( QGSCLIPBOARD_STYLE_MIME, doc.toByteArray(), doc.toString() );
    // Enables the paste menu element
    mActionPasteStyle->setEnabled( true );
  }
}
/**
   \param destinationLayer  The layer that the clipboard will be pasted to
                            (defaults to the active layer on the legend)
 */


void QgisApp::pasteStyle( QgsMapLayer * destinationLayer )
{
  QgsMapLayer *selectionLayer = destinationLayer ? destinationLayer : activeLayer();
  if ( selectionLayer )
  {
    if ( clipboard()->hasFormat( QGSCLIPBOARD_STYLE_MIME ) )
    {
      QDomDocument doc( "qgis" );
      QString errorMsg;
      int errorLine, errorColumn;
      if ( !doc.setContent( clipboard()->data( QGSCLIPBOARD_STYLE_MIME ), false, &errorMsg, &errorLine, &errorColumn ) )
      {

        messageBar()->pushMessage( tr( "Cannot parse style" ),
                                   errorMsg,
                                   QgsMessageBar::CRITICAL, messageTimeout() );
        return;
      }

      bool isVectorStyle = doc.elementsByTagName( "pipe" ).isEmpty();
      if (( selectionLayer->type() == QgsMapLayer::RasterLayer && isVectorStyle ) ||
          ( selectionLayer->type() == QgsMapLayer::VectorLayer && !isVectorStyle ) )
      {
        return;
      }

      if ( !selectionLayer->importNamedStyle( doc, errorMsg ) )
      {
        messageBar()->pushMessage( tr( "Cannot paste style" ),
                                   errorMsg,
                                   QgsMessageBar::CRITICAL, messageTimeout() );
        return;
      }

      mLayerTreeView->refreshLayerSymbology( selectionLayer->id() );
      selectionLayer->triggerRepaint();
    }
  }
}

void QgisApp::copyFeatures( QgsFeatureStore & featureStore )
{
  clipboard()->replaceWithCopyOf( featureStore );
}

void QgisApp::refreshMapCanvas()
{
  //stop any current rendering
  mMapCanvas->stopRendering();

  mMapCanvas->refreshAllLayers();
}

void QgisApp::canvasRefreshStarted()
{
  showProgress( -1, 0 ); // trick to make progress bar show busy indicator
}

void QgisApp::canvasRefreshFinished()
{
  showProgress( 0, 0 ); // stop the busy indicator
}

void QgisApp::toggleMapTips( bool enabled )
{
  mMapTipsVisible = enabled;
  // Store if maptips are active
  QSettings().setValue( "/qgis/enableMapTips", mMapTipsVisible );

  // if off, stop the timer
  if ( !mMapTipsVisible )
  {
    mpMapTipsTimer->stop();
  }

  if ( mActionMapTips->isChecked() != mMapTipsVisible )
    mActionMapTips->setChecked( mMapTipsVisible );
}

void QgisApp::toggleEditing()
{
  QgsVectorLayer *currentLayer = qobject_cast<QgsVectorLayer*>( activeLayer() );
  if ( currentLayer )
  {
    toggleEditing( currentLayer, true );
  }
  else
  {
    // active although there's no layer active!?
    mActionToggleEditing->setChecked( false );
  }
}

bool QgisApp::toggleEditing( QgsMapLayer *layer, bool allowCancel )
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );
  if ( !vlayer )
  {
    return false;
  }

  bool res = true;

  QString connString = QgsDataSourceURI( vlayer->source() ).connectionInfo();
  QString key = vlayer->providerType();

  QMap< QPair< QString, QString>, QgsTransactionGroup*> transactionGroups = QgsProject::instance()->transactionGroups();
  QMap< QPair< QString, QString>, QgsTransactionGroup*>::iterator tIt = transactionGroups .find( qMakePair( key, connString ) );
  QgsTransactionGroup* tg = ( tIt != transactionGroups.end() ? tIt.value() : nullptr );

  bool isModified = false;

  // Assume changes if: a) the layer reports modifications or b) its transaction group was modified
  if ( vlayer->isModified() || ( tg && tg->layers().contains( vlayer ) && tg->modified() ) )
    isModified  = true;

  if ( !vlayer->isEditable() && !vlayer->readOnly() )
  {
    if ( !( vlayer->dataProvider()->capabilities() & QgsVectorDataProvider::EditingCapabilities ) )
    {
      mActionToggleEditing->setChecked( false );
      mActionToggleEditing->setEnabled( false );
      messageBar()->pushMessage( tr( "Start editing failed" ),
                                 tr( "Provider cannot be opened for editing" ),
                                 QgsMessageBar::INFO, messageTimeout() );
      return false;
    }

    vlayer->startEditing();

    QSettings settings;
    QString markerType = settings.value( "/qgis/digitizing/marker_style", "Cross" ).toString();
    bool markSelectedOnly = settings.value( "/qgis/digitizing/marker_only_for_selected", false ).toBool();

    // redraw only if markers will be drawn
    if (( !markSelectedOnly || vlayer->selectedFeatureCount() > 0 ) &&
        ( markerType == "Cross" || markerType == "SemiTransparentCircle" ) )
    {
      vlayer->triggerRepaint();
    }
  }
  else if ( isModified )
  {
    QMessageBox::StandardButtons buttons = QMessageBox::Save | QMessageBox::Discard;
    if ( allowCancel )
      buttons |= QMessageBox::Cancel;

    switch ( QMessageBox::information( nullptr,
                                       tr( "Stop editing" ),
                                       tr( "Do you want to save the changes to layer %1?" ).arg( vlayer->name() ),
                                       buttons ) )
    {
      case QMessageBox::Cancel:
        res = false;
        break;

      case QMessageBox::Save:
        QApplication::setOverrideCursor( Qt::WaitCursor );

        if ( !vlayer->commitChanges() )
        {
          commitError( vlayer );
          // Leave the in-memory editing state alone,
          // to give the user a chance to enter different values
          // and try the commit again later
          res = false;
        }

        vlayer->triggerRepaint();

        QApplication::restoreOverrideCursor();
        break;

      case QMessageBox::Discard:
        QApplication::setOverrideCursor( Qt::WaitCursor );

        mMapCanvas->freeze( true );
        if ( !vlayer->rollBack() )
        {
          messageBar()->pushMessage( tr( "Error" ),
                                     tr( "Problems during roll back" ),
                                     QgsMessageBar::CRITICAL );
          res = false;
        }
        mMapCanvas->freeze( false );

        vlayer->triggerRepaint();

        QApplication::restoreOverrideCursor();
        break;

      default:
        break;
    }
  }
  else //layer not modified
  {
    mMapCanvas->freeze( true );
    vlayer->rollBack();
    mMapCanvas->freeze( false );
    res = true;
    vlayer->triggerRepaint();
  }

  if ( !res && layer == activeLayer() )
  {
    // while also called when layer sends editingStarted/editingStopped signals,
    // this ensures correct restoring of gui state if toggling was canceled
    // or layer commit/rollback functions failed
    activateDeactivateLayerRelatedActions( layer );
  }

  return res;
}

void QgisApp::saveActiveLayerEdits()
{
  saveEdits( activeLayer(), true, true );
}

void QgisApp::saveEdits( QgsMapLayer *layer, bool leaveEditable, bool triggerRepaint )
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );
  if ( !vlayer || !vlayer->isEditable() || !vlayer->isModified() )
    return;

  if ( vlayer == activeLayer() )
    mSaveRollbackInProgress = true;

  // stop rendering to avoid lock in case of
  // splilte and gpkg fix #15498
  if ( mMapCanvas->mapSettings().layers().contains( vlayer->id() ) )
  {
    if ( vlayer->dataProvider()->storageType().count( "SQLite" ) ||
         vlayer->dataProvider()->storageType().count( "GPKG" ) )
    {
      if ( mMapCanvas->isDrawing() )
        mMapCanvas->stopRendering();
    }
  }

  if ( !vlayer->commitChanges() )
  {
    mSaveRollbackInProgress = false;
    commitError( vlayer );
  }

  if ( leaveEditable )
  {
    vlayer->startEditing();
  }
  if ( triggerRepaint )
  {
    vlayer->triggerRepaint();
  }
}

void QgisApp::cancelEdits( QgsMapLayer *layer, bool leaveEditable, bool triggerRepaint )
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );
  if ( !vlayer || !vlayer->isEditable() )
    return;

  if ( vlayer == activeLayer() && leaveEditable )
    mSaveRollbackInProgress = true;

  mMapCanvas->freeze( true );
  if ( !vlayer->rollBack( !leaveEditable ) )
  {
    mSaveRollbackInProgress = false;
    QMessageBox::information( nullptr,
                              tr( "Error" ),
                              tr( "Could not %1 changes to layer %2\n\nErrors: %3\n" )
                              .arg( leaveEditable ? tr( "rollback" ) : tr( "cancel" ),
                                    vlayer->name(),
                                    vlayer->commitErrors().join( "\n  " ) ) );
  }
  mMapCanvas->freeze( false );

  if ( leaveEditable )
  {
    vlayer->startEditing();
  }
  if ( triggerRepaint )
  {
    vlayer->triggerRepaint();
  }
}

void QgisApp::saveEdits()
{
  Q_FOREACH ( QgsMapLayer * layer, mLayerTreeView->selectedLayers() )
  {
    saveEdits( layer, true, false );
  }
  mMapCanvas->refresh();
  activateDeactivateLayerRelatedActions( activeLayer() );
}

void QgisApp::saveAllEdits( bool verifyAction )
{
  if ( verifyAction )
  {
    if ( !verifyEditsActionDialog( tr( "Save" ), tr( "all" ) ) )
      return;
  }

  Q_FOREACH ( QgsMapLayer * layer, editableLayers( true ) )
  {
    saveEdits( layer, true, false );
  }
  mMapCanvas->refresh();
  activateDeactivateLayerRelatedActions( activeLayer() );
}

void QgisApp::rollbackEdits()
{
  Q_FOREACH ( QgsMapLayer * layer, mLayerTreeView->selectedLayers() )
  {
    cancelEdits( layer, true, false );
  }
  mMapCanvas->refresh();
  activateDeactivateLayerRelatedActions( activeLayer() );
}

void QgisApp::rollbackAllEdits( bool verifyAction )
{
  if ( verifyAction )
  {
    if ( !verifyEditsActionDialog( tr( "Rollback" ), tr( "all" ) ) )
      return;
  }

  Q_FOREACH ( QgsMapLayer * layer, editableLayers( true ) )
  {
    cancelEdits( layer, true, false );
  }
  mMapCanvas->refresh();
  activateDeactivateLayerRelatedActions( activeLayer() );
}

void QgisApp::cancelEdits()
{
  Q_FOREACH ( QgsMapLayer * layer, mLayerTreeView->selectedLayers() )
  {
    cancelEdits( layer, false, false );
  }
  mMapCanvas->refresh();
  activateDeactivateLayerRelatedActions( activeLayer() );
}

void QgisApp::cancelAllEdits( bool verifyAction )
{
  if ( verifyAction )
  {
    if ( !verifyEditsActionDialog( tr( "Cancel" ), tr( "all" ) ) )
      return;
  }

  Q_FOREACH ( QgsMapLayer * layer, editableLayers() )
  {
    cancelEdits( layer, false, false );
  }
  mMapCanvas->refresh();
  activateDeactivateLayerRelatedActions( activeLayer() );
}

bool QgisApp::verifyEditsActionDialog( const QString& act, const QString& upon )
{
  bool res = false;
  switch ( QMessageBox::information( nullptr,
                                     tr( "Current edits" ),
                                     tr( "%1 current changes for %2 layer(s)?" )
                                     .arg( act,
                                           upon ),
                                     QMessageBox::Cancel | QMessageBox::Ok ) )
  {
    case QMessageBox::Ok:
      res = true;
      break;
    default:
      break;
  }
  return res;
}

void QgisApp::updateLayerModifiedActions()
{
  bool enableSaveLayerEdits = false;
  QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>( activeLayer() );
  if ( vlayer )
  {
    QgsVectorDataProvider* dprovider = vlayer->dataProvider();
    if ( dprovider )
    {
      enableSaveLayerEdits = ( dprovider->capabilities() & QgsVectorDataProvider::ChangeAttributeValues
                               && vlayer->isEditable()
                               && vlayer->isModified() );
    }
  }
  mActionSaveLayerEdits->setEnabled( enableSaveLayerEdits );

  QList<QgsLayerTreeLayer*> selectedLayerNodes = mLayerTreeView ? mLayerTreeView->selectedLayerNodes() : QList<QgsLayerTreeLayer*>();

  mActionSaveEdits->setEnabled( QgsLayerTreeUtils::layersModified( selectedLayerNodes ) );
  mActionRollbackEdits->setEnabled( QgsLayerTreeUtils::layersModified( selectedLayerNodes ) );
  mActionCancelEdits->setEnabled( QgsLayerTreeUtils::layersEditable( selectedLayerNodes ) );

  bool hasEditLayers = !editableLayers().isEmpty();
  mActionAllEdits->setEnabled( hasEditLayers );
  mActionCancelAllEdits->setEnabled( hasEditLayers );

  bool hasModifiedLayers = !editableLayers( true ).isEmpty();
  mActionSaveAllEdits->setEnabled( hasModifiedLayers );
  mActionRollbackAllEdits->setEnabled( hasModifiedLayers );
}

QList<QgsMapLayer *> QgisApp::editableLayers( bool modified ) const
{
  QList<QgsMapLayer*> editLayers;
  // use legend layers (instead of registry) so QList mirrors its order
  Q_FOREACH ( QgsLayerTreeLayer* nodeLayer, mLayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
  {
    if ( !nodeLayer->layer() )
      continue;

    QgsVectorLayer *vl = qobject_cast<QgsVectorLayer*>( nodeLayer->layer() );
    if ( !vl )
      continue;

    if ( vl->isEditable() && ( !modified || vl->isModified() ) )
      editLayers << vl;
  }
  return editLayers;
}

void QgisApp::duplicateVectorStyle( QgsVectorLayer* srcLayer, QgsVectorLayer* destLayer )
{
  // copy symbology, if possible
  if ( srcLayer->geometryType() == destLayer->geometryType() )
  {
    QDomImplementation DomImplementation;
    QDomDocumentType documentType =
      DomImplementation.createDocumentType(
        "qgis", "http://mrcc.com/qgis.dtd", "SYSTEM" );
    QDomDocument doc( documentType );
    QDomElement rootNode = doc.createElement( "qgis" );
    rootNode.setAttribute( "version", QGis::QGIS_VERSION );
    doc.appendChild( rootNode );
    QString errorMsg;
    srcLayer->writeSymbology( rootNode, doc, errorMsg );
    destLayer->readSymbology( rootNode, errorMsg );
  }
}

void QgisApp::layerSubsetString()
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( activeLayer() );
  if ( !vlayer )
    return;

  if ( !vlayer->vectorJoins().isEmpty() )
  {
    if ( QMessageBox::question( NULL, tr( "Filter on joined fields" ),
                                tr( "You are about to set a subset filter on a layer that has joined fields. "
                                    "Joined fields cannot be filtered, unless you convert the layer to a virtual layer first. "
                                    "Would you like to create a virtual layer out of this layer first?" ),
                                QMessageBox::Yes | QMessageBox::No ) == QMessageBox::Yes )
    {
      QgsVirtualLayerDefinition def = QgsVirtualLayerDefinitionUtils::fromJoinedLayer( vlayer );
      QgsVectorLayer* newLayer = new QgsVectorLayer( def.toString(), vlayer->name() + " (virtual)", "virtual" );
      if ( newLayer->isValid() )
      {
        duplicateVectorStyle( vlayer, newLayer );
        QgsMapLayerRegistry::instance()->addMapLayer( newLayer, /*addToLegend*/ false, /*takeOwnership*/ true );
        QgsLayerTreeUtils::insertLayerBelow( QgsProject::instance()->layerTreeRoot(), vlayer, newLayer );
        mLayerTreeView->setCurrentLayer( newLayer );
        // hide the old layer
        QgsLayerTreeLayer* vLayerTreeLayer = QgsProject::instance()->layerTreeRoot()->findLayer( vlayer->id() );
        if ( vLayerTreeLayer )
          vLayerTreeLayer->setVisible( Qt::Unchecked );
        vlayer = newLayer;
      }
      else
      {
        delete newLayer;
      }
    }
  }

  // launch the query builder
  QgsQueryBuilder *qb = new QgsQueryBuilder( vlayer, this );
  QString subsetBefore = vlayer->subsetString();

  // Set the sql in the query builder to the same in the prop dialog
  // (in case the user has already changed it)
  qb->setSql( vlayer->subsetString() );
  // Open the query builder and refresh symbology if sql has changed
  // Note: repaintRequested is emitted directly from QgsQueryBuilder
  //       when the sql is set in the layer.
  if ( qb->exec() && ( subsetBefore != qb->sql() ) && mLayerTreeView )
      {
        mLayerTreeView->refreshLayerSymbology( vlayer->id() );
    activateDeactivateLayerRelatedActions( vlayer );
  }

  // delete the query builder object
  delete qb;
}

void QgisApp::saveLastMousePosition( const QgsPoint & p )
{
  if ( mMapTipsVisible )
  {
    // store the point, we need it for when the maptips timer fires
    mLastMapPosition = p;

    // we use this slot to control the timer for maptips since it is fired each time
    // the mouse moves.
    if ( mMapCanvas->underMouse() )
    {
      // Clear the maptip (this is done conditionally)
      mpMaptip->clear( mMapCanvas );
      // don't start the timer if the mouse is not over the map canvas
      mpMapTipsTimer->start();
      //QgsDebugMsg("Started maptips timer");
    }
  }
}


void QgisApp::showScale( double theScale )
{
  // Why has MapCanvas the scale inverted?
  mScaleWidget->setScale( 1.0 / theScale );

  // Not sure if the lines below do anything meaningful /Homann
  if ( mScaleWidget->width() > mScaleWidget->minimumWidth() )
  {
    mScaleWidget->setMinimumWidth( mScaleWidget->width() );
  }
}


void QgisApp::userRotation()
{
  double degrees = mRotationEdit->value();
  mMapCanvas->setRotation( degrees );
  mMapCanvas->refresh();
}

// toggle overview status
void QgisApp::isInOverview()
{
  mLayerTreeView->defaultActions()->showInOverview();
}

void QgisApp::removingLayers( const QStringList& theLayers )
{
  Q_FOREACH ( const QString &layerId, theLayers )
  {
    QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>(
                               QgsMapLayerRegistry::instance()->mapLayer( layerId ) );
    if ( !vlayer || !vlayer->isEditable() )
      return;

    toggleEditing( vlayer, false );
  }
}

void QgisApp::removeAllLayers()
{
  QgsMapLayerRegistry::instance()->removeAllMapLayers();
}

void QgisApp::removeLayer()
{
  if ( !mLayerTreeView )
  {
    return;
  }

  Q_FOREACH ( QgsMapLayer * layer, mLayerTreeView->selectedLayers() )
  {
    QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>( layer );
    if ( vlayer && vlayer->isEditable() && !toggleEditing( vlayer, true ) )
      return;
  }

  QList<QgsLayerTreeNode*> selectedNodes = mLayerTreeView->selectedNodes( true );

  //validate selection
  if ( selectedNodes.isEmpty() )
  {
    messageBar()->pushMessage( tr( "No legend entries selected" ),
                               tr( "Select the layers and groups you want to remove in the legend." ),
                               QgsMessageBar::INFO, messageTimeout() );
    return;
  }

  bool promptConfirmation = QSettings().value( "qgis/askToDeleteLayers", true ).toBool();
  bool shiftHeld = QApplication::queryKeyboardModifiers().testFlag( Qt::ShiftModifier );
  //display a warning
  if ( !shiftHeld && promptConfirmation && QMessageBox::warning( this, tr( "Remove layers and groups" ), tr( "Remove %n legend entries?", "number of legend items to remove", selectedNodes.count() ), QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
  {
    return;
  }

  Q_FOREACH ( QgsLayerTreeNode* node, selectedNodes )
  {
    QgsLayerTreeGroup* parentGroup = qobject_cast<QgsLayerTreeGroup*>( node->parent() );
    if ( parentGroup )
      parentGroup->removeChildNode( node );
  }

  showStatusMessage( tr( "%n legend entries removed.", "number of removed legend entries", selectedNodes.count() ) );

  mMapCanvas->refresh();
}

void QgisApp::duplicateLayers( const QList<QgsMapLayer *>& lyrList )
{
  if ( !mLayerTreeView )
  {
    return;
  }

  const QList<QgsMapLayer *> selectedLyrs = lyrList.empty() ? mLayerTreeView->selectedLayers() : lyrList;
  if ( selectedLyrs.empty() )
  {
    return;
  }

  mMapCanvas->freeze();
  QgsMapLayer *dupLayer;
  QString layerDupName, unSppType;
  QList<QgsMessageBarItem *> msgBars;

  Q_FOREACH ( QgsMapLayer * selectedLyr, selectedLyrs )
  {
    dupLayer = nullptr;
    unSppType.clear();
    layerDupName = selectedLyr->name() + ' ' + tr( "copy" );

    if ( selectedLyr->type() == QgsMapLayer::PluginLayer )
    {
      unSppType = tr( "Plugin layer" );
    }

    // duplicate the layer's basic parameters

    if ( unSppType.isEmpty() )
    {
      QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>( selectedLyr );
      // TODO: add other layer types that can be duplicated
      // currently memory and plugin layers are skipped
      if ( vlayer && vlayer->storageType() == "Memory storage" )
      {
        unSppType = tr( "Memory layer" );
      }
      else if ( vlayer )
      {
        QgsVectorLayer *dupVLayer = new QgsVectorLayer( vlayer->source(), layerDupName, vlayer->providerType() );
        if ( vlayer->dataProvider() )
        {
          dupVLayer->setProviderEncoding( vlayer->dataProvider()->encoding() );
        }

        //add variables defined in layer properties
        QStringList variableNames = vlayer->customProperty( "variableNames" ).toStringList();
        QStringList variableValues = vlayer->customProperty( "variableValues" ).toStringList();

        int varIndex = 0;
        Q_FOREACH ( const QString& variableName, variableNames )
        {
          if ( varIndex >= variableValues.length() )
          {
            break;
          }

          QVariant varValue = variableValues.at( varIndex );
          varIndex++;
          QgsExpressionContextUtils::setLayerVariable( dupVLayer, variableName, varValue );
        }

        Q_FOREACH ( const QgsVectorJoinInfo& join, vlayer->vectorJoins() )
          dupVLayer->addJoin( join );

        for ( int fld = 0; fld < vlayer->fields().count(); fld++ )
        {
          if ( vlayer->fields().fieldOrigin( fld ) == QgsFields::OriginExpression )
            dupVLayer->addExpressionField( vlayer->expressionField( fld ), vlayer->fields().at( fld ) );
        }

        dupLayer = dupVLayer;
      }
    }

    if ( unSppType.isEmpty() && !dupLayer )
    {
      QgsRasterLayer *rlayer = qobject_cast<QgsRasterLayer*>( selectedLyr );
      if ( rlayer )
      {
        dupLayer = new QgsRasterLayer( rlayer->source(), layerDupName );
      }
    }

    if ( unSppType.isEmpty() && dupLayer && !dupLayer->isValid() )
    {
      msgBars.append( new QgsMessageBarItem(
                        tr( "Duplicate layer: " ),
                        tr( "%1 (duplication resulted in invalid layer)" ).arg( selectedLyr->name() ),
                        QgsMessageBar::WARNING,
                        0,
                        mInfoBar ) );
      continue;
    }

    if ( !unSppType.isEmpty() || !dupLayer )
    {
      msgBars.append( new QgsMessageBarItem(
                        tr( "Duplicate layer: " ),
                        tr( "%1 (%2 type unsupported)" )
                        .arg( selectedLyr->name(),
                              !unSppType.isEmpty() ? QString( "'" ) + unSppType + "' " : "" ),
                        QgsMessageBar::WARNING,
                        0,
                        mInfoBar ) );
      continue;
    }

    // add layer to layer registry and legend
    QList<QgsMapLayer *> myList;
    myList << dupLayer;
    QgsProject::instance()->layerTreeRegistryBridge()->setEnabled( false );
    QgsMapLayerRegistry::instance()->addMapLayers( myList );
    QgsProject::instance()->layerTreeRegistryBridge()->setEnabled( true );

    QgsLayerTreeLayer* nodeSelectedLyr = mLayerTreeView->layerTreeModel()->rootGroup()->findLayer( selectedLyr->id() );
    Q_ASSERT( nodeSelectedLyr );
    Q_ASSERT( QgsLayerTree::isGroup( nodeSelectedLyr->parent() ) );
    QgsLayerTreeGroup* parentGroup = QgsLayerTree::toGroup( nodeSelectedLyr->parent() );

    QgsLayerTreeLayer* nodeDupLayer = parentGroup->insertLayer( parentGroup->children().indexOf( nodeSelectedLyr ) + 1, dupLayer );

    // always set duplicated layers to not visible so layer can be configured before being turned on
    nodeDupLayer->setVisible( Qt::Unchecked );

    // duplicate the layer style
    QString errMsg;
    QDomDocument style;
    selectedLyr->exportNamedStyle( style, errMsg );
    if ( errMsg.isEmpty() )
      dupLayer->importNamedStyle( style, errMsg );
    if ( !errMsg.isEmpty() )
      messageBar()->pushMessage( errMsg,
                                 tr( "Cannot copy style to duplicated layer." ),
                                 QgsMessageBar::CRITICAL, messageTimeout() );
  }

  dupLayer = nullptr;

  mMapCanvas->freeze( false );

  // display errors in message bar after duplication of layers
  Q_FOREACH ( QgsMessageBarItem * msgBar, msgBars )
  {
    mInfoBar->pushItem( msgBar );
  }
}

void QgisApp::setLayerScaleVisibility()
{
  if ( !mLayerTreeView )
    return;

  QList<QgsMapLayer*> layers = mLayerTreeView->selectedLayers();

  if ( layers.length() < 1 )
    return;

  QgsScaleVisibilityDialog* dlg = new QgsScaleVisibilityDialog( this, tr( "Set scale visibility for selected layers" ), mMapCanvas );
  QgsMapLayer* layer = mLayerTreeView->currentLayer();
  if ( layer )
  {
    dlg->setScaleVisiblity( layer->hasScaleBasedVisibility() );
    dlg->setMinimumScale( 1.0 / layer->maximumScale() );
    dlg->setMaximumScale( 1.0 / layer->minimumScale() );
  }
  if ( dlg->exec() )
  {
    mMapCanvas->freeze();
    Q_FOREACH ( QgsMapLayer* layer, layers )
    {
      layer->setScaleBasedVisibility( dlg->hasScaleVisibility() );
      layer->setMinimumScale( 1.0 / dlg->maximumScale() );
      layer->setMaximumScale( 1.0 / dlg->minimumScale() );
    }
    mMapCanvas->freeze( false );
    mMapCanvas->refresh();
  }
  delete dlg;
}

void QgisApp::zoomToLayerScale()
{
  if ( !mLayerTreeView )
    return;

  QList<QgsMapLayer*> layers = mLayerTreeView->selectedLayers();

  if ( layers.length() < 1 )
    return;

  QgsMapLayer* layer = mLayerTreeView->currentLayer();
  if ( layer && layer->hasScaleBasedVisibility() )
  {
    const double scale = mMapCanvas->scale();
    if ( scale > layer->maximumScale() )
    {
      mMapCanvas->zoomScale( layer->maximumScale() * QGis::SCALE_PRECISION );
    }
    else if ( scale <= layer->minimumScale() )
    {
      mMapCanvas->zoomScale( layer->minimumScale() );
    }
  }
}

void QgisApp::setLayerCRS()
{
  if ( !( mLayerTreeView && mLayerTreeView->currentLayer() ) )
  {
    return;
  }

  QgsGenericProjectionSelector mySelector( this );
  mySelector.setSelectedCrsId( mLayerTreeView->currentLayer()->crs().srsid() );
  mySelector.setMessage();
  if ( !mySelector.exec() )
  {
    QApplication::restoreOverrideCursor();
    return;
  }

  QgsCoordinateReferenceSystem crs = QgsCRSCache::instance()->crsBySrsId( mySelector.selectedCrsId() );

  Q_FOREACH ( QgsLayerTreeNode* node, mLayerTreeView->selectedNodes() )
  {
    if ( QgsLayerTree::isGroup( node ) )
    {
      Q_FOREACH ( QgsLayerTreeLayer* child, QgsLayerTree::toGroup( node )->findLayers() )
      {
        if ( child->layer() )
        {
          child->layer()->setCrs( crs );
          child->layer()->triggerRepaint();
        }
      }
    }
    else if ( QgsLayerTree::isLayer( node ) )
    {
      QgsLayerTreeLayer* nodeLayer = QgsLayerTree::toLayer( node );
      if ( nodeLayer->layer() )
      {
        nodeLayer->layer()->setCrs( crs );
        nodeLayer->layer()->triggerRepaint();
      }
    }
  }

  mMapCanvas->refresh();
}

void QgisApp::setProjectCRSFromLayer()
{
  if ( !( mLayerTreeView && mLayerTreeView->currentLayer() ) )
  {
    return;
  }

  QgsCoordinateReferenceSystem crs = mLayerTreeView->currentLayer()->crs();
  mMapCanvas->freeze();
  mMapCanvas->setDestinationCrs( crs );
  if ( crs.mapUnits() != QGis::UnknownUnit )
  {
    mMapCanvas->setMapUnits( crs.mapUnits() );
  }
  mMapCanvas->freeze( false );
  mMapCanvas->refresh();
}


void QgisApp::legendLayerZoomNative()
{
  if ( !mLayerTreeView )
    return;

  //find current Layer
  QgsMapLayer* currentLayer = mLayerTreeView->currentLayer();
  if ( !currentLayer )
    return;

  QgsRasterLayer *layer =  qobject_cast<QgsRasterLayer *>( currentLayer );
  if ( layer )
  {
    QgsDebugMsg( "Raster units per pixel  : " + QString::number( layer->rasterUnitsPerPixelX() ) );
    QgsDebugMsg( "MapUnitsPerPixel before : " + QString::number( mMapCanvas->mapUnitsPerPixel() ) );

    if ( mMapCanvas->hasCrsTransformEnabled() )
    {
      // get length of central canvas pixel width in source raster crs
      QgsRectangle e = mMapCanvas->extent();
      QSize s = mMapCanvas->mapSettings().outputSize();
      QgsPoint p1( e.center().x(), e.center().y() );
      QgsPoint p2( e.center().x() + e.width() / s.width(), e.center().y() + e.height() / s.height() );
      QgsCoordinateTransform ct( mMapCanvas->mapSettings().destinationCrs(), layer->crs() );
      p1 = ct.transform( p1 );
      p2 = ct.transform( p2 );
      double width = sqrt( p1.sqrDist( p2 ) ); // width (actually the diagonal) of reprojected pixel
      mMapCanvas->zoomByFactor( sqrt( layer->rasterUnitsPerPixelX() * layer->rasterUnitsPerPixelX() + layer->rasterUnitsPerPixelY() * layer->rasterUnitsPerPixelY() ) / width );
    }
    else
    {
      mMapCanvas->zoomByFactor( qAbs( layer->rasterUnitsPerPixelX() / mMapCanvas->mapUnitsPerPixel() ) );
    }
    mMapCanvas->refresh();
    QgsDebugMsg( "MapUnitsPerPixel after  : " + QString::number( mMapCanvas->mapUnitsPerPixel() ) );
  }
}

void QgisApp::legendLayerStretchUsingCurrentExtent()
{
  if ( !mLayerTreeView )
    return;

  //find current Layer
  QgsMapLayer* currentLayer = mLayerTreeView->currentLayer();
  if ( !currentLayer )
    return;

  QgsRasterLayer *layer =  qobject_cast<QgsRasterLayer *>( currentLayer );
  if ( layer )
  {
    QgsContrastEnhancement::ContrastEnhancementAlgorithm contrastEnhancementAlgorithm = QgsContrastEnhancement::StretchToMinimumMaximum;

    QgsRectangle myRectangle;
    myRectangle = mMapCanvas->mapSettings().outputExtentToLayerExtent( layer, mMapCanvas->extent() );
    layer->setContrastEnhancement( contrastEnhancementAlgorithm, QgsRaster::ContrastEnhancementMinMax, myRectangle );

    mLayerTreeView->refreshLayerSymbology( layer->id() );
    mMapCanvas->refresh();
  }
}

void QgisApp::applyStyleToGroup()
{
  if ( !mLayerTreeView )
    return;

  Q_FOREACH ( QgsLayerTreeNode* node, mLayerTreeView->selectedNodes() )
  {
    if ( QgsLayerTree::isGroup( node ) )
    {
      Q_FOREACH ( QgsLayerTreeLayer* nodeLayer, QgsLayerTree::toGroup( node )->findLayers() )
      {
        if ( nodeLayer->layer() )
        {
          pasteStyle( nodeLayer->layer() );
        }
      }
    }
    else if ( QgsLayerTree::isLayer( node ) )
    {
      QgsLayerTreeLayer* nodeLayer = QgsLayerTree::toLayer( node );
      if ( nodeLayer->layer() )
      {
        pasteStyle( nodeLayer->layer() );
      }
    }
  }
}

void QgisApp::legendGroupSetCRS()
{
  if ( !mMapCanvas )
  {
    return;
  }

  QgsLayerTreeGroup* currentGroup = mLayerTreeView->currentGroupNode();
  if ( !currentGroup )
    return;

  QgsGenericProjectionSelector mySelector( this );
  mySelector.setMessage();
  if ( !mySelector.exec() )
  {
    QApplication::restoreOverrideCursor();
    return;
  }

  QgsCoordinateReferenceSystem crs = QgsCRSCache::instance()->crsBySrsId( mySelector.selectedCrsId() );
  Q_FOREACH ( QgsLayerTreeLayer* nodeLayer, currentGroup->findLayers() )
  {
    if ( nodeLayer->layer() )
    {
      nodeLayer->layer()->setCrs( crs );
      nodeLayer->layer()->triggerRepaint();
    }
  }
}

void QgisApp::legendGroupSetWMSData()
{
  QgsLayerTreeGroup* currentGroup = mLayerTreeView->currentGroupNode();
  if ( !currentGroup )
    return;
  QgsGroupWMSDataDialog* dlg = new QgsGroupWMSDataDialog( this );
  dlg->setGroupShortName( currentGroup->customProperty( "wmsShortName" ).toString() );
  dlg->setGroupTitle( currentGroup->customProperty( "wmsTitle" ).toString() );
  dlg->setGroupTitle( currentGroup->customProperty( "wmsAbstract" ).toString() );
  if ( dlg->exec() )
  {
    currentGroup->setCustomProperty( "wmsShortName", dlg->groupShortName() );
    currentGroup->setCustomProperty( "wmsTitle", dlg->groupTitle() );
    currentGroup->setCustomProperty( "wmsAbstract", dlg->groupAbstract() );
  }
  delete dlg;
}

void QgisApp::zoomToLayerExtent()
{
  mLayerTreeView->defaultActions()->zoomToLayer( mMapCanvas );
}

void QgisApp::showPluginManager()
{

  if ( mPythonUtils && mPythonUtils->isEnabled() )
  {
    // Call pluginManagerInterface()->showPluginManager() as soon as the plugin installer says the remote data is fetched.
    QgsPythonRunner::run( "pyplugin_installer.instance().showPluginManagerWhenReady()" );
  }
  else
  {
    // Call the pluginManagerInterface directly
    mQgisInterface->pluginManagerInterface()->showPluginManager();
  }
}

// implementation of the python runner
class QgsPythonRunnerImpl : public QgsPythonRunner
{
  public:
    explicit QgsPythonRunnerImpl( QgsPythonUtils* pythonUtils ) : mPythonUtils( pythonUtils ) {}

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

void QgisApp::loadPythonSupport()
{
  QString pythonlibName( "qgispython" );
#if defined(Q_OS_MAC) || defined(Q_OS_LINUX)
  pythonlibName.prepend( QgsApplication::libraryPath() );
#endif
#ifdef __MINGW32__
  pythonlibName.prepend( "lib" );
#endif
  QString version = QString( "%1.%2.%3" ).arg( QGis::QGIS_VERSION_INT / 10000 ).arg( QGis::QGIS_VERSION_INT / 100 % 100 ).arg( QGis::QGIS_VERSION_INT % 100 );
  QgsDebugMsg( QString( "load library %1 (%2)" ).arg( pythonlibName, version ) );
  QLibrary pythonlib( pythonlibName, version );
  // It's necessary to set these two load hints, otherwise Python library won't work correctly
  // see http://lists.kde.org/?l=pykde&m=117190116820758&w=2
  pythonlib.setLoadHints( QLibrary::ResolveAllSymbolsHint | QLibrary::ExportExternalSymbolsHint );
  if ( !pythonlib.load() )
  {
    pythonlib.setFileName( pythonlibName );
    if ( !pythonlib.load() )
    {
      QgsMessageLog::logMessage( tr( "Couldn't load Python support library: %1" ).arg( pythonlib.errorString() ) );
      return;
    }
  }

  //QgsDebugMsg("Python support library loaded successfully.");
  typedef QgsPythonUtils*( *inst )();
  inst pythonlib_inst = reinterpret_cast< inst >( cast_to_fptr( pythonlib.resolve( "instance" ) ) );
  if ( !pythonlib_inst )
  {
    //using stderr on purpose because we want end users to see this [TS]
    QgsMessageLog::logMessage( tr( "Couldn't resolve python support library's instance() symbol." ) );
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
    QgsPythonRunner::setInstance( new QgsPythonRunnerImpl( mPythonUtils ) );

    QgsMessageLog::logMessage( tr( "Python support ENABLED :-) " ), QString::null, QgsMessageLog::INFO );
  }
}

void QgisApp::checkQgisVersion()
{
  QgsVersionInfo* versionInfo = new QgsVersionInfo();
  QApplication::setOverrideCursor( Qt::WaitCursor );

  connect( versionInfo, SIGNAL( versionInfoAvailable() ), this, SLOT( versionReplyFinished() ) );
  versionInfo->checkVersion();
}

void QgisApp::versionReplyFinished()
{
  QApplication::restoreOverrideCursor();

  QgsVersionInfo* versionInfo = qobject_cast<QgsVersionInfo*>( sender() );
  Q_ASSERT( versionInfo );

  if ( versionInfo->error() == QNetworkReply::NoError )
  {
    QString info;

    if ( versionInfo->newVersionAvailable() )
    {
      info = tr( "There is a new version of QGIS available" );
    }
    else if ( versionInfo->isDevelopmentVersion() )
    {
      info = tr( "You are running a development version of QGIS" );
    }
    else
    {
      info = tr( "You are running the current version of QGIS" );
    }

    info = QString( "<b>%1</b>" ).arg( info );

    info += "<br>" + versionInfo->downloadInfo();

    QMessageBox mb( QMessageBox::Information, tr( "QGIS Version Information" ), info );
    mb.setInformativeText( versionInfo->html() );
    mb.exec();
  }
  else
  {
    QMessageBox mb( QMessageBox::Warning, tr( "QGIS Version Information" ), tr( "Unable to get current version information from server" ) );
    mb.setDetailedText( versionInfo->errorString() );
    mb.exec();
  }
}

void QgisApp::configureShortcuts()
{
  QgsConfigureShortcutsDialog dlg( this );
  dlg.exec();
}

void QgisApp::customize()
{
  QgsCustomization::instance()->openDialog( this );
}

void QgisApp::options()
{
  showOptionsDialog( this );
}

void QgisApp::showOptionsDialog( QWidget *parent, const QString& currentPage )
{
  QSettings mySettings;
  QString oldScales = mySettings.value( "Map/scales", PROJECT_SCALES ).toString();

  bool oldCapitalise = mySettings.value( "/qgis/capitaliseLayerName", QVariant( false ) ).toBool();

  QgsOptions *optionsDialog = new QgsOptions( parent );
  if ( !currentPage.isEmpty() )
  {
    optionsDialog->setCurrentPage( currentPage );
  }

  if ( optionsDialog->exec() )
  {
    QgsProject::instance()->layerTreeRegistryBridge()->setNewLayersVisible( mySettings.value( "/qgis/new_layers_visible", true ).toBool() );

    setupLayerTreeViewFromSettings();

    mMapCanvas->enableAntiAliasing( mySettings.value( "/qgis/enable_anti_aliasing" ).toBool() );

    double zoomFactor = mySettings.value( "/qgis/zoom_factor", 2 ).toDouble();
    mMapCanvas->setWheelFactor( zoomFactor );

    mMapCanvas->setCachingEnabled( mySettings.value( "/qgis/enable_render_caching", true ).toBool() );

    mMapCanvas->setParallelRenderingEnabled( mySettings.value( "/qgis/parallel_rendering", true ).toBool() );

    mMapCanvas->setMapUpdateInterval( mySettings.value( "/qgis/map_update_interval", 250 ).toInt() );

    if ( oldCapitalise != mySettings.value( "/qgis/capitaliseLayerName", QVariant( false ) ).toBool() )
    {
      // if the layer capitalization has changed, we need to update all layer names
      Q_FOREACH ( QgsMapLayer* layer, QgsMapLayerRegistry::instance()->mapLayers() )
        layer->setName( layer->originalName() );
    }

    //update any open compositions so they reflect new composer settings
    //we have to push the changes to the compositions here, because compositions
    //have no access to qgisapp and accordingly can't listen in to changes
    QSet<QgsComposer*> composers = instance()->printComposers();
    QSet<QgsComposer*>::iterator composer_it = composers.begin();
    for ( ; composer_it != composers.end(); ++composer_it )
    {
      QgsComposition* composition = ( *composer_it )->composition();
      composition->updateSettings();
    }

    //do we need this? TS
    mMapCanvas->refresh();

    mRasterFileFilter = QgsProviderRegistry::instance()->fileRasterFilters();

    if ( oldScales != mySettings.value( "Map/scales", PROJECT_SCALES ).toString() )
    {
      mScaleWidget->updateScales();
    }

    qobject_cast<QgsMeasureTool*>( mMapTools.mMeasureDist )->updateSettings();
    qobject_cast<QgsMeasureTool*>( mMapTools.mMeasureArea )->updateSettings();
    qobject_cast<QgsMapToolMeasureAngle*>( mMapTools.mMeasureAngle )->updateSettings();

    bool otfTransformAutoEnable = mySettings.value( "/Projections/otfTransformAutoEnable", true ).toBool();
    mLayerTreeCanvasBridge->setAutoEnableCrsTransform( otfTransformAutoEnable );

    mMapCanvas->setSegmentationTolerance( mySettings.value( "/qgis/segmentationTolerance", "0.01745" ).toDouble() );
    mMapCanvas->setSegmentationToleranceType( QgsAbstractGeometryV2::SegmentationToleranceType( mySettings.value( "/qgis/segmentationToleranceType", "0" ).toInt() ) );

    double factor = mySettings.value( "/qgis/magnifier_factor_default", 1.0 ).toDouble();
    mMagnifierWidget->setDefaultFactor( factor );
    mMagnifierWidget->updateMagnification( factor );
  }

  delete optionsDialog;
}

void QgisApp::fullHistogramStretch()
{
  histogramStretch( false, QgsRaster::ContrastEnhancementMinMax );
}

void QgisApp::localHistogramStretch()
{
  histogramStretch( true, QgsRaster::ContrastEnhancementMinMax );
}

void QgisApp::fullCumulativeCutStretch()
{
  histogramStretch( false, QgsRaster::ContrastEnhancementCumulativeCut );
}

void QgisApp::localCumulativeCutStretch()
{
  histogramStretch( true, QgsRaster::ContrastEnhancementCumulativeCut );
}

void QgisApp::histogramStretch( bool visibleAreaOnly, QgsRaster::ContrastEnhancementLimits theLimits )
{
  QgsMapLayer * myLayer = mLayerTreeView->currentLayer();

  if ( !myLayer )
  {
    messageBar()->pushMessage( tr( "No Layer Selected" ),
                               tr( "To perform a full histogram stretch, you need to have a raster layer selected." ),
                               QgsMessageBar::INFO, messageTimeout() );
    return;
  }

  QgsRasterLayer* myRasterLayer = qobject_cast<QgsRasterLayer *>( myLayer );
  if ( !myRasterLayer )
  {
    messageBar()->pushMessage( tr( "No Layer Selected" ),
                               tr( "To perform a full histogram stretch, you need to have a raster layer selected." ),
                               QgsMessageBar::INFO, messageTimeout() );
    return;
  }

  QgsRectangle myRectangle;
  if ( visibleAreaOnly )
    myRectangle = mMapCanvas->mapSettings().outputExtentToLayerExtent( myRasterLayer, mMapCanvas->extent() );

  myRasterLayer->setContrastEnhancement( QgsContrastEnhancement::StretchToMinimumMaximum, theLimits, myRectangle );

  myRasterLayer->triggerRepaint();
}

void QgisApp::increaseBrightness()
{
  int step = 1;
  if ( QgsApplication::keyboardModifiers() == Qt::ShiftModifier )
  {
    step = 10;
  }
  adjustBrightnessContrast( step );
}

void QgisApp::decreaseBrightness()
{
  int step = -1;
  if ( QgsApplication::keyboardModifiers() == Qt::ShiftModifier )
  {
    step = -10;
  }
  adjustBrightnessContrast( step );
}

void QgisApp::increaseContrast()
{
  int step = 1;
  if ( QgsApplication::keyboardModifiers() == Qt::ShiftModifier )
  {
    step = 10;
  }
  adjustBrightnessContrast( step, false );
}

void QgisApp::decreaseContrast()
{
  int step = -1;
  if ( QgsApplication::keyboardModifiers() == Qt::ShiftModifier )
  {
    step = -10;
  }
  adjustBrightnessContrast( step, false );
}

void QgisApp::adjustBrightnessContrast( int delta, bool updateBrightness )
{
  Q_FOREACH ( QgsMapLayer * layer, mLayerTreeView->selectedLayers() )
  {
    if ( !layer )
    {
      messageBar()->pushMessage( tr( "No Layer Selected" ),
                                 tr( "To change brightness or contrast, you need to have a raster layer selected." ),
                                 QgsMessageBar::INFO, messageTimeout() );
      return;
    }

    QgsRasterLayer* rasterLayer = qobject_cast<QgsRasterLayer *>( layer );
    if ( !rasterLayer )
    {
      messageBar()->pushMessage( tr( "No Layer Selected" ),
                                 tr( "To change brightness or contrast, you need to have a raster layer selected." ),
                                 QgsMessageBar::INFO, messageTimeout() );
      return;
    }

    QgsBrightnessContrastFilter* brightnessFilter = rasterLayer->brightnessFilter();

    if ( updateBrightness )
    {
      brightnessFilter->setBrightness( brightnessFilter->brightness() + delta );
    }
    else
    {
      brightnessFilter->setContrast( brightnessFilter->contrast() + delta );
    }

    rasterLayer->triggerRepaint();
  }
}

void QgisApp::helpContents()
{
  // We should really ship the HTML version of the docs local too.
  openURL( QString( "https://docs.qgis.org/%1.%2/%3/docs/user_manual/" )
           .arg( QGis::QGIS_VERSION_INT / 10000 )
           .arg( QGis::QGIS_VERSION_INT / 100 % 100 )
           .arg( tr( "en", "documentation language" ) ),
           false );
}

void QgisApp::apiDocumentation()
{
  if ( QFileInfo( QgsApplication::pkgDataPath() + "/doc/api/index.html" ).exists() )
  {
    openURL( "api/index.html" );
  }
  else
  {
    openURL( "https://qgis.org/api/", false );
  }
}

void QgisApp::reportaBug()
{
  openURL( tr( "https://qgis.org/en/site/getinvolved/development/bugreporting.html" ), false );
}
void QgisApp::supportProviders()
{
  openURL( tr( "https://qgis.org/en/site/forusers/commercial_support.html" ), false );
}

void QgisApp::helpQgisHomePage()
{
  openURL( "https://qgis.org", false );
}

void QgisApp::openURL( QString url, bool useQgisDocDirectory )
{
  // open help in user browser
  if ( useQgisDocDirectory )
  {
    url = "file://" + QgsApplication::pkgDataPath() + "/doc/" + url;
  }
#ifdef Q_OS_MAC
  /* Use Mac OS X Launch Services which uses the user's default browser
   * and will just open a new window if that browser is already running.
   * QProcess creates a new browser process for each invocation and expects a
   * commandline application rather than a bundled application.
   */
  CFURLRef urlRef = CFURLCreateWithBytes( kCFAllocatorDefault,
                                          reinterpret_cast<const UInt8*>( url.toUtf8().data() ), url.length(),
                                          kCFStringEncodingUTF8, nullptr );
  OSStatus status = LSOpenCFURLRef( urlRef, nullptr );
  status = 0; //avoid compiler warning
  CFRelease( urlRef );
#elif defined(Q_OS_WIN)
  if ( url.startsWith( "file://", Qt::CaseInsensitive ) )
    ShellExecute( 0, 0, url.mid( 7 ).toLocal8Bit().constData(), 0, 0, SW_SHOWNORMAL );
  else
    QDesktopServices::openUrl( url );
#else
  QDesktopServices::openUrl( url );
#endif
}

void QgisApp::registerMapLayerPropertiesFactory( QgsMapLayerConfigWidgetFactory* factory )
{
  mMapLayerPanelFactories << factory;
  if ( mMapStyleWidget )
    mMapStyleWidget->setPageFactories( mMapLayerPanelFactories );
}

void QgisApp::unregisterMapLayerPropertiesFactory( QgsMapLayerConfigWidgetFactory* factory )
{
  mMapLayerPanelFactories.removeAll( factory );
  if ( mMapStyleWidget )
    mMapStyleWidget->setPageFactories( mMapLayerPanelFactories );
}

/** Get a pointer to the currently selected map layer */
QgsMapLayer *QgisApp::activeLayer()
{
  return mLayerTreeView ? mLayerTreeView->currentLayer() : nullptr;
}

/** Set the current layer */
bool QgisApp::setActiveLayer( QgsMapLayer *layer )
{
  if ( !layer )
    return false;

  if ( !mLayerTreeView->layerTreeModel()->rootGroup()->findLayer( layer->id() ) )
    return false;

  mLayerTreeView->setCurrentLayer( layer );
  return true;
}

/** Add a vector layer directly without prompting user for location
  The caller must provide information compatible with the provider plugin
  using the vectorLayerPath and baseName. The provider can use these
  parameters in any way necessary to initialize the layer. The baseName
  parameter is used in the Map Legend so it should be formed in a meaningful
  way.
  */
QgsVectorLayer* QgisApp::addVectorLayer( const QString& vectorLayerPath, const QString& baseName, const QString& providerKey )
{
  bool wasfrozen = mMapCanvas->isFrozen();

  mMapCanvas->freeze();

// Let render() do its own cursor management
//  QApplication::setOverrideCursor(Qt::WaitCursor);

  /* Eliminate the need to instantiate the layer based on provider type.
     The caller is responsible for cobbling together the needed information to
     open the layer
     */
  QgsDebugMsg( "Creating new vector layer using " + vectorLayerPath
               + " with baseName of " + baseName
               + " and providerKey of " + providerKey );

  // if the layer needs authentication, ensure the master password is set
  bool authok = true;
  QRegExp rx( "authcfg=([a-z]|[A-Z]|[0-9]){7}" );
  if ( rx.indexIn( vectorLayerPath ) != -1 )
  {
    authok = false;
    if ( !QgsAuthGuiUtils::isDisabled( messageBar(), messageTimeout() ) )
    {
      authok = QgsAuthManager::instance()->setMasterPassword( true );
    }
  }

  // create the layer
  QgsVectorLayer *layer = new QgsVectorLayer( vectorLayerPath, baseName, providerKey, false );

  if ( authok && layer && layer->isValid() )
  {
    QStringList sublayers = layer->dataProvider()->subLayers();
    QgsDebugMsg( QString( "got valid layer with %1 sublayers" ).arg( sublayers.count() ) );

    // If the newly created layer has more than 1 layer of data available, we show the
    // sublayers selection dialog so the user can select the sublayers to actually load.
    if ( sublayers.count() > 1 )
    {
      askUserForOGRSublayers( layer );

      // The first layer loaded is not useful in that case. The user can select it in
      // the list if he wants to load it.
      delete layer;
      layer = nullptr;
    }
    else
    {
      // Register this layer with the layers registry
      QList<QgsMapLayer *> myList;

      //set friendly name for datasources with only one layer
      QStringList sublayers = layer->dataProvider()->subLayers();
      if ( !sublayers.isEmpty() )
      {
        QStringList elements = sublayers.at( 0 ).split( ':' );

        if ( elements.size() >= 4 && layer->name() != elements.at( 1 ) )
        {
          layer->setName( QString( "%1 %2 %3" ).arg( layer->name(), elements.at( 1 ), elements.at( 3 ) ) );
        }
      }

      myList << layer;
      QgsMapLayerRegistry::instance()->addMapLayers( myList );
      bool ok;
      layer->loadDefaultStyle( ok );
    }
  }
  else
  {
    QString msg = tr( "The layer %1 is not a valid layer and can not be added to the map" ).arg( vectorLayerPath );
    messageBar()->pushMessage( tr( "Layer is not valid" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );

    delete layer;
    mMapCanvas->freeze( false );
    return nullptr;
  }

  // Only update the map if we frozen in this method
  // Let the caller do it otherwise
  if ( !wasfrozen )
  {
    mMapCanvas->freeze( false );
    mMapCanvas->refresh();
  }

// Let render() do its own cursor management
//  QApplication::restoreOverrideCursor();

  return layer;

} // QgisApp::addVectorLayer



void QgisApp::addMapLayer( QgsMapLayer *theMapLayer )
{
  mMapCanvas->freeze();

// Let render() do its own cursor management
//  QApplication::setOverrideCursor(Qt::WaitCursor);

  if ( theMapLayer->isValid() )
  {
    // Register this layer with the layers registry
    QList<QgsMapLayer *> myList;
    myList << theMapLayer;
    QgsMapLayerRegistry::instance()->addMapLayers( myList );
    // add it to the mapcanvas collection
    // not necessary since adding to registry adds to canvas mMapCanvas->addLayer(theMapLayer);
  }
  else
  {
    QString msg = tr( "The layer is not a valid layer and can not be added to the map" );
    messageBar()->pushMessage( tr( "Layer is not valid" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );
  }

  // draw the map
  mMapCanvas->freeze( false );
  mMapCanvas->refresh();

// Let render() do its own cursor management
//  QApplication::restoreOverrideCursor();

}

void QgisApp::embedLayers()
{
  //dialog to select groups/layers from other project files
  QgsProjectLayerGroupDialog d( this );
  if ( d.exec() == QDialog::Accepted && d.isValid() )
  {
    mMapCanvas->freeze( true );

    QString projectFile = d.selectedProjectFile();

    //groups
    QStringList groups = d.selectedGroups();
    QStringList::const_iterator groupIt = groups.constBegin();
    for ( ; groupIt != groups.constEnd(); ++groupIt )
    {
      QgsLayerTreeGroup* newGroup = QgsProject::instance()->createEmbeddedGroup( *groupIt, projectFile, QStringList() );

      if ( newGroup )
        QgsProject::instance()->layerTreeRoot()->addChildNode( newGroup );
    }

    //layer ids
    QList<QDomNode> brokenNodes;
    QList< QPair< QgsVectorLayer*, QDomElement > > vectorLayerList;

    // resolve dependencies
    QgsLayerDefinition::DependencySorter depSorter( projectFile );
    QStringList sortedIds = depSorter.sortedLayerIds();
    QStringList layerIds = d.selectedLayerIds();
    Q_FOREACH ( const QString& id, sortedIds )
    {
      Q_FOREACH ( const QString& selId, layerIds )
      {
        if ( selId == id )
          QgsProject::instance()->createEmbeddedLayer( selId, projectFile, brokenNodes, vectorLayerList );
      }
    }

    mMapCanvas->freeze( false );
    if ( !groups.isEmpty() || !layerIds.isEmpty() )
    {
      mMapCanvas->refresh();
    }
  }
}

void QgisApp::setExtent( const QgsRectangle& theRect )
{
  mMapCanvas->setExtent( theRect );
}

/**
  Prompt and save if project has been modified.
  @return true if saved or discarded, false if cancelled
 */
bool QgisApp::saveDirty()
{
  QString whyDirty = "";
  bool hasUnsavedEdits = false;
  // extra check to see if there are any vector layers with unsaved provider edits
  // to ensure user has opportunity to save any editing
  if ( QgsMapLayerRegistry::instance()->count() > 0 )
  {
    QMap<QString, QgsMapLayer*> layers = QgsMapLayerRegistry::instance()->mapLayers();
    for ( QMap<QString, QgsMapLayer*>::iterator it = layers.begin(); it != layers.end(); ++it )
    {
      QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>( it.value() );
      if ( !vl )
      {
        continue;
      }

      hasUnsavedEdits = ( vl->isEditable() && vl->isModified() );
      if ( hasUnsavedEdits )
      {
        break;
      }
    }

    if ( hasUnsavedEdits )
    {
      markDirty();
      whyDirty = "<p style='color:darkred;'>";
      whyDirty += tr( "Project has layer(s) in edit mode with unsaved edits, which will NOT be saved!" );
      whyDirty += "</p>";
    }
  }

  QMessageBox::StandardButton answer( QMessageBox::Discard );
  mMapCanvas->freeze( true );

  //QgsDebugMsg(QString("Layer count is %1").arg(mMapCanvas->layerCount()));
  //QgsDebugMsg(QString("Project is %1dirty").arg( QgsProject::instance()->isDirty() ? "" : "not "));
  //QgsDebugMsg(QString("Map canvas is %1dirty").arg(mMapCanvas->isDirty() ? "" : "not "));

  QSettings settings;
  bool askThem = settings.value( "qgis/askToSaveProjectChanges", true ).toBool();

  if ( askThem && QgsProject::instance()->isDirty() && QgsMapLayerRegistry::instance()->count() > 0 )
  {
    // flag project as dirty since dirty state of canvas is reset if "dirty"
    // is based on a zoom or pan
    markDirty();

    // old code: mProjectIsDirtyFlag = true;

    // prompt user to save
    answer = QMessageBox::information( this, tr( "Save?" ),
                                       tr( "Do you want to save the current project? %1" )
                                       .arg( whyDirty ),
                                       QMessageBox::Save | QMessageBox::Cancel | QMessageBox::Discard,
                                       hasUnsavedEdits ? QMessageBox::Cancel : QMessageBox::Save );
    if ( QMessageBox::Save == answer )
    {
      if ( !fileSave() )
        answer = QMessageBox::Cancel;
    }
  }

  mMapCanvas->freeze( false );

  return answer != QMessageBox::Cancel;
} // QgisApp::saveDirty()

void QgisApp::closeProject()
{
  // unload the project macros before changing anything
  if ( mTrustedMacros )
  {
    QgsPythonRunner::run( "qgis.utils.unloadProjectMacros();" );
  }

  mTrustedMacros = false;

  mLegendExpressionFilterButton->setExpressionText( "" );
  mLegendExpressionFilterButton->setChecked( false );
  mActionFilterLegend->setChecked( false );

  deletePrintComposers();
  removeAnnotationItems();
  // clear out any stuff from project
  mMapCanvas->freeze( true );
  QList<QgsMapCanvasLayer> emptyList;
  mMapCanvas->setLayerSet( emptyList );
  mMapCanvas->clearCache();
  removeAllLayers();
}


void QgisApp::changeEvent( QEvent* event )
{
  QMainWindow::changeEvent( event );
#ifdef Q_OS_MAC
  switch ( event->type() )
  {
    case QEvent::ActivationChange:
      if ( QApplication::activeWindow() == this )
      {
        mWindowAction->setChecked( true );
      }
      // this should not be necessary since the action is part of an action group
      // however this check is not cleared if PrintComposer is closed and reopened
      else
      {
        mWindowAction->setChecked( false );
      }
      break;

    case QEvent::WindowTitleChange:
      mWindowAction->setText( windowTitle() );
      break;

    default:
      break;
  }
#endif
}

void QgisApp::closeEvent( QCloseEvent* event )
{
  // We'll close in our own good time, thank you very much
  event->ignore();
  // Do the usual checks and ask if they want to save, etc
  fileExit();
}


void QgisApp::whatsThis()
{
  QWhatsThis::enterWhatsThisMode();
} // QgisApp::whatsThis()

QMenu* QgisApp::getPluginMenu( const QString& menuName )
{
  /* Plugin menu items are below the plugin separator (which may not exist yet
   * if no plugins are loaded) and above the python separator. If python is not
   * present, there is no python separator and the plugin list is at the bottom
   * of the menu.
   */

  QString cleanedMenuName = menuName;
#ifdef Q_OS_MAC
  // Mac doesn't have '&' keyboard shortcuts.
  cleanedMenuName.remove( QChar( '&' ) );
#endif
  QAction *before = mActionPluginSeparator2;  // python separator or end of list
  if ( !mActionPluginSeparator1 )
  {
    // First plugin - create plugin list separator
    mActionPluginSeparator1 = mPluginMenu->insertSeparator( before );
  }
  else
  {
    QString dst = cleanedMenuName;
    dst.remove( QChar( '&' ) );

    // Plugins exist - search between plugin separator and python separator or end of list
    QList<QAction*> actions = mPluginMenu->actions();
    int end = mActionPluginSeparator2 ? actions.indexOf( mActionPluginSeparator2 ) : actions.count();
    for ( int i = actions.indexOf( mActionPluginSeparator1 ) + 1; i < end; i++ )
    {
      QString src = actions.at( i )->text();
      src.remove( QChar( '&' ) );

      int comp = dst.localeAwareCompare( src );
      if ( comp < 0 )
      {
        // Add item before this one
        before = actions.at( i );
        break;
      }
      else if ( comp == 0 )
      {
        // Plugin menu item already exists
        return actions.at( i )->menu();
      }
    }
  }
  // It doesn't exist, so create
  QMenu *menu = new QMenu( cleanedMenuName, this );
  menu->setObjectName( normalizedMenuName( cleanedMenuName ) );
  // Where to put it? - we worked that out above...
  mPluginMenu->insertMenu( before, menu );

  return menu;
}

void QgisApp::addPluginToMenu( const QString& name, QAction* action )
{
  QMenu* menu = getPluginMenu( name );
  menu->addAction( action );
}

void QgisApp::removePluginMenu( const QString& name, QAction* action )
{
  QMenu* menu = getPluginMenu( name );
  menu->removeAction( action );
  if ( menu->actions().isEmpty() )
  {
    mPluginMenu->removeAction( menu->menuAction() );
  }
  // Remove separator above plugins in Plugin menu if no plugins remain
  QList<QAction*> actions = mPluginMenu->actions();
  int end = mActionPluginSeparator2 ? actions.indexOf( mActionPluginSeparator2 ) : actions.count();
  if ( actions.indexOf( mActionPluginSeparator1 ) + 1 == end )
  {
    mPluginMenu->removeAction( mActionPluginSeparator1 );
    mActionPluginSeparator1 = nullptr;
  }
}

QMenu* QgisApp::getDatabaseMenu( const QString& menuName )
{
  QString cleanedMenuName = menuName;
#ifdef Q_OS_MAC
  // Mac doesn't have '&' keyboard shortcuts.
  cleanedMenuName.remove( QChar( '&' ) );
#endif
  QString dst = cleanedMenuName;
  dst.remove( QChar( '&' ) );

  QAction *before = nullptr;
  QList<QAction*> actions = mDatabaseMenu->actions();
  for ( int i = 0; i < actions.count(); i++ )
  {
    QString src = actions.at( i )->text();
    src.remove( QChar( '&' ) );

    int comp = dst.localeAwareCompare( src );
    if ( comp < 0 )
    {
      // Add item before this one
      before = actions.at( i );
      break;
    }
    else if ( comp == 0 )
    {
      // Plugin menu item already exists
      return actions.at( i )->menu();
    }
  }
  // It doesn't exist, so create
  QMenu *menu = new QMenu( cleanedMenuName, this );
  menu->setObjectName( normalizedMenuName( cleanedMenuName ) );
  if ( before )
    mDatabaseMenu->insertMenu( before, menu );
  else
    mDatabaseMenu->addMenu( menu );

  return menu;
}

QMenu* QgisApp::getRasterMenu( const QString& menuName )
{
  QString cleanedMenuName = menuName;
#ifdef Q_OS_MAC
  // Mac doesn't have '&' keyboard shortcuts.
  cleanedMenuName.remove( QChar( '&' ) );
#endif

  QAction *before = nullptr;
  if ( !mActionRasterSeparator )
  {
    // First plugin - create plugin list separator
    mActionRasterSeparator = mRasterMenu->insertSeparator( before );
  }
  else
  {
    QString dst = cleanedMenuName;
    dst.remove( QChar( '&' ) );
    // Plugins exist - search between plugin separator and python separator or end of list
    QList<QAction*> actions = mRasterMenu->actions();
    for ( int i = actions.indexOf( mActionRasterSeparator ) + 1; i < actions.count(); i++ )
    {
      QString src = actions.at( i )->text();
      src.remove( QChar( '&' ) );

      int comp = dst.localeAwareCompare( src );
      if ( comp < 0 )
      {
        // Add item before this one
        before = actions.at( i );
        break;
      }
      else if ( comp == 0 )
      {
        // Plugin menu item already exists
        return actions.at( i )->menu();
      }
    }
  }

  // It doesn't exist, so create
  QMenu *menu = new QMenu( cleanedMenuName, this );
  menu->setObjectName( normalizedMenuName( cleanedMenuName ) );
  if ( before )
    mRasterMenu->insertMenu( before, menu );
  else
    mRasterMenu->addMenu( menu );

  return menu;
}

QMenu* QgisApp::getVectorMenu( const QString& menuName )
{
  QString cleanedMenuName = menuName;
#ifdef Q_OS_MAC
  // Mac doesn't have '&' keyboard shortcuts.
  cleanedMenuName.remove( QChar( '&' ) );
#endif
  QString dst = cleanedMenuName;
  dst.remove( QChar( '&' ) );

  QAction *before = nullptr;
  QList<QAction*> actions = mVectorMenu->actions();
  for ( int i = 0; i < actions.count(); i++ )
  {
    QString src = actions.at( i )->text();
    src.remove( QChar( '&' ) );

    int comp = dst.localeAwareCompare( src );
    if ( comp < 0 )
    {
      // Add item before this one
      before = actions.at( i );
      break;
    }
    else if ( comp == 0 )
    {
      // Plugin menu item already exists
      return actions.at( i )->menu();
    }
  }
  // It doesn't exist, so create
  QMenu *menu = new QMenu( cleanedMenuName, this );
  menu->setObjectName( normalizedMenuName( cleanedMenuName ) );
  if ( before )
    mVectorMenu->insertMenu( before, menu );
  else
    mVectorMenu->addMenu( menu );

  return menu;
}

QMenu* QgisApp::getWebMenu( const QString& menuName )
{
  QString cleanedMenuName = menuName;
#ifdef Q_OS_MAC
  // Mac doesn't have '&' keyboard shortcuts.
  cleanedMenuName.remove( QChar( '&' ) );
#endif
  QString dst = cleanedMenuName;
  dst.remove( QChar( '&' ) );

  QAction *before = nullptr;
  QList<QAction*> actions = mWebMenu->actions();
  for ( int i = 0; i < actions.count(); i++ )
  {
    QString src = actions.at( i )->text();
    src.remove( QChar( '&' ) );

    int comp = dst.localeAwareCompare( src );
    if ( comp < 0 )
    {
      // Add item before this one
      before = actions.at( i );
      break;
    }
    else if ( comp == 0 )
    {
      // Plugin menu item already exists
      return actions.at( i )->menu();
    }
  }
  // It doesn't exist, so create
  QMenu *menu = new QMenu( cleanedMenuName, this );
  menu->setObjectName( normalizedMenuName( cleanedMenuName ) );
  if ( before )
    mWebMenu->insertMenu( before, menu );
  else
    mWebMenu->addMenu( menu );

  return menu;
}

void QgisApp::insertAddLayerAction( QAction *action )
{
  mAddLayerMenu->insertAction( mActionAddLayerSeparator, action );
}

void QgisApp::removeAddLayerAction( QAction *action )
{
  mAddLayerMenu->removeAction( action );
}

void QgisApp::addPluginToDatabaseMenu( const QString& name, QAction* action )
{
  QMenu* menu = getDatabaseMenu( name );
  menu->addAction( action );

  // add the Database menu to the menuBar if not added yet
  if ( mDatabaseMenu->actions().count() != 1 )
    return;

  QAction* before = nullptr;
  QList<QAction*> actions = menuBar()->actions();
  for ( int i = 0; i < actions.count(); i++ )
  {
    if ( actions.at( i )->menu() == mDatabaseMenu )
      return;

    // goes before Web menu, if present
    if ( actions.at( i )->menu() == mWebMenu )
    {
      before = actions.at( i );
      break;
    }
  }
  for ( int i = 0; i < actions.count(); i++ )
  {
    // defaults to after Raster menu, which is already in qgisapp.ui
    if ( actions.at( i )->menu() == mRasterMenu )
    {
      if ( !before )
      {
        before = actions.at( i += 1 );
        break;
      }
    }
  }
  if ( before )
    menuBar()->insertMenu( before, mDatabaseMenu );
  else
    // fallback insert
    menuBar()->insertMenu( firstRightStandardMenu()->menuAction(), mDatabaseMenu );
}

void QgisApp::addPluginToRasterMenu( const QString& name, QAction* action )
{
  QMenu* menu = getRasterMenu( name );
  menu->addAction( action );
}

void QgisApp::addPluginToVectorMenu( const QString& name, QAction* action )
{
  QMenu* menu = getVectorMenu( name );
  menu->addAction( action );
}

void QgisApp::addPluginToWebMenu( const QString& name, QAction* action )
{
  QMenu* menu = getWebMenu( name );
  menu->addAction( action );

  // add the Vector menu to the menuBar if not added yet
  if ( mWebMenu->actions().count() != 1 )
    return;

  QAction* before = nullptr;
  QList<QAction*> actions = menuBar()->actions();
  for ( int i = 0; i < actions.count(); i++ )
  {
    // goes after Database menu, if present
    if ( actions.at( i )->menu() == mDatabaseMenu )
    {
      before = actions.at( i += 1 );
      // don't break here
    }

    if ( actions.at( i )->menu() == mWebMenu )
      return;
  }
  for ( int i = 0; i < actions.count(); i++ )
  {
    // defaults to after Raster menu, which is already in qgisapp.ui
    if ( actions.at( i )->menu() == mRasterMenu )
    {
      if ( !before )
      {
        before = actions.at( i += 1 );
        break;
      }
    }
  }

  if ( before )
    menuBar()->insertMenu( before, mWebMenu );
  else
    // fallback insert
    menuBar()->insertMenu( firstRightStandardMenu()->menuAction(), mWebMenu );
}

void QgisApp::removePluginDatabaseMenu( const QString& name, QAction* action )
{
  QMenu* menu = getDatabaseMenu( name );
  menu->removeAction( action );
  if ( menu->actions().isEmpty() )
  {
    mDatabaseMenu->removeAction( menu->menuAction() );
  }

  // remove the Database menu from the menuBar if there are no more actions
  if ( !mDatabaseMenu->actions().isEmpty() )
    return;

  QList<QAction*> actions = menuBar()->actions();
  for ( int i = 0; i < actions.count(); i++ )
  {
    if ( actions.at( i )->menu() == mDatabaseMenu )
    {
      menuBar()->removeAction( actions.at( i ) );
      return;
    }
  }
}

void QgisApp::removePluginRasterMenu( const QString& name, QAction* action )
{
  QMenu* menu = getRasterMenu( name );
  menu->removeAction( action );
  if ( menu->actions().isEmpty() )
  {
    mRasterMenu->removeAction( menu->menuAction() );
  }

  // Remove separator above plugins in Raster menu if no plugins remain
  QList<QAction*> actions = mRasterMenu->actions();
  if ( actions.indexOf( mActionRasterSeparator ) + 1 == actions.count() )
  {
    mRasterMenu->removeAction( mActionRasterSeparator );
    mActionRasterSeparator = nullptr;
  }
}

void QgisApp::removePluginVectorMenu( const QString& name, QAction* action )
{
  QMenu* menu = getVectorMenu( name );
  menu->removeAction( action );
  if ( menu->actions().isEmpty() )
  {
    mVectorMenu->removeAction( menu->menuAction() );
  }

  // remove the Vector menu from the menuBar if there are no more actions
  if ( !mVectorMenu->actions().isEmpty() )
    return;

  QList<QAction*> actions = menuBar()->actions();
  for ( int i = 0; i < actions.count(); i++ )
  {
    if ( actions.at( i )->menu() == mVectorMenu )
    {
      menuBar()->removeAction( actions.at( i ) );
      return;
    }
  }
}

void QgisApp::removePluginWebMenu( const QString& name, QAction* action )
{
  QMenu* menu = getWebMenu( name );
  menu->removeAction( action );
  if ( menu->actions().isEmpty() )
  {
    mWebMenu->removeAction( menu->menuAction() );
  }

  // remove the Web menu from the menuBar if there are no more actions
  if ( !mWebMenu->actions().isEmpty() )
    return;

  QList<QAction*> actions = menuBar()->actions();
  for ( int i = 0; i < actions.count(); i++ )
  {
    if ( actions.at( i )->menu() == mWebMenu )
    {
      menuBar()->removeAction( actions.at( i ) );
      return;
    }
  }
}

int QgisApp::addPluginToolBarIcon( QAction * qAction )
{
  mPluginToolBar->addAction( qAction );
  return 0;
}

QAction*QgisApp::addPluginToolBarWidget( QWidget* widget )
{
  return mPluginToolBar->addWidget( widget );
}

void QgisApp::removePluginToolBarIcon( QAction *qAction )
{
  mPluginToolBar->removeAction( qAction );
}

int QgisApp::addRasterToolBarIcon( QAction * qAction )
{
  mRasterToolBar->addAction( qAction );
  return 0;
}

QAction*QgisApp::addRasterToolBarWidget( QWidget* widget )
{
  return mRasterToolBar->addWidget( widget );
}

void QgisApp::removeRasterToolBarIcon( QAction *qAction )
{
  mRasterToolBar->removeAction( qAction );
}

int QgisApp::addVectorToolBarIcon( QAction * qAction )
{
  mVectorToolBar->addAction( qAction );
  return 0;
}

QAction*QgisApp::addVectorToolBarWidget( QWidget* widget )
{
  return mVectorToolBar->addWidget( widget );
}

void QgisApp::removeVectorToolBarIcon( QAction *qAction )
{
  mVectorToolBar->removeAction( qAction );
}

int QgisApp::addDatabaseToolBarIcon( QAction * qAction )
{
  mDatabaseToolBar->addAction( qAction );
  return 0;
}

QAction*QgisApp::addDatabaseToolBarWidget( QWidget* widget )
{
  return mDatabaseToolBar->addWidget( widget );
}

void QgisApp::removeDatabaseToolBarIcon( QAction *qAction )
{
  mDatabaseToolBar->removeAction( qAction );
}

int QgisApp::addWebToolBarIcon( QAction * qAction )
{
  mWebToolBar->addAction( qAction );
  return 0;
}

QAction*QgisApp::addWebToolBarWidget( QWidget* widget )
{
  return mWebToolBar->addWidget( widget );
}

void QgisApp::removeWebToolBarIcon( QAction *qAction )
{
  mWebToolBar->removeAction( qAction );
}

void QgisApp::updateCRSStatusBar()
{
  mOnTheFlyProjectionStatusButton->setText( mMapCanvas->mapSettings().destinationCrs().authid() );

  if ( mMapCanvas->mapSettings().hasCrsTransformEnabled() )
  {
    mOnTheFlyProjectionStatusButton->setText( tr( "%1 (OTF)" ).arg( mOnTheFlyProjectionStatusButton->text() ) );
    mOnTheFlyProjectionStatusButton->setToolTip(
      tr( "Current CRS: %1 (OTF enabled)" ).arg( mMapCanvas->mapSettings().destinationCrs().description() ) );
    mOnTheFlyProjectionStatusButton->setIcon( QgsApplication::getThemeIcon( "mIconProjectionEnabled.png" ) );
  }
  else
  {
    mOnTheFlyProjectionStatusButton->setToolTip(
      tr( "Current CRS: %1 (OTF disabled)" ).arg( mMapCanvas->mapSettings().destinationCrs().description() ) );
    mOnTheFlyProjectionStatusButton->setIcon( QgsApplication::getThemeIcon( "mIconProjectionDisabled.png" ) );
  }
}

void QgisApp::destinationCrsChanged()
{
  updateCRSStatusBar();
}

void QgisApp::hasCrsTransformEnabled( bool theFlag )
{
  // save this information to project
  QgsProject::instance()->writeEntry( "SpatialRefSys", "/ProjectionsEnabled", ( theFlag ? 1 : 0 ) );
  updateCRSStatusBar();
}

// slot to update the progress bar in the status bar
void QgisApp::showProgress( int theProgress, int theTotalSteps )
{
  if ( theProgress == theTotalSteps )
  {
    mProgressBar->reset();
    mProgressBar->hide();
  }
  else
  {
    //only call show if not already hidden to reduce flicker
    if ( !mProgressBar->isVisible() )
    {
      mProgressBar->show();
    }
    mProgressBar->setMaximum( theTotalSteps );
    mProgressBar->setValue( theProgress );

    if ( mProgressBar->maximum() == 0 )
    {
      // for busy indicator (when minimum equals to maximum) the oxygen Qt style (used in KDE)
      // has some issues and does not start busy indicator animation. This is an ugly fix
      // that forces creation of a temporary progress bar that somehow resumes the animations.
      // Caution: looking at the code below may introduce mild pain in stomach.
      if ( strcmp( QApplication::style()->metaObject()->className(), "Oxygen::Style" ) == 0 )
      {
        QProgressBar pb;
        pb.setAttribute( Qt::WA_DontShowOnScreen ); // no visual annoyance
        pb.setMaximum( 0 );
        pb.show();
        qApp->processEvents();
      }
    }

  }
}

void QgisApp::mapToolChanged( QgsMapTool *newTool, QgsMapTool *oldTool )
{
  if ( oldTool )
  {
    disconnect( oldTool, SIGNAL( messageEmitted( QString ) ), this, SLOT( displayMapToolMessage( QString ) ) );
    disconnect( oldTool, SIGNAL( messageEmitted( QString, QgsMessageBar::MessageLevel ) ), this, SLOT( displayMapToolMessage( QString, QgsMessageBar::MessageLevel ) ) );
    disconnect( oldTool, SIGNAL( messageDiscarded() ), this, SLOT( removeMapToolMessage() ) );
  }

  if ( newTool )
  {
    if ( !( newTool->flags() & QgsMapTool::EditTool ) )
    {
      mNonEditMapTool = newTool;
    }

    connect( newTool, SIGNAL( messageEmitted( QString ) ), this, SLOT( displayMapToolMessage( QString ) ) );
    connect( newTool, SIGNAL( messageEmitted( QString, QgsMessageBar::MessageLevel ) ), this, SLOT( displayMapToolMessage( QString, QgsMessageBar::MessageLevel ) ) );
    connect( newTool, SIGNAL( messageDiscarded() ), this, SLOT( removeMapToolMessage() ) );
  }
}

void QgisApp::showMapCanvas()
{
  // Map layers changed -> switch to map canvas
  if ( mCentralContainer )
    mCentralContainer->setCurrentIndex( 0 );
}

void QgisApp::markDirty()
{
  // notify the project that there was a change
  QgsProject::instance()->setDirty( true );
}

void QgisApp::extentChanged()
{
  // allow symbols in the legend update their preview if they use map units
  mLayerTreeView->layerTreeModel()->setLegendMapViewData( mMapCanvas->mapUnitsPerPixel(), mMapCanvas->mapSettings().outputDpi(), mMapCanvas->scale() );
}

void QgisApp::layersWereAdded( const QList<QgsMapLayer *>& theLayers )
{
  Q_FOREACH ( QgsMapLayer* layer, theLayers )
  {
    QgsDataProvider *provider = nullptr;

    QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );
    if ( vlayer )
    {
      // notify user about any font family substitution, but only when rendering labels (i.e. not when opening settings dialog)
      connect( vlayer, SIGNAL( labelingFontNotFound( QgsVectorLayer*, QString ) ), this, SLOT( labelingFontNotFound( QgsVectorLayer*, QString ) ) );

      QgsVectorDataProvider* vProvider = vlayer->dataProvider();
      // Do not check for layer editing capabilities because they may change
      // (for example when subsetString is added/removed) and signals need to
      // be in place in order to update the GUI
      connect( vlayer, SIGNAL( layerModified() ), this, SLOT( updateLayerModifiedActions() ) );
      connect( vlayer, SIGNAL( editingStarted() ), this, SLOT( layerEditStateChanged() ) );
      connect( vlayer, SIGNAL( editingStopped() ), this, SLOT( layerEditStateChanged() ) );
      connect( vlayer, SIGNAL( raiseError( QString ) ), this, SLOT( onLayerError( QString ) ) );

      provider = vProvider;
    }

    QgsRasterLayer *rlayer = qobject_cast<QgsRasterLayer *>( layer );
    if ( rlayer )
    {
      // connect up any request the raster may make to update the app progress
      connect( rlayer, SIGNAL( drawingProgress( int, int ) ), this, SLOT( showProgress( int, int ) ) );

      // connect up any request the raster may make to update the statusbar message
      connect( rlayer, SIGNAL( statusChanged( QString ) ), this, SLOT( showStatusMessage( QString ) ) );

      provider = rlayer->dataProvider();
    }

    if ( provider )
    {
      connect( provider, SIGNAL( dataChanged() ), layer, SLOT( triggerRepaint() ) );
      connect( provider, SIGNAL( dataChanged() ), mMapCanvas, SLOT( refresh() ) );
    }
  }
}

void QgisApp::showRotation()
{
  // update the statusbar with the current rotation.
  double myrotation = mMapCanvas->rotation();
  mRotationEdit->setValue( myrotation );
} // QgisApp::showRotation


void QgisApp::updateMouseCoordinatePrecision()
{
  mCoordsEdit->setMouseCoordinatesPrecision( QgsCoordinateUtils::calculateCoordinatePrecision( mapCanvas()->mapUnitsPerPixel(), mapCanvas()->mapSettings().destinationCrs() ) );
}

void QgisApp::showStatusMessage( const QString& theMessage )
{
  statusBar()->showMessage( theMessage );
}

void QgisApp::displayMapToolMessage( const QString& message, QgsMessageBar::MessageLevel level )
{
  // remove previous message
  messageBar()->popWidget( mLastMapToolMessage );

  QgsMapTool* tool = mapCanvas()->mapTool();

  if ( tool )
  {
    mLastMapToolMessage = new QgsMessageBarItem( tool->toolName(), message, level, messageTimeout() );
    messageBar()->pushItem( mLastMapToolMessage );
  }
}

void QgisApp::displayMessage( const QString& title, const QString& message, QgsMessageBar::MessageLevel level )
{
  messageBar()->pushMessage( title, message, level, messageTimeout() );
}

void QgisApp::removeMapToolMessage()
{
  // remove previous message
  messageBar()->popWidget( mLastMapToolMessage );
}


// Show the maptip using tooltip
void QgisApp::showMapTip()
{
  // Stop the timer while we look for a maptip
  mpMapTipsTimer->stop();

  // Only show tooltip if the mouse is over the canvas
  if ( mMapCanvas->underMouse() )
  {
    QPoint myPointerPos = mMapCanvas->mouseLastXY();

    //  Make sure there is an active layer before proceeding
    QgsMapLayer* mypLayer = mMapCanvas->currentLayer();
    if ( mypLayer )
    {
      //QgsDebugMsg("Current layer for maptip display is: " + mypLayer->source());
      // only process vector layers
      if ( mypLayer->type() == QgsMapLayer::VectorLayer )
      {
        // Show the maptip if the maptips button is depressed
        if ( mMapTipsVisible )
        {
          mpMaptip->showMapTip( mypLayer, mLastMapPosition, myPointerPos, mMapCanvas );
        }
      }
    }
    else
    {
      showStatusMessage( tr( "Maptips require an active layer" ) );
    }
  }
}

void QgisApp::projectPropertiesProjections()
{
  // Driver to display the project props dialog and switch to the
  // projections tab
  mShowProjectionTab = true;
  projectProperties();
}

void QgisApp::projectProperties()
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
  setTitleBarText_( *this );

  // delete the property sheet object
  delete pp;
} // QgisApp::projectProperties


QgsClipboard * QgisApp::clipboard()
{
  return mInternalClipboard;
}

void QgisApp::selectionChanged( QgsMapLayer *layer )
{
  QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );
  if ( vlayer )
  {
    showStatusMessage( tr( "%n feature(s) selected on layer %1.", "number of selected features", vlayer->selectedFeatureCount() ).arg( vlayer->name() ) );
  }
  if ( layer == activeLayer() )
  {
    activateDeactivateLayerRelatedActions( layer );
  }
}

void QgisApp::legendLayerSelectionChanged()
{
  QList<QgsLayerTreeLayer*> selectedLayers = mLayerTreeView ? mLayerTreeView->selectedLayerNodes() : QList<QgsLayerTreeLayer*>();

  mActionDuplicateLayer->setEnabled( !selectedLayers.isEmpty() );
  mActionSetLayerScaleVisibility->setEnabled( !selectedLayers.isEmpty() );
  mActionSetLayerCRS->setEnabled( !selectedLayers.isEmpty() );
  mActionSetProjectCRSFromLayer->setEnabled( selectedLayers.count() == 1 );

  mActionSaveEdits->setEnabled( QgsLayerTreeUtils::layersModified( selectedLayers ) );
  mActionRollbackEdits->setEnabled( QgsLayerTreeUtils::layersModified( selectedLayers ) );
  mActionCancelEdits->setEnabled( QgsLayerTreeUtils::layersEditable( selectedLayers ) );

  mLegendExpressionFilterButton->setEnabled( false );
  mLegendExpressionFilterButton->setVectorLayer( nullptr );
  if ( selectedLayers.size() == 1 )
  {
    QgsLayerTreeLayer* l = selectedLayers.front();
    if ( l->layer() && l->layer()->type() == QgsMapLayer::VectorLayer )
    {
      mLegendExpressionFilterButton->setEnabled( true );
      bool exprEnabled;
      QString expr = QgsLayerTreeUtils::legendFilterByExpression( *l, &exprEnabled );
      mLegendExpressionFilterButton->setExpressionText( expr );
      mLegendExpressionFilterButton->setVectorLayer( qobject_cast<QgsVectorLayer*>( l->layer() ) );
      mLegendExpressionFilterButton->setChecked( exprEnabled );
    }
  }
}

void QgisApp::layerEditStateChanged()
{
  QgsMapLayer* layer = qobject_cast<QgsMapLayer *>( sender() );
  if ( layer && layer == activeLayer() )
  {
    activateDeactivateLayerRelatedActions( layer );
    mSaveRollbackInProgress = false;
  }
}

void QgisApp::updateLabelToolButtons()
{
  bool enableMove = false, enableRotate = false, enablePin = false, enableShowHide = false, enableChange = false;

  QMap<QString, QgsMapLayer*> layers = QgsMapLayerRegistry::instance()->mapLayers();
  for ( QMap<QString, QgsMapLayer*>::iterator it = layers.begin(); it != layers.end(); ++it )
  {
    QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( it.value() );
    if ( !vlayer || !vlayer->isEditable() ||
         ( !vlayer->diagramsEnabled() && !vlayer->labelsEnabled() ) )
      continue;

    int colX, colY, colShow, colAng;
    enablePin =
      enablePin ||
      ( qobject_cast<QgsMapToolPinLabels*>( mMapTools.mPinLabels ) &&
        ( qobject_cast<QgsMapToolPinLabels*>( mMapTools.mPinLabels )->labelMoveable( vlayer, colX, colY )
          || qobject_cast<QgsMapToolPinLabels*>( mMapTools.mPinLabels )->diagramMoveable( vlayer, colX, colY ) ) );

    enableShowHide =
      enableShowHide ||
      ( qobject_cast<QgsMapToolShowHideLabels*>( mMapTools.mShowHideLabels ) &&
        ( qobject_cast<QgsMapToolShowHideLabels*>( mMapTools.mShowHideLabels )->labelCanShowHide( vlayer, colShow )
          || qobject_cast<QgsMapToolShowHideLabels*>( mMapTools.mShowHideLabels )->diagramCanShowHide( vlayer, colShow ) ) );

    enableMove =
      enableMove ||
      ( qobject_cast<QgsMapToolMoveLabel*>( mMapTools.mMoveLabel ) &&
        ( qobject_cast<QgsMapToolMoveLabel*>( mMapTools.mMoveLabel )->labelMoveable( vlayer, colX, colY )
          || qobject_cast<QgsMapToolMoveLabel*>( mMapTools.mMoveLabel )->diagramMoveable( vlayer, colX, colY ) ) );

    enableRotate =
      enableRotate ||
      ( qobject_cast<QgsMapToolRotateLabel*>( mMapTools.mRotateLabel ) &&
        qobject_cast<QgsMapToolRotateLabel*>( mMapTools.mRotateLabel )->layerIsRotatable( vlayer, colAng ) );

    enableChange = true;

    if ( enablePin && enableShowHide && enableMove && enableRotate && enableChange )
      break;
  }

  mActionPinLabels->setEnabled( enablePin );
  mActionShowHideLabels->setEnabled( enableShowHide );
  mActionMoveLabel->setEnabled( enableMove );
  mActionRotateLabel->setEnabled( enableRotate );
  mActionChangeLabelProperties->setEnabled( enableChange );
}

void QgisApp::activateDeactivateLayerRelatedActions( QgsMapLayer* layer )
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
        mActionAddFeature->setIcon( QgsApplication::getThemeIcon( "/mActionCapturePoint.svg" ) );
        mActionMoveFeature->setIcon( QgsApplication::getThemeIcon( "/mActionMoveFeaturePoint.svg" ) );

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
        mActionAddFeature->setIcon( QgsApplication::getThemeIcon( "/mActionCaptureLine.svg" ) );
        mActionMoveFeature->setIcon( QgsApplication::getThemeIcon( "/mActionMoveFeatureLine.svg" ) );

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
        mActionAddFeature->setIcon( QgsApplication::getThemeIcon( "/mActionCapturePolygon.svg" ) );
        mActionMoveFeature->setIcon( QgsApplication::getThemeIcon( "/mActionMoveFeature.svg" ) );

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
        mActionAddFeature->setIcon( QgsApplication::getThemeIcon( "/mActionNewTableRow.svg" ) );
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

void QgisApp::refreshActionFeatureAction()
{
  QgsMapLayer* layer = activeLayer();

  if ( !layer || layer->type() != QgsMapLayer::VectorLayer )
  {
    return;
  }

  QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>( layer );

  bool layerHasActions = vlayer->actions()->size() || !QgsMapLayerActionRegistry::instance()->mapLayerActions( vlayer ).isEmpty();
  mActionFeatureAction->setEnabled( layerHasActions );
}

/////////////////////////////////////////////////////////////////
//
//
// Only functions relating to raster layer management in this
// section (look for a similar comment block to this to find
// the end of this section).
//
// Tim Sutton
//
//
/////////////////////////////////////////////////////////////////


// this is a slot for action from GUI to add raster layer
void QgisApp::addRasterLayer()
{
  QStringList selectedFiles;
  QString e;//only for parameter correctness
  QString title = tr( "Open a GDAL Supported Raster Data Source" );
  QgisGui::openFilesRememberingFilter( "lastRasterFileFilter", mRasterFileFilter, selectedFiles, e,
                                       title );

  if ( selectedFiles.isEmpty() )
  {
    // no files were selected, so just bail
    return;
  }

  addRasterLayers( selectedFiles );

}// QgisApp::addRasterLayer()

//
// This is the method that does the actual work of adding a raster layer - the others
// here simply create a raster layer object and delegate here. It is the responsibility
// of the calling method to manage things such as the frozen state of the mapcanvas and
// using waitcursors etc. - this method won't and SHOULDN'T do it
//
bool QgisApp::addRasterLayer( QgsRasterLayer *theRasterLayer )
{
  Q_CHECK_PTR( theRasterLayer );

  if ( ! theRasterLayer )
  {
    // XXX insert meaningful whine to the user here; although be
    // XXX mindful that a null layer may mean exhausted memory resources
    return false;
  }

  if ( !theRasterLayer->isValid() )
  {
    delete theRasterLayer;
    return false;
  }

  // register this layer with the central layers registry
  QList<QgsMapLayer *> myList;
  myList << theRasterLayer;
  QgsMapLayerRegistry::instance()->addMapLayers( myList );

  return true;
}


// Open a raster layer - this is the generic function which takes all parameters
// this method is a blend of addRasterLayer() functions (with and without provider)
// and addRasterLayers()
QgsRasterLayer* QgisApp::addRasterLayerPrivate(
  const QString & uri, const QString & baseName, const QString & providerKey,
  bool guiWarning, bool guiUpdate )
{
  if ( guiUpdate )
  {
    // let the user know we're going to possibly be taking a while
    // QApplication::setOverrideCursor( Qt::WaitCursor );
    mMapCanvas->freeze( true );
  }

  QgsDebugMsg( "Creating new raster layer using " + uri
               + " with baseName of " + baseName );

  QgsRasterLayer *layer = nullptr;
  // XXX ya know QgsRasterLayer can snip out the basename on its own;
  // XXX why do we have to pass it in for it?
  // ET : we may not be getting "normal" files here, so we still need the baseName argument
  if ( !providerKey.isEmpty() && uri.endsWith( ".adf", Qt::CaseInsensitive ) )
  {
    QFileInfo fileInfo( uri );
    QString dirName = fileInfo.path();
    layer = new QgsRasterLayer( dirName, QFileInfo( dirName ).completeBaseName(), QString( "gdal" ) );
  }
  else if ( providerKey.isEmpty() )
    layer = new QgsRasterLayer( uri, baseName ); // fi.completeBaseName());
  else
    layer = new QgsRasterLayer( uri, baseName, providerKey );

  QgsDebugMsg( "Constructed new layer" );

  QgsError error;
  QString title;
  bool ok = false;

  if ( !layer->isValid() )
  {
    error = layer->error();
    title = tr( "Invalid Layer" );

    if ( shouldAskUserForGDALSublayers( layer ) )
    {
      askUserForGDALSublayers( layer );
      ok = true;

      // The first layer loaded is not useful in that case. The user can select it in
      // the list if he wants to load it.
      delete layer;
      layer = nullptr;
    }
  }
  else
  {
    ok = addRasterLayer( layer );
    if ( !ok )
    {
      error.append( QGS_ERROR_MESSAGE( tr( "Error adding valid layer to map canvas" ),
                                       tr( "Raster layer" ) ) );
      title = tr( "Error" );
    }
  }

  if ( !ok )
  {
    if ( guiUpdate )
      mMapCanvas->freeze( false );

    // don't show the gui warning if we are loading from command line
    if ( guiWarning )
    {
      messageBar()->pushMessage( title, error.message( QgsErrorMessage::Text ),
                                 QgsMessageBar::CRITICAL, messageTimeout() );
    }

    if ( layer )
    {
      delete layer;
      layer = nullptr;
    }
  }

  if ( guiUpdate )
  {
    // draw the map
    mMapCanvas->freeze( false );
    mMapCanvas->refresh();
    // Let render() do its own cursor management
    //    QApplication::restoreOverrideCursor();
  }

  return layer;

} // QgisApp::addRasterLayer


//create a raster layer object and delegate to addRasterLayer(QgsRasterLayer *)
QgsRasterLayer* QgisApp::addRasterLayer(
  QString const & rasterFile, QString const & baseName, bool guiWarning )
{
  return addRasterLayerPrivate( rasterFile, baseName, QString(), guiWarning, true );
}


/** Add a raster layer directly without prompting user for location
  The caller must provide information compatible with the provider plugin
  using the uri and baseName. The provider can use these
  parameters in any way necessary to initialize the layer. The baseName
  parameter is used in the Map Legend so it should be formed in a meaningful
  way.

  \note   Copied from the equivalent addVectorLayer function in this file
  */
QgsRasterLayer* QgisApp::addRasterLayer(
  QString const &uri, QString const &baseName, QString const &providerKey )
{
  return addRasterLayerPrivate( uri, baseName, providerKey, true, true );
}


//create a raster layer object and delegate to addRasterLayer(QgsRasterLayer *)
bool QgisApp::addRasterLayers( QStringList const &theFileNameQStringList, bool guiWarning )
{
  if ( theFileNameQStringList.empty() )
  {
    // no files selected so bail out, but
    // allow mMapCanvas to handle events
    // first
    mMapCanvas->freeze( false );
    return false;
  }

  mMapCanvas->freeze( true );

  // this is messy since some files in the list may be rasters and others may
  // be ogr layers. We'll set returnValue to false if one or more layers fail
  // to load.
  bool returnValue = true;
  for ( QStringList::ConstIterator myIterator = theFileNameQStringList.begin();
        myIterator != theFileNameQStringList.end();
        ++myIterator )
  {
    QString errMsg;
    bool ok = false;

    // if needed prompt for zipitem layers
    QString vsiPrefix = QgsZipItem::vsiPrefix( *myIterator );
    if ( ! myIterator->startsWith( "/vsi", Qt::CaseInsensitive ) &&
         ( vsiPrefix == "/vsizip/" || vsiPrefix == "/vsitar/" ) )
    {
      if ( askUserForZipItemLayers( *myIterator ) )
        continue;
    }

    if ( QgsRasterLayer::isValidRasterFileName( *myIterator, errMsg ) )
    {
      QFileInfo myFileInfo( *myIterator );

      // try to create the layer
      QgsRasterLayer *layer = addRasterLayerPrivate( *myIterator, myFileInfo.completeBaseName(),
                              QString(), guiWarning, true );
      if ( layer && layer->isValid() )
      {
        //only allow one copy of a ai grid file to be loaded at a
        //time to prevent the user selecting all adfs in 1 dir which
        //actually represent 1 coverate,

        if ( myFileInfo.fileName().toLower().endsWith( ".adf" ) )
        {
          break;
        }
      }
      // if layer is invalid addRasterLayerPrivate() will show the error

    } // valid raster filename
    else
    {
      ok = false;

      // Issue message box warning unless we are loading from cmd line since
      // non-rasters are passed to this function first and then successfully
      // loaded afterwards (see main.cpp)
      if ( guiWarning )
      {
        QString msg = tr( "%1 is not a supported raster data source" ).arg( *myIterator );
        if ( !errMsg.isEmpty() )
          msg += '\n' + errMsg;

        messageBar()->pushMessage( tr( "Unsupported Data Source" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );
      }
    }
    if ( ! ok )
    {
      returnValue = false;
    }
  }

  mMapCanvas->freeze( false );
  mMapCanvas->refresh();

// Let render() do its own cursor management
//  QApplication::restoreOverrideCursor();

  return returnValue;

}// QgisApp::addRasterLayer()




///////////////////////////////////////////////////////////////////
//
//
//
//
//    RASTER ONLY RELATED FUNCTIONS BLOCK ENDS....
//
//
//
//
///////////////////////////////////////////////////////////////////


QgsPluginLayer* QgisApp::addPluginLayer( const QString& uri, const QString& baseName, const QString& providerKey )
{
  QgsPluginLayer* layer = QgsPluginLayerRegistry::instance()->createLayer( providerKey, uri );
  if ( !layer )
    return nullptr;

  layer->setName( baseName );

  QgsMapLayerRegistry::instance()->addMapLayer( layer );

  return layer;
}



#ifdef ANDROID
void QgisApp::keyReleaseEvent( QKeyEvent *event )
{
  static bool accepted = true;
  if ( event->key() == Qt::Key_Close )
  {
    // do something useful here
    int ret = QMessageBox::question( this, tr( "Exit QGIS" ),
                                     tr( "Do you really want to quit QGIS?" ),
                                     QMessageBox::Yes | QMessageBox::No );
    switch ( ret )
    {
      case QMessageBox::Yes:
        this->close();
        break;

      case QMessageBox::No:
        break;
    }
    event->setAccepted( accepted ); // don't close my Top Level Widget !
    accepted = false;// close the app next time when the user press back button
  }
  else
  {
    QMainWindow::keyReleaseEvent( event );
  }
}
#endif

void QgisApp::keyPressEvent( QKeyEvent * e )
{
  // The following statement causes a crash on WIN32 and should be
  // enclosed in an #ifdef QGISDEBUG if its really necessary. Its
  // commented out for now. [gsherman]
  // QgsDebugMsg( QString( "%1 (keypress received)" ).arg( e->text() ) );
  emit keyPressed( e );

  //cancel rendering progress with esc key
  if ( e->key() == Qt::Key_Escape )
  {
    stopRendering();
  }
#if defined(Q_OS_WIN) && defined(QGISDEBUG)
  else if ( e->key() == Qt::Key_Backslash && e->modifiers() & Qt::ControlModifier )
  {
    qgisCrashDump( 0 );
  }
#endif
  else
  {
    e->ignore();
  }
}

void QgisApp::startProfile( const QString& name )
{
  mProfiler->start( name );
}

void QgisApp::endProfile()
{
  mProfiler->end();
}

void QgisApp::functionProfile( void ( QgisApp::*fnc )(), QgisApp* instance, QString name )
{
  startProfile( name );
  ( instance->*fnc )();
  endProfile();
}

void QgisApp::mapCanvas_keyPressed( QKeyEvent *e )
{
  // Delete selected features when it is possible and KeyEvent was not managed by current MapTool
  if (( e->key() == Qt::Key_Backspace || e->key() == Qt::Key_Delete ) && e->isAccepted() )
  {
    deleteSelected();
  }
}

void QgisApp::customProjection()
{
  // Create an instance of the Custom Projection Designer modeless dialog.
  // Autodelete the dialog when closing since a pointer is not retained.
  QgsCustomProjectionDialog * myDialog = new QgsCustomProjectionDialog( this );
  myDialog->setAttribute( Qt::WA_DeleteOnClose );
  myDialog->show();
}

void QgisApp::newBookmark()
{
  showBookmarks();
  mBookMarksDockWidget->addClicked();
}

void QgisApp::showBookmarks()
{
  mBookMarksDockWidget->show();
  mBookMarksDockWidget->raise();
}

// Slot that gets called when the project file was saved with an older
// version of QGIS

void QgisApp::oldProjectVersionWarning( const QString& oldVersion )
{
  Q_UNUSED( oldVersion );
  QSettings settings;

  if ( settings.value( "/qgis/warnOldProjectVersion", QVariant( true ) ).toBool() )
  {
    QString smalltext = tr( "This project file was saved by an older version of QGIS."
                            " When saving this project file, QGIS will update it to the latest version, "
                            "possibly rendering it useless for older versions of QGIS." );

    QString title =  tr( "Project file is older" );

    messageBar()->pushMessage( title, smalltext );
  }
  return;
}

void QgisApp::updateUndoActions()
{
  bool canUndo = false, canRedo = false;
  QgsMapLayer* layer = activeLayer();
  if ( layer )
  {
    QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>( layer );
    if ( vlayer && vlayer->isEditable() )
    {
      canUndo = vlayer->undoStack()->canUndo();
      canRedo = vlayer->undoStack()->canRedo();
    }
  }
  mActionUndo->setEnabled( canUndo );
  mActionRedo->setEnabled( canRedo );
}


// add project directory to python path
void QgisApp::projectChanged( const QDomDocument &doc )
{
  Q_UNUSED( doc );
  QgsProject *project = qobject_cast<QgsProject*>( sender() );
  if ( !project )
    return;

  QFileInfo fi( project->fileName() );
  if ( !fi.exists() )
    return;

  static QString prevProjectDir = QString::null;

  if ( prevProjectDir == fi.canonicalPath() )
    return;

  QString expr;
  if ( !prevProjectDir.isNull() )
  {
    QString prev = prevProjectDir;
    expr = QString( "sys.path.remove(u'%1'); " ).arg( prev.replace( '\'', "\\'" ) );
  }

  prevProjectDir = fi.canonicalPath();

  QString prev = prevProjectDir;
  expr += QString( "sys.path.append(u'%1')" ).arg( prev.replace( '\'', "\\'" ) );

  QgsPythonRunner::run( expr );
}

void QgisApp::writeProject( QDomDocument &doc )
{
  // QGIS server does not use QgsProject for loading of QGIS project.
  // In order to allow reading of new projects, let's also write the original <legend> tag to the project.
  // Ideally the server should be ported to new layer tree implementation, but that requires
  // non-trivial changes to the server components.
  // The <legend> tag is ignored by QGIS application in >= 2.4 and this way also the new project files
  // can be opened in older versions of QGIS without loosing information about layer groups.

  QgsLayerTreeNode* clonedRoot = QgsProject::instance()->layerTreeRoot()->clone();
  QgsLayerTreeUtils::replaceChildrenOfEmbeddedGroups( QgsLayerTree::toGroup( clonedRoot ) );
  QgsLayerTreeUtils::updateEmbeddedGroupsProjectPath( QgsLayerTree::toGroup( clonedRoot ) ); // convert absolute paths to relative paths if required
  QDomElement oldLegendElem = QgsLayerTreeUtils::writeOldLegend( doc, QgsLayerTree::toGroup( clonedRoot ),
                              mLayerTreeCanvasBridge->hasCustomLayerOrder(), mLayerTreeCanvasBridge->customLayerOrder() );
  delete clonedRoot;
  doc.firstChildElement( "qgis" ).appendChild( oldLegendElem );

  QgsProject::instance()->writeEntry( "Legend", "filterByMap", static_cast< bool >( layerTreeView()->layerTreeModel()->legendFilterMapSettings() ) );

  projectChanged( doc );
}

void QgisApp::readProject( const QDomDocument &doc )
{
  projectChanged( doc );

  // force update of canvas, without automatic changes to extent and OTF projections
  bool autoEnableCrsTransform = mLayerTreeCanvasBridge->autoEnableCrsTransform();
  bool autoSetupOnFirstLayer = mLayerTreeCanvasBridge->autoSetupOnFirstLayer();
  mLayerTreeCanvasBridge->setAutoEnableCrsTransform( false );
  mLayerTreeCanvasBridge->setAutoSetupOnFirstLayer( false );

  mLayerTreeCanvasBridge->setCanvasLayers();

  if ( autoEnableCrsTransform )
    mLayerTreeCanvasBridge->setAutoEnableCrsTransform( true );

  if ( autoSetupOnFirstLayer )
    mLayerTreeCanvasBridge->setAutoSetupOnFirstLayer( true );
}

void QgisApp::showLayerProperties( QgsMapLayer *ml )
{
  /*
  TODO: Consider reusing the property dialogs again.
  Sometimes around mid 2005, the property dialogs were saved for later reuse;
  this resulted in a time savings when reopening the dialog. The code below
  cannot be used as is, however, simply by saving the dialog pointer here.
  Either the map layer needs to be passed as an argument to sync or else
  a separate copy of the dialog pointer needs to be stored with each layer.
  */

  if ( !ml )
    return;

  if ( !QgsProject::instance()->layerIsEmbedded( ml->id() ).isEmpty() )
  {
    return; //don't show properties of embedded layers
  }

  if ( ml->type() == QgsMapLayer::RasterLayer )
  {
#if 0 // See note above about reusing this
    QgsRasterLayerProperties *rlp = nullptr;
    if ( rlp )
    {
      rlp->sync();
    }
    else
    {
      rlp = new QgsRasterLayerProperties( ml, mMapCanvas, this );
      // handled by rendererChanged() connect( rlp, SIGNAL( refreshLegend( QString, bool ) ), mLayerTreeView, SLOT( refreshLayerSymbology( QString ) ) );
    }
#else
    QgsRasterLayerProperties *rlp = new QgsRasterLayerProperties( ml, mMapCanvas, this );
#endif

    rlp->exec();
    delete rlp; // delete since dialog cannot be reused without updating code
  }
  else if ( ml->type() == QgsMapLayer::VectorLayer ) // VECTOR
  {
    QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>( ml );

#if 0 // See note above about reusing this
    QgsVectorLayerProperties *vlp = nullptr;
    if ( vlp )
    {
      vlp->syncToLayer();
    }
    else
    {
      vlp = new QgsVectorLayerProperties( vlayer, this );
      // handled by rendererChanged() connect( vlp, SIGNAL( refreshLegend( QString ) ), mLayerTreeView, SLOT( refreshLayerSymbology( QString ) ) );
    }
#else
    QgsVectorLayerProperties *vlp = new QgsVectorLayerProperties( vlayer, this );
#endif
    Q_FOREACH ( QgsMapLayerConfigWidgetFactory* factory, mMapLayerPanelFactories )
    {
      vlp->addPropertiesPageFactory( factory );
    }

    mMapStyleWidget->blockUpdates( true );
    if ( vlp->exec() )
    {
      activateDeactivateLayerRelatedActions( ml );
      mMapStyleWidget->updateCurrentWidgetLayer();
    }
    mMapStyleWidget->blockUpdates( false );

    delete vlp; // delete since dialog cannot be reused without updating code
  }
  else if ( ml->type() == QgsMapLayer::PluginLayer )
  {
    QgsPluginLayer* pl = qobject_cast<QgsPluginLayer *>( ml );
    if ( !pl )
      return;

    QgsPluginLayerType* plt = QgsPluginLayerRegistry::instance()->pluginLayerType( pl->pluginLayerType() );
    if ( !plt )
      return;

    if ( !plt->showLayerProperties( pl ) )
    {
      messageBar()->pushMessage( tr( "Warning" ),
                                 tr( "This layer doesn't have a properties dialog." ),
                                 QgsMessageBar::INFO, messageTimeout() );
    }
  }
}

void QgisApp::namSetup()
{
  QgsNetworkAccessManager *nam = QgsNetworkAccessManager::instance();

  connect( nam, SIGNAL( authenticationRequired( QNetworkReply *, QAuthenticator * ) ),
           this, SLOT( namAuthenticationRequired( QNetworkReply *, QAuthenticator * ) ) );

  connect( nam, SIGNAL( proxyAuthenticationRequired( const QNetworkProxy &, QAuthenticator * ) ),
           this, SLOT( namProxyAuthenticationRequired( const QNetworkProxy &, QAuthenticator * ) ) );

  connect( nam, SIGNAL( requestTimedOut( QNetworkReply* ) ),
           this, SLOT( namRequestTimedOut( QNetworkReply* ) ) );

#ifndef QT_NO_OPENSSL
  connect( nam, SIGNAL( sslErrors( QNetworkReply *, const QList<QSslError> & ) ),
           this, SLOT( namSslErrors( QNetworkReply *, const QList<QSslError> & ) ) );
#endif
}

void QgisApp::namAuthenticationRequired( QNetworkReply *inReply, QAuthenticator *auth )
{
  QPointer<QNetworkReply> reply( inReply );
  Q_ASSERT( qApp->thread() == QThread::currentThread() );

  QString username = auth->user();
  QString password = auth->password();

  if ( username.isEmpty() && password.isEmpty() && reply->request().hasRawHeader( "Authorization" ) )
  {
    QByteArray header( reply->request().rawHeader( "Authorization" ) );
    if ( header.startsWith( "Basic " ) )
    {
      QByteArray auth( QByteArray::fromBase64( header.mid( 6 ) ) );
      int pos = auth.indexOf( ':' );
      if ( pos >= 0 )
      {
        username = auth.left( pos );
        password = auth.mid( pos + 1 );
      }
    }
  }

  for ( ;; )
  {
    bool ok;

    {
      QMutexLocker lock( QgsCredentials::instance()->mutex() );
      ok = QgsCredentials::instance()->get(
             QString( "%1 at %2" ).arg( auth->realm(), reply->url().host() ),
             username, password,
             tr( "Authentication required" ) );
    }
    if ( !ok )
      return;

    if ( reply.isNull() || reply->isFinished() )
      return;

    if ( auth->user() != username || ( password != auth->password() && !password.isNull() ) )
      break;

    // credentials didn't change - stored ones probably wrong? clear password and retry
    {
      QMutexLocker lock( QgsCredentials::instance()->mutex() );
      QgsCredentials::instance()->put(
        QString( "%1 at %2" ).arg( auth->realm(), reply->url().host() ),
        username, QString::null );
    }
  }

  // save credentials
  {
    QMutexLocker lock( QgsCredentials::instance()->mutex() );
    QgsCredentials::instance()->put(
      QString( "%1 at %2" ).arg( auth->realm(), reply->url().host() ),
      username, password
    );
  }

  auth->setUser( username );
  auth->setPassword( password );
}

void QgisApp::namProxyAuthenticationRequired( const QNetworkProxy &proxy, QAuthenticator *auth )
{
  QSettings settings;
  if ( !settings.value( "proxy/proxyEnabled", false ).toBool() ||
       settings.value( "proxy/proxyType", "" ).toString() == "DefaultProxy" )
  {
    auth->setUser( "" );
    return;
  }

  QString username = auth->user();
  QString password = auth->password();

  for ( ;; )
  {
    bool ok;

    {
      QMutexLocker lock( QgsCredentials::instance()->mutex() );
      ok = QgsCredentials::instance()->get(
             QString( "proxy %1:%2 [%3]" ).arg( proxy.hostName() ).arg( proxy.port() ).arg( auth->realm() ),
             username, password,
             tr( "Proxy authentication required" ) );
    }
    if ( !ok )
      return;

    if ( auth->user() != username || ( password != auth->password() && !password.isNull() ) )
      break;

    // credentials didn't change - stored ones probably wrong? clear password and retry
    {
      QMutexLocker lock( QgsCredentials::instance()->mutex() );
      QgsCredentials::instance()->put(
        QString( "proxy %1:%2 [%3]" ).arg( proxy.hostName() ).arg( proxy.port() ).arg( auth->realm() ),
        username, QString::null );
    }
  }

  {
    QMutexLocker lock( QgsCredentials::instance()->mutex() );
    QgsCredentials::instance()->put(
      QString( "proxy %1:%2 [%3]" ).arg( proxy.hostName() ).arg( proxy.port() ).arg( auth->realm() ),
      username, password
    );
  }

  auth->setUser( username );
  auth->setPassword( password );
}

#ifndef QT_NO_OPENSSL
void QgisApp::namSslErrors( QNetworkReply *reply, const QList<QSslError> &errors )
{
  // stop the timeout timer, or app crashes if the user (or slot) takes longer than
  // singleshot timeout and tries to update the closed QNetworkReply
  QTimer *timer = reply->findChild<QTimer *>( "timeoutTimer" );
  if ( timer )
  {
    QgsDebugMsg( "Stopping network reply timeout" );
    timer->stop();
  }

  QgsDebugMsg( QString( "SSL errors occurred accessing URL:\n%1" ).arg( reply->request().url().toString() ) );

  QString hostport( QString( "%1:%2" )
                    .arg( reply->url().host() )
                    .arg( reply->url().port() != -1 ? reply->url().port() : 443 )
                    .trimmed() );
  QString digest( QgsAuthCertUtils::shaHexForCert( reply->sslConfiguration().peerCertificate() ) );
  QString dgsthostport( QString( "%1:%2" ).arg( digest, hostport ) );

  const QHash<QString, QSet<QSslError::SslError> > &errscache( QgsAuthManager::instance()->getIgnoredSslErrorCache() );

  if ( errscache.contains( dgsthostport ) )
  {
    QgsDebugMsg( QString( "Ignored SSL errors cahced item found, ignoring errors if they match for %1" ).arg( hostport ) );
    const QSet<QSslError::SslError>& errenums( errscache.value( dgsthostport ) );
    bool ignore = !errenums.isEmpty();
    int errmatched = 0;
    if ( ignore )
    {
      Q_FOREACH ( const QSslError& error, errors )
      {
        if ( error.error() == QSslError::NoError )
          continue;

        bool errmatch = errenums.contains( error.error() );
        ignore = ignore && errmatch;
        errmatched += errmatch ? 1 : 0;
      }
    }

    if ( ignore && errenums.size() == errmatched )
    {
      QgsDebugMsg( QString( "Errors matched cached item's, ignoring all for %1" ).arg( hostport ) );
      reply->ignoreSslErrors();
      return;
    }

    QgsDebugMsg( QString( "Errors %1 for cached item for %2" )
                 .arg( errenums.isEmpty() ? "not found" : "did not match",
                       hostport ) );
  }


  QgsAuthSslErrorsDialog *dlg = new QgsAuthSslErrorsDialog( reply, errors, this, digest, hostport );
  dlg->setWindowModality( Qt::ApplicationModal );
  dlg->resize( 580, 512 );
  if ( dlg->exec() )
  {
    if ( reply )
    {
      QgsDebugMsg( QString( "All SSL errors ignored for %1" ).arg( hostport ) );
      reply->ignoreSslErrors();
    }
  }
  dlg->deleteLater();

  // restart network request timeout timer
  if ( reply )
  {
    QSettings s;
    QTimer *timer = reply->findChild<QTimer *>( "timeoutTimer" );
    if ( timer )
    {
      QgsDebugMsg( "Restarting network reply timeout" );
      timer->setSingleShot( true );
      timer->start( s.value( "/qgis/networkAndProxy/networkTimeout", "300000" ).toInt() );
    }
  }
}
#endif

void QgisApp::namRequestTimedOut( QNetworkReply *reply )
{
  Q_UNUSED( reply );
  QLabel *msgLabel = new QLabel( tr( "A network request timed out, any data received is likely incomplete." ) +
                                 tr( " Please check the <a href=\"#messageLog\">message log</a> for further info." ), messageBar() );
  msgLabel->setWordWrap( true );
  connect( msgLabel, SIGNAL( linkActivated( QString ) ), mLogDock, SLOT( show() ) );
  messageBar()->pushItem( new QgsMessageBarItem( msgLabel, QgsMessageBar::WARNING, messageTimeout() ) );
}

void QgisApp::namUpdate()
{
  QgsNetworkAccessManager::instance()->setupDefaultProxyAndCache();
}

void QgisApp::masterPasswordSetup()
{
  connect( QgsAuthManager::instance(), SIGNAL( messageOut( const QString&, const QString&, QgsAuthManager::MessageLevel ) ),
           this, SLOT( authMessageOut( const QString&, const QString&, QgsAuthManager::MessageLevel ) ) );
  connect( QgsAuthManager::instance(), SIGNAL( authDatabaseEraseRequested() ),
           this, SLOT( eraseAuthenticationDatabase() ) );
}

void QgisApp::eraseAuthenticationDatabase()
{
  // First check if now is a good time to interact with the user, e.g. project is done loading.
  // If not, ask QgsAuthManager to re-emit authDatabaseEraseRequested from the schedule timer.
  // No way to know if user interaction will interfere with plugins loading layers.

  if ( !QgsProject::instance()->fileName().isNull() ) // a non-blank project is loaded
  {
    // Apparently, as of QGIS 2.9, the only way to query that the project is in a
    // layer-loading state is via a custom property of the project's layer tree.
    QgsLayerTreeGroup *layertree( QgsProject::instance()->layerTreeRoot() );
    if ( layertree && layertree->customProperty( "loading" ).toBool() )
    {
      QgsDebugMsg( "Project loading, skipping auth db erase" );
      QgsAuthManager::instance()->setScheduledAuthDbEraseRequestEmitted( false );
      return;
    }
  }

  // TODO: Check is Browser panel is also still loading?
  //       It has auto-connections in parallel (if tree item is expanded), though
  //       such connections with possible master password requests *should* be ignored
  //       when there is an authentication db erase scheduled.

  // This funtion should tell QgsAuthManager to stop any erase db schedule timer,
  // *after* interacting with the user
  QgsAuthGuiUtils::eraseAuthenticationDatabase( messageBar(), messageTimeout(), this );
}

void QgisApp::authMessageOut( const QString& message, const QString& authtag, QgsAuthManager::MessageLevel level )
{
  // only if main window is active window
  if ( qApp->activeWindow() != this )
    return;

  int levelint = static_cast< int >( level );
  messageBar()->pushMessage( authtag, message, static_cast< QgsMessageBar::MessageLevel >( levelint ), 7 );
}

void QgisApp::completeInitialization()
{
  emit initializationCompleted();
}

void QgisApp::toolButtonActionTriggered( QAction *action )
{
  QToolButton *bt = qobject_cast<QToolButton *>( sender() );
  if ( !bt )
    return;

  QSettings settings;
  if ( action == mActionSelectFeatures )
    settings.setValue( "/UI/selectTool", 1 );
  else if ( action == mActionSelectRadius )
    settings.setValue( "/UI/selectTool", 2 );
  else if ( action == mActionSelectPolygon )
    settings.setValue( "/UI/selectTool", 3 );
  else if ( action == mActionSelectFreehand )
    settings.setValue( "/UI/selectTool", 4 );
  else if ( action == mActionMeasure )
    settings.setValue( "/UI/measureTool", 0 );
  else if ( action == mActionMeasureArea )
    settings.setValue( "/UI/measureTool", 1 );
  else if ( action == mActionMeasureAngle )
    settings.setValue( "/UI/measureTool", 2 );
  else if ( action == mActionTextAnnotation )
    settings.setValue( "/UI/annotationTool", 0 );
  else if ( action == mActionFormAnnotation )
    settings.setValue( "/UI/annotationTool", 1 );
  else if ( action == mActionHtmlAnnotation )
    settings.setValue( "/UI/annotationTool", 2 );
  else if ( action == mActionSvgAnnotation )
    settings.setValue( "UI/annotationTool", 3 );
  else if ( action == mActionAnnotation )
    settings.setValue( "/UI/annotationTool", 4 );
  else if ( action == mActionNewSpatiaLiteLayer )
    settings.setValue( "/UI/defaultNewLayer", 0 );
  else if ( action == mActionNewVectorLayer )
    settings.setValue( "/UI/defaultNewLayer", 1 );
  else if ( action == mActionNewMemoryLayer )
    settings.setValue( "/UI/defaultNewLayer", 2 );
  else if ( action == mActionNewGeoPackageLayer )
    settings.setValue( "/UI/defaultNewLayer", 3 );
  else if ( action == mActionRotatePointSymbols )
    settings.setValue( "/UI/defaultPointSymbolAction", 0 );
  else if ( action == mActionOffsetPointSymbol )
    settings.setValue( "/UI/defaultPointSymbolAction", 1 );
  else if ( mActionAddPgLayer && action == mActionAddPgLayer )
    settings.setValue( "/UI/defaultAddDbLayerAction", 0 );
  else if ( mActionAddMssqlLayer && action == mActionAddMssqlLayer )
    settings.setValue( "/UI/defaultAddDbLayerAction", 1 );
  // else if ( mActionAddDb2Layer && action == mActionAddDb2Layer )
  //   settings.setValue( "/UI/defaultAddDbLayerAction", 2 );
  else if ( mActionAddOracleLayer && action == mActionAddOracleLayer )
    settings.setValue( "/UI/defaultAddDbLayerAction", 3 );
  else if ( action == mActionAddWfsLayer )
    settings.setValue( "/UI/defaultFeatureService", 0 );
  else if ( action == mActionAddAfsLayer )
    settings.setValue( "/UI/defaultFeatureService", 1 );
  else if ( action == mActionAddWmsLayer )
    settings.setValue( "/UI/defaultMapService", 0 );
  else if ( action == mActionAddAmsLayer )
    settings.setValue( "/UI/defaultMapService", 1 );

  bt->setDefaultAction( action );
}

QMenu* QgisApp::createPopupMenu()
{
  QMenu* menu = QMainWindow::createPopupMenu();
  QList< QAction* > al = menu->actions();
  QList< QAction* > panels, toolbars;

  if ( !al.isEmpty() )
  {
    bool found = false;
    for ( int i = 0; i < al.size(); ++i )
    {
      if ( al[ i ]->isSeparator() )
      {
        found = true;
        continue;
      }

      if ( !found )
      {
        panels.append( al[ i ] );
      }
      else
      {
        toolbars.append( al[ i ] );
      }
    }

    qSort( panels.begin(), panels.end(), cmpByText_ );
    QWidgetAction* panelstitle = new QWidgetAction( menu );
    QLabel* plabel = new QLabel( QString( "<b>%1</b>" ).arg( tr( "Panels" ) ) );
    plabel->setMargin( 3 );
    plabel->setAlignment( Qt::AlignHCenter );
    panelstitle->setDefaultWidget( plabel );
    menu->addAction( panelstitle );
    Q_FOREACH ( QAction* a, panels )
    {
      menu->addAction( a );
    }
    menu->addSeparator();
    QWidgetAction* toolbarstitle = new QWidgetAction( menu );
    QLabel* tlabel = new QLabel( QString( "<b>%1</b>" ).arg( tr( "Toolbars" ) ) );
    tlabel->setMargin( 3 );
    tlabel->setAlignment( Qt::AlignHCenter );
    toolbarstitle->setDefaultWidget( tlabel );
    menu->addAction( toolbarstitle );
    qSort( toolbars.begin(), toolbars.end(), cmpByText_ );
    Q_FOREACH ( QAction* a, toolbars )
    {
      menu->addAction( a );
    }
  }

  return menu;
}

void QgisApp::osmDownloadDialog()
{
  QgsOSMDownloadDialog dlg;
  dlg.exec();
}

void QgisApp::osmImportDialog()
{
  QgsOSMImportDialog dlg;
  dlg.exec();
}

void QgisApp::osmExportDialog()
{
  QgsOSMExportDialog dlg;
  dlg.exec();
}

void QgisApp::showStatisticsDockWidget()
{
  mStatisticalSummaryDockWidget->show();
  mStatisticalSummaryDockWidget->raise();
}

void QgisApp::onLayerError( const QString& msg )
{
  QgsVectorLayer* layer = qobject_cast<QgsVectorLayer*>( sender() );

  Q_ASSERT( layer );

  mInfoBar->pushCritical( tr( "Layer %1" ).arg( layer->name() ), msg );
}


#ifdef HAVE_TOUCH
bool QgisApp::gestureEvent( QGestureEvent *event )
{
  if ( QGesture *tapAndHold = event->gesture( Qt::TapAndHoldGesture ) )
  {
    tapAndHoldTriggered( static_cast<QTapAndHoldGesture *>( tapAndHold ) );
  }
  return true;
}

void QgisApp::tapAndHoldTriggered( QTapAndHoldGesture *gesture )
{
  if ( gesture->state() == Qt::GestureFinished )
  {
    QPoint pos = gesture->position().toPoint();
    QWidget * receiver = QApplication::widgetAt( pos );
    qDebug() << "tapAndHoldTriggered: LONG CLICK gesture happened at " << pos;
    qDebug() << "widget under point of click: " << receiver;

    QApplication::postEvent( receiver, new QMouseEvent( QEvent::MouseButtonPress, receiver->mapFromGlobal( pos ), Qt::RightButton, Qt::RightButton, Qt::NoModifier ) );
    QApplication::postEvent( receiver, new QMouseEvent( QEvent::MouseButtonRelease, receiver->mapFromGlobal( pos ), Qt::RightButton, Qt::RightButton, Qt::NoModifier ) );
  }
}
#endif

#ifdef Q_OS_WIN
LONG WINAPI QgisApp::qgisCrashDump( struct _EXCEPTION_POINTERS *ExceptionInfo )
{
  QString dumpName = QDir::toNativeSeparators(
                       QString( "%1\\qgis-%2-%3-%4-%5.dmp" )
                       .arg( QDir::tempPath() )
                       .arg( QDateTime::currentDateTime().toString( "yyyyMMdd-hhmmss" ) )
                       .arg( GetCurrentProcessId() )
                       .arg( GetCurrentThreadId() )
                       .arg( QGis::QGIS_DEV_VERSION )
                     );

  QString msg;
  HANDLE hDumpFile = CreateFile( dumpName.toLocal8Bit(), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_WRITE | FILE_SHARE_READ, 0, CREATE_ALWAYS, 0, 0 );
  if ( hDumpFile != INVALID_HANDLE_VALUE )
  {
    MINIDUMP_EXCEPTION_INFORMATION ExpParam;
    ExpParam.ThreadId = GetCurrentThreadId();
    ExpParam.ExceptionPointers = ExceptionInfo;
    ExpParam.ClientPointers = TRUE;

    /*
    if ( MiniDumpWriteDump( GetCurrentProcess(), GetCurrentProcessId(), hDumpFile, MiniDumpWithDataSegs, ExceptionInfo ? &ExpParam : nullptr, nullptr, nullptr ) )
    {
      msg = QObject::tr( "minidump written to %1" ).arg( dumpName );
    }
    else
    {
      msg = QObject::tr( "writing of minidump to %1 failed (%2)" ).arg( dumpName ).arg( GetLastError(), 0, 16 );
    }
    */

    CloseHandle( hDumpFile );
  }
  else
  {
    msg = QObject::tr( "creation of minidump to %1 failed (%2)" ).arg( dumpName ).arg( GetLastError(), 0, 16 );
  }

  QMessageBox::critical( 0, QObject::tr( "Crash dumped" ), msg );

  return EXCEPTION_EXECUTE_HANDLER;
}
#endif
