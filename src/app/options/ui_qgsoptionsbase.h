/********************************************************************************
** Form generated from reading UI file 'qgsoptionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOPTIONSBASE_H
#define UI_QGSOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscolorschemelist.h>
#include <qgsvariableeditorwidget.h>
#include "qgsautheditorwidgets.h"
#include "qgsauthsettingswidget.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdatumtransformtablewidget.h"
#include "qgsdoublespinbox.h"
#include "qgsfilterlineedit.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOptionsBase
{
public:
    QAction *mActionImportPalette;
    QAction *mActionRemovePalette;
    QAction *mActionNewPalette;
    QAction *mActionShowInButtons;
    QVBoxLayout *verticalLayout_5;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_15;
    QgsFilterLineEdit *mSearchLineEdit;
    QTreeView *mOptionsTreeView;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptionsPageGeneral;
    QVBoxLayout *verticalLayout_3;
    QgsScrollArea *mOptionsScrollArea_01;
    QWidget *mOptionsScrollAreaContents_01;
    QVBoxLayout *verticalLayout_28;
    QgsCollapsibleGroupBox *grpLocale;
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout_25;
    QLabel *label_7;
    QLabel *label_52;
    QLabel *label_5;
    QComboBox *cboTranslation;
    QComboBox *cboGlobalLocale;
    QCheckBox *cbShowGroupSeparator;
    QLabel *lblSystemLocale;
    QLabel *lblLocaleSample;
    QgsCollapsibleGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *cmbStyle;
    QHBoxLayout *horizontalLayout_37;
    QLabel *lblUITheme;
    QSpacerItem *horizontalSpacer_47;
    QComboBox *cmbUITheme;
    QHBoxLayout *horizontalLayout_7;
    QLabel *textLabel1_5;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *cmbIconSize;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_43;
    QRadioButton *mFontFamilyRadioQt;
    QRadioButton *mFontFamilyRadioCustom;
    QFontComboBox *mFontFamilyComboBox;
    QLabel *label_20;
    QgsDoubleSpinBox *spinFontSize;
    QHBoxLayout *horizontalLayout_28;
    QLabel *mMessageTimeoutLabel;
    QSpacerItem *horizontalSpacer_13;
    QgsSpinBox *mMessageTimeoutSpnBx;
    QGridLayout *gridLayout_16;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbxCheckVersion;
    QCheckBox *cbxHideSplash;
    QCheckBox *cbxShowNews;
    QCheckBox *mNativeColorDialogsChkBx;
    QgsCollapsibleGroupBox *groupBox_11;
    QGridLayout *gridLayout_38;
    QGridLayout *gridLayout_4;
    QComboBox *mProjectOnLaunchCmbBx;
    QToolButton *mProjectOnLaunchPushBtn;
    QSpacerItem *horizontalSpacer_35;
    QSpacerItem *horizontalSpacer_36;
    QLineEdit *mProjectOnLaunchLineEdit;
    QLabel *label_54;
    QCheckBox *cbxProjectDefaultNew;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *pbnProjectDefaultSetCurrent;
    QPushButton *pbnProjectDefaultReset;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_31;
    QLineEdit *leTemplateFolder;
    QToolButton *pbnTemplateFolderBrowse;
    QToolButton *pbnTemplateFolderReset;
    QCheckBox *chbAskToSaveProjectChanges;
    QCheckBox *mLayerDeleteConfirmationChkBx;
    QCheckBox *chbWarnOldProjectVersion;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_33;
    QComboBox *mEnableMacrosComboBox;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mDefaultPathsLabel;
    QComboBox *mDefaultPathsComboBox;
    QSpacerItem *horizontalSpacer_24;
    QGridLayout *gridLayout_31;
    QLabel *label_67;
    QRadioButton *mFileFormatQgzButton;
    QLabel *mFileFormatQgzDescription;
    QRadioButton *mFileFormatQgsButton;
    QLabel *mFileFormatQgsDescription;
    QSpacerItem *verticalSpacer_5;
    QWidget *mOptionsPageSystem;
    QVBoxLayout *verticalLayout_7;
    QgsScrollArea *mOptionsScrollArea_03;
    QWidget *mOptionsScrollAreaContents_03;
    QVBoxLayout *verticalLayout_22;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *_6;
    QLabel *mSVGLabel;
    QSpacerItem *spacerItem;
    QToolButton *mBtnAddSVGPath;
    QToolButton *mBtnRemoveSVGPath;
    QListWidget *mListSVGPaths;
    QgsCollapsibleGroupBox *groupBox_4;
    QGridLayout *_3;
    QLabel *mSVGLabel_2;
    QSpacerItem *spacerItem1;
    QToolButton *mBtnAddPluginPath;
    QToolButton *mBtnRemovePluginPath;
    QListWidget *mListPluginPaths;
    QgsCollapsibleGroupBox *groupBox_29;
    QGridLayout *_4;
    QToolButton *mBtnMoveHelpDown;
    QLabel *mSVGLabel_5;
    QSpacerItem *spacerItem2;
    QToolButton *mBtnAddHelpPath;
    QToolButton *mBtnRemoveHelpPath;
    QTreeWidget *mHelpPathTreeWidget;
    QToolButton *mBtnMoveHelpUp;
    QgsCollapsibleGroupBox *mQSettingsGrpBx;
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer_42;
    QToolButton *mRestoreDefaultWindowStateBtn;
    QLabel *mRestoreDefaultWindowStateLbl;
    QgsCollapsibleGroupBox *mEnvironmentGrpBx;
    QGridLayout *gridLayout_32;
    QToolButton *mRemoveCustomVarBtn;
    QToolButton *mAddCustomVarBtn;
    QgsCollapsibleGroupBox *mCurrentVariablesGrpBx;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *mCurrentVariablesTable;
    QCheckBox *mCurrentVariablesQGISChxBx;
    QCheckBox *mCustomVariablesChkBx;
    QSpacerItem *horizontalSpacer_14;
    QTableWidget *mCustomVariablesTable;
    QSpacerItem *verticalSpacer_11;
    QWidget *mOptionsPageCRS;
    QVBoxLayout *verticalLayout_18;
    QgsScrollArea *mOptionsScrollArea_08;
    QWidget *mOptionsScrollAreaContents_08;
    QGridLayout *gridLayout_15;
    QgsCollapsibleGroupBox *grpProjectionBehavior;
    QGridLayout *gridLayout_14;
    QgsProjectionSelectionWidget *leLayerGlobalCrs;
    QLabel *label_8;
    QRadioButton *radUseProjectProjection;
    QLabel *label_16;
    QRadioButton *radUseGlobalProjection;
    QRadioButton *radPromptForProjection;
    QRadioButton *radCrsNoAction;
    QCheckBox *mPlanimetricMeasurementsComboBox;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBox *grpProjectProjection;
    QGridLayout *gridLayout_27;
    QLabel *label_42;
    QgsProjectionSelectionWidget *leProjectGlobalCrs;
    QRadioButton *radProjectUseDefaultCrs;
    QRadioButton *radProjectUseCrsOfFirstLayer;
    QgsCollapsibleGroupBox *groupBox_26;
    QGridLayout *gridLayout_37;
    QSpacerItem *horizontalSpacer_23;
    QgsDoubleSpinBox *mCrsAccuracySpin;
    QLabel *label_71;
    QCheckBox *mCrsAccuracyIndicatorCheck;
    QWidget *mOptionsPageTransformations;
    QVBoxLayout *verticalLayout_46;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_47;
    QGroupBox *mDefaultDatumTransformGroupBox;
    QGridLayout *gridLayout_10;
    QLabel *label_40;
    QCheckBox *mShowDatumTransformDialogCheckBox;
    QFrame *line_2;
    QgsDatumTransformTableWidget *mDefaultDatumTransformTableWidget;
    QWidget *mOptionsPageDataSources;
    QVBoxLayout *verticalLayout_26;
    QgsScrollArea *mOptionsScrollArea_11;
    QWidget *mOptionsScrollAreaContents_11;
    QVBoxLayout *verticalLayout_27;
    QgsCollapsibleGroupBox *groupBox_18;
    QGridLayout *gridLayout_19;
    QLineEdit *leNullValue;
    QComboBox *cmbAttrTableBehavior;
    QLabel *label_46;
    QComboBox *mComboCopyFeatureFormat;
    QCheckBox *cbxAttributeTableDocked;
    QComboBox *mAttrTableViewComboBox;
    QLabel *label_14;
    QLabel *textLabel1_7;
    QLabel *textLabel1_12;
    QgsSpinBox *spinBoxAttrTableRowCache;
    QLabel *label_48;
    QCheckBox *cbxAutosizeAttributeTable;
    QgsCollapsibleGroupBox *groupBox_19;
    QGridLayout *gridLayout_23;
    QComboBox *cmbScanZipInBrowser;
    QComboBox *cmbScanItemsInBrowser;
    QComboBox *cmbPromptSublayers;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_3;
    QLabel *textLabel1_13;
    QLabel *label_29;
    QCheckBox *mCheckMonitorDirectories;
    QgsCollapsibleGroupBox *groupBox_301;
    QGridLayout *gridLayout_34;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_19;
    QToolButton *mLocalizedDataPathAddButton;
    QToolButton *mLocalizedDataPathRemoveButton;
    QToolButton *mLocalizedDataPathUpButton;
    QToolButton *mLocalizedDataPathDownButton;
    QListWidget *mLocalizedDataPathListWidget;
    QgsCollapsibleGroupBox *groupBox_28;
    QGridLayout *_15;
    QToolButton *mBtnRemoveHiddenPath;
    QLabel *mSVGLabel_4;
    QSpacerItem *spacerItem3;
    QListWidget *mListHiddenBrowserPaths;
    QSpacerItem *verticalSpacer_8;
    QWidget *mOptionsPageGDAL;
    QVBoxLayout *verticalLayout_4;
    QgsScrollArea *mOptionsScrollArea_02;
    QWidget *mOptionsScrollAreaContents_02;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_24;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_29;
    QComboBox *cmbEditCreateOptions;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pbnEditPyramidsOptions;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pbnEditCreateOptions;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_24;
    QLabel *label_17;
    QTreeWidget *lstRasterDrivers;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_29;
    QGroupBox *groupBox_31;
    QGridLayout *gridLayout_36;
    QLabel *label_68;
    QTreeWidget *lstVectorDrivers;
    QWidget *mOptionsPageMapCanvas;
    QVBoxLayout *verticalLayout_16;
    QgsScrollArea *mOptionsScrollArea_06;
    QWidget *mOptionsScrollAreaContents_06;
    QVBoxLayout *verticalLayout_25;
    QgsCollapsibleGroupBox *groupBox_9;
    QGridLayout *gridLayout_7;
    QgsColorButton *pbnCanvasColor;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label;
    QLabel *textLabel1_9;
    QgsColorButton *pbnSelectionColor;
    QgsCollapsibleGroupBox *mLegendGrpBx;
    QGridLayout *gridLayout_35;
    QLabel *label_15;
    QComboBox *cmbLegendDoubleClickAction;
    QLabel *mLayerTreeInsertionMethodLabel;
    QComboBox *mLayerTreeInsertionMethod;
    QCheckBox *mShowFeatureCountByDefaultCheckBox;
    QCheckBox *cbxLegendClassifiers;
    QLabel *label_58;
    QgsSpinBox *mLegendGraphicResolutionSpinBox;
    QLabel *labelLegendSymbolMinimumSize;
    QgsDoubleSpinBox *mLegendSymbolMinimumSizeSpinBox;
    QLabel *labelLegendSymbolMaximumSize;
    QgsDoubleSpinBox *mLegendSymbolMaximumSizeSpinBox;
    QgsCollapsibleGroupBox *groupBox_12;
    QGridLayout *gridLayout_40;
    QLabel *textLabel1_16;
    QgsSpinBox *mMapTipsDelaySpinBox;
    QgsCollapsibleGroupBox *groupBox_32;
    QGridLayout *gridLayout_381;
    QCheckBox *mRespectScreenDpiCheckBox;
    QSpacerItem *spacerItem4;
    QWidget *mOptionsPageMapTools;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *mOptionsScrollArea_05;
    QWidget *mOptionsScrollAreaContents_05;
    QVBoxLayout *verticalLayout_30;
    QgsCollapsibleGroupBox *mCoordinateDisplayGroup;
    QGridLayout *gridLayout_30;
    QLabel *textLabel1_11;
    QLabel *label_72;
    QPushButton *mCustomizeCoordinateFormatButton;
    QComboBox *mDistanceUnitsComboBox;
    QLabel *label_12;
    QgsSpinBox *mDecimalPlacesSpinBox;
    QComboBox *mAreaUnitsComboBox;
    QLabel *label_13;
    QCheckBox *mKeepBaseUnitCheckBox;
    QLabel *textLabel1_14;
    QLabel *label_69;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *mCustomizeBearingFormatButton;
    QSpacerItem *horizontalSpacer_10;
    QLabel *mAngleUnitsLabel;
    QComboBox *mAngleUnitsComboBox;
    QgsCollapsibleGroupBox *mIdentifyGroupBox;
    QVBoxLayout *verticalLayout_37;
    QHBoxLayout *mIdentifyRadiusHorizontalLayout;
    QLabel *textLabel1_3;
    QgsDoubleSpinBox *spinBoxIdentifyValue;
    QSpacerItem *horizontalSpacer_44;
    QHBoxLayout *mIdentifyHighlightHorizontalLayout;
    QLabel *mIdentifyHighlighColorLabel;
    QgsColorButton *mIdentifyHighlightColorButton;
    QLabel *mIdentifyHighlightBufferLabel;
    QgsDoubleSpinBox *mIdentifyHighlightBufferSpinBox;
    QLabel *mIdentifyHighlightMinWidthLabel;
    QgsDoubleSpinBox *mIdentifyHighlightMinWidthSpinBox;
    QSpacerItem *horizontalSpacer_45;
    QgsCollapsibleGroupBox *mMeasureToolGroupBox;
    QGridLayout *gridLayout_21;
    QSpacerItem *horizontalSpacer_12;
    QLabel *textLabel1_10;
    QgsColorButton *pbnMeasureColor;
    QgsCollapsibleGroupBox *mMeasureToolCopySettingsGroupBox;
    QGridLayout *gridLayout_20;
    QLabel *label_22;
    QLabel *label_23;
    QCheckBox *mAlwaysUseDecimalPoint;
    QGridLayout *gridLayout_6;
    QRadioButton *mSeparatorComma;
    QRadioButton *mSeparatorSpace;
    QRadioButton *mSeparatorColon;
    QRadioButton *mSeparatorSemicolon;
    QRadioButton *mSeparatorTab;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mSeparatorOther;
    QLineEdit *mSeparatorCustom;
    QCheckBox *mIncludeHeader;
    QLabel *label_24;
    QgsCollapsibleGroupBox *mZoomingGroupBox;
    QGridLayout *_8;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_110;
    QgsSpinBox *spinZoomFactor;
    QSpacerItem *horizontalSpacer_100;
    QLabel *label_21;
    QCheckBox *reverseWheelZoom;
    QgsCollapsibleGroupBox *mPredefinedScalesGroupBox;
    QGridLayout *gridLayout_26;
    QListWidget *mListGlobalScales;
    QVBoxLayout *verticalLayout_13;
    QToolButton *pbnAddScale;
    QToolButton *pbnRemoveScale;
    QToolButton *pbnDefaultScaleValues;
    QSpacerItem *verticalSpacer_7;
    QToolButton *pbnImportScales;
    QToolButton *pbnExportScales;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptionsPageDigitizing;
    QVBoxLayout *verticalLayout_17;
    QgsScrollArea *mOptionsScrollArea_07;
    QWidget *mOptionsScrollAreaContents_07;
    QVBoxLayout *verticalLayout_31;
    QgsCollapsibleGroupBox *mEnterAttributeValuesGroupBox;
    QGridLayout *gridLayout_28;
    QLabel *label_19;
    QCheckBox *chkDisableAttributeValuesDlg;
    QSpacerItem *horizontalSpacer_32;
    QCheckBox *chkReuseLastValues;
    QLabel *mDefaultZValueLabel;
    QLabel *mDefaultMValueLabel;
    QgsDoubleSpinBox *mDefaultZValueSpinBox;
    QgsDoubleSpinBox *mDefaultMValueSpinBox;
    QComboBox *mValidateGeometries;
    QgsCollapsibleGroupBox *mRubberBandGroupBox;
    QGridLayout *_9;
    QSpacerItem *horizontalSpacer_33;
    QLabel *mLineWidthTextLabel;
    QLabel *mLineColorTextLabel;
    QgsSpinBox *mLineWidthSpinBox;
    QgsColorButton *mFillColorToolButton;
    QLabel *mSelectColorTextLabel;
    QgsColorButton *mLineColorToolButton;
    QCheckBox *mLineGhostCheckBox;
    QgsCollapsibleGroupBox *mSnappingGroupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *mSnappingEnabledDefault;
    QLabel *mDefaultSnapTypeLabel;
    QSpacerItem *spacerItem5;
    QComboBox *mDefaultSnapTypeComboBox;
    QLabel *mDefaultSnappingToleranceTextLabel;
    QSpacerItem *spacerItem6;
    QgsDoubleSpinBox *mDefaultSnappingToleranceSpinBox;
    QComboBox *mDefaultSnappingToleranceComboBox;
    QLabel *mVertexSearchRadiusVertexEditLabel;
    QSpacerItem *spacerItem7;
    QgsDoubleSpinBox *mSearchRadiusVertexEditSpinBox;
    QComboBox *mSearchRadiusVertexEditComboBox;
    QLabel *label_49;
    QComboBox *mSnappingMainDialogComboBox;
    QLabel *label_2;
    QgsColorButton *mSnappingMarkerColorButton;
    QCheckBox *mSnappingTooltipsCheckbox;
    QCheckBox *mEnableSnappingOnInvisibleFeatureCheckbox;
    QgsCollapsibleGroupBox *mVertexMarkerGroupBox;
    QGridLayout *_11;
    QLabel *mMarkerStyleLabel;
    QSpacerItem *spacerItem8;
    QComboBox *mMarkerStyleComboBox;
    QgsDoubleSpinBox *mMarkerSizeSpinBox;
    QLabel *label_6;
    QSpacerItem *spacerItem9;
    QCheckBox *mMarkersOnlyForSelectedCheckBox;
    QgsCollapsibleGroupBox *groupBox_21;
    QGridLayout *gridLayout;
    QLabel *label_25;
    QLabel *label_27;
    QSpacerItem *horizontalSpacer_29;
    QgsDoubleSpinBox *mCurveOffsetMiterLimitComboBox;
    QLabel *label_28;
    QSpacerItem *horizontalSpacer_31;
    QSpacerItem *horizontalSpacer_30;
    QgsSpinBox *mOffsetQuadSegSpinBox;
    QLabel *label_26;
    QComboBox *mOffsetJoinStyleComboBox;
    QComboBox *mOffsetCapStyleComboBox;
    QSpacerItem *horizontalSpacer_4;
    QgsCollapsibleGroupBox *groupBox_30;
    QGridLayout *gridLayout1;
    QCheckBox *mTracingConvertToCurveCheckBox;
    QLabel *label_44;
    QLabel *label_70;
    QgsDoubleSpinBox *mTracingCustomAngleToleranceSpinBox;
    QgsDoubleSpinBox *mTracingCustomDistanceToleranceSpinBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *mOptionsPageColors;
    QVBoxLayout *verticalLayout_38;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_46;
    QgsCollapsibleGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QSpacerItem *verticalSpacer_12;
    QToolButton *mButtonImportColors;
    QgsColorSchemeList *mTreeCustomColors;
    QToolButton *mButtonPasteColors;
    QToolButton *mButtonAddColor;
    QToolButton *mButtonRemoveColor;
    QToolButton *mButtonCopyColors;
    QHBoxLayout *horizontalLayout_22;
    QComboBox *mColorSchemesComboBox;
    QToolButton *mButtonExportColors;
    QToolButton *mSchemeToolButton;
    QWidget *mOptionsPageComposer;
    QVBoxLayout *verticalLayout_36;
    QgsScrollArea *mOptionsScrollArea_12;
    QWidget *mOptionsScrollAreaContents_12;
    QVBoxLayout *verticalLayout_39;
    QgsCollapsibleGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_60;
    QFontComboBox *mComposerFontComboBox;
    QgsCollapsibleGroupBox *groupBox_23;
    QGridLayout *gridLayout_9;
    QLabel *label_66;
    QComboBox *mGridStyleComboBox;
    QLabel *label_4;
    QgsColorButton *mGridColorButton;
    QgsCollapsibleGroupBox *groupBox_24;
    QGridLayout *gridLayout_11;
    QLabel *label_61;
    QgsDoubleSpinBox *mGridResolutionSpinBox;
    QLabel *label_63;
    QHBoxLayout *horizontalLayout_36;
    QgsDoubleSpinBox *mOffsetXSpinBox;
    QgsDoubleSpinBox *mOffsetYSpinBox;
    QLabel *label_62;
    QgsSpinBox *mSnapToleranceSpinBox;
    QgsCollapsibleGroupBox *groupBox_27;
    QGridLayout *_7;
    QLabel *mSVGLabel_3;
    QSpacerItem *spacerItem10;
    QToolButton *mBtnAddTemplatePath;
    QToolButton *mBtnRemoveTemplatePath;
    QListWidget *mListComposerTemplatePaths;
    QSpacerItem *verticalSpacer_10;
    QWidget *mOptionsPageVariables;
    QVBoxLayout *verticalLayout_40;
    QGroupBox *groupBox_25;
    QVBoxLayout *verticalLayout_41;
    QgsVariableEditorWidget *mVariableEditor;
    QWidget *mOptionsPageAuth;
    QVBoxLayout *verticalLayout_45;
    QgsAuthEditorWidgets *mAuthConfigsGrpBx;
    QWidget *mOptionsPageNetwork;
    QVBoxLayout *verticalLayout_20;
    QgsScrollArea *mOptionsScrollArea_10;
    QWidget *mOptionsScrollAreaContents_10;
    QVBoxLayout *verticalLayout_33;
    QGroupBox *groupBox_20;
    QVBoxLayout *verticalLayout_34;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mNetworkTimeoutLabel;
    QgsSpinBox *mNetworkTimeoutSpinBox;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_45;
    QgsSpinBox *mDefaultCapabilitiesExpirySpinBox;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_32;
    QgsSpinBox *mDefaultTileExpirySpinBox;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_57;
    QgsSpinBox *mDefaultTileMaxRetrySpinBox;
    QHBoxLayout *horizontalLayout_35;
    QLabel *lblUserAgent;
    QLineEdit *leUserAgent;
    QGroupBox *grpCache;
    QVBoxLayout *verticalLayout_19;
    QTabWidget *tabContentCache;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *mCacheDirectory;
    QgsSpinBox *mCacheSize;
    QToolButton *mBrowseCacheDirectory;
    QToolButton *mClearCache;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QCheckBox *mAutoClearAccessCache;
    QPushButton *mClearAccessCache;
    QgsCollapsibleGroupBox *grpProxy;
    QGridLayout *gridLayout_1;
    QLabel *label_47;
    QToolButton *mRemoveUrlPushButton;
    QToolButton *mAddUrlPushButton;
    QGridLayout *gridLayout_17;
    QComboBox *mProxyTypeComboBox;
    QLabel *mTypeLabel;
    QLabel *label_41;
    QFrame *frameManualProxy;
    QGridLayout *gridLayout_18;
    QLineEdit *leProxyPort;
    QLabel *lblProxyPort;
    QLineEdit *leProxyHost;
    QLabel *lblProxyHost;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_23;
    QgsAuthSettingsWidget *mAuthSettings;
    QSpacerItem *horizontalSpacer;
    QListWidget *mNoProxyUrlListWidget;
    QSpacerItem *verticalSpacer_9;
    QWidget *mOptionsLocatorSettings;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *mOptionsLocatorGroupBox;
    QWidget *mOptionsPageAcceleration;
    QVBoxLayout *mOptionsPageAccelerationLayout;
    QLabel *label_53;
    QCheckBox *mGPUEnableCheckBox;
    QWidget *mOpenClContainerWidget;
    QVBoxLayout *verticalLayout_32;
    QLabel *label_64;
    QComboBox *mOpenClDevicesCombo;
    QTextBrowser *mGPUInfoTextBrowser;
    QSpacerItem *verticalSpacer_2;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QButtonGroup *mDefaultProjectFileFormatButtonGroup;

    void setupUi(QDialog *QgsOptionsBase)
    {
        if (QgsOptionsBase->objectName().isEmpty())
            QgsOptionsBase->setObjectName(QString::fromUtf8("QgsOptionsBase"));
        QgsOptionsBase->resize(1029, 734);
        QgsOptionsBase->setMinimumSize(QSize(780, 0));
        QgsOptionsBase->setModal(true);
        mActionImportPalette = new QAction(QgsOptionsBase);
        mActionImportPalette->setObjectName(QString::fromUtf8("mActionImportPalette"));
        mActionRemovePalette = new QAction(QgsOptionsBase);
        mActionRemovePalette->setObjectName(QString::fromUtf8("mActionRemovePalette"));
        mActionNewPalette = new QAction(QgsOptionsBase);
        mActionNewPalette->setObjectName(QString::fromUtf8("mActionNewPalette"));
        mActionShowInButtons = new QAction(QgsOptionsBase);
        mActionShowInButtons->setObjectName(QString::fromUtf8("mActionShowInButtons"));
        mActionShowInButtons->setCheckable(true);
        verticalLayout_5 = new QVBoxLayout(QgsOptionsBase);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mOptionsSplitter = new QSplitter(QgsOptionsBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setEnabled(true);
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QString::fromUtf8("mSearchLineEdit"));

        verticalLayout_15->addWidget(mSearchLineEdit);

        mOptionsTreeView = new QTreeView(mOptionsListFrame);
        mOptionsTreeView->setObjectName(QString::fromUtf8("mOptionsTreeView"));
        mOptionsTreeView->setMinimumSize(QSize(58, 0));
        mOptionsTreeView->setMaximumSize(QSize(150, 16777215));
        mOptionsTreeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsTreeView->setIconSize(QSize(32, 32));
        mOptionsTreeView->setTextElideMode(Qt::ElideNone);

        verticalLayout_15->addWidget(mOptionsTreeView);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(mOptionsFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        mOptionsPageGeneral = new QWidget();
        mOptionsPageGeneral->setObjectName(QString::fromUtf8("mOptionsPageGeneral"));
        verticalLayout_3 = new QVBoxLayout(mOptionsPageGeneral);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_01 = new QgsScrollArea(mOptionsPageGeneral);
        mOptionsScrollArea_01->setObjectName(QString::fromUtf8("mOptionsScrollArea_01"));
        mOptionsScrollArea_01->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_01->setWidgetResizable(true);
        mOptionsScrollAreaContents_01 = new QWidget();
        mOptionsScrollAreaContents_01->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_01"));
        mOptionsScrollAreaContents_01->setGeometry(QRect(0, 0, 843, 1009));
        verticalLayout_28 = new QVBoxLayout(mOptionsScrollAreaContents_01);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        grpLocale = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_01);
        grpLocale->setObjectName(QString::fromUtf8("grpLocale"));
        grpLocale->setCheckable(true);
        vboxLayout = new QVBoxLayout(grpLocale);
        vboxLayout->setSpacing(12);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout_25 = new QGridLayout();
        gridLayout_25->setSpacing(6);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        label_7 = new QLabel(grpLocale);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout_25->addWidget(label_7, 6, 0, 1, 2);

        label_52 = new QLabel(grpLocale);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout_25->addWidget(label_52, 2, 0, 1, 1);

        label_5 = new QLabel(grpLocale);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_25->addWidget(label_5, 0, 0, 1, 1);

        cboTranslation = new QComboBox(grpLocale);
        cboTranslation->setObjectName(QString::fromUtf8("cboTranslation"));
        cboTranslation->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_25->addWidget(cboTranslation, 0, 1, 1, 1);

        cboGlobalLocale = new QComboBox(grpLocale);
        cboGlobalLocale->setObjectName(QString::fromUtf8("cboGlobalLocale"));
        cboGlobalLocale->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_25->addWidget(cboGlobalLocale, 2, 1, 1, 1);

        cbShowGroupSeparator = new QCheckBox(grpLocale);
        cbShowGroupSeparator->setObjectName(QString::fromUtf8("cbShowGroupSeparator"));

        gridLayout_25->addWidget(cbShowGroupSeparator, 3, 1, 1, 1);


        vboxLayout->addLayout(gridLayout_25);

        lblSystemLocale = new QLabel(grpLocale);
        lblSystemLocale->setObjectName(QString::fromUtf8("lblSystemLocale"));

        vboxLayout->addWidget(lblSystemLocale);

        lblLocaleSample = new QLabel(grpLocale);
        lblLocaleSample->setObjectName(QString::fromUtf8("lblLocaleSample"));

        vboxLayout->addWidget(lblLocaleSample);


        verticalLayout_28->addWidget(grpLocale);

        groupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_01);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_9->addWidget(label_18);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        cmbStyle = new QComboBox(groupBox);
        cmbStyle->setObjectName(QString::fromUtf8("cmbStyle"));

        horizontalLayout_9->addWidget(cmbStyle);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        horizontalLayout_37->setContentsMargins(-1, 0, -1, -1);
        lblUITheme = new QLabel(groupBox);
        lblUITheme->setObjectName(QString::fromUtf8("lblUITheme"));

        horizontalLayout_37->addWidget(lblUITheme);

        horizontalSpacer_47 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_47);

        cmbUITheme = new QComboBox(groupBox);
        cmbUITheme->setObjectName(QString::fromUtf8("cmbUITheme"));

        horizontalLayout_37->addWidget(cmbUITheme);


        verticalLayout_2->addLayout(horizontalLayout_37);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        textLabel1_5 = new QLabel(groupBox);
        textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel1_5->sizePolicy().hasHeightForWidth());
        textLabel1_5->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(textLabel1_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        cmbIconSize = new QComboBox(groupBox);
        cmbIconSize->addItem(QString());
        cmbIconSize->addItem(QString());
        cmbIconSize->addItem(QString());
        cmbIconSize->addItem(QString());
        cmbIconSize->addItem(QString());
        cmbIconSize->setObjectName(QString::fromUtf8("cmbIconSize"));
        cmbIconSize->setDuplicatesEnabled(false);

        horizontalLayout_7->addWidget(cmbIconSize);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_43 = new QLabel(groupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        horizontalLayout_27->addWidget(label_43);

        mFontFamilyRadioQt = new QRadioButton(groupBox);
        mFontFamilyRadioQt->setObjectName(QString::fromUtf8("mFontFamilyRadioQt"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mFontFamilyRadioQt->sizePolicy().hasHeightForWidth());
        mFontFamilyRadioQt->setSizePolicy(sizePolicy2);
        mFontFamilyRadioQt->setChecked(true);

        horizontalLayout_27->addWidget(mFontFamilyRadioQt);

        mFontFamilyRadioCustom = new QRadioButton(groupBox);
        mFontFamilyRadioCustom->setObjectName(QString::fromUtf8("mFontFamilyRadioCustom"));
        sizePolicy2.setHeightForWidth(mFontFamilyRadioCustom->sizePolicy().hasHeightForWidth());
        mFontFamilyRadioCustom->setSizePolicy(sizePolicy2);

        horizontalLayout_27->addWidget(mFontFamilyRadioCustom);

        mFontFamilyComboBox = new QFontComboBox(groupBox);
        mFontFamilyComboBox->setObjectName(QString::fromUtf8("mFontFamilyComboBox"));
        mFontFamilyComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        horizontalLayout_27->addWidget(mFontFamilyComboBox);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy3);

        horizontalLayout_27->addWidget(label_20);

        spinFontSize = new QgsDoubleSpinBox(groupBox);
        spinFontSize->setObjectName(QString::fromUtf8("spinFontSize"));
        spinFontSize->setDecimals(1);
        spinFontSize->setMinimum(2.000000000000000);

        horizontalLayout_27->addWidget(spinFontSize);

        horizontalLayout_27->setStretch(3, 4);
        horizontalLayout_27->setStretch(5, 1);

        verticalLayout_2->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        mMessageTimeoutLabel = new QLabel(groupBox);
        mMessageTimeoutLabel->setObjectName(QString::fromUtf8("mMessageTimeoutLabel"));
        sizePolicy3.setHeightForWidth(mMessageTimeoutLabel->sizePolicy().hasHeightForWidth());
        mMessageTimeoutLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_28->addWidget(mMessageTimeoutLabel);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_13);

        mMessageTimeoutSpnBx = new QgsSpinBox(groupBox);
        mMessageTimeoutSpnBx->setObjectName(QString::fromUtf8("mMessageTimeoutSpnBx"));
        mMessageTimeoutSpnBx->setMinimum(2);
        mMessageTimeoutSpnBx->setMaximum(20);
        mMessageTimeoutSpnBx->setValue(5);

        horizontalLayout_28->addWidget(mMessageTimeoutSpnBx);


        verticalLayout_2->addLayout(horizontalLayout_28);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_2, 3, 1, 1, 1);

        cbxCheckVersion = new QCheckBox(groupBox);
        cbxCheckVersion->setObjectName(QString::fromUtf8("cbxCheckVersion"));

        gridLayout_16->addWidget(cbxCheckVersion, 2, 0, 1, 1);

        cbxHideSplash = new QCheckBox(groupBox);
        cbxHideSplash->setObjectName(QString::fromUtf8("cbxHideSplash"));
        sizePolicy2.setHeightForWidth(cbxHideSplash->sizePolicy().hasHeightForWidth());
        cbxHideSplash->setSizePolicy(sizePolicy2);

        gridLayout_16->addWidget(cbxHideSplash, 0, 0, 1, 1);

        cbxShowNews = new QCheckBox(groupBox);
        cbxShowNews->setObjectName(QString::fromUtf8("cbxShowNews"));
        cbxShowNews->setChecked(true);

        gridLayout_16->addWidget(cbxShowNews, 1, 0, 1, 1);

        mNativeColorDialogsChkBx = new QCheckBox(groupBox);
        mNativeColorDialogsChkBx->setObjectName(QString::fromUtf8("mNativeColorDialogsChkBx"));

        gridLayout_16->addWidget(mNativeColorDialogsChkBx, 3, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_16);


        verticalLayout_28->addWidget(groupBox);

        groupBox_11 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_01);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        gridLayout_38 = new QGridLayout(groupBox_11);
        gridLayout_38->setSpacing(6);
        gridLayout_38->setContentsMargins(11, 11, 11, 11);
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mProjectOnLaunchCmbBx = new QComboBox(groupBox_11);
        mProjectOnLaunchCmbBx->addItem(QString());
        mProjectOnLaunchCmbBx->addItem(QString());
        mProjectOnLaunchCmbBx->addItem(QString());
        mProjectOnLaunchCmbBx->addItem(QString());
        mProjectOnLaunchCmbBx->setObjectName(QString::fromUtf8("mProjectOnLaunchCmbBx"));
        sizePolicy2.setHeightForWidth(mProjectOnLaunchCmbBx->sizePolicy().hasHeightForWidth());
        mProjectOnLaunchCmbBx->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mProjectOnLaunchCmbBx, 0, 2, 1, 2);

        mProjectOnLaunchPushBtn = new QToolButton(groupBox_11);
        mProjectOnLaunchPushBtn->setObjectName(QString::fromUtf8("mProjectOnLaunchPushBtn"));
        sizePolicy2.setHeightForWidth(mProjectOnLaunchPushBtn->sizePolicy().hasHeightForWidth());
        mProjectOnLaunchPushBtn->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mProjectOnLaunchPushBtn->setIcon(icon);

        gridLayout_4->addWidget(mProjectOnLaunchPushBtn, 1, 5, 1, 1);

        horizontalSpacer_35 = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_35, 1, 0, 1, 1);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_36, 0, 4, 1, 1);

        mProjectOnLaunchLineEdit = new QLineEdit(groupBox_11);
        mProjectOnLaunchLineEdit->setObjectName(QString::fromUtf8("mProjectOnLaunchLineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mProjectOnLaunchLineEdit->sizePolicy().hasHeightForWidth());
        mProjectOnLaunchLineEdit->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(mProjectOnLaunchLineEdit, 1, 1, 1, 4);

        label_54 = new QLabel(groupBox_11);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        sizePolicy3.setHeightForWidth(label_54->sizePolicy().hasHeightForWidth());
        label_54->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(label_54, 0, 0, 1, 2);


        gridLayout_38->addLayout(gridLayout_4, 0, 0, 1, 1);

        cbxProjectDefaultNew = new QCheckBox(groupBox_11);
        cbxProjectDefaultNew->setObjectName(QString::fromUtf8("cbxProjectDefaultNew"));

        gridLayout_38->addWidget(cbxProjectDefaultNew, 1, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_22 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_22);

        pbnProjectDefaultSetCurrent = new QPushButton(groupBox_11);
        pbnProjectDefaultSetCurrent->setObjectName(QString::fromUtf8("pbnProjectDefaultSetCurrent"));

        horizontalLayout_16->addWidget(pbnProjectDefaultSetCurrent);

        pbnProjectDefaultReset = new QPushButton(groupBox_11);
        pbnProjectDefaultReset->setObjectName(QString::fromUtf8("pbnProjectDefaultReset"));

        horizontalLayout_16->addWidget(pbnProjectDefaultReset);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);


        gridLayout_38->addLayout(horizontalLayout_16, 2, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_31 = new QLabel(groupBox_11);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_15->addWidget(label_31);

        leTemplateFolder = new QLineEdit(groupBox_11);
        leTemplateFolder->setObjectName(QString::fromUtf8("leTemplateFolder"));
        leTemplateFolder->setEnabled(false);

        horizontalLayout_15->addWidget(leTemplateFolder);

        pbnTemplateFolderBrowse = new QToolButton(groupBox_11);
        pbnTemplateFolderBrowse->setObjectName(QString::fromUtf8("pbnTemplateFolderBrowse"));
        pbnTemplateFolderBrowse->setIcon(icon);

        horizontalLayout_15->addWidget(pbnTemplateFolderBrowse);

        pbnTemplateFolderReset = new QToolButton(groupBox_11);
        pbnTemplateFolderReset->setObjectName(QString::fromUtf8("pbnTemplateFolderReset"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnTemplateFolderReset->setIcon(icon1);

        horizontalLayout_15->addWidget(pbnTemplateFolderReset);


        gridLayout_38->addLayout(horizontalLayout_15, 3, 0, 1, 1);

        chbAskToSaveProjectChanges = new QCheckBox(groupBox_11);
        chbAskToSaveProjectChanges->setObjectName(QString::fromUtf8("chbAskToSaveProjectChanges"));

        gridLayout_38->addWidget(chbAskToSaveProjectChanges, 4, 0, 1, 1);

        mLayerDeleteConfirmationChkBx = new QCheckBox(groupBox_11);
        mLayerDeleteConfirmationChkBx->setObjectName(QString::fromUtf8("mLayerDeleteConfirmationChkBx"));

        gridLayout_38->addWidget(mLayerDeleteConfirmationChkBx, 5, 0, 1, 1);

        chbWarnOldProjectVersion = new QCheckBox(groupBox_11);
        chbWarnOldProjectVersion->setObjectName(QString::fromUtf8("chbWarnOldProjectVersion"));

        gridLayout_38->addWidget(chbWarnOldProjectVersion, 6, 0, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_33 = new QLabel(groupBox_11);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_21->addWidget(label_33);

        mEnableMacrosComboBox = new QComboBox(groupBox_11);
        mEnableMacrosComboBox->setObjectName(QString::fromUtf8("mEnableMacrosComboBox"));
        mEnableMacrosComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_21->addWidget(mEnableMacrosComboBox);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_17);


        gridLayout_38->addLayout(horizontalLayout_21, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mDefaultPathsLabel = new QLabel(groupBox_11);
        mDefaultPathsLabel->setObjectName(QString::fromUtf8("mDefaultPathsLabel"));

        horizontalLayout_2->addWidget(mDefaultPathsLabel);

        mDefaultPathsComboBox = new QComboBox(groupBox_11);
        mDefaultPathsComboBox->setObjectName(QString::fromUtf8("mDefaultPathsComboBox"));

        horizontalLayout_2->addWidget(mDefaultPathsComboBox);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_24);


        gridLayout_38->addLayout(horizontalLayout_2, 8, 0, 1, 1);

        gridLayout_31 = new QGridLayout();
        gridLayout_31->setSpacing(6);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        label_67 = new QLabel(groupBox_11);
        label_67->setObjectName(QString::fromUtf8("label_67"));

        gridLayout_31->addWidget(label_67, 0, 0, 1, 1);

        mFileFormatQgzButton = new QRadioButton(groupBox_11);
        mDefaultProjectFileFormatButtonGroup = new QButtonGroup(QgsOptionsBase);
        mDefaultProjectFileFormatButtonGroup->setObjectName(QString::fromUtf8("mDefaultProjectFileFormatButtonGroup"));
        mDefaultProjectFileFormatButtonGroup->addButton(mFileFormatQgzButton);
        mFileFormatQgzButton->setObjectName(QString::fromUtf8("mFileFormatQgzButton"));
        sizePolicy4.setHeightForWidth(mFileFormatQgzButton->sizePolicy().hasHeightForWidth());
        mFileFormatQgzButton->setSizePolicy(sizePolicy4);

        gridLayout_31->addWidget(mFileFormatQgzButton, 0, 1, 1, 1);

        mFileFormatQgzDescription = new QLabel(groupBox_11);
        mFileFormatQgzDescription->setObjectName(QString::fromUtf8("mFileFormatQgzDescription"));
        mFileFormatQgzDescription->setWordWrap(true);

        gridLayout_31->addWidget(mFileFormatQgzDescription, 1, 1, 1, 1);

        mFileFormatQgsButton = new QRadioButton(groupBox_11);
        mDefaultProjectFileFormatButtonGroup->addButton(mFileFormatQgsButton);
        mFileFormatQgsButton->setObjectName(QString::fromUtf8("mFileFormatQgsButton"));
        sizePolicy4.setHeightForWidth(mFileFormatQgsButton->sizePolicy().hasHeightForWidth());
        mFileFormatQgsButton->setSizePolicy(sizePolicy4);

        gridLayout_31->addWidget(mFileFormatQgsButton, 2, 1, 1, 1);

        mFileFormatQgsDescription = new QLabel(groupBox_11);
        mFileFormatQgsDescription->setObjectName(QString::fromUtf8("mFileFormatQgsDescription"));
        mFileFormatQgsDescription->setWordWrap(true);

        gridLayout_31->addWidget(mFileFormatQgsDescription, 3, 1, 1, 1);


        gridLayout_38->addLayout(gridLayout_31, 9, 0, 1, 1);


        verticalLayout_28->addWidget(groupBox_11);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_5);

        mOptionsScrollArea_01->setWidget(mOptionsScrollAreaContents_01);

        verticalLayout_3->addWidget(mOptionsScrollArea_01);

        mOptionsStackedWidget->addWidget(mOptionsPageGeneral);
        mOptionsPageSystem = new QWidget();
        mOptionsPageSystem->setObjectName(QString::fromUtf8("mOptionsPageSystem"));
        verticalLayout_7 = new QVBoxLayout(mOptionsPageSystem);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_03 = new QgsScrollArea(mOptionsPageSystem);
        mOptionsScrollArea_03->setObjectName(QString::fromUtf8("mOptionsScrollArea_03"));
        mOptionsScrollArea_03->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_03->setWidgetResizable(true);
        mOptionsScrollAreaContents_03 = new QWidget();
        mOptionsScrollAreaContents_03->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_03"));
        mOptionsScrollAreaContents_03->setGeometry(QRect(0, 0, 843, 1068));
        verticalLayout_22 = new QVBoxLayout(mOptionsScrollAreaContents_03);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        _6 = new QGridLayout(groupBox_2);
        _6->setSpacing(6);
        _6->setContentsMargins(11, 11, 11, 11);
        _6->setObjectName(QString::fromUtf8("_6"));
        mSVGLabel = new QLabel(groupBox_2);
        mSVGLabel->setObjectName(QString::fromUtf8("mSVGLabel"));

        _6->addWidget(mSVGLabel, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _6->addItem(spacerItem, 0, 1, 1, 1);

        mBtnAddSVGPath = new QToolButton(groupBox_2);
        mBtnAddSVGPath->setObjectName(QString::fromUtf8("mBtnAddSVGPath"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnAddSVGPath->setIcon(icon2);

        _6->addWidget(mBtnAddSVGPath, 0, 2, 1, 1);

        mBtnRemoveSVGPath = new QToolButton(groupBox_2);
        mBtnRemoveSVGPath->setObjectName(QString::fromUtf8("mBtnRemoveSVGPath"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRemoveSVGPath->setIcon(icon3);

        _6->addWidget(mBtnRemoveSVGPath, 0, 3, 1, 1);

        mListSVGPaths = new QListWidget(groupBox_2);
        mListSVGPaths->setObjectName(QString::fromUtf8("mListSVGPaths"));
        mListSVGPaths->setMinimumSize(QSize(0, 120));

        _6->addWidget(mListSVGPaths, 1, 0, 1, 4);


        verticalLayout_22->addWidget(groupBox_2);

        groupBox_4 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        _3 = new QGridLayout(groupBox_4);
        _3->setSpacing(6);
        _3->setContentsMargins(11, 11, 11, 11);
        _3->setObjectName(QString::fromUtf8("_3"));
        mSVGLabel_2 = new QLabel(groupBox_4);
        mSVGLabel_2->setObjectName(QString::fromUtf8("mSVGLabel_2"));

        _3->addWidget(mSVGLabel_2, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem1, 0, 1, 1, 1);

        mBtnAddPluginPath = new QToolButton(groupBox_4);
        mBtnAddPluginPath->setObjectName(QString::fromUtf8("mBtnAddPluginPath"));
        mBtnAddPluginPath->setIcon(icon2);

        _3->addWidget(mBtnAddPluginPath, 0, 2, 1, 1);

        mBtnRemovePluginPath = new QToolButton(groupBox_4);
        mBtnRemovePluginPath->setObjectName(QString::fromUtf8("mBtnRemovePluginPath"));
        mBtnRemovePluginPath->setIcon(icon3);

        _3->addWidget(mBtnRemovePluginPath, 0, 3, 1, 1);

        mListPluginPaths = new QListWidget(groupBox_4);
        mListPluginPaths->setObjectName(QString::fromUtf8("mListPluginPaths"));
        mListPluginPaths->setMinimumSize(QSize(0, 120));

        _3->addWidget(mListPluginPaths, 1, 0, 1, 4);


        verticalLayout_22->addWidget(groupBox_4);

        groupBox_29 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        groupBox_29->setObjectName(QString::fromUtf8("groupBox_29"));
        _4 = new QGridLayout(groupBox_29);
        _4->setSpacing(6);
        _4->setContentsMargins(11, 11, 11, 11);
        _4->setObjectName(QString::fromUtf8("_4"));
        mBtnMoveHelpDown = new QToolButton(groupBox_29);
        mBtnMoveHelpDown->setObjectName(QString::fromUtf8("mBtnMoveHelpDown"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnMoveHelpDown->setIcon(icon4);

        _4->addWidget(mBtnMoveHelpDown, 0, 5, 1, 1);

        mSVGLabel_5 = new QLabel(groupBox_29);
        mSVGLabel_5->setObjectName(QString::fromUtf8("mSVGLabel_5"));

        _4->addWidget(mSVGLabel_5, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _4->addItem(spacerItem2, 0, 1, 1, 1);

        mBtnAddHelpPath = new QToolButton(groupBox_29);
        mBtnAddHelpPath->setObjectName(QString::fromUtf8("mBtnAddHelpPath"));
        mBtnAddHelpPath->setIcon(icon2);

        _4->addWidget(mBtnAddHelpPath, 0, 2, 1, 1);

        mBtnRemoveHelpPath = new QToolButton(groupBox_29);
        mBtnRemoveHelpPath->setObjectName(QString::fromUtf8("mBtnRemoveHelpPath"));
        mBtnRemoveHelpPath->setIcon(icon3);

        _4->addWidget(mBtnRemoveHelpPath, 0, 3, 1, 1);

        mHelpPathTreeWidget = new QTreeWidget(groupBox_29);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mHelpPathTreeWidget->setHeaderItem(__qtreewidgetitem);
        mHelpPathTreeWidget->setObjectName(QString::fromUtf8("mHelpPathTreeWidget"));
        mHelpPathTreeWidget->setMinimumSize(QSize(0, 120));
        mHelpPathTreeWidget->header()->setVisible(false);

        _4->addWidget(mHelpPathTreeWidget, 1, 0, 1, 6);

        mBtnMoveHelpUp = new QToolButton(groupBox_29);
        mBtnMoveHelpUp->setObjectName(QString::fromUtf8("mBtnMoveHelpUp"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnMoveHelpUp->setIcon(icon5);

        _4->addWidget(mBtnMoveHelpUp, 0, 4, 1, 1);


        verticalLayout_22->addWidget(groupBox_29);

        mQSettingsGrpBx = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        mQSettingsGrpBx->setObjectName(QString::fromUtf8("mQSettingsGrpBx"));
        gridLayout_13 = new QGridLayout(mQSettingsGrpBx);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_42, 0, 1, 1, 1);

        mRestoreDefaultWindowStateBtn = new QToolButton(mQSettingsGrpBx);
        mRestoreDefaultWindowStateBtn->setObjectName(QString::fromUtf8("mRestoreDefaultWindowStateBtn"));
        mRestoreDefaultWindowStateBtn->setIcon(icon1);

        gridLayout_13->addWidget(mRestoreDefaultWindowStateBtn, 0, 2, 1, 1);

        mRestoreDefaultWindowStateLbl = new QLabel(mQSettingsGrpBx);
        mRestoreDefaultWindowStateLbl->setObjectName(QString::fromUtf8("mRestoreDefaultWindowStateLbl"));

        gridLayout_13->addWidget(mRestoreDefaultWindowStateLbl, 0, 0, 1, 1);


        verticalLayout_22->addWidget(mQSettingsGrpBx);

        mEnvironmentGrpBx = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        mEnvironmentGrpBx->setObjectName(QString::fromUtf8("mEnvironmentGrpBx"));
        mEnvironmentGrpBx->setMinimumSize(QSize(0, 0));
        gridLayout_32 = new QGridLayout(mEnvironmentGrpBx);
        gridLayout_32->setSpacing(6);
        gridLayout_32->setContentsMargins(11, 11, 11, 11);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        mRemoveCustomVarBtn = new QToolButton(mEnvironmentGrpBx);
        mRemoveCustomVarBtn->setObjectName(QString::fromUtf8("mRemoveCustomVarBtn"));
        sizePolicy2.setHeightForWidth(mRemoveCustomVarBtn->sizePolicy().hasHeightForWidth());
        mRemoveCustomVarBtn->setSizePolicy(sizePolicy2);
        mRemoveCustomVarBtn->setIcon(icon3);

        gridLayout_32->addWidget(mRemoveCustomVarBtn, 1, 3, 1, 1);

        mAddCustomVarBtn = new QToolButton(mEnvironmentGrpBx);
        mAddCustomVarBtn->setObjectName(QString::fromUtf8("mAddCustomVarBtn"));
        sizePolicy2.setHeightForWidth(mAddCustomVarBtn->sizePolicy().hasHeightForWidth());
        mAddCustomVarBtn->setSizePolicy(sizePolicy2);
        mAddCustomVarBtn->setIcon(icon2);

        gridLayout_32->addWidget(mAddCustomVarBtn, 1, 2, 1, 1);

        mCurrentVariablesGrpBx = new QgsCollapsibleGroupBox(mEnvironmentGrpBx);
        mCurrentVariablesGrpBx->setObjectName(QString::fromUtf8("mCurrentVariablesGrpBx"));
        mCurrentVariablesGrpBx->setMinimumSize(QSize(0, 0));
        mCurrentVariablesGrpBx->setCollapsed(false);
        mCurrentVariablesGrpBx->setSaveCollapsedState(true);
        verticalLayout_8 = new QVBoxLayout(mCurrentVariablesGrpBx);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        mCurrentVariablesTable = new QTableWidget(mCurrentVariablesGrpBx);
        if (mCurrentVariablesTable->columnCount() < 2)
            mCurrentVariablesTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mCurrentVariablesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mCurrentVariablesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mCurrentVariablesTable->setObjectName(QString::fromUtf8("mCurrentVariablesTable"));
        mCurrentVariablesTable->setMinimumSize(QSize(0, 120));
        mCurrentVariablesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mCurrentVariablesTable->setSortingEnabled(true);
        mCurrentVariablesTable->setWordWrap(false);
        mCurrentVariablesTable->horizontalHeader()->setMinimumSectionSize(100);
        mCurrentVariablesTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        mCurrentVariablesTable->horizontalHeader()->setStretchLastSection(true);
        mCurrentVariablesTable->verticalHeader()->setVisible(false);

        verticalLayout_8->addWidget(mCurrentVariablesTable);

        mCurrentVariablesQGISChxBx = new QCheckBox(mCurrentVariablesGrpBx);
        mCurrentVariablesQGISChxBx->setObjectName(QString::fromUtf8("mCurrentVariablesQGISChxBx"));

        verticalLayout_8->addWidget(mCurrentVariablesQGISChxBx);


        gridLayout_32->addWidget(mCurrentVariablesGrpBx, 4, 0, 1, 4);

        mCustomVariablesChkBx = new QCheckBox(mEnvironmentGrpBx);
        mCustomVariablesChkBx->setObjectName(QString::fromUtf8("mCustomVariablesChkBx"));

        gridLayout_32->addWidget(mCustomVariablesChkBx, 1, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_32->addItem(horizontalSpacer_14, 1, 1, 1, 1);

        mCustomVariablesTable = new QTableWidget(mEnvironmentGrpBx);
        if (mCustomVariablesTable->columnCount() < 3)
            mCustomVariablesTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mCustomVariablesTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mCustomVariablesTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mCustomVariablesTable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        mCustomVariablesTable->setObjectName(QString::fromUtf8("mCustomVariablesTable"));
        mCustomVariablesTable->setMinimumSize(QSize(0, 120));
        mCustomVariablesTable->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mCustomVariablesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mCustomVariablesTable->setSortingEnabled(true);
        mCustomVariablesTable->setWordWrap(false);
        mCustomVariablesTable->setCornerButtonEnabled(false);
        mCustomVariablesTable->horizontalHeader()->setMinimumSectionSize(4);
        mCustomVariablesTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        mCustomVariablesTable->horizontalHeader()->setStretchLastSection(true);
        mCustomVariablesTable->verticalHeader()->setVisible(false);

        gridLayout_32->addWidget(mCustomVariablesTable, 3, 0, 1, 4);


        verticalLayout_22->addWidget(mEnvironmentGrpBx);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_11);

        mOptionsScrollArea_03->setWidget(mOptionsScrollAreaContents_03);

        verticalLayout_7->addWidget(mOptionsScrollArea_03);

        mOptionsStackedWidget->addWidget(mOptionsPageSystem);
        mOptionsPageCRS = new QWidget();
        mOptionsPageCRS->setObjectName(QString::fromUtf8("mOptionsPageCRS"));
        verticalLayout_18 = new QVBoxLayout(mOptionsPageCRS);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_08 = new QgsScrollArea(mOptionsPageCRS);
        mOptionsScrollArea_08->setObjectName(QString::fromUtf8("mOptionsScrollArea_08"));
        mOptionsScrollArea_08->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_08->setWidgetResizable(true);
        mOptionsScrollAreaContents_08 = new QWidget();
        mOptionsScrollAreaContents_08->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_08"));
        mOptionsScrollAreaContents_08->setGeometry(QRect(0, 0, 857, 685));
        gridLayout_15 = new QGridLayout(mOptionsScrollAreaContents_08);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        grpProjectionBehavior = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_08);
        grpProjectionBehavior->setObjectName(QString::fromUtf8("grpProjectionBehavior"));
        gridLayout_14 = new QGridLayout(grpProjectionBehavior);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        leLayerGlobalCrs = new QgsProjectionSelectionWidget(grpProjectionBehavior);
        leLayerGlobalCrs->setObjectName(QString::fromUtf8("leLayerGlobalCrs"));
        leLayerGlobalCrs->setEnabled(true);
        leLayerGlobalCrs->setFocusPolicy(Qt::StrongFocus);

        gridLayout_14->addWidget(leLayerGlobalCrs, 0, 1, 1, 1);

        label_8 = new QLabel(grpProjectionBehavior);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy5);
        label_8->setWordWrap(true);

        gridLayout_14->addWidget(label_8, 1, 0, 1, 2);

        radUseProjectProjection = new QRadioButton(grpProjectionBehavior);
        radUseProjectProjection->setObjectName(QString::fromUtf8("radUseProjectProjection"));

        gridLayout_14->addWidget(radUseProjectProjection, 4, 0, 1, 2);

        label_16 = new QLabel(grpProjectionBehavior);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_14->addWidget(label_16, 0, 0, 1, 1);

        radUseGlobalProjection = new QRadioButton(grpProjectionBehavior);
        radUseGlobalProjection->setObjectName(QString::fromUtf8("radUseGlobalProjection"));

        gridLayout_14->addWidget(radUseGlobalProjection, 5, 0, 1, 2);

        radPromptForProjection = new QRadioButton(grpProjectionBehavior);
        radPromptForProjection->setObjectName(QString::fromUtf8("radPromptForProjection"));

        gridLayout_14->addWidget(radPromptForProjection, 3, 0, 1, 2);

        radCrsNoAction = new QRadioButton(grpProjectionBehavior);
        radCrsNoAction->setObjectName(QString::fromUtf8("radCrsNoAction"));

        gridLayout_14->addWidget(radCrsNoAction, 2, 0, 1, 1);

        gridLayout_14->setColumnStretch(1, 1);

        gridLayout_15->addWidget(grpProjectionBehavior, 3, 0, 1, 1);

        mPlanimetricMeasurementsComboBox = new QCheckBox(mOptionsScrollAreaContents_08);
        mPlanimetricMeasurementsComboBox->setObjectName(QString::fromUtf8("mPlanimetricMeasurementsComboBox"));

        gridLayout_15->addWidget(mPlanimetricMeasurementsComboBox, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_15->addItem(verticalSpacer, 6, 0, 1, 1);

        grpProjectProjection = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_08);
        grpProjectProjection->setObjectName(QString::fromUtf8("grpProjectProjection"));
        gridLayout_27 = new QGridLayout(grpProjectProjection);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        label_42 = new QLabel(grpProjectProjection);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        sizePolicy5.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy5);
        label_42->setWordWrap(true);

        gridLayout_27->addWidget(label_42, 0, 0, 1, 2);

        leProjectGlobalCrs = new QgsProjectionSelectionWidget(grpProjectProjection);
        leProjectGlobalCrs->setObjectName(QString::fromUtf8("leProjectGlobalCrs"));
        leProjectGlobalCrs->setMinimumSize(QSize(0, 5));
        leProjectGlobalCrs->setFocusPolicy(Qt::StrongFocus);

        gridLayout_27->addWidget(leProjectGlobalCrs, 2, 1, 1, 1);

        radProjectUseDefaultCrs = new QRadioButton(grpProjectProjection);
        radProjectUseDefaultCrs->setObjectName(QString::fromUtf8("radProjectUseDefaultCrs"));

        gridLayout_27->addWidget(radProjectUseDefaultCrs, 2, 0, 1, 1);

        radProjectUseCrsOfFirstLayer = new QRadioButton(grpProjectProjection);
        radProjectUseCrsOfFirstLayer->setObjectName(QString::fromUtf8("radProjectUseCrsOfFirstLayer"));

        gridLayout_27->addWidget(radProjectUseCrsOfFirstLayer, 1, 0, 1, 2);

        gridLayout_27->setColumnStretch(1, 1);

        gridLayout_15->addWidget(grpProjectProjection, 2, 0, 1, 1);

        groupBox_26 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_08);
        groupBox_26->setObjectName(QString::fromUtf8("groupBox_26"));
        gridLayout_37 = new QGridLayout(groupBox_26);
        gridLayout_37->setSpacing(6);
        gridLayout_37->setContentsMargins(11, 11, 11, 11);
        gridLayout_37->setObjectName(QString::fromUtf8("gridLayout_37"));
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_37->addItem(horizontalSpacer_23, 0, 2, 1, 1);

        mCrsAccuracySpin = new QgsDoubleSpinBox(groupBox_26);
        mCrsAccuracySpin->setObjectName(QString::fromUtf8("mCrsAccuracySpin"));
        mCrsAccuracySpin->setMaximum(10000.000000000000000);

        gridLayout_37->addWidget(mCrsAccuracySpin, 0, 1, 1, 1);

        label_71 = new QLabel(groupBox_26);
        label_71->setObjectName(QString::fromUtf8("label_71"));

        gridLayout_37->addWidget(label_71, 0, 0, 1, 1);

        mCrsAccuracyIndicatorCheck = new QCheckBox(groupBox_26);
        mCrsAccuracyIndicatorCheck->setObjectName(QString::fromUtf8("mCrsAccuracyIndicatorCheck"));

        gridLayout_37->addWidget(mCrsAccuracyIndicatorCheck, 1, 0, 1, 3);

        gridLayout_37->setColumnStretch(1, 1);
        gridLayout_37->setColumnStretch(2, 2);

        gridLayout_15->addWidget(groupBox_26, 4, 0, 1, 1);

        mOptionsScrollArea_08->setWidget(mOptionsScrollAreaContents_08);

        verticalLayout_18->addWidget(mOptionsScrollArea_08);

        mOptionsStackedWidget->addWidget(mOptionsPageCRS);
        mOptionsPageTransformations = new QWidget();
        mOptionsPageTransformations->setObjectName(QString::fromUtf8("mOptionsPageTransformations"));
        verticalLayout_46 = new QVBoxLayout(mOptionsPageTransformations);
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setContentsMargins(11, 11, 11, 11);
        verticalLayout_46->setObjectName(QString::fromUtf8("verticalLayout_46"));
        verticalLayout_46->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(mOptionsPageTransformations);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 857, 685));
        verticalLayout_47 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_47->setSpacing(6);
        verticalLayout_47->setContentsMargins(11, 11, 11, 11);
        verticalLayout_47->setObjectName(QString::fromUtf8("verticalLayout_47"));
        verticalLayout_47->setContentsMargins(0, 0, 0, 0);
        mDefaultDatumTransformGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        mDefaultDatumTransformGroupBox->setObjectName(QString::fromUtf8("mDefaultDatumTransformGroupBox"));
        gridLayout_10 = new QGridLayout(mDefaultDatumTransformGroupBox);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_40 = new QLabel(mDefaultDatumTransformGroupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_10->addWidget(label_40, 2, 0, 1, 1);

        mShowDatumTransformDialogCheckBox = new QCheckBox(mDefaultDatumTransformGroupBox);
        mShowDatumTransformDialogCheckBox->setObjectName(QString::fromUtf8("mShowDatumTransformDialogCheckBox"));

        gridLayout_10->addWidget(mShowDatumTransformDialogCheckBox, 0, 0, 1, 1);

        line_2 = new QFrame(mDefaultDatumTransformGroupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_2, 1, 0, 1, 1);

        mDefaultDatumTransformTableWidget = new QgsDatumTransformTableWidget(mDefaultDatumTransformGroupBox);
        mDefaultDatumTransformTableWidget->setObjectName(QString::fromUtf8("mDefaultDatumTransformTableWidget"));

        gridLayout_10->addWidget(mDefaultDatumTransformTableWidget, 3, 0, 1, 1);

        gridLayout_10->setRowStretch(3, 1);

        verticalLayout_47->addWidget(mDefaultDatumTransformGroupBox);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_46->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mOptionsPageTransformations);
        mOptionsPageDataSources = new QWidget();
        mOptionsPageDataSources->setObjectName(QString::fromUtf8("mOptionsPageDataSources"));
        verticalLayout_26 = new QVBoxLayout(mOptionsPageDataSources);
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_11 = new QgsScrollArea(mOptionsPageDataSources);
        mOptionsScrollArea_11->setObjectName(QString::fromUtf8("mOptionsScrollArea_11"));
        mOptionsScrollArea_11->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_11->setWidgetResizable(true);
        mOptionsScrollAreaContents_11 = new QWidget();
        mOptionsScrollAreaContents_11->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_11"));
        mOptionsScrollAreaContents_11->setGeometry(QRect(0, 0, 843, 772));
        verticalLayout_27 = new QVBoxLayout(mOptionsScrollAreaContents_11);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        groupBox_18 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        gridLayout_19 = new QGridLayout(groupBox_18);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        leNullValue = new QLineEdit(groupBox_18);
        leNullValue->setObjectName(QString::fromUtf8("leNullValue"));

        gridLayout_19->addWidget(leNullValue, 7, 1, 1, 1);

        cmbAttrTableBehavior = new QComboBox(groupBox_18);
        cmbAttrTableBehavior->addItem(QString());
        cmbAttrTableBehavior->setObjectName(QString::fromUtf8("cmbAttrTableBehavior"));

        gridLayout_19->addWidget(cmbAttrTableBehavior, 4, 1, 1, 1);

        label_46 = new QLabel(groupBox_18);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_19->addWidget(label_46, 5, 0, 1, 1);

        mComboCopyFeatureFormat = new QComboBox(groupBox_18);
        mComboCopyFeatureFormat->setObjectName(QString::fromUtf8("mComboCopyFeatureFormat"));

        gridLayout_19->addWidget(mComboCopyFeatureFormat, 3, 1, 1, 1);

        cbxAttributeTableDocked = new QCheckBox(groupBox_18);
        cbxAttributeTableDocked->setObjectName(QString::fromUtf8("cbxAttributeTableDocked"));

        gridLayout_19->addWidget(cbxAttributeTableDocked, 0, 0, 1, 2);

        mAttrTableViewComboBox = new QComboBox(groupBox_18);
        mAttrTableViewComboBox->setObjectName(QString::fromUtf8("mAttrTableViewComboBox"));

        gridLayout_19->addWidget(mAttrTableViewComboBox, 5, 1, 1, 1);

        label_14 = new QLabel(groupBox_18);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_19->addWidget(label_14, 7, 0, 1, 1);

        textLabel1_7 = new QLabel(groupBox_18);
        textLabel1_7->setObjectName(QString::fromUtf8("textLabel1_7"));
        sizePolicy1.setHeightForWidth(textLabel1_7->sizePolicy().hasHeightForWidth());
        textLabel1_7->setSizePolicy(sizePolicy1);

        gridLayout_19->addWidget(textLabel1_7, 4, 0, 1, 1);

        textLabel1_12 = new QLabel(groupBox_18);
        textLabel1_12->setObjectName(QString::fromUtf8("textLabel1_12"));
        sizePolicy1.setHeightForWidth(textLabel1_12->sizePolicy().hasHeightForWidth());
        textLabel1_12->setSizePolicy(sizePolicy1);

        gridLayout_19->addWidget(textLabel1_12, 6, 0, 1, 1);

        spinBoxAttrTableRowCache = new QgsSpinBox(groupBox_18);
        spinBoxAttrTableRowCache->setObjectName(QString::fromUtf8("spinBoxAttrTableRowCache"));
        spinBoxAttrTableRowCache->setMinimum(0);
        spinBoxAttrTableRowCache->setMaximum(10000000);
        spinBoxAttrTableRowCache->setSingleStep(1000);
        spinBoxAttrTableRowCache->setValue(10000);

        gridLayout_19->addWidget(spinBoxAttrTableRowCache, 6, 1, 1, 1);

        label_48 = new QLabel(groupBox_18);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_19->addWidget(label_48, 3, 0, 1, 1);

        cbxAutosizeAttributeTable = new QCheckBox(groupBox_18);
        cbxAutosizeAttributeTable->setObjectName(QString::fromUtf8("cbxAutosizeAttributeTable"));

        gridLayout_19->addWidget(cbxAutosizeAttributeTable, 1, 0, 1, 2);


        verticalLayout_27->addWidget(groupBox_18);

        groupBox_19 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        gridLayout_23 = new QGridLayout(groupBox_19);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        cmbScanZipInBrowser = new QComboBox(groupBox_19);
        cmbScanZipInBrowser->setObjectName(QString::fromUtf8("cmbScanZipInBrowser"));

        gridLayout_23->addWidget(cmbScanZipInBrowser, 1, 2, 1, 1);

        cmbScanItemsInBrowser = new QComboBox(groupBox_19);
        cmbScanItemsInBrowser->setObjectName(QString::fromUtf8("cmbScanItemsInBrowser"));

        gridLayout_23->addWidget(cmbScanItemsInBrowser, 0, 2, 1, 1);

        cmbPromptSublayers = new QComboBox(groupBox_19);
        cmbPromptSublayers->addItem(QString());
        cmbPromptSublayers->setObjectName(QString::fromUtf8("cmbPromptSublayers"));

        gridLayout_23->addWidget(cmbPromptSublayers, 2, 2, 1, 1);

        label_30 = new QLabel(groupBox_19);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_23->addWidget(label_30, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        textLabel1_13 = new QLabel(groupBox_19);
        textLabel1_13->setObjectName(QString::fromUtf8("textLabel1_13"));
        sizePolicy1.setHeightForWidth(textLabel1_13->sizePolicy().hasHeightForWidth());
        textLabel1_13->setSizePolicy(sizePolicy1);

        gridLayout_23->addWidget(textLabel1_13, 2, 0, 1, 1);

        label_29 = new QLabel(groupBox_19);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_23->addWidget(label_29, 1, 0, 1, 1);

        mCheckMonitorDirectories = new QCheckBox(groupBox_19);
        mCheckMonitorDirectories->setObjectName(QString::fromUtf8("mCheckMonitorDirectories"));

        gridLayout_23->addWidget(mCheckMonitorDirectories, 3, 0, 1, 3);


        verticalLayout_27->addWidget(groupBox_19);

        groupBox_301 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_301->setObjectName(QString::fromUtf8("groupBox_301"));
        gridLayout_34 = new QGridLayout(groupBox_301);
        gridLayout_34->setSpacing(6);
        gridLayout_34->setContentsMargins(11, 11, 11, 11);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        label_9 = new QLabel(groupBox_301);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_34->addWidget(label_9, 0, 0, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_34->addItem(horizontalSpacer_19, 0, 1, 1, 1);

        mLocalizedDataPathAddButton = new QToolButton(groupBox_301);
        mLocalizedDataPathAddButton->setObjectName(QString::fromUtf8("mLocalizedDataPathAddButton"));
        mLocalizedDataPathAddButton->setIcon(icon2);

        gridLayout_34->addWidget(mLocalizedDataPathAddButton, 0, 2, 1, 1);

        mLocalizedDataPathRemoveButton = new QToolButton(groupBox_301);
        mLocalizedDataPathRemoveButton->setObjectName(QString::fromUtf8("mLocalizedDataPathRemoveButton"));
        mLocalizedDataPathRemoveButton->setIcon(icon3);

        gridLayout_34->addWidget(mLocalizedDataPathRemoveButton, 0, 3, 1, 1);

        mLocalizedDataPathUpButton = new QToolButton(groupBox_301);
        mLocalizedDataPathUpButton->setObjectName(QString::fromUtf8("mLocalizedDataPathUpButton"));
        mLocalizedDataPathUpButton->setIcon(icon5);

        gridLayout_34->addWidget(mLocalizedDataPathUpButton, 0, 4, 1, 1);

        mLocalizedDataPathDownButton = new QToolButton(groupBox_301);
        mLocalizedDataPathDownButton->setObjectName(QString::fromUtf8("mLocalizedDataPathDownButton"));
        mLocalizedDataPathDownButton->setIcon(icon4);

        gridLayout_34->addWidget(mLocalizedDataPathDownButton, 0, 5, 1, 1);

        mLocalizedDataPathListWidget = new QListWidget(groupBox_301);
        mLocalizedDataPathListWidget->setObjectName(QString::fromUtf8("mLocalizedDataPathListWidget"));
        mLocalizedDataPathListWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        mLocalizedDataPathListWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_34->addWidget(mLocalizedDataPathListWidget, 1, 0, 1, 6);


        verticalLayout_27->addWidget(groupBox_301);

        groupBox_28 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_28->setObjectName(QString::fromUtf8("groupBox_28"));
        _15 = new QGridLayout(groupBox_28);
        _15->setSpacing(6);
        _15->setContentsMargins(11, 11, 11, 11);
        _15->setObjectName(QString::fromUtf8("_15"));
        mBtnRemoveHiddenPath = new QToolButton(groupBox_28);
        mBtnRemoveHiddenPath->setObjectName(QString::fromUtf8("mBtnRemoveHiddenPath"));
        mBtnRemoveHiddenPath->setIcon(icon3);

        _15->addWidget(mBtnRemoveHiddenPath, 0, 2, 1, 1);

        mSVGLabel_4 = new QLabel(groupBox_28);
        mSVGLabel_4->setObjectName(QString::fromUtf8("mSVGLabel_4"));

        _15->addWidget(mSVGLabel_4, 0, 0, 1, 1);

        spacerItem3 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _15->addItem(spacerItem3, 0, 1, 1, 1);

        mListHiddenBrowserPaths = new QListWidget(groupBox_28);
        mListHiddenBrowserPaths->setObjectName(QString::fromUtf8("mListHiddenBrowserPaths"));
        mListHiddenBrowserPaths->setMinimumSize(QSize(0, 120));

        _15->addWidget(mListHiddenBrowserPaths, 1, 0, 1, 3);


        verticalLayout_27->addWidget(groupBox_28);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_8);

        mOptionsScrollArea_11->setWidget(mOptionsScrollAreaContents_11);

        verticalLayout_26->addWidget(mOptionsScrollArea_11);

        mOptionsStackedWidget->addWidget(mOptionsPageDataSources);
        mOptionsPageGDAL = new QWidget();
        mOptionsPageGDAL->setObjectName(QString::fromUtf8("mOptionsPageGDAL"));
        verticalLayout_4 = new QVBoxLayout(mOptionsPageGDAL);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_02 = new QgsScrollArea(mOptionsPageGDAL);
        mOptionsScrollArea_02->setObjectName(QString::fromUtf8("mOptionsScrollArea_02"));
        mOptionsScrollArea_02->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_02->setWidgetResizable(true);
        mOptionsScrollAreaContents_02 = new QWidget();
        mOptionsScrollAreaContents_02->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_02"));
        mOptionsScrollAreaContents_02->setGeometry(QRect(0, 0, 457, 419));
        verticalLayout_6 = new QVBoxLayout(mOptionsScrollAreaContents_02);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(mOptionsScrollAreaContents_02);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_24 = new QVBoxLayout(tab_3);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        groupBox_16 = new QGroupBox(tab_3);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        gridLayout_29 = new QGridLayout(groupBox_16);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        cmbEditCreateOptions = new QComboBox(groupBox_16);
        cmbEditCreateOptions->setObjectName(QString::fromUtf8("cmbEditCreateOptions"));

        gridLayout_29->addWidget(cmbEditCreateOptions, 0, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_29->addItem(horizontalSpacer_15, 0, 3, 1, 1);

        pbnEditPyramidsOptions = new QPushButton(groupBox_16);
        pbnEditPyramidsOptions->setObjectName(QString::fromUtf8("pbnEditPyramidsOptions"));

        gridLayout_29->addWidget(pbnEditPyramidsOptions, 0, 4, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_29->addItem(horizontalSpacer_16, 0, 5, 1, 1);

        pbnEditCreateOptions = new QPushButton(groupBox_16);
        pbnEditCreateOptions->setObjectName(QString::fromUtf8("pbnEditCreateOptions"));

        gridLayout_29->addWidget(pbnEditCreateOptions, 0, 2, 1, 1);


        verticalLayout_24->addWidget(groupBox_16);

        groupBox_13 = new QGroupBox(tab_3);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        gridLayout_24 = new QGridLayout(groupBox_13);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        label_17 = new QLabel(groupBox_13);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setWordWrap(true);

        gridLayout_24->addWidget(label_17, 0, 0, 1, 1);

        lstRasterDrivers = new QTreeWidget(groupBox_13);
        lstRasterDrivers->setObjectName(QString::fromUtf8("lstRasterDrivers"));
        lstRasterDrivers->setMinimumSize(QSize(0, 141));

        gridLayout_24->addWidget(lstRasterDrivers, 1, 0, 1, 1);


        verticalLayout_24->addWidget(groupBox_13);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_29 = new QVBoxLayout(tab_4);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        groupBox_31 = new QGroupBox(tab_4);
        groupBox_31->setObjectName(QString::fromUtf8("groupBox_31"));
        gridLayout_36 = new QGridLayout(groupBox_31);
        gridLayout_36->setSpacing(6);
        gridLayout_36->setContentsMargins(11, 11, 11, 11);
        gridLayout_36->setObjectName(QString::fromUtf8("gridLayout_36"));
        label_68 = new QLabel(groupBox_31);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setWordWrap(true);

        gridLayout_36->addWidget(label_68, 0, 0, 1, 1);

        lstVectorDrivers = new QTreeWidget(groupBox_31);
        lstVectorDrivers->setObjectName(QString::fromUtf8("lstVectorDrivers"));
        lstVectorDrivers->setMinimumSize(QSize(0, 141));

        gridLayout_36->addWidget(lstVectorDrivers, 1, 0, 1, 1);


        verticalLayout_29->addWidget(groupBox_31);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_6->addWidget(tabWidget);

        mOptionsScrollArea_02->setWidget(mOptionsScrollAreaContents_02);

        verticalLayout_4->addWidget(mOptionsScrollArea_02);

        mOptionsStackedWidget->addWidget(mOptionsPageGDAL);
        mOptionsPageMapCanvas = new QWidget();
        mOptionsPageMapCanvas->setObjectName(QString::fromUtf8("mOptionsPageMapCanvas"));
        verticalLayout_16 = new QVBoxLayout(mOptionsPageMapCanvas);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_06 = new QgsScrollArea(mOptionsPageMapCanvas);
        mOptionsScrollArea_06->setObjectName(QString::fromUtf8("mOptionsScrollArea_06"));
        mOptionsScrollArea_06->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_06->setWidgetResizable(true);
        mOptionsScrollAreaContents_06 = new QWidget();
        mOptionsScrollAreaContents_06->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_06"));
        mOptionsScrollAreaContents_06->setGeometry(QRect(0, 0, 508, 487));
        verticalLayout_25 = new QVBoxLayout(mOptionsScrollAreaContents_06);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        groupBox_9 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_06);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_7 = new QGridLayout(groupBox_9);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pbnCanvasColor = new QgsColorButton(groupBox_9);
        pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
        sizePolicy1.setHeightForWidth(pbnCanvasColor->sizePolicy().hasHeightForWidth());
        pbnCanvasColor->setSizePolicy(sizePolicy1);
        pbnCanvasColor->setMinimumSize(QSize(120, 0));
        pbnCanvasColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(pbnCanvasColor, 0, 4, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_28, 0, 6, 1, 1);

        label = new QLabel(groupBox_9);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(label, 0, 3, 1, 1);

        textLabel1_9 = new QLabel(groupBox_9);
        textLabel1_9->setObjectName(QString::fromUtf8("textLabel1_9"));
        sizePolicy3.setHeightForWidth(textLabel1_9->sizePolicy().hasHeightForWidth());
        textLabel1_9->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(textLabel1_9, 0, 0, 1, 1);

        pbnSelectionColor = new QgsColorButton(groupBox_9);
        pbnSelectionColor->setObjectName(QString::fromUtf8("pbnSelectionColor"));
        sizePolicy1.setHeightForWidth(pbnSelectionColor->sizePolicy().hasHeightForWidth());
        pbnSelectionColor->setSizePolicy(sizePolicy1);
        pbnSelectionColor->setMinimumSize(QSize(120, 0));
        pbnSelectionColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(pbnSelectionColor, 0, 1, 1, 1);


        verticalLayout_25->addWidget(groupBox_9);

        mLegendGrpBx = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_06);
        mLegendGrpBx->setObjectName(QString::fromUtf8("mLegendGrpBx"));
        mLegendGrpBx->setMinimumSize(QSize(0, 0));
        gridLayout_35 = new QGridLayout(mLegendGrpBx);
        gridLayout_35->setSpacing(6);
        gridLayout_35->setContentsMargins(11, 11, 11, 11);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        label_15 = new QLabel(mLegendGrpBx);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_35->addWidget(label_15, 0, 0, 1, 1);

        cmbLegendDoubleClickAction = new QComboBox(mLegendGrpBx);
        cmbLegendDoubleClickAction->addItem(QString());
        cmbLegendDoubleClickAction->addItem(QString());
        cmbLegendDoubleClickAction->addItem(QString());
        cmbLegendDoubleClickAction->setObjectName(QString::fromUtf8("cmbLegendDoubleClickAction"));
        cmbLegendDoubleClickAction->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_35->addWidget(cmbLegendDoubleClickAction, 0, 1, 1, 1);

        mLayerTreeInsertionMethodLabel = new QLabel(mLegendGrpBx);
        mLayerTreeInsertionMethodLabel->setObjectName(QString::fromUtf8("mLayerTreeInsertionMethodLabel"));

        gridLayout_35->addWidget(mLayerTreeInsertionMethodLabel, 1, 0, 1, 1);

        mLayerTreeInsertionMethod = new QComboBox(mLegendGrpBx);
        mLayerTreeInsertionMethod->setObjectName(QString::fromUtf8("mLayerTreeInsertionMethod"));
        mLayerTreeInsertionMethod->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_35->addWidget(mLayerTreeInsertionMethod, 1, 1, 1, 1);

        mShowFeatureCountByDefaultCheckBox = new QCheckBox(mLegendGrpBx);
        mShowFeatureCountByDefaultCheckBox->setObjectName(QString::fromUtf8("mShowFeatureCountByDefaultCheckBox"));

        gridLayout_35->addWidget(mShowFeatureCountByDefaultCheckBox, 2, 0, 1, 2);

        cbxLegendClassifiers = new QCheckBox(mLegendGrpBx);
        cbxLegendClassifiers->setObjectName(QString::fromUtf8("cbxLegendClassifiers"));

        gridLayout_35->addWidget(cbxLegendClassifiers, 3, 0, 1, 2);

        label_58 = new QLabel(mLegendGrpBx);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        gridLayout_35->addWidget(label_58, 4, 0, 1, 1);

        mLegendGraphicResolutionSpinBox = new QgsSpinBox(mLegendGrpBx);
        mLegendGraphicResolutionSpinBox->setObjectName(QString::fromUtf8("mLegendGraphicResolutionSpinBox"));
        mLegendGraphicResolutionSpinBox->setMinimum(0);
        mLegendGraphicResolutionSpinBox->setMaximum(1000000);

        gridLayout_35->addWidget(mLegendGraphicResolutionSpinBox, 4, 1, 1, 1);

        labelLegendSymbolMinimumSize = new QLabel(mLegendGrpBx);
        labelLegendSymbolMinimumSize->setObjectName(QString::fromUtf8("labelLegendSymbolMinimumSize"));

        gridLayout_35->addWidget(labelLegendSymbolMinimumSize, 5, 0, 1, 1);

        mLegendSymbolMinimumSizeSpinBox = new QgsDoubleSpinBox(mLegendGrpBx);
        mLegendSymbolMinimumSizeSpinBox->setObjectName(QString::fromUtf8("mLegendSymbolMinimumSizeSpinBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mLegendSymbolMinimumSizeSpinBox->sizePolicy().hasHeightForWidth());
        mLegendSymbolMinimumSizeSpinBox->setSizePolicy(sizePolicy6);
        mLegendSymbolMinimumSizeSpinBox->setDecimals(2);
        mLegendSymbolMinimumSizeSpinBox->setMaximum(999.000000000000000);
        mLegendSymbolMinimumSizeSpinBox->setSingleStep(0.200000000000000);
        mLegendSymbolMinimumSizeSpinBox->setValue(0.100000000000000);
        mLegendSymbolMinimumSizeSpinBox->setShowClearButton(true);

        gridLayout_35->addWidget(mLegendSymbolMinimumSizeSpinBox, 5, 1, 1, 1);

        labelLegendSymbolMaximumSize = new QLabel(mLegendGrpBx);
        labelLegendSymbolMaximumSize->setObjectName(QString::fromUtf8("labelLegendSymbolMaximumSize"));

        gridLayout_35->addWidget(labelLegendSymbolMaximumSize, 6, 0, 1, 1);

        mLegendSymbolMaximumSizeSpinBox = new QgsDoubleSpinBox(mLegendGrpBx);
        mLegendSymbolMaximumSizeSpinBox->setObjectName(QString::fromUtf8("mLegendSymbolMaximumSizeSpinBox"));
        sizePolicy6.setHeightForWidth(mLegendSymbolMaximumSizeSpinBox->sizePolicy().hasHeightForWidth());
        mLegendSymbolMaximumSizeSpinBox->setSizePolicy(sizePolicy6);
        mLegendSymbolMaximumSizeSpinBox->setDecimals(2);
        mLegendSymbolMaximumSizeSpinBox->setMaximum(999.000000000000000);
        mLegendSymbolMaximumSizeSpinBox->setSingleStep(0.200000000000000);
        mLegendSymbolMaximumSizeSpinBox->setValue(20.000000000000000);
        mLegendSymbolMaximumSizeSpinBox->setShowClearButton(true);

        gridLayout_35->addWidget(mLegendSymbolMaximumSizeSpinBox, 6, 1, 1, 1);


        verticalLayout_25->addWidget(mLegendGrpBx);

        groupBox_12 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_06);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout_40 = new QGridLayout(groupBox_12);
        gridLayout_40->setSpacing(6);
        gridLayout_40->setContentsMargins(11, 11, 11, 11);
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        textLabel1_16 = new QLabel(groupBox_12);
        textLabel1_16->setObjectName(QString::fromUtf8("textLabel1_16"));

        gridLayout_40->addWidget(textLabel1_16, 0, 0, 1, 1);

        mMapTipsDelaySpinBox = new QgsSpinBox(groupBox_12);
        mMapTipsDelaySpinBox->setObjectName(QString::fromUtf8("mMapTipsDelaySpinBox"));
        mMapTipsDelaySpinBox->setMinimum(0);
        mMapTipsDelaySpinBox->setMaximum(1000000);

        gridLayout_40->addWidget(mMapTipsDelaySpinBox, 0, 1, 1, 1);


        verticalLayout_25->addWidget(groupBox_12);

        groupBox_32 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_06);
        groupBox_32->setObjectName(QString::fromUtf8("groupBox_32"));
        gridLayout_381 = new QGridLayout(groupBox_32);
        gridLayout_381->setSpacing(6);
        gridLayout_381->setContentsMargins(11, 11, 11, 11);
        gridLayout_381->setObjectName(QString::fromUtf8("gridLayout_381"));
        mRespectScreenDpiCheckBox = new QCheckBox(groupBox_32);
        mRespectScreenDpiCheckBox->setObjectName(QString::fromUtf8("mRespectScreenDpiCheckBox"));

        gridLayout_381->addWidget(mRespectScreenDpiCheckBox, 0, 0, 1, 1);


        verticalLayout_25->addWidget(groupBox_32);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(spacerItem4);

        mOptionsScrollArea_06->setWidget(mOptionsScrollAreaContents_06);

        verticalLayout_16->addWidget(mOptionsScrollArea_06);

        mOptionsStackedWidget->addWidget(mOptionsPageMapCanvas);
        mOptionsPageMapTools = new QWidget();
        mOptionsPageMapTools->setObjectName(QString::fromUtf8("mOptionsPageMapTools"));
        verticalLayout_14 = new QVBoxLayout(mOptionsPageMapTools);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_05 = new QgsScrollArea(mOptionsPageMapTools);
        mOptionsScrollArea_05->setObjectName(QString::fromUtf8("mOptionsScrollArea_05"));
        mOptionsScrollArea_05->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_05->setWidgetResizable(true);
        mOptionsScrollAreaContents_05 = new QWidget();
        mOptionsScrollAreaContents_05->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_05"));
        mOptionsScrollAreaContents_05->setGeometry(QRect(0, 0, 622, 925));
        verticalLayout_30 = new QVBoxLayout(mOptionsScrollAreaContents_05);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        mCoordinateDisplayGroup = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        mCoordinateDisplayGroup->setObjectName(QString::fromUtf8("mCoordinateDisplayGroup"));
        sizePolicy5.setHeightForWidth(mCoordinateDisplayGroup->sizePolicy().hasHeightForWidth());
        mCoordinateDisplayGroup->setSizePolicy(sizePolicy5);
        mCoordinateDisplayGroup->setSyncGroup(QString::fromUtf8("projgeneral"));
        gridLayout_30 = new QGridLayout(mCoordinateDisplayGroup);
        gridLayout_30->setSpacing(6);
        gridLayout_30->setContentsMargins(11, 11, 11, 11);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        textLabel1_11 = new QLabel(mCoordinateDisplayGroup);
        textLabel1_11->setObjectName(QString::fromUtf8("textLabel1_11"));

        gridLayout_30->addWidget(textLabel1_11, 4, 0, 1, 1);

        label_72 = new QLabel(mCoordinateDisplayGroup);
        label_72->setObjectName(QString::fromUtf8("label_72"));

        gridLayout_30->addWidget(label_72, 7, 0, 1, 1);

        mCustomizeCoordinateFormatButton = new QPushButton(mCoordinateDisplayGroup);
        mCustomizeCoordinateFormatButton->setObjectName(QString::fromUtf8("mCustomizeCoordinateFormatButton"));

        gridLayout_30->addWidget(mCustomizeCoordinateFormatButton, 7, 2, 1, 1);

        mDistanceUnitsComboBox = new QComboBox(mCoordinateDisplayGroup);
        mDistanceUnitsComboBox->setObjectName(QString::fromUtf8("mDistanceUnitsComboBox"));

        gridLayout_30->addWidget(mDistanceUnitsComboBox, 4, 2, 1, 1);

        label_12 = new QLabel(mCoordinateDisplayGroup);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_30->addWidget(label_12, 0, 0, 1, 1);

        mDecimalPlacesSpinBox = new QgsSpinBox(mCoordinateDisplayGroup);
        mDecimalPlacesSpinBox->setObjectName(QString::fromUtf8("mDecimalPlacesSpinBox"));

        gridLayout_30->addWidget(mDecimalPlacesSpinBox, 0, 2, 1, 1);

        mAreaUnitsComboBox = new QComboBox(mCoordinateDisplayGroup);
        mAreaUnitsComboBox->setObjectName(QString::fromUtf8("mAreaUnitsComboBox"));

        gridLayout_30->addWidget(mAreaUnitsComboBox, 5, 2, 1, 1);

        label_13 = new QLabel(mCoordinateDisplayGroup);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_30->addWidget(label_13, 1, 0, 1, 1);

        mKeepBaseUnitCheckBox = new QCheckBox(mCoordinateDisplayGroup);
        mKeepBaseUnitCheckBox->setObjectName(QString::fromUtf8("mKeepBaseUnitCheckBox"));

        gridLayout_30->addWidget(mKeepBaseUnitCheckBox, 1, 2, 1, 1);

        textLabel1_14 = new QLabel(mCoordinateDisplayGroup);
        textLabel1_14->setObjectName(QString::fromUtf8("textLabel1_14"));

        gridLayout_30->addWidget(textLabel1_14, 5, 0, 1, 1);

        label_69 = new QLabel(mCoordinateDisplayGroup);
        label_69->setObjectName(QString::fromUtf8("label_69"));

        gridLayout_30->addWidget(label_69, 8, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_30->addItem(horizontalSpacer_11, 8, 1, 1, 1);

        mCustomizeBearingFormatButton = new QPushButton(mCoordinateDisplayGroup);
        mCustomizeBearingFormatButton->setObjectName(QString::fromUtf8("mCustomizeBearingFormatButton"));

        gridLayout_30->addWidget(mCustomizeBearingFormatButton, 8, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_30->addItem(horizontalSpacer_10, 8, 3, 1, 1);

        mAngleUnitsLabel = new QLabel(mCoordinateDisplayGroup);
        mAngleUnitsLabel->setObjectName(QString::fromUtf8("mAngleUnitsLabel"));

        gridLayout_30->addWidget(mAngleUnitsLabel, 2, 0, 1, 1);

        mAngleUnitsComboBox = new QComboBox(mCoordinateDisplayGroup);
        mAngleUnitsComboBox->setObjectName(QString::fromUtf8("mAngleUnitsComboBox"));

        gridLayout_30->addWidget(mAngleUnitsComboBox, 2, 2, 1, 1);

        gridLayout_30->setColumnStretch(2, 3);
        gridLayout_30->setColumnStretch(3, 6);

        verticalLayout_30->addWidget(mCoordinateDisplayGroup);

        mIdentifyGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        mIdentifyGroupBox->setObjectName(QString::fromUtf8("mIdentifyGroupBox"));
        verticalLayout_37 = new QVBoxLayout(mIdentifyGroupBox);
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setContentsMargins(11, 11, 11, 11);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        mIdentifyRadiusHorizontalLayout = new QHBoxLayout();
        mIdentifyRadiusHorizontalLayout->setSpacing(6);
        mIdentifyRadiusHorizontalLayout->setObjectName(QString::fromUtf8("mIdentifyRadiusHorizontalLayout"));
        textLabel1_3 = new QLabel(mIdentifyGroupBox);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        mIdentifyRadiusHorizontalLayout->addWidget(textLabel1_3);

        spinBoxIdentifyValue = new QgsDoubleSpinBox(mIdentifyGroupBox);
        spinBoxIdentifyValue->setObjectName(QString::fromUtf8("spinBoxIdentifyValue"));
        spinBoxIdentifyValue->setMaximum(100.000000000000000);
        spinBoxIdentifyValue->setSingleStep(1.000000000000000);
        spinBoxIdentifyValue->setValue(2.000000000000000);

        mIdentifyRadiusHorizontalLayout->addWidget(spinBoxIdentifyValue);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mIdentifyRadiusHorizontalLayout->addItem(horizontalSpacer_44);


        verticalLayout_37->addLayout(mIdentifyRadiusHorizontalLayout);

        mIdentifyHighlightHorizontalLayout = new QHBoxLayout();
        mIdentifyHighlightHorizontalLayout->setSpacing(6);
        mIdentifyHighlightHorizontalLayout->setObjectName(QString::fromUtf8("mIdentifyHighlightHorizontalLayout"));
        mIdentifyHighlighColorLabel = new QLabel(mIdentifyGroupBox);
        mIdentifyHighlighColorLabel->setObjectName(QString::fromUtf8("mIdentifyHighlighColorLabel"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlighColorLabel);

        mIdentifyHighlightColorButton = new QgsColorButton(mIdentifyGroupBox);
        mIdentifyHighlightColorButton->setObjectName(QString::fromUtf8("mIdentifyHighlightColorButton"));
        sizePolicy1.setHeightForWidth(mIdentifyHighlightColorButton->sizePolicy().hasHeightForWidth());
        mIdentifyHighlightColorButton->setSizePolicy(sizePolicy1);
        mIdentifyHighlightColorButton->setMinimumSize(QSize(120, 0));
        mIdentifyHighlightColorButton->setMaximumSize(QSize(120, 16777215));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightColorButton);

        mIdentifyHighlightBufferLabel = new QLabel(mIdentifyGroupBox);
        mIdentifyHighlightBufferLabel->setObjectName(QString::fromUtf8("mIdentifyHighlightBufferLabel"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightBufferLabel);

        mIdentifyHighlightBufferSpinBox = new QgsDoubleSpinBox(mIdentifyGroupBox);
        mIdentifyHighlightBufferSpinBox->setObjectName(QString::fromUtf8("mIdentifyHighlightBufferSpinBox"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightBufferSpinBox);

        mIdentifyHighlightMinWidthLabel = new QLabel(mIdentifyGroupBox);
        mIdentifyHighlightMinWidthLabel->setObjectName(QString::fromUtf8("mIdentifyHighlightMinWidthLabel"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightMinWidthLabel);

        mIdentifyHighlightMinWidthSpinBox = new QgsDoubleSpinBox(mIdentifyGroupBox);
        mIdentifyHighlightMinWidthSpinBox->setObjectName(QString::fromUtf8("mIdentifyHighlightMinWidthSpinBox"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightMinWidthSpinBox);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mIdentifyHighlightHorizontalLayout->addItem(horizontalSpacer_45);


        verticalLayout_37->addLayout(mIdentifyHighlightHorizontalLayout);


        verticalLayout_30->addWidget(mIdentifyGroupBox);

        mMeasureToolGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        mMeasureToolGroupBox->setObjectName(QString::fromUtf8("mMeasureToolGroupBox"));
        gridLayout_21 = new QGridLayout(mMeasureToolGroupBox);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        horizontalSpacer_12 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_12, 0, 2, 1, 1);

        textLabel1_10 = new QLabel(mMeasureToolGroupBox);
        textLabel1_10->setObjectName(QString::fromUtf8("textLabel1_10"));

        gridLayout_21->addWidget(textLabel1_10, 0, 0, 1, 1);

        pbnMeasureColor = new QgsColorButton(mMeasureToolGroupBox);
        pbnMeasureColor->setObjectName(QString::fromUtf8("pbnMeasureColor"));
        sizePolicy1.setHeightForWidth(pbnMeasureColor->sizePolicy().hasHeightForWidth());
        pbnMeasureColor->setSizePolicy(sizePolicy1);
        pbnMeasureColor->setMinimumSize(QSize(120, 0));
        pbnMeasureColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_21->addWidget(pbnMeasureColor, 0, 1, 1, 1);

        mMeasureToolCopySettingsGroupBox = new QgsCollapsibleGroupBox(mMeasureToolGroupBox);
        mMeasureToolCopySettingsGroupBox->setObjectName(QString::fromUtf8("mMeasureToolCopySettingsGroupBox"));
        gridLayout_20 = new QGridLayout(mMeasureToolCopySettingsGroupBox);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        label_22 = new QLabel(mMeasureToolCopySettingsGroupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_20->addWidget(label_22, 0, 0, 1, 1);

        label_23 = new QLabel(mMeasureToolCopySettingsGroupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_20->addWidget(label_23, 2, 0, 1, 1);

        mAlwaysUseDecimalPoint = new QCheckBox(mMeasureToolCopySettingsGroupBox);
        mAlwaysUseDecimalPoint->setObjectName(QString::fromUtf8("mAlwaysUseDecimalPoint"));

        gridLayout_20->addWidget(mAlwaysUseDecimalPoint, 1, 1, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mSeparatorComma = new QRadioButton(mMeasureToolCopySettingsGroupBox);
        mSeparatorComma->setObjectName(QString::fromUtf8("mSeparatorComma"));

        gridLayout_6->addWidget(mSeparatorComma, 0, 0, 1, 1);

        mSeparatorSpace = new QRadioButton(mMeasureToolCopySettingsGroupBox);
        mSeparatorSpace->setObjectName(QString::fromUtf8("mSeparatorSpace"));

        gridLayout_6->addWidget(mSeparatorSpace, 2, 0, 1, 1);

        mSeparatorColon = new QRadioButton(mMeasureToolCopySettingsGroupBox);
        mSeparatorColon->setObjectName(QString::fromUtf8("mSeparatorColon"));

        gridLayout_6->addWidget(mSeparatorColon, 1, 1, 1, 1);

        mSeparatorSemicolon = new QRadioButton(mMeasureToolCopySettingsGroupBox);
        mSeparatorSemicolon->setObjectName(QString::fromUtf8("mSeparatorSemicolon"));

        gridLayout_6->addWidget(mSeparatorSemicolon, 0, 1, 1, 1);

        mSeparatorTab = new QRadioButton(mMeasureToolCopySettingsGroupBox);
        mSeparatorTab->setObjectName(QString::fromUtf8("mSeparatorTab"));
        mSeparatorTab->setChecked(true);

        gridLayout_6->addWidget(mSeparatorTab, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mSeparatorOther = new QRadioButton(mMeasureToolCopySettingsGroupBox);
        mSeparatorOther->setObjectName(QString::fromUtf8("mSeparatorOther"));

        horizontalLayout_3->addWidget(mSeparatorOther);

        mSeparatorCustom = new QLineEdit(mMeasureToolCopySettingsGroupBox);
        mSeparatorCustom->setObjectName(QString::fromUtf8("mSeparatorCustom"));
        mSeparatorCustom->setEnabled(false);
        sizePolicy4.setHeightForWidth(mSeparatorCustom->sizePolicy().hasHeightForWidth());
        mSeparatorCustom->setSizePolicy(sizePolicy4);
        mSeparatorCustom->setMaxLength(3);

        horizontalLayout_3->addWidget(mSeparatorCustom);


        gridLayout_6->addLayout(horizontalLayout_3, 2, 1, 1, 1);


        gridLayout_20->addLayout(gridLayout_6, 2, 1, 1, 1);

        mIncludeHeader = new QCheckBox(mMeasureToolCopySettingsGroupBox);
        mIncludeHeader->setObjectName(QString::fromUtf8("mIncludeHeader"));

        gridLayout_20->addWidget(mIncludeHeader, 0, 1, 1, 1);

        label_24 = new QLabel(mMeasureToolCopySettingsGroupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_20->addWidget(label_24, 1, 0, 1, 1);


        gridLayout_21->addWidget(mMeasureToolCopySettingsGroupBox, 3, 0, 1, 3);


        verticalLayout_30->addWidget(mMeasureToolGroupBox);

        mZoomingGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        mZoomingGroupBox->setObjectName(QString::fromUtf8("mZoomingGroupBox"));
        _8 = new QGridLayout(mZoomingGroupBox);
        _8->setSpacing(6);
        _8->setContentsMargins(11, 11, 11, 11);
        _8->setObjectName(QString::fromUtf8("_8"));
        label_3 = new QLabel(mZoomingGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        _8->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_110 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        _8->addItem(horizontalSpacer_110, 0, 1, 1, 1);

        spinZoomFactor = new QgsSpinBox(mZoomingGroupBox);
        spinZoomFactor->setObjectName(QString::fromUtf8("spinZoomFactor"));
        sizePolicy4.setHeightForWidth(spinZoomFactor->sizePolicy().hasHeightForWidth());
        spinZoomFactor->setSizePolicy(sizePolicy4);
        spinZoomFactor->setMaximumSize(QSize(110, 16777215));
        spinZoomFactor->setMinimum(100);
        spinZoomFactor->setMaximum(1000);
        spinZoomFactor->setSingleStep(10);
        spinZoomFactor->setValue(200);
        spinZoomFactor->setShowClearButton(true);

        _8->addWidget(spinZoomFactor, 0, 2, 1, 1);

        horizontalSpacer_100 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _8->addItem(horizontalSpacer_100, 0, 3, 1, 1);

        label_21 = new QLabel(mZoomingGroupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        _8->addWidget(label_21, 1, 0, 1, 1);

        reverseWheelZoom = new QCheckBox(mZoomingGroupBox);
        reverseWheelZoom->setObjectName(QString::fromUtf8("reverseWheelZoom"));

        _8->addWidget(reverseWheelZoom, 1, 2, 1, 1);


        verticalLayout_30->addWidget(mZoomingGroupBox);

        mPredefinedScalesGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        mPredefinedScalesGroupBox->setObjectName(QString::fromUtf8("mPredefinedScalesGroupBox"));
        gridLayout_26 = new QGridLayout(mPredefinedScalesGroupBox);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        mListGlobalScales = new QListWidget(mPredefinedScalesGroupBox);
        mListGlobalScales->setObjectName(QString::fromUtf8("mListGlobalScales"));

        gridLayout_26->addWidget(mListGlobalScales, 0, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        pbnAddScale = new QToolButton(mPredefinedScalesGroupBox);
        pbnAddScale->setObjectName(QString::fromUtf8("pbnAddScale"));
        pbnAddScale->setIcon(icon2);

        verticalLayout_13->addWidget(pbnAddScale);

        pbnRemoveScale = new QToolButton(mPredefinedScalesGroupBox);
        pbnRemoveScale->setObjectName(QString::fromUtf8("pbnRemoveScale"));
        pbnRemoveScale->setIcon(icon3);

        verticalLayout_13->addWidget(pbnRemoveScale);

        pbnDefaultScaleValues = new QToolButton(mPredefinedScalesGroupBox);
        pbnDefaultScaleValues->setObjectName(QString::fromUtf8("pbnDefaultScaleValues"));
        pbnDefaultScaleValues->setIcon(icon1);

        verticalLayout_13->addWidget(pbnDefaultScaleValues);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_7);

        pbnImportScales = new QToolButton(mPredefinedScalesGroupBox);
        pbnImportScales->setObjectName(QString::fromUtf8("pbnImportScales"));
        pbnImportScales->setIcon(icon);

        verticalLayout_13->addWidget(pbnImportScales);

        pbnExportScales = new QToolButton(mPredefinedScalesGroupBox);
        pbnExportScales->setObjectName(QString::fromUtf8("pbnExportScales"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportScales->setIcon(icon6);

        verticalLayout_13->addWidget(pbnExportScales);


        gridLayout_26->addLayout(verticalLayout_13, 0, 1, 1, 1);


        verticalLayout_30->addWidget(mPredefinedScalesGroupBox);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_3);

        mOptionsScrollArea_05->setWidget(mOptionsScrollAreaContents_05);

        verticalLayout_14->addWidget(mOptionsScrollArea_05);

        mOptionsStackedWidget->addWidget(mOptionsPageMapTools);
        mOptionsPageDigitizing = new QWidget();
        mOptionsPageDigitizing->setObjectName(QString::fromUtf8("mOptionsPageDigitizing"));
        verticalLayout_17 = new QVBoxLayout(mOptionsPageDigitizing);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_07 = new QgsScrollArea(mOptionsPageDigitizing);
        mOptionsScrollArea_07->setObjectName(QString::fromUtf8("mOptionsScrollArea_07"));
        mOptionsScrollArea_07->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_07->setWidgetResizable(true);
        mOptionsScrollAreaContents_07 = new QWidget();
        mOptionsScrollAreaContents_07->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_07"));
        mOptionsScrollAreaContents_07->setGeometry(QRect(0, 0, 575, 1038));
        verticalLayout_31 = new QVBoxLayout(mOptionsScrollAreaContents_07);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        mEnterAttributeValuesGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mEnterAttributeValuesGroupBox->setObjectName(QString::fromUtf8("mEnterAttributeValuesGroupBox"));
        gridLayout_28 = new QGridLayout(mEnterAttributeValuesGroupBox);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        label_19 = new QLabel(mEnterAttributeValuesGroupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_28->addWidget(label_19, 2, 0, 1, 1);

        chkDisableAttributeValuesDlg = new QCheckBox(mEnterAttributeValuesGroupBox);
        chkDisableAttributeValuesDlg->setObjectName(QString::fromUtf8("chkDisableAttributeValuesDlg"));
        chkDisableAttributeValuesDlg->setTristate(false);

        gridLayout_28->addWidget(chkDisableAttributeValuesDlg, 0, 0, 1, 3);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_32, 2, 1, 1, 1);

        chkReuseLastValues = new QCheckBox(mEnterAttributeValuesGroupBox);
        chkReuseLastValues->setObjectName(QString::fromUtf8("chkReuseLastValues"));
        chkReuseLastValues->setTristate(false);

        gridLayout_28->addWidget(chkReuseLastValues, 1, 0, 1, 3);

        mDefaultZValueLabel = new QLabel(mEnterAttributeValuesGroupBox);
        mDefaultZValueLabel->setObjectName(QString::fromUtf8("mDefaultZValueLabel"));

        gridLayout_28->addWidget(mDefaultZValueLabel, 3, 0, 1, 1);

        mDefaultMValueLabel = new QLabel(mEnterAttributeValuesGroupBox);
        mDefaultMValueLabel->setObjectName(QString::fromUtf8("mDefaultMValueLabel"));

        gridLayout_28->addWidget(mDefaultMValueLabel, 4, 0, 1, 1);

        mDefaultZValueSpinBox = new QgsDoubleSpinBox(mEnterAttributeValuesGroupBox);
        mDefaultZValueSpinBox->setObjectName(QString::fromUtf8("mDefaultZValueSpinBox"));
        mDefaultZValueSpinBox->setDecimals(3);
        mDefaultZValueSpinBox->setMinimum(-999999.998999999952503);
        mDefaultZValueSpinBox->setMaximum(1000000.000000000000000);
        mDefaultZValueSpinBox->setSingleStep(1.000000000000000);

        gridLayout_28->addWidget(mDefaultZValueSpinBox, 3, 2, 1, 1);

        mDefaultMValueSpinBox = new QgsDoubleSpinBox(mEnterAttributeValuesGroupBox);
        mDefaultMValueSpinBox->setObjectName(QString::fromUtf8("mDefaultMValueSpinBox"));
        mDefaultMValueSpinBox->setDecimals(3);
        mDefaultMValueSpinBox->setMinimum(-999999.998999999952503);
        mDefaultMValueSpinBox->setMaximum(1000000.000000000000000);
        mDefaultMValueSpinBox->setSingleStep(1.000000000000000);

        gridLayout_28->addWidget(mDefaultMValueSpinBox, 4, 2, 1, 1);

        mValidateGeometries = new QComboBox(mEnterAttributeValuesGroupBox);
        mValidateGeometries->setObjectName(QString::fromUtf8("mValidateGeometries"));
        sizePolicy4.setHeightForWidth(mValidateGeometries->sizePolicy().hasHeightForWidth());
        mValidateGeometries->setSizePolicy(sizePolicy4);

        gridLayout_28->addWidget(mValidateGeometries, 2, 2, 1, 1);


        verticalLayout_31->addWidget(mEnterAttributeValuesGroupBox);

        mRubberBandGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mRubberBandGroupBox->setObjectName(QString::fromUtf8("mRubberBandGroupBox"));
        _9 = new QGridLayout(mRubberBandGroupBox);
        _9->setSpacing(6);
        _9->setContentsMargins(11, 11, 11, 11);
        _9->setObjectName(QString::fromUtf8("_9"));
        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _9->addItem(horizontalSpacer_33, 0, 9, 1, 1);

        mLineWidthTextLabel = new QLabel(mRubberBandGroupBox);
        mLineWidthTextLabel->setObjectName(QString::fromUtf8("mLineWidthTextLabel"));
        sizePolicy3.setHeightForWidth(mLineWidthTextLabel->sizePolicy().hasHeightForWidth());
        mLineWidthTextLabel->setSizePolicy(sizePolicy3);

        _9->addWidget(mLineWidthTextLabel, 0, 0, 1, 1);

        mLineColorTextLabel = new QLabel(mRubberBandGroupBox);
        mLineColorTextLabel->setObjectName(QString::fromUtf8("mLineColorTextLabel"));
        sizePolicy3.setHeightForWidth(mLineColorTextLabel->sizePolicy().hasHeightForWidth());
        mLineColorTextLabel->setSizePolicy(sizePolicy3);

        _9->addWidget(mLineColorTextLabel, 0, 2, 1, 1);

        mLineWidthSpinBox = new QgsSpinBox(mRubberBandGroupBox);
        mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
        mLineWidthSpinBox->setMinimum(1);

        _9->addWidget(mLineWidthSpinBox, 0, 1, 1, 1);

        mFillColorToolButton = new QgsColorButton(mRubberBandGroupBox);
        mFillColorToolButton->setObjectName(QString::fromUtf8("mFillColorToolButton"));
        sizePolicy1.setHeightForWidth(mFillColorToolButton->sizePolicy().hasHeightForWidth());
        mFillColorToolButton->setSizePolicy(sizePolicy1);
        mFillColorToolButton->setMinimumSize(QSize(120, 0));
        mFillColorToolButton->setMaximumSize(QSize(120, 16777215));

        _9->addWidget(mFillColorToolButton, 0, 5, 1, 1);

        mSelectColorTextLabel = new QLabel(mRubberBandGroupBox);
        mSelectColorTextLabel->setObjectName(QString::fromUtf8("mSelectColorTextLabel"));
        sizePolicy3.setHeightForWidth(mSelectColorTextLabel->sizePolicy().hasHeightForWidth());
        mSelectColorTextLabel->setSizePolicy(sizePolicy3);

        _9->addWidget(mSelectColorTextLabel, 0, 4, 1, 1);

        mLineColorToolButton = new QgsColorButton(mRubberBandGroupBox);
        mLineColorToolButton->setObjectName(QString::fromUtf8("mLineColorToolButton"));
        sizePolicy1.setHeightForWidth(mLineColorToolButton->sizePolicy().hasHeightForWidth());
        mLineColorToolButton->setSizePolicy(sizePolicy1);
        mLineColorToolButton->setMinimumSize(QSize(120, 0));
        mLineColorToolButton->setMaximumSize(QSize(120, 16777215));

        _9->addWidget(mLineColorToolButton, 0, 3, 1, 1);

        mLineGhostCheckBox = new QCheckBox(mRubberBandGroupBox);
        mLineGhostCheckBox->setObjectName(QString::fromUtf8("mLineGhostCheckBox"));

        _9->addWidget(mLineGhostCheckBox, 1, 0, 1, 7);


        verticalLayout_31->addWidget(mRubberBandGroupBox);

        mSnappingGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mSnappingGroupBox->setObjectName(QString::fromUtf8("mSnappingGroupBox"));
        gridLayout_3 = new QGridLayout(mSnappingGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mSnappingEnabledDefault = new QCheckBox(mSnappingGroupBox);
        mSnappingEnabledDefault->setObjectName(QString::fromUtf8("mSnappingEnabledDefault"));

        gridLayout_3->addWidget(mSnappingEnabledDefault, 0, 0, 1, 4);

        mDefaultSnapTypeLabel = new QLabel(mSnappingGroupBox);
        mDefaultSnapTypeLabel->setObjectName(QString::fromUtf8("mDefaultSnapTypeLabel"));

        gridLayout_3->addWidget(mDefaultSnapTypeLabel, 1, 0, 1, 1);

        spacerItem5 = new QSpacerItem(273, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem5, 1, 1, 1, 1);

        mDefaultSnapTypeComboBox = new QComboBox(mSnappingGroupBox);
        mDefaultSnapTypeComboBox->setObjectName(QString::fromUtf8("mDefaultSnapTypeComboBox"));
        sizePolicy4.setHeightForWidth(mDefaultSnapTypeComboBox->sizePolicy().hasHeightForWidth());
        mDefaultSnapTypeComboBox->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(mDefaultSnapTypeComboBox, 1, 2, 1, 1);

        mDefaultSnappingToleranceTextLabel = new QLabel(mSnappingGroupBox);
        mDefaultSnappingToleranceTextLabel->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceTextLabel"));

        gridLayout_3->addWidget(mDefaultSnappingToleranceTextLabel, 2, 0, 1, 1);

        spacerItem6 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem6, 2, 1, 1, 1);

        mDefaultSnappingToleranceSpinBox = new QgsDoubleSpinBox(mSnappingGroupBox);
        mDefaultSnappingToleranceSpinBox->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceSpinBox"));
        mDefaultSnappingToleranceSpinBox->setDecimals(5);
        mDefaultSnappingToleranceSpinBox->setMaximum(99999999.989999994635582);

        gridLayout_3->addWidget(mDefaultSnappingToleranceSpinBox, 2, 2, 1, 1);

        mDefaultSnappingToleranceComboBox = new QComboBox(mSnappingGroupBox);
        mDefaultSnappingToleranceComboBox->addItem(QString());
        mDefaultSnappingToleranceComboBox->addItem(QString());
        mDefaultSnappingToleranceComboBox->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceComboBox"));
        sizePolicy4.setHeightForWidth(mDefaultSnappingToleranceComboBox->sizePolicy().hasHeightForWidth());
        mDefaultSnappingToleranceComboBox->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(mDefaultSnappingToleranceComboBox, 2, 3, 1, 1);

        mVertexSearchRadiusVertexEditLabel = new QLabel(mSnappingGroupBox);
        mVertexSearchRadiusVertexEditLabel->setObjectName(QString::fromUtf8("mVertexSearchRadiusVertexEditLabel"));

        gridLayout_3->addWidget(mVertexSearchRadiusVertexEditLabel, 3, 0, 1, 1);

        spacerItem7 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem7, 3, 1, 1, 1);

        mSearchRadiusVertexEditSpinBox = new QgsDoubleSpinBox(mSnappingGroupBox);
        mSearchRadiusVertexEditSpinBox->setObjectName(QString::fromUtf8("mSearchRadiusVertexEditSpinBox"));
        mSearchRadiusVertexEditSpinBox->setDecimals(5);
        mSearchRadiusVertexEditSpinBox->setMaximum(99999999.989999994635582);

        gridLayout_3->addWidget(mSearchRadiusVertexEditSpinBox, 3, 2, 1, 1);

        mSearchRadiusVertexEditComboBox = new QComboBox(mSnappingGroupBox);
        mSearchRadiusVertexEditComboBox->addItem(QString());
        mSearchRadiusVertexEditComboBox->addItem(QString());
        mSearchRadiusVertexEditComboBox->setObjectName(QString::fromUtf8("mSearchRadiusVertexEditComboBox"));

        gridLayout_3->addWidget(mSearchRadiusVertexEditComboBox, 3, 3, 1, 1);

        label_49 = new QLabel(mSnappingGroupBox);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_3->addWidget(label_49, 4, 0, 1, 1);

        mSnappingMainDialogComboBox = new QComboBox(mSnappingGroupBox);
        mSnappingMainDialogComboBox->setObjectName(QString::fromUtf8("mSnappingMainDialogComboBox"));

        gridLayout_3->addWidget(mSnappingMainDialogComboBox, 4, 2, 1, 1);

        label_2 = new QLabel(mSnappingGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 5, 0, 1, 1);

        mSnappingMarkerColorButton = new QgsColorButton(mSnappingGroupBox);
        mSnappingMarkerColorButton->setObjectName(QString::fromUtf8("mSnappingMarkerColorButton"));
        mSnappingMarkerColorButton->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(mSnappingMarkerColorButton, 5, 2, 1, 1);

        mSnappingTooltipsCheckbox = new QCheckBox(mSnappingGroupBox);
        mSnappingTooltipsCheckbox->setObjectName(QString::fromUtf8("mSnappingTooltipsCheckbox"));

        gridLayout_3->addWidget(mSnappingTooltipsCheckbox, 6, 0, 1, 4);

        mEnableSnappingOnInvisibleFeatureCheckbox = new QCheckBox(mSnappingGroupBox);
        mEnableSnappingOnInvisibleFeatureCheckbox->setObjectName(QString::fromUtf8("mEnableSnappingOnInvisibleFeatureCheckbox"));

        gridLayout_3->addWidget(mEnableSnappingOnInvisibleFeatureCheckbox, 7, 0, 1, 4);


        verticalLayout_31->addWidget(mSnappingGroupBox);

        mVertexMarkerGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mVertexMarkerGroupBox->setObjectName(QString::fromUtf8("mVertexMarkerGroupBox"));
        _11 = new QGridLayout(mVertexMarkerGroupBox);
        _11->setSpacing(6);
        _11->setContentsMargins(11, 11, 11, 11);
        _11->setObjectName(QString::fromUtf8("_11"));
        mMarkerStyleLabel = new QLabel(mVertexMarkerGroupBox);
        mMarkerStyleLabel->setObjectName(QString::fromUtf8("mMarkerStyleLabel"));

        _11->addWidget(mMarkerStyleLabel, 1, 0, 1, 1);

        spacerItem8 = new QSpacerItem(281, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _11->addItem(spacerItem8, 1, 1, 1, 1);

        mMarkerStyleComboBox = new QComboBox(mVertexMarkerGroupBox);
        mMarkerStyleComboBox->setObjectName(QString::fromUtf8("mMarkerStyleComboBox"));
        sizePolicy4.setHeightForWidth(mMarkerStyleComboBox->sizePolicy().hasHeightForWidth());
        mMarkerStyleComboBox->setSizePolicy(sizePolicy4);

        _11->addWidget(mMarkerStyleComboBox, 1, 2, 1, 1);

        mMarkerSizeSpinBox = new QgsDoubleSpinBox(mVertexMarkerGroupBox);
        mMarkerSizeSpinBox->setObjectName(QString::fromUtf8("mMarkerSizeSpinBox"));
        mMarkerSizeSpinBox->setLayoutDirection(Qt::LeftToRight);
        mMarkerSizeSpinBox->setMinimum(0.000000000000000);
        mMarkerSizeSpinBox->setSingleStep(0.010000000000000);

        _11->addWidget(mMarkerSizeSpinBox, 2, 2, 1, 1);

        label_6 = new QLabel(mVertexMarkerGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        _11->addWidget(label_6, 2, 0, 1, 1);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _11->addItem(spacerItem9, 2, 1, 1, 1);

        mMarkersOnlyForSelectedCheckBox = new QCheckBox(mVertexMarkerGroupBox);
        mMarkersOnlyForSelectedCheckBox->setObjectName(QString::fromUtf8("mMarkersOnlyForSelectedCheckBox"));

        _11->addWidget(mMarkersOnlyForSelectedCheckBox, 0, 0, 1, 3);


        verticalLayout_31->addWidget(mVertexMarkerGroupBox);

        groupBox_21 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        gridLayout = new QGridLayout(groupBox_21);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_25 = new QLabel(groupBox_21);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout->addWidget(label_25, 3, 0, 1, 1);

        label_27 = new QLabel(groupBox_21);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout->addWidget(label_27, 1, 0, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_29, 0, 1, 1, 1);

        mCurveOffsetMiterLimitComboBox = new QgsDoubleSpinBox(groupBox_21);
        mCurveOffsetMiterLimitComboBox->setObjectName(QString::fromUtf8("mCurveOffsetMiterLimitComboBox"));

        gridLayout->addWidget(mCurveOffsetMiterLimitComboBox, 2, 2, 1, 1);

        label_28 = new QLabel(groupBox_21);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout->addWidget(label_28, 2, 0, 1, 1);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_31, 2, 1, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_30, 1, 1, 1, 1);

        mOffsetQuadSegSpinBox = new QgsSpinBox(groupBox_21);
        mOffsetQuadSegSpinBox->setObjectName(QString::fromUtf8("mOffsetQuadSegSpinBox"));

        gridLayout->addWidget(mOffsetQuadSegSpinBox, 1, 2, 1, 1);

        label_26 = new QLabel(groupBox_21);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout->addWidget(label_26, 0, 0, 1, 1);

        mOffsetJoinStyleComboBox = new QComboBox(groupBox_21);
        mOffsetJoinStyleComboBox->setObjectName(QString::fromUtf8("mOffsetJoinStyleComboBox"));
        sizePolicy4.setHeightForWidth(mOffsetJoinStyleComboBox->sizePolicy().hasHeightForWidth());
        mOffsetJoinStyleComboBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(mOffsetJoinStyleComboBox, 0, 2, 1, 1);

        mOffsetCapStyleComboBox = new QComboBox(groupBox_21);
        mOffsetCapStyleComboBox->setObjectName(QString::fromUtf8("mOffsetCapStyleComboBox"));

        gridLayout->addWidget(mOffsetCapStyleComboBox, 3, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 1, 1, 1);


        verticalLayout_31->addWidget(groupBox_21);

        groupBox_30 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        groupBox_30->setObjectName(QString::fromUtf8("groupBox_30"));
        gridLayout1 = new QGridLayout(groupBox_30);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        mTracingConvertToCurveCheckBox = new QCheckBox(groupBox_30);
        mTracingConvertToCurveCheckBox->setObjectName(QString::fromUtf8("mTracingConvertToCurveCheckBox"));

        gridLayout1->addWidget(mTracingConvertToCurveCheckBox, 0, 0, 1, 3);

        label_44 = new QLabel(groupBox_30);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout1->addWidget(label_44, 1, 0, 1, 1);

        label_70 = new QLabel(groupBox_30);
        label_70->setObjectName(QString::fromUtf8("label_70"));

        gridLayout1->addWidget(label_70, 2, 0, 1, 1);

        mTracingCustomAngleToleranceSpinBox = new QgsDoubleSpinBox(groupBox_30);
        mTracingCustomAngleToleranceSpinBox->setObjectName(QString::fromUtf8("mTracingCustomAngleToleranceSpinBox"));
        mTracingCustomAngleToleranceSpinBox->setDecimals(10);
        mTracingCustomAngleToleranceSpinBox->setMaximum(9999.000000000000000);

        gridLayout1->addWidget(mTracingCustomAngleToleranceSpinBox, 1, 2, 1, 1);

        mTracingCustomDistanceToleranceSpinBox = new QgsDoubleSpinBox(groupBox_30);
        mTracingCustomDistanceToleranceSpinBox->setObjectName(QString::fromUtf8("mTracingCustomDistanceToleranceSpinBox"));
        mTracingCustomDistanceToleranceSpinBox->setDecimals(10);
        mTracingCustomDistanceToleranceSpinBox->setMaximum(9999.000000000000000);

        gridLayout1->addWidget(mTracingCustomDistanceToleranceSpinBox, 2, 2, 1, 1);


        verticalLayout_31->addWidget(groupBox_30);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_4);

        mOptionsScrollArea_07->setWidget(mOptionsScrollAreaContents_07);

        verticalLayout_17->addWidget(mOptionsScrollArea_07);

        mOptionsStackedWidget->addWidget(mOptionsPageDigitizing);
        mOptionsPageColors = new QWidget();
        mOptionsPageColors->setObjectName(QString::fromUtf8("mOptionsPageColors"));
        verticalLayout_38 = new QVBoxLayout(mOptionsPageColors);
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setContentsMargins(11, 11, 11, 11);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        verticalLayout_38->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mOptionsPageColors);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 147, 251));
        horizontalLayout_46 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        horizontalLayout_46->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_12, 7, 1, 1, 1);

        mButtonImportColors = new QToolButton(groupBox_7);
        mButtonImportColors->setObjectName(QString::fromUtf8("mButtonImportColors"));
        mButtonImportColors->setIcon(icon);

        gridLayout_12->addWidget(mButtonImportColors, 5, 1, 1, 1);

        mTreeCustomColors = new QgsColorSchemeList(groupBox_7);
        mTreeCustomColors->setObjectName(QString::fromUtf8("mTreeCustomColors"));
        mTreeCustomColors->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(mTreeCustomColors, 1, 0, 8, 1);

        mButtonPasteColors = new QToolButton(groupBox_7);
        mButtonPasteColors->setObjectName(QString::fromUtf8("mButtonPasteColors"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionEditPaste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonPasteColors->setIcon(icon7);

        gridLayout_12->addWidget(mButtonPasteColors, 4, 1, 1, 1);

        mButtonAddColor = new QToolButton(groupBox_7);
        mButtonAddColor->setObjectName(QString::fromUtf8("mButtonAddColor"));
        mButtonAddColor->setIcon(icon2);

        gridLayout_12->addWidget(mButtonAddColor, 1, 1, 1, 1);

        mButtonRemoveColor = new QToolButton(groupBox_7);
        mButtonRemoveColor->setObjectName(QString::fromUtf8("mButtonRemoveColor"));
        mButtonRemoveColor->setIcon(icon3);

        gridLayout_12->addWidget(mButtonRemoveColor, 2, 1, 1, 1);

        mButtonCopyColors = new QToolButton(groupBox_7);
        mButtonCopyColors->setObjectName(QString::fromUtf8("mButtonCopyColors"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonCopyColors->setIcon(icon8);

        gridLayout_12->addWidget(mButtonCopyColors, 3, 1, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        mColorSchemesComboBox = new QComboBox(groupBox_7);
        mColorSchemesComboBox->setObjectName(QString::fromUtf8("mColorSchemesComboBox"));

        horizontalLayout_22->addWidget(mColorSchemesComboBox);


        gridLayout_12->addLayout(horizontalLayout_22, 0, 0, 1, 1);

        mButtonExportColors = new QToolButton(groupBox_7);
        mButtonExportColors->setObjectName(QString::fromUtf8("mButtonExportColors"));
        mButtonExportColors->setIcon(icon6);

        gridLayout_12->addWidget(mButtonExportColors, 6, 1, 1, 1);

        mSchemeToolButton = new QToolButton(groupBox_7);
        mSchemeToolButton->setObjectName(QString::fromUtf8("mSchemeToolButton"));
        mSchemeToolButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout_12->addWidget(mSchemeToolButton, 0, 1, 1, 1);


        horizontalLayout_46->addWidget(groupBox_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_38->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptionsPageColors);
        mOptionsPageComposer = new QWidget();
        mOptionsPageComposer->setObjectName(QString::fromUtf8("mOptionsPageComposer"));
        verticalLayout_36 = new QVBoxLayout(mOptionsPageComposer);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_12 = new QgsScrollArea(mOptionsPageComposer);
        mOptionsScrollArea_12->setObjectName(QString::fromUtf8("mOptionsScrollArea_12"));
        mOptionsScrollArea_12->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_12->setWidgetResizable(true);
        mOptionsScrollAreaContents_12 = new QWidget();
        mOptionsScrollAreaContents_12->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_12"));
        mOptionsScrollAreaContents_12->setGeometry(QRect(0, 0, 476, 542));
        verticalLayout_39 = new QVBoxLayout(mOptionsScrollAreaContents_12);
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setContentsMargins(11, 11, 11, 11);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        verticalLayout_39->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(true);
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_60 = new QLabel(groupBox_3);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        horizontalLayout_39->addWidget(label_60);

        mComposerFontComboBox = new QFontComboBox(groupBox_3);
        mComposerFontComboBox->setObjectName(QString::fromUtf8("mComposerFontComboBox"));

        horizontalLayout_39->addWidget(mComposerFontComboBox);


        gridLayout_8->addLayout(horizontalLayout_39, 1, 0, 1, 1);


        verticalLayout_39->addWidget(groupBox_3);

        groupBox_23 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_23->setObjectName(QString::fromUtf8("groupBox_23"));
        gridLayout_9 = new QGridLayout(groupBox_23);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_66 = new QLabel(groupBox_23);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        gridLayout_9->addWidget(label_66, 0, 0, 1, 1);

        mGridStyleComboBox = new QComboBox(groupBox_23);
        mGridStyleComboBox->setObjectName(QString::fromUtf8("mGridStyleComboBox"));

        gridLayout_9->addWidget(mGridStyleComboBox, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_23);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_9->addWidget(label_4, 0, 3, 1, 1);

        mGridColorButton = new QgsColorButton(groupBox_23);
        mGridColorButton->setObjectName(QString::fromUtf8("mGridColorButton"));
        mGridColorButton->setMinimumSize(QSize(120, 0));
        mGridColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_9->addWidget(mGridColorButton, 0, 4, 1, 1);


        verticalLayout_39->addWidget(groupBox_23);

        groupBox_24 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_24->setObjectName(QString::fromUtf8("groupBox_24"));
        gridLayout_11 = new QGridLayout(groupBox_24);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_61 = new QLabel(groupBox_24);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        gridLayout_11->addWidget(label_61, 0, 0, 1, 1);

        mGridResolutionSpinBox = new QgsDoubleSpinBox(groupBox_24);
        mGridResolutionSpinBox->setObjectName(QString::fromUtf8("mGridResolutionSpinBox"));
        mGridResolutionSpinBox->setMinimum(0.500000000000000);
        mGridResolutionSpinBox->setMaximum(9999.000000000000000);

        gridLayout_11->addWidget(mGridResolutionSpinBox, 0, 1, 1, 1);

        label_63 = new QLabel(groupBox_24);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setWordWrap(true);

        gridLayout_11->addWidget(label_63, 0, 2, 1, 1);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        mOffsetXSpinBox = new QgsDoubleSpinBox(groupBox_24);
        mOffsetXSpinBox->setObjectName(QString::fromUtf8("mOffsetXSpinBox"));
        mOffsetXSpinBox->setMaximum(9999.000000000000000);

        horizontalLayout_36->addWidget(mOffsetXSpinBox);

        mOffsetYSpinBox = new QgsDoubleSpinBox(groupBox_24);
        mOffsetYSpinBox->setObjectName(QString::fromUtf8("mOffsetYSpinBox"));

        horizontalLayout_36->addWidget(mOffsetYSpinBox);


        gridLayout_11->addLayout(horizontalLayout_36, 0, 3, 1, 1);

        label_62 = new QLabel(groupBox_24);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        gridLayout_11->addWidget(label_62, 1, 0, 1, 1);

        mSnapToleranceSpinBox = new QgsSpinBox(groupBox_24);
        mSnapToleranceSpinBox->setObjectName(QString::fromUtf8("mSnapToleranceSpinBox"));
        mSnapToleranceSpinBox->setMaximum(200);

        gridLayout_11->addWidget(mSnapToleranceSpinBox, 1, 1, 1, 1);


        verticalLayout_39->addWidget(groupBox_24);

        groupBox_27 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_27->setObjectName(QString::fromUtf8("groupBox_27"));
        _7 = new QGridLayout(groupBox_27);
        _7->setSpacing(6);
        _7->setContentsMargins(11, 11, 11, 11);
        _7->setObjectName(QString::fromUtf8("_7"));
        mSVGLabel_3 = new QLabel(groupBox_27);
        mSVGLabel_3->setObjectName(QString::fromUtf8("mSVGLabel_3"));

        _7->addWidget(mSVGLabel_3, 0, 0, 1, 1);

        spacerItem10 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _7->addItem(spacerItem10, 0, 1, 1, 1);

        mBtnAddTemplatePath = new QToolButton(groupBox_27);
        mBtnAddTemplatePath->setObjectName(QString::fromUtf8("mBtnAddTemplatePath"));
        mBtnAddTemplatePath->setIcon(icon2);

        _7->addWidget(mBtnAddTemplatePath, 0, 2, 1, 1);

        mBtnRemoveTemplatePath = new QToolButton(groupBox_27);
        mBtnRemoveTemplatePath->setObjectName(QString::fromUtf8("mBtnRemoveTemplatePath"));
        mBtnRemoveTemplatePath->setIcon(icon3);

        _7->addWidget(mBtnRemoveTemplatePath, 0, 3, 1, 1);

        mListComposerTemplatePaths = new QListWidget(groupBox_27);
        mListComposerTemplatePaths->setObjectName(QString::fromUtf8("mListComposerTemplatePaths"));
        mListComposerTemplatePaths->setMinimumSize(QSize(0, 120));

        _7->addWidget(mListComposerTemplatePaths, 1, 0, 1, 4);


        verticalLayout_39->addWidget(groupBox_27);

        verticalSpacer_10 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_39->addItem(verticalSpacer_10);

        mOptionsScrollArea_12->setWidget(mOptionsScrollAreaContents_12);

        verticalLayout_36->addWidget(mOptionsScrollArea_12);

        mOptionsStackedWidget->addWidget(mOptionsPageComposer);
        mOptionsPageVariables = new QWidget();
        mOptionsPageVariables->setObjectName(QString::fromUtf8("mOptionsPageVariables"));
        verticalLayout_40 = new QVBoxLayout(mOptionsPageVariables);
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setContentsMargins(11, 11, 11, 11);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        groupBox_25 = new QGroupBox(mOptionsPageVariables);
        groupBox_25->setObjectName(QString::fromUtf8("groupBox_25"));
        verticalLayout_41 = new QVBoxLayout(groupBox_25);
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setContentsMargins(11, 11, 11, 11);
        verticalLayout_41->setObjectName(QString::fromUtf8("verticalLayout_41"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_25);
        mVariableEditor->setObjectName(QString::fromUtf8("mVariableEditor"));
        mVariableEditor->setProperty("settingGroup", QVariant(QString::fromUtf8("globalOptions")));

        verticalLayout_41->addWidget(mVariableEditor);


        verticalLayout_40->addWidget(groupBox_25);

        mOptionsStackedWidget->addWidget(mOptionsPageVariables);
        mOptionsPageAuth = new QWidget();
        mOptionsPageAuth->setObjectName(QString::fromUtf8("mOptionsPageAuth"));
        verticalLayout_45 = new QVBoxLayout(mOptionsPageAuth);
        verticalLayout_45->setSpacing(6);
        verticalLayout_45->setContentsMargins(11, 11, 11, 11);
        verticalLayout_45->setObjectName(QString::fromUtf8("verticalLayout_45"));
        verticalLayout_45->setContentsMargins(0, 0, 0, 0);
        mAuthConfigsGrpBx = new QgsAuthEditorWidgets(mOptionsPageAuth);
        mAuthConfigsGrpBx->setObjectName(QString::fromUtf8("mAuthConfigsGrpBx"));

        verticalLayout_45->addWidget(mAuthConfigsGrpBx);

        mOptionsStackedWidget->addWidget(mOptionsPageAuth);
        mOptionsPageNetwork = new QWidget();
        mOptionsPageNetwork->setObjectName(QString::fromUtf8("mOptionsPageNetwork"));
        verticalLayout_20 = new QVBoxLayout(mOptionsPageNetwork);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mOptionsScrollArea_10 = new QgsScrollArea(mOptionsPageNetwork);
        mOptionsScrollArea_10->setObjectName(QString::fromUtf8("mOptionsScrollArea_10"));
        mOptionsScrollArea_10->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_10->setWidgetResizable(true);
        mOptionsScrollAreaContents_10 = new QWidget();
        mOptionsScrollAreaContents_10->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_10"));
        mOptionsScrollAreaContents_10->setGeometry(QRect(0, 0, 657, 669));
        verticalLayout_33 = new QVBoxLayout(mOptionsScrollAreaContents_10);
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setContentsMargins(11, 11, 11, 11);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        groupBox_20 = new QGroupBox(mOptionsScrollAreaContents_10);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        verticalLayout_34 = new QVBoxLayout(groupBox_20);
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setContentsMargins(11, 11, 11, 11);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mNetworkTimeoutLabel = new QLabel(groupBox_20);
        mNetworkTimeoutLabel->setObjectName(QString::fromUtf8("mNetworkTimeoutLabel"));

        horizontalLayout_11->addWidget(mNetworkTimeoutLabel);

        mNetworkTimeoutSpinBox = new QgsSpinBox(groupBox_20);
        mNetworkTimeoutSpinBox->setObjectName(QString::fromUtf8("mNetworkTimeoutSpinBox"));
        mNetworkTimeoutSpinBox->setMaximum(100000000);

        horizontalLayout_11->addWidget(mNetworkTimeoutSpinBox);


        verticalLayout_34->addLayout(horizontalLayout_11);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        label_45 = new QLabel(groupBox_20);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        horizontalLayout_40->addWidget(label_45);

        mDefaultCapabilitiesExpirySpinBox = new QgsSpinBox(groupBox_20);
        mDefaultCapabilitiesExpirySpinBox->setObjectName(QString::fromUtf8("mDefaultCapabilitiesExpirySpinBox"));
        mDefaultCapabilitiesExpirySpinBox->setMaximum(100000000);

        horizontalLayout_40->addWidget(mDefaultCapabilitiesExpirySpinBox);


        verticalLayout_34->addLayout(horizontalLayout_40);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_32 = new QLabel(groupBox_20);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_17->addWidget(label_32);

        mDefaultTileExpirySpinBox = new QgsSpinBox(groupBox_20);
        mDefaultTileExpirySpinBox->setObjectName(QString::fromUtf8("mDefaultTileExpirySpinBox"));
        mDefaultTileExpirySpinBox->setMaximum(100000000);

        horizontalLayout_17->addWidget(mDefaultTileExpirySpinBox);


        verticalLayout_34->addLayout(horizontalLayout_17);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        label_57 = new QLabel(groupBox_20);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        horizontalLayout_33->addWidget(label_57);

        mDefaultTileMaxRetrySpinBox = new QgsSpinBox(groupBox_20);
        mDefaultTileMaxRetrySpinBox->setObjectName(QString::fromUtf8("mDefaultTileMaxRetrySpinBox"));
        mDefaultTileMaxRetrySpinBox->setMaximum(100000000);

        horizontalLayout_33->addWidget(mDefaultTileMaxRetrySpinBox);


        verticalLayout_34->addLayout(horizontalLayout_33);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        lblUserAgent = new QLabel(groupBox_20);
        lblUserAgent->setObjectName(QString::fromUtf8("lblUserAgent"));

        horizontalLayout_35->addWidget(lblUserAgent);

        leUserAgent = new QLineEdit(groupBox_20);
        leUserAgent->setObjectName(QString::fromUtf8("leUserAgent"));

        horizontalLayout_35->addWidget(leUserAgent);


        verticalLayout_34->addLayout(horizontalLayout_35);


        verticalLayout_33->addWidget(groupBox_20);

        grpCache = new QGroupBox(mOptionsScrollAreaContents_10);
        grpCache->setObjectName(QString::fromUtf8("grpCache"));
        verticalLayout_19 = new QVBoxLayout(grpCache);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        tabContentCache = new QTabWidget(grpCache);
        tabContentCache->setObjectName(QString::fromUtf8("tabContentCache"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        mCacheDirectory = new QLineEdit(tab);
        mCacheDirectory->setObjectName(QString::fromUtf8("mCacheDirectory"));

        gridLayout_2->addWidget(mCacheDirectory, 0, 1, 1, 1);

        mCacheSize = new QgsSpinBox(tab);
        mCacheSize->setObjectName(QString::fromUtf8("mCacheSize"));
        mCacheSize->setMinimum(0);
        mCacheSize->setMaximum(10000);
        mCacheSize->setSingleStep(100);
        mCacheSize->setShowClearButton(true);
        mCacheSize->setClearValue(false);

        gridLayout_2->addWidget(mCacheSize, 4, 1, 1, 1);

        mBrowseCacheDirectory = new QToolButton(tab);
        mBrowseCacheDirectory->setObjectName(QString::fromUtf8("mBrowseCacheDirectory"));
        mBrowseCacheDirectory->setIcon(icon);

        gridLayout_2->addWidget(mBrowseCacheDirectory, 0, 2, 1, 1);

        mClearCache = new QToolButton(tab);
        mClearCache->setObjectName(QString::fromUtf8("mClearCache"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mClearCache->setIcon(icon9);

        gridLayout_2->addWidget(mClearCache, 4, 2, 1, 1);

        tabContentCache->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mAutoClearAccessCache = new QCheckBox(tab_2);
        mAutoClearAccessCache->setObjectName(QString::fromUtf8("mAutoClearAccessCache"));

        gridLayout_5->addWidget(mAutoClearAccessCache, 0, 0, 1, 1);

        mClearAccessCache = new QPushButton(tab_2);
        mClearAccessCache->setObjectName(QString::fromUtf8("mClearAccessCache"));

        gridLayout_5->addWidget(mClearAccessCache, 1, 0, 1, 1);

        tabContentCache->addTab(tab_2, QString());

        verticalLayout_19->addWidget(tabContentCache);


        verticalLayout_33->addWidget(grpCache);

        grpProxy = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_10);
        grpProxy->setObjectName(QString::fromUtf8("grpProxy"));
        grpProxy->setFlat(false);
        grpProxy->setCheckable(true);
        grpProxy->setCollapsed(false);
        grpProxy->setSaveCollapsedState(true);
        gridLayout_1 = new QGridLayout(grpProxy);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(11, 11, 11, 11);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        label_47 = new QLabel(grpProxy);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_1->addWidget(label_47, 1, 0, 1, 1);

        mRemoveUrlPushButton = new QToolButton(grpProxy);
        mRemoveUrlPushButton->setObjectName(QString::fromUtf8("mRemoveUrlPushButton"));
        mRemoveUrlPushButton->setIcon(icon3);

        gridLayout_1->addWidget(mRemoveUrlPushButton, 1, 4, 1, 1);

        mAddUrlPushButton = new QToolButton(grpProxy);
        mAddUrlPushButton->setObjectName(QString::fromUtf8("mAddUrlPushButton"));
        mAddUrlPushButton->setIcon(icon2);

        gridLayout_1->addWidget(mAddUrlPushButton, 1, 3, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        mProxyTypeComboBox = new QComboBox(grpProxy);
        mProxyTypeComboBox->setObjectName(QString::fromUtf8("mProxyTypeComboBox"));

        gridLayout_17->addWidget(mProxyTypeComboBox, 0, 1, 1, 1);

        mTypeLabel = new QLabel(grpProxy);
        mTypeLabel->setObjectName(QString::fromUtf8("mTypeLabel"));
        sizePolicy3.setHeightForWidth(mTypeLabel->sizePolicy().hasHeightForWidth());
        mTypeLabel->setSizePolicy(sizePolicy3);

        gridLayout_17->addWidget(mTypeLabel, 0, 0, 1, 1);

        label_41 = new QLabel(grpProxy);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setStyleSheet(QString::fromUtf8("QLabel {color: rgb(120, 120, 120);}"));

        gridLayout_17->addWidget(label_41, 0, 2, 1, 1);

        frameManualProxy = new QFrame(grpProxy);
        frameManualProxy->setObjectName(QString::fromUtf8("frameManualProxy"));
        frameManualProxy->setFrameShape(QFrame::NoFrame);
        frameManualProxy->setFrameShadow(QFrame::Raised);
        gridLayout_18 = new QGridLayout(frameManualProxy);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        leProxyPort = new QLineEdit(frameManualProxy);
        leProxyPort->setObjectName(QString::fromUtf8("leProxyPort"));

        gridLayout_18->addWidget(leProxyPort, 2, 2, 1, 1);

        lblProxyPort = new QLabel(frameManualProxy);
        lblProxyPort->setObjectName(QString::fromUtf8("lblProxyPort"));

        gridLayout_18->addWidget(lblProxyPort, 2, 1, 1, 1);

        leProxyHost = new QLineEdit(frameManualProxy);
        leProxyHost->setObjectName(QString::fromUtf8("leProxyHost"));

        gridLayout_18->addWidget(leProxyHost, 1, 2, 1, 1);

        lblProxyHost = new QLabel(frameManualProxy);
        lblProxyHost->setObjectName(QString::fromUtf8("lblProxyHost"));

        gridLayout_18->addWidget(lblProxyHost, 1, 1, 1, 1);

        mAuthGroupBox = new QGroupBox(frameManualProxy);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_23 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));

        verticalLayout_23->addWidget(mAuthSettings);


        gridLayout_18->addWidget(mAuthGroupBox, 3, 1, 1, 2);


        gridLayout_17->addWidget(frameManualProxy, 1, 0, 1, 3);


        gridLayout_1->addLayout(gridLayout_17, 0, 0, 1, 5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_1->addItem(horizontalSpacer, 1, 1, 1, 2);

        mNoProxyUrlListWidget = new QListWidget(grpProxy);
        mNoProxyUrlListWidget->setObjectName(QString::fromUtf8("mNoProxyUrlListWidget"));

        gridLayout_1->addWidget(mNoProxyUrlListWidget, 2, 0, 1, 5);


        verticalLayout_33->addWidget(grpProxy);

        verticalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_33->addItem(verticalSpacer_9);

        mOptionsScrollArea_10->setWidget(mOptionsScrollAreaContents_10);

        verticalLayout_20->addWidget(mOptionsScrollArea_10);

        mOptionsStackedWidget->addWidget(mOptionsPageNetwork);
        mOptionsLocatorSettings = new QWidget();
        mOptionsLocatorSettings->setObjectName(QString::fromUtf8("mOptionsLocatorSettings"));
        horizontalLayout_6 = new QHBoxLayout(mOptionsLocatorSettings);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        mOptionsLocatorGroupBox = new QGroupBox(mOptionsLocatorSettings);
        mOptionsLocatorGroupBox->setObjectName(QString::fromUtf8("mOptionsLocatorGroupBox"));

        horizontalLayout_6->addWidget(mOptionsLocatorGroupBox);

        mOptionsStackedWidget->addWidget(mOptionsLocatorSettings);
        mOptionsPageAcceleration = new QWidget();
        mOptionsPageAcceleration->setObjectName(QString::fromUtf8("mOptionsPageAcceleration"));
        mOptionsPageAccelerationLayout = new QVBoxLayout(mOptionsPageAcceleration);
        mOptionsPageAccelerationLayout->setSpacing(6);
        mOptionsPageAccelerationLayout->setContentsMargins(11, 11, 11, 11);
        mOptionsPageAccelerationLayout->setObjectName(QString::fromUtf8("mOptionsPageAccelerationLayout"));
        mOptionsPageAccelerationLayout->setContentsMargins(0, 0, 0, 0);
        label_53 = new QLabel(mOptionsPageAcceleration);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setWordWrap(true);

        mOptionsPageAccelerationLayout->addWidget(label_53);

        mGPUEnableCheckBox = new QCheckBox(mOptionsPageAcceleration);
        mGPUEnableCheckBox->setObjectName(QString::fromUtf8("mGPUEnableCheckBox"));

        mOptionsPageAccelerationLayout->addWidget(mGPUEnableCheckBox);

        mOpenClContainerWidget = new QWidget(mOptionsPageAcceleration);
        mOpenClContainerWidget->setObjectName(QString::fromUtf8("mOpenClContainerWidget"));
        verticalLayout_32 = new QVBoxLayout(mOpenClContainerWidget);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        label_64 = new QLabel(mOpenClContainerWidget);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setWordWrap(true);

        verticalLayout_32->addWidget(label_64);

        mOpenClDevicesCombo = new QComboBox(mOpenClContainerWidget);
        mOpenClDevicesCombo->setObjectName(QString::fromUtf8("mOpenClDevicesCombo"));

        verticalLayout_32->addWidget(mOpenClDevicesCombo);

        mGPUInfoTextBrowser = new QTextBrowser(mOpenClContainerWidget);
        mGPUInfoTextBrowser->setObjectName(QString::fromUtf8("mGPUInfoTextBrowser"));

        verticalLayout_32->addWidget(mGPUInfoTextBrowser);


        mOptionsPageAccelerationLayout->addWidget(mOpenClContainerWidget);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mOptionsPageAccelerationLayout->addItem(verticalSpacer_2);

        mOptionsStackedWidget->addWidget(mOptionsPageAcceleration);

        verticalLayout->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout_5->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsOptionsBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        sizePolicy5.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy5);
        mButtonBoxFrame->setMinimumSize(QSize(0, 0));
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_5->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsTreeView);
        QWidget::setTabOrder(mOptionsTreeView, mOptionsScrollArea_01);
        QWidget::setTabOrder(mOptionsScrollArea_01, grpLocale);
        QWidget::setTabOrder(grpLocale, cboTranslation);
        QWidget::setTabOrder(cboTranslation, cboGlobalLocale);
        QWidget::setTabOrder(cboGlobalLocale, cbShowGroupSeparator);
        QWidget::setTabOrder(cbShowGroupSeparator, cmbStyle);
        QWidget::setTabOrder(cmbStyle, cmbUITheme);
        QWidget::setTabOrder(cmbUITheme, cmbIconSize);
        QWidget::setTabOrder(cmbIconSize, mFontFamilyRadioQt);
        QWidget::setTabOrder(mFontFamilyRadioQt, mFontFamilyRadioCustom);
        QWidget::setTabOrder(mFontFamilyRadioCustom, mFontFamilyComboBox);
        QWidget::setTabOrder(mFontFamilyComboBox, spinFontSize);
        QWidget::setTabOrder(spinFontSize, mMessageTimeoutSpnBx);
        QWidget::setTabOrder(mMessageTimeoutSpnBx, cbxHideSplash);
        QWidget::setTabOrder(cbxHideSplash, cbxShowNews);
        QWidget::setTabOrder(cbxShowNews, cbxCheckVersion);
        QWidget::setTabOrder(cbxCheckVersion, mNativeColorDialogsChkBx);
        QWidget::setTabOrder(mNativeColorDialogsChkBx, mProjectOnLaunchCmbBx);
        QWidget::setTabOrder(mProjectOnLaunchCmbBx, mProjectOnLaunchLineEdit);
        QWidget::setTabOrder(mProjectOnLaunchLineEdit, mProjectOnLaunchPushBtn);
        QWidget::setTabOrder(mProjectOnLaunchPushBtn, cbxProjectDefaultNew);
        QWidget::setTabOrder(cbxProjectDefaultNew, pbnProjectDefaultSetCurrent);
        QWidget::setTabOrder(pbnProjectDefaultSetCurrent, pbnProjectDefaultReset);
        QWidget::setTabOrder(pbnProjectDefaultReset, pbnTemplateFolderBrowse);
        QWidget::setTabOrder(pbnTemplateFolderBrowse, pbnTemplateFolderReset);
        QWidget::setTabOrder(pbnTemplateFolderReset, leTemplateFolder);
        QWidget::setTabOrder(leTemplateFolder, chbAskToSaveProjectChanges);
        QWidget::setTabOrder(chbAskToSaveProjectChanges, mLayerDeleteConfirmationChkBx);
        QWidget::setTabOrder(mLayerDeleteConfirmationChkBx, chbWarnOldProjectVersion);
        QWidget::setTabOrder(chbWarnOldProjectVersion, mEnableMacrosComboBox);
        QWidget::setTabOrder(mEnableMacrosComboBox, mDefaultPathsComboBox);
        QWidget::setTabOrder(mDefaultPathsComboBox, mFileFormatQgzButton);
        QWidget::setTabOrder(mFileFormatQgzButton, mFileFormatQgsButton);
        QWidget::setTabOrder(mFileFormatQgsButton, mOptionsScrollArea_03);
        QWidget::setTabOrder(mOptionsScrollArea_03, mBtnAddSVGPath);
        QWidget::setTabOrder(mBtnAddSVGPath, mBtnRemoveSVGPath);
        QWidget::setTabOrder(mBtnRemoveSVGPath, mListSVGPaths);
        QWidget::setTabOrder(mListSVGPaths, mBtnAddPluginPath);
        QWidget::setTabOrder(mBtnAddPluginPath, mBtnRemovePluginPath);
        QWidget::setTabOrder(mBtnRemovePluginPath, mListPluginPaths);
        QWidget::setTabOrder(mListPluginPaths, mBtnAddHelpPath);
        QWidget::setTabOrder(mBtnAddHelpPath, mBtnRemoveHelpPath);
        QWidget::setTabOrder(mBtnRemoveHelpPath, mBtnMoveHelpUp);
        QWidget::setTabOrder(mBtnMoveHelpUp, mBtnMoveHelpDown);
        QWidget::setTabOrder(mBtnMoveHelpDown, mHelpPathTreeWidget);
        QWidget::setTabOrder(mHelpPathTreeWidget, mRestoreDefaultWindowStateBtn);
        QWidget::setTabOrder(mRestoreDefaultWindowStateBtn, mCustomVariablesChkBx);
        QWidget::setTabOrder(mCustomVariablesChkBx, mAddCustomVarBtn);
        QWidget::setTabOrder(mAddCustomVarBtn, mRemoveCustomVarBtn);
        QWidget::setTabOrder(mRemoveCustomVarBtn, mCustomVariablesTable);
        QWidget::setTabOrder(mCustomVariablesTable, mCurrentVariablesTable);
        QWidget::setTabOrder(mCurrentVariablesTable, mCurrentVariablesQGISChxBx);
        QWidget::setTabOrder(mCurrentVariablesQGISChxBx, mOptionsScrollArea_08);
        QWidget::setTabOrder(mOptionsScrollArea_08, radProjectUseCrsOfFirstLayer);
        QWidget::setTabOrder(radProjectUseCrsOfFirstLayer, radProjectUseDefaultCrs);
        QWidget::setTabOrder(radProjectUseDefaultCrs, leProjectGlobalCrs);
        QWidget::setTabOrder(leProjectGlobalCrs, leLayerGlobalCrs);
        QWidget::setTabOrder(leLayerGlobalCrs, radCrsNoAction);
        QWidget::setTabOrder(radCrsNoAction, radPromptForProjection);
        QWidget::setTabOrder(radPromptForProjection, radUseProjectProjection);
        QWidget::setTabOrder(radUseProjectProjection, radUseGlobalProjection);
        QWidget::setTabOrder(radUseGlobalProjection, mCrsAccuracySpin);
        QWidget::setTabOrder(mCrsAccuracySpin, mCrsAccuracyIndicatorCheck);
        QWidget::setTabOrder(mCrsAccuracyIndicatorCheck, mPlanimetricMeasurementsComboBox);
        QWidget::setTabOrder(mPlanimetricMeasurementsComboBox, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mShowDatumTransformDialogCheckBox);
        QWidget::setTabOrder(mShowDatumTransformDialogCheckBox, mOptionsScrollArea_11);
        QWidget::setTabOrder(mOptionsScrollArea_11, cbxAttributeTableDocked);
        QWidget::setTabOrder(cbxAttributeTableDocked, cbxAutosizeAttributeTable);
        QWidget::setTabOrder(cbxAutosizeAttributeTable, mComboCopyFeatureFormat);
        QWidget::setTabOrder(mComboCopyFeatureFormat, cmbAttrTableBehavior);
        QWidget::setTabOrder(cmbAttrTableBehavior, mAttrTableViewComboBox);
        QWidget::setTabOrder(mAttrTableViewComboBox, spinBoxAttrTableRowCache);
        QWidget::setTabOrder(spinBoxAttrTableRowCache, leNullValue);
        QWidget::setTabOrder(leNullValue, cmbScanItemsInBrowser);
        QWidget::setTabOrder(cmbScanItemsInBrowser, cmbScanZipInBrowser);
        QWidget::setTabOrder(cmbScanZipInBrowser, cmbPromptSublayers);
        QWidget::setTabOrder(cmbPromptSublayers, mCheckMonitorDirectories);
        QWidget::setTabOrder(mCheckMonitorDirectories, mLocalizedDataPathAddButton);
        QWidget::setTabOrder(mLocalizedDataPathAddButton, mLocalizedDataPathRemoveButton);
        QWidget::setTabOrder(mLocalizedDataPathRemoveButton, mLocalizedDataPathUpButton);
        QWidget::setTabOrder(mLocalizedDataPathUpButton, mLocalizedDataPathDownButton);
        QWidget::setTabOrder(mLocalizedDataPathDownButton, mLocalizedDataPathListWidget);
        QWidget::setTabOrder(mLocalizedDataPathListWidget, mBtnRemoveHiddenPath);
        QWidget::setTabOrder(mBtnRemoveHiddenPath, mListHiddenBrowserPaths);
        QWidget::setTabOrder(mListHiddenBrowserPaths, tabWidget);
        QWidget::setTabOrder(tabWidget, mOptionsScrollArea_02);
        QWidget::setTabOrder(mOptionsScrollArea_02, cmbEditCreateOptions);
        QWidget::setTabOrder(cmbEditCreateOptions, pbnEditCreateOptions);
        QWidget::setTabOrder(pbnEditCreateOptions, pbnEditPyramidsOptions);
        QWidget::setTabOrder(pbnEditPyramidsOptions, lstRasterDrivers);
        QWidget::setTabOrder(lstRasterDrivers, lstVectorDrivers);
        QWidget::setTabOrder(lstVectorDrivers, mOptionsScrollArea_06);
        QWidget::setTabOrder(mOptionsScrollArea_06, pbnSelectionColor);
        QWidget::setTabOrder(pbnSelectionColor, pbnCanvasColor);
        QWidget::setTabOrder(pbnCanvasColor, cmbLegendDoubleClickAction);
        QWidget::setTabOrder(cmbLegendDoubleClickAction, mLayerTreeInsertionMethod);
        QWidget::setTabOrder(mLayerTreeInsertionMethod, mShowFeatureCountByDefaultCheckBox);
        QWidget::setTabOrder(mShowFeatureCountByDefaultCheckBox, cbxLegendClassifiers);
        QWidget::setTabOrder(cbxLegendClassifiers, mLegendGraphicResolutionSpinBox);
        QWidget::setTabOrder(mLegendGraphicResolutionSpinBox, mLegendSymbolMinimumSizeSpinBox);
        QWidget::setTabOrder(mLegendSymbolMinimumSizeSpinBox, mLegendSymbolMaximumSizeSpinBox);
        QWidget::setTabOrder(mLegendSymbolMaximumSizeSpinBox, mMapTipsDelaySpinBox);
        QWidget::setTabOrder(mMapTipsDelaySpinBox, mRespectScreenDpiCheckBox);
        QWidget::setTabOrder(mRespectScreenDpiCheckBox, mOptionsScrollArea_05);
        QWidget::setTabOrder(mOptionsScrollArea_05, mDecimalPlacesSpinBox);
        QWidget::setTabOrder(mDecimalPlacesSpinBox, mKeepBaseUnitCheckBox);
        QWidget::setTabOrder(mKeepBaseUnitCheckBox, mAngleUnitsComboBox);
        QWidget::setTabOrder(mAngleUnitsComboBox, mDistanceUnitsComboBox);
        QWidget::setTabOrder(mDistanceUnitsComboBox, mAreaUnitsComboBox);
        QWidget::setTabOrder(mAreaUnitsComboBox, mCustomizeCoordinateFormatButton);
        QWidget::setTabOrder(mCustomizeCoordinateFormatButton, mCustomizeBearingFormatButton);
        QWidget::setTabOrder(mCustomizeBearingFormatButton, spinBoxIdentifyValue);
        QWidget::setTabOrder(spinBoxIdentifyValue, mIdentifyHighlightColorButton);
        QWidget::setTabOrder(mIdentifyHighlightColorButton, mIdentifyHighlightBufferSpinBox);
        QWidget::setTabOrder(mIdentifyHighlightBufferSpinBox, mIdentifyHighlightMinWidthSpinBox);
        QWidget::setTabOrder(mIdentifyHighlightMinWidthSpinBox, pbnMeasureColor);
        QWidget::setTabOrder(pbnMeasureColor, mIncludeHeader);
        QWidget::setTabOrder(mIncludeHeader, mAlwaysUseDecimalPoint);
        QWidget::setTabOrder(mAlwaysUseDecimalPoint, mSeparatorComma);
        QWidget::setTabOrder(mSeparatorComma, mSeparatorSemicolon);
        QWidget::setTabOrder(mSeparatorSemicolon, mSeparatorTab);
        QWidget::setTabOrder(mSeparatorTab, mSeparatorColon);
        QWidget::setTabOrder(mSeparatorColon, mSeparatorSpace);
        QWidget::setTabOrder(mSeparatorSpace, mSeparatorOther);
        QWidget::setTabOrder(mSeparatorOther, mSeparatorCustom);
        QWidget::setTabOrder(mSeparatorCustom, spinZoomFactor);
        QWidget::setTabOrder(spinZoomFactor, reverseWheelZoom);
        QWidget::setTabOrder(reverseWheelZoom, mListGlobalScales);
        QWidget::setTabOrder(mListGlobalScales, pbnAddScale);
        QWidget::setTabOrder(pbnAddScale, pbnRemoveScale);
        QWidget::setTabOrder(pbnRemoveScale, pbnDefaultScaleValues);
        QWidget::setTabOrder(pbnDefaultScaleValues, pbnImportScales);
        QWidget::setTabOrder(pbnImportScales, pbnExportScales);
        QWidget::setTabOrder(pbnExportScales, mOptionsScrollArea_07);
        QWidget::setTabOrder(mOptionsScrollArea_07, chkDisableAttributeValuesDlg);
        QWidget::setTabOrder(chkDisableAttributeValuesDlg, chkReuseLastValues);
        QWidget::setTabOrder(chkReuseLastValues, mValidateGeometries);
        QWidget::setTabOrder(mValidateGeometries, mDefaultZValueSpinBox);
        QWidget::setTabOrder(mDefaultZValueSpinBox, mDefaultMValueSpinBox);
        QWidget::setTabOrder(mDefaultMValueSpinBox, mLineWidthSpinBox);
        QWidget::setTabOrder(mLineWidthSpinBox, mLineColorToolButton);
        QWidget::setTabOrder(mLineColorToolButton, mFillColorToolButton);
        QWidget::setTabOrder(mFillColorToolButton, mLineGhostCheckBox);
        QWidget::setTabOrder(mLineGhostCheckBox, mSnappingEnabledDefault);
        QWidget::setTabOrder(mSnappingEnabledDefault, mDefaultSnapTypeComboBox);
        QWidget::setTabOrder(mDefaultSnapTypeComboBox, mDefaultSnappingToleranceSpinBox);
        QWidget::setTabOrder(mDefaultSnappingToleranceSpinBox, mDefaultSnappingToleranceComboBox);
        QWidget::setTabOrder(mDefaultSnappingToleranceComboBox, mSearchRadiusVertexEditSpinBox);
        QWidget::setTabOrder(mSearchRadiusVertexEditSpinBox, mSearchRadiusVertexEditComboBox);
        QWidget::setTabOrder(mSearchRadiusVertexEditComboBox, mSnappingMainDialogComboBox);
        QWidget::setTabOrder(mSnappingMainDialogComboBox, mSnappingMarkerColorButton);
        QWidget::setTabOrder(mSnappingMarkerColorButton, mSnappingTooltipsCheckbox);
        QWidget::setTabOrder(mSnappingTooltipsCheckbox, mEnableSnappingOnInvisibleFeatureCheckbox);
        QWidget::setTabOrder(mEnableSnappingOnInvisibleFeatureCheckbox, mMarkersOnlyForSelectedCheckBox);
        QWidget::setTabOrder(mMarkersOnlyForSelectedCheckBox, mMarkerStyleComboBox);
        QWidget::setTabOrder(mMarkerStyleComboBox, mMarkerSizeSpinBox);
        QWidget::setTabOrder(mMarkerSizeSpinBox, mOffsetJoinStyleComboBox);
        QWidget::setTabOrder(mOffsetJoinStyleComboBox, mOffsetQuadSegSpinBox);
        QWidget::setTabOrder(mOffsetQuadSegSpinBox, mCurveOffsetMiterLimitComboBox);
        QWidget::setTabOrder(mCurveOffsetMiterLimitComboBox, mOffsetCapStyleComboBox);
        QWidget::setTabOrder(mOffsetCapStyleComboBox, mTracingConvertToCurveCheckBox);
        QWidget::setTabOrder(mTracingConvertToCurveCheckBox, mTracingCustomAngleToleranceSpinBox);
        QWidget::setTabOrder(mTracingCustomAngleToleranceSpinBox, mTracingCustomDistanceToleranceSpinBox);
        QWidget::setTabOrder(mTracingCustomDistanceToleranceSpinBox, scrollArea);
        QWidget::setTabOrder(scrollArea, mColorSchemesComboBox);
        QWidget::setTabOrder(mColorSchemesComboBox, mTreeCustomColors);
        QWidget::setTabOrder(mTreeCustomColors, mSchemeToolButton);
        QWidget::setTabOrder(mSchemeToolButton, mButtonAddColor);
        QWidget::setTabOrder(mButtonAddColor, mButtonRemoveColor);
        QWidget::setTabOrder(mButtonRemoveColor, mButtonCopyColors);
        QWidget::setTabOrder(mButtonCopyColors, mButtonPasteColors);
        QWidget::setTabOrder(mButtonPasteColors, mButtonImportColors);
        QWidget::setTabOrder(mButtonImportColors, mButtonExportColors);
        QWidget::setTabOrder(mButtonExportColors, mOptionsScrollArea_12);
        QWidget::setTabOrder(mOptionsScrollArea_12, mComposerFontComboBox);
        QWidget::setTabOrder(mComposerFontComboBox, mGridStyleComboBox);
        QWidget::setTabOrder(mGridStyleComboBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, mGridResolutionSpinBox);
        QWidget::setTabOrder(mGridResolutionSpinBox, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mSnapToleranceSpinBox);
        QWidget::setTabOrder(mSnapToleranceSpinBox, mListComposerTemplatePaths);
        QWidget::setTabOrder(mListComposerTemplatePaths, mBtnAddTemplatePath);
        QWidget::setTabOrder(mBtnAddTemplatePath, mBtnRemoveTemplatePath);
        QWidget::setTabOrder(mBtnRemoveTemplatePath, mAuthConfigsGrpBx);
        QWidget::setTabOrder(mAuthConfigsGrpBx, mOptionsScrollArea_10);
        QWidget::setTabOrder(mOptionsScrollArea_10, mNetworkTimeoutSpinBox);
        QWidget::setTabOrder(mNetworkTimeoutSpinBox, mDefaultCapabilitiesExpirySpinBox);
        QWidget::setTabOrder(mDefaultCapabilitiesExpirySpinBox, mDefaultTileExpirySpinBox);
        QWidget::setTabOrder(mDefaultTileExpirySpinBox, mDefaultTileMaxRetrySpinBox);
        QWidget::setTabOrder(mDefaultTileMaxRetrySpinBox, leUserAgent);
        QWidget::setTabOrder(leUserAgent, tabContentCache);
        QWidget::setTabOrder(tabContentCache, mCacheDirectory);
        QWidget::setTabOrder(mCacheDirectory, mBrowseCacheDirectory);
        QWidget::setTabOrder(mBrowseCacheDirectory, mCacheSize);
        QWidget::setTabOrder(mCacheSize, mClearCache);
        QWidget::setTabOrder(mClearCache, mAutoClearAccessCache);
        QWidget::setTabOrder(mAutoClearAccessCache, mClearAccessCache);
        QWidget::setTabOrder(mClearAccessCache, grpProxy);
        QWidget::setTabOrder(grpProxy, mProxyTypeComboBox);
        QWidget::setTabOrder(mProxyTypeComboBox, leProxyHost);
        QWidget::setTabOrder(leProxyHost, leProxyPort);
        QWidget::setTabOrder(leProxyPort, mAddUrlPushButton);
        QWidget::setTabOrder(mAddUrlPushButton, mRemoveUrlPushButton);
        QWidget::setTabOrder(mRemoveUrlPushButton, mNoProxyUrlListWidget);
        QWidget::setTabOrder(mNoProxyUrlListWidget, mGPUEnableCheckBox);
        QWidget::setTabOrder(mGPUEnableCheckBox, mOpenClDevicesCombo);
        QWidget::setTabOrder(mOpenClDevicesCombo, mGPUInfoTextBrowser);

        retranslateUi(QgsOptionsBase);

        mOptionsStackedWidget->setCurrentIndex(4);
        mEnableMacrosComboBox->setCurrentIndex(-1);
        tabWidget->setCurrentIndex(0);
        tabContentCache->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsOptionsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOptionsBase)
    {
        QgsOptionsBase->setWindowTitle(QCoreApplication::translate("QgsOptionsBase", "Options", nullptr));
        mActionImportPalette->setText(QCoreApplication::translate("QgsOptionsBase", "Import Palette\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionImportPalette->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Import palette from file", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRemovePalette->setText(QCoreApplication::translate("QgsOptionsBase", "Remove Palette", nullptr));
#if QT_CONFIG(tooltip)
        mActionRemovePalette->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove current palette", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionNewPalette->setText(QCoreApplication::translate("QgsOptionsBase", "New Palette\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionNewPalette->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Create a new palette", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionShowInButtons->setText(QCoreApplication::translate("QgsOptionsBase", "Show in Color Buttons", nullptr));
        grpLocale->setTitle(QCoreApplication::translate("QgsOptionsBase", "Override System &Locale", nullptr));
        label_7->setText(QCoreApplication::translate("QgsOptionsBase", "<b>Note:</b> Enabling / changing override on locale requires an application restart", nullptr));
        label_52->setText(QCoreApplication::translate("QgsOptionsBase", "Locale (numbers, date and currency formats)", nullptr));
        label_5->setText(QCoreApplication::translate("QgsOptionsBase", "User interface translation", nullptr));
        cbShowGroupSeparator->setText(QCoreApplication::translate("QgsOptionsBase", "Show group (thousand) separator", nullptr));
#if QT_CONFIG(tooltip)
        lblSystemLocale->setToolTip(QCoreApplication::translate("QgsOptionsBase", "This locale is used for number representation.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSystemLocale->setText(QCoreApplication::translate("QgsOptionsBase", "Detected active locale on your system", nullptr));
        lblLocaleSample->setText(QCoreApplication::translate("QgsOptionsBase", "Sample text for locale formatting", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Application", nullptr));
        label_18->setText(QCoreApplication::translate("QgsOptionsBase", "Style <i>(QGIS restart required)</i>", nullptr));
        lblUITheme->setText(QCoreApplication::translate("QgsOptionsBase", "UI theme", nullptr));
        textLabel1_5->setText(QCoreApplication::translate("QgsOptionsBase", "Icon size", nullptr));
        cmbIconSize->setItemText(0, QCoreApplication::translate("QgsOptionsBase", "16", nullptr));
        cmbIconSize->setItemText(1, QCoreApplication::translate("QgsOptionsBase", "24", nullptr));
        cmbIconSize->setItemText(2, QCoreApplication::translate("QgsOptionsBase", "32", nullptr));
        cmbIconSize->setItemText(3, QCoreApplication::translate("QgsOptionsBase", "48", nullptr));
        cmbIconSize->setItemText(4, QCoreApplication::translate("QgsOptionsBase", "64", nullptr));

        label_43->setText(QCoreApplication::translate("QgsOptionsBase", "Font <i>(QGIS restart required)</i>", nullptr));
        mFontFamilyRadioQt->setText(QCoreApplication::translate("QgsOptionsBase", "&Qt default", nullptr));
        mFontFamilyRadioCustom->setText(QString());
        label_20->setText(QCoreApplication::translate("QgsOptionsBase", "Size", nullptr));
        mMessageTimeoutLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Timeout for timed messages or dialogs", nullptr));
        mMessageTimeoutSpnBx->setSuffix(QCoreApplication::translate("QgsOptionsBase", " s", nullptr));
        cbxCheckVersion->setText(QCoreApplication::translate("QgsOptionsBase", "Check QGIS version at startup", nullptr));
        cbxHideSplash->setText(QCoreApplication::translate("QgsOptionsBase", "Hide splash screen at startup", nullptr));
#if QT_CONFIG(tooltip)
        cbxShowNews->setToolTip(QCoreApplication::translate("QgsOptionsBase", "If checked, QGIS project news is shown on the welcome page on startup", nullptr));
#endif // QT_CONFIG(tooltip)
        cbxShowNews->setText(QCoreApplication::translate("QgsOptionsBase", "Show QGIS news feed on welcome page", nullptr));
        mNativeColorDialogsChkBx->setText(QCoreApplication::translate("QgsOptionsBase", "Use native color chooser dialogs", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("QgsOptionsBase", "Project Files", nullptr));
        mProjectOnLaunchCmbBx->setItemText(0, QCoreApplication::translate("QgsOptionsBase", "Welcome Page", nullptr));
        mProjectOnLaunchCmbBx->setItemText(1, QCoreApplication::translate("QgsOptionsBase", "Most recent", nullptr));
        mProjectOnLaunchCmbBx->setItemText(2, QCoreApplication::translate("QgsOptionsBase", "Specific", nullptr));
        mProjectOnLaunchCmbBx->setItemText(3, QCoreApplication::translate("QgsOptionsBase", "New", nullptr));

#if QT_CONFIG(tooltip)
        mProjectOnLaunchPushBtn->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Select file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        mProjectOnLaunchPushBtn->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        mProjectOnLaunchPushBtn->setText(QString());
        label_54->setText(QCoreApplication::translate("QgsOptionsBase", "Open project on launch", nullptr));
        cbxProjectDefaultNew->setText(QCoreApplication::translate("QgsOptionsBase", "Create new project from default project", nullptr));
        pbnProjectDefaultSetCurrent->setText(QCoreApplication::translate("QgsOptionsBase", "Set Current Project as Default", nullptr));
        pbnProjectDefaultReset->setText(QCoreApplication::translate("QgsOptionsBase", "Reset Default", nullptr));
        label_31->setText(QCoreApplication::translate("QgsOptionsBase", "Template folder", nullptr));
#if QT_CONFIG(tooltip)
        pbnTemplateFolderBrowse->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Select folder", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnTemplateFolderBrowse->setText(QString());
#if QT_CONFIG(tooltip)
        pbnTemplateFolderReset->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Reset", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnTemplateFolderReset->setText(QString());
        chbAskToSaveProjectChanges->setText(QCoreApplication::translate("QgsOptionsBase", "Prompt to save project and data source changes when required", nullptr));
        mLayerDeleteConfirmationChkBx->setText(QCoreApplication::translate("QgsOptionsBase", "Prompt for confirmation when a layer is to be removed", nullptr));
        chbWarnOldProjectVersion->setText(QCoreApplication::translate("QgsOptionsBase", "Warn when opening a project file saved with an older version of QGIS", nullptr));
#if QT_CONFIG(tooltip)
        label_33->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Embedded Python code refers to macros and function expressions", nullptr));
#endif // QT_CONFIG(tooltip)
        label_33->setText(QCoreApplication::translate("QgsOptionsBase", "Enable project's embedded Python code", nullptr));
        mDefaultPathsLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Default paths", nullptr));
        label_67->setText(QCoreApplication::translate("QgsOptionsBase", "Default project file format", nullptr));
        mFileFormatQgzButton->setText(QCoreApplication::translate("QgsOptionsBase", "QGZ Bundled project format", nullptr));
        mFileFormatQgzDescription->setText(QCoreApplication::translate("QgsOptionsBase", "Compressed into a single zip file, embeds auxiliary data", nullptr));
#if QT_CONFIG(tooltip)
        mFileFormatQgsButton->setToolTip(QCoreApplication::translate("QgsOptionsBase", "The auxiliary data will be kept in a separate .qgd data file which must be distributed along with the .qgs project file.", nullptr));
#endif // QT_CONFIG(tooltip)
        mFileFormatQgsButton->setText(QCoreApplication::translate("QgsOptionsBase", "QGS XML project format", nullptr));
        mFileFormatQgsDescription->setText(QCoreApplication::translate("QgsOptionsBase", "Saved in a clear text, does not embed auxiliary data", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsOptionsBase", "SVG Paths", nullptr));
        mSVGLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Path(s) to search for Scalable Vector Graphic (SVG) symbols", nullptr));
#if QT_CONFIG(tooltip)
        mBtnAddSVGPath->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Add new path", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnAddSVGPath->setText(QString());
#if QT_CONFIG(tooltip)
        mBtnRemoveSVGPath->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove path", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnRemoveSVGPath->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("QgsOptionsBase", "Plugin Paths", nullptr));
        mSVGLabel_2->setText(QCoreApplication::translate("QgsOptionsBase", "Path(s) to search for additional C++ plugins libraries", nullptr));
#if QT_CONFIG(tooltip)
        mBtnAddPluginPath->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Add new path", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnAddPluginPath->setText(QString());
#if QT_CONFIG(tooltip)
        mBtnRemovePluginPath->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove path", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnRemovePluginPath->setText(QString());
        groupBox_29->setTitle(QCoreApplication::translate("QgsOptionsBase", "Documentation Paths", nullptr));
#if QT_CONFIG(tooltip)
        mBtnMoveHelpDown->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Lower selected path priority", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnMoveHelpDown->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
        mSVGLabel_5->setText(QCoreApplication::translate("QgsOptionsBase", "Path(s) to search for QGIS help", nullptr));
#if QT_CONFIG(tooltip)
        mBtnAddHelpPath->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Add new path", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnAddHelpPath->setText(QString());
#if QT_CONFIG(tooltip)
        mBtnRemoveHelpPath->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove path", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnRemoveHelpPath->setText(QString());
#if QT_CONFIG(tooltip)
        mBtnMoveHelpUp->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Raise selected path priority", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnMoveHelpUp->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
        mQSettingsGrpBx->setTitle(QCoreApplication::translate("QgsOptionsBase", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        mRestoreDefaultWindowStateBtn->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Reset", nullptr));
#endif // QT_CONFIG(tooltip)
        mRestoreDefaultWindowStateBtn->setText(QString());
        mRestoreDefaultWindowStateLbl->setText(QCoreApplication::translate("QgsOptionsBase", "Reset user interface to default settings (restart required)", nullptr));
        mEnvironmentGrpBx->setTitle(QCoreApplication::translate("QgsOptionsBase", "Environment", nullptr));
#if QT_CONFIG(tooltip)
        mRemoveCustomVarBtn->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove variable", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveCustomVarBtn->setText(QString());
#if QT_CONFIG(tooltip)
        mAddCustomVarBtn->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Add new variable", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddCustomVarBtn->setText(QString());
        mCurrentVariablesGrpBx->setTitle(QCoreApplication::translate("QgsOptionsBase", "Current environment variables (read-only - bold indicates modified at startup)", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mCurrentVariablesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsOptionsBase", "Variable", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mCurrentVariablesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsOptionsBase", "Value", nullptr));
        mCurrentVariablesQGISChxBx->setText(QCoreApplication::translate("QgsOptionsBase", "Show only QGIS-specific variables", nullptr));
        mCustomVariablesChkBx->setText(QCoreApplication::translate("QgsOptionsBase", "Use custom variables (restart required - include separators)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = mCustomVariablesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QgsOptionsBase", "Apply", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = mCustomVariablesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QgsOptionsBase", "Variable", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = mCustomVariablesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QgsOptionsBase", "Value", nullptr));
        grpProjectionBehavior->setTitle(QCoreApplication::translate("QgsOptionsBase", "CRS for Layers", nullptr));
        label_8->setText(QCoreApplication::translate("QgsOptionsBase", "When a new layer is created, or when a layer is loaded that has no CRS", nullptr));
        radUseProjectProjection->setText(QCoreApplication::translate("QgsOptionsBase", "Use pro&ject CRS", nullptr));
        label_16->setText(QCoreApplication::translate("QgsOptionsBase", "Default CRS for layers", nullptr));
        radUseGlobalProjection->setText(QCoreApplication::translate("QgsOptionsBase", "&Use default layer CRS", nullptr));
        radPromptForProjection->setText(QCoreApplication::translate("QgsOptionsBase", "Pro&mpt for CRS", nullptr));
        radCrsNoAction->setText(QCoreApplication::translate("QgsOptionsBase", "Leave as an unknown CRS (take no action)", nullptr));
        mPlanimetricMeasurementsComboBox->setText(QCoreApplication::translate("QgsOptionsBase", "Planimetric measurements", nullptr));
        grpProjectProjection->setTitle(QCoreApplication::translate("QgsOptionsBase", "CRS for Projects", nullptr));
        label_42->setText(QCoreApplication::translate("QgsOptionsBase", "When a new project is created", nullptr));
        radProjectUseDefaultCrs->setText(QCoreApplication::translate("QgsOptionsBase", "&Use a default CRS", nullptr));
        radProjectUseCrsOfFirstLayer->setText(QCoreApplication::translate("QgsOptionsBase", "Use CRS from first layer added", nullptr));
        groupBox_26->setTitle(QCoreApplication::translate("QgsOptionsBase", "Accuracy Warnings", nullptr));
#if QT_CONFIG(tooltip)
        mCrsAccuracySpin->setToolTip(QCoreApplication::translate("QgsOptionsBase", "If the inherent inaccuracy in a selected CRS exceeds this threshold a warning message will be shown", nullptr));
#endif // QT_CONFIG(tooltip)
        mCrsAccuracySpin->setSuffix(QCoreApplication::translate("QgsOptionsBase", " meters", nullptr));
        label_71->setText(QCoreApplication::translate("QgsOptionsBase", "Only show CRS accuracy warnings for inaccuracies which exceed", nullptr));
#if QT_CONFIG(tooltip)
        mCrsAccuracyIndicatorCheck->setToolTip(QCoreApplication::translate("QgsOptionsBase", "If checked, a warning icon will show next to any map layers with CRS accuracy warnings", nullptr));
#endif // QT_CONFIG(tooltip)
        mCrsAccuracyIndicatorCheck->setText(QCoreApplication::translate("QgsOptionsBase", "Show CRS accuracy warnings for layers in project legend", nullptr));
        mDefaultDatumTransformGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Default Datum Transformations", nullptr));
        label_40->setText(QCoreApplication::translate("QgsOptionsBase", "Enter default datum transformations which will be used in any newly created project", nullptr));
        mShowDatumTransformDialogCheckBox->setText(QCoreApplication::translate("QgsOptionsBase", "Ask for datum transformation if several are available", nullptr));
        groupBox_18->setTitle(QCoreApplication::translate("QgsOptionsBase", "Feature Attributes and Table", nullptr));
        cmbAttrTableBehavior->setItemText(0, QString());

        label_46->setText(QCoreApplication::translate("QgsOptionsBase", "Default view", nullptr));
        cbxAttributeTableDocked->setText(QCoreApplication::translate("QgsOptionsBase", "Open attribute table as docked window", nullptr));
        label_14->setText(QCoreApplication::translate("QgsOptionsBase", "Representation for NULL values", nullptr));
        textLabel1_7->setText(QCoreApplication::translate("QgsOptionsBase", "Attribute table behavior", nullptr));
        textLabel1_12->setText(QCoreApplication::translate("QgsOptionsBase", "Attribute table row cache", nullptr));
        label_48->setText(QCoreApplication::translate("QgsOptionsBase", "Copy features as", nullptr));
        cbxAutosizeAttributeTable->setText(QCoreApplication::translate("QgsOptionsBase", "Autosize all columns by default when opening attribute table", nullptr));
        groupBox_19->setTitle(QCoreApplication::translate("QgsOptionsBase", "Data Source Handling", nullptr));
        cmbPromptSublayers->setItemText(0, QString());

        label_30->setText(QCoreApplication::translate("QgsOptionsBase", "Scan for valid items in the browser dock", nullptr));
        textLabel1_13->setText(QCoreApplication::translate("QgsOptionsBase", "Prompt for sublayers when opening", nullptr));
        label_29->setText(QCoreApplication::translate("QgsOptionsBase", "Scan for contents of compressed files (.zip) in browser dock", nullptr));
        mCheckMonitorDirectories->setText(QCoreApplication::translate("QgsOptionsBase", "Automatically refresh directories in browser dock when their contents change", nullptr));
        groupBox_301->setTitle(QCoreApplication::translate("QgsOptionsBase", "Localized Data Paths", nullptr));
        label_9->setText(QCoreApplication::translate("QgsOptionsBase", "Localized data paths for basemaps, logos, etc. (in order of preference) ", nullptr));
#if QT_CONFIG(tooltip)
        mLocalizedDataPathAddButton->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Add localized data path", nullptr));
#endif // QT_CONFIG(tooltip)
        mLocalizedDataPathAddButton->setText(QString());
#if QT_CONFIG(tooltip)
        mLocalizedDataPathRemoveButton->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove localized data path", nullptr));
#endif // QT_CONFIG(tooltip)
        mLocalizedDataPathRemoveButton->setText(QString());
#if QT_CONFIG(tooltip)
        mLocalizedDataPathUpButton->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Raise selected localized data path priority", nullptr));
#endif // QT_CONFIG(tooltip)
        mLocalizedDataPathUpButton->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mLocalizedDataPathDownButton->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Lower selected localized data path priority", nullptr));
#endif // QT_CONFIG(tooltip)
        mLocalizedDataPathDownButton->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
        groupBox_28->setTitle(QCoreApplication::translate("QgsOptionsBase", "Hidden Browser Paths", nullptr));
#if QT_CONFIG(tooltip)
        mBtnRemoveHiddenPath->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove path", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnRemoveHiddenPath->setText(QString());
        mSVGLabel_4->setText(QCoreApplication::translate("QgsOptionsBase", "Paths hidden from browser panel", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("QgsOptionsBase", "Raster Driver Options", nullptr));
        pbnEditPyramidsOptions->setText(QCoreApplication::translate("QgsOptionsBase", "Edit Pyramids Options", nullptr));
        pbnEditCreateOptions->setText(QCoreApplication::translate("QgsOptionsBase", "Edit Create Options", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("QgsOptionsBase", "Raster Drivers", nullptr));
        label_17->setText(QCoreApplication::translate("QgsOptionsBase", "In some cases more than one GDAL driver can be used to load the same raster format. Use the list below to specify which to use.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = lstRasterDrivers->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("QgsOptionsBase", "Description", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsOptionsBase", "Flags", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsOptionsBase", "Extension", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsOptionsBase", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("QgsOptionsBase", "Raster Drivers", nullptr));
        groupBox_31->setTitle(QCoreApplication::translate("QgsOptionsBase", "Vector Drivers", nullptr));
        label_68->setText(QCoreApplication::translate("QgsOptionsBase", "In some cases more than one GDAL driver can be used to load the same vector format. Use the list below to specify which to use.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = lstVectorDrivers->headerItem();
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("QgsOptionsBase", "Description", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("QgsOptionsBase", "Flags", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("QgsOptionsBase", "Extension", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("QgsOptionsBase", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("QgsOptionsBase", "Vector Drivers", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("QgsOptionsBase", "Default Map Appearance (overridden by project properties)", nullptr));
        pbnCanvasColor->setText(QString());
        label->setText(QCoreApplication::translate("QgsOptionsBase", "Background color", nullptr));
        textLabel1_9->setText(QCoreApplication::translate("QgsOptionsBase", "Selection color", nullptr));
        pbnSelectionColor->setText(QString());
        mLegendGrpBx->setTitle(QCoreApplication::translate("QgsOptionsBase", "Layer Legend", nullptr));
        label_15->setText(QCoreApplication::translate("QgsOptionsBase", "Double-click action in legend", nullptr));
        cmbLegendDoubleClickAction->setItemText(0, QCoreApplication::translate("QgsOptionsBase", "Open layer properties", nullptr));
        cmbLegendDoubleClickAction->setItemText(1, QCoreApplication::translate("QgsOptionsBase", "Open attribute table", nullptr));
        cmbLegendDoubleClickAction->setItemText(2, QCoreApplication::translate("QgsOptionsBase", "Open layer styling dock", nullptr));

        mLayerTreeInsertionMethodLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Behavior used when adding new layers", nullptr));
        mShowFeatureCountByDefaultCheckBox->setText(QCoreApplication::translate("QgsOptionsBase", "Show feature count for newly added layers", nullptr));
        cbxLegendClassifiers->setText(QCoreApplication::translate("QgsOptionsBase", "Display classification attribute in layer titles", nullptr));
        label_58->setText(QCoreApplication::translate("QgsOptionsBase", "WMS getLegendGraphic resolution", nullptr));
#if QT_CONFIG(tooltip)
        mLegendGraphicResolutionSpinBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLegendGraphicResolutionSpinBox->setSuffix(QCoreApplication::translate("QgsOptionsBase", " dpi", nullptr));
        labelLegendSymbolMinimumSize->setText(QCoreApplication::translate("QgsOptionsBase", "Minimum legend symbol size", nullptr));
#if QT_CONFIG(tooltip)
        mLegendSymbolMinimumSizeSpinBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLegendSymbolMinimumSizeSpinBox->setSuffix(QCoreApplication::translate("QgsOptionsBase", " mm", nullptr));
        labelLegendSymbolMaximumSize->setText(QCoreApplication::translate("QgsOptionsBase", "Maximum legend symbol size", nullptr));
#if QT_CONFIG(tooltip)
        mLegendSymbolMaximumSizeSpinBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLegendSymbolMaximumSizeSpinBox->setSuffix(QCoreApplication::translate("QgsOptionsBase", " mm", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("QgsOptionsBase", "Map Tips", nullptr));
        textLabel1_16->setText(QCoreApplication::translate("QgsOptionsBase", "Delay (in milliseconds)", nullptr));
#if QT_CONFIG(tooltip)
        mMapTipsDelaySpinBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mMapTipsDelaySpinBox->setSuffix(QCoreApplication::translate("QgsOptionsBase", " ms", nullptr));
        groupBox_32->setTitle(QCoreApplication::translate("QgsOptionsBase", "DPI", nullptr));
#if QT_CONFIG(tooltip)
        mRespectScreenDpiCheckBox->setToolTip(QCoreApplication::translate("QgsOptionsBase", "<html><head/><body><p>If respect screen DPI is activated, symbology on the map canvas will be rendered with appropriate screen DPI. This means that a symbol with 1mm size will be rendered with 1mm size on every screen (provided it is configured correctly at the system).</p><p><span style=\" font-weight:600;\">Note:</span></p><p>If disabled, this will activate legacy behavior (QGIS &lt;= 3.20) and will render symbology on the map canvas smaller on HiDPI screens.</p><p>Requires a restart</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mRespectScreenDpiCheckBox->setText(QCoreApplication::translate("QgsOptionsBase", "Respect screen DPI", nullptr));
        mCoordinateDisplayGroup->setTitle(QCoreApplication::translate("QgsOptionsBase", "Measurements, Coordinate and Bearing Display", nullptr));
        textLabel1_11->setText(QCoreApplication::translate("QgsOptionsBase", "Default distance units for new projects", nullptr));
        label_72->setText(QCoreApplication::translate("QgsOptionsBase", "Default coordinate format for new projects", nullptr));
        mCustomizeCoordinateFormatButton->setText(QCoreApplication::translate("QgsOptionsBase", "Customize\342\200\246", nullptr));
        label_12->setText(QCoreApplication::translate("QgsOptionsBase", "Decimal places", nullptr));
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("QgsOptionsBase", "If unchecked large numbers will be converted from m. to km. and from ft. to miles", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("QgsOptionsBase", "Keep base unit", nullptr));
        mKeepBaseUnitCheckBox->setText(QString());
        textLabel1_14->setText(QCoreApplication::translate("QgsOptionsBase", "Default area units for new projects", nullptr));
        label_69->setText(QCoreApplication::translate("QgsOptionsBase", "Default bearing format for new projects", nullptr));
        mCustomizeBearingFormatButton->setText(QCoreApplication::translate("QgsOptionsBase", "Customize\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mAngleUnitsLabel->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Specifies the angle unit to use in the current and new projects.", nullptr));
#endif // QT_CONFIG(tooltip)
        mAngleUnitsLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Preferred angle units", nullptr));
        mIdentifyGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Identify", nullptr));
        textLabel1_3->setText(QCoreApplication::translate("QgsOptionsBase", "Search radius for identifying features and displaying map tips", nullptr));
        spinBoxIdentifyValue->setSuffix(QCoreApplication::translate("QgsOptionsBase", " mm", nullptr));
        mIdentifyHighlighColorLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Highlight color", nullptr));
#if QT_CONFIG(tooltip)
        mIdentifyHighlightColorButton->setToolTip(QCoreApplication::translate("QgsOptionsBase", "<html><head/><body><p>The color used to highlight identified feature. The alpha channel is only used for polygons fill, lines and outlines are fully opaque.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mIdentifyHighlightColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        mIdentifyHighlightBufferLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mIdentifyHighlightBufferLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Buffer", nullptr));
#if QT_CONFIG(tooltip)
        mIdentifyHighlightBufferSpinBox->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Lines / outlines buffer in millimeters.", nullptr));
#endif // QT_CONFIG(tooltip)
        mIdentifyHighlightBufferSpinBox->setSuffix(QCoreApplication::translate("QgsOptionsBase", " mm", nullptr));
#if QT_CONFIG(tooltip)
        mIdentifyHighlightMinWidthLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mIdentifyHighlightMinWidthLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Minimum width", nullptr));
#if QT_CONFIG(tooltip)
        mIdentifyHighlightMinWidthSpinBox->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Minimum line / stroke width in millimeters.", nullptr));
#endif // QT_CONFIG(tooltip)
        mIdentifyHighlightMinWidthSpinBox->setSuffix(QCoreApplication::translate("QgsOptionsBase", " mm", nullptr));
        mMeasureToolGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Measure Tool", nullptr));
        textLabel1_10->setText(QCoreApplication::translate("QgsOptionsBase", "Rubberband color", nullptr));
        pbnMeasureColor->setText(QString());
        mMeasureToolCopySettingsGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Copy Settings", nullptr));
        label_22->setText(QCoreApplication::translate("QgsOptionsBase", "Include header", nullptr));
        label_23->setText(QCoreApplication::translate("QgsOptionsBase", "Separator", nullptr));
        mAlwaysUseDecimalPoint->setText(QString());
        mSeparatorComma->setText(QCoreApplication::translate("QgsOptionsBase", "Comma", nullptr));
        mSeparatorSpace->setText(QCoreApplication::translate("QgsOptionsBase", "Space", nullptr));
        mSeparatorColon->setText(QCoreApplication::translate("QgsOptionsBase", "Colon", nullptr));
        mSeparatorSemicolon->setText(QCoreApplication::translate("QgsOptionsBase", "Semicolon", nullptr));
        mSeparatorTab->setText(QCoreApplication::translate("QgsOptionsBase", "Tab", nullptr));
        mSeparatorOther->setText(QCoreApplication::translate("QgsOptionsBase", "Other", nullptr));
        mIncludeHeader->setText(QString());
#if QT_CONFIG(tooltip)
        label_24->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Use a dot as the decimal separator, even if the current locale uses a different character", nullptr));
#endif // QT_CONFIG(tooltip)
        label_24->setText(QCoreApplication::translate("QgsOptionsBase", "Always use decimal point", nullptr));
        mZoomingGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Zooming", nullptr));
        label_3->setText(QCoreApplication::translate("QgsOptionsBase", "Zoom factor", nullptr));
#if QT_CONFIG(tooltip)
        spinZoomFactor->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Specifies the change in zoom level with each move of the mouse wheel.\n"
"The bigger the number, the faster zooming with the mouse wheel will be.", nullptr));
#endif // QT_CONFIG(tooltip)
        spinZoomFactor->setSuffix(QCoreApplication::translate("QgsOptionsBase", "%", nullptr));
        label_21->setText(QCoreApplication::translate("QgsOptionsBase", "Reverse wheel zoom", nullptr));
        reverseWheelZoom->setText(QString());
        mPredefinedScalesGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Predefined Scales", nullptr));
#if QT_CONFIG(tooltip)
        pbnAddScale->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Add predefined scale", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnAddScale->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnRemoveScale->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove selected scale", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnRemoveScale->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnDefaultScaleValues->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Reset to default scales", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnDefaultScaleValues->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnImportScales->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Import from file", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnImportScales->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnExportScales->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Export to file", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnExportScales->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
        mEnterAttributeValuesGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Feature Creation", nullptr));
        label_19->setText(QCoreApplication::translate("QgsOptionsBase", "Validate geometries", nullptr));
        chkDisableAttributeValuesDlg->setText(QCoreApplication::translate("QgsOptionsBase", "Suppress attribute form pop-up after feature creation", nullptr));
        chkReuseLastValues->setText(QCoreApplication::translate("QgsOptionsBase", "Reuse last entered attribute values", nullptr));
        mDefaultZValueLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Default Z value", nullptr));
        mDefaultMValueLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Default M value", nullptr));
#if QT_CONFIG(tooltip)
        mDefaultZValueSpinBox->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Default Z Value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mDefaultMValueSpinBox->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Default Measure Value", nullptr));
#endif // QT_CONFIG(tooltip)
        mRubberBandGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Rubberband", nullptr));
        mLineWidthTextLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Line width", nullptr));
        mLineColorTextLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Line color", nullptr));
#if QT_CONFIG(tooltip)
        mLineWidthSpinBox->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Line width in pixels", nullptr));
#endif // QT_CONFIG(tooltip)
        mFillColorToolButton->setText(QString());
        mSelectColorTextLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Fill color", nullptr));
        mLineColorToolButton->setText(QString());
        mLineGhostCheckBox->setText(QCoreApplication::translate("QgsOptionsBase", "Don't update rubber band during vertex editing", nullptr));
        mSnappingGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Snapping", nullptr));
        mSnappingEnabledDefault->setText(QCoreApplication::translate("QgsOptionsBase", "Enable snapping by default", nullptr));
        mDefaultSnapTypeLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Default snapping type", nullptr));
        mDefaultSnappingToleranceTextLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Default snapping tolerance", nullptr));
        mDefaultSnappingToleranceComboBox->setItemText(0, QCoreApplication::translate("QgsOptionsBase", "map units", nullptr));
        mDefaultSnappingToleranceComboBox->setItemText(1, QCoreApplication::translate("QgsOptionsBase", "pixels", nullptr));

        mVertexSearchRadiusVertexEditLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Search radius for vertex edits", nullptr));
        mSearchRadiusVertexEditComboBox->setItemText(0, QCoreApplication::translate("QgsOptionsBase", "map units", nullptr));
        mSearchRadiusVertexEditComboBox->setItemText(1, QCoreApplication::translate("QgsOptionsBase", "pixels", nullptr));

        label_49->setText(QCoreApplication::translate("QgsOptionsBase", "Display main dialog as (restart required)", nullptr));
        label_2->setText(QCoreApplication::translate("QgsOptionsBase", "Snapping marker color", nullptr));
        mSnappingTooltipsCheckbox->setText(QCoreApplication::translate("QgsOptionsBase", "Show snapping tooltips", nullptr));
        mEnableSnappingOnInvisibleFeatureCheckbox->setText(QCoreApplication::translate("QgsOptionsBase", "Enable snapping on invisible features (not shown on the map canvas)", nullptr));
        mVertexMarkerGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Vertex Markers", nullptr));
        mMarkerStyleLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Marker style", nullptr));
        label_6->setText(QCoreApplication::translate("QgsOptionsBase", "Marker size (in millimeter)", nullptr));
        mMarkersOnlyForSelectedCheckBox->setText(QCoreApplication::translate("QgsOptionsBase", "Show markers only for selected features", nullptr));
        groupBox_21->setTitle(QCoreApplication::translate("QgsOptionsBase", "Curve Offset Tool", nullptr));
        label_25->setText(QCoreApplication::translate("QgsOptionsBase", "End cap style", nullptr));
        label_27->setText(QCoreApplication::translate("QgsOptionsBase", "Quadrant segments", nullptr));
        label_28->setText(QCoreApplication::translate("QgsOptionsBase", "Miter limit", nullptr));
        label_26->setText(QCoreApplication::translate("QgsOptionsBase", "Join style", nullptr));
        groupBox_30->setTitle(QCoreApplication::translate("QgsOptionsBase", "Tracing", nullptr));
        mTracingConvertToCurveCheckBox->setText(QCoreApplication::translate("QgsOptionsBase", "Convert tracing to curve (this feature is experimental)", nullptr));
        label_44->setText(QCoreApplication::translate("QgsOptionsBase", "Angle tolerance when tracing curves", nullptr));
        label_70->setText(QCoreApplication::translate("QgsOptionsBase", "Distance tolerance when tracing curves", nullptr));
#if QT_CONFIG(tooltip)
        mTracingCustomAngleToleranceSpinBox->setToolTip(QCoreApplication::translate("QgsOptionsBase", "This specifies the maximum angular deviation (in radians) allowed for a series of points to be converted to a curve.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTracingCustomDistanceToleranceSpinBox->setToolTip(QCoreApplication::translate("QgsOptionsBase", "This specifies the maximum deviation allowed between the original location of vertices and where they would fall on the candidate curved geometry for a series of points to be converted to a curve.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_7->setTitle(QCoreApplication::translate("QgsOptionsBase", "Color Schemes", nullptr));
#if QT_CONFIG(tooltip)
        mButtonImportColors->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Import colors from file", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonImportColors->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonPasteColors->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Paste colors", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonPasteColors->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonAddColor->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Add color", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddColor->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonRemoveColor->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove color", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveColor->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonCopyColors->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Copy colors", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonCopyColors->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonExportColors->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Export colors", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonExportColors->setText(QString());
        mSchemeToolButton->setText(QCoreApplication::translate("QgsOptionsBase", "\342\200\246", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsOptionsBase", "Layout Defaults", nullptr));
        label_60->setText(QCoreApplication::translate("QgsOptionsBase", "Default font", nullptr));
        groupBox_23->setTitle(QCoreApplication::translate("QgsOptionsBase", "Grid Appearance", nullptr));
        label_66->setText(QCoreApplication::translate("QgsOptionsBase", "Grid style", nullptr));
        label_4->setText(QCoreApplication::translate("QgsOptionsBase", "Grid color", nullptr));
        mGridColorButton->setText(QString());
        groupBox_24->setTitle(QCoreApplication::translate("QgsOptionsBase", "Grid and Guide Defaults", nullptr));
        label_61->setText(QCoreApplication::translate("QgsOptionsBase", "Grid spacing", nullptr));
        mGridResolutionSpinBox->setSuffix(QCoreApplication::translate("QgsOptionsBase", " mm", nullptr));
        label_63->setText(QCoreApplication::translate("QgsOptionsBase", "Grid offset", nullptr));
        mOffsetXSpinBox->setPrefix(QCoreApplication::translate("QgsOptionsBase", "x: ", nullptr));
        mOffsetYSpinBox->setPrefix(QCoreApplication::translate("QgsOptionsBase", "y: ", nullptr));
        mOffsetYSpinBox->setSuffix(QString());
        label_62->setText(QCoreApplication::translate("QgsOptionsBase", "Snap tolerance", nullptr));
        mSnapToleranceSpinBox->setSuffix(QCoreApplication::translate("QgsOptionsBase", " px", nullptr));
        groupBox_27->setTitle(QCoreApplication::translate("QgsOptionsBase", "Layout Paths", nullptr));
        mSVGLabel_3->setText(QCoreApplication::translate("QgsOptionsBase", "Path(s) to search for extra print templates", nullptr));
#if QT_CONFIG(tooltip)
        mBtnAddTemplatePath->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Add new path", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnAddTemplatePath->setText(QString());
#if QT_CONFIG(tooltip)
        mBtnRemoveTemplatePath->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove path", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnRemoveTemplatePath->setText(QString());
        groupBox_25->setTitle(QCoreApplication::translate("QgsOptionsBase", "Expression Variables", nullptr));
        groupBox_20->setTitle(QCoreApplication::translate("QgsOptionsBase", "General", nullptr));
        mNetworkTimeoutLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Timeout for network requests (ms)", nullptr));
        label_45->setText(QCoreApplication::translate("QgsOptionsBase", "Default expiration period for WMS capabilities (hours)", nullptr));
        label_32->setText(QCoreApplication::translate("QgsOptionsBase", "Default expiration period for WMS-C/WMTS tiles (hours)", nullptr));
        label_57->setText(QCoreApplication::translate("QgsOptionsBase", "Max retry in case of tile or feature request errors", nullptr));
#if QT_CONFIG(tooltip)
        lblUserAgent->setToolTip(QCoreApplication::translate("QgsOptionsBase", "This value will be prepended before the QGIS version and the OS, e.g. \"Mozilla/5.0 QGIS/33801/Ubuntu 22.04.4 LTS\"", nullptr));
#endif // QT_CONFIG(tooltip)
        lblUserAgent->setText(QCoreApplication::translate("QgsOptionsBase", "User-Agent prefix", nullptr));
        grpCache->setTitle(QCoreApplication::translate("QgsOptionsBase", "Cache Settings", nullptr));
        label_11->setText(QCoreApplication::translate("QgsOptionsBase", "Size", nullptr));
        label_10->setText(QCoreApplication::translate("QgsOptionsBase", "Directory", nullptr));
#if QT_CONFIG(tooltip)
        mCacheSize->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Specify the cache size in megabytes. Clear the value to enable smart cache size, which sets the maximum cache size based on available space.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCacheSize->setSpecialValueText(QCoreApplication::translate("QgsOptionsBase", "Smart cache size", nullptr));
        mCacheSize->setSuffix(QCoreApplication::translate("QgsOptionsBase", " MB", nullptr));
#if QT_CONFIG(tooltip)
        mBrowseCacheDirectory->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Select folder", nullptr));
#endif // QT_CONFIG(tooltip)
        mBrowseCacheDirectory->setText(QString());
#if QT_CONFIG(tooltip)
        mClearCache->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Clear cache", nullptr));
#endif // QT_CONFIG(tooltip)
        mClearCache->setText(QString());
        tabContentCache->setTabText(tabContentCache->indexOf(tab), QCoreApplication::translate("QgsOptionsBase", "Content", nullptr));
#if QT_CONFIG(tooltip)
        mAutoClearAccessCache->setToolTip(QCoreApplication::translate("QgsOptionsBase", "<html><head/><body><p>The connection cache stores all authentication connections data even when the connection fails.<br/>If you make any change to the authentication configurations or to the certification authorities, you should clear the authentication cache or<br/>restart QGIS. <br/>When this option is checked, the authentication cache will be automatically cleared every time an SSL error occurs and you choose to abort the connection.<br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mAutoClearAccessCache->setText(QCoreApplication::translate("QgsOptionsBase", "Automatically clear the connection authentication cache on SSL errors (recommended)", nullptr));
        mClearAccessCache->setText(QCoreApplication::translate("QgsOptionsBase", "Clear authentication connection cache", nullptr));
        tabContentCache->setTabText(tabContentCache->indexOf(tab_2), QCoreApplication::translate("QgsOptionsBase", "Authentication", nullptr));
        grpProxy->setTitle(QCoreApplication::translate("QgsOptionsBase", "Use Pro&xy for Web Access", nullptr));
        label_47->setText(QCoreApplication::translate("QgsOptionsBase", "No proxy for (URLs starting with)", nullptr));
#if QT_CONFIG(tooltip)
        mRemoveUrlPushButton->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Remove selected URL", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveUrlPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mAddUrlPushButton->setToolTip(QCoreApplication::translate("QgsOptionsBase", "Add URL to exclude", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddUrlPushButton->setText(QString());
        mTypeLabel->setText(QCoreApplication::translate("QgsOptionsBase", "Proxy type", nullptr));
        label_41->setText(QCoreApplication::translate("QgsOptionsBase", "Default uses system's proxy", nullptr));
        lblProxyPort->setText(QCoreApplication::translate("QgsOptionsBase", "Port", nullptr));
        lblProxyHost->setText(QCoreApplication::translate("QgsOptionsBase", "Host", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Authentication", nullptr));
        mOptionsLocatorGroupBox->setTitle(QCoreApplication::translate("QgsOptionsBase", "Locator Filters", nullptr));
        label_53->setText(QCoreApplication::translate("QgsOptionsBase", "<html><head/><body><p>Some of the internal C++ processing core algorithms and renderers can take advantage of an OpenCL compatible device to increase the performances.<br/><span style=\" font-weight:600;\">QGIS OpenCL support is highly experimental and can crash QGIS because of bugs in the underlying libraries, enable at your own risk!</span></p></body></html>", nullptr));
        mGPUEnableCheckBox->setText(QCoreApplication::translate("QgsOptionsBase", "Enable OpenCL acceleration", nullptr));
        label_64->setText(QCoreApplication::translate("QgsOptionsBase", "The following OpenCL devices were found on this system (changing the default device requires QGIS to be restarted).", nullptr));
        mGPUInfoTextBrowser->setHtml(QCoreApplication::translate("QgsOptionsBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsOptionsBase: public Ui_QgsOptionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOPTIONSBASE_H
