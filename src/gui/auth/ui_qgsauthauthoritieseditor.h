/********************************************************************************
** Form generated from reading UI file 'qgsauthauthoritieseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHAUTHORITIESEDITOR_H
#define UI_QGSAUTHAUTHORITIESEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthAuthoritiesEditor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblAuthorities;
    QGridLayout *gridLayout_2;
    QgsMessageBar *msgBar;
    QHBoxLayout *horizontalLayout;
    QLabel *lblCaFile;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leCaFile;
    QToolButton *btnCaFileClear;
    QToolButton *btnCaFile;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnAddCa;
    QToolButton *btnRemoveCa;
    QToolButton *btnInfoCa;
    QSpacerItem *verticalSpacer;
    QToolButton *btnGroupByOrg;
    QToolButton *btnViewRefresh;
    QToolButton *btnUtilities;
    QTreeWidget *treeWidgetCAs;

    void setupUi(QWidget *QgsAuthAuthoritiesEditor)
    {
        if (QgsAuthAuthoritiesEditor->objectName().isEmpty())
            QgsAuthAuthoritiesEditor->setObjectName(QString::fromUtf8("QgsAuthAuthoritiesEditor"));
        QgsAuthAuthoritiesEditor->resize(731, 558);
        verticalLayout = new QVBoxLayout(QgsAuthAuthoritiesEditor);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblAuthorities = new QLabel(QgsAuthAuthoritiesEditor);
        lblAuthorities->setObjectName(QString::fromUtf8("lblAuthorities"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblAuthorities->sizePolicy().hasHeightForWidth());
        lblAuthorities->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lblAuthorities);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(6);
        msgBar = new QgsMessageBar(QgsAuthAuthoritiesEditor);
        msgBar->setObjectName(QString::fromUtf8("msgBar"));

        gridLayout_2->addWidget(msgBar, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblCaFile = new QLabel(QgsAuthAuthoritiesEditor);
        lblCaFile->setObjectName(QString::fromUtf8("lblCaFile"));

        horizontalLayout->addWidget(lblCaFile);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leCaFile = new QLineEdit(QgsAuthAuthoritiesEditor);
        leCaFile->setObjectName(QString::fromUtf8("leCaFile"));
        leCaFile->setMinimumSize(QSize(125, 24));
        leCaFile->setReadOnly(true);

        horizontalLayout_2->addWidget(leCaFile);

        btnCaFileClear = new QToolButton(QgsAuthAuthoritiesEditor);
        btnCaFileClear->setObjectName(QString::fromUtf8("btnCaFileClear"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconClose.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnCaFileClear->setIcon(icon);

        horizontalLayout_2->addWidget(btnCaFileClear);


        horizontalLayout->addLayout(horizontalLayout_2);

        btnCaFile = new QToolButton(QgsAuthAuthoritiesEditor);
        btnCaFile->setObjectName(QString::fromUtf8("btnCaFile"));

        horizontalLayout->addWidget(btnCaFile);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, 6, -1);
        btnAddCa = new QToolButton(QgsAuthAuthoritiesEditor);
        btnAddCa->setObjectName(QString::fromUtf8("btnAddCa"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddCa->setIcon(icon1);

        verticalLayout_2->addWidget(btnAddCa);

        btnRemoveCa = new QToolButton(QgsAuthAuthoritiesEditor);
        btnRemoveCa->setObjectName(QString::fromUtf8("btnRemoveCa"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveCa->setIcon(icon2);

        verticalLayout_2->addWidget(btnRemoveCa);

        btnInfoCa = new QToolButton(QgsAuthAuthoritiesEditor);
        btnInfoCa->setObjectName(QString::fromUtf8("btnInfoCa"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnInfoCa->setIcon(icon3);

        verticalLayout_2->addWidget(btnInfoCa);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnGroupByOrg = new QToolButton(QgsAuthAuthoritiesEditor);
        btnGroupByOrg->setObjectName(QString::fromUtf8("btnGroupByOrg"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnGroupByOrg->setIcon(icon4);
        btnGroupByOrg->setCheckable(true);
        btnGroupByOrg->setChecked(true);

        verticalLayout_2->addWidget(btnGroupByOrg);

        btnViewRefresh = new QToolButton(QgsAuthAuthoritiesEditor);
        btnViewRefresh->setObjectName(QString::fromUtf8("btnViewRefresh"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnViewRefresh->setIcon(icon5);

        verticalLayout_2->addWidget(btnViewRefresh);

        btnUtilities = new QToolButton(QgsAuthAuthoritiesEditor);
        btnUtilities->setObjectName(QString::fromUtf8("btnUtilities"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnUtilities->setIcon(icon6);
        btnUtilities->setPopupMode(QToolButton::InstantPopup);

        verticalLayout_2->addWidget(btnUtilities);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        treeWidgetCAs = new QTreeWidget(QgsAuthAuthoritiesEditor);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetCAs->setHeaderItem(__qtreewidgetitem);
        treeWidgetCAs->setObjectName(QString::fromUtf8("treeWidgetCAs"));
        treeWidgetCAs->setFocusPolicy(Qt::WheelFocus);
        treeWidgetCAs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidgetCAs->setAlternatingRowColors(true);
        treeWidgetCAs->setSelectionMode(QAbstractItemView::SingleSelection);
        treeWidgetCAs->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidgetCAs->setIconSize(QSize(26, 22));

        gridLayout_2->addWidget(treeWidgetCAs, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(QgsAuthAuthoritiesEditor);

        QMetaObject::connectSlotsByName(QgsAuthAuthoritiesEditor);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthAuthoritiesEditor)
    {
        QgsAuthAuthoritiesEditor->setWindowTitle(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "Certificate Authorities Editor", nullptr));
        lblAuthorities->setText(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "Certificate Authorities and Issuers <i>(Root/File certificates are read-only)</i>", nullptr));
        lblCaFile->setText(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "Certificates file", nullptr));
        leCaFile->setPlaceholderText(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "File of concatenated CAs and/or Issuers", nullptr));
        btnCaFileClear->setText(QString());
        btnCaFile->setText(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        btnAddCa->setToolTip(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "Import certificate(s) to authentication storage", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddCa->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveCa->setToolTip(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "Remove certificate from authentication storage", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveCa->setText(QString());
#if QT_CONFIG(tooltip)
        btnInfoCa->setToolTip(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "Show information for certificate", nullptr));
#endif // QT_CONFIG(tooltip)
        btnInfoCa->setText(QString());
#if QT_CONFIG(tooltip)
        btnGroupByOrg->setToolTip(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "Group by organization", nullptr));
#endif // QT_CONFIG(tooltip)
        btnGroupByOrg->setText(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        btnViewRefresh->setToolTip(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "Refresh certificate tree view", nullptr));
#endif // QT_CONFIG(tooltip)
        btnViewRefresh->setText(QString());
        btnUtilities->setText(QCoreApplication::translate("QgsAuthAuthoritiesEditor", "\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthAuthoritiesEditor: public Ui_QgsAuthAuthoritiesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHAUTHORITIESEDITOR_H
