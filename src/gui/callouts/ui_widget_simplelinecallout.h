/********************************************************************************
** Form generated from reading UI file 'widget_simplelinecallout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLELINECALLOUT_H
#define UI_WIDGET_SIMPLELINECALLOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleLineCallout
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_45;
    QgsPropertyOverrideButton *mDrawToAllPartsDDBtn;
    QgsPropertyOverrideButton *mMinCalloutLengthDDBtn;
    QgsDoubleSpinBox *mOffsetFromLabelSpin;
    QLabel *mOffsetFromAnchorLbl;
    QgsUnitSelectionWidget *mMinCalloutWidthUnitWidget;
    QgsPropertyOverrideButton *mOffsetFromAnchorDDBtn;
    QgsUnitSelectionWidget *mOffsetFromAnchorUnitWidget;
    QgsPropertyOverrideButton *mOffsetFromLabelDDBtn;
    QLabel *mCalloutLineStyleLbl;
    QgsSymbolButton *mCalloutLineStyleButton;
    QComboBox *mLabelAnchorPointComboBox;
    QgsPropertyOverrideButton *mAnchorPointDDBtn;
    QLabel *mOffsetFromLabelLbl;
    QgsDoubleSpinBox *mOffsetFromAnchorSpin;
    QgsPropertyOverrideButton *mCalloutBlendModeDDBtn;
    QgsBlendModeComboBox *mCalloutBlendComboBox;
    QLabel *mCalloutBlendModeLbl;
    QLabel *mAnchorPointLbl_2;
    QgsUnitSelectionWidget *mOffsetFromLabelUnitWidget;
    QCheckBox *mDrawToAllPartsCheck;
    QgsDoubleSpinBox *mMinCalloutLengthSpin;
    QComboBox *mAnchorPointComboBox;
    QLabel *mMinCalloutLengthLbl;
    QgsPropertyOverrideButton *mLabelAnchorPointDDBtn;
    QLabel *mAnchorPointLbl;
    QGroupBox *mPlacementDDGroupBox;
    QGridLayout *gridLayout_4;
    QFrame *mCoordAlignmentFrame;
    QHBoxLayout *horizontalLayout_27;
    QHBoxLayout *horizontalLayout_24;
    QLabel *mCoordXLabel_2;
    QgsPropertyOverrideButton *mDestXDDBtn;
    QLabel *mCoordYLabel_2;
    QgsPropertyOverrideButton *mDestYDDBtn;
    QSpacerItem *horizontalSpacer_24;
    QLabel *mCoordLabel;
    QHBoxLayout *horizontalLayout_23;
    QLabel *mCoordXLabel;
    QgsPropertyOverrideButton *mOriginXDDBtn;
    QLabel *mCoordYLabel;
    QgsPropertyOverrideButton *mOriginYDDBtn;
    QSpacerItem *horizontalSpacer_23;
    QLabel *mCoordLabel_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetSimpleLineCallout)
    {
        if (WidgetSimpleLineCallout->objectName().isEmpty())
            WidgetSimpleLineCallout->setObjectName(QString::fromUtf8("WidgetSimpleLineCallout"));
        WidgetSimpleLineCallout->resize(371, 409);
        WidgetSimpleLineCallout->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetSimpleLineCallout);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_45 = new QGridLayout();
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        gridLayout_45->setContentsMargins(0, 0, -1, -1);
        mDrawToAllPartsDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLineCallout);
        mDrawToAllPartsDDBtn->setObjectName(QString::fromUtf8("mDrawToAllPartsDDBtn"));

        gridLayout_45->addWidget(mDrawToAllPartsDDBtn, 2, 3, 1, 1);

        mMinCalloutLengthDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLineCallout);
        mMinCalloutLengthDDBtn->setObjectName(QString::fromUtf8("mMinCalloutLengthDDBtn"));

        gridLayout_45->addWidget(mMinCalloutLengthDDBtn, 1, 3, 1, 1);

        mOffsetFromLabelSpin = new QgsDoubleSpinBox(WidgetSimpleLineCallout);
        mOffsetFromLabelSpin->setObjectName(QString::fromUtf8("mOffsetFromLabelSpin"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOffsetFromLabelSpin->sizePolicy().hasHeightForWidth());
        mOffsetFromLabelSpin->setSizePolicy(sizePolicy);
        mOffsetFromLabelSpin->setDecimals(6);
        mOffsetFromLabelSpin->setMaximum(100000.000000000000000);
        mOffsetFromLabelSpin->setSingleStep(0.200000000000000);
        mOffsetFromLabelSpin->setValue(0.000000000000000);
        mOffsetFromLabelSpin->setProperty("showClearButton", QVariant(true));

        gridLayout_45->addWidget(mOffsetFromLabelSpin, 4, 1, 1, 1);

        mOffsetFromAnchorLbl = new QLabel(WidgetSimpleLineCallout);
        mOffsetFromAnchorLbl->setObjectName(QString::fromUtf8("mOffsetFromAnchorLbl"));

        gridLayout_45->addWidget(mOffsetFromAnchorLbl, 5, 0, 1, 1);

        mMinCalloutWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLineCallout);
        mMinCalloutWidthUnitWidget->setObjectName(QString::fromUtf8("mMinCalloutWidthUnitWidget"));
        mMinCalloutWidthUnitWidget->setMinimumSize(QSize(10, 0));
        mMinCalloutWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_45->addWidget(mMinCalloutWidthUnitWidget, 1, 2, 1, 1);

        mOffsetFromAnchorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLineCallout);
        mOffsetFromAnchorDDBtn->setObjectName(QString::fromUtf8("mOffsetFromAnchorDDBtn"));

        gridLayout_45->addWidget(mOffsetFromAnchorDDBtn, 5, 3, 1, 1);

        mOffsetFromAnchorUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLineCallout);
        mOffsetFromAnchorUnitWidget->setObjectName(QString::fromUtf8("mOffsetFromAnchorUnitWidget"));
        mOffsetFromAnchorUnitWidget->setMinimumSize(QSize(10, 0));
        mOffsetFromAnchorUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_45->addWidget(mOffsetFromAnchorUnitWidget, 5, 2, 1, 1);

        mOffsetFromLabelDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLineCallout);
        mOffsetFromLabelDDBtn->setObjectName(QString::fromUtf8("mOffsetFromLabelDDBtn"));

        gridLayout_45->addWidget(mOffsetFromLabelDDBtn, 4, 3, 1, 1);

        mCalloutLineStyleLbl = new QLabel(WidgetSimpleLineCallout);
        mCalloutLineStyleLbl->setObjectName(QString::fromUtf8("mCalloutLineStyleLbl"));

        gridLayout_45->addWidget(mCalloutLineStyleLbl, 0, 0, 1, 1);

        mCalloutLineStyleButton = new QgsSymbolButton(WidgetSimpleLineCallout);
        mCalloutLineStyleButton->setObjectName(QString::fromUtf8("mCalloutLineStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCalloutLineStyleButton->sizePolicy().hasHeightForWidth());
        mCalloutLineStyleButton->setSizePolicy(sizePolicy1);

        gridLayout_45->addWidget(mCalloutLineStyleButton, 0, 1, 1, 2);

        mLabelAnchorPointComboBox = new QComboBox(WidgetSimpleLineCallout);
        mLabelAnchorPointComboBox->setObjectName(QString::fromUtf8("mLabelAnchorPointComboBox"));

        gridLayout_45->addWidget(mLabelAnchorPointComboBox, 3, 1, 1, 2);

        mAnchorPointDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLineCallout);
        mAnchorPointDDBtn->setObjectName(QString::fromUtf8("mAnchorPointDDBtn"));

        gridLayout_45->addWidget(mAnchorPointDDBtn, 6, 3, 1, 1);

        mOffsetFromLabelLbl = new QLabel(WidgetSimpleLineCallout);
        mOffsetFromLabelLbl->setObjectName(QString::fromUtf8("mOffsetFromLabelLbl"));

        gridLayout_45->addWidget(mOffsetFromLabelLbl, 4, 0, 1, 1);

        mOffsetFromAnchorSpin = new QgsDoubleSpinBox(WidgetSimpleLineCallout);
        mOffsetFromAnchorSpin->setObjectName(QString::fromUtf8("mOffsetFromAnchorSpin"));
        sizePolicy.setHeightForWidth(mOffsetFromAnchorSpin->sizePolicy().hasHeightForWidth());
        mOffsetFromAnchorSpin->setSizePolicy(sizePolicy);
        mOffsetFromAnchorSpin->setDecimals(6);
        mOffsetFromAnchorSpin->setMaximum(100000.000000000000000);
        mOffsetFromAnchorSpin->setSingleStep(0.200000000000000);
        mOffsetFromAnchorSpin->setValue(0.000000000000000);
        mOffsetFromAnchorSpin->setProperty("showClearButton", QVariant(true));

        gridLayout_45->addWidget(mOffsetFromAnchorSpin, 5, 1, 1, 1);

        mCalloutBlendModeDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLineCallout);
        mCalloutBlendModeDDBtn->setObjectName(QString::fromUtf8("mCalloutBlendModeDDBtn"));

        gridLayout_45->addWidget(mCalloutBlendModeDDBtn, 7, 3, 1, 1);

        mCalloutBlendComboBox = new QgsBlendModeComboBox(WidgetSimpleLineCallout);
        mCalloutBlendComboBox->setObjectName(QString::fromUtf8("mCalloutBlendComboBox"));

        gridLayout_45->addWidget(mCalloutBlendComboBox, 7, 1, 1, 2);

        mCalloutBlendModeLbl = new QLabel(WidgetSimpleLineCallout);
        mCalloutBlendModeLbl->setObjectName(QString::fromUtf8("mCalloutBlendModeLbl"));

        gridLayout_45->addWidget(mCalloutBlendModeLbl, 7, 0, 1, 1);

        mAnchorPointLbl_2 = new QLabel(WidgetSimpleLineCallout);
        mAnchorPointLbl_2->setObjectName(QString::fromUtf8("mAnchorPointLbl_2"));

        gridLayout_45->addWidget(mAnchorPointLbl_2, 3, 0, 1, 1);

        mOffsetFromLabelUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLineCallout);
        mOffsetFromLabelUnitWidget->setObjectName(QString::fromUtf8("mOffsetFromLabelUnitWidget"));
        mOffsetFromLabelUnitWidget->setMinimumSize(QSize(10, 0));
        mOffsetFromLabelUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_45->addWidget(mOffsetFromLabelUnitWidget, 4, 2, 1, 1);

        mDrawToAllPartsCheck = new QCheckBox(WidgetSimpleLineCallout);
        mDrawToAllPartsCheck->setObjectName(QString::fromUtf8("mDrawToAllPartsCheck"));

        gridLayout_45->addWidget(mDrawToAllPartsCheck, 2, 0, 1, 3);

        mMinCalloutLengthSpin = new QgsDoubleSpinBox(WidgetSimpleLineCallout);
        mMinCalloutLengthSpin->setObjectName(QString::fromUtf8("mMinCalloutLengthSpin"));
        sizePolicy.setHeightForWidth(mMinCalloutLengthSpin->sizePolicy().hasHeightForWidth());
        mMinCalloutLengthSpin->setSizePolicy(sizePolicy);
        mMinCalloutLengthSpin->setDecimals(6);
        mMinCalloutLengthSpin->setMaximum(100000.000000000000000);
        mMinCalloutLengthSpin->setSingleStep(0.200000000000000);
        mMinCalloutLengthSpin->setValue(1.000000000000000);
        mMinCalloutLengthSpin->setProperty("showClearButton", QVariant(true));

        gridLayout_45->addWidget(mMinCalloutLengthSpin, 1, 1, 1, 1);

        mAnchorPointComboBox = new QComboBox(WidgetSimpleLineCallout);
        mAnchorPointComboBox->setObjectName(QString::fromUtf8("mAnchorPointComboBox"));

        gridLayout_45->addWidget(mAnchorPointComboBox, 6, 1, 1, 2);

        mMinCalloutLengthLbl = new QLabel(WidgetSimpleLineCallout);
        mMinCalloutLengthLbl->setObjectName(QString::fromUtf8("mMinCalloutLengthLbl"));

        gridLayout_45->addWidget(mMinCalloutLengthLbl, 1, 0, 1, 1);

        mLabelAnchorPointDDBtn = new QgsPropertyOverrideButton(WidgetSimpleLineCallout);
        mLabelAnchorPointDDBtn->setObjectName(QString::fromUtf8("mLabelAnchorPointDDBtn"));

        gridLayout_45->addWidget(mLabelAnchorPointDDBtn, 3, 3, 1, 1);

        mAnchorPointLbl = new QLabel(WidgetSimpleLineCallout);
        mAnchorPointLbl->setObjectName(QString::fromUtf8("mAnchorPointLbl"));

        gridLayout_45->addWidget(mAnchorPointLbl, 6, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_45);

        mPlacementDDGroupBox = new QGroupBox(WidgetSimpleLineCallout);
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
        mCoordXLabel_2 = new QLabel(mCoordAlignmentFrame);
        mCoordXLabel_2->setObjectName(QString::fromUtf8("mCoordXLabel_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mCoordXLabel_2->sizePolicy().hasHeightForWidth());
        mCoordXLabel_2->setSizePolicy(sizePolicy2);

        horizontalLayout_24->addWidget(mCoordXLabel_2);

        mDestXDDBtn = new QgsPropertyOverrideButton(mCoordAlignmentFrame);
        mDestXDDBtn->setObjectName(QString::fromUtf8("mDestXDDBtn"));

        horizontalLayout_24->addWidget(mDestXDDBtn);

        mCoordYLabel_2 = new QLabel(mCoordAlignmentFrame);
        mCoordYLabel_2->setObjectName(QString::fromUtf8("mCoordYLabel_2"));
        sizePolicy2.setHeightForWidth(mCoordYLabel_2->sizePolicy().hasHeightForWidth());
        mCoordYLabel_2->setSizePolicy(sizePolicy2);

        horizontalLayout_24->addWidget(mCoordYLabel_2);

        mDestYDDBtn = new QgsPropertyOverrideButton(mCoordAlignmentFrame);
        mDestYDDBtn->setObjectName(QString::fromUtf8("mDestYDDBtn"));

        horizontalLayout_24->addWidget(mDestYDDBtn);

        horizontalSpacer_24 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_24);


        horizontalLayout_27->addLayout(horizontalLayout_24);


        gridLayout_4->addWidget(mCoordAlignmentFrame, 1, 1, 1, 1);

        mCoordLabel = new QLabel(mPlacementDDGroupBox);
        mCoordLabel->setObjectName(QString::fromUtf8("mCoordLabel"));

        gridLayout_4->addWidget(mCoordLabel, 0, 0, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        mCoordXLabel = new QLabel(mPlacementDDGroupBox);
        mCoordXLabel->setObjectName(QString::fromUtf8("mCoordXLabel"));
        sizePolicy2.setHeightForWidth(mCoordXLabel->sizePolicy().hasHeightForWidth());
        mCoordXLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_23->addWidget(mCoordXLabel);

        mOriginXDDBtn = new QgsPropertyOverrideButton(mPlacementDDGroupBox);
        mOriginXDDBtn->setObjectName(QString::fromUtf8("mOriginXDDBtn"));

        horizontalLayout_23->addWidget(mOriginXDDBtn);

        mCoordYLabel = new QLabel(mPlacementDDGroupBox);
        mCoordYLabel->setObjectName(QString::fromUtf8("mCoordYLabel"));
        sizePolicy2.setHeightForWidth(mCoordYLabel->sizePolicy().hasHeightForWidth());
        mCoordYLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_23->addWidget(mCoordYLabel);

        mOriginYDDBtn = new QgsPropertyOverrideButton(mPlacementDDGroupBox);
        mOriginYDDBtn->setObjectName(QString::fromUtf8("mOriginYDDBtn"));

        horizontalLayout_23->addWidget(mOriginYDDBtn);

        horizontalSpacer_23 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_23);


        gridLayout_4->addLayout(horizontalLayout_23, 0, 1, 1, 1);

        mCoordLabel_2 = new QLabel(mPlacementDDGroupBox);
        mCoordLabel_2->setObjectName(QString::fromUtf8("mCoordLabel_2"));

        gridLayout_4->addWidget(mCoordLabel_2, 1, 0, 1, 1);


        verticalLayout->addWidget(mPlacementDDGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mCalloutLineStyleButton, mMinCalloutLengthSpin);
        QWidget::setTabOrder(mMinCalloutLengthSpin, mMinCalloutWidthUnitWidget);
        QWidget::setTabOrder(mMinCalloutWidthUnitWidget, mMinCalloutLengthDDBtn);
        QWidget::setTabOrder(mMinCalloutLengthDDBtn, mDrawToAllPartsCheck);
        QWidget::setTabOrder(mDrawToAllPartsCheck, mDrawToAllPartsDDBtn);
        QWidget::setTabOrder(mDrawToAllPartsDDBtn, mLabelAnchorPointComboBox);
        QWidget::setTabOrder(mLabelAnchorPointComboBox, mLabelAnchorPointDDBtn);
        QWidget::setTabOrder(mLabelAnchorPointDDBtn, mOffsetFromLabelSpin);
        QWidget::setTabOrder(mOffsetFromLabelSpin, mOffsetFromLabelUnitWidget);
        QWidget::setTabOrder(mOffsetFromLabelUnitWidget, mOffsetFromLabelDDBtn);
        QWidget::setTabOrder(mOffsetFromLabelDDBtn, mOffsetFromAnchorSpin);
        QWidget::setTabOrder(mOffsetFromAnchorSpin, mOffsetFromAnchorUnitWidget);
        QWidget::setTabOrder(mOffsetFromAnchorUnitWidget, mOffsetFromAnchorDDBtn);
        QWidget::setTabOrder(mOffsetFromAnchorDDBtn, mAnchorPointComboBox);
        QWidget::setTabOrder(mAnchorPointComboBox, mAnchorPointDDBtn);
        QWidget::setTabOrder(mAnchorPointDDBtn, mCalloutBlendComboBox);
        QWidget::setTabOrder(mCalloutBlendComboBox, mCalloutBlendModeDDBtn);
        QWidget::setTabOrder(mCalloutBlendModeDDBtn, mOriginXDDBtn);
        QWidget::setTabOrder(mOriginXDDBtn, mOriginYDDBtn);
        QWidget::setTabOrder(mOriginYDDBtn, mDestXDDBtn);
        QWidget::setTabOrder(mDestXDDBtn, mDestYDDBtn);

        retranslateUi(WidgetSimpleLineCallout);

        QMetaObject::connectSlotsByName(WidgetSimpleLineCallout);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleLineCallout)
    {
        mDrawToAllPartsDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mMinCalloutLengthDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mOffsetFromAnchorLbl->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Offset from feature", nullptr));
        mOffsetFromAnchorDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mOffsetFromLabelDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mCalloutLineStyleLbl->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Line style", nullptr));
        mCalloutLineStyleButton->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Symbol\342\200\246", nullptr));
        mAnchorPointDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mOffsetFromLabelLbl->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Offset from label area", nullptr));
        mCalloutBlendModeDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mCalloutBlendModeLbl->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Blend mode", nullptr));
        mAnchorPointLbl_2->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Label anchor point", nullptr));
        mDrawToAllPartsCheck->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Draw lines to all feature parts", nullptr));
        mMinCalloutLengthLbl->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Minimum length", nullptr));
        mLabelAnchorPointDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mAnchorPointLbl->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Feature anchor point", nullptr));
        mPlacementDDGroupBox->setTitle(QCoreApplication::translate("WidgetSimpleLineCallout", "Data Defined Placement", nullptr));
        mCoordXLabel_2->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "X", nullptr));
        mDestXDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mCoordYLabel_2->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Y", nullptr));
        mDestYDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mCoordLabel->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Origin", nullptr));
        mCoordXLabel->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "X", nullptr));
        mOriginXDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mCoordYLabel->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Y", nullptr));
        mOriginYDDBtn->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "\342\200\246", nullptr));
        mCoordLabel_2->setText(QCoreApplication::translate("WidgetSimpleLineCallout", "Destination", nullptr));
        (void)WidgetSimpleLineCallout;
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleLineCallout: public Ui_WidgetSimpleLineCallout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLELINECALLOUT_H
