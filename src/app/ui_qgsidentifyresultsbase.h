/********************************************************************************
** Form generated from reading UI file 'qgsidentifyresultsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSIDENTIFYRESULTSBASE_H
#define UI_QGSIDENTIFYRESULTSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsIdentifyResultsBase
{
public:
    QAction *mExpandAction;
    QAction *mCollapseAction;
    QAction *mExpandNewAction;
    QAction *mOpenFormAction;
    QAction *mClearResultsAction;
    QAction *mActionCopy;
    QAction *mActionPrint;
    QAction *mActionSelectFeatures;
    QAction *mActionSelectFeaturesOnMouseOver;
    QAction *mActionSelectPolygon;
    QAction *mActionSelectFreehand;
    QAction *mActionSelectRadius;
    QAction *mActionAutoFeatureForm;
    QAction *mActionHideDerivedAttributes;
    QAction *mActionShowRelations;
    QAction *mHelpToolAction;
    QAction *mActionHideNullValues;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QVBoxLayout *verticalLayout;
    QToolBar *mIdentifyToolbar;
    QTreeWidget *lstResults;
    QWidget *stackedWidgetPage2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tblResults;
    QWidget *stackedWidgetPage3;
    QVBoxLayout *verticalLayout_3;
    QwtPlot *mPlot;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblIdentifyMode;
    QComboBox *cmbIdentifyMode;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblViewMode;
    QComboBox *cmbViewMode;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *QgsIdentifyResultsBase)
    {
        if (QgsIdentifyResultsBase->objectName().isEmpty())
            QgsIdentifyResultsBase->setObjectName(QString::fromUtf8("QgsIdentifyResultsBase"));
        QgsIdentifyResultsBase->resize(465, 490);
        mExpandAction = new QAction(QgsIdentifyResultsBase);
        mExpandAction->setObjectName(QString::fromUtf8("mExpandAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionExpandTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandAction->setIcon(icon);
        mCollapseAction = new QAction(QgsIdentifyResultsBase);
        mCollapseAction->setObjectName(QString::fromUtf8("mCollapseAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionCollapseTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCollapseAction->setIcon(icon1);
        mExpandNewAction = new QAction(QgsIdentifyResultsBase);
        mExpandNewAction->setObjectName(QString::fromUtf8("mExpandNewAction"));
        mExpandNewAction->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionExpandNewTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandNewAction->setIcon(icon2);
        mOpenFormAction = new QAction(QgsIdentifyResultsBase);
        mOpenFormAction->setObjectName(QString::fromUtf8("mOpenFormAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionFormView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOpenFormAction->setIcon(icon3);
        mClearResultsAction = new QAction(QgsIdentifyResultsBase);
        mClearResultsAction->setObjectName(QString::fromUtf8("mClearResultsAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionDeselectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mClearResultsAction->setIcon(icon4);
        mActionCopy = new QAction(QgsIdentifyResultsBase);
        mActionCopy->setObjectName(QString::fromUtf8("mActionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCopy->setIcon(icon5);
        mActionPrint = new QAction(QgsIdentifyResultsBase);
        mActionPrint->setObjectName(QString::fromUtf8("mActionPrint"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionFilePrint.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPrint->setIcon(icon6);
        mActionSelectFeatures = new QAction(QgsIdentifyResultsBase);
        mActionSelectFeatures->setObjectName(QString::fromUtf8("mActionSelectFeatures"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionIdentifyByRectangle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectFeatures->setIcon(icon7);
        mActionSelectFeaturesOnMouseOver = new QAction(QgsIdentifyResultsBase);
        mActionSelectFeaturesOnMouseOver->setObjectName(QString::fromUtf8("mActionSelectFeaturesOnMouseOver"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionIdentifyByMouseOver.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectFeaturesOnMouseOver->setIcon(icon8);
        mActionSelectPolygon = new QAction(QgsIdentifyResultsBase);
        mActionSelectPolygon->setObjectName(QString::fromUtf8("mActionSelectPolygon"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionIdentifyByPolygon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectPolygon->setIcon(icon9);
        mActionSelectFreehand = new QAction(QgsIdentifyResultsBase);
        mActionSelectFreehand->setObjectName(QString::fromUtf8("mActionSelectFreehand"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionIdentifyByFreehand.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectFreehand->setIcon(icon10);
        mActionSelectRadius = new QAction(QgsIdentifyResultsBase);
        mActionSelectRadius->setObjectName(QString::fromUtf8("mActionSelectRadius"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mActionIdentifyByRadius.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectRadius->setIcon(icon11);
        mActionAutoFeatureForm = new QAction(QgsIdentifyResultsBase);
        mActionAutoFeatureForm->setObjectName(QString::fromUtf8("mActionAutoFeatureForm"));
        mActionAutoFeatureForm->setCheckable(true);
        mActionHideDerivedAttributes = new QAction(QgsIdentifyResultsBase);
        mActionHideDerivedAttributes->setObjectName(QString::fromUtf8("mActionHideDerivedAttributes"));
        mActionHideDerivedAttributes->setCheckable(true);
        mActionShowRelations = new QAction(QgsIdentifyResultsBase);
        mActionShowRelations->setObjectName(QString::fromUtf8("mActionShowRelations"));
        mActionShowRelations->setCheckable(true);
        mHelpToolAction = new QAction(QgsIdentifyResultsBase);
        mHelpToolAction->setObjectName(QString::fromUtf8("mHelpToolAction"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mActionHelpContents.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mHelpToolAction->setIcon(icon12);
        mActionHideNullValues = new QAction(QgsIdentifyResultsBase);
        mActionHideNullValues->setObjectName(QString::fromUtf8("mActionHideNullValues"));
        mActionHideNullValues->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(QgsIdentifyResultsBase);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(QgsIdentifyResultsBase);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        verticalLayout = new QVBoxLayout(stackedWidgetPage1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mIdentifyToolbar = new QToolBar(stackedWidgetPage1);
        mIdentifyToolbar->setObjectName(QString::fromUtf8("mIdentifyToolbar"));
        mIdentifyToolbar->setIconSize(QSize(16, 16));
        mIdentifyToolbar->setFloatable(false);

        verticalLayout->addWidget(mIdentifyToolbar);

        lstResults = new QTreeWidget(stackedWidgetPage1);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        lstResults->setHeaderItem(__qtreewidgetitem);
        lstResults->setObjectName(QString::fromUtf8("lstResults"));
        lstResults->setLineWidth(2);
        lstResults->setAlternatingRowColors(true);
        lstResults->setSortingEnabled(true);

        verticalLayout->addWidget(lstResults);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        verticalLayout_2 = new QVBoxLayout(stackedWidgetPage2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tblResults = new QTableWidget(stackedWidgetPage2);
        if (tblResults->columnCount() < 4)
            tblResults->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tblResults->setObjectName(QString::fromUtf8("tblResults"));
        tblResults->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblResults->setSortingEnabled(false);

        verticalLayout_2->addWidget(tblResults);

        stackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QString::fromUtf8("stackedWidgetPage3"));
        verticalLayout_3 = new QVBoxLayout(stackedWidgetPage3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mPlot = new QwtPlot(stackedWidgetPage3);
        mPlot->setObjectName(QString::fromUtf8("mPlot"));

        verticalLayout_3->addWidget(mPlot);

        stackedWidget->addWidget(stackedWidgetPage3);

        verticalLayout_4->addWidget(stackedWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, -1);
        lblIdentifyMode = new QLabel(QgsIdentifyResultsBase);
        lblIdentifyMode->setObjectName(QString::fromUtf8("lblIdentifyMode"));

        horizontalLayout_2->addWidget(lblIdentifyMode);

        cmbIdentifyMode = new QComboBox(QgsIdentifyResultsBase);
        cmbIdentifyMode->setObjectName(QString::fromUtf8("cmbIdentifyMode"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbIdentifyMode->sizePolicy().hasHeightForWidth());
        cmbIdentifyMode->setSizePolicy(sizePolicy);
        cmbIdentifyMode->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        cmbIdentifyMode->setMinimumContentsLength(6);

        horizontalLayout_2->addWidget(cmbIdentifyMode);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, -1, 5, -1);
        lblViewMode = new QLabel(QgsIdentifyResultsBase);
        lblViewMode->setObjectName(QString::fromUtf8("lblViewMode"));

        horizontalLayout_3->addWidget(lblViewMode);

        cmbViewMode = new QComboBox(QgsIdentifyResultsBase);
        cmbViewMode->setObjectName(QString::fromUtf8("cmbViewMode"));

        horizontalLayout_3->addWidget(cmbViewMode);

        horizontalSpacer_2 = new QSpacerItem(58, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_3);


        mIdentifyToolbar->addAction(mOpenFormAction);
        mIdentifyToolbar->addSeparator();
        mIdentifyToolbar->addAction(mExpandAction);
        mIdentifyToolbar->addAction(mCollapseAction);
        mIdentifyToolbar->addAction(mExpandNewAction);
        mIdentifyToolbar->addSeparator();
        mIdentifyToolbar->addAction(mClearResultsAction);
        mIdentifyToolbar->addSeparator();
        mIdentifyToolbar->addAction(mActionCopy);
        mIdentifyToolbar->addAction(mActionPrint);
        mIdentifyToolbar->addSeparator();

        retranslateUi(QgsIdentifyResultsBase);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsIdentifyResultsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsIdentifyResultsBase)
    {
        QgsIdentifyResultsBase->setWindowTitle(QCoreApplication::translate("QgsIdentifyResultsBase", "Identify Results", nullptr));
        mExpandAction->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Expand Tree", nullptr));
        mCollapseAction->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Collapse Tree", nullptr));
#if QT_CONFIG(tooltip)
        mCollapseAction->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Collapse Tree", nullptr));
#endif // QT_CONFIG(tooltip)
        mExpandNewAction->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Expand New Results", nullptr));
#if QT_CONFIG(tooltip)
        mExpandNewAction->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Expand New Results by Default", nullptr));
#endif // QT_CONFIG(tooltip)
        mOpenFormAction->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Open Form", nullptr));
#if QT_CONFIG(tooltip)
        mOpenFormAction->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Open Form", nullptr));
#endif // QT_CONFIG(tooltip)
        mClearResultsAction->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Clear Results", nullptr));
#if QT_CONFIG(tooltip)
        mClearResultsAction->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Clear Results", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionCopy->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Copy Feature", nullptr));
#if QT_CONFIG(tooltip)
        mActionCopy->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Copy the Identified Feature to Clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionPrint->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Print Response", nullptr));
#if QT_CONFIG(tooltip)
        mActionPrint->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Print Selected HTML Response", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSelectFeatures->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Identify Feature(s)", nullptr));
#if QT_CONFIG(tooltip)
        mActionSelectFeatures->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Identify Features by area or single click", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSelectFeaturesOnMouseOver->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Identify Feature(s) on Mouse Over", nullptr));
#if QT_CONFIG(tooltip)
        mActionSelectFeaturesOnMouseOver->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Identify Features by hovering on a feature with the mouse", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSelectPolygon->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Identify Features by Polygon", nullptr));
        mActionSelectFreehand->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Identify Features by Freehand", nullptr));
        mActionSelectRadius->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Identify Features by Radius", nullptr));
        mActionAutoFeatureForm->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Auto open form for single feature results", nullptr));
        mActionHideDerivedAttributes->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Hide Derived Attributes from Results", nullptr));
#if QT_CONFIG(tooltip)
        mActionHideDerivedAttributes->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Hide derived attributes from results", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionShowRelations->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Show Relations", nullptr));
#if QT_CONFIG(tooltip)
        mActionShowRelations->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Show Relations", nullptr));
#endif // QT_CONFIG(tooltip)
        mHelpToolAction->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Help", nullptr));
#if QT_CONFIG(tooltip)
        mHelpToolAction->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Help", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionHideNullValues->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Hide NULL Values from Results", nullptr));
#if QT_CONFIG(tooltip)
        mActionHideNullValues->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Hide NULL Values from Results", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem = tblResults->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblResults->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "FID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblResults->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Attribute", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblResults->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Value", nullptr));
#if QT_CONFIG(tooltip)
        lblIdentifyMode->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Select identify mode", nullptr));
#endif // QT_CONFIG(tooltip)
        lblIdentifyMode->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "Mode", nullptr));
#if QT_CONFIG(tooltip)
        lblViewMode->setToolTip(QCoreApplication::translate("QgsIdentifyResultsBase", "Select view mode for raster layers", nullptr));
#endif // QT_CONFIG(tooltip)
        lblViewMode->setText(QCoreApplication::translate("QgsIdentifyResultsBase", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsIdentifyResultsBase: public Ui_QgsIdentifyResultsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSIDENTIFYRESULTSBASE_H
