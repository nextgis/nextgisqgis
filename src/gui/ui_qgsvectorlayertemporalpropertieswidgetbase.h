/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayertemporalpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERTEMPORALPROPERTIESWIDGETBASE_H
#define UI_QGSVECTORLAYERTEMPORALPROPERTIESWIDGETBASE_H

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
#include "qgsdatetimeedit.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldcombobox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerTemporalPropertiesWidgetBase
{
public:
    QHBoxLayout *horizontalLayout_5;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *mTemporalGroupBox;
    QGridLayout *gridLayout_3;
    QComboBox *mModeComboBox;
    QLabel *label;
    QStackedWidget *mStackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_6;
    QgsDateTimeEdit *mStartTemporalDateTimeEdit;
    QgsDateTimeEdit *mEndTemporalDateTimeEdit;
    QLabel *label_5;
    QLabel *label_14;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QComboBox *mFixedDurationUnitsComboBox;
    QLabel *label_11;
    QLabel *label_2;
    QgsFieldComboBox *mSingleFieldComboBox;
    QSpacerItem *verticalSpacer;
    QgsDoubleSpinBox *mFixedDurationSpinBox;
    QLabel *label_13;
    QLabel *label_28;
    QCheckBox *mAccumulateCheckBox;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QgsFieldComboBox *mEndFieldComboBox;
    QgsFieldComboBox *mStartFieldComboBox;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_29;
    QWidget *page_5;
    QGridLayout *gridLayout_7;
    QgsFieldComboBox *mDurationFieldComboBox;
    QLabel *label_8;
    QLabel *label_12;
    QgsFieldComboBox *mDurationStartFieldComboBox;
    QComboBox *mDurationUnitsComboBox;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_30;
    QWidget *page_11;
    QGridLayout *gridLayout_12;
    QLabel *label_33;
    QLabel *label_31;
    QLabel *label_32;
    QSpacerItem *verticalSpacer_11;
    QgsFieldExpressionWidget *mStartExpressionWidget;
    QgsFieldExpressionWidget *mEndExpressionWidget;
    QWidget *page_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_4;
    QFrame *mFixedTimeRangeFrame;
    QGridLayout *gridLayout_2;
    QComboBox *mLimitsComboBox;
    QLabel *mLimitsLabel;

    void setupUi(QWidget *QgsVectorLayerTemporalPropertiesWidgetBase)
    {
        if (QgsVectorLayerTemporalPropertiesWidgetBase->objectName().isEmpty())
            QgsVectorLayerTemporalPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsVectorLayerTemporalPropertiesWidgetBase"));
        QgsVectorLayerTemporalPropertiesWidgetBase->resize(611, 413);
        QgsVectorLayerTemporalPropertiesWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout_5 = new QHBoxLayout(QgsVectorLayerTemporalPropertiesWidgetBase);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsVectorLayerTemporalPropertiesWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 611, 413));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mTemporalGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mTemporalGroupBox->setObjectName(QString::fromUtf8("mTemporalGroupBox"));
        mTemporalGroupBox->setEnabled(true);
        mTemporalGroupBox->setStyleSheet(QString::fromUtf8("QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}\n"
"background: white;QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsi"
                        "bleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position:"
                        " top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1"
                        "px;}QgsCollapsibleGroupBoxBasic::title, QgsCollapsibleGroupBox::title {  subcontrol-origin: margin;  subcontrol-position: top left;  margin-left: 20px;  margin-right: 5px;  left: 0px;  top: 1px;}"));
        mTemporalGroupBox->setCheckable(true);
        gridLayout_3 = new QGridLayout(mTemporalGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mModeComboBox = new QComboBox(mTemporalGroupBox);
        mModeComboBox->setObjectName(QString::fromUtf8("mModeComboBox"));

        gridLayout_3->addWidget(mModeComboBox, 0, 1, 1, 1);

        label = new QLabel(mTemporalGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        mStackedWidget = new QStackedWidget(mTemporalGroupBox);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 3, 0, 1, 1);

        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        mStartTemporalDateTimeEdit = new QgsDateTimeEdit(page_3);
        mStartTemporalDateTimeEdit->setObjectName(QString::fromUtf8("mStartTemporalDateTimeEdit"));
        mStartTemporalDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_6->addWidget(mStartTemporalDateTimeEdit, 1, 1, 1, 1);

        mEndTemporalDateTimeEdit = new QgsDateTimeEdit(page_3);
        mEndTemporalDateTimeEdit->setObjectName(QString::fromUtf8("mEndTemporalDateTimeEdit"));
        mEndTemporalDateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayout_6->addWidget(mEndTemporalDateTimeEdit, 2, 1, 1, 1);

        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 2, 0, 1, 1);

        label_14 = new QLabel(page_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);

        gridLayout_6->addWidget(label_14, 0, 0, 1, 2);

        mStackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mFixedDurationUnitsComboBox = new QComboBox(page);
        mFixedDurationUnitsComboBox->setObjectName(QString::fromUtf8("mFixedDurationUnitsComboBox"));

        gridLayout_4->addWidget(mFixedDurationUnitsComboBox, 2, 2, 1, 1);

        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        mSingleFieldComboBox = new QgsFieldComboBox(page);
        mSingleFieldComboBox->setObjectName(QString::fromUtf8("mSingleFieldComboBox"));

        gridLayout_4->addWidget(mSingleFieldComboBox, 1, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 0, 1, 1);

        mFixedDurationSpinBox = new QgsDoubleSpinBox(page);
        mFixedDurationSpinBox->setObjectName(QString::fromUtf8("mFixedDurationSpinBox"));
        mFixedDurationSpinBox->setMaximum(9999999999.000000000000000);

        gridLayout_4->addWidget(mFixedDurationSpinBox, 2, 1, 1, 1);

        label_13 = new QLabel(page);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setWordWrap(true);

        gridLayout_4->addWidget(label_13, 3, 0, 1, 3);

        label_28 = new QLabel(page);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setWordWrap(true);

        gridLayout_4->addWidget(label_28, 0, 0, 1, 3);

        mAccumulateCheckBox = new QCheckBox(page);
        mAccumulateCheckBox->setObjectName(QString::fromUtf8("mAccumulateCheckBox"));

        gridLayout_4->addWidget(mAccumulateCheckBox, 4, 0, 1, 3);

        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mEndFieldComboBox = new QgsFieldComboBox(page_2);
        mEndFieldComboBox->setObjectName(QString::fromUtf8("mEndFieldComboBox"));

        gridLayout_5->addWidget(mEndFieldComboBox, 2, 1, 1, 1);

        mStartFieldComboBox = new QgsFieldComboBox(page_2);
        mStartFieldComboBox->setObjectName(QString::fromUtf8("mStartFieldComboBox"));

        gridLayout_5->addWidget(mStartFieldComboBox, 1, 1, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 3, 0, 1, 1);

        label_29 = new QLabel(page_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setWordWrap(true);

        gridLayout_5->addWidget(label_29, 0, 0, 1, 2);

        mStackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_7 = new QGridLayout(page_5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mDurationFieldComboBox = new QgsFieldComboBox(page_5);
        mDurationFieldComboBox->setObjectName(QString::fromUtf8("mDurationFieldComboBox"));

        gridLayout_7->addWidget(mDurationFieldComboBox, 2, 1, 1, 1);

        label_8 = new QLabel(page_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 1, 0, 1, 1);

        label_12 = new QLabel(page_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setWordWrap(true);

        gridLayout_7->addWidget(label_12, 4, 0, 1, 2);

        mDurationStartFieldComboBox = new QgsFieldComboBox(page_5);
        mDurationStartFieldComboBox->setObjectName(QString::fromUtf8("mDurationStartFieldComboBox"));

        gridLayout_7->addWidget(mDurationStartFieldComboBox, 1, 1, 1, 1);

        mDurationUnitsComboBox = new QComboBox(page_5);
        mDurationUnitsComboBox->setObjectName(QString::fromUtf8("mDurationUnitsComboBox"));

        gridLayout_7->addWidget(mDurationUnitsComboBox, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_5, 5, 0, 1, 1);

        label_9 = new QLabel(page_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_7->addWidget(label_9, 2, 0, 1, 1);

        label_10 = new QLabel(page_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_7->addWidget(label_10, 3, 0, 1, 1);

        label_30 = new QLabel(page_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setWordWrap(true);

        gridLayout_7->addWidget(label_30, 0, 0, 1, 2);

        mStackedWidget->addWidget(page_5);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        gridLayout_12 = new QGridLayout(page_11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_33 = new QLabel(page_11);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setWordWrap(true);

        gridLayout_12->addWidget(label_33, 0, 0, 1, 2);

        label_31 = new QLabel(page_11);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_12->addWidget(label_31, 2, 0, 1, 1);

        label_32 = new QLabel(page_11);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_12->addWidget(label_32, 1, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_11, 3, 0, 1, 1);

        mStartExpressionWidget = new QgsFieldExpressionWidget(page_11);
        mStartExpressionWidget->setObjectName(QString::fromUtf8("mStartExpressionWidget"));

        gridLayout_12->addWidget(mStartExpressionWidget, 1, 1, 1, 1);

        mEndExpressionWidget = new QgsFieldExpressionWidget(page_11);
        mEndExpressionWidget->setObjectName(QString::fromUtf8("mEndExpressionWidget"));

        gridLayout_12->addWidget(mEndExpressionWidget, 2, 1, 1, 1);

        gridLayout_12->setColumnStretch(1, 1);
        mStackedWidget->addWidget(page_11);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout = new QVBoxLayout(page_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        verticalLayout->addWidget(label_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        mStackedWidget->addWidget(page_4);

        gridLayout_3->addWidget(mStackedWidget, 2, 0, 1, 2);

        mFixedTimeRangeFrame = new QFrame(mTemporalGroupBox);
        mFixedTimeRangeFrame->setObjectName(QString::fromUtf8("mFixedTimeRangeFrame"));
        mFixedTimeRangeFrame->setEnabled(false);
        mFixedTimeRangeFrame->setFrameShape(QFrame::NoFrame);
        mFixedTimeRangeFrame->setFrameShadow(QFrame::Raised);
        mFixedTimeRangeFrame->setLineWidth(0);
        gridLayout_2 = new QGridLayout(mFixedTimeRangeFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);

        gridLayout_3->addWidget(mFixedTimeRangeFrame, 3, 0, 1, 1);

        mLimitsComboBox = new QComboBox(mTemporalGroupBox);
        mLimitsComboBox->setObjectName(QString::fromUtf8("mLimitsComboBox"));

        gridLayout_3->addWidget(mLimitsComboBox, 1, 1, 1, 1);

        mLimitsLabel = new QLabel(mTemporalGroupBox);
        mLimitsLabel->setObjectName(QString::fromUtf8("mLimitsLabel"));

        gridLayout_3->addWidget(mLimitsLabel, 1, 0, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        gridLayout->addWidget(mTemporalGroupBox, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_5->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mTemporalGroupBox);
        QWidget::setTabOrder(mTemporalGroupBox, mModeComboBox);
        QWidget::setTabOrder(mModeComboBox, mStartTemporalDateTimeEdit);
        QWidget::setTabOrder(mStartTemporalDateTimeEdit, mEndTemporalDateTimeEdit);
        QWidget::setTabOrder(mEndTemporalDateTimeEdit, mSingleFieldComboBox);
        QWidget::setTabOrder(mSingleFieldComboBox, mFixedDurationSpinBox);
        QWidget::setTabOrder(mFixedDurationSpinBox, mFixedDurationUnitsComboBox);
        QWidget::setTabOrder(mFixedDurationUnitsComboBox, mAccumulateCheckBox);
        QWidget::setTabOrder(mAccumulateCheckBox, mStartFieldComboBox);
        QWidget::setTabOrder(mStartFieldComboBox, mEndFieldComboBox);
        QWidget::setTabOrder(mEndFieldComboBox, mDurationStartFieldComboBox);
        QWidget::setTabOrder(mDurationStartFieldComboBox, mDurationFieldComboBox);
        QWidget::setTabOrder(mDurationFieldComboBox, mDurationUnitsComboBox);

        retranslateUi(QgsVectorLayerTemporalPropertiesWidgetBase);

        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsVectorLayerTemporalPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorLayerTemporalPropertiesWidgetBase)
    {
        mTemporalGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Dynamic Temporal Control", nullptr));
        label->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Configuration", nullptr));
        label_6->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Start date", nullptr));
        mStartTemporalDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        mEndTemporalDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        label_5->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "End date", nullptr));
        label_14->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p><b><i>All</i> features from the layer will be rendered whenever the map's temporal range overlaps the range defined below.</b></p>", nullptr));
        label_11->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Event duration", nullptr));
        label_2->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Field", nullptr));
        label_13->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p>Event durations in <i>Months</i> assume a fixed 30-day month length, and durations in <i>Years</i>, <i>Decades</i> or <i>Centuries</i> assume a 365.25-day year length.</p>", nullptr));
        label_28->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Individual features from the layer will be rendered if the field's value falls within the map's temporal range.</span></p><p>If a duration is set for the events then the event will be considered as occurring from <span style=\" font-style:italic;\">Field \342\211\244 t &lt; Field + duration</span>.</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        mAccumulateCheckBox->setToolTip(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "If checked, then features will be shown whenever their defined temporal value falls within or before the map's temporal range", nullptr));
#endif // QT_CONFIG(tooltip)
        mAccumulateCheckBox->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Accumulate features over time", nullptr));
        label_3->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Start field", nullptr));
        label_4->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "End field", nullptr));
        label_29->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Individual features from the layer will be rendered if the range specified by the </span><span style=\" font-weight:600; font-style:italic;\">Start</span><span style=\" font-weight:600;\"> and </span><span style=\" font-weight:600; font-style:italic;\">End</span><span style=\" font-weight:600;\"> fields overlaps the map's temporal range.</span></p><p>Each event will be considered as occurring from <span style=\" font-style:italic;\">Start field \342\211\244 t &lt; End field</span>.</p><p>If the <span style=\" font-style:italic;\">Start</span> field choice is empty, then features will be treated as having no start date. Similarly if the <span style=\" font-style:italic;\">End</span> field choice is empty, then features will be treated as having no end date.</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Start field", nullptr));
        label_12->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p>Event durations in <i>Months</i> assume a fixed 30-day month length, and durations in <i>Years</i>, <i>Decades</i> or <i>Centuries</i> assume a 365.25-day year length.</p>", nullptr));
        label_9->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Event duration field", nullptr));
        label_10->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Event duration units", nullptr));
        label_30->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Individual features from the layer will be rendered if the temporal range defined by the </span><span style=\" font-weight:600; font-style:italic;\">Start</span><span style=\" font-weight:600;\"> and </span><span style=\" font-weight:600; font-style:italic;\">Event Duration</span><span style=\" font-weight:600;\"> fields overlaps the map's temporal range.</span></p><p>Each event will be considered as occurring from S<span style=\" font-style:italic;\">tart field \342\211\244 t &lt; Start field + Event duration</span>.</p></body></html>", nullptr));
        label_33->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Individual features from the layer will be rendered if the range specified by the </span><span style=\" font-weight:600; font-style:italic;\">Start</span><span style=\" font-weight:600;\"> and </span><span style=\" font-weight:600; font-style:italic;\">End</span><span style=\" font-weight:600;\"> expressions overlaps the map's temporal range.</span></p><p>Each event will be considered as occurring from S<span style=\" font-style:italic;\">tart expression \342\211\244 t &lt; End expression</span>.</p><p>If the <span style=\" font-style:italic;\">Start</span> expression choice is empty, then features will be treated as having no start date. Similarly if the <span style=\" font-style:italic;\">End</span> expression choice is empty, then features will be treated as having no end date.</p><p>The <span style=\" font-style:italic;\">Start</span> and <span style=\" font-style:italic;\">End</span> expressions must return date or datetime values.</p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "End expression", nullptr));
        label_32->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Start expression", nullptr));
        label_7->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "<p><b>The layer will automatically be redrawn whenever the temporal range is changed, but no time based filtering will be applied to the features.<b></p><p>This configuration is useful when the layer has symbology settings which vary based on the temporal range. For instance, when it is using time-dependent rule-based renderer expressions or data-defined symbology expressions.</p>", nullptr));
        mLimitsLabel->setText(QCoreApplication::translate("QgsVectorLayerTemporalPropertiesWidgetBase", "Limits", nullptr));
        (void)QgsVectorLayerTemporalPropertiesWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerTemporalPropertiesWidgetBase: public Ui_QgsVectorLayerTemporalPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERTEMPORALPROPERTIESWIDGETBASE_H
