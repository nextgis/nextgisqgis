/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERPROPERTIESBASE_H
#define UI_QGSVECTORLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorhtml.h"
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldcombobox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsfilterlineedit.h"
#include "qgslayertreeembeddedconfigwidget.h"
#include "qgsmaplayerrefreshsettingswidget.h"
#include "qgsmaplayerserverpropertieswidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalecombobox.h"
#include "qgsscalerangewidget.h"
#include "qgsscalewidget.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"
#include "qgsvariableeditorwidget.h"
#include "qgsvectorlayerlegendwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout_26;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_Information;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *teMetadataViewer;
    QWidget *mOptsPage_Source;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_9;
    QgsCollapsibleGroupBox *groupBox_60;
    QVBoxLayout *verticalLayout_260;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_6;
    QLineEdit *mLayerOrigNameLineEdit;
    QFrame *mDataSourceEncodingFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cboProviderEncoding;
    QSpacerItem *horizontalSpacer_2;
    QgsCollapsibleGroupBox *mCrsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_7;
    QFrame *line_2;
    QgsCollapsibleGroupBox *mSourceGroupBox;
    QgsCollapsibleGroupBox *mGeomGroupBox;
    QVBoxLayout *verticalLayout_31;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pbnIndex;
    QPushButton *pbnUpdateExtents;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_3;
    QgsCollapsibleGroupBox *mSubsetGroupBox;
    QGridLayout *gridLayout_4;
    QPushButton *pbnQueryBuilder;
    QSpacerItem *spacerItem;
    QgsCodeEditorSQL *txtSubsetSQL;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_11;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_18;
    QStackedWidget *widgetStackRenderers;
    QWidget *mOptsPage_Labels;
    QVBoxLayout *verticalLayout_12;
    QFrame *labelingFrame;
    QWidget *mOptsPage_Masks;
    QVBoxLayout *verticalLayout_122;
    QFrame *mMaskingFrame;
    QWidget *mOptsPage_Diagrams;
    QVBoxLayout *verticalLayout_10;
    QFrame *mDiagramFrame;
    QWidget *mOptsPage_SourceFields;
    QVBoxLayout *verticalLayout_29;
    QFrame *mSourceFieldsFrame;
    QWidget *mOptsPage_AttributesForm;
    QVBoxLayout *verticalLayout;
    QFrame *mAttributesFormFrame;
    QWidget *mOptsPage_Joins;
    QVBoxLayout *verticalLayout_17;
    QgsScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_23;
    QTreeWidget *mJoinTreeWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mButtonAddJoin;
    QPushButton *mButtonRemoveJoin;
    QPushButton *mButtonEditJoin;
    QSpacerItem *horizontalSpacer;
    QWidget *mOptsPage_AuxiliaryStorage;
    QVBoxLayout *verticalLayout_15;
    QWidget *mAuxiliaryStorageScrollArea;
    QGridLayout *gridLayout_2000;
    QgsCollapsibleGroupBox *mAuxiliaryStorageInformationGrpBox;
    QGridLayout *gridLayout_11;
    QLineEdit *mAuxiliaryStorageFeaturesLineEdit;
    QLabel *mAuxiliaryStorageFieldsLabel;
    QLabel *mAuxiliaryStorageFeaturesLabel;
    QLineEdit *mAuxiliaryStorageFieldsLineEdit;
    QLabel *mAuxiliaryStorageKeyLabel;
    QLineEdit *mAuxiliaryStorageKeyLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *mAuxiliaryStorageActions;
    QSpacerItem *horizontalSpacer_8;
    QgsCollapsibleGroupBox *mAuxiliaryStorageFieldsGrpBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mAuxiliaryStorageFieldsAddBtn;
    QPushButton *mAuxiliaryStorageFieldsDeleteBtn;
    QSpacerItem *horizontalSpacer_7;
    QTreeWidget *mAuxiliaryStorageFieldsTree;
    QLabel *label_1;
    QWidget *mOptsPage_Actions;
    QVBoxLayout *verticalLayout_16;
    QgsScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_21;
    QFrame *actionOptionsFrame;
    QWidget *mOptsPage_Display;
    QVBoxLayout *verticalLayout_25;
    QWidget *scrollArea_10;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_22;
    QGridLayout *gridLayout_50;
    QgsFieldExpressionWidget *mDisplayExpressionWidget;
    QLabel *labelDisplayNameInfo;
    QCheckBox *mEnableMapTips;
    QGroupBox *mHtmlMapTipGroupBox;
    QVBoxLayout *verticalLayout_35;
    QSplitter *mMapTipSplitter;
    QWidget *mMapTipWidgetContainer;
    QVBoxLayout *verticalLayout_36;
    QgsCodeEditorHTML *mMapTipWidget;
    QHBoxLayout *horizontalLayout_3;
    QgsFieldComboBox *mMapTipFieldComboBox;
    QPushButton *mMapTipInsertFieldButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mMapTipInsertExpressionButton;
    QGroupBox *mMapTipPreviewContainer;
    QLabel *labelMapTipInfo;
    QWidget *mOptsPage_Rendering;
    QVBoxLayout *verticalLayout_19;
    QgsScrollArea *scrollArea_19;
    QWidget *scrollAreaWidgetContents_19;
    QVBoxLayout *verticalLayout_32;
    QgsCollapsibleGroupBox *mScaleVisibilityGroupBox;
    QGridLayout *gridLayout_6;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QGroupBox *mSimplifyDrawingGroupBox;
    QGridLayout *_12;
    QLabel *label_59;
    QLabel *label_56;
    QgsDoubleSpinBox *mSimplifyDrawingSpinBox;
    QLabel *mSimplifyDrawingPx;
    QSpacerItem *horizontalSpacer_40;
    QLabel *mSimplifyAlgorithmLabel;
    QComboBox *mSimplifyAlgorithmComboBox;
    QCheckBox *mSimplifyDrawingAtProvider;
    QLabel *mSimplifyMaxScaleLabel;
    QgsScaleComboBox *mSimplifyMaximumScaleComboBox;
    QgsCollapsibleGroupBox *mUseReferenceScaleGroupBox;
    QGridLayout *gridLayout;
    QFrame *line_4;
    QLabel *label;
    QgsScaleWidget *mReferenceScaleWidget;
    QLabel *label_8;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QRadioButton *mRadioOverrideSelectionSymbol;
    QRadioButton *mRadioDefaultSelectionColor;
    QRadioButton *mRadioOverrideSelectionColor;
    QgsColorButton *mSelectionColorButton;
    QgsSymbolButton *mSelectionSymbolButton;
    QCheckBox *mForceRasterCheckBox;
    QgsMapLayerRefreshSettingsWidget *mRefreshSettingsWidget;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *mRefreshLayerNotificationCheckBox;
    QFrame *mNotificationFrame;
    QHBoxLayout *horizontalLayout_1;
    QCheckBox *mNotificationMessageCheckBox;
    QLineEdit *mNotifyMessagValueLineEdit;
    QSpacerItem *verticalSpacer_2;
    QWidget *mOptsPage_Temporal;
    QVBoxLayout *verticalLayout_20;
    QFrame *temporalFrame;
    QWidget *mOptsPage_Variables;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_9;
    QgsVariableEditorWidget *mVariableEditor;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_27;
    QFrame *metadataFrame;
    QWidget *mOptsPage_DataDependencies;
    QVBoxLayout *verticalLayout_30;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_24;
    QLabel *label1;
    QTreeView *mLayersDependenciesTreeView;
    QLabel *label_4;
    QWidget *mOptsPage_Legend;
    QVBoxLayout *verticalLayout_8;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_34;
    QgsVectorLayerLegendWidget *mLegendWidget;
    QgsCollapsibleGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_22;
    QgsLayerTreeEmbeddedConfigWidget *mLegendConfigEmbeddedWidget;
    QWidget *mOptsPage_Server;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_13;
    QgsMapLayerServerPropertiesWidget *mMapLayerServerPropertiesWidget;
    QgsCollapsibleGroupBox *mWmsDimensionsGrpBx;
    QVBoxLayout *verticalLayout_33;
    QTreeWidget *mWmsDimensionsTreeWidget;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *mButtonAddWmsDimension;
    QPushButton *mButtonEditWmsDimension;
    QPushButton *mButtonRemoveWmsDimension;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout_btnbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorLayerPropertiesBase)
    {
        if (QgsVectorLayerPropertiesBase->objectName().isEmpty())
            QgsVectorLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsVectorLayerPropertiesBase"));
        QgsVectorLayerPropertiesBase->resize(849, 765);
        QgsVectorLayerPropertiesBase->setMinimumSize(QSize(825, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/qgis-icon-16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QgsVectorLayerPropertiesBase->setWindowIcon(icon);
        verticalLayout_26 = new QVBoxLayout(QgsVectorLayerPropertiesBase);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        mOptionsSplitter = new QSplitter(QgsVectorLayerPropertiesBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Orientation::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::Shape::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QString::fromUtf8("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelmask.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/diagram.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mSourceFields.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionFormView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/join.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem8->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mIconAuxiliaryStorage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem9->setIcon(icon10);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/action.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem10->setIcon(icon11);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/display.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem11->setIcon(icon12);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem12->setIcon(icon13);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/temporal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem13->setIcon(icon14);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem14->setIcon(icon15);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem15->setIcon(icon16);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/themes/default/dependencies.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem16 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem16->setIcon(icon17);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/themes/default/legend.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem17 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem17->setIcon(icon18);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/network_and_proxy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem18 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem18->setIcon(icon19);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::TextElideMode::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::ResizeMode::Adjust);
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
        mOptionsFrame->setFrameShape(QFrame::Shape::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptsPage_Information = new QWidget();
        mOptsPage_Information->setObjectName(QString::fromUtf8("mOptsPage_Information"));
        verticalLayout_5 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(mOptsPage_Information);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_7 = new QVBoxLayout(frame);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        teMetadataViewer = new QTextBrowser(frame);
        teMetadataViewer->setObjectName(QString::fromUtf8("teMetadataViewer"));
        teMetadataViewer->setFrameShape(QFrame::Shape::NoFrame);

        verticalLayout_7->addWidget(teMetadataViewer);


        verticalLayout_5->addWidget(frame);

        mOptionsStackedWidget->addWidget(mOptsPage_Information);
        mOptsPage_Source = new QWidget();
        mOptsPage_Source->setObjectName(QString::fromUtf8("mOptsPage_Source"));
        verticalLayout_6 = new QVBoxLayout(mOptsPage_Source);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QgsScrollArea(mOptsPage_Source);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 292, 576));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        groupBox_60 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox_60->setObjectName(QString::fromUtf8("groupBox_60"));
        verticalLayout_260 = new QVBoxLayout(groupBox_60);
        verticalLayout_260->setObjectName(QString::fromUtf8("verticalLayout_260"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_6 = new QLabel(groupBox_60);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_13->addWidget(label_6);

        mLayerOrigNameLineEdit = new QLineEdit(groupBox_60);
        mLayerOrigNameLineEdit->setObjectName(QString::fromUtf8("mLayerOrigNameLineEdit"));

        horizontalLayout_13->addWidget(mLayerOrigNameLineEdit);


        verticalLayout_260->addLayout(horizontalLayout_13);

        mDataSourceEncodingFrame = new QFrame(groupBox_60);
        mDataSourceEncodingFrame->setObjectName(QString::fromUtf8("mDataSourceEncodingFrame"));
        mDataSourceEncodingFrame->setFrameShape(QFrame::Shape::NoFrame);
        mDataSourceEncodingFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(mDataSourceEncodingFrame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(mDataSourceEncodingFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(label_3);

        cboProviderEncoding = new QComboBox(mDataSourceEncodingFrame);
        cboProviderEncoding->setObjectName(QString::fromUtf8("cboProviderEncoding"));

        horizontalLayout_4->addWidget(cboProviderEncoding);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_260->addWidget(mDataSourceEncodingFrame);


        verticalLayout_9->addWidget(groupBox_60);

        mCrsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mCrsGroupBox->setObjectName(QString::fromUtf8("mCrsGroupBox"));
        mCrsGroupBox->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        mCrsGroupBox->setCheckable(false);
        mCrsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        verticalLayout_28 = new QVBoxLayout(mCrsGroupBox);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        mCrsSelector = new QgsProjectionSelectionWidget(mCrsGroupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        verticalLayout_28->addWidget(mCrsSelector);

        label_7 = new QLabel(mCrsGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setTextFormat(Qt::TextFormat::RichText);
        label_7->setWordWrap(true);

        verticalLayout_28->addWidget(label_7);

        line_2 = new QFrame(mCrsGroupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_2);


        verticalLayout_9->addWidget(mCrsGroupBox);

        mSourceGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mSourceGroupBox->setObjectName(QString::fromUtf8("mSourceGroupBox"));

        verticalLayout_9->addWidget(mSourceGroupBox);

        mGeomGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mGeomGroupBox->setObjectName(QString::fromUtf8("mGeomGroupBox"));
        mGeomGroupBox->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        mGeomGroupBox->setCheckable(false);
        mGeomGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        verticalLayout_31 = new QVBoxLayout(mGeomGroupBox);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pbnIndex = new QPushButton(mGeomGroupBox);
        pbnIndex->setObjectName(QString::fromUtf8("pbnIndex"));

        horizontalLayout_11->addWidget(pbnIndex);

        pbnUpdateExtents = new QPushButton(mGeomGroupBox);
        pbnUpdateExtents->setObjectName(QString::fromUtf8("pbnUpdateExtents"));

        horizontalLayout_11->addWidget(pbnUpdateExtents);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout_31->addLayout(horizontalLayout_11);

        line_3 = new QFrame(mGeomGroupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_31->addWidget(line_3);


        verticalLayout_9->addWidget(mGeomGroupBox);

        mSubsetGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mSubsetGroupBox->setObjectName(QString::fromUtf8("mSubsetGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(3);
        sizePolicy3.setHeightForWidth(mSubsetGroupBox->sizePolicy().hasHeightForWidth());
        mSubsetGroupBox->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(mSubsetGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pbnQueryBuilder = new QPushButton(mSubsetGroupBox);
        pbnQueryBuilder->setObjectName(QString::fromUtf8("pbnQueryBuilder"));

        gridLayout_4->addWidget(pbnQueryBuilder, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(0, 21, QSizePolicy::Policy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(spacerItem, 1, 0, 1, 1);

        txtSubsetSQL = new QgsCodeEditorSQL(mSubsetGroupBox);
        txtSubsetSQL->setObjectName(QString::fromUtf8("txtSubsetSQL"));

        gridLayout_4->addWidget(txtSubsetSQL, 0, 0, 1, 2);


        verticalLayout_9->addWidget(mSubsetGroupBox);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_9->addItem(verticalSpacer_3);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_6->addWidget(scrollArea_4);

        mOptionsStackedWidget->addWidget(mOptsPage_Source);
        mOptsPage_Style = new QWidget();
        mOptsPage_Style->setObjectName(QString::fromUtf8("mOptsPage_Style"));
        verticalLayout_11 = new QVBoxLayout(mOptsPage_Style);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QgsScrollArea(mOptsPage_Style);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 100, 30));
        verticalLayout_18 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        widgetStackRenderers = new QStackedWidget(scrollAreaWidgetContents_3);
        widgetStackRenderers->setObjectName(QString::fromUtf8("widgetStackRenderers"));
        sizePolicy1.setHeightForWidth(widgetStackRenderers->sizePolicy().hasHeightForWidth());
        widgetStackRenderers->setSizePolicy(sizePolicy1);
        widgetStackRenderers->setFrameShape(QFrame::Shape::NoFrame);
        widgetStackRenderers->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_18->addWidget(widgetStackRenderers);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_11->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Labels = new QWidget();
        mOptsPage_Labels->setObjectName(QString::fromUtf8("mOptsPage_Labels"));
        verticalLayout_12 = new QVBoxLayout(mOptsPage_Labels);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        labelingFrame = new QFrame(mOptsPage_Labels);
        labelingFrame->setObjectName(QString::fromUtf8("labelingFrame"));
        sizePolicy1.setHeightForWidth(labelingFrame->sizePolicy().hasHeightForWidth());
        labelingFrame->setSizePolicy(sizePolicy1);
        labelingFrame->setFrameShape(QFrame::Shape::NoFrame);
        labelingFrame->setFrameShadow(QFrame::Shadow::Plain);

        verticalLayout_12->addWidget(labelingFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Labels);
        mOptsPage_Masks = new QWidget();
        mOptsPage_Masks->setObjectName(QString::fromUtf8("mOptsPage_Masks"));
        verticalLayout_122 = new QVBoxLayout(mOptsPage_Masks);
        verticalLayout_122->setObjectName(QString::fromUtf8("verticalLayout_122"));
        verticalLayout_122->setContentsMargins(0, 0, 0, 0);
        mMaskingFrame = new QFrame(mOptsPage_Masks);
        mMaskingFrame->setObjectName(QString::fromUtf8("mMaskingFrame"));
        sizePolicy1.setHeightForWidth(mMaskingFrame->sizePolicy().hasHeightForWidth());
        mMaskingFrame->setSizePolicy(sizePolicy1);
        mMaskingFrame->setFrameShape(QFrame::Shape::NoFrame);
        mMaskingFrame->setFrameShadow(QFrame::Shadow::Plain);

        verticalLayout_122->addWidget(mMaskingFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Masks);
        mOptsPage_Diagrams = new QWidget();
        mOptsPage_Diagrams->setObjectName(QString::fromUtf8("mOptsPage_Diagrams"));
        verticalLayout_10 = new QVBoxLayout(mOptsPage_Diagrams);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        mDiagramFrame = new QFrame(mOptsPage_Diagrams);
        mDiagramFrame->setObjectName(QString::fromUtf8("mDiagramFrame"));
        sizePolicy1.setHeightForWidth(mDiagramFrame->sizePolicy().hasHeightForWidth());
        mDiagramFrame->setSizePolicy(sizePolicy1);
        mDiagramFrame->setFrameShape(QFrame::Shape::NoFrame);
        mDiagramFrame->setFrameShadow(QFrame::Shadow::Plain);

        verticalLayout_10->addWidget(mDiagramFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Diagrams);
        mOptsPage_SourceFields = new QWidget();
        mOptsPage_SourceFields->setObjectName(QString::fromUtf8("mOptsPage_SourceFields"));
        verticalLayout_29 = new QVBoxLayout(mOptsPage_SourceFields);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        mSourceFieldsFrame = new QFrame(mOptsPage_SourceFields);
        mSourceFieldsFrame->setObjectName(QString::fromUtf8("mSourceFieldsFrame"));
        mSourceFieldsFrame->setFrameShape(QFrame::Shape::NoFrame);
        mSourceFieldsFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_29->addWidget(mSourceFieldsFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_SourceFields);
        mOptsPage_AttributesForm = new QWidget();
        mOptsPage_AttributesForm->setObjectName(QString::fromUtf8("mOptsPage_AttributesForm"));
        verticalLayout = new QVBoxLayout(mOptsPage_AttributesForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mAttributesFormFrame = new QFrame(mOptsPage_AttributesForm);
        mAttributesFormFrame->setObjectName(QString::fromUtf8("mAttributesFormFrame"));
        mAttributesFormFrame->setFrameShape(QFrame::Shape::NoFrame);
        mAttributesFormFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout->addWidget(mAttributesFormFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_AttributesForm);
        mOptsPage_Joins = new QWidget();
        mOptsPage_Joins->setObjectName(QString::fromUtf8("mOptsPage_Joins"));
        verticalLayout_17 = new QVBoxLayout(mOptsPage_Joins);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        scrollArea_7 = new QgsScrollArea(mOptsPage_Joins);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 161, 129));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        mJoinTreeWidget = new QTreeWidget(scrollAreaWidgetContents_7);
        mJoinTreeWidget->setObjectName(QString::fromUtf8("mJoinTreeWidget"));
        mJoinTreeWidget->setAlternatingRowColors(true);
        mJoinTreeWidget->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        mJoinTreeWidget->setColumnCount(2);

        verticalLayout_23->addWidget(mJoinTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mButtonAddJoin = new QPushButton(scrollAreaWidgetContents_7);
        mButtonAddJoin->setObjectName(QString::fromUtf8("mButtonAddJoin"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddJoin->setIcon(icon20);

        horizontalLayout->addWidget(mButtonAddJoin);

        mButtonRemoveJoin = new QPushButton(scrollAreaWidgetContents_7);
        mButtonRemoveJoin->setObjectName(QString::fromUtf8("mButtonRemoveJoin"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveJoin->setIcon(icon21);

        horizontalLayout->addWidget(mButtonRemoveJoin);

        mButtonEditJoin = new QPushButton(scrollAreaWidgetContents_7);
        mButtonEditJoin->setObjectName(QString::fromUtf8("mButtonEditJoin"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/themes/default/mActionToggleEditing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonEditJoin->setIcon(icon22);

        horizontalLayout->addWidget(mButtonEditJoin);

        horizontalSpacer = new QSpacerItem(0, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_23->addLayout(horizontalLayout);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_17->addWidget(scrollArea_7);

        mOptionsStackedWidget->addWidget(mOptsPage_Joins);
        mOptsPage_AuxiliaryStorage = new QWidget();
        mOptsPage_AuxiliaryStorage->setObjectName(QString::fromUtf8("mOptsPage_AuxiliaryStorage"));
        verticalLayout_15 = new QVBoxLayout(mOptsPage_AuxiliaryStorage);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        mAuxiliaryStorageScrollArea = new QWidget(mOptsPage_AuxiliaryStorage);
        mAuxiliaryStorageScrollArea->setObjectName(QString::fromUtf8("mAuxiliaryStorageScrollArea"));
        gridLayout_2000 = new QGridLayout(mAuxiliaryStorageScrollArea);
        gridLayout_2000->setObjectName(QString::fromUtf8("gridLayout_2000"));
        gridLayout_2000->setContentsMargins(0, 0, 0, 0);
        mAuxiliaryStorageInformationGrpBox = new QgsCollapsibleGroupBox(mAuxiliaryStorageScrollArea);
        mAuxiliaryStorageInformationGrpBox->setObjectName(QString::fromUtf8("mAuxiliaryStorageInformationGrpBox"));
        mAuxiliaryStorageInformationGrpBox->setFlat(false);
        mAuxiliaryStorageInformationGrpBox->setCheckable(false);
        mAuxiliaryStorageInformationGrpBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectormeta")));
        gridLayout_11 = new QGridLayout(mAuxiliaryStorageInformationGrpBox);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        mAuxiliaryStorageFeaturesLineEdit = new QLineEdit(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageFeaturesLineEdit->setObjectName(QString::fromUtf8("mAuxiliaryStorageFeaturesLineEdit"));
        mAuxiliaryStorageFeaturesLineEdit->setEnabled(false);
        mAuxiliaryStorageFeaturesLineEdit->setReadOnly(true);

        gridLayout_11->addWidget(mAuxiliaryStorageFeaturesLineEdit, 2, 1, 1, 1);

        mAuxiliaryStorageFieldsLabel = new QLabel(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageFieldsLabel->setObjectName(QString::fromUtf8("mAuxiliaryStorageFieldsLabel"));

        gridLayout_11->addWidget(mAuxiliaryStorageFieldsLabel, 3, 0, 1, 1);

        mAuxiliaryStorageFeaturesLabel = new QLabel(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageFeaturesLabel->setObjectName(QString::fromUtf8("mAuxiliaryStorageFeaturesLabel"));

        gridLayout_11->addWidget(mAuxiliaryStorageFeaturesLabel, 2, 0, 1, 1);

        mAuxiliaryStorageFieldsLineEdit = new QLineEdit(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageFieldsLineEdit->setObjectName(QString::fromUtf8("mAuxiliaryStorageFieldsLineEdit"));
        mAuxiliaryStorageFieldsLineEdit->setEnabled(false);
        mAuxiliaryStorageFieldsLineEdit->setReadOnly(true);

        gridLayout_11->addWidget(mAuxiliaryStorageFieldsLineEdit, 3, 1, 1, 1);

        mAuxiliaryStorageKeyLabel = new QLabel(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageKeyLabel->setObjectName(QString::fromUtf8("mAuxiliaryStorageKeyLabel"));

        gridLayout_11->addWidget(mAuxiliaryStorageKeyLabel, 1, 0, 1, 1);

        mAuxiliaryStorageKeyLineEdit = new QLineEdit(mAuxiliaryStorageInformationGrpBox);
        mAuxiliaryStorageKeyLineEdit->setObjectName(QString::fromUtf8("mAuxiliaryStorageKeyLineEdit"));
        mAuxiliaryStorageKeyLineEdit->setEnabled(false);
        mAuxiliaryStorageKeyLineEdit->setReadOnly(true);

        gridLayout_11->addWidget(mAuxiliaryStorageKeyLineEdit, 1, 1, 1, 1);


        gridLayout_2000->addWidget(mAuxiliaryStorageInformationGrpBox, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        mAuxiliaryStorageActions = new QPushButton(mAuxiliaryStorageScrollArea);
        mAuxiliaryStorageActions->setObjectName(QString::fromUtf8("mAuxiliaryStorageActions"));

        horizontalLayout_6->addWidget(mAuxiliaryStorageActions);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        gridLayout_2000->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        mAuxiliaryStorageFieldsGrpBox = new QgsCollapsibleGroupBox(mAuxiliaryStorageScrollArea);
        mAuxiliaryStorageFieldsGrpBox->setObjectName(QString::fromUtf8("mAuxiliaryStorageFieldsGrpBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mAuxiliaryStorageFieldsGrpBox->sizePolicy().hasHeightForWidth());
        mAuxiliaryStorageFieldsGrpBox->setSizePolicy(sizePolicy4);
        gridLayout_3 = new QGridLayout(mAuxiliaryStorageFieldsGrpBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        mAuxiliaryStorageFieldsAddBtn = new QPushButton(mAuxiliaryStorageFieldsGrpBox);
        mAuxiliaryStorageFieldsAddBtn->setObjectName(QString::fromUtf8("mAuxiliaryStorageFieldsAddBtn"));
        mAuxiliaryStorageFieldsAddBtn->setIcon(icon20);

        horizontalLayout_5->addWidget(mAuxiliaryStorageFieldsAddBtn);

        mAuxiliaryStorageFieldsDeleteBtn = new QPushButton(mAuxiliaryStorageFieldsGrpBox);
        mAuxiliaryStorageFieldsDeleteBtn->setObjectName(QString::fromUtf8("mAuxiliaryStorageFieldsDeleteBtn"));
        mAuxiliaryStorageFieldsDeleteBtn->setIcon(icon21);

        horizontalLayout_5->addWidget(mAuxiliaryStorageFieldsDeleteBtn);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        gridLayout_3->addLayout(horizontalLayout_5, 3, 0, 3, 1);

        mAuxiliaryStorageFieldsTree = new QTreeWidget(mAuxiliaryStorageFieldsGrpBox);
        mAuxiliaryStorageFieldsTree->setObjectName(QString::fromUtf8("mAuxiliaryStorageFieldsTree"));

        gridLayout_3->addWidget(mAuxiliaryStorageFieldsTree, 0, 0, 1, 1);


        gridLayout_2000->addWidget(mAuxiliaryStorageFieldsGrpBox, 2, 0, 1, 1);

        label_1 = new QLabel(mAuxiliaryStorageScrollArea);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setWordWrap(true);

        gridLayout_2000->addWidget(label_1, 0, 0, 1, 1);


        verticalLayout_15->addWidget(mAuxiliaryStorageScrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_AuxiliaryStorage);
        mOptsPage_Actions = new QWidget();
        mOptsPage_Actions->setObjectName(QString::fromUtf8("mOptsPage_Actions"));
        verticalLayout_16 = new QVBoxLayout(mOptsPage_Actions);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QgsScrollArea(mOptsPage_Actions);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 100, 30));
        verticalLayout_21 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        actionOptionsFrame = new QFrame(scrollAreaWidgetContents_6);
        actionOptionsFrame->setObjectName(QString::fromUtf8("actionOptionsFrame"));
        sizePolicy1.setHeightForWidth(actionOptionsFrame->sizePolicy().hasHeightForWidth());
        actionOptionsFrame->setSizePolicy(sizePolicy1);
        actionOptionsFrame->setFrameShape(QFrame::Shape::NoFrame);
        actionOptionsFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_21->addWidget(actionOptionsFrame);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_16->addWidget(scrollArea_6);

        mOptionsStackedWidget->addWidget(mOptsPage_Actions);
        mOptsPage_Display = new QWidget();
        mOptsPage_Display->setObjectName(QString::fromUtf8("mOptsPage_Display"));
        verticalLayout_25 = new QVBoxLayout(mOptsPage_Display);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        scrollArea_10 = new QWidget(mOptsPage_Display);
        scrollArea_10->setObjectName(QString::fromUtf8("scrollArea_10"));
        scrollArea_10->setProperty("widgetResizable", QVariant(true));
        gridLayout_10 = new QGridLayout(scrollArea_10);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        groupBox_22 = new QGroupBox(scrollArea_10);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_22->sizePolicy().hasHeightForWidth());
        groupBox_22->setSizePolicy(sizePolicy5);
        gridLayout_50 = new QGridLayout(groupBox_22);
        gridLayout_50->setObjectName(QString::fromUtf8("gridLayout_50"));
        mDisplayExpressionWidget = new QgsFieldExpressionWidget(groupBox_22);
        mDisplayExpressionWidget->setObjectName(QString::fromUtf8("mDisplayExpressionWidget"));
        mDisplayExpressionWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_50->addWidget(mDisplayExpressionWidget, 0, 0, 1, 1);

        labelDisplayNameInfo = new QLabel(groupBox_22);
        labelDisplayNameInfo->setObjectName(QString::fromUtf8("labelDisplayNameInfo"));
        labelDisplayNameInfo->setWordWrap(true);

        gridLayout_50->addWidget(labelDisplayNameInfo, 1, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_22, 0, 0, 1, 1);

        mEnableMapTips = new QCheckBox(scrollArea_10);
        mEnableMapTips->setObjectName(QString::fromUtf8("mEnableMapTips"));
        mEnableMapTips->setChecked(true);

        gridLayout_10->addWidget(mEnableMapTips, 1, 0, 1, 1);

        mHtmlMapTipGroupBox = new QGroupBox(scrollArea_10);
        mHtmlMapTipGroupBox->setObjectName(QString::fromUtf8("mHtmlMapTipGroupBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mHtmlMapTipGroupBox->sizePolicy().hasHeightForWidth());
        mHtmlMapTipGroupBox->setSizePolicy(sizePolicy6);
        verticalLayout_35 = new QVBoxLayout(mHtmlMapTipGroupBox);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        mMapTipSplitter = new QSplitter(mHtmlMapTipGroupBox);
        mMapTipSplitter->setObjectName(QString::fromUtf8("mMapTipSplitter"));
        sizePolicy1.setHeightForWidth(mMapTipSplitter->sizePolicy().hasHeightForWidth());
        mMapTipSplitter->setSizePolicy(sizePolicy1);
        mMapTipSplitter->setOrientation(Qt::Orientation::Horizontal);
        mMapTipWidgetContainer = new QWidget(mMapTipSplitter);
        mMapTipWidgetContainer->setObjectName(QString::fromUtf8("mMapTipWidgetContainer"));
        sizePolicy6.setHeightForWidth(mMapTipWidgetContainer->sizePolicy().hasHeightForWidth());
        mMapTipWidgetContainer->setSizePolicy(sizePolicy6);
        mMapTipWidgetContainer->setMinimumSize(QSize(100, 100));
        verticalLayout_36 = new QVBoxLayout(mMapTipWidgetContainer);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        mMapTipWidget = new QgsCodeEditorHTML(mMapTipWidgetContainer);
        mMapTipWidget->setObjectName(QString::fromUtf8("mMapTipWidget"));
        sizePolicy1.setHeightForWidth(mMapTipWidget->sizePolicy().hasHeightForWidth());
        mMapTipWidget->setSizePolicy(sizePolicy1);

        verticalLayout_36->addWidget(mMapTipWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mMapTipFieldComboBox = new QgsFieldComboBox(mMapTipWidgetContainer);
        mMapTipFieldComboBox->setObjectName(QString::fromUtf8("mMapTipFieldComboBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mMapTipFieldComboBox->sizePolicy().hasHeightForWidth());
        mMapTipFieldComboBox->setSizePolicy(sizePolicy7);
        mMapTipFieldComboBox->setProperty("allowEmptyFieldName", QVariant(true));

        horizontalLayout_3->addWidget(mMapTipFieldComboBox);

        mMapTipInsertFieldButton = new QPushButton(mMapTipWidgetContainer);
        mMapTipInsertFieldButton->setObjectName(QString::fromUtf8("mMapTipInsertFieldButton"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(mMapTipInsertFieldButton->sizePolicy().hasHeightForWidth());
        mMapTipInsertFieldButton->setSizePolicy(sizePolicy8);
        mMapTipInsertFieldButton->setIcon(icon20);

        horizontalLayout_3->addWidget(mMapTipInsertFieldButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        mMapTipInsertExpressionButton = new QPushButton(mMapTipWidgetContainer);
        mMapTipInsertExpressionButton->setObjectName(QString::fromUtf8("mMapTipInsertExpressionButton"));
        mMapTipInsertExpressionButton->setIcon(icon15);

        horizontalLayout_3->addWidget(mMapTipInsertExpressionButton);


        verticalLayout_36->addLayout(horizontalLayout_3);

        mMapTipSplitter->addWidget(mMapTipWidgetContainer);
        mMapTipPreviewContainer = new QGroupBox(mMapTipSplitter);
        mMapTipPreviewContainer->setObjectName(QString::fromUtf8("mMapTipPreviewContainer"));
        mMapTipPreviewContainer->setMinimumSize(QSize(100, 100));
        mMapTipSplitter->addWidget(mMapTipPreviewContainer);

        verticalLayout_35->addWidget(mMapTipSplitter);

        labelMapTipInfo = new QLabel(mHtmlMapTipGroupBox);
        labelMapTipInfo->setObjectName(QString::fromUtf8("labelMapTipInfo"));
        labelMapTipInfo->setWordWrap(true);

        verticalLayout_35->addWidget(labelMapTipInfo);


        gridLayout_10->addWidget(mHtmlMapTipGroupBox, 2, 0, 1, 1);


        verticalLayout_25->addWidget(scrollArea_10);

        mOptionsStackedWidget->addWidget(mOptsPage_Display);
        mOptsPage_Rendering = new QWidget();
        mOptsPage_Rendering->setObjectName(QString::fromUtf8("mOptsPage_Rendering"));
        verticalLayout_19 = new QVBoxLayout(mOptsPage_Rendering);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        scrollArea_19 = new QgsScrollArea(mOptsPage_Rendering);
        scrollArea_19->setObjectName(QString::fromUtf8("scrollArea_19"));
        scrollArea_19->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_19->setWidgetResizable(true);
        scrollAreaWidgetContents_19 = new QWidget();
        scrollAreaWidgetContents_19->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_19"));
        scrollAreaWidgetContents_19->setGeometry(QRect(0, 0, 632, 714));
        verticalLayout_32 = new QVBoxLayout(scrollAreaWidgetContents_19);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        mScaleVisibilityGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_19);
        mScaleVisibilityGroupBox->setObjectName(QString::fromUtf8("mScaleVisibilityGroupBox"));
        mScaleVisibilityGroupBox->setCheckable(true);
        gridLayout_6 = new QGridLayout(mScaleVisibilityGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mScaleRangeWidget = new QgsScaleRangeWidget(mScaleVisibilityGroupBox);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));
        mScaleRangeWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_6->addWidget(mScaleRangeWidget, 0, 0, 1, 1);


        verticalLayout_32->addWidget(mScaleVisibilityGroupBox);

        mSimplifyDrawingGroupBox = new QGroupBox(scrollAreaWidgetContents_19);
        mSimplifyDrawingGroupBox->setObjectName(QString::fromUtf8("mSimplifyDrawingGroupBox"));
        mSimplifyDrawingGroupBox->setCheckable(true);
        _12 = new QGridLayout(mSimplifyDrawingGroupBox);
        _12->setObjectName(QString::fromUtf8("_12"));
        label_59 = new QLabel(mSimplifyDrawingGroupBox);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        _12->addWidget(label_59, 0, 1, 1, 4);

        label_56 = new QLabel(mSimplifyDrawingGroupBox);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setMargin(2);

        _12->addWidget(label_56, 1, 1, 1, 1);

        mSimplifyDrawingSpinBox = new QgsDoubleSpinBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingSpinBox->setObjectName(QString::fromUtf8("mSimplifyDrawingSpinBox"));
        mSimplifyDrawingSpinBox->setDecimals(2);
        mSimplifyDrawingSpinBox->setMinimum(1.000000000000000);
        mSimplifyDrawingSpinBox->setMaximum(30.000000000000000);
        mSimplifyDrawingSpinBox->setSingleStep(0.200000000000000);
        mSimplifyDrawingSpinBox->setValue(1.000000000000000);

        _12->addWidget(mSimplifyDrawingSpinBox, 1, 2, 1, 1);

        mSimplifyDrawingPx = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyDrawingPx->setObjectName(QString::fromUtf8("mSimplifyDrawingPx"));
        mSimplifyDrawingPx->setMargin(2);

        _12->addWidget(mSimplifyDrawingPx, 1, 3, 1, 1);

        horizontalSpacer_40 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _12->addItem(horizontalSpacer_40, 1, 4, 1, 1);

        mSimplifyAlgorithmLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyAlgorithmLabel->setObjectName(QString::fromUtf8("mSimplifyAlgorithmLabel"));
        mSimplifyAlgorithmLabel->setMargin(2);

        _12->addWidget(mSimplifyAlgorithmLabel, 2, 1, 1, 1);

        mSimplifyAlgorithmComboBox = new QComboBox(mSimplifyDrawingGroupBox);
        mSimplifyAlgorithmComboBox->setObjectName(QString::fromUtf8("mSimplifyAlgorithmComboBox"));

        _12->addWidget(mSimplifyAlgorithmComboBox, 2, 2, 1, 1);

        mSimplifyDrawingAtProvider = new QCheckBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingAtProvider->setObjectName(QString::fromUtf8("mSimplifyDrawingAtProvider"));

        _12->addWidget(mSimplifyDrawingAtProvider, 3, 1, 1, 4);

        mSimplifyMaxScaleLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyMaxScaleLabel->setObjectName(QString::fromUtf8("mSimplifyMaxScaleLabel"));
        mSimplifyMaxScaleLabel->setMargin(2);

        _12->addWidget(mSimplifyMaxScaleLabel, 4, 1, 1, 1);

        mSimplifyMaximumScaleComboBox = new QgsScaleComboBox(mSimplifyDrawingGroupBox);
        mSimplifyMaximumScaleComboBox->setObjectName(QString::fromUtf8("mSimplifyMaximumScaleComboBox"));
        sizePolicy7.setHeightForWidth(mSimplifyMaximumScaleComboBox->sizePolicy().hasHeightForWidth());
        mSimplifyMaximumScaleComboBox->setSizePolicy(sizePolicy7);

        _12->addWidget(mSimplifyMaximumScaleComboBox, 4, 2, 1, 1);


        verticalLayout_32->addWidget(mSimplifyDrawingGroupBox);

        mUseReferenceScaleGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_19);
        mUseReferenceScaleGroupBox->setObjectName(QString::fromUtf8("mUseReferenceScaleGroupBox"));
        mUseReferenceScaleGroupBox->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        mUseReferenceScaleGroupBox->setCheckable(true);
        mUseReferenceScaleGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout = new QGridLayout(mUseReferenceScaleGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line_4 = new QFrame(mUseReferenceScaleGroupBox);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 3, 0, 1, 1);

        label = new QLabel(mUseReferenceScaleGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        mReferenceScaleWidget = new QgsScaleWidget(mUseReferenceScaleGroupBox);
        mReferenceScaleWidget->setObjectName(QString::fromUtf8("mReferenceScaleWidget"));
        mReferenceScaleWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout->addWidget(mReferenceScaleWidget, 2, 1, 1, 1);

        label_8 = new QLabel(mUseReferenceScaleGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setTextFormat(Qt::TextFormat::RichText);
        label_8->setWordWrap(true);

        gridLayout->addWidget(label_8, 0, 0, 1, 2);


        verticalLayout_32->addWidget(mUseReferenceScaleGroupBox);

        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_19);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        mRadioOverrideSelectionSymbol = new QRadioButton(groupBox_2);
        mRadioOverrideSelectionSymbol->setObjectName(QString::fromUtf8("mRadioOverrideSelectionSymbol"));

        gridLayout_9->addWidget(mRadioOverrideSelectionSymbol, 3, 0, 1, 1);

        mRadioDefaultSelectionColor = new QRadioButton(groupBox_2);
        mRadioDefaultSelectionColor->setObjectName(QString::fromUtf8("mRadioDefaultSelectionColor"));

        gridLayout_9->addWidget(mRadioDefaultSelectionColor, 0, 0, 1, 1);

        mRadioOverrideSelectionColor = new QRadioButton(groupBox_2);
        mRadioOverrideSelectionColor->setObjectName(QString::fromUtf8("mRadioOverrideSelectionColor"));

        gridLayout_9->addWidget(mRadioOverrideSelectionColor, 1, 0, 1, 1);

        mSelectionColorButton = new QgsColorButton(groupBox_2);
        mSelectionColorButton->setObjectName(QString::fromUtf8("mSelectionColorButton"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(mSelectionColorButton->sizePolicy().hasHeightForWidth());
        mSelectionColorButton->setSizePolicy(sizePolicy9);
        mSelectionColorButton->setMinimumSize(QSize(100, 0));

        gridLayout_9->addWidget(mSelectionColorButton, 1, 1, 1, 1);

        mSelectionSymbolButton = new QgsSymbolButton(groupBox_2);
        mSelectionSymbolButton->setObjectName(QString::fromUtf8("mSelectionSymbolButton"));
        sizePolicy9.setHeightForWidth(mSelectionSymbolButton->sizePolicy().hasHeightForWidth());
        mSelectionSymbolButton->setSizePolicy(sizePolicy9);

        gridLayout_9->addWidget(mSelectionSymbolButton, 3, 1, 1, 1);


        verticalLayout_32->addWidget(groupBox_2);

        mForceRasterCheckBox = new QCheckBox(scrollAreaWidgetContents_19);
        mForceRasterCheckBox->setObjectName(QString::fromUtf8("mForceRasterCheckBox"));

        verticalLayout_32->addWidget(mForceRasterCheckBox);

        mRefreshSettingsWidget = new QgsMapLayerRefreshSettingsWidget(scrollAreaWidgetContents_19);
        mRefreshSettingsWidget->setObjectName(QString::fromUtf8("mRefreshSettingsWidget"));
        mRefreshSettingsWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        verticalLayout_32->addWidget(mRefreshSettingsWidget);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        mRefreshLayerNotificationCheckBox = new QCheckBox(scrollAreaWidgetContents_19);
        mRefreshLayerNotificationCheckBox->setObjectName(QString::fromUtf8("mRefreshLayerNotificationCheckBox"));
        mRefreshLayerNotificationCheckBox->setChecked(true);

        horizontalLayout_14->addWidget(mRefreshLayerNotificationCheckBox);

        mNotificationFrame = new QFrame(scrollAreaWidgetContents_19);
        mNotificationFrame->setObjectName(QString::fromUtf8("mNotificationFrame"));
        mNotificationFrame->setEnabled(true);
        mNotificationFrame->setFrameShape(QFrame::Shape::NoFrame);
        mNotificationFrame->setFrameShadow(QFrame::Shadow::Plain);
        horizontalLayout_1 = new QHBoxLayout(mNotificationFrame);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, -1, 0);
        mNotificationMessageCheckBox = new QCheckBox(mNotificationFrame);
        mNotificationMessageCheckBox->setObjectName(QString::fromUtf8("mNotificationMessageCheckBox"));
        mNotificationMessageCheckBox->setEnabled(true);

        horizontalLayout_1->addWidget(mNotificationMessageCheckBox);

        mNotifyMessagValueLineEdit = new QLineEdit(mNotificationFrame);
        mNotifyMessagValueLineEdit->setObjectName(QString::fromUtf8("mNotifyMessagValueLineEdit"));
        mNotifyMessagValueLineEdit->setEnabled(false);

        horizontalLayout_1->addWidget(mNotifyMessagValueLineEdit);


        horizontalLayout_14->addWidget(mNotificationFrame);


        verticalLayout_32->addLayout(horizontalLayout_14);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_32->addItem(verticalSpacer_2);

        scrollArea_19->setWidget(scrollAreaWidgetContents_19);

        verticalLayout_19->addWidget(scrollArea_19);

        mOptionsStackedWidget->addWidget(mOptsPage_Rendering);
        mOptsPage_Temporal = new QWidget();
        mOptsPage_Temporal->setObjectName(QString::fromUtf8("mOptsPage_Temporal"));
        verticalLayout_20 = new QVBoxLayout(mOptsPage_Temporal);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        temporalFrame = new QFrame(mOptsPage_Temporal);
        temporalFrame->setObjectName(QString::fromUtf8("temporalFrame"));
        temporalFrame->setMinimumSize(QSize(100, 450));
        temporalFrame->setStyleSheet(QString::fromUtf8(""));
        temporalFrame->setFrameShape(QFrame::Shape::NoFrame);
        temporalFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_20->addWidget(temporalFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Temporal);
        mOptsPage_Variables = new QWidget();
        mOptsPage_Variables->setObjectName(QString::fromUtf8("mOptsPage_Variables"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_Variables);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(mOptsPage_Variables);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_4);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_4);
        mVariableEditor->setObjectName(QString::fromUtf8("mVariableEditor"));
        mVariableEditor->setProperty("settingGroup", QVariant(QString::fromUtf8("projectProperties")));

        horizontalLayout_9->addWidget(mVariableEditor);


        verticalLayout_4->addWidget(groupBox_4);

        mOptionsStackedWidget->addWidget(mOptsPage_Variables);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QString::fromUtf8("mOptsPage_Metadata"));
        verticalLayout_27 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        metadataFrame = new QFrame(mOptsPage_Metadata);
        metadataFrame->setObjectName(QString::fromUtf8("metadataFrame"));
        metadataFrame->setFrameShape(QFrame::Shape::NoFrame);
        metadataFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_27->addWidget(metadataFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);
        mOptsPage_DataDependencies = new QWidget();
        mOptsPage_DataDependencies->setObjectName(QString::fromUtf8("mOptsPage_DataDependencies"));
        verticalLayout_30 = new QVBoxLayout(mOptsPage_DataDependencies);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(mOptsPage_DataDependencies);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_24 = new QVBoxLayout(groupBox_5);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        label1 = new QLabel(groupBox_5);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setWordWrap(true);

        verticalLayout_24->addWidget(label1);

        mLayersDependenciesTreeView = new QTreeView(groupBox_5);
        mLayersDependenciesTreeView->setObjectName(QString::fromUtf8("mLayersDependenciesTreeView"));
        mLayersDependenciesTreeView->setEnabled(true);
        mLayersDependenciesTreeView->header()->setVisible(false);

        verticalLayout_24->addWidget(mLayersDependenciesTreeView);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_24->addWidget(label_4);


        verticalLayout_30->addWidget(groupBox_5);

        mOptionsStackedWidget->addWidget(mOptsPage_DataDependencies);
        mOptsPage_Legend = new QWidget();
        mOptsPage_Legend->setObjectName(QString::fromUtf8("mOptsPage_Legend"));
        verticalLayout_8 = new QVBoxLayout(mOptsPage_Legend);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(mOptsPage_Legend);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 686, 713));
        verticalLayout_34 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        mLegendWidget = new QgsVectorLayerLegendWidget(scrollAreaWidgetContents_2);
        mLegendWidget->setObjectName(QString::fromUtf8("mLegendWidget"));

        verticalLayout_34->addWidget(mLegendWidget);

        groupBox_3 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_22 = new QVBoxLayout(groupBox_3);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        mLegendConfigEmbeddedWidget = new QgsLayerTreeEmbeddedConfigWidget(groupBox_3);
        mLegendConfigEmbeddedWidget->setObjectName(QString::fromUtf8("mLegendConfigEmbeddedWidget"));

        verticalLayout_22->addWidget(mLegendConfigEmbeddedWidget);


        verticalLayout_34->addWidget(groupBox_3);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_8->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mOptsPage_Legend);
        mOptsPage_Server = new QWidget();
        mOptsPage_Server->setObjectName(QString::fromUtf8("mOptsPage_Server"));
        verticalLayout_14 = new QVBoxLayout(mOptsPage_Server);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mOptsPage_Server);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 686, 713));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        mMapLayerServerPropertiesWidget = new QgsMapLayerServerPropertiesWidget(scrollAreaWidgetContents);
        mMapLayerServerPropertiesWidget->setObjectName(QString::fromUtf8("mMapLayerServerPropertiesWidget"));

        verticalLayout_13->addWidget(mMapLayerServerPropertiesWidget);

        mWmsDimensionsGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mWmsDimensionsGrpBx->setObjectName(QString::fromUtf8("mWmsDimensionsGrpBx"));
        verticalLayout_33 = new QVBoxLayout(mWmsDimensionsGrpBx);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        mWmsDimensionsTreeWidget = new QTreeWidget(mWmsDimensionsGrpBx);
        mWmsDimensionsTreeWidget->setObjectName(QString::fromUtf8("mWmsDimensionsTreeWidget"));

        verticalLayout_33->addWidget(mWmsDimensionsTreeWidget);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        mButtonAddWmsDimension = new QPushButton(mWmsDimensionsGrpBx);
        mButtonAddWmsDimension->setObjectName(QString::fromUtf8("mButtonAddWmsDimension"));
        mButtonAddWmsDimension->setIcon(icon20);

        horizontalLayout_12->addWidget(mButtonAddWmsDimension);

        mButtonEditWmsDimension = new QPushButton(mWmsDimensionsGrpBx);
        mButtonEditWmsDimension->setObjectName(QString::fromUtf8("mButtonEditWmsDimension"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonEditWmsDimension->setIcon(icon23);

        horizontalLayout_12->addWidget(mButtonEditWmsDimension);

        mButtonRemoveWmsDimension = new QPushButton(mWmsDimensionsGrpBx);
        mButtonRemoveWmsDimension->setObjectName(QString::fromUtf8("mButtonRemoveWmsDimension"));
        mButtonRemoveWmsDimension->setIcon(icon21);

        horizontalLayout_12->addWidget(mButtonRemoveWmsDimension);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);


        verticalLayout_33->addLayout(horizontalLayout_12);


        verticalLayout_13->addWidget(mWmsDimensionsGrpBx);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_13->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_14->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_Server);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout_26->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsVectorLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy10);
        mButtonBoxFrame->setFrameShape(QFrame::Shape::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_btnbox = new QGridLayout(mButtonBoxFrame);
        gridLayout_btnbox->setObjectName(QString::fromUtf8("gridLayout_btnbox"));
        gridLayout_btnbox->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Apply|QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        gridLayout_btnbox->addWidget(buttonBox, 2, 1, 1, 4);


        verticalLayout_26->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, teMetadataViewer);
        QWidget::setTabOrder(teMetadataViewer, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mLayerOrigNameLineEdit);
        QWidget::setTabOrder(mLayerOrigNameLineEdit, cboProviderEncoding);
        QWidget::setTabOrder(cboProviderEncoding, mCrsGroupBox);
        QWidget::setTabOrder(mCrsGroupBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mGeomGroupBox);
        QWidget::setTabOrder(mGeomGroupBox, pbnIndex);
        QWidget::setTabOrder(pbnIndex, pbnUpdateExtents);
        QWidget::setTabOrder(pbnUpdateExtents, pbnQueryBuilder);
        QWidget::setTabOrder(pbnQueryBuilder, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mJoinTreeWidget);
        QWidget::setTabOrder(mJoinTreeWidget, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, mButtonAddJoin);
        QWidget::setTabOrder(mButtonAddJoin, mButtonRemoveJoin);
        QWidget::setTabOrder(mButtonRemoveJoin, mButtonEditJoin);
        QWidget::setTabOrder(mButtonEditJoin, mAuxiliaryStorageKeyLineEdit);
        QWidget::setTabOrder(mAuxiliaryStorageKeyLineEdit, mAuxiliaryStorageFeaturesLineEdit);
        QWidget::setTabOrder(mAuxiliaryStorageFeaturesLineEdit, mAuxiliaryStorageFieldsLineEdit);
        QWidget::setTabOrder(mAuxiliaryStorageFieldsLineEdit, mAuxiliaryStorageFieldsTree);
        QWidget::setTabOrder(mAuxiliaryStorageFieldsTree, mAuxiliaryStorageFieldsAddBtn);
        QWidget::setTabOrder(mAuxiliaryStorageFieldsAddBtn, mAuxiliaryStorageFieldsDeleteBtn);
        QWidget::setTabOrder(mAuxiliaryStorageFieldsDeleteBtn, mAuxiliaryStorageActions);
        QWidget::setTabOrder(mAuxiliaryStorageActions, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, mDisplayExpressionWidget);
        QWidget::setTabOrder(mDisplayExpressionWidget, mScaleVisibilityGroupBox);
        QWidget::setTabOrder(mScaleVisibilityGroupBox, scrollArea_19);
        QWidget::setTabOrder(scrollArea_19, mScaleRangeWidget);
        QWidget::setTabOrder(mScaleRangeWidget, mSimplifyDrawingGroupBox);
        QWidget::setTabOrder(mSimplifyDrawingGroupBox, mSimplifyDrawingSpinBox);
        QWidget::setTabOrder(mSimplifyDrawingSpinBox, mSimplifyAlgorithmComboBox);
        QWidget::setTabOrder(mSimplifyAlgorithmComboBox, mSimplifyDrawingAtProvider);
        QWidget::setTabOrder(mSimplifyDrawingAtProvider, mSimplifyMaximumScaleComboBox);
        QWidget::setTabOrder(mSimplifyMaximumScaleComboBox, mUseReferenceScaleGroupBox);
        QWidget::setTabOrder(mUseReferenceScaleGroupBox, mReferenceScaleWidget);
        QWidget::setTabOrder(mReferenceScaleWidget, mForceRasterCheckBox);
        QWidget::setTabOrder(mForceRasterCheckBox, mRefreshSettingsWidget);
        QWidget::setTabOrder(mRefreshSettingsWidget, mRefreshLayerNotificationCheckBox);
        QWidget::setTabOrder(mRefreshLayerNotificationCheckBox, mNotificationMessageCheckBox);
        QWidget::setTabOrder(mNotificationMessageCheckBox, mNotifyMessagValueLineEdit);
        QWidget::setTabOrder(mNotifyMessagValueLineEdit, mLayersDependenciesTreeView);
        QWidget::setTabOrder(mLayersDependenciesTreeView, scrollArea);
        QWidget::setTabOrder(scrollArea, mWmsDimensionsTreeWidget);
        QWidget::setTabOrder(mWmsDimensionsTreeWidget, mButtonAddWmsDimension);
        QWidget::setTabOrder(mButtonAddWmsDimension, mButtonEditWmsDimension);
        QWidget::setTabOrder(mButtonEditWmsDimension, mButtonRemoveWmsDimension);
        QWidget::setTabOrder(mButtonRemoveWmsDimension, mEnableMapTips);
        QWidget::setTabOrder(mEnableMapTips, mRadioOverrideSelectionSymbol);
        QWidget::setTabOrder(mRadioOverrideSelectionSymbol, mRadioDefaultSelectionColor);
        QWidget::setTabOrder(mRadioDefaultSelectionColor, mRadioOverrideSelectionColor);
        QWidget::setTabOrder(mRadioOverrideSelectionColor, mSelectionColorButton);
        QWidget::setTabOrder(mSelectionColorButton, mSelectionSymbolButton);

        retranslateUi(QgsVectorLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(mRefreshLayerNotificationCheckBox, SIGNAL(toggled(bool)), mNotificationFrame, SLOT(setEnabled(bool)));
        QObject::connect(mNotificationMessageCheckBox, SIGNAL(toggled(bool)), mNotifyMessagValueLineEdit, SLOT(setEnabled(bool)));

        mOptionsStackedWidget->setCurrentIndex(17);
        widgetStackRenderers->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsVectorLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerPropertiesBase)
    {
        QgsVectorLayerPropertiesBase->setWindowTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Layer Properties", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Information", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "General information", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Source", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem1->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Source", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Symbology", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem2->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Control feature symbology", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Labels", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem3->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Control feature labeling", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Masks", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem4->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Control selective masking of symbols and labels", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Diagrams", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem5->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Diagrams", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Fields", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem6->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Manage fields", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Attributes Form", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem7->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Manage custom forms and field editor configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Joins", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem8->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Manage joins to other layers", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem9 = mOptionsListWidget->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Auxiliary Storage", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem9->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Manage additional per-project fields associated with the layer", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem10 = mOptionsListWidget->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Actions", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem10->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Manage automated actions", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem11 = mOptionsListWidget->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Display", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem11->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Display", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem12 = mOptionsListWidget->item(12);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Rendering", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem12->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Rendering", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem13 = mOptionsListWidget->item(13);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Temporal", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem13->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Temporal Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem14 = mOptionsListWidget->item(14);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Variables", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem14->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Variables", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem15 = mOptionsListWidget->item(15);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Metadata", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem15->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Layer metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem16 = mOptionsListWidget->item(16);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Dependencies", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem16->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Set dependent layers for automatic update", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem17 = mOptionsListWidget->item(17);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Legend", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem17->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Manage the layer's legend", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem18 = mOptionsListWidget->item(18);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "QGIS Server", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem18->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Edit QGIS Server settings", nullptr));
#endif // QT_CONFIG(tooltip)
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupBox_60->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Settings", nullptr));
        label_6->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Layer name", nullptr));
        label_3->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Data source encoding", nullptr));
        mCrsGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Assigned Coordinate Reference System (CRS)", nullptr));
        label_7->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "<html><head/><body><p><span style=\" font-weight:600;\">Changing this option does not modify the original data source or perform any reprojection of features. Rather, it can be used to override the layer's CRS within this project if it could not be detected or has been incorrectly detected.</span></p><p>The Processing \342\200\234<span style=\" font-style:italic;\">Reproject Layer</span>\342\200\235 tool should be used to reproject features and permanently change a data source's CRS.</p></body></html>", nullptr));
        mSourceGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Layer Source", nullptr));
        mGeomGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Geometry ", nullptr));
        pbnIndex->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Create Spatial Index", nullptr));
        pbnUpdateExtents->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Update Extents", nullptr));
        mSubsetGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Provider Feature Filter", nullptr));
        pbnQueryBuilder->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Query Builder", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mJoinTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Setting", nullptr));
#if QT_CONFIG(tooltip)
        mButtonAddJoin->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Add new join", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddJoin->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonRemoveJoin->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Remove selected join", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveJoin->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonEditJoin->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Edit selected join", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonEditJoin->setText(QString());
        mAuxiliaryStorageInformationGrpBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Information", nullptr));
        mAuxiliaryStorageFieldsLabel->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Fields", nullptr));
        mAuxiliaryStorageFeaturesLabel->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Features", nullptr));
#if QT_CONFIG(tooltip)
        mAuxiliaryStorageFieldsLineEdit->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", nullptr));
#endif // QT_CONFIG(tooltip)
        mAuxiliaryStorageFieldsLineEdit->setInputMask(QString());
        mAuxiliaryStorageFieldsLineEdit->setText(QString());
        mAuxiliaryStorageFieldsLineEdit->setPlaceholderText(QString());
        mAuxiliaryStorageKeyLabel->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Key", nullptr));
        mAuxiliaryStorageActions->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Auxiliary Layer", nullptr));
        mAuxiliaryStorageFieldsGrpBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Fields", nullptr));
#if QT_CONFIG(tooltip)
        mAuxiliaryStorageFieldsAddBtn->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Add new field", nullptr));
#endif // QT_CONFIG(tooltip)
        mAuxiliaryStorageFieldsAddBtn->setText(QString());
#if QT_CONFIG(tooltip)
        mAuxiliaryStorageFieldsDeleteBtn->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Remove selected field", nullptr));
#endif // QT_CONFIG(tooltip)
        mAuxiliaryStorageFieldsDeleteBtn->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem1 = mAuxiliaryStorageFieldsTree->headerItem();
        ___qtreewidgetitem1->setText(4, QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Full Name", nullptr));
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Type", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Name", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Property", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Target", nullptr));
        label_1->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Auxiliary storage tables can contain additional data that should only belong to the project file. For instance, specific location or rotation for labels. Auxiliary data are saved in qgd files. New fields can be added from any data-defined widget when needed. Be aware that this information will NOT be saved in the data source but only in the project file.", nullptr));
        groupBox_22->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Display Name", nullptr));
        labelDisplayNameInfo->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "The feature display name is used in identify results, locator searches and the attribute table's dual view list.", nullptr));
#if QT_CONFIG(tooltip)
        mEnableMapTips->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Indicates whether map tips are displayed for this layer or not", nullptr));
#endif // QT_CONFIG(tooltip)
        mEnableMapTips->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Enable map tips", nullptr));
        mHtmlMapTipGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "HTML Map Tip", nullptr));
#if QT_CONFIG(tooltip)
        mMapTipInsertFieldButton->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Inserts the selected field into the map tip", nullptr));
#endif // QT_CONFIG(tooltip)
        mMapTipInsertFieldButton->setText(QString());
        mMapTipInsertExpressionButton->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Insert/Edit Expression", nullptr));
        mMapTipPreviewContainer->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Preview", nullptr));
        labelMapTipInfo->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "The HTML map tips are shown when moving mouse over features of the currently selected layer when the 'Show Map Tips' action is toggled on. If no HTML code is set, the feature display name is used.", nullptr));
        mScaleVisibilityGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Scale Dependen&t Visibility", nullptr));
        mSimplifyDrawingGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Simplify &Geometry", nullptr));
        label_59->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "<b>Note:</b> Feature simplification may speed up rendering but can result in rendering inconsistencies", nullptr));
        label_56->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Simplification threshold (higher values result in more simplification)", nullptr));
#if QT_CONFIG(tooltip)
        mSimplifyDrawingSpinBox->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Higher values result in more simplification", nullptr));
#endif // QT_CONFIG(tooltip)
        mSimplifyDrawingPx->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "pixels", nullptr));
#if QT_CONFIG(tooltip)
        mSimplifyAlgorithmLabel->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "This algorithm only is applied to simplify on local side", nullptr));
#endif // QT_CONFIG(tooltip)
        mSimplifyAlgorithmLabel->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Simplification algorithm", nullptr));
        mSimplifyDrawingAtProvider->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Simplify on provider side if possible", nullptr));
        mSimplifyMaxScaleLabel->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Maximum scale at which the layer should be simplified (1:1 always simplifies)", nullptr));
        mUseReferenceScaleGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Fixed Reference Scale", nullptr));
        label->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Reference scale", nullptr));
        label_8->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "<html><head/><body><p>If set, the reference scale indicates the map scale at which symbology and labeling sizes which uses paper-based units (such as millimeters or points) relate to. The sizes will be scaled accordingly whenever the map is viewed at a different scale.</p><p>For instance, a line layer using a 2mm wide line with a 1:2000 reference scale set will be rendered using 4mm wide lines when the map is viewed at 1:1000.</p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Selections", nullptr));
        mRadioOverrideSelectionSymbol->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Override symbol for selected features", nullptr));
        mRadioDefaultSelectionColor->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Use default selection color", nullptr));
        mRadioOverrideSelectionColor->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Override color for selected features", nullptr));
        mSelectionColorButton->setText(QString());
        mSelectionSymbolButton->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Change\342\200\246", nullptr));
        mForceRasterCheckBox->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Force layer to render as a raster (may result in smaller export file sizes)", nullptr));
#if QT_CONFIG(tooltip)
        mRefreshLayerNotificationCheckBox->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "<html><head/><body><p>Some data providers can notify QGIS (e.g. PostgreSQL) with a message. If this is the case for this layer's data provider, notification will refresh the layer. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mRefreshLayerNotificationCheckBox->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Refresh layer on notification", nullptr));
#if QT_CONFIG(tooltip)
        mNotificationMessageCheckBox->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "<html><head/><body><p>Check if only a specific message must refresh the layer (i.e. not all data source notifications)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mNotificationMessageCheckBox->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Only if message is", nullptr));
#if QT_CONFIG(tooltip)
        mNotifyMessagValueLineEdit->setToolTip(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "<html><head/><body><p>Notification message that will refresh the layer.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_4->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Variables", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Data Dependencies", nullptr));
        label1->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Features in this layer may be updated when the layers selected below are changed", nullptr));
        label_4->setText(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Selected dependent layers should include any layers which may externally alter the data in this layer. For instance, layers with database triggers or custom PyQGIS scripting which alter this layer should be selected. Correctly specifying dependent layers allows QGIS to invalidate caches for this layer when the dependent layers are altered.", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Embedded Widgets in Legend", nullptr));
        mWmsDimensionsGrpBx->setTitle(QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Dimensions", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = mWmsDimensionsTreeWidget->headerItem();
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Value", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("QgsVectorLayerPropertiesBase", "Setting", nullptr));
        mButtonAddWmsDimension->setText(QString());
        mButtonEditWmsDimension->setText(QString());
        mButtonRemoveWmsDimension->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerPropertiesBase: public Ui_QgsVectorLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERPROPERTIESBASE_H
