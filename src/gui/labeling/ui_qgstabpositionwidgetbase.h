/********************************************************************************
** Form generated from reading UI file 'qgstabpositionwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTABPOSITIONWIDGETBASE_H
#define UI_QGSTABPOSITIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTabPositionWidgetBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mTabPositionTreeWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *mAddButton;
    QPushButton *mRemoveButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsTabPositionWidgetBase)
    {
        if (QgsTabPositionWidgetBase->objectName().isEmpty())
            QgsTabPositionWidgetBase->setObjectName(QString::fromUtf8("QgsTabPositionWidgetBase"));
        QgsTabPositionWidgetBase->resize(194, 277);
        gridLayout = new QGridLayout(QgsTabPositionWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mTabPositionTreeWidget = new QTreeWidget(QgsTabPositionWidgetBase);
        mTabPositionTreeWidget->setObjectName(QString::fromUtf8("mTabPositionTreeWidget"));
        mTabPositionTreeWidget->setHeaderHidden(false);
        mTabPositionTreeWidget->setColumnCount(1);

        gridLayout->addWidget(mTabPositionTreeWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mAddButton = new QPushButton(QgsTabPositionWidgetBase);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));

        verticalLayout->addWidget(mAddButton);

        mRemoveButton = new QPushButton(QgsTabPositionWidgetBase);
        mRemoveButton->setObjectName(QString::fromUtf8("mRemoveButton"));

        verticalLayout->addWidget(mRemoveButton);

        verticalSpacer = new QSpacerItem(20, 245, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(QgsTabPositionWidgetBase);

        QMetaObject::connectSlotsByName(QgsTabPositionWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsTabPositionWidgetBase)
    {
        QgsTabPositionWidgetBase->setWindowTitle(QCoreApplication::translate("QgsTabPositionWidgetBase", "Tab Positions", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mTabPositionTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsTabPositionWidgetBase", "Position", nullptr));
        mAddButton->setText(QString());
        mRemoveButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsTabPositionWidgetBase: public Ui_QgsTabPositionWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTABPOSITIONWIDGETBASE_H
