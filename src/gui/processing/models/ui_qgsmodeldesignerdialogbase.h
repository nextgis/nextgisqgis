/********************************************************************************
** Form generated from reading UI file 'qgsmodeldesignerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMODELDESIGNERDIALOGBASE_H
#define UI_QGSMODELDESIGNERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"
#include "qgsfilterlineedit.h"
#include "qgsmodeldesignerinputstreewidget.h"
#include "qgsmodelgraphicsview.h"
#include "qgsprocessingtoolboxtreeview.h"
#include "qgsscrollarea.h"
#include "qgsvariableeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsModelDesignerDialogBase
{
public:
    QAction *mActionOpen;
    QAction *mActionSave;
    QAction *mActionSaveAs;
    QAction *mActionZoomActual;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionExportImage;
    QAction *mActionZoomToItems;
    QAction *mActionExportPdf;
    QAction *mActionExportSvg;
    QAction *mActionExportPython;
    QAction *mActionEditHelp;
    QAction *mActionRun;
    QAction *mActionSaveInProject;
    QAction *mActionClose;
    QAction *mActionShowComments;
    QAction *mActionExportAsScriptAlgorithm;
    QAction *mActionDeleteComponents;
    QAction *mActionSnappingEnabled;
    QAction *mActionSnapSelected;
    QAction *mActionSelectAll;
    QAction *mActionAddGroupBox;
    QAction *mActionValidate;
    QAction *mActionReorderInputs;
    QAction *mActionHidePanels;
    QAction *mActionPan;
    QAction *mActionSelectMoveItem;
    QAction *mActionNew;
    QAction *mActionReorderOutputs;
    QAction *mActionRunSelectedSteps;
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QgsModelGraphicsView *mView;
    QMenuBar *mMenu;
    QMenu *menu_Model;
    QMenu *menuExport;
    QMenu *mMenuView;
    QMenu *mMenuEdit;
    QToolBar *mToolbar;
    QgsDockWidget *mPropertiesDock;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLineEdit *mNameEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *mGroupEdit;
    QSpacerItem *verticalSpacer;
    QgsDockWidget *mInputsDock;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QgsScrollArea *mInputsScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QgsModelDesignerInputsTreeWidget *mInputsTreeWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mReorderInputsButton;
    QSpacerItem *horizontalSpacer;
    QgsDockWidget *mAlgorithmsDock;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_3;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_4;
    QgsFilterLineEdit *mToolboxSearchEdit;
    QgsProcessingToolboxTreeView *mToolboxTree;
    QgsDockWidget *mVariablesDock;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_5;
    QgsVariableEditorWidget *mVariablesEditor;

    void setupUi(QMainWindow *QgsModelDesignerDialogBase)
    {
        if (QgsModelDesignerDialogBase->objectName().isEmpty())
            QgsModelDesignerDialogBase->setObjectName(QString::fromUtf8("QgsModelDesignerDialogBase"));
        QgsModelDesignerDialogBase->resize(786, 596);
        mActionOpen = new QAction(QgsModelDesignerDialogBase);
        mActionOpen->setObjectName(QString::fromUtf8("mActionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpen->setIcon(icon);
        mActionSave = new QAction(QgsModelDesignerDialogBase);
        mActionSave->setObjectName(QString::fromUtf8("mActionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSave->setIcon(icon1);
        mActionSaveAs = new QAction(QgsModelDesignerDialogBase);
        mActionSaveAs->setObjectName(QString::fromUtf8("mActionSaveAs"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSaveAs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveAs->setIcon(icon2);
        mActionZoomActual = new QAction(QgsModelDesignerDialogBase);
        mActionZoomActual->setObjectName(QString::fromUtf8("mActionZoomActual"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomActual.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomActual->setIcon(icon3);
        mActionZoomIn = new QAction(QgsModelDesignerDialogBase);
        mActionZoomIn->setObjectName(QString::fromUtf8("mActionZoomIn"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomIn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomIn->setIcon(icon4);
        mActionZoomOut = new QAction(QgsModelDesignerDialogBase);
        mActionZoomOut->setObjectName(QString::fromUtf8("mActionZoomOut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomOut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomOut->setIcon(icon5);
        mActionExportImage = new QAction(QgsModelDesignerDialogBase);
        mActionExportImage->setObjectName(QString::fromUtf8("mActionExportImage"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveMapAsImage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportImage->setIcon(icon6);
        mActionZoomToItems = new QAction(QgsModelDesignerDialogBase);
        mActionZoomToItems->setObjectName(QString::fromUtf8("mActionZoomToItems"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomFullExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToItems->setIcon(icon7);
        mActionExportPdf = new QAction(QgsModelDesignerDialogBase);
        mActionExportPdf->setObjectName(QString::fromUtf8("mActionExportPdf"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveAsPDF.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportPdf->setIcon(icon8);
        mActionExportSvg = new QAction(QgsModelDesignerDialogBase);
        mActionExportSvg->setObjectName(QString::fromUtf8("mActionExportSvg"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveAsSVG.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportSvg->setIcon(icon9);
        mActionExportPython = new QAction(QgsModelDesignerDialogBase);
        mActionExportPython->setObjectName(QString::fromUtf8("mActionExportPython"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveAsPython.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportPython->setIcon(icon10);
        mActionEditHelp = new QAction(QgsModelDesignerDialogBase);
        mActionEditHelp->setObjectName(QString::fromUtf8("mActionEditHelp"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mActionEditHelpContent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEditHelp->setIcon(icon11);
        mActionRun = new QAction(QgsModelDesignerDialogBase);
        mActionRun->setObjectName(QString::fromUtf8("mActionRun"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mActionStart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRun->setIcon(icon12);
        mActionSaveInProject = new QAction(QgsModelDesignerDialogBase);
        mActionSaveInProject->setObjectName(QString::fromUtf8("mActionSaveInProject"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/mAddToProject.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveInProject->setIcon(icon13);
        mActionClose = new QAction(QgsModelDesignerDialogBase);
        mActionClose->setObjectName(QString::fromUtf8("mActionClose"));
        mActionShowComments = new QAction(QgsModelDesignerDialogBase);
        mActionShowComments->setObjectName(QString::fromUtf8("mActionShowComments"));
        mActionShowComments->setCheckable(true);
        mActionExportAsScriptAlgorithm = new QAction(QgsModelDesignerDialogBase);
        mActionExportAsScriptAlgorithm->setObjectName(QString::fromUtf8("mActionExportAsScriptAlgorithm"));
        mActionExportAsScriptAlgorithm->setIcon(icon10);
        mActionDeleteComponents = new QAction(QgsModelDesignerDialogBase);
        mActionDeleteComponents->setObjectName(QString::fromUtf8("mActionDeleteComponents"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeleteComponents->setIcon(icon14);
        mActionSnappingEnabled = new QAction(QgsModelDesignerDialogBase);
        mActionSnappingEnabled->setObjectName(QString::fromUtf8("mActionSnappingEnabled"));
        mActionSnappingEnabled->setCheckable(true);
        mActionSnapSelected = new QAction(QgsModelDesignerDialogBase);
        mActionSnapSelected->setObjectName(QString::fromUtf8("mActionSnapSelected"));
        mActionSelectAll = new QAction(QgsModelDesignerDialogBase);
        mActionSelectAll->setObjectName(QString::fromUtf8("mActionSelectAll"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/themes/default/mActionSelectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectAll->setIcon(icon15);
        mActionAddGroupBox = new QAction(QgsModelDesignerDialogBase);
        mActionAddGroupBox->setObjectName(QString::fromUtf8("mActionAddGroupBox"));
        mActionValidate = new QAction(QgsModelDesignerDialogBase);
        mActionValidate->setObjectName(QString::fromUtf8("mActionValidate"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/themes/default/mIconSuccess.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionValidate->setIcon(icon16);
        mActionReorderInputs = new QAction(QgsModelDesignerDialogBase);
        mActionReorderInputs->setObjectName(QString::fromUtf8("mActionReorderInputs"));
        mActionHidePanels = new QAction(QgsModelDesignerDialogBase);
        mActionHidePanels->setObjectName(QString::fromUtf8("mActionHidePanels"));
        mActionHidePanels->setCheckable(true);
        mActionPan = new QAction(QgsModelDesignerDialogBase);
        mActionPan->setObjectName(QString::fromUtf8("mActionPan"));
        mActionPan->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/themes/default/mActionPan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPan->setIcon(icon17);
        mActionSelectMoveItem = new QAction(QgsModelDesignerDialogBase);
        mActionSelectMoveItem->setObjectName(QString::fromUtf8("mActionSelectMoveItem"));
        mActionSelectMoveItem->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/themes/default/mActionSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectMoveItem->setIcon(icon18);
        mActionNew = new QAction(QgsModelDesignerDialogBase);
        mActionNew->setObjectName(QString::fromUtf8("mActionNew"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/themes/default/mActionFileNew.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNew->setIcon(icon19);
        mActionReorderOutputs = new QAction(QgsModelDesignerDialogBase);
        mActionReorderOutputs->setObjectName(QString::fromUtf8("mActionReorderOutputs"));
        mActionRunSelectedSteps = new QAction(QgsModelDesignerDialogBase);
        mActionRunSelectedSteps->setObjectName(QString::fromUtf8("mActionRunSelectedSteps"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/themes/default/mActionRunSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRunSelectedSteps->setIcon(icon20);
        centralwidget = new QWidget(QgsModelDesignerDialogBase);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setSpacing(3);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(2, 2, 2, 2);
        mView = new QgsModelGraphicsView(centralwidget);
        mView->setObjectName(QString::fromUtf8("mView"));

        mainLayout->addWidget(mView);

        QgsModelDesignerDialogBase->setCentralWidget(centralwidget);
        mMenu = new QMenuBar(QgsModelDesignerDialogBase);
        mMenu->setObjectName(QString::fromUtf8("mMenu"));
        mMenu->setGeometry(QRect(0, 0, 786, 23));
        menu_Model = new QMenu(mMenu);
        menu_Model->setObjectName(QString::fromUtf8("menu_Model"));
        menuExport = new QMenu(menu_Model);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        mMenuView = new QMenu(mMenu);
        mMenuView->setObjectName(QString::fromUtf8("mMenuView"));
        mMenuEdit = new QMenu(mMenu);
        mMenuEdit->setObjectName(QString::fromUtf8("mMenuEdit"));
        QgsModelDesignerDialogBase->setMenuBar(mMenu);
        mToolbar = new QToolBar(QgsModelDesignerDialogBase);
        mToolbar->setObjectName(QString::fromUtf8("mToolbar"));
        QgsModelDesignerDialogBase->addToolBar(Qt::TopToolBarArea, mToolbar);
        mPropertiesDock = new QgsDockWidget(QgsModelDesignerDialogBase);
        mPropertiesDock->setObjectName(QString::fromUtf8("mPropertiesDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(dockWidgetContents);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 256, 90));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mNameEdit = new QLineEdit(scrollAreaWidgetContents);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

        gridLayout->addWidget(mNameEdit, 0, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mGroupEdit = new QLineEdit(scrollAreaWidgetContents);
        mGroupEdit->setObjectName(QString::fromUtf8("mGroupEdit"));

        gridLayout->addWidget(mGroupEdit, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        mPropertiesDock->setWidget(dockWidgetContents);
        QgsModelDesignerDialogBase->addDockWidget(Qt::LeftDockWidgetArea, mPropertiesDock);
        mInputsDock = new QgsDockWidget(QgsModelDesignerDialogBase);
        mInputsDock->setObjectName(QString::fromUtf8("mInputsDock"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mInputsScrollArea = new QgsScrollArea(dockWidgetContents_2);
        mInputsScrollArea->setObjectName(QString::fromUtf8("mInputsScrollArea"));
        mInputsScrollArea->setFrameShape(QFrame::NoFrame);
        mInputsScrollArea->setFrameShadow(QFrame::Plain);
        mInputsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 256, 173));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mInputsTreeWidget = new QgsModelDesignerInputsTreeWidget(scrollAreaWidgetContents_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mInputsTreeWidget->setHeaderItem(__qtreewidgetitem);
        mInputsTreeWidget->setObjectName(QString::fromUtf8("mInputsTreeWidget"));

        verticalLayout_6->addWidget(mInputsTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 0, -1, 6);
        mReorderInputsButton = new QPushButton(scrollAreaWidgetContents_2);
        mReorderInputsButton->setObjectName(QString::fromUtf8("mReorderInputsButton"));

        horizontalLayout->addWidget(mReorderInputsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout);

        mInputsScrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(mInputsScrollArea);

        mInputsDock->setWidget(dockWidgetContents_2);
        QgsModelDesignerDialogBase->addDockWidget(Qt::LeftDockWidgetArea, mInputsDock);
        mAlgorithmsDock = new QgsDockWidget(QgsModelDesignerDialogBase);
        mAlgorithmsDock->setObjectName(QString::fromUtf8("mAlgorithmsDock"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(dockWidgetContents_3);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setFrameShadow(QFrame::Plain);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 256, 167));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mToolboxSearchEdit = new QgsFilterLineEdit(scrollAreaWidgetContents_3);
        mToolboxSearchEdit->setObjectName(QString::fromUtf8("mToolboxSearchEdit"));

        verticalLayout_4->addWidget(mToolboxSearchEdit);

        mToolboxTree = new QgsProcessingToolboxTreeView(scrollAreaWidgetContents_3);
        mToolboxTree->setObjectName(QString::fromUtf8("mToolboxTree"));
        mToolboxTree->setAlternatingRowColors(true);

        verticalLayout_4->addWidget(mToolboxTree);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollArea_2);

        mAlgorithmsDock->setWidget(dockWidgetContents_3);
        QgsModelDesignerDialogBase->addDockWidget(Qt::LeftDockWidgetArea, mAlgorithmsDock);
        mVariablesDock = new QgsDockWidget(QgsModelDesignerDialogBase);
        mVariablesDock->setObjectName(QString::fromUtf8("mVariablesDock"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mVariablesEditor = new QgsVariableEditorWidget(dockWidgetContents_4);
        mVariablesEditor->setObjectName(QString::fromUtf8("mVariablesEditor"));

        verticalLayout_5->addWidget(mVariablesEditor);

        mVariablesDock->setWidget(dockWidgetContents_4);
        QgsModelDesignerDialogBase->addDockWidget(Qt::LeftDockWidgetArea, mVariablesDock);

        mMenu->addAction(menu_Model->menuAction());
        mMenu->addAction(mMenuEdit->menuAction());
        mMenu->addAction(mMenuView->menuAction());
        menu_Model->addAction(mActionValidate);
        menu_Model->addAction(mActionRun);
        menu_Model->addAction(mActionRunSelectedSteps);
        menu_Model->addSeparator();
        menu_Model->addAction(mActionReorderInputs);
        menu_Model->addAction(mActionReorderOutputs);
        menu_Model->addSeparator();
        menu_Model->addAction(mActionNew);
        menu_Model->addAction(mActionOpen);
        menu_Model->addAction(mActionSave);
        menu_Model->addAction(mActionSaveAs);
        menu_Model->addAction(mActionSaveInProject);
        menu_Model->addAction(mActionEditHelp);
        menu_Model->addSeparator();
        menu_Model->addAction(menuExport->menuAction());
        menu_Model->addSeparator();
        menu_Model->addAction(mActionClose);
        menuExport->addAction(mActionExportImage);
        menuExport->addAction(mActionExportPdf);
        menuExport->addAction(mActionExportSvg);
        menuExport->addSeparator();
        menuExport->addAction(mActionExportPython);
        mMenuView->addAction(mActionZoomIn);
        mMenuView->addAction(mActionZoomOut);
        mMenuView->addAction(mActionZoomActual);
        mMenuView->addAction(mActionZoomToItems);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionShowComments);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionSnappingEnabled);
        mMenuView->addSeparator();
        mMenuView->addAction(mActionHidePanels);
        mMenuEdit->addAction(mActionSelectAll);
        mMenuEdit->addAction(mActionSnapSelected);
        mMenuEdit->addSeparator();
        mMenuEdit->addAction(mActionDeleteComponents);
        mMenuEdit->addSeparator();
        mMenuEdit->addAction(mActionAddGroupBox);
        mToolbar->addAction(mActionNew);
        mToolbar->addAction(mActionOpen);
        mToolbar->addAction(mActionSave);
        mToolbar->addAction(mActionSaveAs);
        mToolbar->addAction(mActionSaveInProject);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionPan);
        mToolbar->addAction(mActionSelectMoveItem);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionZoomIn);
        mToolbar->addAction(mActionZoomOut);
        mToolbar->addAction(mActionZoomActual);
        mToolbar->addAction(mActionZoomToItems);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionExportImage);
        mToolbar->addAction(mActionExportPdf);
        mToolbar->addAction(mActionExportSvg);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionEditHelp);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionRun);

        retranslateUi(QgsModelDesignerDialogBase);

        QMetaObject::connectSlotsByName(QgsModelDesignerDialogBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsModelDesignerDialogBase)
    {
        QgsModelDesignerDialogBase->setWindowTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "Model Designer", nullptr));
        mActionOpen->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Open Model\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionOpen->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Open model", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionOpen->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSave->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Save Model", nullptr));
#if QT_CONFIG(tooltip)
        mActionSave->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Save model", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionSave->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSaveAs->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Save Model as\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionSaveAs->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Save model as", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionSaveAs->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionZoomActual->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Zoom to &100%", nullptr));
#if QT_CONFIG(tooltip)
        mActionZoomActual->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Zoom to 100%", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionZoomActual->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionZoomIn->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        mActionZoomIn->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Zoom in", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionZoomIn->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionZoomOut->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        mActionZoomOut->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Zoom out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionZoomOut->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionExportImage->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export as Image\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionExportImage->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export as image", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionZoomToItems->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Zoom Full", nullptr));
#if QT_CONFIG(tooltip)
        mActionZoomToItems->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Zoom full", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionZoomToItems->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionExportPdf->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export as PDF\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionExportPdf->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export as PDF", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionExportSvg->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export as SVG\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionExportSvg->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export as SVG", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionExportPython->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export as Python Script\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionExportPython->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export as Python Script", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionEditHelp->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Edit Model Help\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionEditHelp->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Edit model help", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRun->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Run Model\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionRun->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Run model", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionRun->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSaveInProject->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Save Model in Project", nullptr));
#if QT_CONFIG(tooltip)
        mActionSaveInProject->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Save model in project", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionClose->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Close", nullptr));
        mActionShowComments->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Show Comments", nullptr));
        mActionExportAsScriptAlgorithm->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export as Script Algorithm\342\200\246", nullptr));
        mActionDeleteComponents->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Delete Selected Components", nullptr));
#if QT_CONFIG(tooltip)
        mActionDeleteComponents->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Delete selected model components", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionDeleteComponents->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSnappingEnabled->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Enable Snapping", nullptr));
        mActionSnapSelected->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Snap Selected Components to Grid", nullptr));
        mActionSelectAll->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Select All", nullptr));
#if QT_CONFIG(shortcut)
        mActionSelectAll->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionAddGroupBox->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Add Group Box", nullptr));
        mActionValidate->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Validate Model", nullptr));
        mActionReorderInputs->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Reorder Model Inputs\342\200\246", nullptr));
        mActionHidePanels->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Toggle Panel &Visibility", nullptr));
#if QT_CONFIG(shortcut)
        mActionHidePanels->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Ctrl+Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionPan->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Pan Layout", nullptr));
#if QT_CONFIG(shortcut)
        mActionPan->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSelectMoveItem->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Select/Move/Link Item", nullptr));
#if QT_CONFIG(tooltip)
        mActionSelectMoveItem->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Select/Move/link item", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionSelectMoveItem->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "V", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionNew->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "New Model\342\200\246", nullptr));
        mActionReorderOutputs->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Reorder Output Layers...", nullptr));
#if QT_CONFIG(tooltip)
        mActionReorderOutputs->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Sets the order for adding layers generated by the model to projects", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRunSelectedSteps->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Run Selected Steps\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionRunSelectedSteps->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Run only the selected steps in the model", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionRunSelectedSteps->setShortcut(QCoreApplication::translate("QgsModelDesignerDialogBase", "Shift+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        menu_Model->setTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "&Model", nullptr));
        menuExport->setTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "Export", nullptr));
        mMenuView->setTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "&View", nullptr));
        mMenuEdit->setTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "&Edit", nullptr));
        mToolbar->setWindowTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "Navigation", nullptr));
        mPropertiesDock->setWindowTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "Model Properties", nullptr));
#if QT_CONFIG(tooltip)
        mNameEdit->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Enter model name here", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Group", nullptr));
#if QT_CONFIG(tooltip)
        mGroupEdit->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Enter group name here", nullptr));
#endif // QT_CONFIG(tooltip)
        mInputsDock->setWindowTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "Inputs", nullptr));
        mReorderInputsButton->setText(QCoreApplication::translate("QgsModelDesignerDialogBase", "Reorder Model Inputs\342\200\246", nullptr));
        mAlgorithmsDock->setWindowTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "Toolbox", nullptr));
#if QT_CONFIG(tooltip)
        mToolboxSearchEdit->setToolTip(QCoreApplication::translate("QgsModelDesignerDialogBase", "Enter algorithm name to filter list", nullptr));
#endif // QT_CONFIG(tooltip)
        mVariablesDock->setWindowTitle(QCoreApplication::translate("QgsModelDesignerDialogBase", "Variables", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsModelDesignerDialogBase: public Ui_QgsModelDesignerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMODELDESIGNERDIALOGBASE_H
