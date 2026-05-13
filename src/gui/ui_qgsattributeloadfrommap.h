/********************************************************************************
** Form generated from reading UI file 'qgsattributeloadfrommap.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTELOADFROMMAP_H
#define UI_QGSATTRIBUTELOADFROMMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeLoadValues
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *layerLabel;
    QLabel *keyLabel;
    QgsMapLayerComboBox *layerComboBox;
    QTableWidget *previewTableWidget;
    QLabel *valueTableLabel;
    QLabel *valueLabel;
    QgsFieldComboBox *valueComboBox;
    QPushButton *previewButton;
    QgsFieldComboBox *keyComboBox;
    QCheckBox *nullCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAttributeLoadValues)
    {
        if (QgsAttributeLoadValues->objectName().isEmpty())
            QgsAttributeLoadValues->setObjectName(QString::fromUtf8("QgsAttributeLoadValues"));
        QgsAttributeLoadValues->resize(420, 578);
        verticalLayout = new QVBoxLayout(QgsAttributeLoadValues);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        layerLabel = new QLabel(QgsAttributeLoadValues);
        layerLabel->setObjectName(QString::fromUtf8("layerLabel"));

        gridLayout->addWidget(layerLabel, 1, 0, 1, 1);

        keyLabel = new QLabel(QgsAttributeLoadValues);
        keyLabel->setObjectName(QString::fromUtf8("keyLabel"));

        gridLayout->addWidget(keyLabel, 3, 0, 1, 1);

        layerComboBox = new QgsMapLayerComboBox(QgsAttributeLoadValues);
        layerComboBox->setObjectName(QString::fromUtf8("layerComboBox"));

        gridLayout->addWidget(layerComboBox, 1, 1, 1, 2);

        previewTableWidget = new QTableWidget(QgsAttributeLoadValues);
        if (previewTableWidget->columnCount() < 2)
            previewTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        previewTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        previewTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        previewTableWidget->setObjectName(QString::fromUtf8("previewTableWidget"));

        gridLayout->addWidget(previewTableWidget, 5, 0, 1, 3);

        valueTableLabel = new QLabel(QgsAttributeLoadValues);
        valueTableLabel->setObjectName(QString::fromUtf8("valueTableLabel"));

        gridLayout->addWidget(valueTableLabel, 0, 0, 1, 3);

        valueLabel = new QLabel(QgsAttributeLoadValues);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        gridLayout->addWidget(valueLabel, 2, 0, 1, 1);

        valueComboBox = new QgsFieldComboBox(QgsAttributeLoadValues);
        valueComboBox->setObjectName(QString::fromUtf8("valueComboBox"));

        gridLayout->addWidget(valueComboBox, 2, 1, 1, 1);

        previewButton = new QPushButton(QgsAttributeLoadValues);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));

        gridLayout->addWidget(previewButton, 2, 2, 2, 1);

        keyComboBox = new QgsFieldComboBox(QgsAttributeLoadValues);
        keyComboBox->setObjectName(QString::fromUtf8("keyComboBox"));

        gridLayout->addWidget(keyComboBox, 3, 1, 1, 1);

        nullCheckBox = new QCheckBox(QgsAttributeLoadValues);
        nullCheckBox->setObjectName(QString::fromUtf8("nullCheckBox"));

        gridLayout->addWidget(nullCheckBox, 4, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(QgsAttributeLoadValues);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(layerComboBox, valueComboBox);
        QWidget::setTabOrder(valueComboBox, keyComboBox);
        QWidget::setTabOrder(keyComboBox, previewButton);
        QWidget::setTabOrder(previewButton, nullCheckBox);
        QWidget::setTabOrder(nullCheckBox, previewTableWidget);
        QWidget::setTabOrder(previewTableWidget, buttonBox);

        retranslateUi(QgsAttributeLoadValues);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributeLoadValues, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAttributeLoadValues, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAttributeLoadValues);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeLoadValues)
    {
        QgsAttributeLoadValues->setWindowTitle(QCoreApplication::translate("QgsAttributeLoadValues", "Load Values from Layer", nullptr));
        layerLabel->setText(QCoreApplication::translate("QgsAttributeLoadValues", "Layer", nullptr));
        keyLabel->setText(QCoreApplication::translate("QgsAttributeLoadValues", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem = previewTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsAttributeLoadValues", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = previewTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsAttributeLoadValues", "Description", nullptr));
        valueTableLabel->setText(QCoreApplication::translate("QgsAttributeLoadValues", "Select data from attributes in selected layer.", nullptr));
        valueLabel->setText(QCoreApplication::translate("QgsAttributeLoadValues", "Value", nullptr));
        previewButton->setText(QCoreApplication::translate("QgsAttributeLoadValues", "View All", nullptr));
        nullCheckBox->setText(QCoreApplication::translate("QgsAttributeLoadValues", "Insert NULL value on top", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeLoadValues: public Ui_QgsAttributeLoadValues {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTELOADFROMMAP_H
