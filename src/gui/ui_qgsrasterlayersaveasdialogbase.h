/********************************************************************************
** Form generated from reading UI file 'qgsrasterlayersaveasdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERSAVEASDIALOGBASE_H
#define UI_QGSRASTERLAYERSAVEASDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsrasterformatsaveoptionswidget.h"
#include "qgsrasterpyramidsoptionswidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLayerSaveAsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QgsFileWidget *mFilename;
    QLabel *mModeLabel;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mRawModeRadioButton;
    QRadioButton *mRenderedModeRadioButton;
    QSpacerItem *horizontalSpacer;
    QLabel *mFormatLabel;
    QgsProjectionSelectionWidget *mCrsSelector;
    QHBoxLayout *horizontalLayout;
    QComboBox *mFormatComboBox;
    QCheckBox *mTileModeCheckBox;
    QLabel *label_2;
    QLabel *mSaveAsLabel;
    QLabel *label_3;
    QLineEdit *mLayerName;
    QgsScrollArea *mScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsCollapsibleGroupBox *mResolutionGroupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QRadioButton *mResolutionRadioButton;
    QLineEdit *mXResolutionLineEdit;
    QRadioButton *mSizeRadioButton;
    QLineEdit *mColumnsLineEdit;
    QLabel *mRowsLabel;
    QLineEdit *mYResolutionLineEdit;
    QLineEdit *mRowsLineEdit;
    QPushButton *mOriginalResolutionPushButton;
    QPushButton *mOriginalSizePushButton;
    QLabel *label;
    QgsCollapsibleGroupBox *mTilesGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mMaximumSizeXLabel;
    QLineEdit *mMaximumSizeXLineEdit;
    QLabel *mMaximumSizeYLabel;
    QLineEdit *mMaximumSizeYLineEdit;
    QgsCollapsibleGroupBox *mCreateOptionsGroupBox;
    QGridLayout *gridLayout_5;
    QgsRasterFormatSaveOptionsWidget *mCreationOptionsWidget;
    QgsCollapsibleGroupBox *mPyramidsGroupBox;
    QGridLayout *gridLayout_3;
    QgsRasterPyramidsOptionsWidget *mPyramidsOptionsWidget;
    QFrame *line;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mPyramidResolutionsLabel;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *mPyramidResolutionsLineEdit;
    QCheckBox *mPyramidsUseExistingCheckBox;
    QgsCollapsibleGroupBox *mNoDataGroupBox;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout;
    QPushButton *mRemoveSelectedNoDataToolButton;
    QPushButton *mAddNoDataManuallyToolButton;
    QTableWidget *mNoDataTableWidget;
    QPushButton *mLoadTransparentNoDataToolButton;
    QPushButton *mRemoveAllNoDataToolButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QDialogButtonBox *mHelpButtonBox;
    QSpacerItem *horizontalSpacer1;
    QCheckBox *mAddToCanvas;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsRasterLayerSaveAsDialogBase)
    {
        if (QgsRasterLayerSaveAsDialogBase->objectName().isEmpty())
            QgsRasterLayerSaveAsDialogBase->setObjectName(QString::fromUtf8("QgsRasterLayerSaveAsDialogBase"));
        QgsRasterLayerSaveAsDialogBase->resize(575, 610);
        verticalLayout = new QVBoxLayout(QgsRasterLayerSaveAsDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mFilename = new QgsFileWidget(QgsRasterLayerSaveAsDialogBase);
        mFilename->setObjectName(QString::fromUtf8("mFilename"));
        mFilename->setEnabled(true);
        mFilename->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_4->addWidget(mFilename, 2, 1, 1, 1);

        mModeLabel = new QLabel(QgsRasterLayerSaveAsDialogBase);
        mModeLabel->setObjectName(QString::fromUtf8("mModeLabel"));

        gridLayout_4->addWidget(mModeLabel, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mRawModeRadioButton = new QRadioButton(QgsRasterLayerSaveAsDialogBase);
        mRawModeRadioButton->setObjectName(QString::fromUtf8("mRawModeRadioButton"));
        mRawModeRadioButton->setChecked(true);

        horizontalLayout_6->addWidget(mRawModeRadioButton);

        mRenderedModeRadioButton = new QRadioButton(QgsRasterLayerSaveAsDialogBase);
        mRenderedModeRadioButton->setObjectName(QString::fromUtf8("mRenderedModeRadioButton"));
        mRenderedModeRadioButton->setChecked(false);

        horizontalLayout_6->addWidget(mRenderedModeRadioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout_4->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        mFormatLabel = new QLabel(QgsRasterLayerSaveAsDialogBase);
        mFormatLabel->setObjectName(QString::fromUtf8("mFormatLabel"));

        gridLayout_4->addWidget(mFormatLabel, 1, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsRasterLayerSaveAsDialogBase);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFormatComboBox = new QComboBox(QgsRasterLayerSaveAsDialogBase);
        mFormatComboBox->setObjectName(QString::fromUtf8("mFormatComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFormatComboBox->sizePolicy().hasHeightForWidth());
        mFormatComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mFormatComboBox);

        mTileModeCheckBox = new QCheckBox(QgsRasterLayerSaveAsDialogBase);
        mTileModeCheckBox->setObjectName(QString::fromUtf8("mTileModeCheckBox"));

        horizontalLayout->addWidget(mTileModeCheckBox);


        gridLayout_4->addLayout(horizontalLayout, 1, 1, 1, 1);

        label_2 = new QLabel(QgsRasterLayerSaveAsDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(label_2, 4, 0, 1, 1);

        mSaveAsLabel = new QLabel(QgsRasterLayerSaveAsDialogBase);
        mSaveAsLabel->setObjectName(QString::fromUtf8("mSaveAsLabel"));

        gridLayout_4->addWidget(mSaveAsLabel, 2, 0, 1, 1);

        label_3 = new QLabel(QgsRasterLayerSaveAsDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 3, 0, 1, 1);

        mLayerName = new QLineEdit(QgsRasterLayerSaveAsDialogBase);
        mLayerName->setObjectName(QString::fromUtf8("mLayerName"));

        gridLayout_4->addWidget(mLayerName, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        mScrollArea = new QgsScrollArea(QgsRasterLayerSaveAsDialogBase);
        mScrollArea->setObjectName(QString::fromUtf8("mScrollArea"));
        mScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -157, 538, 602));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mExtentGroupBox = new QgsExtentGroupBox(scrollAreaWidgetContents);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mExtentGroupBox->sizePolicy().hasHeightForWidth());
        mExtentGroupBox->setSizePolicy(sizePolicy2);
        mExtentGroupBox->setAutoFillBackground(false);
        mExtentGroupBox->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        mExtentGroupBox->setCheckable(false);
        mExtentGroupBox->setProperty("collapsed", QVariant(false));
        mExtentGroupBox->setProperty("saveCollapsedState", QVariant(true));

        verticalLayout_5->addWidget(mExtentGroupBox);

        mResolutionGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mResolutionGroupBox->setObjectName(QString::fromUtf8("mResolutionGroupBox"));
        sizePolicy2.setHeightForWidth(mResolutionGroupBox->sizePolicy().hasHeightForWidth());
        mResolutionGroupBox->setSizePolicy(sizePolicy2);
        mResolutionGroupBox->setFlat(false);
        mResolutionGroupBox->setCheckable(false);
        mResolutionGroupBox->setProperty("collapsed", QVariant(false));
        mResolutionGroupBox->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(mResolutionGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mResolutionRadioButton = new QRadioButton(mResolutionGroupBox);
        mResolutionRadioButton->setObjectName(QString::fromUtf8("mResolutionRadioButton"));
        mResolutionRadioButton->setChecked(true);

        gridLayout_2->addWidget(mResolutionRadioButton, 0, 0, 1, 1);

        mXResolutionLineEdit = new QLineEdit(mResolutionGroupBox);
        mXResolutionLineEdit->setObjectName(QString::fromUtf8("mXResolutionLineEdit"));

        gridLayout_2->addWidget(mXResolutionLineEdit, 0, 1, 1, 1);

        mSizeRadioButton = new QRadioButton(mResolutionGroupBox);
        mSizeRadioButton->setObjectName(QString::fromUtf8("mSizeRadioButton"));

        gridLayout_2->addWidget(mSizeRadioButton, 1, 0, 1, 1);

        mColumnsLineEdit = new QLineEdit(mResolutionGroupBox);
        mColumnsLineEdit->setObjectName(QString::fromUtf8("mColumnsLineEdit"));

        gridLayout_2->addWidget(mColumnsLineEdit, 1, 1, 1, 1);

        mRowsLabel = new QLabel(mResolutionGroupBox);
        mRowsLabel->setObjectName(QString::fromUtf8("mRowsLabel"));

        gridLayout_2->addWidget(mRowsLabel, 1, 2, 1, 1);

        mYResolutionLineEdit = new QLineEdit(mResolutionGroupBox);
        mYResolutionLineEdit->setObjectName(QString::fromUtf8("mYResolutionLineEdit"));

        gridLayout_2->addWidget(mYResolutionLineEdit, 0, 3, 1, 1);

        mRowsLineEdit = new QLineEdit(mResolutionGroupBox);
        mRowsLineEdit->setObjectName(QString::fromUtf8("mRowsLineEdit"));

        gridLayout_2->addWidget(mRowsLineEdit, 1, 3, 1, 1);

        mOriginalResolutionPushButton = new QPushButton(mResolutionGroupBox);
        mOriginalResolutionPushButton->setObjectName(QString::fromUtf8("mOriginalResolutionPushButton"));

        gridLayout_2->addWidget(mOriginalResolutionPushButton, 0, 4, 1, 1);

        mOriginalSizePushButton = new QPushButton(mResolutionGroupBox);
        mOriginalSizePushButton->setObjectName(QString::fromUtf8("mOriginalSizePushButton"));

        gridLayout_2->addWidget(mOriginalSizePushButton, 1, 4, 1, 1);

        label = new QLabel(mResolutionGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_5->addWidget(mResolutionGroupBox);

        mTilesGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mTilesGroupBox->setObjectName(QString::fromUtf8("mTilesGroupBox"));
        sizePolicy2.setHeightForWidth(mTilesGroupBox->sizePolicy().hasHeightForWidth());
        mTilesGroupBox->setSizePolicy(sizePolicy2);
        mTilesGroupBox->setCheckable(false);
        mTilesGroupBox->setChecked(false);
        mTilesGroupBox->setProperty("collapsed", QVariant(false));
        mTilesGroupBox->setProperty("saveCollapsedState", QVariant(true));
        horizontalLayout_5 = new QHBoxLayout(mTilesGroupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mMaximumSizeXLabel = new QLabel(mTilesGroupBox);
        mMaximumSizeXLabel->setObjectName(QString::fromUtf8("mMaximumSizeXLabel"));

        horizontalLayout_5->addWidget(mMaximumSizeXLabel);

        mMaximumSizeXLineEdit = new QLineEdit(mTilesGroupBox);
        mMaximumSizeXLineEdit->setObjectName(QString::fromUtf8("mMaximumSizeXLineEdit"));

        horizontalLayout_5->addWidget(mMaximumSizeXLineEdit);

        mMaximumSizeYLabel = new QLabel(mTilesGroupBox);
        mMaximumSizeYLabel->setObjectName(QString::fromUtf8("mMaximumSizeYLabel"));

        horizontalLayout_5->addWidget(mMaximumSizeYLabel);

        mMaximumSizeYLineEdit = new QLineEdit(mTilesGroupBox);
        mMaximumSizeYLineEdit->setObjectName(QString::fromUtf8("mMaximumSizeYLineEdit"));

        horizontalLayout_5->addWidget(mMaximumSizeYLineEdit);


        verticalLayout_5->addWidget(mTilesGroupBox);

        mCreateOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mCreateOptionsGroupBox->setObjectName(QString::fromUtf8("mCreateOptionsGroupBox"));
        sizePolicy2.setHeightForWidth(mCreateOptionsGroupBox->sizePolicy().hasHeightForWidth());
        mCreateOptionsGroupBox->setSizePolicy(sizePolicy2);
        mCreateOptionsGroupBox->setCheckable(true);
        mCreateOptionsGroupBox->setChecked(false);
        mCreateOptionsGroupBox->setProperty("collapsed", QVariant(false));
        mCreateOptionsGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_5 = new QGridLayout(mCreateOptionsGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mCreationOptionsWidget = new QgsRasterFormatSaveOptionsWidget(mCreateOptionsGroupBox);
        mCreationOptionsWidget->setObjectName(QString::fromUtf8("mCreationOptionsWidget"));

        gridLayout_5->addWidget(mCreationOptionsWidget, 0, 0, 1, 1);


        verticalLayout_5->addWidget(mCreateOptionsGroupBox);

        mPyramidsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mPyramidsGroupBox->setObjectName(QString::fromUtf8("mPyramidsGroupBox"));
        sizePolicy2.setHeightForWidth(mPyramidsGroupBox->sizePolicy().hasHeightForWidth());
        mPyramidsGroupBox->setSizePolicy(sizePolicy2);
        mPyramidsGroupBox->setCheckable(true);
        mPyramidsGroupBox->setChecked(false);
        mPyramidsGroupBox->setProperty("collapsed", QVariant(false));
        mPyramidsGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_3 = new QGridLayout(mPyramidsGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mPyramidsOptionsWidget = new QgsRasterPyramidsOptionsWidget(mPyramidsGroupBox);
        mPyramidsOptionsWidget->setObjectName(QString::fromUtf8("mPyramidsOptionsWidget"));

        gridLayout_3->addWidget(mPyramidsOptionsWidget, 3, 0, 1, 1);

        line = new QFrame(mPyramidsGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mPyramidResolutionsLabel = new QLabel(mPyramidsGroupBox);
        mPyramidResolutionsLabel->setObjectName(QString::fromUtf8("mPyramidResolutionsLabel"));

        horizontalLayout_9->addWidget(mPyramidResolutionsLabel);

        horizontalSpacer_5 = new QSpacerItem(10, 0, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        mPyramidResolutionsLineEdit = new QLineEdit(mPyramidsGroupBox);
        mPyramidResolutionsLineEdit->setObjectName(QString::fromUtf8("mPyramidResolutionsLineEdit"));
        mPyramidResolutionsLineEdit->setAutoFillBackground(false);
        mPyramidResolutionsLineEdit->setFrame(false);
        mPyramidResolutionsLineEdit->setReadOnly(true);

        horizontalLayout_9->addWidget(mPyramidResolutionsLineEdit);


        gridLayout_3->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        mPyramidsUseExistingCheckBox = new QCheckBox(mPyramidsGroupBox);
        mPyramidsUseExistingCheckBox->setObjectName(QString::fromUtf8("mPyramidsUseExistingCheckBox"));

        gridLayout_3->addWidget(mPyramidsUseExistingCheckBox, 0, 0, 1, 1);


        verticalLayout_5->addWidget(mPyramidsGroupBox);

        mNoDataGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mNoDataGroupBox->setObjectName(QString::fromUtf8("mNoDataGroupBox"));
        sizePolicy2.setHeightForWidth(mNoDataGroupBox->sizePolicy().hasHeightForWidth());
        mNoDataGroupBox->setSizePolicy(sizePolicy2);
        mNoDataGroupBox->setCheckable(true);
        mNoDataGroupBox->setChecked(false);
        mNoDataGroupBox->setProperty("collapsed", QVariant(false));
        mNoDataGroupBox->setProperty("saveCollapsedState", QVariant(true));
        horizontalLayout_7 = new QHBoxLayout(mNoDataGroupBox);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mRemoveSelectedNoDataToolButton = new QPushButton(mNoDataGroupBox);
        mRemoveSelectedNoDataToolButton->setObjectName(QString::fromUtf8("mRemoveSelectedNoDataToolButton"));
        sizePolicy1.setHeightForWidth(mRemoveSelectedNoDataToolButton->sizePolicy().hasHeightForWidth());
        mRemoveSelectedNoDataToolButton->setSizePolicy(sizePolicy1);
        mRemoveSelectedNoDataToolButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveSelectedNoDataToolButton->setIcon(icon);

        gridLayout->addWidget(mRemoveSelectedNoDataToolButton, 2, 1, 1, 1);

        mAddNoDataManuallyToolButton = new QPushButton(mNoDataGroupBox);
        mAddNoDataManuallyToolButton->setObjectName(QString::fromUtf8("mAddNoDataManuallyToolButton"));
        sizePolicy1.setHeightForWidth(mAddNoDataManuallyToolButton->sizePolicy().hasHeightForWidth());
        mAddNoDataManuallyToolButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddNoDataManuallyToolButton->setIcon(icon1);

        gridLayout->addWidget(mAddNoDataManuallyToolButton, 2, 0, 1, 1);

        mNoDataTableWidget = new QTableWidget(mNoDataGroupBox);
        mNoDataTableWidget->setObjectName(QString::fromUtf8("mNoDataTableWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mNoDataTableWidget->sizePolicy().hasHeightForWidth());
        mNoDataTableWidget->setSizePolicy(sizePolicy3);
        mNoDataTableWidget->setMinimumSize(QSize(0, 0));
        mNoDataTableWidget->horizontalHeader()->setMinimumSectionSize(200);
        mNoDataTableWidget->horizontalHeader()->setDefaultSectionSize(250);

        gridLayout->addWidget(mNoDataTableWidget, 1, 0, 1, 5);

        mLoadTransparentNoDataToolButton = new QPushButton(mNoDataGroupBox);
        mLoadTransparentNoDataToolButton->setObjectName(QString::fromUtf8("mLoadTransparentNoDataToolButton"));
        sizePolicy1.setHeightForWidth(mLoadTransparentNoDataToolButton->sizePolicy().hasHeightForWidth());
        mLoadTransparentNoDataToolButton->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLoadTransparentNoDataToolButton->setIcon(icon2);

        gridLayout->addWidget(mLoadTransparentNoDataToolButton, 2, 2, 1, 1);

        mRemoveAllNoDataToolButton = new QPushButton(mNoDataGroupBox);
        mRemoveAllNoDataToolButton->setObjectName(QString::fromUtf8("mRemoveAllNoDataToolButton"));
        sizePolicy1.setHeightForWidth(mRemoveAllNoDataToolButton->sizePolicy().hasHeightForWidth());
        mRemoveAllNoDataToolButton->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAllNoDataToolButton->setIcon(icon3);

        gridLayout->addWidget(mRemoveAllNoDataToolButton, 2, 3, 1, 1);


        horizontalLayout_7->addLayout(gridLayout);


        verticalLayout_5->addWidget(mNoDataGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer);

        mScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(mScrollArea);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mHelpButtonBox = new QDialogButtonBox(QgsRasterLayerSaveAsDialogBase);
        mHelpButtonBox->setObjectName(QString::fromUtf8("mHelpButtonBox"));
        mHelpButtonBox->setOrientation(Qt::Orientation::Horizontal);
        mHelpButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Help);

        horizontalLayout_10->addWidget(mHelpButtonBox);

        horizontalSpacer1 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer1);

        mAddToCanvas = new QCheckBox(QgsRasterLayerSaveAsDialogBase);
        mAddToCanvas->setObjectName(QString::fromUtf8("mAddToCanvas"));
        mAddToCanvas->setChecked(true);

        horizontalLayout_10->addWidget(mAddToCanvas);

        mButtonBox = new QDialogButtonBox(QgsRasterLayerSaveAsDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Orientation::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        horizontalLayout_10->addWidget(mButtonBox);


        verticalLayout->addLayout(horizontalLayout_10);

#if QT_CONFIG(shortcut)
        mFormatLabel->setBuddy(mFormatComboBox);
        mSaveAsLabel->setBuddy(mFilename);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mRawModeRadioButton, mRenderedModeRadioButton);
        QWidget::setTabOrder(mRenderedModeRadioButton, mFormatComboBox);
        QWidget::setTabOrder(mFormatComboBox, mTileModeCheckBox);
        QWidget::setTabOrder(mTileModeCheckBox, mFilename);
        QWidget::setTabOrder(mFilename, mLayerName);
        QWidget::setTabOrder(mLayerName, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mScrollArea);
        QWidget::setTabOrder(mScrollArea, mResolutionRadioButton);
        QWidget::setTabOrder(mResolutionRadioButton, mXResolutionLineEdit);
        QWidget::setTabOrder(mXResolutionLineEdit, mYResolutionLineEdit);
        QWidget::setTabOrder(mYResolutionLineEdit, mOriginalResolutionPushButton);
        QWidget::setTabOrder(mOriginalResolutionPushButton, mSizeRadioButton);
        QWidget::setTabOrder(mSizeRadioButton, mColumnsLineEdit);
        QWidget::setTabOrder(mColumnsLineEdit, mRowsLineEdit);
        QWidget::setTabOrder(mRowsLineEdit, mOriginalSizePushButton);
        QWidget::setTabOrder(mOriginalSizePushButton, mMaximumSizeXLineEdit);
        QWidget::setTabOrder(mMaximumSizeXLineEdit, mMaximumSizeYLineEdit);
        QWidget::setTabOrder(mMaximumSizeYLineEdit, mCreateOptionsGroupBox);
        QWidget::setTabOrder(mCreateOptionsGroupBox, mPyramidsGroupBox);
        QWidget::setTabOrder(mPyramidsGroupBox, mPyramidsUseExistingCheckBox);
        QWidget::setTabOrder(mPyramidsUseExistingCheckBox, mPyramidResolutionsLineEdit);
        QWidget::setTabOrder(mPyramidResolutionsLineEdit, mNoDataGroupBox);
        QWidget::setTabOrder(mNoDataGroupBox, mNoDataTableWidget);
        QWidget::setTabOrder(mNoDataTableWidget, mAddNoDataManuallyToolButton);
        QWidget::setTabOrder(mAddNoDataManuallyToolButton, mRemoveSelectedNoDataToolButton);
        QWidget::setTabOrder(mRemoveSelectedNoDataToolButton, mLoadTransparentNoDataToolButton);
        QWidget::setTabOrder(mLoadTransparentNoDataToolButton, mRemoveAllNoDataToolButton);
        QWidget::setTabOrder(mRemoveAllNoDataToolButton, mAddToCanvas);

        retranslateUi(QgsRasterLayerSaveAsDialogBase);

        QMetaObject::connectSlotsByName(QgsRasterLayerSaveAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterLayerSaveAsDialogBase)
    {
        QgsRasterLayerSaveAsDialogBase->setWindowTitle(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Save Raster Layer as\342\200\246", nullptr));
        mModeLabel->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Output mode", nullptr));
#if QT_CONFIG(tooltip)
        mRawModeRadioButton->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Write out raw raster layer data. Optionally user defined NoData values may be applied.", nullptr));
#endif // QT_CONFIG(tooltip)
        mRawModeRadioButton->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Raw data", nullptr));
#if QT_CONFIG(tooltip)
        mRenderedModeRadioButton->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Write out 3 bands RGB image rendered using current layer style.", nullptr));
#endif // QT_CONFIG(tooltip)
        mRenderedModeRadioButton->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Rendered image", nullptr));
        mFormatLabel->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Format", nullptr));
#if QT_CONFIG(tooltip)
        mTileModeCheckBox->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Create GDAL Virtual Format composed of multiple\n"
"datasets with maximum width and height specified below.", nullptr));
#endif // QT_CONFIG(tooltip)
        mTileModeCheckBox->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Create VRT", nullptr));
        label_2->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "CRS", nullptr));
        mSaveAsLabel->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "File name", nullptr));
        label_3->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Layer name", nullptr));
        mExtentGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Extent", nullptr));
        mResolutionGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Resolution", nullptr));
        mResolutionRadioButton->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Horizontal", nullptr));
        mSizeRadioButton->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Columns", nullptr));
        mRowsLabel->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Rows", nullptr));
        mOriginalResolutionPushButton->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Layer Resolution", nullptr));
        mOriginalSizePushButton->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Layer Size", nullptr));
        label->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Vertical", nullptr));
        mTilesGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "VRT Tiles", nullptr));
#if QT_CONFIG(tooltip)
        mMaximumSizeXLabel->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of columns in one tile.", nullptr));
#endif // QT_CONFIG(tooltip)
        mMaximumSizeXLabel->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Max columns", nullptr));
#if QT_CONFIG(tooltip)
        mMaximumSizeXLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of columns in one tile.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mMaximumSizeYLabel->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of rows in one tile.", nullptr));
#endif // QT_CONFIG(tooltip)
        mMaximumSizeYLabel->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Max rows", nullptr));
#if QT_CONFIG(tooltip)
        mMaximumSizeYLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of rows in one tile.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCreateOptionsGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Create Options", nullptr));
        mPyramidsGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Pyramids", nullptr));
        mPyramidResolutionsLabel->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Resolutions", nullptr));
#if QT_CONFIG(tooltip)
        mPyramidResolutionsLineEdit->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Pyramid resolutions corresponding to levels given", nullptr));
#endif // QT_CONFIG(tooltip)
        mPyramidResolutionsLineEdit->setText(QString());
        mPyramidsUseExistingCheckBox->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Use existing", nullptr));
#if QT_CONFIG(tooltip)
        mNoDataGroupBox->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Additional NoData values. The specified values will be set to NoData in output raster.", nullptr));
#endif // QT_CONFIG(tooltip)
        mNoDataGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "NoData values", nullptr));
#if QT_CONFIG(tooltip)
        mRemoveSelectedNoDataToolButton->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Remove selected row", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveSelectedNoDataToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mAddNoDataManuallyToolButton->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Add values manually", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddNoDataManuallyToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mLoadTransparentNoDataToolButton->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Load user defined fully transparent (100%) values ", nullptr));
#endif // QT_CONFIG(tooltip)
        mLoadTransparentNoDataToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveAllNoDataToolButton->setToolTip(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Clear all", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveAllNoDataToolButton->setText(QString());
        mAddToCanvas->setText(QCoreApplication::translate("QgsRasterLayerSaveAsDialogBase", "Add saved file to map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerSaveAsDialogBase: public Ui_QgsRasterLayerSaveAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLAYERSAVEASDIALOGBASE_H
