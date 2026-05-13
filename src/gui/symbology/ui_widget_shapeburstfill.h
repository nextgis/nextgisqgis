/********************************************************************************
** Form generated from reading UI file 'widget_shapeburstfill.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SHAPEBURSTFILL_H
#define UI_WIDGET_SHAPEBURSTFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgscolorrampbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetShapeburstFill
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *radioTwoColor;
    QgsColorRampButton *btnColorRamp;
    QgsPropertyOverrideButton *mShadeWholeShapeDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QSlider *mBlurSlider;
    QgsSpinBox *mSpinBlurRadius;
    QgsPropertyOverrideButton *mShadeDistanceDDBtn;
    QgsPropertyOverrideButton *mEndColorDDBtn;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mRadioUseMaxDistance;
    QgsDoubleSpinBox *mSpinMaxDistance;
    QSpacerItem *horizontalSpacer_3;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QgsPropertyOverrideButton *mBlurRadiusDDBtn;
    QgsPropertyOverrideButton *mStartColorDDBtn;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *mIgnoreRingsCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QgsColorButton *btnChangeColor2;
    QgsPropertyOverrideButton *mIgnoreRingsDDBtn;
    QRadioButton *radioColorRamp;
    QgsColorButton *btnChangeColor;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsDoubleSpinBox *spinOffsetX;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *mRadioUseWholeShape;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QgsPropertyOverrideButton *mOffsetDDBtn;

    void setupUi(QWidget *WidgetShapeburstFill)
    {
        if (WidgetShapeburstFill->objectName().isEmpty())
            WidgetShapeburstFill->setObjectName(QString::fromUtf8("WidgetShapeburstFill"));
        WidgetShapeburstFill->resize(411, 427);
        WidgetShapeburstFill->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(WidgetShapeburstFill);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WidgetShapeburstFill);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 9, 0, 1, 1);

        radioTwoColor = new QRadioButton(WidgetShapeburstFill);
        radioTwoColor->setObjectName(QString::fromUtf8("radioTwoColor"));

        gridLayout->addWidget(radioTwoColor, 1, 0, 1, 1);

        btnColorRamp = new QgsColorRampButton(WidgetShapeburstFill);
        btnColorRamp->setObjectName(QString::fromUtf8("btnColorRamp"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnColorRamp, 3, 1, 1, 3);

        mShadeWholeShapeDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mShadeWholeShapeDDBtn->setObjectName(QString::fromUtf8("mShadeWholeShapeDDBtn"));

        gridLayout->addWidget(mShadeWholeShapeDDBtn, 5, 4, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mBlurSlider = new QSlider(WidgetShapeburstFill);
        mBlurSlider->setObjectName(QString::fromUtf8("mBlurSlider"));
        mBlurSlider->setMaximum(18);
        mBlurSlider->setPageStep(3);
        mBlurSlider->setOrientation(Qt::Horizontal);
        mBlurSlider->setTickPosition(QSlider::TicksBelow);
        mBlurSlider->setTickInterval(1);

        horizontalLayout_4->addWidget(mBlurSlider);

        mSpinBlurRadius = new QgsSpinBox(WidgetShapeburstFill);
        mSpinBlurRadius->setObjectName(QString::fromUtf8("mSpinBlurRadius"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSpinBlurRadius->sizePolicy().hasHeightForWidth());
        mSpinBlurRadius->setSizePolicy(sizePolicy1);
        mSpinBlurRadius->setMaximum(18);

        horizontalLayout_4->addWidget(mSpinBlurRadius);


        gridLayout->addLayout(horizontalLayout_4, 9, 1, 1, 3);

        mShadeDistanceDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mShadeDistanceDDBtn->setObjectName(QString::fromUtf8("mShadeDistanceDDBtn"));

        gridLayout->addWidget(mShadeDistanceDDBtn, 6, 4, 1, 1);

        mEndColorDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mEndColorDDBtn->setObjectName(QString::fromUtf8("mEndColorDDBtn"));

        gridLayout->addWidget(mEndColorDDBtn, 2, 4, 1, 1);

        label_2 = new QLabel(WidgetShapeburstFill);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mRadioUseMaxDistance = new QRadioButton(WidgetShapeburstFill);
        mRadioUseMaxDistance->setObjectName(QString::fromUtf8("mRadioUseMaxDistance"));

        horizontalLayout_3->addWidget(mRadioUseMaxDistance);

        mSpinMaxDistance = new QgsDoubleSpinBox(WidgetShapeburstFill);
        mSpinMaxDistance->setObjectName(QString::fromUtf8("mSpinMaxDistance"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSpinMaxDistance->sizePolicy().hasHeightForWidth());
        mSpinMaxDistance->setSizePolicy(sizePolicy2);
        mSpinMaxDistance->setMaximum(999999999.000000000000000);
        mSpinMaxDistance->setValue(5.000000000000000);
        mSpinMaxDistance->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(mSpinMaxDistance);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(WidgetShapeburstFill);
        mDistanceUnitWidget->setObjectName(QString::fromUtf8("mDistanceUnitWidget"));
        mDistanceUnitWidget->setMinimumSize(QSize(0, 0));
        mDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mDistanceUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 4);

        mBlurRadiusDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mBlurRadiusDDBtn->setObjectName(QString::fromUtf8("mBlurRadiusDDBtn"));

        gridLayout->addWidget(mBlurRadiusDDBtn, 9, 4, 1, 1);

        mStartColorDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mStartColorDDBtn->setObjectName(QString::fromUtf8("mStartColorDDBtn"));

        gridLayout->addWidget(mStartColorDDBtn, 1, 4, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mIgnoreRingsCheckBox = new QCheckBox(WidgetShapeburstFill);
        mIgnoreRingsCheckBox->setObjectName(QString::fromUtf8("mIgnoreRingsCheckBox"));

        horizontalLayout_6->addWidget(mIgnoreRingsCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_6, 8, 0, 1, 4);

        btnChangeColor2 = new QgsColorButton(WidgetShapeburstFill);
        btnChangeColor2->setObjectName(QString::fromUtf8("btnChangeColor2"));
        sizePolicy.setHeightForWidth(btnChangeColor2->sizePolicy().hasHeightForWidth());
        btnChangeColor2->setSizePolicy(sizePolicy);
        btnChangeColor2->setMinimumSize(QSize(120, 0));
        btnChangeColor2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor2, 2, 1, 1, 3);

        mIgnoreRingsDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mIgnoreRingsDDBtn->setObjectName(QString::fromUtf8("mIgnoreRingsDDBtn"));

        gridLayout->addWidget(mIgnoreRingsDDBtn, 8, 4, 1, 1);

        radioColorRamp = new QRadioButton(WidgetShapeburstFill);
        radioColorRamp->setObjectName(QString::fromUtf8("radioColorRamp"));

        gridLayout->addWidget(radioColorRamp, 3, 0, 1, 1);

        btnChangeColor = new QgsColorButton(WidgetShapeburstFill);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        sizePolicy.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor, 1, 1, 1, 3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spinOffsetY = new QgsDoubleSpinBox(WidgetShapeburstFill);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy2.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy2);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-99999999.989999994635582);
        spinOffsetY->setMaximum(99999999.989999994635582);
        spinOffsetY->setSingleStep(0.200000000000000);

        gridLayout_2->addWidget(spinOffsetY, 1, 0, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetShapeburstFill);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOffsetUnitWidget, 0, 1, 2, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetShapeburstFill);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        sizePolicy2.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy2);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-99999999.989999994635582);
        spinOffsetX->setMaximum(99999999.989999994635582);
        spinOffsetX->setSingleStep(0.200000000000000);

        gridLayout_2->addWidget(spinOffsetX, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 10, 1, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mRadioUseWholeShape = new QRadioButton(WidgetShapeburstFill);
        mRadioUseWholeShape->setObjectName(QString::fromUtf8("mRadioUseWholeShape"));

        horizontalLayout_5->addWidget(mRadioUseWholeShape);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 4);

        label_3 = new QLabel(WidgetShapeburstFill);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(WidgetShapeburstFill);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(WidgetShapeburstFill);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 1, 1, 1);

        label_6 = new QLabel(WidgetShapeburstFill);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 2, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout->addLayout(gridLayout_3, 10, 0, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetShapeburstFill);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout->addWidget(mOffsetDDBtn, 10, 4, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        btnColorRamp->raise();
        label->raise();
        label_2->raise();
        radioTwoColor->raise();
        radioColorRamp->raise();
        label_3->raise();
        mStartColorDDBtn->raise();
        mEndColorDDBtn->raise();
        btnChangeColor->raise();
        btnChangeColor2->raise();
        mShadeWholeShapeDDBtn->raise();
        mShadeDistanceDDBtn->raise();
        mIgnoreRingsDDBtn->raise();
        mBlurRadiusDDBtn->raise();
        mOffsetDDBtn->raise();
        QWidget::setTabOrder(radioTwoColor, btnChangeColor);
        QWidget::setTabOrder(btnChangeColor, mStartColorDDBtn);
        QWidget::setTabOrder(mStartColorDDBtn, btnChangeColor2);
        QWidget::setTabOrder(btnChangeColor2, mEndColorDDBtn);
        QWidget::setTabOrder(mEndColorDDBtn, radioColorRamp);
        QWidget::setTabOrder(radioColorRamp, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, mRadioUseWholeShape);
        QWidget::setTabOrder(mRadioUseWholeShape, mShadeWholeShapeDDBtn);
        QWidget::setTabOrder(mShadeWholeShapeDDBtn, mRadioUseMaxDistance);
        QWidget::setTabOrder(mRadioUseMaxDistance, mSpinMaxDistance);
        QWidget::setTabOrder(mSpinMaxDistance, mDistanceUnitWidget);
        QWidget::setTabOrder(mDistanceUnitWidget, mShadeDistanceDDBtn);
        QWidget::setTabOrder(mShadeDistanceDDBtn, mIgnoreRingsCheckBox);
        QWidget::setTabOrder(mIgnoreRingsCheckBox, mIgnoreRingsDDBtn);
        QWidget::setTabOrder(mIgnoreRingsDDBtn, mBlurSlider);
        QWidget::setTabOrder(mBlurSlider, mSpinBlurRadius);
        QWidget::setTabOrder(mSpinBlurRadius, mBlurRadiusDDBtn);
        QWidget::setTabOrder(mBlurRadiusDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, spinOffsetY);

        retranslateUi(WidgetShapeburstFill);
        QObject::connect(mRadioUseMaxDistance, SIGNAL(toggled(bool)), mSpinMaxDistance, SLOT(setEnabled(bool)));
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor, SLOT(setEnabled(bool)));
        QObject::connect(radioColorRamp, SIGNAL(toggled(bool)), btnColorRamp, SLOT(setEnabled(bool)));
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor2, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(WidgetShapeburstFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetShapeburstFill)
    {
        label->setText(QCoreApplication::translate("WidgetShapeburstFill", "Blur strength", nullptr));
        radioTwoColor->setText(QCoreApplication::translate("WidgetShapeburstFill", "Two color", nullptr));
        mShadeWholeShapeDDBtn->setText(QCoreApplication::translate("WidgetShapeburstFill", "\342\200\246", nullptr));
        mShadeDistanceDDBtn->setText(QCoreApplication::translate("WidgetShapeburstFill", "\342\200\246", nullptr));
        mEndColorDDBtn->setText(QCoreApplication::translate("WidgetShapeburstFill", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetShapeburstFill", "Gradient Colors", nullptr));
        mRadioUseMaxDistance->setText(QCoreApplication::translate("WidgetShapeburstFill", "Set distance", nullptr));
        mBlurRadiusDDBtn->setText(QCoreApplication::translate("WidgetShapeburstFill", "\342\200\246", nullptr));
        mStartColorDDBtn->setText(QCoreApplication::translate("WidgetShapeburstFill", "\342\200\246", nullptr));
        mIgnoreRingsCheckBox->setText(QCoreApplication::translate("WidgetShapeburstFill", "Ignore rings in polygons while shading", nullptr));
        btnChangeColor2->setText(QString());
        mIgnoreRingsDDBtn->setText(QCoreApplication::translate("WidgetShapeburstFill", "\342\200\246", nullptr));
        radioColorRamp->setText(QCoreApplication::translate("WidgetShapeburstFill", "Color ramp", nullptr));
        btnChangeColor->setText(QString());
        mRadioUseWholeShape->setText(QCoreApplication::translate("WidgetShapeburstFill", "Whole shape", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetShapeburstFill", "Shading Style", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetShapeburstFill", "x", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetShapeburstFill", "y", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetShapeburstFill", "Offset", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetShapeburstFill", "\342\200\246", nullptr));
        (void)WidgetShapeburstFill;
    } // retranslateUi

};

namespace Ui {
    class WidgetShapeburstFill: public Ui_WidgetShapeburstFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SHAPEBURSTFILL_H
