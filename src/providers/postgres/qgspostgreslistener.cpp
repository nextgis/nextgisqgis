/***************************************************************************
  qgspostgreslistener.cpp  -  Listen to postgres NOTIFY
                             -------------------
    begin                : Sept 11, 2017
    copyright            : (C) 2017 by Vincent Mora
    email                : vincent dor mora at oslandia dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgspostgreslistener.h"
#include "qgsdatasourceuri.h"
#include "qgscredentials.h"
#include "qgslogger.h"

#ifdef Q_OS_WIN
#include <winsock.h>
#else
#include <sys/select.h>
#endif

const int PG_CONNECT_TIMEOUT = 30;

extern "C"
{
#include <libpq-fe.h>
}

std::unique_ptr< QgsPostgresListener > QgsPostgresListener::create( const QString &connString )
{
  std::unique_ptr< QgsPostgresListener > res( new QgsPostgresListener( connString ) );
  QgsDebugMsg( QStringLiteral( "starting notification listener" ) );
  res->start();
  res->mMutex.lock();
  res->mIsReadyCondition.wait( &res->mMutex );
  res->mMutex.unlock();

  return res;
}

QgsPostgresListener::QgsPostgresListener( const QString &connString )
  : mConnString( connString )
{
}

QgsPostgresListener::~QgsPostgresListener()
{
  mStop = true;
  QgsDebugMsg( QStringLiteral( "stopping the loop" ) );
  wait();
  QgsDebugMsg( QStringLiteral( "notification listener stopped" ) );
}

void QgsPostgresListener::run()
{
  PGconn *conn = nullptr;
  QString connectString = mConnString;

  connectString += QStringLiteral( " connect_timeout=%1" ).arg( PG_CONNECT_TIMEOUT );
  conn = PQconnectdb( connectString.toUtf8() );

  if ( PQstatus( conn ) != CONNECTION_OK )
  {
    QgsDataSourceUri uri( connectString );
    QString username = uri.username();
    QString password = uri.password();

    PQfinish( conn );

    QgsCredentials::instance()->lock();

    if ( QgsCredentials::instance()->get( mConnString, username, password, PQerrorMessage( conn ) ) )
    {
      uri.setUsername( username );
      uri.setPassword( password );
      connectString = uri.connectionInfo( false );
      connectString += QStringLiteral( " connect_timeout=%1" ).arg( PG_CONNECT_TIMEOUT );

      conn = PQconnectdb( connectString.toUtf8() );
      if ( PQstatus( conn ) == CONNECTION_OK )
        QgsCredentials::instance()->put( mConnString, username, password );
    }

    QgsCredentials::instance()->unlock();

    if ( PQstatus( conn ) != CONNECTION_OK )
    {
      PQfinish( conn );
      QgsDebugMsg( QStringLiteral( "LISTENer not started" ) );
      return;
    }
  }


  PGresult *res = PQexec( conn, "LISTEN qgis" );
  if ( PQresultStatus( res ) != PGRES_COMMAND_OK )
  {
    QgsDebugMsg( QStringLiteral( "error in listen" ) );
    PQclear( res );
    PQfinish( conn );
    mMutex.lock();
    mIsReadyCondition.wakeOne();
    mMutex.unlock();
    return;
  }
  PQclear( res );
  mMutex.lock();
  mIsReadyCondition.wakeOne();
  mMutex.unlock();

  const int sock = PQsocket( conn );
  if ( sock < 0 )
  {
    QgsDebugMsg( QStringLiteral( "error in socket" ) );
    PQfinish( conn );
    return;
  }

  forever
  {
    fd_set input_mask;
    FD_ZERO( &input_mask );
    FD_SET( sock, &input_mask );

    timeval timeout;
    timeout.tv_sec = 1;
    timeout.tv_usec = 0;

    if ( select( sock + 1, &input_mask, nullptr, nullptr, &timeout ) < 0 )
    {
      QgsDebugMsg( QStringLiteral( "error in select" ) );
      break;
    }

    PQconsumeInput( conn );
    PGnotify *n = PQnotifies( conn );
    if ( n )
    {
      const QString msg( n->extra );
      emit notify( msg );
      QgsDebugMsg( "notify " + msg );
      PQfreemem( n );
    }

    if ( mStop )
    {
      QgsDebugMsg( QStringLiteral( "stop from main thread" ) );
      break;
    }
  }
  PQfinish( conn );
}


