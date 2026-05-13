/********************************************************************************
** Form generated from reading UI file 'qgspercentagenumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPERCENTAGENUMERICFORMATWIDGETBASE_H
#define UI_QGSPERCENTAGENUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgspanelwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPercentageNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mShowPlusCheckBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *mShowThousandsCheckBox;
    QgsSpinBox *mDecimalsSpinBox;
    QLabel *label;
    QCheckBox *mShowTrailingZerosCheckBox;
    QComboBox *mScalingComboBox;
    QLabel *label_2;

    void setupUi(QgsPanelWidget *QgsPercentageNumericFormatWidgetBase)
    {
        if (QgsPercentageNumericFormatWidgetBase->objectName().isEmpty())
            QgsPercentageNumericFormatWidgetBase->setObjectName(QString::fromUtf8("QgsPercentageNumericFormatWidgetBase"));
        QgsPercentageNumericFormatWidgetBase->resize(245, 297);
        QgsPercentageNumericFormatWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsPercentageNumericFormatWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mShowPlusCheckBox = new QCheckBox(QgsPercentageNumericFormatWidgetBase);
        mShowPlusCheckBox->setObjectName(QString::fromUtf8("mShowPlusCheckBox"));

        gridLayout->addWidget(mShowPlusCheckBox, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        mShowThousandsCheckBox = new QCheckBox(QgsPercentageNumericFormatWidgetBase);
        mShowThousandsCheckBox->setObjectName(QString::fromUtf8("mShowThousandsCheckBox"));
        mShowThousandsCheckBox->setChecked(true);

        gridLayout->addWidget(mShowThousandsCheckBox, 1, 0, 1, 2);

        mDecimalsSpinBox = new QgsSpinBox(QgsPercentageNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QString::fromUtf8("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(2);

        gridLayout->addWidget(mDecimalsSpinBox, 0, 1, 1, 1);

        label = new QLabel(QgsPercentageNumericFormatWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsPercentageNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QString::fromUtf8("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 3, 0, 1, 2);

        mScalingComboBox = new QComboBox(QgsPercentageNumericFormatWidgetBase);
        mScalingComboBox->setObjectName(QString::fromUtf8("mScalingComboBox"));

        gridLayout->addWidget(mScalingComboBox, 4, 1, 1, 1);

        label_2 = new QLabel(QgsPercentageNumericFormatWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        QWidget::setTabOrder(mDecimalsSpinBox, mShowThousandsCheckBox);
        QWidget::setTabOrder(mShowThousandsCheckBox, mShowPlusCheckBox);
        QWidget::setTabOrder(mShowPlusCheckBox, mShowTrailingZerosCheckBox);
        QWidget::setTabOrder(mShowTrailingZerosCheckBox, mScalingComboBox);

        retranslateUi(QgsPercentageNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsPercentageNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsPercentageNumericFormatWidgetBase)
    {
        mShowPlusCheckBox->setText(QCoreApplication::translate("QgsPercentageNumericFormatWidgetBase", "Show plus sign", nullptr));
        mShowThousandsCheckBox->setText(QCoreApplication::translate("QgsPercentageNumericFormatWidgetBase", "Show thousands separator", nullptr));
        label->setText(QCoreApplication::translate("QgsPercentageNumericFormatWidgetBase", "Decimal places", nullptr));
        mShowTrailingZerosCheckBox->setText(QCoreApplication::translate("QgsPercentageNumericFormatWidgetBase", "Show trailing zeros", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPercentageNumericFormatWidgetBase", "Scaling", nullptr));
        (void)QgsPercentageNumericFormatWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsPercentageNumericFormatWidgetBase: public Ui_QgsPercentageNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPERCENTAGENUMERICFORMATWIDGETBASE_H
