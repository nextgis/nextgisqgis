/********************************************************************************
** Form generated from reading UI file 'qgsmeshdatasetgrouptreewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHDATASETGROUPTREEWIDGETBASE_H
#define UI_QGSMESHDATASETGROUPTREEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmeshdatasetgrouptreeview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshDatasetGroupTreeWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mAddDatasetButton;
    QToolButton *mRemoveDatasetButton;
    QToolButton *mCollapseButton;
    QToolButton *mExpandButton;
    QToolButton *mCheckAllButton;
    QToolButton *mUnCheckAllButton;
    QToolButton *mResetDefaultButton;
    QSpacerItem *horizontalSpacer_2;
    QgsMeshDatasetGroupTreeView *mDatasetGroupTreeView;

    void setupUi(QWidget *QgsMeshDatasetGroupTreeWidgetBase)
    {
        if (QgsMeshDatasetGroupTreeWidgetBase->objectName().isEmpty())
            QgsMeshDatasetGroupTreeWidgetBase->setObjectName(QString::fromUtf8("QgsMeshDatasetGroupTreeWidgetBase"));
        QgsMeshDatasetGroupTreeWidgetBase->resize(433, 314);
        horizontalLayout = new QHBoxLayout(QgsMeshDatasetGroupTreeWidgetBase);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsMeshDatasetGroupTreeWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mAddDatasetButton = new QToolButton(groupBox);
        mAddDatasetButton->setObjectName(QString::fromUtf8("mAddDatasetButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddDatasetButton->setIcon(icon);
        mAddDatasetButton->setIconSize(QSize(20, 20));
        mAddDatasetButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mAddDatasetButton);

        mRemoveDatasetButton = new QToolButton(groupBox);
        mRemoveDatasetButton->setObjectName(QString::fromUtf8("mRemoveDatasetButton"));
        mRemoveDatasetButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveDatasetButton->setIcon(icon1);

        horizontalLayout_2->addWidget(mRemoveDatasetButton);

        mCollapseButton = new QToolButton(groupBox);
        mCollapseButton->setObjectName(QString::fromUtf8("mCollapseButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionCollapseTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCollapseButton->setIcon(icon2);
        mCollapseButton->setIconSize(QSize(20, 20));
        mCollapseButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mCollapseButton);

        mExpandButton = new QToolButton(groupBox);
        mExpandButton->setObjectName(QString::fromUtf8("mExpandButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionExpandTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandButton->setIcon(icon3);
        mExpandButton->setIconSize(QSize(20, 20));
        mExpandButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mExpandButton);

        mCheckAllButton = new QToolButton(groupBox);
        mCheckAllButton->setObjectName(QString::fromUtf8("mCheckAllButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionSelectAllTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCheckAllButton->setIcon(icon4);
        mCheckAllButton->setIconSize(QSize(20, 20));
        mCheckAllButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mCheckAllButton);

        mUnCheckAllButton = new QToolButton(groupBox);
        mUnCheckAllButton->setObjectName(QString::fromUtf8("mUnCheckAllButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionDeselectAllTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mUnCheckAllButton->setIcon(icon5);
        mUnCheckAllButton->setIconSize(QSize(20, 20));
        mUnCheckAllButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mUnCheckAllButton);

        mResetDefaultButton = new QToolButton(groupBox);
        mResetDefaultButton->setObjectName(QString::fromUtf8("mResetDefaultButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetDefaultButton->setIcon(icon6);
        mResetDefaultButton->setIconSize(QSize(20, 20));
        mResetDefaultButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mResetDefaultButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_2);

        mDatasetGroupTreeView = new QgsMeshDatasetGroupTreeView(groupBox);
        mDatasetGroupTreeView->setObjectName(QString::fromUtf8("mDatasetGroupTreeView"));

        verticalLayout_7->addWidget(mDatasetGroupTreeView);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(QgsMeshDatasetGroupTreeWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshDatasetGroupTreeWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshDatasetGroupTreeWidgetBase)
    {
        QgsMeshDatasetGroupTreeWidgetBase->setWindowTitle(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Available Mesh Dataset Groups", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Available Datasets", nullptr));
#if QT_CONFIG(tooltip)
        mAddDatasetButton->setToolTip(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Assign Extra Dataset to Mesh", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddDatasetButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveDatasetButton->setToolTip(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Remove Extra Dataset from Mesh", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveDatasetButton->setText(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "...", nullptr));
#if QT_CONFIG(tooltip)
        mCollapseButton->setToolTip(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Collapse All", nullptr));
#endif // QT_CONFIG(tooltip)
        mCollapseButton->setText(QString());
#if QT_CONFIG(tooltip)
        mExpandButton->setToolTip(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Expand All", nullptr));
#endif // QT_CONFIG(tooltip)
        mExpandButton->setText(QString());
#if QT_CONFIG(tooltip)
        mCheckAllButton->setToolTip(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Check All", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckAllButton->setText(QString());
#if QT_CONFIG(tooltip)
        mUnCheckAllButton->setToolTip(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Uncheck All", nullptr));
#endif // QT_CONFIG(tooltip)
        mUnCheckAllButton->setText(QString());
#if QT_CONFIG(tooltip)
        mResetDefaultButton->setToolTip(QCoreApplication::translate("QgsMeshDatasetGroupTreeWidgetBase", "Reset to Defaults", nullptr));
#endif // QT_CONFIG(tooltip)
        mResetDefaultButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsMeshDatasetGroupTreeWidgetBase: public Ui_QgsMeshDatasetGroupTreeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHDATASETGROUPTREEWIDGETBASE_H
