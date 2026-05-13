/********************************************************************************
** Form generated from reading UI file 'widget_simpleline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLELINE_H
#define UI_WIDGET_SIMPLELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleLine
{
public:
    QGridLayout *gridLayout;
    QgsPropertyOverrideButton *mDashPatternDDBtn;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *spinWidth;
    QgsUnitSelectionWidget *mPenWidthUnitWidget;
    QLabel *label_3;
    QLabel *label_5;
    QgsPropertyOverrideButton *mPenStyleDDBtn;
    QLabel *label;
    QgsPenStyleComboBox *cboPenStyle;
    QCheckBox *mCustomCheckBox;
    QLabel *label_2;
    QLabel *label_6;
    QCheckBox *mCheckDashCorners;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer;
    QPushButton *mChangePatternButton;
    QgsUnitSelectionWidget *mDashPatternUnitWidget;
    QgsColorButton *btnChangeColor;
    QComboBox *mRingFilterComboBox;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QgsPenCapStyleComboBox *cboCapStyle;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinOffset;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *spinPatternOffset;
    QgsUnitSelectionWidget *mPatternOffsetUnitWidget;
    QgsPropertyOverrideButton *mPatternOffsetDDBtn;
    QLabel *label_7;
    QLabel *mRingsLabel;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QCheckBox *mDrawInsideCheckBox;
    QgsPropertyOverrideButton *mColorDDBtn;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QgsPropertyOverrideButton *mCapStyleDDBtn;
    QCheckBox *mCheckAlignDash;
    QLabel *label_4;
    QgsPropertyOverrideButton *mPenWidthDDBtn;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBoxBasic *mTrimGroupBox;
    QGridLayout *gridLayout_2;
    QgsPropertyOverrideButton *mTrimDistanceEndDDBtn;
    QHBoxLayout *horizontalLayout_6;
    QgsDoubleSpinBox *mTrimStartDistanceSpin;
    QgsUnitSelectionWidget *mTrimDistanceStartUnitWidget;
    QHBoxLayout *horizontalLayout_5;
    QgsDoubleSpinBox *mTrimDistanceEndSpin;
    QgsUnitSelectionWidget *mTrimDistanceEndUnitWidget;
    QLabel *label_9;
    QLabel *label_8;
    QgsPropertyOverrideButton *mTrimDistanceStartDDBtn;

    void setupUi(QWidget *WidgetSimpleLine)
    {
        if (WidgetSimpleLine->objectName().isEmpty())
            WidgetSimpleLine->setObjectName(QString::fromUtf8("WidgetSimpleLine"));
        WidgetSimpleLine->resize(432, 563);
        WidgetSimpleLine->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(WidgetSimpleLine);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mDashPatternDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mDashPatternDDBtn->setObjectName(QString::fromUtf8("mDashPatternDDBtn"));

        gridLayout->addWidget(mDashPatternDDBtn, 7, 3, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinWidth = new QgsDoubleSpinBox(WidgetSimpleLine);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinWidth->sizePolicy().hasHeightForWidth());
        spinWidth->setSizePolicy(sizePolicy);
        spinWidth->setDecimals(6);
        spinWidth->setMaximum(100000.000000000000000);
        spinWidth->setSingleStep(0.200000000000000);
        spinWidth->setValue(1.000000000000000);
        spinWidth->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(spinWidth);

        mPenWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mPenWidthUnitWidget->setObjectName(QString::fromUtf8("mPenWidthUnitWidget"));
        mPenWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mPenWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mPenWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        label_3 = new QLabel(WidgetSimpleLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_5 = new QLabel(WidgetSimpleLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        mPenStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mPenStyleDDBtn->setObjectName(QString::fromUtf8("mPenStyleDDBtn"));

        gridLayout->addWidget(mPenStyleDDBtn, 3, 3, 1, 1);

        label = new QLabel(WidgetSimpleLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cboPenStyle = new QgsPenStyleComboBox(WidgetSimpleLine);
        cboPenStyle->setObjectName(QString::fromUtf8("cboPenStyle"));

        gridLayout->addWidget(cboPenStyle, 3, 2, 1, 1);

        mCustomCheckBox = new QCheckBox(WidgetSimpleLine);
        mCustomCheckBox->setObjectName(QString::fromUtf8("mCustomCheckBox"));

        gridLayout->addWidget(mCustomCheckBox, 6, 0, 1, 3);

        label_2 = new QLabel(WidgetSimpleLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(WidgetSimpleLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        mCheckDashCorners = new QCheckBox(WidgetSimpleLine);
        mCheckDashCorners->setObjectName(QString::fromUtf8("mCheckDashCorners"));

        gridLayout->addWidget(mCheckDashCorners, 12, 0, 1, 3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer = new QSpacerItem(20, 1, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        mChangePatternButton = new QPushButton(WidgetSimpleLine);
        mChangePatternButton->setObjectName(QString::fromUtf8("mChangePatternButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mChangePatternButton->sizePolicy().hasHeightForWidth());
        mChangePatternButton->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(mChangePatternButton);

        mDashPatternUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mDashPatternUnitWidget->setObjectName(QString::fromUtf8("mDashPatternUnitWidget"));
        mDashPatternUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_12->addWidget(mDashPatternUnitWidget);


        gridLayout->addLayout(horizontalLayout_12, 7, 0, 1, 3);

        btnChangeColor = new QgsColorButton(WidgetSimpleLine);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        sizePolicy1.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy1);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnChangeColor, 0, 2, 1, 1);

        mRingFilterComboBox = new QComboBox(WidgetSimpleLine);
        mRingFilterComboBox->setObjectName(QString::fromUtf8("mRingFilterComboBox"));

        gridLayout->addWidget(mRingFilterComboBox, 15, 2, 1, 2);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetSimpleLine);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout->addWidget(cboJoinStyle, 4, 2, 1, 1);

        cboCapStyle = new QgsPenCapStyleComboBox(WidgetSimpleLine);
        cboCapStyle->setObjectName(QString::fromUtf8("cboCapStyle"));

        gridLayout->addWidget(cboCapStyle, 5, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinOffset = new QgsDoubleSpinBox(WidgetSimpleLine);
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

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 2, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        spinPatternOffset = new QgsDoubleSpinBox(WidgetSimpleLine);
        spinPatternOffset->setObjectName(QString::fromUtf8("spinPatternOffset"));
        sizePolicy2.setHeightForWidth(spinPatternOffset->sizePolicy().hasHeightForWidth());
        spinPatternOffset->setSizePolicy(sizePolicy2);
        spinPatternOffset->setStyleSheet(QString::fromUtf8(""));
        spinPatternOffset->setDecimals(6);
        spinPatternOffset->setMinimum(-100000.000000000000000);
        spinPatternOffset->setMaximum(100000.000000000000000);
        spinPatternOffset->setSingleStep(0.200000000000000);

        horizontalLayout_4->addWidget(spinPatternOffset);

        mPatternOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mPatternOffsetUnitWidget->setObjectName(QString::fromUtf8("mPatternOffsetUnitWidget"));
        mPatternOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mPatternOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(mPatternOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout_4, 10, 2, 1, 1);

        mPatternOffsetDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mPatternOffsetDDBtn->setObjectName(QString::fromUtf8("mPatternOffsetDDBtn"));

        gridLayout->addWidget(mPatternOffsetDDBtn, 10, 3, 1, 1);

        label_7 = new QLabel(WidgetSimpleLine);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 10, 0, 1, 1);

        mRingsLabel = new QLabel(WidgetSimpleLine);
        mRingsLabel->setObjectName(QString::fromUtf8("mRingsLabel"));

        gridLayout->addWidget(mRingsLabel, 15, 0, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout->addWidget(mOffsetDDBtn, 2, 3, 1, 1);

        mDrawInsideCheckBox = new QCheckBox(WidgetSimpleLine);
        mDrawInsideCheckBox->setObjectName(QString::fromUtf8("mDrawInsideCheckBox"));

        gridLayout->addWidget(mDrawInsideCheckBox, 14, 0, 1, 4);

        mColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mColorDDBtn->setObjectName(QString::fromUtf8("mColorDDBtn"));

        gridLayout->addWidget(mColorDDBtn, 0, 3, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mJoinStyleDDBtn->setObjectName(QString::fromUtf8("mJoinStyleDDBtn"));

        gridLayout->addWidget(mJoinStyleDDBtn, 4, 3, 1, 1);

        mCapStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mCapStyleDDBtn->setObjectName(QString::fromUtf8("mCapStyleDDBtn"));

        gridLayout->addWidget(mCapStyleDDBtn, 5, 3, 1, 1);

        mCheckAlignDash = new QCheckBox(WidgetSimpleLine);
        mCheckAlignDash->setObjectName(QString::fromUtf8("mCheckAlignDash"));

        gridLayout->addWidget(mCheckAlignDash, 11, 0, 1, 3);

        label_4 = new QLabel(WidgetSimpleLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        mPenWidthDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLine);
        mPenWidthDDBtn->setObjectName(QString::fromUtf8("mPenWidthDDBtn"));

        gridLayout->addWidget(mPenWidthDDBtn, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 0, 1, 1);

        mTrimGroupBox = new QgsCollapsibleGroupBoxBasic(WidgetSimpleLine);
        mTrimGroupBox->setObjectName(QString::fromUtf8("mTrimGroupBox"));
        gridLayout_2 = new QGridLayout(mTrimGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mTrimDistanceEndDDBtn = new QgsPropertyOverrideButton(mTrimGroupBox);
        mTrimDistanceEndDDBtn->setObjectName(QString::fromUtf8("mTrimDistanceEndDDBtn"));

        gridLayout_2->addWidget(mTrimDistanceEndDDBtn, 1, 3, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mTrimStartDistanceSpin = new QgsDoubleSpinBox(mTrimGroupBox);
        mTrimStartDistanceSpin->setObjectName(QString::fromUtf8("mTrimStartDistanceSpin"));
        sizePolicy.setHeightForWidth(mTrimStartDistanceSpin->sizePolicy().hasHeightForWidth());
        mTrimStartDistanceSpin->setSizePolicy(sizePolicy);
        mTrimStartDistanceSpin->setDecimals(6);
        mTrimStartDistanceSpin->setMaximum(100000.000000000000000);
        mTrimStartDistanceSpin->setSingleStep(0.200000000000000);
        mTrimStartDistanceSpin->setValue(0.000000000000000);
        mTrimStartDistanceSpin->setProperty("showClearButton", QVariant(true));

        horizontalLayout_6->addWidget(mTrimStartDistanceSpin);

        mTrimDistanceStartUnitWidget = new QgsUnitSelectionWidget(mTrimGroupBox);
        mTrimDistanceStartUnitWidget->setObjectName(QString::fromUtf8("mTrimDistanceStartUnitWidget"));
        mTrimDistanceStartUnitWidget->setMinimumSize(QSize(0, 0));
        mTrimDistanceStartUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_6->addWidget(mTrimDistanceStartUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 1, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mTrimDistanceEndSpin = new QgsDoubleSpinBox(mTrimGroupBox);
        mTrimDistanceEndSpin->setObjectName(QString::fromUtf8("mTrimDistanceEndSpin"));
        sizePolicy.setHeightForWidth(mTrimDistanceEndSpin->sizePolicy().hasHeightForWidth());
        mTrimDistanceEndSpin->setSizePolicy(sizePolicy);
        mTrimDistanceEndSpin->setDecimals(6);
        mTrimDistanceEndSpin->setMaximum(100000.000000000000000);
        mTrimDistanceEndSpin->setSingleStep(0.200000000000000);
        mTrimDistanceEndSpin->setValue(0.000000000000000);
        mTrimDistanceEndSpin->setProperty("showClearButton", QVariant(true));

        horizontalLayout_5->addWidget(mTrimDistanceEndSpin);

        mTrimDistanceEndUnitWidget = new QgsUnitSelectionWidget(mTrimGroupBox);
        mTrimDistanceEndUnitWidget->setObjectName(QString::fromUtf8("mTrimDistanceEndUnitWidget"));
        mTrimDistanceEndUnitWidget->setMinimumSize(QSize(0, 0));
        mTrimDistanceEndUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(mTrimDistanceEndUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 1, 1, 2);

        label_9 = new QLabel(mTrimGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_8 = new QLabel(mTrimGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        mTrimDistanceStartDDBtn = new QgsPropertyOverrideButton(mTrimGroupBox);
        mTrimDistanceStartDDBtn->setObjectName(QString::fromUtf8("mTrimDistanceStartDDBtn"));

        gridLayout_2->addWidget(mTrimDistanceStartDDBtn, 0, 3, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        gridLayout->addWidget(mTrimGroupBox, 13, 0, 1, 4);

        QWidget::setTabOrder(btnChangeColor, mColorDDBtn);
        QWidget::setTabOrder(mColorDDBtn, spinWidth);
        QWidget::setTabOrder(spinWidth, mPenWidthUnitWidget);
        QWidget::setTabOrder(mPenWidthUnitWidget, mPenWidthDDBtn);
        QWidget::setTabOrder(mPenWidthDDBtn, spinOffset);
        QWidget::setTabOrder(spinOffset, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, cboPenStyle);
        QWidget::setTabOrder(cboPenStyle, mPenStyleDDBtn);
        QWidget::setTabOrder(mPenStyleDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, cboCapStyle);
        QWidget::setTabOrder(cboCapStyle, mCapStyleDDBtn);
        QWidget::setTabOrder(mCapStyleDDBtn, mCustomCheckBox);
        QWidget::setTabOrder(mCustomCheckBox, mChangePatternButton);
        QWidget::setTabOrder(mChangePatternButton, mDashPatternUnitWidget);
        QWidget::setTabOrder(mDashPatternUnitWidget, mDashPatternDDBtn);
        QWidget::setTabOrder(mDashPatternDDBtn, spinPatternOffset);
        QWidget::setTabOrder(spinPatternOffset, mPatternOffsetUnitWidget);
        QWidget::setTabOrder(mPatternOffsetUnitWidget, mPatternOffsetDDBtn);
        QWidget::setTabOrder(mPatternOffsetDDBtn, mCheckAlignDash);
        QWidget::setTabOrder(mCheckAlignDash, mCheckDashCorners);
        QWidget::setTabOrder(mCheckDashCorners, mTrimStartDistanceSpin);
        QWidget::setTabOrder(mTrimStartDistanceSpin, mTrimDistanceStartUnitWidget);
        QWidget::setTabOrder(mTrimDistanceStartUnitWidget, mTrimDistanceStartDDBtn);
        QWidget::setTabOrder(mTrimDistanceStartDDBtn, mTrimDistanceEndSpin);
        QWidget::setTabOrder(mTrimDistanceEndSpin, mTrimDistanceEndUnitWidget);
        QWidget::setTabOrder(mTrimDistanceEndUnitWidget, mTrimDistanceEndDDBtn);
        QWidget::setTabOrder(mTrimDistanceEndDDBtn, mDrawInsideCheckBox);
        QWidget::setTabOrder(mDrawInsideCheckBox, mRingFilterComboBox);

        retranslateUi(WidgetSimpleLine);

        QMetaObject::connectSlotsByName(WidgetSimpleLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleLine)
    {
        mDashPatternDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
        spinWidth->setSpecialValueText(QCoreApplication::translate("WidgetSimpleLine", "Hairline", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetSimpleLine", "Stroke style", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetSimpleLine", "Join style", nullptr));
        mPenStyleDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("WidgetSimpleLine", "Color", nullptr));
        mCustomCheckBox->setText(QCoreApplication::translate("WidgetSimpleLine", "Use custom dash pattern", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetSimpleLine", "Stroke width", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetSimpleLine", "Cap style", nullptr));
#if QT_CONFIG(tooltip)
        mCheckDashCorners->setToolTip(QCoreApplication::translate("WidgetSimpleLine", "If enabled, the dash pattern for the line will be dynamically refined over sharp corners", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckDashCorners->setText(QCoreApplication::translate("WidgetSimpleLine", "Tweak dash pattern at sharp corners", nullptr));
        mChangePatternButton->setText(QString());
        btnChangeColor->setText(QString());
        mPatternOffsetDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetSimpleLine", "Pattern offset", nullptr));
        mRingsLabel->setText(QCoreApplication::translate("WidgetSimpleLine", "Rings", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
        mDrawInsideCheckBox->setText(QCoreApplication::translate("WidgetSimpleLine", "Draw line only inside polygon", nullptr));
        mColorDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
        mJoinStyleDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
        mCapStyleDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mCheckAlignDash->setToolTip(QCoreApplication::translate("WidgetSimpleLine", "If enabled, the dash pattern sizes will be dynamically tweaked to ensure that the end of the line is represented by a complete dash element", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckAlignDash->setText(QCoreApplication::translate("WidgetSimpleLine", "Align dash pattern to line length", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetSimpleLine", "Offset", nullptr));
        mPenWidthDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
        mTrimGroupBox->setTitle(QCoreApplication::translate("WidgetSimpleLine", "Trim Lines", nullptr));
        mTrimDistanceEndDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
        label_9->setText(QCoreApplication::translate("WidgetSimpleLine", "Start", nullptr));
        label_8->setText(QCoreApplication::translate("WidgetSimpleLine", "End", nullptr));
        mTrimDistanceStartDDBtn->setText(QCoreApplication::translate("WidgetSimpleLine", "\342\200\246", nullptr));
        (void)WidgetSimpleLine;
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleLine: public Ui_WidgetSimpleLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLELINE_H
