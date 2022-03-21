/***************************************************************************
 *   qgsprojectionselector.cpp                                             *
 *   Copyright (C) 2005 by Tim Sutton                                      *
 *   tim@linfiniti.com                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/
#include "qgsprojectionselectiontreewidget.h"

//standard includes
#include <sqlite3.h>

//qgis includes
#include "qgis.h" //magic numbers here
#include "qgsapplication.h"
#include "qgslogger.h"
#include "qgscoordinatereferencesystem.h"
#include "qgsmessagelog.h"
#include "qgssettings.h"
#include "qgsrectangle.h"
#include "qgscoordinatereferencesystemregistry.h"
#include "qgsdatums.h"
#include "qgsprojoperation.h"
#include "qgsstringutils.h"

//qt includes
#include <QFileInfo>
#include <QHeaderView>
#include <QResizeEvent>
#include <QMessageBox>
#include <QRegularExpression>

QgsProjectionSelectionTreeWidget::QgsProjectionSelectionTreeWidget( QWidget *parent )
  : QWidget( parent )
{
  setupUi( this );

  QFont f = teProjection->font();
  f.setPointSize( f.pointSize() - 2 );
  teProjection->setFont( f );

  leSearch->setShowSearchIcon( true );

  connect( lstCoordinateSystems, &QTreeWidget::itemDoubleClicked, this, &QgsProjectionSelectionTreeWidget::lstCoordinateSystems_itemDoubleClicked );
  connect( lstRecent, &QTreeWidget::itemDoubleClicked, this, &QgsProjectionSelectionTreeWidget::lstRecent_itemDoubleClicked );
  connect( lstCoordinateSystems, &QTreeWidget::currentItemChanged, this, &QgsProjectionSelectionTreeWidget::lstCoordinateSystems_currentItemChanged );
  connect( lstRecent, &QTreeWidget::currentItemChanged, this, &QgsProjectionSelectionTreeWidget::lstRecent_currentItemChanged );
  connect( cbxHideDeprecated, &QCheckBox::stateChanged, this, &QgsProjectionSelectionTreeWidget::updateFilter );
  connect( leSearch, &QgsFilterLineEdit::textChanged, this, &QgsProjectionSelectionTreeWidget::updateFilter );

  mAreaCanvas->setVisible( mShowMap );

  // Get the full path name to the sqlite3 spatial reference database.
  mSrsDatabaseFileName = QgsApplication::srsDatabaseFilePath();

  lstCoordinateSystems->header()->setSectionResizeMode( AuthidColumn, QHeaderView::Stretch );
  lstCoordinateSystems->header()->resizeSection( QgisCrsIdColumn, 0 );
  lstCoordinateSystems->header()->setSectionResizeMode( QgisCrsIdColumn, QHeaderView::Fixed );

  // Hide (internal) ID column
  lstCoordinateSystems->setColumnHidden( QgisCrsIdColumn, true );

  lstRecent->header()->setSectionResizeMode( AuthidColumn, QHeaderView::Stretch );
  lstRecent->header()->resizeSection( QgisCrsIdColumn, 0 );
  lstRecent->header()->setSectionResizeMode( QgisCrsIdColumn, QHeaderView::Fixed );

  // Hide (internal) ID column
  lstRecent->setColumnHidden( QgisCrsIdColumn, true );

  mRecentProjections = QgsCoordinateReferenceSystem::recentCoordinateReferenceSystems();

  mCheckBoxNoProjection->setHidden( true );
  mCheckBoxNoProjection->setEnabled( false );
  connect( mCheckBoxNoProjection, &QCheckBox::toggled, this, [ = ]
  {
    if ( !mBlockSignals )
    {
      emit crsSelected();
      emit hasValidSelectionChanged( hasValidSelection() );
    }
  } );
  connect( mCheckBoxNoProjection, &QCheckBox::toggled, this, [ = ]( bool checked )
  {
    if ( mCheckBoxNoProjection->isEnabled() )
    {
      mFrameProjections->setDisabled( checked );
    }
  } );

  QgsSettings settings;
  mSplitter->restoreState( settings.value( QStringLiteral( "Windows/ProjectionSelector/splitterState" ) ).toByteArray() );
}

QgsProjectionSelectionTreeWidget::~QgsProjectionSelectionTreeWidget()
{
  QgsSettings settings;
  settings.setValue( QStringLiteral( "Windows/ProjectionSelector/splitterState" ), mSplitter->saveState() );

  // Push current projection to front, only if set
  const QgsCoordinateReferenceSystem selectedCrs = crs();
  if ( selectedCrs.isValid() )
    QgsCoordinateReferenceSystem::pushRecentCoordinateReferenceSystem( selectedCrs );
}

void QgsProjectionSelectionTreeWidget::resizeEvent( QResizeEvent *event )
{
  lstCoordinateSystems->header()->resizeSection( NameColumn, event->size().width() - 240 );
  lstCoordinateSystems->header()->resizeSection( AuthidColumn, 240 );
  lstCoordinateSystems->header()->resizeSection( QgisCrsIdColumn, 0 );

  lstRecent->header()->resizeSection( NameColumn, event->size().width() - 240 );
  lstRecent->header()->resizeSection( AuthidColumn, 240 );
  lstRecent->header()->resizeSection( QgisCrsIdColumn, 0 );
}

void QgsProjectionSelectionTreeWidget::showEvent( QShowEvent *event )
{
  if ( mInitialized )
    return;

  // ensure the projection list view is actually populated
  // before we show this widget
  loadCrsList( &mCrsFilter );
  loadUserCrsList( &mCrsFilter );

  if ( !mRecentProjListDone )
  {
    for ( const QgsCoordinateReferenceSystem &crs : std::as_const( mRecentProjections ) )
      insertRecent( crs );
    mRecentProjListDone = true;
  }

  // apply deferred selection
  mBlockSignals = true; // we've already emitted the signal, when the deferred crs was first set
  applySelection();
  mBlockSignals = false;

  emit initialized();

  // Pass up the inheritance hierarchy
  QWidget::showEvent( event );
  mInitialized = true;
}

QString QgsProjectionSelectionTreeWidget::ogcWmsCrsFilterAsSqlExpression( QSet<QString> *crsFilter )
{
  QString sqlExpression = QStringLiteral( "1" );           // it's "SQL" for "true"
  QMap<QString, QStringList> authParts;

  if ( !crsFilter )
    return sqlExpression;

  /*
     Ref: WMS 1.3.0, section 6.7.3 "Layer CRS":

     Every Layer CRS has an identifier that is a character string. Two types of
     Layer CRS identifiers are permitted: "label" and "URL" identifiers:

     Label: The identifier includes a namespace prefix, a colon, a numeric or
        string code, and in some instances a comma followed by additional
        parameters. This International Standard defines three namespaces:
        CRS, EpsgCrsId and AUTO2 [...]

     URL: The identifier is a fully-qualified Uniform Resource Locator that
        references a publicly-accessible file containing a definition of the CRS
        that is compliant with ISO 19111.
  */

  // iterate through all incoming CRSs

  const auto authIds { *crsFilter };
  for ( const QString &auth_id : authIds )
  {
    QStringList parts = auth_id.split( ':' );

    if ( parts.size() < 2 )
      continue;

    authParts[ parts.at( 0 ).toUpper()].append( parts.at( 1 ).toUpper() );
  }

  if ( authParts.isEmpty() )
    return sqlExpression;

  if ( !authParts.isEmpty() )
  {
    QString prefix = QStringLiteral( " AND (" );
    for ( auto it = authParts.constBegin(); it != authParts.constEnd(); ++it )
    {
      sqlExpression += QStringLiteral( "%1(upper(auth_name)='%2' AND upper(auth_id) IN ('%3'))" )
                       .arg( prefix,
                             it.key(),
                             it.value().join( QLatin1String( "','" ) ) );
      prefix = QStringLiteral( " OR " );
    }
    sqlExpression += ')';
  }

  QgsDebugMsgLevel( "exiting with '" + sqlExpression + "'.", 4 );

  return sqlExpression;
}

void QgsProjectionSelectionTreeWidget::applySelection( int column, QString value )
{
  if ( !mProjListDone || !mUserProjListDone )
  {
    // defer selection until loaded
    mSearchColumn = column;
    mSearchValue  = value;
    return;
  }

  if ( column == QgsProjectionSelectionTreeWidget::None )
  {
    // invoked deferred selection
    column = mSearchColumn;
    value  = mSearchValue;

    mSearchColumn = QgsProjectionSelectionTreeWidget::None;
    mSearchValue.clear();
  }

  if ( column == QgsProjectionSelectionTreeWidget::None )
    return;

  QList<QTreeWidgetItem *> nodes = lstCoordinateSystems->findItems( value, Qt::MatchExactly | Qt::MatchRecursive, column );
  if ( !nodes.isEmpty() )
  {
    QgsDebugMsgLevel( QStringLiteral( "found %1,%2" ).arg( column ).arg( value ), 4 );
    lstCoordinateSystems->setCurrentItem( nodes.first() );
  }
  else
  {
    QgsDebugMsgLevel( QStringLiteral( "nothing found for %1,%2" ).arg( column ).arg( value ), 4 );
    // deselect the selected item to avoid confusing the user
    lstCoordinateSystems->clearSelection();
    lstRecent->clearSelection();
    teProjection->clear();
  }
}

void QgsProjectionSelectionTreeWidget::insertRecent( const QgsCoordinateReferenceSystem &crs )
{
  if ( !mProjListDone || !mUserProjListDone )
    return;

  QList<QTreeWidgetItem *> nodes = lstCoordinateSystems->findItems( QString::number( crs.srsid() ), Qt::MatchExactly | Qt::MatchRecursive, QgisCrsIdColumn );
  if ( nodes.isEmpty() )
    return;

  lstRecent->insertTopLevelItem( 0, new QTreeWidgetItem( lstRecent, QStringList()
                                 << nodes.first()->text( NameColumn )
                                 << nodes.first()->text( AuthidColumn )
                                 << nodes.first()->text( QgisCrsIdColumn ) ) );
}

//note this line just returns the projection name!
QString QgsProjectionSelectionTreeWidget::selectedName()
{
  // return the selected wkt name from the list view
  QTreeWidgetItem *lvi = lstCoordinateSystems->currentItem();
  return lvi ? lvi->text( NameColumn ) : QString();
}

void QgsProjectionSelectionTreeWidget::setCrs( const QgsCoordinateReferenceSystem &crs )
{
  if ( !crs.isValid() )
  {
    mCheckBoxNoProjection->setChecked( true );
  }
  else
  {
    bool changed = false;
    if ( !mInitialized )
    {
      changed = mDeferredLoadCrs != crs;
      mDeferredLoadCrs = crs;
    }
    mBlockSignals = true;
    mCheckBoxNoProjection->setChecked( false );
    mBlockSignals = false;

    if ( !crs.authid().isEmpty() )
      applySelection( AuthidColumn, crs.authid() );
    else
      loadUnknownCrs( crs );
    if ( changed )
    {
      emit crsSelected();
      emit hasValidSelectionChanged( hasValidSelection() );
    }
  }
}

void QgsProjectionSelectionTreeWidget::setPreviewRect( const QgsRectangle &rect )
{
  mAreaCanvas->setCanvasRect( rect );
}

QgsRectangle QgsProjectionSelectionTreeWidget::previewRect() const
{
  return mAreaCanvas->canvasRect();
}

QString QgsProjectionSelectionTreeWidget::getSelectedExpression( const QString &expression ) const
{
  // Only return the attribute if there is a node in the tree
  // selected that has an srs_id.  This prevents error if the user
  // selects a top-level node rather than an actual coordinate
  // system
  //
  // Get the selected node and make sure it is a srs andx
  // not a top-level projection node
  QTreeWidgetItem *lvi = lstCoordinateSystems->currentItem();
  if ( !lvi || lvi->text( QgisCrsIdColumn ).isEmpty() )
    return QString();

  //
  // Determine if this is a user projection or a system on
  // user projection defs all have srs_id >= 100000
  //
  QString databaseFileName;
  if ( lvi->text( QgisCrsIdColumn ).toLong() >= USER_CRS_START_ID )
  {
    databaseFileName = QgsApplication::qgisUserDatabaseFilePath();
    if ( !QFileInfo::exists( databaseFileName ) )
    {
      return QString();
    }
  }
  else
  {
    databaseFileName = mSrsDatabaseFileName;
  }

  //
  // set up the database
  // XXX We could probably hold the database open for the life of this object,
  // assuming that it will never be used anywhere else. Given the low overhead,
  // opening it each time seems to be a reasonable approach at this time.
  sqlite3 *database = nullptr;
  int rc = sqlite3_open_v2( databaseFileName.toUtf8().constData(), &database, SQLITE_OPEN_READONLY, nullptr );
  if ( rc )
  {
    QgsMessageLog::logMessage( tr( "Resource Location Error" ), tr( "Error reading database file from: \n %1\n"
                               "Because of this the projection selector will not work…" ).arg( databaseFileName ),
                               Qgis::MessageLevel::Critical );
    return QString();
  }

  // prepare the sql statement
  const char *tail = nullptr;
  sqlite3_stmt *stmt = nullptr;
  QString sql = QStringLiteral( "select %1 from tbl_srs where srs_id=%2" )
                .arg( expression,
                      lvi->text( QgisCrsIdColumn ) );

  QgsDebugMsgLevel( QStringLiteral( "Finding selected attribute using : %1" ).arg( sql ), 4 );
  rc = sqlite3_prepare( database, sql.toUtf8(), sql.toUtf8().length(), &stmt, &tail );
  // XXX Need to free memory from the error msg if one is set
  QString attributeValue;
  if ( rc == SQLITE_OK && sqlite3_step( stmt ) == SQLITE_ROW )
  {
    // get the first row of the result set
    attributeValue = QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 0 ) );
  }

  // close the statement
  sqlite3_finalize( stmt );
  // close the database
  sqlite3_close( database );

  // return the srs
  return attributeValue;
}

QgsCoordinateReferenceSystem QgsProjectionSelectionTreeWidget::crs() const
{
  if ( mCheckBoxNoProjection->isEnabled() && mCheckBoxNoProjection->isChecked() )
    return QgsCoordinateReferenceSystem();

  if ( !mInitialized && mDeferredLoadCrs.isValid() )
    return mDeferredLoadCrs;

  const QString srsIdString = getSelectedExpression( QStringLiteral( "srs_id" ) );
  if ( !srsIdString.isEmpty() )
  {
    int srid = srsIdString.toLong();
    if ( srid >= USER_CRS_START_ID )
      return QgsCoordinateReferenceSystem::fromOgcWmsCrs( QStringLiteral( "USER:%1" ).arg( srid ) );
    else
      return QgsCoordinateReferenceSystem::fromOgcWmsCrs( getSelectedExpression( QStringLiteral( "upper(auth_name||':'||auth_id)" ) ) );
  }
  else
  {
    // custom CRS
    QTreeWidgetItem *lvi = lstCoordinateSystems->currentItem();
    if ( lvi && lvi->data( 0, RoleWkt ).isValid() )
      return QgsCoordinateReferenceSystem::fromWkt( lvi->data( 0, RoleWkt ).toString() );
    else if ( lvi && lvi->data( 0, RoleProj ).isValid() )
      return QgsCoordinateReferenceSystem::fromProj( lvi->data( 0, RoleProj ).toString() );
    else
      return QgsCoordinateReferenceSystem();
  }
}

void QgsProjectionSelectionTreeWidget::setShowNoProjection( bool show )
{
  mCheckBoxNoProjection->setVisible( show );
  mCheckBoxNoProjection->setEnabled( show );
  if ( show )
  {
    mFrameProjections->setDisabled( mCheckBoxNoProjection->isChecked() );
  }
}

void QgsProjectionSelectionTreeWidget::setShowBoundsMap( bool show )
{
  mShowMap = show;
  mAreaCanvas->setVisible( show );
}

bool QgsProjectionSelectionTreeWidget::showNoProjection() const
{
  return !mCheckBoxNoProjection->isHidden();
}

void QgsProjectionSelectionTreeWidget::setNotSetText( const QString &text )
{
  mCheckBoxNoProjection->setText( text );
}

bool QgsProjectionSelectionTreeWidget::showBoundsMap() const
{
  return mShowMap;
}

bool QgsProjectionSelectionTreeWidget::hasValidSelection() const
{
  QTreeWidgetItem *item = lstCoordinateSystems->currentItem();
  if ( mCheckBoxNoProjection->isChecked() )
    return true;
  else if ( !mInitialized && mDeferredLoadCrs.isValid() )
    return true;
  else
    return item && ( !item->text( QgisCrsIdColumn ).isEmpty() || item->data( 0, RoleWkt ).isValid() );
}

long QgsProjectionSelectionTreeWidget::selectedCrsId()
{
  QTreeWidgetItem *item = lstCoordinateSystems->currentItem();

  if ( item && !item->text( QgisCrsIdColumn ).isEmpty() )
    return lstCoordinateSystems->currentItem()->text( QgisCrsIdColumn ).toLong();
  else
    return 0;
}


void QgsProjectionSelectionTreeWidget::setOgcWmsCrsFilter( const QSet<QString> &crsFilter )
{
  mCrsFilter = crsFilter;
  mProjListDone = false;
  mUserProjListDone = false;
  lstCoordinateSystems->clear();
}

void QgsProjectionSelectionTreeWidget::loadUserCrsList( QSet<QString> *crsFilter )
{
  if ( mUserProjListDone )
    return;

  QgsDebugMsgLevel( QStringLiteral( "Fetching user projection list..." ), 4 );

  // User defined coordinate system node
  // Make in an italic font to distinguish them from real projections
  mUserProjList = new QTreeWidgetItem( lstCoordinateSystems, QStringList( tr( "User Defined Coordinate Systems" ) ) );
  mUserProjList->setFlags( mUserProjList->flags() & ~Qt::ItemIsSelectable );

  QFont fontTemp = mUserProjList->font( 0 );
  fontTemp.setItalic( true );
  fontTemp.setBold( true );
  mUserProjList->setFont( 0, fontTemp );
  mUserProjList->setIcon( 0, QgsApplication::getThemeIcon( QStringLiteral( "/user.svg" ) ) );

  const QList<QgsCoordinateReferenceSystemRegistry::UserCrsDetails> userCrsList = QgsApplication::coordinateReferenceSystemRegistry()->userCrsList();
  for ( const QgsCoordinateReferenceSystemRegistry::UserCrsDetails &details : userCrsList )
  {
    const QString authid = QStringLiteral( "USER:%1" ).arg( details.id );
    if ( crsFilter && !crsFilter->isEmpty() && !crsFilter->contains( authid ) && !crsFilter->contains( authid.toLower() ) )
      continue;

    QTreeWidgetItem *newItem = new QTreeWidgetItem( mUserProjList, QStringList() << details.name );
    newItem->setText( QgisCrsIdColumn, QString::number( details.id ) );
    newItem->setText( AuthidColumn, authid );
  }

  mUserProjListDone = true;
}

void QgsProjectionSelectionTreeWidget::loadCrsList( QSet<QString> *crsFilter )
{
  if ( mProjListDone )
    return;

  // convert our Coordinate Reference System filter into the SQL expression
  QString sqlFilter = ogcWmsCrsFilterAsSqlExpression( crsFilter );

  // Create the top-level nodes for the list view of projections
  // Make in an italic font to distinguish them from real projections
  //
  // Geographic coordinate system node
  mGeoList = new QTreeWidgetItem( lstCoordinateSystems, QStringList( tr( "Geographic Coordinate Systems" ) ) );
  mGeoList->setFlags( mGeoList->flags() & ~Qt::ItemIsSelectable );

  QFont fontTemp = mGeoList->font( 0 );
  fontTemp.setItalic( true );
  fontTemp.setBold( true );
  mGeoList->setFont( 0, fontTemp );
  mGeoList->setIcon( 0, QgsApplication::getThemeIcon( QStringLiteral( "/mIconProjectionEnabled.svg" ) ) );

  // Projected coordinate system node
  mProjList = new QTreeWidgetItem( lstCoordinateSystems, QStringList( tr( "Projected Coordinate Systems" ) ) );
  mProjList->setFlags( mProjList->flags() & ~Qt::ItemIsSelectable );

  fontTemp = mProjList->font( 0 );
  fontTemp.setItalic( true );
  fontTemp.setBold( true );
  mProjList->setFont( 0, fontTemp );
  mProjList->setIcon( 0, QgsApplication::getThemeIcon( QStringLiteral( "/transformed.svg" ) ) );

  //bail out in case the projections db does not exist
  //this is necessary in case the pc is running linux with a
  //read only filesystem because otherwise sqlite will try
  //to create the db file on the fly

  if ( !QFileInfo::exists( mSrsDatabaseFileName ) )
  {
    mProjListDone = true;
    return;
  }

  // open the database containing the spatial reference data
  sqlite3 *database = nullptr;
  int rc = sqlite3_open_v2( mSrsDatabaseFileName.toUtf8().constData(), &database, SQLITE_OPEN_READONLY, nullptr );
  if ( rc )
  {
    // XXX This will likely never happen since on open, sqlite creates the
    //     database if it does not exist.
    showDBMissingWarning( mSrsDatabaseFileName );
    return;
  }

  const char *tail = nullptr;
  sqlite3_stmt *stmt = nullptr;
  // Set up the query to retrieve the projection information needed to populate the list
  //note I am giving the full field names for clarity here and in case someone
  //changes the underlying view TS
  QString sql = QStringLiteral( "select description, srs_id, upper(auth_name||':'||auth_id), is_geo, name, parameters, deprecated from vw_srs where %1 order by name,description" )
                .arg( sqlFilter );

  rc = sqlite3_prepare( database, sql.toUtf8(), sql.toUtf8().length(), &stmt, &tail );
  // XXX Need to free memory from the error msg if one is set
  if ( rc == SQLITE_OK )
  {
    QTreeWidgetItem *newItem = nullptr;
    // Cache some stuff to speed up creating of the list of projected
    // spatial reference systems
    QString previousSrsType;
    QTreeWidgetItem *previousSrsTypeNode = nullptr;

    while ( sqlite3_step( stmt ) == SQLITE_ROW )
    {
      // check to see if the srs is geographic
      int isGeo = sqlite3_column_int( stmt, 3 );
      if ( isGeo )
      {
        // this is a geographic coordinate system
        // Add it to the tree (field 0)
        newItem = new QTreeWidgetItem( mGeoList, QStringList( QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 0 ) ) ) );

        // display the authority name (field 2) in the second column of the list view
        newItem->setText( AuthidColumn, QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 2 ) ) );

        // display the qgis srs_id (field 1) in the third column of the list view
        newItem->setText( QgisCrsIdColumn, QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 1 ) ) );
      }
      else
      {
        // This is a projected srs
        QTreeWidgetItem *node = nullptr;
        QString srsType = QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 4 ) );
        if ( srsType.isEmpty() )
          srsType = tr( "Other" );

        // Find the node for this type and add the projection to it
        // If the node doesn't exist, create it
        if ( srsType == previousSrsType )
        {
          node = previousSrsTypeNode;
        }
        else
        {
          // Different from last one, need to search
          QList<QTreeWidgetItem *> nodes = lstCoordinateSystems->findItems( srsType, Qt::MatchExactly | Qt::MatchRecursive, NameColumn );
          if ( nodes.isEmpty() )
          {
            // the node doesn't exist -- create it
            // Make in an italic font to distinguish them from real projections
            node = new QTreeWidgetItem( mProjList, QStringList( srsType ) );
            node->setFlags( node->flags() & ~Qt::ItemIsSelectable );

            QFont fontTemp = node->font( 0 );
            fontTemp.setItalic( true );
            node->setFont( 0, fontTemp );
          }
          else
          {
            node = nodes.first();
          }
          // Update the cache.
          previousSrsType = srsType;
          previousSrsTypeNode = node;
        }
        // add the item, setting the projection name in the first column of the list view
        newItem = new QTreeWidgetItem( node, QStringList( QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 0 ) ) ) );
        // display the authority id (field 2) in the second column of the list view
        newItem->setText( AuthidColumn, QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 2 ) ) );
        // display the qgis srs_id (field 1) in the third column of the list view
        newItem->setText( QgisCrsIdColumn, QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 1 ) ) );
        // expand also parent node
        newItem->parent()->setExpanded( true );
      }

      // display the qgis deprecated in the user data of the item
      newItem->setData( 0, RoleDeprecated, QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 6 ) ) );
      newItem->setHidden( cbxHideDeprecated->isChecked() );
    }
    mProjList->setExpanded( true );
  }

  // close the sqlite3 statement
  sqlite3_finalize( stmt );
  // close the database
  sqlite3_close( database );

  mProjListDone = true;
}

void QgsProjectionSelectionTreeWidget::loadUnknownCrs( const QgsCoordinateReferenceSystem &crs )
{
  if ( !mUnknownList )
  {
    mUnknownList = new QTreeWidgetItem( lstCoordinateSystems, QStringList( tr( "Custom Coordinate Systems" ) ) );
    mUnknownList->setFlags( mUnknownList->flags() & ~Qt::ItemIsSelectable );

    QFont fontTemp = mUnknownList->font( 0 );
    fontTemp.setItalic( true );
    fontTemp.setBold( true );
    mUnknownList->setFont( 0, fontTemp );
    mUnknownList->setIcon( 0, QgsApplication::getThemeIcon( QStringLiteral( "/user.svg" ) ) );
  }

  QTreeWidgetItem *newItem = new QTreeWidgetItem( mUnknownList, QStringList( crs.description().isEmpty() ? QObject::tr( "Custom CRS" ) : crs.description() ) );
  newItem->setData( 0, RoleWkt, crs.toWkt( QgsCoordinateReferenceSystem::WKT_PREFERRED ) );
  newItem->setData( 0, RoleProj, crs.toProj() );

  lstCoordinateSystems->setCurrentItem( newItem );
}

// New coordinate system selected from the list
void QgsProjectionSelectionTreeWidget::lstCoordinateSystems_currentItemChanged( QTreeWidgetItem *current, QTreeWidgetItem * )
{
  QgsDebugMsgLevel( QStringLiteral( "Entered." ), 4 );

  if ( !current )
  {
    QgsDebugMsgLevel( QStringLiteral( "no current item" ), 4 );
    return;
  }

  lstCoordinateSystems->scrollToItem( current );

  // If the item has children, it's not an end node in the tree, and
  // hence is just a grouping thingy, not an actual CRS.
  if ( current->childCount() == 0 )
  {
    // Found a real CRS
    if ( !mBlockSignals )
    {
      emit crsSelected();
      emit hasValidSelectionChanged( true );
    }

    updateBoundsPreview();

    const QString crsId = current->text( QgisCrsIdColumn );
    if ( !crsId.isEmpty() )
    {
      QList<QTreeWidgetItem *> nodes = lstRecent->findItems( current->text( QgisCrsIdColumn ), Qt::MatchExactly, QgisCrsIdColumn );
      if ( !nodes.isEmpty() )
      {
        QgsDebugMsgLevel( QStringLiteral( "found srs %1 in recent" ).arg( current->text( QgisCrsIdColumn ) ), 4 );
        lstRecent->setCurrentItem( nodes.first() );
      }
      else
      {
        QgsDebugMsgLevel( QStringLiteral( "srs %1 not recent" ).arg( current->text( QgisCrsIdColumn ) ), 4 );
        lstRecent->clearSelection();
        lstCoordinateSystems->setFocus( Qt::OtherFocusReason );
      }
    }
    else
    {
      lstRecent->clearSelection();
      lstCoordinateSystems->setFocus( Qt::OtherFocusReason );
    }
  }
  else
  {
    // Not a CRS - remove the highlight so the user doesn't get too confused
    current->setSelected( false );
    teProjection->clear();
    lstRecent->clearSelection();
    emit hasValidSelectionChanged( false );
  }
}

void QgsProjectionSelectionTreeWidget::lstCoordinateSystems_itemDoubleClicked( QTreeWidgetItem *current, int column )
{
  Q_UNUSED( column )

  QgsDebugMsgLevel( QStringLiteral( "Entered." ), 4 );

  if ( !current )
  {
    QgsDebugMsgLevel( QStringLiteral( "no current item" ), 4 );
    return;
  }

  // If the item has children, it's not an end node in the tree, and
  // hence is just a grouping thingy, not an actual CRS.
  if ( current->childCount() == 0 )
    emit projectionDoubleClicked();
}

void QgsProjectionSelectionTreeWidget::lstRecent_currentItemChanged( QTreeWidgetItem *current, QTreeWidgetItem * )
{
  QgsDebugMsgLevel( QStringLiteral( "Entered." ), 4 );

  if ( !current )
  {
    QgsDebugMsgLevel( QStringLiteral( "no current item" ), 4 );
    return;
  }

  lstRecent->scrollToItem( current );

  QList<QTreeWidgetItem *> nodes = lstCoordinateSystems->findItems( current->text( QgisCrsIdColumn ), Qt::MatchExactly | Qt::MatchRecursive, QgisCrsIdColumn );
  if ( !nodes.isEmpty() )
    lstCoordinateSystems->setCurrentItem( nodes.first() );
}

void QgsProjectionSelectionTreeWidget::lstRecent_itemDoubleClicked( QTreeWidgetItem *current, int column )
{
  Q_UNUSED( column )

  QgsDebugMsgLevel( QStringLiteral( "Entered." ), 4 );

  if ( !current )
  {
    QgsDebugMsgLevel( QStringLiteral( "no current item" ), 4 );
    return;
  }

  QList<QTreeWidgetItem *> nodes = lstCoordinateSystems->findItems( current->text( QgisCrsIdColumn ), Qt::MatchExactly | Qt::MatchRecursive, QgisCrsIdColumn );
  if ( !nodes.isEmpty() )
    emit projectionDoubleClicked();
}

void QgsProjectionSelectionTreeWidget::updateFilter()
{
  QString filterTxtCopy = QgsStringUtils::qRegExpEscape( leSearch->text() );
  filterTxtCopy.replace( QRegularExpression( "\\s+" ), QStringLiteral( ".*" ) );
  const QRegularExpression re( filterTxtCopy, QRegularExpression::PatternOption::CaseInsensitiveOption );

  const bool hideDeprecated = cbxHideDeprecated->isChecked();

  auto filterTreeWidget = [ = ]( QTreeWidget * tree )
  {
    QTreeWidgetItemIterator itr( tree );
    while ( *itr )
    {
      if ( ( *itr )->childCount() == 0 ) // it's an end node aka a projection
      {
        if ( hideDeprecated && ( *itr )->data( 0, RoleDeprecated ).toBool() )
        {
          ( *itr )->setHidden( true );
          if ( ( *itr )->isSelected() )
          {
            ( *itr )->setSelected( false );
            teProjection->clear();
          }
        }
        else if ( ( *itr )->text( NameColumn ).contains( re )
                  || ( *itr )->text( AuthidColumn ).contains( re )
                )
        {
          ( *itr )->setHidden( false );
          QTreeWidgetItem *parent = ( *itr )->parent();
          while ( parent )
          {
            parent->setExpanded( true );
            parent->setHidden( false );
            parent = parent->parent();
          }
        }
        else
        {
          ( *itr )->setHidden( true );
        }
      }
      else
      {
        ( *itr )->setHidden( true );
      }
      ++itr;
    }
  };

  // filter recent crs's
  filterTreeWidget( lstRecent );

  // filter crs's
  filterTreeWidget( lstCoordinateSystems );
}

void QgsProjectionSelectionTreeWidget::pushProjectionToFront()
{
}

long QgsProjectionSelectionTreeWidget::getLargestCrsIdMatch( const QString &sql )
{
  long srsId = 0;

  //
  // Now perform the actual search
  //

  sqlite3      *database = nullptr;
  const char   *tail = nullptr;
  sqlite3_stmt *stmt = nullptr;
  int           result;

  // first we search the users db as any srsid there will be definition be greater than in sys db

  //check the db is available
  QString databaseFileName = QgsApplication::qgisUserDatabaseFilePath();
  if ( QFileInfo::exists( databaseFileName ) ) //only bother trying to open if the file exists
  {
    result = sqlite3_open_v2( databaseFileName.toUtf8().constData(), &database, SQLITE_OPEN_READONLY, nullptr );
    if ( result )
    {
      // XXX This will likely never happen since on open, sqlite creates the
      //     database if it does not exist. But we checked earlier for its existence
      //     and aborted in that case. This is because we may be running from read only
      //     media such as live cd and don't want to force trying to create a db.
      showDBMissingWarning( databaseFileName );
      return 0;
    }

    result = sqlite3_prepare( database, sql.toUtf8(), sql.toUtf8().length(), &stmt, &tail );
    // XXX Need to free memory from the error msg if one is set
    if ( result == SQLITE_OK && sqlite3_step( stmt ) == SQLITE_ROW )
    {
      QString srsIdString = QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 0 ) );
      srsId = srsIdString.toLong();
      // close the sqlite3 statement
      sqlite3_finalize( stmt );
      sqlite3_close( database );
      return srsId;
    }
  }
  else
  {
    //only bother looking in srs.db if it wasn't found above
    result = sqlite3_open_v2( mSrsDatabaseFileName.toUtf8().constData(), &database, SQLITE_OPEN_READONLY, nullptr );
    if ( result )
    {
      QgsDebugMsg( QStringLiteral( "Can't open * user * database: %1" ).arg( sqlite3_errmsg( database ) ) );
      //no need for assert because user db may not have been created yet
      return 0;
    }
  }

  result = sqlite3_prepare( database, sql.toUtf8(), sql.toUtf8().length(), &stmt, &tail );
  // XXX Need to free memory from the error msg if one is set
  if ( result == SQLITE_OK && sqlite3_step( stmt ) == SQLITE_ROW )
  {
    QString srsIdString = QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 0 ) );
    srsId = srsIdString.toLong();
  }

  // close the sqlite3 statement
  sqlite3_finalize( stmt );
  sqlite3_close( database );

  return srsId;
}

void QgsProjectionSelectionTreeWidget::updateBoundsPreview()
{
  QTreeWidgetItem *lvi = lstCoordinateSystems->currentItem();
  if ( !lvi || ( lvi->text( QgisCrsIdColumn ).isEmpty() && !lvi->data( 0, RoleWkt ).isValid() ) )
    return;

  QgsCoordinateReferenceSystem currentCrs = crs();
  if ( !currentCrs.isValid() )
    return;

  QgsRectangle rect = currentCrs.bounds();
  QString extentString = tr( "Extent not known" );
  mAreaCanvas->setPreviewRect( rect );
  if ( !qgsDoubleNear( rect.area(), 0.0 ) )
  {
    extentString = QStringLiteral( "%1, %2, %3, %4" )
                   .arg( rect.xMinimum(), 0, 'f', 2 )
                   .arg( rect.yMinimum(), 0, 'f', 2 )
                   .arg( rect.xMaximum(), 0, 'f', 2 )
                   .arg( rect.yMaximum(), 0, 'f', 2 );
  }

  QStringList properties;
  if ( currentCrs.isGeographic() )
    properties << tr( "Geographic (uses latitude and longitude for coordinates)" );
  else
  {
    properties << tr( "Units: %1" ).arg( QgsUnitTypes::toString( currentCrs.mapUnits() ) );
  }
  properties << ( currentCrs.isDynamic() ? tr( "Dynamic (relies on a datum which is not plate-fixed)" ) : tr( "Static (relies on a datum which is plate-fixed)" ) );

  try
  {
    const QString celestialBody = currentCrs.celestialBodyName();
    if ( !celestialBody.isEmpty() )
    {
      properties << tr( "Celestial body: %1" ).arg( celestialBody );
    }
  }
  catch ( QgsNotSupportedException & )
  {

  }

  try
  {
    const QgsDatumEnsemble ensemble = currentCrs.datumEnsemble();
    if ( ensemble.isValid() )
    {
      QString id;
      if ( !ensemble.code().isEmpty() )
        id = QStringLiteral( "<i>%1</i> (%2:%3)" ).arg( ensemble.name(), ensemble.authority(), ensemble.code() );
      else
        id = QStringLiteral( "<i>%</i>”" ).arg( ensemble.name() );
      if ( ensemble.accuracy() > 0 )
      {
        properties << tr( "Based on %1, which has a limited accuracy of <b>at best %2 meters</b>." ).arg( id ).arg( ensemble.accuracy() );
      }
      else
      {
        properties << tr( "Based on %1, which has a limited accuracy." ).arg( id );
      }
    }
  }
  catch ( QgsNotSupportedException & )
  {

  }

  const QgsProjOperation operation = currentCrs.operation();
  properties << tr( "Method: %1" ).arg( operation.description() );

  const QString propertiesString = QStringLiteral( "<dt><b>%1</b></dt><dd><ul><li>%2</li></ul></dd>" ).arg( tr( "Properties" ),
                                   properties.join( QLatin1String( "</li><li>" ) ) );

  const QString extentHtml = QStringLiteral( "<dt><b>%1</b></dt><dd>%2</dd>" ).arg( tr( "Extent" ), extentString );
  const QString wktString = QStringLiteral( "<dt><b>%1</b></dt><dd><code>%2</code></dd>" ).arg( tr( "WKT" ), currentCrs.toWkt( QgsCoordinateReferenceSystem::WKT_PREFERRED, true ).replace( '\n', QLatin1String( "<br>" ) ).replace( ' ', QLatin1String( "&nbsp;" ) ) );
  const QString proj4String = QStringLiteral( "<dt><b>%1</b></dt><dd><code>%2</code></dd>" ).arg( tr( "Proj4" ), currentCrs.toProj() );

#ifdef Q_OS_WIN
  const int smallerPointSize = std::max( font().pointSize() - 1, 8 ); // bit less on windows, due to poor rendering of small point sizes
#else
  const int smallerPointSize = std::max( font().pointSize() - 2, 6 );
#endif

  teProjection->setText( QStringLiteral( "<div style=\"font-size: %1pt\"><h3>%2</h3><dl>" ).arg( smallerPointSize ).arg( selectedName() ) + propertiesString + wktString + proj4String + extentHtml + QStringLiteral( "</dl></div>" ) );
}

QStringList QgsProjectionSelectionTreeWidget::authorities()
{
  sqlite3      *database = nullptr;
  const char   *tail = nullptr;
  sqlite3_stmt *stmt = nullptr;

  int result = sqlite3_open_v2( mSrsDatabaseFileName.toUtf8().constData(), &database, SQLITE_OPEN_READONLY, nullptr );
  if ( result )
  {
    QgsDebugMsg( QStringLiteral( "Can't open * user * database: %1" ).arg( sqlite3_errmsg( database ) ) );
    //no need for assert because user db may not have been created yet
    return QStringList();
  }

  QString sql = QStringLiteral( "select distinct auth_name from tbl_srs" );
  result = sqlite3_prepare( database, sql.toUtf8(), sql.toUtf8().length(), &stmt, &tail );

  QStringList authorities;
  if ( result == SQLITE_OK )
  {
    while ( sqlite3_step( stmt ) == SQLITE_ROW )
    {
      authorities << QString::fromUtf8( ( char * )sqlite3_column_text( stmt, 0 ) );
    }

  }

  // close the sqlite3 statement
  sqlite3_finalize( stmt );
  sqlite3_close( database );

  return authorities;
}

QString QgsProjectionSelectionTreeWidget::sqlSafeString( const QString &theSQL ) const
{
  QString retval = theSQL;
  retval.replace( '\\', QLatin1String( "\\\\" ) );
  retval.replace( '\"', QLatin1String( "\\\"" ) );
  retval.replace( '\'', QLatin1String( "\\'" ) );
  retval.replace( '%', QLatin1String( "\\%" ) );
  return retval;
}

void QgsProjectionSelectionTreeWidget::showDBMissingWarning( const QString &fileName )
{

  QMessageBox::critical( this, tr( "Resource Location Error" ),
                         tr( "Error reading database file from: \n %1\n"
                             "Because of this the projection selector will not work…" )
                         .arg( fileName ) );
}
