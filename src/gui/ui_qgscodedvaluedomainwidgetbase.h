/********************************************************************************
** Form generated from reading UI file 'qgscodedvaluedomainwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCODEDVALUEDOMAINWIDGETBASE_H
#define UI_QGSCODEDVALUEDOMAINWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCodedValueDomainWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTableView *mValuesTable;
    QVBoxLayout *verticalLayout;
    QToolButton *mButtonAddRow;
    QToolButton *mButtonRemoveRow;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsCodedValueDomainWidgetBase)
    {
        if (QgsCodedValueDomainWidgetBase->objectName().isEmpty())
            QgsCodedValueDomainWidgetBase->setObjectName(QString::fromUtf8("QgsCodedValueDomainWidgetBase"));
        QgsCodedValueDomainWidgetBase->resize(382, 327);
        gridLayout = new QGridLayout(QgsCodedValueDomainWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsCodedValueDomainWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mValuesTable = new QTableView(groupBox);
        mValuesTable->setObjectName(QString::fromUtf8("mValuesTable"));

        gridLayout_2->addWidget(mValuesTable, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mButtonAddRow = new QToolButton(groupBox);
        mButtonAddRow->setObjectName(QString::fromUtf8("mButtonAddRow"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddRow->setIcon(icon);

        verticalLayout->addWidget(mButtonAddRow);

        mButtonRemoveRow = new QToolButton(groupBox);
        mButtonRemoveRow->setObjectName(QString::fromUtf8("mButtonRemoveRow"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveRow->setIcon(icon1);

        verticalLayout->addWidget(mButtonRemoveRow);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);


        retranslateUi(QgsCodedValueDomainWidgetBase);

        QMetaObject::connectSlotsByName(QgsCodedValueDomainWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCodedValueDomainWidgetBase)
    {
        QgsCodedValueDomainWidgetBase->setWindowTitle(QCoreApplication::translate("QgsCodedValueDomainWidgetBase", "Coded Value Domain", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsCodedValueDomainWidgetBase", "Values", nullptr));
#if QT_CONFIG(tooltip)
        mButtonAddRow->setToolTip(QCoreApplication::translate("QgsCodedValueDomainWidgetBase", "Add row", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddRow->setText(QCoreApplication::translate("QgsCodedValueDomainWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonRemoveRow->setToolTip(QCoreApplication::translate("QgsCodedValueDomainWidgetBase", "Remove row", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveRow->setText(QCoreApplication::translate("QgsCodedValueDomainWidgetBase", "\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsCodedValueDomainWidgetBase: public Ui_QgsCodedValueDomainWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCODEDVALUEDOMAINWIDGETBASE_H
