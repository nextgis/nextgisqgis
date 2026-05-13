/********************************************************************************
** Form generated from reading UI file 'qgslayoutattributetablewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTATTRIBUTETABLEWIDGETBASE_H
#define UI_QGSLAYOUTATTRIBUTETABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgslayoutitemcombobox.h"
#include "qgsmaplayercombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutAttributeTableWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QComboBox *mSourceComboBox;
    QLabel *mRelationLabel;
    QComboBox *mRelationsComboBox;
    QPushButton *mRefreshPushButton;
    QPushButton *mAttributesPushButton;
    QLabel *mLayerLabel;
    QHBoxLayout *horizontalLayout_6;
    QgsMapLayerComboBox *mLayerComboBox;
    QgsPropertyOverrideButton *mLayerSourceDDBtn;
    QgsCollapsibleGroupBoxBasic *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *mMaxNumFeaturesLabel;
    QgsSpinBox *mMaximumRowsSpinBox;
    QCheckBox *mUniqueOnlyCheckBox;
    QCheckBox *mShowOnlyVisibleFeaturesCheckBox;
    QLabel *mComposerMapLabel;
    QgsLayoutItemComboBox *mComposerMapComboBox;
    QCheckBox *mIntersectAtlasCheckBox;
    QCheckBox *mFeatureFilterCheckBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mFeatureFilterEdit;
    QToolButton *mFeatureFilterButton;
    QgsCollapsibleGroupBoxBasic *groupBox_6;
    QGridLayout *gridLayout_6;
    QLineEdit *mEmptyMessageLineEdit;
    QComboBox *mEmptyModeComboBox;
    QComboBox *mHeaderModeComboBox;
    QLabel *label_11;
    QPushButton *mAdvancedCustomizationButton;
    QLabel *label_10;
    QLabel *label_9;
    QCheckBox *mDrawEmptyCheckBox;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButton *mBackgroundColorButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QLineEdit *mWrapStringLineEdit;
    QgsDoubleSpinBox *mMarginSpinBox;
    QComboBox *mWrapBehaviorComboBox;
    QLabel *mEmptyMessageLabel;
    QLabel *mMarginLabel;
    QCheckBox *mUseConditionalStylingCheckBox;
    QgsCollapsibleGroupBoxBasic *mShowGridGroupCheckBox;
    QGridLayout *gridLayout_7;
    QLabel *mGridStrokeWidthLabel;
    QgsDoubleSpinBox *mGridStrokeWidthSpinBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QgsColorButton *mGridColorButton;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mDrawHorizontalGrid;
    QCheckBox *mDrawVerticalGrid;
    QgsCollapsibleGroupBoxBasic *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_5;
    QgsFontButton *mHeaderFontToolButton;
    QComboBox *mHeaderHAlignmentComboBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLabel *lblContentsFont;
    QgsFontButton *mContentFontToolButton;
    QgsCollapsibleGroupBoxBasic *frameGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *mResizeModeLabel;
    QComboBox *mResizeModeComboBox;
    QPushButton *mAddFramePushButton;
    QCheckBox *mEmptyFrameCheckBox;
    QCheckBox *mHideEmptyBgCheckBox;

    void setupUi(QWidget *QgsLayoutAttributeTableWidgetBase)
    {
        if (QgsLayoutAttributeTableWidgetBase->objectName().isEmpty())
            QgsLayoutAttributeTableWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutAttributeTableWidgetBase"));
        QgsLayoutAttributeTableWidgetBase->resize(410, 815);
        verticalLayout = new QVBoxLayout(QgsLayoutAttributeTableWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLayoutAttributeTableWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout->addWidget(label);

        scrollArea = new QgsScrollArea(QgsLayoutAttributeTableWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -551, 394, 1343));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        mSourceComboBox = new QComboBox(groupBox);
        mSourceComboBox->setObjectName(QString::fromUtf8("mSourceComboBox"));

        gridLayout_4->addWidget(mSourceComboBox, 0, 1, 1, 1);

        mRelationLabel = new QLabel(groupBox);
        mRelationLabel->setObjectName(QString::fromUtf8("mRelationLabel"));

        gridLayout_4->addWidget(mRelationLabel, 5, 0, 1, 1);

        mRelationsComboBox = new QComboBox(groupBox);
        mRelationsComboBox->setObjectName(QString::fromUtf8("mRelationsComboBox"));

        gridLayout_4->addWidget(mRelationsComboBox, 5, 1, 1, 1);

        mRefreshPushButton = new QPushButton(groupBox);
        mRefreshPushButton->setObjectName(QString::fromUtf8("mRefreshPushButton"));

        gridLayout_4->addWidget(mRefreshPushButton, 6, 0, 1, 2);

        mAttributesPushButton = new QPushButton(groupBox);
        mAttributesPushButton->setObjectName(QString::fromUtf8("mAttributesPushButton"));

        gridLayout_4->addWidget(mAttributesPushButton, 7, 0, 1, 2);

        mLayerLabel = new QLabel(groupBox);
        mLayerLabel->setObjectName(QString::fromUtf8("mLayerLabel"));
        mLayerLabel->setWordWrap(true);

        gridLayout_4->addWidget(mLayerLabel, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mLayerComboBox = new QgsMapLayerComboBox(groupBox);
        mLayerComboBox->setObjectName(QString::fromUtf8("mLayerComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLayerComboBox->sizePolicy().hasHeightForWidth());
        mLayerComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(mLayerComboBox);

        mLayerSourceDDBtn = new QgsPropertyOverrideButton(groupBox);
        mLayerSourceDDBtn->setObjectName(QString::fromUtf8("mLayerSourceDDBtn"));

        horizontalLayout_6->addWidget(mLayerSourceDDBtn);


        gridLayout_4->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox);

        groupBox_5 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFocusPolicy(Qt::StrongFocus);
        groupBox_5->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_5->setProperty("collapsed", QVariant(false));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mMaxNumFeaturesLabel = new QLabel(groupBox_5);
        mMaxNumFeaturesLabel->setObjectName(QString::fromUtf8("mMaxNumFeaturesLabel"));
        mMaxNumFeaturesLabel->setWordWrap(true);

        gridLayout_5->addWidget(mMaxNumFeaturesLabel, 0, 0, 1, 1);

        mMaximumRowsSpinBox = new QgsSpinBox(groupBox_5);
        mMaximumRowsSpinBox->setObjectName(QString::fromUtf8("mMaximumRowsSpinBox"));
        mMaximumRowsSpinBox->setMaximum(99999);
        mMaximumRowsSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_5->addWidget(mMaximumRowsSpinBox, 0, 1, 1, 1);

        mUniqueOnlyCheckBox = new QCheckBox(groupBox_5);
        mUniqueOnlyCheckBox->setObjectName(QString::fromUtf8("mUniqueOnlyCheckBox"));

        gridLayout_5->addWidget(mUniqueOnlyCheckBox, 1, 0, 1, 2);

        mShowOnlyVisibleFeaturesCheckBox = new QCheckBox(groupBox_5);
        mShowOnlyVisibleFeaturesCheckBox->setObjectName(QString::fromUtf8("mShowOnlyVisibleFeaturesCheckBox"));

        gridLayout_5->addWidget(mShowOnlyVisibleFeaturesCheckBox, 2, 0, 1, 2);

        mComposerMapLabel = new QLabel(groupBox_5);
        mComposerMapLabel->setObjectName(QString::fromUtf8("mComposerMapLabel"));
        mComposerMapLabel->setWordWrap(true);

        gridLayout_5->addWidget(mComposerMapLabel, 3, 0, 1, 1);

        mComposerMapComboBox = new QgsLayoutItemComboBox(groupBox_5);
        mComposerMapComboBox->setObjectName(QString::fromUtf8("mComposerMapComboBox"));

        gridLayout_5->addWidget(mComposerMapComboBox, 3, 1, 1, 1);

        mIntersectAtlasCheckBox = new QCheckBox(groupBox_5);
        mIntersectAtlasCheckBox->setObjectName(QString::fromUtf8("mIntersectAtlasCheckBox"));

        gridLayout_5->addWidget(mIntersectAtlasCheckBox, 4, 0, 1, 2);

        mFeatureFilterCheckBox = new QCheckBox(groupBox_5);
        mFeatureFilterCheckBox->setObjectName(QString::fromUtf8("mFeatureFilterCheckBox"));

        gridLayout_5->addWidget(mFeatureFilterCheckBox, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFeatureFilterEdit = new QLineEdit(groupBox_5);
        mFeatureFilterEdit->setObjectName(QString::fromUtf8("mFeatureFilterEdit"));

        horizontalLayout->addWidget(mFeatureFilterEdit);

        mFeatureFilterButton = new QToolButton(groupBox_5);
        mFeatureFilterButton->setObjectName(QString::fromUtf8("mFeatureFilterButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFeatureFilterButton->setIcon(icon);

        horizontalLayout->addWidget(mFeatureFilterButton);


        gridLayout_5->addLayout(horizontalLayout, 5, 1, 1, 1);

        mShowOnlyVisibleFeaturesCheckBox->raise();
        mComposerMapLabel->raise();
        mComposerMapComboBox->raise();
        mFeatureFilterCheckBox->raise();
        mMaximumRowsSpinBox->raise();
        mMaxNumFeaturesLabel->raise();
        mIntersectAtlasCheckBox->raise();
        mUniqueOnlyCheckBox->raise();

        mainLayout->addWidget(groupBox_5);

        groupBox_6 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setFocusPolicy(Qt::StrongFocus);
        groupBox_6->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_6->setProperty("collapsed", QVariant(false));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mEmptyMessageLineEdit = new QLineEdit(groupBox_6);
        mEmptyMessageLineEdit->setObjectName(QString::fromUtf8("mEmptyMessageLineEdit"));

        gridLayout_6->addWidget(mEmptyMessageLineEdit, 6, 1, 1, 1);

        mEmptyModeComboBox = new QComboBox(groupBox_6);
        mEmptyModeComboBox->setObjectName(QString::fromUtf8("mEmptyModeComboBox"));

        gridLayout_6->addWidget(mEmptyModeComboBox, 5, 1, 1, 1);

        mHeaderModeComboBox = new QComboBox(groupBox_6);
        mHeaderModeComboBox->setObjectName(QString::fromUtf8("mHeaderModeComboBox"));

        gridLayout_6->addWidget(mHeaderModeComboBox, 3, 1, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        gridLayout_6->addWidget(label_11, 10, 0, 1, 1);

        mAdvancedCustomizationButton = new QPushButton(groupBox_6);
        mAdvancedCustomizationButton->setObjectName(QString::fromUtf8("mAdvancedCustomizationButton"));

        gridLayout_6->addWidget(mAdvancedCustomizationButton, 8, 1, 1, 1);

        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 7, 0, 1, 1);

        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 5, 0, 1, 1);

        mDrawEmptyCheckBox = new QCheckBox(groupBox_6);
        mDrawEmptyCheckBox->setObjectName(QString::fromUtf8("mDrawEmptyCheckBox"));

        gridLayout_6->addWidget(mDrawEmptyCheckBox, 1, 0, 1, 2);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 11, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mBackgroundColorButton = new QgsColorButton(groupBox_6);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(mBackgroundColorButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout_5, 7, 1, 1, 1);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 3, 0, 1, 1);

        mWrapStringLineEdit = new QLineEdit(groupBox_6);
        mWrapStringLineEdit->setObjectName(QString::fromUtf8("mWrapStringLineEdit"));
        mWrapStringLineEdit->setFrame(true);

        gridLayout_6->addWidget(mWrapStringLineEdit, 10, 1, 1, 1);

        mMarginSpinBox = new QgsDoubleSpinBox(groupBox_6);
        mMarginSpinBox->setObjectName(QString::fromUtf8("mMarginSpinBox"));
        mMarginSpinBox->setSingleStep(0.100000000000000);
        mMarginSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mMarginSpinBox, 2, 1, 1, 1);

        mWrapBehaviorComboBox = new QComboBox(groupBox_6);
        mWrapBehaviorComboBox->setObjectName(QString::fromUtf8("mWrapBehaviorComboBox"));

        gridLayout_6->addWidget(mWrapBehaviorComboBox, 11, 1, 1, 1);

        mEmptyMessageLabel = new QLabel(groupBox_6);
        mEmptyMessageLabel->setObjectName(QString::fromUtf8("mEmptyMessageLabel"));

        gridLayout_6->addWidget(mEmptyMessageLabel, 6, 0, 1, 1);

        mMarginLabel = new QLabel(groupBox_6);
        mMarginLabel->setObjectName(QString::fromUtf8("mMarginLabel"));
        mMarginLabel->setWordWrap(true);

        gridLayout_6->addWidget(mMarginLabel, 2, 0, 1, 1);

        mUseConditionalStylingCheckBox = new QCheckBox(groupBox_6);
        mUseConditionalStylingCheckBox->setObjectName(QString::fromUtf8("mUseConditionalStylingCheckBox"));

        gridLayout_6->addWidget(mUseConditionalStylingCheckBox, 9, 0, 1, 2);


        mainLayout->addWidget(groupBox_6);

        mShowGridGroupCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mShowGridGroupCheckBox->setObjectName(QString::fromUtf8("mShowGridGroupCheckBox"));
        mShowGridGroupCheckBox->setFocusPolicy(Qt::StrongFocus);
        mShowGridGroupCheckBox->setCheckable(true);
        mShowGridGroupCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mShowGridGroupCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_7 = new QGridLayout(mShowGridGroupCheckBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mGridStrokeWidthLabel = new QLabel(mShowGridGroupCheckBox);
        mGridStrokeWidthLabel->setObjectName(QString::fromUtf8("mGridStrokeWidthLabel"));
        mGridStrokeWidthLabel->setWordWrap(true);

        gridLayout_7->addWidget(mGridStrokeWidthLabel, 0, 0, 1, 1);

        mGridStrokeWidthSpinBox = new QgsDoubleSpinBox(mShowGridGroupCheckBox);
        mGridStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mGridStrokeWidthSpinBox"));
        mGridStrokeWidthSpinBox->setSingleStep(0.100000000000000);
        mGridStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mGridStrokeWidthSpinBox, 0, 1, 1, 1);

        label_6 = new QLabel(mShowGridGroupCheckBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_7->addWidget(label_6, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mGridColorButton = new QgsColorButton(mShowGridGroupCheckBox);
        mGridColorButton->setObjectName(QString::fromUtf8("mGridColorButton"));
        mGridColorButton->setMinimumSize(QSize(120, 0));
        mGridColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(mGridColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_7->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        mDrawHorizontalGrid = new QCheckBox(mShowGridGroupCheckBox);
        mDrawHorizontalGrid->setObjectName(QString::fromUtf8("mDrawHorizontalGrid"));

        gridLayout_7->addWidget(mDrawHorizontalGrid, 2, 0, 1, 2);

        mDrawVerticalGrid = new QCheckBox(mShowGridGroupCheckBox);
        mDrawVerticalGrid->setObjectName(QString::fromUtf8("mDrawVerticalGrid"));

        gridLayout_7->addWidget(mDrawVerticalGrid, 3, 0, 1, 2);


        mainLayout->addWidget(mShowGridGroupCheckBox);

        groupBox_3 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFocusPolicy(Qt::StrongFocus);
        groupBox_3->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_3->setProperty("collapsed", QVariant(false));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        mHeaderFontToolButton = new QgsFontButton(groupBox_2);
        mHeaderFontToolButton->setObjectName(QString::fromUtf8("mHeaderFontToolButton"));
        sizePolicy1.setHeightForWidth(mHeaderFontToolButton->sizePolicy().hasHeightForWidth());
        mHeaderFontToolButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderFontToolButton, 0, 1, 1, 1);

        mHeaderHAlignmentComboBox = new QComboBox(groupBox_2);
        mHeaderHAlignmentComboBox->setObjectName(QString::fromUtf8("mHeaderHAlignmentComboBox"));
        sizePolicy1.setHeightForWidth(mHeaderHAlignmentComboBox->sizePolicy().hasHeightForWidth());
        mHeaderHAlignmentComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderHAlignmentComboBox, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblContentsFont = new QLabel(groupBox_4);
        lblContentsFont->setObjectName(QString::fromUtf8("lblContentsFont"));

        gridLayout_2->addWidget(lblContentsFont, 0, 0, 1, 1);

        mContentFontToolButton = new QgsFontButton(groupBox_4);
        mContentFontToolButton->setObjectName(QString::fromUtf8("mContentFontToolButton"));
        sizePolicy1.setHeightForWidth(mContentFontToolButton->sizePolicy().hasHeightForWidth());
        mContentFontToolButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mContentFontToolButton, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);


        mainLayout->addWidget(groupBox_3);

        frameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        frameGroupBox->setObjectName(QString::fromUtf8("frameGroupBox"));
        frameGroupBox->setFocusPolicy(Qt::StrongFocus);
        frameGroupBox->setCheckable(false);
        frameGroupBox->setChecked(false);
        frameGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(frameGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mResizeModeLabel = new QLabel(frameGroupBox);
        mResizeModeLabel->setObjectName(QString::fromUtf8("mResizeModeLabel"));
        mResizeModeLabel->setWordWrap(true);

        gridLayout_3->addWidget(mResizeModeLabel, 0, 0, 1, 1);

        mResizeModeComboBox = new QComboBox(frameGroupBox);
        mResizeModeComboBox->setObjectName(QString::fromUtf8("mResizeModeComboBox"));
        sizePolicy1.setHeightForWidth(mResizeModeComboBox->sizePolicy().hasHeightForWidth());
        mResizeModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mResizeModeComboBox, 0, 1, 1, 1);

        mAddFramePushButton = new QPushButton(frameGroupBox);
        mAddFramePushButton->setObjectName(QString::fromUtf8("mAddFramePushButton"));

        gridLayout_3->addWidget(mAddFramePushButton, 1, 0, 1, 2);

        mEmptyFrameCheckBox = new QCheckBox(frameGroupBox);
        mEmptyFrameCheckBox->setObjectName(QString::fromUtf8("mEmptyFrameCheckBox"));

        gridLayout_3->addWidget(mEmptyFrameCheckBox, 2, 0, 1, 2);

        mHideEmptyBgCheckBox = new QCheckBox(frameGroupBox);
        mHideEmptyBgCheckBox->setObjectName(QString::fromUtf8("mHideEmptyBgCheckBox"));

        gridLayout_3->addWidget(mHideEmptyBgCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(frameGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        mMaxNumFeaturesLabel->setBuddy(mMaximumRowsSpinBox);
        mComposerMapLabel->setBuddy(mComposerMapComboBox);
        mMarginLabel->setBuddy(mMarginSpinBox);
        mGridStrokeWidthLabel->setBuddy(mGridStrokeWidthSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mSourceComboBox);
        QWidget::setTabOrder(mSourceComboBox, mLayerComboBox);
        QWidget::setTabOrder(mLayerComboBox, mLayerSourceDDBtn);
        QWidget::setTabOrder(mLayerSourceDDBtn, mRelationsComboBox);
        QWidget::setTabOrder(mRelationsComboBox, mRefreshPushButton);
        QWidget::setTabOrder(mRefreshPushButton, mAttributesPushButton);
        QWidget::setTabOrder(mAttributesPushButton, groupBox_5);
        QWidget::setTabOrder(groupBox_5, mMaximumRowsSpinBox);
        QWidget::setTabOrder(mMaximumRowsSpinBox, mUniqueOnlyCheckBox);
        QWidget::setTabOrder(mUniqueOnlyCheckBox, mShowOnlyVisibleFeaturesCheckBox);
        QWidget::setTabOrder(mShowOnlyVisibleFeaturesCheckBox, mComposerMapComboBox);
        QWidget::setTabOrder(mComposerMapComboBox, mIntersectAtlasCheckBox);
        QWidget::setTabOrder(mIntersectAtlasCheckBox, mFeatureFilterCheckBox);
        QWidget::setTabOrder(mFeatureFilterCheckBox, mFeatureFilterEdit);
        QWidget::setTabOrder(mFeatureFilterEdit, mFeatureFilterButton);
        QWidget::setTabOrder(mFeatureFilterButton, groupBox_6);
        QWidget::setTabOrder(groupBox_6, mDrawEmptyCheckBox);
        QWidget::setTabOrder(mDrawEmptyCheckBox, mMarginSpinBox);
        QWidget::setTabOrder(mMarginSpinBox, mHeaderModeComboBox);
        QWidget::setTabOrder(mHeaderModeComboBox, mEmptyModeComboBox);
        QWidget::setTabOrder(mEmptyModeComboBox, mEmptyMessageLineEdit);
        QWidget::setTabOrder(mEmptyMessageLineEdit, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mAdvancedCustomizationButton);
        QWidget::setTabOrder(mAdvancedCustomizationButton, mUseConditionalStylingCheckBox);
        QWidget::setTabOrder(mUseConditionalStylingCheckBox, mWrapStringLineEdit);
        QWidget::setTabOrder(mWrapStringLineEdit, mWrapBehaviorComboBox);
        QWidget::setTabOrder(mWrapBehaviorComboBox, mShowGridGroupCheckBox);
        QWidget::setTabOrder(mShowGridGroupCheckBox, mGridStrokeWidthSpinBox);
        QWidget::setTabOrder(mGridStrokeWidthSpinBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, mDrawHorizontalGrid);
        QWidget::setTabOrder(mDrawHorizontalGrid, mDrawVerticalGrid);
        QWidget::setTabOrder(mDrawVerticalGrid, groupBox_3);
        QWidget::setTabOrder(groupBox_3, mHeaderFontToolButton);
        QWidget::setTabOrder(mHeaderFontToolButton, mHeaderHAlignmentComboBox);
        QWidget::setTabOrder(mHeaderHAlignmentComboBox, mContentFontToolButton);
        QWidget::setTabOrder(mContentFontToolButton, frameGroupBox);
        QWidget::setTabOrder(frameGroupBox, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAddFramePushButton);
        QWidget::setTabOrder(mAddFramePushButton, mEmptyFrameCheckBox);
        QWidget::setTabOrder(mEmptyFrameCheckBox, mHideEmptyBgCheckBox);

        retranslateUi(QgsLayoutAttributeTableWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutAttributeTableWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutAttributeTableWidgetBase)
    {
        QgsLayoutAttributeTableWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Attribute Table", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Attribute table", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Main Properties", nullptr));
        label_8->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Source", nullptr));
        mRelationLabel->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Relation", nullptr));
        mRefreshPushButton->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Refresh Table Data", nullptr));
        mAttributesPushButton->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Attributes\342\200\246", nullptr));
        mLayerLabel->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Layer", nullptr));
        mLayerSourceDDBtn->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "\342\200\246", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Feature Filtering", nullptr));
        mMaxNumFeaturesLabel->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Maximum rows", nullptr));
        mUniqueOnlyCheckBox->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Remove duplicate rows from table", nullptr));
        mShowOnlyVisibleFeaturesCheckBox->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Show only features visible within a map", nullptr));
        mComposerMapLabel->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Linked map", nullptr));
        mIntersectAtlasCheckBox->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Show only features intersecting atlas feature", nullptr));
        mFeatureFilterCheckBox->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Filter with", nullptr));
        mFeatureFilterButton->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "\342\200\246", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Appearance", nullptr));
        label_11->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Wrap text on", nullptr));
        mAdvancedCustomizationButton->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Advanced Customization\342\200\246", nullptr));
        label_10->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Background color", nullptr));
        label_9->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Empty tables", nullptr));
        mDrawEmptyCheckBox->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Show empty rows", nullptr));
        label_12->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Oversized text", nullptr));
        mBackgroundColorButton->setText(QString());
        label_7->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Display header", nullptr));
        mMarginSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", " mm", nullptr));
        mEmptyMessageLabel->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Message to display", nullptr));
        mMarginLabel->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Cell margins", nullptr));
        mUseConditionalStylingCheckBox->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Apply layer conditional styling rules", nullptr));
        mShowGridGroupCheckBox->setTitle(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Show Grid", nullptr));
        mGridStrokeWidthLabel->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Line width", nullptr));
        mGridStrokeWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", " mm", nullptr));
        label_6->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Color", nullptr));
        mGridColorButton->setText(QString());
        mDrawHorizontalGrid->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Draw horizontal lines", nullptr));
        mDrawVerticalGrid->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Draw vertical lines", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Fonts and Text Styling", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Table Heading", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Alignment", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Font", nullptr));
        mHeaderFontToolButton->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Heading Font", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Table Contents", nullptr));
        lblContentsFont->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Font", nullptr));
        mContentFontToolButton->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Contents Font", nullptr));
        frameGroupBox->setTitle(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Frames", nullptr));
        mResizeModeLabel->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Resize mode", nullptr));
        mAddFramePushButton->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Add Frame", nullptr));
        mEmptyFrameCheckBox->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Don't export page if frame is empty", nullptr));
        mHideEmptyBgCheckBox->setText(QCoreApplication::translate("QgsLayoutAttributeTableWidgetBase", "Don't draw background if frame is empty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutAttributeTableWidgetBase: public Ui_QgsLayoutAttributeTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTATTRIBUTETABLEWIDGETBASE_H
