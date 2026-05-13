/********************************************************************************
** Form generated from reading UI file 'qgslayoutscalebarwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTSCALEBARWIDGETBASE_H
#define UI_QGSLAYOUTSCALEBARWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsalignmentcombobox.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgslayoutitemcombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscalemethodwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutScaleBarWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QgsLayoutItemComboBox *mMapItemComboBox;
    QComboBox *mStyleComboBox;
    QLabel *mStyleLabel;
    QLabel *mMapLabel;
    QgsCollapsibleGroupBoxBasic *mGroupBoxUnits;
    QGridLayout *gridLayout_2;
    QLineEdit *mUnitLabelLineEdit;
    QPushButton *mNumberFormatPushButton;
    QComboBox *mUnitsComboBox;
    QgsDoubleSpinBox *mMapUnitsPerBarUnitSpinBox;
    QLabel *mUnitsLabel;
    QLabel *mUnitLabelLabel_2;
    QLabel *mMapUnitsPerBarUnitLabel;
    QLabel *mUnitLabelLabel;
    QLabel *label_2;
    QgsScaleMethodWidget *mScaleMethodWidget;
    QgsCollapsibleGroupBoxBasic *mGroupBoxSegments;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *mSegmentLabel;
    QHBoxLayout *horizontalLayout_2;
    QgsSpinBox *mNumberOfSubdivisionsSpinBox;
    QgsPropertyOverrideButton *mRightSegmentSubdivisionsDDBtn;
    QHBoxLayout *horizontalLayout1;
    QgsSpinBox *mSegmentsLeftSpinBox;
    QgsPropertyOverrideButton *mSegmentsLeftDDBtn;
    QRadioButton *mFitWidthRadio;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mHeightSpinBox;
    QgsPropertyOverrideButton *mHeightDDBtn;
    QHBoxLayout *horizontalLayout2;
    QgsSpinBox *mNumberOfSegmentsSpinBox;
    QgsPropertyOverrideButton *mSegmentsRightDDBtn;
    QRadioButton *mFixedSizeRadio;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mSubdivisionsHeightSpinBox;
    QgsPropertyOverrideButton *mSubdivisionHeightDDBtn;
    QLabel *mSubdivisionsLabel;
    QLabel *mSubdivisionsHeightLabel;
    QWidget *mMinWidthWidget;
    QHBoxLayout *horizontalLayout4;
    QgsDoubleSpinBox *mMinWidthSpinBox;
    QgsPropertyOverrideButton *mMinWidthDDBtn;
    QWidget *mMaxWidthWidget;
    QHBoxLayout *horizontalLayout5;
    QgsDoubleSpinBox *mMaxWidthSpinBox;
    QgsPropertyOverrideButton *mMaxWidthDDBtn;
    QWidget *mSegmentSizeWidget;
    QHBoxLayout *horizontalLayout3;
    QgsDoubleSpinBox *mSegmentSizeSpinBox;
    QgsPropertyOverrideButton *mSegmentSizeDDBtn;
    QgsCollapsibleGroupBoxBasic *groupBox_5;
    QGridLayout *gridLayout_4;
    QLabel *mLabelVerticalPlacementLabel;
    QComboBox *mDistanceLabelPlacementComboBox;
    QgsSymbolButton *mFillSymbol1Button;
    QgsAlignmentComboBox *mAlignmentComboBox;
    QgsSymbolButton *mSubdivisionStyleButton;
    QLabel *mDivisionStyleLabel;
    QLabel *mBoxSizeLabel;
    QgsDoubleSpinBox *mBoxSizeSpinBox;
    QgsSymbolButton *mDivisionStyleButton;
    QLabel *mFontLabel;
    QgsSymbolButton *mLineStyleButton;
    QLabel *mFillSymbol2Label;
    QLabel *mSubdivisionStyleLabel;
    QLabel *mLabelBarSpaceLabel;
    QLabel *mFillSymbol1Label;
    QgsDoubleSpinBox *mLabelBarSpaceSpinBox;
    QgsSymbolButton *mFillSymbol2Button;
    QgsFontButton *mFontButton;
    QLabel *mAlignmentLabel;
    QLabel *mLineStyleLabel;

    void setupUi(QWidget *QgsLayoutScaleBarWidgetBase)
    {
        if (QgsLayoutScaleBarWidgetBase->objectName().isEmpty())
            QgsLayoutScaleBarWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutScaleBarWidgetBase"));
        QgsLayoutScaleBarWidgetBase->resize(582, 729);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutScaleBarWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutScaleBarWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutScaleBarWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(QgsLayoutScaleBarWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout->addWidget(label_5);

        scrollArea = new QgsScrollArea(QgsLayoutScaleBarWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 566, 1023));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mMapItemComboBox = new QgsLayoutItemComboBox(groupBox);
        mMapItemComboBox->setObjectName(QString::fromUtf8("mMapItemComboBox"));

        gridLayout->addWidget(mMapItemComboBox, 0, 1, 1, 2);

        mStyleComboBox = new QComboBox(groupBox);
        mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

        gridLayout->addWidget(mStyleComboBox, 1, 1, 1, 2);

        mStyleLabel = new QLabel(groupBox);
        mStyleLabel->setObjectName(QString::fromUtf8("mStyleLabel"));

        gridLayout->addWidget(mStyleLabel, 1, 0, 1, 1);

        mMapLabel = new QLabel(groupBox);
        mMapLabel->setObjectName(QString::fromUtf8("mMapLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMapLabel->sizePolicy().hasHeightForWidth());
        mMapLabel->setSizePolicy(sizePolicy2);
        mMapLabel->setWordWrap(true);

        gridLayout->addWidget(mMapLabel, 0, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox);

        mGroupBoxUnits = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGroupBoxUnits->setObjectName(QString::fromUtf8("mGroupBoxUnits"));
        mGroupBoxUnits->setFocusPolicy(Qt::StrongFocus);
        mGroupBoxUnits->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mGroupBoxUnits->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mGroupBoxUnits);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mUnitLabelLineEdit = new QLineEdit(mGroupBoxUnits);
        mUnitLabelLineEdit->setObjectName(QString::fromUtf8("mUnitLabelLineEdit"));

        gridLayout_2->addWidget(mUnitLabelLineEdit, 2, 1, 1, 1);

        mNumberFormatPushButton = new QPushButton(mGroupBoxUnits);
        mNumberFormatPushButton->setObjectName(QString::fromUtf8("mNumberFormatPushButton"));

        gridLayout_2->addWidget(mNumberFormatPushButton, 3, 1, 1, 1);

        mUnitsComboBox = new QComboBox(mGroupBoxUnits);
        mUnitsComboBox->setObjectName(QString::fromUtf8("mUnitsComboBox"));

        gridLayout_2->addWidget(mUnitsComboBox, 0, 1, 1, 1);

        mMapUnitsPerBarUnitSpinBox = new QgsDoubleSpinBox(mGroupBoxUnits);
        mMapUnitsPerBarUnitSpinBox->setObjectName(QString::fromUtf8("mMapUnitsPerBarUnitSpinBox"));
        mMapUnitsPerBarUnitSpinBox->setDecimals(6);
        mMapUnitsPerBarUnitSpinBox->setMaximum(9999999999999.000000000000000);
        mMapUnitsPerBarUnitSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mMapUnitsPerBarUnitSpinBox, 1, 1, 1, 1);

        mUnitsLabel = new QLabel(mGroupBoxUnits);
        mUnitsLabel->setObjectName(QString::fromUtf8("mUnitsLabel"));

        gridLayout_2->addWidget(mUnitsLabel, 0, 0, 1, 1);

        mUnitLabelLabel_2 = new QLabel(mGroupBoxUnits);
        mUnitLabelLabel_2->setObjectName(QString::fromUtf8("mUnitLabelLabel_2"));
        mUnitLabelLabel_2->setWordWrap(true);

        gridLayout_2->addWidget(mUnitLabelLabel_2, 3, 0, 1, 1);

        mMapUnitsPerBarUnitLabel = new QLabel(mGroupBoxUnits);
        mMapUnitsPerBarUnitLabel->setObjectName(QString::fromUtf8("mMapUnitsPerBarUnitLabel"));
        mMapUnitsPerBarUnitLabel->setWordWrap(false);

        gridLayout_2->addWidget(mMapUnitsPerBarUnitLabel, 1, 0, 1, 1);

        mUnitLabelLabel = new QLabel(mGroupBoxUnits);
        mUnitLabelLabel->setObjectName(QString::fromUtf8("mUnitLabelLabel"));
        mUnitLabelLabel->setWordWrap(true);

        gridLayout_2->addWidget(mUnitLabelLabel, 2, 0, 1, 1);

        label_2 = new QLabel(mGroupBoxUnits);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 4, 0, 1, 1);

        mScaleMethodWidget = new QgsScaleMethodWidget(mGroupBoxUnits);
        mScaleMethodWidget->setObjectName(QString::fromUtf8("mScaleMethodWidget"));
        mScaleMethodWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mScaleMethodWidget, 4, 1, 1, 1);


        mainLayout->addWidget(mGroupBoxUnits);

        mGroupBoxSegments = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGroupBoxSegments->setObjectName(QString::fromUtf8("mGroupBoxSegments"));
        mGroupBoxSegments->setFocusPolicy(Qt::StrongFocus);
        mGroupBoxSegments->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mGroupBoxSegments->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(mGroupBoxSegments);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(mGroupBoxSegments);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 5, 0, 1, 1);

        mSegmentLabel = new QLabel(mGroupBoxSegments);
        mSegmentLabel->setObjectName(QString::fromUtf8("mSegmentLabel"));

        gridLayout_3->addWidget(mSegmentLabel, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mNumberOfSubdivisionsSpinBox = new QgsSpinBox(mGroupBoxSegments);
        mNumberOfSubdivisionsSpinBox->setObjectName(QString::fromUtf8("mNumberOfSubdivisionsSpinBox"));
        mNumberOfSubdivisionsSpinBox->setMinimum(1);

        horizontalLayout_2->addWidget(mNumberOfSubdivisionsSpinBox);

        mRightSegmentSubdivisionsDDBtn = new QgsPropertyOverrideButton(mGroupBoxSegments);
        mRightSegmentSubdivisionsDDBtn->setObjectName(QString::fromUtf8("mRightSegmentSubdivisionsDDBtn"));

        horizontalLayout_2->addWidget(mRightSegmentSubdivisionsDDBtn);


        gridLayout_3->addLayout(horizontalLayout_2, 6, 2, 1, 1);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setSpacing(6);
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        mSegmentsLeftSpinBox = new QgsSpinBox(mGroupBoxSegments);
        mSegmentsLeftSpinBox->setObjectName(QString::fromUtf8("mSegmentsLeftSpinBox"));

        horizontalLayout1->addWidget(mSegmentsLeftSpinBox);

        mSegmentsLeftDDBtn = new QgsPropertyOverrideButton(mGroupBoxSegments);
        mSegmentsLeftDDBtn->setObjectName(QString::fromUtf8("mSegmentsLeftDDBtn"));

        horizontalLayout1->addWidget(mSegmentsLeftDDBtn);


        gridLayout_3->addLayout(horizontalLayout1, 0, 2, 1, 1);

        mFitWidthRadio = new QRadioButton(mGroupBoxSegments);
        mFitWidthRadio->setObjectName(QString::fromUtf8("mFitWidthRadio"));

        gridLayout_3->addWidget(mFitWidthRadio, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mHeightSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        mHeightSpinBox->setMaximum(999.990000000000009);

        horizontalLayout->addWidget(mHeightSpinBox);

        mHeightDDBtn = new QgsPropertyOverrideButton(mGroupBoxSegments);
        mHeightDDBtn->setObjectName(QString::fromUtf8("mHeightDDBtn"));

        horizontalLayout->addWidget(mHeightDDBtn);


        gridLayout_3->addLayout(horizontalLayout, 5, 2, 1, 1);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setSpacing(6);
        horizontalLayout2->setObjectName(QString::fromUtf8("horizontalLayout2"));
        mNumberOfSegmentsSpinBox = new QgsSpinBox(mGroupBoxSegments);
        mNumberOfSegmentsSpinBox->setObjectName(QString::fromUtf8("mNumberOfSegmentsSpinBox"));
        mNumberOfSegmentsSpinBox->setValue(0);

        horizontalLayout2->addWidget(mNumberOfSegmentsSpinBox);

        mSegmentsRightDDBtn = new QgsPropertyOverrideButton(mGroupBoxSegments);
        mSegmentsRightDDBtn->setObjectName(QString::fromUtf8("mSegmentsRightDDBtn"));

        horizontalLayout2->addWidget(mSegmentsRightDDBtn);


        gridLayout_3->addLayout(horizontalLayout2, 1, 2, 1, 1);

        mFixedSizeRadio = new QRadioButton(mGroupBoxSegments);
        mFixedSizeRadio->setObjectName(QString::fromUtf8("mFixedSizeRadio"));
        mFixedSizeRadio->setChecked(true);

        gridLayout_3->addWidget(mFixedSizeRadio, 2, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        mSubdivisionsHeightSpinBox = new QgsDoubleSpinBox(mGroupBoxSegments);
        mSubdivisionsHeightSpinBox->setObjectName(QString::fromUtf8("mSubdivisionsHeightSpinBox"));
        mSubdivisionsHeightSpinBox->setMaximum(999.990000000000009);

        horizontalLayout_3->addWidget(mSubdivisionsHeightSpinBox);

        mSubdivisionHeightDDBtn = new QgsPropertyOverrideButton(mGroupBoxSegments);
        mSubdivisionHeightDDBtn->setObjectName(QString::fromUtf8("mSubdivisionHeightDDBtn"));

        horizontalLayout_3->addWidget(mSubdivisionHeightDDBtn);


        gridLayout_3->addLayout(horizontalLayout_3, 8, 2, 1, 1);

        mSubdivisionsLabel = new QLabel(mGroupBoxSegments);
        mSubdivisionsLabel->setObjectName(QString::fromUtf8("mSubdivisionsLabel"));

        gridLayout_3->addWidget(mSubdivisionsLabel, 6, 0, 1, 1);

        mSubdivisionsHeightLabel = new QLabel(mGroupBoxSegments);
        mSubdivisionsHeightLabel->setObjectName(QString::fromUtf8("mSubdivisionsHeightLabel"));

        gridLayout_3->addWidget(mSubdivisionsHeightLabel, 8, 0, 1, 1);

        mMinWidthWidget = new QWidget(mGroupBoxSegments);
        mMinWidthWidget->setObjectName(QString::fromUtf8("mMinWidthWidget"));
        horizontalLayout4 = new QHBoxLayout(mMinWidthWidget);
        horizontalLayout4->setSpacing(6);
        horizontalLayout4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout4->setObjectName(QString::fromUtf8("horizontalLayout4"));
        horizontalLayout4->setContentsMargins(0, 0, 0, 0);
        mMinWidthSpinBox = new QgsDoubleSpinBox(mMinWidthWidget);
        mMinWidthSpinBox->setObjectName(QString::fromUtf8("mMinWidthSpinBox"));
        mMinWidthSpinBox->setEnabled(false);
        mMinWidthSpinBox->setMaximum(999.990000000000009);

        horizontalLayout4->addWidget(mMinWidthSpinBox);

        mMinWidthDDBtn = new QgsPropertyOverrideButton(mMinWidthWidget);
        mMinWidthDDBtn->setObjectName(QString::fromUtf8("mMinWidthDDBtn"));

        horizontalLayout4->addWidget(mMinWidthDDBtn);


        gridLayout_3->addWidget(mMinWidthWidget, 3, 2, 1, 1);

        mMaxWidthWidget = new QWidget(mGroupBoxSegments);
        mMaxWidthWidget->setObjectName(QString::fromUtf8("mMaxWidthWidget"));
        horizontalLayout5 = new QHBoxLayout(mMaxWidthWidget);
        horizontalLayout5->setSpacing(6);
        horizontalLayout5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout5->setObjectName(QString::fromUtf8("horizontalLayout5"));
        horizontalLayout5->setContentsMargins(0, 0, 0, 0);
        mMaxWidthSpinBox = new QgsDoubleSpinBox(mMaxWidthWidget);
        mMaxWidthSpinBox->setObjectName(QString::fromUtf8("mMaxWidthSpinBox"));
        mMaxWidthSpinBox->setEnabled(false);
        mMaxWidthSpinBox->setMaximum(999.990000000000009);

        horizontalLayout5->addWidget(mMaxWidthSpinBox);

        mMaxWidthDDBtn = new QgsPropertyOverrideButton(mMaxWidthWidget);
        mMaxWidthDDBtn->setObjectName(QString::fromUtf8("mMaxWidthDDBtn"));

        horizontalLayout5->addWidget(mMaxWidthDDBtn);


        gridLayout_3->addWidget(mMaxWidthWidget, 4, 2, 1, 1);

        mSegmentSizeWidget = new QWidget(mGroupBoxSegments);
        mSegmentSizeWidget->setObjectName(QString::fromUtf8("mSegmentSizeWidget"));
        horizontalLayout3 = new QHBoxLayout(mSegmentSizeWidget);
        horizontalLayout3->setSpacing(6);
        horizontalLayout3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout3->setObjectName(QString::fromUtf8("horizontalLayout3"));
        horizontalLayout3->setContentsMargins(0, 0, 0, 0);
        mSegmentSizeSpinBox = new QgsDoubleSpinBox(mSegmentSizeWidget);
        mSegmentSizeSpinBox->setObjectName(QString::fromUtf8("mSegmentSizeSpinBox"));
        mSegmentSizeSpinBox->setDecimals(6);
        mSegmentSizeSpinBox->setMaximum(9999999999999.000000000000000);
        mSegmentSizeSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout3->addWidget(mSegmentSizeSpinBox);

        mSegmentSizeDDBtn = new QgsPropertyOverrideButton(mSegmentSizeWidget);
        mSegmentSizeDDBtn->setObjectName(QString::fromUtf8("mSegmentSizeDDBtn"));

        horizontalLayout3->addWidget(mSegmentSizeDDBtn);


        gridLayout_3->addWidget(mSegmentSizeWidget, 2, 2, 1, 1);


        mainLayout->addWidget(mGroupBoxSegments);

        groupBox_5 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFocusPolicy(Qt::StrongFocus);
        groupBox_5->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_5->setProperty("collapsed", QVariant(true));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mLabelVerticalPlacementLabel = new QLabel(groupBox_5);
        mLabelVerticalPlacementLabel->setObjectName(QString::fromUtf8("mLabelVerticalPlacementLabel"));

        gridLayout_4->addWidget(mLabelVerticalPlacementLabel, 3, 0, 1, 3);

        mDistanceLabelPlacementComboBox = new QComboBox(groupBox_5);
        mDistanceLabelPlacementComboBox->setObjectName(QString::fromUtf8("mDistanceLabelPlacementComboBox"));

        gridLayout_4->addWidget(mDistanceLabelPlacementComboBox, 4, 0, 1, 3);

        mFillSymbol1Button = new QgsSymbolButton(groupBox_5);
        mFillSymbol1Button->setObjectName(QString::fromUtf8("mFillSymbol1Button"));
        sizePolicy2.setHeightForWidth(mFillSymbol1Button->sizePolicy().hasHeightForWidth());
        mFillSymbol1Button->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mFillSymbol1Button, 5, 1, 1, 2);

        mAlignmentComboBox = new QgsAlignmentComboBox(groupBox_5);
        mAlignmentComboBox->setObjectName(QString::fromUtf8("mAlignmentComboBox"));

        gridLayout_4->addWidget(mAlignmentComboBox, 11, 1, 1, 2);

        mSubdivisionStyleButton = new QgsSymbolButton(groupBox_5);
        mSubdivisionStyleButton->setObjectName(QString::fromUtf8("mSubdivisionStyleButton"));
        sizePolicy2.setHeightForWidth(mSubdivisionStyleButton->sizePolicy().hasHeightForWidth());
        mSubdivisionStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mSubdivisionStyleButton, 10, 1, 1, 2);

        mDivisionStyleLabel = new QLabel(groupBox_5);
        mDivisionStyleLabel->setObjectName(QString::fromUtf8("mDivisionStyleLabel"));

        gridLayout_4->addWidget(mDivisionStyleLabel, 9, 0, 1, 1);

        mBoxSizeLabel = new QLabel(groupBox_5);
        mBoxSizeLabel->setObjectName(QString::fromUtf8("mBoxSizeLabel"));

        gridLayout_4->addWidget(mBoxSizeLabel, 1, 0, 1, 1);

        mBoxSizeSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mBoxSizeSpinBox->setObjectName(QString::fromUtf8("mBoxSizeSpinBox"));

        gridLayout_4->addWidget(mBoxSizeSpinBox, 1, 1, 1, 2);

        mDivisionStyleButton = new QgsSymbolButton(groupBox_5);
        mDivisionStyleButton->setObjectName(QString::fromUtf8("mDivisionStyleButton"));
        sizePolicy2.setHeightForWidth(mDivisionStyleButton->sizePolicy().hasHeightForWidth());
        mDivisionStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mDivisionStyleButton, 9, 1, 1, 2);

        mFontLabel = new QLabel(groupBox_5);
        mFontLabel->setObjectName(QString::fromUtf8("mFontLabel"));

        gridLayout_4->addWidget(mFontLabel, 12, 0, 1, 1);

        mLineStyleButton = new QgsSymbolButton(groupBox_5);
        mLineStyleButton->setObjectName(QString::fromUtf8("mLineStyleButton"));
        sizePolicy2.setHeightForWidth(mLineStyleButton->sizePolicy().hasHeightForWidth());
        mLineStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mLineStyleButton, 7, 1, 1, 2);

        mFillSymbol2Label = new QLabel(groupBox_5);
        mFillSymbol2Label->setObjectName(QString::fromUtf8("mFillSymbol2Label"));

        gridLayout_4->addWidget(mFillSymbol2Label, 6, 0, 1, 1);

        mSubdivisionStyleLabel = new QLabel(groupBox_5);
        mSubdivisionStyleLabel->setObjectName(QString::fromUtf8("mSubdivisionStyleLabel"));

        gridLayout_4->addWidget(mSubdivisionStyleLabel, 10, 0, 1, 1);

        mLabelBarSpaceLabel = new QLabel(groupBox_5);
        mLabelBarSpaceLabel->setObjectName(QString::fromUtf8("mLabelBarSpaceLabel"));

        gridLayout_4->addWidget(mLabelBarSpaceLabel, 2, 0, 1, 1);

        mFillSymbol1Label = new QLabel(groupBox_5);
        mFillSymbol1Label->setObjectName(QString::fromUtf8("mFillSymbol1Label"));

        gridLayout_4->addWidget(mFillSymbol1Label, 5, 0, 1, 1);

        mLabelBarSpaceSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mLabelBarSpaceSpinBox->setObjectName(QString::fromUtf8("mLabelBarSpaceSpinBox"));

        gridLayout_4->addWidget(mLabelBarSpaceSpinBox, 2, 1, 1, 2);

        mFillSymbol2Button = new QgsSymbolButton(groupBox_5);
        mFillSymbol2Button->setObjectName(QString::fromUtf8("mFillSymbol2Button"));
        sizePolicy2.setHeightForWidth(mFillSymbol2Button->sizePolicy().hasHeightForWidth());
        mFillSymbol2Button->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mFillSymbol2Button, 6, 1, 1, 2);

        mFontButton = new QgsFontButton(groupBox_5);
        mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(mFontButton, 12, 1, 1, 2);

        mAlignmentLabel = new QLabel(groupBox_5);
        mAlignmentLabel->setObjectName(QString::fromUtf8("mAlignmentLabel"));

        gridLayout_4->addWidget(mAlignmentLabel, 11, 0, 1, 1);

        mLineStyleLabel = new QLabel(groupBox_5);
        mLineStyleLabel->setObjectName(QString::fromUtf8("mLineStyleLabel"));

        gridLayout_4->addWidget(mLineStyleLabel, 7, 0, 1, 1);


        mainLayout->addWidget(groupBox_5);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        mStyleLabel->setBuddy(mStyleComboBox);
        mMapLabel->setBuddy(mMapItemComboBox);
        mUnitLabelLabel_2->setBuddy(mUnitLabelLineEdit);
        mMapUnitsPerBarUnitLabel->setBuddy(mMapUnitsPerBarUnitSpinBox);
        mUnitLabelLabel->setBuddy(mUnitLabelLineEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mMapItemComboBox);
        QWidget::setTabOrder(mMapItemComboBox, mStyleComboBox);
        QWidget::setTabOrder(mStyleComboBox, mGroupBoxUnits);
        QWidget::setTabOrder(mGroupBoxUnits, mUnitsComboBox);
        QWidget::setTabOrder(mUnitsComboBox, mMapUnitsPerBarUnitSpinBox);
        QWidget::setTabOrder(mMapUnitsPerBarUnitSpinBox, mUnitLabelLineEdit);
        QWidget::setTabOrder(mUnitLabelLineEdit, mNumberFormatPushButton);
        QWidget::setTabOrder(mNumberFormatPushButton, mScaleMethodWidget);
        QWidget::setTabOrder(mScaleMethodWidget, mGroupBoxSegments);
        QWidget::setTabOrder(mGroupBoxSegments, mSegmentsLeftSpinBox);
        QWidget::setTabOrder(mSegmentsLeftSpinBox, mSegmentsLeftDDBtn);
        QWidget::setTabOrder(mSegmentsLeftDDBtn, mNumberOfSegmentsSpinBox);
        QWidget::setTabOrder(mNumberOfSegmentsSpinBox, mSegmentsRightDDBtn);
        QWidget::setTabOrder(mSegmentsRightDDBtn, mFixedSizeRadio);
        QWidget::setTabOrder(mFixedSizeRadio, mSegmentSizeSpinBox);
        QWidget::setTabOrder(mSegmentSizeSpinBox, mSegmentSizeDDBtn);
        QWidget::setTabOrder(mSegmentSizeDDBtn, mFitWidthRadio);
        QWidget::setTabOrder(mFitWidthRadio, mMinWidthSpinBox);
        QWidget::setTabOrder(mMinWidthSpinBox, mMinWidthDDBtn);
        QWidget::setTabOrder(mMinWidthDDBtn, mMaxWidthSpinBox);
        QWidget::setTabOrder(mMaxWidthSpinBox, mMaxWidthDDBtn);
        QWidget::setTabOrder(mMaxWidthDDBtn, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mNumberOfSubdivisionsSpinBox);
        QWidget::setTabOrder(mNumberOfSubdivisionsSpinBox, mRightSegmentSubdivisionsDDBtn);
        QWidget::setTabOrder(mRightSegmentSubdivisionsDDBtn, mSubdivisionsHeightSpinBox);
        QWidget::setTabOrder(mSubdivisionsHeightSpinBox, mSubdivisionHeightDDBtn);
        QWidget::setTabOrder(mSubdivisionHeightDDBtn, groupBox_5);
        QWidget::setTabOrder(groupBox_5, mBoxSizeSpinBox);
        QWidget::setTabOrder(mBoxSizeSpinBox, mLabelBarSpaceSpinBox);
        QWidget::setTabOrder(mLabelBarSpaceSpinBox, mDistanceLabelPlacementComboBox);
        QWidget::setTabOrder(mDistanceLabelPlacementComboBox, mFillSymbol1Button);
        QWidget::setTabOrder(mFillSymbol1Button, mFillSymbol2Button);
        QWidget::setTabOrder(mFillSymbol2Button, mLineStyleButton);
        QWidget::setTabOrder(mLineStyleButton, mDivisionStyleButton);
        QWidget::setTabOrder(mDivisionStyleButton, mSubdivisionStyleButton);
        QWidget::setTabOrder(mSubdivisionStyleButton, mAlignmentComboBox);
        QWidget::setTabOrder(mAlignmentComboBox, mFontButton);

        retranslateUi(QgsLayoutScaleBarWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutScaleBarWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutScaleBarWidgetBase)
    {
        QgsLayoutScaleBarWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Scalebar Options", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Scalebar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Main Properties", nullptr));
        mStyleLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "St&yle", nullptr));
        mMapLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "&Map", nullptr));
        mGroupBoxUnits->setTitle(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Units", nullptr));
#if QT_CONFIG(tooltip)
        mUnitLabelLineEdit->setToolTip(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Text used for labeling the scalebar units, e.g., \"m\" or \"km\". This should be matched to reflect the multiplier above.", nullptr));
#endif // QT_CONFIG(tooltip)
        mNumberFormatPushButton->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Customize", nullptr));
#if QT_CONFIG(tooltip)
        mUnitsComboBox->setToolTip(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Specifies the underlying units used for scalebar calculations, e.g., \"meters\" or \"feet\"", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mMapUnitsPerBarUnitSpinBox->setToolTip(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Specifies how many scalebar units per labeled unit. For example, if your scalebar units are set to \"meters\", a multiplier of 1000 will result in the scalebar labels in kilometers.", nullptr));
#endif // QT_CONFIG(tooltip)
        mUnitsLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Scalebar units", nullptr));
        mUnitLabelLabel_2->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Number format", nullptr));
        mMapUnitsPerBarUnitLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Label unit multiplier", nullptr));
        mUnitLabelLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "&Label for units", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Method", nullptr));
        mGroupBoxSegments->setTitle(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Segments", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Height", nullptr));
        mSegmentLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Segments", nullptr));
        mNumberOfSubdivisionsSpinBox->setSuffix(QString());
        mNumberOfSubdivisionsSpinBox->setPrefix(QString());
        mRightSegmentSubdivisionsDDBtn->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", nullptr));
        mSegmentsLeftSpinBox->setSuffix(QString());
        mSegmentsLeftSpinBox->setPrefix(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "left ", nullptr));
        mSegmentsLeftDDBtn->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", nullptr));
        mFitWidthRadio->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Fit segment width", nullptr));
        mHeightSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", nullptr));
        mHeightDDBtn->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", nullptr));
        mNumberOfSegmentsSpinBox->setSuffix(QString());
        mNumberOfSegmentsSpinBox->setPrefix(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "right ", nullptr));
        mSegmentsRightDDBtn->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", nullptr));
        mFixedSizeRadio->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Fi&xed width", nullptr));
        mSubdivisionsHeightSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", nullptr));
        mSubdivisionHeightDDBtn->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", nullptr));
        mSubdivisionsLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Right segments subdivisions", nullptr));
        mSubdivisionsHeightLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Subdivisions height", nullptr));
        mMinWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", nullptr));
        mMinWidthDDBtn->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", nullptr));
        mMaxWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", nullptr));
        mMaxWidthDDBtn->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mSegmentSizeSpinBox->setToolTip(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Number of scalebar units per scalebar segment", nullptr));
#endif // QT_CONFIG(tooltip)
        mSegmentSizeSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", " units", nullptr));
        mSegmentSizeDDBtn->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "\342\200\246", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Appearance", nullptr));
        mLabelVerticalPlacementLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Distance label placement", nullptr));
        mFillSymbol1Button->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Fill Style\342\200\246", nullptr));
        mSubdivisionStyleButton->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Subdivision Style\342\200\246", nullptr));
        mDivisionStyleLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Division style", nullptr));
        mBoxSizeLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Box margin", nullptr));
        mBoxSizeSpinBox->setPrefix(QString());
        mBoxSizeSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", nullptr));
        mDivisionStyleButton->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Division Style\342\200\246", nullptr));
        mFontLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Font", nullptr));
        mLineStyleButton->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Line Style\342\200\246", nullptr));
        mFillSymbol2Label->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Secondary fill", nullptr));
        mSubdivisionStyleLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Subdivision style", nullptr));
        mLabelBarSpaceLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Label margin", nullptr));
        mFillSymbol1Label->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Primary fill", nullptr));
        mLabelBarSpaceSpinBox->setPrefix(QString());
        mLabelBarSpaceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", " mm", nullptr));
        mFillSymbol2Button->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Fill Style\342\200\246", nullptr));
        mFontButton->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Font", nullptr));
        mAlignmentLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Alignment", nullptr));
        mLineStyleLabel->setText(QCoreApplication::translate("QgsLayoutScaleBarWidgetBase", "Line style", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutScaleBarWidgetBase: public Ui_QgsLayoutScaleBarWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTSCALEBARWIDGETBASE_H
