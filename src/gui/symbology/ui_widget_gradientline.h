/********************************************************************************
** Form generated from reading UI file 'widget_gradientline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_GRADIENTLINE_H
#define UI_WIDGET_GRADIENTLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgscolorrampbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetGradientLine
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QgsColorButton *btnChangeColor2;
    QSpacerItem *verticalSpacer;
    QgsPropertyOverrideButton *mCapStyleDDBtn;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QgsPropertyOverrideButton *mStartColorDDBtn;
    QgsPropertyOverrideButton *mEndColorDDBtn;
    QgsPenCapStyleComboBox *cboCapStyle;
    QLabel *label_6;
    QgsColorButton *btnChangeColor;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QRadioButton *radioTwoColor;
    QRadioButton *radioColorRamp;
    QLabel *label_5;
    QgsColorRampButton *btnColorRamp;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *spinWidth;
    QgsUnitSelectionWidget *mPenWidthUnitWidget;
    QgsPropertyOverrideButton *mPenWidthDDBtn;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinOffset;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mOffsetDDBtn;

    void setupUi(QWidget *WidgetGradientLine)
    {
        if (WidgetGradientLine->objectName().isEmpty())
            WidgetGradientLine->setObjectName(QString::fromUtf8("WidgetGradientLine"));
        WidgetGradientLine->resize(447, 307);
        WidgetGradientLine->setWindowTitle(QString::fromUtf8("Raster Line Symbol"));
        gridLayout_2 = new QGridLayout(WidgetGradientLine);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(WidgetGradientLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        btnChangeColor2 = new QgsColorButton(WidgetGradientLine);
        btnChangeColor2->setObjectName(QString::fromUtf8("btnChangeColor2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeColor2->sizePolicy().hasHeightForWidth());
        btnChangeColor2->setSizePolicy(sizePolicy);
        btnChangeColor2->setMinimumSize(QSize(120, 0));
        btnChangeColor2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColor2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 1);

        mCapStyleDDBtn = new QgsPropertyOverrideButton(WidgetGradientLine);
        mCapStyleDDBtn->setObjectName(QString::fromUtf8("mCapStyleDDBtn"));

        gridLayout_2->addWidget(mCapStyleDDBtn, 6, 2, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetGradientLine);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout_2->addWidget(cboJoinStyle, 5, 1, 1, 1);

        mStartColorDDBtn = new QgsPropertyOverrideButton(WidgetGradientLine);
        mStartColorDDBtn->setObjectName(QString::fromUtf8("mStartColorDDBtn"));

        gridLayout_2->addWidget(mStartColorDDBtn, 0, 2, 1, 1);

        mEndColorDDBtn = new QgsPropertyOverrideButton(WidgetGradientLine);
        mEndColorDDBtn->setObjectName(QString::fromUtf8("mEndColorDDBtn"));

        gridLayout_2->addWidget(mEndColorDDBtn, 1, 2, 1, 1);

        cboCapStyle = new QgsPenCapStyleComboBox(WidgetGradientLine);
        cboCapStyle->setObjectName(QString::fromUtf8("cboCapStyle"));

        gridLayout_2->addWidget(cboCapStyle, 6, 1, 1, 1);

        label_6 = new QLabel(WidgetGradientLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        btnChangeColor = new QgsColorButton(WidgetGradientLine);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        sizePolicy.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColor, 0, 1, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetGradientLine);
        mJoinStyleDDBtn->setObjectName(QString::fromUtf8("mJoinStyleDDBtn"));

        gridLayout_2->addWidget(mJoinStyleDDBtn, 5, 2, 1, 1);

        radioTwoColor = new QRadioButton(WidgetGradientLine);
        radioTwoColor->setObjectName(QString::fromUtf8("radioTwoColor"));

        gridLayout_2->addWidget(radioTwoColor, 0, 0, 2, 1);

        radioColorRamp = new QRadioButton(WidgetGradientLine);
        radioColorRamp->setObjectName(QString::fromUtf8("radioColorRamp"));

        gridLayout_2->addWidget(radioColorRamp, 2, 0, 1, 1);

        label_5 = new QLabel(WidgetGradientLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        btnColorRamp = new QgsColorRampButton(WidgetGradientLine);
        btnColorRamp->setObjectName(QString::fromUtf8("btnColorRamp"));
        sizePolicy.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnColorRamp, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinWidth = new QgsDoubleSpinBox(WidgetGradientLine);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinWidth->sizePolicy().hasHeightForWidth());
        spinWidth->setSizePolicy(sizePolicy1);
        spinWidth->setDecimals(6);
        spinWidth->setMaximum(100000.000000000000000);
        spinWidth->setSingleStep(0.200000000000000);
        spinWidth->setValue(1.000000000000000);
        spinWidth->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(spinWidth);

        mPenWidthUnitWidget = new QgsUnitSelectionWidget(WidgetGradientLine);
        mPenWidthUnitWidget->setObjectName(QString::fromUtf8("mPenWidthUnitWidget"));
        mPenWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mPenWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mPenWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        mPenWidthDDBtn = new QgsPropertyOverrideButton(WidgetGradientLine);
        mPenWidthDDBtn->setObjectName(QString::fromUtf8("mPenWidthDDBtn"));

        gridLayout_2->addWidget(mPenWidthDDBtn, 3, 2, 1, 1);

        label_4 = new QLabel(WidgetGradientLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinOffset = new QgsDoubleSpinBox(WidgetGradientLine);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinOffset->sizePolicy().hasHeightForWidth());
        spinOffset->setSizePolicy(sizePolicy2);
        spinOffset->setStyleSheet(QString::fromUtf8(""));
        spinOffset->setDecimals(6);
        spinOffset->setMinimum(-100000.000000000000000);
        spinOffset->setMaximum(100000.000000000000000);
        spinOffset->setSingleStep(0.200000000000000);

        horizontalLayout_3->addWidget(spinOffset);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetGradientLine);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mOffsetUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 4, 1, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetGradientLine);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 4, 2, 1, 1);

        QWidget::setTabOrder(radioTwoColor, btnChangeColor);
        QWidget::setTabOrder(btnChangeColor, mStartColorDDBtn);
        QWidget::setTabOrder(mStartColorDDBtn, btnChangeColor2);
        QWidget::setTabOrder(btnChangeColor2, mEndColorDDBtn);
        QWidget::setTabOrder(mEndColorDDBtn, radioColorRamp);
        QWidget::setTabOrder(radioColorRamp, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, spinWidth);
        QWidget::setTabOrder(spinWidth, mPenWidthUnitWidget);
        QWidget::setTabOrder(mPenWidthUnitWidget, mPenWidthDDBtn);
        QWidget::setTabOrder(mPenWidthDDBtn, spinOffset);
        QWidget::setTabOrder(spinOffset, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, cboCapStyle);
        QWidget::setTabOrder(cboCapStyle, mCapStyleDDBtn);

        retranslateUi(WidgetGradientLine);

        QMetaObject::connectSlotsByName(WidgetGradientLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetGradientLine)
    {
        label_2->setText(QCoreApplication::translate("WidgetGradientLine", "Stroke width", nullptr));
        btnChangeColor2->setText(QString());
        mCapStyleDDBtn->setText(QCoreApplication::translate("WidgetGradientLine", "\342\200\246", nullptr));
        mStartColorDDBtn->setText(QCoreApplication::translate("WidgetGradientLine", "\342\200\246", nullptr));
        mEndColorDDBtn->setText(QCoreApplication::translate("WidgetGradientLine", "\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetGradientLine", "Cap style", nullptr));
        btnChangeColor->setText(QString());
        mJoinStyleDDBtn->setText(QCoreApplication::translate("WidgetGradientLine", "\342\200\246", nullptr));
        radioTwoColor->setText(QCoreApplication::translate("WidgetGradientLine", "Two color", nullptr));
        radioColorRamp->setText(QCoreApplication::translate("WidgetGradientLine", "Color ramp", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetGradientLine", "Join style", nullptr));
        spinWidth->setSpecialValueText(QCoreApplication::translate("WidgetGradientLine", "Hairline", nullptr));
        mPenWidthDDBtn->setText(QCoreApplication::translate("WidgetGradientLine", "\342\200\246", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetGradientLine", "Offset", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetGradientLine", "\342\200\246", nullptr));
        (void)WidgetGradientLine;
    } // retranslateUi

};

namespace Ui {
    class WidgetGradientLine: public Ui_WidgetGradientLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_GRADIENTLINE_H
