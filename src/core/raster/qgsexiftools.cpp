/***************************************************************************
  qgisexiftools.cpp
  -----------------
  Date                 : November 2018
  Copyright            : (C) 2018 by Nyall Dawson
  Email                : nyall dot dawson at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsexiftools.h"
#include "qgspoint.h"

// #include <exiv2/exiv2.hpp>
#include "cpl_string.h"
#include "gdal_priv.h"

#include <QDate>
#include <QRegularExpression>
#include <QFileInfo>
#include <QTime>


double readCoordinate( const std::string &value )
{
    //EXIF_GPSLatitude=(50) (49) (8.592)
  double res = 0;
  double div = 1;
  CPLString localVal(value);
  localVal.replaceAll('(', "");
  localVal.replaceAll(')', "");
  CPLStringList parts( CSLTokenizeString2( localVal, " ", CSLT_STRIPLEADSPACES | CSLT_STRIPENDSPACES ), TRUE );

  for ( int i = 0; i < parts.size(); i++ )
  {
    res += atof( parts[i] ) / div;
    div *= 60;
  }
  return res;
};

QVariant decodeExifData( const QString &key, const std::string &value )
{
  QVariant val;

  if ( key == QLatin1String( "Exif_GPSLatitude" ) ||
       key == QLatin1String( "Exif_GPSLongitude" ) ||
       key == QLatin1String( "Exif_GPSDestLatitude" ) ||
       key == QLatin1String( "Exif_GPSDestLongitude" ) )
  {
    val = readCoordinate( value );
  }
  else if ( key == QLatin1String( "Exif_GPSTimeStamp" ) )
  {
    val = QVariant::fromValue( QTime::fromString( QString::fromStdString( value ), QLatin1String( "hh:mm:ss" ) ) );
  }
  else if ( key == QLatin1String( "Exif_GPSDateStamp" ) )
  {
    val = QVariant::fromValue( QDate::fromString( QString::fromStdString( value ), QLatin1String( "yyyy:MM:dd" ) ) );
  }
  else if ( key == QLatin1String( "Exif_DateTime" ) ||
            key == QLatin1String( "Exif_DateTime" ) ||
            key == QLatin1String( "Exif_DateTimeDigitized" ) ||
            key == QLatin1String( "Exif_DateTimeOriginal" ) )
  {
    val = QVariant::fromValue( QDateTime::fromString( QString::fromStdString( value ), QLatin1String( "yyyy:MM:dd hh:mm:ss" ) ) );
  }
  else
  {
/*    switch ( it->typeId() )
    {
      case Exiv2::asciiString:
      case Exiv2::string:
      case Exiv2::comment:
      case Exiv2::directory:
      case Exiv2::xmpText:
        val = QString::fromStdString( it->toString() );
        break;

      case Exiv2::unsignedLong:
      case Exiv2::signedLong:
      case Exiv2::unsignedLongLong:
      case Exiv2::signedLongLong:
        val = QVariant::fromValue( it->toLong() );
        break;

      case Exiv2::tiffDouble:
      case Exiv2::tiffFloat:
        val = QVariant::fromValue( it->toFloat() );
        break;

      case Exiv2::unsignedShort:
      case Exiv2::signedShort:
      case Exiv2::unsignedByte:
      case Exiv2::signedByte:
      case Exiv2::tiffIfd:
      case Exiv2::tiffIfd8:
        val = QVariant::fromValue( static_cast< int >( it->toLong() ) );
        break;

      case Exiv2::date:
      {
        const Exiv2::DateValue::Date date = static_cast< const Exiv2::DateValue *>( &it->value() )->getDate();
        val = QVariant::fromValue( QDate::fromString( QStringLiteral( "%1-%2-%3" ).arg( date.year )
                                   .arg( QString::number( date.month ).rightJustified( 2, '0' ) )
                                   .arg( QString::number( date.day ).rightJustified( 2, '0' ) ), QLatin1String( "yyyy-MM-dd" ) ) );
        break;
      }

      case Exiv2::time:
      {
        const Exiv2::TimeValue::Time time = static_cast< const Exiv2::TimeValue *>( &it->value() )->getTime();
        val = QVariant::fromValue( QTime::fromString( QStringLiteral( "%1:%2:%3" ).arg( QString::number( time.hour ).rightJustified( 2, '0' ) )
                                   .arg( QString::number( time.minute ).rightJustified( 2, '0' ) )
                                   .arg( QString::number( time.second ).rightJustified( 2, '0' ) ), QLatin1String( "hh:mm:ss" ) ) );
        break;
      }

      case Exiv2::unsignedRational:
      case Exiv2::signedRational:
      {
        if ( it->count() == 1 )
        {
          val = QVariant::fromValue( readRationale( value ) );
        }
        else
        {
          val = QString::fromStdString( value );
        }
        break;
      }

      case Exiv2::undefined:
      case Exiv2::xmpAlt:
      case Exiv2::xmpBag:
      case Exiv2::xmpSeq:
      case Exiv2::langAlt:
      case Exiv2::invalidTypeId:
      case Exiv2::lastTypeId:
        val = QString::fromStdString( value );
        break;

    }*/
    val = QString::fromStdString( value );
  }
  return val;
}

QString doubleToExifCoordinateString( const double val )
{
  const double d = std::abs( val );
  const int degrees = static_cast< int >( std::floor( d ) );
  const double m = 60 * ( d - degrees );
  const int minutes = static_cast< int >( std::floor( m ) );
  const double s = 60 * ( m - minutes );
  return QStringLiteral( "%1 %2 %3" ).arg( degrees ).arg( minutes ).arg( s );
}

QVariant QgsExifTools::readTag( const QString &imagePath, const QString &key )
{
    if ( !QFileInfo::exists( imagePath ) )
        return QVariant();

    QVariant res;
    GDALDataset *ds = reinterpret_cast<GDALDataset*>(
        GDALOpenEx(imagePath.toStdString().c_str(),
            GDAL_OF_RASTER | GDAL_OF_SHARED | GDAL_OF_READONLY | GDAL_OF_VERBOSE_ERROR,
            nullptr, nullptr, nullptr));
    if (ds == nullptr)
    {
        return res;
    }

    CPLStringList metadata( ds->GetMetadata(), TRUE );
    return decodeExifData( key, metadata[key.toUtf8().constData()] );
}

QVariantMap QgsExifTools::readTags( const QString &imagePath )
{
    if ( !QFileInfo::exists( imagePath ) )
        return QVariantMap();

    QVariantMap res;
    GDALDataset *ds = reinterpret_cast<GDALDataset*>(
        GDALOpenEx(imagePath.toStdString().c_str(),
            GDAL_OF_RASTER | GDAL_OF_SHARED | GDAL_OF_READONLY | GDAL_OF_VERBOSE_ERROR,
            nullptr, nullptr, nullptr));
    if (ds == nullptr)
    {
        return res;
    }
    CPLStringList metadata( ds->GetMetadata(), TRUE );
    for(int i = 0; i < metadata.size(); i++)
    {
        char *pszKey = nullptr;
        const char *pszValue = CPLParseNameValue( metadata[i], &pszKey );
        if( pszKey )
        {
            const QString key = QString::fromStdString( pszKey );
            res.insert( key, decodeExifData( key, pszValue ) );
            CPLFree( pszKey );
        }
        
    }
    return res;
}

bool QgsExifTools::hasGeoTag( const QString &imagePath )
{
  bool ok = false;
  QgsExifTools::getGeoTag( imagePath, ok );
  return ok;
}

QgsPoint QgsExifTools::getGeoTag( const QString &imagePath, bool &ok )
{
    ok = false;
    if ( !QFileInfo::exists( imagePath ) )
        return QgsPoint();

    GDALDataset *ds = reinterpret_cast<GDALDataset*>(
        GDALOpenEx(imagePath.toStdString().c_str(),
            GDAL_OF_RASTER | GDAL_OF_SHARED | GDAL_OF_READONLY | GDAL_OF_VERBOSE_ERROR,
            nullptr, nullptr, nullptr));
    if (ds == nullptr)
    {
        return QgsPoint();
    }

    CPLStringList metadata( ds->GetMetadata(), TRUE );
    auto latitudeRef = metadata["Exif_GPSLatitudeRef"];
    if(latitudeRef == nullptr)
    {
        return QgsPoint();
    }
    auto latitude = metadata["Exif_GPSLatitude"];
    if(latitude == nullptr)
    {
        return QgsPoint();
    }
    auto longitudeRef = metadata["Exif_GPSLongitudeRef"];
    if(longitudeRef == nullptr)
    {
        return QgsPoint();
    }
    auto longitude = metadata["Exif_GPSLongitude"];
    if(longitude == nullptr)
    {
        return QgsPoint();
    }
    double lat = readCoordinate( latitude );
    double lon = readCoordinate( longitude );
    const QString latRef = QString::fromStdString( latitudeRef );
    const QString lonRef = QString::fromStdString( longitudeRef );

    if ( latRef.compare( QLatin1String( "S" ), Qt::CaseInsensitive ) == 0 )
    {
      lat *= -1;
    }
    if ( lonRef.compare( QLatin1String( "W" ), Qt::CaseInsensitive ) == 0 )
    {
      lon *= -1;
    }

    ok = true;

    auto elevVal = metadata["Exif_GPSAltitude"];
    auto elevRefVal = metadata["Exif_GPSAltitudeRef"];

    if ( elevVal != nullptr )
    {
      double elev = atof( elevVal );
      if ( elevRefVal != nullptr )
      {
        const QString elevRef = QString::fromStdString( elevRefVal );
        if ( elevRef.compare( QLatin1String( "1" ), Qt::CaseInsensitive ) == 0 )
        {
          elev *= -1;
        }
      }
      return QgsPoint( lon, lat, elev );
    }
    else
    {
      return QgsPoint( lon, lat );
    }
}

bool QgsExifTools::geoTagImage( const QString &imagePath, const QgsPointXY &location, const GeoTagDetails &details )
{
    GDALDataset *ds = reinterpret_cast<GDALDataset*>(
        GDALOpenEx(imagePath.toStdString().c_str(),
            GDAL_OF_RASTER | GDAL_OF_SHARED | GDAL_OF_UPDATE | GDAL_OF_VERBOSE_ERROR,
            nullptr, nullptr, nullptr));
    if (ds == nullptr)
    {
        return false;
    }
    if (ds->SetMetadataItem("EXIF_GPSVersionID", "0200", nullptr) >= CE_Failure)
    {
        return false;
    }
    if (ds->SetMetadataItem("EXIF_GPSMapDatum", "WGS-84", nullptr) >= CE_Failure)
    {
        return false;
    }
    if (ds->SetMetadataItem("EXIF_GPSLatitude", doubleToExifCoordinateString( location.y() ).toStdString().c_str(), nullptr) >= CE_Failure)
    {
        return false;
    }
    if (ds->SetMetadataItem("EXIF_GPSLongitude", doubleToExifCoordinateString( location.x() ).toStdString().c_str(), nullptr) >= CE_Failure)
    {
        return false;
    }
    if ( !std::isnan( details.elevation ) )
    {
        const QString elevationString = QStringLiteral( "%1/1000" ).arg( static_cast< int>( std::floor( std::abs( details.elevation ) * 1000 ) ) );
        if (ds->SetMetadataItem("EXIF_GPSAltitude", elevationString.toStdString().c_str(), nullptr) >= CE_Failure)
        {
            return false;
        }
        if (ds->SetMetadataItem("EXIF_GPSAltitudeRef", details.elevation < 0.0 ? "1" : "0", nullptr) >= CE_Failure)
        {
            return false;
        }
    }
    if (ds->SetMetadataItem("EXIF_GPSLatitudeRef", location.y() > 0 ? "N" : "S", nullptr) >= CE_Failure)
    {
        return false;
    }
    if (ds->SetMetadataItem("EXIF_GPSLongitudeRef", location.x() > 0 ? "E" : "W", nullptr) >= CE_Failure)
    {
        return false;
    }
    if (ds->SetMetadataItem("EXIF_GPSTag", "4908", nullptr) >= CE_Failure)
    {
        return false;
    }
    GDALClose(ds);

  return true;
}
