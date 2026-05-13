/********************************************************************************
** Form generated from reading UI file 'qgsdbsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDBSOURCESELECTBASE_H
#define UI_QGSDBSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDbSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QTreeView *mTablesTreeView;
    QDialogButtonBox *buttonBox;
    QGroupBox *connectionsGroupBox;
    QGridLayout *gridLayout;
    QComboBox *cmbConnections;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbxAllowGeometrylessTables;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mHoldDialogOpen;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *mSearchSettingsButton;
    QgsFilterLineEdit *mSearchTableEdit;

    void setupUi(QDialog *QgsDbSourceSelectBase)
    {
        if (QgsDbSourceSelectBase->objectName().isEmpty())
            QgsDbSourceSelectBase->setObjectName(QString::fromUtf8("QgsDbSourceSelectBase"));
        QgsDbSourceSelectBase->resize(773, 476);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsDbSourceSelectBase->setWindowIcon(icon);
        QgsDbSourceSelectBase->setSizeGripEnabled(true);
        QgsDbSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsDbSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mTablesTreeView = new QTreeView(QgsDbSourceSelectBase);
        mTablesTreeView->setObjectName(QString::fromUtf8("mTablesTreeView"));
        mTablesTreeView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        mTablesTreeView->setAlternatingRowColors(true);
        mTablesTreeView->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);

        gridLayout_2->addWidget(mTablesTreeView, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsDbSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Help);

        gridLayout_2->addWidget(buttonBox, 8, 0, 1, 1);

        connectionsGroupBox = new QGroupBox(QgsDbSourceSelectBase);
        connectionsGroupBox->setObjectName(QString::fromUtf8("connectionsGroupBox"));
        gridLayout = new QGridLayout(connectionsGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cmbConnections = new QComboBox(connectionsGroupBox);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout->addWidget(cmbConnections, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnConnect = new QPushButton(connectionsGroupBox);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        horizontalLayout->addWidget(btnConnect);

        btnNew = new QPushButton(connectionsGroupBox);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnEdit = new QPushButton(connectionsGroupBox);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(connectionsGroupBox);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        horizontalLayout->addWidget(btnDelete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnLoad = new QPushButton(connectionsGroupBox);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        horizontalLayout->addWidget(btnLoad);

        btnSave = new QPushButton(connectionsGroupBox);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(connectionsGroupBox, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cbxAllowGeometrylessTables = new QCheckBox(QgsDbSourceSelectBase);
        cbxAllowGeometrylessTables->setObjectName(QString::fromUtf8("cbxAllowGeometrylessTables"));

        horizontalLayout_2->addWidget(cbxAllowGeometrylessTables);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        mHoldDialogOpen = new QCheckBox(QgsDbSourceSelectBase);
        mHoldDialogOpen->setObjectName(QString::fromUtf8("mHoldDialogOpen"));

        horizontalLayout_2->addWidget(mHoldDialogOpen);


        gridLayout_2->addLayout(horizontalLayout_2, 7, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mSearchSettingsButton = new QToolButton(QgsDbSourceSelectBase);
        mSearchSettingsButton->setObjectName(QString::fromUtf8("mSearchSettingsButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSearchSettingsButton->setIcon(icon1);
        mSearchSettingsButton->setPopupMode(QToolButton::ToolButtonPopupMode::MenuButtonPopup);
        mSearchSettingsButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(mSearchSettingsButton);

        mSearchTableEdit = new QgsFilterLineEdit(QgsDbSourceSelectBase);
        mSearchTableEdit->setObjectName(QString::fromUtf8("mSearchTableEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSearchTableEdit->sizePolicy().hasHeightForWidth());
        mSearchTableEdit->setSizePolicy(sizePolicy);
        mSearchTableEdit->setMinimumSize(QSize(200, 0));
        mSearchTableEdit->setProperty("showSearchIcon", QVariant(true));

        horizontalLayout_3->addWidget(mSearchTableEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);
        QWidget::setTabOrder(btnSave, mTablesTreeView);
        QWidget::setTabOrder(mTablesTreeView, cbxAllowGeometrylessTables);
        QWidget::setTabOrder(cbxAllowGeometrylessTables, mHoldDialogOpen);
        QWidget::setTabOrder(mHoldDialogOpen, buttonBox);

        retranslateUi(QgsDbSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDbSourceSelectBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDbSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDbSourceSelectBase)
    {
        QgsDbSourceSelectBase->setWindowTitle(QCoreApplication::translate("QgsDbSourceSelectBase", "Add PostgreSQL Layers", nullptr));
        connectionsGroupBox->setTitle(QCoreApplication::translate("QgsDbSourceSelectBase", "Connections", nullptr));
#if QT_CONFIG(tooltip)
        btnConnect->setToolTip(QCoreApplication::translate("QgsDbSourceSelectBase", "Connect to selected database", nullptr));
#endif // QT_CONFIG(tooltip)
        btnConnect->setText(QCoreApplication::translate("QgsDbSourceSelectBase", "Connect", nullptr));
#if QT_CONFIG(tooltip)
        btnNew->setToolTip(QCoreApplication::translate("QgsDbSourceSelectBase", "Create a new database connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNew->setText(QCoreApplication::translate("QgsDbSourceSelectBase", "New", nullptr));
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("QgsDbSourceSelectBase", "Edit selected database connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QCoreApplication::translate("QgsDbSourceSelectBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("QgsDbSourceSelectBase", "Remove connection to selected database", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("QgsDbSourceSelectBase", "Remove", nullptr));
        btnLoad->setText(QCoreApplication::translate("QgsDbSourceSelectBase", "Load", "Load connections from file"));
#if QT_CONFIG(tooltip)
        btnSave->setToolTip(QCoreApplication::translate("QgsDbSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSave->setText(QCoreApplication::translate("QgsDbSourceSelectBase", "Save", nullptr));
        cbxAllowGeometrylessTables->setText(QCoreApplication::translate("QgsDbSourceSelectBase", "Also list tables with no geometry", nullptr));
        mHoldDialogOpen->setText(QCoreApplication::translate("QgsDbSourceSelectBase", "Keep dialog open", nullptr));
        mSearchSettingsButton->setText(QCoreApplication::translate("QgsDbSourceSelectBase", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDbSourceSelectBase: public Ui_QgsDbSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDBSOURCESELECTBASE_H
