/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS Customization
 * Author:  Alexander Lisovenko, alexander.lisovenko@nextgis.com
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
#ifndef NGUPDATER_H
#define NGUPDATER_H


#include <QObject>
#include <QString>
#include <QProcess>


class NGQgisUpdater: public QObject
{
    Q_OBJECT
public:
    NGQgisUpdater( QWidget* parent );
    virtual ~NGQgisUpdater();

    void checkUpdates();
signals:
    void updatesInfoGettingStarted();
    void updatesInfoGettingFinished(bool updatesAvailable);

private:
    const QString updateProgrammPath();
    const QStringList ignorePackages();

private:
    QProcess* mMaintainerProcess;
    bool mUpdatesAvailable;

private slots:
    void maintainerStrated();
    void maintainerErrored(QProcess::ProcessError);
    void maintainerStateChanged(QProcess::ProcessState);
    void maintainerFinished(int code, QProcess::ExitStatus status);
    void maintainerReadyReadStandardOutput();
    void maintainerReadyReadStandardError();
    void startUpdate();
};

#endif //NGUPDATER_H