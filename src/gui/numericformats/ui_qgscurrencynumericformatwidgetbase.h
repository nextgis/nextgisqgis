/********************************************************************************
** Form generated from reading UI file 'qgscurrencynumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCURRENCYNUMERICFORMATWIDGETBASE_H
#define UI_QGSCURRENCYNUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "qgspanelwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCurrencyNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *mShowPlusCheckBox;
    QCheckBox *mShowTrailingZerosCheckBox;
    QLabel *label;
    QgsSpinBox *mDecimalsSpinBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *mShowThousandsCheckBox;
    QLabel *label_3;
    QLineEdit *mPrefixLineEdit;
    QLineEdit *mSuffixLineEdit;

    void setupUi(QgsPanelWidget *QgsCurrencyNumericFormatWidgetBase)
    {
        if (QgsCurrencyNumericFormatWidgetBase->objectName().isEmpty())
            QgsCurrencyNumericFormatWidgetBase->setObjectName(QString::fromUtf8("QgsCurrencyNumericFormatWidgetBase"));
        QgsCurrencyNumericFormatWidgetBase->resize(245, 297);
        QgsCurrencyNumericFormatWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsCurrencyNumericFormatWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(QgsCurrencyNumericFormatWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mShowPlusCheckBox = new QCheckBox(QgsCurrencyNumericFormatWidgetBase);
        mShowPlusCheckBox->setObjectName(QString::fromUtf8("mShowPlusCheckBox"));

        gridLayout->addWidget(mShowPlusCheckBox, 4, 0, 1, 2);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsCurrencyNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QString::fromUtf8("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 5, 0, 1, 2);

        label = new QLabel(QgsCurrencyNumericFormatWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        mDecimalsSpinBox = new QgsSpinBox(QgsCurrencyNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QString::fromUtf8("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(2);

        gridLayout->addWidget(mDecimalsSpinBox, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        mShowThousandsCheckBox = new QCheckBox(QgsCurrencyNumericFormatWidgetBase);
        mShowThousandsCheckBox->setObjectName(QString::fromUtf8("mShowThousandsCheckBox"));
        mShowThousandsCheckBox->setChecked(true);

        gridLayout->addWidget(mShowThousandsCheckBox, 3, 0, 1, 2);

        label_3 = new QLabel(QgsCurrencyNumericFormatWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        mPrefixLineEdit = new QLineEdit(QgsCurrencyNumericFormatWidgetBase);
        mPrefixLineEdit->setObjectName(QString::fromUtf8("mPrefixLineEdit"));

        gridLayout->addWidget(mPrefixLineEdit, 0, 1, 1, 1);

        mSuffixLineEdit = new QLineEdit(QgsCurrencyNumericFormatWidgetBase);
        mSuffixLineEdit->setObjectName(QString::fromUtf8("mSuffixLineEdit"));

        gridLayout->addWidget(mSuffixLineEdit, 1, 1, 1, 1);

        QWidget::setTabOrder(mPrefixLineEdit, mSuffixLineEdit);
        QWidget::setTabOrder(mSuffixLineEdit, mDecimalsSpinBox);
        QWidget::setTabOrder(mDecimalsSpinBox, mShowThousandsCheckBox);
        QWidget::setTabOrder(mShowThousandsCheckBox, mShowPlusCheckBox);
        QWidget::setTabOrder(mShowPlusCheckBox, mShowTrailingZerosCheckBox);

        retranslateUi(QgsCurrencyNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsCurrencyNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsCurrencyNumericFormatWidgetBase)
    {
        label_2->setText(QCoreApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Prefix", nullptr));
        mShowPlusCheckBox->setText(QCoreApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Show plus sign", nullptr));
        mShowTrailingZerosCheckBox->setText(QCoreApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Show trailing zeros", nullptr));
        label->setText(QCoreApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Decimal places", nullptr));
        mShowThousandsCheckBox->setText(QCoreApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Show thousands separator", nullptr));
        label_3->setText(QCoreApplication::translate("QgsCurrencyNumericFormatWidgetBase", "Suffix", nullptr));
        mPrefixLineEdit->setText(QCoreApplication::translate("QgsCurrencyNumericFormatWidgetBase", "$", nullptr));
        (void)QgsCurrencyNumericFormatWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsCurrencyNumericFormatWidgetBase: public Ui_QgsCurrencyNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCURRENCYNUMERICFORMATWIDGETBASE_H
