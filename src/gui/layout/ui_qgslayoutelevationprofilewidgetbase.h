/********************************************************************************
** Form generated from reading UI file 'qgslayoutelevationprofilewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTELEVATIONPROFILEWIDGETBASE_H
#define UI_QGSLAYOUTELEVATIONPROFILEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutElevationProfileWidgetBase
{
public:
    QAction *mActionRefresh;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabel;
    QToolBar *mDockToolbar;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QHBoxLayout *horizontalLayout;
    QWidget *mTreeViewContainer;
    QgsCollapsibleGroupBoxBasic *groupChartRanges_2;
    QGridLayout *gridLayout_5;
    QgsDoubleSpinBox *mSpinTolerance;
    QLabel *label_27;
    QgsPropertyOverrideButton *mDDBtnTolerance;
    QCheckBox *mCheckControlledByAtlas;
    QgsCollapsibleGroupBoxBasic *mSubsectionsActivateCheck;
    QGridLayout *gridLayoutSubsections;
    QLabel *mSubsectionsSymbolLabel;
    QgsSymbolButton *mSubsectionsSymbolButton;
    QgsCollapsibleGroupBoxBasic *groupChartRanges;
    QGridLayout *gridLayout_4;
    QLabel *label_20;
    QgsDoubleSpinBox *mSpinMinElevation;
    QgsDoubleSpinBox *mSpinMinDistance;
    QgsDoubleSpinBox *mSpinMaxDistance;
    QLabel *label_18;
    QgsDoubleSpinBox *mSpinMaxElevation;
    QLabel *label_21;
    QLabel *label_19;
    QgsPropertyOverrideButton *mDDBtnMinDistance;
    QgsPropertyOverrideButton *mDDBtnMaxDistance;
    QgsPropertyOverrideButton *mDDBtnMinElevation;
    QgsPropertyOverrideButton *mDDBtnMaxElevation;
    QgsCollapsibleGroupBoxBasic *groupDistanceAxis;
    QGridLayout *gridLayout_2;
    QgsPropertyOverrideButton *mDDBtnDistanceLabelInterval;
    QgsSymbolButton *mDistanceAxisMajorLinesSymbolButton;
    QPushButton *mDistanceAxisLabelFormatButton;
    QgsDoubleSpinBox *mDistanceAxisMajorIntervalSpin;
    QLabel *label_8;
    QLabel *label_26;
    QLabel *label_9;
    QLabel *label_5;
    QgsFontButton *mDistanceAxisLabelFontButton;
    QgsSymbolButton *mDistanceAxisMinorLinesSymbolButton;
    QgsDoubleSpinBox *mDistanceAxisMinorIntervalSpin;
    QLabel *label_6;
    QgsPropertyOverrideButton *mDDBtnDistanceMajorInterval;
    QLabel *label_7;
    QgsDoubleSpinBox *mDistanceAxisLabelIntervalSpin;
    QLabel *label_10;
    QComboBox *mDistanceUnitCombo;
    QgsPropertyOverrideButton *mDDBtnDistanceMinorInterval;
    QLabel *label_4;
    QLabel *label_28;
    QComboBox *mDistanceLabelsCombo;
    QgsCollapsibleGroupBoxBasic *groupElevationAxis;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *mElevationAxisMajorIntervalSpin;
    QgsPropertyOverrideButton *mDDBtnElevationLabelInterval;
    QgsDoubleSpinBox *mElevationAxisLabelIntervalSpin;
    QgsSymbolButton *mElevationAxisMajorLinesSymbolButton;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_17;
    QgsPropertyOverrideButton *mDDBtnElevationMajorInterval;
    QLabel *label_16;
    QgsDoubleSpinBox *mElevationAxisMinorIntervalSpin;
    QgsPropertyOverrideButton *mDDBtnElevationMinorInterval;
    QLabel *label_11;
    QPushButton *mElevationAxisLabelFormatButton;
    QgsSymbolButton *mElevationAxisMinorLinesSymbolButton;
    QLabel *label_15;
    QLabel *label_14;
    QgsFontButton *mElevationAxisLabelFontButton;
    QgsCollapsibleGroupBoxBasic *groupChartArea;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mSpinLeftMargin;
    QLabel *label_3;
    QLabel *label_24;
    QgsDoubleSpinBox *mSpinRightMargin;
    QgsDoubleSpinBox *mSpinBottomMargin;
    QLabel *label_25;
    QgsSymbolButton *mChartBorderSymbolButton;
    QgsPropertyOverrideButton *mDDBtnLeftMargin;
    QgsPropertyOverrideButton *mDDBtnTopMargin;
    QLabel *label_23;
    QLabel *label_22;
    QgsDoubleSpinBox *mSpinTopMargin;
    QgsSymbolButton *mChartBackgroundSymbolButton;
    QLabel *label_2;
    QgsPropertyOverrideButton *mDDBtnRightMargin;
    QgsPropertyOverrideButton *mDDBtnBottomMargin;

    void setupUi(QWidget *QgsLayoutElevationProfileWidgetBase)
    {
        if (QgsLayoutElevationProfileWidgetBase->objectName().isEmpty())
            QgsLayoutElevationProfileWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutElevationProfileWidgetBase"));
        QgsLayoutElevationProfileWidgetBase->resize(564, 749);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutElevationProfileWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutElevationProfileWidgetBase->setSizePolicy(sizePolicy);
        mActionRefresh = new QAction(QgsLayoutElevationProfileWidgetBase);
        mActionRefresh->setObjectName(QString::fromUtf8("mActionRefresh"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRefresh->setIcon(icon);
        verticalLayout_2 = new QVBoxLayout(QgsLayoutElevationProfileWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mLabel = new QLabel(QgsLayoutElevationProfileWidgetBase);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLabel->sizePolicy().hasHeightForWidth());
        mLabel->setSizePolicy(sizePolicy1);
        mLabel->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout_2->addWidget(mLabel);

        mDockToolbar = new QToolBar(QgsLayoutElevationProfileWidgetBase);
        mDockToolbar->setObjectName(QString::fromUtf8("mDockToolbar"));
        mDockToolbar->setIconSize(QSize(16, 16));
        mDockToolbar->setFloatable(false);

        verticalLayout_2->addWidget(mDockToolbar);

        scrollArea = new QgsScrollArea(QgsLayoutElevationProfileWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -127, 548, 1515));
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mTreeViewContainer = new QWidget(groupBox);
        mTreeViewContainer->setObjectName(QString::fromUtf8("mTreeViewContainer"));
        mTreeViewContainer->setMinimumSize(QSize(0, 250));

        horizontalLayout->addWidget(mTreeViewContainer);


        mainLayout->addWidget(groupBox);

        groupChartRanges_2 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupChartRanges_2->setObjectName(QString::fromUtf8("groupChartRanges_2"));
        gridLayout_5 = new QGridLayout(groupChartRanges_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mSpinTolerance = new QgsDoubleSpinBox(groupChartRanges_2);
        mSpinTolerance->setObjectName(QString::fromUtf8("mSpinTolerance"));
        mSpinTolerance->setDecimals(6);
        mSpinTolerance->setMaximum(999999999.000000000000000);

        gridLayout_5->addWidget(mSpinTolerance, 1, 1, 1, 1);

        label_27 = new QLabel(groupChartRanges_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_5->addWidget(label_27, 1, 0, 1, 1);

        mDDBtnTolerance = new QgsPropertyOverrideButton(groupChartRanges_2);
        mDDBtnTolerance->setObjectName(QString::fromUtf8("mDDBtnTolerance"));

        gridLayout_5->addWidget(mDDBtnTolerance, 1, 2, 1, 1);

        mCheckControlledByAtlas = new QCheckBox(groupChartRanges_2);
        mCheckControlledByAtlas->setObjectName(QString::fromUtf8("mCheckControlledByAtlas"));

        gridLayout_5->addWidget(mCheckControlledByAtlas, 0, 0, 1, 3);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);

        mainLayout->addWidget(groupChartRanges_2);

        mSubsectionsActivateCheck = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSubsectionsActivateCheck->setObjectName(QString::fromUtf8("mSubsectionsActivateCheck"));
        mSubsectionsActivateCheck->setCheckable(true);
        gridLayoutSubsections = new QGridLayout(mSubsectionsActivateCheck);
        gridLayoutSubsections->setSpacing(6);
        gridLayoutSubsections->setContentsMargins(11, 11, 11, 11);
        gridLayoutSubsections->setObjectName(QString::fromUtf8("gridLayoutSubsections"));
        mSubsectionsSymbolLabel = new QLabel(mSubsectionsActivateCheck);
        mSubsectionsSymbolLabel->setObjectName(QString::fromUtf8("mSubsectionsSymbolLabel"));

        gridLayoutSubsections->addWidget(mSubsectionsSymbolLabel, 0, 0, 1, 1);

        mSubsectionsSymbolButton = new QgsSymbolButton(mSubsectionsActivateCheck);
        mSubsectionsSymbolButton->setObjectName(QString::fromUtf8("mSubsectionsSymbolButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSubsectionsSymbolButton->sizePolicy().hasHeightForWidth());
        mSubsectionsSymbolButton->setSizePolicy(sizePolicy2);

        gridLayoutSubsections->addWidget(mSubsectionsSymbolButton, 0, 1, 1, 1);

        gridLayoutSubsections->setColumnStretch(0, 1);
        gridLayoutSubsections->setColumnStretch(1, 2);

        mainLayout->addWidget(mSubsectionsActivateCheck);

        groupChartRanges = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupChartRanges->setObjectName(QString::fromUtf8("groupChartRanges"));
        gridLayout_4 = new QGridLayout(groupChartRanges);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_20 = new QLabel(groupChartRanges);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_4->addWidget(label_20, 2, 0, 1, 1);

        mSpinMinElevation = new QgsDoubleSpinBox(groupChartRanges);
        mSpinMinElevation->setObjectName(QString::fromUtf8("mSpinMinElevation"));
        mSpinMinElevation->setDecimals(6);
        mSpinMinElevation->setMinimum(-999999999.000000000000000);
        mSpinMinElevation->setMaximum(999999999.000000000000000);

        gridLayout_4->addWidget(mSpinMinElevation, 2, 1, 1, 1);

        mSpinMinDistance = new QgsDoubleSpinBox(groupChartRanges);
        mSpinMinDistance->setObjectName(QString::fromUtf8("mSpinMinDistance"));
        mSpinMinDistance->setDecimals(6);
        mSpinMinDistance->setMaximum(999999999.000000000000000);

        gridLayout_4->addWidget(mSpinMinDistance, 0, 1, 1, 1);

        mSpinMaxDistance = new QgsDoubleSpinBox(groupChartRanges);
        mSpinMaxDistance->setObjectName(QString::fromUtf8("mSpinMaxDistance"));
        mSpinMaxDistance->setDecimals(6);
        mSpinMaxDistance->setMaximum(999999999.000000000000000);

        gridLayout_4->addWidget(mSpinMaxDistance, 1, 1, 1, 1);

        label_18 = new QLabel(groupChartRanges);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 0, 0, 1, 1);

        mSpinMaxElevation = new QgsDoubleSpinBox(groupChartRanges);
        mSpinMaxElevation->setObjectName(QString::fromUtf8("mSpinMaxElevation"));
        mSpinMaxElevation->setDecimals(6);
        mSpinMaxElevation->setMinimum(-999999999.000000000000000);
        mSpinMaxElevation->setMaximum(999999999.000000000000000);

        gridLayout_4->addWidget(mSpinMaxElevation, 3, 1, 1, 1);

        label_21 = new QLabel(groupChartRanges);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_4->addWidget(label_21, 3, 0, 1, 1);

        label_19 = new QLabel(groupChartRanges);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 1, 0, 1, 1);

        mDDBtnMinDistance = new QgsPropertyOverrideButton(groupChartRanges);
        mDDBtnMinDistance->setObjectName(QString::fromUtf8("mDDBtnMinDistance"));

        gridLayout_4->addWidget(mDDBtnMinDistance, 0, 2, 1, 1);

        mDDBtnMaxDistance = new QgsPropertyOverrideButton(groupChartRanges);
        mDDBtnMaxDistance->setObjectName(QString::fromUtf8("mDDBtnMaxDistance"));

        gridLayout_4->addWidget(mDDBtnMaxDistance, 1, 2, 1, 1);

        mDDBtnMinElevation = new QgsPropertyOverrideButton(groupChartRanges);
        mDDBtnMinElevation->setObjectName(QString::fromUtf8("mDDBtnMinElevation"));

        gridLayout_4->addWidget(mDDBtnMinElevation, 2, 2, 1, 1);

        mDDBtnMaxElevation = new QgsPropertyOverrideButton(groupChartRanges);
        mDDBtnMaxElevation->setObjectName(QString::fromUtf8("mDDBtnMaxElevation"));

        gridLayout_4->addWidget(mDDBtnMaxElevation, 3, 2, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);

        mainLayout->addWidget(groupChartRanges);

        groupDistanceAxis = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupDistanceAxis->setObjectName(QString::fromUtf8("groupDistanceAxis"));
        gridLayout_2 = new QGridLayout(groupDistanceAxis);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDDBtnDistanceLabelInterval = new QgsPropertyOverrideButton(groupDistanceAxis);
        mDDBtnDistanceLabelInterval->setObjectName(QString::fromUtf8("mDDBtnDistanceLabelInterval"));

        gridLayout_2->addWidget(mDDBtnDistanceLabelInterval, 5, 3, 1, 1);

        mDistanceAxisMajorLinesSymbolButton = new QgsSymbolButton(groupDistanceAxis);
        mDistanceAxisMajorLinesSymbolButton->setObjectName(QString::fromUtf8("mDistanceAxisMajorLinesSymbolButton"));
        sizePolicy2.setHeightForWidth(mDistanceAxisMajorLinesSymbolButton->sizePolicy().hasHeightForWidth());
        mDistanceAxisMajorLinesSymbolButton->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(mDistanceAxisMajorLinesSymbolButton, 2, 2, 1, 2);

        mDistanceAxisLabelFormatButton = new QPushButton(groupDistanceAxis);
        mDistanceAxisLabelFormatButton->setObjectName(QString::fromUtf8("mDistanceAxisLabelFormatButton"));

        gridLayout_2->addWidget(mDistanceAxisLabelFormatButton, 6, 2, 1, 2);

        mDistanceAxisMajorIntervalSpin = new QgsDoubleSpinBox(groupDistanceAxis);
        mDistanceAxisMajorIntervalSpin->setObjectName(QString::fromUtf8("mDistanceAxisMajorIntervalSpin"));
        mDistanceAxisMajorIntervalSpin->setDecimals(6);
        mDistanceAxisMajorIntervalSpin->setMinimum(0.000001000000000);
        mDistanceAxisMajorIntervalSpin->setMaximum(999999999999.000000000000000);

        gridLayout_2->addWidget(mDistanceAxisMajorIntervalSpin, 1, 2, 1, 1);

        label_8 = new QLabel(groupDistanceAxis);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 5, 0, 1, 2);

        label_26 = new QLabel(groupDistanceAxis);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 0, 0, 1, 1);

        label_9 = new QLabel(groupDistanceAxis);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 7, 0, 1, 1);

        label_5 = new QLabel(groupDistanceAxis);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        mDistanceAxisLabelFontButton = new QgsFontButton(groupDistanceAxis);
        mDistanceAxisLabelFontButton->setObjectName(QString::fromUtf8("mDistanceAxisLabelFontButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mDistanceAxisLabelFontButton->sizePolicy().hasHeightForWidth());
        mDistanceAxisLabelFontButton->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(mDistanceAxisLabelFontButton, 7, 2, 1, 2);

        mDistanceAxisMinorLinesSymbolButton = new QgsSymbolButton(groupDistanceAxis);
        mDistanceAxisMinorLinesSymbolButton->setObjectName(QString::fromUtf8("mDistanceAxisMinorLinesSymbolButton"));
        sizePolicy2.setHeightForWidth(mDistanceAxisMinorLinesSymbolButton->sizePolicy().hasHeightForWidth());
        mDistanceAxisMinorLinesSymbolButton->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(mDistanceAxisMinorLinesSymbolButton, 4, 2, 1, 2);

        mDistanceAxisMinorIntervalSpin = new QgsDoubleSpinBox(groupDistanceAxis);
        mDistanceAxisMinorIntervalSpin->setObjectName(QString::fromUtf8("mDistanceAxisMinorIntervalSpin"));
        mDistanceAxisMinorIntervalSpin->setDecimals(6);
        mDistanceAxisMinorIntervalSpin->setMinimum(0.000001000000000);
        mDistanceAxisMinorIntervalSpin->setMaximum(999999999999.000000000000000);

        gridLayout_2->addWidget(mDistanceAxisMinorIntervalSpin, 3, 2, 1, 1);

        label_6 = new QLabel(groupDistanceAxis);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        mDDBtnDistanceMajorInterval = new QgsPropertyOverrideButton(groupDistanceAxis);
        mDDBtnDistanceMajorInterval->setObjectName(QString::fromUtf8("mDDBtnDistanceMajorInterval"));

        gridLayout_2->addWidget(mDDBtnDistanceMajorInterval, 1, 3, 1, 1);

        label_7 = new QLabel(groupDistanceAxis);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 2);

        mDistanceAxisLabelIntervalSpin = new QgsDoubleSpinBox(groupDistanceAxis);
        mDistanceAxisLabelIntervalSpin->setObjectName(QString::fromUtf8("mDistanceAxisLabelIntervalSpin"));
        mDistanceAxisLabelIntervalSpin->setDecimals(6);
        mDistanceAxisLabelIntervalSpin->setMinimum(0.000000000000000);
        mDistanceAxisLabelIntervalSpin->setMaximum(999999999999.000000000000000);

        gridLayout_2->addWidget(mDistanceAxisLabelIntervalSpin, 5, 2, 1, 1);

        label_10 = new QLabel(groupDistanceAxis);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 6, 0, 1, 1);

        mDistanceUnitCombo = new QComboBox(groupDistanceAxis);
        mDistanceUnitCombo->setObjectName(QString::fromUtf8("mDistanceUnitCombo"));

        gridLayout_2->addWidget(mDistanceUnitCombo, 0, 2, 1, 2);

        mDDBtnDistanceMinorInterval = new QgsPropertyOverrideButton(groupDistanceAxis);
        mDDBtnDistanceMinorInterval->setObjectName(QString::fromUtf8("mDDBtnDistanceMinorInterval"));

        gridLayout_2->addWidget(mDDBtnDistanceMinorInterval, 3, 3, 1, 1);

        label_4 = new QLabel(groupDistanceAxis);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_28 = new QLabel(groupDistanceAxis);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_2->addWidget(label_28, 8, 0, 1, 1);

        mDistanceLabelsCombo = new QComboBox(groupDistanceAxis);
        mDistanceLabelsCombo->setObjectName(QString::fromUtf8("mDistanceLabelsCombo"));

        gridLayout_2->addWidget(mDistanceLabelsCombo, 8, 2, 1, 2);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(2, 2);

        mainLayout->addWidget(groupDistanceAxis);

        groupElevationAxis = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupElevationAxis->setObjectName(QString::fromUtf8("groupElevationAxis"));
        gridLayout_3 = new QGridLayout(groupElevationAxis);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mElevationAxisMajorIntervalSpin = new QgsDoubleSpinBox(groupElevationAxis);
        mElevationAxisMajorIntervalSpin->setObjectName(QString::fromUtf8("mElevationAxisMajorIntervalSpin"));
        mElevationAxisMajorIntervalSpin->setDecimals(6);
        mElevationAxisMajorIntervalSpin->setMinimum(0.000001000000000);
        mElevationAxisMajorIntervalSpin->setMaximum(999999999999.000000000000000);

        gridLayout_3->addWidget(mElevationAxisMajorIntervalSpin, 0, 2, 1, 1);

        mDDBtnElevationLabelInterval = new QgsPropertyOverrideButton(groupElevationAxis);
        mDDBtnElevationLabelInterval->setObjectName(QString::fromUtf8("mDDBtnElevationLabelInterval"));

        gridLayout_3->addWidget(mDDBtnElevationLabelInterval, 4, 3, 1, 1);

        mElevationAxisLabelIntervalSpin = new QgsDoubleSpinBox(groupElevationAxis);
        mElevationAxisLabelIntervalSpin->setObjectName(QString::fromUtf8("mElevationAxisLabelIntervalSpin"));
        mElevationAxisLabelIntervalSpin->setDecimals(6);
        mElevationAxisLabelIntervalSpin->setMinimum(0.000000000000000);
        mElevationAxisLabelIntervalSpin->setMaximum(999999999999.000000000000000);

        gridLayout_3->addWidget(mElevationAxisLabelIntervalSpin, 4, 2, 1, 1);

        mElevationAxisMajorLinesSymbolButton = new QgsSymbolButton(groupElevationAxis);
        mElevationAxisMajorLinesSymbolButton->setObjectName(QString::fromUtf8("mElevationAxisMajorLinesSymbolButton"));
        sizePolicy2.setHeightForWidth(mElevationAxisMajorLinesSymbolButton->sizePolicy().hasHeightForWidth());
        mElevationAxisMajorLinesSymbolButton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(mElevationAxisMajorLinesSymbolButton, 1, 2, 1, 2);

        label_13 = new QLabel(groupElevationAxis);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        label_12 = new QLabel(groupElevationAxis);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 1, 2);

        label_17 = new QLabel(groupElevationAxis);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 5, 0, 1, 1);

        mDDBtnElevationMajorInterval = new QgsPropertyOverrideButton(groupElevationAxis);
        mDDBtnElevationMajorInterval->setObjectName(QString::fromUtf8("mDDBtnElevationMajorInterval"));

        gridLayout_3->addWidget(mDDBtnElevationMajorInterval, 0, 3, 1, 1);

        label_16 = new QLabel(groupElevationAxis);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 4, 0, 1, 2);

        mElevationAxisMinorIntervalSpin = new QgsDoubleSpinBox(groupElevationAxis);
        mElevationAxisMinorIntervalSpin->setObjectName(QString::fromUtf8("mElevationAxisMinorIntervalSpin"));
        mElevationAxisMinorIntervalSpin->setDecimals(6);
        mElevationAxisMinorIntervalSpin->setMinimum(0.000001000000000);
        mElevationAxisMinorIntervalSpin->setMaximum(999999999999.000000000000000);

        gridLayout_3->addWidget(mElevationAxisMinorIntervalSpin, 2, 2, 1, 1);

        mDDBtnElevationMinorInterval = new QgsPropertyOverrideButton(groupElevationAxis);
        mDDBtnElevationMinorInterval->setObjectName(QString::fromUtf8("mDDBtnElevationMinorInterval"));

        gridLayout_3->addWidget(mDDBtnElevationMinorInterval, 2, 3, 1, 1);

        label_11 = new QLabel(groupElevationAxis);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        mElevationAxisLabelFormatButton = new QPushButton(groupElevationAxis);
        mElevationAxisLabelFormatButton->setObjectName(QString::fromUtf8("mElevationAxisLabelFormatButton"));

        gridLayout_3->addWidget(mElevationAxisLabelFormatButton, 5, 2, 1, 2);

        mElevationAxisMinorLinesSymbolButton = new QgsSymbolButton(groupElevationAxis);
        mElevationAxisMinorLinesSymbolButton->setObjectName(QString::fromUtf8("mElevationAxisMinorLinesSymbolButton"));
        sizePolicy2.setHeightForWidth(mElevationAxisMinorLinesSymbolButton->sizePolicy().hasHeightForWidth());
        mElevationAxisMinorLinesSymbolButton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(mElevationAxisMinorLinesSymbolButton, 3, 2, 1, 2);

        label_15 = new QLabel(groupElevationAxis);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 3, 0, 1, 1);

        label_14 = new QLabel(groupElevationAxis);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 6, 0, 1, 1);

        mElevationAxisLabelFontButton = new QgsFontButton(groupElevationAxis);
        mElevationAxisLabelFontButton->setObjectName(QString::fromUtf8("mElevationAxisLabelFontButton"));
        sizePolicy3.setHeightForWidth(mElevationAxisLabelFontButton->sizePolicy().hasHeightForWidth());
        mElevationAxisLabelFontButton->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(mElevationAxisLabelFontButton, 6, 2, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(2, 2);

        mainLayout->addWidget(groupElevationAxis);

        groupChartArea = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupChartArea->setObjectName(QString::fromUtf8("groupChartArea"));
        gridLayout = new QGridLayout(groupChartArea);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSpinLeftMargin = new QgsDoubleSpinBox(groupChartArea);
        mSpinLeftMargin->setObjectName(QString::fromUtf8("mSpinLeftMargin"));
        mSpinLeftMargin->setMaximum(999.990000000000009);

        gridLayout->addWidget(mSpinLeftMargin, 2, 1, 1, 1);

        label_3 = new QLabel(groupChartArea);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_24 = new QLabel(groupChartArea);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout->addWidget(label_24, 4, 0, 1, 1);

        mSpinRightMargin = new QgsDoubleSpinBox(groupChartArea);
        mSpinRightMargin->setObjectName(QString::fromUtf8("mSpinRightMargin"));
        mSpinRightMargin->setMaximum(999.990000000000009);

        gridLayout->addWidget(mSpinRightMargin, 4, 1, 1, 1);

        mSpinBottomMargin = new QgsDoubleSpinBox(groupChartArea);
        mSpinBottomMargin->setObjectName(QString::fromUtf8("mSpinBottomMargin"));
        mSpinBottomMargin->setMaximum(999.990000000000009);

        gridLayout->addWidget(mSpinBottomMargin, 5, 1, 1, 1);

        label_25 = new QLabel(groupChartArea);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout->addWidget(label_25, 5, 0, 1, 1);

        mChartBorderSymbolButton = new QgsSymbolButton(groupChartArea);
        mChartBorderSymbolButton->setObjectName(QString::fromUtf8("mChartBorderSymbolButton"));
        sizePolicy2.setHeightForWidth(mChartBorderSymbolButton->sizePolicy().hasHeightForWidth());
        mChartBorderSymbolButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mChartBorderSymbolButton, 1, 1, 1, 2);

        mDDBtnLeftMargin = new QgsPropertyOverrideButton(groupChartArea);
        mDDBtnLeftMargin->setObjectName(QString::fromUtf8("mDDBtnLeftMargin"));

        gridLayout->addWidget(mDDBtnLeftMargin, 2, 2, 1, 1);

        mDDBtnTopMargin = new QgsPropertyOverrideButton(groupChartArea);
        mDDBtnTopMargin->setObjectName(QString::fromUtf8("mDDBtnTopMargin"));

        gridLayout->addWidget(mDDBtnTopMargin, 3, 2, 1, 1);

        label_23 = new QLabel(groupChartArea);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout->addWidget(label_23, 3, 0, 1, 1);

        label_22 = new QLabel(groupChartArea);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout->addWidget(label_22, 2, 0, 1, 1);

        mSpinTopMargin = new QgsDoubleSpinBox(groupChartArea);
        mSpinTopMargin->setObjectName(QString::fromUtf8("mSpinTopMargin"));
        mSpinTopMargin->setMaximum(999.990000000000009);

        gridLayout->addWidget(mSpinTopMargin, 3, 1, 1, 1);

        mChartBackgroundSymbolButton = new QgsSymbolButton(groupChartArea);
        mChartBackgroundSymbolButton->setObjectName(QString::fromUtf8("mChartBackgroundSymbolButton"));
        sizePolicy2.setHeightForWidth(mChartBackgroundSymbolButton->sizePolicy().hasHeightForWidth());
        mChartBackgroundSymbolButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mChartBackgroundSymbolButton, 0, 1, 1, 2);

        label_2 = new QLabel(groupChartArea);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mDDBtnRightMargin = new QgsPropertyOverrideButton(groupChartArea);
        mDDBtnRightMargin->setObjectName(QString::fromUtf8("mDDBtnRightMargin"));

        gridLayout->addWidget(mDDBtnRightMargin, 4, 2, 1, 1);

        mDDBtnBottomMargin = new QgsPropertyOverrideButton(groupChartArea);
        mDDBtnBottomMargin->setObjectName(QString::fromUtf8("mDDBtnBottomMargin"));

        gridLayout->addWidget(mDDBtnBottomMargin, 5, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        mainLayout->addWidget(groupChartArea);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mCheckControlledByAtlas);
        QWidget::setTabOrder(mCheckControlledByAtlas, mSpinTolerance);
        QWidget::setTabOrder(mSpinTolerance, mDDBtnTolerance);
        QWidget::setTabOrder(mDDBtnTolerance, mSubsectionsActivateCheck);
        QWidget::setTabOrder(mSubsectionsActivateCheck, mSubsectionsSymbolButton);
        QWidget::setTabOrder(mSubsectionsSymbolButton, mSpinMinDistance);
        QWidget::setTabOrder(mSpinMinDistance, mDDBtnMinDistance);
        QWidget::setTabOrder(mDDBtnMinDistance, mSpinMaxDistance);
        QWidget::setTabOrder(mSpinMaxDistance, mDDBtnMaxDistance);
        QWidget::setTabOrder(mDDBtnMaxDistance, mSpinMinElevation);
        QWidget::setTabOrder(mSpinMinElevation, mDDBtnMinElevation);
        QWidget::setTabOrder(mDDBtnMinElevation, mSpinMaxElevation);
        QWidget::setTabOrder(mSpinMaxElevation, mDDBtnMaxElevation);
        QWidget::setTabOrder(mDDBtnMaxElevation, mDistanceUnitCombo);
        QWidget::setTabOrder(mDistanceUnitCombo, mDistanceAxisMajorIntervalSpin);
        QWidget::setTabOrder(mDistanceAxisMajorIntervalSpin, mDDBtnDistanceMajorInterval);
        QWidget::setTabOrder(mDDBtnDistanceMajorInterval, mDistanceAxisMajorLinesSymbolButton);
        QWidget::setTabOrder(mDistanceAxisMajorLinesSymbolButton, mDistanceAxisMinorIntervalSpin);
        QWidget::setTabOrder(mDistanceAxisMinorIntervalSpin, mDDBtnDistanceMinorInterval);
        QWidget::setTabOrder(mDDBtnDistanceMinorInterval, mDistanceAxisMinorLinesSymbolButton);
        QWidget::setTabOrder(mDistanceAxisMinorLinesSymbolButton, mDistanceAxisLabelIntervalSpin);
        QWidget::setTabOrder(mDistanceAxisLabelIntervalSpin, mDDBtnDistanceLabelInterval);
        QWidget::setTabOrder(mDDBtnDistanceLabelInterval, mDistanceAxisLabelFormatButton);
        QWidget::setTabOrder(mDistanceAxisLabelFormatButton, mDistanceAxisLabelFontButton);
        QWidget::setTabOrder(mDistanceAxisLabelFontButton, mDistanceLabelsCombo);
        QWidget::setTabOrder(mDistanceLabelsCombo, mElevationAxisMajorIntervalSpin);
        QWidget::setTabOrder(mElevationAxisMajorIntervalSpin, mDDBtnElevationMajorInterval);
        QWidget::setTabOrder(mDDBtnElevationMajorInterval, mElevationAxisMajorLinesSymbolButton);
        QWidget::setTabOrder(mElevationAxisMajorLinesSymbolButton, mElevationAxisMinorIntervalSpin);
        QWidget::setTabOrder(mElevationAxisMinorIntervalSpin, mDDBtnElevationMinorInterval);
        QWidget::setTabOrder(mDDBtnElevationMinorInterval, mElevationAxisMinorLinesSymbolButton);
        QWidget::setTabOrder(mElevationAxisMinorLinesSymbolButton, mElevationAxisLabelIntervalSpin);
        QWidget::setTabOrder(mElevationAxisLabelIntervalSpin, mDDBtnElevationLabelInterval);
        QWidget::setTabOrder(mDDBtnElevationLabelInterval, mElevationAxisLabelFormatButton);
        QWidget::setTabOrder(mElevationAxisLabelFormatButton, mElevationAxisLabelFontButton);
        QWidget::setTabOrder(mElevationAxisLabelFontButton, mChartBackgroundSymbolButton);
        QWidget::setTabOrder(mChartBackgroundSymbolButton, mChartBorderSymbolButton);
        QWidget::setTabOrder(mChartBorderSymbolButton, mSpinLeftMargin);
        QWidget::setTabOrder(mSpinLeftMargin, mDDBtnLeftMargin);
        QWidget::setTabOrder(mDDBtnLeftMargin, mSpinTopMargin);
        QWidget::setTabOrder(mSpinTopMargin, mDDBtnTopMargin);
        QWidget::setTabOrder(mDDBtnTopMargin, mSpinRightMargin);
        QWidget::setTabOrder(mSpinRightMargin, mDDBtnRightMargin);
        QWidget::setTabOrder(mDDBtnRightMargin, mSpinBottomMargin);
        QWidget::setTabOrder(mSpinBottomMargin, mDDBtnBottomMargin);

        mDockToolbar->addAction(mActionRefresh);

        retranslateUi(QgsLayoutElevationProfileWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutElevationProfileWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutElevationProfileWidgetBase)
    {
        QgsLayoutElevationProfileWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Elevation Profile Options", nullptr));
        mActionRefresh->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Refresh Elevation Profile", nullptr));
#if QT_CONFIG(tooltip)
        mActionRefresh->setToolTip(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Refresh Elevation Profile", nullptr));
#endif // QT_CONFIG(tooltip)
        mLabel->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Elevation Profile", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Layers", nullptr));
        groupChartRanges_2->setTitle(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Profile Curve", nullptr));
        label_27->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Tolerance", nullptr));
        mDDBtnTolerance->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        mCheckControlledByAtlas->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Controlled by atlas", nullptr));
        mSubsectionsActivateCheck->setTitle(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Show Subsections Indicator", nullptr));
        mSubsectionsSymbolLabel->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Lines", nullptr));
        mSubsectionsSymbolButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Change\342\200\246", nullptr));
        groupChartRanges->setTitle(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Chart Ranges", nullptr));
        label_20->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Minimum elevation", nullptr));
        label_18->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Minimum distance", nullptr));
        label_21->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Maximum elevation", nullptr));
        label_19->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Maximum distance", nullptr));
        mDDBtnMinDistance->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        mDDBtnMaxDistance->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        mDDBtnMinElevation->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        mDDBtnMaxElevation->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        groupDistanceAxis->setTitle(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Distance Axis", nullptr));
        mDDBtnDistanceLabelInterval->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        mDistanceAxisMajorLinesSymbolButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Change\342\200\246", nullptr));
        mDistanceAxisLabelFormatButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Customize", nullptr));
        label_8->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Label interval", nullptr));
        label_26->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Unit", nullptr));
        label_9->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Label font", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Minor grid lines", nullptr));
        mDistanceAxisLabelFontButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Font", nullptr));
        mDistanceAxisMinorLinesSymbolButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Change\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Major interval", nullptr));
        mDDBtnDistanceMajorInterval->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        label_7->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Minor interval", nullptr));
        label_10->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Label format", nullptr));
        mDDBtnDistanceMinorInterval->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Major grid lines", nullptr));
        label_28->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Distance labels", nullptr));
        groupElevationAxis->setTitle(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Elevation Axis", nullptr));
        mDDBtnElevationLabelInterval->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        mElevationAxisMajorLinesSymbolButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Change\342\200\246", nullptr));
        label_13->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Major interval", nullptr));
        label_12->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Minor interval", nullptr));
        label_17->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Label format", nullptr));
        mDDBtnElevationMajorInterval->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        label_16->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Label interval", nullptr));
        mDDBtnElevationMinorInterval->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        label_11->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Major grid lines", nullptr));
        mElevationAxisLabelFormatButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Customize", nullptr));
        mElevationAxisMinorLinesSymbolButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Change\342\200\246", nullptr));
        label_15->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Minor grid lines", nullptr));
        label_14->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Label font", nullptr));
        mElevationAxisLabelFontButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Font", nullptr));
        groupChartArea->setTitle(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Chart Area", nullptr));
        mSpinLeftMargin->setSuffix(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", " mm", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Border", nullptr));
        label_24->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Right margin", nullptr));
        mSpinRightMargin->setSuffix(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", " mm", nullptr));
        mSpinBottomMargin->setSuffix(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", " mm", nullptr));
        label_25->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Bottom margin", nullptr));
        mChartBorderSymbolButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Change\342\200\246", nullptr));
        mDDBtnLeftMargin->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        mDDBtnTopMargin->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        label_23->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Top margin", nullptr));
        label_22->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Left margin", nullptr));
        mSpinTopMargin->setSuffix(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", " mm", nullptr));
        mChartBackgroundSymbolButton->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Change\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "Background", nullptr));
        mDDBtnRightMargin->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
        mDDBtnBottomMargin->setText(QCoreApplication::translate("QgsLayoutElevationProfileWidgetBase", "\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutElevationProfileWidgetBase: public Ui_QgsLayoutElevationProfileWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTELEVATIONPROFILEWIDGETBASE_H
