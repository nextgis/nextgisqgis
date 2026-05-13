/********************************************************************************
** Form generated from reading UI file 'qgsdiagrampropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDIAGRAMPROPERTIESBASE_H
#define UI_QGSDIAGRAMPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgseffectstackpropertieswidget.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsfontbutton.h"
#include "qgsopacitywidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDiagramPropertiesBase
{
public:
    QVBoxLayout *verticalLayout_8;
    QFrame *frameShowDiagrams;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *mDiagramTypeComboBox;
    QCheckBox *mEnableDiagramCheckBox;
    QTabWidget *mOptionsTab;
    QWidget *tabAttributes;
    QWidget *tabRendering;
    QWidget *tabSize;
    QWidget *tabPlacement;
    QWidget *tabOptions;
    QWidget *tabLegend;
    QFrame *mDiagramFrame;
    QGridLayout *gridLayout_6;
    QSplitter *mDiagramOptionsSplitter;
    QFrame *mDiagramOptionsListFrame;
    QVBoxLayout *verticalLayout_23;
    QListWidget *mDiagramOptionsListWidget;
    QFrame *mDiagramOptionGroupsFrame;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *mDiagramStackedWidget;
    QWidget *mDiagramPage_Attributes;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *availAttributesLayout;
    QLabel *label;
    QTreeWidget *mAttributesTreeWidget;
    QVBoxLayout *attributeButtonLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *mAddAttributeExpression;
    QPushButton *mAddCategoryPushButton;
    QPushButton *mRemoveCategoryPushButton;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *assignedAttributesLayout;
    QLabel *Assigened;
    QTreeWidget *mDiagramAttributesTreeWidget;
    QWidget *mDiagramPage_Rendering;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_39;
    QgsScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mFormatGrpBox;
    QGridLayout *gridLayout_7;
    QLabel *mBarSpacingLabel;
    QLabel *mBackgroundColorLabel;
    QgsColorButton *mBackgroundColorButton;
    QgsPropertyOverrideButton *mStartAngleDDBtn;
    QLabel *mPenColorLabel;
    QgsOpacityWidget *mOpacityWidget;
    QLabel *mAngleOffsetLabel;
    QComboBox *mAngleOffsetComboBox;
    QgsColorButton *mDiagramPenColorButton;
    QComboBox *mAngleDirectionComboBox;
    QgsDoubleSpinBox *mBarWidthSpinBox;
    QgsFontButton *mDiagramFontButton;
    QgsPropertyOverrideButton *mLineColorDDBtn;
    QgsPropertyOverrideButton *mLineWidthDDBtn;
    QgsUnitSelectionWidget *mDiagramLineUnitComboBox;
    QgsDoubleSpinBox *mBarSpacingSpinBox;
    QLabel *mAngleDirectionLabel;
    QLabel *mBarWidthLabel;
    QLabel *mPenWidthLabel;
    QLabel *mOpacityLabel;
    QgsUnitSelectionWidget *mBarSpacingUnitComboBox;
    QgsDoubleSpinBox *mPenWidthSpinBox;
    QgsPropertyOverrideButton *mBackgroundColorDDBtn;
    QgsEffectStackCompactWidget *mPaintEffectWidget;
    QgsCollapsibleGroupBox *mShowAxisGroupBox;
    QGridLayout *gridLayout_5;
    QgsSymbolButton *mAxisLineStyleButton;
    QLabel *label_2;
    QgsCollapsibleGroupBox *mVisiblityGrpBox;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *mZIndexSpinBox;
    QLabel *label_16;
    QgsCollapsibleGroupBox *mScaleVisibilityGroupBox;
    QGridLayout *gridLayout_15;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QgsPropertyOverrideButton *mZOrderDDBtn;
    QCheckBox *mShowAllCheckBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mShowDiagramLabel;
    QgsPropertyOverrideButton *mShowDiagramDDBtn;
    QFrame *line_4;
    QLabel *mAlwaysShowLabel;
    QgsPropertyOverrideButton *mAlwaysShowDDBtn;
    QSpacerItem *horizontalSpacer_23;
    QLabel *mDlsLabel_1;
    QSpacerItem *verticalSpacer_2;
    QWidget *mDiagramPage_Size;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_40;
    QgsScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_6;
    QGridLayout *gridLayout_11;
    QLabel *mDiagramUnitsLabel;
    QRadioButton *mFixedSizeRadio;
    QgsDoubleSpinBox *mDiagramSizeSpinBox;
    QgsUnitSelectionWidget *mDiagramUnitComboBox;
    QSpacerItem *verticalSpacer_3;
    QFrame *mLinearScaleFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLinearlyScalingLabel;
    QGridLayout *gridLayout;
    QLabel *mSizeLabel;
    QLabel *mScaleDependencyLabel;
    QComboBox *mScaleDependencyComboBox;
    QFrame *mFrameIncreaseSize;
    QHBoxLayout *horizontalLayout;
    QgsCollapsibleGroupBox *mIncreaseSmallDiagramsGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mIncreaseMinimumSizeLabel;
    QgsDoubleSpinBox *mIncreaseMinimumSizeSpinBox;
    QPushButton *mFindMaximumValueButton;
    QgsFieldExpressionWidget *mSizeFieldExpressionWidget;
    QLabel *mSizeAttributeLabel;
    QLabel *label_4;
    QgsDoubleSpinBox *mMaxValueSpinBox;
    QgsDoubleSpinBox *mSizeSpinBox;
    QRadioButton *mAttributeBasedScalingRadio;
    QWidget *mDiagramPage_Placement;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_41;
    QgsScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_7;
    QGridLayout *gridLayout_12;
    QStackedWidget *stackedPlacement;
    QWidget *pagePoint;
    QGridLayout *gridLayout_13;
    QRadioButton *radAroundPoint;
    QRadioButton *radOverPoint;
    QSpacerItem *horizontalSpacer_25;
    QWidget *pageLine;
    QGridLayout *gridLayout_14;
    QRadioButton *radOverLine;
    QRadioButton *radAroundLine;
    QSpacerItem *horizontalSpacer_15;
    QWidget *pagePolygon;
    QGridLayout *gridLayout_18;
    QRadioButton *radInsidePolygon;
    QRadioButton *radAroundCentroid;
    QSpacerItem *horizontalSpacer_26;
    QRadioButton *radOverCentroid;
    QRadioButton *radPolygonPerimeter;
    QLabel *mDlsLabel_2;
    QFrame *mPlacementFrame;
    QGridLayout *gridLayout_4;
    QLabel *mDiagramDistanceLabel;
    QHBoxLayout *horizontalLayout_14;
    QgsDoubleSpinBox *mDiagramDistanceSpinBox;
    QgsPropertyOverrideButton *mDistanceDDBtn;
    QFrame *mLinePlacementFrame;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_20;
    QCheckBox *chkLineAbove;
    QCheckBox *chkLineBelow;
    QCheckBox *chkLineOn;
    QCheckBox *chkLineOrientationDependent;
    QgsCollapsibleGroupBox *mCoordinatesGrpBox;
    QHBoxLayout *horizontalLayout_22;
    QLabel *mCoordXLabel;
    QgsPropertyOverrideButton *mCoordXDDBtn;
    QLabel *mCoordYLabel;
    QgsPropertyOverrideButton *mCoordYDDBtn;
    QSpacerItem *horizontalSpacer_22;
    QgsCollapsibleGroupBox *mPriorityGrpBox;
    QHBoxLayout *horizontalLayout_92;
    QLabel *mPriorityLowLabel;
    QSlider *mPrioritySlider;
    QLabel *mPriorityHighLabel;
    QgsPropertyOverrideButton *mPriorityDDBtn;
    QSpacerItem *verticalSpacer_4;
    QgsCollapsibleGroupBox *mObstaclesGrpBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QgsPropertyOverrideButton *mIsObstacleDDBtn;
    QSpacerItem *horizontalSpacer;
    QWidget *mDiagramPage_Options;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_42;
    QgsScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_3;
    QFrame *mBarOptionsFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QRadioButton *mOrientationUpButton;
    QRadioButton *mOrientationDownButton;
    QRadioButton *mOrientationRightButton;
    QRadioButton *mOrientationLeftButton;
    QFrame *mTextOptionsFrame;
    QGridLayout *gridLayout_21;
    QLabel *mLabelPlacementLabel;
    QComboBox *mLabelPlacementComboBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QWidget *mDiagramPage_Legend;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_71;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *mCheckBoxAttributeLegend;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mButtonSizeLegendSettings;
    QSpacerItem *horizontalSpacer_111;
    QSpacerItem *verticalSpacer_7;
    QButtonGroup *mOrientationButtonGroup;

    void setupUi(QWidget *QgsDiagramPropertiesBase)
    {
        if (QgsDiagramPropertiesBase->objectName().isEmpty())
            QgsDiagramPropertiesBase->setObjectName(QString::fromUtf8("QgsDiagramPropertiesBase"));
        QgsDiagramPropertiesBase->resize(688, 491);
        verticalLayout_8 = new QVBoxLayout(QgsDiagramPropertiesBase);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        frameShowDiagrams = new QFrame(QgsDiagramPropertiesBase);
        frameShowDiagrams->setObjectName(QString::fromUtf8("frameShowDiagrams"));
        horizontalLayout_4 = new QHBoxLayout(frameShowDiagrams);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mDiagramTypeComboBox = new QComboBox(frameShowDiagrams);
        mDiagramTypeComboBox->setObjectName(QString::fromUtf8("mDiagramTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDiagramTypeComboBox->sizePolicy().hasHeightForWidth());
        mDiagramTypeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(mDiagramTypeComboBox);


        verticalLayout_8->addWidget(frameShowDiagrams);

        mEnableDiagramCheckBox = new QCheckBox(QgsDiagramPropertiesBase);
        mEnableDiagramCheckBox->setObjectName(QString::fromUtf8("mEnableDiagramCheckBox"));

        verticalLayout_8->addWidget(mEnableDiagramCheckBox);

        mOptionsTab = new QTabWidget(QgsDiagramPropertiesBase);
        mOptionsTab->setObjectName(QString::fromUtf8("mOptionsTab"));
        mOptionsTab->setIconSize(QSize(20, 20));
        mOptionsTab->setDocumentMode(true);
        tabAttributes = new QWidget();
        tabAttributes->setObjectName(QString::fromUtf8("tabAttributes"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(tabAttributes, icon, QString());
        tabRendering = new QWidget();
        tabRendering->setObjectName(QString::fromUtf8("tabRendering"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/render.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(tabRendering, icon1, QString());
        tabSize = new QWidget();
        tabSize->setObjectName(QString::fromUtf8("tabSize"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/transparency.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(tabSize, icon2, QString());
        tabPlacement = new QWidget();
        tabPlacement->setObjectName(QString::fromUtf8("tabPlacement"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelplacement.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(tabPlacement, icon3, QString());
        tabOptions = new QWidget();
        tabOptions->setObjectName(QString::fromUtf8("tabOptions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/action.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(tabOptions, icon4, QString());
        tabLegend = new QWidget();
        tabLegend->setObjectName(QString::fromUtf8("tabLegend"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/legend.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOptionsTab->addTab(tabLegend, icon5, QString());

        verticalLayout_8->addWidget(mOptionsTab);

        mDiagramFrame = new QFrame(QgsDiagramPropertiesBase);
        mDiagramFrame->setObjectName(QString::fromUtf8("mDiagramFrame"));
        mDiagramFrame->setFrameShape(QFrame::Shape::NoFrame);
        mDiagramFrame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_6 = new QGridLayout(mDiagramFrame);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        mDiagramOptionsSplitter = new QSplitter(mDiagramFrame);
        mDiagramOptionsSplitter->setObjectName(QString::fromUtf8("mDiagramOptionsSplitter"));
        mDiagramOptionsSplitter->setOrientation(Qt::Orientation::Horizontal);
        mDiagramOptionsSplitter->setChildrenCollapsible(false);
        mDiagramOptionsListFrame = new QFrame(mDiagramOptionsSplitter);
        mDiagramOptionsListFrame->setObjectName(QString::fromUtf8("mDiagramOptionsListFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDiagramOptionsListFrame->sizePolicy().hasHeightForWidth());
        mDiagramOptionsListFrame->setSizePolicy(sizePolicy1);
        mDiagramOptionsListFrame->setMinimumSize(QSize(32, 0));
        mDiagramOptionsListFrame->setFrameShape(QFrame::Shape::NoFrame);
        mDiagramOptionsListFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_23 = new QVBoxLayout(mDiagramOptionsListFrame);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(3, 0, 0, 0);
        mDiagramOptionsListWidget = new QListWidget(mDiagramOptionsListFrame);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        mDiagramOptionsListWidget->setObjectName(QString::fromUtf8("mDiagramOptionsListWidget"));
        mDiagramOptionsListWidget->setMinimumSize(QSize(32, 0));
        mDiagramOptionsListWidget->setProperty("showDropIndicator", QVariant(false));
        mDiagramOptionsListWidget->setIconSize(QSize(20, 20));

        verticalLayout_23->addWidget(mDiagramOptionsListWidget);

        mDiagramOptionsSplitter->addWidget(mDiagramOptionsListFrame);
        mDiagramOptionGroupsFrame = new QFrame(mDiagramOptionsSplitter);
        mDiagramOptionGroupsFrame->setObjectName(QString::fromUtf8("mDiagramOptionGroupsFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mDiagramOptionGroupsFrame->sizePolicy().hasHeightForWidth());
        mDiagramOptionGroupsFrame->setSizePolicy(sizePolicy2);
        mDiagramOptionGroupsFrame->setFrameShape(QFrame::Shape::NoFrame);
        mDiagramOptionGroupsFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(mDiagramOptionGroupsFrame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 0, 0, 6);
        mDiagramStackedWidget = new QStackedWidget(mDiagramOptionGroupsFrame);
        mDiagramStackedWidget->setObjectName(QString::fromUtf8("mDiagramStackedWidget"));
        mDiagramPage_Attributes = new QWidget();
        mDiagramPage_Attributes->setObjectName(QString::fromUtf8("mDiagramPage_Attributes"));
        verticalLayout_9 = new QVBoxLayout(mDiagramPage_Attributes);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(mDiagramPage_Attributes);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_9->addWidget(label_6);

        scrollArea = new QgsScrollArea(mDiagramPage_Attributes);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 646, 373));
        horizontalLayout_6 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 6, 6);
        availAttributesLayout = new QVBoxLayout();
        availAttributesLayout->setObjectName(QString::fromUtf8("availAttributesLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        availAttributesLayout->addWidget(label);

        mAttributesTreeWidget = new QTreeWidget(scrollAreaWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Attribute"));
        mAttributesTreeWidget->setHeaderItem(__qtreewidgetitem);
        mAttributesTreeWidget->setObjectName(QString::fromUtf8("mAttributesTreeWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mAttributesTreeWidget->sizePolicy().hasHeightForWidth());
        mAttributesTreeWidget->setSizePolicy(sizePolicy3);
        mAttributesTreeWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        mAttributesTreeWidget->setIndentation(0);
        mAttributesTreeWidget->setRootIsDecorated(false);
        mAttributesTreeWidget->setItemsExpandable(false);
        mAttributesTreeWidget->setExpandsOnDoubleClick(false);
        mAttributesTreeWidget->setColumnCount(1);

        availAttributesLayout->addWidget(mAttributesTreeWidget);


        horizontalLayout_6->addLayout(availAttributesLayout);

        attributeButtonLayout = new QVBoxLayout();
        attributeButtonLayout->setObjectName(QString::fromUtf8("attributeButtonLayout"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        attributeButtonLayout->addItem(verticalSpacer);

        mAddAttributeExpression = new QPushButton(scrollAreaWidgetContents);
        mAddAttributeExpression->setObjectName(QString::fromUtf8("mAddAttributeExpression"));
        mAddAttributeExpression->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeExpression->setIcon(icon6);

        attributeButtonLayout->addWidget(mAddAttributeExpression);

        mAddCategoryPushButton = new QPushButton(scrollAreaWidgetContents);
        mAddCategoryPushButton->setObjectName(QString::fromUtf8("mAddCategoryPushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mAddCategoryPushButton->sizePolicy().hasHeightForWidth());
        mAddCategoryPushButton->setSizePolicy(sizePolicy4);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddCategoryPushButton->setIcon(icon7);

        attributeButtonLayout->addWidget(mAddCategoryPushButton);

        mRemoveCategoryPushButton = new QPushButton(scrollAreaWidgetContents);
        mRemoveCategoryPushButton->setObjectName(QString::fromUtf8("mRemoveCategoryPushButton"));
        sizePolicy4.setHeightForWidth(mRemoveCategoryPushButton->sizePolicy().hasHeightForWidth());
        mRemoveCategoryPushButton->setSizePolicy(sizePolicy4);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveCategoryPushButton->setIcon(icon8);

        attributeButtonLayout->addWidget(mRemoveCategoryPushButton);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        attributeButtonLayout->addItem(verticalSpacer_5);

        attributeButtonLayout->setStretch(0, 1);
        attributeButtonLayout->setStretch(4, 1);

        horizontalLayout_6->addLayout(attributeButtonLayout);

        assignedAttributesLayout = new QVBoxLayout();
        assignedAttributesLayout->setObjectName(QString::fromUtf8("assignedAttributesLayout"));
        Assigened = new QLabel(scrollAreaWidgetContents);
        Assigened->setObjectName(QString::fromUtf8("Assigened"));

        assignedAttributesLayout->addWidget(Assigened);

        mDiagramAttributesTreeWidget = new QTreeWidget(scrollAreaWidgetContents);
        mDiagramAttributesTreeWidget->setObjectName(QString::fromUtf8("mDiagramAttributesTreeWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mDiagramAttributesTreeWidget->sizePolicy().hasHeightForWidth());
        mDiagramAttributesTreeWidget->setSizePolicy(sizePolicy5);
        mDiagramAttributesTreeWidget->setDragEnabled(true);
        mDiagramAttributesTreeWidget->setDragDropMode(QAbstractItemView::DragDropMode::InternalMove);
        mDiagramAttributesTreeWidget->setDefaultDropAction(Qt::DropAction::TargetMoveAction);
        mDiagramAttributesTreeWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        mDiagramAttributesTreeWidget->setIndentation(0);
        mDiagramAttributesTreeWidget->setRootIsDecorated(false);
        mDiagramAttributesTreeWidget->setItemsExpandable(false);
        mDiagramAttributesTreeWidget->setColumnCount(3);

        assignedAttributesLayout->addWidget(mDiagramAttributesTreeWidget);


        horizontalLayout_6->addLayout(assignedAttributesLayout);

        horizontalLayout_6->setStretch(2, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_9->addWidget(scrollArea);

        mDiagramStackedWidget->addWidget(mDiagramPage_Attributes);
        mDiagramPage_Rendering = new QWidget();
        mDiagramPage_Rendering->setObjectName(QString::fromUtf8("mDiagramPage_Rendering"));
        verticalLayout_13 = new QVBoxLayout(mDiagramPage_Rendering);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_39 = new QLabel(mDiagramPage_Rendering);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        verticalLayout_13->addWidget(label_39);

        scrollArea_4 = new QgsScrollArea(mDiagramPage_Rendering);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 632, 671));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 6, 0);
        mFormatGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mFormatGrpBox->setObjectName(QString::fromUtf8("mFormatGrpBox"));
        mFormatGrpBox->setProperty("syncGroup", QVariant(QString::fromUtf8("labelrenderinggroup")));
        gridLayout_7 = new QGridLayout(mFormatGrpBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mBarSpacingLabel = new QLabel(mFormatGrpBox);
        mBarSpacingLabel->setObjectName(QString::fromUtf8("mBarSpacingLabel"));

        gridLayout_7->addWidget(mBarSpacingLabel, 2, 0, 1, 1);

        mBackgroundColorLabel = new QLabel(mFormatGrpBox);
        mBackgroundColorLabel->setObjectName(QString::fromUtf8("mBackgroundColorLabel"));

        gridLayout_7->addWidget(mBackgroundColorLabel, 3, 0, 1, 1);

        mBackgroundColorButton = new QgsColorButton(mFormatGrpBox);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        sizePolicy.setHeightForWidth(mBackgroundColorButton->sizePolicy().hasHeightForWidth());
        mBackgroundColorButton->setSizePolicy(sizePolicy);
        mBackgroundColorButton->setMinimumSize(QSize(0, 0));
        mBackgroundColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_7->addWidget(mBackgroundColorButton, 3, 1, 1, 2);

        mStartAngleDDBtn = new QgsPropertyOverrideButton(mFormatGrpBox);
        mStartAngleDDBtn->setObjectName(QString::fromUtf8("mStartAngleDDBtn"));

        gridLayout_7->addWidget(mStartAngleDDBtn, 6, 3, 1, 1);

        mPenColorLabel = new QLabel(mFormatGrpBox);
        mPenColorLabel->setObjectName(QString::fromUtf8("mPenColorLabel"));

        gridLayout_7->addWidget(mPenColorLabel, 4, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mFormatGrpBox);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mOpacityWidget->sizePolicy().hasHeightForWidth());
        mOpacityWidget->setSizePolicy(sizePolicy6);
        mOpacityWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_7->addWidget(mOpacityWidget, 0, 1, 1, 3);

        mAngleOffsetLabel = new QLabel(mFormatGrpBox);
        mAngleOffsetLabel->setObjectName(QString::fromUtf8("mAngleOffsetLabel"));

        gridLayout_7->addWidget(mAngleOffsetLabel, 6, 0, 1, 1);

        mAngleOffsetComboBox = new QComboBox(mFormatGrpBox);
        mAngleOffsetComboBox->setObjectName(QString::fromUtf8("mAngleOffsetComboBox"));
        sizePolicy.setHeightForWidth(mAngleOffsetComboBox->sizePolicy().hasHeightForWidth());
        mAngleOffsetComboBox->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(mAngleOffsetComboBox, 6, 1, 1, 2);

        mDiagramPenColorButton = new QgsColorButton(mFormatGrpBox);
        mDiagramPenColorButton->setObjectName(QString::fromUtf8("mDiagramPenColorButton"));
        sizePolicy.setHeightForWidth(mDiagramPenColorButton->sizePolicy().hasHeightForWidth());
        mDiagramPenColorButton->setSizePolicy(sizePolicy);
        mDiagramPenColorButton->setMinimumSize(QSize(120, 0));
        mDiagramPenColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_7->addWidget(mDiagramPenColorButton, 4, 1, 1, 2);

        mAngleDirectionComboBox = new QComboBox(mFormatGrpBox);
        mAngleDirectionComboBox->setObjectName(QString::fromUtf8("mAngleDirectionComboBox"));
        sizePolicy.setHeightForWidth(mAngleDirectionComboBox->sizePolicy().hasHeightForWidth());
        mAngleDirectionComboBox->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(mAngleDirectionComboBox, 7, 1, 1, 3);

        mBarWidthSpinBox = new QgsDoubleSpinBox(mFormatGrpBox);
        mBarWidthSpinBox->setObjectName(QString::fromUtf8("mBarWidthSpinBox"));
        mBarWidthSpinBox->setDecimals(5);
        mBarWidthSpinBox->setMinimum(0.010000000000000);
        mBarWidthSpinBox->setMaximum(99999.990000000005239);
        mBarWidthSpinBox->setSingleStep(0.200000000000000);
        mBarWidthSpinBox->setValue(0.010000000000000);

        gridLayout_7->addWidget(mBarWidthSpinBox, 1, 1, 1, 3);

        mDiagramFontButton = new QgsFontButton(mFormatGrpBox);
        mDiagramFontButton->setObjectName(QString::fromUtf8("mDiagramFontButton"));
        sizePolicy.setHeightForWidth(mDiagramFontButton->sizePolicy().hasHeightForWidth());
        mDiagramFontButton->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(mDiagramFontButton, 9, 0, 1, 4);

        mLineColorDDBtn = new QgsPropertyOverrideButton(mFormatGrpBox);
        mLineColorDDBtn->setObjectName(QString::fromUtf8("mLineColorDDBtn"));

        gridLayout_7->addWidget(mLineColorDDBtn, 4, 3, 1, 1);

        mLineWidthDDBtn = new QgsPropertyOverrideButton(mFormatGrpBox);
        mLineWidthDDBtn->setObjectName(QString::fromUtf8("mLineWidthDDBtn"));

        gridLayout_7->addWidget(mLineWidthDDBtn, 5, 3, 1, 1);

        mDiagramLineUnitComboBox = new QgsUnitSelectionWidget(mFormatGrpBox);
        mDiagramLineUnitComboBox->setObjectName(QString::fromUtf8("mDiagramLineUnitComboBox"));
        mDiagramLineUnitComboBox->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_7->addWidget(mDiagramLineUnitComboBox, 5, 2, 1, 1);

        mBarSpacingSpinBox = new QgsDoubleSpinBox(mFormatGrpBox);
        mBarSpacingSpinBox->setObjectName(QString::fromUtf8("mBarSpacingSpinBox"));
        mBarSpacingSpinBox->setDecimals(5);
        mBarSpacingSpinBox->setMinimum(0.000000000000000);
        mBarSpacingSpinBox->setMaximum(99999.990000000005239);
        mBarSpacingSpinBox->setSingleStep(0.200000000000000);
        mBarSpacingSpinBox->setValue(5.000000000000000);

        gridLayout_7->addWidget(mBarSpacingSpinBox, 2, 1, 1, 1);

        mAngleDirectionLabel = new QLabel(mFormatGrpBox);
        mAngleDirectionLabel->setObjectName(QString::fromUtf8("mAngleDirectionLabel"));

        gridLayout_7->addWidget(mAngleDirectionLabel, 7, 0, 1, 1);

        mBarWidthLabel = new QLabel(mFormatGrpBox);
        mBarWidthLabel->setObjectName(QString::fromUtf8("mBarWidthLabel"));

        gridLayout_7->addWidget(mBarWidthLabel, 1, 0, 1, 1);

        mPenWidthLabel = new QLabel(mFormatGrpBox);
        mPenWidthLabel->setObjectName(QString::fromUtf8("mPenWidthLabel"));

        gridLayout_7->addWidget(mPenWidthLabel, 5, 0, 1, 1);

        mOpacityLabel = new QLabel(mFormatGrpBox);
        mOpacityLabel->setObjectName(QString::fromUtf8("mOpacityLabel"));
        mOpacityLabel->setMinimumSize(QSize(130, 0));

        gridLayout_7->addWidget(mOpacityLabel, 0, 0, 1, 1);

        mBarSpacingUnitComboBox = new QgsUnitSelectionWidget(mFormatGrpBox);
        mBarSpacingUnitComboBox->setObjectName(QString::fromUtf8("mBarSpacingUnitComboBox"));
        mBarSpacingUnitComboBox->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_7->addWidget(mBarSpacingUnitComboBox, 2, 2, 1, 2);

        mPenWidthSpinBox = new QgsDoubleSpinBox(mFormatGrpBox);
        mPenWidthSpinBox->setObjectName(QString::fromUtf8("mPenWidthSpinBox"));
        sizePolicy.setHeightForWidth(mPenWidthSpinBox->sizePolicy().hasHeightForWidth());
        mPenWidthSpinBox->setSizePolicy(sizePolicy);
        mPenWidthSpinBox->setDecimals(5);
        mPenWidthSpinBox->setMaximum(99999.990000000005239);
        mPenWidthSpinBox->setSingleStep(0.200000000000000);

        gridLayout_7->addWidget(mPenWidthSpinBox, 5, 1, 1, 1);

        mBackgroundColorDDBtn = new QgsPropertyOverrideButton(mFormatGrpBox);
        mBackgroundColorDDBtn->setObjectName(QString::fromUtf8("mBackgroundColorDDBtn"));

        gridLayout_7->addWidget(mBackgroundColorDDBtn, 3, 3, 1, 1);

        mPaintEffectWidget = new QgsEffectStackCompactWidget(mFormatGrpBox);
        mPaintEffectWidget->setObjectName(QString::fromUtf8("mPaintEffectWidget"));
        mPaintEffectWidget->setMinimumSize(QSize(0, 10));

        gridLayout_7->addWidget(mPaintEffectWidget, 10, 0, 1, 4);


        verticalLayout->addWidget(mFormatGrpBox);

        mShowAxisGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mShowAxisGroupBox->setObjectName(QString::fromUtf8("mShowAxisGroupBox"));
        mShowAxisGroupBox->setCheckable(true);
        gridLayout_5 = new QGridLayout(mShowAxisGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mAxisLineStyleButton = new QgsSymbolButton(mShowAxisGroupBox);
        mAxisLineStyleButton->setObjectName(QString::fromUtf8("mAxisLineStyleButton"));
        sizePolicy.setHeightForWidth(mAxisLineStyleButton->sizePolicy().hasHeightForWidth());
        mAxisLineStyleButton->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(mAxisLineStyleButton, 0, 2, 1, 1);

        label_2 = new QLabel(mShowAxisGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addWidget(mShowAxisGroupBox);

        mVisiblityGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mVisiblityGrpBox->setObjectName(QString::fromUtf8("mVisiblityGrpBox"));
        mVisiblityGrpBox->setProperty("syncGroup", QVariant(QString::fromUtf8("labelrenderinggroup")));
        gridLayout_3 = new QGridLayout(mVisiblityGrpBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mZIndexSpinBox = new QgsDoubleSpinBox(mVisiblityGrpBox);
        mZIndexSpinBox->setObjectName(QString::fromUtf8("mZIndexSpinBox"));
        sizePolicy.setHeightForWidth(mZIndexSpinBox->sizePolicy().hasHeightForWidth());
        mZIndexSpinBox->setSizePolicy(sizePolicy);
        mZIndexSpinBox->setMinimum(-9999999.000000000000000);
        mZIndexSpinBox->setMaximum(9999999.000000000000000);

        gridLayout_3->addWidget(mZIndexSpinBox, 0, 1, 1, 1);

        label_16 = new QLabel(mVisiblityGrpBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 0, 0, 1, 1);

        mScaleVisibilityGroupBox = new QgsCollapsibleGroupBox(mVisiblityGrpBox);
        mScaleVisibilityGroupBox->setObjectName(QString::fromUtf8("mScaleVisibilityGroupBox"));
        mScaleVisibilityGroupBox->setCheckable(true);
        gridLayout_15 = new QGridLayout(mScaleVisibilityGroupBox);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(9, 9, -1, -1);
        mScaleRangeWidget = new QgsScaleRangeWidget(mScaleVisibilityGroupBox);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        gridLayout_15->addWidget(mScaleRangeWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(mScaleVisibilityGroupBox, 4, 0, 1, 3);

        mZOrderDDBtn = new QgsPropertyOverrideButton(mVisiblityGrpBox);
        mZOrderDDBtn->setObjectName(QString::fromUtf8("mZOrderDDBtn"));

        gridLayout_3->addWidget(mZOrderDDBtn, 0, 2, 1, 1);

        mShowAllCheckBox = new QCheckBox(mVisiblityGrpBox);
        mShowAllCheckBox->setObjectName(QString::fromUtf8("mShowAllCheckBox"));
        mShowAllCheckBox->setChecked(true);

        gridLayout_3->addWidget(mShowAllCheckBox, 1, 0, 1, 3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mShowDiagramLabel = new QLabel(mVisiblityGrpBox);
        mShowDiagramLabel->setObjectName(QString::fromUtf8("mShowDiagramLabel"));
        mShowDiagramLabel->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mShowDiagramLabel->sizePolicy().hasHeightForWidth());
        mShowDiagramLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_9->addWidget(mShowDiagramLabel);

        mShowDiagramDDBtn = new QgsPropertyOverrideButton(mVisiblityGrpBox);
        mShowDiagramDDBtn->setObjectName(QString::fromUtf8("mShowDiagramDDBtn"));

        horizontalLayout_9->addWidget(mShowDiagramDDBtn);

        line_4 = new QFrame(mVisiblityGrpBox);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_4);

        mAlwaysShowLabel = new QLabel(mVisiblityGrpBox);
        mAlwaysShowLabel->setObjectName(QString::fromUtf8("mAlwaysShowLabel"));
        sizePolicy7.setHeightForWidth(mAlwaysShowLabel->sizePolicy().hasHeightForWidth());
        mAlwaysShowLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_9->addWidget(mAlwaysShowLabel);

        mAlwaysShowDDBtn = new QgsPropertyOverrideButton(mVisiblityGrpBox);
        mAlwaysShowDDBtn->setObjectName(QString::fromUtf8("mAlwaysShowDDBtn"));

        horizontalLayout_9->addWidget(mAlwaysShowDDBtn);

        horizontalSpacer_23 = new QSpacerItem(195, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_23);


        gridLayout_3->addLayout(horizontalLayout_9, 3, 0, 1, 3);

        mDlsLabel_1 = new QLabel(mVisiblityGrpBox);
        mDlsLabel_1->setObjectName(QString::fromUtf8("mDlsLabel_1"));
        QFont font;
        font.setItalic(true);
        mDlsLabel_1->setFont(font);
        mDlsLabel_1->setStyleSheet(QString::fromUtf8("color: rgb(220, 125, 0);"));
        mDlsLabel_1->setWordWrap(true);

        gridLayout_3->addWidget(mDlsLabel_1, 2, 0, 1, 3);


        verticalLayout->addWidget(mVisiblityGrpBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(3, 1);
        scrollArea_4->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_13->addWidget(scrollArea_4);

        mDiagramStackedWidget->addWidget(mDiagramPage_Rendering);
        mDiagramPage_Size = new QWidget();
        mDiagramPage_Size->setObjectName(QString::fromUtf8("mDiagramPage_Size"));
        verticalLayout_6 = new QVBoxLayout(mDiagramPage_Size);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(mDiagramPage_Size);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        verticalLayout_6->addWidget(label_40);

        scrollArea_5 = new QgsScrollArea(mDiagramPage_Size);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 646, 373));
        gridLayout_11 = new QGridLayout(scrollAreaWidgetContents_6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 6, 0);
        mDiagramUnitsLabel = new QLabel(scrollAreaWidgetContents_6);
        mDiagramUnitsLabel->setObjectName(QString::fromUtf8("mDiagramUnitsLabel"));

        gridLayout_11->addWidget(mDiagramUnitsLabel, 0, 0, 1, 1);

        mFixedSizeRadio = new QRadioButton(scrollAreaWidgetContents_6);
        mFixedSizeRadio->setObjectName(QString::fromUtf8("mFixedSizeRadio"));

        gridLayout_11->addWidget(mFixedSizeRadio, 1, 0, 1, 1);

        mDiagramSizeSpinBox = new QgsDoubleSpinBox(scrollAreaWidgetContents_6);
        mDiagramSizeSpinBox->setObjectName(QString::fromUtf8("mDiagramSizeSpinBox"));
        mDiagramSizeSpinBox->setEnabled(false);
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(mDiagramSizeSpinBox->sizePolicy().hasHeightForWidth());
        mDiagramSizeSpinBox->setSizePolicy(sizePolicy8);
        mDiagramSizeSpinBox->setDecimals(6);
        mDiagramSizeSpinBox->setMaximum(9999999.990000000223517);
        mDiagramSizeSpinBox->setSingleStep(0.200000000000000);

        gridLayout_11->addWidget(mDiagramSizeSpinBox, 1, 1, 1, 1);

        mDiagramUnitComboBox = new QgsUnitSelectionWidget(scrollAreaWidgetContents_6);
        mDiagramUnitComboBox->setObjectName(QString::fromUtf8("mDiagramUnitComboBox"));
        mDiagramUnitComboBox->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_11->addWidget(mDiagramUnitComboBox, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(verticalSpacer_3, 4, 0, 1, 1);

        mLinearScaleFrame = new QFrame(scrollAreaWidgetContents_6);
        mLinearScaleFrame->setObjectName(QString::fromUtf8("mLinearScaleFrame"));
        mLinearScaleFrame->setFrameShape(QFrame::Shape::NoFrame);
        mLinearScaleFrame->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_2 = new QVBoxLayout(mLinearScaleFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 0, 0, 0);
        mLinearlyScalingLabel = new QLabel(mLinearScaleFrame);
        mLinearlyScalingLabel->setObjectName(QString::fromUtf8("mLinearlyScalingLabel"));
        mLinearlyScalingLabel->setWordWrap(true);
        mLinearlyScalingLabel->setMargin(0);

        verticalLayout_2->addWidget(mLinearlyScalingLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSizeLabel = new QLabel(mLinearScaleFrame);
        mSizeLabel->setObjectName(QString::fromUtf8("mSizeLabel"));

        gridLayout->addWidget(mSizeLabel, 3, 0, 1, 1);

        mScaleDependencyLabel = new QLabel(mLinearScaleFrame);
        mScaleDependencyLabel->setObjectName(QString::fromUtf8("mScaleDependencyLabel"));

        gridLayout->addWidget(mScaleDependencyLabel, 3, 3, 1, 1);

        mScaleDependencyComboBox = new QComboBox(mLinearScaleFrame);
        mScaleDependencyComboBox->setObjectName(QString::fromUtf8("mScaleDependencyComboBox"));

        gridLayout->addWidget(mScaleDependencyComboBox, 3, 4, 1, 1);

        mFrameIncreaseSize = new QFrame(mLinearScaleFrame);
        mFrameIncreaseSize->setObjectName(QString::fromUtf8("mFrameIncreaseSize"));
        mFrameIncreaseSize->setFrameShape(QFrame::Shape::NoFrame);
        mFrameIncreaseSize->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(mFrameIncreaseSize);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mIncreaseSmallDiagramsGroupBox = new QgsCollapsibleGroupBox(mFrameIncreaseSize);
        mIncreaseSmallDiagramsGroupBox->setObjectName(QString::fromUtf8("mIncreaseSmallDiagramsGroupBox"));
        mIncreaseSmallDiagramsGroupBox->setCheckable(true);
        mIncreaseSmallDiagramsGroupBox->setChecked(true);
        horizontalLayout_2 = new QHBoxLayout(mIncreaseSmallDiagramsGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mIncreaseMinimumSizeLabel = new QLabel(mIncreaseSmallDiagramsGroupBox);
        mIncreaseMinimumSizeLabel->setObjectName(QString::fromUtf8("mIncreaseMinimumSizeLabel"));

        horizontalLayout_2->addWidget(mIncreaseMinimumSizeLabel);

        mIncreaseMinimumSizeSpinBox = new QgsDoubleSpinBox(mIncreaseSmallDiagramsGroupBox);
        mIncreaseMinimumSizeSpinBox->setObjectName(QString::fromUtf8("mIncreaseMinimumSizeSpinBox"));
        sizePolicy.setHeightForWidth(mIncreaseMinimumSizeSpinBox->sizePolicy().hasHeightForWidth());
        mIncreaseMinimumSizeSpinBox->setSizePolicy(sizePolicy);
        mIncreaseMinimumSizeSpinBox->setDecimals(6);
        mIncreaseMinimumSizeSpinBox->setMaximum(100000.000000000000000);
        mIncreaseMinimumSizeSpinBox->setSingleStep(0.200000000000000);

        horizontalLayout_2->addWidget(mIncreaseMinimumSizeSpinBox);


        horizontalLayout->addWidget(mIncreaseSmallDiagramsGroupBox);


        gridLayout->addWidget(mFrameIncreaseSize, 4, 0, 1, 5);

        mFindMaximumValueButton = new QPushButton(mLinearScaleFrame);
        mFindMaximumValueButton->setObjectName(QString::fromUtf8("mFindMaximumValueButton"));

        gridLayout->addWidget(mFindMaximumValueButton, 2, 4, 1, 1);

        mSizeFieldExpressionWidget = new QgsFieldExpressionWidget(mLinearScaleFrame);
        mSizeFieldExpressionWidget->setObjectName(QString::fromUtf8("mSizeFieldExpressionWidget"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(mSizeFieldExpressionWidget->sizePolicy().hasHeightForWidth());
        mSizeFieldExpressionWidget->setSizePolicy(sizePolicy9);
        mSizeFieldExpressionWidget->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mSizeFieldExpressionWidget, 0, 1, 2, 4);

        mSizeAttributeLabel = new QLabel(mLinearScaleFrame);
        mSizeAttributeLabel->setObjectName(QString::fromUtf8("mSizeAttributeLabel"));

        gridLayout->addWidget(mSizeAttributeLabel, 0, 0, 2, 1);

        label_4 = new QLabel(mLinearScaleFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        mMaxValueSpinBox = new QgsDoubleSpinBox(mLinearScaleFrame);
        mMaxValueSpinBox->setObjectName(QString::fromUtf8("mMaxValueSpinBox"));
        mMaxValueSpinBox->setDecimals(6);
        mMaxValueSpinBox->setMinimum(-99999999.000000000000000);
        mMaxValueSpinBox->setMaximum(99999999.000000000000000);

        gridLayout->addWidget(mMaxValueSpinBox, 2, 1, 1, 3);

        mSizeSpinBox = new QgsDoubleSpinBox(mLinearScaleFrame);
        mSizeSpinBox->setObjectName(QString::fromUtf8("mSizeSpinBox"));
        mSizeSpinBox->setDecimals(6);
        mSizeSpinBox->setMaximum(9999999.000000000000000);
        mSizeSpinBox->setSingleStep(0.200000000000000);
        mSizeSpinBox->setValue(5.000000000000000);

        gridLayout->addWidget(mSizeSpinBox, 3, 1, 1, 2);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_11->addWidget(mLinearScaleFrame, 3, 0, 1, 2);

        mAttributeBasedScalingRadio = new QRadioButton(scrollAreaWidgetContents_6);
        mAttributeBasedScalingRadio->setObjectName(QString::fromUtf8("mAttributeBasedScalingRadio"));

        gridLayout_11->addWidget(mAttributeBasedScalingRadio, 2, 0, 1, 1);

        gridLayout_11->setRowStretch(4, 1);
        scrollArea_5->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_6->addWidget(scrollArea_5);

        mDiagramStackedWidget->addWidget(mDiagramPage_Size);
        mDiagramPage_Placement = new QWidget();
        mDiagramPage_Placement->setObjectName(QString::fromUtf8("mDiagramPage_Placement"));
        verticalLayout_7 = new QVBoxLayout(mDiagramPage_Placement);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_41 = new QLabel(mDiagramPage_Placement);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        verticalLayout_7->addWidget(label_41);

        scrollArea_6 = new QgsScrollArea(mDiagramPage_Placement);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 286, 481));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents_7);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        stackedPlacement = new QStackedWidget(scrollAreaWidgetContents_7);
        stackedPlacement->setObjectName(QString::fromUtf8("stackedPlacement"));
        sizePolicy.setHeightForWidth(stackedPlacement->sizePolicy().hasHeightForWidth());
        stackedPlacement->setSizePolicy(sizePolicy);
        stackedPlacement->setFrameShape(QFrame::Shape::NoFrame);
        stackedPlacement->setFrameShadow(QFrame::Shadow::Sunken);
        pagePoint = new QWidget();
        pagePoint->setObjectName(QString::fromUtf8("pagePoint"));
        gridLayout_13 = new QGridLayout(pagePoint);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        radAroundPoint = new QRadioButton(pagePoint);
        radAroundPoint->setObjectName(QString::fromUtf8("radAroundPoint"));
        radAroundPoint->setChecked(true);

        gridLayout_13->addWidget(radAroundPoint, 0, 0, 1, 1);

        radOverPoint = new QRadioButton(pagePoint);
        radOverPoint->setObjectName(QString::fromUtf8("radOverPoint"));

        gridLayout_13->addWidget(radOverPoint, 0, 1, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_25, 0, 2, 1, 1);

        stackedPlacement->addWidget(pagePoint);
        pageLine = new QWidget();
        pageLine->setObjectName(QString::fromUtf8("pageLine"));
        gridLayout_14 = new QGridLayout(pageLine);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        radOverLine = new QRadioButton(pageLine);
        radOverLine->setObjectName(QString::fromUtf8("radOverLine"));
        QSizePolicy sizePolicy10(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(radOverLine->sizePolicy().hasHeightForWidth());
        radOverLine->setSizePolicy(sizePolicy10);

        gridLayout_14->addWidget(radOverLine, 0, 1, 1, 1);

        radAroundLine = new QRadioButton(pageLine);
        radAroundLine->setObjectName(QString::fromUtf8("radAroundLine"));
        sizePolicy10.setHeightForWidth(radAroundLine->sizePolicy().hasHeightForWidth());
        radAroundLine->setSizePolicy(sizePolicy10);
        radAroundLine->setChecked(true);

        gridLayout_14->addWidget(radAroundLine, 0, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_15, 0, 2, 1, 1);

        stackedPlacement->addWidget(pageLine);
        pagePolygon = new QWidget();
        pagePolygon->setObjectName(QString::fromUtf8("pagePolygon"));
        gridLayout_18 = new QGridLayout(pagePolygon);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        radInsidePolygon = new QRadioButton(pagePolygon);
        radInsidePolygon->setObjectName(QString::fromUtf8("radInsidePolygon"));

        gridLayout_18->addWidget(radInsidePolygon, 0, 2, 1, 1);

        radAroundCentroid = new QRadioButton(pagePolygon);
        radAroundCentroid->setObjectName(QString::fromUtf8("radAroundCentroid"));
        sizePolicy10.setHeightForWidth(radAroundCentroid->sizePolicy().hasHeightForWidth());
        radAroundCentroid->setSizePolicy(sizePolicy10);
        radAroundCentroid->setChecked(true);

        gridLayout_18->addWidget(radAroundCentroid, 0, 0, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_26, 0, 4, 1, 1);

        radOverCentroid = new QRadioButton(pagePolygon);
        radOverCentroid->setObjectName(QString::fromUtf8("radOverCentroid"));
        sizePolicy10.setHeightForWidth(radOverCentroid->sizePolicy().hasHeightForWidth());
        radOverCentroid->setSizePolicy(sizePolicy10);
        radOverCentroid->setChecked(false);

        gridLayout_18->addWidget(radOverCentroid, 1, 0, 1, 1);

        radPolygonPerimeter = new QRadioButton(pagePolygon);
        radPolygonPerimeter->setObjectName(QString::fromUtf8("radPolygonPerimeter"));
        sizePolicy8.setHeightForWidth(radPolygonPerimeter->sizePolicy().hasHeightForWidth());
        radPolygonPerimeter->setSizePolicy(sizePolicy8);

        gridLayout_18->addWidget(radPolygonPerimeter, 1, 2, 1, 1);

        stackedPlacement->addWidget(pagePolygon);

        gridLayout_12->addWidget(stackedPlacement, 1, 0, 1, 1);

        mDlsLabel_2 = new QLabel(scrollAreaWidgetContents_7);
        mDlsLabel_2->setObjectName(QString::fromUtf8("mDlsLabel_2"));
        mDlsLabel_2->setFont(font);
        mDlsLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(220, 125, 0);"));
        mDlsLabel_2->setWordWrap(true);

        gridLayout_12->addWidget(mDlsLabel_2, 9, 0, 1, 1);

        mPlacementFrame = new QFrame(scrollAreaWidgetContents_7);
        mPlacementFrame->setObjectName(QString::fromUtf8("mPlacementFrame"));
        mPlacementFrame->setFrameShape(QFrame::Shape::NoFrame);
        gridLayout_4 = new QGridLayout(mPlacementFrame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        mDiagramDistanceLabel = new QLabel(mPlacementFrame);
        mDiagramDistanceLabel->setObjectName(QString::fromUtf8("mDiagramDistanceLabel"));

        gridLayout_4->addWidget(mDiagramDistanceLabel, 2, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        mDiagramDistanceSpinBox = new QgsDoubleSpinBox(mPlacementFrame);
        mDiagramDistanceSpinBox->setObjectName(QString::fromUtf8("mDiagramDistanceSpinBox"));
        sizePolicy.setHeightForWidth(mDiagramDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mDiagramDistanceSpinBox->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(mDiagramDistanceSpinBox);

        mDistanceDDBtn = new QgsPropertyOverrideButton(mPlacementFrame);
        mDistanceDDBtn->setObjectName(QString::fromUtf8("mDistanceDDBtn"));

        horizontalLayout_14->addWidget(mDistanceDDBtn);


        gridLayout_4->addLayout(horizontalLayout_14, 2, 1, 1, 1);


        gridLayout_12->addWidget(mPlacementFrame, 2, 0, 1, 1);

        mLinePlacementFrame = new QFrame(scrollAreaWidgetContents_7);
        mLinePlacementFrame->setObjectName(QString::fromUtf8("mLinePlacementFrame"));
        mLinePlacementFrame->setFrameShape(QFrame::Shape::NoFrame);
        mLinePlacementFrame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(mLinePlacementFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        chkLineAbove = new QCheckBox(mLinePlacementFrame);
        chkLineAbove->setObjectName(QString::fromUtf8("chkLineAbove"));
        sizePolicy10.setHeightForWidth(chkLineAbove->sizePolicy().hasHeightForWidth());
        chkLineAbove->setSizePolicy(sizePolicy10);
        chkLineAbove->setChecked(true);

        gridLayout_20->addWidget(chkLineAbove, 0, 1, 1, 1);

        chkLineBelow = new QCheckBox(mLinePlacementFrame);
        chkLineBelow->setObjectName(QString::fromUtf8("chkLineBelow"));

        gridLayout_20->addWidget(chkLineBelow, 0, 3, 1, 1);

        chkLineOn = new QCheckBox(mLinePlacementFrame);
        chkLineOn->setObjectName(QString::fromUtf8("chkLineOn"));
        sizePolicy10.setHeightForWidth(chkLineOn->sizePolicy().hasHeightForWidth());
        chkLineOn->setSizePolicy(sizePolicy10);

        gridLayout_20->addWidget(chkLineOn, 0, 2, 1, 1);

        chkLineOrientationDependent = new QCheckBox(mLinePlacementFrame);
        chkLineOrientationDependent->setObjectName(QString::fromUtf8("chkLineOrientationDependent"));

        gridLayout_20->addWidget(chkLineOrientationDependent, 1, 1, 1, 3);


        gridLayout_2->addLayout(gridLayout_20, 0, 0, 1, 3);


        gridLayout_12->addWidget(mLinePlacementFrame, 3, 0, 1, 1);

        mCoordinatesGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_7);
        mCoordinatesGrpBox->setObjectName(QString::fromUtf8("mCoordinatesGrpBox"));
        horizontalLayout_22 = new QHBoxLayout(mCoordinatesGrpBox);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        mCoordXLabel = new QLabel(mCoordinatesGrpBox);
        mCoordXLabel->setObjectName(QString::fromUtf8("mCoordXLabel"));
        sizePolicy7.setHeightForWidth(mCoordXLabel->sizePolicy().hasHeightForWidth());
        mCoordXLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_22->addWidget(mCoordXLabel);

        mCoordXDDBtn = new QgsPropertyOverrideButton(mCoordinatesGrpBox);
        mCoordXDDBtn->setObjectName(QString::fromUtf8("mCoordXDDBtn"));

        horizontalLayout_22->addWidget(mCoordXDDBtn);

        mCoordYLabel = new QLabel(mCoordinatesGrpBox);
        mCoordYLabel->setObjectName(QString::fromUtf8("mCoordYLabel"));
        sizePolicy7.setHeightForWidth(mCoordYLabel->sizePolicy().hasHeightForWidth());
        mCoordYLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_22->addWidget(mCoordYLabel);

        mCoordYDDBtn = new QgsPropertyOverrideButton(mCoordinatesGrpBox);
        mCoordYDDBtn->setObjectName(QString::fromUtf8("mCoordYDDBtn"));

        horizontalLayout_22->addWidget(mCoordYDDBtn);

        horizontalSpacer_22 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_22);


        gridLayout_12->addWidget(mCoordinatesGrpBox, 4, 0, 1, 1);

        mPriorityGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_7);
        mPriorityGrpBox->setObjectName(QString::fromUtf8("mPriorityGrpBox"));
        mPriorityGrpBox->setProperty("syncGroup", QVariant(QString::fromUtf8("labelplacementgroup")));
        horizontalLayout_92 = new QHBoxLayout(mPriorityGrpBox);
        horizontalLayout_92->setObjectName(QString::fromUtf8("horizontalLayout_92"));
        horizontalLayout_92->setContentsMargins(8, -1, 8, -1);
        mPriorityLowLabel = new QLabel(mPriorityGrpBox);
        mPriorityLowLabel->setObjectName(QString::fromUtf8("mPriorityLowLabel"));

        horizontalLayout_92->addWidget(mPriorityLowLabel);

        mPrioritySlider = new QSlider(mPriorityGrpBox);
        mPrioritySlider->setObjectName(QString::fromUtf8("mPrioritySlider"));
        mPrioritySlider->setMaximum(10);
        mPrioritySlider->setOrientation(Qt::Orientation::Horizontal);
        mPrioritySlider->setInvertedAppearance(false);
        mPrioritySlider->setInvertedControls(false);
        mPrioritySlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        mPrioritySlider->setTickInterval(1);

        horizontalLayout_92->addWidget(mPrioritySlider);

        mPriorityHighLabel = new QLabel(mPriorityGrpBox);
        mPriorityHighLabel->setObjectName(QString::fromUtf8("mPriorityHighLabel"));

        horizontalLayout_92->addWidget(mPriorityHighLabel);

        mPriorityDDBtn = new QgsPropertyOverrideButton(mPriorityGrpBox);
        mPriorityDDBtn->setObjectName(QString::fromUtf8("mPriorityDDBtn"));

        horizontalLayout_92->addWidget(mPriorityDDBtn);


        gridLayout_12->addWidget(mPriorityGrpBox, 7, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(verticalSpacer_4, 11, 0, 1, 1);

        mObstaclesGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_7);
        mObstaclesGrpBox->setObjectName(QString::fromUtf8("mObstaclesGrpBox"));
        mObstaclesGrpBox->setProperty("syncGroup", QVariant(QString::fromUtf8("labelplacementgroup")));
        horizontalLayout_12 = new QHBoxLayout(mObstaclesGrpBox);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(8, -1, 8, -1);
        label_8 = new QLabel(mObstaclesGrpBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setWordWrap(true);

        horizontalLayout_12->addWidget(label_8);

        mIsObstacleDDBtn = new QgsPropertyOverrideButton(mObstaclesGrpBox);
        mIsObstacleDDBtn->setObjectName(QString::fromUtf8("mIsObstacleDDBtn"));

        horizontalLayout_12->addWidget(mIsObstacleDDBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);


        gridLayout_12->addWidget(mObstaclesGrpBox, 8, 0, 1, 1);

        gridLayout_12->setRowStretch(11, 1);
        scrollArea_6->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_7->addWidget(scrollArea_6);

        mDiagramStackedWidget->addWidget(mDiagramPage_Placement);
        mDiagramPage_Options = new QWidget();
        mDiagramPage_Options->setObjectName(QString::fromUtf8("mDiagramPage_Options"));
        verticalLayout_10 = new QVBoxLayout(mDiagramPage_Options);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(mDiagramPage_Options);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        verticalLayout_10->addWidget(label_42);

        scrollArea_7 = new QgsScrollArea(mDiagramPage_Options);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 106, 165));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mBarOptionsFrame = new QFrame(scrollAreaWidgetContents_8);
        mBarOptionsFrame->setObjectName(QString::fromUtf8("mBarOptionsFrame"));
        mBarOptionsFrame->setFrameShape(QFrame::Shape::NoFrame);
        mBarOptionsFrame->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_4 = new QVBoxLayout(mBarOptionsFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(mBarOptionsFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        mOrientationUpButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup = new QButtonGroup(QgsDiagramPropertiesBase);
        mOrientationButtonGroup->setObjectName(QString::fromUtf8("mOrientationButtonGroup"));
        mOrientationButtonGroup->addButton(mOrientationUpButton);
        mOrientationUpButton->setObjectName(QString::fromUtf8("mOrientationUpButton"));
        mOrientationUpButton->setChecked(true);

        verticalLayout_4->addWidget(mOrientationUpButton);

        mOrientationDownButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup->addButton(mOrientationDownButton);
        mOrientationDownButton->setObjectName(QString::fromUtf8("mOrientationDownButton"));

        verticalLayout_4->addWidget(mOrientationDownButton);

        mOrientationRightButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup->addButton(mOrientationRightButton);
        mOrientationRightButton->setObjectName(QString::fromUtf8("mOrientationRightButton"));

        verticalLayout_4->addWidget(mOrientationRightButton);

        mOrientationLeftButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup->addButton(mOrientationLeftButton);
        mOrientationLeftButton->setObjectName(QString::fromUtf8("mOrientationLeftButton"));

        verticalLayout_4->addWidget(mOrientationLeftButton);


        verticalLayout_3->addWidget(mBarOptionsFrame);

        mTextOptionsFrame = new QFrame(scrollAreaWidgetContents_8);
        mTextOptionsFrame->setObjectName(QString::fromUtf8("mTextOptionsFrame"));
        mTextOptionsFrame->setFrameShape(QFrame::Shape::NoFrame);
        mTextOptionsFrame->setFrameShadow(QFrame::Shadow::Plain);
        gridLayout_21 = new QGridLayout(mTextOptionsFrame);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        mLabelPlacementLabel = new QLabel(mTextOptionsFrame);
        mLabelPlacementLabel->setObjectName(QString::fromUtf8("mLabelPlacementLabel"));
        mLabelPlacementLabel->setVisible(false);
#if QT_CONFIG(tooltip)
        mLabelPlacementLabel->setToolTip(0u);
#endif // QT_CONFIG(tooltip)

        gridLayout_21->addWidget(mLabelPlacementLabel, 0, 0, 1, 1);

        mLabelPlacementComboBox = new QComboBox(mTextOptionsFrame);
        mLabelPlacementComboBox->setObjectName(QString::fromUtf8("mLabelPlacementComboBox"));
        sizePolicy6.setHeightForWidth(mLabelPlacementComboBox->sizePolicy().hasHeightForWidth());
        mLabelPlacementComboBox->setSizePolicy(sizePolicy6);
        mLabelPlacementComboBox->setMinimumSize(QSize(20, 0));
        mLabelPlacementComboBox->setMaximumSize(QSize(200, 16777215));
        mLabelPlacementComboBox->setVisible(false);

        gridLayout_21->addWidget(mLabelPlacementComboBox, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        verticalLayout_3->addWidget(mTextOptionsFrame);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_6);

        verticalLayout_3->setStretch(2, 1);
        scrollArea_7->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_10->addWidget(scrollArea_7);

        mDiagramStackedWidget->addWidget(mDiagramPage_Options);
        mDiagramPage_Legend = new QWidget();
        mDiagramPage_Legend->setObjectName(QString::fromUtf8("mDiagramPage_Legend"));
        verticalLayout_11 = new QVBoxLayout(mDiagramPage_Legend);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_71 = new QLabel(mDiagramPage_Legend);
        label_71->setObjectName(QString::fromUtf8("label_71"));

        verticalLayout_11->addWidget(label_71);

        scrollArea_2 = new QgsScrollArea(mDiagramPage_Legend);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 646, 371));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        mCheckBoxAttributeLegend = new QCheckBox(scrollAreaWidgetContents_2);
        mCheckBoxAttributeLegend->setObjectName(QString::fromUtf8("mCheckBoxAttributeLegend"));
        mCheckBoxAttributeLegend->setChecked(true);

        verticalLayout_12->addWidget(mCheckBoxAttributeLegend);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mButtonSizeLegendSettings = new QPushButton(scrollAreaWidgetContents_2);
        mButtonSizeLegendSettings->setObjectName(QString::fromUtf8("mButtonSizeLegendSettings"));

        horizontalLayout_5->addWidget(mButtonSizeLegendSettings);

        horizontalSpacer_111 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_111);


        verticalLayout_12->addLayout(horizontalLayout_5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_12->addItem(verticalSpacer_7);

        verticalLayout_12->setStretch(2, 1);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_11->addWidget(scrollArea_2);

        mDiagramStackedWidget->addWidget(mDiagramPage_Legend);

        verticalLayout_5->addWidget(mDiagramStackedWidget);

        mDiagramOptionsSplitter->addWidget(mDiagramOptionGroupsFrame);

        gridLayout_6->addWidget(mDiagramOptionsSplitter, 0, 1, 1, 1);


        verticalLayout_8->addWidget(mDiagramFrame);

        verticalLayout_8->setStretch(3, 1);
        QWidget::setTabOrder(mDiagramTypeComboBox, mEnableDiagramCheckBox);
        QWidget::setTabOrder(mEnableDiagramCheckBox, mOptionsTab);
        QWidget::setTabOrder(mOptionsTab, mDiagramOptionsListWidget);
        QWidget::setTabOrder(mDiagramOptionsListWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, mAttributesTreeWidget);
        QWidget::setTabOrder(mAttributesTreeWidget, mAddAttributeExpression);
        QWidget::setTabOrder(mAddAttributeExpression, mAddCategoryPushButton);
        QWidget::setTabOrder(mAddCategoryPushButton, mRemoveCategoryPushButton);
        QWidget::setTabOrder(mRemoveCategoryPushButton, mDiagramAttributesTreeWidget);
        QWidget::setTabOrder(mDiagramAttributesTreeWidget, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBarWidthSpinBox);
        QWidget::setTabOrder(mBarWidthSpinBox, mBarSpacingSpinBox);
        QWidget::setTabOrder(mBarSpacingSpinBox, mBarSpacingUnitComboBox);
        QWidget::setTabOrder(mBarSpacingUnitComboBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mBackgroundColorDDBtn);
        QWidget::setTabOrder(mBackgroundColorDDBtn, mDiagramPenColorButton);
        QWidget::setTabOrder(mDiagramPenColorButton, mLineColorDDBtn);
        QWidget::setTabOrder(mLineColorDDBtn, mPenWidthSpinBox);
        QWidget::setTabOrder(mPenWidthSpinBox, mDiagramLineUnitComboBox);
        QWidget::setTabOrder(mDiagramLineUnitComboBox, mLineWidthDDBtn);
        QWidget::setTabOrder(mLineWidthDDBtn, mAngleOffsetComboBox);
        QWidget::setTabOrder(mAngleOffsetComboBox, mStartAngleDDBtn);
        QWidget::setTabOrder(mStartAngleDDBtn, mAngleDirectionComboBox);
        QWidget::setTabOrder(mAngleDirectionComboBox, mDiagramFontButton);
        QWidget::setTabOrder(mDiagramFontButton, mShowAxisGroupBox);
        QWidget::setTabOrder(mShowAxisGroupBox, mAxisLineStyleButton);
        QWidget::setTabOrder(mAxisLineStyleButton, mZIndexSpinBox);
        QWidget::setTabOrder(mZIndexSpinBox, mZOrderDDBtn);
        QWidget::setTabOrder(mZOrderDDBtn, mShowAllCheckBox);
        QWidget::setTabOrder(mShowAllCheckBox, mShowDiagramDDBtn);
        QWidget::setTabOrder(mShowDiagramDDBtn, mAlwaysShowDDBtn);
        QWidget::setTabOrder(mAlwaysShowDDBtn, mScaleVisibilityGroupBox);
        QWidget::setTabOrder(mScaleVisibilityGroupBox, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, mDiagramUnitComboBox);
        QWidget::setTabOrder(mDiagramUnitComboBox, mFixedSizeRadio);
        QWidget::setTabOrder(mFixedSizeRadio, mDiagramSizeSpinBox);
        QWidget::setTabOrder(mDiagramSizeSpinBox, mAttributeBasedScalingRadio);
        QWidget::setTabOrder(mAttributeBasedScalingRadio, mMaxValueSpinBox);
        QWidget::setTabOrder(mMaxValueSpinBox, mFindMaximumValueButton);
        QWidget::setTabOrder(mFindMaximumValueButton, mSizeSpinBox);
        QWidget::setTabOrder(mSizeSpinBox, mScaleDependencyComboBox);
        QWidget::setTabOrder(mScaleDependencyComboBox, mIncreaseSmallDiagramsGroupBox);
        QWidget::setTabOrder(mIncreaseSmallDiagramsGroupBox, mIncreaseMinimumSizeSpinBox);
        QWidget::setTabOrder(mIncreaseMinimumSizeSpinBox, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, radAroundPoint);
        QWidget::setTabOrder(radAroundPoint, radOverPoint);
        QWidget::setTabOrder(radOverPoint, radAroundLine);
        QWidget::setTabOrder(radAroundLine, radOverLine);
        QWidget::setTabOrder(radOverLine, radAroundCentroid);
        QWidget::setTabOrder(radAroundCentroid, radInsidePolygon);
        QWidget::setTabOrder(radInsidePolygon, radOverCentroid);
        QWidget::setTabOrder(radOverCentroid, radPolygonPerimeter);
        QWidget::setTabOrder(radPolygonPerimeter, mDiagramDistanceSpinBox);
        QWidget::setTabOrder(mDiagramDistanceSpinBox, mDistanceDDBtn);
        QWidget::setTabOrder(mDistanceDDBtn, chkLineAbove);
        QWidget::setTabOrder(chkLineAbove, chkLineOn);
        QWidget::setTabOrder(chkLineOn, chkLineBelow);
        QWidget::setTabOrder(chkLineBelow, chkLineOrientationDependent);
        QWidget::setTabOrder(chkLineOrientationDependent, mCoordXDDBtn);
        QWidget::setTabOrder(mCoordXDDBtn, mCoordYDDBtn);
        QWidget::setTabOrder(mCoordYDDBtn, mPrioritySlider);
        QWidget::setTabOrder(mPrioritySlider, mPriorityDDBtn);
        QWidget::setTabOrder(mPriorityDDBtn, mIsObstacleDDBtn);
        QWidget::setTabOrder(mIsObstacleDDBtn, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, mOrientationUpButton);
        QWidget::setTabOrder(mOrientationUpButton, mOrientationDownButton);
        QWidget::setTabOrder(mOrientationDownButton, mOrientationRightButton);
        QWidget::setTabOrder(mOrientationRightButton, mOrientationLeftButton);
        QWidget::setTabOrder(mOrientationLeftButton, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mCheckBoxAttributeLegend);
        QWidget::setTabOrder(mCheckBoxAttributeLegend, mButtonSizeLegendSettings);

        retranslateUi(QgsDiagramPropertiesBase);
        QObject::connect(mDiagramOptionsListWidget, SIGNAL(currentRowChanged(int)), mDiagramStackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(mFixedSizeRadio, SIGNAL(toggled(bool)), mDiagramSizeSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(mAttributeBasedScalingRadio, SIGNAL(toggled(bool)), mLinearScaleFrame, SLOT(setEnabled(bool)));
        QObject::connect(mOptionsTab, SIGNAL(currentChanged(int)), mDiagramStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsTab->setCurrentIndex(0);
        mDiagramStackedWidget->setCurrentIndex(0);
        stackedPlacement->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsDiagramPropertiesBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDiagramPropertiesBase)
    {
        mEnableDiagramCheckBox->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Enable diagram", nullptr));
        mOptionsTab->setTabText(mOptionsTab->indexOf(tabAttributes), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(tabRendering), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(tabSize), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(tabPlacement), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(tabOptions), QString());
        mOptionsTab->setTabText(mOptionsTab->indexOf(tabLegend), QString());

        const bool __sortingEnabled = mDiagramOptionsListWidget->isSortingEnabled();
        mDiagramOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mDiagramOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Attributes", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = mDiagramOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Rendering", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem1->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Rendering", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem2 = mDiagramOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Size", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = mDiagramOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Placement", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem3->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Placement", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem4 = mDiagramOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Options", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = mDiagramOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Legend", nullptr));
        mDiagramOptionsListWidget->setSortingEnabled(__sortingEnabled);

        label_6->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Attributes", nullptr));
        label->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Available attributes", nullptr));
#if QT_CONFIG(tooltip)
        mAddAttributeExpression->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Add expression", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mAddCategoryPushButton->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Add selected attributes", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddCategoryPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveCategoryPushButton->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Remove selected attributes", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveCategoryPushButton->setText(QString());
        Assigened->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Assigned attributes", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mDiagramAttributesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsDiagramPropertiesBase", "Legend", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsDiagramPropertiesBase", "Color", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsDiagramPropertiesBase", "Attribute", nullptr));
#if QT_CONFIG(tooltip)
        mDiagramAttributesTreeWidget->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Drag and drop to reorder", nullptr));
#endif // QT_CONFIG(tooltip)
        label_39->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Rendering", nullptr));
        mFormatGrpBox->setTitle(QCoreApplication::translate("QgsDiagramPropertiesBase", "Format", nullptr));
        mBarSpacingLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Bar spacing", nullptr));
        mBackgroundColorLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Background color", nullptr));
        mBackgroundColorButton->setText(QString());
        mStartAngleDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        mPenColorLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Line color", nullptr));
        mAngleOffsetLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Start angle", nullptr));
        mDiagramPenColorButton->setText(QString());
        mDiagramFontButton->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Font", nullptr));
        mLineColorDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        mLineWidthDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        mAngleDirectionLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Direction", nullptr));
        mBarWidthLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Bar width", nullptr));
        mPenWidthLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Line width", nullptr));
        mOpacityLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Opacity", nullptr));
        mBackgroundColorDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        mShowAxisGroupBox->setTitle(QCoreApplication::translate("QgsDiagramPropertiesBase", "Show Axis", nullptr));
        mAxisLineStyleButton->setText(QString());
        label_2->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Axis line symbol", nullptr));
        mVisiblityGrpBox->setTitle(QCoreApplication::translate("QgsDiagramPropertiesBase", "Visibility", nullptr));
#if QT_CONFIG(tooltip)
        mZIndexSpinBox->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Controls how diagrams are drawn on top of each other. Diagrams with a higher z-index are drawn above diagrams and labels with a lower z-index.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_16->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Diagram z-index", nullptr));
        mScaleVisibilityGroupBox->setTitle(QCoreApplication::translate("QgsDiagramPropertiesBase", "Scale dependent visibility", nullptr));
        mZOrderDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mShowAllCheckBox->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Always show all diagrams, even when they overlap with each other or other map labels", nullptr));
#endif // QT_CONFIG(tooltip)
        mShowAllCheckBox->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Show all diagrams", nullptr));
#if QT_CONFIG(tooltip)
        mShowDiagramLabel->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Controls whether specific diagrams should be shown", nullptr));
#endif // QT_CONFIG(tooltip)
        mShowDiagramLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Show diagram", nullptr));
        mShowDiagramDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mAlwaysShowLabel->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Controls whether specific diagrams should always be rendered, even when they overlap other diagrams or map labels", nullptr));
#endif // QT_CONFIG(tooltip)
        mAlwaysShowLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Always show", nullptr));
        mAlwaysShowDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        mDlsLabel_1->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "z-index and show-all-diagrams settings can be configured in the first enabled sub diagram of the stacked diagram.", nullptr));
        label_40->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Size", nullptr));
        mDiagramUnitsLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Size units", nullptr));
        mFixedSizeRadio->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Fixed size", nullptr));
        mLinearlyScalingLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Scale linearly between 0 and the following attribute value / diagram size", nullptr));
        mSizeLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Size", nullptr));
        mScaleDependencyLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Scale", nullptr));
        mIncreaseSmallDiagramsGroupBox->setTitle(QCoreApplication::translate("QgsDiagramPropertiesBase", "Increase size of small diagrams", nullptr));
        mIncreaseMinimumSizeLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Minimum size", nullptr));
        mFindMaximumValueButton->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Find", nullptr));
        mSizeAttributeLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Attribute", nullptr));
        label_4->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Maximum value", nullptr));
        mAttributeBasedScalingRadio->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Scaled size", nullptr));
        label_41->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Placement", nullptr));
#if QT_CONFIG(tooltip)
        radAroundPoint->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Labels are placed in an equal radius circle around point features.", nullptr));
#endif // QT_CONFIG(tooltip)
        radAroundPoint->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Around point", nullptr));
#if QT_CONFIG(tooltip)
        radOverPoint->setToolTip(QCoreApplication::translate("QgsDiagramPropertiesBase", "Labels are placed at a fixed offset from the point.", nullptr));
#endif // QT_CONFIG(tooltip)
        radOverPoint->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Over point", nullptr));
        radOverLine->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Over Line", nullptr));
        radAroundLine->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Around Line", nullptr));
        radInsidePolygon->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Inside Polygon", nullptr));
        radAroundCentroid->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Around Centroid", nullptr));
        radOverCentroid->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Over Centroid", nullptr));
        radPolygonPerimeter->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Using Perimeter", nullptr));
        mDlsLabel_2->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Placement settings can be configured in the first enabled sub diagram of the stacked diagram.", nullptr));
        mDiagramDistanceLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Distance", nullptr));
        mDistanceDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        chkLineAbove->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Above line", nullptr));
        chkLineBelow->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Below line", nullptr));
        chkLineOn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "On line", nullptr));
        chkLineOrientationDependent->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Line orientation dependent position", nullptr));
        mCoordinatesGrpBox->setTitle(QCoreApplication::translate("QgsDiagramPropertiesBase", "Coordinates", nullptr));
        mCoordXLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "X", nullptr));
        mCoordXDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        mCoordYLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Y", nullptr));
        mCoordYDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        mPriorityGrpBox->setTitle(QCoreApplication::translate("QgsDiagramPropertiesBase", "Priority", nullptr));
        mPriorityLowLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Low", nullptr));
        mPriorityHighLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "High", nullptr));
        mPriorityDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        mObstaclesGrpBox->setTitle(QCoreApplication::translate("QgsDiagramPropertiesBase", "Obstacles", nullptr));
        label_8->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Discourage diagrams and labels from covering features", nullptr));
        mIsObstacleDDBtn->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "\342\200\246", nullptr));
        label_42->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Options", nullptr));
        label_5->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Bar Orientation", nullptr));
        mOrientationUpButton->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Up", nullptr));
        mOrientationDownButton->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Down", nullptr));
        mOrientationRightButton->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Right", nullptr));
        mOrientationLeftButton->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Left", nullptr));
        mLabelPlacementLabel->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Label placement", nullptr));
        label_71->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Legend", nullptr));
        mCheckBoxAttributeLegend->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Show legend entries for diagram attributes", nullptr));
        mButtonSizeLegendSettings->setText(QCoreApplication::translate("QgsDiagramPropertiesBase", "Legend Entries for Diagram Size\342\200\246", nullptr));
        (void)QgsDiagramPropertiesBase;
    } // retranslateUi

};

namespace Ui {
    class QgsDiagramPropertiesBase: public Ui_QgsDiagramPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDIAGRAMPROPERTIESBASE_H
