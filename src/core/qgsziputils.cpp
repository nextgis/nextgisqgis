/***************************************************************************
                            qgsziputils.cpp
                          ---------------------
    begin                : Jul 2017
    copyright            : (C) 2017 by Paul Blottiere
    email                : paul.blottiere@oslandia.com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <fstream>

#include <QFileInfo>
#include <QDir>

#include "zip.h"

#include "qgsmessagelog.h"
#include "qgsziputils.h"
#include "qgslogger.h"

#include <iostream>

bool QgsZipUtils::isZipFile( const QString &filename )
{
  return QFileInfo( filename ).suffix().compare( QLatin1String( "qgz" ), Qt::CaseInsensitive ) == 0;
}

bool QgsZipUtils::unzip( const QString &zipFilename, const QString &dir, QStringList &files )
{
  files.clear();

  if ( !QFileInfo::exists( zipFilename ) )
  {
    QgsMessageLog::logMessage( QObject::tr( "Error zip file does not exist: '%1'" ).arg( zipFilename ) );
    return false;
  }
  else if ( zipFilename.isEmpty() )
  {
    QgsMessageLog::logMessage( QObject::tr( "Error zip filename is empty" ) );
    return false;
  }
  else if ( !QDir( dir ).exists( dir ) )
  {
    QgsMessageLog::logMessage( QObject::tr( "Error output dir does not exist: '%1'" ).arg( dir ) );
    return false;
  }
  else if ( !QFileInfo( dir ).isDir() )
  {
    QgsMessageLog::logMessage( QObject::tr( "Error output dir is not a directory: '%1'" ).arg( dir ) );
    return false;
  }
  else if ( !QFileInfo( dir ).isWritable() )
  {
    QgsMessageLog::logMessage( QObject::tr( "Error output dir is not writable: '%1'" ).arg( dir ) );
    return false;
  }

  int rc = 0;
  const QByteArray fileNamePtr = zipFilename.toUtf8();
  struct zip *z = zip_open( fileNamePtr.constData(), ZIP_CHECKCONS, &rc );

  if ( rc == ZIP_ER_OK && z )
  {
    const int count = zip_get_num_files( z );
    if ( count != -1 )
    {
      struct zip_stat stat;

      for ( int i = 0; i < count; i++ )
      {
        zip_stat_index( z, i, 0, &stat );
        const size_t len = stat.size;

        struct zip_file *file = zip_fopen_index( z, i, 0 );
        const std::unique_ptr< char[] > buf( new char[len] );
        if ( zip_fread( file, buf.get(), len ) != -1 )
        {
          const QString fileName( stat.name );
          const QFileInfo newFile( QDir( dir ), fileName );

          // Create path for a new file if it does not exist.
          if ( !newFile.absoluteDir().exists() )
          {
            if ( !QDir( dir ).mkpath( newFile.absolutePath() ) )
              QgsMessageLog::logMessage( QObject::tr( "Failed to create a subdirectory %1/%2" ).arg( dir ).arg( fileName ) );
          }

          QFile outFile( newFile.absoluteFilePath() );
          if ( !outFile.open( QIODevice::WriteOnly | QIODevice::Truncate ) )
          {
            QgsMessageLog::logMessage( QObject::tr( "Could not write to %1" ).arg( newFile.absoluteFilePath() ) );
          }
          else
          {
            outFile.write( buf.get(), len );
          }
          zip_fclose( file );
          files.append( newFile.absoluteFilePath() );
        }
        else
        {
          zip_fclose( file );
          QgsMessageLog::logMessage( QObject::tr( "Error reading file: '%1'" ).arg( zip_strerror( z ) ) );
          return false;
        }
      }
    }
    else
    {
      zip_close( z );
      QgsMessageLog::logMessage( QObject::tr( "Error getting files: '%1'" ).arg( zip_strerror( z ) ) );
      return false;
    }

    zip_close( z );
  }
  else
  {
    QgsMessageLog::logMessage( QObject::tr( "Error opening zip archive: '%1' (Error code: %2)" ).arg( z ? zip_strerror( z ) : zipFilename ).arg( rc ) );
    return false;
  }

  return true;
}

bool QgsZipUtils::zip( const QString &zipFilename, const QStringList &files )
{
  if ( zipFilename.isEmpty() )
  {
    QgsMessageLog::logMessage( QObject::tr( "Error zip filename is empty" ) );
    return false;
  }

  int rc = 0;
  const QByteArray zipFileNamePtr = zipFilename.toUtf8();
  struct zip *z = zip_open( zipFileNamePtr.constData(), ZIP_CREATE, &rc );

  if ( rc == ZIP_ER_OK && z )
  {
    for ( const auto &file : files )
    {
      const QFileInfo fileInfo( file );
      if ( !fileInfo.exists() )
      {
        QgsMessageLog::logMessage( QObject::tr( "Error input file does not exist: '%1'" ).arg( file ) );
        zip_close( z );
        return false;
      }

      const QByteArray fileNamePtr = file.toUtf8();
      zip_source *src = zip_source_file( z, fileNamePtr.constData(), 0, 0 );
      if ( src )
      {
        const QByteArray fileInfoPtr = fileInfo.fileName().toUtf8();
#if LIBZIP_VERSION_MAJOR < 1
        rc = ( int ) zip_add( z, fileInfoPtr.constData(), src );
#else
        rc = ( int ) zip_file_add( z, fileInfoPtr.constData(), src, 0 );
#endif
        if ( rc == -1 )
        {
          QgsMessageLog::logMessage( QObject::tr( "Error adding file '%1': %2" ).arg( file, zip_strerror( z ) ) );
          zip_close( z );
          return false;
        }
      }
      else
      {
        QgsMessageLog::logMessage( QObject::tr( "Error creating data source '%1': %2" ).arg( file, zip_strerror( z ) ) );
        zip_close( z );
        return false;
      }
    }

    zip_close( z );
  }
  else
  {
    QgsMessageLog::logMessage( QObject::tr( "Error creating zip archive '%1': %2" ).arg( zipFilename, zip_strerror( z ) ) );
    return false;
  }

  return true;
}
