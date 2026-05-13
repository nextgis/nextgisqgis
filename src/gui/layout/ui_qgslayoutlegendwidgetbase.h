/********************************************************************************
** Form generated from reading UI file 'qgslayoutlegendwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTLEGENDWIDGETBASE_H
#define UI_QGSLAYOUTLEGENDWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include <qgslegendfilterbutton.h>
#include "qgsalignmentcombobox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgslayertreeview.h"
#include "qgslayoutitemcombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutLegendWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mMainPropertiesColGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_15;
    QgsLayoutItemComboBox *mMapComboBox;
    QLabel *mTitleLabel;
    QgsPropertyOverrideButton *mLegendTitleDDBtn;
    QgsAlignmentComboBox *mArrangementCombo;
    QLabel *mMapLabel;
    QCheckBox *mCheckboxResizeContents;
    QLineEdit *mTitleLineEdit;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QLabel *label_16;
    QgsDoubleSpinBox *mMaxWidthSpinBox;
    QgsPropertyOverrideButton *mLegendAutoWrapWidthDDBtn;
    QLineEdit *mWrapCharLineEdit;
    QgsCollapsibleGroupBoxBasic *mLegendItemColGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mCheckBoxAutoUpdate;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *mUpdateAllPushButton;
    QgsLayerTreeView *mItemTreeView;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mExpandAllToolButton;
    QToolButton *mCollapseAllToolButton;
    QToolButton *mMoveDownToolButton;
    QToolButton *mMoveUpToolButton;
    QToolButton *mAddGroupToolButton;
    QToolButton *mAddToolButton;
    QToolButton *mRemoveToolButton;
    QToolButton *mEditPushButton;
    QToolButton *mLayerExpressionButton;
    QToolButton *mCountToolButton;
    QSpacerItem *horizontalSpacer_4;
    QgsLegendFilterButton *mExpressionFilterButton;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *mFilterByMapCheckBox;
    QToolButton *mButtonLinkedMaps;
    QCheckBox *mFilterLegendByAtlasCheckBox;
    QgsCollapsibleGroupBoxBasic *mFontsColGroupBox;
    QGridLayout *gridLayout_4;
    QgsFontButton *mItemFontButton;
    QgsAlignmentComboBox *mGroupAlignCombo;
    QLabel *label_23;
    QgsAlignmentComboBox *mTitleAlignCombo;
    QLabel *label_21;
    QgsFontButton *mGroupFontButton;
    QLabel *label_29;
    QLabel *label_19_alignment;
    QLabel *label_27;
    QgsAlignmentComboBox *mItemAlignCombo;
    QLabel *label_28;
    QLabel *label_24;
    QLabel *label_25;
    QgsFontButton *mTitleFontButton;
    QLabel *label_20;
    QLabel *label_26;
    QLabel *label_22;
    QgsFontButton *mLayerFontButton;
    QLabel *label_18_alignment;
    QgsAlignmentComboBox *mSubgroupAlignCombo;
    QgsCollapsibleGroupBoxBasic *mColumnsColGroupBox;
    QGridLayout *gridLayout_3;
    QgsSpinBox *mColumnCountSpinBox;
    QLabel *label_2;
    QgsPropertyOverrideButton *mColumnsDDBtn;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *mEqualColumnWidthCheckBox;
    QCheckBox *mSplitLayerCheckBox;
    QgsCollapsibleGroupBoxBasic *mSymbolsColGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QgsDoubleSpinBox *mSymbolHeightSpinBox;
    QgsCollapsibleGroupBoxBasic *mRasterStrokeGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_6;
    QgsColorButton *mRasterStrokeColorButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mStrokeWidthLabel;
    QgsDoubleSpinBox *mRasterStrokeWidthSpinBox;
    QgsDoubleSpinBox *mMaxSymbolSizeSpinBox;
    QLabel *mMaxSymbolSizeLabel;
    QLabel *mMinSymbolSizeLabel;
    QgsDoubleSpinBox *mMinSymbolSizeSpinBox;
    QgsDoubleSpinBox *mSymbolWidthSpinBox;
    QgsCollapsibleGroupBoxBasic *mSymbolsColGroupBox_2;
    QFormLayout *formLayout_5;
    QLabel *label_13;
    QgsDoubleSpinBox *mWmsLegendWidthSpinBox;
    QLabel *label_14;
    QgsDoubleSpinBox *mWmsLegendHeightSpinBox;
    QgsCollapsibleGroupBoxBasic *mSpacingColGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_34;
    QgsDoubleSpinBox *mColumnSpaceSpinBox;
    QgsDoubleSpinBox *mSymbolSideSpaceSpinBox;
    QLabel *label_10;
    QLabel *label_30;
    QLabel *label_31s;
    QgsDoubleSpinBox *mSymbolSpaceSpinBox;
    QLabel *label_32;
    QgsDoubleSpinBox *mSpaceBelowSubgroupHeadingSpinBox;
    QLabel *label_6;
    QgsDoubleSpinBox *mGroupSideSpinBox;
    QLabel *label_38;
    QgsDoubleSpinBox *mIconLabelSpaceSpinBox;
    QgsDoubleSpinBox *mGroupIndentSpinBox;
    QLabel *label_36;
    QgsDoubleSpinBox *mSpaceBelowGroupHeadingSpinBox;
    QLabel *label_31;
    QgsDoubleSpinBox *mBoxSpaceSpinBox;
    QLabel *label_37;
    QgsDoubleSpinBox *mSubgroupSideSpinBox;
    QLabel *label_5;
    QLabel *label_18;
    QgsDoubleSpinBox *mSubgroupIndentSpinBox;
    QLabel *label_8;
    QLabel *label_12;
    QgsDoubleSpinBox *mTitleSpaceBottomSpinBox;
    QgsDoubleSpinBox *mLayerSpaceSpinBox;
    QLabel *label_7;
    QLabel *label_19;
    QLabel *label_33;
    QLabel *label_9;
    QLabel *label_35;
    QLabel *label_39;
    QgsDoubleSpinBox *mGroupSpaceSpinBox;
    QLabel *label_40;

    void setupUi(QWidget *QgsLayoutLegendWidgetBase)
    {
        if (QgsLayoutLegendWidgetBase->objectName().isEmpty())
            QgsLayoutLegendWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutLegendWidgetBase"));
        QgsLayoutLegendWidgetBase->resize(402, 995);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutLegendWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutLegendWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutLegendWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(QgsLayoutLegendWidgetBase);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout->addWidget(label_11);

        scrollArea = new QgsScrollArea(QgsLayoutLegendWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 386, 2334));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mMainPropertiesColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mMainPropertiesColGroupBox->setObjectName(QString::fromUtf8("mMainPropertiesColGroupBox"));
        mMainPropertiesColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mMainPropertiesColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mMainPropertiesColGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mMainPropertiesColGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_15 = new QLabel(mMainPropertiesColGroupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 3, 0, 1, 1);

        mMapComboBox = new QgsLayoutItemComboBox(mMainPropertiesColGroupBox);
        mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));

        gridLayout_2->addWidget(mMapComboBox, 1, 1, 1, 2);

        mTitleLabel = new QLabel(mMainPropertiesColGroupBox);
        mTitleLabel->setObjectName(QString::fromUtf8("mTitleLabel"));

        gridLayout_2->addWidget(mTitleLabel, 0, 0, 1, 1);

        mLegendTitleDDBtn = new QgsPropertyOverrideButton(mMainPropertiesColGroupBox);
        mLegendTitleDDBtn->setObjectName(QString::fromUtf8("mLegendTitleDDBtn"));

        gridLayout_2->addWidget(mLegendTitleDDBtn, 0, 2, 1, 1);

        mArrangementCombo = new QgsAlignmentComboBox(mMainPropertiesColGroupBox);
        mArrangementCombo->setObjectName(QString::fromUtf8("mArrangementCombo"));

        gridLayout_2->addWidget(mArrangementCombo, 3, 1, 1, 2);

        mMapLabel = new QLabel(mMainPropertiesColGroupBox);
        mMapLabel->setObjectName(QString::fromUtf8("mMapLabel"));

        gridLayout_2->addWidget(mMapLabel, 1, 0, 1, 1);

        mCheckboxResizeContents = new QCheckBox(mMainPropertiesColGroupBox);
        mCheckboxResizeContents->setObjectName(QString::fromUtf8("mCheckboxResizeContents"));

        gridLayout_2->addWidget(mCheckboxResizeContents, 4, 0, 1, 2);

        mTitleLineEdit = new QLineEdit(mMainPropertiesColGroupBox);
        mTitleLineEdit->setObjectName(QString::fromUtf8("mTitleLineEdit"));

        gridLayout_2->addWidget(mTitleLineEdit, 0, 1, 1, 1);


        mainLayout->addWidget(mMainPropertiesColGroupBox);

        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_6->addWidget(label_16, 1, 0, 1, 1);

        mMaxWidthSpinBox = new QgsDoubleSpinBox(groupBox);
        mMaxWidthSpinBox->setObjectName(QString::fromUtf8("mMaxWidthSpinBox"));
        mMaxWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mMaxWidthSpinBox, 1, 1, 1, 1);

        mLegendAutoWrapWidthDDBtn = new QgsPropertyOverrideButton(groupBox);
        mLegendAutoWrapWidthDDBtn->setObjectName(QString::fromUtf8("mLegendAutoWrapWidthDDBtn"));

        gridLayout_6->addWidget(mLegendAutoWrapWidthDDBtn, 1, 2, 1, 1);

        mWrapCharLineEdit = new QLineEdit(groupBox);
        mWrapCharLineEdit->setObjectName(QString::fromUtf8("mWrapCharLineEdit"));
        mWrapCharLineEdit->setFrame(true);

        gridLayout_6->addWidget(mWrapCharLineEdit, 0, 1, 1, 2);

        gridLayout_6->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox);

        mLegendItemColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mLegendItemColGroupBox->setObjectName(QString::fromUtf8("mLegendItemColGroupBox"));
        mLegendItemColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mLegendItemColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mLegendItemColGroupBox->setProperty("collapsed", QVariant(false));
        verticalLayout_2 = new QVBoxLayout(mLegendItemColGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mCheckBoxAutoUpdate = new QCheckBox(mLegendItemColGroupBox);
        mCheckBoxAutoUpdate->setObjectName(QString::fromUtf8("mCheckBoxAutoUpdate"));
        mCheckBoxAutoUpdate->setChecked(true);

        horizontalLayout->addWidget(mCheckBoxAutoUpdate);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mUpdateAllPushButton = new QToolButton(mLegendItemColGroupBox);
        mUpdateAllPushButton->setObjectName(QString::fromUtf8("mUpdateAllPushButton"));

        horizontalLayout->addWidget(mUpdateAllPushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        mItemTreeView = new QgsLayerTreeView(mLegendItemColGroupBox);
        mItemTreeView->setObjectName(QString::fromUtf8("mItemTreeView"));
        mItemTreeView->setMinimumSize(QSize(0, 250));
        mItemTreeView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        mItemTreeView->setHeaderHidden(true);
        mItemTreeView->header()->setVisible(false);

        verticalLayout_2->addWidget(mItemTreeView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mExpandAllToolButton = new QToolButton(mLegendItemColGroupBox);
        mExpandAllToolButton->setObjectName(QString::fromUtf8("mExpandAllToolButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mExpandAllToolButton->sizePolicy().hasHeightForWidth());
        mExpandAllToolButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionExpandTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandAllToolButton->setIcon(icon);
        mExpandAllToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mExpandAllToolButton);

        mCollapseAllToolButton = new QToolButton(mLegendItemColGroupBox);
        mCollapseAllToolButton->setObjectName(QString::fromUtf8("mCollapseAllToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionCollapseTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCollapseAllToolButton->setIcon(icon1);
        mCollapseAllToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mCollapseAllToolButton);

        mMoveDownToolButton = new QToolButton(mLegendItemColGroupBox);
        mMoveDownToolButton->setObjectName(QString::fromUtf8("mMoveDownToolButton"));
        sizePolicy2.setHeightForWidth(mMoveDownToolButton->sizePolicy().hasHeightForWidth());
        mMoveDownToolButton->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveDownToolButton->setIcon(icon2);
        mMoveDownToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mMoveDownToolButton);

        mMoveUpToolButton = new QToolButton(mLegendItemColGroupBox);
        mMoveUpToolButton->setObjectName(QString::fromUtf8("mMoveUpToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveUpToolButton->setIcon(icon3);
        mMoveUpToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mMoveUpToolButton);

        mAddGroupToolButton = new QToolButton(mLegendItemColGroupBox);
        mAddGroupToolButton->setObjectName(QString::fromUtf8("mAddGroupToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionAddGroup.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddGroupToolButton->setIcon(icon4);
        mAddGroupToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mAddGroupToolButton);

        mAddToolButton = new QToolButton(mLegendItemColGroupBox);
        mAddToolButton->setObjectName(QString::fromUtf8("mAddToolButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddToolButton->setIcon(icon5);
        mAddToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mAddToolButton);

        mRemoveToolButton = new QToolButton(mLegendItemColGroupBox);
        mRemoveToolButton->setObjectName(QString::fromUtf8("mRemoveToolButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveToolButton->setIcon(icon6);
        mRemoveToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mRemoveToolButton);

        mEditPushButton = new QToolButton(mLegendItemColGroupBox);
        mEditPushButton->setObjectName(QString::fromUtf8("mEditPushButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditPushButton->setIcon(icon7);
        mEditPushButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mEditPushButton);

        mLayerExpressionButton = new QToolButton(mLegendItemColGroupBox);
        mLayerExpressionButton->setObjectName(QString::fromUtf8("mLayerExpressionButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLayerExpressionButton->setIcon(icon8);
        mLayerExpressionButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mLayerExpressionButton);

        mCountToolButton = new QToolButton(mLegendItemColGroupBox);
        mCountToolButton->setObjectName(QString::fromUtf8("mCountToolButton"));
        mCountToolButton->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionSum.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCountToolButton->setIcon(icon9);
        mCountToolButton->setIconSize(QSize(20, 20));
        mCountToolButton->setCheckable(true);

        horizontalLayout_2->addWidget(mCountToolButton);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        mExpressionFilterButton = new QgsLegendFilterButton(mLegendItemColGroupBox);
        mExpressionFilterButton->setObjectName(QString::fromUtf8("mExpressionFilterButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mIconExpressionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpressionFilterButton->setIcon(icon10);
        mExpressionFilterButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mExpressionFilterButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        mFilterByMapCheckBox = new QCheckBox(mLegendItemColGroupBox);
        mFilterByMapCheckBox->setObjectName(QString::fromUtf8("mFilterByMapCheckBox"));

        horizontalLayout_3->addWidget(mFilterByMapCheckBox);

        mButtonLinkedMaps = new QToolButton(mLegendItemColGroupBox);
        mButtonLinkedMaps->setObjectName(QString::fromUtf8("mButtonLinkedMaps"));

        horizontalLayout_3->addWidget(mButtonLinkedMaps);


        verticalLayout_2->addLayout(horizontalLayout_3);

        mFilterLegendByAtlasCheckBox = new QCheckBox(mLegendItemColGroupBox);
        mFilterLegendByAtlasCheckBox->setObjectName(QString::fromUtf8("mFilterLegendByAtlasCheckBox"));

        verticalLayout_2->addWidget(mFilterLegendByAtlasCheckBox);


        mainLayout->addWidget(mLegendItemColGroupBox);

        mFontsColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mFontsColGroupBox->setObjectName(QString::fromUtf8("mFontsColGroupBox"));
        mFontsColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mFontsColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mFontsColGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_4 = new QGridLayout(mFontsColGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mItemFontButton = new QgsFontButton(mFontsColGroupBox);
        mItemFontButton->setObjectName(QString::fromUtf8("mItemFontButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mItemFontButton->sizePolicy().hasHeightForWidth());
        mItemFontButton->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(mItemFontButton, 11, 1, 1, 2);

        mGroupAlignCombo = new QgsAlignmentComboBox(mFontsColGroupBox);
        mGroupAlignCombo->setObjectName(QString::fromUtf8("mGroupAlignCombo"));

        gridLayout_4->addWidget(mGroupAlignCombo, 6, 1, 1, 2);

        label_23 = new QLabel(mFontsColGroupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_4->addWidget(label_23, 7, 0, 1, 3);

        mTitleAlignCombo = new QgsAlignmentComboBox(mFontsColGroupBox);
        mTitleAlignCombo->setObjectName(QString::fromUtf8("mTitleAlignCombo"));

        gridLayout_4->addWidget(mTitleAlignCombo, 2, 1, 1, 2);

        label_21 = new QLabel(mFontsColGroupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_4->addWidget(label_21, 3, 0, 1, 3);

        mGroupFontButton = new QgsFontButton(mFontsColGroupBox);
        mGroupFontButton->setObjectName(QString::fromUtf8("mGroupFontButton"));
        sizePolicy3.setHeightForWidth(mGroupFontButton->sizePolicy().hasHeightForWidth());
        mGroupFontButton->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(mGroupFontButton, 5, 1, 1, 2);

        label_29 = new QLabel(mFontsColGroupBox);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_4->addWidget(label_29, 2, 0, 1, 1);

        label_19_alignment = new QLabel(mFontsColGroupBox);
        label_19_alignment->setObjectName(QString::fromUtf8("label_19_alignment"));

        gridLayout_4->addWidget(label_19_alignment, 9, 0, 1, 1);

        label_27 = new QLabel(mFontsColGroupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_4->addWidget(label_27, 0, 0, 1, 3);

        mItemAlignCombo = new QgsAlignmentComboBox(mFontsColGroupBox);
        mItemAlignCombo->setObjectName(QString::fromUtf8("mItemAlignCombo"));

        gridLayout_4->addWidget(mItemAlignCombo, 12, 1, 1, 2);

        label_28 = new QLabel(mFontsColGroupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_4->addWidget(label_28, 1, 0, 1, 1);

        label_24 = new QLabel(mFontsColGroupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_4->addWidget(label_24, 8, 0, 1, 1);

        label_25 = new QLabel(mFontsColGroupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_4->addWidget(label_25, 10, 0, 1, 3);

        mTitleFontButton = new QgsFontButton(mFontsColGroupBox);
        mTitleFontButton->setObjectName(QString::fromUtf8("mTitleFontButton"));
        sizePolicy2.setHeightForWidth(mTitleFontButton->sizePolicy().hasHeightForWidth());
        mTitleFontButton->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mTitleFontButton, 1, 1, 1, 2);

        label_20 = new QLabel(mFontsColGroupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_4->addWidget(label_20, 12, 0, 1, 1);

        label_26 = new QLabel(mFontsColGroupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_4->addWidget(label_26, 11, 0, 1, 1);

        label_22 = new QLabel(mFontsColGroupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_4->addWidget(label_22, 5, 0, 1, 1);

        mLayerFontButton = new QgsFontButton(mFontsColGroupBox);
        mLayerFontButton->setObjectName(QString::fromUtf8("mLayerFontButton"));
        sizePolicy3.setHeightForWidth(mLayerFontButton->sizePolicy().hasHeightForWidth());
        mLayerFontButton->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(mLayerFontButton, 8, 1, 1, 2);

        label_18_alignment = new QLabel(mFontsColGroupBox);
        label_18_alignment->setObjectName(QString::fromUtf8("label_18_alignment"));

        gridLayout_4->addWidget(label_18_alignment, 6, 0, 1, 1);

        mSubgroupAlignCombo = new QgsAlignmentComboBox(mFontsColGroupBox);
        mSubgroupAlignCombo->setObjectName(QString::fromUtf8("mSubgroupAlignCombo"));

        gridLayout_4->addWidget(mSubgroupAlignCombo, 9, 1, 1, 2);


        mainLayout->addWidget(mFontsColGroupBox);

        mColumnsColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mColumnsColGroupBox->setObjectName(QString::fromUtf8("mColumnsColGroupBox"));
        mColumnsColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mColumnsColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mColumnsColGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_3 = new QGridLayout(mColumnsColGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mColumnCountSpinBox = new QgsSpinBox(mColumnsColGroupBox);
        mColumnCountSpinBox->setObjectName(QString::fromUtf8("mColumnCountSpinBox"));
        mColumnCountSpinBox->setMinimum(1);
        mColumnCountSpinBox->setMaximum(1000);

        gridLayout_3->addWidget(mColumnCountSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(mColumnsColGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        mColumnsDDBtn = new QgsPropertyOverrideButton(mColumnsColGroupBox);
        mColumnsDDBtn->setObjectName(QString::fromUtf8("mColumnsDDBtn"));

        gridLayout_3->addWidget(mColumnsDDBtn, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        mEqualColumnWidthCheckBox = new QCheckBox(mColumnsColGroupBox);
        mEqualColumnWidthCheckBox->setObjectName(QString::fromUtf8("mEqualColumnWidthCheckBox"));

        gridLayout_3->addWidget(mEqualColumnWidthCheckBox, 2, 0, 1, 4);

        mSplitLayerCheckBox = new QCheckBox(mColumnsColGroupBox);
        mSplitLayerCheckBox->setObjectName(QString::fromUtf8("mSplitLayerCheckBox"));

        gridLayout_3->addWidget(mSplitLayerCheckBox, 3, 0, 1, 4);


        mainLayout->addWidget(mColumnsColGroupBox);

        mSymbolsColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSymbolsColGroupBox->setObjectName(QString::fromUtf8("mSymbolsColGroupBox"));
        mSymbolsColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mSymbolsColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSymbolsColGroupBox->setProperty("collapsed", QVariant(true));
        formLayout_3 = new QFormLayout(mSymbolsColGroupBox);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(mSymbolsColGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(mSymbolsColGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_4);

        mSymbolHeightSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox);
        mSymbolHeightSpinBox->setObjectName(QString::fromUtf8("mSymbolHeightSpinBox"));
        mSymbolHeightSpinBox->setProperty("showClearButton", QVariant(false));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, mSymbolHeightSpinBox);

        mRasterStrokeGroupBox = new QgsCollapsibleGroupBoxBasic(mSymbolsColGroupBox);
        mRasterStrokeGroupBox->setObjectName(QString::fromUtf8("mRasterStrokeGroupBox"));
        mRasterStrokeGroupBox->setCheckable(true);
        mRasterStrokeGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mRasterStrokeGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout = new QGridLayout(mRasterStrokeGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_17 = new QLabel(mRasterStrokeGroupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mRasterStrokeColorButton = new QgsColorButton(mRasterStrokeGroupBox);
        mRasterStrokeColorButton->setObjectName(QString::fromUtf8("mRasterStrokeColorButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mRasterStrokeColorButton->sizePolicy().hasHeightForWidth());
        mRasterStrokeColorButton->setSizePolicy(sizePolicy4);
        mRasterStrokeColorButton->setMinimumSize(QSize(120, 0));
        mRasterStrokeColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_6->addWidget(mRasterStrokeColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(mRasterStrokeGroupBox);
        mStrokeWidthLabel->setObjectName(QString::fromUtf8("mStrokeWidthLabel"));

        gridLayout->addWidget(mStrokeWidthLabel, 1, 0, 1, 1);

        mRasterStrokeWidthSpinBox = new QgsDoubleSpinBox(mRasterStrokeGroupBox);
        mRasterStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mRasterStrokeWidthSpinBox"));
        sizePolicy3.setHeightForWidth(mRasterStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mRasterStrokeWidthSpinBox->setSizePolicy(sizePolicy3);
        mRasterStrokeWidthSpinBox->setSingleStep(0.100000000000000);
        mRasterStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mRasterStrokeWidthSpinBox, 1, 1, 1, 1);


        formLayout_3->setWidget(5, QFormLayout::SpanningRole, mRasterStrokeGroupBox);

        mMaxSymbolSizeSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox);
        mMaxSymbolSizeSpinBox->setObjectName(QString::fromUtf8("mMaxSymbolSizeSpinBox"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, mMaxSymbolSizeSpinBox);

        mMaxSymbolSizeLabel = new QLabel(mSymbolsColGroupBox);
        mMaxSymbolSizeLabel->setObjectName(QString::fromUtf8("mMaxSymbolSizeLabel"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, mMaxSymbolSizeLabel);

        mMinSymbolSizeLabel = new QLabel(mSymbolsColGroupBox);
        mMinSymbolSizeLabel->setObjectName(QString::fromUtf8("mMinSymbolSizeLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, mMinSymbolSizeLabel);

        mMinSymbolSizeSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox);
        mMinSymbolSizeSpinBox->setObjectName(QString::fromUtf8("mMinSymbolSizeSpinBox"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, mMinSymbolSizeSpinBox);

        mSymbolWidthSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox);
        mSymbolWidthSpinBox->setObjectName(QString::fromUtf8("mSymbolWidthSpinBox"));
        mSymbolWidthSpinBox->setProperty("showClearButton", QVariant(false));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, mSymbolWidthSpinBox);


        mainLayout->addWidget(mSymbolsColGroupBox);

        mSymbolsColGroupBox_2 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSymbolsColGroupBox_2->setObjectName(QString::fromUtf8("mSymbolsColGroupBox_2"));
        mSymbolsColGroupBox_2->setFocusPolicy(Qt::StrongFocus);
        mSymbolsColGroupBox_2->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSymbolsColGroupBox_2->setProperty("collapsed", QVariant(true));
        formLayout_5 = new QFormLayout(mSymbolsColGroupBox_2);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_13 = new QLabel(mSymbolsColGroupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_13);

        mWmsLegendWidthSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox_2);
        mWmsLegendWidthSpinBox->setObjectName(QString::fromUtf8("mWmsLegendWidthSpinBox"));
        mWmsLegendWidthSpinBox->setMaximum(9999.000000000000000);
        mWmsLegendWidthSpinBox->setProperty("showClearButton", QVariant(false));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, mWmsLegendWidthSpinBox);

        label_14 = new QLabel(mSymbolsColGroupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_14);

        mWmsLegendHeightSpinBox = new QgsDoubleSpinBox(mSymbolsColGroupBox_2);
        mWmsLegendHeightSpinBox->setObjectName(QString::fromUtf8("mWmsLegendHeightSpinBox"));
        mWmsLegendHeightSpinBox->setMaximum(9999.000000000000000);
        mWmsLegendHeightSpinBox->setProperty("showClearButton", QVariant(false));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, mWmsLegendHeightSpinBox);


        mainLayout->addWidget(mSymbolsColGroupBox_2);

        mSpacingColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSpacingColGroupBox->setObjectName(QString::fromUtf8("mSpacingColGroupBox"));
        mSpacingColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mSpacingColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSpacingColGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_5 = new QGridLayout(mSpacingColGroupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_34 = new QLabel(mSpacingColGroupBox);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_5->addWidget(label_34, 14, 0, 1, 1);

        mColumnSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mColumnSpaceSpinBox->setObjectName(QString::fromUtf8("mColumnSpaceSpinBox"));
        mColumnSpaceSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mColumnSpaceSpinBox, 20, 1, 1, 1);

        mSymbolSideSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mSymbolSideSpaceSpinBox->setObjectName(QString::fromUtf8("mSymbolSideSpaceSpinBox"));
        mSymbolSideSpaceSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mSymbolSideSpaceSpinBox, 15, 1, 1, 1);

        label_10 = new QLabel(mSpacingColGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 1, 0, 1, 1);

        label_30 = new QLabel(mSpacingColGroupBox);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_5->addWidget(label_30, 7, 0, 1, 1);

        label_31s = new QLabel(mSpacingColGroupBox);
        label_31s->setObjectName(QString::fromUtf8("label_31s"));

        gridLayout_5->addWidget(label_31s, 0, 0, 1, 1);

        mSymbolSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mSymbolSpaceSpinBox->setObjectName(QString::fromUtf8("mSymbolSpaceSpinBox"));
        mSymbolSpaceSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mSymbolSpaceSpinBox, 16, 1, 1, 1);

        label_32 = new QLabel(mSpacingColGroupBox);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_5->addWidget(label_32, 8, 0, 1, 1);

        mSpaceBelowSubgroupHeadingSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mSpaceBelowSubgroupHeadingSpinBox->setObjectName(QString::fromUtf8("mSpaceBelowSubgroupHeadingSpinBox"));
        mSpaceBelowSubgroupHeadingSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mSpaceBelowSubgroupHeadingSpinBox, 12, 1, 1, 1);

        label_6 = new QLabel(mSpacingColGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 9, 0, 1, 1);

        mGroupSideSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mGroupSideSpinBox->setObjectName(QString::fromUtf8("mGroupSideSpinBox"));
        mGroupSideSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mGroupSideSpinBox, 7, 1, 1, 1);

        label_38 = new QLabel(mSpacingColGroupBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_5->addWidget(label_38, 15, 0, 1, 1);

        mIconLabelSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mIconLabelSpaceSpinBox->setObjectName(QString::fromUtf8("mIconLabelSpaceSpinBox"));
        mIconLabelSpaceSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mIconLabelSpaceSpinBox, 17, 1, 1, 1);

        mGroupIndentSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mGroupIndentSpinBox->setObjectName(QString::fromUtf8("mGroupIndentSpinBox"));
        mGroupIndentSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mGroupIndentSpinBox, 4, 1, 1, 1);

        label_36 = new QLabel(mSpacingColGroupBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_5->addWidget(label_36, 11, 0, 1, 1);

        mSpaceBelowGroupHeadingSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mSpaceBelowGroupHeadingSpinBox->setObjectName(QString::fromUtf8("mSpaceBelowGroupHeadingSpinBox"));
        mSpaceBelowGroupHeadingSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mSpaceBelowGroupHeadingSpinBox, 6, 1, 1, 1);

        label_31 = new QLabel(mSpacingColGroupBox);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_5->addWidget(label_31, 2, 0, 1, 1);

        mBoxSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mBoxSpaceSpinBox->setObjectName(QString::fromUtf8("mBoxSpaceSpinBox"));
        mBoxSpaceSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mBoxSpaceSpinBox, 19, 1, 1, 1);

        label_37 = new QLabel(mSpacingColGroupBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_5->addWidget(label_37, 13, 0, 1, 1);

        mSubgroupSideSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mSubgroupSideSpinBox->setObjectName(QString::fromUtf8("mSubgroupSideSpinBox"));
        mSubgroupSideSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mSubgroupSideSpinBox, 13, 1, 1, 1);

        label_5 = new QLabel(mSpacingColGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 3, 0, 1, 1);

        label_18 = new QLabel(mSpacingColGroupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_5->addWidget(label_18, 6, 0, 1, 1);

        mSubgroupIndentSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mSubgroupIndentSpinBox->setObjectName(QString::fromUtf8("mSubgroupIndentSpinBox"));
        mSubgroupIndentSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mSubgroupIndentSpinBox, 10, 1, 1, 1);

        label_8 = new QLabel(mSpacingColGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 17, 0, 1, 1);

        label_12 = new QLabel(mSpacingColGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 20, 0, 1, 1);

        mTitleSpaceBottomSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mTitleSpaceBottomSpinBox->setObjectName(QString::fromUtf8("mTitleSpaceBottomSpinBox"));
        mTitleSpaceBottomSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mTitleSpaceBottomSpinBox, 1, 1, 1, 1);

        mLayerSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mLayerSpaceSpinBox->setObjectName(QString::fromUtf8("mLayerSpaceSpinBox"));
        mLayerSpaceSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mLayerSpaceSpinBox, 9, 1, 1, 1);

        label_7 = new QLabel(mSpacingColGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 16, 0, 1, 1);

        label_19 = new QLabel(mSpacingColGroupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_5->addWidget(label_19, 12, 0, 1, 1);

        label_33 = new QLabel(mSpacingColGroupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_5->addWidget(label_33, 18, 0, 1, 1);

        label_9 = new QLabel(mSpacingColGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 19, 0, 1, 1);

        label_35 = new QLabel(mSpacingColGroupBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_5->addWidget(label_35, 5, 0, 1, 1);

        label_39 = new QLabel(mSpacingColGroupBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_5->addWidget(label_39, 4, 0, 1, 1);

        mGroupSpaceSpinBox = new QgsDoubleSpinBox(mSpacingColGroupBox);
        mGroupSpaceSpinBox->setObjectName(QString::fromUtf8("mGroupSpaceSpinBox"));
        mGroupSpaceSpinBox->setMaximum(9999.989999999999782);

        gridLayout_5->addWidget(mGroupSpaceSpinBox, 3, 1, 1, 1);

        label_40 = new QLabel(mSpacingColGroupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_5->addWidget(label_40, 10, 0, 1, 1);


        mainLayout->addWidget(mSpacingColGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        mTitleLabel->setBuddy(mTitleLineEdit);
        mStrokeWidthLabel->setBuddy(mRasterStrokeWidthSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, mMainPropertiesColGroupBox);
        QWidget::setTabOrder(mMainPropertiesColGroupBox, mTitleLineEdit);
        QWidget::setTabOrder(mTitleLineEdit, mLegendTitleDDBtn);
        QWidget::setTabOrder(mLegendTitleDDBtn, mMapComboBox);
        QWidget::setTabOrder(mMapComboBox, mArrangementCombo);
        QWidget::setTabOrder(mArrangementCombo, mCheckboxResizeContents);
        QWidget::setTabOrder(mCheckboxResizeContents, mWrapCharLineEdit);
        QWidget::setTabOrder(mWrapCharLineEdit, mMaxWidthSpinBox);
        QWidget::setTabOrder(mMaxWidthSpinBox, mLegendAutoWrapWidthDDBtn);
        QWidget::setTabOrder(mLegendAutoWrapWidthDDBtn, mLegendItemColGroupBox);
        QWidget::setTabOrder(mLegendItemColGroupBox, mCheckBoxAutoUpdate);
        QWidget::setTabOrder(mCheckBoxAutoUpdate, mUpdateAllPushButton);
        QWidget::setTabOrder(mUpdateAllPushButton, mItemTreeView);
        QWidget::setTabOrder(mItemTreeView, mExpandAllToolButton);
        QWidget::setTabOrder(mExpandAllToolButton, mCollapseAllToolButton);
        QWidget::setTabOrder(mCollapseAllToolButton, mMoveDownToolButton);
        QWidget::setTabOrder(mMoveDownToolButton, mMoveUpToolButton);
        QWidget::setTabOrder(mMoveUpToolButton, mAddGroupToolButton);
        QWidget::setTabOrder(mAddGroupToolButton, mAddToolButton);
        QWidget::setTabOrder(mAddToolButton, mRemoveToolButton);
        QWidget::setTabOrder(mRemoveToolButton, mEditPushButton);
        QWidget::setTabOrder(mEditPushButton, mLayerExpressionButton);
        QWidget::setTabOrder(mLayerExpressionButton, mCountToolButton);
        QWidget::setTabOrder(mCountToolButton, mExpressionFilterButton);
        QWidget::setTabOrder(mExpressionFilterButton, mFilterByMapCheckBox);
        QWidget::setTabOrder(mFilterByMapCheckBox, mButtonLinkedMaps);
        QWidget::setTabOrder(mButtonLinkedMaps, mFilterLegendByAtlasCheckBox);
        QWidget::setTabOrder(mFilterLegendByAtlasCheckBox, mFontsColGroupBox);
        QWidget::setTabOrder(mFontsColGroupBox, mTitleFontButton);
        QWidget::setTabOrder(mTitleFontButton, mTitleAlignCombo);
        QWidget::setTabOrder(mTitleAlignCombo, mGroupFontButton);
        QWidget::setTabOrder(mGroupFontButton, mGroupAlignCombo);
        QWidget::setTabOrder(mGroupAlignCombo, mLayerFontButton);
        QWidget::setTabOrder(mLayerFontButton, mSubgroupAlignCombo);
        QWidget::setTabOrder(mSubgroupAlignCombo, mItemFontButton);
        QWidget::setTabOrder(mItemFontButton, mItemAlignCombo);
        QWidget::setTabOrder(mItemAlignCombo, mColumnsColGroupBox);
        QWidget::setTabOrder(mColumnsColGroupBox, mColumnCountSpinBox);
        QWidget::setTabOrder(mColumnCountSpinBox, mColumnsDDBtn);
        QWidget::setTabOrder(mColumnsDDBtn, mEqualColumnWidthCheckBox);
        QWidget::setTabOrder(mEqualColumnWidthCheckBox, mSplitLayerCheckBox);
        QWidget::setTabOrder(mSplitLayerCheckBox, mSymbolsColGroupBox);
        QWidget::setTabOrder(mSymbolsColGroupBox, mSymbolWidthSpinBox);
        QWidget::setTabOrder(mSymbolWidthSpinBox, mSymbolHeightSpinBox);
        QWidget::setTabOrder(mSymbolHeightSpinBox, mMinSymbolSizeSpinBox);
        QWidget::setTabOrder(mMinSymbolSizeSpinBox, mMaxSymbolSizeSpinBox);
        QWidget::setTabOrder(mMaxSymbolSizeSpinBox, mRasterStrokeGroupBox);
        QWidget::setTabOrder(mRasterStrokeGroupBox, mRasterStrokeColorButton);
        QWidget::setTabOrder(mRasterStrokeColorButton, mRasterStrokeWidthSpinBox);
        QWidget::setTabOrder(mRasterStrokeWidthSpinBox, mSymbolsColGroupBox_2);
        QWidget::setTabOrder(mSymbolsColGroupBox_2, mWmsLegendWidthSpinBox);
        QWidget::setTabOrder(mWmsLegendWidthSpinBox, mWmsLegendHeightSpinBox);
        QWidget::setTabOrder(mWmsLegendHeightSpinBox, mSpacingColGroupBox);
        QWidget::setTabOrder(mSpacingColGroupBox, mTitleSpaceBottomSpinBox);
        QWidget::setTabOrder(mTitleSpaceBottomSpinBox, mSpaceBelowGroupHeadingSpinBox);
        QWidget::setTabOrder(mSpaceBelowGroupHeadingSpinBox, mGroupSideSpinBox);
        QWidget::setTabOrder(mGroupSideSpinBox, mLayerSpaceSpinBox);
        QWidget::setTabOrder(mLayerSpaceSpinBox, mSpaceBelowSubgroupHeadingSpinBox);
        QWidget::setTabOrder(mSpaceBelowSubgroupHeadingSpinBox, mSubgroupSideSpinBox);
        QWidget::setTabOrder(mSubgroupSideSpinBox, mSymbolSideSpaceSpinBox);
        QWidget::setTabOrder(mSymbolSideSpaceSpinBox, mSymbolSpaceSpinBox);
        QWidget::setTabOrder(mSymbolSpaceSpinBox, mIconLabelSpaceSpinBox);
        QWidget::setTabOrder(mIconLabelSpaceSpinBox, mBoxSpaceSpinBox);
        QWidget::setTabOrder(mBoxSpaceSpinBox, mColumnSpaceSpinBox);
        QWidget::setTabOrder(mColumnSpaceSpinBox, mGroupIndentSpinBox);
        QWidget::setTabOrder(mGroupIndentSpinBox, mSubgroupIndentSpinBox);
        QWidget::setTabOrder(mSubgroupIndentSpinBox, mGroupSpaceSpinBox);

        retranslateUi(QgsLayoutLegendWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutLegendWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutLegendWidgetBase)
    {
        QgsLayoutLegendWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Legend Options", nullptr));
        label_11->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Legend", nullptr));
        mMainPropertiesColGroupBox->setTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Main Properties", nullptr));
        label_15->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Arrangement", nullptr));
        mTitleLabel->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "&Title", nullptr));
        mLegendTitleDDBtn->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "\342\200\246", nullptr));
        mMapLabel->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Map", nullptr));
        mCheckboxResizeContents->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Resize to fit contents", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Word Wrapping", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Wrap text on", nullptr));
        label_16->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Maximum length", nullptr));
        mMaxWidthSpinBox->setPrefix(QString());
        mMaxWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mLegendAutoWrapWidthDDBtn->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "\342\200\246", nullptr));
        mLegendItemColGroupBox->setTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Legend Items", nullptr));
#if QT_CONFIG(tooltip)
        mCheckBoxAutoUpdate->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Keeps the legend contents synchronized with the main application legend. Customization is not possible and must be done in the main application.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxAutoUpdate->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Auto update", nullptr));
#if QT_CONFIG(tooltip)
        mUpdateAllPushButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Update whole legend. Layers are added/removed according to main application legend. User defined labels will be deleted.", nullptr));
#endif // QT_CONFIG(tooltip)
        mUpdateAllPushButton->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Update All", nullptr));
#if QT_CONFIG(tooltip)
        mExpandAllToolButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Expand all", nullptr));
#endif // QT_CONFIG(tooltip)
        mExpandAllToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mCollapseAllToolButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Collapse all", nullptr));
#endif // QT_CONFIG(tooltip)
        mCollapseAllToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mMoveDownToolButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Move item down", nullptr));
#endif // QT_CONFIG(tooltip)
        mMoveDownToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mMoveUpToolButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Move item up", nullptr));
#endif // QT_CONFIG(tooltip)
        mMoveUpToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mAddGroupToolButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Add group", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddGroupToolButton->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mAddToolButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Add layer(s) to legend", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveToolButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Remove selected item(s) from legend", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mEditPushButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Edit selected item properties", nullptr));
#endif // QT_CONFIG(tooltip)
        mEditPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mLayerExpressionButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " Add an expression to the vector layer and each child symbol's label", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mCountToolButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Show feature count for each class of vector layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCountToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mExpressionFilterButton->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Filter expression", nullptr));
#endif // QT_CONFIG(tooltip)
        mExpressionFilterButton->setText(QString());
#if QT_CONFIG(tooltip)
        mFilterByMapCheckBox->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Filter out legend elements that lie outside the linked map item.", nullptr));
#endif // QT_CONFIG(tooltip)
        mFilterByMapCheckBox->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Only show items inside linked maps", nullptr));
        mButtonLinkedMaps->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "...", nullptr));
#if QT_CONFIG(tooltip)
        mFilterLegendByAtlasCheckBox->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Filter out legend elements that lie outside the current atlas feature.", nullptr));
#endif // QT_CONFIG(tooltip)
        mFilterLegendByAtlasCheckBox->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Only show items inside current atlas feature", nullptr));
        mFontsColGroupBox->setTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Fonts and Text Formatting", nullptr));
        mItemFontButton->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Item font", nullptr));
        label_23->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Subgroup Headings</b>", nullptr));
        label_21->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Group Headings</b>", nullptr));
        mGroupFontButton->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Group font", nullptr));
        label_29->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Alignment", nullptr));
        label_19_alignment->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Alignment", nullptr));
        label_27->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Legend Title</b>", nullptr));
        label_28->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Font", nullptr));
        label_24->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Font", nullptr));
        label_25->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Item Labels</b>", nullptr));
        mTitleFontButton->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Title font", nullptr));
        label_20->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Alignment", nullptr));
        label_26->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Font", nullptr));
        label_22->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Font", nullptr));
        mLayerFontButton->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Subgroup font", nullptr));
        label_18_alignment->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Alignment", nullptr));
        mColumnsColGroupBox->setTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Columns", nullptr));
        mColumnCountSpinBox->setPrefix(QString());
        label_2->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Count", nullptr));
        mColumnsDDBtn->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "\342\200\246", nullptr));
        mEqualColumnWidthCheckBox->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Equal column widths", nullptr));
#if QT_CONFIG(tooltip)
        mSplitLayerCheckBox->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Allow splitting layer items into multiple columns.", nullptr));
#endif // QT_CONFIG(tooltip)
        mSplitLayerCheckBox->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Split layers", nullptr));
        mSymbolsColGroupBox->setTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Symbol", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Symbol width", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Symbol height", nullptr));
        mSymbolHeightSpinBox->setPrefix(QString());
        mSymbolHeightSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mRasterStrokeGroupBox->setTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Draw stroke for raster symbols", nullptr));
        label_17->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Stroke color", nullptr));
        mRasterStrokeColorButton->setText(QString());
        mStrokeWidthLabel->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Thickness", nullptr));
        mRasterStrokeWidthSpinBox->setSpecialValueText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Hairline", nullptr));
        mRasterStrokeWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mMaxSymbolSizeSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mMaxSymbolSizeLabel->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Max symbol size", nullptr));
        mMinSymbolSizeLabel->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Min symbol size", nullptr));
        mMinSymbolSizeSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mSymbolWidthSpinBox->setPrefix(QString());
        mSymbolWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mSymbolsColGroupBox_2->setTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "WMS LegendGraphic", nullptr));
        label_13->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Legend width", nullptr));
        mWmsLegendWidthSpinBox->setPrefix(QString());
        mWmsLegendWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        label_14->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Legend height", nullptr));
        mWmsLegendHeightSpinBox->setPrefix(QString());
        mWmsLegendHeightSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mSpacingColGroupBox->setTitle(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Spacing", nullptr));
        label_34->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Legend Items</b>", nullptr));
        mColumnSpaceSpinBox->setPrefix(QString());
        mColumnSpaceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mSymbolSideSpaceSpinBox->setPrefix(QString());
        mSymbolSideSpaceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space below title.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space below", nullptr));
#if QT_CONFIG(tooltip)
        label_30->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space above text using group style.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_30->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Side of heading", nullptr));
        label_31s->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Legend Title</b>", nullptr));
        mSymbolSpaceSpinBox->setPrefix(QString());
        mSymbolSpaceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        label_32->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Subgroups</b>", nullptr));
        mSpaceBelowSubgroupHeadingSpinBox->setPrefix(QString());
        mSpaceBelowSubgroupHeadingSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space above text using subgroup style.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Above subgroup", nullptr));
        mGroupSideSpinBox->setPrefix(QString());
        mGroupSideSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
#if QT_CONFIG(tooltip)
        label_38->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space above symbol and symbol label.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_38->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space before side of symbol", nullptr));
        mIconLabelSpaceSpinBox->setPrefix(QString());
        mIconLabelSpaceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mGroupIndentSpinBox->setPrefix(QString());
        mGroupIndentSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        label_36->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Subgroup Headings</b>", nullptr));
        mSpaceBelowGroupHeadingSpinBox->setPrefix(QString());
        mSpaceBelowGroupHeadingSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        label_31->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Groups</b>", nullptr));
        mBoxSpaceSpinBox->setPrefix(QString());
        mBoxSpaceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
#if QT_CONFIG(tooltip)
        label_37->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space above text using group style.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_37->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Side of heading", nullptr));
        mSubgroupSideSpinBox->setPrefix(QString());
        mSubgroupSideSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space above text using group style.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Above group", nullptr));
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space above text using group style.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_18->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Below heading", nullptr));
        mSubgroupIndentSpinBox->setPrefix(QString());
        mSubgroupIndentSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space between symbol icon and symbol label (symbol label left margin).", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Symbol label space", nullptr));
        label_12->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Column space", nullptr));
#if QT_CONFIG(tooltip)
        mTitleSpaceBottomSpinBox->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space below title.", nullptr));
#endif // QT_CONFIG(tooltip)
        mTitleSpaceBottomSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
        mLayerSpaceSpinBox->setPrefix(QString());
        mLayerSpaceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space above symbol and symbol label.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space between symbols", nullptr));
#if QT_CONFIG(tooltip)
        label_19->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space above text using group style.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_19->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Below heading", nullptr));
        label_33->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>General</b>", nullptr));
        label_9->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Box space", nullptr));
        label_35->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "<b>Group Headings</b>", nullptr));
#if QT_CONFIG(tooltip)
        label_39->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Additional space ", nullptr));
#endif // QT_CONFIG(tooltip)
        label_39->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Indent of group items", nullptr));
        mGroupSpaceSpinBox->setPrefix(QString());
        mGroupSpaceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLegendWidgetBase", " mm", nullptr));
#if QT_CONFIG(tooltip)
        label_40->setToolTip(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Space above text using subgroup style.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_40->setText(QCoreApplication::translate("QgsLayoutLegendWidgetBase", "Indent of subgroup items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutLegendWidgetBase: public Ui_QgsLayoutLegendWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTLEGENDWIDGETBASE_H
