/***************************************************************************
    qgsoapifapirequest.cpp
    ---------------------
    begin                : October 2019
    copyright            : (C) 2019 by Even Rouault
    email                : even.rouault at spatialys.com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

// #include <nlohmann/json.hpp>
// using namespace nlohmann;

#include "qgslogger.h"
#include "qgsoapifapirequest.h"

#include <QTextCodec>

#include "qgsjsonutils.h"

QgsOapifApiRequest::QgsOapifApiRequest( const QgsDataSourceUri &baseUri, const QString &url ):
  QgsBaseNetworkRequest( QgsAuthorizationSettings( baseUri.username(), baseUri.password(), baseUri.authConfigId() ), tr( "OAPIF" ) ),
  mUrl( url )
{
  // Using Qt::DirectConnection since the download might be running on a different thread.
  // In this case, the request was sent from the main thread and is executed with the main
  // thread being blocked in future.waitForFinished() so we can run code on this object which
  // lives in the main thread without risking havoc.
  connect( this, &QgsBaseNetworkRequest::downloadFinished, this, &QgsOapifApiRequest::processReply, Qt::DirectConnection );
}

bool QgsOapifApiRequest::request( bool synchronous, bool forceRefresh )
{
  if ( !sendGET( QUrl( mUrl ), QStringLiteral( "application/vnd.oai.openapi+json;version=3.0, application/openapi+json;version=3.0, application/json" ), synchronous, forceRefresh ) )
  {
    emit gotResponse();
    return false;
  }
  return true;
}

QString QgsOapifApiRequest::errorMessageWithReason( const QString &reason )
{
  return tr( "Download of API page failed: %1" ).arg( reason );
}

void QgsOapifApiRequest::processReply()
{
  if ( mErrorCode != QgsBaseNetworkRequest::NoError )
  {
    emit gotResponse();
    return;
  }
  const QByteArray &buffer = mResponse;
  if ( buffer.isEmpty() )
  {
    mErrorMessage = tr( "empty response" );
    mErrorCode = QgsBaseNetworkRequest::ServerExceptionError;
    emit gotResponse();
    return;
  }

  QgsDebugMsgLevel( QStringLiteral( "parsing API response: " ) + buffer, 4 );

  QTextCodec::ConverterState state;
  QTextCodec *codec = QTextCodec::codecForName( "UTF-8" );
  Q_ASSERT( codec );

  const QString utf8Text = codec->toUnicode( buffer.constData(), buffer.size(), &state );
  if ( state.invalidChars != 0 )
  {
    mErrorCode = QgsBaseNetworkRequest::ApplicationLevelError;
    mAppLevelError = ApplicationLevelError::JsonError;
    mErrorMessage = errorMessageWithReason( tr( "Invalid UTF-8 content" ) );
    emit gotResponse();
    return;
  }

    QString error;
    const json j = QgsJsonUtils::parse(utf8Text.toStdString(), error);
    if(!error.isEmpty())
    {
        mErrorCode = QgsBaseNetworkRequest::ApplicationLevelError;
        mAppLevelError = ApplicationLevelError::JsonError;
        mErrorMessage = errorMessageWithReason( error );
        emit gotResponse();
        return;
    }

    if ( QgsJsonUtils::is_object(j) )
    {
      const auto components = j["components"];
      if ( components.IsValid() )
      {
        const auto parameters = components["parameters"];
        if ( parameters.IsValid() )
        {
          const auto limit = parameters["limit"];
          if ( limit.IsValid() )
          {
            const auto schema = limit["schema"];
            if ( schema.IsValid() )
            {
                const auto maximum = schema["maximum"];
                if ( QgsJsonUtils::is_number_integer(maximum) )
                {
                  mMaxLimit = maximum.ToInteger();
                }

                const auto defaultL = schema["default"];
                if ( QgsJsonUtils::is_number_integer(defaultL) )
                {
                  mDefaultLimit = defaultL.ToInteger();
                }
            }
          }
        }
      }
      
      const auto info = j["info"];
      if ( QgsJsonUtils::is_object(info) )
      {
        const auto jContact = info["contact"];
        if ( jContact.IsValid() )
        {
          const auto name = jContact["name"];
          if ( name.IsValid() )
          {
            QgsAbstractMetadataBase::Contact contact( QString::fromStdString( name.ToString() ) );
            const auto email = jContact["email"];
            if ( email.IsValid() )
            {
                contact.email = QString::fromStdString( email.ToString() );
            }
            const auto url = jContact["url"];
            if ( url.IsValid() )
            {
                // A bit of abuse to fill organization with url
                contact.organization = QString::fromStdString( url.ToString() );
            }
            mMetadata.addContact( contact );
          }
        }
      }
    }

  emit gotResponse();
}
