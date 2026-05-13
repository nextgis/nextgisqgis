/********************************************************************************
** Form generated from reading UI file 'qgstableeditorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTABLEEDITORBASE_H
#define UI_QGSTABLEEDITORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTableEditorBase
{
public:
    QAction *mActionSetForeground;
    QAction *mActionSetBackground;
    QAction *mActionInsertRowsAbove;
    QAction *mActionInsertRowsBelow;
    QAction *mActionInsertColumnsBefore;
    QAction *mActionInsertColumnsAfter;
    QAction *mActionDeleteRows;
    QAction *mActionDeleteColumns;
    QAction *mActionSelectAll;
    QAction *mActionSelectRow;
    QAction *mActionSelectColumn;
    QAction *mActionImportFromClipboard;
    QAction *mActionClose;
    QAction *mActionSetRowHeight;
    QAction *mActionSetColumnWidth;
    QAction *mActionClear;
    QAction *mActionIncludeHeader;
    QAction *mActionMergeSelected;
    QAction *mActionSplitSelected;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *mViewFrame;
    QStatusBar *mStatusBar;
    QMenuBar *mMenuBar;
    QMenu *menu_Table;
    QMenu *menuInsert_Rows;
    QMenu *menuInsert_Columns;
    QMenu *menu_Edit;
    QMenu *menuFile;

    void setupUi(QMainWindow *QgsTableEditorBase)
    {
        if (QgsTableEditorBase->objectName().isEmpty())
            QgsTableEditorBase->setObjectName(QString::fromUtf8("QgsTableEditorBase"));
        QgsTableEditorBase->resize(2180, 609);
        QgsTableEditorBase->setMouseTracking(true);
        mActionSetForeground = new QAction(QgsTableEditorBase);
        mActionSetForeground->setObjectName(QString::fromUtf8("mActionSetForeground"));
        mActionSetBackground = new QAction(QgsTableEditorBase);
        mActionSetBackground->setObjectName(QString::fromUtf8("mActionSetBackground"));
        mActionInsertRowsAbove = new QAction(QgsTableEditorBase);
        mActionInsertRowsAbove->setObjectName(QString::fromUtf8("mActionInsertRowsAbove"));
        mActionInsertRowsBelow = new QAction(QgsTableEditorBase);
        mActionInsertRowsBelow->setObjectName(QString::fromUtf8("mActionInsertRowsBelow"));
        mActionInsertColumnsBefore = new QAction(QgsTableEditorBase);
        mActionInsertColumnsBefore->setObjectName(QString::fromUtf8("mActionInsertColumnsBefore"));
        mActionInsertColumnsAfter = new QAction(QgsTableEditorBase);
        mActionInsertColumnsAfter->setObjectName(QString::fromUtf8("mActionInsertColumnsAfter"));
        mActionDeleteRows = new QAction(QgsTableEditorBase);
        mActionDeleteRows->setObjectName(QString::fromUtf8("mActionDeleteRows"));
        mActionDeleteColumns = new QAction(QgsTableEditorBase);
        mActionDeleteColumns->setObjectName(QString::fromUtf8("mActionDeleteColumns"));
        mActionSelectAll = new QAction(QgsTableEditorBase);
        mActionSelectAll->setObjectName(QString::fromUtf8("mActionSelectAll"));
        mActionSelectRow = new QAction(QgsTableEditorBase);
        mActionSelectRow->setObjectName(QString::fromUtf8("mActionSelectRow"));
        mActionSelectColumn = new QAction(QgsTableEditorBase);
        mActionSelectColumn->setObjectName(QString::fromUtf8("mActionSelectColumn"));
        mActionImportFromClipboard = new QAction(QgsTableEditorBase);
        mActionImportFromClipboard->setObjectName(QString::fromUtf8("mActionImportFromClipboard"));
        mActionClose = new QAction(QgsTableEditorBase);
        mActionClose->setObjectName(QString::fromUtf8("mActionClose"));
        mActionSetRowHeight = new QAction(QgsTableEditorBase);
        mActionSetRowHeight->setObjectName(QString::fromUtf8("mActionSetRowHeight"));
        mActionSetColumnWidth = new QAction(QgsTableEditorBase);
        mActionSetColumnWidth->setObjectName(QString::fromUtf8("mActionSetColumnWidth"));
        mActionClear = new QAction(QgsTableEditorBase);
        mActionClear->setObjectName(QString::fromUtf8("mActionClear"));
        mActionIncludeHeader = new QAction(QgsTableEditorBase);
        mActionIncludeHeader->setObjectName(QString::fromUtf8("mActionIncludeHeader"));
        mActionIncludeHeader->setCheckable(true);
        mActionMergeSelected = new QAction(QgsTableEditorBase);
        mActionMergeSelected->setObjectName(QString::fromUtf8("mActionMergeSelected"));
        mActionSplitSelected = new QAction(QgsTableEditorBase);
        mActionSplitSelected->setObjectName(QString::fromUtf8("mActionSplitSelected"));
        centralwidget = new QWidget(QgsTableEditorBase);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMouseTracking(true);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mViewFrame = new QFrame(centralwidget);
        mViewFrame->setObjectName(QString::fromUtf8("mViewFrame"));
        mViewFrame->setMouseTracking(true);
        mViewFrame->setFrameShape(QFrame::Shape::StyledPanel);
        mViewFrame->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout->addWidget(mViewFrame, 0, 0, 1, 1);

        QgsTableEditorBase->setCentralWidget(centralwidget);
        mStatusBar = new QStatusBar(QgsTableEditorBase);
        mStatusBar->setObjectName(QString::fromUtf8("mStatusBar"));
        QgsTableEditorBase->setStatusBar(mStatusBar);
        mMenuBar = new QMenuBar(QgsTableEditorBase);
        mMenuBar->setObjectName(QString::fromUtf8("mMenuBar"));
        mMenuBar->setGeometry(QRect(0, 0, 2180, 23));
        menu_Table = new QMenu(mMenuBar);
        menu_Table->setObjectName(QString::fromUtf8("menu_Table"));
        menuInsert_Rows = new QMenu(menu_Table);
        menuInsert_Rows->setObjectName(QString::fromUtf8("menuInsert_Rows"));
        menuInsert_Columns = new QMenu(menu_Table);
        menuInsert_Columns->setObjectName(QString::fromUtf8("menuInsert_Columns"));
        menu_Edit = new QMenu(mMenuBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menuFile = new QMenu(mMenuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        QgsTableEditorBase->setMenuBar(mMenuBar);

        mMenuBar->addAction(menuFile->menuAction());
        mMenuBar->addAction(menu_Edit->menuAction());
        mMenuBar->addAction(menu_Table->menuAction());
        menu_Table->addAction(menuInsert_Rows->menuAction());
        menu_Table->addAction(menuInsert_Columns->menuAction());
        menu_Table->addAction(mActionDeleteRows);
        menu_Table->addAction(mActionDeleteColumns);
        menu_Table->addSeparator();
        menu_Table->addAction(mActionMergeSelected);
        menu_Table->addAction(mActionSplitSelected);
        menu_Table->addSeparator();
        menu_Table->addAction(mActionIncludeHeader);
        menuInsert_Rows->addAction(mActionInsertRowsAbove);
        menuInsert_Rows->addAction(mActionInsertRowsBelow);
        menuInsert_Columns->addAction(mActionInsertColumnsBefore);
        menuInsert_Columns->addAction(mActionInsertColumnsAfter);
        menu_Edit->addAction(mActionSelectAll);
        menu_Edit->addAction(mActionSelectRow);
        menu_Edit->addAction(mActionSelectColumn);
        menu_Edit->addSeparator();
        menu_Edit->addAction(mActionClear);
        menuFile->addAction(mActionImportFromClipboard);
        menuFile->addSeparator();
        menuFile->addAction(mActionClose);

        retranslateUi(QgsTableEditorBase);

        QMetaObject::connectSlotsByName(QgsTableEditorBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsTableEditorBase)
    {
        QgsTableEditorBase->setWindowTitle(QCoreApplication::translate("QgsTableEditorBase", "Main Window", nullptr));
        mActionSetForeground->setText(QCoreApplication::translate("QgsTableEditorBase", "Set Foreground Color\342\200\246", nullptr));
        mActionSetBackground->setText(QCoreApplication::translate("QgsTableEditorBase", "Set Background Color\342\200\246", nullptr));
        mActionInsertRowsAbove->setText(QCoreApplication::translate("QgsTableEditorBase", "Rows Above", nullptr));
        mActionInsertRowsBelow->setText(QCoreApplication::translate("QgsTableEditorBase", "Rows Below", nullptr));
        mActionInsertColumnsBefore->setText(QCoreApplication::translate("QgsTableEditorBase", "Columns Before", nullptr));
        mActionInsertColumnsAfter->setText(QCoreApplication::translate("QgsTableEditorBase", "Columns After", nullptr));
        mActionDeleteRows->setText(QCoreApplication::translate("QgsTableEditorBase", "Delete Rows", nullptr));
        mActionDeleteColumns->setText(QCoreApplication::translate("QgsTableEditorBase", "Delete Columns", nullptr));
        mActionSelectAll->setText(QCoreApplication::translate("QgsTableEditorBase", "Select All", nullptr));
        mActionSelectRow->setText(QCoreApplication::translate("QgsTableEditorBase", "Select Row", nullptr));
        mActionSelectColumn->setText(QCoreApplication::translate("QgsTableEditorBase", "Select Column", nullptr));
        mActionImportFromClipboard->setText(QCoreApplication::translate("QgsTableEditorBase", "Import Content from Clipboard", nullptr));
        mActionClose->setText(QCoreApplication::translate("QgsTableEditorBase", "Close Editor", nullptr));
        mActionSetRowHeight->setText(QCoreApplication::translate("QgsTableEditorBase", "Set Row Height\342\200\246", nullptr));
        mActionSetColumnWidth->setText(QCoreApplication::translate("QgsTableEditorBase", "Set Column Width\342\200\246", nullptr));
        mActionClear->setText(QCoreApplication::translate("QgsTableEditorBase", "Clear Cell(s)", nullptr));
        mActionIncludeHeader->setText(QCoreApplication::translate("QgsTableEditorBase", "Include Header Row", nullptr));
        mActionMergeSelected->setText(QCoreApplication::translate("QgsTableEditorBase", "Merge Selected Cells", nullptr));
        mActionSplitSelected->setText(QCoreApplication::translate("QgsTableEditorBase", "Split Selected Cells", nullptr));
        menu_Table->setTitle(QCoreApplication::translate("QgsTableEditorBase", "&Table", nullptr));
        menuInsert_Rows->setTitle(QCoreApplication::translate("QgsTableEditorBase", "Insert Rows", nullptr));
        menuInsert_Columns->setTitle(QCoreApplication::translate("QgsTableEditorBase", "Insert Columns", nullptr));
        menu_Edit->setTitle(QCoreApplication::translate("QgsTableEditorBase", "&Edit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("QgsTableEditorBase", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTableEditorBase: public Ui_QgsTableEditorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTABLEEDITORBASE_H
