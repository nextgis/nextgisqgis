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

#ifndef QGSAUTHNEXTGISMETHOD_H
#define QGSAUTHNEXTGISMETHOD_H

#include <QObject>
#include <QMutex>

#include "qgsauthconfig.h"
#include "qgsauthmethod.h"
#include "qgsauthmethodmetadata.h"

class QWidget;

class QgsAuthNextGISMethod : public QgsAuthMethod
{
    Q_OBJECT

  public:
    static const QString AUTH_METHOD_KEY;
    static const QString AUTH_METHOD_DESCRIPTION;
    static const QString AUTH_METHOD_DISPLAY_DESCRIPTION;

    explicit QgsAuthNextGISMethod();

    // QgsAuthMethod interface
    QString key() const override;

    QString description() const override;

    QString displayDescription() const override;

    bool updateNetworkRequest( QNetworkRequest &request, const QString &authcfg,
                               const QString &dataprovider = QString() ) override;

    void clearCachedConfig( const QString &authcfg ) override;

    void updateMethodConfig( QgsAuthMethodConfig &mconfig ) override;

#ifdef HAVE_GUI
    QWidget *editWidget( QWidget *parent )const override;
#endif
};

class QgsAuthNextGISMethodMetadata : public QgsAuthMethodMetadata
{
  public:
    QgsAuthNextGISMethodMetadata()
      : QgsAuthMethodMetadata( QgsAuthNextGISMethod::AUTH_METHOD_KEY, QgsAuthNextGISMethod::AUTH_METHOD_DESCRIPTION )
    {}
    QgsAuthNextGISMethod *createAuthMethod() const override {return new QgsAuthNextGISMethod;}
};




#endif // QGSAUTHNEXTGISMETHOD_H
