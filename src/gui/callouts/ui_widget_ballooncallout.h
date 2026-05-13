/********************************************************************************
** Form generated from reading UI file 'widget_ballooncallout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_BALLOONCALLOUT_H
#define UI_WIDGET_BALLOONCALLOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetBalloonCallout
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_45;
    QgsBlendModeComboBox *mCalloutBlendComboBox;
    QLabel *mAnchorPointLbl;
    QgsPropertyOverrideButton *mCalloutBlendModeDDBtn;
    QgsPropertyOverrideButton *mWedgeWidthDDBtn;
    QgsUnitSelectionWidget *mOffsetFromAnchorUnitWidget;
    QLabel *mCornerRadiusLbl;
    QLabel *mOffsetFromAnchorLbl;
    QgsDoubleSpinBox *mCornerRadiusSpin;
    QComboBox *mAnchorPointComboBox;
    QgsDoubleSpinBox *mWedgeWidthSpin;
    QLabel *mCalloutBlendModeLbl;
    QgsPropertyOverrideButton *mOffsetFromAnchorDDBtn;
    QgsSymbolButton *mCalloutFillStyleButton;
    QgsPropertyOverrideButton *mCornerRadiusDDBtn;
    QgsUnitSelectionWidget *mWedgeWidthUnitWidget;
    QgsDoubleSpinBox *mOffsetFromAnchorSpin;
    QgsCollapsibleGroupBox *mMarginsGroupBox;
    QGridLayout *gridLayout_2;
    QgsUnitSelectionWidget *mMarginUnitWidget;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_4;
    QgsDoubleSpinBox *mSpinBottomMargin;
    QLabel *label_3;
    QLabel *label_2;
    QgsDoubleSpinBox *mSpinRightMargin;
    QgsDoubleSpinBox *mSpinLeftMargin;
    QLabel *label_5;
    QgsDoubleSpinBox *mSpinTopMargin;
    QHBoxLayout *horizontalLayout;
    QgsPropertyOverrideButton *mMarginsDDBtn;
    QSpacerItem *horizontalSpacer;
    QgsPropertyOverrideButton *mAnchorPointDDBtn;
    QLabel *mWedgeWidthLbl;
    QgsUnitSelectionWidget *mCornerRadiusUnitWidget;
    QLabel *mCalloutFillStyleLbl;
    QLabel *mCalloutFillStyleLbl_2;
    QgsSymbolButton *mMarkerSymbolButton;
    QGroupBox *mPlacementDDGroupBox;
    QGridLayout *gridLayout_4;
    QFrame *mCoordAlignmentFrame;
    QHBoxLayout *horizontalLayout_27;
    QHBoxLayout *horizontalLayout_24;
    QLabel *mCoordXLabel_3;
    QgsPropertyOverrideButton *mDestXDDBtn;
    QLabel *mCoordYLabel_3;
    QgsPropertyOverrideButton *mDestYDDBtn;
    QSpacerItem *horizontalSpacer_24;
    QLabel *mCoordLabel_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetBalloonCallout)
    {
        if (WidgetBalloonCallout->objectName().isEmpty())
            WidgetBalloonCallout->setObjectName(QString::fromUtf8("WidgetBalloonCallout"));
        WidgetBalloonCallout->resize(371, 507);
        WidgetBalloonCallout->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetBalloonCallout);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_45 = new QGridLayout();
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        gridLayout_45->setContentsMargins(0, 0, -1, -1);
        mCalloutBlendComboBox = new QgsBlendModeComboBox(WidgetBalloonCallout);
        mCalloutBlendComboBox->setObjectName(QString::fromUtf8("mCalloutBlendComboBox"));

        gridLayout_45->addWidget(mCalloutBlendComboBox, 7, 1, 1, 2);

        mAnchorPointLbl = new QLabel(WidgetBalloonCallout);
        mAnchorPointLbl->setObjectName(QString::fromUtf8("mAnchorPointLbl"));

        gridLayout_45->addWidget(mAnchorPointLbl, 5, 0, 1, 1);

        mCalloutBlendModeDDBtn = new QgsPropertyOverrideButton(WidgetBalloonCallout);
        mCalloutBlendModeDDBtn->setObjectName(QString::fromUtf8("mCalloutBlendModeDDBtn"));

        gridLayout_45->addWidget(mCalloutBlendModeDDBtn, 7, 3, 1, 1);

        mWedgeWidthDDBtn = new QgsPropertyOverrideButton(WidgetBalloonCallout);
        mWedgeWidthDDBtn->setObjectName(QString::fromUtf8("mWedgeWidthDDBtn"));

        gridLayout_45->addWidget(mWedgeWidthDDBtn, 2, 3, 1, 1);

        mOffsetFromAnchorUnitWidget = new QgsUnitSelectionWidget(WidgetBalloonCallout);
        mOffsetFromAnchorUnitWidget->setObjectName(QString::fromUtf8("mOffsetFromAnchorUnitWidget"));
        mOffsetFromAnchorUnitWidget->setMinimumSize(QSize(10, 0));
        mOffsetFromAnchorUnitWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_45->addWidget(mOffsetFromAnchorUnitWidget, 4, 2, 1, 1);

        mCornerRadiusLbl = new QLabel(WidgetBalloonCallout);
        mCornerRadiusLbl->setObjectName(QString::fromUtf8("mCornerRadiusLbl"));

        gridLayout_45->addWidget(mCornerRadiusLbl, 1, 0, 1, 1);

        mOffsetFromAnchorLbl = new QLabel(WidgetBalloonCallout);
        mOffsetFromAnchorLbl->setObjectName(QString::fromUtf8("mOffsetFromAnchorLbl"));

        gridLayout_45->addWidget(mOffsetFromAnchorLbl, 4, 0, 1, 1);

        mCornerRadiusSpin = new QgsDoubleSpinBox(WidgetBalloonCallout);
        mCornerRadiusSpin->setObjectName(QString::fromUtf8("mCornerRadiusSpin"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCornerRadiusSpin->sizePolicy().hasHeightForWidth());
        mCornerRadiusSpin->setSizePolicy(sizePolicy);
        mCornerRadiusSpin->setDecimals(6);
        mCornerRadiusSpin->setMaximum(100000.000000000000000);
        mCornerRadiusSpin->setSingleStep(0.200000000000000);
        mCornerRadiusSpin->setValue(0.000000000000000);
        mCornerRadiusSpin->setProperty("showClearButton", QVariant(true));

        gridLayout_45->addWidget(mCornerRadiusSpin, 1, 1, 1, 1);

        mAnchorPointComboBox = new QComboBox(WidgetBalloonCallout);
        mAnchorPointComboBox->setObjectName(QString::fromUtf8("mAnchorPointComboBox"));

        gridLayout_45->addWidget(mAnchorPointComboBox, 5, 1, 1, 2);

        mWedgeWidthSpin = new QgsDoubleSpinBox(WidgetBalloonCallout);
        mWedgeWidthSpin->setObjectName(QString::fromUtf8("mWedgeWidthSpin"));
        sizePolicy.setHeightForWidth(mWedgeWidthSpin->sizePolicy().hasHeightForWidth());
        mWedgeWidthSpin->setSizePolicy(sizePolicy);
        mWedgeWidthSpin->setDecimals(6);
        mWedgeWidthSpin->setMaximum(100000.000000000000000);
        mWedgeWidthSpin->setSingleStep(0.200000000000000);
        mWedgeWidthSpin->setValue(0.000000000000000);
        mWedgeWidthSpin->setProperty("showClearButton", QVariant(true));

        gridLayout_45->addWidget(mWedgeWidthSpin, 2, 1, 1, 1);

        mCalloutBlendModeLbl = new QLabel(WidgetBalloonCallout);
        mCalloutBlendModeLbl->setObjectName(QString::fromUtf8("mCalloutBlendModeLbl"));

        gridLayout_45->addWidget(mCalloutBlendModeLbl, 7, 0, 1, 1);

        mOffsetFromAnchorDDBtn = new QgsPropertyOverrideButton(WidgetBalloonCallout);
        mOffsetFromAnchorDDBtn->setObjectName(QString::fromUtf8("mOffsetFromAnchorDDBtn"));

        gridLayout_45->addWidget(mOffsetFromAnchorDDBtn, 4, 3, 1, 1);

        mCalloutFillStyleButton = new QgsSymbolButton(WidgetBalloonCallout);
        mCalloutFillStyleButton->setObjectName(QString::fromUtf8("mCalloutFillStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCalloutFillStyleButton->sizePolicy().hasHeightForWidth());
        mCalloutFillStyleButton->setSizePolicy(sizePolicy1);

        gridLayout_45->addWidget(mCalloutFillStyleButton, 0, 1, 1, 2);

        mCornerRadiusDDBtn = new QgsPropertyOverrideButton(WidgetBalloonCallout);
        mCornerRadiusDDBtn->setObjectName(QString::fromUtf8("mCornerRadiusDDBtn"));

        gridLayout_45->addWidget(mCornerRadiusDDBtn, 1, 3, 1, 1);

        mWedgeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetBalloonCallout);
        mWedgeWidthUnitWidget->setObjectName(QString::fromUtf8("mWedgeWidthUnitWidget"));
        mWedgeWidthUnitWidget->setMinimumSize(QSize(10, 0));
        mWedgeWidthUnitWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_45->addWidget(mWedgeWidthUnitWidget, 2, 2, 1, 1);

        mOffsetFromAnchorSpin = new QgsDoubleSpinBox(WidgetBalloonCallout);
        mOffsetFromAnchorSpin->setObjectName(QString::fromUtf8("mOffsetFromAnchorSpin"));
        sizePolicy.setHeightForWidth(mOffsetFromAnchorSpin->sizePolicy().hasHeightForWidth());
        mOffsetFromAnchorSpin->setSizePolicy(sizePolicy);
        mOffsetFromAnchorSpin->setDecimals(6);
        mOffsetFromAnchorSpin->setMaximum(100000.000000000000000);
        mOffsetFromAnchorSpin->setSingleStep(0.200000000000000);
        mOffsetFromAnchorSpin->setValue(0.000000000000000);
        mOffsetFromAnchorSpin->setProperty("showClearButton", QVariant(true));

        gridLayout_45->addWidget(mOffsetFromAnchorSpin, 4, 1, 1, 1);

        mMarginsGroupBox = new QgsCollapsibleGroupBox(WidgetBalloonCallout);
        mMarginsGroupBox->setObjectName(QString::fromUtf8("mMarginsGroupBox"));
        gridLayout_2 = new QGridLayout(mMarginsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mMarginUnitWidget = new QgsUnitSelectionWidget(mMarginsGroupBox);
        mMarginUnitWidget->setObjectName(QString::fromUtf8("mMarginUnitWidget"));
        mMarginUnitWidget->setMinimumSize(QSize(10, 0));
        mMarginUnitWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_2->addWidget(mMarginUnitWidget, 4, 1, 1, 1);

        label_6 = new QLabel(mMarginsGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_7 = new QLabel(mMarginsGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        label_4 = new QLabel(mMarginsGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        mSpinBottomMargin = new QgsDoubleSpinBox(mMarginsGroupBox);
        mSpinBottomMargin->setObjectName(QString::fromUtf8("mSpinBottomMargin"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSpinBottomMargin->sizePolicy().hasHeightForWidth());
        mSpinBottomMargin->setSizePolicy(sizePolicy2);
        mSpinBottomMargin->setDecimals(6);
        mSpinBottomMargin->setMinimum(-10000000.000000000000000);
        mSpinBottomMargin->setMaximum(10000000.000000000000000);
        mSpinBottomMargin->setSingleStep(0.200000000000000);
        mSpinBottomMargin->setValue(1.000000000000000);

        gridLayout_2->addWidget(mSpinBottomMargin, 3, 1, 1, 1);

        label_3 = new QLabel(mMarginsGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(mMarginsGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        mSpinRightMargin = new QgsDoubleSpinBox(mMarginsGroupBox);
        mSpinRightMargin->setObjectName(QString::fromUtf8("mSpinRightMargin"));
        sizePolicy2.setHeightForWidth(mSpinRightMargin->sizePolicy().hasHeightForWidth());
        mSpinRightMargin->setSizePolicy(sizePolicy2);
        mSpinRightMargin->setDecimals(6);
        mSpinRightMargin->setMinimum(-10000000.000000000000000);
        mSpinRightMargin->setMaximum(10000000.000000000000000);
        mSpinRightMargin->setSingleStep(0.200000000000000);
        mSpinRightMargin->setValue(1.000000000000000);

        gridLayout_2->addWidget(mSpinRightMargin, 2, 1, 1, 1);

        mSpinLeftMargin = new QgsDoubleSpinBox(mMarginsGroupBox);
        mSpinLeftMargin->setObjectName(QString::fromUtf8("mSpinLeftMargin"));
        sizePolicy2.setHeightForWidth(mSpinLeftMargin->sizePolicy().hasHeightForWidth());
        mSpinLeftMargin->setSizePolicy(sizePolicy2);
        mSpinLeftMargin->setDecimals(6);
        mSpinLeftMargin->setMinimum(-10000000.000000000000000);
        mSpinLeftMargin->setMaximum(10000000.000000000000000);
        mSpinLeftMargin->setSingleStep(0.200000000000000);
        mSpinLeftMargin->setValue(1.000000000000000);

        gridLayout_2->addWidget(mSpinLeftMargin, 1, 1, 1, 1);

        label_5 = new QLabel(mMarginsGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        mSpinTopMargin = new QgsDoubleSpinBox(mMarginsGroupBox);
        mSpinTopMargin->setObjectName(QString::fromUtf8("mSpinTopMargin"));
        sizePolicy2.setHeightForWidth(mSpinTopMargin->sizePolicy().hasHeightForWidth());
        mSpinTopMargin->setSizePolicy(sizePolicy2);
        mSpinTopMargin->setDecimals(6);
        mSpinTopMargin->setMinimum(-10000000.000000000000000);
        mSpinTopMargin->setMaximum(10000000.000000000000000);
        mSpinTopMargin->setSingleStep(0.200000000000000);
        mSpinTopMargin->setValue(1.000000000000000);

        gridLayout_2->addWidget(mSpinTopMargin, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mMarginsDDBtn = new QgsPropertyOverrideButton(mMarginsGroupBox);
        mMarginsDDBtn->setObjectName(QString::fromUtf8("mMarginsDDBtn"));

        horizontalLayout->addWidget(mMarginsDDBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 5, 1, 1, 1);


        gridLayout_45->addWidget(mMarginsGroupBox, 3, 0, 1, 4);

        mAnchorPointDDBtn = new QgsPropertyOverrideButton(WidgetBalloonCallout);
        mAnchorPointDDBtn->setObjectName(QString::fromUtf8("mAnchorPointDDBtn"));

        gridLayout_45->addWidget(mAnchorPointDDBtn, 5, 3, 1, 1);

        mWedgeWidthLbl = new QLabel(WidgetBalloonCallout);
        mWedgeWidthLbl->setObjectName(QString::fromUtf8("mWedgeWidthLbl"));

        gridLayout_45->addWidget(mWedgeWidthLbl, 2, 0, 1, 1);

        mCornerRadiusUnitWidget = new QgsUnitSelectionWidget(WidgetBalloonCallout);
        mCornerRadiusUnitWidget->setObjectName(QString::fromUtf8("mCornerRadiusUnitWidget"));
        mCornerRadiusUnitWidget->setMinimumSize(QSize(10, 0));
        mCornerRadiusUnitWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_45->addWidget(mCornerRadiusUnitWidget, 1, 2, 1, 1);

        mCalloutFillStyleLbl = new QLabel(WidgetBalloonCallout);
        mCalloutFillStyleLbl->setObjectName(QString::fromUtf8("mCalloutFillStyleLbl"));

        gridLayout_45->addWidget(mCalloutFillStyleLbl, 0, 0, 1, 1);

        mCalloutFillStyleLbl_2 = new QLabel(WidgetBalloonCallout);
        mCalloutFillStyleLbl_2->setObjectName(QString::fromUtf8("mCalloutFillStyleLbl_2"));

        gridLayout_45->addWidget(mCalloutFillStyleLbl_2, 6, 0, 1, 1);

        mMarkerSymbolButton = new QgsSymbolButton(WidgetBalloonCallout);
        mMarkerSymbolButton->setObjectName(QString::fromUtf8("mMarkerSymbolButton"));
        sizePolicy1.setHeightForWidth(mMarkerSymbolButton->sizePolicy().hasHeightForWidth());
        mMarkerSymbolButton->setSizePolicy(sizePolicy1);

        gridLayout_45->addWidget(mMarkerSymbolButton, 6, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_45);

        mPlacementDDGroupBox = new QGroupBox(WidgetBalloonCallout);
        mPlacementDDGroupBox->setObjectName(QString::fromUtf8("mPlacementDDGroupBox"));
        mPlacementDDGroupBox->setFlat(false);
        mPlacementDDGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("labelplacementgroup")));
        gridLayout_4 = new QGridLayout(mPlacementDDGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(8, -1, 8, -1);
        mCoordAlignmentFrame = new QFrame(mPlacementDDGroupBox);
        mCoordAlignmentFrame->setObjectName(QString::fromUtf8("mCoordAlignmentFrame"));
        horizontalLayout_27 = new QHBoxLayout(mCoordAlignmentFrame);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        mCoordXLabel_3 = new QLabel(mCoordAlignmentFrame);
        mCoordXLabel_3->setObjectName(QString::fromUtf8("mCoordXLabel_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mCoordXLabel_3->sizePolicy().hasHeightForWidth());
        mCoordXLabel_3->setSizePolicy(sizePolicy3);

        horizontalLayout_24->addWidget(mCoordXLabel_3);

        mDestXDDBtn = new QgsPropertyOverrideButton(mCoordAlignmentFrame);
        mDestXDDBtn->setObjectName(QString::fromUtf8("mDestXDDBtn"));

        horizontalLayout_24->addWidget(mDestXDDBtn);

        mCoordYLabel_3 = new QLabel(mCoordAlignmentFrame);
        mCoordYLabel_3->setObjectName(QString::fromUtf8("mCoordYLabel_3"));
        sizePolicy3.setHeightForWidth(mCoordYLabel_3->sizePolicy().hasHeightForWidth());
        mCoordYLabel_3->setSizePolicy(sizePolicy3);

        horizontalLayout_24->addWidget(mCoordYLabel_3);

        mDestYDDBtn = new QgsPropertyOverrideButton(mCoordAlignmentFrame);
        mDestYDDBtn->setObjectName(QString::fromUtf8("mDestYDDBtn"));

        horizontalLayout_24->addWidget(mDestYDDBtn);

        horizontalSpacer_24 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_24);


        horizontalLayout_27->addLayout(horizontalLayout_24);


        gridLayout_4->addWidget(mCoordAlignmentFrame, 0, 1, 1, 1);

        mCoordLabel_2 = new QLabel(mPlacementDDGroupBox);
        mCoordLabel_2->setObjectName(QString::fromUtf8("mCoordLabel_2"));

        gridLayout_4->addWidget(mCoordLabel_2, 0, 0, 1, 1);


        verticalLayout->addWidget(mPlacementDDGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mCalloutFillStyleButton, mCornerRadiusSpin);
        QWidget::setTabOrder(mCornerRadiusSpin, mCornerRadiusUnitWidget);
        QWidget::setTabOrder(mCornerRadiusUnitWidget, mCornerRadiusDDBtn);
        QWidget::setTabOrder(mCornerRadiusDDBtn, mWedgeWidthSpin);
        QWidget::setTabOrder(mWedgeWidthSpin, mWedgeWidthUnitWidget);
        QWidget::setTabOrder(mWedgeWidthUnitWidget, mWedgeWidthDDBtn);
        QWidget::setTabOrder(mWedgeWidthDDBtn, mSpinTopMargin);
        QWidget::setTabOrder(mSpinTopMargin, mSpinLeftMargin);
        QWidget::setTabOrder(mSpinLeftMargin, mSpinRightMargin);
        QWidget::setTabOrder(mSpinRightMargin, mSpinBottomMargin);
        QWidget::setTabOrder(mSpinBottomMargin, mMarginUnitWidget);
        QWidget::setTabOrder(mMarginUnitWidget, mMarginsDDBtn);
        QWidget::setTabOrder(mMarginsDDBtn, mOffsetFromAnchorSpin);
        QWidget::setTabOrder(mOffsetFromAnchorSpin, mOffsetFromAnchorUnitWidget);
        QWidget::setTabOrder(mOffsetFromAnchorUnitWidget, mOffsetFromAnchorDDBtn);
        QWidget::setTabOrder(mOffsetFromAnchorDDBtn, mAnchorPointComboBox);
        QWidget::setTabOrder(mAnchorPointComboBox, mAnchorPointDDBtn);
        QWidget::setTabOrder(mAnchorPointDDBtn, mMarkerSymbolButton);
        QWidget::setTabOrder(mMarkerSymbolButton, mCalloutBlendComboBox);
        QWidget::setTabOrder(mCalloutBlendComboBox, mCalloutBlendModeDDBtn);
        QWidget::setTabOrder(mCalloutBlendModeDDBtn, mDestXDDBtn);
        QWidget::setTabOrder(mDestXDDBtn, mDestYDDBtn);

        retranslateUi(WidgetBalloonCallout);

        QMetaObject::connectSlotsByName(WidgetBalloonCallout);
    } // setupUi

    void retranslateUi(QWidget *WidgetBalloonCallout)
    {
        mAnchorPointLbl->setText(QCoreApplication::translate("WidgetBalloonCallout", "Feature anchor point", nullptr));
        mCalloutBlendModeDDBtn->setText(QCoreApplication::translate("WidgetBalloonCallout", "\342\200\246", nullptr));
        mWedgeWidthDDBtn->setText(QCoreApplication::translate("WidgetBalloonCallout", "\342\200\246", nullptr));
        mCornerRadiusLbl->setText(QCoreApplication::translate("WidgetBalloonCallout", "Corner radius", nullptr));
        mOffsetFromAnchorLbl->setText(QCoreApplication::translate("WidgetBalloonCallout", "Offset from feature", nullptr));
        mCalloutBlendModeLbl->setText(QCoreApplication::translate("WidgetBalloonCallout", "Blend mode", nullptr));
        mOffsetFromAnchorDDBtn->setText(QCoreApplication::translate("WidgetBalloonCallout", "\342\200\246", nullptr));
        mCalloutFillStyleButton->setText(QCoreApplication::translate("WidgetBalloonCallout", "Symbol\342\200\246", nullptr));
        mCornerRadiusDDBtn->setText(QCoreApplication::translate("WidgetBalloonCallout", "\342\200\246", nullptr));
        mMarginsGroupBox->setTitle(QCoreApplication::translate("WidgetBalloonCallout", " Margins", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetBalloonCallout", "Units", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetBalloonCallout", "Data defined", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetBalloonCallout", "Bottom", nullptr));
        mSpinBottomMargin->setSuffix(QString());
        label_3->setText(QCoreApplication::translate("WidgetBalloonCallout", "Left", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetBalloonCallout", "Top", nullptr));
        mSpinRightMargin->setSuffix(QString());
        mSpinLeftMargin->setSuffix(QString());
        label_5->setText(QCoreApplication::translate("WidgetBalloonCallout", "Right", nullptr));
        mSpinTopMargin->setSuffix(QString());
        mMarginsDDBtn->setText(QCoreApplication::translate("WidgetBalloonCallout", "\342\200\246", nullptr));
        mAnchorPointDDBtn->setText(QCoreApplication::translate("WidgetBalloonCallout", "\342\200\246", nullptr));
        mWedgeWidthLbl->setText(QCoreApplication::translate("WidgetBalloonCallout", "Wedge width", nullptr));
        mCalloutFillStyleLbl->setText(QCoreApplication::translate("WidgetBalloonCallout", "Fill style", nullptr));
        mCalloutFillStyleLbl_2->setText(QCoreApplication::translate("WidgetBalloonCallout", "End point marker", nullptr));
        mMarkerSymbolButton->setText(QCoreApplication::translate("WidgetBalloonCallout", "Symbol\342\200\246", nullptr));
        mPlacementDDGroupBox->setTitle(QCoreApplication::translate("WidgetBalloonCallout", "Data Defined Placement", nullptr));
        mCoordXLabel_3->setText(QCoreApplication::translate("WidgetBalloonCallout", "X", nullptr));
        mDestXDDBtn->setText(QCoreApplication::translate("WidgetBalloonCallout", "\342\200\246", nullptr));
        mCoordYLabel_3->setText(QCoreApplication::translate("WidgetBalloonCallout", "Y", nullptr));
        mDestYDDBtn->setText(QCoreApplication::translate("WidgetBalloonCallout", "\342\200\246", nullptr));
        mCoordLabel_2->setText(QCoreApplication::translate("WidgetBalloonCallout", "Destination", nullptr));
        (void)WidgetBalloonCallout;
    } // retranslateUi

};

namespace Ui {
    class WidgetBalloonCallout: public Ui_WidgetBalloonCallout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_BALLOONCALLOUT_H
