/********************************************************************************
** Form generated from reading UI file 'qgsgeorefpluginguibase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOREFPLUGINGUIBASE_H
#define UI_QGSGEOREFPLUGINGUIBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGeorefPluginGuiBase
{
public:
    QAction *mActionOpenRaster;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionZoomToLayer;
    QAction *mActionPan;
    QAction *mActionTransformSettings;
    QAction *mActionAddPoint;
    QAction *mActionDeletePoint;
    QAction *mActionQuit;
    QAction *mActionStartGeoref;
    QAction *mActionGDALScript;
    QAction *mActionLinkGeorefToQgis;
    QAction *mActionLinkQGisToGeoref;
    QAction *mActionSaveGCPpoints;
    QAction *mActionLoadGCPpoints;
    QAction *mActionGeorefConfig;
    QAction *mActionSourceProperties;
    QAction *mActionMoveGCPPoint;
    QAction *mActionZoomNext;
    QAction *mActionZoomLast;
    QAction *mActionLocalHistogramStretch;
    QAction *mActionFullHistogramStretch;
    QAction *mActionReset;
    QAction *mActionOpenVector;
    QAction *mActionAdvancedDigitizingDock;
    QWidget *mCentralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuEdit;
    QMenu *menuSettings;
    QStatusBar *statusbar;
    QToolBar *toolBarFile;
    QToolBar *toolBarEdit;
    QToolBar *toolBarView;
    QgsDockWidget *dockWidgetGCPpoints;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QToolBar *toolBarHistogramStretch;

    void setupUi(QMainWindow *QgsGeorefPluginGuiBase)
    {
        if (QgsGeorefPluginGuiBase->objectName().isEmpty())
            QgsGeorefPluginGuiBase->setObjectName(QString::fromUtf8("QgsGeorefPluginGuiBase"));
        QgsGeorefPluginGuiBase->resize(872, 621);
        mActionOpenRaster = new QAction(QgsGeorefPluginGuiBase);
        mActionOpenRaster->setObjectName(QString::fromUtf8("mActionOpenRaster"));
        mActionZoomIn = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomIn->setObjectName(QString::fromUtf8("mActionZoomIn"));
        mActionZoomOut = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomOut->setObjectName(QString::fromUtf8("mActionZoomOut"));
        mActionZoomToLayer = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomToLayer->setObjectName(QString::fromUtf8("mActionZoomToLayer"));
        mActionPan = new QAction(QgsGeorefPluginGuiBase);
        mActionPan->setObjectName(QString::fromUtf8("mActionPan"));
        mActionTransformSettings = new QAction(QgsGeorefPluginGuiBase);
        mActionTransformSettings->setObjectName(QString::fromUtf8("mActionTransformSettings"));
        mActionAddPoint = new QAction(QgsGeorefPluginGuiBase);
        mActionAddPoint->setObjectName(QString::fromUtf8("mActionAddPoint"));
        mActionDeletePoint = new QAction(QgsGeorefPluginGuiBase);
        mActionDeletePoint->setObjectName(QString::fromUtf8("mActionDeletePoint"));
        mActionQuit = new QAction(QgsGeorefPluginGuiBase);
        mActionQuit->setObjectName(QString::fromUtf8("mActionQuit"));
        mActionStartGeoref = new QAction(QgsGeorefPluginGuiBase);
        mActionStartGeoref->setObjectName(QString::fromUtf8("mActionStartGeoref"));
        mActionGDALScript = new QAction(QgsGeorefPluginGuiBase);
        mActionGDALScript->setObjectName(QString::fromUtf8("mActionGDALScript"));
        mActionLinkGeorefToQgis = new QAction(QgsGeorefPluginGuiBase);
        mActionLinkGeorefToQgis->setObjectName(QString::fromUtf8("mActionLinkGeorefToQgis"));
        mActionLinkGeorefToQgis->setCheckable(true);
        mActionLinkQGisToGeoref = new QAction(QgsGeorefPluginGuiBase);
        mActionLinkQGisToGeoref->setObjectName(QString::fromUtf8("mActionLinkQGisToGeoref"));
        mActionLinkQGisToGeoref->setCheckable(true);
        mActionSaveGCPpoints = new QAction(QgsGeorefPluginGuiBase);
        mActionSaveGCPpoints->setObjectName(QString::fromUtf8("mActionSaveGCPpoints"));
        mActionLoadGCPpoints = new QAction(QgsGeorefPluginGuiBase);
        mActionLoadGCPpoints->setObjectName(QString::fromUtf8("mActionLoadGCPpoints"));
        mActionGeorefConfig = new QAction(QgsGeorefPluginGuiBase);
        mActionGeorefConfig->setObjectName(QString::fromUtf8("mActionGeorefConfig"));
        mActionSourceProperties = new QAction(QgsGeorefPluginGuiBase);
        mActionSourceProperties->setObjectName(QString::fromUtf8("mActionSourceProperties"));
        mActionMoveGCPPoint = new QAction(QgsGeorefPluginGuiBase);
        mActionMoveGCPPoint->setObjectName(QString::fromUtf8("mActionMoveGCPPoint"));
        mActionZoomNext = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomNext->setObjectName(QString::fromUtf8("mActionZoomNext"));
        mActionZoomLast = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomLast->setObjectName(QString::fromUtf8("mActionZoomLast"));
        mActionLocalHistogramStretch = new QAction(QgsGeorefPluginGuiBase);
        mActionLocalHistogramStretch->setObjectName(QString::fromUtf8("mActionLocalHistogramStretch"));
        mActionFullHistogramStretch = new QAction(QgsGeorefPluginGuiBase);
        mActionFullHistogramStretch->setObjectName(QString::fromUtf8("mActionFullHistogramStretch"));
        mActionReset = new QAction(QgsGeorefPluginGuiBase);
        mActionReset->setObjectName(QString::fromUtf8("mActionReset"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconClearText.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionReset->setIcon(icon);
        mActionOpenVector = new QAction(QgsGeorefPluginGuiBase);
        mActionOpenVector->setObjectName(QString::fromUtf8("mActionOpenVector"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionAddOgrLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpenVector->setIcon(icon1);
        mActionAdvancedDigitizingDock = new QAction(QgsGeorefPluginGuiBase);
        mActionAdvancedDigitizingDock->setObjectName(QString::fromUtf8("mActionAdvancedDigitizingDock"));
        mActionAdvancedDigitizingDock->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/cadtools/cad.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAdvancedDigitizingDock->setIcon(icon2);
        mActionAdvancedDigitizingDock->setMenuRole(QAction::MenuRole::NoRole);
        mCentralwidget = new QWidget(QgsGeorefPluginGuiBase);
        mCentralwidget->setObjectName(QString::fromUtf8("mCentralwidget"));
        QgsGeorefPluginGuiBase->setCentralWidget(mCentralwidget);
        menubar = new QMenuBar(QgsGeorefPluginGuiBase);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 872, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        QgsGeorefPluginGuiBase->setMenuBar(menubar);
        statusbar = new QStatusBar(QgsGeorefPluginGuiBase);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QgsGeorefPluginGuiBase->setStatusBar(statusbar);
        toolBarFile = new QToolBar(QgsGeorefPluginGuiBase);
        toolBarFile->setObjectName(QString::fromUtf8("toolBarFile"));
        toolBarFile->setIconSize(QSize(24, 24));
        QgsGeorefPluginGuiBase->addToolBar(Qt::TopToolBarArea, toolBarFile);
        toolBarEdit = new QToolBar(QgsGeorefPluginGuiBase);
        toolBarEdit->setObjectName(QString::fromUtf8("toolBarEdit"));
        toolBarEdit->setIconSize(QSize(24, 24));
        QgsGeorefPluginGuiBase->addToolBar(Qt::TopToolBarArea, toolBarEdit);
        toolBarView = new QToolBar(QgsGeorefPluginGuiBase);
        toolBarView->setObjectName(QString::fromUtf8("toolBarView"));
        toolBarView->setIconSize(QSize(24, 24));
        QgsGeorefPluginGuiBase->addToolBar(Qt::TopToolBarArea, toolBarView);
        dockWidgetGCPpoints = new QgsDockWidget(QgsGeorefPluginGuiBase);
        dockWidgetGCPpoints->setObjectName(QString::fromUtf8("dockWidgetGCPpoints"));
        dockWidgetGCPpoints->setAllowedAreas(Qt::DockWidgetArea::AllDockWidgetAreas);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dockWidgetGCPpoints->setWidget(dockWidgetContents);
        QgsGeorefPluginGuiBase->addDockWidget(Qt::BottomDockWidgetArea, dockWidgetGCPpoints);
        toolBarHistogramStretch = new QToolBar(QgsGeorefPluginGuiBase);
        toolBarHistogramStretch->setObjectName(QString::fromUtf8("toolBarHistogramStretch"));
        QgsGeorefPluginGuiBase->addToolBar(Qt::TopToolBarArea, toolBarHistogramStretch);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menuFile->addAction(mActionReset);
        menuFile->addAction(mActionOpenRaster);
        menuFile->addAction(mActionOpenVector);
        menuFile->addSeparator();
        menuFile->addAction(mActionStartGeoref);
        menuFile->addAction(mActionGDALScript);
        menuFile->addSeparator();
        menuFile->addAction(mActionLoadGCPpoints);
        menuFile->addAction(mActionSaveGCPpoints);
        menuFile->addSeparator();
        menuFile->addAction(mActionQuit);
        menuView->addAction(mActionPan);
        menuView->addAction(mActionZoomIn);
        menuView->addAction(mActionZoomOut);
        menuView->addAction(mActionZoomToLayer);
        menuView->addAction(mActionZoomLast);
        menuView->addAction(mActionZoomNext);
        menuView->addSeparator();
        menuView->addAction(mActionLinkGeorefToQgis);
        menuView->addAction(mActionLinkQGisToGeoref);
        menuEdit->addAction(mActionAddPoint);
        menuEdit->addAction(mActionDeletePoint);
        menuEdit->addAction(mActionMoveGCPPoint);
        menuSettings->addAction(mActionTransformSettings);
        menuSettings->addAction(mActionSourceProperties);
        menuSettings->addAction(mActionGeorefConfig);
        toolBarFile->addAction(mActionOpenRaster);
        toolBarFile->addAction(mActionOpenVector);
        toolBarFile->addSeparator();
        toolBarFile->addAction(mActionStartGeoref);
        toolBarFile->addAction(mActionGDALScript);
        toolBarFile->addSeparator();
        toolBarFile->addAction(mActionLoadGCPpoints);
        toolBarFile->addAction(mActionSaveGCPpoints);
        toolBarFile->addSeparator();
        toolBarFile->addAction(mActionTransformSettings);
        toolBarEdit->addAction(mActionAddPoint);
        toolBarEdit->addAction(mActionDeletePoint);
        toolBarEdit->addAction(mActionMoveGCPPoint);
        toolBarEdit->addAction(mActionAdvancedDigitizingDock);
        toolBarView->addAction(mActionPan);
        toolBarView->addAction(mActionZoomIn);
        toolBarView->addAction(mActionZoomOut);
        toolBarView->addAction(mActionZoomToLayer);
        toolBarView->addAction(mActionZoomLast);
        toolBarView->addAction(mActionZoomNext);
        toolBarView->addSeparator();
        toolBarView->addAction(mActionLinkGeorefToQgis);
        toolBarView->addAction(mActionLinkQGisToGeoref);
        toolBarHistogramStretch->addAction(mActionFullHistogramStretch);
        toolBarHistogramStretch->addAction(mActionLocalHistogramStretch);

        retranslateUi(QgsGeorefPluginGuiBase);

        QMetaObject::connectSlotsByName(QgsGeorefPluginGuiBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsGeorefPluginGuiBase)
    {
        QgsGeorefPluginGuiBase->setWindowTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Georeferencer", nullptr));
        mActionOpenRaster->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Open Raster\342\200\246", nullptr));
#if QT_CONFIG(statustip)
        mActionOpenRaster->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Open raster", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionOpenRaster->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionZoomIn->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Zoom In", nullptr));
#if QT_CONFIG(statustip)
        mActionZoomIn->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Zoom In", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionZoomIn->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionZoomOut->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Zoom Out", nullptr));
#if QT_CONFIG(statustip)
        mActionZoomOut->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Zoom Out", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionZoomOut->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionZoomToLayer->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Zoom to Layer", nullptr));
#if QT_CONFIG(statustip)
        mActionZoomToLayer->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Zoom to Layer", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionZoomToLayer->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionPan->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Pan", nullptr));
#if QT_CONFIG(statustip)
        mActionPan->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Pan", nullptr));
#endif // QT_CONFIG(statustip)
        mActionTransformSettings->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Transformation Settings\342\200\246", nullptr));
#if QT_CONFIG(statustip)
        mActionTransformSettings->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Transformation settings", nullptr));
#endif // QT_CONFIG(statustip)
        mActionAddPoint->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Add GCP Point", nullptr));
#if QT_CONFIG(statustip)
        mActionAddPoint->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Add GCP point", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionAddPoint->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionDeletePoint->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Delete GCP Point", nullptr));
#if QT_CONFIG(statustip)
        mActionDeletePoint->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Delete GCP point", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionDeletePoint->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionQuit->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Close Georeferencer", nullptr));
#if QT_CONFIG(tooltip)
        mActionQuit->setToolTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Close georeferencer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        mActionQuit->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Quit", nullptr));
#endif // QT_CONFIG(statustip)
        mActionStartGeoref->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Start Georeferencing", nullptr));
#if QT_CONFIG(statustip)
        mActionStartGeoref->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Start georeferencing", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionStartGeoref->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionGDALScript->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Generate GDAL Script", nullptr));
#if QT_CONFIG(statustip)
        mActionGDALScript->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Generate GDAL script", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionGDALScript->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionLinkGeorefToQgis->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Link Georeferencer to QGIS", nullptr));
#if QT_CONFIG(statustip)
        mActionLinkGeorefToQgis->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Link Georeferencer to QGIS", nullptr));
#endif // QT_CONFIG(statustip)
        mActionLinkQGisToGeoref->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Link QGIS to Georeferencer", nullptr));
#if QT_CONFIG(statustip)
        mActionLinkQGisToGeoref->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Link QGIS to Georeferencer", nullptr));
#endif // QT_CONFIG(statustip)
        mActionSaveGCPpoints->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Save GCP Points as\342\200\246", nullptr));
#if QT_CONFIG(statustip)
        mActionSaveGCPpoints->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Save GCP points as\342\200\246", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionSaveGCPpoints->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionLoadGCPpoints->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Load GCP Points\342\200\246", nullptr));
#if QT_CONFIG(statustip)
        mActionLoadGCPpoints->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Load GCP points", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        mActionLoadGCPpoints->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionGeorefConfig->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Configure Georeferencer\342\200\246", nullptr));
#if QT_CONFIG(shortcut)
        mActionGeorefConfig->setShortcut(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSourceProperties->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Source Properties\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionSourceProperties->setToolTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Source Properties\342\200\246", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionMoveGCPPoint->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Move GCP Point", nullptr));
#if QT_CONFIG(statustip)
        mActionMoveGCPPoint->setStatusTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Move GCP point", nullptr));
#endif // QT_CONFIG(statustip)
        mActionZoomNext->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Zoom Next", nullptr));
        mActionZoomLast->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Zoom Last", nullptr));
        mActionLocalHistogramStretch->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Local Histogram Stretch", nullptr));
        mActionFullHistogramStretch->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Full Histogram Stretch", nullptr));
        mActionReset->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Reset Georeferencer", nullptr));
        mActionOpenVector->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Open Vector\342\200\246", nullptr));
        mActionAdvancedDigitizingDock->setText(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Advanced Digitizing Dock", nullptr));
#if QT_CONFIG(tooltip)
        mActionAdvancedDigitizingDock->setToolTip(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Show Advanced Digitizing Dock", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "View", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Edit", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Settings", nullptr));
        toolBarFile->setWindowTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "File", nullptr));
        toolBarEdit->setWindowTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Edit", nullptr));
        toolBarView->setWindowTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "View", nullptr));
        dockWidgetGCPpoints->setWindowTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "GCP table", nullptr));
        toolBarHistogramStretch->setWindowTitle(QCoreApplication::translate("QgsGeorefPluginGuiBase", "Histogram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGeorefPluginGuiBase: public Ui_QgsGeorefPluginGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOREFPLUGINGUIBASE_H
