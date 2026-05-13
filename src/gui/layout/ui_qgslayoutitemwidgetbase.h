/********************************************************************************
** Form generated from reading UI file 'qgslayoutitemwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTITEMWIDGETBASE_H
#define UI_QGSLAYOUTITEMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgsopacitywidget.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsratiolockbutton.h"
#include "qgsspinbox.h"
#include "qgsvariableeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutItemWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBoxBasic *mGeneralOptionsGroupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *mHeightSpin;
    QLabel *mYLabel;
    QgsLayoutUnitsComboBox *mPosUnitsComboBox;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QgsPropertyOverrideButton *mYPositionDDBtn;
    QLabel *mPageLabel;
    QgsPropertyOverrideButton *mXPositionDDBtn;
    QLabel *mHeightLabel;
    QHBoxLayout *_2;
    QgsRatioLockButton *mPosLockAspectRatio;
    QgsDoubleSpinBox *mXPosSpin;
    QgsDoubleSpinBox *mWidthSpin;
    QgsSpinBox *mPageSpinBox;
    QLabel *mXLabel;
    QgsPropertyOverrideButton *mHeightDDBtn;
    QLabel *mWidthLabel;
    QgsDoubleSpinBox *mYPosSpin;
    QHBoxLayout *_3;
    QgsRatioLockButton *mSizeLockAspectRatio;
    QgsLayoutUnitsComboBox *mSizeUnitsComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QRadioButton *mUpperLeftRadioButton;
    QRadioButton *mUpperMiddleRadioButton;
    QRadioButton *mUpperRightRadioButton;
    QRadioButton *mMiddleRightRadioButton;
    QRadioButton *mMiddleRadioButton;
    QRadioButton *mLowerRightRadioButton;
    QRadioButton *mLowerLeftRadioButton;
    QRadioButton *mLowerMiddleRadioButton;
    QRadioButton *mMiddleLeftRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QgsCollapsibleGroupBoxBasic *mTransformsGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mItemRotationSpinBox;
    QgsPropertyOverrideButton *mItemRotationDDBtn;
    QgsCollapsibleGroupBoxBasic *mFrameGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QgsColorButton *mFrameColorButton;
    QgsPropertyOverrideButton *mItemFrameColorDDBtn;
    QLabel *mStrokeWidthLabel;
    QHBoxLayout *horizontalLayout_8;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsLayoutUnitsComboBox *mStrokeUnitsComboBox;
    QLabel *label_8;
    QgsPenJoinStyleComboBox *mFrameJoinStyleCombo;
    QgsCollapsibleGroupBoxBasic *mBackgroundGroupBox;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButton *mBackgroundColorButton;
    QgsPropertyOverrideButton *mItemBackgroundColorDDBtn;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_8;
    QLabel *mItemIdLabel;
    QLineEdit *mItemIdLineEdit;
    QgsCollapsibleGroupBoxBasic *groupRendering;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QgsBlendModeComboBox *mBlendModeCombo;
    QgsPropertyOverrideButton *mBlendModeDDBtn;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mExcludeFromPrintsCheckBox;
    QgsPropertyOverrideButton *mExcludePrintsDDBtn;
    QLabel *labelBlendMode;
    QLabel *labelTransparency;
    QHBoxLayout *horizontalLayout_2;
    QgsOpacityWidget *mOpacityWidget;
    QgsPropertyOverrideButton *mOpacityDDBtn;
    QLabel *label_5;
    QComboBox *mExportGroupNameCombo;
    QgsCollapsibleGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QgsVariableEditorWidget *mVariableEditor;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayoutItemWidgetBase)
    {
        if (QgsLayoutItemWidgetBase->objectName().isEmpty())
            QgsLayoutItemWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutItemWidgetBase"));
        QgsLayoutItemWidgetBase->resize(634, 1812);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutItemWidgetBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mGeneralOptionsGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        mGeneralOptionsGroupBox->setObjectName(QString::fromUtf8("mGeneralOptionsGroupBox"));
        mGeneralOptionsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGeneralOptionsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mGeneralOptionsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout = new QVBoxLayout(mGeneralOptionsGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mHeightSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mHeightSpin->setObjectName(QString::fromUtf8("mHeightSpin"));
        mHeightSpin->setDecimals(3);
        mHeightSpin->setMaximum(9999999.000000000000000);
        mHeightSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mHeightSpin, 4, 1, 1, 2);

        mYLabel = new QLabel(mGeneralOptionsGroupBox);
        mYLabel->setObjectName(QString::fromUtf8("mYLabel"));

        gridLayout_3->addWidget(mYLabel, 2, 0, 1, 1);

        mPosUnitsComboBox = new QgsLayoutUnitsComboBox(mGeneralOptionsGroupBox);
        mPosUnitsComboBox->setObjectName(QString::fromUtf8("mPosUnitsComboBox"));

        gridLayout_3->addWidget(mPosUnitsComboBox, 1, 5, 2, 1);

        mWidthDDBtn = new QgsPropertyOverrideButton(mGeneralOptionsGroupBox);
        mWidthDDBtn->setObjectName(QString::fromUtf8("mWidthDDBtn"));

        gridLayout_3->addWidget(mWidthDDBtn, 3, 3, 1, 1);

        mYPositionDDBtn = new QgsPropertyOverrideButton(mGeneralOptionsGroupBox);
        mYPositionDDBtn->setObjectName(QString::fromUtf8("mYPositionDDBtn"));

        gridLayout_3->addWidget(mYPositionDDBtn, 2, 3, 1, 1);

        mPageLabel = new QLabel(mGeneralOptionsGroupBox);
        mPageLabel->setObjectName(QString::fromUtf8("mPageLabel"));

        gridLayout_3->addWidget(mPageLabel, 0, 0, 1, 1);

        mXPositionDDBtn = new QgsPropertyOverrideButton(mGeneralOptionsGroupBox);
        mXPositionDDBtn->setObjectName(QString::fromUtf8("mXPositionDDBtn"));

        gridLayout_3->addWidget(mXPositionDDBtn, 1, 3, 1, 1);

        mHeightLabel = new QLabel(mGeneralOptionsGroupBox);
        mHeightLabel->setObjectName(QString::fromUtf8("mHeightLabel"));

        gridLayout_3->addWidget(mHeightLabel, 4, 0, 1, 1);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mPosLockAspectRatio = new QgsRatioLockButton(mGeneralOptionsGroupBox);
        mPosLockAspectRatio->setObjectName(QString::fromUtf8("mPosLockAspectRatio"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPosLockAspectRatio->sizePolicy().hasHeightForWidth());
        mPosLockAspectRatio->setSizePolicy(sizePolicy);
        mPosLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mPosLockAspectRatio);


        gridLayout_3->addLayout(_2, 1, 4, 2, 1);

        mXPosSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mXPosSpin->setObjectName(QString::fromUtf8("mXPosSpin"));
        mXPosSpin->setDecimals(3);
        mXPosSpin->setMinimum(-9999999.000000000000000);
        mXPosSpin->setMaximum(9999999.000000000000000);
        mXPosSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mXPosSpin, 1, 1, 1, 2);

        mWidthSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mWidthSpin->setObjectName(QString::fromUtf8("mWidthSpin"));
        mWidthSpin->setDecimals(3);
        mWidthSpin->setMaximum(9999999.000000000000000);
        mWidthSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mWidthSpin, 3, 1, 1, 2);

        mPageSpinBox = new QgsSpinBox(mGeneralOptionsGroupBox);
        mPageSpinBox->setObjectName(QString::fromUtf8("mPageSpinBox"));
        mPageSpinBox->setMinimum(1);
        mPageSpinBox->setMaximum(9999);
        mPageSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mPageSpinBox, 0, 1, 1, 3);

        mXLabel = new QLabel(mGeneralOptionsGroupBox);
        mXLabel->setObjectName(QString::fromUtf8("mXLabel"));

        gridLayout_3->addWidget(mXLabel, 1, 0, 1, 1);

        mHeightDDBtn = new QgsPropertyOverrideButton(mGeneralOptionsGroupBox);
        mHeightDDBtn->setObjectName(QString::fromUtf8("mHeightDDBtn"));

        gridLayout_3->addWidget(mHeightDDBtn, 4, 3, 1, 1);

        mWidthLabel = new QLabel(mGeneralOptionsGroupBox);
        mWidthLabel->setObjectName(QString::fromUtf8("mWidthLabel"));

        gridLayout_3->addWidget(mWidthLabel, 3, 0, 1, 1);

        mYPosSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mYPosSpin->setObjectName(QString::fromUtf8("mYPosSpin"));
        mYPosSpin->setDecimals(3);
        mYPosSpin->setMinimum(-9999999.000000000000000);
        mYPosSpin->setMaximum(9999999.000000000000000);
        mYPosSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mYPosSpin, 2, 1, 1, 2);

        _3 = new QHBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        _3->setContentsMargins(2, 2, 0, 2);
        mSizeLockAspectRatio = new QgsRatioLockButton(mGeneralOptionsGroupBox);
        mSizeLockAspectRatio->setObjectName(QString::fromUtf8("mSizeLockAspectRatio"));
        sizePolicy.setHeightForWidth(mSizeLockAspectRatio->sizePolicy().hasHeightForWidth());
        mSizeLockAspectRatio->setSizePolicy(sizePolicy);
        mSizeLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _3->addWidget(mSizeLockAspectRatio);


        gridLayout_3->addLayout(_3, 3, 4, 2, 1);

        mSizeUnitsComboBox = new QgsLayoutUnitsComboBox(mGeneralOptionsGroupBox);
        mSizeUnitsComboBox->setObjectName(QString::fromUtf8("mSizeUnitsComboBox"));

        gridLayout_3->addWidget(mSizeUnitsComboBox, 3, 5, 2, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(mGeneralOptionsGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mUpperLeftRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mUpperLeftRadioButton->setObjectName(QString::fromUtf8("mUpperLeftRadioButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mUpperLeftRadioButton->sizePolicy().hasHeightForWidth());
        mUpperLeftRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mUpperLeftRadioButton, 0, 0, 1, 1);

        mUpperMiddleRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mUpperMiddleRadioButton->setObjectName(QString::fromUtf8("mUpperMiddleRadioButton"));
        sizePolicy1.setHeightForWidth(mUpperMiddleRadioButton->sizePolicy().hasHeightForWidth());
        mUpperMiddleRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mUpperMiddleRadioButton, 0, 1, 1, 1);

        mUpperRightRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mUpperRightRadioButton->setObjectName(QString::fromUtf8("mUpperRightRadioButton"));
        sizePolicy1.setHeightForWidth(mUpperRightRadioButton->sizePolicy().hasHeightForWidth());
        mUpperRightRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mUpperRightRadioButton, 0, 2, 1, 1);

        mMiddleRightRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mMiddleRightRadioButton->setObjectName(QString::fromUtf8("mMiddleRightRadioButton"));
        sizePolicy1.setHeightForWidth(mMiddleRightRadioButton->sizePolicy().hasHeightForWidth());
        mMiddleRightRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mMiddleRightRadioButton, 1, 2, 1, 1);

        mMiddleRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mMiddleRadioButton->setObjectName(QString::fromUtf8("mMiddleRadioButton"));
        sizePolicy1.setHeightForWidth(mMiddleRadioButton->sizePolicy().hasHeightForWidth());
        mMiddleRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mMiddleRadioButton, 1, 1, 1, 1);

        mLowerRightRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mLowerRightRadioButton->setObjectName(QString::fromUtf8("mLowerRightRadioButton"));
        sizePolicy1.setHeightForWidth(mLowerRightRadioButton->sizePolicy().hasHeightForWidth());
        mLowerRightRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLowerRightRadioButton, 2, 2, 1, 1);

        mLowerLeftRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mLowerLeftRadioButton->setObjectName(QString::fromUtf8("mLowerLeftRadioButton"));
        sizePolicy1.setHeightForWidth(mLowerLeftRadioButton->sizePolicy().hasHeightForWidth());
        mLowerLeftRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLowerLeftRadioButton, 2, 0, 1, 1);

        mLowerMiddleRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mLowerMiddleRadioButton->setObjectName(QString::fromUtf8("mLowerMiddleRadioButton"));
        sizePolicy1.setHeightForWidth(mLowerMiddleRadioButton->sizePolicy().hasHeightForWidth());
        mLowerMiddleRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLowerMiddleRadioButton, 2, 1, 1, 1);

        mMiddleLeftRadioButton = new QRadioButton(mGeneralOptionsGroupBox);
        mMiddleLeftRadioButton->setObjectName(QString::fromUtf8("mMiddleLeftRadioButton"));
        sizePolicy1.setHeightForWidth(mMiddleLeftRadioButton->sizePolicy().hasHeightForWidth());
        mMiddleLeftRadioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mMiddleLeftRadioButton, 1, 0, 1, 1);


        horizontalLayout_7->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(mGeneralOptionsGroupBox);

        mTransformsGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        mTransformsGroupBox->setObjectName(QString::fromUtf8("mTransformsGroupBox"));
        mTransformsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mTransformsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mTransformsGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_5 = new QGridLayout(mTransformsGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(mTransformsGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mItemRotationSpinBox = new QgsDoubleSpinBox(mTransformsGroupBox);
        mItemRotationSpinBox->setObjectName(QString::fromUtf8("mItemRotationSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mItemRotationSpinBox->sizePolicy().hasHeightForWidth());
        mItemRotationSpinBox->setSizePolicy(sizePolicy2);
        mItemRotationSpinBox->setWrapping(true);
        mItemRotationSpinBox->setMinimum(-360.000000000000000);
        mItemRotationSpinBox->setMaximum(360.000000000000000);

        horizontalLayout_4->addWidget(mItemRotationSpinBox);

        mItemRotationDDBtn = new QgsPropertyOverrideButton(mTransformsGroupBox);
        mItemRotationDDBtn->setObjectName(QString::fromUtf8("mItemRotationDDBtn"));

        horizontalLayout_4->addWidget(mItemRotationDDBtn);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_2->addWidget(mTransformsGroupBox);

        mFrameGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        mFrameGroupBox->setObjectName(QString::fromUtf8("mFrameGroupBox"));
        mFrameGroupBox->setCheckable(true);
        mFrameGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mFrameGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_2 = new QGridLayout(mFrameGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(mFrameGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mFrameColorButton = new QgsColorButton(mFrameGroupBox);
        mFrameColorButton->setObjectName(QString::fromUtf8("mFrameColorButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mFrameColorButton->sizePolicy().hasHeightForWidth());
        mFrameColorButton->setSizePolicy(sizePolicy3);
        mFrameColorButton->setMinimumSize(QSize(120, 0));

        horizontalLayout_6->addWidget(mFrameColorButton);

        mItemFrameColorDDBtn = new QgsPropertyOverrideButton(mFrameGroupBox);
        mItemFrameColorDDBtn->setObjectName(QString::fromUtf8("mItemFrameColorDDBtn"));

        horizontalLayout_6->addWidget(mItemFrameColorDDBtn);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(mFrameGroupBox);
        mStrokeWidthLabel->setObjectName(QString::fromUtf8("mStrokeWidthLabel"));
        mStrokeWidthLabel->setWordWrap(true);

        gridLayout_2->addWidget(mStrokeWidthLabel, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(mFrameGroupBox);
        mStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mStrokeWidthSpinBox"));
        sizePolicy3.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy3);
        mStrokeWidthSpinBox->setMaximum(99.989999999999995);
        mStrokeWidthSpinBox->setSingleStep(0.100000000000000);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_8->addWidget(mStrokeWidthSpinBox);

        mStrokeUnitsComboBox = new QgsLayoutUnitsComboBox(mFrameGroupBox);
        mStrokeUnitsComboBox->setObjectName(QString::fromUtf8("mStrokeUnitsComboBox"));

        horizontalLayout_8->addWidget(mStrokeUnitsComboBox);


        gridLayout_2->addLayout(horizontalLayout_8, 1, 1, 1, 1);

        label_8 = new QLabel(mFrameGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        mFrameJoinStyleCombo = new QgsPenJoinStyleComboBox(mFrameGroupBox);
        mFrameJoinStyleCombo->setObjectName(QString::fromUtf8("mFrameJoinStyleCombo"));
        sizePolicy3.setHeightForWidth(mFrameJoinStyleCombo->sizePolicy().hasHeightForWidth());
        mFrameJoinStyleCombo->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(mFrameJoinStyleCombo, 2, 1, 1, 1);


        verticalLayout_2->addWidget(mFrameGroupBox);

        mBackgroundGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        mBackgroundGroupBox->setObjectName(QString::fromUtf8("mBackgroundGroupBox"));
        mBackgroundGroupBox->setCheckable(true);
        mBackgroundGroupBox->setChecked(true);
        mBackgroundGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mBackgroundGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_7 = new QGridLayout(mBackgroundGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_4 = new QLabel(mBackgroundGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mBackgroundColorButton = new QgsColorButton(mBackgroundGroupBox);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        sizePolicy3.setHeightForWidth(mBackgroundColorButton->sizePolicy().hasHeightForWidth());
        mBackgroundColorButton->setSizePolicy(sizePolicy3);
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));

        horizontalLayout_5->addWidget(mBackgroundColorButton);

        mItemBackgroundColorDDBtn = new QgsPropertyOverrideButton(mBackgroundGroupBox);
        mItemBackgroundColorDDBtn->setObjectName(QString::fromUtf8("mItemBackgroundColorDDBtn"));

        horizontalLayout_5->addWidget(mItemBackgroundColorDDBtn);


        gridLayout_7->addLayout(horizontalLayout_5, 0, 1, 1, 1);


        verticalLayout_2->addWidget(mBackgroundGroupBox);

        groupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(true));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        mItemIdLabel = new QLabel(groupBox);
        mItemIdLabel->setObjectName(QString::fromUtf8("mItemIdLabel"));

        gridLayout_8->addWidget(mItemIdLabel, 0, 0, 1, 1);

        mItemIdLineEdit = new QLineEdit(groupBox);
        mItemIdLineEdit->setObjectName(QString::fromUtf8("mItemIdLineEdit"));

        gridLayout_8->addWidget(mItemIdLineEdit, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupRendering = new QgsCollapsibleGroupBoxBasic(QgsLayoutItemWidgetBase);
        groupRendering->setObjectName(QString::fromUtf8("groupRendering"));
        groupRendering->setFocusPolicy(Qt::StrongFocus);
        groupRendering->setProperty("collapsed", QVariant(true));
        groupRendering->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout_4 = new QGridLayout(groupRendering);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mBlendModeCombo = new QgsBlendModeComboBox(groupRendering);
        mBlendModeCombo->setObjectName(QString::fromUtf8("mBlendModeCombo"));

        horizontalLayout_3->addWidget(mBlendModeCombo);

        mBlendModeDDBtn = new QgsPropertyOverrideButton(groupRendering);
        mBlendModeDDBtn->setObjectName(QString::fromUtf8("mBlendModeDDBtn"));

        horizontalLayout_3->addWidget(mBlendModeDDBtn);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mExcludeFromPrintsCheckBox = new QCheckBox(groupRendering);
        mExcludeFromPrintsCheckBox->setObjectName(QString::fromUtf8("mExcludeFromPrintsCheckBox"));

        horizontalLayout->addWidget(mExcludeFromPrintsCheckBox);

        mExcludePrintsDDBtn = new QgsPropertyOverrideButton(groupRendering);
        mExcludePrintsDDBtn->setObjectName(QString::fromUtf8("mExcludePrintsDDBtn"));

        horizontalLayout->addWidget(mExcludePrintsDDBtn);


        gridLayout_4->addLayout(horizontalLayout, 3, 0, 1, 2);

        labelBlendMode = new QLabel(groupRendering);
        labelBlendMode->setObjectName(QString::fromUtf8("labelBlendMode"));

        gridLayout_4->addWidget(labelBlendMode, 0, 0, 1, 1);

        labelTransparency = new QLabel(groupRendering);
        labelTransparency->setObjectName(QString::fromUtf8("labelTransparency"));

        gridLayout_4->addWidget(labelTransparency, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mOpacityWidget = new QgsOpacityWidget(groupRendering);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mOpacityWidget);

        mOpacityDDBtn = new QgsPropertyOverrideButton(groupRendering);
        mOpacityDDBtn->setObjectName(QString::fromUtf8("mOpacityDDBtn"));

        horizontalLayout_2->addWidget(mOpacityDDBtn);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        label_5 = new QLabel(groupRendering);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 4, 0, 1, 1);

        mExportGroupNameCombo = new QComboBox(groupRendering);
        mExportGroupNameCombo->setObjectName(QString::fromUtf8("mExportGroupNameCombo"));
        mExportGroupNameCombo->setEditable(true);

        gridLayout_4->addWidget(mExportGroupNameCombo, 4, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout_2->addWidget(groupRendering);

        groupBox_3 = new QgsCollapsibleGroupBox(QgsLayoutItemWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_3);
        mVariableEditor->setObjectName(QString::fromUtf8("mVariableEditor"));
        mVariableEditor->setMinimumSize(QSize(0, 200));

        verticalLayout_4->addWidget(mVariableEditor);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        mStrokeWidthLabel->setBuddy(mStrokeWidthSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mGeneralOptionsGroupBox, mPageSpinBox);
        QWidget::setTabOrder(mPageSpinBox, mXPosSpin);
        QWidget::setTabOrder(mXPosSpin, mXPositionDDBtn);
        QWidget::setTabOrder(mXPositionDDBtn, mYPosSpin);
        QWidget::setTabOrder(mYPosSpin, mYPositionDDBtn);
        QWidget::setTabOrder(mYPositionDDBtn, mPosLockAspectRatio);
        QWidget::setTabOrder(mPosLockAspectRatio, mPosUnitsComboBox);
        QWidget::setTabOrder(mPosUnitsComboBox, mWidthSpin);
        QWidget::setTabOrder(mWidthSpin, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, mHeightSpin);
        QWidget::setTabOrder(mHeightSpin, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mSizeLockAspectRatio);
        QWidget::setTabOrder(mSizeLockAspectRatio, mSizeUnitsComboBox);
        QWidget::setTabOrder(mSizeUnitsComboBox, mUpperLeftRadioButton);
        QWidget::setTabOrder(mUpperLeftRadioButton, mUpperMiddleRadioButton);
        QWidget::setTabOrder(mUpperMiddleRadioButton, mUpperRightRadioButton);
        QWidget::setTabOrder(mUpperRightRadioButton, mMiddleLeftRadioButton);
        QWidget::setTabOrder(mMiddleLeftRadioButton, mMiddleRadioButton);
        QWidget::setTabOrder(mMiddleRadioButton, mMiddleRightRadioButton);
        QWidget::setTabOrder(mMiddleRightRadioButton, mLowerLeftRadioButton);
        QWidget::setTabOrder(mLowerLeftRadioButton, mLowerMiddleRadioButton);
        QWidget::setTabOrder(mLowerMiddleRadioButton, mLowerRightRadioButton);
        QWidget::setTabOrder(mLowerRightRadioButton, mTransformsGroupBox);
        QWidget::setTabOrder(mTransformsGroupBox, mItemRotationSpinBox);
        QWidget::setTabOrder(mItemRotationSpinBox, mItemRotationDDBtn);
        QWidget::setTabOrder(mItemRotationDDBtn, mFrameGroupBox);
        QWidget::setTabOrder(mFrameGroupBox, mFrameColorButton);
        QWidget::setTabOrder(mFrameColorButton, mItemFrameColorDDBtn);
        QWidget::setTabOrder(mItemFrameColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeUnitsComboBox);
        QWidget::setTabOrder(mStrokeUnitsComboBox, mFrameJoinStyleCombo);
        QWidget::setTabOrder(mFrameJoinStyleCombo, mBackgroundGroupBox);
        QWidget::setTabOrder(mBackgroundGroupBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mItemBackgroundColorDDBtn);
        QWidget::setTabOrder(mItemBackgroundColorDDBtn, groupBox);
        QWidget::setTabOrder(groupBox, mItemIdLineEdit);
        QWidget::setTabOrder(mItemIdLineEdit, groupRendering);
        QWidget::setTabOrder(groupRendering, mBlendModeCombo);
        QWidget::setTabOrder(mBlendModeCombo, mBlendModeDDBtn);
        QWidget::setTabOrder(mBlendModeDDBtn, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mOpacityDDBtn);
        QWidget::setTabOrder(mOpacityDDBtn, mExcludeFromPrintsCheckBox);
        QWidget::setTabOrder(mExcludeFromPrintsCheckBox, mExcludePrintsDDBtn);

        retranslateUi(QgsLayoutItemWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutItemWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutItemWidgetBase)
    {
        QgsLayoutItemWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Global Options", nullptr));
        mGeneralOptionsGroupBox->setTitle(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Position and Size", nullptr));
        mHeightSpin->setSuffix(QString());
        mYLabel->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Y", nullptr));
        mWidthDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        mYPositionDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        mPageLabel->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Page", nullptr));
        mXPositionDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        mHeightLabel->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Height", nullptr));
#if QT_CONFIG(tooltip)
        mPosLockAspectRatio->setToolTip(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Lock aspect ratio (including while drawing extent onto canvas)", nullptr));
#endif // QT_CONFIG(tooltip)
        mXPosSpin->setSuffix(QString());
        mWidthSpin->setSuffix(QString());
        mXLabel->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "X", nullptr));
        mHeightDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        mWidthLabel->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Width", nullptr));
        mYPosSpin->setSuffix(QString());
#if QT_CONFIG(tooltip)
        mSizeLockAspectRatio->setToolTip(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Lock aspect ratio (including while drawing extent onto canvas)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Reference point", nullptr));
        mUpperLeftRadioButton->setText(QString());
        mUpperMiddleRadioButton->setText(QString());
        mUpperRightRadioButton->setText(QString());
        mMiddleRightRadioButton->setText(QString());
        mMiddleRadioButton->setText(QString());
        mLowerRightRadioButton->setText(QString());
        mLowerLeftRadioButton->setText(QString());
        mLowerMiddleRadioButton->setText(QString());
        mMiddleLeftRadioButton->setText(QString());
        mTransformsGroupBox->setTitle(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Rotation", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Rotation", nullptr));
        mItemRotationSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutItemWidgetBase", " \302\260", nullptr));
        mItemRotationDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        mFrameGroupBox->setTitle(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Frame", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Color", nullptr));
        mFrameColorButton->setText(QString());
        mItemFrameColorDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        mStrokeWidthLabel->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Thickness", nullptr));
        mStrokeWidthSpinBox->setSuffix(QString());
        label_8->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Join style", nullptr));
        mBackgroundGroupBox->setTitle(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Background", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Color", nullptr));
        mBackgroundColorButton->setText(QString());
        mItemBackgroundColorDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Item ID", nullptr));
        mItemIdLabel->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Id", nullptr));
        groupRendering->setTitle(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Rendering", nullptr));
        mBlendModeDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        mExcludeFromPrintsCheckBox->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Exclude item from exports", nullptr));
        mExcludePrintsDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        labelBlendMode->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Blending mode", nullptr));
        labelTransparency->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Opacity", nullptr));
        mOpacityDDBtn->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "\342\200\246", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Geospatial PDF group", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsLayoutItemWidgetBase", "Variables", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutItemWidgetBase: public Ui_QgsLayoutItemWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTITEMWIDGETBASE_H
