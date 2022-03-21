/***************************************************************************
                         qgsprocessingmodelchildparametersource.cpp
                         ------------------------------------------
    begin                : June 2017
    copyright            : (C) 2017 by Nyall Dawson
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

#include "qgsprocessingmodelchildparametersource.h"
#include "qgsprocessingparameters.h"
#include "qgsprocessingcontext.h"
#include "qgsprocessingmodelalgorithm.h"

///@cond NOT_STABLE

bool QgsProcessingModelChildParameterSource::operator==( const QgsProcessingModelChildParameterSource &other ) const
{
  if ( mSource != other.mSource )
    return false;

  switch ( mSource )
  {
    case StaticValue:
      return mStaticValue == other.mStaticValue;
    case ChildOutput:
      return mChildId == other.mChildId && mOutputName == other.mOutputName;
    case ModelParameter:
      return mParameterName == other.mParameterName;
    case Expression:
      return mExpression == other.mExpression;
    case ExpressionText:
      return mExpressionText == other.mExpressionText;
    case ModelOutput:
      return true;
  }
  return false;
}

QgsProcessingModelChildParameterSource QgsProcessingModelChildParameterSource::fromStaticValue( const QVariant &value )
{
  QgsProcessingModelChildParameterSource src;
  src.mSource = StaticValue;
  src.mStaticValue = value;
  return src;
}

QgsProcessingModelChildParameterSource QgsProcessingModelChildParameterSource::fromModelParameter( const QString &parameterName )
{
  QgsProcessingModelChildParameterSource src;
  src.mSource = ModelParameter;
  src.mParameterName = parameterName;
  return src;
}

QgsProcessingModelChildParameterSource QgsProcessingModelChildParameterSource::fromChildOutput( const QString &childId, const QString &outputName )
{
  QgsProcessingModelChildParameterSource src;
  src.mSource = ChildOutput;
  src.mChildId = childId;
  src.mOutputName = outputName;
  return src;
}

QgsProcessingModelChildParameterSource QgsProcessingModelChildParameterSource::fromExpression( const QString &expression )
{
  QgsProcessingModelChildParameterSource src;
  src.mSource = Expression;
  src.mExpression = expression;
  return src;
}

QgsProcessingModelChildParameterSource QgsProcessingModelChildParameterSource::fromExpressionText( const QString &text )
{
  QgsProcessingModelChildParameterSource src;
  src.mSource = ExpressionText;
  src.mExpressionText = text;
  return src;
}

QgsProcessingModelChildParameterSource::Source QgsProcessingModelChildParameterSource::source() const
{
  return mSource;
}

void QgsProcessingModelChildParameterSource::setSource( QgsProcessingModelChildParameterSource::Source source )
{
  mSource = source;
}

QVariant QgsProcessingModelChildParameterSource::toVariant() const
{
  QVariantMap map;
  map.insert( QStringLiteral( "source" ), mSource );
  switch ( mSource )
  {
    case ModelParameter:
      map.insert( QStringLiteral( "parameter_name" ), mParameterName );
      break;

    case ChildOutput:
      map.insert( QStringLiteral( "child_id" ), mChildId );
      map.insert( QStringLiteral( "output_name" ), mOutputName );
      break;

    case StaticValue:
      map.insert( QStringLiteral( "static_value" ), mStaticValue );
      break;

    case Expression:
      map.insert( QStringLiteral( "expression" ), mExpression );
      break;

    case ExpressionText:
      map.insert( QStringLiteral( "expression_text" ), mExpressionText );
      break;

    case ModelOutput:
      break;
  }
  return map;
}

bool QgsProcessingModelChildParameterSource::loadVariant( const QVariantMap &map )
{
  mSource = static_cast< Source >( map.value( QStringLiteral( "source" ) ).toInt() );
  switch ( mSource )
  {
    case ModelParameter:
      mParameterName = map.value( QStringLiteral( "parameter_name" ) ).toString();
      break;

    case ChildOutput:
      mChildId = map.value( QStringLiteral( "child_id" ) ).toString();
      mOutputName = map.value( QStringLiteral( "output_name" ) ).toString();
      break;

    case StaticValue:
      mStaticValue = map.value( QStringLiteral( "static_value" ) );
      break;

    case Expression:
      mExpression = map.value( QStringLiteral( "expression" ) ).toString();
      break;

    case ExpressionText:
      mExpressionText = map.value( QStringLiteral( "expression_text" ) ).toString();
      break;

    case ModelOutput:
      break;
  }
  return true;
}

QString QgsProcessingModelChildParameterSource::asPythonCode( const QgsProcessing::PythonOutputType, const QgsProcessingParameterDefinition *definition, const QMap< QString, QString > &friendlyChildNames ) const
{
  switch ( mSource )
  {
    case ModelParameter:
      return QStringLiteral( "parameters['%1']" ).arg( mParameterName );

    case ChildOutput:
      return QStringLiteral( "outputs['%1']['%2']" ).arg( friendlyChildNames.value( mChildId, mChildId ), mOutputName );

    case StaticValue:
      if ( definition )
      {
        QgsProcessingContext c;
        return definition->valueAsPythonString( mStaticValue, c );
      }
      else
      {
        return QgsProcessingUtils::variantToPythonLiteral( mStaticValue );
      }

    case Expression:
      return QStringLiteral( "QgsExpression(%1).evaluate()" ).arg( QgsProcessingUtils::stringToPythonLiteral( mExpression ) );

    case ExpressionText:
      return mExpressionText;

    case ModelOutput:
      return QString();
  }
  return QString();
}

QString QgsProcessingModelChildParameterSource::asPythonComment( const QgsProcessingParameterDefinition *definition ) const
{
  switch ( mSource )
  {
    case ModelParameter:
    case ChildOutput:
    case Expression:
    case ExpressionText:
    case ModelOutput:
      return QString();

    case StaticValue:
      if ( definition )
      {
        QgsProcessingContext c;
        return definition->valueAsPythonComment( mStaticValue, c );
      }
      else
      {
        return QString();
      }
  }
  return QString();
}

QString QgsProcessingModelChildParameterSource::friendlyIdentifier( QgsProcessingModelAlgorithm *model ) const
{
  switch ( mSource )
  {
    case ModelParameter:
      return model ? model->parameterDefinition( mParameterName )->description() : mParameterName;

    case ChildOutput:
    {
      if ( model )
      {
        const QgsProcessingModelChildAlgorithm &alg = model->childAlgorithm( mChildId );
        QString outputName = alg.algorithm() && alg.algorithm()->outputDefinition( mOutputName ) ? alg.algorithm()->outputDefinition( mOutputName )->description() : mOutputName;
        // see if this output has been named by the model designer -- if so, we use that friendly name
        const QMap<QString, QgsProcessingModelOutput> outputs = alg.modelOutputs();
        for ( auto it = outputs.constBegin(); it != outputs.constEnd(); ++it )
        {
          if ( it.value().childOutputName() == mOutputName )
          {
            outputName = it.key();
            break;
          }
        }
        return QObject::tr( "'%1' from algorithm '%2'" ).arg( outputName, alg.description() );
      }
      else
      {
        return QObject::tr( "'%1' from algorithm '%2'" ).arg( mOutputName, mChildId );
      }
    }

    case StaticValue:
      return mStaticValue.toString();

    case Expression:
      return mExpression;

    case ExpressionText:
      return mExpressionText;

    case ModelOutput:
      return QString();
  }
  return QString();
}

QDataStream &operator<<( QDataStream &out, const QgsProcessingModelChildParameterSource &source )
{
  out << source.source();
  out << source.staticValue();
  out << source.parameterName();
  out << source.outputChildId();
  out << source.outputName();
  out << source.expression();
  out << source.expressionText();
  return out;
}

QDataStream &operator>>( QDataStream &in, QgsProcessingModelChildParameterSource &source )
{
  int sourceType;
  QVariant staticValue;
  QString parameterName;
  QString outputChildId;
  QString outputName;
  QString expression;
  QString expressionText;

  in >> sourceType >> staticValue >> parameterName >> outputChildId >> outputName >> expression >> expressionText;

  source.setStaticValue( staticValue );
  source.setParameterName( parameterName );
  source.setOutputChildId( outputChildId );
  source.setOutputName( outputName );
  source.setExpression( expression );
  source.setExpressionText( expressionText );
  source.setSource( static_cast<QgsProcessingModelChildParameterSource::Source>( sourceType ) );
  return in;
}

///@endcond
