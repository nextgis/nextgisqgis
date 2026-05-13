/********************************************************************************
** Form generated from reading UI file 'qgsgeographiccoordinatenumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOGRAPHICCOORDINATENUMERICFORMATWIDGETBASE_H
#define UI_QGSGEOGRAPHICCOORDINATENUMERICFORMATWIDGETBASE_H

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

class Ui_QgsGeographicCoordinateNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QCheckBox *mShowDirectionalSuffixCheckBox;
    QCheckBox *mShowLeadingZerosForDegreesCheckBox;
    QComboBox *mFormatComboBox;
    QCheckBox *mShowLeadingZerosCheckBox;
    QLabel *mLabelDecimalPlaces;
    QgsSpinBox *mDecimalsSpinBox;
    QCheckBox *mShowTrailingZerosCheckBox;

    void setupUi(QgsPanelWidget *QgsGeographicCoordinateNumericFormatWidgetBase)
    {
        if (QgsGeographicCoordinateNumericFormatWidgetBase->objectName().isEmpty())
            QgsGeographicCoordinateNumericFormatWidgetBase->setObjectName(QString::fromUtf8("QgsGeographicCoordinateNumericFormatWidgetBase"));
        QgsGeographicCoordinateNumericFormatWidgetBase->resize(420, 370);
        QgsGeographicCoordinateNumericFormatWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsGeographicCoordinateNumericFormatWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        label_2 = new QLabel(QgsGeographicCoordinateNumericFormatWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mShowDirectionalSuffixCheckBox = new QCheckBox(QgsGeographicCoordinateNumericFormatWidgetBase);
        mShowDirectionalSuffixCheckBox->setObjectName(QString::fromUtf8("mShowDirectionalSuffixCheckBox"));

        gridLayout->addWidget(mShowDirectionalSuffixCheckBox, 1, 0, 1, 2);

        mShowLeadingZerosForDegreesCheckBox = new QCheckBox(QgsGeographicCoordinateNumericFormatWidgetBase);
        mShowLeadingZerosForDegreesCheckBox->setObjectName(QString::fromUtf8("mShowLeadingZerosForDegreesCheckBox"));

        gridLayout->addWidget(mShowLeadingZerosForDegreesCheckBox, 6, 0, 1, 2);

        mFormatComboBox = new QComboBox(QgsGeographicCoordinateNumericFormatWidgetBase);
        mFormatComboBox->setObjectName(QString::fromUtf8("mFormatComboBox"));

        gridLayout->addWidget(mFormatComboBox, 0, 1, 1, 1);

        mShowLeadingZerosCheckBox = new QCheckBox(QgsGeographicCoordinateNumericFormatWidgetBase);
        mShowLeadingZerosCheckBox->setObjectName(QString::fromUtf8("mShowLeadingZerosCheckBox"));

        gridLayout->addWidget(mShowLeadingZerosCheckBox, 5, 0, 1, 2);

        mLabelDecimalPlaces = new QLabel(QgsGeographicCoordinateNumericFormatWidgetBase);
        mLabelDecimalPlaces->setObjectName(QString::fromUtf8("mLabelDecimalPlaces"));

        gridLayout->addWidget(mLabelDecimalPlaces, 7, 0, 1, 1);

        mDecimalsSpinBox = new QgsSpinBox(QgsGeographicCoordinateNumericFormatWidgetBase);
        mDecimalsSpinBox->setObjectName(QString::fromUtf8("mDecimalsSpinBox"));
        mDecimalsSpinBox->setValue(6);

        gridLayout->addWidget(mDecimalsSpinBox, 7, 1, 1, 1);

        mShowTrailingZerosCheckBox = new QCheckBox(QgsGeographicCoordinateNumericFormatWidgetBase);
        mShowTrailingZerosCheckBox->setObjectName(QString::fromUtf8("mShowTrailingZerosCheckBox"));

        gridLayout->addWidget(mShowTrailingZerosCheckBox, 8, 0, 1, 2);

        QWidget::setTabOrder(mFormatComboBox, mShowDirectionalSuffixCheckBox);
        QWidget::setTabOrder(mShowDirectionalSuffixCheckBox, mShowLeadingZerosCheckBox);
        QWidget::setTabOrder(mShowLeadingZerosCheckBox, mShowLeadingZerosForDegreesCheckBox);
        QWidget::setTabOrder(mShowLeadingZerosForDegreesCheckBox, mDecimalsSpinBox);
        QWidget::setTabOrder(mDecimalsSpinBox, mShowTrailingZerosCheckBox);

        retranslateUi(QgsGeographicCoordinateNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsGeographicCoordinateNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsGeographicCoordinateNumericFormatWidgetBase)
    {
        label_2->setText(QCoreApplication::translate("QgsGeographicCoordinateNumericFormatWidgetBase", "Format", nullptr));
        mShowDirectionalSuffixCheckBox->setText(QCoreApplication::translate("QgsGeographicCoordinateNumericFormatWidgetBase", "Show directional suffix", nullptr));
        mShowLeadingZerosForDegreesCheckBox->setText(QCoreApplication::translate("QgsGeographicCoordinateNumericFormatWidgetBase", "Show leading zeros for degrees", nullptr));
        mShowLeadingZerosCheckBox->setText(QCoreApplication::translate("QgsGeographicCoordinateNumericFormatWidgetBase", "Show leading zeros for minutes and seconds", nullptr));
        mLabelDecimalPlaces->setText(QCoreApplication::translate("QgsGeographicCoordinateNumericFormatWidgetBase", "Decimal places", nullptr));
        mShowTrailingZerosCheckBox->setText(QCoreApplication::translate("QgsGeographicCoordinateNumericFormatWidgetBase", "Show trailing zeros", nullptr));
        (void)QgsGeographicCoordinateNumericFormatWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsGeographicCoordinateNumericFormatWidgetBase: public Ui_QgsGeographicCoordinateNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOGRAPHICCOORDINATENUMERICFORMATWIDGETBASE_H
