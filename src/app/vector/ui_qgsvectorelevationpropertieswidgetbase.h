/********************************************************************************
** Form generated from reading UI file 'qgsvectorelevationpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORELEVATIONPROPERTIESWIDGETBASE_H
#define UI_QGSVECTORELEVATIONPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsstackedwidget.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorElevationPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QgsStackedWidget *mVerticalCrsStackedWidget;
    QWidget *mCrsPageDisabled;
    QVBoxLayout *verticalLayout_3;
    QLabel *mCrsDisabledLabel;
    QWidget *mCrsPageEnabled;
    QLabel *label;
    QGroupBox *mElevationGroupBox;
    QGridLayout *gridLayout_2;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsDoubleSpinBox *mOffsetZSpinBox;
    QLabel *mOffsetLabel;
    QLabel *mLabelClampingExplanation;
    QgsDoubleSpinBox *mScaleZSpinBox;
    QLabel *mLabelScale;
    QComboBox *mComboClamping;
    QGroupBox *mBindingGroupBox;
    QGridLayout *gridLayout_3;
    QComboBox *mComboBinding;
    QFrame *line_4;
    QLabel *mLabelBindingExplanation;
    QGroupBox *mExtrusionGroupBox;
    QGridLayout *gridLayout_4;
    QFrame *line_5;
    QLabel *label_3;
    QgsDoubleSpinBox *mExtrusionSpinBox;
    QgsPropertyOverrideButton *mExtrusionDDBtn;
    QLabel *mLabelExtrusionExplanation;
    QGroupBox *mToleranceGroupBox;
    QGridLayout *gridLayout_Tolerance;
    QLabel *label_Tolerance;
    QgsDoubleSpinBox *mToleranceSpinBox;
    QFrame *line_Tolerance;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *mTypeComboBox;
    QLabel *label_7;
    QStackedWidget *mInterpretationStackedWidget;
    QWidget *mPageIndividualFeatures;
    QGridLayout *gridLayout_5;
    QgsSymbolButton *mLineStyleButton;
    QLabel *label_6;
    QgsSymbolButton *mFillStyleButton;
    QCheckBox *mCheckRespectLayerSymbology;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QgsSymbolButton *mMarkerStyleButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QWidget *mPageContinuousSurface;
    QGridLayout *gridLayout_7;
    QStackedWidget *mSymbologyStackedWidget;
    QWidget *mPageLine;
    QGridLayout *gridLayout_8;
    QLabel *label_9;
    QgsSymbolButton *mSurfaceLineStyleButton;
    QWidget *mPageFill;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QgsSymbolButton *mSurfaceFillStyleButton;
    QgsDoubleSpinBox *mElevationLimitSpinBox;
    QLabel *label_10;
    QCheckBox *mCheckBoxShowMarkersAtSampledPoints;
    QLabel *label_8;
    QComboBox *mStyleComboBox;
    QHBoxLayout *horizontalLayout_3;
    QgsSymbolButton *mSurfaceMarkerStyleButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_11;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsVectorElevationPropertiesWidgetBase)
    {
        if (QgsVectorElevationPropertiesWidgetBase->objectName().isEmpty())
            QgsVectorElevationPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsVectorElevationPropertiesWidgetBase"));
        QgsVectorElevationPropertiesWidgetBase->resize(555, 779);
        verticalLayout = new QVBoxLayout(QgsVectorElevationPropertiesWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mVerticalCrsStackedWidget = new QgsStackedWidget(groupBox_2);
        mVerticalCrsStackedWidget->setObjectName(QString::fromUtf8("mVerticalCrsStackedWidget"));
        sizePolicy.setHeightForWidth(mVerticalCrsStackedWidget->sizePolicy().hasHeightForWidth());
        mVerticalCrsStackedWidget->setSizePolicy(sizePolicy);
        mCrsPageDisabled = new QWidget();
        mCrsPageDisabled->setObjectName(QString::fromUtf8("mCrsPageDisabled"));
        verticalLayout_3 = new QVBoxLayout(mCrsPageDisabled);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mCrsDisabledLabel = new QLabel(mCrsPageDisabled);
        mCrsDisabledLabel->setObjectName(QString::fromUtf8("mCrsDisabledLabel"));
        mCrsDisabledLabel->setWordWrap(true);

        verticalLayout_3->addWidget(mCrsDisabledLabel);

        mVerticalCrsStackedWidget->addWidget(mCrsPageDisabled);
        mCrsPageEnabled = new QWidget();
        mCrsPageEnabled->setObjectName(QString::fromUtf8("mCrsPageEnabled"));
        mVerticalCrsStackedWidget->addWidget(mCrsPageEnabled);

        verticalLayout_2->addWidget(mVerticalCrsStackedWidget);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(groupBox_2);

        mElevationGroupBox = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        mElevationGroupBox->setObjectName(QString::fromUtf8("mElevationGroupBox"));
        mElevationGroupBox->setFocusPolicy(Qt::StrongFocus);
        mElevationGroupBox->setCheckable(false);
        mElevationGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_2 = new QGridLayout(mElevationGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mOffsetDDBtn = new QgsPropertyOverrideButton(mElevationGroupBox);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 3, 3, 1, 1);

        mOffsetZSpinBox = new QgsDoubleSpinBox(mElevationGroupBox);
        mOffsetZSpinBox->setObjectName(QString::fromUtf8("mOffsetZSpinBox"));
        mOffsetZSpinBox->setDecimals(6);
        mOffsetZSpinBox->setMinimum(-99999999999.000000000000000);
        mOffsetZSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_2->addWidget(mOffsetZSpinBox, 3, 1, 1, 2);

        mOffsetLabel = new QLabel(mElevationGroupBox);
        mOffsetLabel->setObjectName(QString::fromUtf8("mOffsetLabel"));

        gridLayout_2->addWidget(mOffsetLabel, 3, 0, 1, 1);

        mLabelClampingExplanation = new QLabel(mElevationGroupBox);
        mLabelClampingExplanation->setObjectName(QString::fromUtf8("mLabelClampingExplanation"));
        mLabelClampingExplanation->setWordWrap(true);

        gridLayout_2->addWidget(mLabelClampingExplanation, 1, 0, 1, 3);

        mScaleZSpinBox = new QgsDoubleSpinBox(mElevationGroupBox);
        mScaleZSpinBox->setObjectName(QString::fromUtf8("mScaleZSpinBox"));
        mScaleZSpinBox->setDecimals(6);
        mScaleZSpinBox->setMinimum(-99999999999.000000000000000);
        mScaleZSpinBox->setMaximum(99999999999.000000000000000);
        mScaleZSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(mScaleZSpinBox, 2, 1, 1, 2);

        mLabelScale = new QLabel(mElevationGroupBox);
        mLabelScale->setObjectName(QString::fromUtf8("mLabelScale"));

        gridLayout_2->addWidget(mLabelScale, 2, 0, 1, 1);

        mComboClamping = new QComboBox(mElevationGroupBox);
        mComboClamping->setObjectName(QString::fromUtf8("mComboClamping"));

        gridLayout_2->addWidget(mComboClamping, 0, 0, 1, 4);


        verticalLayout->addWidget(mElevationGroupBox);

        mBindingGroupBox = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        mBindingGroupBox->setObjectName(QString::fromUtf8("mBindingGroupBox"));
        mBindingGroupBox->setFocusPolicy(Qt::StrongFocus);
        mBindingGroupBox->setCheckable(false);
        mBindingGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_3 = new QGridLayout(mBindingGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mComboBinding = new QComboBox(mBindingGroupBox);
        mComboBinding->setObjectName(QString::fromUtf8("mComboBinding"));

        gridLayout_3->addWidget(mComboBinding, 0, 0, 1, 2);

        line_4 = new QFrame(mBindingGroupBox);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 2, 0, 1, 1);

        mLabelBindingExplanation = new QLabel(mBindingGroupBox);
        mLabelBindingExplanation->setObjectName(QString::fromUtf8("mLabelBindingExplanation"));
        mLabelBindingExplanation->setWordWrap(true);

        gridLayout_3->addWidget(mLabelBindingExplanation, 1, 0, 1, 2);


        verticalLayout->addWidget(mBindingGroupBox);

        mExtrusionGroupBox = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        mExtrusionGroupBox->setObjectName(QString::fromUtf8("mExtrusionGroupBox"));
        mExtrusionGroupBox->setFocusPolicy(Qt::StrongFocus);
        mExtrusionGroupBox->setCheckable(true);
        mExtrusionGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_4 = new QGridLayout(mExtrusionGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        line_5 = new QFrame(mExtrusionGroupBox);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_5, 3, 0, 1, 1);

        label_3 = new QLabel(mExtrusionGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        mExtrusionSpinBox = new QgsDoubleSpinBox(mExtrusionGroupBox);
        mExtrusionSpinBox->setObjectName(QString::fromUtf8("mExtrusionSpinBox"));
        mExtrusionSpinBox->setDecimals(6);
        mExtrusionSpinBox->setMinimum(-99999999999.000000000000000);
        mExtrusionSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_4->addWidget(mExtrusionSpinBox, 1, 1, 1, 1);

        mExtrusionDDBtn = new QgsPropertyOverrideButton(mExtrusionGroupBox);
        mExtrusionDDBtn->setObjectName(QString::fromUtf8("mExtrusionDDBtn"));

        gridLayout_4->addWidget(mExtrusionDDBtn, 1, 2, 1, 1);

        mLabelExtrusionExplanation = new QLabel(mExtrusionGroupBox);
        mLabelExtrusionExplanation->setObjectName(QString::fromUtf8("mLabelExtrusionExplanation"));
        mLabelExtrusionExplanation->setTextFormat(Qt::PlainText);
        mLabelExtrusionExplanation->setWordWrap(true);

        gridLayout_4->addWidget(mLabelExtrusionExplanation, 0, 0, 1, 3);


        verticalLayout->addWidget(mExtrusionGroupBox);

        mToleranceGroupBox = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        mToleranceGroupBox->setObjectName(QString::fromUtf8("mToleranceGroupBox"));
        mToleranceGroupBox->setFocusPolicy(Qt::StrongFocus);
        mToleranceGroupBox->setCheckable(true);
        mToleranceGroupBox->setChecked(false);
        mToleranceGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_Tolerance = new QGridLayout(mToleranceGroupBox);
        gridLayout_Tolerance->setObjectName(QString::fromUtf8("gridLayout_Tolerance"));
        label_Tolerance = new QLabel(mToleranceGroupBox);
        label_Tolerance->setObjectName(QString::fromUtf8("label_Tolerance"));

        gridLayout_Tolerance->addWidget(label_Tolerance, 0, 0, 1, 1);

        mToleranceSpinBox = new QgsDoubleSpinBox(mToleranceGroupBox);
        mToleranceSpinBox->setObjectName(QString::fromUtf8("mToleranceSpinBox"));
        mToleranceSpinBox->setDecimals(6);
        mToleranceSpinBox->setMinimum(0.000000000000000);
        mToleranceSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_Tolerance->addWidget(mToleranceSpinBox, 0, 1, 1, 1);

        line_Tolerance = new QFrame(mToleranceGroupBox);
        line_Tolerance->setObjectName(QString::fromUtf8("line_Tolerance"));
        line_Tolerance->setFrameShape(QFrame::VLine);
        line_Tolerance->setFrameShadow(QFrame::Sunken);

        gridLayout_Tolerance->addWidget(line_Tolerance, 1, 0, 1, 1);


        verticalLayout->addWidget(mToleranceGroupBox);

        groupBox = new QGroupBox(QgsVectorElevationPropertiesWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mTypeComboBox = new QComboBox(groupBox);
        mTypeComboBox->setObjectName(QString::fromUtf8("mTypeComboBox"));

        gridLayout->addWidget(mTypeComboBox, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        mInterpretationStackedWidget = new QStackedWidget(groupBox);
        mInterpretationStackedWidget->setObjectName(QString::fromUtf8("mInterpretationStackedWidget"));
        mPageIndividualFeatures = new QWidget();
        mPageIndividualFeatures->setObjectName(QString::fromUtf8("mPageIndividualFeatures"));
        gridLayout_5 = new QGridLayout(mPageIndividualFeatures);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        mLineStyleButton = new QgsSymbolButton(mPageIndividualFeatures);
        mLineStyleButton->setObjectName(QString::fromUtf8("mLineStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineStyleButton->sizePolicy().hasHeightForWidth());
        mLineStyleButton->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(mLineStyleButton, 3, 1, 1, 1);

        label_6 = new QLabel(mPageIndividualFeatures);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 4, 0, 1, 1);

        mFillStyleButton = new QgsSymbolButton(mPageIndividualFeatures);
        mFillStyleButton->setObjectName(QString::fromUtf8("mFillStyleButton"));
        sizePolicy1.setHeightForWidth(mFillStyleButton->sizePolicy().hasHeightForWidth());
        mFillStyleButton->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(mFillStyleButton, 4, 1, 1, 1);

        mCheckRespectLayerSymbology = new QCheckBox(mPageIndividualFeatures);
        mCheckRespectLayerSymbology->setObjectName(QString::fromUtf8("mCheckRespectLayerSymbology"));

        gridLayout_5->addWidget(mCheckRespectLayerSymbology, 0, 0, 1, 2);

        label_4 = new QLabel(mPageIndividualFeatures);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mMarkerStyleButton = new QgsSymbolButton(mPageIndividualFeatures);
        mMarkerStyleButton->setObjectName(QString::fromUtf8("mMarkerStyleButton"));
        sizePolicy1.setHeightForWidth(mMarkerStyleButton->sizePolicy().hasHeightForWidth());
        mMarkerStyleButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(mMarkerStyleButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_5->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        label_5 = new QLabel(mPageIndividualFeatures);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 2, 0, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);
        mInterpretationStackedWidget->addWidget(mPageIndividualFeatures);
        mPageContinuousSurface = new QWidget();
        mPageContinuousSurface->setObjectName(QString::fromUtf8("mPageContinuousSurface"));
        gridLayout_7 = new QGridLayout(mPageContinuousSurface);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mSymbologyStackedWidget = new QStackedWidget(mPageContinuousSurface);
        mSymbologyStackedWidget->setObjectName(QString::fromUtf8("mSymbologyStackedWidget"));
        sizePolicy.setHeightForWidth(mSymbologyStackedWidget->sizePolicy().hasHeightForWidth());
        mSymbologyStackedWidget->setSizePolicy(sizePolicy);
        mPageLine = new QWidget();
        mPageLine->setObjectName(QString::fromUtf8("mPageLine"));
        gridLayout_8 = new QGridLayout(mPageLine);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(mPageLine);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_8->addWidget(label_9, 0, 0, 1, 1);

        mSurfaceLineStyleButton = new QgsSymbolButton(mPageLine);
        mSurfaceLineStyleButton->setObjectName(QString::fromUtf8("mSurfaceLineStyleButton"));
        sizePolicy1.setHeightForWidth(mSurfaceLineStyleButton->sizePolicy().hasHeightForWidth());
        mSurfaceLineStyleButton->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(mSurfaceLineStyleButton, 0, 1, 1, 1);

        gridLayout_8->setColumnStretch(0, 1);
        gridLayout_8->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageLine);
        mPageFill = new QWidget();
        mPageFill->setObjectName(QString::fromUtf8("mPageFill"));
        gridLayout_6 = new QGridLayout(mPageFill);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(mPageFill);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 1, 0, 1, 1);

        mSurfaceFillStyleButton = new QgsSymbolButton(mPageFill);
        mSurfaceFillStyleButton->setObjectName(QString::fromUtf8("mSurfaceFillStyleButton"));
        sizePolicy1.setHeightForWidth(mSurfaceFillStyleButton->sizePolicy().hasHeightForWidth());
        mSurfaceFillStyleButton->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(mSurfaceFillStyleButton, 0, 1, 1, 1);

        mElevationLimitSpinBox = new QgsDoubleSpinBox(mPageFill);
        mElevationLimitSpinBox->setObjectName(QString::fromUtf8("mElevationLimitSpinBox"));
        mElevationLimitSpinBox->setDecimals(6);
        mElevationLimitSpinBox->setMinimum(-99999.000000000000000);
        mElevationLimitSpinBox->setMaximum(99999.000000000000000);

        gridLayout_6->addWidget(mElevationLimitSpinBox, 1, 1, 1, 1);

        label_10 = new QLabel(mPageFill);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 0, 0, 1, 1);

        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageFill);

        gridLayout_7->addWidget(mSymbologyStackedWidget, 1, 0, 1, 2);

        mCheckBoxShowMarkersAtSampledPoints = new QCheckBox(mPageContinuousSurface);
        mCheckBoxShowMarkersAtSampledPoints->setObjectName(QString::fromUtf8("mCheckBoxShowMarkersAtSampledPoints"));

        gridLayout_7->addWidget(mCheckBoxShowMarkersAtSampledPoints, 2, 0, 1, 2);

        label_8 = new QLabel(mPageContinuousSurface);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 0, 0, 1, 1);

        mStyleComboBox = new QComboBox(mPageContinuousSurface);
        mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

        gridLayout_7->addWidget(mStyleComboBox, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        mSurfaceMarkerStyleButton = new QgsSymbolButton(mPageContinuousSurface);
        mSurfaceMarkerStyleButton->setObjectName(QString::fromUtf8("mSurfaceMarkerStyleButton"));
        sizePolicy1.setHeightForWidth(mSurfaceMarkerStyleButton->sizePolicy().hasHeightForWidth());
        mSurfaceMarkerStyleButton->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(mSurfaceMarkerStyleButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_7->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        label_11 = new QLabel(mPageContinuousSurface);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_7->addWidget(label_11, 3, 0, 1, 1);

        gridLayout_7->setColumnStretch(0, 1);
        gridLayout_7->setColumnStretch(1, 2);
        mInterpretationStackedWidget->addWidget(mPageContinuousSurface);

        gridLayout->addWidget(mInterpretationStackedWidget, 1, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mElevationGroupBox, mComboClamping);
        QWidget::setTabOrder(mComboClamping, mScaleZSpinBox);
        QWidget::setTabOrder(mScaleZSpinBox, mOffsetZSpinBox);
        QWidget::setTabOrder(mOffsetZSpinBox, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mBindingGroupBox);
        QWidget::setTabOrder(mBindingGroupBox, mComboBinding);
        QWidget::setTabOrder(mComboBinding, mExtrusionGroupBox);
        QWidget::setTabOrder(mExtrusionGroupBox, mExtrusionSpinBox);
        QWidget::setTabOrder(mExtrusionSpinBox, mExtrusionDDBtn);
        QWidget::setTabOrder(mExtrusionDDBtn, mTypeComboBox);
        QWidget::setTabOrder(mTypeComboBox, mCheckRespectLayerSymbology);
        QWidget::setTabOrder(mCheckRespectLayerSymbology, mMarkerStyleButton);
        QWidget::setTabOrder(mMarkerStyleButton, mLineStyleButton);
        QWidget::setTabOrder(mLineStyleButton, mFillStyleButton);
        QWidget::setTabOrder(mFillStyleButton, mStyleComboBox);
        QWidget::setTabOrder(mStyleComboBox, mSurfaceLineStyleButton);
        QWidget::setTabOrder(mSurfaceLineStyleButton, mSurfaceFillStyleButton);
        QWidget::setTabOrder(mSurfaceFillStyleButton, mCheckBoxShowMarkersAtSampledPoints);

        retranslateUi(QgsVectorElevationPropertiesWidgetBase);

        mInterpretationStackedWidget->setCurrentIndex(1);
        mSymbologyStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsVectorElevationPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorElevationPropertiesWidgetBase)
    {
        QgsVectorElevationPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Vector Elevation Properties", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Vertical Reference System", nullptr));
        mCrsDisabledLabel->setText(QString());
        label->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "<html><head/><body><p>Vertical reference systems are supported for vector layers by:</p>\n"
"<ul>\n"
"<li>Elevation profiles</li>\n"
"<li>Identify tool results</li>\n"
"<li>3D map views (when 3D view has a vertical reference system set)</li>\n"
"</ul>\n"
"<p><i>Other tools or plugins may ignore the vertical reference system, and care should be taken to validate results accordingly.</i></p>\n"
"</body></html>", nullptr));
        mElevationGroupBox->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Elevation Clamping", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "\342\200\246", nullptr));
        mOffsetLabel->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Offset", nullptr));
        mLabelClampingExplanation->setText(QString());
        mLabelScale->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Scale", nullptr));
        mBindingGroupBox->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Elevation Binding", nullptr));
        mLabelBindingExplanation->setText(QString());
        mExtrusionGroupBox->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Enable Extrusion", nullptr));
        label_3->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Height", nullptr));
        mExtrusionDDBtn->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "\342\200\246", nullptr));
        mLabelExtrusionExplanation->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Extrusion controls how high features extend vertically above their base.", nullptr));
#if QT_CONFIG(tooltip)
        mToleranceGroupBox->setToolTip(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "If checked, the layer will use this tolerance instead of the one defined in the Elevation Profile widget.", nullptr));
#endif // QT_CONFIG(tooltip)
        mToleranceGroupBox->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Custom Tolerance", nullptr));
        label_Tolerance->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Tolerance", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Profile Chart Appearance", nullptr));
        label_7->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Interpretation", nullptr));
        mLineStyleButton->setText(QString());
        label_6->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Fill style", nullptr));
        mFillStyleButton->setText(QString());
#if QT_CONFIG(tooltip)
        mCheckRespectLayerSymbology->setToolTip(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "If checked, then features will be shown in profile charts using the same symbols or colors as they use on 2D maps.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckRespectLayerSymbology->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Respect layer's symbology", nullptr));
        label_4->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Line style", nullptr));
        mMarkerStyleButton->setText(QString());
        label_5->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Marker style", nullptr));
        label_9->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Line style", nullptr));
        mSurfaceLineStyleButton->setText(QString());
        label_14->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Limit", nullptr));
        mSurfaceFillStyleButton->setText(QString());
        label_10->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Fill style", nullptr));
        mCheckBoxShowMarkersAtSampledPoints->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Show markers at sampled points", nullptr));
        label_8->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Style", nullptr));
        mSurfaceMarkerStyleButton->setText(QString());
        label_11->setText(QCoreApplication::translate("QgsVectorElevationPropertiesWidgetBase", "Marker style", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorElevationPropertiesWidgetBase: public Ui_QgsVectorElevationPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORELEVATIONPROPERTIESWIDGETBASE_H
