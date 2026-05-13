/********************************************************************************
** Form generated from reading UI file 'qgspropertysizeassistantwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROPERTYSIZEASSISTANTWIDGET_H
#define UI_QGSPROPERTYSIZEASSISTANTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PropertySizeAssistant
{
public:
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *maxSizeSpinBox;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_2;
    QgsDoubleSpinBox *nullSizeSpinBox;
    QgsDoubleSpinBox *exponentSpinBox;
    QLabel *label_6;
    QComboBox *scaleMethodComboBox;
    QLabel *label;
    QgsDoubleSpinBox *minSizeSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PropertySizeAssistant)
    {
        if (PropertySizeAssistant->objectName().isEmpty())
            PropertySizeAssistant->setObjectName(QString::fromUtf8("PropertySizeAssistant"));
        PropertySizeAssistant->resize(288, 192);
        gridLayout_2 = new QGridLayout(PropertySizeAssistant);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        maxSizeSpinBox = new QgsDoubleSpinBox(PropertySizeAssistant);
        maxSizeSpinBox->setObjectName(QString::fromUtf8("maxSizeSpinBox"));
        maxSizeSpinBox->setDecimals(6);
        maxSizeSpinBox->setMaximum(99999999.000000000000000);
        maxSizeSpinBox->setValue(10.000000000000000);

        gridLayout_2->addWidget(maxSizeSpinBox, 1, 1, 1, 1);

        label_5 = new QLabel(PropertySizeAssistant);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_8 = new QLabel(PropertySizeAssistant);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        label_2 = new QLabel(PropertySizeAssistant);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        nullSizeSpinBox = new QgsDoubleSpinBox(PropertySizeAssistant);
        nullSizeSpinBox->setObjectName(QString::fromUtf8("nullSizeSpinBox"));
        nullSizeSpinBox->setDecimals(6);
        nullSizeSpinBox->setMaximum(99999999.000000000000000);
        nullSizeSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(nullSizeSpinBox, 4, 1, 1, 1);

        exponentSpinBox = new QgsDoubleSpinBox(PropertySizeAssistant);
        exponentSpinBox->setObjectName(QString::fromUtf8("exponentSpinBox"));
        exponentSpinBox->setMinimum(0.000000000000000);
        exponentSpinBox->setSingleStep(0.050000000000000);
        exponentSpinBox->setValue(0.570000000000000);

        gridLayout_2->addWidget(exponentSpinBox, 3, 1, 1, 1);

        label_6 = new QLabel(PropertySizeAssistant);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        scaleMethodComboBox = new QComboBox(PropertySizeAssistant);
        scaleMethodComboBox->setObjectName(QString::fromUtf8("scaleMethodComboBox"));

        gridLayout_2->addWidget(scaleMethodComboBox, 2, 1, 1, 1);

        label = new QLabel(PropertySizeAssistant);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        minSizeSpinBox = new QgsDoubleSpinBox(PropertySizeAssistant);
        minSizeSpinBox->setObjectName(QString::fromUtf8("minSizeSpinBox"));
        minSizeSpinBox->setDecimals(6);
        minSizeSpinBox->setMinimum(0.000000000000000);
        minSizeSpinBox->setMaximum(99999999.000000000000000);
        minSizeSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(minSizeSpinBox, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        QWidget::setTabOrder(minSizeSpinBox, maxSizeSpinBox);
        QWidget::setTabOrder(maxSizeSpinBox, scaleMethodComboBox);
        QWidget::setTabOrder(scaleMethodComboBox, exponentSpinBox);
        QWidget::setTabOrder(exponentSpinBox, nullSizeSpinBox);

        retranslateUi(PropertySizeAssistant);

        QMetaObject::connectSlotsByName(PropertySizeAssistant);
    } // setupUi

    void retranslateUi(QWidget *PropertySizeAssistant)
    {
        label_5->setText(QCoreApplication::translate("PropertySizeAssistant", "Size from", nullptr));
        label_8->setText(QCoreApplication::translate("PropertySizeAssistant", "Size when NULL", nullptr));
        label_2->setText(QCoreApplication::translate("PropertySizeAssistant", "Exponent", nullptr));
        label_6->setText(QCoreApplication::translate("PropertySizeAssistant", "to", nullptr));
        label->setText(QCoreApplication::translate("PropertySizeAssistant", "Scale method", nullptr));
        (void)PropertySizeAssistant;
    } // retranslateUi

};

namespace Ui {
    class PropertySizeAssistant: public Ui_PropertySizeAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROPERTYSIZEASSISTANTWIDGET_H
