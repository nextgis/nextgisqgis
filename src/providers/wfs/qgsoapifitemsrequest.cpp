/***************************************************************************
    qgsoapifitemsrequest.cpp
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
#include "qgsjsonutils.h"

#include "qgslogger.h"
#include "qgsoapifitemsrequest.h"
#include "qgsoapifutils.h"
#include "qgswfsconstants.h"
#include "qgsproviderregistry.h"

#include "cpl_vsi.h"

#include <QTextCodec>

QgsOapifItemsRequest::QgsOapifItemsRequest( const QgsDataSourceUri &baseUri, const QString &url ):
  QgsBaseNetworkRequest( QgsAuthorizationSettings( baseUri.username(), baseUri.password(), baseUri.authConfigId() ), tr( "OAPIF" ) ),
  mUrl( url )
{
  // Using Qt::DirectConnection since the download might be running on a different thread.
  // In this case, the request was sent from the main thread and is executed with the main
  // thread being blocked in future.waitForFinished() so we can run code on this object which
  // lives in the main thread without risking havoc.
  connect( this, &QgsBaseNetworkRequest::downloadFinished, this, &QgsOapifItemsRequest::processReply, Qt::DirectConnection );
}

bool QgsOapifItemsRequest::request( bool synchronous, bool forceRefresh )
{
  if ( !sendGET( QUrl( mUrl ), QString( "application/geo+json, application/json" ), synchronous, forceRefresh ) )
  {
    emit gotResponse();
    return false;
  }
  return true;
}

QString QgsOapifItemsRequest::errorMessageWithReason( const QString &reason )
{
  return tr( "Download of items failed: %1" ).arg( reason );
}

void QgsOapifItemsRequest::processReply()
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

  QgsDebugMsgLevel( QStringLiteral( "parsing items response: " ) + buffer, 4 );

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

  const QString vsimemFilename = QStringLiteral( "/vsimem/oaipf_%1.json" ).arg( reinterpret_cast< quintptr >( &buffer ), QT_POINTER_SIZE * 2, 16, QLatin1Char( '0' ) );
  VSIFCloseL( VSIFileFromMemBuffer( vsimemFilename.toUtf8().constData(),
                                    const_cast<GByte *>( reinterpret_cast<const GByte *>( buffer.constData() ) ),
                                    buffer.size(),
                                    false ) );
  QgsProviderRegistry *pReg = QgsProviderRegistry::instance();
  const QgsDataProvider::ProviderOptions providerOptions;
  auto vectorProvider = std::unique_ptr<QgsVectorDataProvider>(
                          qobject_cast< QgsVectorDataProvider * >( pReg->createProvider( "ogr", vsimemFilename, providerOptions ) ) );
  if ( !vectorProvider || !vectorProvider->isValid() )
  {
    VSIUnlink( vsimemFilename.toUtf8().constData() );
    mErrorCode = QgsBaseNetworkRequest::ApplicationLevelError;
    mAppLevelError = ApplicationLevelError::JsonError;
    mErrorMessage = errorMessageWithReason( tr( "Loading of items failed" ) );
    emit gotResponse();
    return;
  }

  mFields = vectorProvider->fields();
  mWKBType = vectorProvider->wkbType();
  if ( mComputeBbox )
  {
    mBbox = vectorProvider->extent();
  }
  auto iter = vectorProvider->getFeatures();
  while ( true )
  {
    QgsFeature f;
    if ( !iter.nextFeature( f ) )
      break;
    mFeatures.push_back( QgsFeatureUniqueIdPair( f, QString() ) );
  }
  vectorProvider.reset();
  VSIUnlink( vsimemFilename.toUtf8().constData() );

    QString error;
    const json j = QgsJsonUtils::parse( utf8Text.toStdString(), error );
    if(!error.isEmpty())
    {
        mErrorCode = QgsBaseNetworkRequest::ApplicationLevelError;
        mAppLevelError = ApplicationLevelError::JsonError;
        mErrorMessage = errorMessageWithReason( tr( "Cannot decode JSON document: %1" ).arg( error ) );
        emit gotResponse();
        return;
    }

    if ( QgsJsonUtils::is_object(j) )
    {
        const json features = j["features"];
        if ( QgsJsonUtils::is_array(features) )
        {
            auto featuresA = features.ToArray();
            if( featuresA.Size() == mFeatures.size() )
            {
                for ( int i = 0; i < featuresA.Size(); i++ )
                {
                    const json &jFeature = featuresA[i];
                    if ( QgsJsonUtils::is_object(jFeature) )
                    {
                        const json id = jFeature["id"];
                        if ( id.IsValid() )
                        {
                            mFeatures[i].second = QString::fromStdString( id.ToString() );
                        }
                    }
                }
            }
        }
    }

    const auto links = QgsOAPIFJson::parseLinks( j );
    mNextUrl = QgsOAPIFJson::findLink( links,
                                       QStringLiteral( "next" ),
    {  QStringLiteral( "application/geo+json" ) } );

    if ( QgsJsonUtils::is_object(j) )
    {
        const auto numberMatched = j["numberMatched"];
        if ( QgsJsonUtils::is_number_integer(numberMatched) )
        {
            mNumberMatched = numberMatched.ToInteger();
        }
    }

    emit gotResponse();
}
