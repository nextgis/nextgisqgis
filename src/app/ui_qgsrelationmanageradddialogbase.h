/********************************************************************************
** Form generated from reading UI file 'qgsrelationmanageradddialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONMANAGERADDDIALOGBASE_H
#define UI_QGSRELATIONMANAGERADDDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRelationManagerAddDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mRelationStrengthLabel;
    QTableWidget *mFieldsMappingTable;
    QLabel *mIdLabel;
    QLabel *mNameLabel;
    QComboBox *mRelationStrengthComboBox;
    QLineEdit *mIdLineEdit;
    QDialogButtonBox *mButtonBox;
    QLineEdit *mNameLineEdit;
    QLabel *mFieldsMappingLabel;
    QVBoxLayout *mFieldsMappingButtonsVBoxLayout;
    QToolButton *mFieldsMappingAddButton;
    QToolButton *mFieldsMappingRemoveButton;
    QSpacerItem *mFieldsMappingVSpacer;

    void setupUi(QWidget *QgsRelationManagerAddDialogBase)
    {
        if (QgsRelationManagerAddDialogBase->objectName().isEmpty())
            QgsRelationManagerAddDialogBase->setObjectName(QString::fromUtf8("QgsRelationManagerAddDialogBase"));
        QgsRelationManagerAddDialogBase->resize(450, 400);
        gridLayout = new QGridLayout(QgsRelationManagerAddDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mRelationStrengthLabel = new QLabel(QgsRelationManagerAddDialogBase);
        mRelationStrengthLabel->setObjectName(QString::fromUtf8("mRelationStrengthLabel"));

        gridLayout->addWidget(mRelationStrengthLabel, 3, 0, 1, 1);

        mFieldsMappingTable = new QTableWidget(QgsRelationManagerAddDialogBase);
        if (mFieldsMappingTable->columnCount() < 2)
            mFieldsMappingTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mFieldsMappingTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mFieldsMappingTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (mFieldsMappingTable->rowCount() < 1)
            mFieldsMappingTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mFieldsMappingTable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        mFieldsMappingTable->setObjectName(QString::fromUtf8("mFieldsMappingTable"));
        mFieldsMappingTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mFieldsMappingTable->setRowCount(1);
        mFieldsMappingTable->horizontalHeader()->setDefaultSectionSize(150);
        mFieldsMappingTable->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(mFieldsMappingTable, 5, 0, 1, 2);

        mIdLabel = new QLabel(QgsRelationManagerAddDialogBase);
        mIdLabel->setObjectName(QString::fromUtf8("mIdLabel"));

        gridLayout->addWidget(mIdLabel, 0, 0, 1, 1);

        mNameLabel = new QLabel(QgsRelationManagerAddDialogBase);
        mNameLabel->setObjectName(QString::fromUtf8("mNameLabel"));

        gridLayout->addWidget(mNameLabel, 1, 0, 1, 1);

        mRelationStrengthComboBox = new QComboBox(QgsRelationManagerAddDialogBase);
        mRelationStrengthComboBox->setObjectName(QString::fromUtf8("mRelationStrengthComboBox"));

        gridLayout->addWidget(mRelationStrengthComboBox, 3, 1, 1, 2);

        mIdLineEdit = new QLineEdit(QgsRelationManagerAddDialogBase);
        mIdLineEdit->setObjectName(QString::fromUtf8("mIdLineEdit"));

        gridLayout->addWidget(mIdLineEdit, 0, 1, 1, 2);

        mButtonBox = new QDialogButtonBox(QgsRelationManagerAddDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 7, 0, 1, 3);

        mNameLineEdit = new QLineEdit(QgsRelationManagerAddDialogBase);
        mNameLineEdit->setObjectName(QString::fromUtf8("mNameLineEdit"));

        gridLayout->addWidget(mNameLineEdit, 1, 1, 1, 2);

        mFieldsMappingLabel = new QLabel(QgsRelationManagerAddDialogBase);
        mFieldsMappingLabel->setObjectName(QString::fromUtf8("mFieldsMappingLabel"));

        gridLayout->addWidget(mFieldsMappingLabel, 4, 0, 1, 2);

        mFieldsMappingButtonsVBoxLayout = new QVBoxLayout();
        mFieldsMappingButtonsVBoxLayout->setObjectName(QString::fromUtf8("mFieldsMappingButtonsVBoxLayout"));
        mFieldsMappingAddButton = new QToolButton(QgsRelationManagerAddDialogBase);
        mFieldsMappingAddButton->setObjectName(QString::fromUtf8("mFieldsMappingAddButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFieldsMappingAddButton->setIcon(icon);

        mFieldsMappingButtonsVBoxLayout->addWidget(mFieldsMappingAddButton);

        mFieldsMappingRemoveButton = new QToolButton(QgsRelationManagerAddDialogBase);
        mFieldsMappingRemoveButton->setObjectName(QString::fromUtf8("mFieldsMappingRemoveButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFieldsMappingRemoveButton->setIcon(icon1);

        mFieldsMappingButtonsVBoxLayout->addWidget(mFieldsMappingRemoveButton);

        mFieldsMappingVSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mFieldsMappingButtonsVBoxLayout->addItem(mFieldsMappingVSpacer);


        gridLayout->addLayout(mFieldsMappingButtonsVBoxLayout, 5, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        QWidget::setTabOrder(mIdLineEdit, mNameLineEdit);
        QWidget::setTabOrder(mNameLineEdit, mRelationStrengthComboBox);
        QWidget::setTabOrder(mRelationStrengthComboBox, mFieldsMappingTable);
        QWidget::setTabOrder(mFieldsMappingTable, mFieldsMappingAddButton);
        QWidget::setTabOrder(mFieldsMappingAddButton, mFieldsMappingRemoveButton);

        retranslateUi(QgsRelationManagerAddDialogBase);

        QMetaObject::connectSlotsByName(QgsRelationManagerAddDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRelationManagerAddDialogBase)
    {
        QgsRelationManagerAddDialogBase->setWindowTitle(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Add Relation", nullptr));
        mRelationStrengthLabel->setText(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Relationship strength", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mFieldsMappingTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Referenced (parent)", "static relations"));
        QTableWidgetItem *___qtablewidgetitem1 = mFieldsMappingTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Referencing (child)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = mFieldsMappingTable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Layer", nullptr));
        mIdLabel->setText(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Id", nullptr));
        mNameLabel->setText(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Name", nullptr));
        mIdLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "[Generated automatically]", nullptr));
        mFieldsMappingLabel->setText(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Layer and fields mapping", nullptr));
#if QT_CONFIG(tooltip)
        mFieldsMappingAddButton->setToolTip(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Add new field pair as part of a composite foreign key", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mFieldsMappingRemoveButton->setToolTip(QCoreApplication::translate("QgsRelationManagerAddDialogBase", "Remove the selected or last pair of fields", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsRelationManagerAddDialogBase: public Ui_QgsRelationManagerAddDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONMANAGERADDDIALOGBASE_H
