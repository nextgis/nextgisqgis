/********************************************************************************
** Form generated from reading UI file 'qgsscientificnumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSCIENTIFICNUMERICFORMATWIDGETBASE_H
#define UI_QGSSCIENTIFICNUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <qgsspinbox.h>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsScientificNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsSpinBox *mDecimalsSpinBox;
    QCheckBox *mShowTrailingZerosCheckBox;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QCheckBox *mShowPlusCheckBox;

    void setupUi(QgsPanelWidget *QgsScientificNumericFormatWidgetBase)
    {
        if (QgsScientificNumericFormatWidgetBase->objectName().isEmpty())
            QgsScientificNumericFormatWidgetBase->setObjectName(QString::fromUtf8("QgsScientificNumericFormatWidgetBase"));
        QgsScientificNumericFormatWidgetBase->resize(245, 297);
        QgsScientificNumericFormatWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsScientificNumericFormatWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mDecimalsSpinBox = new QgsSpinBox(QgsScientificNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QString::fromUtf8("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(6);

        gridLayout->addWidget(mDecimalsSpinBox, 0, 1, 1, 1);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsScientificNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QString::fromUtf8("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 2, 0, 1, 2);

        label = new QLabel(QgsScientificNumericFormatWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        mShowPlusCheckBox = new QCheckBox(QgsScientificNumericFormatWidgetBase);
        mShowPlusCheckBox->setObjectName(QString::fromUtf8("mShowPlusCheckBox"));

        gridLayout->addWidget(mShowPlusCheckBox, 1, 0, 1, 2);


        retranslateUi(QgsScientificNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsScientificNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsScientificNumericFormatWidgetBase)
    {
        mShowTrailingZerosCheckBox->setText(QCoreApplication::translate("QgsScientificNumericFormatWidgetBase", "Show trailing zeros", nullptr));
        label->setText(QCoreApplication::translate("QgsScientificNumericFormatWidgetBase", "Decimal places", nullptr));
        mShowPlusCheckBox->setText(QCoreApplication::translate("QgsScientificNumericFormatWidgetBase", "Show plus sign", nullptr));
        (void)QgsScientificNumericFormatWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsScientificNumericFormatWidgetBase: public Ui_QgsScientificNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSCIENTIFICNUMERICFORMATWIDGETBASE_H
