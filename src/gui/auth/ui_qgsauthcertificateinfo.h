/********************************************************************************
** Form generated from reading UI file 'qgsauthcertificateinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCERTIFICATEINFO_H
#define UI_QGSAUTHCERTIFICATEINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthcerttrustpolicycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthCertInfo
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *grpbxHierarchy;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *treeHierarchy;
    QLabel *lblError;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeDetails;
    QGroupBox *grpbxTrust;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QgsAuthCertTrustPolicyComboBox *cmbbxTrust;
    QToolButton *btnSaveTrust;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QgsAuthCertInfo)
    {
        if (QgsAuthCertInfo->objectName().isEmpty())
            QgsAuthCertInfo->setObjectName(QString::fromUtf8("QgsAuthCertInfo"));
        QgsAuthCertInfo->resize(530, 477);
        QgsAuthCertInfo->setMinimumSize(QSize(400, 400));
        verticalLayout_3 = new QVBoxLayout(QgsAuthCertInfo);
        verticalLayout_3->setSpacing(18);
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        grpbxHierarchy = new QGroupBox(QgsAuthCertInfo);
        grpbxHierarchy->setObjectName(QString::fromUtf8("grpbxHierarchy"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(grpbxHierarchy->sizePolicy().hasHeightForWidth());
        grpbxHierarchy->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(grpbxHierarchy);
        verticalLayout_4->setContentsMargins(3, 3, 3, 3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        treeHierarchy = new QTreeWidget(grpbxHierarchy);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeHierarchy->setHeaderItem(__qtreewidgetitem);
        treeHierarchy->setObjectName(QString::fromUtf8("treeHierarchy"));
        treeHierarchy->setMinimumSize(QSize(600, 75));
        treeHierarchy->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeHierarchy->setIconSize(QSize(26, 22));
        treeHierarchy->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeHierarchy->setItemsExpandable(false);
        treeHierarchy->header()->setVisible(false);

        verticalLayout_4->addWidget(treeHierarchy);


        verticalLayout_3->addWidget(grpbxHierarchy);

        lblError = new QLabel(QgsAuthCertInfo);
        lblError->setObjectName(QString::fromUtf8("lblError"));
        lblError->setAlignment(Qt::AlignCenter);
        lblError->setWordWrap(true);

        verticalLayout_3->addWidget(lblError);

        groupBox = new QGroupBox(QgsAuthCertInfo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(4);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 6, 3, 3);
        treeDetails = new QTreeWidget(groupBox);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        treeDetails->setHeaderItem(__qtreewidgetitem1);
        treeDetails->setObjectName(QString::fromUtf8("treeDetails"));
        treeDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeDetails->setAlternatingRowColors(true);
        treeDetails->setSelectionMode(QAbstractItemView::NoSelection);
        treeDetails->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeDetails->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeDetails->setIndentation(12);
        treeDetails->setWordWrap(true);

        verticalLayout->addWidget(treeDetails);


        verticalLayout_3->addWidget(groupBox);

        grpbxTrust = new QGroupBox(QgsAuthCertInfo);
        grpbxTrust->setObjectName(QString::fromUtf8("grpbxTrust"));
        horizontalLayout = new QHBoxLayout(grpbxTrust);
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(grpbxTrust);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        cmbbxTrust = new QgsAuthCertTrustPolicyComboBox(grpbxTrust);
        cmbbxTrust->setObjectName(QString::fromUtf8("cmbbxTrust"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmbbxTrust->sizePolicy().hasHeightForWidth());
        cmbbxTrust->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(cmbbxTrust);

        btnSaveTrust = new QToolButton(grpbxTrust);
        btnSaveTrust->setObjectName(QString::fromUtf8("btnSaveTrust"));
        btnSaveTrust->setMinimumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveTrust->setIcon(icon);
        btnSaveTrust->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(btnSaveTrust);

        horizontalSpacer_2 = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(grpbxTrust);


        retranslateUi(QgsAuthCertInfo);

        QMetaObject::connectSlotsByName(QgsAuthCertInfo);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthCertInfo)
    {
        QgsAuthCertInfo->setWindowTitle(QCoreApplication::translate("QgsAuthCertInfo", "Certificate Info", nullptr));
        grpbxHierarchy->setTitle(QCoreApplication::translate("QgsAuthCertInfo", "Certificate Hierarchy", nullptr));
        lblError->setText(QCoreApplication::translate("QgsAuthCertInfo", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsAuthCertInfo", "Certificate Information", nullptr));
        grpbxTrust->setTitle(QString());
        label->setText(QCoreApplication::translate("QgsAuthCertInfo", "Trust policy", nullptr));
#if QT_CONFIG(tooltip)
        btnSaveTrust->setToolTip(QCoreApplication::translate("QgsAuthCertInfo", "Save certificate trust policy change to database", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSaveTrust->setText(QCoreApplication::translate("QgsAuthCertInfo", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthCertInfo: public Ui_QgsAuthCertInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCERTIFICATEINFO_H
