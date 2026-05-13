/********************************************************************************
** Form generated from reading UI file 'qgspointcloudclassifiedrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDCLASSIFIEDRENDERERWIDGETBASE_H
#define UI_QGSPOINTCLOUDCLASSIFIEDRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "qgspointcloudattributecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudClassifiedRendererWidgetBase
{
public:
    QGridLayout *gridLayout;
    QTreeView *viewCategories;
    QgsPointCloudAttributeComboBox *mAttributeComboBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAddCategories;
    QPushButton *btnAddCategory;
    QPushButton *btnDeleteCategories;
    QPushButton *btnDeleteAllCategories;
    QSpacerItem *spacerItem;
    QLabel *label_3;

    void setupUi(QWidget *QgsPointCloudClassifiedRendererWidgetBase)
    {
        if (QgsPointCloudClassifiedRendererWidgetBase->objectName().isEmpty())
            QgsPointCloudClassifiedRendererWidgetBase->setObjectName(QString::fromUtf8("QgsPointCloudClassifiedRendererWidgetBase"));
        QgsPointCloudClassifiedRendererWidgetBase->resize(424, 368);
        gridLayout = new QGridLayout(QgsPointCloudClassifiedRendererWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        viewCategories = new QTreeView(QgsPointCloudClassifiedRendererWidgetBase);
        viewCategories->setObjectName(QString::fromUtf8("viewCategories"));
        viewCategories->setMinimumSize(QSize(0, 100));
        viewCategories->setContextMenuPolicy(Qt::CustomContextMenu);
        viewCategories->setDragDropMode(QAbstractItemView::InternalMove);
        viewCategories->setDefaultDropAction(Qt::IgnoreAction);
        viewCategories->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewCategories->setIconSize(QSize(16, 16));
        viewCategories->setRootIsDecorated(false);
        viewCategories->setItemsExpandable(false);
        viewCategories->setSortingEnabled(true);
        viewCategories->setAllColumnsShowFocus(true);

        gridLayout->addWidget(viewCategories, 1, 0, 1, 2);

        mAttributeComboBox = new QgsPointCloudAttributeComboBox(QgsPointCloudClassifiedRendererWidgetBase);
        mAttributeComboBox->setObjectName(QString::fromUtf8("mAttributeComboBox"));

        gridLayout->addWidget(mAttributeComboBox, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnAddCategories = new QPushButton(QgsPointCloudClassifiedRendererWidgetBase);
        btnAddCategories->setObjectName(QString::fromUtf8("btnAddCategories"));

        horizontalLayout_3->addWidget(btnAddCategories);

        btnAddCategory = new QPushButton(QgsPointCloudClassifiedRendererWidgetBase);
        btnAddCategory->setObjectName(QString::fromUtf8("btnAddCategory"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddCategory->setIcon(icon);

        horizontalLayout_3->addWidget(btnAddCategory);

        btnDeleteCategories = new QPushButton(QgsPointCloudClassifiedRendererWidgetBase);
        btnDeleteCategories->setObjectName(QString::fromUtf8("btnDeleteCategories"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteCategories->setIcon(icon1);

        horizontalLayout_3->addWidget(btnDeleteCategories);

        btnDeleteAllCategories = new QPushButton(QgsPointCloudClassifiedRendererWidgetBase);
        btnDeleteAllCategories->setObjectName(QString::fromUtf8("btnDeleteAllCategories"));

        horizontalLayout_3->addWidget(btnDeleteAllCategories);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerItem);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        label_3 = new QLabel(QgsPointCloudClassifiedRendererWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        QWidget::setTabOrder(mAttributeComboBox, viewCategories);
        QWidget::setTabOrder(viewCategories, btnAddCategories);
        QWidget::setTabOrder(btnAddCategories, btnAddCategory);
        QWidget::setTabOrder(btnAddCategory, btnDeleteCategories);
        QWidget::setTabOrder(btnDeleteCategories, btnDeleteAllCategories);

        retranslateUi(QgsPointCloudClassifiedRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointCloudClassifiedRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointCloudClassifiedRendererWidgetBase)
    {
        btnAddCategories->setText(QCoreApplication::translate("QgsPointCloudClassifiedRendererWidgetBase", "Classify", nullptr));
#if QT_CONFIG(tooltip)
        btnAddCategory->setToolTip(QCoreApplication::translate("QgsPointCloudClassifiedRendererWidgetBase", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnDeleteCategories->setToolTip(QCoreApplication::translate("QgsPointCloudClassifiedRendererWidgetBase", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDeleteAllCategories->setText(QCoreApplication::translate("QgsPointCloudClassifiedRendererWidgetBase", "Delete All", nullptr));
        label_3->setText(QCoreApplication::translate("QgsPointCloudClassifiedRendererWidgetBase", "Attribute", nullptr));
        (void)QgsPointCloudClassifiedRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudClassifiedRendererWidgetBase: public Ui_QgsPointCloudClassifiedRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDCLASSIFIEDRENDERERWIDGETBASE_H
