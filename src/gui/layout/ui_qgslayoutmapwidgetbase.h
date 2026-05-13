/********************************************************************************
** Form generated from reading UI file 'qgslayoutmapwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMAPWIDGETBASE_H
#define UI_QGSLAYOUTMAPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsblendmodecombobox.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutitemcombobox.h"
#include "qgsmaplayercombobox.h"
#include "qgsprojectionselectionwidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMapWidgetBase
{
public:
    QAction *mActionUpdatePreview;
    QAction *mActionSetToCanvasExtent;
    QAction *mActionViewExtentInCanvas;
    QAction *mActionMoveContent;
    QAction *mActionViewScaleInCanvas;
    QAction *mActionSetToCanvasScale;
    QAction *mActionLabelSettings;
    QAction *mActionClipSettings;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabel;
    QToolBar *mDockToolbar;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *mScaleLabel;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *mScaleLineEdit;
    QgsPropertyOverrideButton *mScaleDDBtn;
    QHBoxLayout *horizontalLayout_7;
    QgsDoubleSpinBox *mMapRotationSpinBox;
    QgsPropertyOverrideButton *mMapRotationDDBtn;
    QHBoxLayout *horizontalLayout_2;
    QgsProjectionSelectionWidget *mCrsSelector;
    QgsPropertyOverrideButton *mCRSDDBtn;
    QLabel *mMapRotationLabel;
    QLabel *mCrsLabel;
    QCheckBox *mDrawCanvasItemsCheckBox;
    QgsCollapsibleGroupBoxBasic *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *mFollowVisibilityPresetCheckBox;
    QComboBox *mFollowVisibilityPresetCombo;
    QgsPropertyOverrideButton *mStylePresetsDDBtn;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *mKeepLayerListCheckBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *mLayerListFromPresetButton;
    QgsPropertyOverrideButton *mLayersDDBtn;
    QCheckBox *mKeepLayerStylesCheckBox;
    QgsCollapsibleGroupBoxBasic *mExtentsCheckBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *mYMinLineEdit;
    QgsPropertyOverrideButton *mYMinDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *mXMaxLineEdit;
    QgsPropertyOverrideButton *mXMaxDDBtn;
    QLabel *mYMinLabel;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *mYMaxLineEdit;
    QgsPropertyOverrideButton *mYMaxDDBtn;
    QLabel *mXMaxLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mXMinLineEdit;
    QgsPropertyOverrideButton *mXMinDDBtn;
    QLabel *mXMinLabel;
    QLabel *mYMaxLabel;
    QgsCollapsibleGroupBoxBasic *mElevationRangeCheckBox;
    QGridLayout *gridLayout_6;
    QLabel *mStartDateTimeLabel_2;
    QgsPropertyOverrideButton *mZLowerDDBtn;
    QLabel *mEndDateTimeLabel_2;
    QgsPropertyOverrideButton *mZUpperDDBtn;
    QgsDoubleSpinBox *mZLowerSpin;
    QgsDoubleSpinBox *mZUpperSpin;
    QgsCollapsibleGroupBoxBasic *mTemporalCheckBox;
    QGridLayout *gridLayout_5;
    QLabel *mStartDateTimeLabel;
    QDateTimeEdit *mStartDateTime;
    QgsPropertyOverrideButton *mStartDateTimeDDBtn;
    QLabel *mEndDateTimeLabel;
    QDateTimeEdit *mEndDateTime;
    QgsPropertyOverrideButton *mEndDateTimeDDBtn;
    QgsCollapsibleGroupBoxBasic *mAtlasCheckBox;
    QGridLayout *gridLayout_2;
    QRadioButton *mAtlasMarginRadio;
    QHBoxLayout *horizontalLayout_11;
    QgsSpinBox *mAtlasMarginSpinBox;
    QgsPropertyOverrideButton *mAtlasMarginDDBtn;
    QRadioButton *mAtlasPredefinedScaleRadio;
    QRadioButton *mAtlasFixedScaleRadio;
    QgsCollapsibleGroupBoxBasic *mGridGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *mAddGridPushButton;
    QPushButton *mRemoveGridPushButton;
    QPushButton *mCopyGridPushButton;
    QPushButton *mGridUpButton;
    QPushButton *mGridDownButton;
    QListWidget *mGridListWidget;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *mGridPropertiesButton;
    QgsCollapsibleGroupBoxBasic *mOverviewsGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *mAddOverviewPushButton;
    QPushButton *mRemoveOverviewPushButton;
    QPushButton *mOverviewUpButton;
    QPushButton *mOverviewDownButton;
    QListWidget *mOverviewListWidget;
    QgsCollapsibleGroupBoxBasic *mOverviewCheckBox;
    QGridLayout *gridLayout_8;
    QComboBox *mOverviewPositionComboBox;
    QLabel *mOverviewPositionLabel;
    QgsSymbolButton *mOverviewFrameStyleButton;
    QgsBlendModeComboBox *mOverviewBlendModeComboBox;
    QCheckBox *mOverviewInvertCheckbox;
    QLabel *mOverviewBlendModeLabel;
    QLabel *mOverviewFrameStyleLabel;
    QLabel *mOverviewFrameMapLabel;
    QCheckBox *mOverviewCenterCheckbox;
    QgsLayoutItemComboBox *mOverviewFrameMapComboBox;
    QgsMapLayerComboBox *mOverviewStackingLayerComboBox;
    QLabel *label;

    void setupUi(QWidget *QgsLayoutMapWidgetBase)
    {
        if (QgsLayoutMapWidgetBase->objectName().isEmpty())
            QgsLayoutMapWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutMapWidgetBase"));
        QgsLayoutMapWidgetBase->resize(564, 749);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutMapWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutMapWidgetBase->setSizePolicy(sizePolicy);
        mActionUpdatePreview = new QAction(QgsLayoutMapWidgetBase);
        mActionUpdatePreview->setObjectName(QString::fromUtf8("mActionUpdatePreview"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionUpdatePreview->setIcon(icon);
        mActionSetToCanvasExtent = new QAction(QgsLayoutMapWidgetBase);
        mActionSetToCanvasExtent->setObjectName(QString::fromUtf8("mActionSetToCanvasExtent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionSetToCanvasExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSetToCanvasExtent->setIcon(icon1);
        mActionViewExtentInCanvas = new QAction(QgsLayoutMapWidgetBase);
        mActionViewExtentInCanvas->setObjectName(QString::fromUtf8("mActionViewExtentInCanvas"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionViewExtentInCanvas.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionViewExtentInCanvas->setIcon(icon2);
        mActionMoveContent = new QAction(QgsLayoutMapWidgetBase);
        mActionMoveContent->setObjectName(QString::fromUtf8("mActionMoveContent"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionMoveItemContent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMoveContent->setIcon(icon3);
        mActionViewScaleInCanvas = new QAction(QgsLayoutMapWidgetBase);
        mActionViewScaleInCanvas->setObjectName(QString::fromUtf8("mActionViewScaleInCanvas"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionViewScaleInCanvas.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionViewScaleInCanvas->setIcon(icon4);
        mActionSetToCanvasScale = new QAction(QgsLayoutMapWidgetBase);
        mActionSetToCanvasScale->setObjectName(QString::fromUtf8("mActionSetToCanvasScale"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionSetToCanvasScale.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSetToCanvasScale->setIcon(icon5);
        mActionLabelSettings = new QAction(QgsLayoutMapWidgetBase);
        mActionLabelSettings->setObjectName(QString::fromUtf8("mActionLabelSettings"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/labelingSingle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLabelSettings->setIcon(icon6);
        mActionClipSettings = new QAction(QgsLayoutMapWidgetBase);
        mActionClipSettings->setObjectName(QString::fromUtf8("mActionClipSettings"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/algorithms/mAlgorithmClip.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionClipSettings->setIcon(icon7);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutMapWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mLabel = new QLabel(QgsLayoutMapWidgetBase);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLabel->sizePolicy().hasHeightForWidth());
        mLabel->setSizePolicy(sizePolicy1);
        mLabel->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout_2->addWidget(mLabel);

        mDockToolbar = new QToolBar(QgsLayoutMapWidgetBase);
        mDockToolbar->setObjectName(QString::fromUtf8("mDockToolbar"));
        mDockToolbar->setIconSize(QSize(16, 16));
        mDockToolbar->setFloatable(false);

        verticalLayout_2->addWidget(mDockToolbar);

        scrollArea = new QgsScrollArea(QgsLayoutMapWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -798, 539, 1640));
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mScaleLabel = new QLabel(groupBox);
        mScaleLabel->setObjectName(QString::fromUtf8("mScaleLabel"));

        gridLayout_4->addWidget(mScaleLabel, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mScaleLineEdit = new QLineEdit(groupBox);
        mScaleLineEdit->setObjectName(QString::fromUtf8("mScaleLineEdit"));

        horizontalLayout_6->addWidget(mScaleLineEdit);

        mScaleDDBtn = new QgsPropertyOverrideButton(groupBox);
        mScaleDDBtn->setObjectName(QString::fromUtf8("mScaleDDBtn"));

        horizontalLayout_6->addWidget(mScaleDDBtn);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mMapRotationSpinBox = new QgsDoubleSpinBox(groupBox);
        mMapRotationSpinBox->setObjectName(QString::fromUtf8("mMapRotationSpinBox"));
        mMapRotationSpinBox->setWrapping(true);
        mMapRotationSpinBox->setMinimum(-360.000000000000000);
        mMapRotationSpinBox->setMaximum(360.000000000000000);

        horizontalLayout_7->addWidget(mMapRotationSpinBox);

        mMapRotationDDBtn = new QgsPropertyOverrideButton(groupBox);
        mMapRotationDDBtn->setObjectName(QString::fromUtf8("mMapRotationDDBtn"));

        horizontalLayout_7->addWidget(mMapRotationDDBtn);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mCrsSelector = new QgsProjectionSelectionWidget(groupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mCrsSelector);

        mCRSDDBtn = new QgsPropertyOverrideButton(groupBox);
        mCRSDDBtn->setObjectName(QString::fromUtf8("mCRSDDBtn"));

        horizontalLayout_2->addWidget(mCRSDDBtn);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 3, 1);

        mMapRotationLabel = new QLabel(groupBox);
        mMapRotationLabel->setObjectName(QString::fromUtf8("mMapRotationLabel"));

        gridLayout_4->addWidget(mMapRotationLabel, 1, 0, 1, 1);

        mCrsLabel = new QLabel(groupBox);
        mCrsLabel->setObjectName(QString::fromUtf8("mCrsLabel"));

        gridLayout_4->addWidget(mCrsLabel, 2, 0, 1, 1);

        mDrawCanvasItemsCheckBox = new QCheckBox(groupBox);
        mDrawCanvasItemsCheckBox->setObjectName(QString::fromUtf8("mDrawCanvasItemsCheckBox"));

        gridLayout_4->addWidget(mDrawCanvasItemsCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        groupBox_2 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        mFollowVisibilityPresetCheckBox = new QCheckBox(groupBox_2);
        mFollowVisibilityPresetCheckBox->setObjectName(QString::fromUtf8("mFollowVisibilityPresetCheckBox"));

        horizontalLayout_12->addWidget(mFollowVisibilityPresetCheckBox);

        mFollowVisibilityPresetCombo = new QComboBox(groupBox_2);
        mFollowVisibilityPresetCombo->setObjectName(QString::fromUtf8("mFollowVisibilityPresetCombo"));

        horizontalLayout_12->addWidget(mFollowVisibilityPresetCombo);

        mStylePresetsDDBtn = new QgsPropertyOverrideButton(groupBox_2);
        mStylePresetsDDBtn->setObjectName(QString::fromUtf8("mStylePresetsDDBtn"));

        horizontalLayout_12->addWidget(mStylePresetsDDBtn);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mKeepLayerListCheckBox = new QCheckBox(groupBox_2);
        mKeepLayerListCheckBox->setObjectName(QString::fromUtf8("mKeepLayerListCheckBox"));
        sizePolicy1.setHeightForWidth(mKeepLayerListCheckBox->sizePolicy().hasHeightForWidth());
        mKeepLayerListCheckBox->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(mKeepLayerListCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        mLayerListFromPresetButton = new QToolButton(groupBox_2);
        mLayerListFromPresetButton->setObjectName(QString::fromUtf8("mLayerListFromPresetButton"));
        mLayerListFromPresetButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_10->addWidget(mLayerListFromPresetButton);

        mLayersDDBtn = new QgsPropertyOverrideButton(groupBox_2);
        mLayersDDBtn->setObjectName(QString::fromUtf8("mLayersDDBtn"));

        horizontalLayout_10->addWidget(mLayersDDBtn);


        verticalLayout_4->addLayout(horizontalLayout_10);

        mKeepLayerStylesCheckBox = new QCheckBox(groupBox_2);
        mKeepLayerStylesCheckBox->setObjectName(QString::fromUtf8("mKeepLayerStylesCheckBox"));

        verticalLayout_4->addWidget(mKeepLayerStylesCheckBox);


        mainLayout->addWidget(groupBox_2);

        mExtentsCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mExtentsCheckBox->setObjectName(QString::fromUtf8("mExtentsCheckBox"));
        mExtentsCheckBox->setFocusPolicy(Qt::StrongFocus);
        mExtentsCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mExtentsCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mExtentsCheckBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mYMinLineEdit = new QLineEdit(mExtentsCheckBox);
        mYMinLineEdit->setObjectName(QString::fromUtf8("mYMinLineEdit"));

        horizontalLayout_3->addWidget(mYMinLineEdit);

        mYMinDDBtn = new QgsPropertyOverrideButton(mExtentsCheckBox);
        mYMinDDBtn->setObjectName(QString::fromUtf8("mYMinDDBtn"));

        horizontalLayout_3->addWidget(mYMinDDBtn);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mXMaxLineEdit = new QLineEdit(mExtentsCheckBox);
        mXMaxLineEdit->setObjectName(QString::fromUtf8("mXMaxLineEdit"));

        horizontalLayout_4->addWidget(mXMaxLineEdit);

        mXMaxDDBtn = new QgsPropertyOverrideButton(mExtentsCheckBox);
        mXMaxDDBtn->setObjectName(QString::fromUtf8("mXMaxDDBtn"));

        horizontalLayout_4->addWidget(mXMaxDDBtn);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        mYMinLabel = new QLabel(mExtentsCheckBox);
        mYMinLabel->setObjectName(QString::fromUtf8("mYMinLabel"));
        mYMinLabel->setWordWrap(false);

        gridLayout->addWidget(mYMinLabel, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mYMaxLineEdit = new QLineEdit(mExtentsCheckBox);
        mYMaxLineEdit->setObjectName(QString::fromUtf8("mYMaxLineEdit"));

        horizontalLayout_5->addWidget(mYMaxLineEdit);

        mYMaxDDBtn = new QgsPropertyOverrideButton(mExtentsCheckBox);
        mYMaxDDBtn->setObjectName(QString::fromUtf8("mYMaxDDBtn"));

        horizontalLayout_5->addWidget(mYMaxDDBtn);


        gridLayout->addLayout(horizontalLayout_5, 3, 1, 1, 1);

        mXMaxLabel = new QLabel(mExtentsCheckBox);
        mXMaxLabel->setObjectName(QString::fromUtf8("mXMaxLabel"));
        mXMaxLabel->setWordWrap(false);

        gridLayout->addWidget(mXMaxLabel, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mXMinLineEdit = new QLineEdit(mExtentsCheckBox);
        mXMinLineEdit->setObjectName(QString::fromUtf8("mXMinLineEdit"));

        horizontalLayout->addWidget(mXMinLineEdit);

        mXMinDDBtn = new QgsPropertyOverrideButton(mExtentsCheckBox);
        mXMinDDBtn->setObjectName(QString::fromUtf8("mXMinDDBtn"));

        horizontalLayout->addWidget(mXMinDDBtn);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        mXMinLabel = new QLabel(mExtentsCheckBox);
        mXMinLabel->setObjectName(QString::fromUtf8("mXMinLabel"));
        mXMinLabel->setEnabled(true);
        mXMinLabel->setWordWrap(false);

        gridLayout->addWidget(mXMinLabel, 0, 0, 1, 1);

        mYMaxLabel = new QLabel(mExtentsCheckBox);
        mYMaxLabel->setObjectName(QString::fromUtf8("mYMaxLabel"));
        mYMaxLabel->setWordWrap(false);

        gridLayout->addWidget(mYMaxLabel, 3, 0, 1, 1);


        mainLayout->addWidget(mExtentsCheckBox);

        mElevationRangeCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mElevationRangeCheckBox->setObjectName(QString::fromUtf8("mElevationRangeCheckBox"));
        mElevationRangeCheckBox->setCheckable(true);
        mElevationRangeCheckBox->setChecked(false);
        mElevationRangeCheckBox->setProperty("collapsed", QVariant(true));
        mElevationRangeCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout_6 = new QGridLayout(mElevationRangeCheckBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mStartDateTimeLabel_2 = new QLabel(mElevationRangeCheckBox);
        mStartDateTimeLabel_2->setObjectName(QString::fromUtf8("mStartDateTimeLabel_2"));
        mStartDateTimeLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mStartDateTimeLabel_2, 0, 0, 1, 1);

        mZLowerDDBtn = new QgsPropertyOverrideButton(mElevationRangeCheckBox);
        mZLowerDDBtn->setObjectName(QString::fromUtf8("mZLowerDDBtn"));

        gridLayout_6->addWidget(mZLowerDDBtn, 0, 2, 1, 1);

        mEndDateTimeLabel_2 = new QLabel(mElevationRangeCheckBox);
        mEndDateTimeLabel_2->setObjectName(QString::fromUtf8("mEndDateTimeLabel_2"));
        mEndDateTimeLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mEndDateTimeLabel_2, 1, 0, 1, 1);

        mZUpperDDBtn = new QgsPropertyOverrideButton(mElevationRangeCheckBox);
        mZUpperDDBtn->setObjectName(QString::fromUtf8("mZUpperDDBtn"));

        gridLayout_6->addWidget(mZUpperDDBtn, 1, 2, 1, 1);

        mZLowerSpin = new QgsDoubleSpinBox(mElevationRangeCheckBox);
        mZLowerSpin->setObjectName(QString::fromUtf8("mZLowerSpin"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mZLowerSpin->sizePolicy().hasHeightForWidth());
        mZLowerSpin->setSizePolicy(sizePolicy2);
        mZLowerSpin->setDecimals(4);
        mZLowerSpin->setMinimum(-9999999999.000000000000000);
        mZLowerSpin->setMaximum(9999999999.000000000000000);

        gridLayout_6->addWidget(mZLowerSpin, 0, 1, 1, 1);

        mZUpperSpin = new QgsDoubleSpinBox(mElevationRangeCheckBox);
        mZUpperSpin->setObjectName(QString::fromUtf8("mZUpperSpin"));
        sizePolicy2.setHeightForWidth(mZUpperSpin->sizePolicy().hasHeightForWidth());
        mZUpperSpin->setSizePolicy(sizePolicy2);
        mZUpperSpin->setDecimals(4);
        mZUpperSpin->setMinimum(-9999999999.000000000000000);
        mZUpperSpin->setMaximum(9999999999.000000000000000);

        gridLayout_6->addWidget(mZUpperSpin, 1, 1, 1, 1);


        mainLayout->addWidget(mElevationRangeCheckBox);

        mTemporalCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mTemporalCheckBox->setObjectName(QString::fromUtf8("mTemporalCheckBox"));
        mTemporalCheckBox->setCheckable(true);
        mTemporalCheckBox->setChecked(false);
        mTemporalCheckBox->setProperty("collapsed", QVariant(true));
        mTemporalCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout_5 = new QGridLayout(mTemporalCheckBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mStartDateTimeLabel = new QLabel(mTemporalCheckBox);
        mStartDateTimeLabel->setObjectName(QString::fromUtf8("mStartDateTimeLabel"));
        mStartDateTimeLabel->setWordWrap(false);

        gridLayout_5->addWidget(mStartDateTimeLabel, 0, 0, 1, 1);

        mStartDateTime = new QDateTimeEdit(mTemporalCheckBox);
        mStartDateTime->setObjectName(QString::fromUtf8("mStartDateTime"));
        sizePolicy2.setHeightForWidth(mStartDateTime->sizePolicy().hasHeightForWidth());
        mStartDateTime->setSizePolicy(sizePolicy2);
        mStartDateTime->setCalendarPopup(true);
        mStartDateTime->setTimeSpec(Qt::UTC);

        gridLayout_5->addWidget(mStartDateTime, 0, 1, 1, 1);

        mStartDateTimeDDBtn = new QgsPropertyOverrideButton(mTemporalCheckBox);
        mStartDateTimeDDBtn->setObjectName(QString::fromUtf8("mStartDateTimeDDBtn"));

        gridLayout_5->addWidget(mStartDateTimeDDBtn, 0, 2, 1, 1);

        mEndDateTimeLabel = new QLabel(mTemporalCheckBox);
        mEndDateTimeLabel->setObjectName(QString::fromUtf8("mEndDateTimeLabel"));
        mEndDateTimeLabel->setWordWrap(false);

        gridLayout_5->addWidget(mEndDateTimeLabel, 1, 0, 1, 1);

        mEndDateTime = new QDateTimeEdit(mTemporalCheckBox);
        mEndDateTime->setObjectName(QString::fromUtf8("mEndDateTime"));
        sizePolicy2.setHeightForWidth(mEndDateTime->sizePolicy().hasHeightForWidth());
        mEndDateTime->setSizePolicy(sizePolicy2);
        mEndDateTime->setCalendarPopup(true);
        mEndDateTime->setTimeSpec(Qt::UTC);

        gridLayout_5->addWidget(mEndDateTime, 1, 1, 1, 1);

        mEndDateTimeDDBtn = new QgsPropertyOverrideButton(mTemporalCheckBox);
        mEndDateTimeDDBtn->setObjectName(QString::fromUtf8("mEndDateTimeDDBtn"));

        gridLayout_5->addWidget(mEndDateTimeDDBtn, 1, 2, 1, 1);


        mainLayout->addWidget(mTemporalCheckBox);

        mAtlasCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mAtlasCheckBox->setObjectName(QString::fromUtf8("mAtlasCheckBox"));
        mAtlasCheckBox->setCheckable(true);
        mAtlasCheckBox->setChecked(false);
        mAtlasCheckBox->setProperty("collapsed", QVariant(true));
        mAtlasCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout_2 = new QGridLayout(mAtlasCheckBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mAtlasMarginRadio = new QRadioButton(mAtlasCheckBox);
        mAtlasMarginRadio->setObjectName(QString::fromUtf8("mAtlasMarginRadio"));
        mAtlasMarginRadio->setEnabled(false);

        gridLayout_2->addWidget(mAtlasMarginRadio, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mAtlasMarginSpinBox = new QgsSpinBox(mAtlasCheckBox);
        mAtlasMarginSpinBox->setObjectName(QString::fromUtf8("mAtlasMarginSpinBox"));
        mAtlasMarginSpinBox->setEnabled(false);
        sizePolicy2.setHeightForWidth(mAtlasMarginSpinBox->sizePolicy().hasHeightForWidth());
        mAtlasMarginSpinBox->setSizePolicy(sizePolicy2);
        mAtlasMarginSpinBox->setMaximum(9999);
        mAtlasMarginSpinBox->setValue(10);

        horizontalLayout_11->addWidget(mAtlasMarginSpinBox);

        mAtlasMarginDDBtn = new QgsPropertyOverrideButton(mAtlasCheckBox);
        mAtlasMarginDDBtn->setObjectName(QString::fromUtf8("mAtlasMarginDDBtn"));

        horizontalLayout_11->addWidget(mAtlasMarginDDBtn);


        gridLayout_2->addLayout(horizontalLayout_11, 0, 1, 1, 1);

        mAtlasPredefinedScaleRadio = new QRadioButton(mAtlasCheckBox);
        mAtlasPredefinedScaleRadio->setObjectName(QString::fromUtf8("mAtlasPredefinedScaleRadio"));

        gridLayout_2->addWidget(mAtlasPredefinedScaleRadio, 1, 0, 1, 1);

        mAtlasFixedScaleRadio = new QRadioButton(mAtlasCheckBox);
        mAtlasFixedScaleRadio->setObjectName(QString::fromUtf8("mAtlasFixedScaleRadio"));
        mAtlasFixedScaleRadio->setEnabled(false);

        gridLayout_2->addWidget(mAtlasFixedScaleRadio, 2, 0, 1, 1);


        mainLayout->addWidget(mAtlasCheckBox);

        mGridGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGridGroupBox->setObjectName(QString::fromUtf8("mGridGroupBox"));
        mGridGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGridGroupBox->setProperty("collapsed", QVariant(true));
        mGridGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        verticalLayout_3 = new QVBoxLayout(mGridGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mAddGridPushButton = new QPushButton(mGridGroupBox);
        mAddGridPushButton->setObjectName(QString::fromUtf8("mAddGridPushButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddGridPushButton->setIcon(icon8);

        horizontalLayout_8->addWidget(mAddGridPushButton);

        mRemoveGridPushButton = new QPushButton(mGridGroupBox);
        mRemoveGridPushButton->setObjectName(QString::fromUtf8("mRemoveGridPushButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveGridPushButton->setIcon(icon9);

        horizontalLayout_8->addWidget(mRemoveGridPushButton);

        mCopyGridPushButton = new QPushButton(mGridGroupBox);
        mCopyGridPushButton->setObjectName(QString::fromUtf8("mCopyGridPushButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionDuplicateLayout.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCopyGridPushButton->setIcon(icon10);

        horizontalLayout_8->addWidget(mCopyGridPushButton);

        mGridUpButton = new QPushButton(mGridGroupBox);
        mGridUpButton->setObjectName(QString::fromUtf8("mGridUpButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mGridUpButton->setIcon(icon11);

        horizontalLayout_8->addWidget(mGridUpButton);

        mGridDownButton = new QPushButton(mGridGroupBox);
        mGridDownButton->setObjectName(QString::fromUtf8("mGridDownButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mGridDownButton->setIcon(icon12);

        horizontalLayout_8->addWidget(mGridDownButton);


        verticalLayout_3->addLayout(horizontalLayout_8);

        mGridListWidget = new QListWidget(mGridGroupBox);
        mGridListWidget->setObjectName(QString::fromUtf8("mGridListWidget"));
        sizePolicy.setHeightForWidth(mGridListWidget->sizePolicy().hasHeightForWidth());
        mGridListWidget->setSizePolicy(sizePolicy);
        mGridListWidget->setMaximumSize(QSize(16777215, 90));

        verticalLayout_3->addWidget(mGridListWidget);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mGridPropertiesButton = new QPushButton(mGridGroupBox);
        mGridPropertiesButton->setObjectName(QString::fromUtf8("mGridPropertiesButton"));

        horizontalLayout_13->addWidget(mGridPropertiesButton);


        verticalLayout_3->addLayout(horizontalLayout_13);


        mainLayout->addWidget(mGridGroupBox);

        mOverviewsGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mOverviewsGroupBox->setObjectName(QString::fromUtf8("mOverviewsGroupBox"));
        mOverviewsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mOverviewsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mOverviewsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout = new QVBoxLayout(mOverviewsGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mAddOverviewPushButton = new QPushButton(mOverviewsGroupBox);
        mAddOverviewPushButton->setObjectName(QString::fromUtf8("mAddOverviewPushButton"));
        mAddOverviewPushButton->setIcon(icon8);

        horizontalLayout_9->addWidget(mAddOverviewPushButton);

        mRemoveOverviewPushButton = new QPushButton(mOverviewsGroupBox);
        mRemoveOverviewPushButton->setObjectName(QString::fromUtf8("mRemoveOverviewPushButton"));
        mRemoveOverviewPushButton->setIcon(icon9);

        horizontalLayout_9->addWidget(mRemoveOverviewPushButton);

        mOverviewUpButton = new QPushButton(mOverviewsGroupBox);
        mOverviewUpButton->setObjectName(QString::fromUtf8("mOverviewUpButton"));
        mOverviewUpButton->setIcon(icon11);

        horizontalLayout_9->addWidget(mOverviewUpButton);

        mOverviewDownButton = new QPushButton(mOverviewsGroupBox);
        mOverviewDownButton->setObjectName(QString::fromUtf8("mOverviewDownButton"));
        mOverviewDownButton->setIcon(icon12);

        horizontalLayout_9->addWidget(mOverviewDownButton);


        verticalLayout->addLayout(horizontalLayout_9);

        mOverviewListWidget = new QListWidget(mOverviewsGroupBox);
        mOverviewListWidget->setObjectName(QString::fromUtf8("mOverviewListWidget"));
        sizePolicy.setHeightForWidth(mOverviewListWidget->sizePolicy().hasHeightForWidth());
        mOverviewListWidget->setSizePolicy(sizePolicy);
        mOverviewListWidget->setMaximumSize(QSize(16777215, 90));

        verticalLayout->addWidget(mOverviewListWidget);

        mOverviewCheckBox = new QgsCollapsibleGroupBoxBasic(mOverviewsGroupBox);
        mOverviewCheckBox->setObjectName(QString::fromUtf8("mOverviewCheckBox"));
        mOverviewCheckBox->setCheckable(true);
        mOverviewCheckBox->setChecked(true);
        mOverviewCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composermapoverview")));
        mOverviewCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_8 = new QGridLayout(mOverviewCheckBox);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        mOverviewPositionComboBox = new QComboBox(mOverviewCheckBox);
        mOverviewPositionComboBox->setObjectName(QString::fromUtf8("mOverviewPositionComboBox"));

        gridLayout_8->addWidget(mOverviewPositionComboBox, 5, 1, 1, 1);

        mOverviewPositionLabel = new QLabel(mOverviewCheckBox);
        mOverviewPositionLabel->setObjectName(QString::fromUtf8("mOverviewPositionLabel"));

        gridLayout_8->addWidget(mOverviewPositionLabel, 5, 0, 1, 1);

        mOverviewFrameStyleButton = new QgsSymbolButton(mOverviewCheckBox);
        mOverviewFrameStyleButton->setObjectName(QString::fromUtf8("mOverviewFrameStyleButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mOverviewFrameStyleButton->sizePolicy().hasHeightForWidth());
        mOverviewFrameStyleButton->setSizePolicy(sizePolicy3);

        gridLayout_8->addWidget(mOverviewFrameStyleButton, 1, 1, 1, 1);

        mOverviewBlendModeComboBox = new QgsBlendModeComboBox(mOverviewCheckBox);
        mOverviewBlendModeComboBox->setObjectName(QString::fromUtf8("mOverviewBlendModeComboBox"));

        gridLayout_8->addWidget(mOverviewBlendModeComboBox, 2, 1, 1, 1);

        mOverviewInvertCheckbox = new QCheckBox(mOverviewCheckBox);
        mOverviewInvertCheckbox->setObjectName(QString::fromUtf8("mOverviewInvertCheckbox"));

        gridLayout_8->addWidget(mOverviewInvertCheckbox, 3, 0, 1, 2);

        mOverviewBlendModeLabel = new QLabel(mOverviewCheckBox);
        mOverviewBlendModeLabel->setObjectName(QString::fromUtf8("mOverviewBlendModeLabel"));

        gridLayout_8->addWidget(mOverviewBlendModeLabel, 2, 0, 1, 1);

        mOverviewFrameStyleLabel = new QLabel(mOverviewCheckBox);
        mOverviewFrameStyleLabel->setObjectName(QString::fromUtf8("mOverviewFrameStyleLabel"));

        gridLayout_8->addWidget(mOverviewFrameStyleLabel, 1, 0, 1, 1);

        mOverviewFrameMapLabel = new QLabel(mOverviewCheckBox);
        mOverviewFrameMapLabel->setObjectName(QString::fromUtf8("mOverviewFrameMapLabel"));

        gridLayout_8->addWidget(mOverviewFrameMapLabel, 0, 0, 1, 1);

        mOverviewCenterCheckbox = new QCheckBox(mOverviewCheckBox);
        mOverviewCenterCheckbox->setObjectName(QString::fromUtf8("mOverviewCenterCheckbox"));

        gridLayout_8->addWidget(mOverviewCenterCheckbox, 4, 0, 1, 2);

        mOverviewFrameMapComboBox = new QgsLayoutItemComboBox(mOverviewCheckBox);
        mOverviewFrameMapComboBox->setObjectName(QString::fromUtf8("mOverviewFrameMapComboBox"));

        gridLayout_8->addWidget(mOverviewFrameMapComboBox, 0, 1, 1, 1);

        mOverviewStackingLayerComboBox = new QgsMapLayerComboBox(mOverviewCheckBox);
        mOverviewStackingLayerComboBox->setObjectName(QString::fromUtf8("mOverviewStackingLayerComboBox"));
        sizePolicy2.setHeightForWidth(mOverviewStackingLayerComboBox->sizePolicy().hasHeightForWidth());
        mOverviewStackingLayerComboBox->setSizePolicy(sizePolicy2);

        gridLayout_8->addWidget(mOverviewStackingLayerComboBox, 6, 1, 1, 1);

        label = new QLabel(mOverviewCheckBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_8->addWidget(label, 6, 0, 1, 1);


        verticalLayout->addWidget(mOverviewCheckBox);


        mainLayout->addWidget(mOverviewsGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        mScaleLabel->setBuddy(mScaleLineEdit);
        mYMinLabel->setBuddy(mYMinLineEdit);
        mXMaxLabel->setBuddy(mXMaxLineEdit);
        mXMinLabel->setBuddy(mXMinLineEdit);
        mYMaxLabel->setBuddy(mYMaxLineEdit);
        mStartDateTimeLabel_2->setBuddy(mStartDateTime);
        mEndDateTimeLabel_2->setBuddy(mEndDateTime);
        mStartDateTimeLabel->setBuddy(mStartDateTime);
        mEndDateTimeLabel->setBuddy(mEndDateTime);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mScaleLineEdit);
        QWidget::setTabOrder(mScaleLineEdit, mScaleDDBtn);
        QWidget::setTabOrder(mScaleDDBtn, mMapRotationSpinBox);
        QWidget::setTabOrder(mMapRotationSpinBox, mMapRotationDDBtn);
        QWidget::setTabOrder(mMapRotationDDBtn, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mCRSDDBtn);
        QWidget::setTabOrder(mCRSDDBtn, mDrawCanvasItemsCheckBox);
        QWidget::setTabOrder(mDrawCanvasItemsCheckBox, mFollowVisibilityPresetCheckBox);
        QWidget::setTabOrder(mFollowVisibilityPresetCheckBox, mFollowVisibilityPresetCombo);
        QWidget::setTabOrder(mFollowVisibilityPresetCombo, mStylePresetsDDBtn);
        QWidget::setTabOrder(mStylePresetsDDBtn, mKeepLayerListCheckBox);
        QWidget::setTabOrder(mKeepLayerListCheckBox, mLayerListFromPresetButton);
        QWidget::setTabOrder(mLayerListFromPresetButton, mLayersDDBtn);
        QWidget::setTabOrder(mLayersDDBtn, mKeepLayerStylesCheckBox);
        QWidget::setTabOrder(mKeepLayerStylesCheckBox, mExtentsCheckBox);
        QWidget::setTabOrder(mExtentsCheckBox, mXMinLineEdit);
        QWidget::setTabOrder(mXMinLineEdit, mXMinDDBtn);
        QWidget::setTabOrder(mXMinDDBtn, mYMinLineEdit);
        QWidget::setTabOrder(mYMinLineEdit, mYMinDDBtn);
        QWidget::setTabOrder(mYMinDDBtn, mXMaxLineEdit);
        QWidget::setTabOrder(mXMaxLineEdit, mXMaxDDBtn);
        QWidget::setTabOrder(mXMaxDDBtn, mYMaxLineEdit);
        QWidget::setTabOrder(mYMaxLineEdit, mYMaxDDBtn);
        QWidget::setTabOrder(mYMaxDDBtn, mElevationRangeCheckBox);
        QWidget::setTabOrder(mElevationRangeCheckBox, mZLowerSpin);
        QWidget::setTabOrder(mZLowerSpin, mZLowerDDBtn);
        QWidget::setTabOrder(mZLowerDDBtn, mZUpperSpin);
        QWidget::setTabOrder(mZUpperSpin, mZUpperDDBtn);
        QWidget::setTabOrder(mZUpperDDBtn, mTemporalCheckBox);
        QWidget::setTabOrder(mTemporalCheckBox, mStartDateTime);
        QWidget::setTabOrder(mStartDateTime, mStartDateTimeDDBtn);
        QWidget::setTabOrder(mStartDateTimeDDBtn, mEndDateTime);
        QWidget::setTabOrder(mEndDateTime, mEndDateTimeDDBtn);
        QWidget::setTabOrder(mEndDateTimeDDBtn, mAtlasCheckBox);
        QWidget::setTabOrder(mAtlasCheckBox, mAtlasMarginRadio);
        QWidget::setTabOrder(mAtlasMarginRadio, mAtlasMarginSpinBox);
        QWidget::setTabOrder(mAtlasMarginSpinBox, mAtlasMarginDDBtn);
        QWidget::setTabOrder(mAtlasMarginDDBtn, mAtlasPredefinedScaleRadio);
        QWidget::setTabOrder(mAtlasPredefinedScaleRadio, mAtlasFixedScaleRadio);
        QWidget::setTabOrder(mAtlasFixedScaleRadio, mGridGroupBox);
        QWidget::setTabOrder(mGridGroupBox, mAddGridPushButton);
        QWidget::setTabOrder(mAddGridPushButton, mRemoveGridPushButton);
        QWidget::setTabOrder(mRemoveGridPushButton, mGridUpButton);
        QWidget::setTabOrder(mGridUpButton, mGridDownButton);
        QWidget::setTabOrder(mGridDownButton, mGridListWidget);
        QWidget::setTabOrder(mGridListWidget, mGridPropertiesButton);
        QWidget::setTabOrder(mGridPropertiesButton, mGridPropertiesButton);
        QWidget::setTabOrder(mGridPropertiesButton, mOverviewsGroupBox);
        QWidget::setTabOrder(mOverviewsGroupBox, mAddOverviewPushButton);
        QWidget::setTabOrder(mAddOverviewPushButton, mRemoveOverviewPushButton);
        QWidget::setTabOrder(mRemoveOverviewPushButton, mOverviewUpButton);
        QWidget::setTabOrder(mOverviewUpButton, mOverviewDownButton);
        QWidget::setTabOrder(mOverviewDownButton, mOverviewListWidget);
        QWidget::setTabOrder(mOverviewListWidget, mOverviewCheckBox);
        QWidget::setTabOrder(mOverviewCheckBox, mOverviewFrameMapComboBox);
        QWidget::setTabOrder(mOverviewFrameMapComboBox, mOverviewFrameStyleButton);
        QWidget::setTabOrder(mOverviewFrameStyleButton, mOverviewBlendModeComboBox);
        QWidget::setTabOrder(mOverviewBlendModeComboBox, mOverviewInvertCheckbox);
        QWidget::setTabOrder(mOverviewInvertCheckbox, mOverviewCenterCheckbox);
        QWidget::setTabOrder(mOverviewCenterCheckbox, mOverviewPositionComboBox);
        QWidget::setTabOrder(mOverviewPositionComboBox, mOverviewStackingLayerComboBox);

        mDockToolbar->addAction(mActionUpdatePreview);
        mDockToolbar->addSeparator();
        mDockToolbar->addAction(mActionSetToCanvasExtent);
        mDockToolbar->addAction(mActionViewExtentInCanvas);
        mDockToolbar->addSeparator();
        mDockToolbar->addAction(mActionSetToCanvasScale);
        mDockToolbar->addAction(mActionViewScaleInCanvas);
        mDockToolbar->addSeparator();
        mDockToolbar->addAction(mActionMoveContent);
        mDockToolbar->addSeparator();
        mDockToolbar->addAction(mActionLabelSettings);
        mDockToolbar->addAction(mActionClipSettings);

        retranslateUi(QgsLayoutMapWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutMapWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMapWidgetBase)
    {
        QgsLayoutMapWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Map Options", nullptr));
        mActionUpdatePreview->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Update Preview", nullptr));
#if QT_CONFIG(tooltip)
        mActionUpdatePreview->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Update Map Preview", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSetToCanvasExtent->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Set to Map Canvas Extent", nullptr));
#if QT_CONFIG(tooltip)
        mActionSetToCanvasExtent->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Set Map Extent to Match Main Canvas Extent", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionViewExtentInCanvas->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "View Extent in Map Canvas", nullptr));
#if QT_CONFIG(tooltip)
        mActionViewExtentInCanvas->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "View Current Map Extent in Main Canvas", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionMoveContent->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Move Map Content", nullptr));
#if QT_CONFIG(tooltip)
        mActionMoveContent->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Interactively Edit Map Extent", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionViewScaleInCanvas->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "View Scale in Map Canvas", nullptr));
#if QT_CONFIG(tooltip)
        mActionViewScaleInCanvas->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Set Main Canvas to Match Current Map Scale", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSetToCanvasScale->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Set to Map Canvas Scale", nullptr));
#if QT_CONFIG(tooltip)
        mActionSetToCanvasScale->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Set Map Scale to Match Main Canvas Scale", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionLabelSettings->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Label Settings", nullptr));
#if QT_CONFIG(tooltip)
        mActionLabelSettings->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Labeling Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionClipSettings->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Clipping Settings", nullptr));
        mLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Map", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Main Properties", nullptr));
        mScaleLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Scale", nullptr));
        mScaleLineEdit->setInputMask(QString());
        mScaleDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mMapRotationSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapWidgetBase", " \302\260", nullptr));
        mMapRotationDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mMapRotationLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Map rotation", nullptr));
        mCrsLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "CRS", nullptr));
        mDrawCanvasItemsCheckBox->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Draw map canvas items", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Layers", nullptr));
        mFollowVisibilityPresetCheckBox->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Follow map theme", nullptr));
        mStylePresetsDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mKeepLayerListCheckBox->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Lock layers", nullptr));
        mLayerListFromPresetButton->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mLayersDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mKeepLayerStylesCheckBox->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Lock styles for layers", nullptr));
        mExtentsCheckBox->setTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Extents", nullptr));
        mYMinDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mXMaxDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mYMinLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Y min", nullptr));
        mYMaxDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mXMaxLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "X max", nullptr));
        mXMinDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mXMinLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "X min", nullptr));
        mYMaxLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Y max", nullptr));
        mElevationRangeCheckBox->setTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Elevation Range", nullptr));
        mStartDateTimeLabel_2->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Lower", nullptr));
        mZLowerDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mEndDateTimeLabel_2->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Upper", nullptr));
        mZUpperDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mTemporalCheckBox->setTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Temporal Range", nullptr));
        mStartDateTimeLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Start (inclusive)", nullptr));
        mStartDateTime->setDisplayFormat(QCoreApplication::translate("QgsLayoutMapWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        mStartDateTimeDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mEndDateTimeLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "End (exclusive)", nullptr));
        mEndDateTime->setDisplayFormat(QCoreApplication::translate("QgsLayoutMapWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        mEndDateTimeDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
        mAtlasCheckBox->setTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Controlled by Atlas", nullptr));
        mAtlasMarginRadio->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Margin around feature", nullptr));
        mAtlasMarginSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMapWidgetBase", "%", nullptr));
        mAtlasMarginDDBtn->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mAtlasPredefinedScaleRadio->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Use one of the predefined scales of the project where the atlas feature best fits.", nullptr));
#endif // QT_CONFIG(tooltip)
        mAtlasPredefinedScaleRadio->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Predefined scale (best fit)", nullptr));
        mAtlasFixedScaleRadio->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Fixed scale", nullptr));
        mGridGroupBox->setTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Grids", nullptr));
#if QT_CONFIG(tooltip)
        mAddGridPushButton->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Add a new grid", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddGridPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveGridPushButton->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Remove selected grid", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveGridPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mCopyGridPushButton->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Duplicate selected grid", nullptr));
#endif // QT_CONFIG(tooltip)
        mCopyGridPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mGridUpButton->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Move selected grid up", nullptr));
#endif // QT_CONFIG(tooltip)
        mGridUpButton->setText(QString());
#if QT_CONFIG(tooltip)
        mGridDownButton->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Move selected grid down", nullptr));
#endif // QT_CONFIG(tooltip)
        mGridDownButton->setText(QString());
        mGridPropertiesButton->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Modify Grid\342\200\246", nullptr));
        mOverviewsGroupBox->setTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Overviews", nullptr));
#if QT_CONFIG(tooltip)
        mAddOverviewPushButton->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Add a new overview", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddOverviewPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveOverviewPushButton->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Remove selected overview", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveOverviewPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mOverviewUpButton->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Move selected overview up", nullptr));
#endif // QT_CONFIG(tooltip)
        mOverviewUpButton->setText(QString());
#if QT_CONFIG(tooltip)
        mOverviewDownButton->setToolTip(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Move selected overview down", nullptr));
#endif // QT_CONFIG(tooltip)
        mOverviewDownButton->setText(QString());
        mOverviewCheckBox->setTitle(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Draw overview", nullptr));
        mOverviewPositionLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Position", nullptr));
        mOverviewFrameStyleButton->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Change\342\200\246", nullptr));
        mOverviewInvertCheckbox->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Invert overview", nullptr));
        mOverviewBlendModeLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Blending mode", nullptr));
        mOverviewFrameStyleLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Frame style", nullptr));
        mOverviewFrameMapLabel->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Map frame", nullptr));
        mOverviewCenterCheckbox->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Center on overview", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutMapWidgetBase", "Stacking layer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMapWidgetBase: public Ui_QgsLayoutMapWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMAPWIDGETBASE_H
