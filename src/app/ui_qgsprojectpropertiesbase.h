/********************************************************************************
** Form generated from reading UI file 'qgsprojectpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTPROPERTIESBASE_H
#define UI_QGSPROJECTPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtSvg/QSvgWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscolorschemelist.h>
#include <qgsvariableeditorwidget.h>
#include "qgscodeeditorpython.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgscolorrampbutton.h"
#include "qgsdatetimeedit.h"
#include "qgsdatumtransformtablewidget.h"
#include "qgsextentgroupbox.h"
#include "qgsextentwidget.h"
#include "qgsfilterlineedit.h"
#include "qgsfontbutton.h"
#include "qgsopacitywidget.h"
#include "qgsprojectionselectiontreewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscalemethodwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectPropertiesBase
{
public:
    QGridLayout *gridLayout_21;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mProjOptsGeneral;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *titleBox;
    QGridLayout *gridLayout_26;
    QHBoxLayout *horizontalLayout_14;
    QgsFilterLineEdit *mProjectHomeLineEdit;
    QToolButton *mButtonSetProjectHome;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButton *pbnSelectionColor;
    QLabel *label;
    QgsColorButton *pbnCanvasColor;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *mMapTileRenderingCheckBox;
    QSpacerItem *spacerItem;
    QLabel *label_4;
    QComboBox *cbxAbsolutePath;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *mProjectFileLineEdit;
    QToolButton *mButtonOpenProjectFolder;
    QLabel *label_30;
    QLabel *textLabel1;
    QLabel *label_2;
    QLineEdit *titleEdit;
    QLabel *label_3;
    QCheckBox *mCheckBoxRememberAttributeTables;
    QgsCollapsibleGroupBox *btnGrpMeasureEllipsoid;
    QGridLayout *gridLayoutMeasureTool;
    QLineEdit *leSemiMinor;
    QLabel *label_41;
    QLabel *textLabel1_8;
    QComboBox *mDistanceUnitsCombo;
    QComboBox *mAreaUnitsCombo;
    QComboBox *cmbEllipsoid;
    QLineEdit *leSemiMajor;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_42;
    QLabel *label_32;
    QgsScaleMethodWidget *mScaleMethodWidget;
    QgsCollapsibleGroupBox *mCoordinateDisplayGroup;
    QGridLayout *gridLayout_18;
    QLabel *label_34;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *mCustomizeBearingFormatButton;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_25;
    QFrame *mFramePrecision;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *radAutomatic;
    QRadioButton *radManual;
    QgsSpinBox *spinBoxDP;
    QLabel *labelDP;
    QLabel *label_31;
    QComboBox *mCoordinateOrderComboBox;
    QComboBox *mCoordinateDisplayComboBox;
    QLabel *label_38;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *mCustomizeCoordinateFormatButton;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_43;
    QgsProjectionSelectionWidget *mCoordinateCrs;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sourceLanguageLabel;
    QComboBox *cbtsLocale;
    QPushButton *generateTsFileButton;
    QSpacerItem *verticalSpacer_5;
    QWidget *mMetadataPage;
    QVBoxLayout *verticalLayout_19;
    QWidget *mViewSettingsPage;
    QVBoxLayout *verticalLayout_25;
    QgsCollapsibleGroupBox *grpProjectScales;
    QGridLayout *gridLayout_7;
    QListWidget *lstScales;
    QVBoxLayout *verticalLayout_4;
    QToolButton *pbnAddScale;
    QToolButton *pbnRemoveScale;
    QToolButton *pbnImportScales;
    QToolButton *pbnExportScales;
    QSpacerItem *verticalSpacer;
    QgsExtentGroupBox *mExtentGroupBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *mProjOptsCRS;
    QVBoxLayout *verticalLayout_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *cbxProjectionEnabled;
    QVBoxLayout *verticalLayout_21;
    QgsProjectionSelectionTreeWidget *projectionSelector;
    QWidget *mProjTransformations;
    QVBoxLayout *verticalLayout_8;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *mDatumTransformGroupBox;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *mShowDatumTransformDialogCheckBox;
    QgsDatumTransformTableWidget *mDatumTransformTableWidget;
    QWidget *mProjOptsSymbols;
    QVBoxLayout *verticalLayout_11;
    QgsScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_12;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_11;
    QLabel *lblStyleLine;
    QSvgWidget *pixStyleColorRamp;
    QSvgWidget *pixStyleFill;
    QSvgWidget *pixStyleLine;
    QgsSymbolButton *mStyleFillSymbol;
    QLabel *lblStyleColorRamp;
    QgsSymbolButton *mStyleMarkerSymbol;
    QSvgWidget *pixStyleMarker;
    QLabel *lblStyleMarker;
    QLabel *lblStyleFill;
    QgsSymbolButton *mStyleLineSymbol;
    QgsColorRampButton *mStyleColorRampSymbol;
    QSvgWidget *pixStyleTextFormat;
    QLabel *lblStyleTextFormat;
    QgsFontButton *mStyleTextFormat;
    QgsCollapsibleGroupBox *groupBox_3;
    QGridLayout *gridLayout_28;
    QLabel *label_27;
    QgsOpacityWidget *mDefaultOpacityWidget;
    QCheckBox *cbxStyleRandomColors;
    QgsCollapsibleGroupBox *mGroupBoxStyleDatabases;
    QGridLayout *gridLayout_20;
    QListWidget *mListStyleDatabases;
    QVBoxLayout *verticalLayout_27;
    QToolButton *mButtonAddStyleDatabase;
    QToolButton *mButtonRemoveStyleDatabase;
    QToolButton *mButtonNewStyleDatabase;
    QSpacerItem *verticalSpacer_7;
    QWidget *mTabColors;
    QVBoxLayout *verticalLayout_18;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mColorSpaceName;
    QToolButton *mRemoveIccProfile;
    QToolButton *mSaveIccProfile;
    QToolButton *mAddIccProfile;
    QComboBox *mColorModel;
    QLabel *mIccProfileLabel;
    QLabel *label_14;
    QgsCollapsibleGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QToolButton *mButtonCopyColors;
    QSpacerItem *verticalSpacer_12;
    QToolButton *mButtonAddColor;
    QToolButton *mButtonPasteColors;
    QToolButton *mButtonRemoveColor;
    QgsColorSchemeList *mTreeProjectColors;
    QToolButton *mButtonImportColors;
    QToolButton *mButtonExportColors;
    QWidget *mTab_DataSources;
    QGridLayout *mTab_DataSourcesGridLayout;
    QgsCollapsibleGroupBox *mLayerCapabilitiesGrpBox;
    QGridLayout *gridLayout_19;
    QSpacerItem *horizontalSpacer_5;
    QTreeView *mLayerCapabilitiesTree;
    QPushButton *mLayerCapabilitiesToggleSelectionButton;
    QCheckBox *mShowSpatialLayersCheckBox;
    QgsFilterLineEdit *mLayerCapabilitiesTreeFilterLineEdit;
    QGroupBox *mEditingBehaviorGrpBox;
    QGridLayout *gridLayout_8;
    QComboBox *mTransactionModeComboBox;
    QLabel *mTransactionModeLabel;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *mEvaluateDefaultValues;
    QCheckBox *mCheckRememberEditStatus;
    QGroupBox *mDatasourcesAdvancedSettingsGrpBox;
    QGridLayout *gridLayout_13;
    QCheckBox *mTrustProjectCheckBox;
    QWidget *mTabRelations;
    QGridLayout *gridLayout_16;
    QWidget *mTab_Variables;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_7;
    QgsVariableEditorWidget *mVariableEditor;
    QWidget *mProjOptsMacros;
    QVBoxLayout *verticalLayout_15;
    QgsScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_17;
    QGroupBox *grpPythonMacros;
    QVBoxLayout *verticalLayout_16;
    QgsCodeEditorPython *ptePythonMacros;
    QWidget *mProjOptsOWS;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_13;
    QGridLayout *gridLayout_3;
    QTabWidget *OWSTabWidget;
    QWidget *services;
    QGridLayout *gridLayout_27;
    QgsCollapsibleGroupBox *grpOWSServiceCapabilities;
    QGridLayout *gridLayout_6;
    QComboBox *mWMSContactPositionCb;
    QgsPropertyOverrideButton *mWMSOnlineResourceExpressionButton;
    QLineEdit *mWMSTitle;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_9;
    QComboBox *mWMSAccessConstraintsCb;
    QLineEdit *mWMSContactPerson;
    QLabel *mWMSFeesLabel;
    QTextEdit *mWMSAbstract;
    QLabel *label_13;
    QLabel *label_11;
    QLineEdit *mWMSContactPhone;
    QLabel *label_12;
    QComboBox *mWMSFeesCb;
    QLineEdit *mWMSOnlineResourceLineEdit;
    QLabel *mWMSKeywordListLabel;
    QLineEdit *mWMSContactOrganization;
    QFrame *wmsWarningBox;
    QGridLayout *gridLayout_23;
    QLabel *warningLabel_2;
    QLineEdit *mWMSKeywordList;
    QLabel *label_15;
    QLineEdit *mWMSContactMail;
    QLabel *mWMSOnlineResourceLabel;
    QLabel *label_20;
    QLabel *mWMSAccessConstraintsLabel;
    QLineEdit *mWMSName;
    QWidget *wms;
    QGridLayout *gridLayout_25;
    QgsCollapsibleGroupBox *grpWMSLegendMapOptions;
    QGridLayout *gridLayout_29;
    QGridLayout *gridLayout_9;
    QLabel *mMaxWidthLabel_2;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *mMaxHeightLineEdit;
    QLineEdit *mMaxWidthLineEdit;
    QLabel *mMaxHeightLabel;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_10;
    QLabel *mWMSImageQualityLabel;
    QgsSpinBox *mWMSImageQualitySpinBox;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_33;
    QgsSpinBox *mWMSTileBufferSpinBox;
    QHBoxLayout *mWMSDefaultMapUnitsPerMmLayout;
    QLabel *mWMSDefaultMapUnitsPerMmLabel;
    QCheckBox *mAddLayerGroupsLegendGraphicCheckBox;
    QHBoxLayout *horizontalLayout_17;
    QLabel *mWMSMaxAtlasFeaturesLabel;
    QgsSpinBox *mWMSMaxAtlasFeaturesSpinBox;
    QCheckBox *mSkipNameForGroupCheckBox;
    QgsCollapsibleGroupBox *mWMSInspire;
    QGridLayout *gridLayout_14;
    QComboBox *mWMSInspireLanguage;
    QLabel *label_7;
    QGroupBox *mWMSInspireScenario2;
    QGridLayout *gridLayout_17;
    QDateEdit *mWMSInspireTemporalReference;
    QLabel *label_23;
    QDateEdit *mWMSInspireMetadataDate;
    QLabel *label_22;
    QGroupBox *mWMSInspireScenario1;
    QGridLayout *gridLayout_15;
    QLineEdit *mWMSInspireMetadataUrl;
    QLabel *label_8;
    QComboBox *mWMSInspireMetadataUrlType;
    QLabel *label_24;
    QgsCollapsibleGroupBox *grpWMSLayerOptions;
    QGridLayout *gridLayout_30;
    QCheckBox *mUseAttributeFormSettingsCheckBox;
    QCheckBox *mWmsUseLayerIDs;
    QHBoxLayout *grpWMSPrecision;
    QLabel *label_5;
    QgsSpinBox *mWMSPrecisionSpinBox;
    QCheckBox *mSegmentizeFeatureInfoGeometryCheckBox;
    QCheckBox *mAddWktGeometryCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mWMSUrlLabel;
    QLineEdit *mWMSUrlLineEdit;
    QgsCollapsibleGroupBox *mLayerRestrictionsGroupBox;
    QGridLayout *gridLayout;
    QListWidget *mLayerRestrictionsListWidget;
    QToolButton *mAddLayerRestrictionButton;
    QToolButton *mRemoveLayerRestrictionButton;
    QSpacerItem *horizontalSpacer_3;
    QgsCollapsibleGroupBox *mWMSPrintLayoutGroupBox;
    QGridLayout *gridLayout_10;
    QListWidget *mPrintLayoutListWidget;
    QToolButton *mAddWMSPrintLayoutButton;
    QToolButton *mRemoveWMSPrintLayoutButton;
    QSpacerItem *horizontalSpacer_2;
    QgsCollapsibleGroupBox *grpWMSList;
    QGridLayout *gridLayout_5;
    QListWidget *mWMSList;
    QToolButton *pbnWMSRemoveSRS;
    QPushButton *pbnWMSSetUsedSRS;
    QToolButton *pbnWMSAddSRS;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBox *grpWMSExt;
    QVBoxLayout *verticalLayout_29;
    QgsExtentWidget *mAdvertisedExtentServer;
    QWidget *wmts;
    QVBoxLayout *verticalLayout_26;
    QgsCollapsibleGroupBox *wmtsLayersGroupBox;
    QVBoxLayout *verticalLayout_22;
    QTreeWidget *twWmtsLayers;
    QgsCollapsibleGroupBox *wmtsGridsGroupBox;
    QVBoxLayout *verticalLayout_24;
    QTreeWidget *twWmtsGrids;
    QHBoxLayout *horizontalLayout_16;
    QLabel *mWMTSMinScaleLabel;
    QgsSpinBox *mWMTSMinScaleSpinBox;
    QHBoxLayout *horizontalLayout_15;
    QLabel *mWMTSUrlLabel;
    QLineEdit *mWMTSUrlLineEdit;
    QWidget *wfs;
    QGridLayout *gridLayout_24;
    QPushButton *pbnWFSLayersSelectAll;
    QPushButton *pbnWFSLayersDeselectAll;
    QHBoxLayout *horizontalLayout_8;
    QLabel *mWFSUrlLabel;
    QLineEdit *mWFSUrlLineEdit;
    QTableWidget *twWFSLayers;
    QLabel *label_37;
    QWidget *wcs;
    QGridLayout *gridLayout_2;
    QTableWidget *twWCSLayers;
    QPushButton *pbnWCSLayersSelectAll;
    QPushButton *pbnWCSLayersDeselectAll;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mWCSUrlLabel;
    QLineEdit *mWCSUrlLineEdit;
    QGroupBox *testlayout;
    QVBoxLayout *verticalLayout_28;
    QPushButton *pbnLaunchOWSChecker;
    QTextEdit *teOWSChecker;
    QSpacerItem *verticalSpacer_6;
    QWidget *mTemporalOptions;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *mTemporalOptionsGroup;
    QGridLayout *gridLayout_22;
    QgsDateTimeEdit *mStartDateTimeEdit;
    QLabel *label_35;
    QPushButton *mCalculateFromLayerButton;
    QLabel *label_36;
    QgsDateTimeEdit *mEndDateTimeEdit;
    QSpacerItem *verticalSpacer_2;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsProjectPropertiesBase)
    {
        if (QgsProjectPropertiesBase->objectName().isEmpty())
            QgsProjectPropertiesBase->setObjectName(QString::fromUtf8("QgsProjectPropertiesBase"));
        QgsProjectPropertiesBase->resize(857, 841);
        QgsProjectPropertiesBase->setMinimumSize(QSize(700, 0));
        gridLayout_21 = new QGridLayout(QgsProjectPropertiesBase);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        mOptionsSplitter = new QSplitter(QgsProjectPropertiesBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QString::fromUtf8("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/overlay.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/CRS.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/transformation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/colors.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/attributes.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/relation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem8->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem9->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/action.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem10->setIcon(icon10);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/network_and_proxy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem11->setIcon(icon11);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/temporal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem12->setIcon(icon12);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

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
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mProjOptsGeneral = new QWidget();
        mProjOptsGeneral->setObjectName(QString::fromUtf8("mProjOptsGeneral"));
        verticalLayout_6 = new QVBoxLayout(mProjOptsGeneral);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(mProjOptsGeneral);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 671, 794));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, 0);
        titleBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        titleBox->setObjectName(QString::fromUtf8("titleBox"));
        titleBox->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_26 = new QGridLayout(titleBox);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        mProjectHomeLineEdit = new QgsFilterLineEdit(titleBox);
        mProjectHomeLineEdit->setObjectName(QString::fromUtf8("mProjectHomeLineEdit"));
        mProjectHomeLineEdit->setReadOnly(false);
        mProjectHomeLineEdit->setClearButtonEnabled(false);

        horizontalLayout_14->addWidget(mProjectHomeLineEdit);

        mButtonSetProjectHome = new QToolButton(titleBox);
        mButtonSetProjectHome->setObjectName(QString::fromUtf8("mButtonSetProjectHome"));
        mButtonSetProjectHome->setAutoRaise(false);

        horizontalLayout_14->addWidget(mButtonSetProjectHome);


        gridLayout_26->addLayout(horizontalLayout_14, 1, 1, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pbnSelectionColor = new QgsColorButton(titleBox);
        pbnSelectionColor->setObjectName(QString::fromUtf8("pbnSelectionColor"));
        pbnSelectionColor->setMinimumSize(QSize(120, 0));
        pbnSelectionColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(pbnSelectionColor);

        label = new QLabel(titleBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(label);

        pbnCanvasColor = new QgsColorButton(titleBox);
        pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
        pbnCanvasColor->setMinimumSize(QSize(120, 0));
        pbnCanvasColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(pbnCanvasColor);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_26->addLayout(horizontalLayout_5, 3, 1, 1, 3);

        mMapTileRenderingCheckBox = new QCheckBox(titleBox);
        mMapTileRenderingCheckBox->setObjectName(QString::fromUtf8("mMapTileRenderingCheckBox"));

        gridLayout_26->addWidget(mMapTileRenderingCheckBox, 5, 0, 1, 4);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_26->addItem(spacerItem, 4, 2, 1, 2);

        label_4 = new QLabel(titleBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_4, 0, 0, 1, 1);

        cbxAbsolutePath = new QComboBox(titleBox);
        cbxAbsolutePath->setObjectName(QString::fromUtf8("cbxAbsolutePath"));

        gridLayout_26->addWidget(cbxAbsolutePath, 4, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mProjectFileLineEdit = new QLineEdit(titleBox);
        mProjectFileLineEdit->setObjectName(QString::fromUtf8("mProjectFileLineEdit"));
        mProjectFileLineEdit->setReadOnly(true);

        horizontalLayout_13->addWidget(mProjectFileLineEdit);

        mButtonOpenProjectFolder = new QToolButton(titleBox);
        mButtonOpenProjectFolder->setObjectName(QString::fromUtf8("mButtonOpenProjectFolder"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonOpenProjectFolder->setIcon(icon13);
        mButtonOpenProjectFolder->setAutoRaise(true);

        horizontalLayout_13->addWidget(mButtonOpenProjectFolder);


        gridLayout_26->addLayout(horizontalLayout_13, 0, 1, 1, 3);

        label_30 = new QLabel(titleBox);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        sizePolicy2.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_30, 1, 0, 1, 1);

        textLabel1 = new QLabel(titleBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        sizePolicy2.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(textLabel1, 3, 0, 1, 1);

        label_2 = new QLabel(titleBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_2, 2, 0, 1, 1);

        titleEdit = new QLineEdit(titleBox);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

        gridLayout_26->addWidget(titleEdit, 2, 1, 1, 3);

        label_3 = new QLabel(titleBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_3, 4, 0, 1, 1);

        mCheckBoxRememberAttributeTables = new QCheckBox(titleBox);
        mCheckBoxRememberAttributeTables->setObjectName(QString::fromUtf8("mCheckBoxRememberAttributeTables"));

        gridLayout_26->addWidget(mCheckBoxRememberAttributeTables, 6, 0, 1, 4);


        verticalLayout->addWidget(titleBox);

        btnGrpMeasureEllipsoid = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        btnGrpMeasureEllipsoid->setObjectName(QString::fromUtf8("btnGrpMeasureEllipsoid"));
        btnGrpMeasureEllipsoid->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayoutMeasureTool = new QGridLayout(btnGrpMeasureEllipsoid);
        gridLayoutMeasureTool->setObjectName(QString::fromUtf8("gridLayoutMeasureTool"));
        leSemiMinor = new QLineEdit(btnGrpMeasureEllipsoid);
        leSemiMinor->setObjectName(QString::fromUtf8("leSemiMinor"));

        gridLayoutMeasureTool->addWidget(leSemiMinor, 1, 4, 1, 1);

        label_41 = new QLabel(btnGrpMeasureEllipsoid);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayoutMeasureTool->addWidget(label_41, 1, 1, 1, 1);

        textLabel1_8 = new QLabel(btnGrpMeasureEllipsoid);
        textLabel1_8->setObjectName(QString::fromUtf8("textLabel1_8"));

        gridLayoutMeasureTool->addWidget(textLabel1_8, 0, 0, 1, 1);

        mDistanceUnitsCombo = new QComboBox(btnGrpMeasureEllipsoid);
        mDistanceUnitsCombo->setObjectName(QString::fromUtf8("mDistanceUnitsCombo"));

        gridLayoutMeasureTool->addWidget(mDistanceUnitsCombo, 2, 1, 1, 4);

        mAreaUnitsCombo = new QComboBox(btnGrpMeasureEllipsoid);
        mAreaUnitsCombo->setObjectName(QString::fromUtf8("mAreaUnitsCombo"));

        gridLayoutMeasureTool->addWidget(mAreaUnitsCombo, 3, 1, 1, 4);

        cmbEllipsoid = new QComboBox(btnGrpMeasureEllipsoid);
        cmbEllipsoid->setObjectName(QString::fromUtf8("cmbEllipsoid"));

        gridLayoutMeasureTool->addWidget(cmbEllipsoid, 0, 1, 1, 4);

        leSemiMajor = new QLineEdit(btnGrpMeasureEllipsoid);
        leSemiMajor->setObjectName(QString::fromUtf8("leSemiMajor"));

        gridLayoutMeasureTool->addWidget(leSemiMajor, 1, 2, 1, 1);

        label_28 = new QLabel(btnGrpMeasureEllipsoid);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayoutMeasureTool->addWidget(label_28, 2, 0, 1, 1);

        label_29 = new QLabel(btnGrpMeasureEllipsoid);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayoutMeasureTool->addWidget(label_29, 3, 0, 1, 1);

        label_42 = new QLabel(btnGrpMeasureEllipsoid);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayoutMeasureTool->addWidget(label_42, 1, 3, 1, 1);

        label_32 = new QLabel(btnGrpMeasureEllipsoid);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayoutMeasureTool->addWidget(label_32, 4, 0, 1, 1);

        mScaleMethodWidget = new QgsScaleMethodWidget(btnGrpMeasureEllipsoid);
        mScaleMethodWidget->setObjectName(QString::fromUtf8("mScaleMethodWidget"));
        mScaleMethodWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayoutMeasureTool->addWidget(mScaleMethodWidget, 4, 1, 1, 4);


        verticalLayout->addWidget(btnGrpMeasureEllipsoid);

        mCoordinateDisplayGroup = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        mCoordinateDisplayGroup->setObjectName(QString::fromUtf8("mCoordinateDisplayGroup"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mCoordinateDisplayGroup->sizePolicy().hasHeightForWidth());
        mCoordinateDisplayGroup->setSizePolicy(sizePolicy3);
        mCoordinateDisplayGroup->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_18 = new QGridLayout(mCoordinateDisplayGroup);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        label_34 = new QLabel(mCoordinateDisplayGroup);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_18->addWidget(label_34, 5, 0, 1, 1);

        label_26 = new QLabel(mCoordinateDisplayGroup);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_18->addWidget(label_26, 3, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        mCustomizeBearingFormatButton = new QPushButton(mCoordinateDisplayGroup);
        mCustomizeBearingFormatButton->setObjectName(QString::fromUtf8("mCustomizeBearingFormatButton"));

        horizontalLayout_19->addWidget(mCustomizeBearingFormatButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_8);

        horizontalLayout_19->setStretch(0, 3);
        horizontalLayout_19->setStretch(1, 6);

        gridLayout_18->addLayout(horizontalLayout_19, 5, 1, 1, 1);

        label_25 = new QLabel(mCoordinateDisplayGroup);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_18->addWidget(label_25, 0, 0, 1, 1);

        mFramePrecision = new QFrame(mCoordinateDisplayGroup);
        mFramePrecision->setObjectName(QString::fromUtf8("mFramePrecision"));
        horizontalLayout_12 = new QHBoxLayout(mFramePrecision);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        radAutomatic = new QRadioButton(mFramePrecision);
        radAutomatic->setObjectName(QString::fromUtf8("radAutomatic"));
        radAutomatic->setChecked(true);

        horizontalLayout_12->addWidget(radAutomatic);

        radManual = new QRadioButton(mFramePrecision);
        radManual->setObjectName(QString::fromUtf8("radManual"));

        horizontalLayout_12->addWidget(radManual);

        spinBoxDP = new QgsSpinBox(mFramePrecision);
        spinBoxDP->setObjectName(QString::fromUtf8("spinBoxDP"));

        horizontalLayout_12->addWidget(spinBoxDP);

        labelDP = new QLabel(mFramePrecision);
        labelDP->setObjectName(QString::fromUtf8("labelDP"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelDP->sizePolicy().hasHeightForWidth());
        labelDP->setSizePolicy(sizePolicy4);

        horizontalLayout_12->addWidget(labelDP);


        gridLayout_18->addWidget(mFramePrecision, 3, 1, 1, 1);

        label_31 = new QLabel(mCoordinateDisplayGroup);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_18->addWidget(label_31, 4, 0, 1, 1);

        mCoordinateOrderComboBox = new QComboBox(mCoordinateDisplayGroup);
        mCoordinateOrderComboBox->setObjectName(QString::fromUtf8("mCoordinateOrderComboBox"));

        gridLayout_18->addWidget(mCoordinateOrderComboBox, 4, 1, 1, 1);

        mCoordinateDisplayComboBox = new QComboBox(mCoordinateDisplayGroup);
        mCoordinateDisplayComboBox->setObjectName(QString::fromUtf8("mCoordinateDisplayComboBox"));

        gridLayout_18->addWidget(mCoordinateDisplayComboBox, 0, 1, 1, 1);

        label_38 = new QLabel(mCoordinateDisplayGroup);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_18->addWidget(label_38, 2, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        mCustomizeCoordinateFormatButton = new QPushButton(mCoordinateDisplayGroup);
        mCustomizeCoordinateFormatButton->setObjectName(QString::fromUtf8("mCustomizeCoordinateFormatButton"));

        horizontalLayout_20->addWidget(mCustomizeCoordinateFormatButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_9);

        horizontalLayout_20->setStretch(0, 3);
        horizontalLayout_20->setStretch(1, 6);

        gridLayout_18->addLayout(horizontalLayout_20, 2, 1, 1, 1);

        label_43 = new QLabel(mCoordinateDisplayGroup);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_18->addWidget(label_43, 1, 0, 1, 1);

        mCoordinateCrs = new QgsProjectionSelectionWidget(mCoordinateDisplayGroup);
        mCoordinateCrs->setObjectName(QString::fromUtf8("mCoordinateCrs"));
        mCoordinateCrs->setEnabled(false);
        mCoordinateCrs->setFocusPolicy(Qt::StrongFocus);

        gridLayout_18->addWidget(mCoordinateCrs, 1, 1, 1, 1);


        verticalLayout->addWidget(mCoordinateDisplayGroup);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sourceLanguageLabel = new QLabel(groupBox_6);
        sourceLanguageLabel->setObjectName(QString::fromUtf8("sourceLanguageLabel"));

        horizontalLayout_4->addWidget(sourceLanguageLabel);

        cbtsLocale = new QComboBox(groupBox_6);
        cbtsLocale->setObjectName(QString::fromUtf8("cbtsLocale"));

        horizontalLayout_4->addWidget(cbtsLocale);

        generateTsFileButton = new QPushButton(groupBox_6);
        generateTsFileButton->setObjectName(QString::fromUtf8("generateTsFileButton"));

        horizontalLayout_4->addWidget(generateTsFileButton);


        verticalLayout->addWidget(groupBox_6);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_6->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mProjOptsGeneral);
        mMetadataPage = new QWidget();
        mMetadataPage->setObjectName(QString::fromUtf8("mMetadataPage"));
        verticalLayout_19 = new QVBoxLayout(mMetadataPage);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget->addWidget(mMetadataPage);
        mViewSettingsPage = new QWidget();
        mViewSettingsPage->setObjectName(QString::fromUtf8("mViewSettingsPage"));
        verticalLayout_25 = new QVBoxLayout(mViewSettingsPage);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        grpProjectScales = new QgsCollapsibleGroupBox(mViewSettingsPage);
        grpProjectScales->setObjectName(QString::fromUtf8("grpProjectScales"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(3);
        sizePolicy5.setHeightForWidth(grpProjectScales->sizePolicy().hasHeightForWidth());
        grpProjectScales->setSizePolicy(sizePolicy5);
        grpProjectScales->setCheckable(true);
        grpProjectScales->setChecked(false);
        grpProjectScales->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_7 = new QGridLayout(grpProjectScales);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        lstScales = new QListWidget(grpProjectScales);
        lstScales->setObjectName(QString::fromUtf8("lstScales"));

        gridLayout_7->addWidget(lstScales, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pbnAddScale = new QToolButton(grpProjectScales);
        pbnAddScale->setObjectName(QString::fromUtf8("pbnAddScale"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddScale->setIcon(icon14);

        verticalLayout_4->addWidget(pbnAddScale);

        pbnRemoveScale = new QToolButton(grpProjectScales);
        pbnRemoveScale->setObjectName(QString::fromUtf8("pbnRemoveScale"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveScale->setIcon(icon15);

        verticalLayout_4->addWidget(pbnRemoveScale);

        pbnImportScales = new QToolButton(grpProjectScales);
        pbnImportScales->setObjectName(QString::fromUtf8("pbnImportScales"));
        pbnImportScales->setIcon(icon13);

        verticalLayout_4->addWidget(pbnImportScales);

        pbnExportScales = new QToolButton(grpProjectScales);
        pbnExportScales->setObjectName(QString::fromUtf8("pbnExportScales"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportScales->setIcon(icon16);

        verticalLayout_4->addWidget(pbnExportScales);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout_7->addLayout(verticalLayout_4, 0, 1, 1, 1);


        verticalLayout_25->addWidget(grpProjectScales);

        mExtentGroupBox = new QgsExtentGroupBox(mViewSettingsPage);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));
        mExtentGroupBox->setCheckable(true);
        mExtentGroupBox->setChecked(false);

        verticalLayout_25->addWidget(mExtentGroupBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(verticalSpacer_4);

        mOptionsStackedWidget->addWidget(mViewSettingsPage);
        mProjOptsCRS = new QWidget();
        mProjOptsCRS->setObjectName(QString::fromUtf8("mProjOptsCRS"));
        verticalLayout_5 = new QVBoxLayout(mProjOptsCRS);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mProjOptsCRS);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 289, 55));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        cbxProjectionEnabled = new QGroupBox(scrollAreaWidgetContents);
        cbxProjectionEnabled->setObjectName(QString::fromUtf8("cbxProjectionEnabled"));
        cbxProjectionEnabled->setCheckable(false);
        verticalLayout_21 = new QVBoxLayout(cbxProjectionEnabled);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        projectionSelector = new QgsProjectionSelectionTreeWidget(cbxProjectionEnabled);
        projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

        verticalLayout_21->addWidget(projectionSelector);


        verticalLayout_7->addWidget(cbxProjectionEnabled);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mProjOptsCRS);
        mProjTransformations = new QWidget();
        mProjTransformations->setObjectName(QString::fromUtf8("mProjTransformations"));
        verticalLayout_8 = new QVBoxLayout(mProjTransformations);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QgsScrollArea(mProjTransformations);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 528, 85));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        mDatumTransformGroupBox = new QGroupBox(scrollAreaWidgetContents_3);
        mDatumTransformGroupBox->setObjectName(QString::fromUtf8("mDatumTransformGroupBox"));
        verticalLayout_10 = new QVBoxLayout(mDatumTransformGroupBox);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        mShowDatumTransformDialogCheckBox = new QCheckBox(mDatumTransformGroupBox);
        mShowDatumTransformDialogCheckBox->setObjectName(QString::fromUtf8("mShowDatumTransformDialogCheckBox"));
        mShowDatumTransformDialogCheckBox->setEnabled(false);

        verticalLayout_10->addWidget(mShowDatumTransformDialogCheckBox);

        mDatumTransformTableWidget = new QgsDatumTransformTableWidget(mDatumTransformGroupBox);
        mDatumTransformTableWidget->setObjectName(QString::fromUtf8("mDatumTransformTableWidget"));

        verticalLayout_10->addWidget(mDatumTransformTableWidget);


        verticalLayout_9->addWidget(mDatumTransformGroupBox);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_8->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mProjTransformations);
        mProjOptsSymbols = new QWidget();
        mProjOptsSymbols->setObjectName(QString::fromUtf8("mProjOptsSymbols"));
        verticalLayout_11 = new QVBoxLayout(mProjOptsSymbols);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QgsScrollArea(mProjOptsSymbols);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 276, 448));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("projstyles")));
        gridLayout_11 = new QGridLayout(groupBox);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(9, -1, -1, -1);
        lblStyleLine = new QLabel(groupBox);
        lblStyleLine->setObjectName(QString::fromUtf8("lblStyleLine"));
        lblStyleLine->setMargin(5);

        gridLayout_11->addWidget(lblStyleLine, 1, 2, 1, 1);

        pixStyleColorRamp = new QSvgWidget(groupBox);
        pixStyleColorRamp->setObjectName(QString::fromUtf8("pixStyleColorRamp"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pixStyleColorRamp->sizePolicy().hasHeightForWidth());
        pixStyleColorRamp->setSizePolicy(sizePolicy6);

        gridLayout_11->addWidget(pixStyleColorRamp, 3, 0, 1, 1);

        pixStyleFill = new QSvgWidget(groupBox);
        pixStyleFill->setObjectName(QString::fromUtf8("pixStyleFill"));
        sizePolicy6.setHeightForWidth(pixStyleFill->sizePolicy().hasHeightForWidth());
        pixStyleFill->setSizePolicy(sizePolicy6);

        gridLayout_11->addWidget(pixStyleFill, 2, 0, 1, 1);

        pixStyleLine = new QSvgWidget(groupBox);
        pixStyleLine->setObjectName(QString::fromUtf8("pixStyleLine"));
        sizePolicy6.setHeightForWidth(pixStyleLine->sizePolicy().hasHeightForWidth());
        pixStyleLine->setSizePolicy(sizePolicy6);

        gridLayout_11->addWidget(pixStyleLine, 1, 0, 1, 1);

        mStyleFillSymbol = new QgsSymbolButton(groupBox);
        mStyleFillSymbol->setObjectName(QString::fromUtf8("mStyleFillSymbol"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mStyleFillSymbol->sizePolicy().hasHeightForWidth());
        mStyleFillSymbol->setSizePolicy(sizePolicy7);

        gridLayout_11->addWidget(mStyleFillSymbol, 2, 4, 1, 1);

        lblStyleColorRamp = new QLabel(groupBox);
        lblStyleColorRamp->setObjectName(QString::fromUtf8("lblStyleColorRamp"));
        lblStyleColorRamp->setMargin(5);

        gridLayout_11->addWidget(lblStyleColorRamp, 3, 2, 1, 1);

        mStyleMarkerSymbol = new QgsSymbolButton(groupBox);
        mStyleMarkerSymbol->setObjectName(QString::fromUtf8("mStyleMarkerSymbol"));
        sizePolicy7.setHeightForWidth(mStyleMarkerSymbol->sizePolicy().hasHeightForWidth());
        mStyleMarkerSymbol->setSizePolicy(sizePolicy7);

        gridLayout_11->addWidget(mStyleMarkerSymbol, 0, 4, 1, 1);

        pixStyleMarker = new QSvgWidget(groupBox);
        pixStyleMarker->setObjectName(QString::fromUtf8("pixStyleMarker"));
        sizePolicy6.setHeightForWidth(pixStyleMarker->sizePolicy().hasHeightForWidth());
        pixStyleMarker->setSizePolicy(sizePolicy6);

        gridLayout_11->addWidget(pixStyleMarker, 0, 0, 1, 1);

        lblStyleMarker = new QLabel(groupBox);
        lblStyleMarker->setObjectName(QString::fromUtf8("lblStyleMarker"));
        lblStyleMarker->setMargin(5);

        gridLayout_11->addWidget(lblStyleMarker, 0, 2, 1, 1);

        lblStyleFill = new QLabel(groupBox);
        lblStyleFill->setObjectName(QString::fromUtf8("lblStyleFill"));
        lblStyleFill->setMargin(5);

        gridLayout_11->addWidget(lblStyleFill, 2, 2, 1, 1);

        mStyleLineSymbol = new QgsSymbolButton(groupBox);
        mStyleLineSymbol->setObjectName(QString::fromUtf8("mStyleLineSymbol"));
        sizePolicy7.setHeightForWidth(mStyleLineSymbol->sizePolicy().hasHeightForWidth());
        mStyleLineSymbol->setSizePolicy(sizePolicy7);

        gridLayout_11->addWidget(mStyleLineSymbol, 1, 4, 1, 1);

        mStyleColorRampSymbol = new QgsColorRampButton(groupBox);
        mStyleColorRampSymbol->setObjectName(QString::fromUtf8("mStyleColorRampSymbol"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(mStyleColorRampSymbol->sizePolicy().hasHeightForWidth());
        mStyleColorRampSymbol->setSizePolicy(sizePolicy8);
        mStyleColorRampSymbol->setMinimumSize(QSize(120, 0));
        mStyleColorRampSymbol->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_11->addWidget(mStyleColorRampSymbol, 3, 4, 1, 1);

        pixStyleTextFormat = new QSvgWidget(groupBox);
        pixStyleTextFormat->setObjectName(QString::fromUtf8("pixStyleTextFormat"));
        sizePolicy6.setHeightForWidth(pixStyleTextFormat->sizePolicy().hasHeightForWidth());
        pixStyleTextFormat->setSizePolicy(sizePolicy6);

        gridLayout_11->addWidget(pixStyleTextFormat, 4, 0, 1, 1);

        lblStyleTextFormat = new QLabel(groupBox);
        lblStyleTextFormat->setObjectName(QString::fromUtf8("lblStyleTextFormat"));
        lblStyleTextFormat->setMargin(5);

        gridLayout_11->addWidget(lblStyleTextFormat, 4, 2, 1, 1);

        mStyleTextFormat = new QgsFontButton(groupBox);
        mStyleTextFormat->setObjectName(QString::fromUtf8("mStyleTextFormat"));
        sizePolicy7.setHeightForWidth(mStyleTextFormat->sizePolicy().hasHeightForWidth());
        mStyleTextFormat->setSizePolicy(sizePolicy7);

        gridLayout_11->addWidget(mStyleTextFormat, 4, 4, 1, 1);


        verticalLayout_12->addWidget(groupBox);

        groupBox_3 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_28 = new QGridLayout(groupBox_3);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_28->addWidget(label_27, 0, 0, 1, 1);

        mDefaultOpacityWidget = new QgsOpacityWidget(groupBox_3);
        mDefaultOpacityWidget->setObjectName(QString::fromUtf8("mDefaultOpacityWidget"));
        mDefaultOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_28->addWidget(mDefaultOpacityWidget, 0, 1, 1, 1);

        cbxStyleRandomColors = new QCheckBox(groupBox_3);
        cbxStyleRandomColors->setObjectName(QString::fromUtf8("cbxStyleRandomColors"));

        gridLayout_28->addWidget(cbxStyleRandomColors, 1, 0, 1, 2);

        gridLayout_28->setColumnStretch(1, 1);

        verticalLayout_12->addWidget(groupBox_3);

        mGroupBoxStyleDatabases = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mGroupBoxStyleDatabases->setObjectName(QString::fromUtf8("mGroupBoxStyleDatabases"));
        sizePolicy5.setHeightForWidth(mGroupBoxStyleDatabases->sizePolicy().hasHeightForWidth());
        mGroupBoxStyleDatabases->setSizePolicy(sizePolicy5);
        mGroupBoxStyleDatabases->setCheckable(false);
        mGroupBoxStyleDatabases->setChecked(false);
        mGroupBoxStyleDatabases->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_20 = new QGridLayout(mGroupBoxStyleDatabases);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        mListStyleDatabases = new QListWidget(mGroupBoxStyleDatabases);
        mListStyleDatabases->setObjectName(QString::fromUtf8("mListStyleDatabases"));

        gridLayout_20->addWidget(mListStyleDatabases, 0, 0, 1, 1);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        mButtonAddStyleDatabase = new QToolButton(mGroupBoxStyleDatabases);
        mButtonAddStyleDatabase->setObjectName(QString::fromUtf8("mButtonAddStyleDatabase"));
        mButtonAddStyleDatabase->setIcon(icon14);

        verticalLayout_27->addWidget(mButtonAddStyleDatabase);

        mButtonRemoveStyleDatabase = new QToolButton(mGroupBoxStyleDatabases);
        mButtonRemoveStyleDatabase->setObjectName(QString::fromUtf8("mButtonRemoveStyleDatabase"));
        mButtonRemoveStyleDatabase->setIcon(icon15);

        verticalLayout_27->addWidget(mButtonRemoveStyleDatabase);

        mButtonNewStyleDatabase = new QToolButton(mGroupBoxStyleDatabases);
        mButtonNewStyleDatabase->setObjectName(QString::fromUtf8("mButtonNewStyleDatabase"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/themes/default/mActionNewPage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonNewStyleDatabase->setIcon(icon17);

        verticalLayout_27->addWidget(mButtonNewStyleDatabase);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_7);


        gridLayout_20->addLayout(verticalLayout_27, 0, 1, 1, 1);


        verticalLayout_12->addWidget(mGroupBoxStyleDatabases);

        verticalLayout_12->setStretch(2, 1);
        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_11->addWidget(scrollArea_4);

        mOptionsStackedWidget->addWidget(mProjOptsSymbols);
        mTabColors = new QWidget();
        mTabColors->setObjectName(QString::fromUtf8("mTabColors"));
        verticalLayout_18 = new QVBoxLayout(mTabColors);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        groupBox_2 = new QgsCollapsibleGroupBox(mTabColors);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setProperty("syncGroup", QVariant(QString::fromUtf8("projstyles")));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 8, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        mColorSpaceName = new QLabel(groupBox_2);
        mColorSpaceName->setObjectName(QString::fromUtf8("mColorSpaceName"));

        horizontalLayout_3->addWidget(mColorSpaceName);

        mRemoveIccProfile = new QToolButton(groupBox_2);
        mRemoveIccProfile->setObjectName(QString::fromUtf8("mRemoveIccProfile"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveIccProfile->setIcon(icon18);

        horizontalLayout_3->addWidget(mRemoveIccProfile);

        mSaveIccProfile = new QToolButton(groupBox_2);
        mSaveIccProfile->setObjectName(QString::fromUtf8("mSaveIccProfile"));
        mSaveIccProfile->setIcon(icon16);

        horizontalLayout_3->addWidget(mSaveIccProfile);

        mAddIccProfile = new QToolButton(groupBox_2);
        mAddIccProfile->setObjectName(QString::fromUtf8("mAddIccProfile"));
        mAddIccProfile->setIcon(icon13);

        horizontalLayout_3->addWidget(mAddIccProfile);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 1, 1, 2);

        mColorModel = new QComboBox(groupBox_2);
        mColorModel->setObjectName(QString::fromUtf8("mColorModel"));

        gridLayout_4->addWidget(mColorModel, 0, 1, 1, 2);

        mIccProfileLabel = new QLabel(groupBox_2);
        mIccProfileLabel->setObjectName(QString::fromUtf8("mIccProfileLabel"));

        gridLayout_4->addWidget(mIccProfileLabel, 1, 0, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(2, 2);

        verticalLayout_18->addWidget(groupBox_2);

        groupBox_7 = new QgsCollapsibleGroupBox(mTabColors);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        mButtonCopyColors = new QToolButton(groupBox_7);
        mButtonCopyColors->setObjectName(QString::fromUtf8("mButtonCopyColors"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonCopyColors->setIcon(icon19);

        gridLayout_12->addWidget(mButtonCopyColors, 2, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_12, 6, 1, 1, 1);

        mButtonAddColor = new QToolButton(groupBox_7);
        mButtonAddColor->setObjectName(QString::fromUtf8("mButtonAddColor"));
        mButtonAddColor->setIcon(icon14);

        gridLayout_12->addWidget(mButtonAddColor, 0, 1, 1, 1);

        mButtonPasteColors = new QToolButton(groupBox_7);
        mButtonPasteColors->setObjectName(QString::fromUtf8("mButtonPasteColors"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/themes/default/mActionEditPaste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonPasteColors->setIcon(icon20);

        gridLayout_12->addWidget(mButtonPasteColors, 3, 1, 1, 1);

        mButtonRemoveColor = new QToolButton(groupBox_7);
        mButtonRemoveColor->setObjectName(QString::fromUtf8("mButtonRemoveColor"));
        mButtonRemoveColor->setIcon(icon15);

        gridLayout_12->addWidget(mButtonRemoveColor, 1, 1, 1, 1);

        mTreeProjectColors = new QgsColorSchemeList(groupBox_7);
        mTreeProjectColors->setObjectName(QString::fromUtf8("mTreeProjectColors"));

        gridLayout_12->addWidget(mTreeProjectColors, 0, 0, 8, 1);

        mButtonImportColors = new QToolButton(groupBox_7);
        mButtonImportColors->setObjectName(QString::fromUtf8("mButtonImportColors"));
        mButtonImportColors->setIcon(icon13);

        gridLayout_12->addWidget(mButtonImportColors, 4, 1, 1, 1);

        mButtonExportColors = new QToolButton(groupBox_7);
        mButtonExportColors->setObjectName(QString::fromUtf8("mButtonExportColors"));
        mButtonExportColors->setIcon(icon16);

        gridLayout_12->addWidget(mButtonExportColors, 5, 1, 1, 1);


        verticalLayout_18->addWidget(groupBox_7);

        mOptionsStackedWidget->addWidget(mTabColors);
        mTab_DataSources = new QWidget();
        mTab_DataSources->setObjectName(QString::fromUtf8("mTab_DataSources"));
        mTab_DataSourcesGridLayout = new QGridLayout(mTab_DataSources);
        mTab_DataSourcesGridLayout->setObjectName(QString::fromUtf8("mTab_DataSourcesGridLayout"));
        mTab_DataSourcesGridLayout->setContentsMargins(0, 0, 0, 0);
        mLayerCapabilitiesGrpBox = new QgsCollapsibleGroupBox(mTab_DataSources);
        mLayerCapabilitiesGrpBox->setObjectName(QString::fromUtf8("mLayerCapabilitiesGrpBox"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(1);
        sizePolicy9.setHeightForWidth(mLayerCapabilitiesGrpBox->sizePolicy().hasHeightForWidth());
        mLayerCapabilitiesGrpBox->setSizePolicy(sizePolicy9);
        gridLayout_19 = new QGridLayout(mLayerCapabilitiesGrpBox);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_5, 3, 1, 1, 1);

        mLayerCapabilitiesTree = new QTreeView(mLayerCapabilitiesGrpBox);
        mLayerCapabilitiesTree->setObjectName(QString::fromUtf8("mLayerCapabilitiesTree"));
        sizePolicy9.setHeightForWidth(mLayerCapabilitiesTree->sizePolicy().hasHeightForWidth());
        mLayerCapabilitiesTree->setSizePolicy(sizePolicy9);

        gridLayout_19->addWidget(mLayerCapabilitiesTree, 0, 0, 1, 4);

        mLayerCapabilitiesToggleSelectionButton = new QPushButton(mLayerCapabilitiesGrpBox);
        mLayerCapabilitiesToggleSelectionButton->setObjectName(QString::fromUtf8("mLayerCapabilitiesToggleSelectionButton"));
        mLayerCapabilitiesToggleSelectionButton->setEnabled(false);

        gridLayout_19->addWidget(mLayerCapabilitiesToggleSelectionButton, 3, 0, 1, 1);

        mShowSpatialLayersCheckBox = new QCheckBox(mLayerCapabilitiesGrpBox);
        mShowSpatialLayersCheckBox->setObjectName(QString::fromUtf8("mShowSpatialLayersCheckBox"));
        mShowSpatialLayersCheckBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout_19->addWidget(mShowSpatialLayersCheckBox, 3, 2, 1, 1);

        mLayerCapabilitiesTreeFilterLineEdit = new QgsFilterLineEdit(mLayerCapabilitiesGrpBox);
        mLayerCapabilitiesTreeFilterLineEdit->setObjectName(QString::fromUtf8("mLayerCapabilitiesTreeFilterLineEdit"));

        gridLayout_19->addWidget(mLayerCapabilitiesTreeFilterLineEdit, 3, 3, 1, 1);


        mTab_DataSourcesGridLayout->addWidget(mLayerCapabilitiesGrpBox, 1, 0, 1, 1);

        mEditingBehaviorGrpBox = new QGroupBox(mTab_DataSources);
        mEditingBehaviorGrpBox->setObjectName(QString::fromUtf8("mEditingBehaviorGrpBox"));
        gridLayout_8 = new QGridLayout(mEditingBehaviorGrpBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        mTransactionModeComboBox = new QComboBox(mEditingBehaviorGrpBox);
        mTransactionModeComboBox->setObjectName(QString::fromUtf8("mTransactionModeComboBox"));

        gridLayout_8->addWidget(mTransactionModeComboBox, 0, 1, 1, 1);

        mTransactionModeLabel = new QLabel(mEditingBehaviorGrpBox);
        mTransactionModeLabel->setObjectName(QString::fromUtf8("mTransactionModeLabel"));

        gridLayout_8->addWidget(mTransactionModeLabel, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        mEvaluateDefaultValues = new QCheckBox(mEditingBehaviorGrpBox);
        mEvaluateDefaultValues->setObjectName(QString::fromUtf8("mEvaluateDefaultValues"));

        gridLayout_8->addWidget(mEvaluateDefaultValues, 1, 0, 1, 3);

        mCheckRememberEditStatus = new QCheckBox(mEditingBehaviorGrpBox);
        mCheckRememberEditStatus->setObjectName(QString::fromUtf8("mCheckRememberEditStatus"));

        gridLayout_8->addWidget(mCheckRememberEditStatus, 2, 0, 1, 3);


        mTab_DataSourcesGridLayout->addWidget(mEditingBehaviorGrpBox, 0, 0, 1, 1);

        mDatasourcesAdvancedSettingsGrpBox = new QGroupBox(mTab_DataSources);
        mDatasourcesAdvancedSettingsGrpBox->setObjectName(QString::fromUtf8("mDatasourcesAdvancedSettingsGrpBox"));
        gridLayout_13 = new QGridLayout(mDatasourcesAdvancedSettingsGrpBox);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        mTrustProjectCheckBox = new QCheckBox(mDatasourcesAdvancedSettingsGrpBox);
        mTrustProjectCheckBox->setObjectName(QString::fromUtf8("mTrustProjectCheckBox"));

        gridLayout_13->addWidget(mTrustProjectCheckBox, 0, 0, 1, 1);


        mTab_DataSourcesGridLayout->addWidget(mDatasourcesAdvancedSettingsGrpBox, 2, 0, 1, 1);

        mOptionsStackedWidget->addWidget(mTab_DataSources);
        mTabRelations = new QWidget();
        mTabRelations->setObjectName(QString::fromUtf8("mTabRelations"));
        gridLayout_16 = new QGridLayout(mTabRelations);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget->addWidget(mTabRelations);
        mTab_Variables = new QWidget();
        mTab_Variables->setObjectName(QString::fromUtf8("mTab_Variables"));
        verticalLayout_23 = new QVBoxLayout(mTab_Variables);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(mTab_Variables);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_4);
        mVariableEditor->setObjectName(QString::fromUtf8("mVariableEditor"));
        mVariableEditor->setProperty("settingGroup", QVariant(QString::fromUtf8("projectProperties")));

        horizontalLayout_7->addWidget(mVariableEditor);


        verticalLayout_23->addWidget(groupBox_4);

        mOptionsStackedWidget->addWidget(mTab_Variables);
        mProjOptsMacros = new QWidget();
        mProjOptsMacros->setObjectName(QString::fromUtf8("mProjOptsMacros"));
        verticalLayout_15 = new QVBoxLayout(mProjOptsMacros);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QgsScrollArea(mProjOptsMacros);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 158, 39));
        verticalLayout_17 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, -1, 0);
        grpPythonMacros = new QGroupBox(scrollAreaWidgetContents_6);
        grpPythonMacros->setObjectName(QString::fromUtf8("grpPythonMacros"));
        grpPythonMacros->setCheckable(true);
        grpPythonMacros->setChecked(false);
        verticalLayout_16 = new QVBoxLayout(grpPythonMacros);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        ptePythonMacros = new QgsCodeEditorPython(grpPythonMacros);
        ptePythonMacros->setObjectName(QString::fromUtf8("ptePythonMacros"));

        verticalLayout_16->addWidget(ptePythonMacros);


        verticalLayout_17->addWidget(grpPythonMacros);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_15->addWidget(scrollArea_6);

        mOptionsStackedWidget->addWidget(mProjOptsMacros);
        mProjOptsOWS = new QWidget();
        mProjOptsOWS->setObjectName(QString::fromUtf8("mProjOptsOWS"));
        verticalLayout_14 = new QVBoxLayout(mProjOptsOWS);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QgsScrollArea(mProjOptsOWS);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(scrollArea_5->sizePolicy().hasHeightForWidth());
        scrollArea_5->setSizePolicy(sizePolicy10);
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 627, 1396));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        OWSTabWidget = new QTabWidget(scrollAreaWidgetContents_5);
        OWSTabWidget->setObjectName(QString::fromUtf8("OWSTabWidget"));
        sizePolicy1.setHeightForWidth(OWSTabWidget->sizePolicy().hasHeightForWidth());
        OWSTabWidget->setSizePolicy(sizePolicy1);
        services = new QWidget();
        services->setObjectName(QString::fromUtf8("services"));
        gridLayout_27 = new QGridLayout(services);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        grpOWSServiceCapabilities = new QgsCollapsibleGroupBox(services);
        grpOWSServiceCapabilities->setObjectName(QString::fromUtf8("grpOWSServiceCapabilities"));
        grpOWSServiceCapabilities->setCheckable(true);
        grpOWSServiceCapabilities->setChecked(false);
        grpOWSServiceCapabilities->setProperty("collapsed", QVariant(false));
        grpOWSServiceCapabilities->setProperty("syncGroup", QVariant(QString::fromUtf8("projowsserver")));
        grpOWSServiceCapabilities->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_6 = new QGridLayout(grpOWSServiceCapabilities);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(-1, 9, -1, -1);
        mWMSContactPositionCb = new QComboBox(grpOWSServiceCapabilities);
        mWMSContactPositionCb->setObjectName(QString::fromUtf8("mWMSContactPositionCb"));
        mWMSContactPositionCb->setEditable(true);

        gridLayout_6->addWidget(mWMSContactPositionCb, 16, 1, 1, 2);

        mWMSOnlineResourceExpressionButton = new QgsPropertyOverrideButton(grpOWSServiceCapabilities);
        mWMSOnlineResourceExpressionButton->setObjectName(QString::fromUtf8("mWMSOnlineResourceExpressionButton"));

        gridLayout_6->addWidget(mWMSOnlineResourceExpressionButton, 11, 2, 1, 1);

        mWMSTitle = new QLineEdit(grpOWSServiceCapabilities);
        mWMSTitle->setObjectName(QString::fromUtf8("mWMSTitle"));

        gridLayout_6->addWidget(mWMSTitle, 8, 1, 1, 2);

        label_6 = new QLabel(grpOWSServiceCapabilities);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 7, 0, 1, 1);

        label_10 = new QLabel(grpOWSServiceCapabilities);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 8, 0, 1, 1);

        label_9 = new QLabel(grpOWSServiceCapabilities);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 15, 0, 1, 1);

        mWMSAccessConstraintsCb = new QComboBox(grpOWSServiceCapabilities);
        mWMSAccessConstraintsCb->setObjectName(QString::fromUtf8("mWMSAccessConstraintsCb"));
        mWMSAccessConstraintsCb->setEditable(true);

        gridLayout_6->addWidget(mWMSAccessConstraintsCb, 21, 1, 1, 2);

        mWMSContactPerson = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactPerson->setObjectName(QString::fromUtf8("mWMSContactPerson"));

        gridLayout_6->addWidget(mWMSContactPerson, 15, 1, 1, 2);

        mWMSFeesLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSFeesLabel->setObjectName(QString::fromUtf8("mWMSFeesLabel"));

        gridLayout_6->addWidget(mWMSFeesLabel, 20, 0, 1, 1);

        mWMSAbstract = new QTextEdit(grpOWSServiceCapabilities);
        mWMSAbstract->setObjectName(QString::fromUtf8("mWMSAbstract"));
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(mWMSAbstract->sizePolicy().hasHeightForWidth());
        mWMSAbstract->setSizePolicy(sizePolicy11);

        gridLayout_6->addWidget(mWMSAbstract, 19, 1, 1, 2);

        label_13 = new QLabel(grpOWSServiceCapabilities);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 17, 0, 1, 1);

        label_11 = new QLabel(grpOWSServiceCapabilities);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 9, 0, 1, 1);

        mWMSContactPhone = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactPhone->setObjectName(QString::fromUtf8("mWMSContactPhone"));

        gridLayout_6->addWidget(mWMSContactPhone, 18, 1, 1, 2);

        label_12 = new QLabel(grpOWSServiceCapabilities);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 18, 0, 1, 1);

        mWMSFeesCb = new QComboBox(grpOWSServiceCapabilities);
        mWMSFeesCb->setObjectName(QString::fromUtf8("mWMSFeesCb"));
        mWMSFeesCb->setEditable(true);

        gridLayout_6->addWidget(mWMSFeesCb, 20, 1, 1, 2);

        mWMSOnlineResourceLineEdit = new QLineEdit(grpOWSServiceCapabilities);
        mWMSOnlineResourceLineEdit->setObjectName(QString::fromUtf8("mWMSOnlineResourceLineEdit"));

        gridLayout_6->addWidget(mWMSOnlineResourceLineEdit, 11, 1, 1, 1);

        mWMSKeywordListLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSKeywordListLabel->setObjectName(QString::fromUtf8("mWMSKeywordListLabel"));

        gridLayout_6->addWidget(mWMSKeywordListLabel, 22, 0, 1, 1);

        mWMSContactOrganization = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactOrganization->setObjectName(QString::fromUtf8("mWMSContactOrganization"));

        gridLayout_6->addWidget(mWMSContactOrganization, 9, 1, 1, 2);

        wmsWarningBox = new QFrame(grpOWSServiceCapabilities);
        wmsWarningBox->setObjectName(QString::fromUtf8("wmsWarningBox"));
        wmsWarningBox->setAutoFillBackground(false);
        wmsWarningBox->setStyleSheet(QString::fromUtf8(""));
        wmsWarningBox->setFrameShape(QFrame::StyledPanel);
        wmsWarningBox->setFrameShadow(QFrame::Raised);
        gridLayout_23 = new QGridLayout(wmsWarningBox);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        warningLabel_2 = new QLabel(wmsWarningBox);
        warningLabel_2->setObjectName(QString::fromUtf8("warningLabel_2"));
        warningLabel_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255,165,0,0.3);"));
        warningLabel_2->setFrameShape(QFrame::NoFrame);
        warningLabel_2->setTextFormat(Qt::AutoText);
        warningLabel_2->setWordWrap(true);
        warningLabel_2->setMargin(9);

        gridLayout_23->addWidget(warningLabel_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(wmsWarningBox, 6, 0, 1, 3);

        mWMSKeywordList = new QLineEdit(grpOWSServiceCapabilities);
        mWMSKeywordList->setObjectName(QString::fromUtf8("mWMSKeywordList"));

        gridLayout_6->addWidget(mWMSKeywordList, 22, 1, 1, 2);

        label_15 = new QLabel(grpOWSServiceCapabilities);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_6->addWidget(label_15, 19, 0, 1, 1);

        mWMSContactMail = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactMail->setObjectName(QString::fromUtf8("mWMSContactMail"));

        gridLayout_6->addWidget(mWMSContactMail, 17, 1, 1, 2);

        mWMSOnlineResourceLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSOnlineResourceLabel->setObjectName(QString::fromUtf8("mWMSOnlineResourceLabel"));

        gridLayout_6->addWidget(mWMSOnlineResourceLabel, 11, 0, 1, 1);

        label_20 = new QLabel(grpOWSServiceCapabilities);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_6->addWidget(label_20, 16, 0, 1, 1);

        mWMSAccessConstraintsLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSAccessConstraintsLabel->setObjectName(QString::fromUtf8("mWMSAccessConstraintsLabel"));

        gridLayout_6->addWidget(mWMSAccessConstraintsLabel, 21, 0, 1, 1);

        mWMSName = new QLineEdit(grpOWSServiceCapabilities);
        mWMSName->setObjectName(QString::fromUtf8("mWMSName"));

        gridLayout_6->addWidget(mWMSName, 7, 1, 1, 2);


        gridLayout_27->addWidget(grpOWSServiceCapabilities, 0, 0, 1, 1);

        OWSTabWidget->addTab(services, QString());
        wms = new QWidget();
        wms->setObjectName(QString::fromUtf8("wms"));
        gridLayout_25 = new QGridLayout(wms);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        grpWMSLegendMapOptions = new QgsCollapsibleGroupBox(wms);
        grpWMSLegendMapOptions->setObjectName(QString::fromUtf8("grpWMSLegendMapOptions"));
        grpWMSLegendMapOptions->setProperty("collapsed", QVariant(false));
        grpWMSLegendMapOptions->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_29 = new QGridLayout(grpWMSLegendMapOptions);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        mMaxWidthLabel_2 = new QLabel(grpWMSLegendMapOptions);
        mMaxWidthLabel_2->setObjectName(QString::fromUtf8("mMaxWidthLabel_2"));

        gridLayout_9->addWidget(mMaxWidthLabel_2, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        mMaxHeightLineEdit = new QLineEdit(grpWMSLegendMapOptions);
        mMaxHeightLineEdit->setObjectName(QString::fromUtf8("mMaxHeightLineEdit"));

        gridLayout_9->addWidget(mMaxHeightLineEdit, 1, 4, 1, 1);

        mMaxWidthLineEdit = new QLineEdit(grpWMSLegendMapOptions);
        mMaxWidthLineEdit->setObjectName(QString::fromUtf8("mMaxWidthLineEdit"));

        gridLayout_9->addWidget(mMaxWidthLineEdit, 1, 2, 1, 1);

        mMaxHeightLabel = new QLabel(grpWMSLegendMapOptions);
        mMaxHeightLabel->setObjectName(QString::fromUtf8("mMaxHeightLabel"));

        gridLayout_9->addWidget(mMaxHeightLabel, 1, 3, 1, 1);

        label_21 = new QLabel(grpWMSLegendMapOptions);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_9->addWidget(label_21, 0, 0, 1, 5);


        gridLayout_29->addLayout(gridLayout_9, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mWMSImageQualityLabel = new QLabel(grpWMSLegendMapOptions);
        mWMSImageQualityLabel->setObjectName(QString::fromUtf8("mWMSImageQualityLabel"));

        horizontalLayout_10->addWidget(mWMSImageQualityLabel);

        mWMSImageQualitySpinBox = new QgsSpinBox(grpWMSLegendMapOptions);
        mWMSImageQualitySpinBox->setObjectName(QString::fromUtf8("mWMSImageQualitySpinBox"));
        mWMSImageQualitySpinBox->setMinimum(10);
        mWMSImageQualitySpinBox->setMaximum(100);
        mWMSImageQualitySpinBox->setSingleStep(5);
        mWMSImageQualitySpinBox->setValue(90);

        horizontalLayout_10->addWidget(mWMSImageQualitySpinBox);


        gridLayout_29->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_33 = new QLabel(grpWMSLegendMapOptions);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_18->addWidget(label_33);

        mWMSTileBufferSpinBox = new QgsSpinBox(grpWMSLegendMapOptions);
        mWMSTileBufferSpinBox->setObjectName(QString::fromUtf8("mWMSTileBufferSpinBox"));
        mWMSTileBufferSpinBox->setMaximum(1024);

        horizontalLayout_18->addWidget(mWMSTileBufferSpinBox);


        gridLayout_29->addLayout(horizontalLayout_18, 5, 0, 1, 1);

        mWMSDefaultMapUnitsPerMmLayout = new QHBoxLayout();
        mWMSDefaultMapUnitsPerMmLayout->setObjectName(QString::fromUtf8("mWMSDefaultMapUnitsPerMmLayout"));
        mWMSDefaultMapUnitsPerMmLayout->setSizeConstraint(QLayout::SetFixedSize);
        mWMSDefaultMapUnitsPerMmLabel = new QLabel(grpWMSLegendMapOptions);
        mWMSDefaultMapUnitsPerMmLabel->setObjectName(QString::fromUtf8("mWMSDefaultMapUnitsPerMmLabel"));

        mWMSDefaultMapUnitsPerMmLayout->addWidget(mWMSDefaultMapUnitsPerMmLabel);


        gridLayout_29->addLayout(mWMSDefaultMapUnitsPerMmLayout, 6, 0, 1, 1);

        mAddLayerGroupsLegendGraphicCheckBox = new QCheckBox(grpWMSLegendMapOptions);
        mAddLayerGroupsLegendGraphicCheckBox->setObjectName(QString::fromUtf8("mAddLayerGroupsLegendGraphicCheckBox"));

        gridLayout_29->addWidget(mAddLayerGroupsLegendGraphicCheckBox, 0, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        mWMSMaxAtlasFeaturesLabel = new QLabel(grpWMSLegendMapOptions);
        mWMSMaxAtlasFeaturesLabel->setObjectName(QString::fromUtf8("mWMSMaxAtlasFeaturesLabel"));

        horizontalLayout_17->addWidget(mWMSMaxAtlasFeaturesLabel);

        mWMSMaxAtlasFeaturesSpinBox = new QgsSpinBox(grpWMSLegendMapOptions);
        mWMSMaxAtlasFeaturesSpinBox->setObjectName(QString::fromUtf8("mWMSMaxAtlasFeaturesSpinBox"));
        mWMSMaxAtlasFeaturesSpinBox->setMaximum(9999999);
        mWMSMaxAtlasFeaturesSpinBox->setValue(1);

        horizontalLayout_17->addWidget(mWMSMaxAtlasFeaturesSpinBox);


        gridLayout_29->addLayout(horizontalLayout_17, 4, 0, 1, 1);

        mSkipNameForGroupCheckBox = new QCheckBox(grpWMSLegendMapOptions);
        mSkipNameForGroupCheckBox->setObjectName(QString::fromUtf8("mSkipNameForGroupCheckBox"));

        gridLayout_29->addWidget(mSkipNameForGroupCheckBox, 1, 0, 1, 1);


        gridLayout_25->addWidget(grpWMSLegendMapOptions, 20, 0, 1, 2);

        mWMSInspire = new QgsCollapsibleGroupBox(wms);
        mWMSInspire->setObjectName(QString::fromUtf8("mWMSInspire"));
        mWMSInspire->setCheckable(true);
        mWMSInspire->setChecked(false);
        gridLayout_14 = new QGridLayout(mWMSInspire);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        mWMSInspireLanguage = new QComboBox(mWMSInspire);
        mWMSInspireLanguage->setObjectName(QString::fromUtf8("mWMSInspireLanguage"));
        sizePolicy8.setHeightForWidth(mWMSInspireLanguage->sizePolicy().hasHeightForWidth());
        mWMSInspireLanguage->setSizePolicy(sizePolicy8);

        gridLayout_14->addWidget(mWMSInspireLanguage, 0, 1, 1, 1);

        label_7 = new QLabel(mWMSInspire);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_14->addWidget(label_7, 0, 0, 1, 1);

        mWMSInspireScenario2 = new QGroupBox(mWMSInspire);
        mWMSInspireScenario2->setObjectName(QString::fromUtf8("mWMSInspireScenario2"));
        mWMSInspireScenario2->setCheckable(true);
        mWMSInspireScenario2->setChecked(false);
        gridLayout_17 = new QGridLayout(mWMSInspireScenario2);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        mWMSInspireTemporalReference = new QDateEdit(mWMSInspireScenario2);
        mWMSInspireTemporalReference->setObjectName(QString::fromUtf8("mWMSInspireTemporalReference"));
        sizePolicy8.setHeightForWidth(mWMSInspireTemporalReference->sizePolicy().hasHeightForWidth());
        mWMSInspireTemporalReference->setSizePolicy(sizePolicy8);

        gridLayout_17->addWidget(mWMSInspireTemporalReference, 0, 1, 1, 1);

        label_23 = new QLabel(mWMSInspireScenario2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_17->addWidget(label_23, 1, 0, 1, 1);

        mWMSInspireMetadataDate = new QDateEdit(mWMSInspireScenario2);
        mWMSInspireMetadataDate->setObjectName(QString::fromUtf8("mWMSInspireMetadataDate"));
        sizePolicy8.setHeightForWidth(mWMSInspireMetadataDate->sizePolicy().hasHeightForWidth());
        mWMSInspireMetadataDate->setSizePolicy(sizePolicy8);

        gridLayout_17->addWidget(mWMSInspireMetadataDate, 1, 1, 1, 1);

        label_22 = new QLabel(mWMSInspireScenario2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_17->addWidget(label_22, 0, 0, 1, 1);


        gridLayout_14->addWidget(mWMSInspireScenario2, 4, 0, 1, 2);

        mWMSInspireScenario1 = new QGroupBox(mWMSInspire);
        mWMSInspireScenario1->setObjectName(QString::fromUtf8("mWMSInspireScenario1"));
        mWMSInspireScenario1->setCheckable(true);
        mWMSInspireScenario1->setChecked(false);
        gridLayout_15 = new QGridLayout(mWMSInspireScenario1);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        mWMSInspireMetadataUrl = new QLineEdit(mWMSInspireScenario1);
        mWMSInspireMetadataUrl->setObjectName(QString::fromUtf8("mWMSInspireMetadataUrl"));

        gridLayout_15->addWidget(mWMSInspireMetadataUrl, 0, 1, 1, 1);

        label_8 = new QLabel(mWMSInspireScenario1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_15->addWidget(label_8, 0, 0, 1, 1);

        mWMSInspireMetadataUrlType = new QComboBox(mWMSInspireScenario1);
        mWMSInspireMetadataUrlType->addItem(QString());
        mWMSInspireMetadataUrlType->addItem(QString());
        mWMSInspireMetadataUrlType->addItem(QString());
        mWMSInspireMetadataUrlType->setObjectName(QString::fromUtf8("mWMSInspireMetadataUrlType"));

        gridLayout_15->addWidget(mWMSInspireMetadataUrlType, 1, 1, 1, 1);

        label_24 = new QLabel(mWMSInspireScenario1);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_15->addWidget(label_24, 1, 0, 1, 1);


        gridLayout_14->addWidget(mWMSInspireScenario1, 3, 0, 1, 2);


        gridLayout_25->addWidget(mWMSInspire, 3, 0, 1, 2);

        grpWMSLayerOptions = new QgsCollapsibleGroupBox(wms);
        grpWMSLayerOptions->setObjectName(QString::fromUtf8("grpWMSLayerOptions"));
        grpWMSLayerOptions->setProperty("collapsed", QVariant(false));
        grpWMSLayerOptions->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_30 = new QGridLayout(grpWMSLayerOptions);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        mUseAttributeFormSettingsCheckBox = new QCheckBox(grpWMSLayerOptions);
        mUseAttributeFormSettingsCheckBox->setObjectName(QString::fromUtf8("mUseAttributeFormSettingsCheckBox"));

        gridLayout_30->addWidget(mUseAttributeFormSettingsCheckBox, 1, 0, 1, 1);

        mWmsUseLayerIDs = new QCheckBox(grpWMSLayerOptions);
        mWmsUseLayerIDs->setObjectName(QString::fromUtf8("mWmsUseLayerIDs"));

        gridLayout_30->addWidget(mWmsUseLayerIDs, 0, 0, 1, 1);

        grpWMSPrecision = new QHBoxLayout();
        grpWMSPrecision->setObjectName(QString::fromUtf8("grpWMSPrecision"));
        label_5 = new QLabel(grpWMSLayerOptions);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        grpWMSPrecision->addWidget(label_5);

        mWMSPrecisionSpinBox = new QgsSpinBox(grpWMSLayerOptions);
        mWMSPrecisionSpinBox->setObjectName(QString::fromUtf8("mWMSPrecisionSpinBox"));
        mWMSPrecisionSpinBox->setMinimum(1);
        mWMSPrecisionSpinBox->setMaximum(17);
        mWMSPrecisionSpinBox->setValue(8);

        grpWMSPrecision->addWidget(mWMSPrecisionSpinBox);


        gridLayout_30->addLayout(grpWMSPrecision, 4, 0, 1, 1);

        mSegmentizeFeatureInfoGeometryCheckBox = new QCheckBox(grpWMSLayerOptions);
        mSegmentizeFeatureInfoGeometryCheckBox->setObjectName(QString::fromUtf8("mSegmentizeFeatureInfoGeometryCheckBox"));

        gridLayout_30->addWidget(mSegmentizeFeatureInfoGeometryCheckBox, 3, 0, 1, 1);

        mAddWktGeometryCheckBox = new QCheckBox(grpWMSLayerOptions);
        mAddWktGeometryCheckBox->setObjectName(QString::fromUtf8("mAddWktGeometryCheckBox"));

        gridLayout_30->addWidget(mAddWktGeometryCheckBox, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mWMSUrlLabel = new QLabel(grpWMSLayerOptions);
        mWMSUrlLabel->setObjectName(QString::fromUtf8("mWMSUrlLabel"));

        horizontalLayout_2->addWidget(mWMSUrlLabel);

        mWMSUrlLineEdit = new QLineEdit(grpWMSLayerOptions);
        mWMSUrlLineEdit->setObjectName(QString::fromUtf8("mWMSUrlLineEdit"));

        horizontalLayout_2->addWidget(mWMSUrlLineEdit);


        gridLayout_30->addLayout(horizontalLayout_2, 5, 0, 1, 1);


        gridLayout_25->addWidget(grpWMSLayerOptions, 4, 0, 1, 2);

        mLayerRestrictionsGroupBox = new QgsCollapsibleGroupBox(wms);
        mLayerRestrictionsGroupBox->setObjectName(QString::fromUtf8("mLayerRestrictionsGroupBox"));
        mLayerRestrictionsGroupBox->setCheckable(true);
        mLayerRestrictionsGroupBox->setChecked(false);
        mLayerRestrictionsGroupBox->setProperty("collapsed", QVariant(false));
        mLayerRestrictionsGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout = new QGridLayout(mLayerRestrictionsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLayerRestrictionsListWidget = new QListWidget(mLayerRestrictionsGroupBox);
        mLayerRestrictionsListWidget->setObjectName(QString::fromUtf8("mLayerRestrictionsListWidget"));

        gridLayout->addWidget(mLayerRestrictionsListWidget, 0, 0, 1, 3);

        mAddLayerRestrictionButton = new QToolButton(mLayerRestrictionsGroupBox);
        mAddLayerRestrictionButton->setObjectName(QString::fromUtf8("mAddLayerRestrictionButton"));
        mAddLayerRestrictionButton->setIcon(icon14);

        gridLayout->addWidget(mAddLayerRestrictionButton, 1, 0, 1, 1);

        mRemoveLayerRestrictionButton = new QToolButton(mLayerRestrictionsGroupBox);
        mRemoveLayerRestrictionButton->setObjectName(QString::fromUtf8("mRemoveLayerRestrictionButton"));
        mRemoveLayerRestrictionButton->setIcon(icon15);

        gridLayout->addWidget(mRemoveLayerRestrictionButton, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);


        gridLayout_25->addWidget(mLayerRestrictionsGroupBox, 2, 1, 1, 1);

        mWMSPrintLayoutGroupBox = new QgsCollapsibleGroupBox(wms);
        mWMSPrintLayoutGroupBox->setObjectName(QString::fromUtf8("mWMSPrintLayoutGroupBox"));
        mWMSPrintLayoutGroupBox->setCheckable(true);
        mWMSPrintLayoutGroupBox->setChecked(false);
        mWMSPrintLayoutGroupBox->setProperty("collapsed", QVariant(false));
        mWMSPrintLayoutGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_10 = new QGridLayout(mWMSPrintLayoutGroupBox);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        mPrintLayoutListWidget = new QListWidget(mWMSPrintLayoutGroupBox);
        mPrintLayoutListWidget->setObjectName(QString::fromUtf8("mPrintLayoutListWidget"));

        gridLayout_10->addWidget(mPrintLayoutListWidget, 0, 0, 1, 3);

        mAddWMSPrintLayoutButton = new QToolButton(mWMSPrintLayoutGroupBox);
        mAddWMSPrintLayoutButton->setObjectName(QString::fromUtf8("mAddWMSPrintLayoutButton"));
        mAddWMSPrintLayoutButton->setIcon(icon14);

        gridLayout_10->addWidget(mAddWMSPrintLayoutButton, 1, 0, 1, 1);

        mRemoveWMSPrintLayoutButton = new QToolButton(mWMSPrintLayoutGroupBox);
        mRemoveWMSPrintLayoutButton->setObjectName(QString::fromUtf8("mRemoveWMSPrintLayoutButton"));
        mRemoveWMSPrintLayoutButton->setIcon(icon15);

        gridLayout_10->addWidget(mRemoveWMSPrintLayoutButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_25->addWidget(mWMSPrintLayoutGroupBox, 2, 0, 1, 1);

        grpWMSList = new QgsCollapsibleGroupBox(wms);
        grpWMSList->setObjectName(QString::fromUtf8("grpWMSList"));
        grpWMSList->setCheckable(true);
        grpWMSList->setChecked(false);
        grpWMSList->setProperty("collapsed", QVariant(false));
        grpWMSList->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_5 = new QGridLayout(grpWMSList);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mWMSList = new QListWidget(grpWMSList);
        mWMSList->setObjectName(QString::fromUtf8("mWMSList"));

        gridLayout_5->addWidget(mWMSList, 0, 0, 1, 5);

        pbnWMSRemoveSRS = new QToolButton(grpWMSList);
        pbnWMSRemoveSRS->setObjectName(QString::fromUtf8("pbnWMSRemoveSRS"));
        pbnWMSRemoveSRS->setIcon(icon15);

        gridLayout_5->addWidget(pbnWMSRemoveSRS, 1, 1, 1, 1);

        pbnWMSSetUsedSRS = new QPushButton(grpWMSList);
        pbnWMSSetUsedSRS->setObjectName(QString::fromUtf8("pbnWMSSetUsedSRS"));

        gridLayout_5->addWidget(pbnWMSSetUsedSRS, 1, 3, 1, 1);

        pbnWMSAddSRS = new QToolButton(grpWMSList);
        pbnWMSAddSRS->setObjectName(QString::fromUtf8("pbnWMSAddSRS"));
        pbnWMSAddSRS->setIcon(icon14);

        gridLayout_5->addWidget(pbnWMSAddSRS, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 2, 1, 1);


        gridLayout_25->addWidget(grpWMSList, 1, 0, 1, 2);

        grpWMSExt = new QgsCollapsibleGroupBox(wms);
        grpWMSExt->setObjectName(QString::fromUtf8("grpWMSExt"));
        grpWMSExt->setCheckable(true);
        grpWMSExt->setChecked(false);
        grpWMSExt->setProperty("collapsed", QVariant(false));
        grpWMSExt->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_29 = new QVBoxLayout(grpWMSExt);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        mAdvertisedExtentServer = new QgsExtentWidget(grpWMSExt);
        mAdvertisedExtentServer->setObjectName(QString::fromUtf8("mAdvertisedExtentServer"));

        verticalLayout_29->addWidget(mAdvertisedExtentServer);


        gridLayout_25->addWidget(grpWMSExt, 0, 0, 1, 2);

        OWSTabWidget->addTab(wms, QString());
        wmts = new QWidget();
        wmts->setObjectName(QString::fromUtf8("wmts"));
        verticalLayout_26 = new QVBoxLayout(wmts);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        wmtsLayersGroupBox = new QgsCollapsibleGroupBox(wmts);
        wmtsLayersGroupBox->setObjectName(QString::fromUtf8("wmtsLayersGroupBox"));
        verticalLayout_22 = new QVBoxLayout(wmtsLayersGroupBox);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        twWmtsLayers = new QTreeWidget(wmtsLayersGroupBox);
        twWmtsLayers->setObjectName(QString::fromUtf8("twWmtsLayers"));
        QSizePolicy sizePolicy12(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(twWmtsLayers->sizePolicy().hasHeightForWidth());
        twWmtsLayers->setSizePolicy(sizePolicy12);
        twWmtsLayers->setSortingEnabled(true);

        verticalLayout_22->addWidget(twWmtsLayers);


        verticalLayout_26->addWidget(wmtsLayersGroupBox);

        wmtsGridsGroupBox = new QgsCollapsibleGroupBox(wmts);
        wmtsGridsGroupBox->setObjectName(QString::fromUtf8("wmtsGridsGroupBox"));
        verticalLayout_24 = new QVBoxLayout(wmtsGridsGroupBox);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        twWmtsGrids = new QTreeWidget(wmtsGridsGroupBox);
        twWmtsGrids->setObjectName(QString::fromUtf8("twWmtsGrids"));
        twWmtsGrids->setSortingEnabled(true);

        verticalLayout_24->addWidget(twWmtsGrids);


        verticalLayout_26->addWidget(wmtsGridsGroupBox);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        mWMTSMinScaleLabel = new QLabel(wmts);
        mWMTSMinScaleLabel->setObjectName(QString::fromUtf8("mWMTSMinScaleLabel"));

        horizontalLayout_16->addWidget(mWMTSMinScaleLabel);

        mWMTSMinScaleSpinBox = new QgsSpinBox(wmts);
        mWMTSMinScaleSpinBox->setObjectName(QString::fromUtf8("mWMTSMinScaleSpinBox"));
        mWMTSMinScaleSpinBox->setMinimum(1);
        mWMTSMinScaleSpinBox->setMaximum(1000000000);
        mWMTSMinScaleSpinBox->setValue(5000);

        horizontalLayout_16->addWidget(mWMTSMinScaleSpinBox);


        verticalLayout_26->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        mWMTSUrlLabel = new QLabel(wmts);
        mWMTSUrlLabel->setObjectName(QString::fromUtf8("mWMTSUrlLabel"));

        horizontalLayout_15->addWidget(mWMTSUrlLabel);

        mWMTSUrlLineEdit = new QLineEdit(wmts);
        mWMTSUrlLineEdit->setObjectName(QString::fromUtf8("mWMTSUrlLineEdit"));

        horizontalLayout_15->addWidget(mWMTSUrlLineEdit);


        verticalLayout_26->addLayout(horizontalLayout_15);

        OWSTabWidget->addTab(wmts, QString());
        wfs = new QWidget();
        wfs->setObjectName(QString::fromUtf8("wfs"));
        gridLayout_24 = new QGridLayout(wfs);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        pbnWFSLayersSelectAll = new QPushButton(wfs);
        pbnWFSLayersSelectAll->setObjectName(QString::fromUtf8("pbnWFSLayersSelectAll"));

        gridLayout_24->addWidget(pbnWFSLayersSelectAll, 2, 0, 1, 1);

        pbnWFSLayersDeselectAll = new QPushButton(wfs);
        pbnWFSLayersDeselectAll->setObjectName(QString::fromUtf8("pbnWFSLayersDeselectAll"));

        gridLayout_24->addWidget(pbnWFSLayersDeselectAll, 2, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mWFSUrlLabel = new QLabel(wfs);
        mWFSUrlLabel->setObjectName(QString::fromUtf8("mWFSUrlLabel"));

        horizontalLayout_8->addWidget(mWFSUrlLabel);

        mWFSUrlLineEdit = new QLineEdit(wfs);
        mWFSUrlLineEdit->setObjectName(QString::fromUtf8("mWFSUrlLineEdit"));

        horizontalLayout_8->addWidget(mWFSUrlLineEdit);


        gridLayout_24->addLayout(horizontalLayout_8, 3, 0, 1, 2);

        twWFSLayers = new QTableWidget(wfs);
        if (twWFSLayers->columnCount() < 6)
            twWFSLayers->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        twWFSLayers->setObjectName(QString::fromUtf8("twWFSLayers"));
        sizePolicy1.setHeightForWidth(twWFSLayers->sizePolicy().hasHeightForWidth());
        twWFSLayers->setSizePolicy(sizePolicy1);
        twWFSLayers->setSortingEnabled(true);

        gridLayout_24->addWidget(twWFSLayers, 1, 0, 1, 2);

        label_37 = new QLabel(wfs);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        sizePolicy7.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy7);

        gridLayout_24->addWidget(label_37, 0, 0, 1, 2);

        OWSTabWidget->addTab(wfs, QString());
        wcs = new QWidget();
        wcs->setObjectName(QString::fromUtf8("wcs"));
        gridLayout_2 = new QGridLayout(wcs);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        twWCSLayers = new QTableWidget(wcs);
        if (twWCSLayers->columnCount() < 2)
            twWCSLayers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twWCSLayers->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        twWCSLayers->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        twWCSLayers->setObjectName(QString::fromUtf8("twWCSLayers"));
        sizePolicy1.setHeightForWidth(twWCSLayers->sizePolicy().hasHeightForWidth());
        twWCSLayers->setSizePolicy(sizePolicy1);
        twWCSLayers->setSortingEnabled(true);

        gridLayout_2->addWidget(twWCSLayers, 0, 0, 1, 2);

        pbnWCSLayersSelectAll = new QPushButton(wcs);
        pbnWCSLayersSelectAll->setObjectName(QString::fromUtf8("pbnWCSLayersSelectAll"));

        gridLayout_2->addWidget(pbnWCSLayersSelectAll, 1, 0, 1, 1);

        pbnWCSLayersDeselectAll = new QPushButton(wcs);
        pbnWCSLayersDeselectAll->setObjectName(QString::fromUtf8("pbnWCSLayersDeselectAll"));

        gridLayout_2->addWidget(pbnWCSLayersDeselectAll, 1, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mWCSUrlLabel = new QLabel(wcs);
        mWCSUrlLabel->setObjectName(QString::fromUtf8("mWCSUrlLabel"));
        sizePolicy7.setHeightForWidth(mWCSUrlLabel->sizePolicy().hasHeightForWidth());
        mWCSUrlLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_9->addWidget(mWCSUrlLabel);

        mWCSUrlLineEdit = new QLineEdit(wcs);
        mWCSUrlLineEdit->setObjectName(QString::fromUtf8("mWCSUrlLineEdit"));

        horizontalLayout_9->addWidget(mWCSUrlLineEdit);


        gridLayout_2->addLayout(horizontalLayout_9, 2, 0, 1, 2);

        OWSTabWidget->addTab(wcs, QString());

        gridLayout_3->addWidget(OWSTabWidget, 0, 0, 1, 1);

        testlayout = new QGroupBox(scrollAreaWidgetContents_5);
        testlayout->setObjectName(QString::fromUtf8("testlayout"));
        verticalLayout_28 = new QVBoxLayout(testlayout);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        pbnLaunchOWSChecker = new QPushButton(testlayout);
        pbnLaunchOWSChecker->setObjectName(QString::fromUtf8("pbnLaunchOWSChecker"));
        QSizePolicy sizePolicy13(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(pbnLaunchOWSChecker->sizePolicy().hasHeightForWidth());
        pbnLaunchOWSChecker->setSizePolicy(sizePolicy13);

        verticalLayout_28->addWidget(pbnLaunchOWSChecker);

        teOWSChecker = new QTextEdit(testlayout);
        teOWSChecker->setObjectName(QString::fromUtf8("teOWSChecker"));
        teOWSChecker->setEnabled(true);
        sizePolicy1.setHeightForWidth(teOWSChecker->sizePolicy().hasHeightForWidth());
        teOWSChecker->setSizePolicy(sizePolicy1);
        teOWSChecker->setMinimumSize(QSize(0, 0));
        teOWSChecker->setAcceptDrops(true);
        teOWSChecker->setLineWidth(2);
        teOWSChecker->setReadOnly(true);
        teOWSChecker->setAcceptRichText(true);

        verticalLayout_28->addWidget(teOWSChecker);


        gridLayout_3->addWidget(testlayout, 1, 0, 1, 1);


        verticalLayout_13->addLayout(gridLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_13->addItem(verticalSpacer_6);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_14->addWidget(scrollArea_5);

        mOptionsStackedWidget->addWidget(mProjOptsOWS);
        mTemporalOptions = new QWidget();
        mTemporalOptions->setObjectName(QString::fromUtf8("mTemporalOptions"));
        verticalLayout_20 = new QVBoxLayout(mTemporalOptions);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mTemporalOptionsGroup = new QGroupBox(mTemporalOptions);
        mTemporalOptionsGroup->setObjectName(QString::fromUtf8("mTemporalOptionsGroup"));
        gridLayout_22 = new QGridLayout(mTemporalOptionsGroup);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        mStartDateTimeEdit = new QgsDateTimeEdit(mTemporalOptionsGroup);
        mStartDateTimeEdit->setObjectName(QString::fromUtf8("mStartDateTimeEdit"));
        mStartDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_22->addWidget(mStartDateTimeEdit, 0, 1, 1, 1);

        label_35 = new QLabel(mTemporalOptionsGroup);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_22->addWidget(label_35, 0, 0, 1, 1);

        mCalculateFromLayerButton = new QPushButton(mTemporalOptionsGroup);
        mCalculateFromLayerButton->setObjectName(QString::fromUtf8("mCalculateFromLayerButton"));

        gridLayout_22->addWidget(mCalculateFromLayerButton, 3, 1, 1, 1);

        label_36 = new QLabel(mTemporalOptionsGroup);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_22->addWidget(label_36, 2, 0, 1, 1);

        mEndDateTimeEdit = new QgsDateTimeEdit(mTemporalOptionsGroup);
        mEndDateTimeEdit->setObjectName(QString::fromUtf8("mEndDateTimeEdit"));
        mEndDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_22->addWidget(mEndDateTimeEdit, 2, 1, 1, 1);

        gridLayout_22->setColumnStretch(1, 1);

        verticalLayout_20->addWidget(mTemporalOptionsGroup);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_2);

        mOptionsStackedWidget->addWidget(mTemporalOptions);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        gridLayout_21->addWidget(mOptionsSplitter, 0, 0, 1, 1);

        mButtonBoxFrame = new QFrame(QgsProjectPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        sizePolicy3.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy3);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout_21->addWidget(mButtonBoxFrame, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(pbnCanvasColor);
        label_4->setBuddy(titleEdit);
        label_30->setBuddy(titleEdit);
        textLabel1->setBuddy(pbnSelectionColor);
        label_3->setBuddy(cbxAbsolutePath);
        label_10->setBuddy(mWMSTitle);
        label_9->setBuddy(mWMSContactPerson);
        label_11->setBuddy(mWMSContactOrganization);
        label_12->setBuddy(mWMSContactPhone);
        label_15->setBuddy(mWMSAbstract);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mProjectFileLineEdit);
        QWidget::setTabOrder(mProjectFileLineEdit, mButtonOpenProjectFolder);
        QWidget::setTabOrder(mButtonOpenProjectFolder, mProjectHomeLineEdit);
        QWidget::setTabOrder(mProjectHomeLineEdit, mButtonSetProjectHome);
        QWidget::setTabOrder(mButtonSetProjectHome, titleEdit);
        QWidget::setTabOrder(titleEdit, pbnSelectionColor);
        QWidget::setTabOrder(pbnSelectionColor, pbnCanvasColor);
        QWidget::setTabOrder(pbnCanvasColor, cbxAbsolutePath);
        QWidget::setTabOrder(cbxAbsolutePath, mMapTileRenderingCheckBox);
        QWidget::setTabOrder(mMapTileRenderingCheckBox, mCheckBoxRememberAttributeTables);
        QWidget::setTabOrder(mCheckBoxRememberAttributeTables, cmbEllipsoid);
        QWidget::setTabOrder(cmbEllipsoid, leSemiMajor);
        QWidget::setTabOrder(leSemiMajor, leSemiMinor);
        QWidget::setTabOrder(leSemiMinor, mDistanceUnitsCombo);
        QWidget::setTabOrder(mDistanceUnitsCombo, mAreaUnitsCombo);
        QWidget::setTabOrder(mAreaUnitsCombo, mScaleMethodWidget);
        QWidget::setTabOrder(mScaleMethodWidget, mCoordinateDisplayComboBox);
        QWidget::setTabOrder(mCoordinateDisplayComboBox, mCustomizeCoordinateFormatButton);
        QWidget::setTabOrder(mCustomizeCoordinateFormatButton, radAutomatic);
        QWidget::setTabOrder(radAutomatic, radManual);
        QWidget::setTabOrder(radManual, spinBoxDP);
        QWidget::setTabOrder(spinBoxDP, mCoordinateOrderComboBox);
        QWidget::setTabOrder(mCoordinateOrderComboBox, mCustomizeBearingFormatButton);
        QWidget::setTabOrder(mCustomizeBearingFormatButton, cbtsLocale);
        QWidget::setTabOrder(cbtsLocale, generateTsFileButton);
        QWidget::setTabOrder(generateTsFileButton, grpProjectScales);
        QWidget::setTabOrder(grpProjectScales, lstScales);
        QWidget::setTabOrder(lstScales, pbnAddScale);
        QWidget::setTabOrder(pbnAddScale, pbnRemoveScale);
        QWidget::setTabOrder(pbnRemoveScale, pbnImportScales);
        QWidget::setTabOrder(pbnImportScales, pbnExportScales);
        QWidget::setTabOrder(pbnExportScales, mExtentGroupBox);
        QWidget::setTabOrder(mExtentGroupBox, scrollArea);
        QWidget::setTabOrder(scrollArea, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mShowDatumTransformDialogCheckBox);
        QWidget::setTabOrder(mShowDatumTransformDialogCheckBox, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mStyleMarkerSymbol);
        QWidget::setTabOrder(mStyleMarkerSymbol, mStyleLineSymbol);
        QWidget::setTabOrder(mStyleLineSymbol, mStyleFillSymbol);
        QWidget::setTabOrder(mStyleFillSymbol, mStyleColorRampSymbol);
        QWidget::setTabOrder(mStyleColorRampSymbol, mStyleTextFormat);
        QWidget::setTabOrder(mStyleTextFormat, mDefaultOpacityWidget);
        QWidget::setTabOrder(mDefaultOpacityWidget, cbxStyleRandomColors);
        QWidget::setTabOrder(cbxStyleRandomColors, mListStyleDatabases);
        QWidget::setTabOrder(mListStyleDatabases, mButtonAddStyleDatabase);
        QWidget::setTabOrder(mButtonAddStyleDatabase, mButtonRemoveStyleDatabase);
        QWidget::setTabOrder(mButtonRemoveStyleDatabase, mButtonNewStyleDatabase);
        QWidget::setTabOrder(mButtonNewStyleDatabase, mTransactionModeComboBox);
        QWidget::setTabOrder(mTransactionModeComboBox, mEvaluateDefaultValues);
        QWidget::setTabOrder(mEvaluateDefaultValues, mCheckRememberEditStatus);
        QWidget::setTabOrder(mCheckRememberEditStatus, mLayerCapabilitiesTree);
        QWidget::setTabOrder(mLayerCapabilitiesTree, mLayerCapabilitiesToggleSelectionButton);
        QWidget::setTabOrder(mLayerCapabilitiesToggleSelectionButton, mShowSpatialLayersCheckBox);
        QWidget::setTabOrder(mShowSpatialLayersCheckBox, mLayerCapabilitiesTreeFilterLineEdit);
        QWidget::setTabOrder(mLayerCapabilitiesTreeFilterLineEdit, mTrustProjectCheckBox);
        QWidget::setTabOrder(mTrustProjectCheckBox, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, grpPythonMacros);
        QWidget::setTabOrder(grpPythonMacros, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, OWSTabWidget);
        QWidget::setTabOrder(OWSTabWidget, grpOWSServiceCapabilities);
        QWidget::setTabOrder(grpOWSServiceCapabilities, mWMSName);
        QWidget::setTabOrder(mWMSName, mWMSTitle);
        QWidget::setTabOrder(mWMSTitle, mWMSContactOrganization);
        QWidget::setTabOrder(mWMSContactOrganization, mWMSOnlineResourceLineEdit);
        QWidget::setTabOrder(mWMSOnlineResourceLineEdit, mWMSOnlineResourceExpressionButton);
        QWidget::setTabOrder(mWMSOnlineResourceExpressionButton, mWMSContactPerson);
        QWidget::setTabOrder(mWMSContactPerson, mWMSContactPositionCb);
        QWidget::setTabOrder(mWMSContactPositionCb, mWMSContactMail);
        QWidget::setTabOrder(mWMSContactMail, mWMSContactPhone);
        QWidget::setTabOrder(mWMSContactPhone, mWMSAbstract);
        QWidget::setTabOrder(mWMSAbstract, mWMSFeesCb);
        QWidget::setTabOrder(mWMSFeesCb, mWMSAccessConstraintsCb);
        QWidget::setTabOrder(mWMSAccessConstraintsCb, mWMSKeywordList);
        QWidget::setTabOrder(mWMSKeywordList, grpWMSExt);
        QWidget::setTabOrder(grpWMSExt, grpWMSList);
        QWidget::setTabOrder(grpWMSList, mWMSList);
        QWidget::setTabOrder(mWMSList, pbnWMSAddSRS);
        QWidget::setTabOrder(pbnWMSAddSRS, pbnWMSRemoveSRS);
        QWidget::setTabOrder(pbnWMSRemoveSRS, pbnWMSSetUsedSRS);
        QWidget::setTabOrder(pbnWMSSetUsedSRS, mWMSPrintLayoutGroupBox);
        QWidget::setTabOrder(mWMSPrintLayoutGroupBox, mPrintLayoutListWidget);
        QWidget::setTabOrder(mPrintLayoutListWidget, mAddWMSPrintLayoutButton);
        QWidget::setTabOrder(mAddWMSPrintLayoutButton, mRemoveWMSPrintLayoutButton);
        QWidget::setTabOrder(mRemoveWMSPrintLayoutButton, mLayerRestrictionsGroupBox);
        QWidget::setTabOrder(mLayerRestrictionsGroupBox, mLayerRestrictionsListWidget);
        QWidget::setTabOrder(mLayerRestrictionsListWidget, mAddLayerRestrictionButton);
        QWidget::setTabOrder(mAddLayerRestrictionButton, mRemoveLayerRestrictionButton);
        QWidget::setTabOrder(mRemoveLayerRestrictionButton, mWMSInspire);
        QWidget::setTabOrder(mWMSInspire, mWMSInspireLanguage);
        QWidget::setTabOrder(mWMSInspireLanguage, mWMSInspireScenario1);
        QWidget::setTabOrder(mWMSInspireScenario1, mWMSInspireMetadataUrl);
        QWidget::setTabOrder(mWMSInspireMetadataUrl, mWMSInspireMetadataUrlType);
        QWidget::setTabOrder(mWMSInspireMetadataUrlType, mWMSInspireScenario2);
        QWidget::setTabOrder(mWMSInspireScenario2, mWMSInspireTemporalReference);
        QWidget::setTabOrder(mWMSInspireTemporalReference, mWMSInspireMetadataDate);
        QWidget::setTabOrder(mWMSInspireMetadataDate, mWmsUseLayerIDs);
        QWidget::setTabOrder(mWmsUseLayerIDs, mUseAttributeFormSettingsCheckBox);
        QWidget::setTabOrder(mUseAttributeFormSettingsCheckBox, mAddWktGeometryCheckBox);
        QWidget::setTabOrder(mAddWktGeometryCheckBox, mSegmentizeFeatureInfoGeometryCheckBox);
        QWidget::setTabOrder(mSegmentizeFeatureInfoGeometryCheckBox, mWMSPrecisionSpinBox);
        QWidget::setTabOrder(mWMSPrecisionSpinBox, mWMSUrlLineEdit);
        QWidget::setTabOrder(mWMSUrlLineEdit, mAddLayerGroupsLegendGraphicCheckBox);
        QWidget::setTabOrder(mAddLayerGroupsLegendGraphicCheckBox, mSkipNameForGroupCheckBox);
        QWidget::setTabOrder(mSkipNameForGroupCheckBox, mMaxWidthLineEdit);
        QWidget::setTabOrder(mMaxWidthLineEdit, mMaxHeightLineEdit);
        QWidget::setTabOrder(mMaxHeightLineEdit, mWMSImageQualitySpinBox);
        QWidget::setTabOrder(mWMSImageQualitySpinBox, mWMSMaxAtlasFeaturesSpinBox);
        QWidget::setTabOrder(mWMSMaxAtlasFeaturesSpinBox, mWMTSMinScaleSpinBox);
        QWidget::setTabOrder(mWMTSMinScaleSpinBox, mWMSTileBufferSpinBox);
        QWidget::setTabOrder(mWMSTileBufferSpinBox, mWMTSUrlLineEdit);
        QWidget::setTabOrder(mWMTSUrlLineEdit, twWFSLayers);
        QWidget::setTabOrder(twWFSLayers, pbnWFSLayersSelectAll);
        QWidget::setTabOrder(pbnWFSLayersSelectAll, pbnWFSLayersDeselectAll);
        QWidget::setTabOrder(pbnWFSLayersDeselectAll, mWFSUrlLineEdit);
        QWidget::setTabOrder(mWFSUrlLineEdit, twWCSLayers);
        QWidget::setTabOrder(twWCSLayers, pbnWCSLayersSelectAll);
        QWidget::setTabOrder(pbnWCSLayersSelectAll, pbnWCSLayersDeselectAll);
        QWidget::setTabOrder(pbnWCSLayersDeselectAll, mWCSUrlLineEdit);
        QWidget::setTabOrder(mWCSUrlLineEdit, pbnLaunchOWSChecker);
        QWidget::setTabOrder(pbnLaunchOWSChecker, teOWSChecker);
        QWidget::setTabOrder(teOWSChecker, mStartDateTimeEdit);
        QWidget::setTabOrder(mStartDateTimeEdit, mEndDateTimeEdit);
        QWidget::setTabOrder(mEndDateTimeEdit, mCalculateFromLayerButton);
        QWidget::setTabOrder(mCalculateFromLayerButton, mCoordinateCrs);
        QWidget::setTabOrder(mCoordinateCrs, twWmtsGrids);
        QWidget::setTabOrder(twWmtsGrids, twWmtsLayers);
        QWidget::setTabOrder(twWmtsLayers, mColorModel);
        QWidget::setTabOrder(mColorModel, mRemoveIccProfile);
        QWidget::setTabOrder(mRemoveIccProfile, mSaveIccProfile);
        QWidget::setTabOrder(mSaveIccProfile, mAddIccProfile);
        QWidget::setTabOrder(mAddIccProfile, mButtonAddColor);
        QWidget::setTabOrder(mButtonAddColor, mButtonRemoveColor);
        QWidget::setTabOrder(mButtonRemoveColor, mButtonCopyColors);
        QWidget::setTabOrder(mButtonCopyColors, mButtonPasteColors);
        QWidget::setTabOrder(mButtonPasteColors, mButtonImportColors);
        QWidget::setTabOrder(mButtonImportColors, mButtonExportColors);

        retranslateUi(QgsProjectPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);
        OWSTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsProjectPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProjectPropertiesBase)
    {
        QgsProjectPropertiesBase->setWindowTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Project Properties", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "General", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "General", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Metadata", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "View Settings", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem2->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "View Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "CRS", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem3->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Coordinate Reference System", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Transformations", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem4->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Coordinate transformations and operations", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Styles", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem5->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Styles", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Colors", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Data Sources", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem7->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Data sources", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Relations", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem8->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Relations", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem9 = mOptionsListWidget->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Variables", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem9->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Variables", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem10 = mOptionsListWidget->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Macros", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem10->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Macros", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem11 = mOptionsListWidget->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "QGIS Server", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem11->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "WMS/WFS/WCS Server Configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem12 = mOptionsListWidget->item(12);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Temporal", nullptr));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        titleBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "General Settings", nullptr));
#if QT_CONFIG(tooltip)
        mProjectHomeLineEdit->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Project home path. Leave blank to use the current project file location.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mButtonSetProjectHome->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Set the project home path", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonSetProjectHome->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "\342\200\246", nullptr));
        pbnSelectionColor->setText(QString());
        label->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Back&ground color", nullptr));
        pbnCanvasColor->setText(QString());
#if QT_CONFIG(tooltip)
        mMapTileRenderingCheckBox->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Checking this setting avoids visible edge artifacts when rendering this project as separate map tiles. Rendering performance will be degraded.", nullptr));
#endif // QT_CONFIG(tooltip)
        mMapTileRenderingCheckBox->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Avoid artifacts when project is rendered as map tiles (degrades performance)", nullptr));
        label_4->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Pro&ject file", nullptr));
#if QT_CONFIG(tooltip)
        mButtonOpenProjectFolder->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Open folder containing the project", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonOpenProjectFolder->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "\342\200\246", nullptr));
        label_30->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "&Project home", nullptr));
        textLabel1->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Selection color", nullptr));
        label_2->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Project title", nullptr));
#if QT_CONFIG(tooltip)
        titleEdit->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Descriptive project name", nullptr));
#endif // QT_CONFIG(tooltip)
        titleEdit->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Default project title", nullptr));
        label_3->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Sa&ve paths", nullptr));
        mCheckBoxRememberAttributeTables->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Remember attribute tables windows and docks between sessions", nullptr));
        btnGrpMeasureEllipsoid->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Measurements", nullptr));
        label_41->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Semi-major", nullptr));
#if QT_CONFIG(tooltip)
        textLabel1_8->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "For distance, area and angle calculations", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel1_8->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Ellipsoid", nullptr));
        label_28->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Units for distance measurement", nullptr));
        label_29->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Units for area measurement", nullptr));
        label_42->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Semi-minor", nullptr));
        label_32->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Scale calculation method", nullptr));
        mCoordinateDisplayGroup->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Coordinate and Bearing Display", nullptr));
        label_34->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Bearing format", nullptr));
        label_26->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Coordinate precision", nullptr));
        mCustomizeBearingFormatButton->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Customize\342\200\246", nullptr));
        label_25->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Display coordinates using", nullptr));
#if QT_CONFIG(tooltip)
        radAutomatic->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Automatically sets the number of decimal places to use when displaying coordinates", nullptr));
#endif // QT_CONFIG(tooltip)
        radAutomatic->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "A&utomatic", nullptr));
#if QT_CONFIG(tooltip)
        radManual->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Manually set the number of decimal places to use when displaying coordinates", nullptr));
#endif // QT_CONFIG(tooltip)
        radManual->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Manual", nullptr));
#if QT_CONFIG(tooltip)
        spinBoxDP->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "The number of decimal places for the manual option", nullptr));
#endif // QT_CONFIG(tooltip)
        labelDP->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "decimal places", nullptr));
        label_31->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Coordinate order", nullptr));
        label_38->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Coordinate format", nullptr));
        mCustomizeCoordinateFormatButton->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Customize\342\200\246", nullptr));
        label_43->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Coordinate CRS", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Generate Project Translation File", nullptr));
        sourceLanguageLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Source language", nullptr));
        generateTsFileButton->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Generate TS File", nullptr));
        grpProjectScales->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Project Predefined Scales", nullptr));
#if QT_CONFIG(tooltip)
        pbnAddScale->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Add predefined scale", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnAddScale->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnRemoveScale->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Remove selected scale", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnRemoveScale->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnImportScales->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Import from file", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnImportScales->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnExportScales->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Save to file", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnExportScales->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mExtentGroupBox->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "If checked the preset extent will be used as the full extent of the project. If unchecked, the project's full extent will be calculated using the full extent of all layers in the project.", nullptr));
#endif // QT_CONFIG(tooltip)
        mExtentGroupBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Extent (current: none)", nullptr));
        cbxProjectionEnabled->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Project Coordinate Reference System (CRS)", nullptr));
        mDatumTransformGroupBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Datum Transformations", nullptr));
        mShowDatumTransformDialogCheckBox->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Ask for datum transformation if several are available (defined in global setting)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Default Symbols", nullptr));
        lblStyleLine->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Line", nullptr));
        mStyleFillSymbol->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Configure symbol\342\200\246", nullptr));
        lblStyleColorRamp->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Color Ramp", nullptr));
        mStyleMarkerSymbol->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Configure symbol\342\200\246", nullptr));
        lblStyleMarker->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Marker", nullptr));
        lblStyleFill->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Fill", nullptr));
        mStyleLineSymbol->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Configure symbol\342\200\246", nullptr));
        mStyleColorRampSymbol->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Configure color ramp\342\200\246", nullptr));
        lblStyleTextFormat->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Text Format", nullptr));
        mStyleTextFormat->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Configure text format\342\200\246", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Symbol Options", nullptr));
        label_27->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Opacity", nullptr));
        cbxStyleRandomColors->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Assign random colors to symbols", nullptr));
        mGroupBoxStyleDatabases->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Style Databases", nullptr));
#if QT_CONFIG(tooltip)
        mButtonAddStyleDatabase->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Add existing style database", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddStyleDatabase->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonRemoveStyleDatabase->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Remove selected style database", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveStyleDatabase->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonNewStyleDatabase->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Create new style database", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonNewStyleDatabase->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "\342\200\246", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Options", nullptr));
        mColorSpaceName->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveIccProfile->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "<html><head/><body><p>Remove selected ICC profile</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveIccProfile->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "...", nullptr));
#if QT_CONFIG(tooltip)
        mSaveIccProfile->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "<html><head/><body><p>Save ICC profile</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mSaveIccProfile->setText(QString());
#if QT_CONFIG(tooltip)
        mAddIccProfile->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "<html><head/><body><p>Load an ICC profile file and attach it to the project.</p><p>Color model will be updated accordingly.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddIccProfile->setText(QString());
#if QT_CONFIG(tooltip)
        mColorModel->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "<html><head/><body><p>Color model used as default when selecting a color in the whole application.</p><p>Any color defined in a different color model than the one specified here will be converted to this color model when exporting a layout.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mIccProfileLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "ICC Profile", nullptr));
        label_14->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Color model", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Project Colors", nullptr));
#if QT_CONFIG(tooltip)
        mButtonCopyColors->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Copy colors", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonCopyColors->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonAddColor->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Add color", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddColor->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonPasteColors->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Paste colors", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonPasteColors->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonRemoveColor->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Remove color", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveColor->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonImportColors->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Import colors", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        mButtonImportColors->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        mButtonImportColors->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonExportColors->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Export colors", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonExportColors->setText(QString());
        mLayerCapabilitiesGrpBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Layer Capabilities", nullptr));
#if QT_CONFIG(tooltip)
        mLayerCapabilitiesToggleSelectionButton->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Inverts the state of the selected checkboxes", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerCapabilitiesToggleSelectionButton->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Toggle Selection", nullptr));
        mShowSpatialLayersCheckBox->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Show spatial layers only", nullptr));
        mEditingBehaviorGrpBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Editing Behavior", nullptr));
        mTransactionModeLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Transaction mode", nullptr));
#if QT_CONFIG(tooltip)
        mEvaluateDefaultValues->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "When enabled, default values will be evaluated as early as possible. This will fill default values in the add feature form already and not only create them on commit. Only supported for postgres, GPKG, spatialite and oracle.", nullptr));
#endif // QT_CONFIG(tooltip)
        mEvaluateDefaultValues->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Evaluate default values on provider side", nullptr));
        mCheckRememberEditStatus->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Remember editable layer status between sessions", nullptr));
        mDatasourcesAdvancedSettingsGrpBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Advanced Settings", nullptr));
#if QT_CONFIG(tooltip)
        mTrustProjectCheckBox->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Speed up project loading by skipping data checks in PostgreSQL layers. Useful in QGIS server context or project with huge database views or materialized views.", nullptr));
#endif // QT_CONFIG(tooltip)
        mTrustProjectCheckBox->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Trust project when data source has no metadata", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Expression Variables", nullptr));
        grpPythonMacros->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "&Python Macros", nullptr));
#if QT_CONFIG(tooltip)
        OWSTabWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        grpOWSServiceCapabilities->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Enable Service Capabilities", nullptr));
#if QT_CONFIG(tooltip)
        mWMSContactPositionCb->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "The contact person position for the service.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        mWMSContactPositionCb->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        mWMSOnlineResourceExpressionButton->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "...", nullptr));
#if QT_CONFIG(tooltip)
        mWMSTitle->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "The title should be brief yet descriptive enough to identify this service.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWMSTitle->setPlaceholderText(QCoreApplication::translate("QgsProjectPropertiesBase", "The title should be brief yet descriptive enough to identify this service.", nullptr));
        label_6->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Short name", nullptr));
        label_10->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Title", nullptr));
        label_9->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "&Person", nullptr));
#if QT_CONFIG(tooltip)
        mWMSAccessConstraintsCb->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Access constraints applied to the service.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mWMSContactPerson->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "The contact person name for the service.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWMSContactPerson->setPlaceholderText(QCoreApplication::translate("QgsProjectPropertiesBase", "The contact person name for the service.", nullptr));
        mWMSFeesLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Fees", nullptr));
#if QT_CONFIG(tooltip)
        mWMSAbstract->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "The abstract is a descriptive narrative providing more information about the service.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWMSAbstract->setDocumentTitle(QString());
        label_13->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "E-Mail", nullptr));
        label_11->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Or&ganization", nullptr));
#if QT_CONFIG(tooltip)
        mWMSContactPhone->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "The contact person phone for the service.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWMSContactPhone->setPlaceholderText(QCoreApplication::translate("QgsProjectPropertiesBase", "The contact person phone for the service.", nullptr));
        label_12->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Phone", nullptr));
#if QT_CONFIG(tooltip)
        mWMSFeesCb->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Fees applied to the service.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mWMSOnlineResourceLineEdit->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "The web site URL of the service provider.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWMSOnlineResourceLineEdit->setPlaceholderText(QCoreApplication::translate("QgsProjectPropertiesBase", "The web site URL of the service provider.", nullptr));
        mWMSKeywordListLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Keyword list", nullptr));
#if QT_CONFIG(tooltip)
        mWMSContactOrganization->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "The name of the service provider.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWMSContactOrganization->setPlaceholderText(QCoreApplication::translate("QgsProjectPropertiesBase", "The name of the service provider.", nullptr));
        warningLabel_2->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "These parameters are used to generate the GetCapabilities document and shall be chosen carefully to avoid interoperability and security issues.", nullptr));
#if QT_CONFIG(tooltip)
        mWMSKeywordList->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "List of keywords separated by comma to help catalog searching.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWMSKeywordList->setPlaceholderText(QCoreApplication::translate("QgsProjectPropertiesBase", "List of keywords separated by comma to help catalog searching.", nullptr));
        label_15->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Abstract", nullptr));
#if QT_CONFIG(tooltip)
        mWMSContactMail->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "The contact person e-mail for the service.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWMSContactMail->setPlaceholderText(QCoreApplication::translate("QgsProjectPropertiesBase", "The contact person e-mail for the service.", nullptr));
        mWMSOnlineResourceLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Online resource", nullptr));
        label_20->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Position", nullptr));
        mWMSAccessConstraintsLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Access constraints", nullptr));
#if QT_CONFIG(tooltip)
        mWMSName->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "A name used to identify the root layer. The short name is a text string used for machine-to-machine communication.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWMSName->setPlaceholderText(QCoreApplication::translate("QgsProjectPropertiesBase", "A name used to identify the root layer. The short name is a text string used for machine-to-machine communication.", nullptr));
        OWSTabWidget->setTabText(OWSTabWidget->indexOf(services), QCoreApplication::translate("QgsProjectPropertiesBase", " Services Capabilities", nullptr));
#if QT_CONFIG(tooltip)
        OWSTabWidget->setTabToolTip(OWSTabWidget->indexOf(services), QCoreApplication::translate("QgsProjectPropertiesBase", "Services capabilities", nullptr));
#endif // QT_CONFIG(tooltip)
        grpWMSLegendMapOptions->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Map and Legend Options", nullptr));
        mMaxWidthLabel_2->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Width", nullptr));
        mMaxHeightLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Height", nullptr));
        label_21->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Maximum image size for GetMap and GetLegendGraphic requests", nullptr));
        mWMSImageQualityLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Quality for JPEG and WebP images (from 0 to 100; 0 - smaller size, 100 - better quality)", nullptr));
#if QT_CONFIG(tooltip)
        label_33->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "When using tiles set this to the size of the larger symbols to avoid cut symbols at tile boundaries. This works by drawing features that are outside the tile extent.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_33->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Tile buffer in pixels", nullptr));
        mWMSDefaultMapUnitsPerMmLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Default map units per mm in legend", nullptr));
        mAddLayerGroupsLegendGraphicCheckBox->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Add layer groups in GetLegendGraphic", nullptr));
        mWMSMaxAtlasFeaturesLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Maximum features for Atlas print requests", nullptr));
#if QT_CONFIG(tooltip)
        mSkipNameForGroupCheckBox->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "GetCapabilities response would skip name attribute for group items while leaving title attribute as is, thus showing the group but making it impossible to include the whole group (rather than it's elements) in subsequent GetMap request LAYERS parameter.", nullptr));
#endif // QT_CONFIG(tooltip)
        mSkipNameForGroupCheckBox->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Skip name attribute for groups", nullptr));
        mWMSInspire->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "INSPIRE (European directive)", nullptr));
        label_7->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Service language", nullptr));
        mWMSInspireScenario2->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Scenario &2 - INSPIRE related fields using embedded service metadata", nullptr));
        label_23->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Metadata date", nullptr));
        label_22->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Last revision date", nullptr));
        mWMSInspireScenario1->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Scenario &1 - INSPIRE related fields using referenced external service metadata", nullptr));
        label_8->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Metadata URL", nullptr));
        mWMSInspireMetadataUrlType->setItemText(0, QCoreApplication::translate("QgsProjectPropertiesBase", "application/vnd.iso.19139+xml", nullptr));
        mWMSInspireMetadataUrlType->setItemText(1, QCoreApplication::translate("QgsProjectPropertiesBase", "application/vnd.ogc.csw.GetRecordByIdResponse_xml", nullptr));
        mWMSInspireMetadataUrlType->setItemText(2, QCoreApplication::translate("QgsProjectPropertiesBase", "application/vnd.ogc.csw_xml", nullptr));

        label_24->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "URL mime/type", nullptr));
        grpWMSLayerOptions->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Layer and Feature options", nullptr));
        mUseAttributeFormSettingsCheckBox->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Use attribute form settings for GetFeatureInfo response", nullptr));
        mWmsUseLayerIDs->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Use layer ids as names", nullptr));
        label_5->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "GetFeatureInfo geometry precision (decimal places)", nullptr));
        mSegmentizeFeatureInfoGeometryCheckBox->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Segmentize feature info geometry", nullptr));
        mAddWktGeometryCheckBox->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Add geometry to feature response", nullptr));
        mWMSUrlLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Advertised URL", nullptr));
        mLayerRestrictionsGroupBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Exclude layers", nullptr));
#if QT_CONFIG(tooltip)
        mAddLayerRestrictionButton->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Add layer to exclude", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddLayerRestrictionButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveLayerRestrictionButton->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Remove selected layer", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveLayerRestrictionButton->setText(QString());
        mWMSPrintLayoutGroupBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Excl&ude layouts", nullptr));
#if QT_CONFIG(tooltip)
        mAddWMSPrintLayoutButton->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Add layout to exclude", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddWMSPrintLayoutButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveWMSPrintLayoutButton->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Remove selected layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveWMSPrintLayoutButton->setText(QString());
        grpWMSList->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "CRS restrictions", nullptr));
#if QT_CONFIG(tooltip)
        pbnWMSRemoveSRS->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Remove selected CRS", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbnWMSSetUsedSRS->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Fetch all CRS's from layers", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnWMSSetUsedSRS->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Used", nullptr));
#if QT_CONFIG(tooltip)
        pbnWMSAddSRS->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Add new CRS", nullptr));
#endif // QT_CONFIG(tooltip)
        grpWMSExt->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Ad&vertised extent", nullptr));
        OWSTabWidget->setTabText(OWSTabWidget->indexOf(wms), QCoreApplication::translate("QgsProjectPropertiesBase", "WMS", nullptr));
#if QT_CONFIG(tooltip)
        OWSTabWidget->setTabToolTip(OWSTabWidget->indexOf(wms), QCoreApplication::translate("QgsProjectPropertiesBase", "WMS capabilities", nullptr));
#endif // QT_CONFIG(tooltip)
        wmtsLayersGroupBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Published layers", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = twWmtsLayers->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("QgsProjectPropertiesBase", "JPEG", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsProjectPropertiesBase", "PNG", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsProjectPropertiesBase", "Published", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsProjectPropertiesBase", "Layer", nullptr));
        wmtsGridsGroupBox->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Grids", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = twWmtsGrids->headerItem();
        ___qtreewidgetitem1->setText(6, QCoreApplication::translate("QgsProjectPropertiesBase", "Max. scale", nullptr));
        ___qtreewidgetitem1->setText(5, QCoreApplication::translate("QgsProjectPropertiesBase", "Last level", nullptr));
        ___qtreewidgetitem1->setText(4, QCoreApplication::translate("QgsProjectPropertiesBase", "Min. scale", nullptr));
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("QgsProjectPropertiesBase", "Left", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("QgsProjectPropertiesBase", "Top", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("QgsProjectPropertiesBase", "Published", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("QgsProjectPropertiesBase", "CRS", nullptr));
        mWMTSMinScaleLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Minimum scale", nullptr));
        mWMTSUrlLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Advertised URL", nullptr));
        OWSTabWidget->setTabText(OWSTabWidget->indexOf(wmts), QCoreApplication::translate("QgsProjectPropertiesBase", "WMTS", nullptr));
#if QT_CONFIG(tooltip)
        OWSTabWidget->setTabToolTip(OWSTabWidget->indexOf(wmts), QCoreApplication::translate("QgsProjectPropertiesBase", "WMTS capabilities", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnWFSLayersSelectAll->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Publish All", nullptr));
        pbnWFSLayersDeselectAll->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Unpublish All", nullptr));
        mWFSUrlLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Advertised URL", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twWFSLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twWFSLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Published", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem1->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Layer can be published", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem2 = twWFSLayers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Geometry precision", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem2->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Number of decimal places to consider for geometry precision", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem3 = twWFSLayers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Update", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem3->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Allow features to be edited", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem4 = twWFSLayers->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Insert", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem4->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Allow addition of new features", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem5 = twWFSLayers->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem5->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Allow features to be deleted", nullptr));
#endif // QT_CONFIG(tooltip)
        label_37->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "The WFS capabilities also influences DXF export", nullptr));
        OWSTabWidget->setTabText(OWSTabWidget->indexOf(wfs), QCoreApplication::translate("QgsProjectPropertiesBase", "WFS/OAPIF", nullptr));
#if QT_CONFIG(tooltip)
        OWSTabWidget->setTabToolTip(OWSTabWidget->indexOf(wfs), QCoreApplication::translate("QgsProjectPropertiesBase", "WFS or OAPIF capabilities", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem6 = twWCSLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = twWCSLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Published", nullptr));
        pbnWCSLayersSelectAll->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Select All", nullptr));
        pbnWCSLayersDeselectAll->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Deselect All", nullptr));
        mWCSUrlLabel->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Advertised URL", nullptr));
        OWSTabWidget->setTabText(OWSTabWidget->indexOf(wcs), QCoreApplication::translate("QgsProjectPropertiesBase", "WCS", nullptr));
#if QT_CONFIG(tooltip)
        OWSTabWidget->setTabToolTip(OWSTabWidget->indexOf(wcs), QCoreApplication::translate("QgsProjectPropertiesBase", "WCS capabilities", nullptr));
#endif // QT_CONFIG(tooltip)
        testlayout->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Test Configuration", nullptr));
#if QT_CONFIG(tooltip)
        pbnLaunchOWSChecker->setToolTip(QCoreApplication::translate("QgsProjectPropertiesBase", "Test the configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnLaunchOWSChecker->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Launch", nullptr));
        mTemporalOptionsGroup->setTitle(QCoreApplication::translate("QgsProjectPropertiesBase", "Temporal Options", nullptr));
        mStartDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsProjectPropertiesBase", "M/d/yyyy h:mm AP", nullptr));
        label_35->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Start date", nullptr));
        mCalculateFromLayerButton->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "Calculate from Layers", nullptr));
        label_36->setText(QCoreApplication::translate("QgsProjectPropertiesBase", "End date", nullptr));
        mEndDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsProjectPropertiesBase", "M/d/yyyy h:mm AP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectPropertiesBase: public Ui_QgsProjectPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTPROPERTIESBASE_H
