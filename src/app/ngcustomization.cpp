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

#include "ngcustomization.h"

#include "ngsaboutdialog.h"
#include "qgsmessagelogviewer.h"
#include "qgsmessagebar.h"
#include "qgsmessagebaritem.h"

#include <QMessageBox>

#ifdef NGSTD_USING
#include "core/version.h"
#include "framework/access/access.h"
#include "framework/access/signbutton.h"
#endif // NGSTD_USING

NGQgisApp::NGQgisApp( QSplashScreen *splash, bool restorePlugins, bool skipBadLayers,
             bool skipVersionCheck, const QString &rootProfileLocation,
             const QString &activeProfile, QWidget *parent, Qt::WindowFlags fl )
             : QgisApp( splash, restorePlugins, skipBadLayers, skipVersionCheck, rootProfileLocation, activeProfile, parent, fl)
{
  
#ifdef NGSTD_USING
    mNGUpdater = new NGQgisUpdater(this);
    connect(mNGUpdater, SIGNAL(checkUpdatesStarted()), this, SLOT(updatesSearchStart()));
    connect(mNGUpdater, SIGNAL(checkUpdatesFinished(bool)), this, SLOT(updatesSearchStop(bool)));
#endif // NGSTD_USING
}

NGQgisApp::~NGQgisApp()
{
#ifdef NGSTD_USING
    NGAccess::instance().save();
#endif // NGSTD_USING
}

void NGQgisApp::about()
{
    static NgsAboutDialog *about = new NgsAboutDialog (this);
    about->exec();
}

void NGQgisApp::checkQgisVersion()
{
    QObject* obj = sender();
    mUpdatesCheckStartByUser = (obj == mActionCheckQgisVersion);

    QgsMessageLog::logMessage( tr("Started check updates ..."), QString::null, Qgis::Info );
#ifdef NGSTD_USING
    mNGUpdater->checkUpdates();

    if (mUpdatesCheckStartByUser)
    {
        QApplication::setOverrideCursor(Qt::WaitCursor);
    }
#endif // NGSTD_USING
}

void NGQgisApp::updatesSearchStart()
{
}

void NGQgisApp::updatesSearchStop(bool updatesAvailable)
{
  if (!updatesAvailable && !mUpdatesCheckStartByUser)
    return;

  QWidget *banner = new QWidget;
  QHBoxLayout* bannerLayout = new QHBoxLayout(banner);
  bannerLayout->setContentsMargins(0, 0, 0, 0);
  bannerLayout->setSpacing(20);

  if ( updatesAvailable )
  {
      QLabel* msg = new QLabel(QString("<strong>%1</strong>").arg(this->tr("QGIS updates are available")), banner);
      msg->setTextFormat(Qt::RichText);
      bannerLayout->addWidget(msg);

      QPushButton* upgrade = new QPushButton(this->tr("Update"), banner);
      bannerLayout->addWidget(upgrade);
      connect(upgrade, SIGNAL(clicked(bool)), this, SLOT(startUpdate()));

  }
  else
  {
      QLabel* msg = new QLabel(QString("<strong>%1</strong>").arg(this->tr("There are no available QGIS updates")), banner);
      msg->setTextFormat(Qt::RichText);
      bannerLayout->addWidget(msg);
  }

  bannerLayout->insertStretch(-1, 1);

  QgsMessageBarItem* item = new QgsMessageBarItem(banner);
  this->messageBar()->pushItem(item);
  

  if (mUpdatesCheckStartByUser)
  {
    QApplication::setOverrideCursor(Qt::ArrowCursor);
  }
}

void NGQgisApp::startUpdate()
{
#ifdef NGSTD_USING
    QMessageBox::StandardButton answer = QMessageBox::question(
        static_cast<QWidget*>(parent()),
		tr("Close QGIS?"),
		tr("We'll need to close QGIS to start updating. OK?"),
		QMessageBox::Cancel | QMessageBox::Ok
	);

	if ( QMessageBox::Ok == answer )
	{
		if(saveDirty())
        {
            closeProject();
			QString lastProject;
			if(!mRecentProjects.isEmpty())
				lastProject = mRecentProjects.at( 0 ).path;
            mNGUpdater->startUpdate(lastProject);
            qApp->exit( 0 );
        }
    }
#endif // NGSTD_USING
}