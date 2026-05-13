/********************************************************************************
** Form generated from reading UI file 'qgsdatadefinedsizelegendwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATADEFINEDSIZELEGENDWIDGET_H
#define UI_QGSDATADEFINEDSIZELEGENDWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDataDefinedSizeLegendWidget
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *radDisabled;
    QRadioButton *radSeparated;
    QRadioButton *radCollapsed;
    QPushButton *btnChangeSymbol;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *editTitle;
    QGroupBox *groupManualSizeClasses;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnAddClass;
    QToolButton *btnRemoveClass;
    QSpacerItem *horizontalSpacer;
    QTreeView *viewSizeClasses;
    QGroupBox *groupBoxOptions;
    QGridLayout *gridLayout;
    QComboBox *cboAlignSymbols;
    QLabel *label;
    QgsSymbolButton *mLineSymbolButton;
    QLabel *label_3;
    QTreeView *viewLayerTree;

    void setupUi(QWidget *QgsDataDefinedSizeLegendWidget)
    {
        if (QgsDataDefinedSizeLegendWidget->objectName().isEmpty())
            QgsDataDefinedSizeLegendWidget->setObjectName(QString::fromUtf8("QgsDataDefinedSizeLegendWidget"));
        QgsDataDefinedSizeLegendWidget->resize(718, 749);
        horizontalLayout_4 = new QHBoxLayout(QgsDataDefinedSizeLegendWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radDisabled = new QRadioButton(QgsDataDefinedSizeLegendWidget);
        radDisabled->setObjectName(QString::fromUtf8("radDisabled"));
        radDisabled->setChecked(true);

        verticalLayout->addWidget(radDisabled);

        radSeparated = new QRadioButton(QgsDataDefinedSizeLegendWidget);
        radSeparated->setObjectName(QString::fromUtf8("radSeparated"));

        verticalLayout->addWidget(radSeparated);

        radCollapsed = new QRadioButton(QgsDataDefinedSizeLegendWidget);
        radCollapsed->setObjectName(QString::fromUtf8("radCollapsed"));

        verticalLayout->addWidget(radCollapsed);

        btnChangeSymbol = new QPushButton(QgsDataDefinedSizeLegendWidget);
        btnChangeSymbol->setObjectName(QString::fromUtf8("btnChangeSymbol"));

        verticalLayout->addWidget(btnChangeSymbol);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(QgsDataDefinedSizeLegendWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        editTitle = new QLineEdit(QgsDataDefinedSizeLegendWidget);
        editTitle->setObjectName(QString::fromUtf8("editTitle"));

        horizontalLayout_3->addWidget(editTitle);


        verticalLayout->addLayout(horizontalLayout_3);

        groupManualSizeClasses = new QGroupBox(QgsDataDefinedSizeLegendWidget);
        groupManualSizeClasses->setObjectName(QString::fromUtf8("groupManualSizeClasses"));
        groupManualSizeClasses->setCheckable(true);
        groupManualSizeClasses->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(groupManualSizeClasses);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnAddClass = new QToolButton(groupManualSizeClasses);
        btnAddClass->setObjectName(QString::fromUtf8("btnAddClass"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddClass->setIcon(icon);

        horizontalLayout_2->addWidget(btnAddClass);

        btnRemoveClass = new QToolButton(groupManualSizeClasses);
        btnRemoveClass->setObjectName(QString::fromUtf8("btnRemoveClass"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveClass->setIcon(icon1);

        horizontalLayout_2->addWidget(btnRemoveClass);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        viewSizeClasses = new QTreeView(groupManualSizeClasses);
        viewSizeClasses->setObjectName(QString::fromUtf8("viewSizeClasses"));
        viewSizeClasses->setRootIsDecorated(false);

        verticalLayout_2->addWidget(viewSizeClasses);


        verticalLayout->addWidget(groupManualSizeClasses);

        groupBoxOptions = new QGroupBox(QgsDataDefinedSizeLegendWidget);
        groupBoxOptions->setObjectName(QString::fromUtf8("groupBoxOptions"));
        gridLayout = new QGridLayout(groupBoxOptions);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cboAlignSymbols = new QComboBox(groupBoxOptions);
        cboAlignSymbols->addItem(QString());
        cboAlignSymbols->addItem(QString());
        cboAlignSymbols->setObjectName(QString::fromUtf8("cboAlignSymbols"));

        gridLayout->addWidget(cboAlignSymbols, 0, 1, 1, 1);

        label = new QLabel(groupBoxOptions);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mLineSymbolButton = new QgsSymbolButton(groupBoxOptions);
        mLineSymbolButton->setObjectName(QString::fromUtf8("mLineSymbolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLineSymbolButton->sizePolicy().hasHeightForWidth());
        mLineSymbolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLineSymbolButton, 1, 1, 1, 1);

        label_3 = new QLabel(groupBoxOptions);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBoxOptions);


        horizontalLayout_4->addLayout(verticalLayout);

        viewLayerTree = new QTreeView(QgsDataDefinedSizeLegendWidget);
        viewLayerTree->setObjectName(QString::fromUtf8("viewLayerTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(viewLayerTree->sizePolicy().hasHeightForWidth());
        viewLayerTree->setSizePolicy(sizePolicy1);
        viewLayerTree->setHeaderHidden(true);

        horizontalLayout_4->addWidget(viewLayerTree);

        QWidget::setTabOrder(radDisabled, radSeparated);
        QWidget::setTabOrder(radSeparated, radCollapsed);
        QWidget::setTabOrder(radCollapsed, btnChangeSymbol);
        QWidget::setTabOrder(btnChangeSymbol, editTitle);
        QWidget::setTabOrder(editTitle, groupManualSizeClasses);
        QWidget::setTabOrder(groupManualSizeClasses, btnAddClass);
        QWidget::setTabOrder(btnAddClass, btnRemoveClass);
        QWidget::setTabOrder(btnRemoveClass, viewSizeClasses);
        QWidget::setTabOrder(viewSizeClasses, cboAlignSymbols);
        QWidget::setTabOrder(cboAlignSymbols, mLineSymbolButton);
        QWidget::setTabOrder(mLineSymbolButton, viewLayerTree);

        retranslateUi(QgsDataDefinedSizeLegendWidget);

        QMetaObject::connectSlotsByName(QgsDataDefinedSizeLegendWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsDataDefinedSizeLegendWidget)
    {
        QgsDataDefinedSizeLegendWidget->setWindowTitle(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Data-defined Size Legend", nullptr));
        radDisabled->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Legend not enabled", nullptr));
        radSeparated->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Separated legend items", nullptr));
        radCollapsed->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Collapsed legend", nullptr));
        btnChangeSymbol->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Legend Symbol\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Title", nullptr));
        groupManualSizeClasses->setTitle(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Manual size classes", nullptr));
#if QT_CONFIG(tooltip)
        btnAddClass->setToolTip(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Add a class", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddClass->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        btnRemoveClass->setToolTip(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Remove selected class", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveClass->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "\342\200\246", nullptr));
        groupBoxOptions->setTitle(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Options", nullptr));
        cboAlignSymbols->setItemText(0, QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Bottom", nullptr));
        cboAlignSymbols->setItemText(1, QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Center", nullptr));

        label->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Align symbols", nullptr));
        mLineSymbolButton->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Change\342\200\246", nullptr));
        label_3->setText(QCoreApplication::translate("QgsDataDefinedSizeLegendWidget", "Line symbol", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDataDefinedSizeLegendWidget: public Ui_QgsDataDefinedSizeLegendWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATADEFINEDSIZELEGENDWIDGET_H
