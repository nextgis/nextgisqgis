/***************************************************************************
                              qgssvgcache.h
                            ------------------------------
  begin                :  2011
  copyright            : (C) 2011 by Marco Hugentobler
  email                : marco dot hugentobler at sourcepole dot ch
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgssvgcache.h"
#include "qgis.h"
#include "qgslogger.h"
#include "qgsnetworkaccessmanager.h"
#include "qgsmessagelog.h"
#include "qgssymbollayerv2utils.h"

#include <QApplication>
#include <QCoreApplication>
#include <QCursor>
#include <QDomDocument>
#include <QDomElement>
#include <QFile>
#include <QImage>
#include <QPainter>
#include <QPicture>
#include <QSvgRenderer>
#include <QFileInfo>
#include <QNetworkReply>
#include <QNetworkRequest>

QgsSvgCacheEntry::QgsSvgCacheEntry()
    : file( QString() )
    , size( 0.0 )
    , outlineWidth( 0 )
    , widthScaleFactor( 1.0 )
    , rasterScaleFactor( 1.0 )
    , fill( Qt::black )
    , outline( Qt::black )
    , image( nullptr )
    , picture( nullptr )
    , nextEntry( nullptr )
    , previousEntry( nullptr )
{
}

QgsSvgCacheEntry::QgsSvgCacheEntry( const QString& f, double s, double ow, double wsf, double rsf, const QColor& fi, const QColor& ou, const QString& lk )
    : file( f )
    , lookupKey( lk.isEmpty() ? f : lk )
    , size( s )
    , outlineWidth( ow )
    , widthScaleFactor( wsf )
    , rasterScaleFactor( rsf )
    , fill( fi )
    , outline( ou )
    , image( nullptr )
    , picture( nullptr )
    , nextEntry( nullptr )
    , previousEntry( nullptr )
{
}


QgsSvgCacheEntry::~QgsSvgCacheEntry()
{
  delete image;
  delete picture;
}

bool QgsSvgCacheEntry::operator==( const QgsSvgCacheEntry& other ) const
{
  return other.file == file && qgsDoubleNear( other.size, size ) && qgsDoubleNear( other.outlineWidth, outlineWidth ) && qgsDoubleNear( other.widthScaleFactor, widthScaleFactor )
         && qgsDoubleNear( other.rasterScaleFactor, rasterScaleFactor ) && other.fill == fill && other.outline == outline;
}

int QgsSvgCacheEntry::dataSize() const
{
  int size = svgContent.size();
  if ( picture )
  {
    size += picture->size();
  }
  if ( image )
  {
    size += ( image->width() * image->height() * 32 );
  }
  return size;
}

QgsSvgCache* QgsSvgCache::instance()
{
  static QgsSvgCache mInstance;
  return &mInstance;
}

QgsSvgCache::QgsSvgCache( QObject *parent )
    : QObject( parent )
    , mTotalSize( 0 )
    , mLeastRecentEntry( nullptr )
    , mMostRecentEntry( nullptr )
{
  mMissingSvg = QString( "<svg width='10' height='10'><text x='5' y='10' font-size='10' text-anchor='middle'>?</text></svg>" ).toAscii();
}

QgsSvgCache::~QgsSvgCache()
{
  qDeleteAll( mEntryLookup );
}


const QImage& QgsSvgCache::svgAsImage( const QString& file, double size, const QColor& fill, const QColor& outline, double outlineWidth,
                                       double widthScaleFactor, double rasterScaleFactor, bool& fitsInCache )
{
  QMutexLocker locker( &mMutex );

  fitsInCache = true;
  QgsSvgCacheEntry* currentEntry = cacheEntry( file, size, fill, outline, outlineWidth, widthScaleFactor, rasterScaleFactor );

  //if current entry image is 0: cache image for entry
  // checks to see if image will fit into cache
  //update stats for memory usage
  if ( !currentEntry->image )
  {
    QSvgRenderer r( currentEntry->svgContent );
    double hwRatio = 1.0;
    if ( r.viewBoxF().width() > 0 )
    {
      hwRatio = r.viewBoxF().height() / r.viewBoxF().width();
    }
    long cachedDataSize = 0;
    cachedDataSize += currentEntry->svgContent.size();
    cachedDataSize += static_cast< int >( currentEntry->size * currentEntry->size * hwRatio * 32 );
    if ( cachedDataSize > mMaximumSize / 2 )
    {
      fitsInCache = false;
      delete currentEntry->image;
      currentEntry->image = nullptr;
      //currentEntry->image = new QImage( 0, 0 );

      // instead cache picture
      if ( !currentEntry->picture )
      {
        cachePicture( currentEntry, false );
      }
    }
    else
    {
      cacheImage( currentEntry );
    }
    trimToMaximumSize();
  }

  return *( currentEntry->image );
}

QPicture QgsSvgCache::svgAsPicture( const QString& file, double size, const QColor& fill, const QColor& outline, double outlineWidth,
    double widthScaleFactor, double rasterScaleFactor, bool forceVectorOutput )
{
  QMutexLocker locker( &mMutex );

  QgsSvgCacheEntry* currentEntry = cacheEntry( file, size, fill, outline, outlineWidth, widthScaleFactor, rasterScaleFactor );

  //if current entry picture is 0: cache picture for entry
  //update stats for memory usage
  if ( !currentEntry->picture )
  {
    cachePicture( currentEntry, forceVectorOutput );
    trimToMaximumSize();
  }

  QPicture p;
  // For some reason p.detach() doesn't seem to always work as intended, at
  // least with QT 5.5 on Ubuntu 16.04
  // Serialization/deserialization is a safe way to be ensured we don't
  // share a copy.
  p.setData( currentEntry->picture->data(), currentEntry->picture->size() );
  return p;
}

const QByteArray& QgsSvgCache::svgContent( const QString& file, double size, const QColor& fill, const QColor& outline, double outlineWidth,
    double widthScaleFactor, double rasterScaleFactor )
{
  QMutexLocker locker( &mMutex );

  QgsSvgCacheEntry *currentEntry = cacheEntry( file, size, fill, outline, outlineWidth, widthScaleFactor, rasterScaleFactor );

  return currentEntry->svgContent;
}

QSizeF QgsSvgCache::svgViewboxSize( const QString& file, double size, const QColor& fill, const QColor& outline, double outlineWidth, double widthScaleFactor, double rasterScaleFactor )
{
  QMutexLocker locker( &mMutex );

  QgsSvgCacheEntry *currentEntry = cacheEntry( file, size, fill, outline, outlineWidth, widthScaleFactor, rasterScaleFactor );

  return currentEntry->viewboxSize;
}

QgsSvgCacheEntry* QgsSvgCache::insertSVG( const QString& file, double size, const QColor& fill, const QColor& outline, double outlineWidth,
    double widthScaleFactor, double rasterScaleFactor )
{
  // The file may be relative path (e.g. if path is data defined)
  QString path = QgsSymbolLayerV2Utils::symbolNameToPath( file );

  QgsSvgCacheEntry* entry = new QgsSvgCacheEntry( path, size, outlineWidth, widthScaleFactor, rasterScaleFactor, fill, outline, file );

  replaceParamsAndCacheSvg( entry );

  mEntryLookup.insert( file, entry );

  //insert to most recent place in entry list
  if ( !mMostRecentEntry ) //inserting first entry
  {
    mLeastRecentEntry = entry;
    mMostRecentEntry = entry;
    entry->previousEntry = nullptr;
    entry->nextEntry = nullptr;
  }
  else
  {
    entry->previousEntry = mMostRecentEntry;
    entry->nextEntry = nullptr;
    mMostRecentEntry->nextEntry = entry;
    mMostRecentEntry = entry;
  }

  trimToMaximumSize();
  return entry;
}

void QgsSvgCache::containsParams( const QString& path, bool& hasFillParam, QColor& defaultFillColor, bool& hasOutlineParam, QColor& defaultOutlineColor,
                                  bool& hasOutlineWidthParam, double& defaultOutlineWidth ) const
{
  bool hasDefaultFillColor = false;
  bool hasFillOpacityParam = false;
  bool hasDefaultFillOpacity = false;
  double defaultFillOpacity = 1.0;
  bool hasDefaultOutlineColor = false;
  bool hasDefaultOutlineWidth = false;
  bool hasOutlineOpacityParam = false;
  bool hasDefaultOutlineOpacity = false;
  double defaultOutlineOpacity = 1.0;

  containsParams( path, hasFillParam, hasDefaultFillColor, defaultFillColor,
                  hasFillOpacityParam, hasDefaultFillOpacity, defaultFillOpacity,
                  hasOutlineParam, hasDefaultOutlineColor, defaultOutlineColor,
                  hasOutlineWidthParam, hasDefaultOutlineWidth, defaultOutlineWidth,
                  hasOutlineOpacityParam, hasDefaultOutlineOpacity, defaultOutlineOpacity );
}


void QgsSvgCache::containsParams( const QString& path,
                                  bool& hasFillParam, bool& hasDefaultFillParam, QColor& defaultFillColor,
                                  bool& hasOutlineParam, bool& hasDefaultOutlineColor, QColor& defaultOutlineColor,
                                  bool& hasOutlineWidthParam, bool& hasDefaultOutlineWidth, double& defaultOutlineWidth ) const
{
  bool hasFillOpacityParam = false;
  bool hasDefaultFillOpacity = false;
  double defaultFillOpacity = 1.0;
  bool hasOutlineOpacityParam = false;
  bool hasDefaultOutlineOpacity = false;
  double defaultOutlineOpacity = 1.0;

  containsParams( path, hasFillParam, hasDefaultFillParam, defaultFillColor,
                  hasFillOpacityParam, hasDefaultFillOpacity, defaultFillOpacity,
                  hasOutlineParam, hasDefaultOutlineColor, defaultOutlineColor,
                  hasOutlineWidthParam, hasDefaultOutlineWidth, defaultOutlineWidth,
                  hasOutlineOpacityParam, hasDefaultOutlineOpacity, defaultOutlineOpacity );
}

void QgsSvgCache::containsParams( const QString& path,
                                  bool& hasFillParam, bool& hasDefaultFillParam, QColor& defaultFillColor,
                                  bool& hasFillOpacityParam, bool& hasDefaultFillOpacity, double& defaultFillOpacity,
                                  bool& hasOutlineParam, bool& hasDefaultOutlineColor, QColor& defaultOutlineColor,
                                  bool& hasOutlineWidthParam, bool& hasDefaultOutlineWidth, double& defaultOutlineWidth,
                                  bool& hasOutlineOpacityParam, bool& hasDefaultOutlineOpacity, double& defaultOutlineOpacity ) const
{
  hasFillParam = false;
  hasFillOpacityParam = false;
  hasOutlineParam = false;
  hasOutlineWidthParam = false;
  hasOutlineOpacityParam = false;
  defaultFillColor = QColor( Qt::white );
  defaultFillOpacity = 1.0;
  defaultOutlineColor = QColor( Qt::black );
  defaultOutlineWidth = 0.2;
  defaultOutlineOpacity = 1.0;

  hasDefaultFillParam = false;
  hasDefaultFillOpacity = false;
  hasDefaultOutlineColor = false;
  hasDefaultOutlineWidth = false;
  hasDefaultOutlineOpacity = false;

  QDomDocument svgDoc;
  if ( !svgDoc.setContent( getImageData( path ) ) )
  {
    return;
  }

  QDomElement docElem = svgDoc.documentElement();
  containsElemParams( docElem, hasFillParam, hasDefaultFillParam, defaultFillColor,
                      hasFillOpacityParam, hasDefaultFillOpacity, defaultFillOpacity,
                      hasOutlineParam, hasDefaultOutlineColor, defaultOutlineColor,
                      hasOutlineWidthParam, hasDefaultOutlineWidth, defaultOutlineWidth,
                      hasOutlineOpacityParam, hasDefaultOutlineOpacity, defaultOutlineOpacity );
}

void QgsSvgCache::replaceParamsAndCacheSvg( QgsSvgCacheEntry* entry )
{
  if ( !entry )
  {
    return;
  }

  QDomDocument svgDoc;
  if ( !svgDoc.setContent( getImageData( entry->file ) ) )
  {
    return;
  }

  //replace fill color, outline color, outline with in all nodes
  QDomElement docElem = svgDoc.documentElement();

  QSizeF viewboxSize;
  double sizeScaleFactor = calcSizeScaleFactor( entry, docElem, viewboxSize );
  entry->viewboxSize = viewboxSize;
  replaceElemParams( docElem, entry->fill, entry->outline, entry->outlineWidth * sizeScaleFactor );

  entry->svgContent = svgDoc.toByteArray( 0 );

  // toByteArray screws up tspans inside text by adding new lines before and after each span... this should help, at the
  // risk of potentially breaking some svgs where the newline is desired
  entry->svgContent.replace( "\n<tspan", "<tspan" );
  entry->svgContent.replace( "</tspan>\n", "</tspan>" );

  mTotalSize += entry->svgContent.size();
}

double QgsSvgCache::calcSizeScaleFactor( QgsSvgCacheEntry* entry, const QDomElement& docElem, QSizeF& viewboxSize ) const
{
  QString viewBox;

  //bad size
  if ( !entry || qgsDoubleNear( entry->size, 0.0 ) )
    return 1.0;

  //find svg viewbox attribute
  //first check if docElem is svg element
  if ( docElem.tagName() == "svg" && docElem.hasAttribute( "viewBox" ) )
  {
    viewBox = docElem.attribute( "viewBox", QString() );
  }
  else if ( docElem.tagName() == "svg" && docElem.hasAttribute( "viewbox" ) )
  {
    viewBox = docElem.attribute( "viewbox", QString() );
  }
  else
  {
    QDomElement svgElem = docElem.firstChildElement( "svg" ) ;
    if ( !svgElem.isNull() )
    {
      if ( svgElem.hasAttribute( "viewBox" ) )
        viewBox = svgElem.attribute( "viewBox", QString() );
      else if ( svgElem.hasAttribute( "viewbox" ) )
        viewBox = svgElem.attribute( "viewbox", QString() );
    }
  }

  //could not find valid viewbox attribute
  if ( viewBox.isEmpty() )
    return 1.0;

  //width should be 3rd element in a 4 part space delimited string
  QStringList parts = viewBox.split( ' ' );
  if ( parts.count() != 4 )
    return 1.0;

  bool heightOk = false;
  double height = parts.at( 3 ).toDouble( &heightOk );

  bool widthOk = false;
  double width = parts.at( 2 ).toDouble( &widthOk );
  if ( widthOk )
  {
    if ( heightOk )
      viewboxSize = QSizeF( width, height );
    return width / entry->size;
  }

  return 1.0;
}

QByteArray QgsSvgCache::getImageData( const QString &path ) const
{
  // is it a path to local file?
  QFile svgFile( path );
  if ( svgFile.exists() )
  {
    if ( svgFile.open( QIODevice::ReadOnly ) )
    {
      return svgFile.readAll();
    }
    else
    {
      return mMissingSvg;
    }
  }

  // maybe it's a url...
  if ( !path.contains( "://" ) ) // otherwise short, relative SVG paths might be considered URLs
  {
    return mMissingSvg;
  }

  QUrl svgUrl( path );
  if ( !svgUrl.isValid() )
  {
    return mMissingSvg;
  }

  // check whether it's a url pointing to a local file
  if ( svgUrl.scheme().compare( "file", Qt::CaseInsensitive ) == 0 )
  {
    svgFile.setFileName( svgUrl.toLocalFile() );
    if ( svgFile.exists() )
    {
      if ( svgFile.open( QIODevice::ReadOnly ) )
      {
        return svgFile.readAll();
      }
    }

    // not found...
    return mMissingSvg;
  }

  // the url points to a remote resource, download it!
  QNetworkReply *reply = nullptr;

  // The following code blocks until the file is downloaded...
  // TODO: use signals to get reply finished notification, in this moment
  // it's executed while rendering.
  while ( 1 )
  {
    QgsDebugMsg( QString( "get svg: %1" ).arg( svgUrl.toString() ) );
    QNetworkRequest request( svgUrl );
    request.setAttribute( QNetworkRequest::CacheLoadControlAttribute, QNetworkRequest::PreferCache );
    request.setAttribute( QNetworkRequest::CacheSaveControlAttribute, true );

    reply = QgsNetworkAccessManager::instance()->get( request );
    connect( reply, SIGNAL( downloadProgress( qint64, qint64 ) ), this, SLOT( downloadProgress( qint64, qint64 ) ) );

    //emit statusChanged( tr( "Downloading svg." ) );

    // wait until the image download finished
    // TODO: connect to the reply->finished() signal
    while ( !reply->isFinished() )
    {
      QCoreApplication::processEvents( QEventLoop::ExcludeUserInputEvents, 500 );
    }

    if ( reply->error() != QNetworkReply::NoError )
    {
      QgsMessageLog::logMessage( tr( "SVG request failed [error: %1 - url: %2]" ).arg( reply->errorString(), reply->url().toString() ), tr( "SVG" ) );

      reply->deleteLater();
      return QByteArray();
    }

    QVariant redirect = reply->attribute( QNetworkRequest::RedirectionTargetAttribute );
    if ( redirect.isNull() )
    {
      // neither network error nor redirection
      // TODO: cache the image
      break;
    }

    // do a new request to the redirect url
    svgUrl = redirect.toUrl();
    reply->deleteLater();
  }

  QVariant status = reply->attribute( QNetworkRequest::HttpStatusCodeAttribute );
  if ( !status.isNull() && status.toInt() >= 400 )
  {
    QVariant phrase = reply->attribute( QNetworkRequest::HttpReasonPhraseAttribute );
    QgsMessageLog::logMessage( tr( "SVG request error [status: %1 - reason phrase: %2]" ).arg( status.toInt() ).arg( phrase.toString() ), tr( "SVG" ) );

    reply->deleteLater();
    return mMissingSvg;
  }

  QString contentType = reply->header( QNetworkRequest::ContentTypeHeader ).toString();
  QgsDebugMsg( "contentType: " + contentType );
  if ( !contentType.startsWith( "image/svg+xml", Qt::CaseInsensitive ) )
  {
    reply->deleteLater();
    return mMissingSvg;
  }

  // read the image data
  QByteArray ba = reply->readAll();
  reply->deleteLater();

  return ba;
}

void QgsSvgCache::cacheImage( QgsSvgCacheEntry* entry )
{
  if ( !entry )
  {
    return;
  }

  delete entry->image;
  entry->image = nullptr;

  QSvgRenderer r( entry->svgContent );
  double hwRatio = 1.0;
  if ( r.viewBoxF().width() > 0 )
  {
    hwRatio = r.viewBoxF().height() / r.viewBoxF().width();
  }
  double wSize = entry->size;
  int wImgSize = static_cast< int >( wSize );
  if ( wImgSize < 1 )
  {
    wImgSize = 1;
  }
  double hSize = wSize * hwRatio;
  int hImgSize = static_cast< int >( hSize );
  if ( hImgSize < 1 )
  {
    hImgSize = 1;
  }
  // cast double image sizes to int for QImage
  QImage* image = new QImage( wImgSize, hImgSize, QImage::Format_ARGB32_Premultiplied );
  image->fill( 0 ); // transparent background

  QPainter p( image );
  if ( qgsDoubleNear( r.viewBoxF().width(), r.viewBoxF().height() ) )
  {
    r.render( &p );
  }
  else
  {
    QSizeF s( r.viewBoxF().size() );
    s.scale( wSize, hSize, Qt::KeepAspectRatio );
    QRectF rect(( wImgSize - s.width() ) / 2, ( hImgSize - s.height() ) / 2, s.width(), s.height() );
    r.render( &p, rect );
  }

  entry->image = image;
  mTotalSize += ( image->width() * image->height() * 32 );
}

void QgsSvgCache::cachePicture( QgsSvgCacheEntry *entry, bool forceVectorOutput )
{
  Q_UNUSED( forceVectorOutput );
  if ( !entry )
  {
    return;
  }

  delete entry->picture;
  entry->picture = nullptr;

  //correct QPictures dpi correction
  QPicture* picture = new QPicture();
  QRectF rect;
  QSvgRenderer r( entry->svgContent );
  double hwRatio = 1.0;
  if ( r.viewBoxF().width() > 0 )
  {
    hwRatio = r.viewBoxF().height() / r.viewBoxF().width();
  }

  double wSize = entry->size;
  double hSize = wSize * hwRatio;
  QSizeF s( r.viewBoxF().size() );
  s.scale( wSize, hSize, Qt::KeepAspectRatio );
  rect = QRectF( -s.width() / 2.0, -s.height() / 2.0, s.width(), s.height() );

  QPainter p( picture );
  r.render( &p, rect );
  entry->picture = picture;
  mTotalSize += entry->picture->size();
}

QgsSvgCacheEntry* QgsSvgCache::cacheEntry( const QString& file, double size, const QColor& fill, const QColor& outline, double outlineWidth,
    double widthScaleFactor, double rasterScaleFactor )
{
  //search entries in mEntryLookup
  QgsSvgCacheEntry* currentEntry = nullptr;
  QList<QgsSvgCacheEntry*> entries = mEntryLookup.values( file );

  QList<QgsSvgCacheEntry*>::iterator entryIt = entries.begin();
  for ( ; entryIt != entries.end(); ++entryIt )
  {
    QgsSvgCacheEntry* cacheEntry = *entryIt;
    if ( qgsDoubleNear( cacheEntry->size, size ) && cacheEntry->fill == fill && cacheEntry->outline == outline &&
         qgsDoubleNear( cacheEntry->outlineWidth, outlineWidth ) && qgsDoubleNear( cacheEntry->widthScaleFactor, widthScaleFactor )
         && qgsDoubleNear( cacheEntry->rasterScaleFactor, rasterScaleFactor ) )
    {
      currentEntry = cacheEntry;
      break;
    }
  }

  //if not found: create new entry
  //cache and replace params in svg content
  if ( !currentEntry )
  {
    currentEntry = insertSVG( file, size, fill, outline, outlineWidth, widthScaleFactor, rasterScaleFactor );
  }
  else
  {
    takeEntryFromList( currentEntry );
    if ( !mMostRecentEntry ) //list is empty
    {
      mMostRecentEntry = currentEntry;
      mLeastRecentEntry = currentEntry;
    }
    else
    {
      mMostRecentEntry->nextEntry = currentEntry;
      currentEntry->previousEntry = mMostRecentEntry;
      currentEntry->nextEntry = nullptr;
      mMostRecentEntry = currentEntry;
    }
  }

  //debugging
  //printEntryList();

  return currentEntry;
}

void QgsSvgCache::replaceElemParams( QDomElement& elem, const QColor& fill, const QColor& outline, double outlineWidth )
{
  if ( elem.isNull() )
  {
    return;
  }

  //go through attributes
  QDomNamedNodeMap attributes = elem.attributes();
  int nAttributes = attributes.count();
  for ( int i = 0; i < nAttributes; ++i )
  {
    QDomAttr attribute = attributes.item( i ).toAttr();
    //e.g. style="fill:param(fill);param(stroke)"
    if ( attribute.name().compare( "style", Qt::CaseInsensitive ) == 0 )
    {
      //entries separated by ';'
      QString newAttributeString;

      QStringList entryList = attribute.value().split( ';' );
      QStringList::const_iterator entryIt = entryList.constBegin();
      for ( ; entryIt != entryList.constEnd(); ++entryIt )
      {
        QStringList keyValueSplit = entryIt->split( ':' );
        if ( keyValueSplit.size() < 2 )
        {
          continue;
        }
        QString key = keyValueSplit.at( 0 );
        QString value = keyValueSplit.at( 1 );
        if ( value.startsWith( "param(fill)" ) )
        {
          value = fill.name();
        }
        else if ( value.startsWith( "param(fill-opacity)" ) )
        {
          value = fill.alphaF();
        }
        else if ( value.startsWith( "param(outline)" ) )
        {
          value = outline.name();
        }
        else if ( value.startsWith( "param(outline-opacity)" ) )
        {
          value = outline.alphaF();
        }
        else if ( value.startsWith( "param(outline-width)" ) )
        {
          value = QString::number( outlineWidth );
        }

        if ( entryIt != entryList.constBegin() )
        {
          newAttributeString.append( ';' );
        }
        newAttributeString.append( key + ':' + value );
      }
      elem.setAttribute( attribute.name(), newAttributeString );
    }
    else
    {
      QString value = attribute.value();
      if ( value.startsWith( "param(fill)" ) )
      {
        elem.setAttribute( attribute.name(), fill.name() );
      }
      else if ( value.startsWith( "param(fill-opacity)" ) )
      {
        elem.setAttribute( attribute.name(), fill.alphaF() );
      }
      else if ( value.startsWith( "param(outline)" ) )
      {
        elem.setAttribute( attribute.name(), outline.name() );
      }
      else if ( value.startsWith( "param(outline-opacity)" ) )
      {
        elem.setAttribute( attribute.name(), outline.alphaF() );
      }
      else if ( value.startsWith( "param(outline-width)" ) )
      {
        elem.setAttribute( attribute.name(), QString::number( outlineWidth ) );
      }
    }
  }

  QDomNodeList childList = elem.childNodes();
  int nChildren = childList.count();
  for ( int i = 0; i < nChildren; ++i )
  {
    QDomElement childElem = childList.at( i ).toElement();
    replaceElemParams( childElem, fill, outline, outlineWidth );
  }
}

void QgsSvgCache::containsElemParams( const QDomElement& elem, bool& hasFillParam, bool& hasDefaultFill, QColor& defaultFill,
                                      bool& hasFillOpacityParam, bool& hasDefaultFillOpacity, double& defaultFillOpacity,
                                      bool& hasOutlineParam, bool& hasDefaultOutline, QColor& defaultOutline,
                                      bool& hasOutlineWidthParam, bool& hasDefaultOutlineWidth, double& defaultOutlineWidth,
                                      bool& hasOutlineOpacityParam, bool& hasDefaultOutlineOpacity, double& defaultOutlineOpacity ) const
{
  if ( elem.isNull() )
  {
    return;
  }

  //we already have all the information, no need to go deeper
  if ( hasFillParam && hasOutlineParam && hasOutlineWidthParam && hasFillOpacityParam && hasOutlineOpacityParam )
  {
    return;
  }

  //check this elements attribute
  QDomNamedNodeMap attributes = elem.attributes();
  int nAttributes = attributes.count();

  QStringList valueSplit;
  for ( int i = 0; i < nAttributes; ++i )
  {
    QDomAttr attribute = attributes.item( i ).toAttr();
    if ( attribute.name().compare( "style", Qt::CaseInsensitive ) == 0 )
    {
      //entries separated by ';'
      QStringList entryList = attribute.value().split( ';' );
      QStringList::const_iterator entryIt = entryList.constBegin();
      for ( ; entryIt != entryList.constEnd(); ++entryIt )
      {
        QStringList keyValueSplit = entryIt->split( ':' );
        if ( keyValueSplit.size() < 2 )
        {
          continue;
        }
        QString value = keyValueSplit.at( 1 );
        valueSplit = value.split( ' ' );
        if ( !hasFillParam && value.startsWith( "param(fill)" ) )
        {
          hasFillParam = true;
          if ( valueSplit.size() > 1 )
          {
            defaultFill = QColor( valueSplit.at( 1 ) );
            hasDefaultFill = true;
          }
        }
        else if ( !hasFillOpacityParam && value.startsWith( "param(fill-opacity)" ) )
        {
          hasFillOpacityParam = true;
          if ( valueSplit.size() > 1 )
          {
            bool ok;
            double opacity = valueSplit.at( 1 ).toDouble( &ok );
            if ( ok )
            {
              defaultFillOpacity = opacity;
              hasDefaultFillOpacity = true;
            }
          }
        }
        else if ( !hasOutlineParam && value.startsWith( "param(outline)" ) )
        {
          hasOutlineParam = true;
          if ( valueSplit.size() > 1 )
          {
            defaultOutline = QColor( valueSplit.at( 1 ) );
            hasDefaultOutline = true;
          }
        }
        else if ( !hasOutlineWidthParam && value.startsWith( "param(outline-width)" ) )
        {
          hasOutlineWidthParam = true;
          if ( valueSplit.size() > 1 )
          {
            defaultOutlineWidth = valueSplit.at( 1 ).toDouble();
            hasDefaultOutlineWidth = true;
          }
        }
        else if ( !hasOutlineOpacityParam && value.startsWith( "param(outline-opacity)" ) )
        {
          hasOutlineOpacityParam = true;
          if ( valueSplit.size() > 1 )
          {
            bool ok;
            double opacity = valueSplit.at( 1 ).toDouble( &ok );
            if ( ok )
            {
              defaultOutlineOpacity = opacity;
              hasDefaultOutlineOpacity = true;
            }
          }
        }
      }
    }
    else
    {
      QString value = attribute.value();
      valueSplit = value.split( ' ' );
      if ( !hasFillParam && value.startsWith( "param(fill)" ) )
      {
        hasFillParam = true;
        if ( valueSplit.size() > 1 )
        {
          defaultFill = QColor( valueSplit.at( 1 ) );
          hasDefaultFill = true;
        }
      }
      else if ( !hasFillOpacityParam && value.startsWith( "param(fill-opacity)" ) )
      {
        hasFillOpacityParam = true;
        if ( valueSplit.size() > 1 )
        {
          bool ok;
          double opacity = valueSplit.at( 1 ).toDouble( &ok );
          if ( ok )
          {
            defaultFillOpacity = opacity;
            hasDefaultFillOpacity = true;
          }
        }
      }
      else if ( !hasOutlineParam && value.startsWith( "param(outline)" ) )
      {
        hasOutlineParam = true;
        if ( valueSplit.size() > 1 )
        {
          defaultOutline = QColor( valueSplit.at( 1 ) );
          hasDefaultOutline = true;
        }
      }
      else if ( !hasOutlineWidthParam && value.startsWith( "param(outline-width)" ) )
      {
        hasOutlineWidthParam = true;
        if ( valueSplit.size() > 1 )
        {
          defaultOutlineWidth = valueSplit.at( 1 ).toDouble();
          hasDefaultOutlineWidth = true;
        }
      }
      else if ( !hasOutlineOpacityParam && value.startsWith( "param(outline-opacity)" ) )
      {
        hasOutlineOpacityParam = true;
        if ( valueSplit.size() > 1 )
        {
          bool ok;
          double opacity = valueSplit.at( 1 ).toDouble( &ok );
          if ( ok )
          {
            defaultOutlineOpacity = opacity;
            hasDefaultOutlineOpacity = true;
          }
        }
      }
    }
  }

  //pass it further to child items
  QDomNodeList childList = elem.childNodes();
  int nChildren = childList.count();
  for ( int i = 0; i < nChildren; ++i )
  {
    QDomElement childElem = childList.at( i ).toElement();
    containsElemParams( childElem, hasFillParam, hasDefaultFill, defaultFill,
                        hasFillOpacityParam, hasDefaultFillOpacity, defaultFillOpacity,
                        hasOutlineParam, hasDefaultOutline, defaultOutline,
                        hasOutlineWidthParam, hasDefaultOutlineWidth, defaultOutlineWidth,
                        hasOutlineOpacityParam, hasDefaultOutlineOpacity, defaultOutlineOpacity );
  }
}

void QgsSvgCache::removeCacheEntry( const QString& s, QgsSvgCacheEntry* entry )
{
  delete entry;
  mEntryLookup.remove( s, entry );
}

void QgsSvgCache::printEntryList()
{
  QgsDebugMsg( "****************svg cache entry list*************************" );
  QgsDebugMsg( "Cache size: " + QString::number( mTotalSize ) );
  QgsSvgCacheEntry* entry = mLeastRecentEntry;
  while ( entry )
  {
    QgsDebugMsg( "***Entry:" );
    QgsDebugMsg( "File:" + entry->file );
    QgsDebugMsg( "Size:" + QString::number( entry->size ) );
    QgsDebugMsg( "Width scale factor" + QString::number( entry->widthScaleFactor ) );
    QgsDebugMsg( "Raster scale factor" + QString::number( entry->rasterScaleFactor ) );
    entry = entry->nextEntry;
  }
}

void QgsSvgCache::trimToMaximumSize()
{
  //only one entry in cache
  if ( mLeastRecentEntry == mMostRecentEntry )
  {
    return;
  }
  QgsSvgCacheEntry* entry = mLeastRecentEntry;
  while ( entry && ( mTotalSize > mMaximumSize ) )
  {
    QgsSvgCacheEntry* bkEntry = entry;
    entry = entry->nextEntry;

    takeEntryFromList( bkEntry );
    mEntryLookup.remove( bkEntry->lookupKey, bkEntry );
    mTotalSize -= bkEntry->dataSize();
    delete bkEntry;
  }
}

void QgsSvgCache::takeEntryFromList( QgsSvgCacheEntry* entry )
{
  if ( !entry )
  {
    return;
  }

  if ( entry->previousEntry )
  {
    entry->previousEntry->nextEntry = entry->nextEntry;
  }
  else
  {
    mLeastRecentEntry = entry->nextEntry;
  }
  if ( entry->nextEntry )
  {
    entry->nextEntry->previousEntry = entry->previousEntry;
  }
  else
  {
    mMostRecentEntry = entry->previousEntry;
  }
}

void QgsSvgCache::downloadProgress( qint64 bytesReceived, qint64 bytesTotal )
{
  QString msg = tr( "%1 of %2 bytes of svg image downloaded." ).arg( bytesReceived ).arg( bytesTotal < 0 ? QString( "unknown number of" ) : QString::number( bytesTotal ) );
  QgsDebugMsg( msg );
  emit statusChanged( msg );
}
