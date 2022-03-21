/***************************************************************************
                         qgsabstractcontentcache.h
                         ---------------
    begin                : December 2018
    copyright            : (C) 2018 by Nyall Dawson
    email                : nyall dot dawson at gmail dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSABSTRACTCONTENTCACHE_H
#define QGSABSTRACTCONTENTCACHE_H

#include "qgis_core.h"
#include "qgis_sip.h"
#include "qgslogger.h"
#include "qgsmessagelog.h"
#include "qgsapplication.h"
#include "qgsnetworkaccessmanager.h"
#include "qgsnetworkcontentfetchertask.h"

#include <QObject>
#if QT_VERSION < QT_VERSION_CHECK(5, 14, 0)
#include <QMutex>
#else
#include <QRecursiveMutex>
#endif
#include <QCache>
#include <QSet>
#include <QDateTime>
#include <QList>
#include <QFile>
#include <QNetworkReply>
#include <QFileInfo>
#include <QUrl>

/**
 * \class QgsAbstractContentCacheEntry
 * \ingroup core
 * \brief Base class for entries in a QgsAbstractContentCache.
 *
 * Subclasses must take care to correctly implement the isEqual() method, applying their
 * own logic for testing extra cache properties (e.g. image size for an image-based cache).
 *
 * \since QGIS 3.6
 */
class CORE_EXPORT QgsAbstractContentCacheEntry
{
  public:

    /**
     * Constructor for QgsAbstractContentCacheEntry for an entry relating to the specified \a path.
     */
    QgsAbstractContentCacheEntry( const QString &path ) ;

    virtual ~QgsAbstractContentCacheEntry() = default;

    //! QgsAbstractContentCacheEntry cannot be copied.
    QgsAbstractContentCacheEntry( const QgsAbstractContentCacheEntry &rh ) = delete;
    //! QgsAbstractContentCacheEntry cannot be copied.
    QgsAbstractContentCacheEntry &operator=( const QgsAbstractContentCacheEntry &rh ) = delete;

    /**
     * Represents the absolute path to a file, a remote URL, or a base64 encoded string.
     */
    QString path;

    //! Timestamp when file was last modified
    QDateTime fileModified;

    //! Time since last check of file modified date
    QElapsedTimer fileModifiedLastCheckTimer;

    //! Timeout before re-checking whether the file modified date has changed.
    int mFileModifiedCheckTimeout = 30000;

    /**
     * Entries are kept on a linked list, sorted by last access. This point refers
     * to the next entry in the cache.
     */
    QgsAbstractContentCacheEntry *nextEntry = nullptr;

    /**
     * Entries are kept on a linked list, sorted by last access. This point refers
     * to the previous entry in the cache.
     */
    QgsAbstractContentCacheEntry *previousEntry = nullptr;

    bool operator==( const QgsAbstractContentCacheEntry &other ) const
    {
      return other.path == path;
    }

    /**
     * Returns the memory usage in bytes for the entry.
     */
    virtual int dataSize() const = 0;

    /**
     * Dumps debugging strings containing the item's properties. For testing purposes only.
     */
    virtual void dump() const = 0;

  protected:

    /**
     * Tests whether this entry matches another entry. Subclasses must take care to check
     * that the type of \a other is of a matching class, and then test extra cache-specific
     * properties, such as image size.
     */
    virtual bool isEqual( const QgsAbstractContentCacheEntry *other ) const = 0;

  private:
#ifdef SIP_RUN
    QgsAbstractContentCacheEntry( const QgsAbstractContentCacheEntry &rh );
#endif

};

/**
 * \class QgsAbstractContentCacheBase
 * \ingroup core
 *
 * \brief A QObject derived base class for QgsAbstractContentCache.
 *
 * Required because template based class (such as QgsAbstractContentCache) cannot use the Q_OBJECT macro.
 *
 * \since QGIS 3.6
 */
class CORE_EXPORT QgsAbstractContentCacheBase: public QObject
{
    Q_OBJECT

  public:

    /**
     * Constructor for QgsAbstractContentCacheBase, with the specified \a parent object.
     */
    QgsAbstractContentCacheBase( QObject *parent );

  signals:

    /**
     * Emitted when the cache has finished retrieving content from a remote \a url.
     */
    void remoteContentFetched( const QString &url );

  protected:

    /**
     * Runs additional checks on a network \a reply to ensure that the reply content is
     * consistent with that required by the cache.
     */
    virtual bool checkReply( QNetworkReply *reply, const QString &path ) const
    {
      Q_UNUSED( reply )
      Q_UNUSED( path )
      return true;
    }

  protected slots:

    /**
     * Triggered after remote content (i.e. HTTP linked content at the given \a url) has been fetched.
     *
     * The \a success argument will be TRUE if the content was successfully fetched, or FALSE if
     * it was not fetched successfully.
     */
    virtual void onRemoteContentFetched( const QString &url, bool success );

};

#ifndef SIP_RUN

/**
 * \class QgsAbstractContentCache
 * \ingroup core
 *
 * \brief Abstract base class for file content caches, such as SVG or raster image caches.
 *
 * Handles trimming the maximum cached content size to a desired limit, fetching remote
 * content (via HTTP), and automatically invalidating cached content when the corresponding
 * file is changed.
 *
 * \note Not available in Python bindings.
 * \since QGIS 3.6
 */
template<class T>
class CORE_EXPORT QgsAbstractContentCache : public QgsAbstractContentCacheBase
{

  public:

    /**
     * Constructor for QgsAbstractContentCache, with the specified \a parent object.
     *
     * The \a maxCacheSize argument dictates the maximum allowable total size of the cache,
     * in bytes. This in turn dictates the maximum allowable size for caching individual
     * entries.
     *
     * The \a fileModifiedCheckTimeout dictates the minimum time (in milliseconds) between
     * consecutive checks of whether a file's content has been modified (and existing
     * cache entries should be discarded).
     */
    QgsAbstractContentCache( QObject *parent SIP_TRANSFERTHIS = nullptr,
                             const QString &typeString = QString(),
                             long maxCacheSize = 20000000,
                             int fileModifiedCheckTimeout = 30000 )
      : QgsAbstractContentCacheBase( parent )
#if QT_VERSION < QT_VERSION_CHECK(5, 14, 0)
      , mMutex( QMutex::Recursive )
#endif
      , mMaxCacheSize( maxCacheSize )
      , mFileModifiedCheckTimeout( fileModifiedCheckTimeout )
      , mTypeString( typeString.isEmpty() ? QObject::tr( "Content" ) : typeString )
    {
    }

    ~QgsAbstractContentCache() override
    {
      qDeleteAll( mEntryLookup );
    }

  protected:

    /**
     * Removes the least used cache entries until the maximum cache size is under the predefined size limit.
     */
    void trimToMaximumSize()
    {
      //only one entry in cache
      if ( mLeastRecentEntry == mMostRecentEntry )
      {
        return;
      }
      T *entry = mLeastRecentEntry;
      while ( entry && ( mTotalSize > mMaxCacheSize ) )
      {
        T *bkEntry = entry;
        entry = static_cast< T * >( entry->nextEntry );

        takeEntryFromList( bkEntry );
        mEntryLookup.remove( bkEntry->path, bkEntry );
        mTotalSize -= bkEntry->dataSize();
        delete bkEntry;
      }
    }

    /**
     * Gets the file content corresponding to the given \a path.
     *
     * \a path may be a local file, remote (HTTP) url, or a base 64 encoded string (with a "base64:" prefix).
     *
     * The \a missingContent byte array is returned if the \a path could not be resolved or is broken. If
     * the \a path corresponds to a remote URL, then \a fetchingContent will be returned while the content
     * is in the process of being fetched.
     * The \a blocking boolean forces to wait for loading before returning result. The content is loaded
     * in the same thread to ensure provided the remote content. WARNING: the \a blocking parameter must NEVER
     * be TRUE from GUI based applications (like the main QGIS application) or crashes will result. Only for
     * use in external scripts or QGIS server.
     */
    QByteArray getContent( const QString &path, const QByteArray &missingContent, const QByteArray &fetchingContent, bool blocking = false ) const
    {
      // is it a path to local file?
      QFile file( path );
      if ( file.exists() )
      {
        if ( file.open( QIODevice::ReadOnly ) )
        {
          return file.readAll();
        }
        else
        {
          return missingContent;
        }
      }

      // maybe it's an embedded base64 string
      if ( path.startsWith( QLatin1String( "base64:" ), Qt::CaseInsensitive ) )
      {
        const QByteArray base64 = path.mid( 7 ).toLocal8Bit(); // strip 'base64:' prefix
        return QByteArray::fromBase64( base64, QByteArray::OmitTrailingEquals );
      }

      // maybe it's a url...
      if ( !path.contains( QLatin1String( "://" ) ) ) // otherwise short, relative SVG paths might be considered URLs
      {
        return missingContent;
      }

      const QUrl url( path );
      if ( !url.isValid() )
      {
        return missingContent;
      }

      // check whether it's a url pointing to a local file
      if ( url.scheme().compare( QLatin1String( "file" ), Qt::CaseInsensitive ) == 0 )
      {
        file.setFileName( url.toLocalFile() );
        if ( file.exists() )
        {
          if ( file.open( QIODevice::ReadOnly ) )
          {
            return file.readAll();
          }
        }

        // not found...
        return missingContent;
      }

      const QMutexLocker locker( &mMutex );

      // already a request in progress for this url
      if ( mPendingRemoteUrls.contains( path ) )
      {
        // it's a non blocking request so return fetching content
        if ( !blocking )
        {
          return fetchingContent;
        }

        // it's a blocking request so try to find the task and wait for task finished
        const auto constActiveTasks = QgsApplication::taskManager()->activeTasks();
        for ( QgsTask *task : constActiveTasks )
        {
          // the network content fetcher task's description ends with the path
          if ( !task->description().endsWith( path ) )
          {
            continue;
          }

          // cast task to network content fetcher task
          QgsNetworkContentFetcherTask *ncfTask = qobject_cast<QgsNetworkContentFetcherTask *>( task );
          if ( ncfTask )
          {
            // wait for task finished
            if ( waitForTaskFinished( ncfTask ) )
            {
              if ( mRemoteContentCache.contains( path ) )
              {
                // We got the file!
                return *mRemoteContentCache[ path ];
              }
            }
          }
          // task found, no needs to continue
          break;
        }
        // if no content returns the content is probably in remote content cache
        // or a new task will be created
      }

      if ( mRemoteContentCache.contains( path ) )
      {
        // already fetched this content - phew. Just return what we already got.
        return *mRemoteContentCache[ path ];
      }

      mPendingRemoteUrls.insert( path );
      //fire up task to fetch content in background
      QNetworkRequest request( url );
      QgsSetRequestInitiatorClass( request, QStringLiteral( "QgsAbstractContentCache<%1>" ).arg( mTypeString ) );
      request.setAttribute( QNetworkRequest::CacheLoadControlAttribute, QNetworkRequest::PreferCache );
      request.setAttribute( QNetworkRequest::CacheSaveControlAttribute, true );

      QgsNetworkContentFetcherTask *task = new QgsNetworkContentFetcherTask( request );
      connect( task, &QgsNetworkContentFetcherTask::fetched, this, [this, task, path, missingContent]
      {
        const QMutexLocker locker( &mMutex );

        QNetworkReply *reply = task->reply();
        if ( !reply )
        {
          // canceled
          QMetaObject::invokeMethod( const_cast< QgsAbstractContentCacheBase * >( qobject_cast< const QgsAbstractContentCacheBase * >( this ) ), "onRemoteContentFetched", Qt::QueuedConnection, Q_ARG( QString, path ), Q_ARG( bool, false ) );
          return;
        }

        if ( reply->error() != QNetworkReply::NoError )
        {
          QgsMessageLog::logMessage( tr( "%3 request failed [error: %1 - url: %2]" ).arg( reply->errorString(), path, mTypeString ), mTypeString );
          return;
        }

        bool ok = true;

        const QVariant status = reply->attribute( QNetworkRequest::HttpStatusCodeAttribute );
        if ( !status.isNull() && status.toInt() >= 400 )
        {
          const QVariant phrase = reply->attribute( QNetworkRequest::HttpReasonPhraseAttribute );
          QgsMessageLog::logMessage( tr( "%4 request error [status: %1 - reason phrase: %2] for %3" ).arg( status.toInt() ).arg( phrase.toString(), path, mTypeString ), mTypeString );
          mRemoteContentCache.insert( path, new QByteArray( missingContent ) );
          ok = false;
        }

        if ( !checkReply( reply, path ) )
        {
          mRemoteContentCache.insert( path, new QByteArray( missingContent ) );
          ok = false;
        }

        if ( ok )
        {
          // read the content data
          const QByteArray ba = reply->readAll();

          // because of the fragility listed below in waitForTaskFinished, this slot may get called twice. In that case
          // the second time will have an empty reply (we've already read it all...)
          if ( !ba.isEmpty() )
            mRemoteContentCache.insert( path, new QByteArray( ba ) );
        }
        QMetaObject::invokeMethod( const_cast< QgsAbstractContentCacheBase * >( qobject_cast< const QgsAbstractContentCacheBase * >( this ) ), "onRemoteContentFetched", Qt::QueuedConnection, Q_ARG( QString, path ), Q_ARG( bool, true ) );
      } );

      QgsApplication::taskManager()->addTask( task );

      // if blocking, wait for finished
      if ( blocking )
      {
        if ( waitForTaskFinished( task ) )
        {
          if ( mRemoteContentCache.contains( path ) )
          {
            // We got the file!
            return *mRemoteContentCache[ path ];
          }
        }
      }
      return fetchingContent;
    }

    void onRemoteContentFetched( const QString &url, bool success ) override
    {
      const QMutexLocker locker( &mMutex );
      mPendingRemoteUrls.remove( url );

      T *nextEntry = mLeastRecentEntry;
      while ( T *entry = nextEntry )
      {
        nextEntry = static_cast< T * >( entry->nextEntry );
        if ( entry->path == url )
        {
          takeEntryFromList( entry );
          mEntryLookup.remove( entry->path, entry );
          mTotalSize -= entry->dataSize();
          delete entry;
        }
      }

      if ( success )
        emit remoteContentFetched( url );
    }

    /**
     * Blocks the current thread until the \a task finishes (or user's preset network timeout expires)
     *
     * \warning this method must NEVER be used from GUI based applications (like the main QGIS application)
     * or crashes will result. Only for use in external scripts or QGIS server.
     *
     * The result will be FALSE if the wait timed out and TRUE in any other case.
     *
     * \since QGIS 3.10
     */
    bool waitForTaskFinished( QgsNetworkContentFetcherTask *task ) const
    {
      // Wait up to timeout seconds for task finished
      if ( task->waitForFinished( QgsNetworkAccessManager::timeout() ) )
      {
        // The wait did not time out
        // Third step, check status as complete
        if ( task->status() == QgsTask::Complete )
        {
          // Fourth step, force the signal fetched to be sure reply has been checked

          // ARGH this is BAD BAD BAD. The connection will get called twice as a result!!!
          task->fetched();
          return true;
        }
      }
      return false;
    }

    /**
     * Returns the existing entry from the cache which matches \a entryTemplate (deleting entryTemplate when done), or
     * if no existing entry is found then \a entryTemplate is transferred to the cache and returned.
     *
     * I.e. either way ownership of \a entryTemplate is transferred by calling this method.
     *
     * If an existing entry was found, then the corresponding file MAY be rechecked for changes (only if a suitable
     * time has occurred since the last check).
     */
    T *findExistingEntry( T *entryTemplate )
    {
      //search entries in mEntryLookup
      const QString path = entryTemplate->path;
      T *currentEntry = nullptr;
      const QList<T *> entries = mEntryLookup.values( path );
      QDateTime modified;
      for ( T *cacheEntry : entries )
      {
        if ( cacheEntry->isEqual( entryTemplate ) )
        {
          if ( mFileModifiedCheckTimeout <= 0 || cacheEntry->fileModifiedLastCheckTimer.hasExpired( mFileModifiedCheckTimeout ) )
          {
            if ( !modified.isValid() )
              modified = QFileInfo( path ).lastModified();

            if ( cacheEntry->fileModified != modified )
              continue;
            else
              cacheEntry->fileModifiedLastCheckTimer.restart();
          }
          currentEntry = cacheEntry;
          break;
        }
      }

      //if not found: insert entryTemplate as a new entry
      if ( !currentEntry )
      {
        currentEntry = insertCacheEntry( entryTemplate );
      }
      else
      {
        delete entryTemplate;
        entryTemplate = nullptr;
        ( void )entryTemplate;
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
#if QT_VERSION < QT_VERSION_CHECK(5, 14, 0)
    mutable QMutex mMutex;
#else
    mutable QRecursiveMutex mMutex;
#endif
    //! Estimated total size of all cached content
    long mTotalSize = 0;

    //! Maximum cache size
    long mMaxCacheSize = 20000000;

  private:

    /**
     * Inserts a new \a entry into the cache.
     *
     * Ownership of \a entry is transferred to the cache.
     */
    T *insertCacheEntry( T *entry )
    {
      entry->mFileModifiedCheckTimeout = mFileModifiedCheckTimeout;

      if ( !entry->path.startsWith( QLatin1String( "base64:" ) ) )
      {
        entry->fileModified = QFileInfo( entry->path ).lastModified();
        entry->fileModifiedLastCheckTimer.start();
      }

      mEntryLookup.insert( entry->path, entry );

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


    /**
     * Removes an \a entry from the ordered list (but does not delete the entry itself).
     */
    void takeEntryFromList( T *entry )
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
        mLeastRecentEntry = static_cast< T * >( entry->nextEntry );
      }
      if ( entry->nextEntry )
      {
        entry->nextEntry->previousEntry = entry->previousEntry;
      }
      else
      {
        mMostRecentEntry = static_cast< T * >( entry->previousEntry );
      }
    }

    /**
     * Prints a list of all entries in the cache. For debugging purposes only.
     */
    void printEntryList()
    {
      QgsDebugMsg( QStringLiteral( "****************cache entry list*************************" ) );
      QgsDebugMsg( "Cache size: " + QString::number( mTotalSize ) );
      T *entry = mLeastRecentEntry;
      while ( entry )
      {
        QgsDebugMsg( QStringLiteral( "***Entry:" ) );
        entry->dump();
        entry = entry->nextEntry;
      }
    }

    //! Entry pointers accessible by file name
    QMultiHash< QString, T * > mEntryLookup;

    //! Minimum time (in ms) between consecutive file modified time checks
    int mFileModifiedCheckTimeout = 30000;

    //The content cache keeps the entries on a double connected list, moving the current entry to the front.
    //That way, removing entries for more space can start with the least used objects.
    T *mLeastRecentEntry = nullptr;
    T *mMostRecentEntry = nullptr;

    mutable QCache< QString, QByteArray > mRemoteContentCache;
    mutable QSet< QString > mPendingRemoteUrls;

    QString mTypeString;

    friend class TestQgsSvgCache;
    friend class TestQgsImageCache;
};

#endif

#endif // QGSABSTRACTCONTENTCACHE_H
