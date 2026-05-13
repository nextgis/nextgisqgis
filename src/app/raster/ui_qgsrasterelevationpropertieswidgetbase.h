/********************************************************************************
** Form generated from reading UI file 'qgsrasterelevationpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERELEVATIONPROPERTIESWIDGETBASE_H
#define UI_QGSRASTERELEVATIONPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsrasterbandcombobox.h"
#include "qgsstackedwidget.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterElevationPropertiesWidgetBase
{
public:
    QGridLayout *gridLayout_11;
    QSpacerItem *verticalSpacer;
    QgsStackedWidget *mStackedWidget;
    QWidget *mPageDisabled;
    QVBoxLayout *verticalLayout;
    QLabel *label_29;
    QWidget *mPageSurface;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QLabel *label;
    QgsDoubleSpinBox *mScaleZSpinBox;
    QLabel *label_3;
    QgsDoubleSpinBox *mOffsetZSpinBox;
    QgsRasterBandComboBox *mBandComboBox;
    QLabel *label_5;
    QWidget *mPageFixedRange;
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QComboBox *mLimitsComboBox;
    QLabel *label_13;
    QLabel *mLimitsLabel;
    QgsDoubleSpinBox *mFixedUpperSpinBox;
    QgsDoubleSpinBox *mFixedLowerSpinBox;
    QLabel *label_10;
    QWidget *mPageFixedRangePerBand;
    QGridLayout *gridLayout_6;
    QWidget *mWidgetFixedRangePerBand;
    QGridLayout *gridLayout_7;
    QTableView *mBandElevationTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mCalculateFixedRangePerBandButton;
    QLabel *mFixedRangePerBandLabel;
    QWidget *mPageDynamicPerBand;
    QGridLayout *gridLayout_8;
    QLabel *label_11;
    QgsFieldExpressionWidget *mLowerExpressionWidget;
    QgsFieldExpressionWidget *mUpperExpressionWidget;
    QLabel *mFixedRangePerBandLabel_2;
    QLabel *label_14;
    QTableView *mBandDynamicElevationTable;
    QComboBox *mModeComboBox;
    QGroupBox *mProfileChartGroupBox;
    QGridLayout *gridLayout;
    QgsStackedWidget *mSymbologyStackedWidget;
    QWidget *mPageLine;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QgsSymbolButton *mLineStyleButton;
    QWidget *mPageFill;
    QGridLayout *gridLayout_3;
    QgsSymbolButton *mFillStyleButton;
    QLabel *label_8;
    QLabel *label_7;
    QgsDoubleSpinBox *mElevationLimitSpinBox;
    QLabel *label_6;
    QComboBox *mStyleComboBox;
    QLabel *label_9;

    void setupUi(QWidget *QgsRasterElevationPropertiesWidgetBase)
    {
        if (QgsRasterElevationPropertiesWidgetBase->objectName().isEmpty())
            QgsRasterElevationPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsRasterElevationPropertiesWidgetBase"));
        QgsRasterElevationPropertiesWidgetBase->resize(537, 575);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsRasterElevationPropertiesWidgetBase->sizePolicy().hasHeightForWidth());
        QgsRasterElevationPropertiesWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_11 = new QGridLayout(QgsRasterElevationPropertiesWidgetBase);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer, 3, 0, 1, 1);

        mStackedWidget = new QgsStackedWidget(QgsRasterElevationPropertiesWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mStackedWidget->sizePolicy().hasHeightForWidth());
        mStackedWidget->setSizePolicy(sizePolicy1);
        mStackedWidget->setFrameShape(QFrame::NoFrame);
        mPageDisabled = new QWidget();
        mPageDisabled->setObjectName(QString::fromUtf8("mPageDisabled"));
        sizePolicy1.setHeightForWidth(mPageDisabled->sizePolicy().hasHeightForWidth());
        mPageDisabled->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(mPageDisabled);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_29 = new QLabel(mPageDisabled);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        sizePolicy1.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy1);
        label_29->setWordWrap(false);

        verticalLayout->addWidget(label_29);

        mStackedWidget->addWidget(mPageDisabled);
        mPageSurface = new QWidget();
        mPageSurface->setObjectName(QString::fromUtf8("mPageSurface"));
        sizePolicy1.setHeightForWidth(mPageSurface->sizePolicy().hasHeightForWidth());
        mPageSurface->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(mPageSurface);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_2 = new QLabel(mPageSurface);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(mPageSurface);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 2, 0, 1, 1);

        mScaleZSpinBox = new QgsDoubleSpinBox(mPageSurface);
        mScaleZSpinBox->setObjectName(QString::fromUtf8("mScaleZSpinBox"));
        mScaleZSpinBox->setDecimals(6);
        mScaleZSpinBox->setMinimum(-99999999999.000000000000000);
        mScaleZSpinBox->setMaximum(99999999999.000000000000000);
        mScaleZSpinBox->setValue(1.000000000000000);

        gridLayout_5->addWidget(mScaleZSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(mPageSurface);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setWordWrap(true);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 2);

        mOffsetZSpinBox = new QgsDoubleSpinBox(mPageSurface);
        mOffsetZSpinBox->setObjectName(QString::fromUtf8("mOffsetZSpinBox"));
        mOffsetZSpinBox->setDecimals(6);
        mOffsetZSpinBox->setMinimum(-99999999999.000000000000000);
        mOffsetZSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_5->addWidget(mOffsetZSpinBox, 2, 1, 1, 1);

        mBandComboBox = new QgsRasterBandComboBox(mPageSurface);
        mBandComboBox->setObjectName(QString::fromUtf8("mBandComboBox"));

        gridLayout_5->addWidget(mBandComboBox, 3, 1, 1, 1);

        label_5 = new QLabel(mPageSurface);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 3, 0, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageSurface);
        mPageFixedRange = new QWidget();
        mPageFixedRange->setObjectName(QString::fromUtf8("mPageFixedRange"));
        sizePolicy1.setHeightForWidth(mPageFixedRange->sizePolicy().hasHeightForWidth());
        mPageFixedRange->setSizePolicy(sizePolicy1);
        mPageFixedRange->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(mPageFixedRange);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_12 = new QLabel(mPageFixedRange);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        mLimitsComboBox = new QComboBox(mPageFixedRange);
        mLimitsComboBox->setObjectName(QString::fromUtf8("mLimitsComboBox"));

        gridLayout_2->addWidget(mLimitsComboBox, 3, 1, 1, 1);

        label_13 = new QLabel(mPageFixedRange);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        mLimitsLabel = new QLabel(mPageFixedRange);
        mLimitsLabel->setObjectName(QString::fromUtf8("mLimitsLabel"));

        gridLayout_2->addWidget(mLimitsLabel, 3, 0, 1, 1);

        mFixedUpperSpinBox = new QgsDoubleSpinBox(mPageFixedRange);
        mFixedUpperSpinBox->setObjectName(QString::fromUtf8("mFixedUpperSpinBox"));
        mFixedUpperSpinBox->setDecimals(4);
        mFixedUpperSpinBox->setMinimum(-9999999998.000000000000000);
        mFixedUpperSpinBox->setMaximum(9999999999.000000000000000);

        gridLayout_2->addWidget(mFixedUpperSpinBox, 2, 1, 1, 1);

        mFixedLowerSpinBox = new QgsDoubleSpinBox(mPageFixedRange);
        mFixedLowerSpinBox->setObjectName(QString::fromUtf8("mFixedLowerSpinBox"));
        mFixedLowerSpinBox->setDecimals(4);
        mFixedLowerSpinBox->setMinimum(-9999999998.000000000000000);
        mFixedLowerSpinBox->setMaximum(9999999999.000000000000000);

        gridLayout_2->addWidget(mFixedLowerSpinBox, 1, 1, 1, 1);

        label_10 = new QLabel(mPageFixedRange);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setWordWrap(true);

        gridLayout_2->addWidget(label_10, 0, 0, 1, 2);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageFixedRange);
        mPageFixedRangePerBand = new QWidget();
        mPageFixedRangePerBand->setObjectName(QString::fromUtf8("mPageFixedRangePerBand"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPageFixedRangePerBand->sizePolicy().hasHeightForWidth());
        mPageFixedRangePerBand->setSizePolicy(sizePolicy2);
        gridLayout_6 = new QGridLayout(mPageFixedRangePerBand);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mWidgetFixedRangePerBand = new QWidget(mPageFixedRangePerBand);
        mWidgetFixedRangePerBand->setObjectName(QString::fromUtf8("mWidgetFixedRangePerBand"));
        gridLayout_7 = new QGridLayout(mWidgetFixedRangePerBand);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mBandElevationTable = new QTableView(mWidgetFixedRangePerBand);
        mBandElevationTable->setObjectName(QString::fromUtf8("mBandElevationTable"));

        gridLayout_7->addWidget(mBandElevationTable, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mCalculateFixedRangePerBandButton = new QToolButton(mWidgetFixedRangePerBand);
        mCalculateFixedRangePerBandButton->setObjectName(QString::fromUtf8("mCalculateFixedRangePerBandButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCalculateFixedRangePerBandButton->setIcon(icon);
        mCalculateFixedRangePerBandButton->setPopupMode(QToolButton::MenuButtonPopup);
        mCalculateFixedRangePerBandButton->setAutoRaise(false);

        horizontalLayout->addWidget(mCalculateFixedRangePerBandButton);


        gridLayout_7->addLayout(horizontalLayout, 1, 1, 1, 1);


        gridLayout_6->addWidget(mWidgetFixedRangePerBand, 1, 0, 1, 1);

        mFixedRangePerBandLabel = new QLabel(mPageFixedRangePerBand);
        mFixedRangePerBandLabel->setObjectName(QString::fromUtf8("mFixedRangePerBandLabel"));
        sizePolicy1.setHeightForWidth(mFixedRangePerBandLabel->sizePolicy().hasHeightForWidth());
        mFixedRangePerBandLabel->setSizePolicy(sizePolicy1);
        mFixedRangePerBandLabel->setWordWrap(true);

        gridLayout_6->addWidget(mFixedRangePerBandLabel, 0, 0, 1, 1);

        mStackedWidget->addWidget(mPageFixedRangePerBand);
        mPageDynamicPerBand = new QWidget();
        mPageDynamicPerBand->setObjectName(QString::fromUtf8("mPageDynamicPerBand"));
        sizePolicy1.setHeightForWidth(mPageDynamicPerBand->sizePolicy().hasHeightForWidth());
        mPageDynamicPerBand->setSizePolicy(sizePolicy1);
        gridLayout_8 = new QGridLayout(mPageDynamicPerBand);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_11 = new QLabel(mPageDynamicPerBand);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_8->addWidget(label_11, 1, 0, 1, 1);

        mLowerExpressionWidget = new QgsFieldExpressionWidget(mPageDynamicPerBand);
        mLowerExpressionWidget->setObjectName(QString::fromUtf8("mLowerExpressionWidget"));
        sizePolicy1.setHeightForWidth(mLowerExpressionWidget->sizePolicy().hasHeightForWidth());
        mLowerExpressionWidget->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(mLowerExpressionWidget, 1, 1, 1, 1);

        mUpperExpressionWidget = new QgsFieldExpressionWidget(mPageDynamicPerBand);
        mUpperExpressionWidget->setObjectName(QString::fromUtf8("mUpperExpressionWidget"));
        sizePolicy1.setHeightForWidth(mUpperExpressionWidget->sizePolicy().hasHeightForWidth());
        mUpperExpressionWidget->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(mUpperExpressionWidget, 2, 1, 1, 1);

        mFixedRangePerBandLabel_2 = new QLabel(mPageDynamicPerBand);
        mFixedRangePerBandLabel_2->setObjectName(QString::fromUtf8("mFixedRangePerBandLabel_2"));
        sizePolicy1.setHeightForWidth(mFixedRangePerBandLabel_2->sizePolicy().hasHeightForWidth());
        mFixedRangePerBandLabel_2->setSizePolicy(sizePolicy1);
        mFixedRangePerBandLabel_2->setWordWrap(true);

        gridLayout_8->addWidget(mFixedRangePerBandLabel_2, 0, 0, 1, 2);

        label_14 = new QLabel(mPageDynamicPerBand);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_8->addWidget(label_14, 2, 0, 1, 1);

        mBandDynamicElevationTable = new QTableView(mPageDynamicPerBand);
        mBandDynamicElevationTable->setObjectName(QString::fromUtf8("mBandDynamicElevationTable"));

        gridLayout_8->addWidget(mBandDynamicElevationTable, 3, 0, 1, 2);

        gridLayout_8->setColumnStretch(0, 1);
        gridLayout_8->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageDynamicPerBand);

        gridLayout_11->addWidget(mStackedWidget, 1, 0, 1, 2);

        mModeComboBox = new QComboBox(QgsRasterElevationPropertiesWidgetBase);
        mModeComboBox->setObjectName(QString::fromUtf8("mModeComboBox"));

        gridLayout_11->addWidget(mModeComboBox, 0, 1, 1, 1);

        mProfileChartGroupBox = new QGroupBox(QgsRasterElevationPropertiesWidgetBase);
        mProfileChartGroupBox->setObjectName(QString::fromUtf8("mProfileChartGroupBox"));
        gridLayout = new QGridLayout(mProfileChartGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSymbologyStackedWidget = new QgsStackedWidget(mProfileChartGroupBox);
        mSymbologyStackedWidget->setObjectName(QString::fromUtf8("mSymbologyStackedWidget"));
        sizePolicy1.setHeightForWidth(mSymbologyStackedWidget->sizePolicy().hasHeightForWidth());
        mSymbologyStackedWidget->setSizePolicy(sizePolicy1);
        mPageLine = new QWidget();
        mPageLine->setObjectName(QString::fromUtf8("mPageLine"));
        gridLayout_4 = new QGridLayout(mPageLine);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(mPageLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        mLineStyleButton = new QgsSymbolButton(mPageLine);
        mLineStyleButton->setObjectName(QString::fromUtf8("mLineStyleButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mLineStyleButton->sizePolicy().hasHeightForWidth());
        mLineStyleButton->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(mLineStyleButton, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageLine);
        mPageFill = new QWidget();
        mPageFill->setObjectName(QString::fromUtf8("mPageFill"));
        gridLayout_3 = new QGridLayout(mPageFill);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mFillStyleButton = new QgsSymbolButton(mPageFill);
        mFillStyleButton->setObjectName(QString::fromUtf8("mFillStyleButton"));
        sizePolicy3.setHeightForWidth(mFillStyleButton->sizePolicy().hasHeightForWidth());
        mFillStyleButton->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(mFillStyleButton, 0, 1, 1, 1);

        label_8 = new QLabel(mPageFill);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        label_7 = new QLabel(mPageFill);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        mElevationLimitSpinBox = new QgsDoubleSpinBox(mPageFill);
        mElevationLimitSpinBox->setObjectName(QString::fromUtf8("mElevationLimitSpinBox"));
        mElevationLimitSpinBox->setDecimals(6);
        mElevationLimitSpinBox->setMinimum(-99999.000000000000000);
        mElevationLimitSpinBox->setMaximum(99999.000000000000000);

        gridLayout_3->addWidget(mElevationLimitSpinBox, 1, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageFill);

        gridLayout->addWidget(mSymbologyStackedWidget, 1, 0, 1, 2);

        label_6 = new QLabel(mProfileChartGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        mStyleComboBox = new QComboBox(mProfileChartGroupBox);
        mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

        gridLayout->addWidget(mStyleComboBox, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        gridLayout_11->addWidget(mProfileChartGroupBox, 2, 0, 1, 2);

        label_9 = new QLabel(QgsRasterElevationPropertiesWidgetBase);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_11->addWidget(label_9, 0, 0, 1, 1);

        gridLayout_11->setColumnStretch(0, 1);
        gridLayout_11->setColumnStretch(1, 2);

        retranslateUi(QgsRasterElevationPropertiesWidgetBase);

        mStackedWidget->setCurrentIndex(4);
        mSymbologyStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterElevationPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterElevationPropertiesWidgetBase)
    {
        QgsRasterElevationPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Raster Elevation Properties", nullptr));
        label_29->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "The layer does not contain any elevation related data.", nullptr));
        label_2->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Scale", nullptr));
        label->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Offset", nullptr));
        label_3->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The pixel values in the layer represent an elevation surface, such as a Digital Elevation Model (DEM).</span></p><p>Elevation scaling and offset can be used to manually correct elevation values from the layer. The scale is applied to the raster values before adding the offset.</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Band", nullptr));
        label_12->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Lower", nullptr));
        label_13->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Upper", nullptr));
        mLimitsLabel->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Limits", nullptr));
        label_10->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The raster layer (or selected raster band) is associated with a fixed elevation range.</span></p><p>This mode can be used when a layer has a single fixed elevation, or a range (slice) of elevation values. If a range is specified, pixels will be extruded over this range.</p></body></html>", nullptr));
        mCalculateFixedRangePerBandButton->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "...", nullptr));
        mFixedRangePerBandLabel->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Each band in the raster layer is associated with a fixed elevation range.</span></p><p>This mode can be used when a layer has elevation data exposed through different raster bands.</p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Lower ", nullptr));
        mFixedRangePerBandLabel_2->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Each band in the raster layer is associated with an elevation range, calculated via expressions.</span></p><p>This mode can be used when a layer has elevation data exposed through different raster bands.</p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Upper", nullptr));
        mProfileChartGroupBox->setTitle(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Profile Chart Appearance", nullptr));
        label_4->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Line style", nullptr));
        mLineStyleButton->setText(QString());
        mFillStyleButton->setText(QString());
        label_8->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Limit", nullptr));
        label_7->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Fill style", nullptr));
        label_6->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Style", nullptr));
        label_9->setText(QCoreApplication::translate("QgsRasterElevationPropertiesWidgetBase", "Configuration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterElevationPropertiesWidgetBase: public Ui_QgsRasterElevationPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERELEVATIONPROPERTIESWIDGETBASE_H
