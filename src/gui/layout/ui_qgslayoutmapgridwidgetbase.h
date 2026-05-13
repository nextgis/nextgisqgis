/********************************************************************************
** Form generated from reading UI file 'qgslayoutmapgridwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMAPGRIDWIDGETBASE_H
#define UI_QGSLAYOUTMAPGRIDWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsblendmodecombobox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsprojectionselectionwidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMapGridWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mEnabledCheckBox;
    QgsPropertyOverrideButton *mEnabledDDBtn;
    QSpacerItem *horizontalSpacer_2;
    QgsCollapsibleGroupBoxBasic *mGridCheckBox;
    QGridLayout *gridLayout_6;
    QgsSymbolButton *mGridLineStyleButton;
    QLabel *mLineStyleLabel;
    QgsProjectionSelectionWidget *mMapGridCrsSelector;
    QgsPropertyOverrideButton *mCrossWidthDDBtn;
    QLabel *mIntervalXLabel_2;
    QLabel *mMapGridCRSLabel;
    QStackedWidget *mIntervalStackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QgsDoubleSpinBox *mIntervalXSpinBox;
    QgsPropertyOverrideButton *mIntervalYDDBtn;
    QgsDoubleSpinBox *mIntervalYSpinBox;
    QgsPropertyOverrideButton *mIntervalXDDBtn;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *mMinWidthSpinBox;
    QgsDoubleSpinBox *mMaxWidthSpinBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *mGridTypeLabel_2;
    QLabel *mGridBlendLabel;
    QLabel *mOffsetXLabel_2;
    QWidget *widget;
    QComboBox *mMapGridUnitComboBox;
    QGridLayout *gridLayout_5;
    QgsPropertyOverrideButton *mOffsetYDDBtn;
    QgsPropertyOverrideButton *mOffsetXDDBtn;
    QgsDoubleSpinBox *mOffsetYSpinBox;
    QgsDoubleSpinBox *mOffsetXSpinBox;
    QComboBox *mGridTypeComboBox;
    QLabel *mCrossWidthLabel;
    QgsDoubleSpinBox *mCrossWidthSpinBox;
    QgsBlendModeComboBox *mGridBlendComboBox;
    QLabel *mMarkerStyleLabel;
    QWidget *mMarkerStyleFrame;
    QHBoxLayout *horizontalLayout_11;
    QgsSymbolButton *mGridMarkerStyleButton;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBoxBasic *mGridFrameGroupBox;
    QGridLayout *gridLayout_3;
    QComboBox *mFrameStyleComboBox;
    QLabel *mFrameStyleLabel_2;
    QgsDoubleSpinBox *mGridFrameMarginSpinBox;
    QgsDoubleSpinBox *mFrameWidthSpinBox;
    QgsPropertyOverrideButton *mFrameMarginDDBtn;
    QLabel *mFrameFillLabel;
    QLabel *mFrameWidthLabel;
    QgsPropertyOverrideButton *mFrameSizeDDBtn;
    QLabel *mFramePenLabel;
    QGridLayout *gridLayout_4;
    QCheckBox *mCheckGridRightSide;
    QCheckBox *mCheckGridLeftSide;
    QCheckBox *mCheckGridBottomSide;
    QCheckBox *mCheckGridTopSide;
    QgsDoubleSpinBox *mGridFramePenSizeSpinBox;
    QLabel *mFrameMarginLabel;
    QgsPropertyOverrideButton *mFrameLineThicknessDDBtn;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *mFrameDivisionsLeftComboBox;
    QgsPropertyOverrideButton *mFrameDivisionsLeftDDBtn;
    QLabel *mLeftDivisionsLabel;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *mFrameDivisionsRightComboBox;
    QgsPropertyOverrideButton *mFrameDivisionsRightDDBtn;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *mFrameDivisionsTopComboBox;
    QgsPropertyOverrideButton *mFrameDivisionsTopDDBtn;
    QLabel *mRightDivisionsLabel;
    QLabel *mTopDivisionsLabel;
    QLabel *mBottomDivisionsLabel;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *mFrameDivisionsBottomComboBox;
    QgsPropertyOverrideButton *mFrameDivisionsBottomDDBtn;
    QgsColorButton *mGridFrameFill1ColorButton;
    QgsColorButton *mGridFrameFill2ColorButton;
    QgsColorButton *mGridFramePenColorButton;
    QGroupBox *mRotatedTicksGroupBox;
    QFormLayout *formLayout;
    QLabel *label_6;
    QComboBox *mRotatedTicksLengthModeComboBox;
    QLabel *label_7;
    QgsDoubleSpinBox *mRotatedTicksThresholdSpinBox;
    QLabel *label_annot_corner;
    QgsDoubleSpinBox *mRotatedTicksMarginToCornerSpinBox;
    QgsCollapsibleGroupBoxBasic *mDrawAnnotationGroupBox;
    QGridLayout *gridLayout;
    QLabel *mAnnotationFormatLabel;
    QComboBox *mAnnotationDirectionComboBoxLeft;
    QComboBox *mAnnotationPositionLeftComboBox;
    QComboBox *mAnnotationPositionRightComboBox;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *mAnnotationFormatComboBox;
    QToolButton *mAnnotationFormatButton;
    QComboBox *mAnnotationDirectionComboBoxRight;
    QComboBox *mAnnotationPositionTopComboBox;
    QComboBox *mAnnotationPositionBottomComboBox;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mAnnotationDisplayLeftComboBox;
    QgsPropertyOverrideButton *mAnnotationDisplayLeftDDBtn;
    QgsDoubleSpinBox *mDistanceToMapFrameSpinBox;
    QgsPropertyOverrideButton *mLabelDistDDBtn;
    QgsFontButton *mAnnotationFontButton;
    QLabel *mAnnotationPositionLabelLeft;
    QComboBox *mAnnotationDirectionComboBoxBottom;
    QLabel *mDistanceToMapFrameLabel;
    QLabel *mCoordinatePrecisionLabel;
    QComboBox *mAnnotationDirectionComboBoxTop;
    QgsSpinBox *mCoordinatePrecisionSpinBox;
    QGroupBox *mRotatedAnnotationsGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QComboBox *mRotatedAnnotationsLengthModeComboBox;
    QLabel *label_9;
    QgsDoubleSpinBox *mRotatedAnnotationsThresholdSpinBox;
    QLabel *label_12;
    QgsDoubleSpinBox *mRotatedAnnotationsMarginToCornerSpinBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *mAnnotationDisplayRightComboBox;
    QgsPropertyOverrideButton *mAnnotationDisplayRightDDBtn;
    QLabel *mAnnotationPositionLabelRight;
    QLabel *mAnnotationPositionLabelTop;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *mAnnotationDisplayTopComboBox;
    QgsPropertyOverrideButton *mAnnotationDisplayTopDDBtn;
    QLabel *mAnnotationPositionLabelBottom;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *mAnnotationDisplayBottomComboBox;
    QgsPropertyOverrideButton *mAnnotationDisplayBottomDDBtn;

    void setupUi(QWidget *QgsLayoutMapGridWidgetBase)
    {
        if (QgsLayoutMapGridWidgetBase->objectName().isEmpty())
            QgsLayoutMapGridWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutMapGridWidgetBase"));
        QgsLayoutMapGridWidgetBase->resize(507, 1205);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutMapGridWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutMapGridWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutMapGridWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsLayoutMapGridWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 493, 1675));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(0);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, -1, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mEnabledCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mEnabledCheckBox->setObjectName(QString::fromUtf8("mEnabledCheckBox"));

        horizontalLayout_2->addWidget(mEnabledCheckBox);

        mEnabledDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents);
        mEnabledDDBtn->setObjectName(QString::fromUtf8("mEnabledDDBtn"));

        horizontalLayout_2->addWidget(mEnabledDDBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        mainLayout->addLayout(horizontalLayout_2);

        mGridCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGridCheckBox->setObjectName(QString::fromUtf8("mGridCheckBox"));
        gridLayout_6 = new QGridLayout(mGridCheckBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mGridLineStyleButton = new QgsSymbolButton(mGridCheckBox);
        mGridLineStyleButton->setObjectName(QString::fromUtf8("mGridLineStyleButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mGridLineStyleButton->sizePolicy().hasHeightForWidth());
        mGridLineStyleButton->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(mGridLineStyleButton, 6, 1, 1, 2);

        mLineStyleLabel = new QLabel(mGridCheckBox);
        mLineStyleLabel->setObjectName(QString::fromUtf8("mLineStyleLabel"));
        mLineStyleLabel->setWordWrap(false);

        gridLayout_6->addWidget(mLineStyleLabel, 6, 0, 1, 1);

        mMapGridCrsSelector = new QgsProjectionSelectionWidget(mGridCheckBox);
        mMapGridCrsSelector->setObjectName(QString::fromUtf8("mMapGridCrsSelector"));
        mMapGridCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_6->addWidget(mMapGridCrsSelector, 1, 1, 1, 2);

        mCrossWidthDDBtn = new QgsPropertyOverrideButton(mGridCheckBox);
        mCrossWidthDDBtn->setObjectName(QString::fromUtf8("mCrossWidthDDBtn"));

        gridLayout_6->addWidget(mCrossWidthDDBtn, 5, 2, 1, 1);

        mIntervalXLabel_2 = new QLabel(mGridCheckBox);
        mIntervalXLabel_2->setObjectName(QString::fromUtf8("mIntervalXLabel_2"));
        mIntervalXLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mIntervalXLabel_2, 2, 0, 1, 1);

        mMapGridCRSLabel = new QLabel(mGridCheckBox);
        mMapGridCRSLabel->setObjectName(QString::fromUtf8("mMapGridCRSLabel"));

        gridLayout_6->addWidget(mMapGridCRSLabel, 1, 0, 1, 1);

        mIntervalStackedWidget = new QStackedWidget(mGridCheckBox);
        mIntervalStackedWidget->setObjectName(QString::fromUtf8("mIntervalStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(10, 0, 0, 0);
        mIntervalXSpinBox = new QgsDoubleSpinBox(page);
        mIntervalXSpinBox->setObjectName(QString::fromUtf8("mIntervalXSpinBox"));
        mIntervalXSpinBox->setDecimals(12);
        mIntervalXSpinBox->setMaximum(10000000000000.000000000000000);
        mIntervalXSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_7->addWidget(mIntervalXSpinBox, 0, 1, 1, 1);

        mIntervalYDDBtn = new QgsPropertyOverrideButton(page);
        mIntervalYDDBtn->setObjectName(QString::fromUtf8("mIntervalYDDBtn"));

        gridLayout_7->addWidget(mIntervalYDDBtn, 1, 2, 1, 1);

        mIntervalYSpinBox = new QgsDoubleSpinBox(page);
        mIntervalYSpinBox->setObjectName(QString::fromUtf8("mIntervalYSpinBox"));
        mIntervalYSpinBox->setDecimals(12);
        mIntervalYSpinBox->setMaximum(10000000000000.000000000000000);

        gridLayout_7->addWidget(mIntervalYSpinBox, 1, 1, 1, 1);

        mIntervalXDDBtn = new QgsPropertyOverrideButton(page);
        mIntervalXDDBtn->setObjectName(QString::fromUtf8("mIntervalXDDBtn"));

        gridLayout_7->addWidget(mIntervalXDDBtn, 0, 2, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_7->addWidget(label_3, 1, 0, 1, 1);

        gridLayout_7->setColumnStretch(1, 1);
        mIntervalStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, 0, 0, 0);
        mMinWidthSpinBox = new QgsDoubleSpinBox(page_2);
        mMinWidthSpinBox->setObjectName(QString::fromUtf8("mMinWidthSpinBox"));
        mMinWidthSpinBox->setEnabled(true);
        mMinWidthSpinBox->setMaximum(999.990000000000009);

        gridLayout_2->addWidget(mMinWidthSpinBox, 0, 1, 1, 1);

        mMaxWidthSpinBox = new QgsDoubleSpinBox(page_2);
        mMaxWidthSpinBox->setObjectName(QString::fromUtf8("mMaxWidthSpinBox"));
        mMaxWidthSpinBox->setEnabled(true);
        mMaxWidthSpinBox->setMaximum(999.990000000000009);

        gridLayout_2->addWidget(mMaxWidthSpinBox, 1, 1, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        mIntervalStackedWidget->addWidget(page_2);

        gridLayout_6->addWidget(mIntervalStackedWidget, 3, 0, 1, 3);

        mGridTypeLabel_2 = new QLabel(mGridCheckBox);
        mGridTypeLabel_2->setObjectName(QString::fromUtf8("mGridTypeLabel_2"));
        mGridTypeLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mGridTypeLabel_2, 0, 0, 1, 1);

        mGridBlendLabel = new QLabel(mGridCheckBox);
        mGridBlendLabel->setObjectName(QString::fromUtf8("mGridBlendLabel"));

        gridLayout_6->addWidget(mGridBlendLabel, 10, 0, 1, 1);

        mOffsetXLabel_2 = new QLabel(mGridCheckBox);
        mOffsetXLabel_2->setObjectName(QString::fromUtf8("mOffsetXLabel_2"));
        mOffsetXLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mOffsetXLabel_2, 4, 0, 1, 1);

        widget = new QWidget(mGridCheckBox);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_6->addWidget(widget, 7, 1, 1, 1);

        mMapGridUnitComboBox = new QComboBox(mGridCheckBox);
        mMapGridUnitComboBox->setObjectName(QString::fromUtf8("mMapGridUnitComboBox"));

        gridLayout_6->addWidget(mMapGridUnitComboBox, 2, 1, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mOffsetYDDBtn = new QgsPropertyOverrideButton(mGridCheckBox);
        mOffsetYDDBtn->setObjectName(QString::fromUtf8("mOffsetYDDBtn"));

        gridLayout_5->addWidget(mOffsetYDDBtn, 2, 1, 1, 1);

        mOffsetXDDBtn = new QgsPropertyOverrideButton(mGridCheckBox);
        mOffsetXDDBtn->setObjectName(QString::fromUtf8("mOffsetXDDBtn"));

        gridLayout_5->addWidget(mOffsetXDDBtn, 1, 1, 1, 1);

        mOffsetYSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mOffsetYSpinBox->setObjectName(QString::fromUtf8("mOffsetYSpinBox"));
        mOffsetYSpinBox->setDecimals(12);
        mOffsetYSpinBox->setMinimum(-10000000000000.000000000000000);
        mOffsetYSpinBox->setMaximum(10000000000000.000000000000000);

        gridLayout_5->addWidget(mOffsetYSpinBox, 2, 0, 1, 1);

        mOffsetXSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mOffsetXSpinBox->setObjectName(QString::fromUtf8("mOffsetXSpinBox"));
        mOffsetXSpinBox->setDecimals(12);
        mOffsetXSpinBox->setMinimum(-10000000000000.000000000000000);
        mOffsetXSpinBox->setMaximum(10000000000000.000000000000000);

        gridLayout_5->addWidget(mOffsetXSpinBox, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 4, 1, 1, 2);

        mGridTypeComboBox = new QComboBox(mGridCheckBox);
        mGridTypeComboBox->setObjectName(QString::fromUtf8("mGridTypeComboBox"));

        gridLayout_6->addWidget(mGridTypeComboBox, 0, 1, 1, 2);

        mCrossWidthLabel = new QLabel(mGridCheckBox);
        mCrossWidthLabel->setObjectName(QString::fromUtf8("mCrossWidthLabel"));
        mCrossWidthLabel->setWordWrap(false);

        gridLayout_6->addWidget(mCrossWidthLabel, 5, 0, 1, 1);

        mCrossWidthSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mCrossWidthSpinBox->setObjectName(QString::fromUtf8("mCrossWidthSpinBox"));
        mCrossWidthSpinBox->setDecimals(2);
        mCrossWidthSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_6->addWidget(mCrossWidthSpinBox, 5, 1, 1, 1);

        mGridBlendComboBox = new QgsBlendModeComboBox(mGridCheckBox);
        mGridBlendComboBox->setObjectName(QString::fromUtf8("mGridBlendComboBox"));

        gridLayout_6->addWidget(mGridBlendComboBox, 10, 1, 1, 2);

        mMarkerStyleLabel = new QLabel(mGridCheckBox);
        mMarkerStyleLabel->setObjectName(QString::fromUtf8("mMarkerStyleLabel"));
        mMarkerStyleLabel->setWordWrap(false);

        gridLayout_6->addWidget(mMarkerStyleLabel, 9, 0, 1, 1);

        mMarkerStyleFrame = new QWidget(mGridCheckBox);
        mMarkerStyleFrame->setObjectName(QString::fromUtf8("mMarkerStyleFrame"));
        horizontalLayout_11 = new QHBoxLayout(mMarkerStyleFrame);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        mGridMarkerStyleButton = new QgsSymbolButton(mMarkerStyleFrame);
        mGridMarkerStyleButton->setObjectName(QString::fromUtf8("mGridMarkerStyleButton"));
        sizePolicy2.setHeightForWidth(mGridMarkerStyleButton->sizePolicy().hasHeightForWidth());
        mGridMarkerStyleButton->setSizePolicy(sizePolicy2);

        horizontalLayout_11->addWidget(mGridMarkerStyleButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);


        gridLayout_6->addWidget(mMarkerStyleFrame, 9, 1, 1, 2);


        mainLayout->addWidget(mGridCheckBox);

        mGridFrameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGridFrameGroupBox->setObjectName(QString::fromUtf8("mGridFrameGroupBox"));
        mGridFrameGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGridFrameGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composermapgrid")));
        gridLayout_3 = new QGridLayout(mGridFrameGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mFrameStyleComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameStyleComboBox->setObjectName(QString::fromUtf8("mFrameStyleComboBox"));

        gridLayout_3->addWidget(mFrameStyleComboBox, 1, 1, 1, 4);

        mFrameStyleLabel_2 = new QLabel(mGridFrameGroupBox);
        mFrameStyleLabel_2->setObjectName(QString::fromUtf8("mFrameStyleLabel_2"));
        mFrameStyleLabel_2->setWordWrap(false);

        gridLayout_3->addWidget(mFrameStyleLabel_2, 1, 0, 1, 1);

        mGridFrameMarginSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mGridFrameMarginSpinBox->setObjectName(QString::fromUtf8("mGridFrameMarginSpinBox"));
        mGridFrameMarginSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mGridFrameMarginSpinBox, 5, 1, 1, 3);

        mFrameWidthSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mFrameWidthSpinBox->setObjectName(QString::fromUtf8("mFrameWidthSpinBox"));
        mFrameWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mFrameWidthSpinBox, 3, 1, 1, 3);

        mFrameMarginDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameMarginDDBtn->setObjectName(QString::fromUtf8("mFrameMarginDDBtn"));

        gridLayout_3->addWidget(mFrameMarginDDBtn, 5, 4, 1, 1);

        mFrameFillLabel = new QLabel(mGridFrameGroupBox);
        mFrameFillLabel->setObjectName(QString::fromUtf8("mFrameFillLabel"));

        gridLayout_3->addWidget(mFrameFillLabel, 8, 0, 1, 1);

        mFrameWidthLabel = new QLabel(mGridFrameGroupBox);
        mFrameWidthLabel->setObjectName(QString::fromUtf8("mFrameWidthLabel"));
        mFrameWidthLabel->setWordWrap(false);

        gridLayout_3->addWidget(mFrameWidthLabel, 3, 0, 1, 1);

        mFrameSizeDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameSizeDDBtn->setObjectName(QString::fromUtf8("mFrameSizeDDBtn"));

        gridLayout_3->addWidget(mFrameSizeDDBtn, 3, 4, 1, 1);

        mFramePenLabel = new QLabel(mGridFrameGroupBox);
        mFramePenLabel->setObjectName(QString::fromUtf8("mFramePenLabel"));

        gridLayout_3->addWidget(mFramePenLabel, 7, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mCheckGridRightSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridRightSide->setObjectName(QString::fromUtf8("mCheckGridRightSide"));

        gridLayout_4->addWidget(mCheckGridRightSide, 0, 1, 1, 1);

        mCheckGridLeftSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridLeftSide->setObjectName(QString::fromUtf8("mCheckGridLeftSide"));

        gridLayout_4->addWidget(mCheckGridLeftSide, 0, 0, 1, 1);

        mCheckGridBottomSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridBottomSide->setObjectName(QString::fromUtf8("mCheckGridBottomSide"));

        gridLayout_4->addWidget(mCheckGridBottomSide, 1, 1, 1, 1);

        mCheckGridTopSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridTopSide->setObjectName(QString::fromUtf8("mCheckGridTopSide"));

        gridLayout_4->addWidget(mCheckGridTopSide, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 13, 0, 1, 5);

        mGridFramePenSizeSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mGridFramePenSizeSpinBox->setObjectName(QString::fromUtf8("mGridFramePenSizeSpinBox"));
        mGridFramePenSizeSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mGridFramePenSizeSpinBox, 7, 1, 1, 1);

        mFrameMarginLabel = new QLabel(mGridFrameGroupBox);
        mFrameMarginLabel->setObjectName(QString::fromUtf8("mFrameMarginLabel"));

        gridLayout_3->addWidget(mFrameMarginLabel, 5, 0, 1, 1);

        mFrameLineThicknessDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameLineThicknessDDBtn->setObjectName(QString::fromUtf8("mFrameLineThicknessDDBtn"));

        gridLayout_3->addWidget(mFrameLineThicknessDDBtn, 7, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mFrameDivisionsLeftComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsLeftComboBox->setObjectName(QString::fromUtf8("mFrameDivisionsLeftComboBox"));

        horizontalLayout_6->addWidget(mFrameDivisionsLeftComboBox);

        mFrameDivisionsLeftDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameDivisionsLeftDDBtn->setObjectName(QString::fromUtf8("mFrameDivisionsLeftDDBtn"));

        horizontalLayout_6->addWidget(mFrameDivisionsLeftDDBtn);


        gridLayout_3->addLayout(horizontalLayout_6, 9, 1, 1, 4);

        mLeftDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mLeftDivisionsLabel->setObjectName(QString::fromUtf8("mLeftDivisionsLabel"));

        gridLayout_3->addWidget(mLeftDivisionsLabel, 9, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mFrameDivisionsRightComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsRightComboBox->setObjectName(QString::fromUtf8("mFrameDivisionsRightComboBox"));

        horizontalLayout_7->addWidget(mFrameDivisionsRightComboBox);

        mFrameDivisionsRightDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameDivisionsRightDDBtn->setObjectName(QString::fromUtf8("mFrameDivisionsRightDDBtn"));

        horizontalLayout_7->addWidget(mFrameDivisionsRightDDBtn);


        gridLayout_3->addLayout(horizontalLayout_7, 10, 1, 1, 4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mFrameDivisionsTopComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsTopComboBox->setObjectName(QString::fromUtf8("mFrameDivisionsTopComboBox"));

        horizontalLayout_9->addWidget(mFrameDivisionsTopComboBox);

        mFrameDivisionsTopDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameDivisionsTopDDBtn->setObjectName(QString::fromUtf8("mFrameDivisionsTopDDBtn"));

        horizontalLayout_9->addWidget(mFrameDivisionsTopDDBtn);


        gridLayout_3->addLayout(horizontalLayout_9, 11, 1, 1, 4);

        mRightDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mRightDivisionsLabel->setObjectName(QString::fromUtf8("mRightDivisionsLabel"));

        gridLayout_3->addWidget(mRightDivisionsLabel, 10, 0, 1, 1);

        mTopDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mTopDivisionsLabel->setObjectName(QString::fromUtf8("mTopDivisionsLabel"));

        gridLayout_3->addWidget(mTopDivisionsLabel, 11, 0, 1, 1);

        mBottomDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mBottomDivisionsLabel->setObjectName(QString::fromUtf8("mBottomDivisionsLabel"));

        gridLayout_3->addWidget(mBottomDivisionsLabel, 12, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mFrameDivisionsBottomComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsBottomComboBox->setObjectName(QString::fromUtf8("mFrameDivisionsBottomComboBox"));

        horizontalLayout_10->addWidget(mFrameDivisionsBottomComboBox);

        mFrameDivisionsBottomDDBtn = new QgsPropertyOverrideButton(mGridFrameGroupBox);
        mFrameDivisionsBottomDDBtn->setObjectName(QString::fromUtf8("mFrameDivisionsBottomDDBtn"));

        horizontalLayout_10->addWidget(mFrameDivisionsBottomDDBtn);


        gridLayout_3->addLayout(horizontalLayout_10, 12, 1, 1, 4);

        mGridFrameFill1ColorButton = new QgsColorButton(mGridFrameGroupBox);
        mGridFrameFill1ColorButton->setObjectName(QString::fromUtf8("mGridFrameFill1ColorButton"));
        sizePolicy2.setHeightForWidth(mGridFrameFill1ColorButton->sizePolicy().hasHeightForWidth());
        mGridFrameFill1ColorButton->setSizePolicy(sizePolicy2);
        mGridFrameFill1ColorButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mGridFrameFill1ColorButton, 8, 1, 1, 2);

        mGridFrameFill2ColorButton = new QgsColorButton(mGridFrameGroupBox);
        mGridFrameFill2ColorButton->setObjectName(QString::fromUtf8("mGridFrameFill2ColorButton"));
        sizePolicy2.setHeightForWidth(mGridFrameFill2ColorButton->sizePolicy().hasHeightForWidth());
        mGridFrameFill2ColorButton->setSizePolicy(sizePolicy2);
        mGridFrameFill2ColorButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mGridFrameFill2ColorButton, 8, 3, 1, 2);

        mGridFramePenColorButton = new QgsColorButton(mGridFrameGroupBox);
        mGridFramePenColorButton->setObjectName(QString::fromUtf8("mGridFramePenColorButton"));
        sizePolicy2.setHeightForWidth(mGridFramePenColorButton->sizePolicy().hasHeightForWidth());
        mGridFramePenColorButton->setSizePolicy(sizePolicy2);
        mGridFramePenColorButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mGridFramePenColorButton, 7, 3, 1, 2);

        mRotatedTicksGroupBox = new QGroupBox(mGridFrameGroupBox);
        mRotatedTicksGroupBox->setObjectName(QString::fromUtf8("mRotatedTicksGroupBox"));
        mRotatedTicksGroupBox->setCheckable(true);
        formLayout = new QFormLayout(mRotatedTicksGroupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_6 = new QLabel(mRotatedTicksGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        mRotatedTicksLengthModeComboBox = new QComboBox(mRotatedTicksGroupBox);
        mRotatedTicksLengthModeComboBox->setObjectName(QString::fromUtf8("mRotatedTicksLengthModeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mRotatedTicksLengthModeComboBox);

        label_7 = new QLabel(mRotatedTicksGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        mRotatedTicksThresholdSpinBox = new QgsDoubleSpinBox(mRotatedTicksGroupBox);
        mRotatedTicksThresholdSpinBox->setObjectName(QString::fromUtf8("mRotatedTicksThresholdSpinBox"));
        mRotatedTicksThresholdSpinBox->setDecimals(2);
        mRotatedTicksThresholdSpinBox->setMaximum(90.000000000000000);
        mRotatedTicksThresholdSpinBox->setValue(0.000000000000000);
        mRotatedTicksThresholdSpinBox->setProperty("showClearButton", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, mRotatedTicksThresholdSpinBox);

        label_annot_corner = new QLabel(mRotatedTicksGroupBox);
        label_annot_corner->setObjectName(QString::fromUtf8("label_annot_corner"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_annot_corner);

        mRotatedTicksMarginToCornerSpinBox = new QgsDoubleSpinBox(mRotatedTicksGroupBox);
        mRotatedTicksMarginToCornerSpinBox->setObjectName(QString::fromUtf8("mRotatedTicksMarginToCornerSpinBox"));
        mRotatedTicksMarginToCornerSpinBox->setDecimals(2);
        mRotatedTicksMarginToCornerSpinBox->setValue(0.000000000000000);
        mRotatedTicksMarginToCornerSpinBox->setProperty("showClearButton", QVariant(true));

        formLayout->setWidget(2, QFormLayout::FieldRole, mRotatedTicksMarginToCornerSpinBox);


        gridLayout_3->addWidget(mRotatedTicksGroupBox, 14, 0, 1, 5);


        mainLayout->addWidget(mGridFrameGroupBox);

        mDrawAnnotationGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mDrawAnnotationGroupBox->setObjectName(QString::fromUtf8("mDrawAnnotationGroupBox"));
        mDrawAnnotationGroupBox->setEnabled(true);
        mDrawAnnotationGroupBox->setCheckable(true);
        mDrawAnnotationGroupBox->setChecked(true);
        mDrawAnnotationGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composermapgrid")));
        mDrawAnnotationGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mDrawAnnotationGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mAnnotationFormatLabel = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationFormatLabel->setObjectName(QString::fromUtf8("mAnnotationFormatLabel"));

        gridLayout->addWidget(mAnnotationFormatLabel, 0, 0, 1, 1);

        mAnnotationDirectionComboBoxLeft = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxLeft->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBoxLeft"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxLeft, 7, 1, 1, 2);

        mAnnotationPositionLeftComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionLeftComboBox->setObjectName(QString::fromUtf8("mAnnotationPositionLeftComboBox"));

        gridLayout->addWidget(mAnnotationPositionLeftComboBox, 6, 1, 1, 2);

        mAnnotationPositionRightComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionRightComboBox->setObjectName(QString::fromUtf8("mAnnotationPositionRightComboBox"));

        gridLayout->addWidget(mAnnotationPositionRightComboBox, 11, 1, 1, 2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mAnnotationFormatComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationFormatComboBox->setObjectName(QString::fromUtf8("mAnnotationFormatComboBox"));

        horizontalLayout_13->addWidget(mAnnotationFormatComboBox);

        mAnnotationFormatButton = new QToolButton(mDrawAnnotationGroupBox);
        mAnnotationFormatButton->setObjectName(QString::fromUtf8("mAnnotationFormatButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAnnotationFormatButton->setIcon(icon);

        horizontalLayout_13->addWidget(mAnnotationFormatButton);


        gridLayout->addLayout(horizontalLayout_13, 0, 1, 1, 2);

        mAnnotationDirectionComboBoxRight = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxRight->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBoxRight"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxRight, 12, 1, 1, 2);

        mAnnotationPositionTopComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionTopComboBox->setObjectName(QString::fromUtf8("mAnnotationPositionTopComboBox"));

        gridLayout->addWidget(mAnnotationPositionTopComboBox, 15, 1, 1, 2);

        mAnnotationPositionBottomComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionBottomComboBox->setObjectName(QString::fromUtf8("mAnnotationPositionBottomComboBox"));

        gridLayout->addWidget(mAnnotationPositionBottomComboBox, 19, 1, 1, 2);

        label = new QLabel(mDrawAnnotationGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 21, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mAnnotationDisplayLeftComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayLeftComboBox->setObjectName(QString::fromUtf8("mAnnotationDisplayLeftComboBox"));

        horizontalLayout_3->addWidget(mAnnotationDisplayLeftComboBox);

        mAnnotationDisplayLeftDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mAnnotationDisplayLeftDDBtn->setObjectName(QString::fromUtf8("mAnnotationDisplayLeftDDBtn"));

        horizontalLayout_3->addWidget(mAnnotationDisplayLeftDDBtn);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 2);

        mDistanceToMapFrameSpinBox = new QgsDoubleSpinBox(mDrawAnnotationGroupBox);
        mDistanceToMapFrameSpinBox->setObjectName(QString::fromUtf8("mDistanceToMapFrameSpinBox"));
        mDistanceToMapFrameSpinBox->setMinimum(-99.000000000000000);

        gridLayout->addWidget(mDistanceToMapFrameSpinBox, 22, 1, 1, 1);

        mLabelDistDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mLabelDistDDBtn->setObjectName(QString::fromUtf8("mLabelDistDDBtn"));

        gridLayout->addWidget(mLabelDistDDBtn, 22, 2, 1, 1);

        mAnnotationFontButton = new QgsFontButton(mDrawAnnotationGroupBox);
        mAnnotationFontButton->setObjectName(QString::fromUtf8("mAnnotationFontButton"));
        sizePolicy2.setHeightForWidth(mAnnotationFontButton->sizePolicy().hasHeightForWidth());
        mAnnotationFontButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mAnnotationFontButton, 21, 1, 1, 2);

        mAnnotationPositionLabelLeft = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelLeft->setObjectName(QString::fromUtf8("mAnnotationPositionLabelLeft"));
        mAnnotationPositionLabelLeft->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelLeft, 1, 0, 1, 1);

        mAnnotationDirectionComboBoxBottom = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxBottom->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBoxBottom"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxBottom, 20, 1, 1, 2);

        mDistanceToMapFrameLabel = new QLabel(mDrawAnnotationGroupBox);
        mDistanceToMapFrameLabel->setObjectName(QString::fromUtf8("mDistanceToMapFrameLabel"));
        mDistanceToMapFrameLabel->setWordWrap(true);

        gridLayout->addWidget(mDistanceToMapFrameLabel, 22, 0, 1, 1);

        mCoordinatePrecisionLabel = new QLabel(mDrawAnnotationGroupBox);
        mCoordinatePrecisionLabel->setObjectName(QString::fromUtf8("mCoordinatePrecisionLabel"));
        mCoordinatePrecisionLabel->setWordWrap(true);

        gridLayout->addWidget(mCoordinatePrecisionLabel, 24, 0, 1, 1);

        mAnnotationDirectionComboBoxTop = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxTop->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBoxTop"));

        gridLayout->addWidget(mAnnotationDirectionComboBoxTop, 16, 1, 1, 2);

        mCoordinatePrecisionSpinBox = new QgsSpinBox(mDrawAnnotationGroupBox);
        mCoordinatePrecisionSpinBox->setObjectName(QString::fromUtf8("mCoordinatePrecisionSpinBox"));
        mCoordinatePrecisionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mCoordinatePrecisionSpinBox, 24, 1, 1, 2);

        mRotatedAnnotationsGroupBox = new QGroupBox(mDrawAnnotationGroupBox);
        mRotatedAnnotationsGroupBox->setObjectName(QString::fromUtf8("mRotatedAnnotationsGroupBox"));
        mRotatedAnnotationsGroupBox->setCheckable(true);
        formLayout_2 = new QFormLayout(mRotatedAnnotationsGroupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_10 = new QLabel(mRotatedAnnotationsGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        mRotatedAnnotationsLengthModeComboBox = new QComboBox(mRotatedAnnotationsGroupBox);
        mRotatedAnnotationsLengthModeComboBox->setObjectName(QString::fromUtf8("mRotatedAnnotationsLengthModeComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mRotatedAnnotationsLengthModeComboBox);

        label_9 = new QLabel(mRotatedAnnotationsGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        mRotatedAnnotationsThresholdSpinBox = new QgsDoubleSpinBox(mRotatedAnnotationsGroupBox);
        mRotatedAnnotationsThresholdSpinBox->setObjectName(QString::fromUtf8("mRotatedAnnotationsThresholdSpinBox"));
        mRotatedAnnotationsThresholdSpinBox->setDecimals(2);
        mRotatedAnnotationsThresholdSpinBox->setMaximum(90.000000000000000);
        mRotatedAnnotationsThresholdSpinBox->setProperty("showClearButton", QVariant(true));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mRotatedAnnotationsThresholdSpinBox);

        label_12 = new QLabel(mRotatedAnnotationsGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_12);

        mRotatedAnnotationsMarginToCornerSpinBox = new QgsDoubleSpinBox(mRotatedAnnotationsGroupBox);
        mRotatedAnnotationsMarginToCornerSpinBox->setObjectName(QString::fromUtf8("mRotatedAnnotationsMarginToCornerSpinBox"));
        mRotatedAnnotationsMarginToCornerSpinBox->setDecimals(2);
        mRotatedAnnotationsMarginToCornerSpinBox->setValue(0.000000000000000);
        mRotatedAnnotationsMarginToCornerSpinBox->setProperty("showClearButton", QVariant(true));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, mRotatedAnnotationsMarginToCornerSpinBox);


        gridLayout->addWidget(mRotatedAnnotationsGroupBox, 25, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mAnnotationDisplayRightComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayRightComboBox->setObjectName(QString::fromUtf8("mAnnotationDisplayRightComboBox"));

        horizontalLayout->addWidget(mAnnotationDisplayRightComboBox);

        mAnnotationDisplayRightDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mAnnotationDisplayRightDDBtn->setObjectName(QString::fromUtf8("mAnnotationDisplayRightDDBtn"));

        horizontalLayout->addWidget(mAnnotationDisplayRightDDBtn);


        gridLayout->addLayout(horizontalLayout, 8, 1, 1, 2);

        mAnnotationPositionLabelRight = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelRight->setObjectName(QString::fromUtf8("mAnnotationPositionLabelRight"));

        gridLayout->addWidget(mAnnotationPositionLabelRight, 8, 0, 1, 1);

        mAnnotationPositionLabelTop = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelTop->setObjectName(QString::fromUtf8("mAnnotationPositionLabelTop"));
        mAnnotationPositionLabelTop->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelTop, 13, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mAnnotationDisplayTopComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayTopComboBox->setObjectName(QString::fromUtf8("mAnnotationDisplayTopComboBox"));

        horizontalLayout_4->addWidget(mAnnotationDisplayTopComboBox);

        mAnnotationDisplayTopDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mAnnotationDisplayTopDDBtn->setObjectName(QString::fromUtf8("mAnnotationDisplayTopDDBtn"));

        horizontalLayout_4->addWidget(mAnnotationDisplayTopDDBtn);


        gridLayout->addLayout(horizontalLayout_4, 13, 1, 1, 2);

        mAnnotationPositionLabelBottom = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelBottom->setObjectName(QString::fromUtf8("mAnnotationPositionLabelBottom"));
        mAnnotationPositionLabelBottom->setWordWrap(true);

        gridLayout->addWidget(mAnnotationPositionLabelBottom, 17, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mAnnotationDisplayBottomComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayBottomComboBox->setObjectName(QString::fromUtf8("mAnnotationDisplayBottomComboBox"));

        horizontalLayout_5->addWidget(mAnnotationDisplayBottomComboBox);

        mAnnotationDisplayBottomDDBtn = new QgsPropertyOverrideButton(mDrawAnnotationGroupBox);
        mAnnotationDisplayBottomDDBtn->setObjectName(QString::fromUtf8("mAnnotationDisplayBottomDDBtn"));

        horizontalLayout_5->addWidget(mAnnotationDisplayBottomDDBtn);


        gridLayout->addLayout(horizontalLayout_5, 17, 1, 1, 2);


        mainLayout->addWidget(mDrawAnnotationGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mEnabledCheckBox);
        QWidget::setTabOrder(mEnabledCheckBox, mEnabledDDBtn);
        QWidget::setTabOrder(mEnabledDDBtn, mGridTypeComboBox);
        QWidget::setTabOrder(mGridTypeComboBox, mMapGridCrsSelector);
        QWidget::setTabOrder(mMapGridCrsSelector, mMapGridUnitComboBox);
        QWidget::setTabOrder(mMapGridUnitComboBox, mMinWidthSpinBox);
        QWidget::setTabOrder(mMinWidthSpinBox, mMaxWidthSpinBox);
        QWidget::setTabOrder(mMaxWidthSpinBox, mIntervalXSpinBox);
        QWidget::setTabOrder(mIntervalXSpinBox, mIntervalXDDBtn);
        QWidget::setTabOrder(mIntervalXDDBtn, mIntervalYSpinBox);
        QWidget::setTabOrder(mIntervalYSpinBox, mIntervalYDDBtn);
        QWidget::setTabOrder(mIntervalYDDBtn, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetXDDBtn);
        QWidget::setTabOrder(mOffsetXDDBtn, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mOffsetYDDBtn);
        QWidget::setTabOrder(mOffsetYDDBtn, mCrossWidthSpinBox);
        QWidget::setTabOrder(mCrossWidthSpinBox, mCrossWidthDDBtn);
        QWidget::setTabOrder(mCrossWidthDDBtn, mGridLineStyleButton);
        QWidget::setTabOrder(mGridLineStyleButton, mGridMarkerStyleButton);
        QWidget::setTabOrder(mGridMarkerStyleButton, mGridBlendComboBox);
        QWidget::setTabOrder(mGridBlendComboBox, mGridFrameGroupBox);
        QWidget::setTabOrder(mGridFrameGroupBox, mFrameStyleComboBox);
        QWidget::setTabOrder(mFrameStyleComboBox, mFrameWidthSpinBox);
        QWidget::setTabOrder(mFrameWidthSpinBox, mFrameSizeDDBtn);
        QWidget::setTabOrder(mFrameSizeDDBtn, mGridFrameMarginSpinBox);
        QWidget::setTabOrder(mGridFrameMarginSpinBox, mFrameMarginDDBtn);
        QWidget::setTabOrder(mFrameMarginDDBtn, mGridFramePenSizeSpinBox);
        QWidget::setTabOrder(mGridFramePenSizeSpinBox, mFrameLineThicknessDDBtn);
        QWidget::setTabOrder(mFrameLineThicknessDDBtn, mGridFramePenColorButton);
        QWidget::setTabOrder(mGridFramePenColorButton, mGridFrameFill1ColorButton);
        QWidget::setTabOrder(mGridFrameFill1ColorButton, mGridFrameFill2ColorButton);
        QWidget::setTabOrder(mGridFrameFill2ColorButton, mFrameDivisionsLeftComboBox);
        QWidget::setTabOrder(mFrameDivisionsLeftComboBox, mFrameDivisionsLeftDDBtn);
        QWidget::setTabOrder(mFrameDivisionsLeftDDBtn, mFrameDivisionsRightComboBox);
        QWidget::setTabOrder(mFrameDivisionsRightComboBox, mFrameDivisionsRightDDBtn);
        QWidget::setTabOrder(mFrameDivisionsRightDDBtn, mFrameDivisionsTopComboBox);
        QWidget::setTabOrder(mFrameDivisionsTopComboBox, mFrameDivisionsTopDDBtn);
        QWidget::setTabOrder(mFrameDivisionsTopDDBtn, mFrameDivisionsBottomComboBox);
        QWidget::setTabOrder(mFrameDivisionsBottomComboBox, mFrameDivisionsBottomDDBtn);
        QWidget::setTabOrder(mFrameDivisionsBottomDDBtn, mCheckGridLeftSide);
        QWidget::setTabOrder(mCheckGridLeftSide, mCheckGridRightSide);
        QWidget::setTabOrder(mCheckGridRightSide, mCheckGridTopSide);
        QWidget::setTabOrder(mCheckGridTopSide, mCheckGridBottomSide);
        QWidget::setTabOrder(mCheckGridBottomSide, mRotatedTicksGroupBox);
        QWidget::setTabOrder(mRotatedTicksGroupBox, mRotatedTicksLengthModeComboBox);
        QWidget::setTabOrder(mRotatedTicksLengthModeComboBox, mRotatedTicksThresholdSpinBox);
        QWidget::setTabOrder(mRotatedTicksThresholdSpinBox, mRotatedTicksMarginToCornerSpinBox);
        QWidget::setTabOrder(mRotatedTicksMarginToCornerSpinBox, mDrawAnnotationGroupBox);
        QWidget::setTabOrder(mDrawAnnotationGroupBox, mAnnotationFormatComboBox);
        QWidget::setTabOrder(mAnnotationFormatComboBox, mAnnotationFormatButton);
        QWidget::setTabOrder(mAnnotationFormatButton, mAnnotationDisplayLeftComboBox);
        QWidget::setTabOrder(mAnnotationDisplayLeftComboBox, mAnnotationDisplayLeftDDBtn);
        QWidget::setTabOrder(mAnnotationDisplayLeftDDBtn, mAnnotationPositionLeftComboBox);
        QWidget::setTabOrder(mAnnotationPositionLeftComboBox, mAnnotationDirectionComboBoxLeft);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxLeft, mAnnotationDisplayRightComboBox);
        QWidget::setTabOrder(mAnnotationDisplayRightComboBox, mAnnotationDisplayRightDDBtn);
        QWidget::setTabOrder(mAnnotationDisplayRightDDBtn, mAnnotationPositionRightComboBox);
        QWidget::setTabOrder(mAnnotationPositionRightComboBox, mAnnotationDirectionComboBoxRight);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxRight, mAnnotationDisplayTopComboBox);
        QWidget::setTabOrder(mAnnotationDisplayTopComboBox, mAnnotationDisplayTopDDBtn);
        QWidget::setTabOrder(mAnnotationDisplayTopDDBtn, mAnnotationPositionTopComboBox);
        QWidget::setTabOrder(mAnnotationPositionTopComboBox, mAnnotationDirectionComboBoxTop);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxTop, mAnnotationDisplayBottomComboBox);
        QWidget::setTabOrder(mAnnotationDisplayBottomComboBox, mAnnotationDisplayBottomDDBtn);
        QWidget::setTabOrder(mAnnotationDisplayBottomDDBtn, mAnnotationPositionBottomComboBox);
        QWidget::setTabOrder(mAnnotationPositionBottomComboBox, mAnnotationDirectionComboBoxBottom);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxBottom, mAnnotationFontButton);
        QWidget::setTabOrder(mAnnotationFontButton, mDistanceToMapFrameSpinBox);
        QWidget::setTabOrder(mDistanceToMapFrameSpinBox, mLabelDistDDBtn);
        QWidget::setTabOrder(mLabelDistDDBtn, mCoordinatePrecisionSpinBox);
        QWidget::setTabOrder(mCoordinatePrecisionSpinBox, mRotatedAnnotationsGroupBox);
        QWidget::setTabOrder(mRotatedAnnotationsGroupBox, mRotatedAnnotationsLengthModeComboBox);
        QWidget::setTabOrder(mRotatedAnnotationsLengthModeComboBox, mRotatedAnnotationsThresholdSpinBox);
        QWidget::setTabOrder(mRotatedAnnotationsThresholdSpinBox, mRotatedAnnotationsMarginToCornerSpinBox);

        retranslateUi(QgsLayoutMapGridWidgetBase);

        mIntervalStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsLayoutMapGridWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMapGridWidgetBase)
    {
        QgsLayoutMapGridWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Map Options", nullptr));
        mEnabledCheckBox->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Enable grid", nullptr));
        mEnabledDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mGridCheckBox->setTitle(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Appearance", nullptr));
        mGridLineStyleButton->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Change\342\200\246", nullptr));
        mLineStyleLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Line style", nullptr));
        mCrossWidthDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mIntervalXLabel_2->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Interval", nullptr));
        mMapGridCRSLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "CRS", nullptr));
        mIntervalXSpinBox->setPrefix(QString());
        mIntervalYDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mIntervalYSpinBox->setPrefix(QString());
        mIntervalXDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "X", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Y", nullptr));
        mMinWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " mm", nullptr));
        mMaxWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " mm", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Minimum", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Maximum", nullptr));
        mGridTypeLabel_2->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Grid type", nullptr));
        mGridBlendLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Blend mode", nullptr));
        mOffsetXLabel_2->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Offset", nullptr));
        mOffsetYDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mOffsetXDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mOffsetYSpinBox->setPrefix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Y ", nullptr));
        mOffsetXSpinBox->setPrefix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "X ", nullptr));
        mCrossWidthLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Cross width", nullptr));
        mCrossWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " mm", nullptr));
        mMarkerStyleLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Marker style", nullptr));
        mGridMarkerStyleButton->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Change\342\200\246", nullptr));
        mGridFrameGroupBox->setTitle(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Frame", nullptr));
        mFrameStyleLabel_2->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Frame style", nullptr));
        mGridFrameMarginSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " mm", nullptr));
        mFrameWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " mm", nullptr));
        mFrameMarginDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mFrameFillLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Frame fill colors", nullptr));
        mFrameWidthLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Frame size", nullptr));
        mFrameSizeDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mFramePenLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Frame line thickness", nullptr));
        mCheckGridRightSide->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Right side", nullptr));
        mCheckGridLeftSide->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Left side", nullptr));
        mCheckGridBottomSide->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Bottom side", nullptr));
        mCheckGridTopSide->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Top side", nullptr));
        mGridFramePenSizeSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " mm", nullptr));
        mFrameMarginLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Frame margin", nullptr));
        mFrameLineThicknessDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mFrameDivisionsLeftDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mLeftDivisionsLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Left divisions", nullptr));
        mFrameDivisionsRightDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mFrameDivisionsTopDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mRightDivisionsLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Right divisions", nullptr));
        mTopDivisionsLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Top divisions", nullptr));
        mBottomDivisionsLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Bottom divisions", nullptr));
        mFrameDivisionsBottomDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mGridFrameFill1ColorButton->setText(QString());
        mGridFrameFill2ColorButton->setText(QString());
        mGridFramePenColorButton->setText(QString());
        mRotatedTicksGroupBox->setTitle(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Follow grid rotation", nullptr));
        label_6->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Ticks alignment", nullptr));
#if QT_CONFIG(tooltip)
        mRotatedTicksLengthModeComboBox->setToolTip(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Determines how the ticks length is defined when rotated.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Skip below angle", nullptr));
#if QT_CONFIG(tooltip)
        mRotatedTicksThresholdSpinBox->setToolTip(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Grid lines intersecting the border below this threshold will be ignored.", nullptr));
#endif // QT_CONFIG(tooltip)
        mRotatedTicksThresholdSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " \302\260", nullptr));
        label_annot_corner->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Margin from map corner", nullptr));
#if QT_CONFIG(tooltip)
        mRotatedTicksMarginToCornerSpinBox->setToolTip(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Outwards facing ticks closer to the corners than this margin will be ignored.", nullptr));
#endif // QT_CONFIG(tooltip)
        mRotatedTicksMarginToCornerSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " mm", nullptr));
        mDrawAnnotationGroupBox->setTitle(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Draw Coordinates", nullptr));
        mAnnotationFormatLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Format", nullptr));
        mAnnotationFormatButton->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Font", nullptr));
        mAnnotationDisplayLeftDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mDistanceToMapFrameSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " mm", nullptr));
        mLabelDistDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mAnnotationFontButton->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Font", nullptr));
        mAnnotationPositionLabelLeft->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Left", nullptr));
        mDistanceToMapFrameLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Distance to map frame", nullptr));
        mCoordinatePrecisionLabel->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Coordinate precision", nullptr));
        mRotatedAnnotationsGroupBox->setTitle(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Follow grid rotation", nullptr));
        label_10->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Annotations alignment", nullptr));
#if QT_CONFIG(tooltip)
        mRotatedAnnotationsLengthModeComboBox->setToolTip(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Determines how the annotations position is defined when the grid is rotated.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Skip below angle", nullptr));
#if QT_CONFIG(tooltip)
        mRotatedAnnotationsThresholdSpinBox->setToolTip(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Annotations of grid lines intersecting the border below this threshold will be ignored.", nullptr));
#endif // QT_CONFIG(tooltip)
        mRotatedAnnotationsThresholdSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " \302\260", nullptr));
        label_12->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Margin from map corner", nullptr));
#if QT_CONFIG(tooltip)
        mRotatedAnnotationsMarginToCornerSpinBox->setToolTip(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Outwards facing annotations closer to the corners than this margin will be ignored.", nullptr));
#endif // QT_CONFIG(tooltip)
        mRotatedAnnotationsMarginToCornerSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", " mm", nullptr));
        mAnnotationDisplayRightDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mAnnotationPositionLabelRight->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Right", nullptr));
        mAnnotationPositionLabelTop->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Top", nullptr));
        mAnnotationDisplayTopDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
        mAnnotationPositionLabelBottom->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "Bottom", nullptr));
        mAnnotationDisplayBottomDDBtn->setText(QCoreApplication::translate("QgsLayoutMapGridWidgetBase", "\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMapGridWidgetBase: public Ui_QgsLayoutMapGridWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMAPGRIDWIDGETBASE_H
