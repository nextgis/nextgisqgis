/********************************************************************************
** Form generated from reading UI file 'widget_pointpatternfill.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_POINTPATTERNFILL_H
#define UI_WIDGET_POINTPATTERNFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetPointPatternFill
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QgsDoubleSpinBox *mVerticalDisplacementSpinBox;
    QgsUnitSelectionWidget *mVerticalDisplacementUnitWidget;
    QgsPropertyOverrideButton *mVerticalDistanceDDBtn;
    QLabel *mHorizontalDisplacementLabel1;
    QLabel *mVerticalDisplacementLabel;
    QgsPropertyOverrideButton *mVerticalDisplacementDDBtn;
    QgsPropertyOverrideButton *mHorizontalOffsetDDBtn;
    QLabel *mCoordinateReferenceLabel;
    QComboBox *mCoordinateReferenceComboBox;
    QLabel *mHorizontalDistanceLabel1;
    QLabel *mRotationLabel;
    QgsPropertyOverrideButton *mHorizontalDistanceDDBtn;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mVerticalDistanceSpinBox;
    QgsUnitSelectionWidget *mVerticalDistanceUnitWidget;
    QLabel *mHorizontalDisplacementLabel;
    QgsPropertyOverrideButton *mCoordinateReferenceDDBtn;
    QgsPropertyOverrideButton *mVerticalOffsetDDBtn;
    QgsPropertyOverrideButton *mAngleDDBtn;
    QLabel *mHorizontalOffsetLabel;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mHorizontalDistanceSpinBox;
    QgsUnitSelectionWidget *mHorizontalDistanceUnitWidget;
    QLabel *mVerticalOffsetLabel;
    QgsCollapsibleGroupBoxBasic *mRandomGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *mVerticalOffsetLabel_2;
    QgsPropertyOverrideButton *mRandomYDDBtn;
    QHBoxLayout *horizontalLayout_8;
    QgsDoubleSpinBox *mRandomYSpinBox;
    QgsUnitSelectionWidget *mRandomYOffsetUnitWidget;
    QgsPropertyOverrideButton *mRandomXDDBtn;
    QHBoxLayout *horizontalLayout_9;
    QgsDoubleSpinBox *mRandomXSpinBox;
    QgsUnitSelectionWidget *mRandomXOffsetUnitWidget;
    QLabel *mHorizontalOffsetLabel_2;
    QLabel *label;
    QgsPropertyOverrideButton *mSeedDdbtn;
    QgsSpinBox *mSeedSpinBox;
    QLabel *mHorizontalDistanceLabel;
    QgsDoubleSpinBox *mAngleSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QgsDoubleSpinBox *mVerticalOffsetSpinBox;
    QgsUnitSelectionWidget *mVerticalOffsetUnitWidget;
    QHBoxLayout *horizontalLayout_6;
    QgsDoubleSpinBox *mHorizontalOffsetSpinBox;
    QgsUnitSelectionWidget *mHorizontalOffsetUnitWidget;
    QLabel *mOffsetLabel;
    QgsPropertyOverrideButton *mClippingDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mHorizontalDisplacementSpinBox;
    QgsUnitSelectionWidget *mHorizontalDisplacementUnitWidget;
    QLabel *mClippingLabel;
    QgsPropertyOverrideButton *mHorizontalDisplacementDDBtn;
    QComboBox *mClipModeComboBox;
    QLabel *mVerticalDistanceLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetPointPatternFill)
    {
        if (WidgetPointPatternFill->objectName().isEmpty())
            WidgetPointPatternFill->setObjectName(QString::fromUtf8("WidgetPointPatternFill"));
        WidgetPointPatternFill->resize(401, 575);
        WidgetPointPatternFill->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(WidgetPointPatternFill);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mVerticalDisplacementSpinBox = new QgsDoubleSpinBox(WidgetPointPatternFill);
        mVerticalDisplacementSpinBox->setObjectName(QString::fromUtf8("mVerticalDisplacementSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mVerticalDisplacementSpinBox->sizePolicy().hasHeightForWidth());
        mVerticalDisplacementSpinBox->setSizePolicy(sizePolicy);
        mVerticalDisplacementSpinBox->setDecimals(6);
        mVerticalDisplacementSpinBox->setMaximum(99999999.989999994635582);
        mVerticalDisplacementSpinBox->setSingleStep(0.200000000000000);
        mVerticalDisplacementSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_5->addWidget(mVerticalDisplacementSpinBox);

        mVerticalDisplacementUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mVerticalDisplacementUnitWidget->setObjectName(QString::fromUtf8("mVerticalDisplacementUnitWidget"));
        mVerticalDisplacementUnitWidget->setMinimumSize(QSize(0, 0));
        mVerticalDisplacementUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(mVerticalDisplacementUnitWidget);


        gridLayout->addLayout(horizontalLayout_5, 6, 1, 1, 1);

        mVerticalDistanceDDBtn = new QgsPropertyOverrideButton(WidgetPointPatternFill);
        mVerticalDistanceDDBtn->setObjectName(QString::fromUtf8("mVerticalDistanceDDBtn"));

        gridLayout->addWidget(mVerticalDistanceDDBtn, 3, 3, 1, 1);

        mHorizontalDisplacementLabel1 = new QLabel(WidgetPointPatternFill);
        mHorizontalDisplacementLabel1->setObjectName(QString::fromUtf8("mHorizontalDisplacementLabel1"));

        gridLayout->addWidget(mHorizontalDisplacementLabel1, 5, 0, 1, 1);

        mVerticalDisplacementLabel = new QLabel(WidgetPointPatternFill);
        mVerticalDisplacementLabel->setObjectName(QString::fromUtf8("mVerticalDisplacementLabel"));

        gridLayout->addWidget(mVerticalDisplacementLabel, 6, 0, 1, 1);

        mVerticalDisplacementDDBtn = new QgsPropertyOverrideButton(WidgetPointPatternFill);
        mVerticalDisplacementDDBtn->setObjectName(QString::fromUtf8("mVerticalDisplacementDDBtn"));

        gridLayout->addWidget(mVerticalDisplacementDDBtn, 6, 3, 1, 1);

        mHorizontalOffsetDDBtn = new QgsPropertyOverrideButton(WidgetPointPatternFill);
        mHorizontalOffsetDDBtn->setObjectName(QString::fromUtf8("mHorizontalOffsetDDBtn"));

        gridLayout->addWidget(mHorizontalOffsetDDBtn, 8, 3, 1, 1);

        mCoordinateReferenceLabel = new QLabel(WidgetPointPatternFill);
        mCoordinateReferenceLabel->setObjectName(QString::fromUtf8("mCoordinateReferenceLabel"));

        gridLayout->addWidget(mCoordinateReferenceLabel, 0, 0, 1, 1);

        mCoordinateReferenceComboBox = new QComboBox(WidgetPointPatternFill);
        mCoordinateReferenceComboBox->setObjectName(QString::fromUtf8("mCoordinateReferenceComboBox"));

        gridLayout->addWidget(mCoordinateReferenceComboBox, 0, 1, 1, 1);

        mHorizontalDistanceLabel1 = new QLabel(WidgetPointPatternFill);
        mHorizontalDistanceLabel1->setObjectName(QString::fromUtf8("mHorizontalDistanceLabel1"));

        gridLayout->addWidget(mHorizontalDistanceLabel1, 2, 0, 1, 1);

        mRotationLabel = new QLabel(WidgetPointPatternFill);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout->addWidget(mRotationLabel, 11, 0, 1, 1);

        mHorizontalDistanceDDBtn = new QgsPropertyOverrideButton(WidgetPointPatternFill);
        mHorizontalDistanceDDBtn->setObjectName(QString::fromUtf8("mHorizontalDistanceDDBtn"));

        gridLayout->addWidget(mHorizontalDistanceDDBtn, 2, 3, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mVerticalDistanceSpinBox = new QgsDoubleSpinBox(WidgetPointPatternFill);
        mVerticalDistanceSpinBox->setObjectName(QString::fromUtf8("mVerticalDistanceSpinBox"));
        sizePolicy.setHeightForWidth(mVerticalDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mVerticalDistanceSpinBox->setSizePolicy(sizePolicy);
        mVerticalDistanceSpinBox->setDecimals(6);
        mVerticalDistanceSpinBox->setMaximum(999999999.990000009536743);
        mVerticalDistanceSpinBox->setSingleStep(0.200000000000000);
        mVerticalDistanceSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_2->addWidget(mVerticalDistanceSpinBox);

        mVerticalDistanceUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mVerticalDistanceUnitWidget->setObjectName(QString::fromUtf8("mVerticalDistanceUnitWidget"));
        mVerticalDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mVerticalDistanceUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        mHorizontalDisplacementLabel = new QLabel(WidgetPointPatternFill);
        mHorizontalDisplacementLabel->setObjectName(QString::fromUtf8("mHorizontalDisplacementLabel"));

        gridLayout->addWidget(mHorizontalDisplacementLabel, 4, 0, 1, 4);

        mCoordinateReferenceDDBtn = new QgsPropertyOverrideButton(WidgetPointPatternFill);
        mCoordinateReferenceDDBtn->setObjectName(QString::fromUtf8("mCoordinateReferenceDDBtn"));

        gridLayout->addWidget(mCoordinateReferenceDDBtn, 0, 3, 1, 1);

        mVerticalOffsetDDBtn = new QgsPropertyOverrideButton(WidgetPointPatternFill);
        mVerticalOffsetDDBtn->setObjectName(QString::fromUtf8("mVerticalOffsetDDBtn"));

        gridLayout->addWidget(mVerticalOffsetDDBtn, 9, 3, 1, 1);

        mAngleDDBtn = new QgsPropertyOverrideButton(WidgetPointPatternFill);
        mAngleDDBtn->setObjectName(QString::fromUtf8("mAngleDDBtn"));

        gridLayout->addWidget(mAngleDDBtn, 11, 3, 1, 1);

        mHorizontalOffsetLabel = new QLabel(WidgetPointPatternFill);
        mHorizontalOffsetLabel->setObjectName(QString::fromUtf8("mHorizontalOffsetLabel"));

        gridLayout->addWidget(mHorizontalOffsetLabel, 8, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mHorizontalDistanceSpinBox = new QgsDoubleSpinBox(WidgetPointPatternFill);
        mHorizontalDistanceSpinBox->setObjectName(QString::fromUtf8("mHorizontalDistanceSpinBox"));
        sizePolicy.setHeightForWidth(mHorizontalDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mHorizontalDistanceSpinBox->setSizePolicy(sizePolicy);
        mHorizontalDistanceSpinBox->setDecimals(6);
        mHorizontalDistanceSpinBox->setMaximum(99999999.989999994635582);
        mHorizontalDistanceSpinBox->setSingleStep(0.200000000000000);
        mHorizontalDistanceSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout->addWidget(mHorizontalDistanceSpinBox);

        mHorizontalDistanceUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mHorizontalDistanceUnitWidget->setObjectName(QString::fromUtf8("mHorizontalDistanceUnitWidget"));
        mHorizontalDistanceUnitWidget->setMinimumSize(QSize(0, 0));
        mHorizontalDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mHorizontalDistanceUnitWidget);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        mVerticalOffsetLabel = new QLabel(WidgetPointPatternFill);
        mVerticalOffsetLabel->setObjectName(QString::fromUtf8("mVerticalOffsetLabel"));

        gridLayout->addWidget(mVerticalOffsetLabel, 9, 0, 1, 1);

        mRandomGroupBox = new QgsCollapsibleGroupBoxBasic(WidgetPointPatternFill);
        mRandomGroupBox->setObjectName(QString::fromUtf8("mRandomGroupBox"));
        gridLayout_2 = new QGridLayout(mRandomGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mVerticalOffsetLabel_2 = new QLabel(mRandomGroupBox);
        mVerticalOffsetLabel_2->setObjectName(QString::fromUtf8("mVerticalOffsetLabel_2"));

        gridLayout_2->addWidget(mVerticalOffsetLabel_2, 2, 0, 2, 1);

        mRandomYDDBtn = new QgsPropertyOverrideButton(mRandomGroupBox);
        mRandomYDDBtn->setObjectName(QString::fromUtf8("mRandomYDDBtn"));

        gridLayout_2->addWidget(mRandomYDDBtn, 2, 3, 2, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mRandomYSpinBox = new QgsDoubleSpinBox(mRandomGroupBox);
        mRandomYSpinBox->setObjectName(QString::fromUtf8("mRandomYSpinBox"));
        sizePolicy.setHeightForWidth(mRandomYSpinBox->sizePolicy().hasHeightForWidth());
        mRandomYSpinBox->setSizePolicy(sizePolicy);
        mRandomYSpinBox->setDecimals(6);
        mRandomYSpinBox->setMinimum(0.000000000000000);
        mRandomYSpinBox->setMaximum(99999999.989999994635582);
        mRandomYSpinBox->setSingleStep(0.200000000000000);
        mRandomYSpinBox->setProperty("clearValue", QVariant(0.000000000000000));
        mRandomYSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_8->addWidget(mRandomYSpinBox);

        mRandomYOffsetUnitWidget = new QgsUnitSelectionWidget(mRandomGroupBox);
        mRandomYOffsetUnitWidget->setObjectName(QString::fromUtf8("mRandomYOffsetUnitWidget"));
        mRandomYOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mRandomYOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_8->addWidget(mRandomYOffsetUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_8, 2, 1, 2, 2);

        mRandomXDDBtn = new QgsPropertyOverrideButton(mRandomGroupBox);
        mRandomXDDBtn->setObjectName(QString::fromUtf8("mRandomXDDBtn"));

        gridLayout_2->addWidget(mRandomXDDBtn, 0, 3, 2, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mRandomXSpinBox = new QgsDoubleSpinBox(mRandomGroupBox);
        mRandomXSpinBox->setObjectName(QString::fromUtf8("mRandomXSpinBox"));
        sizePolicy.setHeightForWidth(mRandomXSpinBox->sizePolicy().hasHeightForWidth());
        mRandomXSpinBox->setSizePolicy(sizePolicy);
        mRandomXSpinBox->setDecimals(6);
        mRandomXSpinBox->setMinimum(0.000000000000000);
        mRandomXSpinBox->setMaximum(99999999.989999994635582);
        mRandomXSpinBox->setSingleStep(0.200000000000000);
        mRandomXSpinBox->setProperty("clearValue", QVariant(0.000000000000000));
        mRandomXSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_9->addWidget(mRandomXSpinBox);

        mRandomXOffsetUnitWidget = new QgsUnitSelectionWidget(mRandomGroupBox);
        mRandomXOffsetUnitWidget->setObjectName(QString::fromUtf8("mRandomXOffsetUnitWidget"));
        mRandomXOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mRandomXOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_9->addWidget(mRandomXOffsetUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_9, 0, 1, 2, 2);

        mHorizontalOffsetLabel_2 = new QLabel(mRandomGroupBox);
        mHorizontalOffsetLabel_2->setObjectName(QString::fromUtf8("mHorizontalOffsetLabel_2"));

        gridLayout_2->addWidget(mHorizontalOffsetLabel_2, 0, 0, 2, 1);

        label = new QLabel(mRandomGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        mSeedDdbtn = new QgsPropertyOverrideButton(mRandomGroupBox);
        mSeedDdbtn->setObjectName(QString::fromUtf8("mSeedDdbtn"));

        gridLayout_2->addWidget(mSeedDdbtn, 4, 3, 1, 1);

        mSeedSpinBox = new QgsSpinBox(mRandomGroupBox);
        mSeedSpinBox->setObjectName(QString::fromUtf8("mSeedSpinBox"));
        sizePolicy.setHeightForWidth(mSeedSpinBox->sizePolicy().hasHeightForWidth());
        mSeedSpinBox->setSizePolicy(sizePolicy);
        mSeedSpinBox->setMaximum(999999999);

        gridLayout_2->addWidget(mSeedSpinBox, 4, 1, 1, 2);


        gridLayout->addWidget(mRandomGroupBox, 12, 0, 1, 4);

        mHorizontalDistanceLabel = new QLabel(WidgetPointPatternFill);
        mHorizontalDistanceLabel->setObjectName(QString::fromUtf8("mHorizontalDistanceLabel"));

        gridLayout->addWidget(mHorizontalDistanceLabel, 1, 0, 1, 4);

        mAngleSpinBox = new QgsDoubleSpinBox(WidgetPointPatternFill);
        mAngleSpinBox->setObjectName(QString::fromUtf8("mAngleSpinBox"));
        sizePolicy.setHeightForWidth(mAngleSpinBox->sizePolicy().hasHeightForWidth());
        mAngleSpinBox->setSizePolicy(sizePolicy);
        mAngleSpinBox->setDecimals(2);
        mAngleSpinBox->setMinimum(-360.000000000000000);
        mAngleSpinBox->setMaximum(360.000000000000000);
        mAngleSpinBox->setSingleStep(0.500000000000000);
        mAngleSpinBox->setProperty("clearValue", QVariant(0.000000000000000));
        mAngleSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout->addWidget(mAngleSpinBox, 11, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mVerticalOffsetSpinBox = new QgsDoubleSpinBox(WidgetPointPatternFill);
        mVerticalOffsetSpinBox->setObjectName(QString::fromUtf8("mVerticalOffsetSpinBox"));
        sizePolicy.setHeightForWidth(mVerticalOffsetSpinBox->sizePolicy().hasHeightForWidth());
        mVerticalOffsetSpinBox->setSizePolicy(sizePolicy);
        mVerticalOffsetSpinBox->setDecimals(6);
        mVerticalOffsetSpinBox->setMinimum(-99999999.989999994635582);
        mVerticalOffsetSpinBox->setMaximum(99999999.989999994635582);
        mVerticalOffsetSpinBox->setSingleStep(0.200000000000000);
        mVerticalOffsetSpinBox->setProperty("clearValue", QVariant(0.000000000000000));
        mVerticalOffsetSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_7->addWidget(mVerticalOffsetSpinBox);

        mVerticalOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mVerticalOffsetUnitWidget->setObjectName(QString::fromUtf8("mVerticalOffsetUnitWidget"));
        mVerticalOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mVerticalOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_7->addWidget(mVerticalOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout_7, 9, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mHorizontalOffsetSpinBox = new QgsDoubleSpinBox(WidgetPointPatternFill);
        mHorizontalOffsetSpinBox->setObjectName(QString::fromUtf8("mHorizontalOffsetSpinBox"));
        sizePolicy.setHeightForWidth(mHorizontalOffsetSpinBox->sizePolicy().hasHeightForWidth());
        mHorizontalOffsetSpinBox->setSizePolicy(sizePolicy);
        mHorizontalOffsetSpinBox->setDecimals(6);
        mHorizontalOffsetSpinBox->setMinimum(-99999999.989999994635582);
        mHorizontalOffsetSpinBox->setMaximum(99999999.989999994635582);
        mHorizontalOffsetSpinBox->setSingleStep(0.200000000000000);
        mHorizontalOffsetSpinBox->setProperty("clearValue", QVariant(0.000000000000000));
        mHorizontalOffsetSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_6->addWidget(mHorizontalOffsetSpinBox);

        mHorizontalOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mHorizontalOffsetUnitWidget->setObjectName(QString::fromUtf8("mHorizontalOffsetUnitWidget"));
        mHorizontalOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mHorizontalOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_6->addWidget(mHorizontalOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout_6, 8, 1, 1, 1);

        mOffsetLabel = new QLabel(WidgetPointPatternFill);
        mOffsetLabel->setObjectName(QString::fromUtf8("mOffsetLabel"));

        gridLayout->addWidget(mOffsetLabel, 7, 0, 1, 4);

        mClippingDDBtn = new QgsPropertyOverrideButton(WidgetPointPatternFill);
        mClippingDDBtn->setObjectName(QString::fromUtf8("mClippingDDBtn"));

        gridLayout->addWidget(mClippingDDBtn, 10, 3, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mHorizontalDisplacementSpinBox = new QgsDoubleSpinBox(WidgetPointPatternFill);
        mHorizontalDisplacementSpinBox->setObjectName(QString::fromUtf8("mHorizontalDisplacementSpinBox"));
        sizePolicy.setHeightForWidth(mHorizontalDisplacementSpinBox->sizePolicy().hasHeightForWidth());
        mHorizontalDisplacementSpinBox->setSizePolicy(sizePolicy);
        mHorizontalDisplacementSpinBox->setDecimals(6);
        mHorizontalDisplacementSpinBox->setMaximum(99999999.989999994635582);
        mHorizontalDisplacementSpinBox->setSingleStep(0.200000000000000);
        mHorizontalDisplacementSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_4->addWidget(mHorizontalDisplacementSpinBox);

        mHorizontalDisplacementUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mHorizontalDisplacementUnitWidget->setObjectName(QString::fromUtf8("mHorizontalDisplacementUnitWidget"));
        mHorizontalDisplacementUnitWidget->setMinimumSize(QSize(0, 0));
        mHorizontalDisplacementUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(mHorizontalDisplacementUnitWidget);


        gridLayout->addLayout(horizontalLayout_4, 5, 1, 1, 1);

        mClippingLabel = new QLabel(WidgetPointPatternFill);
        mClippingLabel->setObjectName(QString::fromUtf8("mClippingLabel"));

        gridLayout->addWidget(mClippingLabel, 10, 0, 1, 1);

        mHorizontalDisplacementDDBtn = new QgsPropertyOverrideButton(WidgetPointPatternFill);
        mHorizontalDisplacementDDBtn->setObjectName(QString::fromUtf8("mHorizontalDisplacementDDBtn"));

        gridLayout->addWidget(mHorizontalDisplacementDDBtn, 5, 3, 1, 1);

        mClipModeComboBox = new QComboBox(WidgetPointPatternFill);
        mClipModeComboBox->setObjectName(QString::fromUtf8("mClipModeComboBox"));

        gridLayout->addWidget(mClipModeComboBox, 10, 1, 1, 1);

        mVerticalDistanceLabel = new QLabel(WidgetPointPatternFill);
        mVerticalDistanceLabel->setObjectName(QString::fromUtf8("mVerticalDistanceLabel"));

        gridLayout->addWidget(mVerticalDistanceLabel, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 0, 1, 1);

        QWidget::setTabOrder(mCoordinateReferenceComboBox, mCoordinateReferenceDDBtn);
        QWidget::setTabOrder(mCoordinateReferenceDDBtn, mHorizontalDistanceSpinBox);
        QWidget::setTabOrder(mHorizontalDistanceSpinBox, mHorizontalDistanceUnitWidget);
        QWidget::setTabOrder(mHorizontalDistanceUnitWidget, mHorizontalDistanceDDBtn);
        QWidget::setTabOrder(mHorizontalDistanceDDBtn, mVerticalDistanceSpinBox);
        QWidget::setTabOrder(mVerticalDistanceSpinBox, mVerticalDistanceUnitWidget);
        QWidget::setTabOrder(mVerticalDistanceUnitWidget, mVerticalDistanceDDBtn);
        QWidget::setTabOrder(mVerticalDistanceDDBtn, mHorizontalDisplacementSpinBox);
        QWidget::setTabOrder(mHorizontalDisplacementSpinBox, mHorizontalDisplacementUnitWidget);
        QWidget::setTabOrder(mHorizontalDisplacementUnitWidget, mHorizontalDisplacementDDBtn);
        QWidget::setTabOrder(mHorizontalDisplacementDDBtn, mVerticalDisplacementSpinBox);
        QWidget::setTabOrder(mVerticalDisplacementSpinBox, mVerticalDisplacementUnitWidget);
        QWidget::setTabOrder(mVerticalDisplacementUnitWidget, mVerticalDisplacementDDBtn);
        QWidget::setTabOrder(mVerticalDisplacementDDBtn, mHorizontalOffsetSpinBox);
        QWidget::setTabOrder(mHorizontalOffsetSpinBox, mHorizontalOffsetUnitWidget);
        QWidget::setTabOrder(mHorizontalOffsetUnitWidget, mHorizontalOffsetDDBtn);
        QWidget::setTabOrder(mHorizontalOffsetDDBtn, mVerticalOffsetSpinBox);
        QWidget::setTabOrder(mVerticalOffsetSpinBox, mVerticalOffsetUnitWidget);
        QWidget::setTabOrder(mVerticalOffsetUnitWidget, mVerticalOffsetDDBtn);
        QWidget::setTabOrder(mVerticalOffsetDDBtn, mClipModeComboBox);
        QWidget::setTabOrder(mClipModeComboBox, mClippingDDBtn);
        QWidget::setTabOrder(mClippingDDBtn, mAngleSpinBox);
        QWidget::setTabOrder(mAngleSpinBox, mAngleDDBtn);
        QWidget::setTabOrder(mAngleDDBtn, mRandomXSpinBox);
        QWidget::setTabOrder(mRandomXSpinBox, mRandomXOffsetUnitWidget);
        QWidget::setTabOrder(mRandomXOffsetUnitWidget, mRandomXDDBtn);
        QWidget::setTabOrder(mRandomXDDBtn, mRandomYSpinBox);
        QWidget::setTabOrder(mRandomYSpinBox, mRandomYOffsetUnitWidget);
        QWidget::setTabOrder(mRandomYOffsetUnitWidget, mRandomYDDBtn);
        QWidget::setTabOrder(mRandomYDDBtn, mSeedSpinBox);
        QWidget::setTabOrder(mSeedSpinBox, mSeedDdbtn);

        retranslateUi(WidgetPointPatternFill);

        QMetaObject::connectSlotsByName(WidgetPointPatternFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetPointPatternFill)
    {
        mVerticalDistanceDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mHorizontalDisplacementLabel1->setText(QCoreApplication::translate("WidgetPointPatternFill", "Horizontal", nullptr));
        mVerticalDisplacementLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Vertical", nullptr));
        mVerticalDisplacementDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mHorizontalOffsetDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mCoordinateReferenceLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Alignment", nullptr));
        mHorizontalDistanceLabel1->setText(QCoreApplication::translate("WidgetPointPatternFill", "Horizontal", nullptr));
        mRotationLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Rotation", nullptr));
        mHorizontalDistanceDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mHorizontalDisplacementLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Displacement", nullptr));
        mCoordinateReferenceDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mVerticalOffsetDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mAngleDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mHorizontalOffsetLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Horizontal", nullptr));
        mVerticalOffsetLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Vertical", nullptr));
        mRandomGroupBox->setTitle(QCoreApplication::translate("WidgetPointPatternFill", "Randomize Pattern", nullptr));
        mVerticalOffsetLabel_2->setText(QCoreApplication::translate("WidgetPointPatternFill", "Vertically", nullptr));
        mRandomYDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mRandomXDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mHorizontalOffsetLabel_2->setText(QCoreApplication::translate("WidgetPointPatternFill", "Horizontally", nullptr));
        label->setText(QCoreApplication::translate("WidgetPointPatternFill", "Seed", nullptr));
        mSeedDdbtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mSeedSpinBox->setSpecialValueText(QCoreApplication::translate("WidgetPointPatternFill", "randomised", nullptr));
        mHorizontalDistanceLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Distance", nullptr));
        mAngleSpinBox->setSuffix(QCoreApplication::translate("WidgetPointPatternFill", " \302\260", nullptr));
        mOffsetLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Offset", nullptr));
        mClippingDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mClippingLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Clipping", nullptr));
        mHorizontalDisplacementDDBtn->setText(QCoreApplication::translate("WidgetPointPatternFill", "\342\200\246", nullptr));
        mVerticalDistanceLabel->setText(QCoreApplication::translate("WidgetPointPatternFill", "Vertical", nullptr));
        (void)WidgetPointPatternFill;
    } // retranslateUi

};

namespace Ui {
    class WidgetPointPatternFill: public Ui_WidgetPointPatternFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_POINTPATTERNFILL_H
