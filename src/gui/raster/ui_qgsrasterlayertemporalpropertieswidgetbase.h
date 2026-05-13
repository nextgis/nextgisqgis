/********************************************************************************
** Form generated from reading UI file 'qgsrasterlayertemporalpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERTEMPORALPROPERTIESWIDGETBASE_H
#define UI_QGSRASTERLAYERTEMPORALPROPERTIESWIDGETBASE_H

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
#include "qgsdatetimeedit.h"
#include "qgsdoublespinbox.h"
#include "qgsrasterbandcombobox.h"
#include "qgsscrollarea.h"
#include "qgsstackedwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLayerTemporalPropertiesWidgetBase
{
public:
    QHBoxLayout *horizontalLayout_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QWidget *mExtraWidgetContainer;
    QGroupBox *mTemporalGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *mModeComboBox;
    QgsStackedWidget *mStackedWidget;
    QWidget *mPageFixedDateTime;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_4;
    QgsDateTimeEdit *mFixedDateTimeEdit;
    QLabel *label_15;
    QLabel *label_10;
    QWidget *mPageFixedRange;
    QGridLayout *gridLayout_6;
    QgsDateTimeEdit *mStartTemporalDateTimeEdit;
    QLabel *label_14;
    QgsDateTimeEdit *mEndTemporalDateTimeEdit;
    QLabel *label_6;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_3;
    QWidget *mPageAutomatic;
    QGridLayout *gridLayout_4;
    QLabel *label_28;
    QWidget *mPageRedrawOnly;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_16;
    QWidget *mPageFixedRangePerBand;
    QGridLayout *gridLayout_2;
    QLabel *mFixedRangePerBandLabel;
    QWidget *mWidgetFixedRangePerBand;
    QGridLayout *gridLayout_7;
    QTableView *mBandRangesTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mCalculateFixedRangePerBandButton;
    QWidget *mPageRepresentsTemporalValues;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_6;
    QgsDoubleSpinBox *mScaleSpinBox;
    QComboBox *mScaleUnitComboBox;
    QLabel *label_3;
    QgsDateTimeEdit *mOffsetDateTimeEdit;
    QgsRasterBandComboBox *mBandComboBox;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_1;

    void setupUi(QWidget *QgsRasterLayerTemporalPropertiesWidgetBase)
    {
        if (QgsRasterLayerTemporalPropertiesWidgetBase->objectName().isEmpty())
            QgsRasterLayerTemporalPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsRasterLayerTemporalPropertiesWidgetBase"));
        QgsRasterLayerTemporalPropertiesWidgetBase->resize(577, 678);
        QgsRasterLayerTemporalPropertiesWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout_5 = new QHBoxLayout(QgsRasterLayerTemporalPropertiesWidgetBase);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsRasterLayerTemporalPropertiesWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 577, 678));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mExtraWidgetContainer = new QWidget(scrollAreaWidgetContents);
        mExtraWidgetContainer->setObjectName(QString::fromUtf8("mExtraWidgetContainer"));

        gridLayout->addWidget(mExtraWidgetContainer, 1, 0, 1, 1);

        mTemporalGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mTemporalGroupBox->setObjectName(QString::fromUtf8("mTemporalGroupBox"));
        mTemporalGroupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTemporalGroupBox->sizePolicy().hasHeightForWidth());
        mTemporalGroupBox->setSizePolicy(sizePolicy);
        mTemporalGroupBox->setStyleSheet(QString::fromUtf8("QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}\n"
"background: white;QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsi"
                        "bleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position:"
                        " top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1"
                        "px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}"));
        mTemporalGroupBox->setCheckable(true);
        gridLayout_3 = new QGridLayout(mTemporalGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(mTemporalGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        mModeComboBox = new QComboBox(mTemporalGroupBox);
        mModeComboBox->setObjectName(QString::fromUtf8("mModeComboBox"));

        gridLayout_3->addWidget(mModeComboBox, 0, 1, 1, 1);

        mStackedWidget = new QgsStackedWidget(mTemporalGroupBox);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        mPageFixedDateTime = new QWidget();
        mPageFixedDateTime->setObjectName(QString::fromUtf8("mPageFixedDateTime"));
        gridLayout_8 = new QGridLayout(mPageFixedDateTime);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalSpacer_4 = new QSpacerItem(40, 219, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_4, 2, 0, 1, 1);

        mFixedDateTimeEdit = new QgsDateTimeEdit(mPageFixedDateTime);
        mFixedDateTimeEdit->setObjectName(QString::fromUtf8("mFixedDateTimeEdit"));
        mFixedDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_8->addWidget(mFixedDateTimeEdit, 1, 1, 1, 1);

        label_15 = new QLabel(mPageFixedDateTime);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setWordWrap(true);

        gridLayout_8->addWidget(label_15, 0, 0, 1, 2);

        label_10 = new QLabel(mPageFixedDateTime);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_8->addWidget(label_10, 1, 0, 1, 1);

        mStackedWidget->addWidget(mPageFixedDateTime);
        mPageFixedRange = new QWidget();
        mPageFixedRange->setObjectName(QString::fromUtf8("mPageFixedRange"));
        sizePolicy.setHeightForWidth(mPageFixedRange->sizePolicy().hasHeightForWidth());
        mPageFixedRange->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(mPageFixedRange);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mStartTemporalDateTimeEdit = new QgsDateTimeEdit(mPageFixedRange);
        mStartTemporalDateTimeEdit->setObjectName(QString::fromUtf8("mStartTemporalDateTimeEdit"));
        mStartTemporalDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_6->addWidget(mStartTemporalDateTimeEdit, 1, 1, 1, 1);

        label_14 = new QLabel(mPageFixedRange);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);

        gridLayout_6->addWidget(label_14, 0, 0, 1, 2);

        mEndTemporalDateTimeEdit = new QgsDateTimeEdit(mPageFixedRange);
        mEndTemporalDateTimeEdit->setObjectName(QString::fromUtf8("mEndTemporalDateTimeEdit"));
        mEndTemporalDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_6->addWidget(mEndTemporalDateTimeEdit, 2, 1, 1, 1);

        label_6 = new QLabel(mPageFixedRange);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        label_5 = new QLabel(mPageFixedRange);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 3, 0, 1, 2);

        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageFixedRange);
        mPageAutomatic = new QWidget();
        mPageAutomatic->setObjectName(QString::fromUtf8("mPageAutomatic"));
        sizePolicy.setHeightForWidth(mPageAutomatic->sizePolicy().hasHeightForWidth());
        mPageAutomatic->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(mPageAutomatic);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_28 = new QLabel(mPageAutomatic);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setWordWrap(true);

        gridLayout_4->addWidget(label_28, 0, 0, 1, 2);

        mStackedWidget->addWidget(mPageAutomatic);
        mPageRedrawOnly = new QWidget();
        mPageRedrawOnly->setObjectName(QString::fromUtf8("mPageRedrawOnly"));
        sizePolicy.setHeightForWidth(mPageRedrawOnly->sizePolicy().hasHeightForWidth());
        mPageRedrawOnly->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(mPageRedrawOnly);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_16 = new QLabel(mPageRedrawOnly);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setWordWrap(true);

        verticalLayout_2->addWidget(label_16);

        mStackedWidget->addWidget(mPageRedrawOnly);
        mPageFixedRangePerBand = new QWidget();
        mPageFixedRangePerBand->setObjectName(QString::fromUtf8("mPageFixedRangePerBand"));
        sizePolicy.setHeightForWidth(mPageFixedRangePerBand->sizePolicy().hasHeightForWidth());
        mPageFixedRangePerBand->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(mPageFixedRangePerBand);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mFixedRangePerBandLabel = new QLabel(mPageFixedRangePerBand);
        mFixedRangePerBandLabel->setObjectName(QString::fromUtf8("mFixedRangePerBandLabel"));
        sizePolicy.setHeightForWidth(mFixedRangePerBandLabel->sizePolicy().hasHeightForWidth());
        mFixedRangePerBandLabel->setSizePolicy(sizePolicy);
        mFixedRangePerBandLabel->setWordWrap(true);

        gridLayout_2->addWidget(mFixedRangePerBandLabel, 0, 0, 1, 1);

        mWidgetFixedRangePerBand = new QWidget(mPageFixedRangePerBand);
        mWidgetFixedRangePerBand->setObjectName(QString::fromUtf8("mWidgetFixedRangePerBand"));
        mWidgetFixedRangePerBand->setMinimumSize(QSize(0, 33));
        gridLayout_7 = new QGridLayout(mWidgetFixedRangePerBand);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mBandRangesTable = new QTableView(mWidgetFixedRangePerBand);
        mBandRangesTable->setObjectName(QString::fromUtf8("mBandRangesTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mBandRangesTable->sizePolicy().hasHeightForWidth());
        mBandRangesTable->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(mBandRangesTable, 0, 0, 1, 1);

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


        gridLayout_7->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(mWidgetFixedRangePerBand, 1, 0, 1, 1);

        mStackedWidget->addWidget(mPageFixedRangePerBand);
        mPageRepresentsTemporalValues = new QWidget();
        mPageRepresentsTemporalValues->setObjectName(QString::fromUtf8("mPageRepresentsTemporalValues"));
        sizePolicy.setHeightForWidth(mPageRepresentsTemporalValues->sizePolicy().hasHeightForWidth());
        mPageRepresentsTemporalValues->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(mPageRepresentsTemporalValues);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_2 = new QLabel(mPageRepresentsTemporalValues);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        label_8 = new QLabel(mPageRepresentsTemporalValues);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        mScaleSpinBox = new QgsDoubleSpinBox(mPageRepresentsTemporalValues);
        mScaleSpinBox->setObjectName(QString::fromUtf8("mScaleSpinBox"));
        sizePolicy1.setHeightForWidth(mScaleSpinBox->sizePolicy().hasHeightForWidth());
        mScaleSpinBox->setSizePolicy(sizePolicy1);
        mScaleSpinBox->setDecimals(6);
        mScaleSpinBox->setMinimum(0.000000000000000);
        mScaleSpinBox->setMaximum(99999999999.000000000000000);
        mScaleSpinBox->setValue(1.000000000000000);

        horizontalLayout_6->addWidget(mScaleSpinBox);

        mScaleUnitComboBox = new QComboBox(mPageRepresentsTemporalValues);
        mScaleUnitComboBox->setObjectName(QString::fromUtf8("mScaleUnitComboBox"));
        mScaleUnitComboBox->setEditable(false);

        horizontalLayout_6->addWidget(mScaleUnitComboBox);


        gridLayout_5->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        label_3 = new QLabel(mPageRepresentsTemporalValues);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setWordWrap(true);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 2);

        mOffsetDateTimeEdit = new QgsDateTimeEdit(mPageRepresentsTemporalValues);
        mOffsetDateTimeEdit->setObjectName(QString::fromUtf8("mOffsetDateTimeEdit"));
        mOffsetDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_5->addWidget(mOffsetDateTimeEdit, 2, 1, 1, 1);

        mBandComboBox = new QgsRasterBandComboBox(mPageRepresentsTemporalValues);
        mBandComboBox->setObjectName(QString::fromUtf8("mBandComboBox"));

        gridLayout_5->addWidget(mBandComboBox, 3, 1, 1, 1);

        label_7 = new QLabel(mPageRepresentsTemporalValues);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 3, 0, 1, 1);

        verticalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_1, 4, 0, 1, 2);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageRepresentsTemporalValues);

        gridLayout_3->addWidget(mStackedWidget, 1, 0, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);

        gridLayout->addWidget(mTemporalGroupBox, 0, 0, 1, 1);

        gridLayout->setRowStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_5->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mTemporalGroupBox);

        retranslateUi(QgsRasterLayerTemporalPropertiesWidgetBase);

        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterLayerTemporalPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterLayerTemporalPropertiesWidgetBase)
    {
        mTemporalGroupBox->setTitle(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Dynamic Temporal Control", nullptr));
        label->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Configuration", nullptr));
        mFixedDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        label_15->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The layer will be rendered whenever the map's temporal range overlaps the date time defined below.</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Date", nullptr));
        mStartTemporalDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        label_14->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "<p><b>The layer will be rendered whenever the map's temporal range overlaps the range defined below.</b></p>", nullptr));
        mEndTemporalDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        label_6->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Start date", nullptr));
        label_5->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "End date", nullptr));
        label_28->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The layer's data provider will automatically handle temporal settings for the layer.</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The layer will automatically be redrawn whenever the temporal range is changed, but no time based filtering will be applied to the layer.</span></p><p>This configuration is useful when the layer has renderer settings which vary based on the temporal range. For instance, when it is using time-dependent data-defined renderer expressions.</p></body></html>", nullptr));
        mFixedRangePerBandLabel->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Each band in the raster layer is associated with a fixed time range.</span></p><p>This mode can be used when a layer has temporal data exposed through different raster bands.</p></body></html>", nullptr));
        mCalculateFixedRangePerBandButton->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "...", nullptr));
        label_2->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Scale", nullptr));
        label_8->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Offset", nullptr));
        mScaleUnitComboBox->setCurrentText(QString());
        label_3->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The pixel values in the layer represent a temporal value. </span></p><p> The offset is used to define the starting datetime while scaling identifies the scale \342\200\223 e.g. 1 day or 1 week - of each pixel value.</p></body></html>", nullptr));
        mOffsetDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        label_7->setText(QCoreApplication::translate("QgsRasterLayerTemporalPropertiesWidgetBase", "Band", nullptr));
        (void)QgsRasterLayerTemporalPropertiesWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerTemporalPropertiesWidgetBase: public Ui_QgsRasterLayerTemporalPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLAYERTEMPORALPROPERTIESWIDGETBASE_H
