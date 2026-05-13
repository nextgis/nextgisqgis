/********************************************************************************
** Form generated from reading UI file 'qgsbookmarksbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBOOKMARKSBASE_H
#define UI_QGSBOOKMARKSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsBookmarksBase
{
public:
    QAction *actionAdd;
    QAction *actionDelete;
    QAction *actionZoomTo;
    QAction *actionExport;
    QAction *actionImport;
    QWidget *bookmarksDockContents;
    QGridLayout *gridLayout;
    QToolBar *mBookmarkToolbar;
    QTreeView *lstBookmarks;

    void setupUi(QgsDockWidget *QgsBookmarksBase)
    {
        if (QgsBookmarksBase->objectName().isEmpty())
            QgsBookmarksBase->setObjectName(QString::fromUtf8("QgsBookmarksBase"));
        QgsBookmarksBase->resize(424, 334);
        actionAdd = new QAction(QgsBookmarksBase);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionNewBookmark.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon);
        actionDelete = new QAction(QgsBookmarksBase);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon1);
        actionZoomTo = new QAction(QgsBookmarksBase);
        actionZoomTo->setObjectName(QString::fromUtf8("actionZoomTo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToBookmark.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomTo->setIcon(icon2);
        actionExport = new QAction(QgsBookmarksBase);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionSharingExport.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon3);
        actionImport = new QAction(QgsBookmarksBase);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionSharingImport.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport->setIcon(icon4);
        bookmarksDockContents = new QWidget();
        bookmarksDockContents->setObjectName(QString::fromUtf8("bookmarksDockContents"));
        gridLayout = new QGridLayout(bookmarksDockContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mBookmarkToolbar = new QToolBar(bookmarksDockContents);
        mBookmarkToolbar->setObjectName(QString::fromUtf8("mBookmarkToolbar"));
        mBookmarkToolbar->setIconSize(QSize(16, 16));
        mBookmarkToolbar->setFloatable(false);

        gridLayout->addWidget(mBookmarkToolbar, 0, 0, 1, 1);

        lstBookmarks = new QTreeView(bookmarksDockContents);
        lstBookmarks->setObjectName(QString::fromUtf8("lstBookmarks"));
        lstBookmarks->setAlternatingRowColors(true);
        lstBookmarks->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lstBookmarks->setRootIsDecorated(false);
        lstBookmarks->setItemsExpandable(false);
        lstBookmarks->setAnimated(false);
        lstBookmarks->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(lstBookmarks, 1, 0, 1, 1);

        QgsBookmarksBase->setWidget(bookmarksDockContents);

        mBookmarkToolbar->addAction(actionZoomTo);
        mBookmarkToolbar->addAction(actionAdd);
        mBookmarkToolbar->addAction(actionDelete);

        retranslateUi(QgsBookmarksBase);

        QMetaObject::connectSlotsByName(QgsBookmarksBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsBookmarksBase)
    {
        QgsBookmarksBase->setWindowTitle(QCoreApplication::translate("QgsBookmarksBase", "Spatial Bookmark Manager", nullptr));
        actionAdd->setText(QCoreApplication::translate("QgsBookmarksBase", "Add", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd->setToolTip(QCoreApplication::translate("QgsBookmarksBase", "Add bookmark", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("QgsBookmarksBase", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("QgsBookmarksBase", "Delete bookmark", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomTo->setText(QCoreApplication::translate("QgsBookmarksBase", "Zoom to", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomTo->setToolTip(QCoreApplication::translate("QgsBookmarksBase", "Zoom to bookmark", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExport->setText(QCoreApplication::translate("QgsBookmarksBase", "&Export", nullptr));
        actionImport->setText(QCoreApplication::translate("QgsBookmarksBase", "&Import", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsBookmarksBase: public Ui_QgsBookmarksBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBOOKMARKSBASE_H
