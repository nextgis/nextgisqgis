/********************************************************************************
** Form generated from reading UI file 'qgsdiscoverrelationsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDISCOVERRELATIONSDIALOGBASE_H
#define UI_QGSDISCOVERRELATIONSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsDiscoverRelationsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mRelationsTable;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsDiscoverRelationsDialogBase)
    {
        if (QgsDiscoverRelationsDialogBase->objectName().isEmpty())
            QgsDiscoverRelationsDialogBase->setObjectName(QString::fromUtf8("QgsDiscoverRelationsDialogBase"));
        QgsDiscoverRelationsDialogBase->resize(700, 267);
        verticalLayout = new QVBoxLayout(QgsDiscoverRelationsDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mRelationsTable = new QTableWidget(QgsDiscoverRelationsDialogBase);
        if (mRelationsTable->columnCount() < 6)
            mRelationsTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        mRelationsTable->setObjectName(QString::fromUtf8("mRelationsTable"));
        mRelationsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mRelationsTable->setSelectionMode(QAbstractItemView::MultiSelection);
        mRelationsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mRelationsTable->setSortingEnabled(true);
        mRelationsTable->horizontalHeader()->setStretchLastSection(true);
        mRelationsTable->verticalHeader()->setVisible(false);
        mRelationsTable->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(mRelationsTable);

        mButtonBox = new QDialogButtonBox(QgsDiscoverRelationsDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsDiscoverRelationsDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsDiscoverRelationsDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsDiscoverRelationsDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDiscoverRelationsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDiscoverRelationsDialogBase)
    {
        QgsDiscoverRelationsDialogBase->setWindowTitle(QCoreApplication::translate("QgsDiscoverRelationsDialogBase", "Discover Relations", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mRelationsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsDiscoverRelationsDialogBase", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mRelationsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsDiscoverRelationsDialogBase", "Referencing Layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = mRelationsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QgsDiscoverRelationsDialogBase", "Referencing Field", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = mRelationsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QgsDiscoverRelationsDialogBase", "Referenced Layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = mRelationsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QgsDiscoverRelationsDialogBase", "Referenced Field", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = mRelationsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("QgsDiscoverRelationsDialogBase", "Strength", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDiscoverRelationsDialogBase: public Ui_QgsDiscoverRelationsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDISCOVERRELATIONSDIALOGBASE_H
