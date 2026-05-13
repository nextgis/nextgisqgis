/********************************************************************************
** Form generated from reading UI file 'qgsorderbydialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSORDERBYDIALOGBASE_H
#define UI_QGSORDERBYDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderByDialogBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTableWidget *mOrderByTableWidget;

    void setupUi(QDialog *OrderByDialogBase)
    {
        if (OrderByDialogBase->objectName().isEmpty())
            OrderByDialogBase->setObjectName(QString::fromUtf8("OrderByDialogBase"));
        OrderByDialogBase->resize(747, 296);
        gridLayout = new QGridLayout(OrderByDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(OrderByDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        mOrderByTableWidget = new QTableWidget(OrderByDialogBase);
        if (mOrderByTableWidget->columnCount() < 3)
            mOrderByTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mOrderByTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mOrderByTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mOrderByTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        mOrderByTableWidget->setObjectName(QString::fromUtf8("mOrderByTableWidget"));

        gridLayout->addWidget(mOrderByTableWidget, 0, 0, 1, 1);


        retranslateUi(OrderByDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrderByDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrderByDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrderByDialogBase);
    } // setupUi

    void retranslateUi(QDialog *OrderByDialogBase)
    {
        OrderByDialogBase->setWindowTitle(QCoreApplication::translate("OrderByDialogBase", "Define Order", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mOrderByTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OrderByDialogBase", "Expression", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mOrderByTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OrderByDialogBase", "Asc / Desc", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = mOrderByTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("OrderByDialogBase", "NULLs handling", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderByDialogBase: public Ui_OrderByDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSORDERBYDIALOGBASE_H
