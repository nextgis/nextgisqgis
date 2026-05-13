/********************************************************************************
** Form generated from reading UI file 'qgsqueryresultwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSQUERYRESULTWIDGETBASE_H
#define UI_QGSQUERYRESULTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspanelwidgetstack.h"

QT_BEGIN_NAMESPACE

class Ui_QgsQueryResultWidgetBase
{
public:
    QAction *mActionCut;
    QAction *mActionCopy;
    QAction *mActionPaste;
    QAction *mActionUndo;
    QAction *mActionRedo;
    QAction *mActionFindReplace;
    QAction *mActionClear;
    QAction *mActionOpenQuery;
    QAction *mActionSaveQuery;
    QAction *mActionSaveQueryAs;
    QAction *mActionShowHistory;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QToolBar *mToolBar;
    QgsPanelWidgetStack *mPanelStack;

    void setupUi(QWidget *QgsQueryResultWidgetBase)
    {
        if (QgsQueryResultWidgetBase->objectName().isEmpty())
            QgsQueryResultWidgetBase->setObjectName(QString::fromUtf8("QgsQueryResultWidgetBase"));
        QgsQueryResultWidgetBase->resize(662, 471);
        QgsQueryResultWidgetBase->setWindowTitle(QString::fromUtf8("Dialog"));
        mActionCut = new QAction(QgsQueryResultWidgetBase);
        mActionCut->setObjectName(QString::fromUtf8("mActionCut"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCut->setIcon(icon);
        mActionCopy = new QAction(QgsQueryResultWidgetBase);
        mActionCopy->setObjectName(QString::fromUtf8("mActionCopy"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCopy->setIcon(icon1);
        mActionPaste = new QAction(QgsQueryResultWidgetBase);
        mActionPaste->setObjectName(QString::fromUtf8("mActionPaste"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionEditPaste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPaste->setIcon(icon2);
        mActionUndo = new QAction(QgsQueryResultWidgetBase);
        mActionUndo->setObjectName(QString::fromUtf8("mActionUndo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionUndo->setIcon(icon3);
        mActionRedo = new QAction(QgsQueryResultWidgetBase);
        mActionRedo->setObjectName(QString::fromUtf8("mActionRedo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionRedo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRedo->setIcon(icon4);
        mActionFindReplace = new QAction(QgsQueryResultWidgetBase);
        mActionFindReplace->setObjectName(QString::fromUtf8("mActionFindReplace"));
        mActionFindReplace->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionFindReplace.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionFindReplace->setIcon(icon5);
        mActionClear = new QAction(QgsQueryResultWidgetBase);
        mActionClear->setObjectName(QString::fromUtf8("mActionClear"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/console/iconClearConsole.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionClear->setIcon(icon6);
        mActionClear->setMenuRole(QAction::NoRole);
        mActionOpenQuery = new QAction(QgsQueryResultWidgetBase);
        mActionOpenQuery->setObjectName(QString::fromUtf8("mActionOpenQuery"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpenQuery->setIcon(icon7);
        mActionSaveQuery = new QAction(QgsQueryResultWidgetBase);
        mActionSaveQuery->setObjectName(QString::fromUtf8("mActionSaveQuery"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveQuery->setIcon(icon8);
        mActionSaveQueryAs = new QAction(QgsQueryResultWidgetBase);
        mActionSaveQueryAs->setObjectName(QString::fromUtf8("mActionSaveQueryAs"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSaveAs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveQueryAs->setIcon(icon9);
        mActionShowHistory = new QAction(QgsQueryResultWidgetBase);
        mActionShowHistory->setObjectName(QString::fromUtf8("mActionShowHistory"));
        mActionShowHistory->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mIconQueryHistory.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowHistory->setIcon(icon10);
        mActionShowHistory->setMenuRole(QAction::NoRole);
        verticalLayout = new QVBoxLayout(QgsQueryResultWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mToolBar = new QToolBar(QgsQueryResultWidgetBase);
        mToolBar->setObjectName(QString::fromUtf8("mToolBar"));

        verticalLayout_2->addWidget(mToolBar);

        mPanelStack = new QgsPanelWidgetStack(QgsQueryResultWidgetBase);
        mPanelStack->setObjectName(QString::fromUtf8("mPanelStack"));

        verticalLayout_2->addWidget(mPanelStack);


        verticalLayout->addLayout(verticalLayout_2);


        mToolBar->addAction(mActionOpenQuery);
        mToolBar->addAction(mActionSaveQuery);
        mToolBar->addAction(mActionSaveQueryAs);
        mToolBar->addSeparator();
        mToolBar->addAction(mActionCut);
        mToolBar->addAction(mActionCopy);
        mToolBar->addAction(mActionPaste);
        mToolBar->addSeparator();
        mToolBar->addAction(mActionUndo);
        mToolBar->addAction(mActionRedo);
        mToolBar->addSeparator();
        mToolBar->addAction(mActionFindReplace);
        mToolBar->addSeparator();
        mToolBar->addAction(mActionClear);
        mToolBar->addAction(mActionShowHistory);

        retranslateUi(QgsQueryResultWidgetBase);

        QMetaObject::connectSlotsByName(QgsQueryResultWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsQueryResultWidgetBase)
    {
        mActionCut->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        mActionCut->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Cut", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionCut->setShortcut(QCoreApplication::translate("QgsQueryResultWidgetBase", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionCopy->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        mActionCopy->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionCopy->setShortcut(QCoreApplication::translate("QgsQueryResultWidgetBase", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionPaste->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        mActionPaste->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionPaste->setShortcut(QCoreApplication::translate("QgsQueryResultWidgetBase", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionUndo->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        mActionUndo->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionUndo->setShortcut(QCoreApplication::translate("QgsQueryResultWidgetBase", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionRedo->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        mActionRedo->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionRedo->setShortcut(QCoreApplication::translate("QgsQueryResultWidgetBase", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionFindReplace->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Find && &Replace", nullptr));
        mActionClear->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Clear", nullptr));
        mActionOpenQuery->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Open Query\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionOpenQuery->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Open Query", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionOpenQuery->setShortcut(QCoreApplication::translate("QgsQueryResultWidgetBase", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSaveQuery->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Save Query\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionSaveQuery->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Save Query", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionSaveQuery->setShortcut(QCoreApplication::translate("QgsQueryResultWidgetBase", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSaveQueryAs->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "Save Query as\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionSaveQueryAs->setToolTip(QCoreApplication::translate("QgsQueryResultWidgetBase", "Save Query as", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionSaveQueryAs->setShortcut(QCoreApplication::translate("QgsQueryResultWidgetBase", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionShowHistory->setText(QCoreApplication::translate("QgsQueryResultWidgetBase", "History", nullptr));
        (void)QgsQueryResultWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsQueryResultWidgetBase: public Ui_QgsQueryResultWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSQUERYRESULTWIDGETBASE_H
