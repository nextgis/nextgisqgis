/********************************************************************************
** Form generated from reading UI file 'qgsnewdatabasetablenamewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWDATABASETABLENAMEWIDGET_H
#define UI_QGSNEWDATABASETABLENAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include "qgsbrowsertreeview.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewDatabaseTableNameWidget
{
public:
    QAction *mActionRefresh;
    QGridLayout *gridLayout;
    QLineEdit *mNewTableName;
    QPushButton *mOkButton;
    QVBoxLayout *verticalLayout_2;
    QToolBar *mBrowserToolbar;
    QgsBrowserTreeView *mBrowserTreeView;
    QLabel *label;
    QLabel *mValidationResults;

    void setupUi(QgsPanelWidget *QgsNewDatabaseTableNameWidget)
    {
        if (QgsNewDatabaseTableNameWidget->objectName().isEmpty())
            QgsNewDatabaseTableNameWidget->setObjectName(QString::fromUtf8("QgsNewDatabaseTableNameWidget"));
        QgsNewDatabaseTableNameWidget->resize(700, 629);
        mActionRefresh = new QAction(QgsNewDatabaseTableNameWidget);
        mActionRefresh->setObjectName(QString::fromUtf8("mActionRefresh"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRefresh->setIcon(icon);
        gridLayout = new QGridLayout(QgsNewDatabaseTableNameWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 4);
        mNewTableName = new QLineEdit(QgsNewDatabaseTableNameWidget);
        mNewTableName->setObjectName(QString::fromUtf8("mNewTableName"));

        gridLayout->addWidget(mNewTableName, 2, 0, 1, 1);

        mOkButton = new QPushButton(QgsNewDatabaseTableNameWidget);
        mOkButton->setObjectName(QString::fromUtf8("mOkButton"));

        gridLayout->addWidget(mOkButton, 2, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        mBrowserToolbar = new QToolBar(QgsNewDatabaseTableNameWidget);
        mBrowserToolbar->setObjectName(QString::fromUtf8("mBrowserToolbar"));
        mBrowserToolbar->setIconSize(QSize(24, 24));
        mBrowserToolbar->setFloatable(false);

        verticalLayout_2->addWidget(mBrowserToolbar);

        mBrowserTreeView = new QgsBrowserTreeView(QgsNewDatabaseTableNameWidget);
        mBrowserTreeView->setObjectName(QString::fromUtf8("mBrowserTreeView"));

        verticalLayout_2->addWidget(mBrowserTreeView);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 2);

        label = new QLabel(QgsNewDatabaseTableNameWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        mValidationResults = new QLabel(QgsNewDatabaseTableNameWidget);
        mValidationResults->setObjectName(QString::fromUtf8("mValidationResults"));
        mValidationResults->setEnabled(true);

        gridLayout->addWidget(mValidationResults, 3, 0, 1, 2);


        mBrowserToolbar->addAction(mActionRefresh);

        retranslateUi(QgsNewDatabaseTableNameWidget);

        QMetaObject::connectSlotsByName(QgsNewDatabaseTableNameWidget);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsNewDatabaseTableNameWidget)
    {
        mActionRefresh->setText(QCoreApplication::translate("QgsNewDatabaseTableNameWidget", "Refresh", nullptr));
        mNewTableName->setText(QString());
        mNewTableName->setPlaceholderText(QCoreApplication::translate("QgsNewDatabaseTableNameWidget", "name of the new table", nullptr));
        mOkButton->setText(QCoreApplication::translate("QgsNewDatabaseTableNameWidget", "Ok", nullptr));
        label->setText(QCoreApplication::translate("QgsNewDatabaseTableNameWidget", "New table name", nullptr));
        mValidationResults->setText(QCoreApplication::translate("QgsNewDatabaseTableNameWidget", "Validation results", nullptr));
        (void)QgsNewDatabaseTableNameWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsNewDatabaseTableNameWidget: public Ui_QgsNewDatabaseTableNameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWDATABASETABLENAMEWIDGET_H
