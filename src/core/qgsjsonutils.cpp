/***************************************************************************
    qgsjsonutils.h
     -------------
    Date                 : May 206
    Copyright            : (C) 2016 Nyall Dawson
    Email                : nyall dot dawson at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsjsonutils.h"
#include "qgsfeatureiterator.h"
#include "qgsogrutils.h"
#include "qgsgeometry.h"
#include "qgsvectorlayer.h"
#include "qgsrelation.h"
#include "qgsrelationmanager.h"
#include "qgsproject.h"
#include "qgsexception.h"
#include "qgslogger.h"
#include "qgsfieldformatterregistry.h"
#include "qgsfieldformatter.h"
#include "qgsapplication.h"
#include "qgsfeatureid.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QTextCodec>
// #include <nlohmann/json.hpp>

static void AddjsonFromVariant( CPLJSONObject &obj, const std::string &name, const QVariant &val )
{
  if ( val.isNull() || ! val.isValid() )
  {
      obj.AddNull(name);
      return;
  }
  json j;
  if ( val.type() == QVariant::Type::Map )
  {
    const QVariantMap &vMap = val.toMap();
    json jMap;
    for ( auto it = vMap.constBegin(); it != vMap.constEnd(); it++ )
    {
        AddjsonFromVariant(jMap, it.key().toStdString(), it.value());
    }
    obj.Add(name, jMap);
  }
  else if ( val.type() == QVariant::Type::List || val.type() == QVariant::Type::StringList )
  {
    const QVariantList &vList = val.toList();
    CPLJSONArray jList;
    for ( const auto &v : vList )
    {
        switch ( v.userType() )
        {
        case QMetaType::Int:
        case QMetaType::UInt:
        case QMetaType::LongLong:
        case QMetaType::ULongLong:
            jList.Add(v.toLongLong());
            break;
        case QMetaType::Double:
        case QMetaType::Float:
            jList.Add(v.toDouble());
            break;
        case QMetaType::Bool:
            jList.Add(v.toBool());
            break;
        case QMetaType::QByteArray:
            jList.Add(v.toByteArray().toBase64().toStdString());
            break;
        default:
            jList.Add(v.toString().toStdString());
            break;
        }
    }
    obj.Add(name, jList);
  }
  else
  {
    switch ( val.userType() )
    {
      case QMetaType::Int:
      case QMetaType::UInt:
      case QMetaType::LongLong:
      case QMetaType::ULongLong:
        obj.Add(name, val.toLongLong());
        break;
      case QMetaType::Double:
      case QMetaType::Float:
        obj.Add(name, val.toDouble());
        break;
      case QMetaType::Bool:
        obj.Add(name, val.toBool());
        break;
      case QMetaType::QByteArray:
        obj.Add(name, val.toByteArray().toBase64().toStdString());
        break;
      default:
        obj.Add(name, val.toString().toStdString());
        break;
    }
  }
//   return j;
}

static QVariant VariantFromJSON( const CPLJSONObject &obj )
{
    QVariant v;
    if ( obj.GetType() == CPLJSONObject::Type::Array )
    {
        QVariantList results;
        auto array = obj.ToArray();
        for(const auto &item : array)
        {
            results.push_back( VariantFromJSON( item ) );
        }
        v = results;
    }
    else if ( obj.GetType() == CPLJSONObject::Type::Object )
    {
        QVariantMap results;
        for ( const auto  &item : obj.GetChildren() )
        {
          const auto key { QString::fromStdString( item.GetName() ) };
          const auto value {  VariantFromJSON( item ) };
          results[ key ] = value;
        }
        v = results;
    }
    else if ( obj.GetType() == CPLJSONObject::Type::Integer )
    {
        v = obj.ToInteger();
    }
    else if ( obj.GetType() == CPLJSONObject::Type::Long )
    {
        v = obj.ToLong();
    }
    else if ( obj.GetType() == CPLJSONObject::Type::Double )
    {
        v = obj.ToDouble();
    }
    else if ( obj.GetType() == CPLJSONObject::Type::String )
    {
        v = QString::fromStdString( obj.ToString() );
    }
    else if ( obj.GetType() == CPLJSONObject::Type::Boolean )
    {
        v = obj.ToBool();
    }
    else if ( obj.GetType() == CPLJSONObject::Type::Null )
    {
        // Fallback to int
        v = QVariant( QVariant::Type::Int );
    }
    return v;
}

QgsJsonExporter::QgsJsonExporter( QgsVectorLayer *vectorLayer, int precision )
  : mPrecision( precision )
  , mLayer( vectorLayer )
{
  if ( vectorLayer )
  {
    mCrs = vectorLayer->crs();
    mTransform.setSourceCrs( mCrs );
  }
  mTransform.setDestinationCrs( QgsCoordinateReferenceSystem( QStringLiteral( "EPSG:4326" ) ) );
}

void QgsJsonExporter::setVectorLayer( QgsVectorLayer *vectorLayer )
{
  mLayer = vectorLayer;
  if ( vectorLayer )
  {
    mCrs = vectorLayer->crs();
    mTransform.setSourceCrs( mCrs );
  }
}

QgsVectorLayer *QgsJsonExporter::vectorLayer() const
{
  return mLayer.data();
}

void QgsJsonExporter::setSourceCrs( const QgsCoordinateReferenceSystem &crs )
{
  mCrs = crs;
  mTransform.setSourceCrs( mCrs );
}

QgsCoordinateReferenceSystem QgsJsonExporter::sourceCrs() const
{
  return mCrs;
}

QString QgsJsonExporter::exportFeature( const QgsFeature &feature, const QVariantMap &extraProperties,
                                        const QVariant &id, int indent ) const
{
  return QString::fromStdString( exportFeatureToJsonObject( feature, extraProperties, id ).Format( CPLJSONObject::PrettyFormat::Pretty ) );
}

json QgsJsonExporter::exportFeatureToJsonObject( const QgsFeature &feature, const QVariantMap &extraProperties, const QVariant &id ) const
{
  json featureJson;
  featureJson.Add("type",  "Feature");
  if ( id.isValid() )
  {
    bool ok = false;
    auto intId = id.toLongLong( &ok );
    if ( ok )
    {
      featureJson.Add("id", intId);
    }
    else
    {
      featureJson.Add("id", id.toString().toStdString());
    }
  }
  else if ( FID_IS_NULL( feature.id() ) )
  {
    featureJson.AddNull("id");
  }
  else
  {
    featureJson.Add("id", feature.id());
  }

  QgsGeometry geom = feature.geometry();
  if ( !geom.isNull() && mIncludeGeometry )
  {
    if ( mCrs.isValid() )
    {
      try
      {
        QgsGeometry transformed = geom;
        if ( mTransformGeometries && transformed.transform( mTransform ) == Qgis::GeometryOperationResult::Success )
          geom = transformed;
      }
      catch ( QgsCsException &cse )
      {
        Q_UNUSED( cse )
      }
    }
    QgsRectangle box = geom.boundingBox();

    if ( QgsWkbTypes::flatType( geom.wkbType() ) != QgsWkbTypes::Point )
    {
        CPLJSONArray bbox;
        bbox.Add(qgsRound( box.xMinimum(), mPrecision ));
        bbox.Add(qgsRound( box.xMaximum(), mPrecision ));
        bbox.Add(qgsRound( box.xMaximum(), mPrecision ));
        bbox.Add(qgsRound( box.yMaximum(), mPrecision ));
      featureJson.Add("bbox", bbox);
    }
    featureJson.Add("geometry", geom.asJsonObject( mPrecision ));
  }
  else
  {
    featureJson.AddNull("geometry");
  }

  // build up properties element
  int attributeCounter { 0 };
  json properties;
  if ( mIncludeAttributes || !extraProperties.isEmpty() )
  {
    //read all attribute values from the feature
    if ( mIncludeAttributes )
    {
      QgsFields fields = mLayer ? mLayer->fields() : feature.fields();
      // List of formatters through we want to pass the values
      QStringList formattersAllowList;
      formattersAllowList << QStringLiteral( "KeyValue" )
                          << QStringLiteral( "List" )
                          << QStringLiteral( "ValueRelation" )
                          << QStringLiteral( "ValueMap" );

      for ( int i = 0; i < fields.count(); ++i )
      {
        if ( ( !mAttributeIndexes.isEmpty() && !mAttributeIndexes.contains( i ) ) || mExcludedAttributeIndexes.contains( i ) )
          continue;

        QVariant val = feature.attributes().at( i );

        if ( mLayer )
        {
          const QgsEditorWidgetSetup setup = fields.at( i ).editorWidgetSetup();
          const QgsFieldFormatter *fieldFormatter = QgsApplication::fieldFormatterRegistry()->fieldFormatter( setup.type() );
          if ( formattersAllowList.contains( fieldFormatter->id() ) )
            val = fieldFormatter->representValue( mLayer.data(), i, setup.config(), QVariant(), val );
        }

        QString name = fields.at( i ).name();
        if ( mAttributeDisplayName )
        {
          name = mLayer->attributeDisplayName( i );
        }
        AddjsonFromVariant(properties, name.toStdString(), val );
        attributeCounter++;
      }
    }

    if ( !extraProperties.isEmpty() )
    {
      QVariantMap::const_iterator it = extraProperties.constBegin();
      for ( ; it != extraProperties.constEnd(); ++it )
      {
        AddjsonFromVariant(properties, it.key().toStdString(), it.value());
        attributeCounter++;
      }
    }

    // related attributes
    if ( mLayer && mIncludeRelatedAttributes )
    {
      QList< QgsRelation > relations = QgsProject::instance()->relationManager()->referencedRelations( mLayer.data() );
      for ( const auto &relation : std::as_const( relations ) )
      {
        QgsFeatureRequest req = relation.getRelatedFeaturesRequest( feature );
        req.setFlags( QgsFeatureRequest::NoGeometry );
        QgsVectorLayer *childLayer = relation.referencingLayer();
        json relatedFeatureAttributes;
        if ( childLayer )
        {
          QgsFeatureIterator it = childLayer->getFeatures( req );
          QVector<QVariant> attributeWidgetCaches;
          int fieldIndex = 0;
          const QgsFields fields { childLayer->fields() };
          for ( const QgsField &field : fields )
          {
            QgsEditorWidgetSetup setup = field.editorWidgetSetup();
            QgsFieldFormatter *fieldFormatter = QgsApplication::fieldFormatterRegistry()->fieldFormatter( setup.type() );
            attributeWidgetCaches.append( fieldFormatter->createCache( childLayer, fieldIndex, setup.config() ) );
            fieldIndex++;
          }
          QgsFeature relatedFet;
          while ( it.nextFeature( relatedFet ) )
          {
            for(auto relatedFeatureAttribute : QgsJsonUtils::exportAttributesToJsonObject( relatedFet, childLayer, attributeWidgetCaches ).GetChildren())
            {
                relatedFeatureAttributes.Add(relatedFeatureAttribute.GetName(), relatedFeatureAttribute);
            }            
          }
        }
        properties.Add(relation.name().toStdString(), relatedFeatureAttributes);
        attributeCounter++;
      }
    }
  }
  featureJson.Add("properties", properties);
  return featureJson;
}

QString QgsJsonExporter::exportFeatures( const QgsFeatureList &features, int indent ) const
{
  return QString::fromStdString( exportFeaturesToJsonObject( features ).Format( CPLJSONObject::PrettyFormat::Plain ) );
}

json QgsJsonExporter::exportFeaturesToJsonObject( const QgsFeatureList &features ) const
{
  json data;
  data.Add("type", "FeatureCollection");
  CPLJSONArray featuresArray;
  for ( const QgsFeature &feature : std::as_const( features ) )
  {
      featuresArray.Add( exportFeatureToJsonObject( feature ) );
  }
  data.Add("features", featuresArray);
  return data;
}

//
// QgsJsonUtils
//

QgsFeatureList QgsJsonUtils::stringToFeatureList( const QString &string, const QgsFields &fields, QTextCodec *encoding )
{
  if ( !encoding )
    encoding = QTextCodec::codecForName( "UTF-8" );

  return QgsOgrUtils::stringToFeatureList( string, fields, encoding );
}

QgsFields QgsJsonUtils::stringToFields( const QString &string, QTextCodec *encoding )
{
  if ( !encoding )
    encoding = QTextCodec::codecForName( "UTF-8" );

  return QgsOgrUtils::stringToFields( string, encoding );
}

QString QgsJsonUtils::encodeValue( const QVariant &value )
{
  if ( value.isNull() )
    return QStringLiteral( "null" );

  switch ( value.type() )
  {
    case QVariant::Int:
    case QVariant::UInt:
    case QVariant::LongLong:
    case QVariant::ULongLong:
    case QVariant::Double:
      return value.toString();

    case QVariant::Bool:
      return value.toBool() ? "true" : "false";

    case QVariant::StringList:
    case QVariant::List:
    case QVariant::Map:
      return QString::fromUtf8( QJsonDocument::fromVariant( value ).toJson( QJsonDocument::Compact ) );

    default:
    case QVariant::String:
      QString v = value.toString()
                  .replace( '\\', QLatin1String( "\\\\" ) )
                  .replace( '"', QLatin1String( "\\\"" ) )
                  .replace( '\r', QLatin1String( "\\r" ) )
                  .replace( '\b', QLatin1String( "\\b" ) )
                  .replace( '\t', QLatin1String( "\\t" ) )
                  .replace( '/', QLatin1String( "\\/" ) )
                  .replace( '\n', QLatin1String( "\\n" ) );

      return v.prepend( '"' ).append( '"' );
  }
}

QString QgsJsonUtils::exportAttributes( const QgsFeature &feature, QgsVectorLayer *layer, const QVector<QVariant> &attributeWidgetCaches )
{
  QgsFields fields = feature.fields();
  QString attrs;
  for ( int i = 0; i < fields.count(); ++i )
  {
    if ( i > 0 )
      attrs += QLatin1String( ",\n" );

    QVariant val = feature.attributes().at( i );

    if ( layer )
    {
      QgsEditorWidgetSetup setup = layer->fields().at( i ).editorWidgetSetup();
      QgsFieldFormatter *fieldFormatter = QgsApplication::fieldFormatterRegistry()->fieldFormatter( setup.type() );
      if ( fieldFormatter != QgsApplication::fieldFormatterRegistry()->fallbackFieldFormatter() )
        val = fieldFormatter->representValue( layer, i, setup.config(), attributeWidgetCaches.count() >= i ? attributeWidgetCaches.at( i ) : QVariant(), val );
    }

    attrs += encodeValue( fields.at( i ).name() ) + ':' + encodeValue( val );
  }
  return attrs.prepend( '{' ).append( '}' );
}

QVariantList QgsJsonUtils::parseArray( const QString &json, QVariant::Type type )
{
    QString errorMessage;
    QVariantList result;
    CPLJSONDocument doc;
    if(!doc.LoadMemory(json.toStdString()))
    {
        throw "JSON value must be an array";
    }
    auto obj = doc.GetRoot();
    auto array = obj.ToArray();
    if(!array.IsValid())
    {
        throw "JSON value must be an array";
    }

    for ( const auto &item : array )
    {
      // Create a QVariant from the array item
      QVariant v = VariantFromJSON(item);

      // If a destination type was specified (it's not invalid), try to convert
      if ( type != QVariant::Invalid )
      {
        if ( ! v.convert( static_cast<int>( type ) ) )
        {
          QgsLogger::warning( QStringLiteral( "Cannot convert json array element to specified type, ignoring: %1" ).arg( v.toString() ) );
        }
        else
        {
          result.push_back( v );
        }
      }
      else
      {
        result.push_back( v );
      }
    }

  return result;
}

QVariant QgsJsonUtils::parseJson( const std::string &jsonString )
{
  QString error;
  const QVariant res = parseJson( jsonString, error );

  if ( !error.isEmpty() )
  {
    QgsLogger::warning( QStringLiteral( "Cannot parse json (%1): %2" ).arg( error,
                        QString::fromStdString( jsonString ) ) );
  }
  return res;
}

QVariant QgsJsonUtils::parseJson( const std::string &jsonString, QString &error )
{
    CPLErrorReset();
    CPLJSONDocument doc;
    if(!doc.LoadMemory(jsonString))
    {
        error = QString::fromStdString(CPLGetLastErrorMsg());
        return QVariant();
    }

    auto obj = doc.GetRoot();
    return VariantFromJSON(obj);
}

QVariant QgsJsonUtils::parseJson( const QString &jsonString )
{
  return parseJson( jsonString.toStdString() );
}

json QgsJsonUtils::exportAttributesToJsonObject( const QgsFeature &feature, QgsVectorLayer *layer, const QVector<QVariant> &attributeWidgetCaches )
{
  QgsFields fields = feature.fields();
  json attrs;
  for ( int i = 0; i < fields.count(); ++i )
  {
    QVariant val = feature.attributes().at( i );

    if ( layer )
    {
      QgsEditorWidgetSetup setup = layer->fields().at( i ).editorWidgetSetup();
      QgsFieldFormatter *fieldFormatter = QgsApplication::fieldFormatterRegistry()->fieldFormatter( setup.type() );
      if ( fieldFormatter != QgsApplication::fieldFormatterRegistry()->fallbackFieldFormatter() )
        val = fieldFormatter->representValue( layer, i, setup.config(), attributeWidgetCaches.count() >= i ? attributeWidgetCaches.at( i ) : QVariant(), val );
    }
    AddjsonFromVariant(attrs, fields.at( i ).name().toStdString(), val );
  }
  return attrs;
}
