/***************************************************************************
    qgsoapifcollection.cpp
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
#include "qgsoapifcollection.h"
#include "qgsoapifutils.h"

#include <set>

#include <QTextCodec>

bool QgsOapifCollection::deserialize( const json &j )
{
    if ( !QgsJsonUtils::is_object(j) )
        return false;
    std::string idPropertyName("id");
    if ( !j["id"].IsValid() )
    {
#ifndef REMOVE_SUPPORT_DRAFT_VERSIONS
        if ( j["name"].IsValid() )
        {
          idPropertyName = "name";
        }
        else
#endif
        {
          QgsDebugMsg( QStringLiteral( "missing id in collection" ) );
          return false;
        }
    }

    const auto id = j[idPropertyName];
    if ( !id.IsValid() )
        return false;
    mId = QString::fromStdString( id.ToString() );

    mLayerMetadata.setType( QStringLiteral( "dataset" ) );

    const auto links = QgsOAPIFJson::parseLinks( j );
    const auto selfUrl = QgsOAPIFJson::findLink( links,
                        QStringLiteral( "self" ),
    { QStringLiteral( "application/json" ) } );
    if ( !selfUrl.isEmpty() )
    {
        mLayerMetadata.setIdentifier( selfUrl );
    }
    else
    {
        mLayerMetadata.setIdentifier( mId );
    }

    const auto parentUrl = QgsOAPIFJson::findLink( links,
                         QStringLiteral( "parent" ),
    { QStringLiteral( "application/json" ) } );
    if ( !parentUrl.isEmpty() )
    {
        mLayerMetadata.setParentIdentifier( parentUrl );
    }

    for ( const auto &link : links )
    {
        auto mdLink = QgsAbstractMetadataBase::Link( link.rel, QStringLiteral( "WWW:LINK" ), link.href );
        mdLink.mimeType = link.type;
        mdLink.description = link.title;
        if ( link.length > 0 )
            mdLink.size = QString::number( link.length );
        mLayerMetadata.addLink( mdLink );
    }

    const auto title = j["title"];
    if ( title.IsValid() )
    {
        mTitle = QString::fromStdString( title.ToString() );
        mLayerMetadata.setTitle( mTitle );
    }

    const auto description = j["description"];
    if ( description.IsValid() )
    {
        mDescription = QString::fromStdString( description.ToString() );
        mLayerMetadata.setAbstract( mDescription );
    }

    QgsLayerMetadata::Extent metadataExtent;
    const auto extent = j["extent"];

    const auto spatial = extent["spatial"];
    if ( QgsJsonUtils::is_object(spatial) )
    {
        QgsCoordinateReferenceSystem crs( QgsCoordinateReferenceSystem::fromOgcWmsCrs(
                                            QStringLiteral( "http://www.opengis.net/def/crs/OGC/1.3/CRS84" ) ) );
        const auto jCrs = spatial["crs"];
        if ( jCrs.IsValid() )
        {
            crs = QgsCoordinateReferenceSystem::fromOgcWmsCrs( QString::fromStdString( jCrs.ToString() ) );
        }

        mLayerMetadata.setCrs( crs );

        const auto jBboxes = spatial["bbox"];
        if ( QgsJsonUtils::is_array(jBboxes) )
        {
            QList< QgsLayerMetadata::SpatialExtent > spatialExtents;
            bool firstBbox = true;
            for ( const auto &jBbox : jBboxes.ToArray() )
            {
                if ( QgsJsonUtils::is_array(jBbox) )
                {
                    auto jBboxA = jBbox.ToArray();
                    if ( jBboxA.Size() == 4 || jBboxA.Size() == 6 ) 
                    {
                        std::vector<double> values;
                        for ( int i = 0; i < jBboxA.Size(); i++ )
                        {
                            values.push_back( jBboxA[i].ToDouble() );
                        }
                        QgsLayerMetadata::SpatialExtent spatialExtent;
                        spatialExtent.extentCrs = crs;
                        if ( values.size() == 4 )
                        {
                            if ( firstBbox )
                            {
                                mBbox.set( values[0], values[1], values[2], values[3] );
                            }
                            spatialExtent.bounds = QgsBox3d( mBbox );
                        }
                        else if ( values.size() == 6 ) // with zmin at [2] and zmax at [5]
                        {
                            if ( firstBbox )
                            {
                                mBbox.set( values[0], values[1], values[3], values[4] );
                            }
                            spatialExtent.bounds = QgsBox3d( values[0], values[1], values[2],
                                                            values[3], values[4], values[5] );
                        }
                        if ( values.size() == 4 || values.size() == 6 )
                        {
                            spatialExtents << spatialExtent;
                            firstBbox = false;
                        }
                    }
                }
            }
            metadataExtent.setSpatialExtents( spatialExtents );
        }
#ifndef REMOVE_SUPPORT_DRAFT_VERSIONS
        const auto bbox = extent["bbox"];
        if ( QgsJsonUtils::is_array(bbox) )
        {
            auto bboxA = bbox.ToArray();
            if(bboxA.Size() == 4 )
            {
                std::vector<double> values;
                for ( int i = 0; i < bboxA.Size(); i++ )
                {
                    values.push_back( bboxA[i].ToDouble() );
                }
                if ( values.size() == 4 )
                {
                    mBbox.set( values[0], values[1], values[2], values[3] );
                    QgsLayerMetadata::SpatialExtent spatialExtent;
                    spatialExtent.extentCrs = QgsCoordinateReferenceSystem::fromOgcWmsCrs(
                                                QStringLiteral( "http://www.opengis.net/def/crs/OGC/1.3/CRS84" ) );
                    mLayerMetadata.setCrs( spatialExtent.extentCrs );
                    metadataExtent.setSpatialExtents( QList<  QgsLayerMetadata::SpatialExtent >() << spatialExtent );
                }
            }
        }
#endif

        const auto temporal = extent["temporal"];
        if ( QgsJsonUtils::is_object(temporal) )
        {
            const auto jIntervals = temporal["interval"];
            if ( QgsJsonUtils::is_array(jIntervals) )
            {
                QList< QgsDateTimeRange > temporalExtents;
                for ( const auto &jInterval : jIntervals.ToArray() )
                {
                    if ( QgsJsonUtils::is_array(jInterval) )
                    {
                        auto jIntervalA = jInterval.ToArray();
                        if(jIntervalA.Size() == 2)
                        {
                            QDateTime dt[2];
                            for ( int i = 0; i < 2; i++ )
                            {
                                if ( jIntervalA[i].IsValid() )
                                {
                                    dt[i] = QDateTime::fromString( QString::fromStdString( jIntervalA[i].ToString() ), Qt::ISODateWithMs );
                                }
                            }
                            if ( !dt[0].isNull() || !dt[1].isNull() )
                            {
                                temporalExtents << QgsDateTimeRange( dt[0], dt[1] );
                            }
                        }
                    }
                }
                metadataExtent.setTemporalExtents( temporalExtents );
            }
        }
        mLayerMetadata.setExtent( metadataExtent );
    }

    // From STAC specification ( https://stacspec.org/ )
    bool isProprietaryLicense = false;

    const auto jLicense = j["license"];
    if ( jLicense.IsValid() )
    {
        const auto license = QString::fromStdString( jLicense.ToString() );
        if ( license == QLatin1String( "proprietary" ) )
        {
            isProprietaryLicense = true;
        }
        else if ( license != QLatin1String( "various" ) )
        {
            mLayerMetadata.setLicenses( { license } );
        }
    }

    if ( mLayerMetadata.licenses().isEmpty() ) // standard OAPIF
    {
        QStringList licenses;
        std::set<QString> licenseSet;
        for ( const auto &link : links )
        {
            if ( link.rel == QLatin1String( "license" ) )
            {
                const auto license =  !link.title.isEmpty() ? link.title : link.href;
                if ( licenseSet.find( license ) == licenseSet.end() )
                {
                    licenseSet.insert( license );
                    licenses << license;
                }
            }
        }
        if ( licenses.isEmpty() && isProprietaryLicense )
        {
            licenses << QStringLiteral( "proprietary" );
        }
        mLayerMetadata.setLicenses( licenses );
    }

    // From STAC specification
    const auto jKeywords = j["keywords"];
    if ( QgsJsonUtils::is_array(jKeywords) )
    {
        QStringList keywords;
        for ( const auto &jKeyword : jKeywords.ToArray() )
        {
            keywords << QString::fromStdString( jKeyword.ToString() );
        }
        if ( !keywords.empty() )
        {
            mLayerMetadata.addKeywords( QStringLiteral( "keywords" ), keywords );
        }
    }

    return true;
}

// -----------------------------------------

QgsOapifCollectionsRequest::QgsOapifCollectionsRequest( const QgsDataSourceUri &baseUri, const QString &url ):
  QgsBaseNetworkRequest( QgsAuthorizationSettings( baseUri.username(), baseUri.password(), baseUri.authConfigId() ), tr( "OAPIF" ) ),
  mUrl( url )
{
  // Using Qt::DirectConnection since the download might be running on a different thread.
  // In this case, the request was sent from the main thread and is executed with the main
  // thread being blocked in future.waitForFinished() so we can run code on this object which
  // lives in the main thread without risking havoc.
  connect( this, &QgsBaseNetworkRequest::downloadFinished, this, &QgsOapifCollectionsRequest::processReply, Qt::DirectConnection );
}

bool QgsOapifCollectionsRequest::request( bool synchronous, bool forceRefresh )
{
  if ( !sendGET( QUrl( mUrl ), QStringLiteral( "application/json" ), synchronous, forceRefresh ) )
  {
    emit gotResponse();
    return false;
  }
  return true;
}

QString QgsOapifCollectionsRequest::errorMessageWithReason( const QString &reason )
{
  return tr( "Download of collections description failed: %1" ).arg( reason );
}

void QgsOapifCollectionsRequest::processReply()
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

  QgsDebugMsgLevel( QStringLiteral( "parsing collections response: " ) + buffer, 4 );

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
    const json j = QgsJsonUtils::parse( utf8Text.toStdString(), error );
    if( !error.isEmpty() )
    {
        mErrorCode = QgsBaseNetworkRequest::ApplicationLevelError;
        mAppLevelError = ApplicationLevelError::JsonError;
        mErrorMessage = errorMessageWithReason( tr( "Cannot decode JSON document: %1" ).arg( error ) );
        emit gotResponse();
        return;
    }

    const auto links = QgsOAPIFJson::parseLinks( j );
    QStringList licenses;
    std::set<QString> licenseSet;
    for ( const auto &link : links )
    {
        if ( link.rel == QLatin1String( "license" ) )
        {
            const auto license =  !link.title.isEmpty() ? link.title : link.href;
            if ( licenseSet.find( license ) == licenseSet.end() )
            {
                licenseSet.insert( license );
                licenses << license;
            }
        }
    }

    if ( QgsJsonUtils::is_object(j) )
    {
        const auto collections = j["collections"];
        if ( QgsJsonUtils::is_array(collections) )
        {
            for ( const auto &jCollection : collections.ToArray() )
            {
                QgsOapifCollection collection;
                if ( collection.deserialize( jCollection ) )
                {
                    if ( collection.mLayerMetadata.licenses().isEmpty() )
                    {
                        // If there are not licenses from the collection description,
                        // use the one from the collection set.
                        collection.mLayerMetadata.setLicenses( licenses );
                    }
                    mCollections.emplace_back( collection );
                }
            }
        }
    }

    // Paging informal extension used by api.planet.com/
    mNextUrl = QgsOAPIFJson::findLink( links,
                                       QStringLiteral( "next" ),
    {  QStringLiteral( "application/json" ) } );

    emit gotResponse();
}

// -----------------------------------------

QgsOapifCollectionRequest::QgsOapifCollectionRequest( const QgsDataSourceUri &baseUri, const QString &url ):
  QgsBaseNetworkRequest( QgsAuthorizationSettings( baseUri.username(), baseUri.password(), baseUri.authConfigId() ), tr( "OAPIF" ) ),
  mUrl( url )
{
  // Using Qt::DirectConnection since the download might be running on a different thread.
  // In this case, the request was sent from the main thread and is executed with the main
  // thread being blocked in future.waitForFinished() so we can run code on this object which
  // lives in the main thread without risking havoc.
  connect( this, &QgsBaseNetworkRequest::downloadFinished, this, &QgsOapifCollectionRequest::processReply, Qt::DirectConnection );
}

bool QgsOapifCollectionRequest::request( bool synchronous, bool forceRefresh )
{
  if ( !sendGET( QUrl( mUrl ), QStringLiteral( "application/json" ), synchronous, forceRefresh ) )
  {
    emit gotResponse();
    return false;
  }
  return true;
}

QString QgsOapifCollectionRequest::errorMessageWithReason( const QString &reason )
{
  return tr( "Download of collection description failed: %1" ).arg( reason );
}

void QgsOapifCollectionRequest::processReply()
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

  QgsDebugMsgLevel( QStringLiteral( "parsing collection response: " ) + buffer, 4 );

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
    const json j = QgsJsonUtils::parse( utf8Text.toStdString(), error );
    mCollection.deserialize( j );

    if(error.isEmpty())
    {
        mErrorCode = QgsBaseNetworkRequest::ApplicationLevelError;
        mAppLevelError = ApplicationLevelError::JsonError;
        mErrorMessage = errorMessageWithReason( tr( "Cannot decode JSON document: %1" ).arg( error ) );
        emit gotResponse();
        return;
    }

    emit gotResponse();
}
