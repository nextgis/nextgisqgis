/********************************************************************************
** Form generated from reading UI file 'qgscategorizedsymbolrendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCATEGORIZEDSYMBOLRENDERERWIDGET_H
#define UI_QGSCATEGORIZEDSYMBOLRENDERERWIDGET_H

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
#include <qgsfieldexpressionwidget.h>
#include "qgscolorrampbutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCategorizedSymbolRendererWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QgsFieldExpressionWidget *mExpressionWidget;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QgsColorRampButton *btnColorRamp;
    QTreeView *viewCategories;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAddCategories;
    QPushButton *btnAddCategory;
    QPushButton *btnDeleteCategories;
    QPushButton *btnDeleteAllCategories;
    QPushButton *btnDeleteUnusedCategories;
    QSpacerItem *spacerItem;
    QPushButton *btnAdvanced;
    QgsSymbolButton *btnChangeCategorizedSymbol;

    void setupUi(QWidget *QgsCategorizedSymbolRendererWidget)
    {
        if (QgsCategorizedSymbolRendererWidget->objectName().isEmpty())
            QgsCategorizedSymbolRendererWidget->setObjectName(QString::fromUtf8("QgsCategorizedSymbolRendererWidget"));
        QgsCategorizedSymbolRendererWidget->resize(424, 368);
        gridLayout = new QGridLayout(QgsCategorizedSymbolRendererWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(QgsCategorizedSymbolRendererWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mExpressionWidget = new QgsFieldExpressionWidget(QgsCategorizedSymbolRendererWidget);
        mExpressionWidget->setObjectName(QString::fromUtf8("mExpressionWidget"));
        mExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExpressionWidget, 0, 1, 1, 1);

        label_9 = new QLabel(QgsCategorizedSymbolRendererWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(QgsCategorizedSymbolRendererWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnColorRamp = new QgsColorRampButton(QgsCategorizedSymbolRendererWidget);
        btnColorRamp->setObjectName(QString::fromUtf8("btnColorRamp"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy1);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(btnColorRamp);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        viewCategories = new QTreeView(QgsCategorizedSymbolRendererWidget);
        viewCategories->setObjectName(QString::fromUtf8("viewCategories"));
        viewCategories->setContextMenuPolicy(Qt::CustomContextMenu);
        viewCategories->setDragDropMode(QAbstractItemView::InternalMove);
        viewCategories->setDefaultDropAction(Qt::IgnoreAction);
        viewCategories->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewCategories->setIconSize(QSize(16, 16));
        viewCategories->setRootIsDecorated(false);
        viewCategories->setItemsExpandable(false);
        viewCategories->setSortingEnabled(true);
        viewCategories->setAllColumnsShowFocus(true);

        gridLayout->addWidget(viewCategories, 3, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnAddCategories = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnAddCategories->setObjectName(QString::fromUtf8("btnAddCategories"));

        horizontalLayout_3->addWidget(btnAddCategories);

        btnAddCategory = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnAddCategory->setObjectName(QString::fromUtf8("btnAddCategory"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddCategory->setIcon(icon);

        horizontalLayout_3->addWidget(btnAddCategory);

        btnDeleteCategories = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnDeleteCategories->setObjectName(QString::fromUtf8("btnDeleteCategories"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteCategories->setIcon(icon1);

        horizontalLayout_3->addWidget(btnDeleteCategories);

        btnDeleteAllCategories = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnDeleteAllCategories->setObjectName(QString::fromUtf8("btnDeleteAllCategories"));

        horizontalLayout_3->addWidget(btnDeleteAllCategories);

        btnDeleteUnusedCategories = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnDeleteUnusedCategories->setObjectName(QString::fromUtf8("btnDeleteUnusedCategories"));

        horizontalLayout_3->addWidget(btnDeleteUnusedCategories);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerItem);

        btnAdvanced = new QPushButton(QgsCategorizedSymbolRendererWidget);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));

        horizontalLayout_3->addWidget(btnAdvanced);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 2);

        btnChangeCategorizedSymbol = new QgsSymbolButton(QgsCategorizedSymbolRendererWidget);
        btnChangeCategorizedSymbol->setObjectName(QString::fromUtf8("btnChangeCategorizedSymbol"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnChangeCategorizedSymbol->sizePolicy().hasHeightForWidth());
        btnChangeCategorizedSymbol->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(btnChangeCategorizedSymbol, 1, 1, 1, 1);

        viewCategories->raise();
        btnChangeCategorizedSymbol->raise();
        label_9->raise();
        label_10->raise();
        mExpressionWidget->raise();
        label_3->raise();
        QWidget::setTabOrder(mExpressionWidget, btnChangeCategorizedSymbol);
        QWidget::setTabOrder(btnChangeCategorizedSymbol, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, viewCategories);
        QWidget::setTabOrder(viewCategories, btnAddCategories);
        QWidget::setTabOrder(btnAddCategories, btnAddCategory);
        QWidget::setTabOrder(btnAddCategory, btnDeleteCategories);
        QWidget::setTabOrder(btnDeleteCategories, btnDeleteAllCategories);
        QWidget::setTabOrder(btnDeleteAllCategories, btnAdvanced);

        retranslateUi(QgsCategorizedSymbolRendererWidget);

        QMetaObject::connectSlotsByName(QgsCategorizedSymbolRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsCategorizedSymbolRendererWidget)
    {
        label_3->setText(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Value", nullptr));
        label_9->setText(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Symbol", nullptr));
        label_10->setText(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Color ramp", nullptr));
        btnAddCategories->setText(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Classify", nullptr));
#if QT_CONFIG(tooltip)
        btnAddCategory->setToolTip(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnDeleteCategories->setToolTip(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDeleteAllCategories->setText(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Delete All", nullptr));
        btnDeleteUnusedCategories->setText(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Delete Unused", nullptr));
        btnAdvanced->setText(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Advanced", nullptr));
        btnChangeCategorizedSymbol->setText(QCoreApplication::translate("QgsCategorizedSymbolRendererWidget", "Change\342\200\246", nullptr));
        (void)QgsCategorizedSymbolRendererWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsCategorizedSymbolRendererWidget: public Ui_QgsCategorizedSymbolRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCATEGORIZEDSYMBOLRENDERERWIDGET_H
