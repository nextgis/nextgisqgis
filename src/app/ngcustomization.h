/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS Customization
 * Author:  Dmitry Baryshnikov, dmitry.baryshnikov@nextgis.com
 ******************************************************************************
 *   Copyright (c) 2017 NextGIS, <info@nextgis.com>
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
    NGQgisApp( QSplashScreen *splash, bool restorePlugins = true,
               bool skipVersionCheck = false, QWidget *parent = nullptr,
               Qt::WindowFlags fl = Qt::Window );
    virtual ~NGQgisApp();
protected:
    virtual void setupAppUi();
    virtual void setupNetworkAccessManager();
    virtual void setupDatabase();
    virtual void setupAuthentication();
    virtual void setupStyleSheet();
    virtual void setupCentralContainer(bool skipVersionCheck);
    virtual void createActions() override;
    virtual void createActionGroups() override;
    virtual void createMenus() override;
    virtual void createToolBars() override;
    virtual void createStatusBar() override;
    virtual void readSettings() override;
    virtual void setTheme(const QString &theThemeName) override;
    virtual void updateProjectFromTemplates() override;
    virtual void toggleLogMessageIcon(bool hasLogMessage) override;
    virtual void initLayerTreeView() override;
    virtual void saveRecentProjectPath(const QString &projectPath,
                                       bool savePreviewImage = true) override;
    virtual void fileNewFromDefaultTemplate() override;
    virtual void about() override;
    virtual void loadPythonSupport() override;
    virtual void checkQgisVersion() override;
    virtual void increaseBrightness() override;
    virtual void decreaseBrightness() override;
    virtual void increaseContrast() override;
    virtual void decreaseContrast() override;
    virtual void helpContents() override;
    virtual void apiDocumentation() override;
    virtual void reportaBug() override;
    virtual void supportProviders() override;
    virtual void helpQgisHomePage() override;
    virtual void updateCRSStatusBar() override;
    virtual void activateDeactivateLayerRelatedActions(QgsMapLayer *layer) override;
    virtual void fileNew(bool thePromptToSaveFlag, bool forceBlank) override;
    virtual void projectProperties() override;
    virtual bool addProject(const QString &projectFile) override;
    virtual bool fileSave() override;
    virtual void fileSaveAs() override;
    virtual void functionProfileNG( void ( NGQgisApp::*fnc )(), NGQgisApp *instance, QString name );


private:
    bool mUpdatesCheckStartByUser;
#ifdef NGSTD_USING
    NGQgisUpdater* mNGUpdater;
#endif // NGSTD_USING

private slots:
    void updatesSearchStart();
    void updatesSearchStop(bool updatesAvailable);
	void startUpdate();
};

#endif // NGCUSTOMIZATION_H
