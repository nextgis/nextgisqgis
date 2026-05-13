/********************************************************************************
** Form generated from reading UI file 'qgsauthserverseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHSERVERSEDITOR_H
#define UI_QGSAUTHSERVERSEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthServersEditor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblServers;
    QGridLayout *gridLayout;
    QgsMessageBar *msgBar;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnAddServer;
    QToolButton *btnRemoveServer;
    QToolButton *btnEditServer;
    QSpacerItem *verticalSpacer;
    QToolButton *btnGroupByOrg;
    QToolButton *btnViewRefresh;
    QTreeWidget *treeServerConfigs;

    void setupUi(QWidget *QgsAuthServersEditor)
    {
        if (QgsAuthServersEditor->objectName().isEmpty())
            QgsAuthServersEditor->setObjectName(QString::fromUtf8("QgsAuthServersEditor"));
        QgsAuthServersEditor->resize(731, 558);
        verticalLayout = new QVBoxLayout(QgsAuthServersEditor);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblServers = new QLabel(QgsAuthServersEditor);
        lblServers->setObjectName(QString::fromUtf8("lblServers"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblServers->sizePolicy().hasHeightForWidth());
        lblServers->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lblServers);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(6);
        msgBar = new QgsMessageBar(QgsAuthServersEditor);
        msgBar->setObjectName(QString::fromUtf8("msgBar"));

        gridLayout->addWidget(msgBar, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, 6, -1);
        btnAddServer = new QToolButton(QgsAuthServersEditor);
        btnAddServer->setObjectName(QString::fromUtf8("btnAddServer"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddServer->setIcon(icon);

        verticalLayout_2->addWidget(btnAddServer);

        btnRemoveServer = new QToolButton(QgsAuthServersEditor);
        btnRemoveServer->setObjectName(QString::fromUtf8("btnRemoveServer"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveServer->setIcon(icon1);

        verticalLayout_2->addWidget(btnRemoveServer);

        btnEditServer = new QToolButton(QgsAuthServersEditor);
        btnEditServer->setObjectName(QString::fromUtf8("btnEditServer"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditServer->setIcon(icon2);

        verticalLayout_2->addWidget(btnEditServer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnGroupByOrg = new QToolButton(QgsAuthServersEditor);
        btnGroupByOrg->setObjectName(QString::fromUtf8("btnGroupByOrg"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnGroupByOrg->setIcon(icon3);
        btnGroupByOrg->setCheckable(true);
        btnGroupByOrg->setChecked(false);

        verticalLayout_2->addWidget(btnGroupByOrg);

        btnViewRefresh = new QToolButton(QgsAuthServersEditor);
        btnViewRefresh->setObjectName(QString::fromUtf8("btnViewRefresh"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnViewRefresh->setIcon(icon4);

        verticalLayout_2->addWidget(btnViewRefresh);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        treeServerConfigs = new QTreeWidget(QgsAuthServersEditor);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeServerConfigs->setHeaderItem(__qtreewidgetitem);
        treeServerConfigs->setObjectName(QString::fromUtf8("treeServerConfigs"));
        treeServerConfigs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeServerConfigs->setAlternatingRowColors(true);
        treeServerConfigs->setSelectionMode(QAbstractItemView::SingleSelection);
        treeServerConfigs->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeServerConfigs->setIconSize(QSize(26, 22));

        gridLayout->addWidget(treeServerConfigs, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(treeServerConfigs, btnAddServer);
        QWidget::setTabOrder(btnAddServer, btnRemoveServer);
        QWidget::setTabOrder(btnRemoveServer, btnEditServer);
        QWidget::setTabOrder(btnEditServer, btnGroupByOrg);
        QWidget::setTabOrder(btnGroupByOrg, btnViewRefresh);

        retranslateUi(QgsAuthServersEditor);

        QMetaObject::connectSlotsByName(QgsAuthServersEditor);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthServersEditor)
    {
        QgsAuthServersEditor->setWindowTitle(QCoreApplication::translate("QgsAuthServersEditor", "Server Exceptions/SSL Configs Editor", nullptr));
        lblServers->setText(QCoreApplication::translate("QgsAuthServersEditor", "Server Certificate Exceptions and SSL Configurations", nullptr));
#if QT_CONFIG(tooltip)
        btnAddServer->setToolTip(QCoreApplication::translate("QgsAuthServersEditor", "Add new server certificate configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddServer->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveServer->setToolTip(QCoreApplication::translate("QgsAuthServersEditor", "Remove selected server certificate configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveServer->setText(QString());
#if QT_CONFIG(tooltip)
        btnEditServer->setToolTip(QCoreApplication::translate("QgsAuthServersEditor", "Edit selected server certificate configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditServer->setText(QString());
#if QT_CONFIG(tooltip)
        btnGroupByOrg->setToolTip(QCoreApplication::translate("QgsAuthServersEditor", "Group by organization", nullptr));
#endif // QT_CONFIG(tooltip)
        btnGroupByOrg->setText(QCoreApplication::translate("QgsAuthServersEditor", "\342\200\246", nullptr));
        btnViewRefresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsAuthServersEditor: public Ui_QgsAuthServersEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHSERVERSEDITOR_H
