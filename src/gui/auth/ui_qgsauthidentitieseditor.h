/********************************************************************************
** Form generated from reading UI file 'qgsauthidentitieseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHIDENTITIESEDITOR_H
#define UI_QGSAUTHIDENTITIESEDITOR_H

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

class Ui_QgsAuthIdentitiesEditor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblIdentities;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnAddIdentity;
    QToolButton *btnRemoveIdentity;
    QToolButton *btnInfoIdentity;
    QSpacerItem *verticalSpacer;
    QToolButton *btnGroupByOrg;
    QToolButton *btnViewRefresh;
    QTreeWidget *treeIdentities;
    QgsMessageBar *msgBar;

    void setupUi(QWidget *QgsAuthIdentitiesEditor)
    {
        if (QgsAuthIdentitiesEditor->objectName().isEmpty())
            QgsAuthIdentitiesEditor->setObjectName(QString::fromUtf8("QgsAuthIdentitiesEditor"));
        QgsAuthIdentitiesEditor->resize(731, 558);
        verticalLayout = new QVBoxLayout(QgsAuthIdentitiesEditor);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblIdentities = new QLabel(QgsAuthIdentitiesEditor);
        lblIdentities->setObjectName(QString::fromUtf8("lblIdentities"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblIdentities->sizePolicy().hasHeightForWidth());
        lblIdentities->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lblIdentities);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(6);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, 6, 0);
        btnAddIdentity = new QToolButton(QgsAuthIdentitiesEditor);
        btnAddIdentity->setObjectName(QString::fromUtf8("btnAddIdentity"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddIdentity->setIcon(icon);

        verticalLayout_2->addWidget(btnAddIdentity);

        btnRemoveIdentity = new QToolButton(QgsAuthIdentitiesEditor);
        btnRemoveIdentity->setObjectName(QString::fromUtf8("btnRemoveIdentity"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveIdentity->setIcon(icon1);

        verticalLayout_2->addWidget(btnRemoveIdentity);

        btnInfoIdentity = new QToolButton(QgsAuthIdentitiesEditor);
        btnInfoIdentity->setObjectName(QString::fromUtf8("btnInfoIdentity"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnInfoIdentity->setIcon(icon2);

        verticalLayout_2->addWidget(btnInfoIdentity);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnGroupByOrg = new QToolButton(QgsAuthIdentitiesEditor);
        btnGroupByOrg->setObjectName(QString::fromUtf8("btnGroupByOrg"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnGroupByOrg->setIcon(icon3);
        btnGroupByOrg->setCheckable(true);
        btnGroupByOrg->setChecked(false);

        verticalLayout_2->addWidget(btnGroupByOrg);

        btnViewRefresh = new QToolButton(QgsAuthIdentitiesEditor);
        btnViewRefresh->setObjectName(QString::fromUtf8("btnViewRefresh"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnViewRefresh->setIcon(icon4);

        verticalLayout_2->addWidget(btnViewRefresh);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        treeIdentities = new QTreeWidget(QgsAuthIdentitiesEditor);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeIdentities->setHeaderItem(__qtreewidgetitem);
        treeIdentities->setObjectName(QString::fromUtf8("treeIdentities"));
        treeIdentities->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeIdentities->setAlternatingRowColors(true);
        treeIdentities->setSelectionMode(QAbstractItemView::SingleSelection);
        treeIdentities->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeIdentities->setIconSize(QSize(26, 22));

        gridLayout->addWidget(treeIdentities, 0, 0, 1, 1);

        msgBar = new QgsMessageBar(QgsAuthIdentitiesEditor);
        msgBar->setObjectName(QString::fromUtf8("msgBar"));

        gridLayout->addWidget(msgBar, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(treeIdentities, btnAddIdentity);
        QWidget::setTabOrder(btnAddIdentity, btnRemoveIdentity);
        QWidget::setTabOrder(btnRemoveIdentity, btnInfoIdentity);
        QWidget::setTabOrder(btnInfoIdentity, btnGroupByOrg);
        QWidget::setTabOrder(btnGroupByOrg, btnViewRefresh);

        retranslateUi(QgsAuthIdentitiesEditor);

        QMetaObject::connectSlotsByName(QgsAuthIdentitiesEditor);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthIdentitiesEditor)
    {
        QgsAuthIdentitiesEditor->setWindowTitle(QCoreApplication::translate("QgsAuthIdentitiesEditor", "Identity Certificates Editor", nullptr));
        lblIdentities->setText(QCoreApplication::translate("QgsAuthIdentitiesEditor", "User Identity Bundles", nullptr));
#if QT_CONFIG(tooltip)
        btnAddIdentity->setToolTip(QCoreApplication::translate("QgsAuthIdentitiesEditor", "Import identity bundle to authentication storage", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddIdentity->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveIdentity->setToolTip(QCoreApplication::translate("QgsAuthIdentitiesEditor", "Remove identity bundle from authentication storage", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveIdentity->setText(QString());
#if QT_CONFIG(tooltip)
        btnInfoIdentity->setToolTip(QCoreApplication::translate("QgsAuthIdentitiesEditor", "Show information for bundle", nullptr));
#endif // QT_CONFIG(tooltip)
        btnInfoIdentity->setText(QString());
#if QT_CONFIG(tooltip)
        btnGroupByOrg->setToolTip(QCoreApplication::translate("QgsAuthIdentitiesEditor", "Group by organization", nullptr));
#endif // QT_CONFIG(tooltip)
        btnGroupByOrg->setText(QCoreApplication::translate("QgsAuthIdentitiesEditor", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        btnViewRefresh->setToolTip(QCoreApplication::translate("QgsAuthIdentitiesEditor", "Refresh identity bundle tree view", nullptr));
#endif // QT_CONFIG(tooltip)
        btnViewRefresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsAuthIdentitiesEditor: public Ui_QgsAuthIdentitiesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHIDENTITIESEDITOR_H
