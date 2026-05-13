/********************************************************************************
** Form generated from reading UI file 'qgstextformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTEXTFORMATWIDGETBASE_H
#define UI_QGSTEXTFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscodeeditorexpression.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgseffectstackpropertieswidget.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsopacitywidget.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscalewidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgsstackedwidget.h"
#include "qgsstyleitemslistwidget.h"
#include "qgssymbolbutton.h"
#include "qgstextpreview.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTextFormatWidgetBase
{
public:
    QGridLayout *gridLayout_8;
    QFrame *mLabelingFrame;
    QGridLayout *gridLayout_23;
    QSplitter *mFontPreviewSplitter;
    QgsCollapsibleGroupBox *groupBox_mPreview;
    QVBoxLayout *verticalLayout_4;
    QgsScrollArea *scrollArea_mPreview;
    QWidget *scrollAreaWidgetContents_mPreveiw;
    QVBoxLayout *verticalLayout_5;
    QgsTextPreview *lblFontPreview;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *mPreviewTextEdit;
    QToolButton *mPreviewTextBtn;
    QSpacerItem *horizontalSpacer;
    QgsScaleWidget *mPreviewScaleComboBox;
    QSpacerItem *horizontalSpacer_2;
    QgsColorButton *mPreviewBackgroundBtn;
    QFrame *mLabelingOptionsFrame;
    QGridLayout *gridLayout_17;
    QTabWidget *mOptionsTab;
    QWidget *textTab;
    QWidget *formattingTab;
    QWidget *bufferTab;
    QWidget *maskTab;
    QWidget *backgroundTab;
    QWidget *shadowTab;
    QWidget *calloutsTab;
    QWidget *placementTab;
    QWidget *renderingTab;
    QSplitter *mLabelingOptionsSplitter;
    QFrame *mLabelingOptionsListFrame;
    QVBoxLayout *verticalLayout_23;
    QListWidget *mLabelingOptionsListWidget;
    QFrame *mLabelingOptionGroupsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mLabelStackedWidget;
    QWidget *mLabelPage_Text;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *mFontStyleGroupBox;
    QGridLayout *gridLayout_6;
    QgsPropertyOverrideButton *mFontOpacityDDBtn;
    QLabel *mFontSizeLabel;
    QgsPropertyOverrideButton *mFontSizeDDBtn;
    QLabel *mFontLabel;
    QFrame *mFontFamilyFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mFontMissingLabel;
    QgsColorButton *btnTextColor;
    QHBoxLayout *horizontalLayout_13;
    QToolButton *mFontUnderlineBtn;
    QgsPropertyOverrideButton *mFontUnderlineDDBtn;
    QToolButton *mFontStrikethroughBtn;
    QgsPropertyOverrideButton *mFontStrikeoutDDBtn;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *mFontBoldBtn;
    QgsPropertyOverrideButton *mFontBoldDDBtn;
    QToolButton *mFontItalicBtn;
    QComboBox *mFontStyleComboBox;
    QLabel *mFontTranspLabel;
    QgsPropertyOverrideButton *mFontDDBtn;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_23;
    QCheckBox *mHtmlFormattingCheckBox;
    QgsPropertyOverrideButton *mFontStyleDDBtn;
    QgsPropertyOverrideButton *mFontUnitsDDBtn;
    QLabel *mFontColorLabel;
    QLabel *mFontLabel_2;
    QLabel *mFontStyleLabel;
    QgsUnitSelectionWidget *mFontSizeUnitWidget;
    QFontComboBox *mFontFamilyCmbBx;
    QgsPropertyOverrideButton *mFontColorDDBtn;
    QgsDoubleSpinBox *mFontSizeSpinBox;
    QgsOpacityWidget *mTextOpacityWidget;
    QgsPropertyOverrideButton *mFontItalicDDBtn;
    QgsStyleItemsListWidget *mTextFormatsListWidget;
    QWidget *mLabelPage_Formatting;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_36;
    QgsScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_6;
    QGridLayout *gridLayout_42;
    QLabel *label_10;
    QgsPropertyOverrideButton *mFontWordSpacingDDBtn;
    QgsPropertyOverrideButton *mFontStretchDDBtn;
    QCheckBox *mCheckBoxSubstituteText;
    QHBoxLayout *horizontalLayout_29;
    QLabel *mFontLetterSpacingLabel_3;
    QgsDoubleSpinBox *mFontLetterSpacingSpinBox;
    QgsPropertyOverrideButton *mFontCaseDDBtn;
    QLabel *mFontCapitalsLabel;
    QToolButton *mToolButtonConfigureSubstitutes;
    QgsPropertyOverrideButton *mFontBlendModeDDBtn;
    QCheckBox *mKerningCheckBox;
    QComboBox *mFontCapitalsComboBox;
    QgsBlendModeComboBox *comboBlendMode;
    QgsPropertyOverrideButton *mFontLetterSpacingDDBtn;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *gridLayout_35;
    QLabel *label_24;
    QFrame *mMultiLinesFrame;
    QGridLayout *gridLayout_28;
    QgsPropertyOverrideButton *mFontLineHeightDDBtn;
    QgsPropertyOverrideButton *mFontMultiLineAlignDDBtn;
    QLabel *mLabelWrapLinesTo;
    QgsUnitSelectionWidget *mLineHeightUnitWidget;
    QLabel *mLabelWrapOnCharacter;
    QgsSpinBox *mAutoWrapLengthSpinBox;
    QLineEdit *wrapCharacterEdit;
    QgsDoubleSpinBox *mFontLineHeightSpinBox;
    QgsPropertyOverrideButton *mWrapCharDDBtn;
    QLabel *mFontMultiLineLabel;
    QComboBox *mAutoWrapTypeComboBox;
    QgsPropertyOverrideButton *mAutoWrapLengthDDBtn;
    QLabel *mFontLineHeightLabel;
    QComboBox *mFontMultiLineAlignComboBox;
    QHBoxLayout *horizontalLayout_30;
    QLabel *mFontWordSpacingLabel_3;
    QgsDoubleSpinBox *mFontWordSpacingSpinBox;
    QgsSpinBox *mSpinStretch;
    QLabel *mLabelStretch;
    QGridLayout *gridLayout_34;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *mFormatNumChkBx;
    QgsPropertyOverrideButton *mFormatNumDDBtn;
    QFrame *mFormatNumFrame;
    QGridLayout *gridLayout_31;
    QLabel *mFormatNumDecimalsLabel;
    QgsSpinBox *mFormatNumDecimalsSpnBx;
    QgsPropertyOverrideButton *mFormatNumDecimalsDDBtn;
    QCheckBox *mFormatNumPlusSignChkBx;
    QgsPropertyOverrideButton *mFormatNumPlusSignDDBtn;
    QComboBox *mTextOrientationComboBox;
    QFrame *mDirectSymbolsFrame;
    QGridLayout *gridLayout_33;
    QSpacerItem *horizontalSpacer_9;
    QgsPropertyOverrideButton *mDirectSymbDDBtn;
    QCheckBox *mDirectSymbChkBx;
    QFrame *mDirectSymbFrame;
    QGridLayout *gridLayout_30;
    QFrame *mDirectSymbRightFrame;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *mDirectSymbRightLineEdit;
    QToolButton *mDirectSymbRightToolBtn;
    QgsPropertyOverrideButton *mDirectSymbPlacementDDBtn;
    QgsPropertyOverrideButton *mDirectSymbLeftDDBtn;
    QLabel *mDirectSymbLeftLabel;
    QLabel *mDirectSymbRightLabel;
    QLabel *mDirectSymbPlacementLabel;
    QCheckBox *mDirectSymbRevChkBx;
    QgsPropertyOverrideButton *mDirectSymbRightDDBtn;
    QFrame *mDirectSymbLeftFrame;
    QHBoxLayout *horizontalLayout_21;
    QLineEdit *mDirectSymbLeftLineEdit;
    QToolButton *mDirectSymbLeftToolBtn;
    QgsPropertyOverrideButton *mDirectSymbRevDDBtn;
    QFrame *mDirectSymbPlacementFrame;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *mDirectSymbRadioBtnLR;
    QRadioButton *mDirectSymbRadioBtnAbove;
    QRadioButton *mDirectSymbRadioBtnBelow;
    QgsPropertyOverrideButton *mTextOrientationDDBtn;
    QLabel *labelBlendMode;
    QLabel *labelTextOrientation;
    QHBoxLayout *horizontalLayout_31;
    QgsDoubleSpinBox *mTabStopDistanceSpin;
    QgsUnitSelectionWidget *mTabDistanceUnitWidget;
    QToolButton *mTabStopsButton;
    QgsPropertyOverrideButton *mTabDistanceDDBtn;
    QLabel *mLabelStretch_2;
    QWidget *mLabelPage_Buffer;
    QVBoxLayout *verticalLayout_7;
    QgsScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout_36;
    QgsPropertyOverrideButton *mBufferDrawDDBtn;
    QCheckBox *mBufferDrawChkBx;
    QSpacerItem *horizontalSpacer_13;
    QFrame *mBufferFrame;
    QGridLayout *gridLayout_12;
    QgsPropertyOverrideButton *mBufferColorDDBtn;
    QgsPropertyOverrideButton *mBufferBlendModeDDBtn;
    QgsPropertyOverrideButton *mBufferSizeDDBtn;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelBufferBlend;
    QgsColorButton *btnBufferColor;
    QLabel *label_5;
    QgsEffectStackCompactWidget *mBufferEffectWidget;
    QgsBlendModeComboBox *comboBufferBlendMode;
    QCheckBox *mBufferTranspFillChbx;
    QLabel *label_31;
    QgsUnitSelectionWidget *mBufferUnitWidget;
    QgsPropertyOverrideButton *mBufferJoinStyleDDBtn;
    QgsPenJoinStyleComboBox *mBufferJoinStyleComboBox;
    QgsPropertyOverrideButton *mBufferUnitsDDBtn;
    QLabel *label_32;
    QgsDoubleSpinBox *spinBufferSize;
    QgsOpacityWidget *mBufferOpacityWidget;
    QgsPropertyOverrideButton *mBufferOpacityDDBtn;
    QLabel *mBufferTranspLabel_2;
    QLabel *label_37;
    QSpacerItem *verticalSpacer;
    QWidget *mLabelPage_Mask;
    QVBoxLayout *verticalLayout_71;
    QgsScrollArea *scrollArea_71;
    QWidget *scrollAreaWidgetContents_31;
    QVBoxLayout *verticalLayout_121;
    QGridLayout *gridLayout_361;
    QLabel *label_99;
    QgsPropertyOverrideButton *mEnableMaskDDBtn;
    QCheckBox *mEnableMaskChkBx;
    QSpacerItem *horizontalSpacer_131;
    QFrame *mMaskFrame;
    QGridLayout *gridLayout_121;
    QFrame *frame_51;
    QHBoxLayout *horizontalLayout_101;
    QgsPenJoinStyleComboBox *mMaskJoinStyleComboBox;
    QgsPropertyOverrideButton *mMaskOpacityDDBtn;
    QgsEffectStackCompactWidget *mMaskEffectWidget;
    QgsUnitSelectionWidget *mMaskBufferUnitWidget;
    QgsPropertyOverrideButton *mMaskJoinStyleDDBtn;
    QgsPropertyOverrideButton *mMaskBufferUnitsDDBtn;
    QgsDoubleSpinBox *mMaskBufferSizeSpinBox;
    QgsPropertyOverrideButton *mMaskBufferSizeDDBtn;
    QgsOpacityWidget *mMaskOpacityWidget;
    QLabel *label_311;
    QLabel *label_51;
    QLabel *mMaskTranspLabel_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QWidget *mLabelPage_Background;
    QVBoxLayout *verticalLayout_20;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_21;
    QGridLayout *gridLayout_37;
    QSpacerItem *horizontalSpacer_12;
    QCheckBox *mShapeDrawChkBx;
    QgsPropertyOverrideButton *mShapeDrawDDBtn;
    QFrame *mShapeFrame;
    QGridLayout *gridLayout_29;
    QgsPropertyOverrideButton *mShapeOffsetDDBtn;
    QLabel *mShapeStrokeWidthLabel;
    QLabel *mShapeRadiusLabel;
    QPushButton *mShapeSVGParamsBtn;
    QComboBox *mShapeTypeCmbBx;
    QgsPropertyOverrideButton *mShapeSizeXDDBtn;
    QLabel *mShapeFillColorLabel;
    QgsPropertyOverrideButton *mShapeSizeYDDBtn;
    QgsColorButton *mShapeFillColorBtn;
    QComboBox *mShapeSizeCmbBx;
    QLabel *label_23;
    QgsPropertyOverrideButton *mShapeRotationTypeDDBtn;
    QHBoxLayout *horizontalLayout_43;
    QgsUnitSelectionWidget *mShapeStrokeWidthUnitWidget;
    QLabel *mShapeSVGUnitsLabel;
    QgsBlendModeComboBox *mShapeBlendCmbBx;
    QgsDoubleSpinBox *mShapeRotationDblSpnBx;
    QFrame *mShapeSVGPathFrame;
    QHBoxLayout *horizontalLayout_26;
    QLineEdit *mShapeSVGPathLineEdit;
    QPushButton *mShapeSVGSelectorBtn;
    QgsPropertyOverrideButton *mShapeSVGPathDDBtn;
    QgsPropertyOverrideButton *mShapeFillColorDDBtn;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mShapeRadiusXDbSpnBx;
    QgsDoubleSpinBox *mShapeRadiusYDbSpnBx;
    QgsPropertyOverrideButton *mShapeStrokeUnitsDDBtn;
    QgsUnitSelectionWidget *mShapeRadiusUnitWidget;
    QLabel *label_8;
    QgsPropertyOverrideButton *mShapeStrokeWidthDDBtn;
    QgsPropertyOverrideButton *mShapeSizeTypeDDBtn;
    QLabel *label_22;
    QgsPropertyOverrideButton *mShapeRadiusUnitsDDBtn;
    QFrame *mShapeRotationFrame;
    QHBoxLayout *horizontalLayout_36;
    QgsPropertyOverrideButton *mShapeRotationDDBtn;
    QHBoxLayout *horizontalLayout_7;
    QgsDoubleSpinBox *mShapeOffsetXSpnBx;
    QgsDoubleSpinBox *mShapeOffsetYSpnBx;
    QLabel *label_21;
    QLabel *mShapeSizeXLabel;
    QgsDoubleSpinBox *mShapeSizeXSpnBx;
    QgsColorButton *mShapeStrokeColorBtn;
    QgsPropertyOverrideButton *mShapeOffsetUnitsDDBtn;
    QComboBox *mShapeRotationCmbBx;
    QLabel *mShapeStrokeColorLabel;
    QgsPropertyOverrideButton *mShapeSizeUnitsDDBtn;
    QgsPropertyOverrideButton *mShapeBlendModeDDBtn;
    QLabel *label_18;
    QgsPropertyOverrideButton *mShapeOpacityDDBtn;
    QgsPropertyOverrideButton *mShapeStrokeColorDDBtn;
    QgsUnitSelectionWidget *mShapeSizeUnitWidget;
    QLabel *mShapeTranspLabel;
    QgsEffectStackCompactWidget *mBackgroundEffectWidget;
    QLabel *mShapeSizeYLabel;
    QgsOpacityWidget *mBackgroundOpacityWidget;
    QgsDoubleSpinBox *mShapeStrokeWidthSpnBx;
    QgsPropertyOverrideButton *mShapeTypeDDBtn;
    QgsDoubleSpinBox *mShapeSizeYSpnBx;
    QgsPropertyOverrideButton *mShapeRadiusDDBtn;
    QgsUnitSelectionWidget *mShapeOffsetUnitWidget;
    QgsSymbolButton *mBackgroundMarkerSymbolButton;
    QgsSymbolButton *mBackgroundFillSymbolButton;
    QLabel *label_38;
    QSpacerItem *verticalSpacer_3;
    QWidget *mLabelPage_Shadow;
    QVBoxLayout *verticalLayout_18;
    QgsScrollArea *scrollArea_8;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_22;
    QGridLayout *gridLayout_38;
    QSpacerItem *horizontalSpacer_14;
    QCheckBox *mShadowDrawChkBx;
    QgsPropertyOverrideButton *mShadowDrawDDBtn;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QgsColorButton *mShadowColorBtn;
    QgsDoubleSpinBox *mShadowRadiusDblSpnBx;
    QLabel *label_29;
    QLabel *label_27;
    QCheckBox *mShadowRadiusAlphaChkBx;
    QgsDoubleSpinBox *mShadowOffsetSpnBx;
    QCheckBox *mShadowOffsetGlobalChkBx;
    QgsBlendModeComboBox *mShadowBlendCmbBx;
    QHBoxLayout *horizontalLayout_24;
    QDial *mShadowOffsetAngleDial;
    QgsSpinBox *mShadowOffsetAngleSpnBx;
    QComboBox *mShadowUnderCmbBx;
    QLabel *label_17;
    QgsSpinBox *mShadowScaleSpnBx;
    QLabel *label_30;
    QLabel *label_9;
    QLabel *label_33;
    QLabel *label_28;
    QgsPropertyOverrideButton *mShadowUnderDDBtn;
    QgsPropertyOverrideButton *mShadowOffsetAngleDDBtn;
    QgsPropertyOverrideButton *mShadowOffsetDDBtn;
    QgsPropertyOverrideButton *mShadowOffsetUnitsDDBtn;
    QgsPropertyOverrideButton *mShadowRadiusDDBtn;
    QgsPropertyOverrideButton *mShadowRadiusUnitsDDBtn;
    QgsPropertyOverrideButton *mShadowOpacityDDBtn;
    QgsPropertyOverrideButton *mShadowScaleDDBtn;
    QgsPropertyOverrideButton *mShadowColorDDBtn;
    QgsPropertyOverrideButton *mShadowBlendDDBtn;
    QgsUnitSelectionWidget *mShadowOffsetUnitWidget;
    QgsUnitSelectionWidget *mShadowRadiusUnitWidget;
    QgsOpacityWidget *mShadowOpacityWidget;
    QLabel *label_39;
    QSpacerItem *verticalSpacer_7;
    QWidget *mLabelPage_Callouts;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_7;
    QGridLayout *gridLayout_46;
    QGridLayout *gridLayout_43;
    QCheckBox *mCalloutsDrawCheckBox;
    QLabel *label_511;
    QSpacerItem *horizontalSpacer_15;
    QgsPropertyOverrideButton *mCalloutDrawDDBtn;
    QFrame *mCalloutFrame;
    QGridLayout *gridLayout_45;
    QComboBox *mCalloutStyleComboBox;
    QStackedWidget *mCalloutStackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_45;
    QLabel *label_11;
    QWidget *mLabelPage_Placement;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_43;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *mPlacementGroupBox;
    QGridLayout *gridLayout_13;
    QFrame *mPlacementQuadrantFrame;
    QGridLayout *gridLayout_19;
    QgsPropertyOverrideButton *mPointQuadOffsetDDBtn;
    QFrame *mPlacementFixedQuadrantFrame;
    QGridLayout *gridLayout_3;
    QToolButton *mPointOffsetOver;
    QToolButton *mPointOffsetAboveRight;
    QToolButton *mPointOffsetBelowLeft;
    QToolButton *mPointOffsetLeft;
    QToolButton *mPointOffsetAboveLeft;
    QToolButton *mPointOffsetRight;
    QToolButton *mPointOffsetBelow;
    QToolButton *mPointOffsetBelowRight;
    QToolButton *mPointOffsetAbove;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QFrame *mPlacementOffsetTypeFrame;
    QGridLayout *gridLayout_40;
    QLabel *label_42;
    QComboBox *mOffsetTypeComboBox;
    QFrame *mPlacementDistanceFrame;
    QGridLayout *gridLayout_27;
    QGridLayout *gridLayout_49;
    QgsPropertyOverrideButton *mLineDistanceDDBtn;
    QgsDoubleSpinBox *mLineDistanceSpnBx;
    QgsUnitSelectionWidget *mLineDistanceUnitWidget;
    QgsPropertyOverrideButton *mLineDistanceUnitDDBtn;
    QLabel *label_26;
    QLabel *mPlacementModeDescriptionLabel;
    QFrame *mPlacementLineFrame;
    QGridLayout *gridLayout_10;
    QCheckBox *chkLineOrientationDependent;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkLineAbove;
    QCheckBox *chkLineOn;
    QCheckBox *chkLineBelow;
    QgsPropertyOverrideButton *mLinePlacementFlagsDDBtn;
    QLabel *label_13;
    QLabel *label_14;
    QFrame *mPlacementCartographicFrame;
    QGridLayout *gridLayout_39;
    QHBoxLayout *horizontalLayout_28;
    QgsPropertyOverrideButton *mPointPositionOrderDDBtn;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_20;
    QFrame *mPlacementMaximumDistanceFrame;
    QGridLayout *gridLayout_44;
    QgsUnitSelectionWidget *mMaximumDistanceUnitWidget;
    QLabel *label_49;
    QHBoxLayout *horizontalLayout_18;
    QgsDoubleSpinBox *mMaximumDistanceSpnBx;
    QgsPropertyOverrideButton *mMaximumDistanceDDBtn;
    QFrame *mPlacementCentroidFrame;
    QGridLayout *gridLayout_25;
    QRadioButton *mCentroidRadioVisible;
    QgsPropertyOverrideButton *mCentroidDDBtn;
    QRadioButton *mCentroidRadioWhole;
    QCheckBox *mCentroidInsideCheckBox;
    QLabel *mCentroidLabel;
    QFrame *mPlacementPolygonFrame;
    QGridLayout *gridLayout_48;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *mCheckAllowLabelsOutsidePolygons;
    QgsPropertyOverrideButton *mAllowOutsidePolygonsDDBtn;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_2;
    QComboBox *mPlacementModeComboBox;
    QFrame *mPlacementRotationFrame;
    QGridLayout *gridLayout_26;
    QLabel *label_25;
    QgsDoubleSpinBox *mPointAngleSpinBox;
    QFrame *mPlacementOffsetFrame;
    QGridLayout *gridLayout_15;
    QgsDoubleSpinBox *mPointOffsetYSpinBox;
    QgsPropertyOverrideButton *mPointOffsetDDBtn;
    QgsPropertyOverrideButton *mPointOffsetUnitsDDBtn;
    QgsDoubleSpinBox *mPointOffsetXSpinBox;
    QLabel *label_15;
    QgsUnitSelectionWidget *mPointOffsetUnitWidget;
    QFrame *mPlacementPrioritizationFrame;
    QGridLayout *gridLayout_50;
    QLabel *label_53;
    QComboBox *mPrioritizationComboBox;
    QgsCollapsibleGroupBox *mPlacementRepeatGroupBox;
    QGridLayout *gridLayout_18;
    QgsDoubleSpinBox *mRepeatDistanceSpinBox;
    QgsPropertyOverrideButton *mRepeatDistanceDDBtn;
    QLabel *label_7;
    QgsUnitSelectionWidget *mRepeatDistanceUnitWidget;
    QgsPropertyOverrideButton *mRepeatDistanceUnitDDBtn;
    QLabel *label_41;
    QgsCollapsibleGroupBox *mPlacementOverrunGroupBox;
    QGridLayout *gridLayout_14;
    QgsUnitSelectionWidget *mOverrunDistanceUnitWidget;
    QLabel *label_46;
    QgsDoubleSpinBox *mOverrunDistanceSpinBox;
    QgsPropertyOverrideButton *mOverrunDistanceDDBtn;
    QLabel *label_40;
    QgsCollapsibleGroupBox *mLineAnchorGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mLblPlacementAlongLine;
    QPushButton *mLineAnchorSettingsButton;
    QgsCollapsibleGroupBox *mLabelMarginGroupBox;
    QGridLayout *gridLayout_52;
    QStackedWidget *mLabelSpacingStackedWidget;
    QWidget *page_2;
    QGridLayout *gridLayout_11;
    QgsDoubleSpinBox *mLabelMarginSpinBox;
    QgsPropertyOverrideButton *mLabelMarginDDBtn;
    QLabel *label_54;
    QLabel *label_55;
    QgsUnitSelectionWidget *mLabelMarginUnitWidget;
    QWidget *mLabelSpacingNotAvailableWidget;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_50;
    QgsCollapsibleGroupBox *mObstaclesGroupBox_2;
    QVBoxLayout *verticalLayout_24;
    QStackedWidget *mDuplicatesStackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_33;
    QCheckBox *mChkNoDuplicates;
    QgsPropertyOverrideButton *mNoDuplicatesDDBtn;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *mDuplicateSettingsButton;
    QWidget *mDuplicatesNotAvailableWidget;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_19;
    QFrame *mPlacementMaxCharAngleFrame;
    QGridLayout *gridLayout_22;
    QgsDoubleSpinBox *mMaxCharAngleInDSpinBox;
    QLabel *mMaxCharAngleOutLabel;
    QLabel *mMaxCharAngleInLabel;
    QgsPropertyOverrideButton *mMaxCharAngleDDBtn;
    QSpacerItem *horizontalSpacer_19;
    QLabel *mMaxCharAngleLabel;
    QgsDoubleSpinBox *mMaxCharAngleOutDSpinBox;
    QFrame *line;
    QgsCollapsibleGroupBox *mGeometryGeneratorGroupBox;
    QGridLayout *gridLayout_41;
    QgsCodeEditorExpression *mGeometryGenerator;
    QSpacerItem *verticalSpacer_9;
    QToolButton *mGeometryGeneratorExpressionButton;
    QLabel *mGeometryGeneratorWarningLabel;
    QComboBox *mGeometryGeneratorType;
    QGroupBox *mPlacementDDGroupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_25;
    QgsPropertyOverrideButton *mCoordRotationDDBtn;
    QComboBox *mCoordRotationUnitComboBox;
    QCheckBox *chkPreserveRotation;
    QHBoxLayout *horizontalLayout_22;
    QLabel *mCoordXLabel;
    QgsPropertyOverrideButton *mCoordXDDBtn;
    QLabel *mCoordYLabel;
    QgsPropertyOverrideButton *mCoordYDDBtn;
    QSpacerItem *horizontalSpacer_6;
    QLabel *mCoordLabel;
    QFrame *mCoordAlignmentFrame;
    QHBoxLayout *horizontalLayout_27;
    QLabel *mCoordAlignmentHLabel;
    QgsPropertyOverrideButton *mCoordAlignmentHDDBtn;
    QLabel *mCoordAlignmentVLabel;
    QgsPropertyOverrideButton *mCoordAlignmentVDDBtn;
    QSpacerItem *horizontalSpacer_21;
    QLabel *mCoordRotationLabel;
    QHBoxLayout *horizontalLayout_15;
    QgsPropertyOverrideButton *mCoordPointDDBtn;
    QSpacerItem *horizontalSpacer_22;
    QLabel *mCoordAlignmentLabel;
    QLabel *label_44;
    QgsCollapsibleGroupBox *mPriorityGrpBx;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_34;
    QSlider *mPrioritySlider;
    QLabel *label_35;
    QgsPropertyOverrideButton *mPriorityDDBtn;
    QgsCollapsibleGroupBox *mObstaclesGroupBox;
    QVBoxLayout *verticalLayout_17;
    QLabel *mLblNoObstacle;
    QHBoxLayout *horizontalLayout_16;
    QCheckBox *mChkNoObstacle;
    QLabel *mLblNoObstacle1;
    QgsPropertyOverrideButton *mIsObstacleDDBtn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *mObstacleSettingsButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *mLabelPage_Rendering;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_4;
    QgsScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_8;
    QgsCollapsibleGroupBox *mRenderingLabelGrpBx;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout_9;
    QCheckBox *mScaleBasedVisibilityChkBx;
    QgsPropertyOverrideButton *mScaleBasedVisibilityDDBtn;
    QSpacerItem *horizontalSpacer_4;
    QFrame *mScaleBasedVisibilityFrame;
    QGridLayout *gridLayout_2;
    QgsScaleWidget *mMaxScaleWidget;
    QgsPropertyOverrideButton *mScaleBasedVisibilityMaxDDBtn;
    QgsScaleWidget *mMinScaleWidget;
    QgsPropertyOverrideButton *mScaleBasedVisibilityMinDDBtn;
    QLabel *mLabelMinScale;
    QLabel *mLabelMaxScale;
    QWidget *mFramePixelSizeVisibility;
    QGridLayout *gridLayout_16;
    QFrame *mFontLimitPixelFrame;
    QGridLayout *gridLayout_32;
    QgsSpinBox *mFontMinPixelSpinBox;
    QgsPropertyOverrideButton *mFontMinPixelDDBtn;
    QgsSpinBox *mFontMaxPixelSpinBox;
    QgsPropertyOverrideButton *mFontMaxPixelDDBtn;
    QgsPropertyOverrideButton *mFontLimitPixelDDBtn;
    QCheckBox *mFontLimitPixelChkBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_16;
    QgsDoubleSpinBox *mZIndexSpinBox;
    QgsPropertyOverrideButton *mZIndexDDBtn;
    QWidget *mInferiorPlacementWidget;
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *mCheckAllowDegradedPlacement;
    QgsPropertyOverrideButton *mAllowInferiorPlacementDBtn;
    QFrame *mLabelRenderingDDFrame;
    QGridLayout *gridLayout_5;
    QgsPropertyOverrideButton *mAlwaysShowDDBtn;
    QLabel *mShowLabelLabel;
    QgsPropertyOverrideButton *mShowLabelDDBtn;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_23;
    QLabel *mAlwaysShowLabel;
    QFrame *line_4;
    QFrame *mUpsidedownFrame;
    QGridLayout *gridLayout;
    QRadioButton *mUpsidedownRadioAll;
    QRadioButton *mUpsidedownRadioOff;
    QRadioButton *mUpsidedownRadioDefined;
    QSpacerItem *horizontalSpacer_3;
    QLabel *mUpsidedownLabel;
    QgsCollapsibleGroupBox *mPlacementOverrunGroupBox_2;
    QGridLayout *gridLayout_24;
    QLabel *label_48;
    QComboBox *mComboOverlapHandling;
    QLabel *label_47;
    QgsPropertyOverrideButton *mOverlapHandlingDBtn;
    QLabel *mOverlapModeDescriptionLabel;
    QGroupBox *mRenderingFeaturesGrpBx;
    QGridLayout *gridLayout_47;
    QFrame *mMinSizeFrame;
    QGridLayout *gridLayout_21;
    QSpacerItem *horizontalSpacer_20;
    QgsDoubleSpinBox *mMinSizeSpinBox;
    QLabel *mMinSizeLabel;
    QFrame *mPolygonFeatureOptionsFrame;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *mFitInsidePolygonCheckBox;
    QFrame *mLimitLabelFrame;
    QGridLayout *gridLayout_20;
    QSpacerItem *verticalSpacer_8;
    QgsSpinBox *mLimitLabelSpinBox;
    QCheckBox *mLimitLabelChkBox;
    QWidget *mLabelEveryPartWidget;
    QHBoxLayout *horizontalLayout_32;
    QCheckBox *chkLabelPerFeaturePart;
    QgsPropertyOverrideButton *mLabelAllPartsDDBtn;
    QCheckBox *chkMergeLines;
    QSpacerItem *verticalSpacer_5;
    QgsStackedWidget *mStackedWidgetLabelWith;
    QWidget *stackedWidgetLabelWithPage1;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_12;
    QgsFieldExpressionWidget *mFieldExpressionWidget;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *QgsTextFormatWidgetBase)
    {
        if (QgsTextFormatWidgetBase->objectName().isEmpty())
            QgsTextFormatWidgetBase->setObjectName(QString::fromUtf8("QgsTextFormatWidgetBase"));
        QgsTextFormatWidgetBase->resize(629, 961);
        gridLayout_8 = new QGridLayout(QgsTextFormatWidgetBase);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        mLabelingFrame = new QFrame(QgsTextFormatWidgetBase);
        mLabelingFrame->setObjectName(QString::fromUtf8("mLabelingFrame"));
        mLabelingFrame->setMinimumSize(QSize(0, 300));
        mLabelingFrame->setFrameShape(QFrame::NoFrame);
        mLabelingFrame->setFrameShadow(QFrame::Raised);
        gridLayout_23 = new QGridLayout(mLabelingFrame);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        mFontPreviewSplitter = new QSplitter(mLabelingFrame);
        mFontPreviewSplitter->setObjectName(QString::fromUtf8("mFontPreviewSplitter"));
        mFontPreviewSplitter->setOrientation(Qt::Vertical);
        mFontPreviewSplitter->setChildrenCollapsible(false);
        groupBox_mPreview = new QgsCollapsibleGroupBox(mFontPreviewSplitter);
        groupBox_mPreview->setObjectName(QString::fromUtf8("groupBox_mPreview"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_mPreview->sizePolicy().hasHeightForWidth());
        groupBox_mPreview->setSizePolicy(sizePolicy);
        groupBox_mPreview->setMaximumSize(QSize(16777215, 16777215));
        groupBox_mPreview->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(groupBox_mPreview);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 6, 0, 0);
        scrollArea_mPreview = new QgsScrollArea(groupBox_mPreview);
        scrollArea_mPreview->setObjectName(QString::fromUtf8("scrollArea_mPreview"));
        scrollArea_mPreview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_mPreview->setWidgetResizable(true);
        scrollAreaWidgetContents_mPreveiw = new QWidget();
        scrollAreaWidgetContents_mPreveiw->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_mPreveiw"));
        scrollAreaWidgetContents_mPreveiw->setGeometry(QRect(0, 0, 607, 300));
        scrollAreaWidgetContents_mPreveiw->setMinimumSize(QSize(0, 300));
        scrollAreaWidgetContents_mPreveiw->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);"));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_mPreveiw);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 6, 6, 0);
        lblFontPreview = new QgsTextPreview(scrollAreaWidgetContents_mPreveiw);
        lblFontPreview->setObjectName(QString::fromUtf8("lblFontPreview"));
        lblFontPreview->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblFontPreview->sizePolicy().hasHeightForWidth());
        lblFontPreview->setSizePolicy(sizePolicy1);
        lblFontPreview->setMinimumSize(QSize(0, 40));
        lblFontPreview->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(lblFontPreview);

        scrollArea_mPreview->setWidget(scrollAreaWidgetContents_mPreveiw);

        verticalLayout_4->addWidget(scrollArea_mPreview);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, -1, -1);
        mPreviewTextEdit = new QLineEdit(groupBox_mPreview);
        mPreviewTextEdit->setObjectName(QString::fromUtf8("mPreviewTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPreviewTextEdit->sizePolicy().hasHeightForWidth());
        mPreviewTextEdit->setSizePolicy(sizePolicy2);
        mPreviewTextEdit->setMinimumSize(QSize(0, 0));
        mPreviewTextEdit->setMaximumSize(QSize(16777215, 16777215));
        mPreviewTextEdit->setMaxLength(125);

        horizontalLayout_4->addWidget(mPreviewTextEdit);

        mPreviewTextBtn = new QToolButton(groupBox_mPreview);
        mPreviewTextBtn->setObjectName(QString::fromUtf8("mPreviewTextBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPreviewTextBtn->setIcon(icon);

        horizontalLayout_4->addWidget(mPreviewTextBtn);

        horizontalSpacer = new QSpacerItem(6, 6, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mPreviewScaleComboBox = new QgsScaleWidget(groupBox_mPreview);
        mPreviewScaleComboBox->setObjectName(QString::fromUtf8("mPreviewScaleComboBox"));
        mPreviewScaleComboBox->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(mPreviewScaleComboBox);

        horizontalSpacer_2 = new QSpacerItem(6, 6, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        mPreviewBackgroundBtn = new QgsColorButton(groupBox_mPreview);
        mPreviewBackgroundBtn->setObjectName(QString::fromUtf8("mPreviewBackgroundBtn"));
        mPreviewBackgroundBtn->setMinimumSize(QSize(100, 0));
        mPreviewBackgroundBtn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(mPreviewBackgroundBtn);


        verticalLayout_4->addLayout(horizontalLayout_4);

        mFontPreviewSplitter->addWidget(groupBox_mPreview);
        mLabelingOptionsFrame = new QFrame(mFontPreviewSplitter);
        mLabelingOptionsFrame->setObjectName(QString::fromUtf8("mLabelingOptionsFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(5);
        sizePolicy3.setHeightForWidth(mLabelingOptionsFrame->sizePolicy().hasHeightForWidth());
        mLabelingOptionsFrame->setSizePolicy(sizePolicy3);
        mLabelingOptionsFrame->setFrameShape(QFrame::NoFrame);
        mLabelingOptionsFrame->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(mLabelingOptionsFrame);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setHorizontalSpacing(0);
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        mOptionsTab = new QTabWidget(mLabelingOptionsFrame);
        mOptionsTab->setObjectName(QString::fromUtf8("mOptionsTab"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mOptionsTab->sizePolicy().hasHeightForWidth());
        mOptionsTab->setSizePolicy(sizePolicy4);
        mOptionsTab->setTabPosition(QTabWidget::North);
        mOptionsTab->setTabShape(QTabWidget::Rounded);
        mOptionsTab->setIconSize(QSize(20, 20));
        mOptionsTab->setElideMode(Qt::ElideNone);
        mOptionsTab->setDocumentMode(true);
        mOptionsTab->setTabsClosable(false);
        textTab = new QWidget();
        textTab->setObjectName(QString::fromUtf8("textTab"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labeltext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(textTab, icon1, QString());
        formattingTab = new QWidget();
        formattingTab->setObjectName(QString::fromUtf8("formattingTab"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelformatting.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(formattingTab, icon2, QString());
        bufferTab = new QWidget();
        bufferTab->setObjectName(QString::fromUtf8("bufferTab"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelbuffer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(bufferTab, icon3, QString());
        maskTab = new QWidget();
        maskTab->setObjectName(QString::fromUtf8("maskTab"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelmask.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(maskTab, icon4, QString());
        backgroundTab = new QWidget();
        backgroundTab->setObjectName(QString::fromUtf8("backgroundTab"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelbackground.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(backgroundTab, icon5, QString());
        shadowTab = new QWidget();
        shadowTab->setObjectName(QString::fromUtf8("shadowTab"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelshadow.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(shadowTab, icon6, QString());
        calloutsTab = new QWidget();
        calloutsTab->setObjectName(QString::fromUtf8("calloutsTab"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelcallout.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(calloutsTab, icon7, QString());
        placementTab = new QWidget();
        placementTab->setObjectName(QString::fromUtf8("placementTab"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelplacement.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(placementTab, icon8, QString());
        renderingTab = new QWidget();
        renderingTab->setObjectName(QString::fromUtf8("renderingTab"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/render.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(renderingTab, icon9, QString());

        gridLayout_17->addWidget(mOptionsTab, 0, 0, 1, 1);

        mLabelingOptionsSplitter = new QSplitter(mLabelingOptionsFrame);
        mLabelingOptionsSplitter->setObjectName(QString::fromUtf8("mLabelingOptionsSplitter"));
        mLabelingOptionsSplitter->setOrientation(Qt::Horizontal);
        mLabelingOptionsSplitter->setChildrenCollapsible(false);
        mLabelingOptionsListFrame = new QFrame(mLabelingOptionsSplitter);
        mLabelingOptionsListFrame->setObjectName(QString::fromUtf8("mLabelingOptionsListFrame"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mLabelingOptionsListFrame->sizePolicy().hasHeightForWidth());
        mLabelingOptionsListFrame->setSizePolicy(sizePolicy5);
        mLabelingOptionsListFrame->setMinimumSize(QSize(32, 0));
        mLabelingOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mLabelingOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(mLabelingOptionsListFrame);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(3, 0, 0, 0);
        mLabelingOptionsListWidget = new QListWidget(mLabelingOptionsListFrame);
        mLabelingOptionsListWidget->setObjectName(QString::fromUtf8("mLabelingOptionsListWidget"));
        mLabelingOptionsListWidget->setMinimumSize(QSize(32, 0));
        mLabelingOptionsListWidget->setProperty("showDropIndicator", QVariant(false));
        mLabelingOptionsListWidget->setIconSize(QSize(20, 20));

        verticalLayout_23->addWidget(mLabelingOptionsListWidget);

        mLabelingOptionsSplitter->addWidget(mLabelingOptionsListFrame);
        mLabelingOptionGroupsFrame = new QFrame(mLabelingOptionsSplitter);
        mLabelingOptionGroupsFrame->setObjectName(QString::fromUtf8("mLabelingOptionGroupsFrame"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(10);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mLabelingOptionGroupsFrame->sizePolicy().hasHeightForWidth());
        mLabelingOptionGroupsFrame->setSizePolicy(sizePolicy6);
        mLabelingOptionGroupsFrame->setFrameShape(QFrame::NoFrame);
        mLabelingOptionGroupsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mLabelingOptionGroupsFrame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mLabelStackedWidget = new QStackedWidget(mLabelingOptionGroupsFrame);
        mLabelStackedWidget->setObjectName(QString::fromUtf8("mLabelStackedWidget"));
        mLabelPage_Text = new QWidget();
        mLabelPage_Text->setObjectName(QString::fromUtf8("mLabelPage_Text"));
        verticalLayout_6 = new QVBoxLayout(mLabelPage_Text);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mLabelPage_Text);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 305, 307));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 6, 0);
        mFontStyleGroupBox = new QFrame(scrollAreaWidgetContents);
        mFontStyleGroupBox->setObjectName(QString::fromUtf8("mFontStyleGroupBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mFontStyleGroupBox->sizePolicy().hasHeightForWidth());
        mFontStyleGroupBox->setSizePolicy(sizePolicy7);
        mFontStyleGroupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_6 = new QGridLayout(mFontStyleGroupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        mFontOpacityDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontOpacityDDBtn->setObjectName(QString::fromUtf8("mFontOpacityDDBtn"));

        gridLayout_6->addWidget(mFontOpacityDDBtn, 8, 2, 1, 1);

        mFontSizeLabel = new QLabel(mFontStyleGroupBox);
        mFontSizeLabel->setObjectName(QString::fromUtf8("mFontSizeLabel"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(mFontSizeLabel->sizePolicy().hasHeightForWidth());
        mFontSizeLabel->setSizePolicy(sizePolicy8);

        gridLayout_6->addWidget(mFontSizeLabel, 5, 0, 1, 1);

        mFontSizeDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontSizeDDBtn->setObjectName(QString::fromUtf8("mFontSizeDDBtn"));

        gridLayout_6->addWidget(mFontSizeDDBtn, 5, 2, 1, 1);

        mFontLabel = new QLabel(mFontStyleGroupBox);
        mFontLabel->setObjectName(QString::fromUtf8("mFontLabel"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(mFontLabel->sizePolicy().hasHeightForWidth());
        mFontLabel->setSizePolicy(sizePolicy9);
        mFontLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(mFontLabel, 1, 0, 1, 1);

        mFontFamilyFrame = new QFrame(mFontStyleGroupBox);
        mFontFamilyFrame->setObjectName(QString::fromUtf8("mFontFamilyFrame"));
        horizontalLayout_5 = new QHBoxLayout(mFontFamilyFrame);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        mFontMissingLabel = new QLabel(mFontFamilyFrame);
        mFontMissingLabel->setObjectName(QString::fromUtf8("mFontMissingLabel"));
        sizePolicy1.setHeightForWidth(mFontMissingLabel->sizePolicy().hasHeightForWidth());
        mFontMissingLabel->setSizePolicy(sizePolicy1);
        mFontMissingLabel->setStyleSheet(QString::fromUtf8("color: #990000;\n"
"font-style: italic;"));
        mFontMissingLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(mFontMissingLabel);


        gridLayout_6->addWidget(mFontFamilyFrame, 2, 1, 1, 1);

        btnTextColor = new QgsColorButton(mFontStyleGroupBox);
        btnTextColor->setObjectName(QString::fromUtf8("btnTextColor"));
        sizePolicy4.setHeightForWidth(btnTextColor->sizePolicy().hasHeightForWidth());
        btnTextColor->setSizePolicy(sizePolicy4);
        btnTextColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_6->addWidget(btnTextColor, 7, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mFontUnderlineBtn = new QToolButton(mFontStyleGroupBox);
        mFontUnderlineBtn->setObjectName(QString::fromUtf8("mFontUnderlineBtn"));
        mFontUnderlineBtn->setEnabled(true);
        mFontUnderlineBtn->setMinimumSize(QSize(24, 24));
        mFontUnderlineBtn->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setPointSize(13);
        font.setUnderline(true);
        mFontUnderlineBtn->setFont(font);
        mFontUnderlineBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontUnderlineBtn);

        mFontUnderlineDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontUnderlineDDBtn->setObjectName(QString::fromUtf8("mFontUnderlineDDBtn"));

        horizontalLayout_13->addWidget(mFontUnderlineDDBtn);

        mFontStrikethroughBtn = new QToolButton(mFontStyleGroupBox);
        mFontStrikethroughBtn->setObjectName(QString::fromUtf8("mFontStrikethroughBtn"));
        mFontStrikethroughBtn->setEnabled(true);
        mFontStrikethroughBtn->setMinimumSize(QSize(24, 24));
        mFontStrikethroughBtn->setMaximumSize(QSize(24, 24));
        QFont font1;
        font1.setPointSize(13);
        font1.setStrikeOut(true);
        mFontStrikethroughBtn->setFont(font1);
        mFontStrikethroughBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontStrikethroughBtn);

        mFontStrikeoutDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontStrikeoutDDBtn->setObjectName(QString::fromUtf8("mFontStrikeoutDDBtn"));

        horizontalLayout_13->addWidget(mFontStrikeoutDDBtn);

        horizontalSpacer_11 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        mFontBoldBtn = new QToolButton(mFontStyleGroupBox);
        mFontBoldBtn->setObjectName(QString::fromUtf8("mFontBoldBtn"));
        mFontBoldBtn->setEnabled(false);
        mFontBoldBtn->setMinimumSize(QSize(24, 24));
        mFontBoldBtn->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(13);
        mFontBoldBtn->setFont(font2);
        mFontBoldBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontBoldBtn);

        mFontBoldDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontBoldDDBtn->setObjectName(QString::fromUtf8("mFontBoldDDBtn"));

        horizontalLayout_13->addWidget(mFontBoldDDBtn);

        mFontItalicBtn = new QToolButton(mFontStyleGroupBox);
        mFontItalicBtn->setObjectName(QString::fromUtf8("mFontItalicBtn"));
        mFontItalicBtn->setEnabled(false);
        mFontItalicBtn->setMinimumSize(QSize(24, 24));
        mFontItalicBtn->setMaximumSize(QSize(24, 24));
        QFont font3;
        font3.setPointSize(13);
        font3.setItalic(true);
        mFontItalicBtn->setFont(font3);
        mFontItalicBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontItalicBtn);


        gridLayout_6->addLayout(horizontalLayout_13, 4, 1, 1, 1);

        mFontStyleComboBox = new QComboBox(mFontStyleGroupBox);
        mFontStyleComboBox->setObjectName(QString::fromUtf8("mFontStyleComboBox"));
        sizePolicy4.setHeightForWidth(mFontStyleComboBox->sizePolicy().hasHeightForWidth());
        mFontStyleComboBox->setSizePolicy(sizePolicy4);
        mFontStyleComboBox->setMinimumSize(QSize(0, 0));
        mFontStyleComboBox->setMaximumSize(QSize(16777215, 16777215));
        mFontStyleComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_6->addWidget(mFontStyleComboBox, 3, 1, 1, 1);

        mFontTranspLabel = new QLabel(mFontStyleGroupBox);
        mFontTranspLabel->setObjectName(QString::fromUtf8("mFontTranspLabel"));
        mFontTranspLabel->setEnabled(true);

        gridLayout_6->addWidget(mFontTranspLabel, 8, 0, 1, 1);

        mFontDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontDDBtn->setObjectName(QString::fromUtf8("mFontDDBtn"));

        gridLayout_6->addWidget(mFontDDBtn, 1, 2, 1, 1);

        frame = new QFrame(mFontStyleGroupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy7.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy7);
        horizontalLayout_23 = new QHBoxLayout(frame);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);

        gridLayout_6->addWidget(frame, 13, 1, 1, 1);

        mHtmlFormattingCheckBox = new QCheckBox(mFontStyleGroupBox);
        mHtmlFormattingCheckBox->setObjectName(QString::fromUtf8("mHtmlFormattingCheckBox"));

        gridLayout_6->addWidget(mHtmlFormattingCheckBox, 12, 0, 1, 3);

        mFontStyleDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontStyleDDBtn->setObjectName(QString::fromUtf8("mFontStyleDDBtn"));

        gridLayout_6->addWidget(mFontStyleDDBtn, 3, 2, 1, 1);

        mFontUnitsDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontUnitsDDBtn->setObjectName(QString::fromUtf8("mFontUnitsDDBtn"));

        gridLayout_6->addWidget(mFontUnitsDDBtn, 6, 2, 1, 1);

        mFontColorLabel = new QLabel(mFontStyleGroupBox);
        mFontColorLabel->setObjectName(QString::fromUtf8("mFontColorLabel"));
        sizePolicy8.setHeightForWidth(mFontColorLabel->sizePolicy().hasHeightForWidth());
        mFontColorLabel->setSizePolicy(sizePolicy8);
        mFontColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(mFontColorLabel, 7, 0, 1, 1);

        mFontLabel_2 = new QLabel(mFontStyleGroupBox);
        mFontLabel_2->setObjectName(QString::fromUtf8("mFontLabel_2"));
        sizePolicy9.setHeightForWidth(mFontLabel_2->sizePolicy().hasHeightForWidth());
        mFontLabel_2->setSizePolicy(sizePolicy9);
        mFontLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(mFontLabel_2, 0, 0, 1, 1);

        mFontStyleLabel = new QLabel(mFontStyleGroupBox);
        mFontStyleLabel->setObjectName(QString::fromUtf8("mFontStyleLabel"));
        sizePolicy8.setHeightForWidth(mFontStyleLabel->sizePolicy().hasHeightForWidth());
        mFontStyleLabel->setSizePolicy(sizePolicy8);

        gridLayout_6->addWidget(mFontStyleLabel, 3, 0, 1, 1);

        mFontSizeUnitWidget = new QgsUnitSelectionWidget(mFontStyleGroupBox);
        mFontSizeUnitWidget->setObjectName(QString::fromUtf8("mFontSizeUnitWidget"));
        mFontSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_6->addWidget(mFontSizeUnitWidget, 6, 1, 1, 1);

        mFontFamilyCmbBx = new QFontComboBox(mFontStyleGroupBox);
        mFontFamilyCmbBx->setObjectName(QString::fromUtf8("mFontFamilyCmbBx"));
        mFontFamilyCmbBx->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        mFontFamilyCmbBx->setMinimumContentsLength(8);

        gridLayout_6->addWidget(mFontFamilyCmbBx, 1, 1, 1, 1);

        mFontColorDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontColorDDBtn->setObjectName(QString::fromUtf8("mFontColorDDBtn"));

        gridLayout_6->addWidget(mFontColorDDBtn, 7, 2, 1, 1);

        mFontSizeSpinBox = new QgsDoubleSpinBox(mFontStyleGroupBox);
        mFontSizeSpinBox->setObjectName(QString::fromUtf8("mFontSizeSpinBox"));
        sizePolicy4.setHeightForWidth(mFontSizeSpinBox->sizePolicy().hasHeightForWidth());
        mFontSizeSpinBox->setSizePolicy(sizePolicy4);
        mFontSizeSpinBox->setMinimumSize(QSize(0, 0));
        mFontSizeSpinBox->setDecimals(4);
        mFontSizeSpinBox->setMaximum(999999999.000000000000000);
        mFontSizeSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mFontSizeSpinBox, 5, 1, 1, 1);

        mTextOpacityWidget = new QgsOpacityWidget(mFontStyleGroupBox);
        mTextOpacityWidget->setObjectName(QString::fromUtf8("mTextOpacityWidget"));
        mTextOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_6->addWidget(mTextOpacityWidget, 8, 1, 1, 1);

        mFontItalicDDBtn = new QgsPropertyOverrideButton(mFontStyleGroupBox);
        mFontItalicDDBtn->setObjectName(QString::fromUtf8("mFontItalicDDBtn"));

        gridLayout_6->addWidget(mFontItalicDDBtn, 4, 2, 1, 1);


        verticalLayout_2->addWidget(mFontStyleGroupBox);

        mTextFormatsListWidget = new QgsStyleItemsListWidget(scrollAreaWidgetContents);
        mTextFormatsListWidget->setObjectName(QString::fromUtf8("mTextFormatsListWidget"));

        verticalLayout_2->addWidget(mTextFormatsListWidget);

        verticalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);

        mLabelStackedWidget->addWidget(mLabelPage_Text);
        mLabelPage_Formatting = new QWidget();
        mLabelPage_Formatting->setObjectName(QString::fromUtf8("mLabelPage_Formatting"));
        verticalLayout_15 = new QVBoxLayout(mLabelPage_Formatting);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_36 = new QLabel(mLabelPage_Formatting);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        verticalLayout_15->addWidget(label_36);

        scrollArea_5 = new QgsScrollArea(mLabelPage_Formatting);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 350, 755));
        gridLayout_42 = new QGridLayout(scrollAreaWidgetContents_6);
        gridLayout_42->setSpacing(6);
        gridLayout_42->setContentsMargins(11, 11, 11, 11);
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        gridLayout_42->setContentsMargins(0, -1, 6, -1);
        label_10 = new QLabel(scrollAreaWidgetContents_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_42->addWidget(label_10, 1, 0, 1, 1);

        mFontWordSpacingDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_6);
        mFontWordSpacingDDBtn->setObjectName(QString::fromUtf8("mFontWordSpacingDDBtn"));

        gridLayout_42->addWidget(mFontWordSpacingDDBtn, 2, 3, 1, 1);

        mFontStretchDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_6);
        mFontStretchDDBtn->setObjectName(QString::fromUtf8("mFontStretchDDBtn"));

        gridLayout_42->addWidget(mFontStretchDDBtn, 3, 3, 1, 1);

        mCheckBoxSubstituteText = new QCheckBox(scrollAreaWidgetContents_6);
        mCheckBoxSubstituteText->setObjectName(QString::fromUtf8("mCheckBoxSubstituteText"));

        gridLayout_42->addWidget(mCheckBoxSubstituteText, 9, 0, 1, 3);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        mFontLetterSpacingLabel_3 = new QLabel(scrollAreaWidgetContents_6);
        mFontLetterSpacingLabel_3->setObjectName(QString::fromUtf8("mFontLetterSpacingLabel_3"));
        sizePolicy8.setHeightForWidth(mFontLetterSpacingLabel_3->sizePolicy().hasHeightForWidth());
        mFontLetterSpacingLabel_3->setSizePolicy(sizePolicy8);

        horizontalLayout_29->addWidget(mFontLetterSpacingLabel_3);

        mFontLetterSpacingSpinBox = new QgsDoubleSpinBox(scrollAreaWidgetContents_6);
        mFontLetterSpacingSpinBox->setObjectName(QString::fromUtf8("mFontLetterSpacingSpinBox"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(mFontLetterSpacingSpinBox->sizePolicy().hasHeightForWidth());
        mFontLetterSpacingSpinBox->setSizePolicy(sizePolicy10);
        mFontLetterSpacingSpinBox->setDecimals(4);
        mFontLetterSpacingSpinBox->setMinimum(-1000.000000000000000);
        mFontLetterSpacingSpinBox->setMaximum(999999999.000000000000000);
        mFontLetterSpacingSpinBox->setSingleStep(0.100000000000000);
        mFontLetterSpacingSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_29->addWidget(mFontLetterSpacingSpinBox);


        gridLayout_42->addLayout(horizontalLayout_29, 1, 1, 1, 2);

        mFontCaseDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_6);
        mFontCaseDDBtn->setObjectName(QString::fromUtf8("mFontCaseDDBtn"));

        gridLayout_42->addWidget(mFontCaseDDBtn, 0, 3, 1, 1);

        mFontCapitalsLabel = new QLabel(scrollAreaWidgetContents_6);
        mFontCapitalsLabel->setObjectName(QString::fromUtf8("mFontCapitalsLabel"));
        sizePolicy8.setHeightForWidth(mFontCapitalsLabel->sizePolicy().hasHeightForWidth());
        mFontCapitalsLabel->setSizePolicy(sizePolicy8);

        gridLayout_42->addWidget(mFontCapitalsLabel, 0, 0, 1, 1);

        mToolButtonConfigureSubstitutes = new QToolButton(scrollAreaWidgetContents_6);
        mToolButtonConfigureSubstitutes->setObjectName(QString::fromUtf8("mToolButtonConfigureSubstitutes"));
        mToolButtonConfigureSubstitutes->setEnabled(false);

        gridLayout_42->addWidget(mToolButtonConfigureSubstitutes, 9, 3, 1, 1);

        mFontBlendModeDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_6);
        mFontBlendModeDDBtn->setObjectName(QString::fromUtf8("mFontBlendModeDDBtn"));

        gridLayout_42->addWidget(mFontBlendModeDDBtn, 8, 3, 1, 1);

        mKerningCheckBox = new QCheckBox(scrollAreaWidgetContents_6);
        mKerningCheckBox->setObjectName(QString::fromUtf8("mKerningCheckBox"));

        gridLayout_42->addWidget(mKerningCheckBox, 6, 0, 1, 3);

        mFontCapitalsComboBox = new QComboBox(scrollAreaWidgetContents_6);
        mFontCapitalsComboBox->setObjectName(QString::fromUtf8("mFontCapitalsComboBox"));
        mFontCapitalsComboBox->setEnabled(true);
        sizePolicy10.setHeightForWidth(mFontCapitalsComboBox->sizePolicy().hasHeightForWidth());
        mFontCapitalsComboBox->setSizePolicy(sizePolicy10);
        mFontCapitalsComboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_42->addWidget(mFontCapitalsComboBox, 0, 1, 1, 2);

        comboBlendMode = new QgsBlendModeComboBox(scrollAreaWidgetContents_6);
        comboBlendMode->setObjectName(QString::fromUtf8("comboBlendMode"));

        gridLayout_42->addWidget(comboBlendMode, 8, 1, 1, 2);

        mFontLetterSpacingDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_6);
        mFontLetterSpacingDDBtn->setObjectName(QString::fromUtf8("mFontLetterSpacingDDBtn"));

        gridLayout_42->addWidget(mFontLetterSpacingDDBtn, 1, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_42->addItem(verticalSpacer_6, 13, 3, 1, 1);

        gridLayout_35 = new QGridLayout();
        gridLayout_35->setSpacing(6);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        gridLayout_35->setVerticalSpacing(6);
        label_24 = new QLabel(scrollAreaWidgetContents_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_35->addWidget(label_24, 1, 0, 1, 1);

        mMultiLinesFrame = new QFrame(scrollAreaWidgetContents_6);
        mMultiLinesFrame->setObjectName(QString::fromUtf8("mMultiLinesFrame"));
        mMultiLinesFrame->setFrameShape(QFrame::NoFrame);
        mMultiLinesFrame->setFrameShadow(QFrame::Raised);
        gridLayout_28 = new QGridLayout(mMultiLinesFrame);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        gridLayout_28->setContentsMargins(20, 0, 0, 0);
        mFontLineHeightDDBtn = new QgsPropertyOverrideButton(mMultiLinesFrame);
        mFontLineHeightDDBtn->setObjectName(QString::fromUtf8("mFontLineHeightDDBtn"));

        gridLayout_28->addWidget(mFontLineHeightDDBtn, 3, 3, 1, 1);

        mFontMultiLineAlignDDBtn = new QgsPropertyOverrideButton(mMultiLinesFrame);
        mFontMultiLineAlignDDBtn->setObjectName(QString::fromUtf8("mFontMultiLineAlignDDBtn"));

        gridLayout_28->addWidget(mFontMultiLineAlignDDBtn, 4, 3, 1, 1);

        mLabelWrapLinesTo = new QLabel(mMultiLinesFrame);
        mLabelWrapLinesTo->setObjectName(QString::fromUtf8("mLabelWrapLinesTo"));

        gridLayout_28->addWidget(mLabelWrapLinesTo, 1, 0, 1, 1);

        mLineHeightUnitWidget = new QgsUnitSelectionWidget(mMultiLinesFrame);
        mLineHeightUnitWidget->setObjectName(QString::fromUtf8("mLineHeightUnitWidget"));
        mLineHeightUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_28->addWidget(mLineHeightUnitWidget, 3, 2, 1, 1);

        mLabelWrapOnCharacter = new QLabel(mMultiLinesFrame);
        mLabelWrapOnCharacter->setObjectName(QString::fromUtf8("mLabelWrapOnCharacter"));
        sizePolicy8.setHeightForWidth(mLabelWrapOnCharacter->sizePolicy().hasHeightForWidth());
        mLabelWrapOnCharacter->setSizePolicy(sizePolicy8);

        gridLayout_28->addWidget(mLabelWrapOnCharacter, 0, 0, 1, 1);

        mAutoWrapLengthSpinBox = new QgsSpinBox(mMultiLinesFrame);
        mAutoWrapLengthSpinBox->setObjectName(QString::fromUtf8("mAutoWrapLengthSpinBox"));
        mAutoWrapLengthSpinBox->setEnabled(true);
        mAutoWrapLengthSpinBox->setMaximum(999);

        gridLayout_28->addWidget(mAutoWrapLengthSpinBox, 1, 1, 1, 2);

        wrapCharacterEdit = new QLineEdit(mMultiLinesFrame);
        wrapCharacterEdit->setObjectName(QString::fromUtf8("wrapCharacterEdit"));
        wrapCharacterEdit->setMinimumSize(QSize(0, 0));

        gridLayout_28->addWidget(wrapCharacterEdit, 0, 1, 1, 2);

        mFontLineHeightSpinBox = new QgsDoubleSpinBox(mMultiLinesFrame);
        mFontLineHeightSpinBox->setObjectName(QString::fromUtf8("mFontLineHeightSpinBox"));
        mFontLineHeightSpinBox->setEnabled(true);
        mFontLineHeightSpinBox->setMinimumSize(QSize(0, 0));
        mFontLineHeightSpinBox->setDecimals(4);
        mFontLineHeightSpinBox->setMinimum(0.000000000000000);
        mFontLineHeightSpinBox->setMaximum(999999999.000000000000000);
        mFontLineHeightSpinBox->setSingleStep(1.000000000000000);
        mFontLineHeightSpinBox->setValue(1.000000000000000);

        gridLayout_28->addWidget(mFontLineHeightSpinBox, 3, 1, 1, 1);

        mWrapCharDDBtn = new QgsPropertyOverrideButton(mMultiLinesFrame);
        mWrapCharDDBtn->setObjectName(QString::fromUtf8("mWrapCharDDBtn"));

        gridLayout_28->addWidget(mWrapCharDDBtn, 0, 3, 1, 1);

        mFontMultiLineLabel = new QLabel(mMultiLinesFrame);
        mFontMultiLineLabel->setObjectName(QString::fromUtf8("mFontMultiLineLabel"));
        sizePolicy8.setHeightForWidth(mFontMultiLineLabel->sizePolicy().hasHeightForWidth());
        mFontMultiLineLabel->setSizePolicy(sizePolicy8);

        gridLayout_28->addWidget(mFontMultiLineLabel, 4, 0, 1, 1);

        mAutoWrapTypeComboBox = new QComboBox(mMultiLinesFrame);
        mAutoWrapTypeComboBox->addItem(QString());
        mAutoWrapTypeComboBox->addItem(QString());
        mAutoWrapTypeComboBox->setObjectName(QString::fromUtf8("mAutoWrapTypeComboBox"));

        gridLayout_28->addWidget(mAutoWrapTypeComboBox, 2, 1, 1, 2);

        mAutoWrapLengthDDBtn = new QgsPropertyOverrideButton(mMultiLinesFrame);
        mAutoWrapLengthDDBtn->setObjectName(QString::fromUtf8("mAutoWrapLengthDDBtn"));

        gridLayout_28->addWidget(mAutoWrapLengthDDBtn, 1, 3, 1, 1);

        mFontLineHeightLabel = new QLabel(mMultiLinesFrame);
        mFontLineHeightLabel->setObjectName(QString::fromUtf8("mFontLineHeightLabel"));
        sizePolicy8.setHeightForWidth(mFontLineHeightLabel->sizePolicy().hasHeightForWidth());
        mFontLineHeightLabel->setSizePolicy(sizePolicy8);

        gridLayout_28->addWidget(mFontLineHeightLabel, 3, 0, 1, 1);

        mFontMultiLineAlignComboBox = new QComboBox(mMultiLinesFrame);
        mFontMultiLineAlignComboBox->setObjectName(QString::fromUtf8("mFontMultiLineAlignComboBox"));
        mFontMultiLineAlignComboBox->setEnabled(true);
        mFontMultiLineAlignComboBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout_28->addWidget(mFontMultiLineAlignComboBox, 4, 1, 1, 2);


        gridLayout_35->addWidget(mMultiLinesFrame, 2, 0, 1, 1);


        gridLayout_42->addLayout(gridLayout_35, 10, 0, 1, 4);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        mFontWordSpacingLabel_3 = new QLabel(scrollAreaWidgetContents_6);
        mFontWordSpacingLabel_3->setObjectName(QString::fromUtf8("mFontWordSpacingLabel_3"));
        sizePolicy8.setHeightForWidth(mFontWordSpacingLabel_3->sizePolicy().hasHeightForWidth());
        mFontWordSpacingLabel_3->setSizePolicy(sizePolicy8);

        horizontalLayout_30->addWidget(mFontWordSpacingLabel_3);

        mFontWordSpacingSpinBox = new QgsDoubleSpinBox(scrollAreaWidgetContents_6);
        mFontWordSpacingSpinBox->setObjectName(QString::fromUtf8("mFontWordSpacingSpinBox"));
        sizePolicy10.setHeightForWidth(mFontWordSpacingSpinBox->sizePolicy().hasHeightForWidth());
        mFontWordSpacingSpinBox->setSizePolicy(sizePolicy10);
        mFontWordSpacingSpinBox->setDecimals(4);
        mFontWordSpacingSpinBox->setMinimum(-1000.000000000000000);
        mFontWordSpacingSpinBox->setMaximum(999999999.000000000000000);
        mFontWordSpacingSpinBox->setSingleStep(0.100000000000000);
        mFontWordSpacingSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_30->addWidget(mFontWordSpacingSpinBox);


        gridLayout_42->addLayout(horizontalLayout_30, 2, 1, 1, 2);

        mSpinStretch = new QgsSpinBox(scrollAreaWidgetContents_6);
        mSpinStretch->setObjectName(QString::fromUtf8("mSpinStretch"));
        mSpinStretch->setMinimum(1);
        mSpinStretch->setMaximum(4000);
        mSpinStretch->setValue(100);

        gridLayout_42->addWidget(mSpinStretch, 3, 1, 1, 2);

        mLabelStretch = new QLabel(scrollAreaWidgetContents_6);
        mLabelStretch->setObjectName(QString::fromUtf8("mLabelStretch"));

        gridLayout_42->addWidget(mLabelStretch, 3, 0, 1, 1);

        gridLayout_34 = new QGridLayout();
        gridLayout_34->setSpacing(6);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        gridLayout_34->setVerticalSpacing(6);
        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_34->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        mFormatNumChkBx = new QCheckBox(scrollAreaWidgetContents_6);
        mFormatNumChkBx->setObjectName(QString::fromUtf8("mFormatNumChkBx"));
        QSizePolicy sizePolicy11(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(mFormatNumChkBx->sizePolicy().hasHeightForWidth());
        mFormatNumChkBx->setSizePolicy(sizePolicy11);

        gridLayout_34->addWidget(mFormatNumChkBx, 0, 0, 1, 1);

        mFormatNumDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_6);
        mFormatNumDDBtn->setObjectName(QString::fromUtf8("mFormatNumDDBtn"));

        gridLayout_34->addWidget(mFormatNumDDBtn, 0, 1, 1, 1);

        mFormatNumFrame = new QFrame(scrollAreaWidgetContents_6);
        mFormatNumFrame->setObjectName(QString::fromUtf8("mFormatNumFrame"));
        mFormatNumFrame->setFrameShape(QFrame::NoFrame);
        mFormatNumFrame->setFrameShadow(QFrame::Raised);
        gridLayout_31 = new QGridLayout(mFormatNumFrame);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        gridLayout_31->setContentsMargins(20, 0, 0, 0);
        mFormatNumDecimalsLabel = new QLabel(mFormatNumFrame);
        mFormatNumDecimalsLabel->setObjectName(QString::fromUtf8("mFormatNumDecimalsLabel"));

        gridLayout_31->addWidget(mFormatNumDecimalsLabel, 0, 0, 1, 1);

        mFormatNumDecimalsSpnBx = new QgsSpinBox(mFormatNumFrame);
        mFormatNumDecimalsSpnBx->setObjectName(QString::fromUtf8("mFormatNumDecimalsSpnBx"));
        sizePolicy2.setHeightForWidth(mFormatNumDecimalsSpnBx->sizePolicy().hasHeightForWidth());
        mFormatNumDecimalsSpnBx->setSizePolicy(sizePolicy2);
        mFormatNumDecimalsSpnBx->setMaximum(20);

        gridLayout_31->addWidget(mFormatNumDecimalsSpnBx, 0, 1, 1, 1);

        mFormatNumDecimalsDDBtn = new QgsPropertyOverrideButton(mFormatNumFrame);
        mFormatNumDecimalsDDBtn->setObjectName(QString::fromUtf8("mFormatNumDecimalsDDBtn"));

        gridLayout_31->addWidget(mFormatNumDecimalsDDBtn, 0, 2, 1, 1);

        mFormatNumPlusSignChkBx = new QCheckBox(mFormatNumFrame);
        mFormatNumPlusSignChkBx->setObjectName(QString::fromUtf8("mFormatNumPlusSignChkBx"));
        mFormatNumPlusSignChkBx->setLayoutDirection(Qt::LeftToRight);

        gridLayout_31->addWidget(mFormatNumPlusSignChkBx, 1, 0, 1, 2);

        mFormatNumPlusSignDDBtn = new QgsPropertyOverrideButton(mFormatNumFrame);
        mFormatNumPlusSignDDBtn->setObjectName(QString::fromUtf8("mFormatNumPlusSignDDBtn"));

        gridLayout_31->addWidget(mFormatNumPlusSignDDBtn, 1, 2, 1, 1);


        gridLayout_34->addWidget(mFormatNumFrame, 1, 0, 1, 3);


        gridLayout_42->addLayout(gridLayout_34, 12, 0, 1, 4);

        mTextOrientationComboBox = new QComboBox(scrollAreaWidgetContents_6);
        mTextOrientationComboBox->setObjectName(QString::fromUtf8("mTextOrientationComboBox"));

        gridLayout_42->addWidget(mTextOrientationComboBox, 7, 1, 1, 2);

        mDirectSymbolsFrame = new QFrame(scrollAreaWidgetContents_6);
        mDirectSymbolsFrame->setObjectName(QString::fromUtf8("mDirectSymbolsFrame"));
        gridLayout_33 = new QGridLayout(mDirectSymbolsFrame);
        gridLayout_33->setSpacing(6);
        gridLayout_33->setContentsMargins(11, 11, 11, 11);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        gridLayout_33->setVerticalSpacing(6);
        gridLayout_33->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_33->addItem(horizontalSpacer_9, 0, 2, 1, 1);

        mDirectSymbDDBtn = new QgsPropertyOverrideButton(mDirectSymbolsFrame);
        mDirectSymbDDBtn->setObjectName(QString::fromUtf8("mDirectSymbDDBtn"));

        gridLayout_33->addWidget(mDirectSymbDDBtn, 0, 1, 1, 1);

        mDirectSymbChkBx = new QCheckBox(mDirectSymbolsFrame);
        mDirectSymbChkBx->setObjectName(QString::fromUtf8("mDirectSymbChkBx"));
        sizePolicy11.setHeightForWidth(mDirectSymbChkBx->sizePolicy().hasHeightForWidth());
        mDirectSymbChkBx->setSizePolicy(sizePolicy11);

        gridLayout_33->addWidget(mDirectSymbChkBx, 0, 0, 1, 1);

        mDirectSymbFrame = new QFrame(mDirectSymbolsFrame);
        mDirectSymbFrame->setObjectName(QString::fromUtf8("mDirectSymbFrame"));
        mDirectSymbFrame->setFrameShape(QFrame::NoFrame);
        mDirectSymbFrame->setFrameShadow(QFrame::Raised);
        gridLayout_30 = new QGridLayout(mDirectSymbFrame);
        gridLayout_30->setSpacing(6);
        gridLayout_30->setContentsMargins(11, 11, 11, 11);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        gridLayout_30->setContentsMargins(20, 0, 0, 0);
        mDirectSymbRightFrame = new QFrame(mDirectSymbFrame);
        mDirectSymbRightFrame->setObjectName(QString::fromUtf8("mDirectSymbRightFrame"));
        horizontalLayout_6 = new QHBoxLayout(mDirectSymbRightFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        mDirectSymbRightLineEdit = new QLineEdit(mDirectSymbRightFrame);
        mDirectSymbRightLineEdit->setObjectName(QString::fromUtf8("mDirectSymbRightLineEdit"));
        sizePolicy10.setHeightForWidth(mDirectSymbRightLineEdit->sizePolicy().hasHeightForWidth());
        mDirectSymbRightLineEdit->setSizePolicy(sizePolicy10);
        mDirectSymbRightLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(mDirectSymbRightLineEdit);

        mDirectSymbRightToolBtn = new QToolButton(mDirectSymbRightFrame);
        mDirectSymbRightToolBtn->setObjectName(QString::fromUtf8("mDirectSymbRightToolBtn"));
        mDirectSymbRightToolBtn->setMaximumSize(QSize(16777215, 22));

        horizontalLayout_6->addWidget(mDirectSymbRightToolBtn);


        gridLayout_30->addWidget(mDirectSymbRightFrame, 1, 1, 1, 1);

        mDirectSymbPlacementDDBtn = new QgsPropertyOverrideButton(mDirectSymbFrame);
        mDirectSymbPlacementDDBtn->setObjectName(QString::fromUtf8("mDirectSymbPlacementDDBtn"));

        gridLayout_30->addWidget(mDirectSymbPlacementDDBtn, 2, 2, 1, 1);

        mDirectSymbLeftDDBtn = new QgsPropertyOverrideButton(mDirectSymbFrame);
        mDirectSymbLeftDDBtn->setObjectName(QString::fromUtf8("mDirectSymbLeftDDBtn"));

        gridLayout_30->addWidget(mDirectSymbLeftDDBtn, 0, 2, 1, 1);

        mDirectSymbLeftLabel = new QLabel(mDirectSymbFrame);
        mDirectSymbLeftLabel->setObjectName(QString::fromUtf8("mDirectSymbLeftLabel"));
        sizePolicy8.setHeightForWidth(mDirectSymbLeftLabel->sizePolicy().hasHeightForWidth());
        mDirectSymbLeftLabel->setSizePolicy(sizePolicy8);

        gridLayout_30->addWidget(mDirectSymbLeftLabel, 0, 0, 1, 1);

        mDirectSymbRightLabel = new QLabel(mDirectSymbFrame);
        mDirectSymbRightLabel->setObjectName(QString::fromUtf8("mDirectSymbRightLabel"));

        gridLayout_30->addWidget(mDirectSymbRightLabel, 1, 0, 1, 1);

        mDirectSymbPlacementLabel = new QLabel(mDirectSymbFrame);
        mDirectSymbPlacementLabel->setObjectName(QString::fromUtf8("mDirectSymbPlacementLabel"));
        sizePolicy8.setHeightForWidth(mDirectSymbPlacementLabel->sizePolicy().hasHeightForWidth());
        mDirectSymbPlacementLabel->setSizePolicy(sizePolicy8);

        gridLayout_30->addWidget(mDirectSymbPlacementLabel, 2, 0, 1, 1);

        mDirectSymbRevChkBx = new QCheckBox(mDirectSymbFrame);
        mDirectSymbRevChkBx->setObjectName(QString::fromUtf8("mDirectSymbRevChkBx"));

        gridLayout_30->addWidget(mDirectSymbRevChkBx, 3, 0, 1, 2);

        mDirectSymbRightDDBtn = new QgsPropertyOverrideButton(mDirectSymbFrame);
        mDirectSymbRightDDBtn->setObjectName(QString::fromUtf8("mDirectSymbRightDDBtn"));

        gridLayout_30->addWidget(mDirectSymbRightDDBtn, 1, 2, 1, 1);

        mDirectSymbLeftFrame = new QFrame(mDirectSymbFrame);
        mDirectSymbLeftFrame->setObjectName(QString::fromUtf8("mDirectSymbLeftFrame"));
        horizontalLayout_21 = new QHBoxLayout(mDirectSymbLeftFrame);
        horizontalLayout_21->setSpacing(0);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        mDirectSymbLeftLineEdit = new QLineEdit(mDirectSymbLeftFrame);
        mDirectSymbLeftLineEdit->setObjectName(QString::fromUtf8("mDirectSymbLeftLineEdit"));
        sizePolicy10.setHeightForWidth(mDirectSymbLeftLineEdit->sizePolicy().hasHeightForWidth());
        mDirectSymbLeftLineEdit->setSizePolicy(sizePolicy10);
        mDirectSymbLeftLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(mDirectSymbLeftLineEdit);

        mDirectSymbLeftToolBtn = new QToolButton(mDirectSymbLeftFrame);
        mDirectSymbLeftToolBtn->setObjectName(QString::fromUtf8("mDirectSymbLeftToolBtn"));
        mDirectSymbLeftToolBtn->setMaximumSize(QSize(16777215, 22));

        horizontalLayout_21->addWidget(mDirectSymbLeftToolBtn);


        gridLayout_30->addWidget(mDirectSymbLeftFrame, 0, 1, 1, 1);

        mDirectSymbRevDDBtn = new QgsPropertyOverrideButton(mDirectSymbFrame);
        mDirectSymbRevDDBtn->setObjectName(QString::fromUtf8("mDirectSymbRevDDBtn"));

        gridLayout_30->addWidget(mDirectSymbRevDDBtn, 3, 2, 1, 1);

        mDirectSymbPlacementFrame = new QFrame(mDirectSymbFrame);
        mDirectSymbPlacementFrame->setObjectName(QString::fromUtf8("mDirectSymbPlacementFrame"));
        horizontalLayout_17 = new QHBoxLayout(mDirectSymbPlacementFrame);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        mDirectSymbRadioBtnLR = new QRadioButton(mDirectSymbPlacementFrame);
        mDirectSymbRadioBtnLR->setObjectName(QString::fromUtf8("mDirectSymbRadioBtnLR"));
        sizePolicy11.setHeightForWidth(mDirectSymbRadioBtnLR->sizePolicy().hasHeightForWidth());
        mDirectSymbRadioBtnLR->setSizePolicy(sizePolicy11);
        mDirectSymbRadioBtnLR->setChecked(true);

        horizontalLayout_17->addWidget(mDirectSymbRadioBtnLR);

        mDirectSymbRadioBtnAbove = new QRadioButton(mDirectSymbPlacementFrame);
        mDirectSymbRadioBtnAbove->setObjectName(QString::fromUtf8("mDirectSymbRadioBtnAbove"));
        sizePolicy11.setHeightForWidth(mDirectSymbRadioBtnAbove->sizePolicy().hasHeightForWidth());
        mDirectSymbRadioBtnAbove->setSizePolicy(sizePolicy11);

        horizontalLayout_17->addWidget(mDirectSymbRadioBtnAbove);

        mDirectSymbRadioBtnBelow = new QRadioButton(mDirectSymbPlacementFrame);
        mDirectSymbRadioBtnBelow->setObjectName(QString::fromUtf8("mDirectSymbRadioBtnBelow"));

        horizontalLayout_17->addWidget(mDirectSymbRadioBtnBelow);


        gridLayout_30->addWidget(mDirectSymbPlacementFrame, 2, 1, 1, 1);


        gridLayout_33->addWidget(mDirectSymbFrame, 1, 0, 1, 3);


        gridLayout_42->addWidget(mDirectSymbolsFrame, 11, 0, 1, 4);

        mTextOrientationDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_6);
        mTextOrientationDDBtn->setObjectName(QString::fromUtf8("mTextOrientationDDBtn"));

        gridLayout_42->addWidget(mTextOrientationDDBtn, 7, 3, 1, 1);

        labelBlendMode = new QLabel(scrollAreaWidgetContents_6);
        labelBlendMode->setObjectName(QString::fromUtf8("labelBlendMode"));

        gridLayout_42->addWidget(labelBlendMode, 8, 0, 1, 1);

        labelTextOrientation = new QLabel(scrollAreaWidgetContents_6);
        labelTextOrientation->setObjectName(QString::fromUtf8("labelTextOrientation"));

        gridLayout_42->addWidget(labelTextOrientation, 7, 0, 1, 1);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(-1, -1, -1, 0);
        mTabStopDistanceSpin = new QgsDoubleSpinBox(scrollAreaWidgetContents_6);
        mTabStopDistanceSpin->setObjectName(QString::fromUtf8("mTabStopDistanceSpin"));
        sizePolicy10.setHeightForWidth(mTabStopDistanceSpin->sizePolicy().hasHeightForWidth());
        mTabStopDistanceSpin->setSizePolicy(sizePolicy10);
        mTabStopDistanceSpin->setDecimals(4);
        mTabStopDistanceSpin->setMinimum(-1000.000000000000000);
        mTabStopDistanceSpin->setMaximum(999999999.000000000000000);
        mTabStopDistanceSpin->setSingleStep(0.100000000000000);
        mTabStopDistanceSpin->setProperty("showClearButton", QVariant(true));

        horizontalLayout_31->addWidget(mTabStopDistanceSpin);

        mTabDistanceUnitWidget = new QgsUnitSelectionWidget(scrollAreaWidgetContents_6);
        mTabDistanceUnitWidget->setObjectName(QString::fromUtf8("mTabDistanceUnitWidget"));
        mTabDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_31->addWidget(mTabDistanceUnitWidget);

        mTabStopsButton = new QToolButton(scrollAreaWidgetContents_6);
        mTabStopsButton->setObjectName(QString::fromUtf8("mTabStopsButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabStopsButton->setIcon(icon10);
        mTabStopsButton->setAutoRaise(true);

        horizontalLayout_31->addWidget(mTabStopsButton);


        gridLayout_42->addLayout(horizontalLayout_31, 4, 1, 1, 2);

        mTabDistanceDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_6);
        mTabDistanceDDBtn->setObjectName(QString::fromUtf8("mTabDistanceDDBtn"));

        gridLayout_42->addWidget(mTabDistanceDDBtn, 4, 3, 1, 1);

        mLabelStretch_2 = new QLabel(scrollAreaWidgetContents_6);
        mLabelStretch_2->setObjectName(QString::fromUtf8("mLabelStretch_2"));

        gridLayout_42->addWidget(mLabelStretch_2, 4, 0, 1, 1);

        scrollArea_5->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_15->addWidget(scrollArea_5);

        mLabelStackedWidget->addWidget(mLabelPage_Formatting);
        mLabelPage_Buffer = new QWidget();
        mLabelPage_Buffer->setObjectName(QString::fromUtf8("mLabelPage_Buffer"));
        verticalLayout_7 = new QVBoxLayout(mLabelPage_Buffer);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        scrollArea_7 = new QgsScrollArea(mLabelPage_Buffer);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 276, 299));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 6, 0);
        gridLayout_36 = new QGridLayout();
        gridLayout_36->setSpacing(6);
        gridLayout_36->setObjectName(QString::fromUtf8("gridLayout_36"));
        mBufferDrawDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_3);
        mBufferDrawDDBtn->setObjectName(QString::fromUtf8("mBufferDrawDDBtn"));

        gridLayout_36->addWidget(mBufferDrawDDBtn, 1, 1, 1, 1);

        mBufferDrawChkBx = new QCheckBox(scrollAreaWidgetContents_3);
        mBufferDrawChkBx->setObjectName(QString::fromUtf8("mBufferDrawChkBx"));
        sizePolicy11.setHeightForWidth(mBufferDrawChkBx->sizePolicy().hasHeightForWidth());
        mBufferDrawChkBx->setSizePolicy(sizePolicy11);

        gridLayout_36->addWidget(mBufferDrawChkBx, 1, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_13, 1, 2, 1, 1);

        mBufferFrame = new QFrame(scrollAreaWidgetContents_3);
        mBufferFrame->setObjectName(QString::fromUtf8("mBufferFrame"));
        gridLayout_12 = new QGridLayout(mBufferFrame);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(20, 0, 0, 0);
        mBufferColorDDBtn = new QgsPropertyOverrideButton(mBufferFrame);
        mBufferColorDDBtn->setObjectName(QString::fromUtf8("mBufferColorDDBtn"));

        gridLayout_12->addWidget(mBufferColorDDBtn, 2, 2, 1, 1);

        mBufferBlendModeDDBtn = new QgsPropertyOverrideButton(mBufferFrame);
        mBufferBlendModeDDBtn->setObjectName(QString::fromUtf8("mBufferBlendModeDDBtn"));

        gridLayout_12->addWidget(mBufferBlendModeDDBtn, 7, 2, 1, 1);

        mBufferSizeDDBtn = new QgsPropertyOverrideButton(mBufferFrame);
        mBufferSizeDDBtn->setObjectName(QString::fromUtf8("mBufferSizeDDBtn"));

        gridLayout_12->addWidget(mBufferSizeDDBtn, 0, 2, 1, 1);

        frame_5 = new QFrame(mBufferFrame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        sizePolicy7.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy7);
        horizontalLayout_10 = new QHBoxLayout(frame_5);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);

        gridLayout_12->addWidget(frame_5, 5, 1, 1, 1);

        labelBufferBlend = new QLabel(mBufferFrame);
        labelBufferBlend->setObjectName(QString::fromUtf8("labelBufferBlend"));

        gridLayout_12->addWidget(labelBufferBlend, 7, 0, 1, 1);

        btnBufferColor = new QgsColorButton(mBufferFrame);
        btnBufferColor->setObjectName(QString::fromUtf8("btnBufferColor"));
        sizePolicy4.setHeightForWidth(btnBufferColor->sizePolicy().hasHeightForWidth());
        btnBufferColor->setSizePolicy(sizePolicy4);
        btnBufferColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_12->addWidget(btnBufferColor, 2, 1, 1, 1);

        label_5 = new QLabel(mBufferFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_12->addWidget(label_5, 6, 0, 1, 1);

        mBufferEffectWidget = new QgsEffectStackCompactWidget(mBufferFrame);
        mBufferEffectWidget->setObjectName(QString::fromUtf8("mBufferEffectWidget"));

        gridLayout_12->addWidget(mBufferEffectWidget, 8, 0, 1, 3);

        comboBufferBlendMode = new QgsBlendModeComboBox(mBufferFrame);
        comboBufferBlendMode->setObjectName(QString::fromUtf8("comboBufferBlendMode"));

        gridLayout_12->addWidget(comboBufferBlendMode, 7, 1, 1, 1);

        mBufferTranspFillChbx = new QCheckBox(mBufferFrame);
        mBufferTranspFillChbx->setObjectName(QString::fromUtf8("mBufferTranspFillChbx"));
        mBufferTranspFillChbx->setChecked(true);

        gridLayout_12->addWidget(mBufferTranspFillChbx, 3, 1, 1, 1);

        label_31 = new QLabel(mBufferFrame);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy8.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy8);
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(label_31, 0, 0, 1, 1);

        mBufferUnitWidget = new QgsUnitSelectionWidget(mBufferFrame);
        mBufferUnitWidget->setObjectName(QString::fromUtf8("mBufferUnitWidget"));
        mBufferUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(mBufferUnitWidget, 1, 1, 1, 1);

        mBufferJoinStyleDDBtn = new QgsPropertyOverrideButton(mBufferFrame);
        mBufferJoinStyleDDBtn->setObjectName(QString::fromUtf8("mBufferJoinStyleDDBtn"));

        gridLayout_12->addWidget(mBufferJoinStyleDDBtn, 6, 2, 1, 1);

        mBufferJoinStyleComboBox = new QgsPenJoinStyleComboBox(mBufferFrame);
        mBufferJoinStyleComboBox->setObjectName(QString::fromUtf8("mBufferJoinStyleComboBox"));
        sizePolicy4.setHeightForWidth(mBufferJoinStyleComboBox->sizePolicy().hasHeightForWidth());
        mBufferJoinStyleComboBox->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(mBufferJoinStyleComboBox, 6, 1, 1, 1);

        mBufferUnitsDDBtn = new QgsPropertyOverrideButton(mBufferFrame);
        mBufferUnitsDDBtn->setObjectName(QString::fromUtf8("mBufferUnitsDDBtn"));

        gridLayout_12->addWidget(mBufferUnitsDDBtn, 1, 2, 1, 1);

        label_32 = new QLabel(mBufferFrame);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy8.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy8);
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(label_32, 2, 0, 1, 1);

        spinBufferSize = new QgsDoubleSpinBox(mBufferFrame);
        spinBufferSize->setObjectName(QString::fromUtf8("spinBufferSize"));
        sizePolicy4.setHeightForWidth(spinBufferSize->sizePolicy().hasHeightForWidth());
        spinBufferSize->setSizePolicy(sizePolicy4);
        spinBufferSize->setMinimumSize(QSize(0, 0));
        spinBufferSize->setDecimals(4);
        spinBufferSize->setMaximum(999999999.000000000000000);
        spinBufferSize->setSingleStep(0.100000000000000);
        spinBufferSize->setProperty("showClearButton", QVariant(false));

        gridLayout_12->addWidget(spinBufferSize, 0, 1, 1, 1);

        mBufferOpacityWidget = new QgsOpacityWidget(mBufferFrame);
        mBufferOpacityWidget->setObjectName(QString::fromUtf8("mBufferOpacityWidget"));
        mBufferOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(mBufferOpacityWidget, 4, 1, 1, 1);

        mBufferOpacityDDBtn = new QgsPropertyOverrideButton(mBufferFrame);
        mBufferOpacityDDBtn->setObjectName(QString::fromUtf8("mBufferOpacityDDBtn"));

        gridLayout_12->addWidget(mBufferOpacityDDBtn, 4, 2, 1, 1);

        mBufferTranspLabel_2 = new QLabel(mBufferFrame);
        mBufferTranspLabel_2->setObjectName(QString::fromUtf8("mBufferTranspLabel_2"));
        mBufferTranspLabel_2->setEnabled(true);

        gridLayout_12->addWidget(mBufferTranspLabel_2, 4, 0, 1, 1);


        gridLayout_36->addWidget(mBufferFrame, 2, 0, 1, 3);

        label_37 = new QLabel(scrollAreaWidgetContents_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        sizePolicy8.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy8);
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_36->addWidget(label_37, 0, 0, 1, 2);


        verticalLayout_12->addLayout(gridLayout_36);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer);

        scrollArea_7->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_7->addWidget(scrollArea_7);

        mLabelStackedWidget->addWidget(mLabelPage_Buffer);
        mLabelPage_Mask = new QWidget();
        mLabelPage_Mask->setObjectName(QString::fromUtf8("mLabelPage_Mask"));
        verticalLayout_71 = new QVBoxLayout(mLabelPage_Mask);
        verticalLayout_71->setSpacing(6);
        verticalLayout_71->setContentsMargins(11, 11, 11, 11);
        verticalLayout_71->setObjectName(QString::fromUtf8("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(0, 0, 0, 0);
        scrollArea_71 = new QgsScrollArea(mLabelPage_Mask);
        scrollArea_71->setObjectName(QString::fromUtf8("scrollArea_71"));
        scrollArea_71->setFrameShape(QFrame::NoFrame);
        scrollArea_71->setWidgetResizable(true);
        scrollAreaWidgetContents_31 = new QWidget();
        scrollAreaWidgetContents_31->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_31"));
        scrollAreaWidgetContents_31->setGeometry(QRect(0, 0, 276, 284));
        verticalLayout_121 = new QVBoxLayout(scrollAreaWidgetContents_31);
        verticalLayout_121->setSpacing(6);
        verticalLayout_121->setContentsMargins(11, 11, 11, 11);
        verticalLayout_121->setObjectName(QString::fromUtf8("verticalLayout_121"));
        verticalLayout_121->setContentsMargins(0, 0, 6, 0);
        gridLayout_361 = new QGridLayout();
        gridLayout_361->setSpacing(6);
        gridLayout_361->setObjectName(QString::fromUtf8("gridLayout_361"));
        label_99 = new QLabel(scrollAreaWidgetContents_31);
        label_99->setObjectName(QString::fromUtf8("label_99"));

        gridLayout_361->addWidget(label_99, 0, 0, 1, 3);

        mEnableMaskDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_31);
        mEnableMaskDDBtn->setObjectName(QString::fromUtf8("mEnableMaskDDBtn"));

        gridLayout_361->addWidget(mEnableMaskDDBtn, 1, 1, 1, 1);

        mEnableMaskChkBx = new QCheckBox(scrollAreaWidgetContents_31);
        mEnableMaskChkBx->setObjectName(QString::fromUtf8("mEnableMaskChkBx"));
        sizePolicy11.setHeightForWidth(mEnableMaskChkBx->sizePolicy().hasHeightForWidth());
        mEnableMaskChkBx->setSizePolicy(sizePolicy11);

        gridLayout_361->addWidget(mEnableMaskChkBx, 1, 0, 1, 1);

        horizontalSpacer_131 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_361->addItem(horizontalSpacer_131, 1, 2, 1, 1);

        mMaskFrame = new QFrame(scrollAreaWidgetContents_31);
        mMaskFrame->setObjectName(QString::fromUtf8("mMaskFrame"));
        gridLayout_121 = new QGridLayout(mMaskFrame);
        gridLayout_121->setSpacing(6);
        gridLayout_121->setContentsMargins(11, 11, 11, 11);
        gridLayout_121->setObjectName(QString::fromUtf8("gridLayout_121"));
        gridLayout_121->setContentsMargins(20, 0, 0, 0);
        frame_51 = new QFrame(mMaskFrame);
        frame_51->setObjectName(QString::fromUtf8("frame_51"));
        sizePolicy7.setHeightForWidth(frame_51->sizePolicy().hasHeightForWidth());
        frame_51->setSizePolicy(sizePolicy7);
        horizontalLayout_101 = new QHBoxLayout(frame_51);
        horizontalLayout_101->setSpacing(6);
        horizontalLayout_101->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_101->setObjectName(QString::fromUtf8("horizontalLayout_101"));
        horizontalLayout_101->setContentsMargins(0, 0, 0, 0);

        gridLayout_121->addWidget(frame_51, 3, 1, 1, 1);

        mMaskJoinStyleComboBox = new QgsPenJoinStyleComboBox(mMaskFrame);
        mMaskJoinStyleComboBox->setObjectName(QString::fromUtf8("mMaskJoinStyleComboBox"));
        sizePolicy4.setHeightForWidth(mMaskJoinStyleComboBox->sizePolicy().hasHeightForWidth());
        mMaskJoinStyleComboBox->setSizePolicy(sizePolicy4);

        gridLayout_121->addWidget(mMaskJoinStyleComboBox, 4, 1, 1, 1);

        mMaskOpacityDDBtn = new QgsPropertyOverrideButton(mMaskFrame);
        mMaskOpacityDDBtn->setObjectName(QString::fromUtf8("mMaskOpacityDDBtn"));

        gridLayout_121->addWidget(mMaskOpacityDDBtn, 2, 2, 1, 1);

        mMaskEffectWidget = new QgsEffectStackCompactWidget(mMaskFrame);
        mMaskEffectWidget->setObjectName(QString::fromUtf8("mMaskEffectWidget"));

        gridLayout_121->addWidget(mMaskEffectWidget, 5, 0, 1, 3);

        mMaskBufferUnitWidget = new QgsUnitSelectionWidget(mMaskFrame);
        mMaskBufferUnitWidget->setObjectName(QString::fromUtf8("mMaskBufferUnitWidget"));
        mMaskBufferUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_121->addWidget(mMaskBufferUnitWidget, 1, 1, 1, 1);

        mMaskJoinStyleDDBtn = new QgsPropertyOverrideButton(mMaskFrame);
        mMaskJoinStyleDDBtn->setObjectName(QString::fromUtf8("mMaskJoinStyleDDBtn"));

        gridLayout_121->addWidget(mMaskJoinStyleDDBtn, 4, 2, 1, 1);

        mMaskBufferUnitsDDBtn = new QgsPropertyOverrideButton(mMaskFrame);
        mMaskBufferUnitsDDBtn->setObjectName(QString::fromUtf8("mMaskBufferUnitsDDBtn"));

        gridLayout_121->addWidget(mMaskBufferUnitsDDBtn, 1, 2, 1, 1);

        mMaskBufferSizeSpinBox = new QgsDoubleSpinBox(mMaskFrame);
        mMaskBufferSizeSpinBox->setObjectName(QString::fromUtf8("mMaskBufferSizeSpinBox"));
        sizePolicy4.setHeightForWidth(mMaskBufferSizeSpinBox->sizePolicy().hasHeightForWidth());
        mMaskBufferSizeSpinBox->setSizePolicy(sizePolicy4);
        mMaskBufferSizeSpinBox->setMinimumSize(QSize(0, 0));
        mMaskBufferSizeSpinBox->setDecimals(4);
        mMaskBufferSizeSpinBox->setMaximum(999999999.000000000000000);
        mMaskBufferSizeSpinBox->setSingleStep(0.100000000000000);
        mMaskBufferSizeSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_121->addWidget(mMaskBufferSizeSpinBox, 0, 1, 1, 1);

        mMaskBufferSizeDDBtn = new QgsPropertyOverrideButton(mMaskFrame);
        mMaskBufferSizeDDBtn->setObjectName(QString::fromUtf8("mMaskBufferSizeDDBtn"));

        gridLayout_121->addWidget(mMaskBufferSizeDDBtn, 0, 2, 1, 1);

        mMaskOpacityWidget = new QgsOpacityWidget(mMaskFrame);
        mMaskOpacityWidget->setObjectName(QString::fromUtf8("mMaskOpacityWidget"));
        mMaskOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_121->addWidget(mMaskOpacityWidget, 2, 1, 1, 1);

        label_311 = new QLabel(mMaskFrame);
        label_311->setObjectName(QString::fromUtf8("label_311"));
        sizePolicy8.setHeightForWidth(label_311->sizePolicy().hasHeightForWidth());
        label_311->setSizePolicy(sizePolicy8);
        label_311->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_121->addWidget(label_311, 0, 0, 1, 1);

        label_51 = new QLabel(mMaskFrame);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout_121->addWidget(label_51, 4, 0, 1, 1);

        mMaskTranspLabel_2 = new QLabel(mMaskFrame);
        mMaskTranspLabel_2->setObjectName(QString::fromUtf8("mMaskTranspLabel_2"));
        mMaskTranspLabel_2->setEnabled(true);

        gridLayout_121->addWidget(mMaskTranspLabel_2, 2, 0, 1, 1);

        label = new QLabel(mMaskFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_121->addWidget(label, 6, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_121->addItem(verticalSpacer_2, 7, 0, 1, 1);


        gridLayout_361->addWidget(mMaskFrame, 2, 0, 1, 3);


        verticalLayout_121->addLayout(gridLayout_361);

        scrollArea_71->setWidget(scrollAreaWidgetContents_31);

        verticalLayout_71->addWidget(scrollArea_71);

        mLabelStackedWidget->addWidget(mLabelPage_Mask);
        mLabelPage_Background = new QWidget();
        mLabelPage_Background->setObjectName(QString::fromUtf8("mLabelPage_Background"));
        verticalLayout_20 = new QVBoxLayout(mLabelPage_Background);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(mLabelPage_Background);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 424, 731));
        verticalLayout_21 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 6, 0);
        gridLayout_37 = new QGridLayout();
        gridLayout_37->setSpacing(6);
        gridLayout_37->setObjectName(QString::fromUtf8("gridLayout_37"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_37->addItem(horizontalSpacer_12, 1, 2, 1, 1);

        mShapeDrawChkBx = new QCheckBox(scrollAreaWidgetContents_2);
        mShapeDrawChkBx->setObjectName(QString::fromUtf8("mShapeDrawChkBx"));
        sizePolicy11.setHeightForWidth(mShapeDrawChkBx->sizePolicy().hasHeightForWidth());
        mShapeDrawChkBx->setSizePolicy(sizePolicy11);

        gridLayout_37->addWidget(mShapeDrawChkBx, 1, 0, 1, 1);

        mShapeDrawDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_2);
        mShapeDrawDDBtn->setObjectName(QString::fromUtf8("mShapeDrawDDBtn"));

        gridLayout_37->addWidget(mShapeDrawDDBtn, 1, 1, 1, 1);

        mShapeFrame = new QFrame(scrollAreaWidgetContents_2);
        mShapeFrame->setObjectName(QString::fromUtf8("mShapeFrame"));
        mShapeFrame->setFrameShape(QFrame::NoFrame);
        gridLayout_29 = new QGridLayout(mShapeFrame);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        gridLayout_29->setContentsMargins(20, 0, 0, 0);
        mShapeOffsetDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeOffsetDDBtn->setObjectName(QString::fromUtf8("mShapeOffsetDDBtn"));

        gridLayout_29->addWidget(mShapeOffsetDDBtn, 10, 3, 1, 1);

        mShapeStrokeWidthLabel = new QLabel(mShapeFrame);
        mShapeStrokeWidthLabel->setObjectName(QString::fromUtf8("mShapeStrokeWidthLabel"));

        gridLayout_29->addWidget(mShapeStrokeWidthLabel, 19, 0, 1, 1);

        mShapeRadiusLabel = new QLabel(mShapeFrame);
        mShapeRadiusLabel->setObjectName(QString::fromUtf8("mShapeRadiusLabel"));

        gridLayout_29->addWidget(mShapeRadiusLabel, 12, 0, 1, 1);

        mShapeSVGParamsBtn = new QPushButton(mShapeFrame);
        mShapeSVGParamsBtn->setObjectName(QString::fromUtf8("mShapeSVGParamsBtn"));

        gridLayout_29->addWidget(mShapeSVGParamsBtn, 16, 1, 1, 1);

        mShapeTypeCmbBx = new QComboBox(mShapeFrame);
        mShapeTypeCmbBx->setObjectName(QString::fromUtf8("mShapeTypeCmbBx"));
        mShapeTypeCmbBx->setMinimumSize(QSize(200, 0));

        gridLayout_29->addWidget(mShapeTypeCmbBx, 0, 1, 1, 1);

        mShapeSizeXDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeSizeXDDBtn->setObjectName(QString::fromUtf8("mShapeSizeXDDBtn"));

        gridLayout_29->addWidget(mShapeSizeXDDBtn, 4, 3, 1, 1);

        mShapeFillColorLabel = new QLabel(mShapeFrame);
        mShapeFillColorLabel->setObjectName(QString::fromUtf8("mShapeFillColorLabel"));
        sizePolicy8.setHeightForWidth(mShapeFillColorLabel->sizePolicy().hasHeightForWidth());
        mShapeFillColorLabel->setSizePolicy(sizePolicy8);
        mShapeFillColorLabel->setMinimumSize(QSize(85, 0));

        gridLayout_29->addWidget(mShapeFillColorLabel, 17, 0, 1, 1);

        mShapeSizeYDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeSizeYDDBtn->setObjectName(QString::fromUtf8("mShapeSizeYDDBtn"));

        gridLayout_29->addWidget(mShapeSizeYDDBtn, 5, 3, 1, 1);

        mShapeFillColorBtn = new QgsColorButton(mShapeFrame);
        mShapeFillColorBtn->setObjectName(QString::fromUtf8("mShapeFillColorBtn"));
        sizePolicy4.setHeightForWidth(mShapeFillColorBtn->sizePolicy().hasHeightForWidth());
        mShapeFillColorBtn->setSizePolicy(sizePolicy4);

        gridLayout_29->addWidget(mShapeFillColorBtn, 17, 1, 1, 1);

        mShapeSizeCmbBx = new QComboBox(mShapeFrame);
        mShapeSizeCmbBx->addItem(QString());
        mShapeSizeCmbBx->addItem(QString());
        mShapeSizeCmbBx->setObjectName(QString::fromUtf8("mShapeSizeCmbBx"));

        gridLayout_29->addWidget(mShapeSizeCmbBx, 3, 1, 1, 1);

        label_23 = new QLabel(mShapeFrame);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_29->addWidget(label_23, 8, 0, 1, 1);

        mShapeRotationTypeDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeRotationTypeDDBtn->setObjectName(QString::fromUtf8("mShapeRotationTypeDDBtn"));

        gridLayout_29->addWidget(mShapeRotationTypeDDBtn, 8, 3, 1, 1);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        mShapeStrokeWidthUnitWidget = new QgsUnitSelectionWidget(mShapeFrame);
        mShapeStrokeWidthUnitWidget->setObjectName(QString::fromUtf8("mShapeStrokeWidthUnitWidget"));
        mShapeStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_43->addWidget(mShapeStrokeWidthUnitWidget);

        mShapeSVGUnitsLabel = new QLabel(mShapeFrame);
        mShapeSVGUnitsLabel->setObjectName(QString::fromUtf8("mShapeSVGUnitsLabel"));

        horizontalLayout_43->addWidget(mShapeSVGUnitsLabel);


        gridLayout_29->addLayout(horizontalLayout_43, 20, 1, 1, 1);

        mShapeBlendCmbBx = new QgsBlendModeComboBox(mShapeFrame);
        mShapeBlendCmbBx->setObjectName(QString::fromUtf8("mShapeBlendCmbBx"));
        mShapeBlendCmbBx->setMinimumSize(QSize(150, 0));

        gridLayout_29->addWidget(mShapeBlendCmbBx, 15, 1, 1, 1);

        mShapeRotationDblSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeRotationDblSpnBx->setObjectName(QString::fromUtf8("mShapeRotationDblSpnBx"));
        mShapeRotationDblSpnBx->setEnabled(false);
        mShapeRotationDblSpnBx->setWrapping(true);
        mShapeRotationDblSpnBx->setSuffix(QString::fromUtf8("\313\232"));
        mShapeRotationDblSpnBx->setMinimum(-360.000000000000000);
        mShapeRotationDblSpnBx->setMaximum(360.000000000000000);

        gridLayout_29->addWidget(mShapeRotationDblSpnBx, 9, 1, 1, 1);

        mShapeSVGPathFrame = new QFrame(mShapeFrame);
        mShapeSVGPathFrame->setObjectName(QString::fromUtf8("mShapeSVGPathFrame"));
        horizontalLayout_26 = new QHBoxLayout(mShapeSVGPathFrame);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        mShapeSVGPathLineEdit = new QLineEdit(mShapeSVGPathFrame);
        mShapeSVGPathLineEdit->setObjectName(QString::fromUtf8("mShapeSVGPathLineEdit"));

        horizontalLayout_26->addWidget(mShapeSVGPathLineEdit);

        mShapeSVGSelectorBtn = new QPushButton(mShapeSVGPathFrame);
        mShapeSVGSelectorBtn->setObjectName(QString::fromUtf8("mShapeSVGSelectorBtn"));

        horizontalLayout_26->addWidget(mShapeSVGSelectorBtn);

        mShapeSVGPathDDBtn = new QgsPropertyOverrideButton(mShapeSVGPathFrame);
        mShapeSVGPathDDBtn->setObjectName(QString::fromUtf8("mShapeSVGPathDDBtn"));

        horizontalLayout_26->addWidget(mShapeSVGPathDDBtn);


        gridLayout_29->addWidget(mShapeSVGPathFrame, 1, 1, 1, 3);

        mShapeFillColorDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeFillColorDDBtn->setObjectName(QString::fromUtf8("mShapeFillColorDDBtn"));

        gridLayout_29->addWidget(mShapeFillColorDDBtn, 17, 3, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mShapeRadiusXDbSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeRadiusXDbSpnBx->setObjectName(QString::fromUtf8("mShapeRadiusXDbSpnBx"));
        sizePolicy10.setHeightForWidth(mShapeRadiusXDbSpnBx->sizePolicy().hasHeightForWidth());
        mShapeRadiusXDbSpnBx->setSizePolicy(sizePolicy10);
        mShapeRadiusXDbSpnBx->setDecimals(4);
        mShapeRadiusXDbSpnBx->setMaximum(999999999.990000009536743);
        mShapeRadiusXDbSpnBx->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(mShapeRadiusXDbSpnBx);

        mShapeRadiusYDbSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeRadiusYDbSpnBx->setObjectName(QString::fromUtf8("mShapeRadiusYDbSpnBx"));
        sizePolicy10.setHeightForWidth(mShapeRadiusYDbSpnBx->sizePolicy().hasHeightForWidth());
        mShapeRadiusYDbSpnBx->setSizePolicy(sizePolicy10);
        mShapeRadiusYDbSpnBx->setDecimals(4);
        mShapeRadiusYDbSpnBx->setMaximum(999999999.990000009536743);
        mShapeRadiusYDbSpnBx->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(mShapeRadiusYDbSpnBx);


        gridLayout_29->addLayout(horizontalLayout_2, 12, 1, 1, 1);

        mShapeStrokeUnitsDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeStrokeUnitsDDBtn->setObjectName(QString::fromUtf8("mShapeStrokeUnitsDDBtn"));

        gridLayout_29->addWidget(mShapeStrokeUnitsDDBtn, 20, 3, 1, 1);

        mShapeRadiusUnitWidget = new QgsUnitSelectionWidget(mShapeFrame);
        mShapeRadiusUnitWidget->setObjectName(QString::fromUtf8("mShapeRadiusUnitWidget"));
        mShapeRadiusUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_29->addWidget(mShapeRadiusUnitWidget, 13, 1, 1, 1);

        label_8 = new QLabel(mShapeFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_29->addWidget(label_8, 3, 0, 1, 1);

        mShapeStrokeWidthDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeStrokeWidthDDBtn->setObjectName(QString::fromUtf8("mShapeStrokeWidthDDBtn"));

        gridLayout_29->addWidget(mShapeStrokeWidthDDBtn, 19, 3, 1, 1);

        mShapeSizeTypeDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeSizeTypeDDBtn->setObjectName(QString::fromUtf8("mShapeSizeTypeDDBtn"));

        gridLayout_29->addWidget(mShapeSizeTypeDDBtn, 3, 3, 1, 1);

        label_22 = new QLabel(mShapeFrame);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_29->addWidget(label_22, 0, 0, 1, 1);

        mShapeRadiusUnitsDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeRadiusUnitsDDBtn->setObjectName(QString::fromUtf8("mShapeRadiusUnitsDDBtn"));

        gridLayout_29->addWidget(mShapeRadiusUnitsDDBtn, 13, 3, 1, 1);

        mShapeRotationFrame = new QFrame(mShapeFrame);
        mShapeRotationFrame->setObjectName(QString::fromUtf8("mShapeRotationFrame"));
        horizontalLayout_36 = new QHBoxLayout(mShapeRotationFrame);
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(0, 0, 0, 0);

        gridLayout_29->addWidget(mShapeRotationFrame, 7, 1, 1, 3);

        mShapeRotationDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeRotationDDBtn->setObjectName(QString::fromUtf8("mShapeRotationDDBtn"));

        gridLayout_29->addWidget(mShapeRotationDDBtn, 9, 3, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mShapeOffsetXSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeOffsetXSpnBx->setObjectName(QString::fromUtf8("mShapeOffsetXSpnBx"));
        sizePolicy10.setHeightForWidth(mShapeOffsetXSpnBx->sizePolicy().hasHeightForWidth());
        mShapeOffsetXSpnBx->setSizePolicy(sizePolicy10);
        mShapeOffsetXSpnBx->setDecimals(4);
        mShapeOffsetXSpnBx->setMinimum(-9999999.000000000000000);
        mShapeOffsetXSpnBx->setMaximum(9999999.000000000000000);
        mShapeOffsetXSpnBx->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(mShapeOffsetXSpnBx);

        mShapeOffsetYSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeOffsetYSpnBx->setObjectName(QString::fromUtf8("mShapeOffsetYSpnBx"));
        sizePolicy10.setHeightForWidth(mShapeOffsetYSpnBx->sizePolicy().hasHeightForWidth());
        mShapeOffsetYSpnBx->setSizePolicy(sizePolicy10);
        mShapeOffsetYSpnBx->setDecimals(4);
        mShapeOffsetYSpnBx->setMinimum(-9999999.000000000000000);
        mShapeOffsetYSpnBx->setMaximum(9999999.000000000000000);
        mShapeOffsetYSpnBx->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(mShapeOffsetYSpnBx);


        gridLayout_29->addLayout(horizontalLayout_7, 10, 1, 1, 1);

        label_21 = new QLabel(mShapeFrame);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_29->addWidget(label_21, 10, 0, 1, 1);

        mShapeSizeXLabel = new QLabel(mShapeFrame);
        mShapeSizeXLabel->setObjectName(QString::fromUtf8("mShapeSizeXLabel"));

        gridLayout_29->addWidget(mShapeSizeXLabel, 4, 0, 1, 1);

        mShapeSizeXSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeSizeXSpnBx->setObjectName(QString::fromUtf8("mShapeSizeXSpnBx"));
        mShapeSizeXSpnBx->setDecimals(4);
        mShapeSizeXSpnBx->setMinimum(-9999999.000000000000000);
        mShapeSizeXSpnBx->setMaximum(9999999.000000000000000);
        mShapeSizeXSpnBx->setSingleStep(0.100000000000000);
        mShapeSizeXSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_29->addWidget(mShapeSizeXSpnBx, 4, 1, 1, 1);

        mShapeStrokeColorBtn = new QgsColorButton(mShapeFrame);
        mShapeStrokeColorBtn->setObjectName(QString::fromUtf8("mShapeStrokeColorBtn"));
        sizePolicy4.setHeightForWidth(mShapeStrokeColorBtn->sizePolicy().hasHeightForWidth());
        mShapeStrokeColorBtn->setSizePolicy(sizePolicy4);

        gridLayout_29->addWidget(mShapeStrokeColorBtn, 18, 1, 1, 1);

        mShapeOffsetUnitsDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeOffsetUnitsDDBtn->setObjectName(QString::fromUtf8("mShapeOffsetUnitsDDBtn"));

        gridLayout_29->addWidget(mShapeOffsetUnitsDDBtn, 11, 3, 1, 1);

        mShapeRotationCmbBx = new QComboBox(mShapeFrame);
        mShapeRotationCmbBx->addItem(QString());
        mShapeRotationCmbBx->addItem(QString());
        mShapeRotationCmbBx->addItem(QString());
        mShapeRotationCmbBx->setObjectName(QString::fromUtf8("mShapeRotationCmbBx"));

        gridLayout_29->addWidget(mShapeRotationCmbBx, 8, 1, 1, 1);

        mShapeStrokeColorLabel = new QLabel(mShapeFrame);
        mShapeStrokeColorLabel->setObjectName(QString::fromUtf8("mShapeStrokeColorLabel"));
        sizePolicy8.setHeightForWidth(mShapeStrokeColorLabel->sizePolicy().hasHeightForWidth());
        mShapeStrokeColorLabel->setSizePolicy(sizePolicy8);

        gridLayout_29->addWidget(mShapeStrokeColorLabel, 18, 0, 1, 1);

        mShapeSizeUnitsDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeSizeUnitsDDBtn->setObjectName(QString::fromUtf8("mShapeSizeUnitsDDBtn"));

        gridLayout_29->addWidget(mShapeSizeUnitsDDBtn, 6, 3, 1, 1);

        mShapeBlendModeDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeBlendModeDDBtn->setObjectName(QString::fromUtf8("mShapeBlendModeDDBtn"));

        gridLayout_29->addWidget(mShapeBlendModeDDBtn, 15, 3, 1, 1);

        label_18 = new QLabel(mShapeFrame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy8.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy8);

        gridLayout_29->addWidget(label_18, 15, 0, 1, 1);

        mShapeOpacityDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeOpacityDDBtn->setObjectName(QString::fromUtf8("mShapeOpacityDDBtn"));

        gridLayout_29->addWidget(mShapeOpacityDDBtn, 14, 3, 1, 1);

        mShapeStrokeColorDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeStrokeColorDDBtn->setObjectName(QString::fromUtf8("mShapeStrokeColorDDBtn"));

        gridLayout_29->addWidget(mShapeStrokeColorDDBtn, 18, 3, 1, 1);

        mShapeSizeUnitWidget = new QgsUnitSelectionWidget(mShapeFrame);
        mShapeSizeUnitWidget->setObjectName(QString::fromUtf8("mShapeSizeUnitWidget"));
        mShapeSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_29->addWidget(mShapeSizeUnitWidget, 6, 1, 1, 1);

        mShapeTranspLabel = new QLabel(mShapeFrame);
        mShapeTranspLabel->setObjectName(QString::fromUtf8("mShapeTranspLabel"));
        mShapeTranspLabel->setEnabled(true);

        gridLayout_29->addWidget(mShapeTranspLabel, 14, 0, 1, 1);

        mBackgroundEffectWidget = new QgsEffectStackCompactWidget(mShapeFrame);
        mBackgroundEffectWidget->setObjectName(QString::fromUtf8("mBackgroundEffectWidget"));
        mBackgroundEffectWidget->setMinimumSize(QSize(20, 20));

        gridLayout_29->addWidget(mBackgroundEffectWidget, 22, 0, 1, 4);

        mShapeSizeYLabel = new QLabel(mShapeFrame);
        mShapeSizeYLabel->setObjectName(QString::fromUtf8("mShapeSizeYLabel"));

        gridLayout_29->addWidget(mShapeSizeYLabel, 5, 0, 1, 1);

        mBackgroundOpacityWidget = new QgsOpacityWidget(mShapeFrame);
        mBackgroundOpacityWidget->setObjectName(QString::fromUtf8("mBackgroundOpacityWidget"));
        mBackgroundOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_29->addWidget(mBackgroundOpacityWidget, 14, 1, 1, 1);

        mShapeStrokeWidthSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeStrokeWidthSpnBx->setObjectName(QString::fromUtf8("mShapeStrokeWidthSpnBx"));
        mShapeStrokeWidthSpnBx->setDecimals(4);
        mShapeStrokeWidthSpnBx->setMinimum(0.000000000000000);
        mShapeStrokeWidthSpnBx->setMaximum(9999999.000000000000000);
        mShapeStrokeWidthSpnBx->setSingleStep(0.100000000000000);
        mShapeStrokeWidthSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_29->addWidget(mShapeStrokeWidthSpnBx, 19, 1, 1, 1);

        mShapeTypeDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeTypeDDBtn->setObjectName(QString::fromUtf8("mShapeTypeDDBtn"));

        gridLayout_29->addWidget(mShapeTypeDDBtn, 0, 3, 1, 1);

        mShapeSizeYSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeSizeYSpnBx->setObjectName(QString::fromUtf8("mShapeSizeYSpnBx"));
        mShapeSizeYSpnBx->setDecimals(4);
        mShapeSizeYSpnBx->setMinimum(-9999999.000000000000000);
        mShapeSizeYSpnBx->setMaximum(9999999.000000000000000);
        mShapeSizeYSpnBx->setSingleStep(0.100000000000000);
        mShapeSizeYSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_29->addWidget(mShapeSizeYSpnBx, 5, 1, 1, 1);

        mShapeRadiusDDBtn = new QgsPropertyOverrideButton(mShapeFrame);
        mShapeRadiusDDBtn->setObjectName(QString::fromUtf8("mShapeRadiusDDBtn"));

        gridLayout_29->addWidget(mShapeRadiusDDBtn, 12, 3, 1, 1);

        mShapeOffsetUnitWidget = new QgsUnitSelectionWidget(mShapeFrame);
        mShapeOffsetUnitWidget->setObjectName(QString::fromUtf8("mShapeOffsetUnitWidget"));
        mShapeOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_29->addWidget(mShapeOffsetUnitWidget, 11, 1, 1, 1);

        mBackgroundMarkerSymbolButton = new QgsSymbolButton(mShapeFrame);
        mBackgroundMarkerSymbolButton->setObjectName(QString::fromUtf8("mBackgroundMarkerSymbolButton"));
        sizePolicy4.setHeightForWidth(mBackgroundMarkerSymbolButton->sizePolicy().hasHeightForWidth());
        mBackgroundMarkerSymbolButton->setSizePolicy(sizePolicy4);

        gridLayout_29->addWidget(mBackgroundMarkerSymbolButton, 2, 1, 1, 1);

        mBackgroundFillSymbolButton = new QgsSymbolButton(mShapeFrame);
        mBackgroundFillSymbolButton->setObjectName(QString::fromUtf8("mBackgroundFillSymbolButton"));
        sizePolicy4.setHeightForWidth(mBackgroundFillSymbolButton->sizePolicy().hasHeightForWidth());
        mBackgroundFillSymbolButton->setSizePolicy(sizePolicy4);

        gridLayout_29->addWidget(mBackgroundFillSymbolButton, 2, 1, 1, 1);


        gridLayout_37->addWidget(mShapeFrame, 2, 0, 1, 3);

        label_38 = new QLabel(scrollAreaWidgetContents_2);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_37->addWidget(label_38, 0, 0, 1, 1);


        verticalLayout_21->addLayout(gridLayout_37);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_3);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_20->addWidget(scrollArea_2);

        mLabelStackedWidget->addWidget(mLabelPage_Background);
        mLabelPage_Shadow = new QWidget();
        mLabelPage_Shadow->setObjectName(QString::fromUtf8("mLabelPage_Shadow"));
        verticalLayout_18 = new QVBoxLayout(mLabelPage_Shadow);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        scrollArea_8 = new QgsScrollArea(mLabelPage_Shadow);
        scrollArea_8->setObjectName(QString::fromUtf8("scrollArea_8"));
        scrollArea_8->setFrameShape(QFrame::NoFrame);
        scrollArea_8->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 294, 444));
        verticalLayout_22 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 6, 0);
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setSpacing(6);
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        horizontalSpacer_14 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_38->addItem(horizontalSpacer_14, 1, 2, 1, 1);

        mShadowDrawChkBx = new QCheckBox(scrollAreaWidgetContents_8);
        mShadowDrawChkBx->setObjectName(QString::fromUtf8("mShadowDrawChkBx"));
        sizePolicy11.setHeightForWidth(mShadowDrawChkBx->sizePolicy().hasHeightForWidth());
        mShadowDrawChkBx->setSizePolicy(sizePolicy11);

        gridLayout_38->addWidget(mShadowDrawChkBx, 1, 0, 1, 1);

        mShadowDrawDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_8);
        mShadowDrawDDBtn->setObjectName(QString::fromUtf8("mShadowDrawDDBtn"));

        gridLayout_38->addWidget(mShadowDrawDDBtn, 1, 1, 1, 1);

        mShadowFrame = new QFrame(scrollAreaWidgetContents_8);
        mShadowFrame->setObjectName(QString::fromUtf8("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(20, 0, 0, 0);
        mShadowColorBtn = new QgsColorButton(mShadowFrame);
        mShadowColorBtn->setObjectName(QString::fromUtf8("mShadowColorBtn"));
        sizePolicy4.setHeightForWidth(mShadowColorBtn->sizePolicy().hasHeightForWidth());
        mShadowColorBtn->setSizePolicy(sizePolicy4);

        gridLayout_7->addWidget(mShadowColorBtn, 10, 1, 1, 1);

        mShadowRadiusDblSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mShadowRadiusDblSpnBx->setObjectName(QString::fromUtf8("mShadowRadiusDblSpnBx"));
        mShadowRadiusDblSpnBx->setDecimals(6);
        mShadowRadiusDblSpnBx->setMaximum(999999999.990000009536743);
        mShadowRadiusDblSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowRadiusDblSpnBx, 5, 1, 1, 1);

        label_29 = new QLabel(mShadowFrame);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_7->addWidget(label_29, 9, 0, 1, 1);

        label_27 = new QLabel(mShadowFrame);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_7->addWidget(label_27, 5, 0, 1, 1);

        mShadowRadiusAlphaChkBx = new QCheckBox(mShadowFrame);
        mShadowRadiusAlphaChkBx->setObjectName(QString::fromUtf8("mShadowRadiusAlphaChkBx"));
        sizePolicy2.setHeightForWidth(mShadowRadiusAlphaChkBx->sizePolicy().hasHeightForWidth());
        mShadowRadiusAlphaChkBx->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(mShadowRadiusAlphaChkBx, 7, 1, 1, 1);

        mShadowOffsetSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mShadowOffsetSpnBx->setObjectName(QString::fromUtf8("mShadowOffsetSpnBx"));
        mShadowOffsetSpnBx->setDecimals(4);
        mShadowOffsetSpnBx->setMinimum(0.000000000000000);
        mShadowOffsetSpnBx->setMaximum(9999999.000000000000000);
        mShadowOffsetSpnBx->setSingleStep(0.100000000000000);
        mShadowOffsetSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowOffsetSpnBx, 2, 1, 1, 1);

        mShadowOffsetGlobalChkBx = new QCheckBox(mShadowFrame);
        mShadowOffsetGlobalChkBx->setObjectName(QString::fromUtf8("mShadowOffsetGlobalChkBx"));
        sizePolicy2.setHeightForWidth(mShadowOffsetGlobalChkBx->sizePolicy().hasHeightForWidth());
        mShadowOffsetGlobalChkBx->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(mShadowOffsetGlobalChkBx, 4, 1, 1, 1);

        mShadowBlendCmbBx = new QgsBlendModeComboBox(mShadowFrame);
        mShadowBlendCmbBx->setObjectName(QString::fromUtf8("mShadowBlendCmbBx"));

        gridLayout_7->addWidget(mShadowBlendCmbBx, 11, 1, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        mShadowOffsetAngleDial = new QDial(mShadowFrame);
        mShadowOffsetAngleDial->setObjectName(QString::fromUtf8("mShadowOffsetAngleDial"));
        mShadowOffsetAngleDial->setMinimumSize(QSize(32, 32));
        mShadowOffsetAngleDial->setMaximumSize(QSize(32, 32));
        mShadowOffsetAngleDial->setMinimum(-180);
        mShadowOffsetAngleDial->setMaximum(180);
        mShadowOffsetAngleDial->setValue(0);
        mShadowOffsetAngleDial->setInvertedControls(true);
        mShadowOffsetAngleDial->setWrapping(true);

        horizontalLayout_24->addWidget(mShadowOffsetAngleDial);

        mShadowOffsetAngleSpnBx = new QgsSpinBox(mShadowFrame);
        mShadowOffsetAngleSpnBx->setObjectName(QString::fromUtf8("mShadowOffsetAngleSpnBx"));
        mShadowOffsetAngleSpnBx->setWrapping(true);
        mShadowOffsetAngleSpnBx->setMinimum(-360);
        mShadowOffsetAngleSpnBx->setMaximum(360);
        mShadowOffsetAngleSpnBx->setProperty("showClearButton", QVariant(false));

        horizontalLayout_24->addWidget(mShadowOffsetAngleSpnBx);


        gridLayout_7->addLayout(horizontalLayout_24, 1, 1, 1, 1);

        mShadowUnderCmbBx = new QComboBox(mShadowFrame);
        mShadowUnderCmbBx->setObjectName(QString::fromUtf8("mShadowUnderCmbBx"));
        mShadowUnderCmbBx->setMinimumSize(QSize(150, 0));

        gridLayout_7->addWidget(mShadowUnderCmbBx, 0, 1, 1, 1);

        label_17 = new QLabel(mShadowFrame);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_7->addWidget(label_17, 0, 0, 1, 1);

        mShadowScaleSpnBx = new QgsSpinBox(mShadowFrame);
        mShadowScaleSpnBx->setObjectName(QString::fromUtf8("mShadowScaleSpnBx"));
        mShadowScaleSpnBx->setMaximum(2000);
        mShadowScaleSpnBx->setValue(100);
        mShadowScaleSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowScaleSpnBx, 9, 1, 1, 1);

        label_30 = new QLabel(mShadowFrame);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_7->addWidget(label_30, 11, 0, 1, 1);

        label_9 = new QLabel(mShadowFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_7->addWidget(label_9, 1, 0, 1, 1);

        label_33 = new QLabel(mShadowFrame);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy8.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy8);
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_33, 10, 0, 1, 1);

        label_28 = new QLabel(mShadowFrame);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_7->addWidget(label_28, 8, 0, 1, 1);

        mShadowUnderDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowUnderDDBtn->setObjectName(QString::fromUtf8("mShadowUnderDDBtn"));

        gridLayout_7->addWidget(mShadowUnderDDBtn, 0, 2, 1, 1);

        mShadowOffsetAngleDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowOffsetAngleDDBtn->setObjectName(QString::fromUtf8("mShadowOffsetAngleDDBtn"));

        gridLayout_7->addWidget(mShadowOffsetAngleDDBtn, 1, 2, 1, 1);

        mShadowOffsetDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowOffsetDDBtn->setObjectName(QString::fromUtf8("mShadowOffsetDDBtn"));

        gridLayout_7->addWidget(mShadowOffsetDDBtn, 2, 2, 1, 1);

        mShadowOffsetUnitsDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowOffsetUnitsDDBtn->setObjectName(QString::fromUtf8("mShadowOffsetUnitsDDBtn"));

        gridLayout_7->addWidget(mShadowOffsetUnitsDDBtn, 3, 2, 1, 1);

        mShadowRadiusDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowRadiusDDBtn->setObjectName(QString::fromUtf8("mShadowRadiusDDBtn"));

        gridLayout_7->addWidget(mShadowRadiusDDBtn, 5, 2, 1, 1);

        mShadowRadiusUnitsDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowRadiusUnitsDDBtn->setObjectName(QString::fromUtf8("mShadowRadiusUnitsDDBtn"));

        gridLayout_7->addWidget(mShadowRadiusUnitsDDBtn, 6, 2, 1, 1);

        mShadowOpacityDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowOpacityDDBtn->setObjectName(QString::fromUtf8("mShadowOpacityDDBtn"));

        gridLayout_7->addWidget(mShadowOpacityDDBtn, 8, 2, 1, 1);

        mShadowScaleDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowScaleDDBtn->setObjectName(QString::fromUtf8("mShadowScaleDDBtn"));

        gridLayout_7->addWidget(mShadowScaleDDBtn, 9, 2, 1, 1);

        mShadowColorDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowColorDDBtn->setObjectName(QString::fromUtf8("mShadowColorDDBtn"));

        gridLayout_7->addWidget(mShadowColorDDBtn, 10, 2, 1, 1);

        mShadowBlendDDBtn = new QgsPropertyOverrideButton(mShadowFrame);
        mShadowBlendDDBtn->setObjectName(QString::fromUtf8("mShadowBlendDDBtn"));

        gridLayout_7->addWidget(mShadowBlendDDBtn, 11, 2, 1, 1);

        mShadowOffsetUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mShadowOffsetUnitWidget->setObjectName(QString::fromUtf8("mShadowOffsetUnitWidget"));
        mShadowOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mShadowOffsetUnitWidget, 3, 1, 1, 1);

        mShadowRadiusUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mShadowRadiusUnitWidget->setObjectName(QString::fromUtf8("mShadowRadiusUnitWidget"));
        mShadowRadiusUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mShadowRadiusUnitWidget, 6, 1, 1, 1);

        mShadowOpacityWidget = new QgsOpacityWidget(mShadowFrame);
        mShadowOpacityWidget->setObjectName(QString::fromUtf8("mShadowOpacityWidget"));
        mShadowOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mShadowOpacityWidget, 8, 1, 1, 1);


        gridLayout_38->addWidget(mShadowFrame, 2, 0, 1, 3);

        label_39 = new QLabel(scrollAreaWidgetContents_8);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_38->addWidget(label_39, 0, 0, 1, 1);


        verticalLayout_22->addLayout(gridLayout_38);

        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_7);

        scrollArea_8->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_18->addWidget(scrollArea_8);

        mLabelStackedWidget->addWidget(mLabelPage_Shadow);
        mLabelPage_Callouts = new QWidget();
        mLabelPage_Callouts->setObjectName(QString::fromUtf8("mLabelPage_Callouts"));
        verticalLayout_14 = new QVBoxLayout(mLabelPage_Callouts);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QgsScrollArea(mLabelPage_Callouts);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 147, 207));
        gridLayout_46 = new QGridLayout(scrollAreaWidgetContents_7);
        gridLayout_46->setSpacing(6);
        gridLayout_46->setContentsMargins(11, 11, 11, 11);
        gridLayout_46->setObjectName(QString::fromUtf8("gridLayout_46"));
        gridLayout_46->setContentsMargins(0, 0, 0, 0);
        gridLayout_43 = new QGridLayout();
        gridLayout_43->setSpacing(6);
        gridLayout_43->setObjectName(QString::fromUtf8("gridLayout_43"));
        mCalloutsDrawCheckBox = new QCheckBox(scrollAreaWidgetContents_7);
        mCalloutsDrawCheckBox->setObjectName(QString::fromUtf8("mCalloutsDrawCheckBox"));
        sizePolicy11.setHeightForWidth(mCalloutsDrawCheckBox->sizePolicy().hasHeightForWidth());
        mCalloutsDrawCheckBox->setSizePolicy(sizePolicy11);

        gridLayout_43->addWidget(mCalloutsDrawCheckBox, 1, 0, 1, 1);

        label_511 = new QLabel(scrollAreaWidgetContents_7);
        label_511->setObjectName(QString::fromUtf8("label_511"));

        gridLayout_43->addWidget(label_511, 0, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_43->addItem(horizontalSpacer_15, 1, 2, 1, 1);

        mCalloutDrawDDBtn = new QgsPropertyOverrideButton(scrollAreaWidgetContents_7);
        mCalloutDrawDDBtn->setObjectName(QString::fromUtf8("mCalloutDrawDDBtn"));

        gridLayout_43->addWidget(mCalloutDrawDDBtn, 1, 1, 1, 1);

        mCalloutFrame = new QFrame(scrollAreaWidgetContents_7);
        mCalloutFrame->setObjectName(QString::fromUtf8("mCalloutFrame"));
        gridLayout_45 = new QGridLayout(mCalloutFrame);
        gridLayout_45->setSpacing(6);
        gridLayout_45->setContentsMargins(11, 11, 11, 11);
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        gridLayout_45->setContentsMargins(20, 1, -1, -1);
        mCalloutStyleComboBox = new QComboBox(mCalloutFrame);
        mCalloutStyleComboBox->setObjectName(QString::fromUtf8("mCalloutStyleComboBox"));

        gridLayout_45->addWidget(mCalloutStyleComboBox, 0, 1, 1, 2);

        mCalloutStackedWidget = new QStackedWidget(mCalloutFrame);
        mCalloutStackedWidget->setObjectName(QString::fromUtf8("mCalloutStackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QString::fromUtf8("pageDummy"));
        verticalLayout_19 = new QVBoxLayout(pageDummy);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label_45 = new QLabel(pageDummy);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setAlignment(Qt::AlignCenter);
        label_45->setWordWrap(true);

        verticalLayout_19->addWidget(label_45);

        mCalloutStackedWidget->addWidget(pageDummy);

        gridLayout_45->addWidget(mCalloutStackedWidget, 1, 0, 1, 3);

        label_11 = new QLabel(mCalloutFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_45->addWidget(label_11, 0, 0, 1, 1);


        gridLayout_43->addWidget(mCalloutFrame, 2, 0, 1, 3);


        gridLayout_46->addLayout(gridLayout_43, 0, 0, 1, 1);

        scrollArea_6->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_14->addWidget(scrollArea_6);

        mLabelStackedWidget->addWidget(mLabelPage_Callouts);
        mLabelPage_Placement = new QWidget();
        mLabelPage_Placement->setObjectName(QString::fromUtf8("mLabelPage_Placement"));
        verticalLayout_10 = new QVBoxLayout(mLabelPage_Placement);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_43 = new QLabel(mLabelPage_Placement);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        sizePolicy8.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy8);

        verticalLayout_10->addWidget(label_43);

        scrollArea_3 = new QgsScrollArea(mLabelPage_Placement);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, -718, 578, 1961));
        verticalLayout_11 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 6, 0);
        mPlacementGroupBox = new QGroupBox(scrollAreaWidgetContents_4);
        mPlacementGroupBox->setObjectName(QString::fromUtf8("mPlacementGroupBox"));
        gridLayout_13 = new QGridLayout(mPlacementGroupBox);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        mPlacementQuadrantFrame = new QFrame(mPlacementGroupBox);
        mPlacementQuadrantFrame->setObjectName(QString::fromUtf8("mPlacementQuadrantFrame"));
        gridLayout_19 = new QGridLayout(mPlacementQuadrantFrame);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        mPointQuadOffsetDDBtn = new QgsPropertyOverrideButton(mPlacementQuadrantFrame);
        mPointQuadOffsetDDBtn->setObjectName(QString::fromUtf8("mPointQuadOffsetDDBtn"));

        gridLayout_19->addWidget(mPointQuadOffsetDDBtn, 0, 2, 1, 1);

        mPlacementFixedQuadrantFrame = new QFrame(mPlacementQuadrantFrame);
        mPlacementFixedQuadrantFrame->setObjectName(QString::fromUtf8("mPlacementFixedQuadrantFrame"));
        gridLayout_3 = new QGridLayout(mPlacementFixedQuadrantFrame);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mPointOffsetOver = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetOver->setObjectName(QString::fromUtf8("mPointOffsetOver"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mIconLabelQuadrantCenter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPointOffsetOver->setIcon(icon11);
        mPointOffsetOver->setIconSize(QSize(32, 18));
        mPointOffsetOver->setCheckable(true);
        mPointOffsetOver->setChecked(true);

        gridLayout_3->addWidget(mPointOffsetOver, 1, 1, 1, 1);

        mPointOffsetAboveRight = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetAboveRight->setObjectName(QString::fromUtf8("mPointOffsetAboveRight"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mIconLabelQuadrantOffset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPointOffsetAboveRight->setIcon(icon12);
        mPointOffsetAboveRight->setIconSize(QSize(32, 18));
        mPointOffsetAboveRight->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetAboveRight, 0, 2, 1, 1);

        mPointOffsetBelowLeft = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetBelowLeft->setObjectName(QString::fromUtf8("mPointOffsetBelowLeft"));
        mPointOffsetBelowLeft->setIcon(icon12);
        mPointOffsetBelowLeft->setIconSize(QSize(32, 18));
        mPointOffsetBelowLeft->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetBelowLeft, 2, 0, 1, 1);

        mPointOffsetLeft = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetLeft->setObjectName(QString::fromUtf8("mPointOffsetLeft"));
        mPointOffsetLeft->setIcon(icon12);
        mPointOffsetLeft->setIconSize(QSize(32, 18));
        mPointOffsetLeft->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetLeft, 1, 0, 1, 1);

        mPointOffsetAboveLeft = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetAboveLeft->setObjectName(QString::fromUtf8("mPointOffsetAboveLeft"));
        mPointOffsetAboveLeft->setIcon(icon12);
        mPointOffsetAboveLeft->setIconSize(QSize(32, 18));
        mPointOffsetAboveLeft->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetAboveLeft, 0, 0, 1, 1);

        mPointOffsetRight = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetRight->setObjectName(QString::fromUtf8("mPointOffsetRight"));
        mPointOffsetRight->setIcon(icon12);
        mPointOffsetRight->setIconSize(QSize(32, 18));
        mPointOffsetRight->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetRight, 1, 2, 1, 1);

        mPointOffsetBelow = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetBelow->setObjectName(QString::fromUtf8("mPointOffsetBelow"));
        mPointOffsetBelow->setIcon(icon12);
        mPointOffsetBelow->setIconSize(QSize(32, 18));
        mPointOffsetBelow->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetBelow, 2, 1, 1, 1);

        mPointOffsetBelowRight = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetBelowRight->setObjectName(QString::fromUtf8("mPointOffsetBelowRight"));
        mPointOffsetBelowRight->setIcon(icon12);
        mPointOffsetBelowRight->setIconSize(QSize(32, 18));
        mPointOffsetBelowRight->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetBelowRight, 2, 2, 1, 1);

        mPointOffsetAbove = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetAbove->setObjectName(QString::fromUtf8("mPointOffsetAbove"));
        mPointOffsetAbove->setIcon(icon12);
        mPointOffsetAbove->setIconSize(QSize(32, 18));
        mPointOffsetAbove->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetAbove, 0, 1, 1, 1);


        gridLayout_19->addWidget(mPlacementFixedQuadrantFrame, 0, 1, 3, 1);

        label_6 = new QLabel(mPlacementQuadrantFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy8.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy8);

        gridLayout_19->addWidget(label_6, 0, 0, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(12, 12, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_18, 2, 0, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(0, 12, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_16, 0, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(12, 12, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_17, 1, 0, 1, 1);


        gridLayout_13->addWidget(mPlacementQuadrantFrame, 10, 0, 1, 1);

        mPlacementOffsetTypeFrame = new QFrame(mPlacementGroupBox);
        mPlacementOffsetTypeFrame->setObjectName(QString::fromUtf8("mPlacementOffsetTypeFrame"));
        mPlacementOffsetTypeFrame->setMinimumSize(QSize(0, 0));
        mPlacementOffsetTypeFrame->setFrameShape(QFrame::NoFrame);
        mPlacementOffsetTypeFrame->setFrameShadow(QFrame::Raised);
        gridLayout_40 = new QGridLayout(mPlacementOffsetTypeFrame);
        gridLayout_40->setSpacing(6);
        gridLayout_40->setContentsMargins(11, 11, 11, 11);
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        gridLayout_40->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(mPlacementOffsetTypeFrame);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_40->addWidget(label_42, 0, 0, 1, 1);

        mOffsetTypeComboBox = new QComboBox(mPlacementOffsetTypeFrame);
        mOffsetTypeComboBox->setObjectName(QString::fromUtf8("mOffsetTypeComboBox"));

        gridLayout_40->addWidget(mOffsetTypeComboBox, 0, 1, 1, 1);

        gridLayout_40->setColumnStretch(0, 1);
        gridLayout_40->setColumnStretch(1, 2);

        gridLayout_13->addWidget(mPlacementOffsetTypeFrame, 9, 0, 1, 1);

        mPlacementDistanceFrame = new QFrame(mPlacementGroupBox);
        mPlacementDistanceFrame->setObjectName(QString::fromUtf8("mPlacementDistanceFrame"));
        mPlacementDistanceFrame->setMinimumSize(QSize(0, 0));
        mPlacementDistanceFrame->setFrameShape(QFrame::NoFrame);
        mPlacementDistanceFrame->setFrameShadow(QFrame::Raised);
        gridLayout_27 = new QGridLayout(mPlacementDistanceFrame);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        gridLayout_49 = new QGridLayout();
        gridLayout_49->setSpacing(6);
        gridLayout_49->setObjectName(QString::fromUtf8("gridLayout_49"));
        gridLayout_49->setContentsMargins(-1, -1, -1, 0);
        mLineDistanceDDBtn = new QgsPropertyOverrideButton(mPlacementDistanceFrame);
        mLineDistanceDDBtn->setObjectName(QString::fromUtf8("mLineDistanceDDBtn"));

        gridLayout_49->addWidget(mLineDistanceDDBtn, 0, 1, 1, 1);

        mLineDistanceSpnBx = new QgsDoubleSpinBox(mPlacementDistanceFrame);
        mLineDistanceSpnBx->setObjectName(QString::fromUtf8("mLineDistanceSpnBx"));
        mLineDistanceSpnBx->setDecimals(4);
        mLineDistanceSpnBx->setMinimum(-999999999.000000000000000);
        mLineDistanceSpnBx->setMaximum(999999999.000000000000000);
        mLineDistanceSpnBx->setSingleStep(0.100000000000000);

        gridLayout_49->addWidget(mLineDistanceSpnBx, 0, 0, 1, 1);

        mLineDistanceUnitWidget = new QgsUnitSelectionWidget(mPlacementDistanceFrame);
        mLineDistanceUnitWidget->setObjectName(QString::fromUtf8("mLineDistanceUnitWidget"));
        mLineDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_49->addWidget(mLineDistanceUnitWidget, 1, 0, 1, 1);

        mLineDistanceUnitDDBtn = new QgsPropertyOverrideButton(mPlacementDistanceFrame);
        mLineDistanceUnitDDBtn->setObjectName(QString::fromUtf8("mLineDistanceUnitDDBtn"));

        gridLayout_49->addWidget(mLineDistanceUnitDDBtn, 1, 1, 1, 1);


        gridLayout_27->addLayout(gridLayout_49, 0, 1, 1, 1);

        label_26 = new QLabel(mPlacementDistanceFrame);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_27->addWidget(label_26, 0, 0, 1, 1);

        gridLayout_27->setColumnStretch(0, 1);
        gridLayout_27->setColumnStretch(1, 2);

        gridLayout_13->addWidget(mPlacementDistanceFrame, 6, 0, 1, 1);

        mPlacementModeDescriptionLabel = new QLabel(mPlacementGroupBox);
        mPlacementModeDescriptionLabel->setObjectName(QString::fromUtf8("mPlacementModeDescriptionLabel"));
        mPlacementModeDescriptionLabel->setWordWrap(true);

        gridLayout_13->addWidget(mPlacementModeDescriptionLabel, 2, 0, 1, 1);

        mPlacementLineFrame = new QFrame(mPlacementGroupBox);
        mPlacementLineFrame->setObjectName(QString::fromUtf8("mPlacementLineFrame"));
        mPlacementLineFrame->setMinimumSize(QSize(0, 0));
        mPlacementLineFrame->setFrameShape(QFrame::NoFrame);
        mPlacementLineFrame->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(mPlacementLineFrame);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        chkLineOrientationDependent = new QCheckBox(mPlacementLineFrame);
        chkLineOrientationDependent->setObjectName(QString::fromUtf8("chkLineOrientationDependent"));

        gridLayout_10->addWidget(chkLineOrientationDependent, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        chkLineAbove = new QCheckBox(mPlacementLineFrame);
        chkLineAbove->setObjectName(QString::fromUtf8("chkLineAbove"));
        sizePolicy11.setHeightForWidth(chkLineAbove->sizePolicy().hasHeightForWidth());
        chkLineAbove->setSizePolicy(sizePolicy11);
        chkLineAbove->setChecked(true);

        horizontalLayout->addWidget(chkLineAbove);

        chkLineOn = new QCheckBox(mPlacementLineFrame);
        chkLineOn->setObjectName(QString::fromUtf8("chkLineOn"));
        sizePolicy11.setHeightForWidth(chkLineOn->sizePolicy().hasHeightForWidth());
        chkLineOn->setSizePolicy(sizePolicy11);

        horizontalLayout->addWidget(chkLineOn);

        chkLineBelow = new QCheckBox(mPlacementLineFrame);
        chkLineBelow->setObjectName(QString::fromUtf8("chkLineBelow"));

        horizontalLayout->addWidget(chkLineBelow);

        mLinePlacementFlagsDDBtn = new QgsPropertyOverrideButton(mPlacementLineFrame);
        mLinePlacementFlagsDDBtn->setObjectName(QString::fromUtf8("mLinePlacementFlagsDDBtn"));

        horizontalLayout->addWidget(mLinePlacementFlagsDDBtn);


        gridLayout_10->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_13 = new QLabel(mPlacementLineFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy8.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy8);

        gridLayout_10->addWidget(label_13, 0, 0, 1, 1);


        gridLayout_13->addWidget(mPlacementLineFrame, 3, 0, 1, 1);

        label_14 = new QLabel(mPlacementGroupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);

        gridLayout_13->addWidget(label_14, 0, 0, 1, 1);

        mPlacementCartographicFrame = new QFrame(mPlacementGroupBox);
        mPlacementCartographicFrame->setObjectName(QString::fromUtf8("mPlacementCartographicFrame"));
        gridLayout_39 = new QGridLayout(mPlacementCartographicFrame);
        gridLayout_39->setSpacing(6);
        gridLayout_39->setContentsMargins(11, 11, 11, 11);
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        gridLayout_39->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(-1, -1, 0, -1);
        mPointPositionOrderDDBtn = new QgsPropertyOverrideButton(mPlacementCartographicFrame);
        mPointPositionOrderDDBtn->setObjectName(QString::fromUtf8("mPointPositionOrderDDBtn"));

        horizontalLayout_28->addWidget(mPointPositionOrderDDBtn);

        horizontalSpacer_27 = new QSpacerItem(0, 12, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_27);


        gridLayout_39->addLayout(horizontalLayout_28, 0, 1, 1, 1);

        label_20 = new QLabel(mPlacementCartographicFrame);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_39->addWidget(label_20, 0, 0, 1, 1);

        gridLayout_39->setColumnStretch(0, 1);
        gridLayout_39->setColumnStretch(1, 2);

        gridLayout_13->addWidget(mPlacementCartographicFrame, 11, 0, 1, 1);

        mPlacementMaximumDistanceFrame = new QFrame(mPlacementGroupBox);
        mPlacementMaximumDistanceFrame->setObjectName(QString::fromUtf8("mPlacementMaximumDistanceFrame"));
        mPlacementMaximumDistanceFrame->setFrameShape(QFrame::NoFrame);
        mPlacementMaximumDistanceFrame->setFrameShadow(QFrame::Raised);
        gridLayout_44 = new QGridLayout(mPlacementMaximumDistanceFrame);
        gridLayout_44->setSpacing(6);
        gridLayout_44->setContentsMargins(11, 11, 11, 11);
        gridLayout_44->setObjectName(QString::fromUtf8("gridLayout_44"));
        gridLayout_44->setContentsMargins(0, 0, 0, 0);
        mMaximumDistanceUnitWidget = new QgsUnitSelectionWidget(mPlacementMaximumDistanceFrame);
        mMaximumDistanceUnitWidget->setObjectName(QString::fromUtf8("mMaximumDistanceUnitWidget"));
        mMaximumDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_44->addWidget(mMaximumDistanceUnitWidget, 1, 1, 1, 1);

        label_49 = new QLabel(mPlacementMaximumDistanceFrame);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_44->addWidget(label_49, 0, 0, 2, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        mMaximumDistanceSpnBx = new QgsDoubleSpinBox(mPlacementMaximumDistanceFrame);
        mMaximumDistanceSpnBx->setObjectName(QString::fromUtf8("mMaximumDistanceSpnBx"));
        mMaximumDistanceSpnBx->setDecimals(4);
        mMaximumDistanceSpnBx->setMinimum(-999999999.000000000000000);
        mMaximumDistanceSpnBx->setMaximum(999999999.000000000000000);
        mMaximumDistanceSpnBx->setSingleStep(0.100000000000000);

        horizontalLayout_18->addWidget(mMaximumDistanceSpnBx);

        mMaximumDistanceDDBtn = new QgsPropertyOverrideButton(mPlacementMaximumDistanceFrame);
        mMaximumDistanceDDBtn->setObjectName(QString::fromUtf8("mMaximumDistanceDDBtn"));

        horizontalLayout_18->addWidget(mMaximumDistanceDDBtn);


        gridLayout_44->addLayout(horizontalLayout_18, 0, 1, 1, 1);

        gridLayout_44->setColumnStretch(0, 1);
        gridLayout_44->setColumnStretch(1, 2);

        gridLayout_13->addWidget(mPlacementMaximumDistanceFrame, 7, 0, 1, 1);

        mPlacementCentroidFrame = new QFrame(mPlacementGroupBox);
        mPlacementCentroidFrame->setObjectName(QString::fromUtf8("mPlacementCentroidFrame"));
        mPlacementCentroidFrame->setFrameShape(QFrame::NoFrame);
        mPlacementCentroidFrame->setFrameShadow(QFrame::Raised);
        gridLayout_25 = new QGridLayout(mPlacementCentroidFrame);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        mCentroidRadioVisible = new QRadioButton(mPlacementCentroidFrame);
        mCentroidRadioVisible->setObjectName(QString::fromUtf8("mCentroidRadioVisible"));
        sizePolicy11.setHeightForWidth(mCentroidRadioVisible->sizePolicy().hasHeightForWidth());
        mCentroidRadioVisible->setSizePolicy(sizePolicy11);
        mCentroidRadioVisible->setChecked(true);

        gridLayout_25->addWidget(mCentroidRadioVisible, 1, 1, 1, 1);

        mCentroidDDBtn = new QgsPropertyOverrideButton(mPlacementCentroidFrame);
        mCentroidDDBtn->setObjectName(QString::fromUtf8("mCentroidDDBtn"));

        gridLayout_25->addWidget(mCentroidDDBtn, 1, 3, 1, 1);

        mCentroidRadioWhole = new QRadioButton(mPlacementCentroidFrame);
        mCentroidRadioWhole->setObjectName(QString::fromUtf8("mCentroidRadioWhole"));
        sizePolicy10.setHeightForWidth(mCentroidRadioWhole->sizePolicy().hasHeightForWidth());
        mCentroidRadioWhole->setSizePolicy(sizePolicy10);

        gridLayout_25->addWidget(mCentroidRadioWhole, 1, 2, 1, 1);

        mCentroidInsideCheckBox = new QCheckBox(mPlacementCentroidFrame);
        mCentroidInsideCheckBox->setObjectName(QString::fromUtf8("mCentroidInsideCheckBox"));

        gridLayout_25->addWidget(mCentroidInsideCheckBox, 2, 1, 1, 3);

        mCentroidLabel = new QLabel(mPlacementCentroidFrame);
        mCentroidLabel->setObjectName(QString::fromUtf8("mCentroidLabel"));
        sizePolicy8.setHeightForWidth(mCentroidLabel->sizePolicy().hasHeightForWidth());
        mCentroidLabel->setSizePolicy(sizePolicy8);
        mCentroidLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_25->addWidget(mCentroidLabel, 1, 0, 1, 1);


        gridLayout_13->addWidget(mPlacementCentroidFrame, 5, 0, 1, 1);

        mPlacementPolygonFrame = new QFrame(mPlacementGroupBox);
        mPlacementPolygonFrame->setObjectName(QString::fromUtf8("mPlacementPolygonFrame"));
        mPlacementPolygonFrame->setMinimumSize(QSize(0, 0));
        mPlacementPolygonFrame->setFrameShape(QFrame::NoFrame);
        mPlacementPolygonFrame->setFrameShadow(QFrame::Raised);
        gridLayout_48 = new QGridLayout(mPlacementPolygonFrame);
        gridLayout_48->setSpacing(6);
        gridLayout_48->setContentsMargins(11, 11, 11, 11);
        gridLayout_48->setObjectName(QString::fromUtf8("gridLayout_48"));
        gridLayout_48->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mCheckAllowLabelsOutsidePolygons = new QCheckBox(mPlacementPolygonFrame);
        mCheckAllowLabelsOutsidePolygons->setObjectName(QString::fromUtf8("mCheckAllowLabelsOutsidePolygons"));

        horizontalLayout_11->addWidget(mCheckAllowLabelsOutsidePolygons);

        mAllowOutsidePolygonsDDBtn = new QgsPropertyOverrideButton(mPlacementPolygonFrame);
        mAllowOutsidePolygonsDDBtn->setObjectName(QString::fromUtf8("mAllowOutsidePolygonsDDBtn"));

        horizontalLayout_11->addWidget(mAllowOutsidePolygonsDDBtn);


        gridLayout_48->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        gridLayout_13->addWidget(mPlacementPolygonFrame, 4, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(mPlacementGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_14->addWidget(label_2);

        mPlacementModeComboBox = new QComboBox(mPlacementGroupBox);
        mPlacementModeComboBox->setObjectName(QString::fromUtf8("mPlacementModeComboBox"));

        horizontalLayout_14->addWidget(mPlacementModeComboBox);

        horizontalLayout_14->setStretch(1, 1);

        gridLayout_13->addLayout(horizontalLayout_14, 1, 0, 1, 1);

        mPlacementRotationFrame = new QFrame(mPlacementGroupBox);
        mPlacementRotationFrame->setObjectName(QString::fromUtf8("mPlacementRotationFrame"));
        mPlacementRotationFrame->setMinimumSize(QSize(0, 0));
        mPlacementRotationFrame->setFrameShape(QFrame::NoFrame);
        mPlacementRotationFrame->setFrameShadow(QFrame::Raised);
        gridLayout_26 = new QGridLayout(mPlacementRotationFrame);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        gridLayout_26->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(mPlacementRotationFrame);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy9.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy9);
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_26->addWidget(label_25, 0, 0, 1, 1);

        mPointAngleSpinBox = new QgsDoubleSpinBox(mPlacementRotationFrame);
        mPointAngleSpinBox->setObjectName(QString::fromUtf8("mPointAngleSpinBox"));
        mPointAngleSpinBox->setEnabled(true);
        sizePolicy2.setHeightForWidth(mPointAngleSpinBox->sizePolicy().hasHeightForWidth());
        mPointAngleSpinBox->setSizePolicy(sizePolicy2);
        mPointAngleSpinBox->setWrapping(true);
        mPointAngleSpinBox->setMinimum(-360.000000000000000);
        mPointAngleSpinBox->setMaximum(360.000000000000000);

        gridLayout_26->addWidget(mPointAngleSpinBox, 0, 1, 1, 1);


        gridLayout_13->addWidget(mPlacementRotationFrame, 13, 0, 1, 1);

        mPlacementOffsetFrame = new QFrame(mPlacementGroupBox);
        mPlacementOffsetFrame->setObjectName(QString::fromUtf8("mPlacementOffsetFrame"));
        mPlacementOffsetFrame->setMinimumSize(QSize(0, 0));
        mPlacementOffsetFrame->setFrameShape(QFrame::NoFrame);
        mPlacementOffsetFrame->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(mPlacementOffsetFrame);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        mPointOffsetYSpinBox = new QgsDoubleSpinBox(mPlacementOffsetFrame);
        mPointOffsetYSpinBox->setObjectName(QString::fromUtf8("mPointOffsetYSpinBox"));
        sizePolicy10.setHeightForWidth(mPointOffsetYSpinBox->sizePolicy().hasHeightForWidth());
        mPointOffsetYSpinBox->setSizePolicy(sizePolicy10);
        mPointOffsetYSpinBox->setDecimals(4);
        mPointOffsetYSpinBox->setMinimum(-9999999.000000000000000);
        mPointOffsetYSpinBox->setMaximum(9999999.000000000000000);
        mPointOffsetYSpinBox->setSingleStep(0.100000000000000);

        gridLayout_15->addWidget(mPointOffsetYSpinBox, 0, 2, 1, 1);

        mPointOffsetDDBtn = new QgsPropertyOverrideButton(mPlacementOffsetFrame);
        mPointOffsetDDBtn->setObjectName(QString::fromUtf8("mPointOffsetDDBtn"));

        gridLayout_15->addWidget(mPointOffsetDDBtn, 0, 3, 1, 1);

        mPointOffsetUnitsDDBtn = new QgsPropertyOverrideButton(mPlacementOffsetFrame);
        mPointOffsetUnitsDDBtn->setObjectName(QString::fromUtf8("mPointOffsetUnitsDDBtn"));

        gridLayout_15->addWidget(mPointOffsetUnitsDDBtn, 1, 3, 1, 1);

        mPointOffsetXSpinBox = new QgsDoubleSpinBox(mPlacementOffsetFrame);
        mPointOffsetXSpinBox->setObjectName(QString::fromUtf8("mPointOffsetXSpinBox"));
        sizePolicy10.setHeightForWidth(mPointOffsetXSpinBox->sizePolicy().hasHeightForWidth());
        mPointOffsetXSpinBox->setSizePolicy(sizePolicy10);
        mPointOffsetXSpinBox->setDecimals(4);
        mPointOffsetXSpinBox->setMinimum(-9999999.000000000000000);
        mPointOffsetXSpinBox->setMaximum(9999999.000000000000000);
        mPointOffsetXSpinBox->setSingleStep(0.100000000000000);

        gridLayout_15->addWidget(mPointOffsetXSpinBox, 0, 1, 1, 1);

        label_15 = new QLabel(mPlacementOffsetFrame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy8.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy8);

        gridLayout_15->addWidget(label_15, 0, 0, 1, 1);

        mPointOffsetUnitWidget = new QgsUnitSelectionWidget(mPlacementOffsetFrame);
        mPointOffsetUnitWidget->setObjectName(QString::fromUtf8("mPointOffsetUnitWidget"));
        mPointOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_15->addWidget(mPointOffsetUnitWidget, 1, 1, 1, 2);


        gridLayout_13->addWidget(mPlacementOffsetFrame, 12, 0, 1, 1);

        mPlacementPrioritizationFrame = new QFrame(mPlacementGroupBox);
        mPlacementPrioritizationFrame->setObjectName(QString::fromUtf8("mPlacementPrioritizationFrame"));
        mPlacementPrioritizationFrame->setFrameShape(QFrame::NoFrame);
        mPlacementPrioritizationFrame->setFrameShadow(QFrame::Raised);
        gridLayout_50 = new QGridLayout(mPlacementPrioritizationFrame);
        gridLayout_50->setSpacing(6);
        gridLayout_50->setContentsMargins(11, 11, 11, 11);
        gridLayout_50->setObjectName(QString::fromUtf8("gridLayout_50"));
        gridLayout_50->setContentsMargins(0, 0, 0, 0);
        label_53 = new QLabel(mPlacementPrioritizationFrame);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        gridLayout_50->addWidget(label_53, 0, 0, 1, 1);

        mPrioritizationComboBox = new QComboBox(mPlacementPrioritizationFrame);
        mPrioritizationComboBox->setObjectName(QString::fromUtf8("mPrioritizationComboBox"));

        gridLayout_50->addWidget(mPrioritizationComboBox, 0, 1, 1, 1);

        gridLayout_50->setColumnStretch(0, 1);
        gridLayout_50->setColumnStretch(1, 2);

        gridLayout_13->addWidget(mPlacementPrioritizationFrame, 8, 0, 1, 1);


        verticalLayout_11->addWidget(mPlacementGroupBox);

        mPlacementRepeatGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mPlacementRepeatGroupBox->setObjectName(QString::fromUtf8("mPlacementRepeatGroupBox"));
        gridLayout_18 = new QGridLayout(mPlacementRepeatGroupBox);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        mRepeatDistanceSpinBox = new QgsDoubleSpinBox(mPlacementRepeatGroupBox);
        mRepeatDistanceSpinBox->setObjectName(QString::fromUtf8("mRepeatDistanceSpinBox"));
        sizePolicy2.setHeightForWidth(mRepeatDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mRepeatDistanceSpinBox->setSizePolicy(sizePolicy2);
        mRepeatDistanceSpinBox->setDecimals(4);
        mRepeatDistanceSpinBox->setMaximum(999999999.000000000000000);

        gridLayout_18->addWidget(mRepeatDistanceSpinBox, 1, 1, 1, 1);

        mRepeatDistanceDDBtn = new QgsPropertyOverrideButton(mPlacementRepeatGroupBox);
        mRepeatDistanceDDBtn->setObjectName(QString::fromUtf8("mRepeatDistanceDDBtn"));

        gridLayout_18->addWidget(mRepeatDistanceDDBtn, 1, 2, 1, 1);

        label_7 = new QLabel(mPlacementRepeatGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_18->addWidget(label_7, 1, 0, 1, 1);

        mRepeatDistanceUnitWidget = new QgsUnitSelectionWidget(mPlacementRepeatGroupBox);
        mRepeatDistanceUnitWidget->setObjectName(QString::fromUtf8("mRepeatDistanceUnitWidget"));
        mRepeatDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_18->addWidget(mRepeatDistanceUnitWidget, 2, 1, 1, 1);

        mRepeatDistanceUnitDDBtn = new QgsPropertyOverrideButton(mPlacementRepeatGroupBox);
        mRepeatDistanceUnitDDBtn->setObjectName(QString::fromUtf8("mRepeatDistanceUnitDDBtn"));

        gridLayout_18->addWidget(mRepeatDistanceUnitDDBtn, 2, 2, 1, 1);

        label_41 = new QLabel(mPlacementRepeatGroupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setWordWrap(true);

        gridLayout_18->addWidget(label_41, 0, 0, 1, 3);


        verticalLayout_11->addWidget(mPlacementRepeatGroupBox);

        mPlacementOverrunGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mPlacementOverrunGroupBox->setObjectName(QString::fromUtf8("mPlacementOverrunGroupBox"));
        gridLayout_14 = new QGridLayout(mPlacementOverrunGroupBox);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        mOverrunDistanceUnitWidget = new QgsUnitSelectionWidget(mPlacementOverrunGroupBox);
        mOverrunDistanceUnitWidget->setObjectName(QString::fromUtf8("mOverrunDistanceUnitWidget"));
        mOverrunDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_14->addWidget(mOverrunDistanceUnitWidget, 2, 1, 1, 1);

        label_46 = new QLabel(mPlacementOverrunGroupBox);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_14->addWidget(label_46, 1, 0, 1, 1);

        mOverrunDistanceSpinBox = new QgsDoubleSpinBox(mPlacementOverrunGroupBox);
        mOverrunDistanceSpinBox->setObjectName(QString::fromUtf8("mOverrunDistanceSpinBox"));
        sizePolicy2.setHeightForWidth(mOverrunDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mOverrunDistanceSpinBox->setSizePolicy(sizePolicy2);
        mOverrunDistanceSpinBox->setDecimals(4);
        mOverrunDistanceSpinBox->setMaximum(999999999.000000000000000);

        gridLayout_14->addWidget(mOverrunDistanceSpinBox, 1, 1, 1, 1);

        mOverrunDistanceDDBtn = new QgsPropertyOverrideButton(mPlacementOverrunGroupBox);
        mOverrunDistanceDDBtn->setObjectName(QString::fromUtf8("mOverrunDistanceDDBtn"));

        gridLayout_14->addWidget(mOverrunDistanceDDBtn, 1, 2, 1, 1);

        label_40 = new QLabel(mPlacementOverrunGroupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setWordWrap(true);

        gridLayout_14->addWidget(label_40, 0, 0, 1, 3);


        verticalLayout_11->addWidget(mPlacementOverrunGroupBox);

        mLineAnchorGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mLineAnchorGroupBox->setObjectName(QString::fromUtf8("mLineAnchorGroupBox"));
        horizontalLayout_3 = new QHBoxLayout(mLineAnchorGroupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mLblPlacementAlongLine = new QLabel(mLineAnchorGroupBox);
        mLblPlacementAlongLine->setObjectName(QString::fromUtf8("mLblPlacementAlongLine"));
        mLblPlacementAlongLine->setWordWrap(true);

        horizontalLayout_3->addWidget(mLblPlacementAlongLine);

        mLineAnchorSettingsButton = new QPushButton(mLineAnchorGroupBox);
        mLineAnchorSettingsButton->setObjectName(QString::fromUtf8("mLineAnchorSettingsButton"));

        horizontalLayout_3->addWidget(mLineAnchorSettingsButton);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_11->addWidget(mLineAnchorGroupBox);

        mLabelMarginGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mLabelMarginGroupBox->setObjectName(QString::fromUtf8("mLabelMarginGroupBox"));
        gridLayout_52 = new QGridLayout(mLabelMarginGroupBox);
        gridLayout_52->setSpacing(6);
        gridLayout_52->setContentsMargins(11, 11, 11, 11);
        gridLayout_52->setObjectName(QString::fromUtf8("gridLayout_52"));
        mLabelSpacingStackedWidget = new QStackedWidget(mLabelMarginGroupBox);
        mLabelSpacingStackedWidget->setObjectName(QString::fromUtf8("mLabelSpacingStackedWidget"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_11 = new QGridLayout(page_2);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        mLabelMarginSpinBox = new QgsDoubleSpinBox(page_2);
        mLabelMarginSpinBox->setObjectName(QString::fromUtf8("mLabelMarginSpinBox"));
        sizePolicy2.setHeightForWidth(mLabelMarginSpinBox->sizePolicy().hasHeightForWidth());
        mLabelMarginSpinBox->setSizePolicy(sizePolicy2);
        mLabelMarginSpinBox->setDecimals(4);
        mLabelMarginSpinBox->setMaximum(999999999.000000000000000);

        gridLayout_11->addWidget(mLabelMarginSpinBox, 1, 1, 1, 1);

        mLabelMarginDDBtn = new QgsPropertyOverrideButton(page_2);
        mLabelMarginDDBtn->setObjectName(QString::fromUtf8("mLabelMarginDDBtn"));

        gridLayout_11->addWidget(mLabelMarginDDBtn, 1, 2, 1, 1);

        label_54 = new QLabel(page_2);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout_11->addWidget(label_54, 1, 0, 1, 1);

        label_55 = new QLabel(page_2);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setWordWrap(true);

        gridLayout_11->addWidget(label_55, 0, 0, 1, 3);

        mLabelMarginUnitWidget = new QgsUnitSelectionWidget(page_2);
        mLabelMarginUnitWidget->setObjectName(QString::fromUtf8("mLabelMarginUnitWidget"));
        mLabelMarginUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(mLabelMarginUnitWidget, 2, 1, 1, 1);

        mLabelSpacingStackedWidget->addWidget(page_2);
        mLabelSpacingNotAvailableWidget = new QWidget();
        mLabelSpacingNotAvailableWidget->setObjectName(QString::fromUtf8("mLabelSpacingNotAvailableWidget"));
        horizontalLayout_35 = new QHBoxLayout(mLabelSpacingNotAvailableWidget);
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalLayout_35->setContentsMargins(0, 0, 0, 0);
        label_50 = new QLabel(mLabelSpacingNotAvailableWidget);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        horizontalLayout_35->addWidget(label_50);

        mLabelSpacingStackedWidget->addWidget(mLabelSpacingNotAvailableWidget);

        gridLayout_52->addWidget(mLabelSpacingStackedWidget, 0, 0, 1, 1);


        verticalLayout_11->addWidget(mLabelMarginGroupBox);

        mObstaclesGroupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mObstaclesGroupBox_2->setObjectName(QString::fromUtf8("mObstaclesGroupBox_2"));
        verticalLayout_24 = new QVBoxLayout(mObstaclesGroupBox_2);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        mDuplicatesStackedWidget = new QStackedWidget(mObstaclesGroupBox_2);
        mDuplicatesStackedWidget->setObjectName(QString::fromUtf8("mDuplicatesStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_33 = new QHBoxLayout(page);
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(0, 0, 0, 0);
        mChkNoDuplicates = new QCheckBox(page);
        mChkNoDuplicates->setObjectName(QString::fromUtf8("mChkNoDuplicates"));
        mChkNoDuplicates->setEnabled(true);

        horizontalLayout_33->addWidget(mChkNoDuplicates);

        mNoDuplicatesDDBtn = new QgsPropertyOverrideButton(page);
        mNoDuplicatesDDBtn->setObjectName(QString::fromUtf8("mNoDuplicatesDDBtn"));

        horizontalLayout_33->addWidget(mNoDuplicatesDDBtn);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_24);

        mDuplicateSettingsButton = new QPushButton(page);
        mDuplicateSettingsButton->setObjectName(QString::fromUtf8("mDuplicateSettingsButton"));

        horizontalLayout_33->addWidget(mDuplicateSettingsButton);

        mDuplicatesStackedWidget->addWidget(page);
        mDuplicatesNotAvailableWidget = new QWidget();
        mDuplicatesNotAvailableWidget->setObjectName(QString::fromUtf8("mDuplicatesNotAvailableWidget"));
        horizontalLayout_34 = new QHBoxLayout(mDuplicatesNotAvailableWidget);
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(mDuplicatesNotAvailableWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_34->addWidget(label_19);

        mDuplicatesStackedWidget->addWidget(mDuplicatesNotAvailableWidget);

        verticalLayout_24->addWidget(mDuplicatesStackedWidget);


        verticalLayout_11->addWidget(mObstaclesGroupBox_2);

        mPlacementMaxCharAngleFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementMaxCharAngleFrame->setObjectName(QString::fromUtf8("mPlacementMaxCharAngleFrame"));
        gridLayout_22 = new QGridLayout(mPlacementMaxCharAngleFrame);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        mMaxCharAngleInDSpinBox = new QgsDoubleSpinBox(mPlacementMaxCharAngleFrame);
        mMaxCharAngleInDSpinBox->setObjectName(QString::fromUtf8("mMaxCharAngleInDSpinBox"));
        mMaxCharAngleInDSpinBox->setDecimals(1);
        mMaxCharAngleInDSpinBox->setMinimum(20.000000000000000);
        mMaxCharAngleInDSpinBox->setMaximum(60.000000000000000);
        mMaxCharAngleInDSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_22->addWidget(mMaxCharAngleInDSpinBox, 1, 2, 1, 1);

        mMaxCharAngleOutLabel = new QLabel(mPlacementMaxCharAngleFrame);
        mMaxCharAngleOutLabel->setObjectName(QString::fromUtf8("mMaxCharAngleOutLabel"));
        sizePolicy8.setHeightForWidth(mMaxCharAngleOutLabel->sizePolicy().hasHeightForWidth());
        mMaxCharAngleOutLabel->setSizePolicy(sizePolicy8);

        gridLayout_22->addWidget(mMaxCharAngleOutLabel, 1, 3, 1, 1);

        mMaxCharAngleInLabel = new QLabel(mPlacementMaxCharAngleFrame);
        mMaxCharAngleInLabel->setObjectName(QString::fromUtf8("mMaxCharAngleInLabel"));
        sizePolicy8.setHeightForWidth(mMaxCharAngleInLabel->sizePolicy().hasHeightForWidth());
        mMaxCharAngleInLabel->setSizePolicy(sizePolicy8);

        gridLayout_22->addWidget(mMaxCharAngleInLabel, 1, 1, 1, 1);

        mMaxCharAngleDDBtn = new QgsPropertyOverrideButton(mPlacementMaxCharAngleFrame);
        mMaxCharAngleDDBtn->setObjectName(QString::fromUtf8("mMaxCharAngleDDBtn"));

        gridLayout_22->addWidget(mMaxCharAngleDDBtn, 1, 5, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_22->addItem(horizontalSpacer_19, 1, 0, 1, 1);

        mMaxCharAngleLabel = new QLabel(mPlacementMaxCharAngleFrame);
        mMaxCharAngleLabel->setObjectName(QString::fromUtf8("mMaxCharAngleLabel"));
        sizePolicy1.setHeightForWidth(mMaxCharAngleLabel->sizePolicy().hasHeightForWidth());
        mMaxCharAngleLabel->setSizePolicy(sizePolicy1);

        gridLayout_22->addWidget(mMaxCharAngleLabel, 0, 0, 1, 6);

        mMaxCharAngleOutDSpinBox = new QgsDoubleSpinBox(mPlacementMaxCharAngleFrame);
        mMaxCharAngleOutDSpinBox->setObjectName(QString::fromUtf8("mMaxCharAngleOutDSpinBox"));
        mMaxCharAngleOutDSpinBox->setDecimals(1);
        mMaxCharAngleOutDSpinBox->setMinimum(20.000000000000000);
        mMaxCharAngleOutDSpinBox->setMaximum(95.000000000000000);
        mMaxCharAngleOutDSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_22->addWidget(mMaxCharAngleOutDSpinBox, 1, 4, 1, 1);


        verticalLayout_11->addWidget(mPlacementMaxCharAngleFrame);

        line = new QFrame(scrollAreaWidgetContents_4);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line);

        mGeometryGeneratorGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mGeometryGeneratorGroupBox->setObjectName(QString::fromUtf8("mGeometryGeneratorGroupBox"));
        mGeometryGeneratorGroupBox->setCheckable(true);
        mGeometryGeneratorGroupBox->setChecked(false);
        gridLayout_41 = new QGridLayout(mGeometryGeneratorGroupBox);
        gridLayout_41->setSpacing(6);
        gridLayout_41->setContentsMargins(11, 11, 11, 11);
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        gridLayout_41->setContentsMargins(0, -1, 0, -1);
        mGeometryGenerator = new QgsCodeEditorExpression(mGeometryGeneratorGroupBox);
        mGeometryGenerator->setObjectName(QString::fromUtf8("mGeometryGenerator"));

        gridLayout_41->addWidget(mGeometryGenerator, 1, 0, 2, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_41->addItem(verticalSpacer_9, 2, 1, 1, 1);

        mGeometryGeneratorExpressionButton = new QToolButton(mGeometryGeneratorGroupBox);
        mGeometryGeneratorExpressionButton->setObjectName(QString::fromUtf8("mGeometryGeneratorExpressionButton"));

        gridLayout_41->addWidget(mGeometryGeneratorExpressionButton, 1, 1, 1, 1);

        mGeometryGeneratorWarningLabel = new QLabel(mGeometryGeneratorGroupBox);
        mGeometryGeneratorWarningLabel->setObjectName(QString::fromUtf8("mGeometryGeneratorWarningLabel"));
        mGeometryGeneratorWarningLabel->setWordWrap(true);

        gridLayout_41->addWidget(mGeometryGeneratorWarningLabel, 4, 0, 1, 1);

        mGeometryGeneratorType = new QComboBox(mGeometryGeneratorGroupBox);
        mGeometryGeneratorType->setObjectName(QString::fromUtf8("mGeometryGeneratorType"));
        sizePolicy2.setHeightForWidth(mGeometryGeneratorType->sizePolicy().hasHeightForWidth());
        mGeometryGeneratorType->setSizePolicy(sizePolicy2);

        gridLayout_41->addWidget(mGeometryGeneratorType, 3, 0, 1, 1);


        verticalLayout_11->addWidget(mGeometryGeneratorGroupBox);

        mPlacementDDGroupBox = new QGroupBox(scrollAreaWidgetContents_4);
        mPlacementDDGroupBox->setObjectName(QString::fromUtf8("mPlacementDDGroupBox"));
        mPlacementDDGroupBox->setFlat(false);
        mPlacementDDGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("labelplacementgroup")));
        gridLayout_4 = new QGridLayout(mPlacementDDGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(8, -1, 8, -1);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        mCoordRotationDDBtn = new QgsPropertyOverrideButton(mPlacementDDGroupBox);
        mCoordRotationDDBtn->setObjectName(QString::fromUtf8("mCoordRotationDDBtn"));

        horizontalLayout_25->addWidget(mCoordRotationDDBtn);

        mCoordRotationUnitComboBox = new QComboBox(mPlacementDDGroupBox);
        mCoordRotationUnitComboBox->setObjectName(QString::fromUtf8("mCoordRotationUnitComboBox"));

        horizontalLayout_25->addWidget(mCoordRotationUnitComboBox);


        gridLayout_4->addLayout(horizontalLayout_25, 3, 1, 1, 1);

        chkPreserveRotation = new QCheckBox(mPlacementDDGroupBox);
        chkPreserveRotation->setObjectName(QString::fromUtf8("chkPreserveRotation"));
        chkPreserveRotation->setStyleSheet(QString::fromUtf8("margin-left: 12px; margin-top: 3px;"));
        chkPreserveRotation->setChecked(true);

        gridLayout_4->addWidget(chkPreserveRotation, 4, 1, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        mCoordXLabel = new QLabel(mPlacementDDGroupBox);
        mCoordXLabel->setObjectName(QString::fromUtf8("mCoordXLabel"));
        sizePolicy8.setHeightForWidth(mCoordXLabel->sizePolicy().hasHeightForWidth());
        mCoordXLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_22->addWidget(mCoordXLabel);

        mCoordXDDBtn = new QgsPropertyOverrideButton(mPlacementDDGroupBox);
        mCoordXDDBtn->setObjectName(QString::fromUtf8("mCoordXDDBtn"));

        horizontalLayout_22->addWidget(mCoordXDDBtn);

        mCoordYLabel = new QLabel(mPlacementDDGroupBox);
        mCoordYLabel->setObjectName(QString::fromUtf8("mCoordYLabel"));
        sizePolicy8.setHeightForWidth(mCoordYLabel->sizePolicy().hasHeightForWidth());
        mCoordYLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_22->addWidget(mCoordYLabel);

        mCoordYDDBtn = new QgsPropertyOverrideButton(mPlacementDDGroupBox);
        mCoordYDDBtn->setObjectName(QString::fromUtf8("mCoordYDDBtn"));

        horizontalLayout_22->addWidget(mCoordYDDBtn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_6);


        gridLayout_4->addLayout(horizontalLayout_22, 0, 1, 1, 1);

        mCoordLabel = new QLabel(mPlacementDDGroupBox);
        mCoordLabel->setObjectName(QString::fromUtf8("mCoordLabel"));

        gridLayout_4->addWidget(mCoordLabel, 0, 0, 1, 1);

        mCoordAlignmentFrame = new QFrame(mPlacementDDGroupBox);
        mCoordAlignmentFrame->setObjectName(QString::fromUtf8("mCoordAlignmentFrame"));
        horizontalLayout_27 = new QHBoxLayout(mCoordAlignmentFrame);
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        mCoordAlignmentHLabel = new QLabel(mCoordAlignmentFrame);
        mCoordAlignmentHLabel->setObjectName(QString::fromUtf8("mCoordAlignmentHLabel"));
        sizePolicy8.setHeightForWidth(mCoordAlignmentHLabel->sizePolicy().hasHeightForWidth());
        mCoordAlignmentHLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_27->addWidget(mCoordAlignmentHLabel);

        mCoordAlignmentHDDBtn = new QgsPropertyOverrideButton(mCoordAlignmentFrame);
        mCoordAlignmentHDDBtn->setObjectName(QString::fromUtf8("mCoordAlignmentHDDBtn"));

        horizontalLayout_27->addWidget(mCoordAlignmentHDDBtn);

        mCoordAlignmentVLabel = new QLabel(mCoordAlignmentFrame);
        mCoordAlignmentVLabel->setObjectName(QString::fromUtf8("mCoordAlignmentVLabel"));
        sizePolicy8.setHeightForWidth(mCoordAlignmentVLabel->sizePolicy().hasHeightForWidth());
        mCoordAlignmentVLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_27->addWidget(mCoordAlignmentVLabel);

        mCoordAlignmentVDDBtn = new QgsPropertyOverrideButton(mCoordAlignmentFrame);
        mCoordAlignmentVDDBtn->setObjectName(QString::fromUtf8("mCoordAlignmentVDDBtn"));

        horizontalLayout_27->addWidget(mCoordAlignmentVDDBtn);

        horizontalSpacer_21 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_21);


        gridLayout_4->addWidget(mCoordAlignmentFrame, 2, 1, 1, 1);

        mCoordRotationLabel = new QLabel(mPlacementDDGroupBox);
        mCoordRotationLabel->setObjectName(QString::fromUtf8("mCoordRotationLabel"));

        gridLayout_4->addWidget(mCoordRotationLabel, 3, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        mCoordPointDDBtn = new QgsPropertyOverrideButton(mPlacementDDGroupBox);
        mCoordPointDDBtn->setObjectName(QString::fromUtf8("mCoordPointDDBtn"));

        horizontalLayout_15->addWidget(mCoordPointDDBtn);

        horizontalSpacer_22 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_22);


        gridLayout_4->addLayout(horizontalLayout_15, 1, 1, 1, 1);

        mCoordAlignmentLabel = new QLabel(mPlacementDDGroupBox);
        mCoordAlignmentLabel->setObjectName(QString::fromUtf8("mCoordAlignmentLabel"));

        gridLayout_4->addWidget(mCoordAlignmentLabel, 2, 0, 1, 1);

        label_44 = new QLabel(mPlacementDDGroupBox);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_4->addWidget(label_44, 1, 0, 1, 1);


        verticalLayout_11->addWidget(mPlacementDDGroupBox);

        mPriorityGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mPriorityGrpBx->setObjectName(QString::fromUtf8("mPriorityGrpBx"));
        mPriorityGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("labelplacementgroup")));
        horizontalLayout_9 = new QHBoxLayout(mPriorityGrpBx);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(8, -1, 8, -1);
        label_34 = new QLabel(mPriorityGrpBx);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_9->addWidget(label_34);

        mPrioritySlider = new QSlider(mPriorityGrpBx);
        mPrioritySlider->setObjectName(QString::fromUtf8("mPrioritySlider"));
        mPrioritySlider->setMaximum(10);
        mPrioritySlider->setValue(5);
        mPrioritySlider->setOrientation(Qt::Horizontal);
        mPrioritySlider->setTickPosition(QSlider::TicksBelow);
        mPrioritySlider->setTickInterval(1);

        horizontalLayout_9->addWidget(mPrioritySlider);

        label_35 = new QLabel(mPriorityGrpBx);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        horizontalLayout_9->addWidget(label_35);

        mPriorityDDBtn = new QgsPropertyOverrideButton(mPriorityGrpBx);
        mPriorityDDBtn->setObjectName(QString::fromUtf8("mPriorityDDBtn"));

        horizontalLayout_9->addWidget(mPriorityDDBtn);


        verticalLayout_11->addWidget(mPriorityGrpBx);

        mObstaclesGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mObstaclesGroupBox->setObjectName(QString::fromUtf8("mObstaclesGroupBox"));
        verticalLayout_17 = new QVBoxLayout(mObstaclesGroupBox);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        mLblNoObstacle = new QLabel(mObstaclesGroupBox);
        mLblNoObstacle->setObjectName(QString::fromUtf8("mLblNoObstacle"));
        mLblNoObstacle->setWordWrap(true);

        verticalLayout_17->addWidget(mLblNoObstacle);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        mChkNoObstacle = new QCheckBox(mObstaclesGroupBox);
        mChkNoObstacle->setObjectName(QString::fromUtf8("mChkNoObstacle"));
        mChkNoObstacle->setEnabled(true);

        horizontalLayout_16->addWidget(mChkNoObstacle);

        mLblNoObstacle1 = new QLabel(mObstaclesGroupBox);
        mLblNoObstacle1->setObjectName(QString::fromUtf8("mLblNoObstacle1"));
        mLblNoObstacle1->setWordWrap(false);

        horizontalLayout_16->addWidget(mLblNoObstacle1);

        mIsObstacleDDBtn = new QgsPropertyOverrideButton(mObstaclesGroupBox);
        mIsObstacleDDBtn->setObjectName(QString::fromUtf8("mIsObstacleDDBtn"));

        horizontalLayout_16->addWidget(mIsObstacleDDBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_5);

        mObstacleSettingsButton = new QPushButton(mObstaclesGroupBox);
        mObstacleSettingsButton->setObjectName(QString::fromUtf8("mObstacleSettingsButton"));

        horizontalLayout_16->addWidget(mObstacleSettingsButton);

        horizontalLayout_16->setStretch(3, 1);

        verticalLayout_17->addLayout(horizontalLayout_16);


        verticalLayout_11->addWidget(mObstaclesGroupBox);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);

        scrollArea_3->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_10->addWidget(scrollArea_3);

        mLabelStackedWidget->addWidget(mLabelPage_Placement);
        mLabelPage_Rendering = new QWidget();
        mLabelPage_Rendering->setObjectName(QString::fromUtf8("mLabelPage_Rendering"));
        verticalLayout_13 = new QVBoxLayout(mLabelPage_Rendering);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(mLabelPage_Rendering);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_13->addWidget(label_4);

        scrollArea_4 = new QgsScrollArea(mLabelPage_Rendering);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 376, 883));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 6, -1);
        mRenderingLabelGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mRenderingLabelGrpBx->setObjectName(QString::fromUtf8("mRenderingLabelGrpBx"));
        mRenderingLabelGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("labelrenderinggroup")));
        verticalLayout_16 = new QVBoxLayout(mRenderingLabelGrpBx);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(8, -1, 8, -1);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setVerticalSpacing(6);
        mScaleBasedVisibilityChkBx = new QCheckBox(mRenderingLabelGrpBx);
        mScaleBasedVisibilityChkBx->setObjectName(QString::fromUtf8("mScaleBasedVisibilityChkBx"));
        sizePolicy11.setHeightForWidth(mScaleBasedVisibilityChkBx->sizePolicy().hasHeightForWidth());
        mScaleBasedVisibilityChkBx->setSizePolicy(sizePolicy11);

        gridLayout_9->addWidget(mScaleBasedVisibilityChkBx, 0, 0, 1, 1);

        mScaleBasedVisibilityDDBtn = new QgsPropertyOverrideButton(mRenderingLabelGrpBx);
        mScaleBasedVisibilityDDBtn->setObjectName(QString::fromUtf8("mScaleBasedVisibilityDDBtn"));

        gridLayout_9->addWidget(mScaleBasedVisibilityDDBtn, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        mScaleBasedVisibilityFrame = new QFrame(mRenderingLabelGrpBx);
        mScaleBasedVisibilityFrame->setObjectName(QString::fromUtf8("mScaleBasedVisibilityFrame"));
        mScaleBasedVisibilityFrame->setFrameShape(QFrame::NoFrame);
        gridLayout_2 = new QGridLayout(mScaleBasedVisibilityFrame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(20, 0, 0, 0);
        mMaxScaleWidget = new QgsScaleWidget(mScaleBasedVisibilityFrame);
        mMaxScaleWidget->setObjectName(QString::fromUtf8("mMaxScaleWidget"));
        mMaxScaleWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mMaxScaleWidget, 1, 1, 1, 1);

        mScaleBasedVisibilityMaxDDBtn = new QgsPropertyOverrideButton(mScaleBasedVisibilityFrame);
        mScaleBasedVisibilityMaxDDBtn->setObjectName(QString::fromUtf8("mScaleBasedVisibilityMaxDDBtn"));

        gridLayout_2->addWidget(mScaleBasedVisibilityMaxDDBtn, 1, 2, 1, 1);

        mMinScaleWidget = new QgsScaleWidget(mScaleBasedVisibilityFrame);
        mMinScaleWidget->setObjectName(QString::fromUtf8("mMinScaleWidget"));
        mMinScaleWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mMinScaleWidget, 0, 1, 1, 1);

        mScaleBasedVisibilityMinDDBtn = new QgsPropertyOverrideButton(mScaleBasedVisibilityFrame);
        mScaleBasedVisibilityMinDDBtn->setObjectName(QString::fromUtf8("mScaleBasedVisibilityMinDDBtn"));

        gridLayout_2->addWidget(mScaleBasedVisibilityMinDDBtn, 0, 2, 1, 1);

        mLabelMinScale = new QLabel(mScaleBasedVisibilityFrame);
        mLabelMinScale->setObjectName(QString::fromUtf8("mLabelMinScale"));
        mLabelMinScale->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/mActionZoomOut.svg")));

        gridLayout_2->addWidget(mLabelMinScale, 0, 0, 1, 1);

        mLabelMaxScale = new QLabel(mScaleBasedVisibilityFrame);
        mLabelMaxScale->setObjectName(QString::fromUtf8("mLabelMaxScale"));
        mLabelMaxScale->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/mActionZoomIn.svg")));

        gridLayout_2->addWidget(mLabelMaxScale, 1, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        gridLayout_9->addWidget(mScaleBasedVisibilityFrame, 1, 0, 1, 3);


        verticalLayout_16->addLayout(gridLayout_9);

        mFramePixelSizeVisibility = new QWidget(mRenderingLabelGrpBx);
        mFramePixelSizeVisibility->setObjectName(QString::fromUtf8("mFramePixelSizeVisibility"));
        gridLayout_16 = new QGridLayout(mFramePixelSizeVisibility);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setVerticalSpacing(6);
        mFontLimitPixelFrame = new QFrame(mFramePixelSizeVisibility);
        mFontLimitPixelFrame->setObjectName(QString::fromUtf8("mFontLimitPixelFrame"));
        mFontLimitPixelFrame->setFrameShape(QFrame::NoFrame);
        gridLayout_32 = new QGridLayout(mFontLimitPixelFrame);
        gridLayout_32->setSpacing(6);
        gridLayout_32->setContentsMargins(11, 11, 11, 11);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        gridLayout_32->setVerticalSpacing(6);
        gridLayout_32->setContentsMargins(20, 0, 0, 0);
        mFontMinPixelSpinBox = new QgsSpinBox(mFontLimitPixelFrame);
        mFontMinPixelSpinBox->setObjectName(QString::fromUtf8("mFontMinPixelSpinBox"));
        sizePolicy2.setHeightForWidth(mFontMinPixelSpinBox->sizePolicy().hasHeightForWidth());
        mFontMinPixelSpinBox->setSizePolicy(sizePolicy2);
        mFontMinPixelSpinBox->setMinimum(1);
        mFontMinPixelSpinBox->setMaximum(1000);
        mFontMinPixelSpinBox->setValue(3);
        mFontMinPixelSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_32->addWidget(mFontMinPixelSpinBox, 0, 0, 1, 1);

        mFontMinPixelDDBtn = new QgsPropertyOverrideButton(mFontLimitPixelFrame);
        mFontMinPixelDDBtn->setObjectName(QString::fromUtf8("mFontMinPixelDDBtn"));

        gridLayout_32->addWidget(mFontMinPixelDDBtn, 0, 1, 1, 1);

        mFontMaxPixelSpinBox = new QgsSpinBox(mFontLimitPixelFrame);
        mFontMaxPixelSpinBox->setObjectName(QString::fromUtf8("mFontMaxPixelSpinBox"));
        sizePolicy2.setHeightForWidth(mFontMaxPixelSpinBox->sizePolicy().hasHeightForWidth());
        mFontMaxPixelSpinBox->setSizePolicy(sizePolicy2);
        mFontMaxPixelSpinBox->setMinimum(1);
        mFontMaxPixelSpinBox->setMaximum(10000);
        mFontMaxPixelSpinBox->setValue(10000);
        mFontMaxPixelSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_32->addWidget(mFontMaxPixelSpinBox, 1, 0, 1, 1);

        mFontMaxPixelDDBtn = new QgsPropertyOverrideButton(mFontLimitPixelFrame);
        mFontMaxPixelDDBtn->setObjectName(QString::fromUtf8("mFontMaxPixelDDBtn"));

        gridLayout_32->addWidget(mFontMaxPixelDDBtn, 1, 1, 1, 1);


        gridLayout_16->addWidget(mFontLimitPixelFrame, 1, 0, 1, 3);

        mFontLimitPixelDDBtn = new QgsPropertyOverrideButton(mFramePixelSizeVisibility);
        mFontLimitPixelDDBtn->setObjectName(QString::fromUtf8("mFontLimitPixelDDBtn"));

        gridLayout_16->addWidget(mFontLimitPixelDDBtn, 0, 2, 1, 1);

        mFontLimitPixelChkBox = new QCheckBox(mFramePixelSizeVisibility);
        mFontLimitPixelChkBox->setObjectName(QString::fromUtf8("mFontLimitPixelChkBox"));
        sizePolicy11.setHeightForWidth(mFontLimitPixelChkBox->sizePolicy().hasHeightForWidth());
        mFontLimitPixelChkBox->setSizePolicy(sizePolicy11);

        gridLayout_16->addWidget(mFontLimitPixelChkBox, 0, 0, 1, 2);


        verticalLayout_16->addWidget(mFramePixelSizeVisibility);

        line_2 = new QFrame(mRenderingLabelGrpBx);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_16->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_16 = new QLabel(mRenderingLabelGrpBx);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_8->addWidget(label_16);

        mZIndexSpinBox = new QgsDoubleSpinBox(mRenderingLabelGrpBx);
        mZIndexSpinBox->setObjectName(QString::fromUtf8("mZIndexSpinBox"));
        sizePolicy4.setHeightForWidth(mZIndexSpinBox->sizePolicy().hasHeightForWidth());
        mZIndexSpinBox->setSizePolicy(sizePolicy4);
        mZIndexSpinBox->setMinimum(-9999999.000000000000000);
        mZIndexSpinBox->setMaximum(9999999.000000000000000);

        horizontalLayout_8->addWidget(mZIndexSpinBox);

        mZIndexDDBtn = new QgsPropertyOverrideButton(mRenderingLabelGrpBx);
        mZIndexDDBtn->setObjectName(QString::fromUtf8("mZIndexDDBtn"));

        horizontalLayout_8->addWidget(mZIndexDDBtn);


        verticalLayout_16->addLayout(horizontalLayout_8);

        mInferiorPlacementWidget = new QWidget(mRenderingLabelGrpBx);
        mInferiorPlacementWidget->setObjectName(QString::fromUtf8("mInferiorPlacementWidget"));
        horizontalLayout_20 = new QHBoxLayout(mInferiorPlacementWidget);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(-1, 1, -1, -1);
        mCheckAllowDegradedPlacement = new QCheckBox(mInferiorPlacementWidget);
        mCheckAllowDegradedPlacement->setObjectName(QString::fromUtf8("mCheckAllowDegradedPlacement"));

        horizontalLayout_20->addWidget(mCheckAllowDegradedPlacement);

        mAllowInferiorPlacementDBtn = new QgsPropertyOverrideButton(mInferiorPlacementWidget);
        mAllowInferiorPlacementDBtn->setObjectName(QString::fromUtf8("mAllowInferiorPlacementDBtn"));

        horizontalLayout_20->addWidget(mAllowInferiorPlacementDBtn);


        verticalLayout_16->addWidget(mInferiorPlacementWidget);

        mLabelRenderingDDFrame = new QFrame(mRenderingLabelGrpBx);
        mLabelRenderingDDFrame->setObjectName(QString::fromUtf8("mLabelRenderingDDFrame"));
        mLabelRenderingDDFrame->setFrameShape(QFrame::NoFrame);
        mLabelRenderingDDFrame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(mLabelRenderingDDFrame);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        mAlwaysShowDDBtn = new QgsPropertyOverrideButton(mLabelRenderingDDFrame);
        mAlwaysShowDDBtn->setObjectName(QString::fromUtf8("mAlwaysShowDDBtn"));

        gridLayout_5->addWidget(mAlwaysShowDDBtn, 1, 5, 1, 1);

        mShowLabelLabel = new QLabel(mLabelRenderingDDFrame);
        mShowLabelLabel->setObjectName(QString::fromUtf8("mShowLabelLabel"));
        mShowLabelLabel->setEnabled(true);
        sizePolicy8.setHeightForWidth(mShowLabelLabel->sizePolicy().hasHeightForWidth());
        mShowLabelLabel->setSizePolicy(sizePolicy8);

        gridLayout_5->addWidget(mShowLabelLabel, 1, 1, 1, 1);

        mShowLabelDDBtn = new QgsPropertyOverrideButton(mLabelRenderingDDFrame);
        mShowLabelDDBtn->setObjectName(QString::fromUtf8("mShowLabelDDBtn"));

        gridLayout_5->addWidget(mShowLabelDDBtn, 1, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 1, 0, 1, 1);

        label_3 = new QLabel(mLabelRenderingDDFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 7);

        horizontalSpacer_23 = new QSpacerItem(195, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_23, 1, 6, 1, 1);

        mAlwaysShowLabel = new QLabel(mLabelRenderingDDFrame);
        mAlwaysShowLabel->setObjectName(QString::fromUtf8("mAlwaysShowLabel"));
        sizePolicy8.setHeightForWidth(mAlwaysShowLabel->sizePolicy().hasHeightForWidth());
        mAlwaysShowLabel->setSizePolicy(sizePolicy8);

        gridLayout_5->addWidget(mAlwaysShowLabel, 1, 4, 1, 1);

        line_4 = new QFrame(mLabelRenderingDDFrame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_4, 1, 3, 1, 1);


        verticalLayout_16->addWidget(mLabelRenderingDDFrame);

        mUpsidedownFrame = new QFrame(mRenderingLabelGrpBx);
        mUpsidedownFrame->setObjectName(QString::fromUtf8("mUpsidedownFrame"));
        gridLayout = new QGridLayout(mUpsidedownFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mUpsidedownRadioAll = new QRadioButton(mUpsidedownFrame);
        mUpsidedownRadioAll->setObjectName(QString::fromUtf8("mUpsidedownRadioAll"));

        gridLayout->addWidget(mUpsidedownRadioAll, 1, 3, 1, 1);

        mUpsidedownRadioOff = new QRadioButton(mUpsidedownFrame);
        mUpsidedownRadioOff->setObjectName(QString::fromUtf8("mUpsidedownRadioOff"));
        sizePolicy11.setHeightForWidth(mUpsidedownRadioOff->sizePolicy().hasHeightForWidth());
        mUpsidedownRadioOff->setSizePolicy(sizePolicy11);
        mUpsidedownRadioOff->setChecked(true);

        gridLayout->addWidget(mUpsidedownRadioOff, 1, 1, 1, 1);

        mUpsidedownRadioDefined = new QRadioButton(mUpsidedownFrame);
        mUpsidedownRadioDefined->setObjectName(QString::fromUtf8("mUpsidedownRadioDefined"));
        sizePolicy11.setHeightForWidth(mUpsidedownRadioDefined->sizePolicy().hasHeightForWidth());
        mUpsidedownRadioDefined->setSizePolicy(sizePolicy11);

        gridLayout->addWidget(mUpsidedownRadioDefined, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        mUpsidedownLabel = new QLabel(mUpsidedownFrame);
        mUpsidedownLabel->setObjectName(QString::fromUtf8("mUpsidedownLabel"));

        gridLayout->addWidget(mUpsidedownLabel, 0, 0, 1, 4);


        verticalLayout_16->addWidget(mUpsidedownFrame);


        verticalLayout_8->addWidget(mRenderingLabelGrpBx);

        mPlacementOverrunGroupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mPlacementOverrunGroupBox_2->setObjectName(QString::fromUtf8("mPlacementOverrunGroupBox_2"));
        gridLayout_24 = new QGridLayout(mPlacementOverrunGroupBox_2);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        label_48 = new QLabel(mPlacementOverrunGroupBox_2);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setWordWrap(true);

        gridLayout_24->addWidget(label_48, 0, 0, 1, 4);

        mComboOverlapHandling = new QComboBox(mPlacementOverrunGroupBox_2);
        mComboOverlapHandling->setObjectName(QString::fromUtf8("mComboOverlapHandling"));

        gridLayout_24->addWidget(mComboOverlapHandling, 1, 1, 1, 2);

        label_47 = new QLabel(mPlacementOverrunGroupBox_2);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_24->addWidget(label_47, 1, 0, 1, 1);

        mOverlapHandlingDBtn = new QgsPropertyOverrideButton(mPlacementOverrunGroupBox_2);
        mOverlapHandlingDBtn->setObjectName(QString::fromUtf8("mOverlapHandlingDBtn"));

        gridLayout_24->addWidget(mOverlapHandlingDBtn, 1, 3, 1, 1);

        mOverlapModeDescriptionLabel = new QLabel(mPlacementOverrunGroupBox_2);
        mOverlapModeDescriptionLabel->setObjectName(QString::fromUtf8("mOverlapModeDescriptionLabel"));
        mOverlapModeDescriptionLabel->setWordWrap(true);

        gridLayout_24->addWidget(mOverlapModeDescriptionLabel, 2, 0, 1, 4);

        gridLayout_24->setColumnStretch(1, 1);

        verticalLayout_8->addWidget(mPlacementOverrunGroupBox_2);

        mRenderingFeaturesGrpBx = new QGroupBox(scrollAreaWidgetContents_5);
        mRenderingFeaturesGrpBx->setObjectName(QString::fromUtf8("mRenderingFeaturesGrpBx"));
        mRenderingFeaturesGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("labelrenderinggroup")));
        gridLayout_47 = new QGridLayout(mRenderingFeaturesGrpBx);
        gridLayout_47->setSpacing(6);
        gridLayout_47->setContentsMargins(11, 11, 11, 11);
        gridLayout_47->setObjectName(QString::fromUtf8("gridLayout_47"));
        gridLayout_47->setContentsMargins(8, -1, 8, -1);
        mMinSizeFrame = new QFrame(mRenderingFeaturesGrpBx);
        mMinSizeFrame->setObjectName(QString::fromUtf8("mMinSizeFrame"));
        gridLayout_21 = new QGridLayout(mMinSizeFrame);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setVerticalSpacing(6);
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_20 = new QSpacerItem(8, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_20, 1, 0, 1, 1);

        mMinSizeSpinBox = new QgsDoubleSpinBox(mMinSizeFrame);
        mMinSizeSpinBox->setObjectName(QString::fromUtf8("mMinSizeSpinBox"));

        gridLayout_21->addWidget(mMinSizeSpinBox, 1, 1, 1, 1);

        mMinSizeLabel = new QLabel(mMinSizeFrame);
        mMinSizeLabel->setObjectName(QString::fromUtf8("mMinSizeLabel"));

        gridLayout_21->addWidget(mMinSizeLabel, 0, 0, 1, 2);


        gridLayout_47->addWidget(mMinSizeFrame, 3, 0, 1, 2);

        mPolygonFeatureOptionsFrame = new QFrame(mRenderingFeaturesGrpBx);
        mPolygonFeatureOptionsFrame->setObjectName(QString::fromUtf8("mPolygonFeatureOptionsFrame"));
        mPolygonFeatureOptionsFrame->setFrameShape(QFrame::NoFrame);
        mPolygonFeatureOptionsFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(mPolygonFeatureOptionsFrame);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        mFitInsidePolygonCheckBox = new QCheckBox(mPolygonFeatureOptionsFrame);
        mFitInsidePolygonCheckBox->setObjectName(QString::fromUtf8("mFitInsidePolygonCheckBox"));

        horizontalLayout_12->addWidget(mFitInsidePolygonCheckBox);


        gridLayout_47->addWidget(mPolygonFeatureOptionsFrame, 4, 0, 1, 2);

        mLimitLabelFrame = new QFrame(mRenderingFeaturesGrpBx);
        mLimitLabelFrame->setObjectName(QString::fromUtf8("mLimitLabelFrame"));
        gridLayout_20 = new QGridLayout(mLimitLabelFrame);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setVerticalSpacing(6);
        gridLayout_20->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_8 = new QSpacerItem(8, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_20->addItem(verticalSpacer_8, 1, 0, 1, 1);

        mLimitLabelSpinBox = new QgsSpinBox(mLimitLabelFrame);
        mLimitLabelSpinBox->setObjectName(QString::fromUtf8("mLimitLabelSpinBox"));
        mLimitLabelSpinBox->setEnabled(false);
        mLimitLabelSpinBox->setMinimum(0);
        mLimitLabelSpinBox->setMaximum(999999999);
        mLimitLabelSpinBox->setValue(2000);
        mLimitLabelSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_20->addWidget(mLimitLabelSpinBox, 1, 1, 1, 1);

        mLimitLabelChkBox = new QCheckBox(mLimitLabelFrame);
        mLimitLabelChkBox->setObjectName(QString::fromUtf8("mLimitLabelChkBox"));

        gridLayout_20->addWidget(mLimitLabelChkBox, 0, 0, 1, 2);


        gridLayout_47->addWidget(mLimitLabelFrame, 2, 0, 1, 2);

        mLabelEveryPartWidget = new QWidget(mRenderingFeaturesGrpBx);
        mLabelEveryPartWidget->setObjectName(QString::fromUtf8("mLabelEveryPartWidget"));
        mLabelEveryPartWidget->setMinimumSize(QSize(0, 33));
        horizontalLayout_32 = new QHBoxLayout(mLabelEveryPartWidget);
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        chkLabelPerFeaturePart = new QCheckBox(mLabelEveryPartWidget);
        chkLabelPerFeaturePart->setObjectName(QString::fromUtf8("chkLabelPerFeaturePart"));

        horizontalLayout_32->addWidget(chkLabelPerFeaturePart);

        mLabelAllPartsDDBtn = new QgsPropertyOverrideButton(mLabelEveryPartWidget);
        mLabelAllPartsDDBtn->setObjectName(QString::fromUtf8("mLabelAllPartsDDBtn"));

        horizontalLayout_32->addWidget(mLabelAllPartsDDBtn);

        horizontalLayout_32->setStretch(0, 1);

        gridLayout_47->addWidget(mLabelEveryPartWidget, 0, 0, 1, 2);

        chkMergeLines = new QCheckBox(mRenderingFeaturesGrpBx);
        chkMergeLines->setObjectName(QString::fromUtf8("chkMergeLines"));

        gridLayout_47->addWidget(chkMergeLines, 1, 0, 1, 2);


        verticalLayout_8->addWidget(mRenderingFeaturesGrpBx);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        scrollArea_4->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_13->addWidget(scrollArea_4);

        mLabelStackedWidget->addWidget(mLabelPage_Rendering);

        verticalLayout_3->addWidget(mLabelStackedWidget);

        mLabelingOptionsSplitter->addWidget(mLabelingOptionGroupsFrame);

        gridLayout_17->addWidget(mLabelingOptionsSplitter, 1, 0, 1, 1);

        mFontPreviewSplitter->addWidget(mLabelingOptionsFrame);

        gridLayout_23->addWidget(mFontPreviewSplitter, 0, 0, 1, 1);


        gridLayout_8->addWidget(mLabelingFrame, 1, 0, 1, 1);

        mStackedWidgetLabelWith = new QgsStackedWidget(QgsTextFormatWidgetBase);
        mStackedWidgetLabelWith->setObjectName(QString::fromUtf8("mStackedWidgetLabelWith"));
        stackedWidgetLabelWithPage1 = new QWidget();
        stackedWidgetLabelWithPage1->setObjectName(QString::fromUtf8("stackedWidgetLabelWithPage1"));
        horizontalLayout_19 = new QHBoxLayout(stackedWidgetLabelWithPage1);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(stackedWidgetLabelWithPage1);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_19->addWidget(label_12);

        mFieldExpressionWidget = new QgsFieldExpressionWidget(stackedWidgetLabelWithPage1);
        mFieldExpressionWidget->setObjectName(QString::fromUtf8("mFieldExpressionWidget"));
        sizePolicy1.setHeightForWidth(mFieldExpressionWidget->sizePolicy().hasHeightForWidth());
        mFieldExpressionWidget->setSizePolicy(sizePolicy1);
        mFieldExpressionWidget->setMaximumSize(QSize(16777215, 16777215));
        mFieldExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_19->addWidget(mFieldExpressionWidget);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_7);

        mStackedWidgetLabelWith->addWidget(stackedWidgetLabelWithPage1);

        gridLayout_8->addWidget(mStackedWidgetLabelWith, 0, 0, 1, 1);

        gridLayout_8->setRowStretch(1, 1);
#if QT_CONFIG(shortcut)
        mLblNoObstacle1->setBuddy(mChkNoObstacle);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mFieldExpressionWidget, scrollArea_mPreview);
        QWidget::setTabOrder(scrollArea_mPreview, mPreviewTextEdit);
        QWidget::setTabOrder(mPreviewTextEdit, mPreviewTextBtn);
        QWidget::setTabOrder(mPreviewTextBtn, mPreviewScaleComboBox);
        QWidget::setTabOrder(mPreviewScaleComboBox, mPreviewBackgroundBtn);
        QWidget::setTabOrder(mPreviewBackgroundBtn, mOptionsTab);
        QWidget::setTabOrder(mOptionsTab, mLabelingOptionsListWidget);
        QWidget::setTabOrder(mLabelingOptionsListWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, mFontFamilyCmbBx);
        QWidget::setTabOrder(mFontFamilyCmbBx, mFontDDBtn);
        QWidget::setTabOrder(mFontDDBtn, mFontStyleComboBox);
        QWidget::setTabOrder(mFontStyleComboBox, mFontStyleDDBtn);
        QWidget::setTabOrder(mFontStyleDDBtn, mFontUnderlineBtn);
        QWidget::setTabOrder(mFontUnderlineBtn, mFontUnderlineDDBtn);
        QWidget::setTabOrder(mFontUnderlineDDBtn, mFontStrikethroughBtn);
        QWidget::setTabOrder(mFontStrikethroughBtn, mFontStrikeoutDDBtn);
        QWidget::setTabOrder(mFontStrikeoutDDBtn, mFontBoldBtn);
        QWidget::setTabOrder(mFontBoldBtn, mFontBoldDDBtn);
        QWidget::setTabOrder(mFontBoldDDBtn, mFontItalicBtn);
        QWidget::setTabOrder(mFontItalicBtn, mFontItalicDDBtn);
        QWidget::setTabOrder(mFontItalicDDBtn, mFontSizeSpinBox);
        QWidget::setTabOrder(mFontSizeSpinBox, mFontSizeDDBtn);
        QWidget::setTabOrder(mFontSizeDDBtn, mFontSizeUnitWidget);
        QWidget::setTabOrder(mFontSizeUnitWidget, mFontUnitsDDBtn);
        QWidget::setTabOrder(mFontUnitsDDBtn, btnTextColor);
        QWidget::setTabOrder(btnTextColor, mFontColorDDBtn);
        QWidget::setTabOrder(mFontColorDDBtn, mTextOpacityWidget);
        QWidget::setTabOrder(mTextOpacityWidget, mFontOpacityDDBtn);
        QWidget::setTabOrder(mFontOpacityDDBtn, mHtmlFormattingCheckBox);
        QWidget::setTabOrder(mHtmlFormattingCheckBox, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, mFontCapitalsComboBox);
        QWidget::setTabOrder(mFontCapitalsComboBox, mFontCaseDDBtn);
        QWidget::setTabOrder(mFontCaseDDBtn, mFontLetterSpacingSpinBox);
        QWidget::setTabOrder(mFontLetterSpacingSpinBox, mFontLetterSpacingDDBtn);
        QWidget::setTabOrder(mFontLetterSpacingDDBtn, mFontWordSpacingSpinBox);
        QWidget::setTabOrder(mFontWordSpacingSpinBox, mFontWordSpacingDDBtn);
        QWidget::setTabOrder(mFontWordSpacingDDBtn, mSpinStretch);
        QWidget::setTabOrder(mSpinStretch, mFontStretchDDBtn);
        QWidget::setTabOrder(mFontStretchDDBtn, mTabStopDistanceSpin);
        QWidget::setTabOrder(mTabStopDistanceSpin, mTabDistanceUnitWidget);
        QWidget::setTabOrder(mTabDistanceUnitWidget, mTabStopsButton);
        QWidget::setTabOrder(mTabStopsButton, mTabDistanceDDBtn);
        QWidget::setTabOrder(mTabDistanceDDBtn, mKerningCheckBox);
        QWidget::setTabOrder(mKerningCheckBox, mTextOrientationComboBox);
        QWidget::setTabOrder(mTextOrientationComboBox, mTextOrientationDDBtn);
        QWidget::setTabOrder(mTextOrientationDDBtn, comboBlendMode);
        QWidget::setTabOrder(comboBlendMode, mFontBlendModeDDBtn);
        QWidget::setTabOrder(mFontBlendModeDDBtn, mCheckBoxSubstituteText);
        QWidget::setTabOrder(mCheckBoxSubstituteText, mToolButtonConfigureSubstitutes);
        QWidget::setTabOrder(mToolButtonConfigureSubstitutes, wrapCharacterEdit);
        QWidget::setTabOrder(wrapCharacterEdit, mWrapCharDDBtn);
        QWidget::setTabOrder(mWrapCharDDBtn, mAutoWrapLengthSpinBox);
        QWidget::setTabOrder(mAutoWrapLengthSpinBox, mAutoWrapLengthDDBtn);
        QWidget::setTabOrder(mAutoWrapLengthDDBtn, mAutoWrapTypeComboBox);
        QWidget::setTabOrder(mAutoWrapTypeComboBox, mFontLineHeightSpinBox);
        QWidget::setTabOrder(mFontLineHeightSpinBox, mLineHeightUnitWidget);
        QWidget::setTabOrder(mLineHeightUnitWidget, mFontLineHeightDDBtn);
        QWidget::setTabOrder(mFontLineHeightDDBtn, mFontMultiLineAlignComboBox);
        QWidget::setTabOrder(mFontMultiLineAlignComboBox, mFontMultiLineAlignDDBtn);
        QWidget::setTabOrder(mFontMultiLineAlignDDBtn, mDirectSymbChkBx);
        QWidget::setTabOrder(mDirectSymbChkBx, mDirectSymbDDBtn);
        QWidget::setTabOrder(mDirectSymbDDBtn, mDirectSymbLeftLineEdit);
        QWidget::setTabOrder(mDirectSymbLeftLineEdit, mDirectSymbLeftToolBtn);
        QWidget::setTabOrder(mDirectSymbLeftToolBtn, mDirectSymbLeftDDBtn);
        QWidget::setTabOrder(mDirectSymbLeftDDBtn, mDirectSymbRightLineEdit);
        QWidget::setTabOrder(mDirectSymbRightLineEdit, mDirectSymbRightToolBtn);
        QWidget::setTabOrder(mDirectSymbRightToolBtn, mDirectSymbRightDDBtn);
        QWidget::setTabOrder(mDirectSymbRightDDBtn, mDirectSymbRadioBtnLR);
        QWidget::setTabOrder(mDirectSymbRadioBtnLR, mDirectSymbRadioBtnAbove);
        QWidget::setTabOrder(mDirectSymbRadioBtnAbove, mDirectSymbRadioBtnBelow);
        QWidget::setTabOrder(mDirectSymbRadioBtnBelow, mDirectSymbPlacementDDBtn);
        QWidget::setTabOrder(mDirectSymbPlacementDDBtn, mDirectSymbRevChkBx);
        QWidget::setTabOrder(mDirectSymbRevChkBx, mDirectSymbRevDDBtn);
        QWidget::setTabOrder(mDirectSymbRevDDBtn, mFormatNumChkBx);
        QWidget::setTabOrder(mFormatNumChkBx, mFormatNumDDBtn);
        QWidget::setTabOrder(mFormatNumDDBtn, mFormatNumDecimalsSpnBx);
        QWidget::setTabOrder(mFormatNumDecimalsSpnBx, mFormatNumDecimalsDDBtn);
        QWidget::setTabOrder(mFormatNumDecimalsDDBtn, mFormatNumPlusSignChkBx);
        QWidget::setTabOrder(mFormatNumPlusSignChkBx, mFormatNumPlusSignDDBtn);
        QWidget::setTabOrder(mFormatNumPlusSignDDBtn, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, mBufferDrawChkBx);
        QWidget::setTabOrder(mBufferDrawChkBx, mBufferDrawDDBtn);
        QWidget::setTabOrder(mBufferDrawDDBtn, spinBufferSize);
        QWidget::setTabOrder(spinBufferSize, mBufferSizeDDBtn);
        QWidget::setTabOrder(mBufferSizeDDBtn, mBufferUnitWidget);
        QWidget::setTabOrder(mBufferUnitWidget, mBufferUnitsDDBtn);
        QWidget::setTabOrder(mBufferUnitsDDBtn, btnBufferColor);
        QWidget::setTabOrder(btnBufferColor, mBufferColorDDBtn);
        QWidget::setTabOrder(mBufferColorDDBtn, mBufferTranspFillChbx);
        QWidget::setTabOrder(mBufferTranspFillChbx, mBufferOpacityWidget);
        QWidget::setTabOrder(mBufferOpacityWidget, mBufferOpacityDDBtn);
        QWidget::setTabOrder(mBufferOpacityDDBtn, mBufferJoinStyleComboBox);
        QWidget::setTabOrder(mBufferJoinStyleComboBox, mBufferJoinStyleDDBtn);
        QWidget::setTabOrder(mBufferJoinStyleDDBtn, comboBufferBlendMode);
        QWidget::setTabOrder(comboBufferBlendMode, mBufferBlendModeDDBtn);
        QWidget::setTabOrder(mBufferBlendModeDDBtn, scrollArea_71);
        QWidget::setTabOrder(scrollArea_71, mEnableMaskChkBx);
        QWidget::setTabOrder(mEnableMaskChkBx, mEnableMaskDDBtn);
        QWidget::setTabOrder(mEnableMaskDDBtn, mMaskBufferSizeSpinBox);
        QWidget::setTabOrder(mMaskBufferSizeSpinBox, mMaskBufferSizeDDBtn);
        QWidget::setTabOrder(mMaskBufferSizeDDBtn, mMaskBufferUnitWidget);
        QWidget::setTabOrder(mMaskBufferUnitWidget, mMaskBufferUnitsDDBtn);
        QWidget::setTabOrder(mMaskBufferUnitsDDBtn, mMaskOpacityWidget);
        QWidget::setTabOrder(mMaskOpacityWidget, mMaskOpacityDDBtn);
        QWidget::setTabOrder(mMaskOpacityDDBtn, mMaskJoinStyleComboBox);
        QWidget::setTabOrder(mMaskJoinStyleComboBox, mMaskJoinStyleDDBtn);
        QWidget::setTabOrder(mMaskJoinStyleDDBtn, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mShapeDrawChkBx);
        QWidget::setTabOrder(mShapeDrawChkBx, mShapeDrawDDBtn);
        QWidget::setTabOrder(mShapeDrawDDBtn, mShapeTypeCmbBx);
        QWidget::setTabOrder(mShapeTypeCmbBx, mShapeTypeDDBtn);
        QWidget::setTabOrder(mShapeTypeDDBtn, mShapeSVGPathLineEdit);
        QWidget::setTabOrder(mShapeSVGPathLineEdit, mShapeSVGSelectorBtn);
        QWidget::setTabOrder(mShapeSVGSelectorBtn, mShapeSVGPathDDBtn);
        QWidget::setTabOrder(mShapeSVGPathDDBtn, mBackgroundMarkerSymbolButton);
        QWidget::setTabOrder(mBackgroundMarkerSymbolButton, mBackgroundFillSymbolButton);
        QWidget::setTabOrder(mBackgroundFillSymbolButton, mShapeSizeCmbBx);
        QWidget::setTabOrder(mShapeSizeCmbBx, mShapeSizeTypeDDBtn);
        QWidget::setTabOrder(mShapeSizeTypeDDBtn, mShapeSizeXSpnBx);
        QWidget::setTabOrder(mShapeSizeXSpnBx, mShapeSizeXDDBtn);
        QWidget::setTabOrder(mShapeSizeXDDBtn, mShapeSizeYSpnBx);
        QWidget::setTabOrder(mShapeSizeYSpnBx, mShapeSizeYDDBtn);
        QWidget::setTabOrder(mShapeSizeYDDBtn, mShapeSizeUnitWidget);
        QWidget::setTabOrder(mShapeSizeUnitWidget, mShapeSizeUnitsDDBtn);
        QWidget::setTabOrder(mShapeSizeUnitsDDBtn, mShapeRotationCmbBx);
        QWidget::setTabOrder(mShapeRotationCmbBx, mShapeRotationTypeDDBtn);
        QWidget::setTabOrder(mShapeRotationTypeDDBtn, mShapeRotationDblSpnBx);
        QWidget::setTabOrder(mShapeRotationDblSpnBx, mShapeRotationDDBtn);
        QWidget::setTabOrder(mShapeRotationDDBtn, mShapeOffsetXSpnBx);
        QWidget::setTabOrder(mShapeOffsetXSpnBx, mShapeOffsetYSpnBx);
        QWidget::setTabOrder(mShapeOffsetYSpnBx, mShapeOffsetDDBtn);
        QWidget::setTabOrder(mShapeOffsetDDBtn, mShapeOffsetUnitWidget);
        QWidget::setTabOrder(mShapeOffsetUnitWidget, mShapeOffsetUnitsDDBtn);
        QWidget::setTabOrder(mShapeOffsetUnitsDDBtn, mShapeRadiusXDbSpnBx);
        QWidget::setTabOrder(mShapeRadiusXDbSpnBx, mShapeRadiusYDbSpnBx);
        QWidget::setTabOrder(mShapeRadiusYDbSpnBx, mShapeRadiusDDBtn);
        QWidget::setTabOrder(mShapeRadiusDDBtn, mShapeRadiusUnitWidget);
        QWidget::setTabOrder(mShapeRadiusUnitWidget, mShapeRadiusUnitsDDBtn);
        QWidget::setTabOrder(mShapeRadiusUnitsDDBtn, mBackgroundOpacityWidget);
        QWidget::setTabOrder(mBackgroundOpacityWidget, mShapeOpacityDDBtn);
        QWidget::setTabOrder(mShapeOpacityDDBtn, mShapeBlendCmbBx);
        QWidget::setTabOrder(mShapeBlendCmbBx, mShapeBlendModeDDBtn);
        QWidget::setTabOrder(mShapeBlendModeDDBtn, mShapeSVGParamsBtn);
        QWidget::setTabOrder(mShapeSVGParamsBtn, mShapeFillColorBtn);
        QWidget::setTabOrder(mShapeFillColorBtn, mShapeFillColorDDBtn);
        QWidget::setTabOrder(mShapeFillColorDDBtn, mShapeStrokeColorBtn);
        QWidget::setTabOrder(mShapeStrokeColorBtn, mShapeStrokeColorDDBtn);
        QWidget::setTabOrder(mShapeStrokeColorDDBtn, mShapeStrokeWidthSpnBx);
        QWidget::setTabOrder(mShapeStrokeWidthSpnBx, mShapeStrokeWidthDDBtn);
        QWidget::setTabOrder(mShapeStrokeWidthDDBtn, mShapeStrokeWidthUnitWidget);
        QWidget::setTabOrder(mShapeStrokeWidthUnitWidget, mShapeStrokeUnitsDDBtn);
        QWidget::setTabOrder(mShapeStrokeUnitsDDBtn, scrollArea_8);
        QWidget::setTabOrder(scrollArea_8, mShadowDrawChkBx);
        QWidget::setTabOrder(mShadowDrawChkBx, mShadowDrawDDBtn);
        QWidget::setTabOrder(mShadowDrawDDBtn, mShadowUnderCmbBx);
        QWidget::setTabOrder(mShadowUnderCmbBx, mShadowUnderDDBtn);
        QWidget::setTabOrder(mShadowUnderDDBtn, mShadowOffsetAngleDial);
        QWidget::setTabOrder(mShadowOffsetAngleDial, mShadowOffsetAngleSpnBx);
        QWidget::setTabOrder(mShadowOffsetAngleSpnBx, mShadowOffsetAngleDDBtn);
        QWidget::setTabOrder(mShadowOffsetAngleDDBtn, mShadowOffsetSpnBx);
        QWidget::setTabOrder(mShadowOffsetSpnBx, mShadowOffsetDDBtn);
        QWidget::setTabOrder(mShadowOffsetDDBtn, mShadowOffsetUnitWidget);
        QWidget::setTabOrder(mShadowOffsetUnitWidget, mShadowOffsetUnitsDDBtn);
        QWidget::setTabOrder(mShadowOffsetUnitsDDBtn, mShadowOffsetGlobalChkBx);
        QWidget::setTabOrder(mShadowOffsetGlobalChkBx, mShadowRadiusDblSpnBx);
        QWidget::setTabOrder(mShadowRadiusDblSpnBx, mShadowRadiusDDBtn);
        QWidget::setTabOrder(mShadowRadiusDDBtn, mShadowRadiusUnitWidget);
        QWidget::setTabOrder(mShadowRadiusUnitWidget, mShadowRadiusUnitsDDBtn);
        QWidget::setTabOrder(mShadowRadiusUnitsDDBtn, mShadowRadiusAlphaChkBx);
        QWidget::setTabOrder(mShadowRadiusAlphaChkBx, mShadowOpacityWidget);
        QWidget::setTabOrder(mShadowOpacityWidget, mShadowOpacityDDBtn);
        QWidget::setTabOrder(mShadowOpacityDDBtn, mShadowScaleSpnBx);
        QWidget::setTabOrder(mShadowScaleSpnBx, mShadowScaleDDBtn);
        QWidget::setTabOrder(mShadowScaleDDBtn, mShadowColorBtn);
        QWidget::setTabOrder(mShadowColorBtn, mShadowColorDDBtn);
        QWidget::setTabOrder(mShadowColorDDBtn, mShadowBlendCmbBx);
        QWidget::setTabOrder(mShadowBlendCmbBx, mShadowBlendDDBtn);
        QWidget::setTabOrder(mShadowBlendDDBtn, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, mCalloutsDrawCheckBox);
        QWidget::setTabOrder(mCalloutsDrawCheckBox, mCalloutDrawDDBtn);
        QWidget::setTabOrder(mCalloutDrawDDBtn, mCalloutStyleComboBox);
        QWidget::setTabOrder(mCalloutStyleComboBox, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mPlacementModeComboBox);
        QWidget::setTabOrder(mPlacementModeComboBox, chkLineAbove);
        QWidget::setTabOrder(chkLineAbove, chkLineOn);
        QWidget::setTabOrder(chkLineOn, chkLineBelow);
        QWidget::setTabOrder(chkLineBelow, mLinePlacementFlagsDDBtn);
        QWidget::setTabOrder(mLinePlacementFlagsDDBtn, chkLineOrientationDependent);
        QWidget::setTabOrder(chkLineOrientationDependent, mCheckAllowLabelsOutsidePolygons);
        QWidget::setTabOrder(mCheckAllowLabelsOutsidePolygons, mAllowOutsidePolygonsDDBtn);
        QWidget::setTabOrder(mAllowOutsidePolygonsDDBtn, mCentroidRadioVisible);
        QWidget::setTabOrder(mCentroidRadioVisible, mCentroidRadioWhole);
        QWidget::setTabOrder(mCentroidRadioWhole, mCentroidDDBtn);
        QWidget::setTabOrder(mCentroidDDBtn, mCentroidInsideCheckBox);
        QWidget::setTabOrder(mCentroidInsideCheckBox, mOffsetTypeComboBox);
        QWidget::setTabOrder(mOffsetTypeComboBox, mPointOffsetAboveLeft);
        QWidget::setTabOrder(mPointOffsetAboveLeft, mPointOffsetAbove);
        QWidget::setTabOrder(mPointOffsetAbove, mPointOffsetAboveRight);
        QWidget::setTabOrder(mPointOffsetAboveRight, mPointOffsetLeft);
        QWidget::setTabOrder(mPointOffsetLeft, mPointOffsetOver);
        QWidget::setTabOrder(mPointOffsetOver, mPointOffsetRight);
        QWidget::setTabOrder(mPointOffsetRight, mPointOffsetBelowLeft);
        QWidget::setTabOrder(mPointOffsetBelowLeft, mPointOffsetBelow);
        QWidget::setTabOrder(mPointOffsetBelow, mPointOffsetBelowRight);
        QWidget::setTabOrder(mPointOffsetBelowRight, mPointQuadOffsetDDBtn);
        QWidget::setTabOrder(mPointQuadOffsetDDBtn, mPointOffsetXSpinBox);
        QWidget::setTabOrder(mPointOffsetXSpinBox, mPointOffsetYSpinBox);
        QWidget::setTabOrder(mPointOffsetYSpinBox, mPointOffsetDDBtn);
        QWidget::setTabOrder(mPointOffsetDDBtn, mPointOffsetUnitWidget);
        QWidget::setTabOrder(mPointOffsetUnitWidget, mPointOffsetUnitsDDBtn);
        QWidget::setTabOrder(mPointOffsetUnitsDDBtn, mPointAngleSpinBox);
        QWidget::setTabOrder(mPointAngleSpinBox, mRepeatDistanceSpinBox);
        QWidget::setTabOrder(mRepeatDistanceSpinBox, mRepeatDistanceDDBtn);
        QWidget::setTabOrder(mRepeatDistanceDDBtn, mRepeatDistanceUnitWidget);
        QWidget::setTabOrder(mRepeatDistanceUnitWidget, mRepeatDistanceUnitDDBtn);
        QWidget::setTabOrder(mRepeatDistanceUnitDDBtn, mOverrunDistanceUnitWidget);
        QWidget::setTabOrder(mOverrunDistanceUnitWidget, mOverrunDistanceSpinBox);
        QWidget::setTabOrder(mOverrunDistanceSpinBox, mOverrunDistanceDDBtn);
        QWidget::setTabOrder(mOverrunDistanceDDBtn, mLineAnchorSettingsButton);
        QWidget::setTabOrder(mLineAnchorSettingsButton, mLabelMarginSpinBox);
        QWidget::setTabOrder(mLabelMarginSpinBox, mLabelMarginDDBtn);
        QWidget::setTabOrder(mLabelMarginDDBtn, mLabelMarginUnitWidget);
        QWidget::setTabOrder(mLabelMarginUnitWidget, mChkNoDuplicates);
        QWidget::setTabOrder(mChkNoDuplicates, mNoDuplicatesDDBtn);
        QWidget::setTabOrder(mNoDuplicatesDDBtn, mDuplicateSettingsButton);
        QWidget::setTabOrder(mDuplicateSettingsButton, mMaxCharAngleInDSpinBox);
        QWidget::setTabOrder(mMaxCharAngleInDSpinBox, mMaxCharAngleOutDSpinBox);
        QWidget::setTabOrder(mMaxCharAngleOutDSpinBox, mMaxCharAngleDDBtn);
        QWidget::setTabOrder(mMaxCharAngleDDBtn, mGeometryGeneratorGroupBox);
        QWidget::setTabOrder(mGeometryGeneratorGroupBox, mGeometryGeneratorExpressionButton);
        QWidget::setTabOrder(mGeometryGeneratorExpressionButton, mGeometryGeneratorType);
        QWidget::setTabOrder(mGeometryGeneratorType, mCoordXDDBtn);
        QWidget::setTabOrder(mCoordXDDBtn, mCoordYDDBtn);
        QWidget::setTabOrder(mCoordYDDBtn, mCoordPointDDBtn);
        QWidget::setTabOrder(mCoordPointDDBtn, mCoordAlignmentHDDBtn);
        QWidget::setTabOrder(mCoordAlignmentHDDBtn, mCoordAlignmentVDDBtn);
        QWidget::setTabOrder(mCoordAlignmentVDDBtn, mCoordRotationDDBtn);
        QWidget::setTabOrder(mCoordRotationDDBtn, chkPreserveRotation);
        QWidget::setTabOrder(chkPreserveRotation, mPrioritySlider);
        QWidget::setTabOrder(mPrioritySlider, mPriorityDDBtn);
        QWidget::setTabOrder(mPriorityDDBtn, mChkNoObstacle);
        QWidget::setTabOrder(mChkNoObstacle, mIsObstacleDDBtn);
        QWidget::setTabOrder(mIsObstacleDDBtn, mObstacleSettingsButton);
        QWidget::setTabOrder(mObstacleSettingsButton, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mScaleBasedVisibilityChkBx);
        QWidget::setTabOrder(mScaleBasedVisibilityChkBx, mScaleBasedVisibilityDDBtn);
        QWidget::setTabOrder(mScaleBasedVisibilityDDBtn, mMinScaleWidget);
        QWidget::setTabOrder(mMinScaleWidget, mScaleBasedVisibilityMinDDBtn);
        QWidget::setTabOrder(mScaleBasedVisibilityMinDDBtn, mMaxScaleWidget);
        QWidget::setTabOrder(mMaxScaleWidget, mScaleBasedVisibilityMaxDDBtn);
        QWidget::setTabOrder(mScaleBasedVisibilityMaxDDBtn, mFontLimitPixelChkBox);
        QWidget::setTabOrder(mFontLimitPixelChkBox, mFontLimitPixelDDBtn);
        QWidget::setTabOrder(mFontLimitPixelDDBtn, mFontMinPixelSpinBox);
        QWidget::setTabOrder(mFontMinPixelSpinBox, mFontMinPixelDDBtn);
        QWidget::setTabOrder(mFontMinPixelDDBtn, mFontMaxPixelSpinBox);
        QWidget::setTabOrder(mFontMaxPixelSpinBox, mFontMaxPixelDDBtn);
        QWidget::setTabOrder(mFontMaxPixelDDBtn, mZIndexSpinBox);
        QWidget::setTabOrder(mZIndexSpinBox, mZIndexDDBtn);
        QWidget::setTabOrder(mZIndexDDBtn, mCheckAllowDegradedPlacement);
        QWidget::setTabOrder(mCheckAllowDegradedPlacement, mAllowInferiorPlacementDBtn);
        QWidget::setTabOrder(mAllowInferiorPlacementDBtn, mShowLabelDDBtn);
        QWidget::setTabOrder(mShowLabelDDBtn, mAlwaysShowDDBtn);
        QWidget::setTabOrder(mAlwaysShowDDBtn, mUpsidedownRadioOff);
        QWidget::setTabOrder(mUpsidedownRadioOff, mUpsidedownRadioDefined);
        QWidget::setTabOrder(mUpsidedownRadioDefined, mUpsidedownRadioAll);
        QWidget::setTabOrder(mUpsidedownRadioAll, mComboOverlapHandling);
        QWidget::setTabOrder(mComboOverlapHandling, mOverlapHandlingDBtn);
        QWidget::setTabOrder(mOverlapHandlingDBtn, chkLabelPerFeaturePart);
        QWidget::setTabOrder(chkLabelPerFeaturePart, mLabelAllPartsDDBtn);
        QWidget::setTabOrder(mLabelAllPartsDDBtn, chkMergeLines);
        QWidget::setTabOrder(chkMergeLines, mLimitLabelChkBox);
        QWidget::setTabOrder(mLimitLabelChkBox, mLimitLabelSpinBox);
        QWidget::setTabOrder(mLimitLabelSpinBox, mMinSizeSpinBox);
        QWidget::setTabOrder(mMinSizeSpinBox, mFitInsidePolygonCheckBox);
        QWidget::setTabOrder(mFitInsidePolygonCheckBox, mCoordRotationUnitComboBox);
        QWidget::setTabOrder(mCoordRotationUnitComboBox, mLineDistanceDDBtn);
        QWidget::setTabOrder(mLineDistanceDDBtn, mLineDistanceSpnBx);
        QWidget::setTabOrder(mLineDistanceSpnBx, mLineDistanceUnitWidget);
        QWidget::setTabOrder(mLineDistanceUnitWidget, mLineDistanceUnitDDBtn);
        QWidget::setTabOrder(mLineDistanceUnitDDBtn, mPointPositionOrderDDBtn);
        QWidget::setTabOrder(mPointPositionOrderDDBtn, mMaximumDistanceUnitWidget);
        QWidget::setTabOrder(mMaximumDistanceUnitWidget, mMaximumDistanceSpnBx);
        QWidget::setTabOrder(mMaximumDistanceSpnBx, mMaximumDistanceDDBtn);
        QWidget::setTabOrder(mMaximumDistanceDDBtn, mPrioritizationComboBox);

        retranslateUi(QgsTextFormatWidgetBase);

        mOptionsTab->setCurrentIndex(8);
        mLabelStackedWidget->setCurrentIndex(7);
        mLabelSpacingStackedWidget->setCurrentIndex(0);
        mDuplicatesStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsTextFormatWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsTextFormatWidgetBase)
    {
        QgsTextFormatWidgetBase->setWindowTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Layer Labeling Settings", nullptr));
        groupBox_mPreview->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Text Sample", nullptr));
        lblFontPreview->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Lorem Ipsum", nullptr));
#if QT_CONFIG(tooltip)
        mPreviewTextEdit->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Sample text", nullptr));
#endif // QT_CONFIG(tooltip)
        mPreviewTextEdit->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Lorem Ipsum", nullptr));
#if QT_CONFIG(tooltip)
        mPreviewTextBtn->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Reset sample text", nullptr));
#endif // QT_CONFIG(tooltip)
        mPreviewTextBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mPreviewScaleComboBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Preview text at specific map scale", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mPreviewBackgroundBtn->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Sample background color", nullptr));
#endif // QT_CONFIG(tooltip)
        mOptionsTab->setTabText(mOptionsTab->indexOf(textTab), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(formattingTab), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(bufferTab), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(maskTab), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(backgroundTab), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(shadowTab), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(calloutsTab), QString());
#if QT_CONFIG(tooltip)
        mOptionsTab->setTabToolTip(mOptionsTab->indexOf(calloutsTab), QCoreApplication::translate("QgsTextFormatWidgetBase", "Callouts", nullptr));
#endif // QT_CONFIG(tooltip)
        mOptionsTab->setTabText(mOptionsTab->indexOf(placementTab), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(renderingTab), QString());
        mFontOpacityDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontSizeLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Size", nullptr));
        mFontSizeDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Font", nullptr));
        mFontMissingLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Font is missing.", nullptr));
#if QT_CONFIG(tooltip)
        mFontUnderlineBtn->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Underlined text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontUnderlineBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "U", nullptr));
        mFontUnderlineDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mFontStrikethroughBtn->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Strikeout text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontStrikethroughBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "S", nullptr));
        mFontStrikeoutDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mFontBoldBtn->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Bold text\n"
"(data defined only, overrides Style)", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontBoldBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "B", nullptr));
        mFontBoldDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mFontItalicBtn->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Italic text\n"
"(data defined only, overrides Style)", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontItalicBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "I", nullptr));
#if QT_CONFIG(tooltip)
        mFontStyleComboBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Available typeface styles", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontTranspLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Opacity", nullptr));
        mFontDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mHtmlFormattingCheckBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "If enabled, a subset of HTML formatting tags can be used to style text", nullptr));
#endif // QT_CONFIG(tooltip)
        mHtmlFormattingCheckBox->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Allow HTML formatting", nullptr));
        mFontStyleDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontColorLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Color", nullptr));
        mFontLabel_2->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Text", nullptr));
        mFontStyleLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Style", nullptr));
        mFontColorDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontItalicDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_36->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Formatting", nullptr));
        label_10->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Spacing", nullptr));
        mFontWordSpacingDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontStretchDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mCheckBoxSubstituteText->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "If enabled, the label text will automatically be modified using a preset list of substitutes", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxSubstituteText->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Apply label text substitutes", nullptr));
        mFontLetterSpacingLabel_3->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "letter", nullptr));
#if QT_CONFIG(tooltip)
        mFontLetterSpacingSpinBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Space in pixels or map units, relative to size unit choice", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontCaseDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontCapitalsLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Type case", nullptr));
#if QT_CONFIG(tooltip)
        mToolButtonConfigureSubstitutes->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Configure substitutes", nullptr));
#endif // QT_CONFIG(tooltip)
        mToolButtonConfigureSubstitutes->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontBlendModeDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mKerningCheckBox->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Enable kerning", nullptr));
#if QT_CONFIG(tooltip)
        mFontCapitalsComboBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Capitalization style of text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontLetterSpacingDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_24->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Multiple lines", nullptr));
        mFontLineHeightDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontMultiLineAlignDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mLabelWrapLinesTo->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Wrap lines to", nullptr));
        mLabelWrapOnCharacter->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Wrap on character", nullptr));
#if QT_CONFIG(tooltip)
        mAutoWrapLengthSpinBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "If set, label text will automatically be wrapped to match the specified number of characters per line (if possible)", nullptr));
#endif // QT_CONFIG(tooltip)
        mAutoWrapLengthSpinBox->setSpecialValueText(QCoreApplication::translate("QgsTextFormatWidgetBase", "No automatic wrapping", nullptr));
        mAutoWrapLengthSpinBox->setSuffix(QCoreApplication::translate("QgsTextFormatWidgetBase", " characters", nullptr));
#if QT_CONFIG(tooltip)
        mFontLineHeightSpinBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Line height spacing for multi-line text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontLineHeightSpinBox->setSuffix(QString());
        mWrapCharDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontMultiLineLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Alignment", nullptr));
        mAutoWrapTypeComboBox->setItemText(0, QCoreApplication::translate("QgsTextFormatWidgetBase", "Maximum line length", nullptr));
        mAutoWrapTypeComboBox->setItemText(1, QCoreApplication::translate("QgsTextFormatWidgetBase", "Minimum line length", nullptr));

#if QT_CONFIG(tooltip)
        mAutoWrapTypeComboBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Controls whether lines are automatically wrapped using the maximum number of characters in a line, or the minimum", nullptr));
#endif // QT_CONFIG(tooltip)
        mAutoWrapLengthDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontLineHeightLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Line height", nullptr));
#if QT_CONFIG(tooltip)
        mFontMultiLineAlignComboBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Paragraph style alignment of multi-line text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontWordSpacingLabel_3->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "word", nullptr));
#if QT_CONFIG(tooltip)
        mFontWordSpacingSpinBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Space in pixels or map units, relative to size unit choice", nullptr));
#endif // QT_CONFIG(tooltip)
        mSpinStretch->setSuffix(QCoreApplication::translate("QgsTextFormatWidgetBase", " %", nullptr));
        mLabelStretch->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Stretch", nullptr));
        mFormatNumChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Formatted numbers", nullptr));
        mFormatNumDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFormatNumDecimalsLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Decimal places ", nullptr));
        mFormatNumDecimalsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFormatNumPlusSignChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Show plus sign", nullptr));
        mFormatNumPlusSignDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mDirectSymbDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mDirectSymbChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Line direction symbol", nullptr));
        mDirectSymbRightLineEdit->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", ">", nullptr));
        mDirectSymbRightToolBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mDirectSymbPlacementDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mDirectSymbLeftDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mDirectSymbLeftLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Left", nullptr));
        mDirectSymbRightLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Right", nullptr));
        mDirectSymbPlacementLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Placement", nullptr));
        mDirectSymbRevChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Reverse direction", nullptr));
        mDirectSymbRightDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mDirectSymbLeftLineEdit->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "<", nullptr));
        mDirectSymbLeftToolBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mDirectSymbRevDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mDirectSymbRadioBtnLR->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "left/right", nullptr));
        mDirectSymbRadioBtnAbove->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "above", nullptr));
        mDirectSymbRadioBtnBelow->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "below", nullptr));
        mTextOrientationDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        labelBlendMode->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Blend mode", nullptr));
        labelTextOrientation->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Text orientation", nullptr));
#if QT_CONFIG(tooltip)
        mTabStopDistanceSpin->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Space in pixels or map units, relative to size unit choice", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTabStopsButton->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Configure tab stops", nullptr));
#endif // QT_CONFIG(tooltip)
        mTabStopsButton->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "...", nullptr));
        mTabDistanceDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mLabelStretch_2->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Tab distance", nullptr));
        mBufferDrawDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mBufferDrawChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Draw text buffer", nullptr));
        mBufferColorDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mBufferBlendModeDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mBufferSizeDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        labelBufferBlend->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Blend mode", nullptr));
        btnBufferColor->setText(QString());
        label_5->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Pen join style", nullptr));
        mBufferTranspFillChbx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Color buffer's fill", nullptr));
        label_31->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Size", nullptr));
        mBufferJoinStyleDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mBufferUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_32->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Color", nullptr));
        spinBufferSize->setSuffix(QString());
        mBufferOpacityDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mBufferTranspLabel_2->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Opacity", nullptr));
        label_37->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Buffer", nullptr));
        label_99->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Mask", nullptr));
        mEnableMaskDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mEnableMaskChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Enable mask", nullptr));
        mMaskOpacityDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mMaskJoinStyleDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mMaskBufferUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mMaskBufferSizeSpinBox->setSuffix(QString());
        mMaskBufferSizeDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_311->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Size", nullptr));
        label_51->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Pen join style", nullptr));
        mMaskTranspLabel_2->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Opacity", nullptr));
        label->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "<html><head/><body><p>This mask shape should then be selected as a <span style=\" font-style:italic;\">mask source</span> in the Masks properties of a layer in order to enable masking.</p></body></html>", nullptr));
        mShapeDrawChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Draw background", nullptr));
        mShapeDrawDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeOffsetDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeStrokeWidthLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Stroke width", nullptr));
        mShapeRadiusLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Radius X,Y", nullptr));
        mShapeSVGParamsBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Load symbol parameters", nullptr));
        mShapeSizeXDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeFillColorLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Fill color", nullptr));
        mShapeSizeYDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeSizeCmbBx->setItemText(0, QCoreApplication::translate("QgsTextFormatWidgetBase", "Buffer", nullptr));
        mShapeSizeCmbBx->setItemText(1, QCoreApplication::translate("QgsTextFormatWidgetBase", "Fixed", nullptr));

        label_23->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Rotation", nullptr));
        mShapeRotationTypeDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeSVGUnitsLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "symbol units", nullptr));
        mShapeSVGSelectorBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeSVGPathDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeFillColorDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeStrokeUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_8->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Size type", nullptr));
        mShapeStrokeWidthDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeSizeTypeDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_22->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Shape", nullptr));
        mShapeRadiusUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeRotationDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeOffsetXSpnBx->setSuffix(QString());
        mShapeOffsetYSpnBx->setSuffix(QString());
        label_21->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Offset X,Y", nullptr));
        mShapeSizeXLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Size X", nullptr));
        mShapeSizeXSpnBx->setSuffix(QString());
        mShapeOffsetUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeRotationCmbBx->setItemText(0, QCoreApplication::translate("QgsTextFormatWidgetBase", "Sync with label", nullptr));
        mShapeRotationCmbBx->setItemText(1, QCoreApplication::translate("QgsTextFormatWidgetBase", "Offset of label", nullptr));
        mShapeRotationCmbBx->setItemText(2, QCoreApplication::translate("QgsTextFormatWidgetBase", "Fixed", nullptr));

        mShapeStrokeColorLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Stroke color", nullptr));
        mShapeSizeUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeBlendModeDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_18->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Blend mode", nullptr));
        mShapeOpacityDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeStrokeColorDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeTranspLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Opacity", nullptr));
        mShapeSizeYLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Size Y", nullptr));
        mShapeTypeDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShapeSizeYSpnBx->setSuffix(QString());
        mShapeRadiusDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mBackgroundMarkerSymbolButton->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Background Symbol\342\200\246", nullptr));
        mBackgroundFillSymbolButton->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Background Symbol\342\200\246", nullptr));
        label_38->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Background", nullptr));
        mShadowDrawChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Draw drop shadow", nullptr));
        mShadowDrawDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_29->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Scale", nullptr));
        label_27->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Blur radius", nullptr));
        mShadowRadiusAlphaChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Blur only alpha pixels", nullptr));
#if QT_CONFIG(tooltip)
        mShadowOffsetGlobalChkBx->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Label's rotation is ignored", nullptr));
#endif // QT_CONFIG(tooltip)
        mShadowOffsetGlobalChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Use global shadow", nullptr));
        mShadowOffsetAngleSpnBx->setSuffix(QCoreApplication::translate("QgsTextFormatWidgetBase", "\313\232", nullptr));
        label_17->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Draw under", nullptr));
        mShadowScaleSpnBx->setSuffix(QCoreApplication::translate("QgsTextFormatWidgetBase", " %", nullptr));
        label_30->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Blend mode", nullptr));
        label_9->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Offset", nullptr));
        label_33->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Color", nullptr));
        label_28->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Opacity", nullptr));
        mShadowUnderDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShadowOffsetAngleDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShadowOffsetDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShadowOffsetUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShadowRadiusDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShadowRadiusUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShadowOpacityDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShadowScaleDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShadowColorDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShadowBlendDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_39->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Shadow", nullptr));
        mCalloutsDrawCheckBox->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Draw callouts", nullptr));
        label_511->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Callouts", nullptr));
        mCalloutDrawDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_45->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "This callout type doesn't have any editable properties", nullptr));
        label_11->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Style", nullptr));
        label_43->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Placement", nullptr));
        mPlacementGroupBox->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "General Settings", nullptr));
        mPointQuadOffsetDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mPointOffsetOver->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mPointOffsetAboveRight->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "abc", nullptr));
        mPointOffsetBelowLeft->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "abc", nullptr));
        mPointOffsetLeft->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "abc", nullptr));
        mPointOffsetAboveLeft->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "abc", nullptr));
        mPointOffsetRight->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "abc", nullptr));
        mPointOffsetBelow->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "abc", nullptr));
        mPointOffsetBelowRight->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "abc", nullptr));
        mPointOffsetAbove->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "abc", nullptr));
        label_6->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Quadrant", nullptr));
        label_42->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Distance offset from", nullptr));
        mLineDistanceDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mLineDistanceUnitDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_26->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Distance", nullptr));
        mPlacementModeDescriptionLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        mPlacementLineFrame->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Allowed label placement for lines. At least one position must be selected.", nullptr));
#endif // QT_CONFIG(tooltip)
        chkLineOrientationDependent->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Line orientation dependent position", nullptr));
        chkLineAbove->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Above line", nullptr));
        chkLineOn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "On line", nullptr));
        chkLineBelow->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Below line", nullptr));
        mLinePlacementFlagsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_13->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Allowed positions", nullptr));
        label_14->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The Placement Mode option controls the overall placement of labels relative to their corresponding features.</span></p></body></html>", nullptr));
        mPointPositionOrderDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_20->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Position priority", nullptr));
        label_49->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Maximum distance", nullptr));
        mMaximumDistanceDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mCentroidRadioVisible->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "visible polygon", nullptr));
        mCentroidDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mCentroidRadioWhole->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "whole polygon", nullptr));
        mCentroidInsideCheckBox->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Force point inside polygon", nullptr));
        mCentroidLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Centroid", nullptr));
        mCheckAllowLabelsOutsidePolygons->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Allow placing labels outside of polygons", nullptr));
        mAllowOutsidePolygonsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Mode", nullptr));
        label_25->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Rotation", nullptr));
        mPointAngleSpinBox->setSuffix(QCoreApplication::translate("QgsTextFormatWidgetBase", "\313\232", nullptr));
        mPointOffsetYSpinBox->setPrefix(QString());
        mPointOffsetYSpinBox->setSuffix(QString());
        mPointOffsetDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mPointOffsetUnitsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mPointOffsetXSpinBox->setPrefix(QString());
        mPointOffsetXSpinBox->setSuffix(QString());
        label_15->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Offset X,Y", nullptr));
        label_53->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Prioritize placement", nullptr));
        mPlacementRepeatGroupBox->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Repeating Labels", nullptr));
        mRepeatDistanceSpinBox->setSpecialValueText(QCoreApplication::translate("QgsTextFormatWidgetBase", "No repeat", nullptr));
        mRepeatDistanceDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_7->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Distance", nullptr));
        mRepeatDistanceUnitDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_41->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Setting a repeat distance allows labels to be repeated multiple times over the length of the feature. This distance is treated as a hint for label placement only, and the exact distance between repeating labels may vary depending on the shape of the feature and arrangement of nearby labels.", nullptr));
        mPlacementOverrunGroupBox->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Label Overrun", nullptr));
        label_46->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Overrun distance", nullptr));
        mOverrunDistanceSpinBox->setSpecialValueText(QCoreApplication::translate("QgsTextFormatWidgetBase", "No overrun", nullptr));
        mOverrunDistanceDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_40->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "The overrun distance allows labels which extend past the start or end of line features. Increasing this distance can allow for labels to be shown for shorter line features.", nullptr));
        mLineAnchorGroupBox->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Label Anchoring", nullptr));
        mLblPlacementAlongLine->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Controls the placement of labels along line features", nullptr));
        mLineAnchorSettingsButton->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Settings\342\200\246", nullptr));
        mLabelMarginGroupBox->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Label Spacing", nullptr));
        mLabelMarginSpinBox->setSpecialValueText(QCoreApplication::translate("QgsTextFormatWidgetBase", "No margin", nullptr));
        mLabelMarginDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_54->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Margin around labels", nullptr));
        label_55->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Prevents other labels from being placed closer than specified margin distance to labels from this layer.", nullptr));
        label_50->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Label spacing is not available on this QGIS installation", nullptr));
        mObstaclesGroupBox_2->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Duplicate Labels", nullptr));
        mChkNoDuplicates->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Avoid duplicate labels", nullptr));
        mNoDuplicatesDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mDuplicateSettingsButton->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Settings\342\200\246", nullptr));
        label_19->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Duplicate label removal is not available on this QGIS installation", nullptr));
        mMaxCharAngleOutLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "outside", nullptr));
        mMaxCharAngleInLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "inside", nullptr));
        mMaxCharAngleDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mMaxCharAngleLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Maximum angle between curved characters", nullptr));
#if QT_CONFIG(tooltip)
        mGeometryGeneratorGroupBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Generates or transforms the geometry to be used for labeling</span></p><p>The expression will be applied to each feature while rendering and the label will be placed based on the expression result.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mGeometryGeneratorGroupBox->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Geometry Generator", nullptr));
        mGeometryGeneratorWarningLabel->setText(QString());
        mPlacementDDGroupBox->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Data defined", nullptr));
        mCoordRotationDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        chkPreserveRotation->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Uncheck to write labeling engine derived rotation on pin and NULL on unpin", nullptr));
#endif // QT_CONFIG(tooltip)
        chkPreserveRotation->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Preserve data rotation values", nullptr));
        mCoordXLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "X", nullptr));
        mCoordXDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mCoordYLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Y", nullptr));
        mCoordYDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mCoordLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Coordinate", nullptr));
        mCoordAlignmentHLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "horizontal", nullptr));
        mCoordAlignmentHDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mCoordAlignmentVLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "vertical", nullptr));
        mCoordAlignmentVDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mCoordRotationLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Rotation", nullptr));
        mCoordPointDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mCoordAlignmentLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Alignment", nullptr));
        label_44->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Point", nullptr));
        mPriorityGrpBx->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Priority", nullptr));
        label_34->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Low", nullptr));
        label_35->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "High", nullptr));
        mPriorityDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mObstaclesGroupBox->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Obstacles", nullptr));
        mLblNoObstacle->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "When activated, features acting as obstacles discourage labels and diagrams from covering them.", nullptr));
        mLblNoObstacle1->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Features act as obstacles", nullptr));
        mIsObstacleDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mObstacleSettingsButton->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Settings\342\200\246", nullptr));
        label_4->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Rendering", nullptr));
        mRenderingLabelGrpBx->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Label options", nullptr));
        mScaleBasedVisibilityChkBx->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Scale dependent visibility", nullptr));
        mScaleBasedVisibilityDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mMaxScaleWidget->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Maximum scale, i.e. most \"zoomed in\".\n"
"This limit is inclusive, that means the label will be displayed on this scale.", nullptr));
#endif // QT_CONFIG(tooltip)
        mScaleBasedVisibilityMaxDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mMinScaleWidget->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Minimum scale, i.e. most \"zoomed out\".\n"
"This limit is exclusive, that means the label will not be displayed on this scale.", nullptr));
#endif // QT_CONFIG(tooltip)
        mScaleBasedVisibilityMinDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mLabelMinScale->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Minimum scale, i.e. most \"zoomed out\".\n"
"This limit is exclusive, that means the label will not be displayed on this scale.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLabelMinScale->setText(QString());
#if QT_CONFIG(tooltip)
        mLabelMaxScale->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Maximum scale, i.e. most \"zoomed in\".\n"
"This limit is inclusive, that means the label will be displayed on this scale.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLabelMaxScale->setText(QString());
#if QT_CONFIG(tooltip)
        mFontMinPixelSpinBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Labels will not show if smaller than this on screen", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontMinPixelSpinBox->setSuffix(QCoreApplication::translate("QgsTextFormatWidgetBase", " px", nullptr));
        mFontMinPixelSpinBox->setPrefix(QCoreApplication::translate("QgsTextFormatWidgetBase", "Minimum ", nullptr));
        mFontMinPixelDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mFontMaxPixelSpinBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Labels will not show if larger than this on screen", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontMaxPixelSpinBox->setSuffix(QCoreApplication::translate("QgsTextFormatWidgetBase", " px", nullptr));
        mFontMaxPixelSpinBox->setPrefix(QCoreApplication::translate("QgsTextFormatWidgetBase", "Maximum ", nullptr));
        mFontMaxPixelDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontLimitPixelDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mFontLimitPixelChkBox->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Pixel size-based visibility (labels in map units)", nullptr));
        label_16->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Label z-index", nullptr));
#if QT_CONFIG(tooltip)
        mZIndexSpinBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Controls how labels are drawn on top of each other. Labels with a higher z-index are drawn above labels and diagrams with a lower z-index.", nullptr));
#endif // QT_CONFIG(tooltip)
        mZIndexDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mCheckAllowDegradedPlacement->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "If checked, then inferior placements are permitted when a label cannot otherwise be placed. For instance, it will permit a line label to be placed horizontal over the center of a line which is otherwise too short to fit the label text.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckAllowDegradedPlacement->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Allow inferior fallback placements", nullptr));
        mAllowInferiorPlacementDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mAlwaysShowDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mShowLabelLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Show label", nullptr));
        mShowLabelDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        label_3->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Data defined", nullptr));
        mAlwaysShowLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Always show", nullptr));
        mUpsidedownRadioAll->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "always", nullptr));
        mUpsidedownRadioOff->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "never", nullptr));
        mUpsidedownRadioDefined->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "when rotation defined", nullptr));
        mUpsidedownLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Show upside-down labels", nullptr));
        mPlacementOverrunGroupBox_2->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Overlapping labels", nullptr));
        label_48->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "The overlap mode controls whether overlapping labels are permitted for features in the layer, and how they should be handled.", nullptr));
        label_47->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Mode", nullptr));
        mOverlapHandlingDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        mOverlapModeDescriptionLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "TextLabel", nullptr));
        mRenderingFeaturesGrpBx->setTitle(QCoreApplication::translate("QgsTextFormatWidgetBase", "Feature options", nullptr));
        mMinSizeSpinBox->setSuffix(QCoreApplication::translate("QgsTextFormatWidgetBase", " mm", nullptr));
        mMinSizeLabel->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Suppress labeling of features smaller than", nullptr));
        mFitInsidePolygonCheckBox->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Only draw labels which fit completely within feature", nullptr));
#if QT_CONFIG(tooltip)
        mLimitLabelSpinBox->setToolTip(QCoreApplication::translate("QgsTextFormatWidgetBase", "Number of features sent to labeling engine, though not all may be labeled", nullptr));
#endif // QT_CONFIG(tooltip)
        mLimitLabelChkBox->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Limit number of features to be labeled to", nullptr));
        chkLabelPerFeaturePart->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Label every part of multi-part features", nullptr));
        mLabelAllPartsDDBtn->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "\342\200\246", nullptr));
        chkMergeLines->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Merge connected lines to avoid duplicate labels", nullptr));
        label_12->setText(QCoreApplication::translate("QgsTextFormatWidgetBase", "Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTextFormatWidgetBase: public Ui_QgsTextFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTEXTFORMATWIDGETBASE_H
