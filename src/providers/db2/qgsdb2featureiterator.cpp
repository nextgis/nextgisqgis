/***************************************************************************
  qgsdb2featureiterator.cpp - DB2 spatial feature processing
  --------------------------------------
  Date      : 2016-01-27
  Copyright : (C) 2016 by David Adler
                          Shirley Xiao, David Nguyen
  Email     : dadler at adtechgeospatial.com
              xshirley2012 at yahoo.com,  davidng0123 at gmail.com
  Adapted from MSSQL provider by Tamas Szekeres
****************************************************************************
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 ***************************************************************************/

#include "qgsdb2featureiterator.h"
#include "qgsdb2provider.h"
#include "qgsdb2expressioncompiler.h"
#include "qgssettings.h"
#include "qgslogger.h"
#include "qgsgeometry.h"
#include "qgsexception.h"
#include "qgsgeometryengine.h"

#include <QObject>
#include <QTextStream>
#include <QSqlRecord>


QgsDb2FeatureIterator::QgsDb2FeatureIterator( QgsDb2FeatureSource *source, bool ownSource, const QgsFeatureRequest &request )
  : QgsAbstractFeatureIteratorFromSource<QgsDb2FeatureSource>( source, ownSource, request )
{
  mClosed = false;

  if ( mRequest.destinationCrs().isValid() && mRequest.destinationCrs() != mSource->mCrs )
  {
    mTransform = QgsCoordinateTransform( mSource->mCrs, mRequest.destinationCrs(), mRequest.transformContext() );
  }
  try
  {
    mFilterRect = filterRectToSourceCrs( mTransform );
  }
  catch ( QgsCsException & )
  {
    // can't reproject mFilterRect
    close();
    return;
  }

  // prepare spatial filter geometries for optimal speed
  switch ( mRequest.spatialFilterType() )
  {
    case Qgis::SpatialFilterType::NoFilter:
    case Qgis::SpatialFilterType::BoundingBox:
      break;

    case Qgis::SpatialFilterType::DistanceWithin:
      if ( !mRequest.referenceGeometry().isEmpty() )
      {
        mDistanceWithinGeom = mRequest.referenceGeometry();
        mDistanceWithinEngine.reset( QgsGeometry::createGeometryEngine( mDistanceWithinGeom.constGet() ) );
        mDistanceWithinEngine->prepareGeometry();
      }
      break;
  }

  BuildStatement( request );

  // WARNING - we can't obtain the database connection now, as this method should be
  // run from the main thread, yet iteration can be done in a different thread.
  // This would result in failure, because QSqlDatabase instances cannot be used
  // from a different thread where they were created. Instead, we defer creation
  // of the database until the first feature is fetched.
}


QgsDb2FeatureIterator::~QgsDb2FeatureIterator()
{
  QgsDebugMsg( QStringLiteral( "Fetch count at close: %1" ).arg( mFetchCount ) );
  close();
}

void QgsDb2FeatureIterator::BuildStatement( const QgsFeatureRequest &request )
{
  bool limitAtProvider = ( mRequest.limit() >= 0 ) && mRequest.spatialFilterType() != Qgis::SpatialFilterType::DistanceWithin;
  QString delim;

  // build sql statement
  mStatement = QStringLiteral( "SELECT " );

  if ( !mSource->mFidColName.isEmpty() )
  {
    mStatement += mSource->mFidColName;
    mFidCol = mSource->mFields.indexFromName( mSource->mFidColName );
    mAttributesToFetch.append( mFidCol );
    delim = QStringLiteral( "," );
  }

  const bool subsetOfAttributes = mRequest.flags() & QgsFeatureRequest::SubsetOfAttributes;
  QgsAttributeList attrs = subsetOfAttributes ? mRequest.subsetOfAttributes() : mSource->mFields.allAttributesList();

  // ensure that all attributes required for expression filter are being fetched
  if ( subsetOfAttributes && request.filterType() == QgsFeatureRequest::FilterExpression )
  {
    //ensure that all fields required for filter expressions are prepared
    QSet<int> attributeIndexes = request.filterExpression()->referencedAttributeIndexes( mSource->mFields );
    attributeIndexes += qgis::listToSet( attrs );
    attrs = qgis::setToList( attributeIndexes );
  }

  const auto constAttrs = attrs;
  for ( const int i : constAttrs )
  {
    const QString fieldname = mSource->mFields.at( i ).name();
    if ( mSource->mFidColName == fieldname )
      continue;
    mStatement += delim + fieldname;
    delim = QStringLiteral( "," );
    mAttributesToFetch.append( i );
    QgsDebugMsg( QStringLiteral( "i: %1; name: %2" ).arg( i ).arg( fieldname ) );
  }

  // get geometry col if requested and table has spatial column
  if ( (
         !( request.flags() & QgsFeatureRequest::NoGeometry )
         || ( request.spatialFilterType() == Qgis::SpatialFilterType::DistanceWithin )
         || ( request.filterType() == QgsFeatureRequest::FilterExpression && request.filterExpression()->needsGeometry() )
       )
       && mSource->isSpatial() )
  {
    mStatement += QString( delim + "DB2GSE.ST_ASBINARY(%1) AS %1 " ).arg( mSource->mGeometryColName );
    mAttributesToFetch.append( 2 );  // dummy - won't store geometry as an attribute
  }

  mStatement += QStringLiteral( " FROM %1.%2" ).arg( mSource->mSchemaName, mSource->mTableName );

  bool filterAdded = false;
  // set spatial filter
  if ( !mFilterRect.isNull() && mSource->isSpatial() && !mFilterRect.isEmpty() )
  {
    if ( request.spatialFilterType() == Qgis::SpatialFilterType::BoundingBox && mRequest.flags() & QgsFeatureRequest::ExactIntersect )
    {
      const QString rectangleWkt = mFilterRect.asWktPolygon();
      QgsDebugMsg( "filter polygon: " + rectangleWkt );
      mStatement += QStringLiteral( " WHERE DB2GSE.ST_Intersects(%1, DB2GSE.ST_POLYGON('%2', %3)) = 1" ).arg(
                      mSource->mGeometryColName,
                      rectangleWkt,
                      QString::number( mSource->mSRId ) );
    }
    else
    {
      mStatement += QStringLiteral( " WHERE DB2GSE.ENVELOPESINTERSECT(%1, %2, %3, %4, %5, %6) = 1" ).arg(
                      mSource->mGeometryColName,
                      qgsDoubleToString( mFilterRect.xMinimum() ),
                      qgsDoubleToString( mFilterRect.yMinimum() ),
                      qgsDoubleToString( mFilterRect.xMaximum() ),
                      qgsDoubleToString( mFilterRect.yMaximum() ),
                      QString::number( mSource->mSRId ) );
    }
    filterAdded = true;
  }

  // set fid filter
  if ( request.filterType() == QgsFeatureRequest::FilterFid && !mSource->mFidColName.isEmpty() )
  {
    const QString fidfilter = QStringLiteral( " %1 = %2" ).arg( mSource->mFidColName, QString::number( request.filterFid() ) );
    // set attribute filter
    if ( !filterAdded )
      mStatement += QLatin1String( " WHERE " );
    else
      mStatement += QLatin1String( " AND " );

    mStatement += fidfilter;
    filterAdded = true;
  }
  else if ( request.filterType() == QgsFeatureRequest::FilterFids && !mSource->mFidColName.isEmpty()
            && !mRequest.filterFids().isEmpty() )
  {
    QString delim;
    QString inClause = QStringLiteral( "%1 IN (" ).arg( mSource->mFidColName );
    const auto constFilterFids = mRequest.filterFids();
    for ( const QgsFeatureId featureId : constFilterFids )
    {
      inClause += delim + FID_TO_STRING( featureId );
      delim = ',';
    }
    inClause.append( ')' );

    if ( !filterAdded )
      mStatement += QLatin1String( " WHERE " );
    else
      mStatement += QLatin1String( " AND " );

    mStatement += inClause;
    filterAdded = true;
  }

  if ( !mSource->mSqlWhereClause.isEmpty() )
  {
    if ( !filterAdded )
      mStatement += " WHERE (" + mSource->mSqlWhereClause + ")";
    else
      mStatement += " AND (" + mSource->mSqlWhereClause + ")";
  }

  mExpressionCompiled = false;
  mCompileStatus = NoCompilation;
  if ( request.filterType() == QgsFeatureRequest::FilterExpression )
  {
    QgsDb2ExpressionCompiler compiler = QgsDb2ExpressionCompiler( mSource, request.flags() & QgsFeatureRequest::IgnoreStaticNodesDuringExpressionCompilation );
    QgsDebugMsg( "expression dump: " + request.filterExpression()->dump() );
    QgsDebugMsg( "expression expression: " + request.filterExpression()->expression() );
    const QgsSqlExpressionCompiler::Result result = compiler.compile( request.filterExpression() );
    QgsDebugMsg( QStringLiteral( "compiler result: %1" ).arg( result ) + "; query: " + compiler.result() );
    if ( result == QgsSqlExpressionCompiler::Complete || result == QgsSqlExpressionCompiler::Partial )
    {
      if ( !filterAdded )
        mStatement += " WHERE (" + compiler.result() + ')';
      else
        mStatement += " AND (" + compiler.result() + ')';

      //if only partial success when compiling expression, we need to double-check results using QGIS' expressions
      mExpressionCompiled = ( result == QgsSqlExpressionCompiler::Complete );
      mCompileStatus = ( mExpressionCompiled ? Compiled : PartiallyCompiled );
      limitAtProvider = mExpressionCompiled;
    }
    else
    {
      limitAtProvider = false;
    }
  }

  QStringList orderByParts;
  mOrderByCompiled = true;
  if ( limitAtProvider )
  {
    const auto constOrderBy = request.orderBy();
    for ( const QgsFeatureRequest::OrderByClause &clause : constOrderBy )
    {
      QgsDebugMsg( QStringLiteral( "processing a clause; ascending: %1; nullsFirst: %2" ).arg( clause.ascending() ).arg( clause.nullsFirst() ) );

      if ( ( clause.ascending() && clause.nullsFirst() ) || ( !clause.ascending() && !clause.nullsFirst() ) )
      {
        // Not supported by DB2
        // NULLs are last in ascending order
        mOrderByCompiled = false;
        QgsDebugMsg( QStringLiteral( "ascending with nullsFirst not supported" ) );
        break;
      }

      QgsDb2ExpressionCompiler compiler = QgsDb2ExpressionCompiler( mSource, request.flags() & QgsFeatureRequest::IgnoreStaticNodesDuringExpressionCompilation );
      const QgsExpression expression = clause.expression();
      QgsDebugMsg( "expression: " + expression.dump() );
      if ( compiler.compile( &expression ) == QgsSqlExpressionCompiler::Complete )
      {
        QgsDebugMsg( QStringLiteral( "compile complete" ) );
        QString part;
        part = compiler.result();
        part += clause.ascending() ? " ASC" : " DESC";
        orderByParts << part;
      }
      else
      {
        QgsDebugMsg( "compile of '" + expression.dump() + "' failed" );
        // Most important clauses at the beginning of the list
        // will still be sent and used to pre-sort so the local
        // CPU can use its cycles for fine-tuning.
        mOrderByCompiled = false;
      }
    }
  }
  else
  {
    mOrderByCompiled = false;
  }

  if ( !orderByParts.isEmpty() )
  {
    mOrderByClause = QStringLiteral( " ORDER BY %1" ).arg( orderByParts.join( QLatin1Char( ',' ) ) );
    mStatement += mOrderByClause;
  }

  if ( limitAtProvider && request.limit() > 0 )
  {
    mStatement += QStringLiteral( " FETCH FIRST %1 ROWS ONLY" ).arg( mRequest.limit() );
  }

  QgsDebugMsg( mStatement );
}

bool QgsDb2FeatureIterator::prepareOrderBy( const QList<QgsFeatureRequest::OrderByClause> &orderBys )
{
  Q_UNUSED( orderBys )
  QgsDebugMsg( QStringLiteral( "mOrderByCompiled: %1" ).arg( mOrderByCompiled ) );
  // Preparation has already been done in the constructor, so we just communicate the result
  return mOrderByCompiled;
}

bool QgsDb2FeatureIterator::nextFeatureFilterExpression( QgsFeature &f )
{
  QgsDebugMsg( QStringLiteral( "mExpressionCompiled: %1" ).arg( mExpressionCompiled ) );
  if ( !mExpressionCompiled )
    return QgsAbstractFeatureIterator::nextFeatureFilterExpression( f );
  else
    return fetchFeature( f );
}

bool QgsDb2FeatureIterator::fetchFeature( QgsFeature &feature )
{
  feature.setValid( false );

  if ( !mDatabase.isValid() )
  {
    // No existing connection, so set it up now. It's safe to do here as we're now in
    // the thread were iteration is actually occurring.
    // connect to the database
    QString errMsg;
    QgsDebugMsg( QStringLiteral( "fetchFeature getDatabase" ) );
    mDatabase = QgsDb2Provider::getDatabase( mSource->mConnInfo, errMsg );
    QgsDebugMsg( QStringLiteral( "fetchFeature back from getDatabase" ) );
    if ( !errMsg.isEmpty() )
    {
      QgsDebugMsg( "Failed to open database: " + errMsg );
      return false;
    }

    // create sql query
    mQuery.reset( new QSqlQuery( mDatabase ) );

    // start selection
    if ( !rewind() )
      return false;
  }

  if ( !mQuery )
  {
    QgsDebugMsg( QStringLiteral( "Read attempt on no query" ) );
    return false;
  }

  if ( !mQuery->isActive() )
  {
    QgsDebugMsg( QStringLiteral( "Read attempt on inactive query" ) );
    return false;
  }

  while ( mQuery->next() )
  {
    feature.initAttributes( mSource->mFields.count() );
    feature.setFields( mSource->mFields ); // allow name-based attribute lookups
    const QSqlRecord record = mQuery->record();
    for ( int i = 0; i < mAttributesToFetch.count(); i++ )
    {
      QVariant v = mQuery->value( i );
      const QString attrName = record.fieldName( i );
      if ( attrName == mSource->mGeometryColName )
      {
//        QgsDebugMsg( QStringLiteral( "Geom col: %1" ).arg( attrName ) ); // not sure why we set geometry as a field value
      }
      else
      {
//        QgsDebugMsg( QStringLiteral( "Field: %1; value: %2" ).arg( attrName, v.toString() ) );

        /**
         * CHAR and VARCHAR fields seem to get corrupted sometimes when directly
         * calling feature.setAttribute(..., v) with mQuery->value(i). Workaround
         * that seems to fix the problem is to call v = QVariant(v.toString()).
         */
        if ( v.type() == QVariant::String )
        {
          v = QVariant( v.toString() );
        }
        const QgsField fld = mSource->mFields.at( mAttributesToFetch.at( i ) );
//        QgsDebugMsg( QStringLiteral( "v.type: %1; fld.type: %2" ).arg( v.type() ).arg( fld.type() ) );
        if ( v.type() != fld.type() )
        {
          v = QgsVectorDataProvider::convertValue( fld.type(), v.toString() );
        }
        feature.setAttribute( mAttributesToFetch[i], v );
      }
    }
//    QgsDebugMsg( QStringLiteral( "Fid: %1; value: %2" ).arg( mSource->mFidColName ).arg( record.value( mSource->mFidColName ).toLongLong() ) );
    feature.setId( mQuery->record().value( mSource->mFidColName ).toLongLong() );

    if ( mSource->isSpatial() )
    {
      QByteArray ar = record.value( mSource->mGeometryColName ).toByteArray();
      const int wkb_size = ar.size();
      if ( 0 < wkb_size )
      {
        unsigned char *db2data = new unsigned char[wkb_size + 1]; // allocate persistent storage
        memcpy( db2data, ( unsigned char * )ar.data(), wkb_size + 1 );
        QgsGeometry g;
        g.fromWkb( db2data, wkb_size );
        feature.setGeometry( g );
      }
      else
      {
        QgsDebugMsg( QStringLiteral( "Geometry is empty" ) );
        feature.clearGeometry();
      }
    }
    else
    {
      feature.clearGeometry();
    }
    geometryToDestinationCrs( feature, mTransform );

    if ( mDistanceWithinEngine && mDistanceWithinEngine->distance( feature.geometry().constGet() ) > mRequest.distanceWithin() )
    {
      continue;
    }

    feature.setValid( true );
    mFetchCount++;
    if ( mFetchCount % 100 == 0 )
    {
      QgsDebugMsg( QStringLiteral( "Fetch count: %1" ).arg( mFetchCount ) );
    }
    return true;
  }
  QgsDebugMsg( QStringLiteral( "No feature; lastError: '%1'" ).arg( mQuery->lastError().text() ) );
  return false;
}

bool QgsDb2FeatureIterator::rewind()
{
  if ( mClosed )
  {
    QgsDebugMsg( QStringLiteral( "iterator closed" ) );
    return false;
  }

  if ( mStatement.isEmpty() )
  {
    QgsDebugMsg( QStringLiteral( "rewind on empty statement" ) );
    return false;
  }

  if ( !mQuery )
    return false;

  mQuery->clear();
  mQuery->setForwardOnly( true );
  QgsDebugMsg( "Execute mStatement: " + mStatement );
  if ( !mQuery->exec( mStatement ) )
  {
    QgsDebugMsg( mQuery->lastError().text() );
    close();
    return false;
  }
  QgsDebugMsg( QStringLiteral( "leaving rewind" ) );
  QgsDebugMsg( mQuery->lastError().text() );
  mFetchCount = 0;
  return true;
}

bool QgsDb2FeatureIterator::close()
{
  if ( mClosed )
    return false;

  if ( mQuery )
  {
    if ( !mQuery->isActive() )
    {
      QgsDebugMsg( QStringLiteral( "QgsDb2FeatureIterator::close on inactive query" ) );
    }
    else
    {
      mQuery->finish();
    }
    mQuery.reset();
  }

  if ( mDatabase.isOpen() )
  {
    mDatabase.close();
  }

  iteratorClosed();

  mClosed = true;
  return true;
}

///////////////

QgsDb2FeatureSource::QgsDb2FeatureSource( const QgsDb2Provider *p )
  : mFields( p->mAttributeFields )
  , mFidColName( p->mFidColName )
  , mSRId( p->mSRId )
  , mGeometryColName( p->mGeometryColName )
  , mGeometryColType( p->mGeometryColType )
  , mSchemaName( p->mSchemaName )
  , mTableName( p->mTableName )
  , mConnInfo( p->mConnInfo )
  , mSqlWhereClause( p->mSqlWhereClause )
  , mCrs( p->crs() )
{}

QgsFeatureIterator QgsDb2FeatureSource::getFeatures( const QgsFeatureRequest &request )
{
  return QgsFeatureIterator( new QgsDb2FeatureIterator( this, false, request ) );
}
