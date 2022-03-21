/***************************************************************************
 qgscolumntypethread.cpp - lookup oracle geometry type and srid in a thread
                              -------------------
begin                : 3.1.2012
copyright            : (C) 2012 by Juergen E. Fischer
email                : jef at norbit dot de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsoraclecolumntypethread.h"
#include "qgslogger.h"
#include "qgsoracleconnpool.h"

#include <QMetaType>

QgsOracleColumnTypeThread::QgsOracleColumnTypeThread( const QString &name, const QString &limitToSchema, bool useEstimatedMetadata, bool allowGeometrylessTables )
  : mName( name )
  , mSchema( limitToSchema )
  , mUseEstimatedMetadata( useEstimatedMetadata )
  , mAllowGeometrylessTables( allowGeometrylessTables )
{
  qRegisterMetaType<QgsOracleLayerProperty>( "QgsOracleLayerProperty" );
}

void QgsOracleColumnTypeThread::stop()
{
  mStopped = true;
}

void QgsOracleColumnTypeThread::run()
{
  mStopped = false;

  QString conninfo = QgsOracleConn::toPoolName( QgsOracleConn::connUri( mName ) );
  QgsOracleConn *conn = QgsOracleConnPool::instance()->acquireConnection( conninfo );
  if ( !conn )
  {
    QgsDebugMsg( "Connection failed - " + conninfo );
    mStopped = true;
    return;
  }

  emit progressMessage( tr( "Retrieving tables of %1…" ).arg( mName ) );
  QVector<QgsOracleLayerProperty> layerProperties;
  if ( !conn->supportedLayers( layerProperties,
                               mSchema,
                               QgsOracleConn::geometryColumnsOnly( mName ),
                               QgsOracleConn::userTablesOnly( mName ),
                               mAllowGeometrylessTables ) ||
       layerProperties.isEmpty() )
  {
    return;
  }

  int i = 0, n = layerProperties.size();
  for ( QVector<QgsOracleLayerProperty>::iterator it = layerProperties.begin(),
        end = layerProperties.end();
        it != end; ++it )
  {
    QgsOracleLayerProperty &layerProperty = *it;
    if ( !mStopped )
    {
      emit progress( i++, n );
      emit progressMessage( tr( "Scanning column %1.%2.%3…" )
                            .arg( layerProperty.ownerName,
                                  layerProperty.tableName,
                                  layerProperty.geometryColName ) );
      conn->retrieveLayerTypes( layerProperty, mUseEstimatedMetadata, QgsOracleConn::onlyExistingTypes( mName ) );
    }

    if ( mStopped )
    {
      layerProperty.types.clear();
      layerProperty.srids.clear();
    }

    // Now tell the layer list dialog box...
    emit setLayerType( layerProperty );
  }

  // store the list for later use (cache)
  if ( !mStopped )
    mLayerProperties = layerProperties;

  emit progress( 0, 0 );
  emit progressMessage( tr( "Table retrieval finished." ) );

  QgsOracleConnPool::instance()->releaseConnection( conn );
}
