/***************************************************************************
    qgscheckboxwidgetwrapper.cpp
     --------------------------------------
    Date                 : 5.1.2014
    Copyright            : (C) 2014 Matthias Kuhn
    Email                : matthias at opengis dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgscheckboxwidgetwrapper.h"

QgsCheckboxWidgetWrapper::QgsCheckboxWidgetWrapper( QgsVectorLayer *layer, int fieldIdx, QWidget *editor, QWidget *parent )
  : QgsEditorWidgetWrapper( layer, fieldIdx, editor, parent )

{
}


QVariant QgsCheckboxWidgetWrapper::value() const
{
  QVariant v;

  if ( field().type() == QVariant::Bool )
  {
    if ( mGroupBox )
      v = mGroupBox->isChecked();
    else if ( mCheckBox )
      v = mCheckBox->isChecked();
  }
  else
  {
    if ( mGroupBox )
      v = mGroupBox->isChecked() ? config( QStringLiteral( "CheckedState" ) ) : config( QStringLiteral( "UncheckedState" ) );

    else if ( mCheckBox )
      v = mCheckBox->isChecked() ? config( QStringLiteral( "CheckedState" ) ) : config( QStringLiteral( "UncheckedState" ) );
  }

  return v;
}

void QgsCheckboxWidgetWrapper::showIndeterminateState()
{
  if ( mCheckBox )
  {
    whileBlocking( mCheckBox )->setCheckState( Qt::PartiallyChecked );
  }
}

QWidget *QgsCheckboxWidgetWrapper::createWidget( QWidget *parent )
{
  return new QCheckBox( parent );
}

void QgsCheckboxWidgetWrapper::initWidget( QWidget *editor )
{
  mCheckBox = qobject_cast<QCheckBox *>( editor );
  mGroupBox = qobject_cast<QGroupBox *>( editor );

  if ( mCheckBox )
    connect( mCheckBox, &QAbstractButton::toggled, this, [ = ]( bool state )
  {
    Q_NOWARN_DEPRECATED_PUSH
    emit valueChanged( state );
    Q_NOWARN_DEPRECATED_POP
    emit valuesChanged( state );
  } );
  if ( mGroupBox )
    connect( mGroupBox, &QGroupBox::toggled, this, [ = ]( bool state )
  {
    Q_NOWARN_DEPRECATED_PUSH
    emit valueChanged( state );
    Q_NOWARN_DEPRECATED_POP
    emit valuesChanged( state );
  } );
}

bool QgsCheckboxWidgetWrapper::valid() const
{
  return mCheckBox || mGroupBox;
}

void QgsCheckboxWidgetWrapper::updateValues( const QVariant &value, const QVariantList & )
{
  bool state = false;

  if ( field().type() == QVariant::Bool )
  {
    state = value.toBool();
  }
  else
  {
    state = ( value == config( QStringLiteral( "CheckedState" ) ) );
  }
  if ( mGroupBox )
  {
    mGroupBox->setChecked( state );
  }

  if ( mCheckBox )
  {
    mCheckBox->setChecked( state );
  }
}
