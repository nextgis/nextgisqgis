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
#include "ngsaboutdialog.h"
#include "ui_ngsaboutdialog.h"
#include "qgsconfig.h"

#include <QSysInfo>

//
// GDAL/OGR includes
//
#include <ogr_api.h>
#include <proj.h>
#include <geos_c.h>

#ifdef HAVE_PGCONFIG
#include <pg_config.h>
#else
#define PG_VERSION "unknown"
#endif

#include <sqlite3.h>

extern "C"
{
#include <spatialite.h>
}

static QString platformStr()
{
    QString os;
#ifdef Q_OS_LINUX
    os = QString("Linux (%1)").arg((QSysInfo::WordSize == 32) ? "i386" : (QSysInfo::WordSize == 64) ? "amd64" : "unknown");
#elif defined Q_OS_WIN
    os = QString("Windows (%1 bit)").arg(QSysInfo::WordSize);
#elif defined Q_OS_MAC
    os = QString("MacOS X (%1 bit)").arg(QSysInfo::WordSize);
#else
    os = QString("Unknown (%1 bit)").arg(QSysInfo::WordSize);
#endif
    return os;
}

NgsAboutDialog::NgsAboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NgsAboutDialog)
{
    ui->setupUi(this);

    QString version(VENDOR " QGIS");

    QFont font = ui->appText->font();
    font.setBold(true);
    font.setPointSize(16);
    ui->appText->setText(version);
    ui->appText->setFont(font);

    QString details = "<html><body>";
    details += "<div style='margin:10;padding:0;line-height:150%;font-size:14px'><br>";
    details += VENDOR " " + tr( "QGIS version" ) + ": " + QLatin1String(VENDOR_VERSION) + "<br>";
    details += tr( "QGIS code base" ) + ": " + QLatin1String(VERSION) + "</div>";

    details += "<hr>";
    details += "<div style='margin:10;padding:0;line-height:150%;font-size:14px'>";

    details += tr( "Platform" ) + ": " + platformStr() + "<br>";
    details += tr( "Compiled against Qt" ) + ": " + QLatin1String(QT_VERSION_STR) + "<br>";
    details += tr( "Running against Qt" )  + ": " + qVersion() + "<br>";

    details += tr( "Compiled against GDAL" ) + ": " + GDAL_RELEASE_NAME + "<br>";
    details += tr( "Running against GDAL" )  + ": " + GDALVersionInfo( "RELEASE_NAME" ) + "<br>";

    details += tr( "Compiled against GEOS" ) + ": " + GEOS_CAPI_VERSION + "<br>";
    details += tr( "Running against GEOS" ) + ": " + GEOSversion() + "<br>";

    details += tr( "PostgreSQL Client Version" ) + ": ";
#ifdef HAVE_POSTGRESQL
    details += PG_VERSION;
#else
    details += tr( "No support." );
#endif
    details += "<br>";

    details += tr( "SpatiaLite Version" ) + ": " + spatialite_version() + "<br>";

    details += tr( "QWT Version" ) + ": " + QWT_VERSION_STR + "<br>";
    details += tr( "PROJ.4 Version" ) + ": " + QString::number( PROJ_VERSION_NUMBER ) + "<br>";

    details += tr( "QScintilla2 Version" ) + ": " + QSCINTILLA_VERSION_STR + "<br>";

#ifdef QGISDEBUG
    details += tr( "This copy of QGIS writes debugging output." ) + "</div>";
#endif

    details += "<hr>";
    details += "<div style='margin:10;padding:0;line-height:150%;font-size:14px' align='center'>";
    details += "<a href='http://nextgis.ru'><b>NextGIS</b></a>";

    details += "</div></body></html>";

    ui->textBrowser->setHtml(details);
}

NgsAboutDialog::~NgsAboutDialog()
{
    delete ui;
}
