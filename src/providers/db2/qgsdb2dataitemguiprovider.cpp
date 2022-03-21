/***************************************************************************
  qgsdb2dataitemguiprovider.cpp
  --------------------------------------
  Date                 : June 2019
  Copyright            : (C) 2019 by Martin Dobias
  Email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsdb2dataitemguiprovider.h"
#include "qgsdb2dataitems.h"
#include "qgsdb2newconnection.h"
#include "qgsdb2sourceselect.h"
#include "qgsmanageconnectionsdialog.h"
#include "qgssettings.h"

#include <QFileDialog>

void QgsDb2DataItemGuiProvider::populateContextMenu( QgsDataItem *item, QMenu *menu, const QList<QgsDataItem *> &, QgsDataItemGuiContext )
{
  if ( QgsDb2RootItem *rootItem = qobject_cast< QgsDb2RootItem * >( item ) )
  {
    QAction *actionNew = new QAction( tr( "New Connection…" ), menu );
    connect( actionNew, &QAction::triggered, this, [rootItem] { newConnection( rootItem ); } );
    menu->addAction( actionNew );

    QAction *actionSaveServers = new QAction( tr( "Save Connections…" ), menu );
    connect( actionSaveServers, &QAction::triggered, this, [] { saveConnections(); } );
    menu->addAction( actionSaveServers );

    QAction *actionLoadServers = new QAction( tr( "Load Connections…" ), menu );
    connect( actionLoadServers, &QAction::triggered, this, [rootItem] { loadConnections( rootItem ); } );
    menu->addAction( actionLoadServers );
  }
  else if ( QgsDb2ConnectionItem *connItem = qobject_cast< QgsDb2ConnectionItem * >( item ) )
  {
    QAction *actionRefresh = new QAction( tr( "Refresh Connection" ), menu );
    connect( actionRefresh, &QAction::triggered, this, [connItem] { refreshConnection( connItem ); } );
    menu->addAction( actionRefresh );

    QAction *actionEdit = new QAction( tr( "Edit Connection…" ), menu );
    connect( actionEdit, &QAction::triggered, this, [connItem] { editConnection( connItem ); } );
    menu->addAction( actionEdit );

    QAction *actionDelete = new QAction( tr( "Remove Connection" ), menu );
    connect( actionDelete, &QAction::triggered, this, [connItem] { deleteConnection( connItem ); } );
    menu->addAction( actionDelete );
  }
}

bool QgsDb2DataItemGuiProvider::acceptDrop( QgsDataItem *item, QgsDataItemGuiContext )
{
  if ( qobject_cast< QgsDb2ConnectionItem * >( item ) )
    return true;
  if ( qobject_cast< QgsDb2SchemaItem * >( item ) )
    return true;

  return false;
}

bool QgsDb2DataItemGuiProvider::handleDrop( QgsDataItem *item, QgsDataItemGuiContext, const QMimeData *data, Qt::DropAction )
{
  if ( QgsDb2ConnectionItem *connItem = qobject_cast< QgsDb2ConnectionItem * >( item ) )
  {
    return connItem->handleDrop( data, QString() );
  }
  else if ( QgsDb2SchemaItem *schemaItem = qobject_cast< QgsDb2SchemaItem * >( item ) )
  {
    QgsDb2ConnectionItem *conn = qobject_cast<QgsDb2ConnectionItem *>( schemaItem->parent() );
    if ( !conn )
      return false;

    return conn->handleDrop( data, schemaItem->name() );
  }
  return false;
}


void QgsDb2DataItemGuiProvider::newConnection( QgsDataItem *item )
{
  QgsDb2NewConnection newConnection( nullptr, item->name() );
  if ( newConnection.exec() )
  {
    item->refreshConnections();
  }

}

void QgsDb2DataItemGuiProvider::editConnection( QgsDataItem *item )
{
  QgsDb2NewConnection nc( nullptr, item->name() );
  if ( nc.exec() )
  {
    // the parent should be updated
    item->parent()->refreshConnections();
  }
}

void QgsDb2DataItemGuiProvider::deleteConnection( QgsDataItem *item )
{
  const QString key = "/DB2/connections/" + item->name();
  QgsSettings settings;
  settings.remove( key + "/service" );
  settings.remove( key + "/driver" );
  settings.remove( key + "/port" );
  settings.remove( key + "/host" );
  settings.remove( key + "/database" );
  settings.remove( key + "/username" );
  settings.remove( key + "/password" );
  settings.remove( key + "/environment" );
  settings.remove( key );
  item->parent()->refreshConnections();
}

void QgsDb2DataItemGuiProvider::refreshConnection( QgsDataItem *item )
{
  item->refresh();
}

void QgsDb2DataItemGuiProvider::saveConnections()
{
  QgsManageConnectionsDialog dlg( nullptr, QgsManageConnectionsDialog::Export, QgsManageConnectionsDialog::DB2 );
  dlg.exec();
}

void QgsDb2DataItemGuiProvider::loadConnections( QgsDataItem *item )
{
  const QString fileName = QFileDialog::getOpenFileName( nullptr, tr( "Load Connections" ), QDir::homePath(),
                           tr( "XML files (*.xml *.XML)" ) );
  if ( fileName.isEmpty() )
  {
    return;
  }

  QgsManageConnectionsDialog dlg( nullptr, QgsManageConnectionsDialog::Import, QgsManageConnectionsDialog::DB2, fileName );
  if ( dlg.exec() == QDialog::Accepted )
    item->refreshConnections();
}
