/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS Customization
 ******************************************************************************
 *   Copyright (c) 2022 NextGIS, <info@nextgis.com>
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/

#include "qgsauthnextgismethod.h"

#include <core/request.h>
#include <framework/access/access.h>

#ifdef HAVE_GUI
#include "qgsauthnextgisedit.h"
#endif

const QString QgsAuthNextGISMethod::AUTH_METHOD_KEY = QStringLiteral( "NextGIS" );
const QString QgsAuthNextGISMethod::AUTH_METHOD_DESCRIPTION = QStringLiteral( "NextGIS authentication" );
const QString QgsAuthNextGISMethod::AUTH_METHOD_DISPLAY_DESCRIPTION = tr( "NextGIS authentication" );

QgsAuthNextGISMethod::QgsAuthNextGISMethod()
{
  setVersion( 2 );
  setExpansions( QgsAuthMethod::NetworkRequest | QgsAuthMethod::DataSourceUri );
  setDataProviders(QStringList()
      << QStringLiteral("wfs")  // convert to lowercase
      << QStringLiteral("wms")
      << QStringLiteral("ogr")
      << QStringLiteral("gdal"));
}

QString QgsAuthNextGISMethod::key() const
{
  return AUTH_METHOD_KEY;
}

QString QgsAuthNextGISMethod::description() const
{
  return AUTH_METHOD_DESCRIPTION;
}

QString QgsAuthNextGISMethod::displayDescription() const
{
  return AUTH_METHOD_DISPLAY_DESCRIPTION;
}

bool QgsAuthNextGISMethod::updateNetworkRequest( QNetworkRequest &request, const QString &authcfg,
    const QString &dataprovider )
{
    Q_UNUSED(dataprovider)

    if (authcfg == AUTH_METHOD_KEY && request.url().toString() != NGAccess::instance().tokenEndpoint())
    {
        QString authHeader = NGRequest::instance().authHeader(request.url().toString());
        if (!authHeader.isEmpty())
        {
            request.setRawHeader("Authorization", authHeader.replace("Authorization: ", "").toUtf8());
        }
    }
    return true;
}

void QgsAuthNextGISMethod::clearCachedConfig( const QString &authcfg )
{
    Q_UNUSED(authcfg)
}

void QgsAuthNextGISMethod::updateMethodConfig( QgsAuthMethodConfig &mconfig )
{
    Q_UNUSED(mconfig)
}

#ifdef HAVE_GUI
QWidget *QgsAuthNextGISMethod::editWidget( QWidget *parent ) const
{
  return new QgsAuthNextGISEdit( parent );
}
#endif

//////////////////////////////////////////////
// Plugin externals
//////////////////////////////////////////////


#ifndef HAVE_STATIC_PROVIDERS
QGISEXTERN QgsAuthMethodMetadata *authMethodMetadataFactory()
{
  return new QgsAuthNextGISMethodMetadata();
}
#endif



