/********************************************************************************
** Form generated from reading UI file 'qgsbasicnumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBASICNUMERICFORMATWIDGETBASE_H
#define UI_QGSBASICNUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include "qgsfilterlineedit.h"
#include "qgspanelwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsBasicNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *mRadDecimalPlaces;
    QCheckBox *mShowPlusCheckBox;
    QCheckBox *mShowThousandsCheckBox;
    QLabel *label_3;
    QgsFilterLineEdit *mDecimalLineEdit;
    QgsSpinBox *mDecimalsSpinBox;
    QRadioButton *mRadSignificantFigures;
    QCheckBox *mShowTrailingZerosCheckBox;
    QSpacerItem *verticalSpacer;
    QgsFilterLineEdit *mThousandsLineEdit;
    QLabel *label_2;

    void setupUi(QgsPanelWidget *QgsBasicNumericFormatWidgetBase)
    {
        if (QgsBasicNumericFormatWidgetBase->objectName().isEmpty())
            QgsBasicNumericFormatWidgetBase->setObjectName(QString::fromUtf8("QgsBasicNumericFormatWidgetBase"));
        QgsBasicNumericFormatWidgetBase->resize(224, 285);
        QgsBasicNumericFormatWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsBasicNumericFormatWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsBasicNumericFormatWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mRadDecimalPlaces = new QRadioButton(QgsBasicNumericFormatWidgetBase);
        mRadDecimalPlaces->setObjectName(QString::fromUtf8("mRadDecimalPlaces"));
        mRadDecimalPlaces->setChecked(true);

        gridLayout->addWidget(mRadDecimalPlaces, 1, 0, 1, 2);

        mShowPlusCheckBox = new QCheckBox(QgsBasicNumericFormatWidgetBase);
        mShowPlusCheckBox->setObjectName(QString::fromUtf8("mShowPlusCheckBox"));

        gridLayout->addWidget(mShowPlusCheckBox, 4, 0, 1, 2);

        mShowThousandsCheckBox = new QCheckBox(QgsBasicNumericFormatWidgetBase);
        mShowThousandsCheckBox->setObjectName(QString::fromUtf8("mShowThousandsCheckBox"));
        mShowThousandsCheckBox->setChecked(true);

        gridLayout->addWidget(mShowThousandsCheckBox, 3, 0, 1, 2);

        label_3 = new QLabel(QgsBasicNumericFormatWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        mDecimalLineEdit = new QgsFilterLineEdit(QgsBasicNumericFormatWidgetBase);
        mDecimalLineEdit->setObjectName(QString::fromUtf8("mDecimalLineEdit"));
        mDecimalLineEdit->setMaxLength(1);

        gridLayout->addWidget(mDecimalLineEdit, 7, 1, 1, 1);

        mDecimalsSpinBox = new QgsSpinBox(QgsBasicNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QString::fromUtf8("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(6);

        gridLayout->addWidget(mDecimalsSpinBox, 0, 1, 1, 1);

        mRadSignificantFigures = new QRadioButton(QgsBasicNumericFormatWidgetBase);
        mRadSignificantFigures->setObjectName(QString::fromUtf8("mRadSignificantFigures"));

        gridLayout->addWidget(mRadSignificantFigures, 2, 0, 1, 2);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsBasicNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QString::fromUtf8("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);

        mThousandsLineEdit = new QgsFilterLineEdit(QgsBasicNumericFormatWidgetBase);
        mThousandsLineEdit->setObjectName(QString::fromUtf8("mThousandsLineEdit"));
        mThousandsLineEdit->setMaxLength(1);

        gridLayout->addWidget(mThousandsLineEdit, 6, 1, 1, 1);

        label_2 = new QLabel(QgsBasicNumericFormatWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        QWidget::setTabOrder(mDecimalsSpinBox, mRadDecimalPlaces);
        QWidget::setTabOrder(mRadDecimalPlaces, mRadSignificantFigures);
        QWidget::setTabOrder(mRadSignificantFigures, mShowThousandsCheckBox);
        QWidget::setTabOrder(mShowThousandsCheckBox, mShowPlusCheckBox);
        QWidget::setTabOrder(mShowPlusCheckBox, mShowTrailingZerosCheckBox);
        QWidget::setTabOrder(mShowTrailingZerosCheckBox, mThousandsLineEdit);
        QWidget::setTabOrder(mThousandsLineEdit, mDecimalLineEdit);

        retranslateUi(QgsBasicNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsBasicNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsBasicNumericFormatWidgetBase)
    {
        label->setText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Round to", nullptr));
        mRadDecimalPlaces->setText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Decimal places", nullptr));
        mShowPlusCheckBox->setText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Show plus sign", nullptr));
        mShowThousandsCheckBox->setText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Show thousands separator", nullptr));
        label_3->setText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Decimal separator", nullptr));
        mDecimalLineEdit->setPlaceholderText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Default", nullptr));
        mRadSignificantFigures->setText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Significant figures", nullptr));
        mShowTrailingZerosCheckBox->setText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Show trailing zeros", nullptr));
        mThousandsLineEdit->setPlaceholderText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Default", nullptr));
        label_2->setText(QCoreApplication::translate("QgsBasicNumericFormatWidgetBase", "Thousands separator", nullptr));
        (void)QgsBasicNumericFormatWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsBasicNumericFormatWidgetBase: public Ui_QgsBasicNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBASICNUMERICFORMATWIDGETBASE_H
