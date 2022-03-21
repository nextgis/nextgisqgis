/***************************************************************************
  qgsdb2sourceselect.cpp
      dialog to select DB2 layer(s) and add to the map canvas
  --------------------------------------
  Date      : 2016-01-27
  Copyright : (C) 2016 by David Adler
                          Shirley Xiao, David Nguyen
  Email     : dadler at adtechgeospatial.com
              xshirley2012 at yahoo.com, davidng0123 at gmail.com
  Adapted from MSSQL provider by Tamas Szekeres
****************************************************************************
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 ***************************************************************************/

#include "qgsdb2sourceselect.h"
#include "qgsdb2dataitems.h"
#include "qgsdb2provider.h"
#include "qgsdb2newconnection.h"
#include "qgsdb2geometrycolumns.h"

#include "qgslogger.h"
#include "qgsapplication.h"
#include "qgsmanageconnectionsdialog.h"
#include "qgsquerybuilder.h"
#include "qgsiconutils.h"
#include "qgsdatasourceuri.h"
#include "qgsvectorlayer.h"
#include "qgssettings.h"
#include "qgsproject.h"
#include "qgsgui.h"
#include "qgsdbfilterproxymodel.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QStringList>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlField>

//! Used to create an editor for when the user tries to change the contents of a cell
QWidget *QgsDb2SourceSelectDelegate::createEditor( QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index ) const
{
  Q_UNUSED( option )
  if ( index.column() == QgsDb2TableModel::DbtmSql )
  {
    QLineEdit *le = new QLineEdit( parent );
    le->setText( index.data( Qt::DisplayRole ).toString() );
    return le;
  }

  if ( index.column() == QgsDb2TableModel::DbtmType && index.data( Qt::UserRole + 1 ).toBool() )
  {
    QComboBox *cb = new QComboBox( parent );
    for ( const QgsWkbTypes::Type type :
          {
            QgsWkbTypes::Point,
            QgsWkbTypes::LineString,
            QgsWkbTypes::Polygon,
            QgsWkbTypes::MultiPoint,
            QgsWkbTypes::MultiLineString,
            QgsWkbTypes::MultiPolygon,
            QgsWkbTypes::NoGeometry
          } )
    {
      cb->addItem( QgsIconUtils::iconForWkbType( type ), QgsWkbTypes::translatedDisplayString( type ), type );
    }
    cb->setCurrentIndex( cb->findData( index.data( Qt::UserRole + 2 ).toInt() ) );
    return cb;
  }

  if ( index.column() == QgsDb2TableModel::DbtmPkCol )
  {
    const QStringList values = index.data( Qt::UserRole + 1 ).toStringList();

    if ( values.size() > 0 )
    {
      QComboBox *cb = new QComboBox( parent );
      cb->addItems( values );
      cb->setCurrentIndex( cb->findText( index.data( Qt::DisplayRole ).toString() ) );
      return cb;
    }
  }

  if ( index.column() == QgsDb2TableModel::DbtmSrid )
  {
    QLineEdit *le = new QLineEdit( parent );
    le->setValidator( new QIntValidator( -1, 999999, parent ) );
    le->insert( index.data( Qt::DisplayRole ).toString() );
    return le;
  }

  return nullptr;
}

void QgsDb2SourceSelectDelegate::setModelData( QWidget *editor, QAbstractItemModel *model, const QModelIndex &index ) const
{
  QComboBox *cb = qobject_cast<QComboBox *>( editor );
  if ( cb )
  {
    if ( index.column() == QgsDb2TableModel::DbtmType )
    {
      const QgsWkbTypes::Type type = static_cast< QgsWkbTypes::Type >( cb->currentData().toInt() );

      model->setData( index, QgsIconUtils::iconForWkbType( type ), Qt::DecorationRole );
      model->setData( index, type != QgsWkbTypes::Unknown ? QgsWkbTypes::translatedDisplayString( type ) : tr( "Select…" ) );
      model->setData( index, type, Qt::UserRole + 2 );
    }
    else if ( index.column() == QgsDb2TableModel::DbtmPkCol )
    {
      model->setData( index, cb->currentText() );
      model->setData( index, cb->currentText(), Qt::UserRole + 2 );
    }
  }

  QLineEdit *le = qobject_cast<QLineEdit *>( editor );
  if ( le )
    model->setData( index, le->text() );
}

QgsDb2SourceSelect::QgsDb2SourceSelect( QWidget *parent, Qt::WindowFlags fl, QgsProviderRegistry::WidgetMode theWidgetMode )
  : QgsAbstractDbSourceSelect( parent, fl, theWidgetMode )
{
  QgsGui::enableAutoGeometryRestore( this );

  connect( btnConnect, &QPushButton::clicked, this, &QgsDb2SourceSelect::btnConnect_clicked );
  connect( cbxAllowGeometrylessTables, &QCheckBox::stateChanged, this, &QgsDb2SourceSelect::cbxAllowGeometrylessTables_stateChanged );
  connect( btnNew, &QPushButton::clicked, this, &QgsDb2SourceSelect::btnNew_clicked );
  connect( btnEdit, &QPushButton::clicked, this, &QgsDb2SourceSelect::btnEdit_clicked );
  connect( btnDelete, &QPushButton::clicked, this, &QgsDb2SourceSelect::btnDelete_clicked );
  connect( btnSave, &QPushButton::clicked, this, &QgsDb2SourceSelect::btnSave_clicked );
  connect( btnLoad, &QPushButton::clicked, this, &QgsDb2SourceSelect::btnLoad_clicked );
  connect( cmbConnections, static_cast<void ( QComboBox::* )( int )>( &QComboBox::activated ), this, &QgsDb2SourceSelect::cmbConnections_activated );
  setupButtons( buttonBox );
  connect( buttonBox, &QDialogButtonBox::helpRequested, this, &QgsDb2SourceSelect::showHelp );

  setWindowTitle( tr( "Add Db2 Table(s)" ) );

  if ( widgetMode() != QgsProviderRegistry::WidgetMode::None )
  {
    mHoldDialogOpen->hide();
  }

  populateConnectionList();

  mTableModel = new QgsDb2TableModel( this );
  init( mTableModel, new QgsDb2SourceSelectDelegate( this ) );

  connect( mTablesTreeView->selectionModel(), &QItemSelectionModel::selectionChanged, this, &QgsDb2SourceSelect::treeWidgetSelectionChanged );

  const QgsSettings settings;
  mTablesTreeView->setSelectionMode( QAbstractItemView::ExtendedSelection );

  mHoldDialogOpen->setChecked( settings.value( QStringLiteral( "Windows/Db2SourceSelect/HoldDialogOpen" ), false ).toBool() );

  for ( int i = 0; i < mTableModel->columnCount(); i++ )
  {
    mTablesTreeView->setColumnWidth( i, settings.value( QStringLiteral( "Windows/Db2SourceSelect/columnWidths/%1" ).arg( i ), mTablesTreeView->columnWidth( i ) ).toInt() );
  }

  cbxAllowGeometrylessTables->setDisabled( true );
}

void QgsDb2SourceSelect::btnNew_clicked()
{
  QgsDb2NewConnection nc( this );
  if ( nc.exec() )
  {
    populateConnectionList();
    emit connectionsChanged();
  }
}

void QgsDb2SourceSelect::btnDelete_clicked()
{
  const QString msg = tr( "Are you sure you want to remove the %1 connection and all associated settings?" )
                      .arg( cmbConnections->currentText() );
  if ( QMessageBox::Yes != QMessageBox::question( this, tr( "Confirm Delete" ), msg, QMessageBox::Yes | QMessageBox::No ) )
    return;

  QgsDb2SourceSelect::deleteConnection( cmbConnections->currentText() );

  populateConnectionList();
  emit connectionsChanged();
}

void QgsDb2SourceSelect::deleteConnection( const QString &name )
{
  const QString key = "/Db2/connections/" + name;
  QgsSettings settings;
  settings.remove( key + "/service" );
  settings.remove( key + "/driver" );
  settings.remove( key + "/port" );
  settings.remove( key + "/host" );
  settings.remove( key + "/database" );
  settings.remove( key + "/username" );
  settings.remove( key + "/password" );
  settings.remove( key + "/environment" );
  settings.remove( key + "/allowGeometrylessTables" );
  settings.remove( key + "/useEstimatedMetadata" );
  settings.remove( key + "/saveUsername" );
  settings.remove( key + "/savePassword" );
  settings.remove( key );
}

void QgsDb2SourceSelect::btnSave_clicked()
{
  QgsManageConnectionsDialog dlg( this, QgsManageConnectionsDialog::Export, QgsManageConnectionsDialog::DB2 );
  dlg.exec();
}

void QgsDb2SourceSelect::btnLoad_clicked()
{
  const QString fileName = QFileDialog::getOpenFileName( this, tr( "Load Connections" ), QStringLiteral( "." ),
                           tr( "XML files (*.xml *.XML)" ) );
  if ( fileName.isEmpty() )
  {
    return;
  }

  QgsManageConnectionsDialog dlg( this, QgsManageConnectionsDialog::Import, QgsManageConnectionsDialog::DB2, fileName );
  dlg.exec();
  populateConnectionList();
}

void QgsDb2SourceSelect::btnEdit_clicked()
{
  QgsDb2NewConnection nc( this, cmbConnections->currentText() );
  if ( nc.exec() )
  {
    populateConnectionList();
    emit connectionsChanged();
  }
}

void QgsDb2SourceSelect::cmbConnections_activated( int )
{
  // Remember which database was selected.
  QgsSettings settings;
  settings.setValue( QStringLiteral( "Db2/connections/selected" ), cmbConnections->currentText() );

  cbxAllowGeometrylessTables->blockSignals( true );
  cbxAllowGeometrylessTables->setChecked( settings.value( "/Db2/connections/" + cmbConnections->currentText() + "/allowGeometrylessTables", false ).toBool() );
  cbxAllowGeometrylessTables->blockSignals( false );
}

void QgsDb2SourceSelect::cbxAllowGeometrylessTables_stateChanged( int )
{
  btnConnect_clicked();
}

void QgsDb2SourceSelect::refresh()
{
  populateConnectionList();
}

void QgsDb2SourceSelect::setLayerType( const QgsDb2LayerProperty &layerProperty )
{
  mTableModel->setGeometryTypesForTable( layerProperty );
}

QgsDb2SourceSelect::~QgsDb2SourceSelect()
{
  if ( mColumnTypeThread )
  {
    mColumnTypeThread->stop();
    mColumnTypeThread->wait();
  }

  QgsSettings settings;
  settings.setValue( QStringLiteral( "Windows/Db2SourceSelect/HoldDialogOpen" ), mHoldDialogOpen->isChecked() );

  for ( int i = 0; i < mTableModel->columnCount(); i++ )
  {
    settings.setValue( QStringLiteral( "Windows/Db2SourceSelect/columnWidths/%1" ).arg( i ), mTablesTreeView->columnWidth( i ) );
  }
}

void QgsDb2SourceSelect::populateConnectionList()
{
  QgsSettings settings;
  settings.beginGroup( QStringLiteral( "Db2/connections" ) );
  QStringList keys = settings.childGroups();
  QStringList::Iterator it = keys.begin();
  cmbConnections->clear();
  while ( it != keys.end() )
  {
    cmbConnections->addItem( *it );
    ++it;
  }

  btnConnect->setDisabled( cmbConnections->count() == 0 );
  btnEdit->setDisabled( cmbConnections->count() == 0 );
  btnDelete->setDisabled( cmbConnections->count() == 0 );
  btnSave->setDisabled( cmbConnections->count() == 0 );
  cmbConnections->setDisabled( cmbConnections->count() == 0 );

  setConnectionListPosition();
}

// Slot for performing action when the Add button is clicked
void QgsDb2SourceSelect::addButtonClicked()
{
  QgsDebugMsg( QStringLiteral( "mConnInfo:%1" ).arg( mConnInfo ) );
  mSelectedTables.clear();

  const QModelIndexList selection = mTablesTreeView->selectionModel()->selection().indexes();
  for ( const QModelIndex &idx : selection )
  {
    if ( idx.column() != QgsDb2TableModel::DbtmTable )
      continue;

    const QString uri = mTableModel->layerURI( proxyModel()->mapToSource( idx ), mConnInfo, mUseEstimatedMetadata );
    if ( uri.isNull() )
      continue;

    mSelectedTables << uri;
  }

  if ( mSelectedTables.empty() )
  {
    QMessageBox::information( this, tr( "Select Table" ), tr( "You must select a table in order to add a layer." ) );
  }
  else
  {
    emit addDatabaseLayers( mSelectedTables, QStringLiteral( "DB2" ) );
    if ( !mHoldDialogOpen->isChecked() && widgetMode() == QgsProviderRegistry::WidgetMode::None )
    {
      accept();
    }
  }
}

void QgsDb2SourceSelect::btnConnect_clicked()
{
  cbxAllowGeometrylessTables->setEnabled( true );

  if ( mColumnTypeThread )
  {
    mColumnTypeThread->stop();
    return;
  }

  const QModelIndex rootItemIndex = mTableModel->indexFromItem( mTableModel->invisibleRootItem() );
  mTableModel->removeRows( 0, mTableModel->rowCount( rootItemIndex ), rootItemIndex );

  // populate the table list

  QString errorMsg;
  const bool success = QgsDb2ConnectionItem::ConnInfoFromSettings( cmbConnections->currentText(), mConnInfo, errorMsg );
  if ( !success )
  {
    QgsDebugMsg( "settings error: " + errorMsg );
    QMessageBox::warning( this,
                          tr( "DB2 Provider" ), errorMsg );
    return;
  }

  const QSqlDatabase db = QgsDb2Provider::getDatabase( mConnInfo, errorMsg );

  if ( !errorMsg.isEmpty() )
  {
    // Let user know we couldn't initialize the DB2 provider
    QMessageBox::warning( this,
                          tr( "DB2 Provider" ), errorMsg );
    return;
  }

  QgsDb2GeometryColumns db2GC = QgsDb2GeometryColumns( db );
  const QString sqlcode = db2GC.open();
  if ( !sqlcode.isEmpty() && QStringLiteral( "0" ) != sqlcode )
  {
    QMessageBox::warning( this, tr( "DB2GSE.ST_GEOMETRY_COLUMNS Not Found" ),
                          tr( "DB2GSE.ST_GEOMETRY_COLUMNS not found. The DB2 Spatial Extender is not enabled or set up." ) );
    return;
  }

  QApplication::setOverrideCursor( Qt::WaitCursor );

  if ( db2GC.isActive() )
  {
    // Read supported layers from database
    QgsDb2LayerProperty layer;

    while ( db2GC.populateLayerProperty( layer ) )
    {
      QgsDebugMsg( "layer type: " + layer.type );
      mTableModel->addTableEntry( layer );

      if ( mColumnTypeThread )
      {
        btnConnect->setText( tr( "Stop" ) );
        mColumnTypeThread->start();
      }

      //if we have only one schema item, expand it by default
      const int numTopLevelItems = mTableModel->invisibleRootItem()->rowCount();
      if ( numTopLevelItems < 2 || mTableModel->tableCount() < 20 )
      {
        //expand all the toplevel items
        for ( int i = 0; i < numTopLevelItems; ++i )
        {
          mTablesTreeView->expand( proxyModel()->mapFromSource(
                                     mTableModel->indexFromItem( mTableModel->invisibleRootItem()->child( i ) ) ) );
        }
      }
    }
  }
  else
  {
    QApplication::restoreOverrideCursor();
    // Let user know we couldn't retrieve tables from the Db2 provider
    QMessageBox::warning( this,
                          tr( "DB2 Provider" ), db.lastError().text() );
    return;
  }

  if ( !mColumnTypeThread )
  {
    finishList();
  }
}

void QgsDb2SourceSelect::finishList()
{
  QApplication::restoreOverrideCursor();

  mTablesTreeView->sortByColumn( QgsDb2TableModel::DbtmTable, Qt::AscendingOrder );
  mTablesTreeView->sortByColumn( QgsDb2TableModel::DbtmSchema, Qt::AscendingOrder );
}

void QgsDb2SourceSelect::columnThreadFinished()
{
  delete mColumnTypeThread;
  mColumnTypeThread = nullptr;
  btnConnect->setText( tr( "Connect" ) );

  finishList();
}

QStringList QgsDb2SourceSelect::selectedTables()
{
  return mSelectedTables;
}

QString QgsDb2SourceSelect::connectionInfo()
{
  return mConnInfo;
}

void QgsDb2SourceSelect::setSql( const QModelIndex &index )
{
  if ( !index.parent().isValid() )
  {
    QgsDebugMsg( QStringLiteral( "schema item found" ) );
    return;
  }

  const QString tableName = mTableModel->itemFromIndex( index.sibling( index.row(), QgsDb2TableModel::DbtmTable ) )->text();

  const QgsVectorLayer::LayerOptions options { QgsProject::instance()->transformContext() };
  std::unique_ptr< QgsVectorLayer > vlayer = std::make_unique< QgsVectorLayer >( mTableModel->layerURI( index, mConnInfo, mUseEstimatedMetadata ), tableName, QStringLiteral( "DB2" ), options );

  if ( !vlayer->isValid() )
  {
    return;
  }

  // create a query builder object
  QgsQueryBuilder gb( vlayer.get(), this );
  if ( gb.exec() )
  {
    mTableModel->setSql( proxyModel()->mapToSource( index ), gb.sql() );
  }
}

void QgsDb2SourceSelect::addSearchGeometryColumn( const QString &connectionName, const QgsDb2LayerProperty &layerProperty, bool estimateMetadata )
{
  // store the column details and do the query in a thread
  if ( !mColumnTypeThread )
  {
    mColumnTypeThread = new QgsDb2GeomColumnTypeThread( connectionName, estimateMetadata );

    connect( mColumnTypeThread, &QgsDb2GeomColumnTypeThread::setLayerType,
             this, &QgsDb2SourceSelect::setLayerType );
    connect( this, &QgsDb2SourceSelect::addGeometryColumn,
             mColumnTypeThread, &QgsDb2GeomColumnTypeThread::addGeometryColumn );
    connect( mColumnTypeThread, &QThread::finished,
             this, &QgsDb2SourceSelect::columnThreadFinished );

  }

  emit addGeometryColumn( layerProperty );
}

QString QgsDb2SourceSelect::fullDescription( const QString &schema, const QString &table, const QString &column, const QString &type )
{
  QString full_desc;
  if ( !schema.isEmpty() )
    full_desc = schema + '.';
  full_desc += table + " (" + column + ") " + type;
  return full_desc;
}

void QgsDb2SourceSelect::setConnectionListPosition()
{
  // If possible, set the item currently displayed database
  const QgsSettings settings;
  const QString toSelect = settings.value( QStringLiteral( "Db2/connections/selected" ) ).toString();
  cmbConnections->setCurrentIndex( cmbConnections->findText( toSelect ) );

  if ( cmbConnections->currentIndex() < 0 )
  {
    if ( toSelect.isNull() )
      cmbConnections->setCurrentIndex( 0 );
    else
      cmbConnections->setCurrentIndex( cmbConnections->count() - 1 );
  }
}

void QgsDb2SourceSelect::setSearchExpression( const QString &regexp )
{
  Q_UNUSED( regexp )
}

void QgsDb2SourceSelect::treeWidgetSelectionChanged( const QItemSelection &, const QItemSelection & )
{
  emit enableButtons( !mTablesTreeView->selectionModel()->selection().isEmpty() );
}


QgsDb2GeomColumnTypeThread::QgsDb2GeomColumnTypeThread( const QString &connectionName, bool useEstimatedMetadata )
  : mConnectionName( connectionName )
  , mUseEstimatedMetadata( useEstimatedMetadata )
{
  qRegisterMetaType<QgsDb2LayerProperty>( "QgsDb2LayerProperty" );
}

void QgsDb2GeomColumnTypeThread::addGeometryColumn( const QgsDb2LayerProperty &layerProperty )
{
  layerProperties << layerProperty;
}

void QgsDb2GeomColumnTypeThread::stop()
{
  mStopped = true;
}

void QgsDb2GeomColumnTypeThread::run()
{
  mStopped = false;

  for ( QList<QgsDb2LayerProperty>::iterator it = layerProperties.begin(),
        end = layerProperties.end();
        it != end; ++it )
  {
    QgsDb2LayerProperty &layerProperty = *it;

    if ( !mStopped )
    {
      QString table;
      table = QStringLiteral( "%1[%2]" )
              .arg( layerProperty.schemaName.isEmpty() ? QString() : QStringLiteral( "[%1]." ).arg( layerProperty.schemaName ),
                    layerProperty.tableName );

      const QString query = QString( "SELECT %3"
                                     " UPPER([%1].STGeometryType()),"
                                     " [%1].STSrid"
                                     " FROM %2"
                                     " WHERE [%1] IS NOT NULL %4"
                                     " GROUP BY [%1].STGeometryType(), [%1].STSrid" )
                            .arg( layerProperty.geometryColName,
                                  table,
                                  mUseEstimatedMetadata ? QStringLiteral( "TOP 1" ) : QString(),
                                  layerProperty.sql.isEmpty() ? QString() : QStringLiteral( " AND %1" ).arg( layerProperty.sql ) );

      // issue the sql query
      const QSqlDatabase db = QSqlDatabase::database( mConnectionName );
      if ( !QgsDb2Provider::openDatabase( db ) )
      {
        QgsDebugMsg( db.lastError().text() );
        continue;
      }

      QSqlQuery q = QSqlQuery( db );
      q.setForwardOnly( true );
      if ( !q.exec( query ) )
      {
        QgsDebugMsg( q.lastError().text() );
      }

      QString type;
      QString srid;

      if ( q.isActive() )
      {
        QStringList types;
        QStringList srids;

        while ( q.next() )
        {
          const QString type = q.value( 0 ).toString().toUpper();
          const QString srid = q.value( 1 ).toString();

          if ( type.isEmpty() )
            continue;

          types << type;
          srids << srid;
        }

        type = types.join( ',' );
        srid = srids.join( ',' );
      }

      layerProperty.type = type;
      layerProperty.srid = srid;
    }
    else
    {
      layerProperty.type.clear();
      layerProperty.srid.clear();
    }

    // Now tell the layer list dialog box...
    emit setLayerType( layerProperty );
  }
}

void QgsDb2SourceSelect::showHelp()
{
  QgsHelp::openHelp( QStringLiteral( "managing_data_source/opening_data.html#loading-a-database-layer" ) );
}
