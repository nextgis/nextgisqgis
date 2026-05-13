/********************************************************************************
** Form generated from reading UI file 'qgsauthconfigeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGEDITOR_H
#define UI_QGSAUTHCONFIGEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigEditor
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QToolButton *btnAddConfig;
    QToolButton *btnRemoveConfig;
    QToolButton *btnEditConfig;
    QSpacerItem *verticalSpacer;
    QToolButton *btnAuthUtilities;
    QTableView *tableViewConfigs;
    QgsMessageBar *mMsgBar;
    QLabel *lblAuthConfigDb;

    void setupUi(QWidget *QgsAuthConfigEditor)
    {
        if (QgsAuthConfigEditor->objectName().isEmpty())
            QgsAuthConfigEditor->setObjectName(QString::fromUtf8("QgsAuthConfigEditor"));
        QgsAuthConfigEditor->resize(582, 463);
        gridLayout = new QGridLayout(QgsAuthConfigEditor);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(6);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 6, 0);
        btnAddConfig = new QToolButton(QgsAuthConfigEditor);
        btnAddConfig->setObjectName(QString::fromUtf8("btnAddConfig"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddConfig->setIcon(icon);

        verticalLayout->addWidget(btnAddConfig);

        btnRemoveConfig = new QToolButton(QgsAuthConfigEditor);
        btnRemoveConfig->setObjectName(QString::fromUtf8("btnRemoveConfig"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveConfig->setIcon(icon1);

        verticalLayout->addWidget(btnRemoveConfig);

        btnEditConfig = new QToolButton(QgsAuthConfigEditor);
        btnEditConfig->setObjectName(QString::fromUtf8("btnEditConfig"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditConfig->setIcon(icon2);

        verticalLayout->addWidget(btnEditConfig);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnAuthUtilities = new QToolButton(QgsAuthConfigEditor);
        btnAuthUtilities->setObjectName(QString::fromUtf8("btnAuthUtilities"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAuthUtilities->setIcon(icon3);
        btnAuthUtilities->setPopupMode(QToolButton::InstantPopup);

        verticalLayout->addWidget(btnAuthUtilities);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        tableViewConfigs = new QTableView(QgsAuthConfigEditor);
        tableViewConfigs->setObjectName(QString::fromUtf8("tableViewConfigs"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(tableViewConfigs->sizePolicy().hasHeightForWidth());
        tableViewConfigs->setSizePolicy(sizePolicy);
        tableViewConfigs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewConfigs->setAlternatingRowColors(true);
        tableViewConfigs->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableViewConfigs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewConfigs->setSortingEnabled(true);
        tableViewConfigs->setCornerButtonEnabled(false);
        tableViewConfigs->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableViewConfigs, 1, 0, 1, 1);

        mMsgBar = new QgsMessageBar(QgsAuthConfigEditor);
        mMsgBar->setObjectName(QString::fromUtf8("mMsgBar"));

        gridLayout_2->addWidget(mMsgBar, 2, 0, 1, 2);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        lblAuthConfigDb = new QLabel(QgsAuthConfigEditor);
        lblAuthConfigDb->setObjectName(QString::fromUtf8("lblAuthConfigDb"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblAuthConfigDb->sizePolicy().hasHeightForWidth());
        lblAuthConfigDb->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lblAuthConfigDb, 1, 0, 1, 1);

        QWidget::setTabOrder(tableViewConfigs, btnAddConfig);
        QWidget::setTabOrder(btnAddConfig, btnRemoveConfig);
        QWidget::setTabOrder(btnRemoveConfig, btnEditConfig);
        QWidget::setTabOrder(btnEditConfig, btnAuthUtilities);

        retranslateUi(QgsAuthConfigEditor);

        QMetaObject::connectSlotsByName(QgsAuthConfigEditor);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthConfigEditor)
    {
        QgsAuthConfigEditor->setWindowTitle(QCoreApplication::translate("QgsAuthConfigEditor", "Edit Authentication Configurations", nullptr));
#if QT_CONFIG(tooltip)
        btnAddConfig->setToolTip(QCoreApplication::translate("QgsAuthConfigEditor", "Add new authentication configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddConfig->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveConfig->setToolTip(QCoreApplication::translate("QgsAuthConfigEditor", "Remove selected authentication configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveConfig->setText(QString());
#if QT_CONFIG(tooltip)
        btnEditConfig->setToolTip(QCoreApplication::translate("QgsAuthConfigEditor", "Edit selected authentication configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditConfig->setText(QString());
        btnAuthUtilities->setText(QString());
        lblAuthConfigDb->setText(QCoreApplication::translate("QgsAuthConfigEditor", "Authentication Configurations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigEditor: public Ui_QgsAuthConfigEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGEDITOR_H
