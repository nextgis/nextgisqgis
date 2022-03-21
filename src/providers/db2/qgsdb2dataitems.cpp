/***************************************************************************
  qgsdb2dataitems.cpp - Browser Panel object population
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

#include "qgsdb2dataitems.h"
#include "qgsdb2geometrycolumns.h"
#include "qgslogger.h"
#include "qgsmimedatautils.h"
#include "qgsvectorlayerexporter.h"
#include "qgsvectorlayer.h"
#include "qgssettings.h"
#include "qgsmessageoutput.h"
#include "qgsapplication.h"
#include "qgsproject.h"

#include <QMessageBox>
#include <QSqlError>

static const QString PROVIDER_KEY = QStringLiteral( "DB2" );

QgsDb2ConnectionItem::QgsDb2ConnectionItem( QgsDataItem *parent, const QString name, const QString path )
  : QgsDataCollectionItem( parent, name, path, QStringLiteral( "DB2" ) )
{
  mIconName = QStringLiteral( "mIconConnect.svg" );
  mCapabilities |= Qgis::BrowserItemCapability::Collapse;
  populate();
}

bool QgsDb2ConnectionItem::ConnInfoFromParameters(
  const QString &service,
  const QString &driver,
  const QString &host,
  const QString &port,
  const QString &database,
  const QString &username,
  const QString &password,
  const QString &authcfg,
  QString &connInfo,
  QString &errorMsg )
{
  if ( service.isEmpty() )
  {
    if ( driver.isEmpty() || host.isEmpty() || database.isEmpty() || port.isEmpty() )
    {
      QgsDebugMsg( QStringLiteral( "Host, port, driver or database missing" ) );
      errorMsg = QStringLiteral( "Host, port, driver or database missing" );
      return false;
    }
    connInfo = "driver='" + driver + "' "
               + "host='" + host + "' "
               + "dbname='" + database + "' "
               + "port='" + port + "' ";
  }
  else
  {
    if ( database.isEmpty() )
    {
      QgsDebugMsg( QStringLiteral( "Database must be specified" ) );
      errorMsg = QStringLiteral( "Database must be specified" );
      return false;
    }
    connInfo = "service='" + service + "' "
               + "dbname='" + database + "' ";
  }

  if ( !authcfg.isEmpty() )
  {
    connInfo += "authcfg='" + authcfg + "' ";
  }

  if ( !password.isEmpty() )
  {
    // include password if authcfg is empty
    connInfo += "password='" + password + "' ";
  }

  if ( !username.isEmpty() )
  {
    connInfo += "user='" + username + "' ";
  }

  QgsDebugMsg( "connInfo: '" + connInfo + "'" );
  return true;
}

bool QgsDb2ConnectionItem::ConnInfoFromSettings( const QString connName,
    QString &connInfo, QString &errorMsg )
{
  QgsDebugMsg( QStringLiteral( "Get settings for connection '%1'" ).arg( connInfo ) );
  const QgsSettings settings;
  const QString key = "/DB2/connections/" + connName;

  const bool rc = QgsDb2ConnectionItem::ConnInfoFromParameters(
                    settings.value( key + "/service" ).toString(),
                    settings.value( key + "/driver" ).toString(),
                    settings.value( key + "/host" ).toString(),
                    settings.value( key + "/port" ).toString(),
                    settings.value( key + "/database" ).toString(),
                    settings.value( key + "/username" ).toString(),
                    settings.value( key + "/password" ).toString(),
                    settings.value( key + "/authcfg" ).toString(),
                    connInfo, errorMsg );

  if ( !rc )
  {
    QgsDebugMsg( "errMsg: " + errorMsg );
    return false;
  }

  QgsDebugMsg( "connInfo: '" + connInfo + "'" );
  return true;
}

void QgsDb2ConnectionItem::refresh()
{
  QgsDebugMsg( "db2 mPath = " + mPath );

  // read up the schemas and layers from database
  const QVector<QgsDataItem *> items = createChildren();

  // Add new items
  const auto constItems = items;
  for ( QgsDataItem *item : constItems )
  {
    // Is it present in children?
    const int index = findItem( mChildren, item );
    if ( index >= 0 )
    {
      ( ( QgsDb2SchemaItem * )mChildren.at( index ) )->addLayers( item );
      delete item;
      continue;
    }
    addChildItem( item, true );
  }
}

QVector<QgsDataItem *> QgsDb2ConnectionItem::createChildren()
{
  QVector<QgsDataItem *> children;

  QString connInfo;
  QString errorMsg;
  const bool success = QgsDb2ConnectionItem::ConnInfoFromSettings( mName, connInfo, errorMsg );
  if ( !success )
  {
    QgsDebugMsg( "settings error: " + errorMsg );
    children.append( new QgsErrorItem( this, errorMsg, mPath + "/error" ) );
    return children;
  }

  mConnInfo = connInfo;
  QgsDebugMsg( "mConnInfo: '" + mConnInfo + "'" );

  const QSqlDatabase db = QgsDb2Provider::getDatabase( connInfo, errorMsg );
  if ( errorMsg.isEmpty() )
  {
    //children.append( new QgsFavoritesItem(this, "connection successful", mPath + "/success"));
    QgsDebugMsg( "DB open successful for connection " + db.connectionName() );
  }
  else
  {
    children.append( new QgsErrorItem( this, errorMsg, mPath + "/error" ) );
    QgsDebugMsg( "DB not open " + errorMsg );
    return children;
  }

  QgsDb2GeometryColumns db2GC = QgsDb2GeometryColumns( db );
  const QString sqlcode = db2GC.open();

  /* Enabling the DB2 Spatial Extender creates the DB2GSE schema and tables,
     so the Extender is either not enabled or set up if SQLCODE -204 is returned. */
  if ( sqlcode == QLatin1String( "-204" ) )
  {
    children.append( new QgsErrorItem( this, tr( "DB2 Spatial Extender is not enabled or set up." ), mPath + "/error" ) );
    return children;
  }
  else if ( !sqlcode.isEmpty() && sqlcode != QLatin1String( "0" ) )
  {
    children.append( new QgsErrorItem( this, db.lastError().text(), mPath + "/error" ) );
    return children;
  }
  QgsDb2LayerProperty layer;

  //QVector<QgsDataItem*> newLayers;
  while ( db2GC.populateLayerProperty( layer ) )
  {
    QgsDb2SchemaItem *schemaItem = nullptr;
    const auto constChildren = children;
    for ( QgsDataItem *child : constChildren )
    {
      if ( child->name() == layer.schemaName )
      {
        schemaItem = ( QgsDb2SchemaItem * )child;
        break;
      }
    }

    if ( !schemaItem )
    {
      schemaItem = new QgsDb2SchemaItem( this, layer.schemaName, mPath + "/" + layer.schemaName );
      QgsDebugMsg( "Adding Schema Item : " + layer.schemaName + " " + mPath + "/" + layer.schemaName + " type=" + layer.type
                   + " srid=" + layer.srid + " table=" + layer.tableName + "(" + layer.geometryColName + ")"
                 );
      children.append( schemaItem );
    }

    QgsDb2LayerItem *added = schemaItem->addLayer( layer, true );

    if ( added )
    {
      QgsDebugMsg( " DB2 adding layer to schema item: " + added->name() );
      //children.append(added);
    }
    else
    {
      QgsDebugMsg( QStringLiteral( " DB2 layer not added " ) );
    }
  }
  return children;
}

bool QgsDb2ConnectionItem::equal( const QgsDataItem *other )
{
  if ( type() != other->type() )
  {
    return false;
  }

  const QgsDb2ConnectionItem *o = qobject_cast<const QgsDb2ConnectionItem *>( other );
  return ( mPath == o->mPath && mName == o->mName );
}

bool QgsDb2ConnectionItem::handleDrop( const QMimeData *data, const QString &toSchema )
{
  if ( !QgsMimeDataUtils::isUriList( data ) )
    return false;

  // TODO: probably should show a GUI with settings etc
  QStringList importResults;
  bool hasError = false;

  const QgsMimeDataUtils::UriList lst = QgsMimeDataUtils::decodeUriList( data );
  const auto constLst = lst;
  for ( const QgsMimeDataUtils::Uri &u : constLst )
  {
    if ( u.layerType != QLatin1String( "vector" ) )
    {
      importResults.append( tr( "%1: Not a vector layer!" ).arg( u.name ) );
      hasError = true; // only vectors can be imported
      continue;
    }

    QgsDebugMsg( QStringLiteral( "uri: %1; name: %2; key: %3" ).arg( u.uri, u.name, u.providerKey ) );
    // open the source layer
    const QgsVectorLayer::LayerOptions options { QgsProject::instance()->transformContext() };
    QgsVectorLayer *srcLayer = new QgsVectorLayer( u.uri, u.name, u.providerKey, options );

    if ( srcLayer->isValid() )
    {
      QString tableName;
      if ( !toSchema.isEmpty() )
      {
        tableName = QStringLiteral( "%1.%2" ).arg( toSchema, u.name );
      }
      else
      {
        tableName = u.name;
      }

      QString uri = connInfo() + " table=" + tableName;
      if ( srcLayer->geometryType() != QgsWkbTypes::NullGeometry )
        uri += QLatin1String( " (geom)" );

      std::unique_ptr< QgsVectorLayerExporterTask > exportTask( QgsVectorLayerExporterTask::withLayerOwnership( srcLayer, uri, QStringLiteral( "DB2" ), srcLayer->crs() ) );

      // when export is successful:
      connect( exportTask.get(), &QgsVectorLayerExporterTask::exportComplete, this, [ = ]()
      {
        // this is gross - TODO - find a way to get access to messageBar from data items
        QMessageBox::information( nullptr, tr( "Import to DB2 database" ), tr( "Import was successful." ) );
        if ( state() == Qgis::BrowserItemState::Populated )
          refresh();
        else
          populate();
      } );

      // when an error occurs:
      connect( exportTask.get(), &QgsVectorLayerExporterTask::errorOccurred, this, [ = ]( Qgis::VectorExportResult error, const QString & errorMessage )
      {
        if ( error != Qgis::VectorExportResult::UserCanceled )
        {
          QgsMessageOutput *output = QgsMessageOutput::createMessageOutput();
          output->setTitle( tr( "Import to DB2 database" ) );
          output->setMessage( tr( "Failed to import some layers!\n\n" ) + errorMessage, QgsMessageOutput::MessageText );
          output->showMessage();
        }
        if ( state() == Qgis::BrowserItemState::Populated )
          refresh();
        else
          populate();
      } );

      QgsApplication::taskManager()->addTask( exportTask.release() );
    }
    else
    {
      importResults.append( tr( "%1: Not a valid layer!" ).arg( u.name ) );
      hasError = true;
    }
  }

  if ( hasError )
  {
    QgsMessageOutput *output = QgsMessageOutput::createMessageOutput();
    output->setTitle( tr( "Import to DB2 database" ) );
    output->setMessage( tr( "Failed to import some layers!\n\n" ) + importResults.join( QLatin1Char( '\n' ) ), QgsMessageOutput::MessageText );
    output->showMessage();
  }

  return true;
}

QgsDb2RootItem::QgsDb2RootItem( QgsDataItem *parent, QString name, QString path )
  : QgsConnectionsRootItem( parent, name, path, QStringLiteral( "DB2" ) )
{
  mIconName = QStringLiteral( "mIconDb2.svg" );
  populate();
}

QVector<QgsDataItem *> QgsDb2RootItem::createChildren()
{
  QVector<QgsDataItem *> connections;
  QgsSettings settings;
  settings.beginGroup( QStringLiteral( "/DB2/connections" ) );
  const auto constChildGroups = settings.childGroups();
  for ( const QString &connName : constChildGroups )
  {
    connections << new QgsDb2ConnectionItem( this, connName, mPath + "/" + connName );
  }
  return connections;
}

// ---------------------------------------------------------------------------
QgsDb2LayerItem::QgsDb2LayerItem( QgsDataItem *parent, QString name, QString path, Qgis::BrowserLayerType layerType, QgsDb2LayerProperty layerProperty )
  : QgsLayerItem( parent, name, path, QString(), layerType, PROVIDER_KEY )
  , mLayerProperty( layerProperty )
{
  QgsDebugMsg( QStringLiteral( "new db2 layer created : %1" ).arg( qgsEnumValueToKey( layerType ) ) );
  mUri = createUri();
  setState( Qgis::BrowserItemState::Populated );
}

QgsDb2LayerItem *QgsDb2LayerItem::createClone()
{
  return new QgsDb2LayerItem( mParent, mName, mPath, mLayerType, mLayerProperty );
}

QString QgsDb2LayerItem::createUri()
{
  QgsDb2ConnectionItem *connItem = qobject_cast<QgsDb2ConnectionItem *>( parent() ? parent()->parent() : nullptr );

  if ( !connItem )
  {
    QgsDebugMsg( QStringLiteral( "connection item not found." ) );
    return QString();
  }
  QgsDebugMsg( "connInfo: '" + connItem->connInfo() + "'" );
  QgsDataSourceUri uri = QgsDataSourceUri( connItem->connInfo() );
  uri.setDataSource( mLayerProperty.schemaName, mLayerProperty.tableName, mLayerProperty.geometryColName, mLayerProperty.sql, mLayerProperty.pkColumnName );
  uri.setSrid( mLayerProperty.srid );
  uri.setWkbType( QgsDb2TableModel::wkbTypeFromDb2( mLayerProperty.type ) );
  uri.setParam( QStringLiteral( "extents" ), mLayerProperty.extents );
  QString uriString = uri.uri( false );
  QgsDebugMsg( "Layer URI: " + uriString );
  return uriString;
}
// ---------------------------------------------------------------------------
QgsDb2SchemaItem::QgsDb2SchemaItem( QgsDataItem *parent, QString name, QString path )
  : QgsDataCollectionItem( parent, name, path, QStringLiteral( "DB2" ) )
{
  mIconName = QStringLiteral( "mIconDbSchema.svg" );
}

QVector<QgsDataItem *> QgsDb2SchemaItem::createChildren()
{
  QgsDebugMsg( QStringLiteral( "schema this DB2 Entering." ) );

  QVector<QgsDataItem *>items;

  const auto constChildren = this->children();
  for ( QgsDataItem *child : constChildren )
  {
    items.append( ( ( QgsDb2LayerItem * )child )->createClone() );
  }
  return items;
}

void QgsDb2SchemaItem::addLayers( QgsDataItem *newLayers )
{
  // Add new items
  const auto constChildren = newLayers->children();
  for ( QgsDataItem *child : constChildren )
  {
    // Is it present in children?
    if ( findItem( mChildren, child ) >= 0 )
    {
      continue;
    }
    QgsDb2LayerItem *layer = ( ( QgsDb2LayerItem * )child )->createClone();
    addChildItem( layer, true );
  }
}

QgsDb2LayerItem *QgsDb2SchemaItem::addLayer( QgsDb2LayerProperty layerProperty, bool refresh )
{
  const QgsWkbTypes::Type wkbType = QgsDb2TableModel::wkbTypeFromDb2( layerProperty.type );
  QString tip = tr( "DB2 *** %1 as %2 in %3" ).arg( layerProperty.geometryColName,
                QgsWkbTypes::displayString( wkbType ),
                layerProperty.srid );
  QgsDebugMsg( tip );
  Qgis::BrowserLayerType layerType;
  switch ( wkbType )
  {
    case QgsWkbTypes::Point:
    case QgsWkbTypes::Point25D:
    case QgsWkbTypes::MultiPoint:
    case QgsWkbTypes::MultiPoint25D:
      layerType = Qgis::BrowserLayerType::Point;
      break;
    case QgsWkbTypes::LineString:
    case QgsWkbTypes::LineString25D:
    case QgsWkbTypes::MultiLineString:
    case QgsWkbTypes::MultiLineString25D:
      layerType = Qgis::BrowserLayerType::Line;
      break;
    case QgsWkbTypes::Polygon:
    case QgsWkbTypes::Polygon25D:
    case QgsWkbTypes::MultiPolygon:
    case QgsWkbTypes::MultiPolygon25D:
      layerType = Qgis::BrowserLayerType::Polygon;
      break;
    default:
      if ( layerProperty.type == QLatin1String( "NONE" ) && layerProperty.geometryColName.isEmpty() )
      {
        layerType = Qgis::BrowserLayerType::TableLayer;
        tip = tr( "as geometryless table" );
      }
      else
      {
        return nullptr;
      }
  }

  QgsDb2LayerItem *layerItem = new QgsDb2LayerItem( this, layerProperty.tableName, mPath + "/" + layerProperty.tableName, layerType, layerProperty );
  layerItem->setToolTip( tip );
  if ( refresh )
    addChildItem( layerItem, true );
  else
    addChild( layerItem );

  return layerItem;
}

QString QgsDb2DataItemProvider::name()
{
  return QStringLiteral( "DB2" );
}

QString QgsDb2DataItemProvider::dataProviderKey() const
{
  return QStringLiteral( "DB2" );
}

int QgsDb2DataItemProvider::capabilities() const
{
  return QgsDataProvider::Database;
}

QgsDataItem *QgsDb2DataItemProvider::createDataItem( const QString &pathIn, QgsDataItem *parentItem )
{
  Q_UNUSED( pathIn );
  QgsDebugMsgLevel( QStringLiteral( "DB2: Browser Panel; data item detected." ), 2 );
  return new QgsDb2RootItem( parentItem,
                             QObject::tr( "DB2 (deprecated)" ),
                             QStringLiteral( "DB2:" ) );
}


bool QgsDb2SchemaItem::layerCollection() const
{
  return true;
}
