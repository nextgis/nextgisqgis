/********************************************************************************
** Form generated from reading UI file 'qgsmeshrenderervectorsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgscolorrampshaderwidget.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererVectorSettingsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *filterByMagnitudeLabel;
    QLabel *maximumMagLabel;
    QgsDoubleSpinBox *mMaxMagSpinBox;
    QLabel *minimumMagLabel;
    QgsDoubleSpinBox *mMinMagSpinBox;
    QgsColorButton *mColorWidget;
    QgsCollapsibleGroupBox *mColorRampShaderGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QPushButton *mColorRampShaderLoadButton;
    QgsColorRampShaderWidget *mColorRampShaderWidget;
    QFrame *line;
    QgsDoubleSpinBox *mColorRampShaderMaximumSpinBox;
    QLabel *label;
    QgsDoubleSpinBox *mColorRampShaderMinimumSpinBox;
    QComboBox *mColoringMethodComboBox;
    QgsDoubleSpinBox *mLineWidthSpinBox;
    QComboBox *mSymbologyVectorComboBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *mHeadOptionsGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *percShaftLenLabel_2;
    QgsDoubleSpinBox *mHeadWidthSpinBox;
    QgsDoubleSpinBox *mHeadLengthSpinBox;
    QLabel *percShaftLenLabel;
    QLabel *headLengthLabel;
    QLabel *headWidthLabel;
    QLabel *label_4;
    QGroupBox *mStreamlineWidget;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *mStreamlinesSeedingMethodComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mStreamlinesDensityLabel;
    QgsDoubleSpinBox *mStreamlinesDensitySpinBox;
    QGroupBox *mDisplayVectorsOnGridGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *xSpacingLabel;
    QgsSpinBox *mXSpacingSpinBox;
    QLabel *ySpacingLabel;
    QgsSpinBox *mYSpacingSpinBox;
    QLabel *symbologyLabel;
    QLabel *label_6;
    QLabel *mSingleColorLabel;
    QGroupBox *mArrowLengthGroupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *mShaftLengthComboBox;
    QStackedWidget *mShaftOptionsStackedWidget;
    QWidget *page;
    QFormLayout *formLayout;
    QLabel *minimumShaftLabel;
    QLabel *maximumShaftLabel;
    QgsDoubleSpinBox *mMinimumShaftSpinBox;
    QgsDoubleSpinBox *mMaximumShaftSpinBox;
    QWidget *page_2;
    QFormLayout *formLayout_2;
    QgsDoubleSpinBox *mScaleShaftByFactorOfSpinBox;
    QLabel *scaleByFactorOfLabel;
    QWidget *page_3;
    QFormLayout *formLayout_3;
    QgsDoubleSpinBox *mShaftLengthSpinBox;
    QLabel *LengthLabel;
    QGroupBox *mTracesGroupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QgsSpinBox *mTracesParticlesCountSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QgsDoubleSpinBox *mTracesMaxLengthSpinBox;
    QgsUnitSelectionWidget *mTracesTailLengthMapUnitWidget;
    QGroupBox *mWindBarbGroupBox;
    QFormLayout *formLayout_4;
    QLabel *windBarbLengthLabel;
    QLabel *windBarbUnitsLabel;
    QComboBox *mWindBarbUnitsComboBox;
    QLabel *mWindBarbMagnitudeMultiplierLabel;
    QgsDoubleSpinBox *mWindBarbMagnitudeMultiplierSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mWindBarbLengthSpinBox;
    QgsUnitSelectionWidget *mWindBarbLengthMapUnitWidget;

    void setupUi(QWidget *QgsMeshRendererVectorSettingsWidgetBase)
    {
        if (QgsMeshRendererVectorSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererVectorSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsMeshRendererVectorSettingsWidgetBase"));
        QgsMeshRendererVectorSettingsWidgetBase->resize(426, 1006);
        QgsMeshRendererVectorSettingsWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsMeshRendererVectorSettingsWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        filterByMagnitudeLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        filterByMagnitudeLabel->setObjectName(QString::fromUtf8("filterByMagnitudeLabel"));

        gridLayout_3->addWidget(filterByMagnitudeLabel, 0, 0, 2, 1);

        maximumMagLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        maximumMagLabel->setObjectName(QString::fromUtf8("maximumMagLabel"));

        gridLayout_3->addWidget(maximumMagLabel, 1, 1, 1, 1);

        mMaxMagSpinBox = new QgsDoubleSpinBox(QgsMeshRendererVectorSettingsWidgetBase);
        mMaxMagSpinBox->setObjectName(QString::fromUtf8("mMaxMagSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mMaxMagSpinBox->sizePolicy().hasHeightForWidth());
        mMaxMagSpinBox->setSizePolicy(sizePolicy);
        mMaxMagSpinBox->setMinimum(-1000000000000000.000000000000000);
        mMaxMagSpinBox->setMaximum(1000000000000000.000000000000000);

        gridLayout_3->addWidget(mMaxMagSpinBox, 1, 2, 1, 1);

        minimumMagLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        minimumMagLabel->setObjectName(QString::fromUtf8("minimumMagLabel"));

        gridLayout_3->addWidget(minimumMagLabel, 0, 1, 1, 1);

        mMinMagSpinBox = new QgsDoubleSpinBox(QgsMeshRendererVectorSettingsWidgetBase);
        mMinMagSpinBox->setObjectName(QString::fromUtf8("mMinMagSpinBox"));
        mMinMagSpinBox->setMinimum(-1000000000000000.000000000000000);
        mMinMagSpinBox->setMaximum(1000000000000000.000000000000000);

        gridLayout_3->addWidget(mMinMagSpinBox, 0, 2, 1, 1);


        gridLayout->addLayout(gridLayout_3, 7, 0, 1, 2);

        mColorWidget = new QgsColorButton(QgsMeshRendererVectorSettingsWidgetBase);
        mColorWidget->setObjectName(QString::fromUtf8("mColorWidget"));
        mColorWidget->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(mColorWidget, 5, 1, 1, 1);

        mColorRampShaderGroupBox = new QgsCollapsibleGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mColorRampShaderGroupBox->setObjectName(QString::fromUtf8("mColorRampShaderGroupBox"));
        gridLayout_5 = new QGridLayout(mColorRampShaderGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(mColorRampShaderGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 0, 2, 1, 1);

        mColorRampShaderLoadButton = new QPushButton(mColorRampShaderGroupBox);
        mColorRampShaderLoadButton->setObjectName(QString::fromUtf8("mColorRampShaderLoadButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mColorRampShaderLoadButton->setIcon(icon);

        gridLayout_5->addWidget(mColorRampShaderLoadButton, 0, 4, 1, 1);

        mColorRampShaderWidget = new QgsColorRampShaderWidget(mColorRampShaderGroupBox);
        mColorRampShaderWidget->setObjectName(QString::fromUtf8("mColorRampShaderWidget"));
        mColorRampShaderWidget->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(mColorRampShaderWidget, 2, 0, 1, 5);

        line = new QFrame(mColorRampShaderGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 1, 0, 1, 5);

        mColorRampShaderMaximumSpinBox = new QgsDoubleSpinBox(mColorRampShaderGroupBox);
        mColorRampShaderMaximumSpinBox->setObjectName(QString::fromUtf8("mColorRampShaderMaximumSpinBox"));
        sizePolicy.setHeightForWidth(mColorRampShaderMaximumSpinBox->sizePolicy().hasHeightForWidth());
        mColorRampShaderMaximumSpinBox->setSizePolicy(sizePolicy);
        mColorRampShaderMaximumSpinBox->setMinimum(-1000000000000000.000000000000000);
        mColorRampShaderMaximumSpinBox->setMaximum(1000000000000000.000000000000000);

        gridLayout_5->addWidget(mColorRampShaderMaximumSpinBox, 0, 3, 1, 1);

        label = new QLabel(mColorRampShaderGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        mColorRampShaderMinimumSpinBox = new QgsDoubleSpinBox(mColorRampShaderGroupBox);
        mColorRampShaderMinimumSpinBox->setObjectName(QString::fromUtf8("mColorRampShaderMinimumSpinBox"));
        sizePolicy.setHeightForWidth(mColorRampShaderMinimumSpinBox->sizePolicy().hasHeightForWidth());
        mColorRampShaderMinimumSpinBox->setSizePolicy(sizePolicy);
        mColorRampShaderMinimumSpinBox->setMinimum(-1000000000000000.000000000000000);
        mColorRampShaderMinimumSpinBox->setMaximum(1000000000000000.000000000000000);

        gridLayout_5->addWidget(mColorRampShaderMinimumSpinBox, 0, 1, 1, 1);


        gridLayout->addWidget(mColorRampShaderGroupBox, 6, 0, 1, 2);

        mColoringMethodComboBox = new QComboBox(QgsMeshRendererVectorSettingsWidgetBase);
        mColoringMethodComboBox->setObjectName(QString::fromUtf8("mColoringMethodComboBox"));

        gridLayout->addWidget(mColoringMethodComboBox, 4, 1, 1, 1);

        mLineWidthSpinBox = new QgsDoubleSpinBox(QgsMeshRendererVectorSettingsWidgetBase);
        mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mLineWidthSpinBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLineWidthSpinBox, 3, 1, 1, 1);

        mSymbologyVectorComboBox = new QComboBox(QgsMeshRendererVectorSettingsWidgetBase);
        mSymbologyVectorComboBox->addItem(QString());
        mSymbologyVectorComboBox->addItem(QString());
        mSymbologyVectorComboBox->addItem(QString());
        mSymbologyVectorComboBox->addItem(QString());
        mSymbologyVectorComboBox->setObjectName(QString::fromUtf8("mSymbologyVectorComboBox"));

        gridLayout->addWidget(mSymbologyVectorComboBox, 2, 1, 1, 1);

        widget = new QWidget(QgsMeshRendererVectorSettingsWidgetBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(widget, 1, 0, 1, 1);

        mHeadOptionsGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mHeadOptionsGroupBox->setObjectName(QString::fromUtf8("mHeadOptionsGroupBox"));
        gridLayout_4 = new QGridLayout(mHeadOptionsGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        percShaftLenLabel_2 = new QLabel(mHeadOptionsGroupBox);
        percShaftLenLabel_2->setObjectName(QString::fromUtf8("percShaftLenLabel_2"));

        gridLayout_4->addWidget(percShaftLenLabel_2, 1, 2, 1, 1);

        mHeadWidthSpinBox = new QgsDoubleSpinBox(mHeadOptionsGroupBox);
        mHeadWidthSpinBox->setObjectName(QString::fromUtf8("mHeadWidthSpinBox"));
        mHeadWidthSpinBox->setMaximum(100.000000000000000);

        gridLayout_4->addWidget(mHeadWidthSpinBox, 0, 1, 1, 1);

        mHeadLengthSpinBox = new QgsDoubleSpinBox(mHeadOptionsGroupBox);
        mHeadLengthSpinBox->setObjectName(QString::fromUtf8("mHeadLengthSpinBox"));
        sizePolicy.setHeightForWidth(mHeadLengthSpinBox->sizePolicy().hasHeightForWidth());
        mHeadLengthSpinBox->setSizePolicy(sizePolicy);
        mHeadLengthSpinBox->setMaximum(100.000000000000000);

        gridLayout_4->addWidget(mHeadLengthSpinBox, 1, 1, 1, 1);

        percShaftLenLabel = new QLabel(mHeadOptionsGroupBox);
        percShaftLenLabel->setObjectName(QString::fromUtf8("percShaftLenLabel"));

        gridLayout_4->addWidget(percShaftLenLabel, 0, 2, 1, 1);

        headLengthLabel = new QLabel(mHeadOptionsGroupBox);
        headLengthLabel->setObjectName(QString::fromUtf8("headLengthLabel"));

        gridLayout_4->addWidget(headLengthLabel, 1, 0, 1, 1);

        headWidthLabel = new QLabel(mHeadOptionsGroupBox);
        headWidthLabel->setObjectName(QString::fromUtf8("headWidthLabel"));

        gridLayout_4->addWidget(headWidthLabel, 0, 0, 1, 1);


        gridLayout->addWidget(mHeadOptionsGroupBox, 11, 0, 1, 2);

        label_4 = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        mStreamlineWidget = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mStreamlineWidget->setObjectName(QString::fromUtf8("mStreamlineWidget"));
        horizontalLayout_4 = new QHBoxLayout(mStreamlineWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mStreamlinesSeedingMethodComboBox = new QComboBox(mStreamlineWidget);
        mStreamlinesSeedingMethodComboBox->addItem(QString());
        mStreamlinesSeedingMethodComboBox->addItem(QString());
        mStreamlinesSeedingMethodComboBox->setObjectName(QString::fromUtf8("mStreamlinesSeedingMethodComboBox"));

        horizontalLayout_4->addWidget(mStreamlinesSeedingMethodComboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mStreamlinesDensityLabel = new QLabel(mStreamlineWidget);
        mStreamlinesDensityLabel->setObjectName(QString::fromUtf8("mStreamlinesDensityLabel"));

        horizontalLayout->addWidget(mStreamlinesDensityLabel);

        mStreamlinesDensitySpinBox = new QgsDoubleSpinBox(mStreamlineWidget);
        mStreamlinesDensitySpinBox->setObjectName(QString::fromUtf8("mStreamlinesDensitySpinBox"));
        mStreamlinesDensitySpinBox->setDecimals(1);
        mStreamlinesDensitySpinBox->setValue(5.000000000000000);

        horizontalLayout->addWidget(mStreamlinesDensitySpinBox);

        horizontalLayout->setStretch(0, 1);

        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 2);

        gridLayout->addWidget(mStreamlineWidget, 13, 0, 1, 2);

        mDisplayVectorsOnGridGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mDisplayVectorsOnGridGroupBox->setObjectName(QString::fromUtf8("mDisplayVectorsOnGridGroupBox"));
        mDisplayVectorsOnGridGroupBox->setCheckable(true);
        mDisplayVectorsOnGridGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(mDisplayVectorsOnGridGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        xSpacingLabel = new QLabel(mDisplayVectorsOnGridGroupBox);
        xSpacingLabel->setObjectName(QString::fromUtf8("xSpacingLabel"));

        gridLayout_2->addWidget(xSpacingLabel, 0, 0, 1, 1);

        mXSpacingSpinBox = new QgsSpinBox(mDisplayVectorsOnGridGroupBox);
        mXSpacingSpinBox->setObjectName(QString::fromUtf8("mXSpacingSpinBox"));
        mXSpacingSpinBox->setMinimum(1);
        mXSpacingSpinBox->setMaximum(8000);
        mXSpacingSpinBox->setSingleStep(10);
        mXSpacingSpinBox->setValue(10);

        gridLayout_2->addWidget(mXSpacingSpinBox, 0, 1, 1, 1);

        ySpacingLabel = new QLabel(mDisplayVectorsOnGridGroupBox);
        ySpacingLabel->setObjectName(QString::fromUtf8("ySpacingLabel"));

        gridLayout_2->addWidget(ySpacingLabel, 1, 0, 1, 1);

        mYSpacingSpinBox = new QgsSpinBox(mDisplayVectorsOnGridGroupBox);
        mYSpacingSpinBox->setObjectName(QString::fromUtf8("mYSpacingSpinBox"));
        mYSpacingSpinBox->setMinimum(1);
        mYSpacingSpinBox->setMaximum(5000);
        mYSpacingSpinBox->setSingleStep(10);
        mYSpacingSpinBox->setValue(10);

        gridLayout_2->addWidget(mYSpacingSpinBox, 1, 1, 1, 1);


        gridLayout->addWidget(mDisplayVectorsOnGridGroupBox, 10, 0, 1, 2);

        symbologyLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        symbologyLabel->setObjectName(QString::fromUtf8("symbologyLabel"));

        gridLayout->addWidget(symbologyLabel, 2, 0, 1, 1);

        label_6 = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        mSingleColorLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        mSingleColorLabel->setObjectName(QString::fromUtf8("mSingleColorLabel"));

        gridLayout->addWidget(mSingleColorLabel, 5, 0, 1, 1);

        mArrowLengthGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mArrowLengthGroupBox->setObjectName(QString::fromUtf8("mArrowLengthGroupBox"));
        verticalLayout_2 = new QVBoxLayout(mArrowLengthGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mShaftLengthComboBox = new QComboBox(mArrowLengthGroupBox);
        mShaftLengthComboBox->addItem(QString());
        mShaftLengthComboBox->addItem(QString());
        mShaftLengthComboBox->addItem(QString());
        mShaftLengthComboBox->setObjectName(QString::fromUtf8("mShaftLengthComboBox"));
        mShaftLengthComboBox->setMinimumSize(QSize(0, 0));
        mShaftLengthComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        verticalLayout_2->addWidget(mShaftLengthComboBox);

        mShaftOptionsStackedWidget = new QStackedWidget(mArrowLengthGroupBox);
        mShaftOptionsStackedWidget->setObjectName(QString::fromUtf8("mShaftOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        formLayout = new QFormLayout(page);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        minimumShaftLabel = new QLabel(page);
        minimumShaftLabel->setObjectName(QString::fromUtf8("minimumShaftLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, minimumShaftLabel);

        maximumShaftLabel = new QLabel(page);
        maximumShaftLabel->setObjectName(QString::fromUtf8("maximumShaftLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, maximumShaftLabel);

        mMinimumShaftSpinBox = new QgsDoubleSpinBox(page);
        mMinimumShaftSpinBox->setObjectName(QString::fromUtf8("mMinimumShaftSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mMinimumShaftSpinBox);

        mMaximumShaftSpinBox = new QgsDoubleSpinBox(page);
        mMaximumShaftSpinBox->setObjectName(QString::fromUtf8("mMaximumShaftSpinBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mMaximumShaftSpinBox);

        mShaftOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        formLayout_2 = new QFormLayout(page_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        mScaleShaftByFactorOfSpinBox = new QgsDoubleSpinBox(page_2);
        mScaleShaftByFactorOfSpinBox->setObjectName(QString::fromUtf8("mScaleShaftByFactorOfSpinBox"));
        sizePolicy.setHeightForWidth(mScaleShaftByFactorOfSpinBox->sizePolicy().hasHeightForWidth());
        mScaleShaftByFactorOfSpinBox->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mScaleShaftByFactorOfSpinBox);

        scaleByFactorOfLabel = new QLabel(page_2);
        scaleByFactorOfLabel->setObjectName(QString::fromUtf8("scaleByFactorOfLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, scaleByFactorOfLabel);

        mShaftOptionsStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        formLayout_3 = new QFormLayout(page_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        mShaftLengthSpinBox = new QgsDoubleSpinBox(page_3);
        mShaftLengthSpinBox->setObjectName(QString::fromUtf8("mShaftLengthSpinBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mShaftLengthSpinBox);

        LengthLabel = new QLabel(page_3);
        LengthLabel->setObjectName(QString::fromUtf8("LengthLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, LengthLabel);

        mShaftOptionsStackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(mShaftOptionsStackedWidget);


        gridLayout->addWidget(mArrowLengthGroupBox, 12, 0, 1, 2);

        mTracesGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mTracesGroupBox->setObjectName(QString::fromUtf8("mTracesGroupBox"));
        verticalLayout_6 = new QVBoxLayout(mTracesGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(mTracesGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        mTracesParticlesCountSpinBox = new QgsSpinBox(mTracesGroupBox);
        mTracesParticlesCountSpinBox->setObjectName(QString::fromUtf8("mTracesParticlesCountSpinBox"));
        mTracesParticlesCountSpinBox->setMaximum(1000000);
        mTracesParticlesCountSpinBox->setSingleStep(100);
        mTracesParticlesCountSpinBox->setValue(1000);

        horizontalLayout_6->addWidget(mTracesParticlesCountSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(mTracesGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        mTracesMaxLengthSpinBox = new QgsDoubleSpinBox(mTracesGroupBox);
        mTracesMaxLengthSpinBox->setObjectName(QString::fromUtf8("mTracesMaxLengthSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mTracesMaxLengthSpinBox->sizePolicy().hasHeightForWidth());
        mTracesMaxLengthSpinBox->setSizePolicy(sizePolicy2);
        mTracesMaxLengthSpinBox->setMinimumSize(QSize(0, 0));
        mTracesMaxLengthSpinBox->setMaximumSize(QSize(16777215, 16777215));
        mTracesMaxLengthSpinBox->setMinimum(1.000000000000000);
        mTracesMaxLengthSpinBox->setMaximum(99999999999999.000000000000000);
        mTracesMaxLengthSpinBox->setSingleStep(10.000000000000000);
        mTracesMaxLengthSpinBox->setValue(10.000000000000000);

        horizontalLayout_7->addWidget(mTracesMaxLengthSpinBox);

        mTracesTailLengthMapUnitWidget = new QgsUnitSelectionWidget(mTracesGroupBox);
        mTracesTailLengthMapUnitWidget->setObjectName(QString::fromUtf8("mTracesTailLengthMapUnitWidget"));

        horizontalLayout_7->addWidget(mTracesTailLengthMapUnitWidget);


        verticalLayout_6->addLayout(horizontalLayout_7);


        gridLayout->addWidget(mTracesGroupBox, 14, 0, 1, 2);

        mWindBarbGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mWindBarbGroupBox->setObjectName(QString::fromUtf8("mWindBarbGroupBox"));
        formLayout_4 = new QFormLayout(mWindBarbGroupBox);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        windBarbLengthLabel = new QLabel(mWindBarbGroupBox);
        windBarbLengthLabel->setObjectName(QString::fromUtf8("windBarbLengthLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, windBarbLengthLabel);

        windBarbUnitsLabel = new QLabel(mWindBarbGroupBox);
        windBarbUnitsLabel->setObjectName(QString::fromUtf8("windBarbUnitsLabel"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, windBarbUnitsLabel);

        mWindBarbUnitsComboBox = new QComboBox(mWindBarbGroupBox);
        mWindBarbUnitsComboBox->addItem(QString());
        mWindBarbUnitsComboBox->addItem(QString());
        mWindBarbUnitsComboBox->addItem(QString());
        mWindBarbUnitsComboBox->addItem(QString());
        mWindBarbUnitsComboBox->addItem(QString());
        mWindBarbUnitsComboBox->addItem(QString());
        mWindBarbUnitsComboBox->setObjectName(QString::fromUtf8("mWindBarbUnitsComboBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, mWindBarbUnitsComboBox);

        mWindBarbMagnitudeMultiplierLabel = new QLabel(mWindBarbGroupBox);
        mWindBarbMagnitudeMultiplierLabel->setObjectName(QString::fromUtf8("mWindBarbMagnitudeMultiplierLabel"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, mWindBarbMagnitudeMultiplierLabel);

        mWindBarbMagnitudeMultiplierSpinBox = new QgsDoubleSpinBox(mWindBarbGroupBox);
        mWindBarbMagnitudeMultiplierSpinBox->setObjectName(QString::fromUtf8("mWindBarbMagnitudeMultiplierSpinBox"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, mWindBarbMagnitudeMultiplierSpinBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mWindBarbLengthSpinBox = new QgsDoubleSpinBox(mWindBarbGroupBox);
        mWindBarbLengthSpinBox->setObjectName(QString::fromUtf8("mWindBarbLengthSpinBox"));

        horizontalLayout_2->addWidget(mWindBarbLengthSpinBox);

        mWindBarbLengthMapUnitWidget = new QgsUnitSelectionWidget(mWindBarbGroupBox);
        mWindBarbLengthMapUnitWidget->setObjectName(QString::fromUtf8("mWindBarbLengthMapUnitWidget"));

        horizontalLayout_2->addWidget(mWindBarbLengthMapUnitWidget);


        formLayout_4->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);


        gridLayout->addWidget(mWindBarbGroupBox, 15, 0, 1, 2);

        QWidget::setTabOrder(mSymbologyVectorComboBox, mLineWidthSpinBox);
        QWidget::setTabOrder(mLineWidthSpinBox, mColoringMethodComboBox);
        QWidget::setTabOrder(mColoringMethodComboBox, mColorWidget);
        QWidget::setTabOrder(mColorWidget, mColorRampShaderMinimumSpinBox);
        QWidget::setTabOrder(mColorRampShaderMinimumSpinBox, mColorRampShaderMaximumSpinBox);
        QWidget::setTabOrder(mColorRampShaderMaximumSpinBox, mColorRampShaderLoadButton);
        QWidget::setTabOrder(mColorRampShaderLoadButton, mMinMagSpinBox);
        QWidget::setTabOrder(mMinMagSpinBox, mMaxMagSpinBox);
        QWidget::setTabOrder(mMaxMagSpinBox, mDisplayVectorsOnGridGroupBox);
        QWidget::setTabOrder(mDisplayVectorsOnGridGroupBox, mXSpacingSpinBox);
        QWidget::setTabOrder(mXSpacingSpinBox, mYSpacingSpinBox);
        QWidget::setTabOrder(mYSpacingSpinBox, mHeadWidthSpinBox);
        QWidget::setTabOrder(mHeadWidthSpinBox, mHeadLengthSpinBox);
        QWidget::setTabOrder(mHeadLengthSpinBox, mShaftLengthComboBox);
        QWidget::setTabOrder(mShaftLengthComboBox, mMinimumShaftSpinBox);
        QWidget::setTabOrder(mMinimumShaftSpinBox, mMaximumShaftSpinBox);
        QWidget::setTabOrder(mMaximumShaftSpinBox, mStreamlinesSeedingMethodComboBox);
        QWidget::setTabOrder(mStreamlinesSeedingMethodComboBox, mStreamlinesDensitySpinBox);
        QWidget::setTabOrder(mStreamlinesDensitySpinBox, mTracesParticlesCountSpinBox);
        QWidget::setTabOrder(mTracesParticlesCountSpinBox, mTracesMaxLengthSpinBox);
        QWidget::setTabOrder(mTracesMaxLengthSpinBox, mScaleShaftByFactorOfSpinBox);
        QWidget::setTabOrder(mScaleShaftByFactorOfSpinBox, mShaftLengthSpinBox);

        retranslateUi(QgsMeshRendererVectorSettingsWidgetBase);

        mShaftOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsMeshRendererVectorSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererVectorSettingsWidgetBase)
    {
        filterByMagnitudeLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Filter by magnitude", nullptr));
        maximumMagLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max", nullptr));
        minimumMagLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Min", nullptr));
        mColorRampShaderGroupBox->setTitle(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Color Ramp Shader", nullptr));
        label_5->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max", nullptr));
#if QT_CONFIG(tooltip)
        mColorRampShaderLoadButton->setToolTip(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Load", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Min", nullptr));
        mSymbologyVectorComboBox->setItemText(0, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Arrows", nullptr));
        mSymbologyVectorComboBox->setItemText(1, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Streamlines", nullptr));
        mSymbologyVectorComboBox->setItemText(2, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Traces", nullptr));
        mSymbologyVectorComboBox->setItemText(3, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Wind Barbs", nullptr));

        mHeadOptionsGroupBox->setTitle(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Head Options", nullptr));
        percShaftLenLabel_2->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "% of shaft length", nullptr));
        percShaftLenLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "% of shaft length", nullptr));
        headLengthLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Length", nullptr));
        headWidthLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Width", nullptr));
        label_4->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Coloring Method", nullptr));
        mStreamlineWidget->setTitle(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Streamlines Seeding Method", nullptr));
        mStreamlinesSeedingMethodComboBox->setItemText(0, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "On Mesh/Grid", nullptr));
        mStreamlinesSeedingMethodComboBox->setItemText(1, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Randomly", nullptr));

        mStreamlinesDensityLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Density", nullptr));
        mStreamlinesDensitySpinBox->setSuffix(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "%", nullptr));
        mDisplayVectorsOnGridGroupBox->setTitle(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Display on User Grid", nullptr));
        xSpacingLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "X Spacing", nullptr));
        mXSpacingSpinBox->setSuffix(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", " px", nullptr));
        ySpacingLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Y Spacing", nullptr));
        mYSpacingSpinBox->setSuffix(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", " px", nullptr));
        symbologyLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Symbology", nullptr));
        label_6->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Line width", nullptr));
        mSingleColorLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Color", nullptr));
        mArrowLengthGroupBox->setTitle(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Arrow Length", nullptr));
        mShaftLengthComboBox->setItemText(0, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Defined by Min and Max", nullptr));
        mShaftLengthComboBox->setItemText(1, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Scaled to Magnitude", nullptr));
        mShaftLengthComboBox->setItemText(2, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Fixed", nullptr));

        minimumShaftLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Minimum", nullptr));
        maximumShaftLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Maximum", nullptr));
        scaleByFactorOfLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Scale by a factor of", nullptr));
        LengthLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Length", nullptr));
        mTracesGroupBox->setTitle(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Traces", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Particles count", nullptr));
        label_3->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max tail length", nullptr));
        mWindBarbGroupBox->setTitle(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Wind Barbs", nullptr));
        windBarbLengthLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Length", nullptr));
        windBarbUnitsLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Data units", nullptr));
        mWindBarbUnitsComboBox->setItemText(0, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "m/s", nullptr));
        mWindBarbUnitsComboBox->setItemText(1, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "km/h", nullptr));
        mWindBarbUnitsComboBox->setItemText(2, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "knots", nullptr));
        mWindBarbUnitsComboBox->setItemText(3, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "mi/h", nullptr));
        mWindBarbUnitsComboBox->setItemText(4, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "ft/s", nullptr));
        mWindBarbUnitsComboBox->setItemText(5, QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "other units", nullptr));

#if QT_CONFIG(tooltip)
        mWindBarbUnitsComboBox->setToolTip(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Select the units the data are in.<br>Values are converted to knots for rendering the wind barbs.", nullptr));
#endif // QT_CONFIG(tooltip)
        mWindBarbMagnitudeMultiplierLabel->setText(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Multiplier", nullptr));
#if QT_CONFIG(tooltip)
        mWindBarbMagnitudeMultiplierSpinBox->setToolTip(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Data will be multiplied by this value to be converted to knots (nautical miles per hour)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mWindBarbLengthSpinBox->setToolTip(QCoreApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "This defines the shaft length.<br>The pennants and barbs are scaled proportionally.", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsMeshRendererVectorSettingsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererVectorSettingsWidgetBase: public Ui_QgsMeshRendererVectorSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H
