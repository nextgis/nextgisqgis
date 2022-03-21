/***************************************************************************
    qgsnewhttpconnection.cpp -  selector for a new HTTP server for WMS, etc.
                             -------------------
    begin                : 3 April 2005
    copyright            : (C) 2005 by Brendan Morley
    email                : morb at ozemail dot com dot au
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include "qgsnewhttpconnection.h"
#include "qgsauthsettingswidget.h"
#include "qgssettings.h"
#include "qgshelp.h"
#include "qgsgui.h"
#include "fromencodedcomponenthelper.h"

#include <QMessageBox>
#include <QUrl>
#include <QPushButton>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QUrlQuery>

QgsNewHttpConnection::QgsNewHttpConnection( QWidget *parent, ConnectionTypes types, const QString &baseKey, const QString &connectionName, QgsNewHttpConnection::Flags flags, Qt::WindowFlags fl )
  : QDialog( parent, fl )
  , mTypes( types )
  , mBaseKey( baseKey )
  , mOriginalConnName( connectionName )
{
  setupUi( this );

  if ( !( flags & FlagShowHttpSettings ) )
    mHttpHeaders->hide();

  QgsGui::enableAutoGeometryRestore( this );

  connect( buttonBox, &QDialogButtonBox::helpRequested, this, &QgsNewHttpConnection::showHelp );

  const thread_local QRegularExpression rx( "/connections-([^/]+)/" );
  const QRegularExpressionMatch rxMatch = rx.match( baseKey );
  if ( rxMatch.hasMatch() )
  {
    QString connectionType( rxMatch.captured( 1 ).toUpper() );
    if ( connectionType == QLatin1String( "WMS" ) )
    {
      connectionType = QStringLiteral( "WMS/WMTS" );
    }
    setWindowTitle( tr( "Create a New %1 Connection" ).arg( connectionType ) );
  }

  // It would be obviously much better to use mBaseKey also for credentials,
  // but for some strange reason a different hardcoded key was used instead.
  // WFS and WMS credentials were mixed with the same key WMS.
  // Only WMS and WFS providers are using QgsNewHttpConnection at this moment
  // using connection-wms and connection-wfs -> parse credential key from it.
  mCredentialsBaseKey = mBaseKey.split( '-' ).last().toUpper();

  txtName->setValidator( new QRegularExpressionValidator( QRegularExpression( "[^\\/]+" ), txtName ) );

  cmbDpiMode->clear();
  cmbDpiMode->addItem( tr( "all" ) );
  cmbDpiMode->addItem( tr( "off" ) );
  cmbDpiMode->addItem( tr( "QGIS" ) );
  cmbDpiMode->addItem( tr( "UMN" ) );
  cmbDpiMode->addItem( tr( "GeoServer" ) );

  cmbVersion->clear();
  cmbVersion->addItem( tr( "Maximum" ) );
  cmbVersion->addItem( tr( "1.0" ) );
  cmbVersion->addItem( tr( "1.1" ) );
  cmbVersion->addItem( tr( "2.0" ) );
  cmbVersion->addItem( tr( "OGC API - Features" ) );
  connect( cmbVersion,
           static_cast<void ( QComboBox::* )( int )>( &QComboBox::currentIndexChanged ),
           this, &QgsNewHttpConnection::wfsVersionCurrentIndexChanged );

  connect( cbxWfsFeaturePaging, &QCheckBox::stateChanged,
           this, &QgsNewHttpConnection::wfsFeaturePagingStateChanged );

  if ( !connectionName.isEmpty() )
  {
    // populate the dialog with the information stored for the connection
    // populate the fields with the stored setting parameters

    const QgsSettings settings;

    const QString key = mBaseKey + connectionName;
    const QString credentialsKey = "qgis/" + mCredentialsBaseKey + '/' + connectionName;
    txtName->setText( connectionName );
    txtUrl->setText( settings.value( key + "/url" ).toString() );
    mHttpHeaders->setFromSettings( settings, key );

    updateServiceSpecificSettings();

    // Authentication
    mAuthSettings->setUsername( settings.value( credentialsKey + "/username" ).toString() );
    mAuthSettings->setPassword( settings.value( credentialsKey + "/password" ).toString() );
    mAuthSettings->setConfigId( settings.value( credentialsKey + "/authcfg" ).toString() );
  }
  mWfsVersionDetectButton->setDisabled( txtUrl->text().isEmpty() );

  if ( !( mTypes & ConnectionWms ) && !( mTypes & ConnectionWcs ) )
  {
    mWmsOptionsGroupBox->setVisible( false );
    mGroupBox->layout()->removeWidget( mWmsOptionsGroupBox );
  }
  if ( !( mTypes & ConnectionWfs ) )
  {
    mWfsOptionsGroupBox->setVisible( false );
    mGroupBox->layout()->removeWidget( mWfsOptionsGroupBox );
  }
  else
  {
    txtUrl->setToolTip( tr( "HTTP address of the WFS service, or landing page of a OGC API service<br>(an ending slash might be needed for some OGC API servers)" ) );
  }

  if ( mTypes & ConnectionWcs )
  {
    cbxIgnoreGetMapURI->setText( tr( "Ignore GetCoverage URI reported in capabilities" ) );
    cbxWmsIgnoreAxisOrientation->setText( tr( "Ignore axis orientation" ) );
    if ( !( mTypes & ConnectionWms ) )
    {
      mWmsOptionsGroupBox->setTitle( tr( "WCS Options" ) );

      cbxIgnoreGetFeatureInfoURI->setVisible( false );
      mGroupBox->layout()->removeWidget( cbxIgnoreGetFeatureInfoURI );

      cmbDpiMode->setVisible( false );
      mGroupBox->layout()->removeWidget( cmbDpiMode );
      lblDpiMode->setVisible( false );
      mGroupBox->layout()->removeWidget( lblDpiMode );
    }
  }

  if ( !( flags & FlagShowTestConnection ) )
  {
    mTestConnectionButton->hide();
    mGroupBox->layout()->removeWidget( mTestConnectionButton );
  }

  if ( flags & FlagHideAuthenticationGroup )
  {
    mAuthGroupBox->hide();
    mGroupBox->layout()->removeWidget( mAuthGroupBox );
  }
  // Adjust height
  const int w = width();
  adjustSize();
  resize( w, height() );

  connect( txtName, &QLineEdit::textChanged, this, &QgsNewHttpConnection::nameChanged );
  connect( txtUrl, &QLineEdit::textChanged, this, &QgsNewHttpConnection::urlChanged );

  buttonBox->button( QDialogButtonBox::Ok )->setDisabled( true );
  connect( txtName, &QLineEdit::textChanged, this, &QgsNewHttpConnection::updateOkButtonState );
  connect( txtUrl, &QLineEdit::textChanged, this, &QgsNewHttpConnection::updateOkButtonState );

  nameChanged( connectionName );
}

void QgsNewHttpConnection::wfsVersionCurrentIndexChanged( int index )
{
  // For now 2019-06-06, leave paging checkable for some WFS version 1.1 servers with support
  cbxWfsFeaturePaging->setEnabled( index == WFS_VERSION_MAX || index >= WFS_VERSION_2_0 );
  lblPageSize->setEnabled( cbxWfsFeaturePaging->isChecked() && ( index == WFS_VERSION_MAX || index >= WFS_VERSION_1_1 ) );
  txtPageSize->setEnabled( cbxWfsFeaturePaging->isChecked() && ( index == WFS_VERSION_MAX || index >= WFS_VERSION_1_1 ) );
  cbxWfsIgnoreAxisOrientation->setEnabled( index != WFS_VERSION_1_0 && index != WFS_VERSION_API_FEATURES_1_0 );
  cbxWfsInvertAxisOrientation->setEnabled( index != WFS_VERSION_API_FEATURES_1_0 );
  wfsUseGml2EncodingForTransactions()->setEnabled( index == WFS_VERSION_1_1 );
}

void QgsNewHttpConnection::wfsFeaturePagingStateChanged( int state )
{
  lblPageSize->setEnabled( state == Qt::Checked );
  txtPageSize->setEnabled( state == Qt::Checked );
}

QString QgsNewHttpConnection::name() const
{
  return txtName->text();
}

QString QgsNewHttpConnection::url() const
{
  return txtUrl->text();
}

void QgsNewHttpConnection::nameChanged( const QString &text )
{
  Q_UNUSED( text )
  buttonBox->button( QDialogButtonBox::Ok )->setDisabled( txtName->text().isEmpty() || txtUrl->text().isEmpty() );
}

void QgsNewHttpConnection::urlChanged( const QString &text )
{
  Q_UNUSED( text )
  buttonBox->button( QDialogButtonBox::Ok )->setDisabled( txtName->text().isEmpty() || txtUrl->text().isEmpty() );
  mWfsVersionDetectButton->setDisabled( txtUrl->text().isEmpty() );
}

void QgsNewHttpConnection::updateOkButtonState()
{
  const bool enabled = !txtName->text().isEmpty() && !txtUrl->text().isEmpty();
  buttonBox->button( QDialogButtonBox::Ok )->setEnabled( enabled );
}

bool QgsNewHttpConnection::validate()
{
  const QgsSettings settings;
  const QString key = mBaseKey + txtName->text();

  // warn if entry was renamed to an existing connection
  if ( ( mOriginalConnName.isNull() || mOriginalConnName.compare( txtName->text(), Qt::CaseInsensitive ) != 0 ) &&
       settings.contains( key + "/url" ) &&
       QMessageBox::question( this,
                              tr( "Save Connection" ),
                              tr( "Should the existing connection %1 be overwritten?" ).arg( txtName->text() ),
                              QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
  {
    return false;
  }

  if ( ! mAuthSettings->password().isEmpty() &&
       QMessageBox::question( this,
                              tr( "Saving Passwords" ),
                              tr( "WARNING: You have entered a password. It will be stored in unsecured plain text in your project files and your home directory (Unix-like OS) or user profile (Windows). If you want to avoid this, press Cancel and either:\n\na) Don't provide a password in the connection settings — it will be requested interactively when needed;\nb) Use the Configuration tab to add your credentials in an HTTP Basic Authentication method and store them in an encrypted database." ),
                              QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
  {
    return false;
  }

  return true;
}

QPushButton *QgsNewHttpConnection::testConnectButton()
{
  return mTestConnectionButton;
}

QgsAuthSettingsWidget *QgsNewHttpConnection::authSettingsWidget()
{
  return mAuthSettings;
}

QPushButton *QgsNewHttpConnection::wfsVersionDetectButton()
{
  return mWfsVersionDetectButton;
}

QComboBox *QgsNewHttpConnection::wfsVersionComboBox()
{
  return cmbVersion;
}

QCheckBox *QgsNewHttpConnection::wfsPagingEnabledCheckBox()
{
  return cbxWfsFeaturePaging;
}

QCheckBox *QgsNewHttpConnection::wfsUseGml2EncodingForTransactions()
{
  return cbxWfsUseGml2EncodingForTransactions;
}

QLineEdit *QgsNewHttpConnection::wfsPageSizeLineEdit()
{
  return txtPageSize;
}

QString QgsNewHttpConnection::wfsSettingsKey( const QString &base, const QString &connectionName ) const
{
  return base + connectionName;
}

QString QgsNewHttpConnection::wmsSettingsKey( const QString &base, const QString &connectionName ) const
{
  return base + connectionName;
}

void QgsNewHttpConnection::updateServiceSpecificSettings()
{
  const QgsSettings settings;
  const QString wfsKey = wfsSettingsKey( mBaseKey, mOriginalConnName );
  const QString wmsKey = wmsSettingsKey( mBaseKey, mOriginalConnName );

  cbxIgnoreGetMapURI->setChecked( settings.value( wmsKey + "/ignoreGetMapURI", false ).toBool() );
  cbxWmsIgnoreReportedLayerExtents->setChecked( settings.value( wmsKey + QStringLiteral( "/ignoreReportedLayerExtents" ), false ).toBool() );
  cbxWfsIgnoreAxisOrientation->setChecked( settings.value( wfsKey + "/ignoreAxisOrientation", false ).toBool() );
  cbxWfsInvertAxisOrientation->setChecked( settings.value( wfsKey + "/invertAxisOrientation", false ).toBool() );
  cbxWfsUseGml2EncodingForTransactions->setChecked( settings.value( wfsKey + "/preferCoordinatesForWfsT11", false ).toBool() );

  cbxWmsIgnoreAxisOrientation->setChecked( settings.value( wmsKey + "/ignoreAxisOrientation", false ).toBool() );
  cbxWmsInvertAxisOrientation->setChecked( settings.value( wmsKey + "/invertAxisOrientation", false ).toBool() );
  cbxIgnoreGetFeatureInfoURI->setChecked( settings.value( wmsKey + "/ignoreGetFeatureInfoURI", false ).toBool() );
  cbxSmoothPixmapTransform->setChecked( settings.value( wmsKey + "/smoothPixmapTransform", false ).toBool() );

  int dpiIdx;
  switch ( settings.value( wmsKey + "/dpiMode", 7 ).toInt() )
  {
    case 0: // off
      dpiIdx = 1;
      break;
    case 1: // QGIS
      dpiIdx = 2;
      break;
    case 2: // UMN
      dpiIdx = 3;
      break;
    case 4: // GeoServer
      dpiIdx = 4;
      break;
    default: // other => all
      dpiIdx = 0;
      break;
  }
  cmbDpiMode->setCurrentIndex( dpiIdx );

  const QString version = settings.value( wfsKey + "/version" ).toString();
  int versionIdx = WFS_VERSION_MAX; // AUTO
  if ( version == QLatin1String( "1.0.0" ) )
    versionIdx = WFS_VERSION_1_0;
  else if ( version == QLatin1String( "1.1.0" ) )
    versionIdx = WFS_VERSION_1_1;
  else if ( version == QLatin1String( "2.0.0" ) )
    versionIdx = WFS_VERSION_2_0;
  else if ( version == QLatin1String( "OGC_API_FEATURES" ) )
    versionIdx = WFS_VERSION_API_FEATURES_1_0;
  cmbVersion->setCurrentIndex( versionIdx );

  // Enable/disable these items per WFS versions
  wfsVersionCurrentIndexChanged( versionIdx );

  mHttpHeaders->setFromSettings( settings, wmsKey );
  txtMaxNumFeatures->setText( settings.value( wfsKey + "/maxnumfeatures" ).toString() );

  // Only default to paging enabled if WFS 2.0.0 or higher
  const bool pagingEnabled = settings.value( wfsKey + "/pagingenabled", ( versionIdx == WFS_VERSION_MAX || versionIdx >= WFS_VERSION_2_0 ) ).toBool();
  txtPageSize->setText( settings.value( wfsKey + "/pagesize" ).toString() );
  cbxWfsFeaturePaging->setChecked( pagingEnabled );
}

QUrl QgsNewHttpConnection::urlTrimmed() const
{
  QUrl url( txtUrl->text().trimmed() );
  QUrlQuery query( url );
  const QList<QPair<QString, QString> > items = query.queryItems( QUrl::FullyEncoded );
  QHash< QString, QPair<QString, QString> > params;
  for ( const QPair<QString, QString> &it : items )
  {
    params.insert( it.first.toUpper(), it );
  }

  if ( params[QStringLiteral( "SERVICE" )].second.toUpper() == "WMS" ||
       params[QStringLiteral( "SERVICE" )].second.toUpper() == "WFS" ||
       params[QStringLiteral( "SERVICE" )].second.toUpper() == "WCS" )
  {
    query.removeQueryItem( params.value( QStringLiteral( "SERVICE" ) ).first );
    query.removeQueryItem( params.value( QStringLiteral( "REQUEST" ) ).first );
    query.removeQueryItem( params.value( QStringLiteral( "FORMAT" ) ).first );
  }

  url.setQuery( query );

  if ( url.path( QUrl::FullyEncoded ).isEmpty() )
  {
    url.setPath( fromEncodedComponent_helper( "/" ) );
  }
  return url;
}

void QgsNewHttpConnection::accept()
{
  QgsSettings settings;
  const QString key = mBaseKey + txtName->text();
  const QString credentialsKey = "qgis/" + mCredentialsBaseKey + '/' + txtName->text();

  if ( !validate() )
    return;

  // on rename delete original entry first
  if ( !mOriginalConnName.isNull() && mOriginalConnName != key )
  {
    settings.remove( mBaseKey + mOriginalConnName );
    settings.remove( "qgis/" + mCredentialsBaseKey + '/' + mOriginalConnName );
    settings.sync();
  }

  const QUrl url( urlTrimmed() );
  settings.setValue( key + "/url", url.toString() );

  const QString wfsKey = wfsSettingsKey( mBaseKey, txtName->text() );
  const QString wmsKey = wmsSettingsKey( mBaseKey, txtName->text() );

  if ( mTypes & ConnectionWfs )
  {
    settings.setValue( wfsKey + "/ignoreAxisOrientation", cbxWfsIgnoreAxisOrientation->isChecked() );
    settings.setValue( wfsKey + "/invertAxisOrientation", cbxWfsInvertAxisOrientation->isChecked() );
    settings.setValue( wfsKey + "/preferCoordinatesForWfsT11", cbxWfsUseGml2EncodingForTransactions->isChecked() );
  }
  if ( mTypes & ConnectionWms || mTypes & ConnectionWcs )
  {
    settings.setValue( wmsKey + "/ignoreAxisOrientation", cbxWmsIgnoreAxisOrientation->isChecked() );
    settings.setValue( wmsKey + "/invertAxisOrientation", cbxWmsInvertAxisOrientation->isChecked() );

    settings.setValue( wmsKey + QStringLiteral( "/ignoreReportedLayerExtents" ), cbxWmsIgnoreReportedLayerExtents->isChecked() );
    settings.setValue( wmsKey + "/ignoreGetMapURI", cbxIgnoreGetMapURI->isChecked() );
    settings.setValue( wmsKey + "/smoothPixmapTransform", cbxSmoothPixmapTransform->isChecked() );

    int dpiMode = 0;
    switch ( cmbDpiMode->currentIndex() )
    {
      case 0: // all => QGIS|UMN|GeoServer
        dpiMode = 7;
        break;
      case 1: // off
        dpiMode = 0;
        break;
      case 2: // QGIS
        dpiMode = 1;
        break;
      case 3: // UMN
        dpiMode = 2;
        break;
      case 4: // GeoServer
        dpiMode = 4;
        break;
    }

    settings.setValue( wmsKey + "/dpiMode", dpiMode );

    mHttpHeaders->updateSettings( settings, wmsKey );
  }
  if ( mTypes & ConnectionWms )
  {
    settings.setValue( wmsKey + "/ignoreGetFeatureInfoURI", cbxIgnoreGetFeatureInfoURI->isChecked() );
  }
  if ( mTypes & ConnectionWfs )
  {
    QString version = QStringLiteral( "auto" );
    switch ( cmbVersion->currentIndex() )
    {
      case WFS_VERSION_MAX:
        version = QStringLiteral( "auto" );
        break;
      case WFS_VERSION_1_0:
        version = QStringLiteral( "1.0.0" );
        break;
      case WFS_VERSION_1_1:
        version = QStringLiteral( "1.1.0" );
        break;
      case WFS_VERSION_2_0:
        version = QStringLiteral( "2.0.0" );
        break;
      case WFS_VERSION_API_FEATURES_1_0:
        version = QStringLiteral( "OGC_API_FEATURES" );
        break;
    }
    settings.setValue( wfsKey + "/version", version );

    settings.setValue( wfsKey + "/maxnumfeatures", txtMaxNumFeatures->text() );

    settings.setValue( wfsKey + "/pagesize", txtPageSize->text() );
    settings.setValue( wfsKey + "/pagingenabled", cbxWfsFeaturePaging->isChecked() );
  }

  settings.setValue( credentialsKey + "/username", mAuthSettings->username() );
  settings.setValue( credentialsKey + "/password", mAuthSettings->password() );

  settings.setValue( credentialsKey + "/authcfg", mAuthSettings->configId() );

  if ( mHttpHeaders->isVisible() )
    mHttpHeaders->updateSettings( settings, key );

  settings.setValue( mBaseKey + "/selected", txtName->text() );

  QDialog::accept();
}

void QgsNewHttpConnection::showHelp()
{
  QgsHelp::openHelp( QStringLiteral( "working_with_ogc/index.html" ) );
}
