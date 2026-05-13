/********************************************************************************
** Form generated from reading UI file 'qgsmapcanvasdockwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPCANVASDOCKWIDGETBASE_H
#define UI_QGSMAPCANVASDOCKWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMapCanvasWidgetBase
{
public:
    QAction *mActionSetCrs;
    QAction *mActionRename;
    QAction *mActionZoomToSelected;
    QAction *mActionZoomToLayer;
    QAction *mActionZoomToLayers;
    QAction *mActionZoomFullExtent;
    QAction *mActionShowAnnotations;
    QAction *mActionShowCursor;
    QAction *mActionShowExtent;
    QAction *mActionShowLabels;
    QAction *mActionElevationController;
    QVBoxLayout *verticalLayout;
    QToolBar *mToolbar;
    QWidget *mMainWidget;

    void setupUi(QWidget *QgsMapCanvasWidgetBase)
    {
        if (QgsMapCanvasWidgetBase->objectName().isEmpty())
            QgsMapCanvasWidgetBase->setObjectName(QString::fromUtf8("QgsMapCanvasWidgetBase"));
        QgsMapCanvasWidgetBase->resize(216, 138);
        mActionSetCrs = new QAction(QgsMapCanvasWidgetBase);
        mActionSetCrs->setObjectName(QString::fromUtf8("mActionSetCrs"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/CRS.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSetCrs->setIcon(icon);
        mActionRename = new QAction(QgsMapCanvasWidgetBase);
        mActionRename->setObjectName(QString::fromUtf8("mActionRename"));
        mActionZoomToSelected = new QAction(QgsMapCanvasWidgetBase);
        mActionZoomToSelected->setObjectName(QString::fromUtf8("mActionZoomToSelected"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToSelected->setIcon(icon1);
        mActionZoomToLayer = new QAction(QgsMapCanvasWidgetBase);
        mActionZoomToLayer->setObjectName(QString::fromUtf8("mActionZoomToLayer"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToLayer->setIcon(icon2);
        mActionZoomToLayers = new QAction(QgsMapCanvasWidgetBase);
        mActionZoomToLayers->setObjectName(QString::fromUtf8("mActionZoomToLayers"));
        mActionZoomToLayers->setIcon(icon2);
        mActionZoomFullExtent = new QAction(QgsMapCanvasWidgetBase);
        mActionZoomFullExtent->setObjectName(QString::fromUtf8("mActionZoomFullExtent"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomFullExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomFullExtent->setIcon(icon3);
        mActionShowAnnotations = new QAction(QgsMapCanvasWidgetBase);
        mActionShowAnnotations->setObjectName(QString::fromUtf8("mActionShowAnnotations"));
        mActionShowAnnotations->setCheckable(true);
        mActionShowCursor = new QAction(QgsMapCanvasWidgetBase);
        mActionShowCursor->setObjectName(QString::fromUtf8("mActionShowCursor"));
        mActionShowCursor->setCheckable(true);
        mActionShowExtent = new QAction(QgsMapCanvasWidgetBase);
        mActionShowExtent->setObjectName(QString::fromUtf8("mActionShowExtent"));
        mActionShowExtent->setCheckable(true);
        mActionShowLabels = new QAction(QgsMapCanvasWidgetBase);
        mActionShowLabels->setObjectName(QString::fromUtf8("mActionShowLabels"));
        mActionShowLabels->setCheckable(true);
        mActionElevationController = new QAction(QgsMapCanvasWidgetBase);
        mActionElevationController->setObjectName(QString::fromUtf8("mActionElevationController"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mesh/Elevation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mesh/Elevation.svg"), QSize(), QIcon::Normal, QIcon::On);
        mActionElevationController->setIcon(icon4);
        verticalLayout = new QVBoxLayout(QgsMapCanvasWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mToolbar = new QToolBar(QgsMapCanvasWidgetBase);
        mToolbar->setObjectName(QString::fromUtf8("mToolbar"));
        mToolbar->setIconSize(QSize(16, 16));
        mToolbar->setFloatable(false);

        verticalLayout->addWidget(mToolbar);

        mMainWidget = new QWidget(QgsMapCanvasWidgetBase);
        mMainWidget->setObjectName(QString::fromUtf8("mMainWidget"));

        verticalLayout->addWidget(mMainWidget);


        mToolbar->addAction(mActionZoomFullExtent);
        mToolbar->addAction(mActionZoomToSelected);
        mToolbar->addAction(mActionZoomToLayers);

        retranslateUi(QgsMapCanvasWidgetBase);

        QMetaObject::connectSlotsByName(QgsMapCanvasWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMapCanvasWidgetBase)
    {
        QgsMapCanvasWidgetBase->setWindowTitle(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Map Canvas", nullptr));
        mActionSetCrs->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Set Map CRS\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionSetCrs->setToolTip(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Set Map CRS", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRename->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Rename View\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionRename->setToolTip(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Rename View", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionZoomToSelected->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Zoom to &Selection", nullptr));
        mActionZoomToLayer->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Zoom to &Layer", nullptr));
        mActionZoomToLayers->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Zoom to &Layers", nullptr));
        mActionZoomFullExtent->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Zoom &Full", nullptr));
        mActionShowAnnotations->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Show Annotations", nullptr));
#if QT_CONFIG(tooltip)
        mActionShowAnnotations->setToolTip(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Show Annotations", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionShowCursor->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Show Cursor Position", nullptr));
        mActionShowExtent->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Show Main Canvas Extent", nullptr));
        mActionShowLabels->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Show Labels", nullptr));
        mActionElevationController->setText(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Show Elevation Controller", nullptr));
#if QT_CONFIG(tooltip)
        mActionElevationController->setToolTip(QCoreApplication::translate("QgsMapCanvasWidgetBase", "Show elevation filtering control", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsMapCanvasWidgetBase: public Ui_QgsMapCanvasWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPCANVASDOCKWIDGETBASE_H
