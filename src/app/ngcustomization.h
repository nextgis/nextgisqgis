/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS Customization
 * Copyright (c) 2022 NextGIS, <info@nextgis.com>
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
 
#ifndef NGCUSTOMIZATION_H
#define NGCUSTOMIZATION_H

#include "qgisapp.h"

#ifdef NGSTD_USING
#include "ngupdater.h"
#endif // NGSTD_USING

class APP_EXPORT NGQgisApp : public QgisApp
{
    Q_OBJECT
    Q_DISABLE_COPY(NGQgisApp)
public:
    NGQgisApp( QSplashScreen *splash, bool restorePlugins = true, bool skipBadLayers = false,
             bool skipVersionCheck = false, const QString &rootProfileLocation = QString(),
             const QString &activeProfile = QString(),
             QWidget *parent = nullptr, Qt::WindowFlags fl = Qt::Window );
    virtual ~NGQgisApp();
protected:
    void about() override;
    void checkQgisVersion() override;
    virtual void createToolBars() override;
    virtual void functionProfileNG(void (NGQgisApp:: *fnc)(), NGQgisApp *instance, QString name);
    
private:
    bool mUpdatesCheckStartByUser;
    void addNextGISAuthentication();
#ifdef NGSTD_USING
    NGQgisUpdater* mNGUpdater;
#endif // NGSTD_USING

private slots:
    void updatesSearchStart();
    void updatesSearchStop(bool updatesAvailable);
	void startUpdate();
};

#endif // NGCUSTOMIZATION_H
