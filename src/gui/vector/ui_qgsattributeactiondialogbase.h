/********************************************************************************
** Form generated from reading UI file 'qgsattributeactiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEACTIONDIALOGBASE_H
#define UI_QGSATTRIBUTEACTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeActionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBox *groupBoxActionList;
    QGridLayout *gridLayout_3;
    QPushButton *mMoveDownButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *mRemoveButton;
    QPushButton *mAddButton;
    QPushButton *mDuplicateButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mAddDefaultActionsButton;
    QPushButton *mMoveUpButton;
    QTableWidget *mAttributeActionTable;
    QgsCollapsibleGroupBox *mShowInAttributeTable;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *mAttributeTableWidgetType;

    void setupUi(QWidget *QgsAttributeActionDialogBase)
    {
        if (QgsAttributeActionDialogBase->objectName().isEmpty())
            QgsAttributeActionDialogBase->setObjectName(QString::fromUtf8("QgsAttributeActionDialogBase"));
        QgsAttributeActionDialogBase->resize(948, 731);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsAttributeActionDialogBase->sizePolicy().hasHeightForWidth());
        QgsAttributeActionDialogBase->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QgsAttributeActionDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        groupBoxActionList = new QgsCollapsibleGroupBox(QgsAttributeActionDialogBase);
        groupBoxActionList->setObjectName(QString::fromUtf8("groupBoxActionList"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(groupBoxActionList->sizePolicy().hasHeightForWidth());
        groupBoxActionList->setSizePolicy(sizePolicy1);
        groupBoxActionList->setProperty("syncGroup", QVariant(QString::fromUtf8("actiongroup")));
        gridLayout_3 = new QGridLayout(groupBoxActionList);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mMoveDownButton = new QPushButton(groupBoxActionList);
        mMoveDownButton->setObjectName(QString::fromUtf8("mMoveDownButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMoveDownButton->sizePolicy().hasHeightForWidth());
        mMoveDownButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveDownButton->setIcon(icon);

        gridLayout_3->addWidget(mMoveDownButton, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        mRemoveButton = new QPushButton(groupBoxActionList);
        mRemoveButton->setObjectName(QString::fromUtf8("mRemoveButton"));
        sizePolicy2.setHeightForWidth(mRemoveButton->sizePolicy().hasHeightForWidth());
        mRemoveButton->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveButton->setIcon(icon1);

        gridLayout_3->addWidget(mRemoveButton, 1, 3, 1, 1);

        mAddButton = new QPushButton(groupBoxActionList);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddButton->setIcon(icon2);

        gridLayout_3->addWidget(mAddButton, 1, 4, 1, 1);

        mDuplicateButton = new QPushButton(groupBoxActionList);
        mDuplicateButton->setObjectName(QString::fromUtf8("mDuplicateButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionDuplicateLayout.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDuplicateButton->setIcon(icon3);

        gridLayout_3->addWidget(mDuplicateButton, 1, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 6, 1, 1);

        mAddDefaultActionsButton = new QPushButton(groupBoxActionList);
        mAddDefaultActionsButton->setObjectName(QString::fromUtf8("mAddDefaultActionsButton"));

        gridLayout_3->addWidget(mAddDefaultActionsButton, 1, 7, 1, 1);

        mMoveUpButton = new QPushButton(groupBoxActionList);
        mMoveUpButton->setObjectName(QString::fromUtf8("mMoveUpButton"));
        sizePolicy2.setHeightForWidth(mMoveUpButton->sizePolicy().hasHeightForWidth());
        mMoveUpButton->setSizePolicy(sizePolicy2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveUpButton->setIcon(icon4);

        gridLayout_3->addWidget(mMoveUpButton, 1, 0, 1, 1);

        mAttributeActionTable = new QTableWidget(groupBoxActionList);
        if (mAttributeActionTable->columnCount() < 8)
            mAttributeActionTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        mAttributeActionTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        mAttributeActionTable->setObjectName(QString::fromUtf8("mAttributeActionTable"));
        sizePolicy.setHeightForWidth(mAttributeActionTable->sizePolicy().hasHeightForWidth());
        mAttributeActionTable->setSizePolicy(sizePolicy);
        mAttributeActionTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mAttributeActionTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mAttributeActionTable->setColumnCount(8);

        gridLayout_3->addWidget(mAttributeActionTable, 0, 0, 1, 8);


        gridLayout_2->addWidget(groupBoxActionList, 0, 0, 1, 1);

        mShowInAttributeTable = new QgsCollapsibleGroupBox(QgsAttributeActionDialogBase);
        mShowInAttributeTable->setObjectName(QString::fromUtf8("mShowInAttributeTable"));
        mShowInAttributeTable->setCheckable(true);
        formLayout = new QFormLayout(mShowInAttributeTable);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(mShowInAttributeTable);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mAttributeTableWidgetType = new QComboBox(mShowInAttributeTable);
        mAttributeTableWidgetType->addItem(QString());
        mAttributeTableWidgetType->addItem(QString());
        mAttributeTableWidgetType->setObjectName(QString::fromUtf8("mAttributeTableWidgetType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mAttributeTableWidgetType);


        gridLayout_2->addWidget(mShowInAttributeTable, 2, 0, 1, 1);

        QWidget::setTabOrder(groupBoxActionList, mMoveUpButton);
        QWidget::setTabOrder(mMoveUpButton, mMoveDownButton);
        QWidget::setTabOrder(mMoveDownButton, mRemoveButton);
        QWidget::setTabOrder(mRemoveButton, mAddButton);
        QWidget::setTabOrder(mAddButton, mDuplicateButton);
        QWidget::setTabOrder(mDuplicateButton, mAddDefaultActionsButton);
        QWidget::setTabOrder(mAddDefaultActionsButton, mShowInAttributeTable);
        QWidget::setTabOrder(mShowInAttributeTable, mAttributeTableWidgetType);
        QWidget::setTabOrder(mAttributeTableWidgetType, mAttributeActionTable);

        retranslateUi(QgsAttributeActionDialogBase);

        QMetaObject::connectSlotsByName(QgsAttributeActionDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeActionDialogBase)
    {
        QgsAttributeActionDialogBase->setWindowTitle(QCoreApplication::translate("QgsAttributeActionDialogBase", "Attribute Actions", nullptr));
        groupBoxActionList->setTitle(QCoreApplication::translate("QgsAttributeActionDialogBase", "Action List", nullptr));
#if QT_CONFIG(tooltip)
        mMoveDownButton->setToolTip(QCoreApplication::translate("QgsAttributeActionDialogBase", "Move the selected action down", nullptr));
#endif // QT_CONFIG(tooltip)
        mMoveDownButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveButton->setToolTip(QCoreApplication::translate("QgsAttributeActionDialogBase", "Remove the selected action", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveButton->setText(QString());
#if QT_CONFIG(tooltip)
        mAddButton->setToolTip(QCoreApplication::translate("QgsAttributeActionDialogBase", "Add a new action", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddButton->setText(QString());
#if QT_CONFIG(tooltip)
        mDuplicateButton->setToolTip(QCoreApplication::translate("QgsAttributeActionDialogBase", "Duplicate an action", nullptr));
#endif // QT_CONFIG(tooltip)
        mDuplicateButton->setText(QString());
        mAddDefaultActionsButton->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "Create Default Actions", nullptr));
#if QT_CONFIG(tooltip)
        mMoveUpButton->setToolTip(QCoreApplication::translate("QgsAttributeActionDialogBase", "Move the selected action up", nullptr));
#endif // QT_CONFIG(tooltip)
        mMoveUpButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = mAttributeActionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mAttributeActionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = mAttributeActionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "Short Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = mAttributeActionTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "Action", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = mAttributeActionTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "Capture", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = mAttributeActionTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "Action Scopes", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = mAttributeActionTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "On Notification", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem6->setToolTip(QCoreApplication::translate("QgsAttributeActionDialogBase", "<html><head/><body><p>If not empty, this will enable provider notification listening and the action will be executed when the notification message matched the specified value. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem7 = mAttributeActionTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "Only when editable", nullptr));
#if QT_CONFIG(tooltip)
        mAttributeActionTable->setToolTip(QCoreApplication::translate("QgsAttributeActionDialogBase", "This list contains all actions that have been defined for the current layer. Add actions by entering the details in the controls below and then pressing the Add to action list button. Actions can be edited here by double clicking on the item.", nullptr));
#endif // QT_CONFIG(tooltip)
        mShowInAttributeTable->setTitle(QCoreApplication::translate("QgsAttributeActionDialogBase", "Show in Attribute Table", nullptr));
        label->setText(QCoreApplication::translate("QgsAttributeActionDialogBase", "Layout", nullptr));
        mAttributeTableWidgetType->setItemText(0, QCoreApplication::translate("QgsAttributeActionDialogBase", "Separate Buttons", nullptr));
        mAttributeTableWidgetType->setItemText(1, QCoreApplication::translate("QgsAttributeActionDialogBase", "Combo Box", nullptr));

    } // retranslateUi

};

namespace Ui {
    class QgsAttributeActionDialogBase: public Ui_QgsAttributeActionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEACTIONDIALOGBASE_H
