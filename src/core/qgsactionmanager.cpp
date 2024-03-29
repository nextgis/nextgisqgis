/***************************************************************************
                               qgsactionmanager.cpp

 A class that stores and controls the managment and execution of actions
 associated. Actions are defined to be external programs that are run
 with user-specified inputs that can depend on the value of layer
 attributes.

                             -------------------
    begin                : Oct 24 2004
    copyright            : (C) 2004 by Gavin Macaulay
    email                : gavin at macaulay dot co dot nz

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsactionmanager.h"
#include "qgspythonrunner.h"
#include "qgsrunprocess.h"
#include "qgsvectorlayer.h"
#include "qgsproject.h"
#include <qgslogger.h>
#include "qgsexpression.h"

#include <QList>
#include <QStringList>
#include <QDomElement>
#include <QSettings>
#include <QDesktopServices>
#include <QUrl>
#include <QDir>
#include <QFileInfo>


void QgsActionManager::addAction( QgsAction::ActionType type, const QString& name, const QString& action, bool capture )
{
  mActions << QgsAction( type, name, action, capture );
}

void QgsActionManager::addAction( QgsAction::ActionType type, const QString& name, const QString& action, const QString& icon, bool capture )
{
  mActions << QgsAction( type, name, action, icon, capture );
}

void QgsActionManager::addAction( const QgsAction& action )
{
  mActions << action;
}

void QgsActionManager::removeAction( int index )
{
  if ( index >= 0 && index < mActions.size() )
  {
    mActions.removeAt( index );
  }
}

void QgsActionManager::doAction( int index, const QgsFeature& feat, int defaultValueIndex, const QgsExpressionContextScope &scope )
{
  QgsExpressionContext context = createExpressionContext();
  QgsExpressionContextScope* actionScope = new QgsExpressionContextScope( scope );
  actionScope->addVariable( QgsExpressionContextScope::StaticVariable( QString( "current_field" ), feat.attribute( defaultValueIndex ), true ) );
  context << actionScope;
  doAction( index, feat, context );
}

void QgsActionManager::doAction( int index, const QgsFeature& feat, const QgsExpressionContext& context, const QMap<QString, QVariant> *substitutionMap )
{
  if ( index < 0 || index >= size() )
    return;

  const QgsAction &action = at( index );
  if ( !action.runable() )
    return;

  QgsExpressionContext actionContext( context );

  if ( mLayer )
    actionContext << QgsExpressionContextUtils::layerScope( mLayer );
  actionContext.setFeature( feat );

  QString expandedAction = QgsExpression::replaceExpressionText( action.action(), &actionContext, substitutionMap );
  if ( expandedAction.isEmpty() )
    return;

  QgsAction newAction( action.type(), action.name(), expandedAction, action.capture() );
  runAction( newAction );
}

void QgsActionManager::doAction( int index, const QgsFeature &feat, const QMap<QString, QVariant> *substitutionMap )
{
  if ( index < 0 || index >= size() )
    return;

  const QgsAction &action = at( index );
  if ( !action.runable() )
    return;

  // search for expressions while expanding actions
  QgsExpressionContext context = createExpressionContext();
  context.setFeature( feat );
  QString expandedAction = QgsExpression::replaceExpressionText( action.action(), &context, substitutionMap );
  if ( expandedAction.isEmpty() )
    return;

  QgsAction newAction( action.type(), action.name(), expandedAction, action.capture() );
  runAction( newAction );
}

void QgsActionManager::clearActions()
{
  mActions.clear();
}

QList<QgsAction> QgsActionManager::listActions() const
{
  return mActions;
}

void QgsActionManager::runAction( const QgsAction &action, void ( *executePython )( const QString & ) )
{
  if ( action.type() == QgsAction::OpenUrl )
  {
    QFileInfo finfo( action.action() );
    if ( finfo.exists() && finfo.isFile() )
      QDesktopServices::openUrl( QUrl::fromLocalFile( action.action() ) );
    else
      QDesktopServices::openUrl( QUrl( action.action(), QUrl::TolerantMode ) );
  }
  else if ( action.type() == QgsAction::GenericPython )
  {
    if ( executePython )
    {
      // deprecated
      executePython( action.action() );
    }
    else if ( smPythonExecute )
    {
      // deprecated
      smPythonExecute( action.action() );
    }
    else
    {
      // TODO: capture output from QgsPythonRunner (like QgsRunProcess does)
      QgsPythonRunner::run( action.action() );
    }
  }
  else
  {
    // The QgsRunProcess instance created by this static function
    // deletes itself when no longer needed.
    QgsRunProcess::create( action.action(), action.capture() );
  }
}

QgsExpressionContext QgsActionManager::createExpressionContext() const
{
  QgsExpressionContext context;
  context << QgsExpressionContextUtils::globalScope()
  << QgsExpressionContextUtils::projectScope();
  if ( mLayer )
    context << QgsExpressionContextUtils::layerScope( mLayer );

  return context;
}

QString QgsActionManager::expandAction( QString action, const QgsAttributeMap &attributes,
                                        uint clickedOnValue )
{
  // This function currently replaces all %% characters in the action
  // with the value from values[clickedOnValue].second, and then
  // searches for all strings that go %attribute_name, where
  // attribute_name is found in values[x].first, and replaces any that
  // it finds by values[s].second.

  // Additional substitutions could include symbols for $CWD, $HOME,
  // etc (and their OSX and Windows equivalents)

  // This function will potentially fall apart if any of the
  // substitutions produce text that could match another
  // substitution. May be better to adopt a two pass approach - identify
  // all matches and their substitutions and then do a second pass
  // for the actual substitutions.

  QString expanded_action;
  if ( attributes.contains( clickedOnValue ) )
    expanded_action = action.replace( "%%", attributes[clickedOnValue].toString() );
  else
    expanded_action = action;

  const QgsFields &fields = mLayer->fields();

  for ( int i = 0; i < 4; i++ )
  {
    for ( QgsAttributeMap::const_iterator it = attributes.begin(); it != attributes.end(); ++it )
    {
      int attrIdx = it.key();
      if ( attrIdx < 0 || attrIdx >= fields.count() )
        continue;

      QString to_replace;
      switch ( i )
      {
        case 0:
          to_replace = "[%" + fields[attrIdx].name() + ']';
          break;
        case 1:
          to_replace = "[%" + mLayer->attributeDisplayName( attrIdx ) + ']';
          break;
        case 2:
          to_replace = '%' + fields[attrIdx].name();
          break;
        case 3:
          to_replace = '%' + mLayer->attributeDisplayName( attrIdx );
          break;
      }

      expanded_action = expanded_action.replace( to_replace, it.value().toString() );
    }
  }

  return expanded_action;
}

QString QgsActionManager::expandAction( const QString& action, QgsFeature &feat, const QMap<QString, QVariant> *substitutionMap )
{
  // This function currently replaces each expression between [% and %]
  // in the action with the result of its evaluation on the feature
  // passed as argument.

  // Additional substitutions can be passed through the substitutionMap
  // parameter

  QString expr_action;

  int index = 0;
  while ( index < action.size() )
  {
    QRegExp rx = QRegExp( "\\[%([^\\]]+)%\\]" );

    int pos = rx.indexIn( action, index );
    if ( pos < 0 )
      break;

    int start = index;
    index = pos + rx.matchedLength();

    QString to_replace = rx.cap( 1 ).trimmed();
    QgsDebugMsg( "Found expression: " + to_replace );

    if ( substitutionMap && substitutionMap->contains( to_replace ) )
    {
      expr_action += action.mid( start, pos - start ) + substitutionMap->value( to_replace ).toString();
      continue;
    }

    QgsExpression exp( to_replace );
    if ( exp.hasParserError() )
    {
      QgsDebugMsg( "Expression parser error: " + exp.parserErrorString() );
      expr_action += action.midRef( start, index - start );
      continue;
    }

    QgsExpressionContext context = createExpressionContext();
    context.setFeature( feat );

    QVariant result = exp.evaluate( &context );
    if ( exp.hasEvalError() )
    {
      QgsDebugMsg( "Expression parser eval error: " + exp.evalErrorString() );
      expr_action += action.midRef( start, index - start );
      continue;
    }

    QgsDebugMsg( "Expression result is: " + result.toString() );
    expr_action += action.mid( start, pos - start ) + result.toString();
  }

  expr_action += action.midRef( index );
  return expr_action;
}


bool QgsActionManager::writeXML( QDomNode& layer_node, QDomDocument& doc ) const
{
  QDomElement aActions = doc.createElement( "attributeactions" );
  aActions.setAttribute( "default", mDefaultAction );

  Q_FOREACH ( const QgsAction& action, mActions )
  {
    QDomElement actionSetting = doc.createElement( "actionsetting" );
    actionSetting.setAttribute( "type", action.type() );
    actionSetting.setAttribute( "name", action.name() );
    actionSetting.setAttribute( "shortTitle", action.shortTitle() );
    actionSetting.setAttribute( "icon", action.iconPath() );
    actionSetting.setAttribute( "action", action.action() );
    actionSetting.setAttribute( "capture", action.capture() );
    actionSetting.setAttribute( "showInAttributeTable", action.showInAttributeTable() );
    aActions.appendChild( actionSetting );
  }
  layer_node.appendChild( aActions );

  return true;
}

bool QgsActionManager::readXML( const QDomNode& layer_node )
{
  mActions.clear();

  QDomNode aaNode = layer_node.namedItem( "attributeactions" );

  if ( !aaNode.isNull() )
  {
    mDefaultAction = aaNode.toElement().attribute( "default", 0 ).toInt();

    QDomNodeList actionsettings = aaNode.childNodes();
    for ( int i = 0; i < actionsettings.size(); ++i )
    {
      QDomElement setting = actionsettings.item( i ).toElement();
      mActions.append(
        QgsAction( static_cast< QgsAction::ActionType >( setting.attributeNode( "type" ).value().toInt() ),
                   setting.attributeNode( "name" ).value(),
                   setting.attributeNode( "action" ).value(),
                   setting.attributeNode( "icon" ).value(),
                   setting.attributeNode( "capture" ).value().toInt() != 0,
                   !setting.attributes().contains( "showInAttributeTable" ) || setting.attributeNode( "showInAttributeTable" ).value().toInt() != 0,
                   setting.attributeNode( "shortTitle" ).value()
                 )
      );
    }
  }
  return true;
}

void ( *QgsActionManager::smPythonExecute )( const QString & ) = nullptr;

void QgsActionManager::setPythonExecute( void ( *runPython )( const QString & ) )
{
  smPythonExecute = runPython;
}
