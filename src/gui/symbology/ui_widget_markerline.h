/********************************************************************************
** Form generated from reading UI file 'widget_markerline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_MARKERLINE_H
#define UI_WIDGET_MARKERLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetMarkerLine
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QgsPropertyOverrideButton *mIntervalDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *mCheckInterval;
    QgsDoubleSpinBox *spinInterval;
    QgsUnitSelectionWidget *mIntervalUnitWidget;
    QCheckBox *mCheckVertex;
    QCheckBox *mCheckVertexLast;
    QCheckBox *mCheckVertexFirst;
    QCheckBox *mCheckCentralPoint;
    QCheckBox *mCheckSegmentCentralPoint;
    QCheckBox *mCheckCurvePoint;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QgsPropertyOverrideButton *mPlacementDDBtn;
    QGridLayout *gridLayout;
    QgsPropertyOverrideButton *mAverageAngleDDBtn;
    QgsPropertyOverrideButton *mLineOffsetDDBtn;
    QgsDoubleSpinBox *spinOffset;
    QgsDoubleSpinBox *mSpinAverageAngleLength;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsDoubleSpinBox *mSpinOffsetAlongLine;
    QgsUnitSelectionWidget *mAverageAngleUnit;
    QgsPropertyOverrideButton *mOffsetAlongLineDDBtn;
    QgsUnitSelectionWidget *mOffsetAlongLineUnitWidget;
    QLabel *mRingsLabel;
    QCheckBox *chkRotateMarker;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *mRingFilterComboBox;
    QCheckBox *mCheckPlaceOnEveryPart;

    void setupUi(QWidget *WidgetMarkerLine)
    {
        if (WidgetMarkerLine->objectName().isEmpty())
            WidgetMarkerLine->setObjectName(QString::fromUtf8("WidgetMarkerLine"));
        WidgetMarkerLine->resize(385, 465);
        WidgetMarkerLine->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(WidgetMarkerLine);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, -1, 1, 1);
        label_2 = new QLabel(WidgetMarkerLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, -1, 0);
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 6, 0, 1, 1);

        mIntervalDDBtn = new QgsPropertyOverrideButton(WidgetMarkerLine);
        mIntervalDDBtn->setObjectName(QString::fromUtf8("mIntervalDDBtn"));

        gridLayout_3->addWidget(mIntervalDDBtn, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mCheckInterval = new QCheckBox(WidgetMarkerLine);
        mCheckInterval->setObjectName(QString::fromUtf8("mCheckInterval"));
        mCheckInterval->setChecked(true);

        horizontalLayout_4->addWidget(mCheckInterval);

        spinInterval = new QgsDoubleSpinBox(WidgetMarkerLine);
        spinInterval->setObjectName(QString::fromUtf8("spinInterval"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinInterval->sizePolicy().hasHeightForWidth());
        spinInterval->setSizePolicy(sizePolicy);
        spinInterval->setDecimals(6);
        spinInterval->setMaximum(10000000.000000000000000);
        spinInterval->setSingleStep(0.200000000000000);
        spinInterval->setValue(1.000000000000000);
        spinInterval->setProperty("showClearButton", QVariant(false));

        horizontalLayout_4->addWidget(spinInterval);

        mIntervalUnitWidget = new QgsUnitSelectionWidget(WidgetMarkerLine);
        mIntervalUnitWidget->setObjectName(QString::fromUtf8("mIntervalUnitWidget"));
        mIntervalUnitWidget->setMinimumSize(QSize(0, 0));
        mIntervalUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_4->addWidget(mIntervalUnitWidget);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        mCheckVertex = new QCheckBox(WidgetMarkerLine);
        mCheckVertex->setObjectName(QString::fromUtf8("mCheckVertex"));

        gridLayout_3->addWidget(mCheckVertex, 3, 1, 1, 1);

        mCheckVertexLast = new QCheckBox(WidgetMarkerLine);
        mCheckVertexLast->setObjectName(QString::fromUtf8("mCheckVertexLast"));

        gridLayout_3->addWidget(mCheckVertexLast, 2, 1, 1, 1);

        mCheckVertexFirst = new QCheckBox(WidgetMarkerLine);
        mCheckVertexFirst->setObjectName(QString::fromUtf8("mCheckVertexFirst"));

        gridLayout_3->addWidget(mCheckVertexFirst, 1, 1, 1, 1);

        mCheckCentralPoint = new QCheckBox(WidgetMarkerLine);
        mCheckCentralPoint->setObjectName(QString::fromUtf8("mCheckCentralPoint"));

        gridLayout_3->addWidget(mCheckCentralPoint, 4, 1, 1, 1);

        mCheckSegmentCentralPoint = new QCheckBox(WidgetMarkerLine);
        mCheckSegmentCentralPoint->setObjectName(QString::fromUtf8("mCheckSegmentCentralPoint"));

        gridLayout_3->addWidget(mCheckSegmentCentralPoint, 5, 1, 1, 1);

        mCheckCurvePoint = new QCheckBox(WidgetMarkerLine);
        mCheckCurvePoint->setObjectName(QString::fromUtf8("mCheckCurvePoint"));

        gridLayout_3->addWidget(mCheckCurvePoint, 6, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        mPlacementDDBtn = new QgsPropertyOverrideButton(WidgetMarkerLine);
        mPlacementDDBtn->setObjectName(QString::fromUtf8("mPlacementDDBtn"));

        gridLayout_2->addWidget(mPlacementDDBtn, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        mAverageAngleDDBtn = new QgsPropertyOverrideButton(WidgetMarkerLine);
        mAverageAngleDDBtn->setObjectName(QString::fromUtf8("mAverageAngleDDBtn"));

        gridLayout->addWidget(mAverageAngleDDBtn, 3, 4, 1, 1);

        mLineOffsetDDBtn = new QgsPropertyOverrideButton(WidgetMarkerLine);
        mLineOffsetDDBtn->setObjectName(QString::fromUtf8("mLineOffsetDDBtn"));

        gridLayout->addWidget(mLineOffsetDDBtn, 4, 4, 1, 1);

        spinOffset = new QgsDoubleSpinBox(WidgetMarkerLine);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        sizePolicy.setHeightForWidth(spinOffset->sizePolicy().hasHeightForWidth());
        spinOffset->setSizePolicy(sizePolicy);
        spinOffset->setDecimals(6);
        spinOffset->setMinimum(-999999999.000000000000000);
        spinOffset->setMaximum(999999999.000000000000000);
        spinOffset->setSingleStep(0.200000000000000);

        gridLayout->addWidget(spinOffset, 4, 2, 1, 1);

        mSpinAverageAngleLength = new QgsDoubleSpinBox(WidgetMarkerLine);
        mSpinAverageAngleLength->setObjectName(QString::fromUtf8("mSpinAverageAngleLength"));
        sizePolicy.setHeightForWidth(mSpinAverageAngleLength->sizePolicy().hasHeightForWidth());
        mSpinAverageAngleLength->setSizePolicy(sizePolicy);
        mSpinAverageAngleLength->setDecimals(6);
        mSpinAverageAngleLength->setMaximum(10000000.000000000000000);
        mSpinAverageAngleLength->setSingleStep(0.200000000000000);
        mSpinAverageAngleLength->setValue(1.000000000000000);

        gridLayout->addWidget(mSpinAverageAngleLength, 3, 2, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetMarkerLine);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 4, 3, 1, 1);

        mSpinOffsetAlongLine = new QgsDoubleSpinBox(WidgetMarkerLine);
        mSpinOffsetAlongLine->setObjectName(QString::fromUtf8("mSpinOffsetAlongLine"));
        sizePolicy.setHeightForWidth(mSpinOffsetAlongLine->sizePolicy().hasHeightForWidth());
        mSpinOffsetAlongLine->setSizePolicy(sizePolicy);
        mSpinOffsetAlongLine->setDecimals(6);
        mSpinOffsetAlongLine->setMinimum(-10000000.000000000000000);
        mSpinOffsetAlongLine->setMaximum(10000000.000000000000000);
        mSpinOffsetAlongLine->setSingleStep(0.200000000000000);
        mSpinOffsetAlongLine->setValue(1.000000000000000);

        gridLayout->addWidget(mSpinOffsetAlongLine, 1, 2, 1, 1);

        mAverageAngleUnit = new QgsUnitSelectionWidget(WidgetMarkerLine);
        mAverageAngleUnit->setObjectName(QString::fromUtf8("mAverageAngleUnit"));
        mAverageAngleUnit->setMinimumSize(QSize(20, 0));
        mAverageAngleUnit->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(mAverageAngleUnit, 3, 3, 1, 1);

        mOffsetAlongLineDDBtn = new QgsPropertyOverrideButton(WidgetMarkerLine);
        mOffsetAlongLineDDBtn->setObjectName(QString::fromUtf8("mOffsetAlongLineDDBtn"));

        gridLayout->addWidget(mOffsetAlongLineDDBtn, 1, 4, 1, 1);

        mOffsetAlongLineUnitWidget = new QgsUnitSelectionWidget(WidgetMarkerLine);
        mOffsetAlongLineUnitWidget->setObjectName(QString::fromUtf8("mOffsetAlongLineUnitWidget"));
        mOffsetAlongLineUnitWidget->setMinimumSize(QSize(20, 0));
        mOffsetAlongLineUnitWidget->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(mOffsetAlongLineUnitWidget, 1, 3, 1, 1);

        mRingsLabel = new QLabel(WidgetMarkerLine);
        mRingsLabel->setObjectName(QString::fromUtf8("mRingsLabel"));

        gridLayout->addWidget(mRingsLabel, 5, 0, 1, 2);

        chkRotateMarker = new QCheckBox(WidgetMarkerLine);
        chkRotateMarker->setObjectName(QString::fromUtf8("chkRotateMarker"));

        gridLayout->addWidget(chkRotateMarker, 2, 0, 1, 5);

        label_3 = new QLabel(WidgetMarkerLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 2);

        label = new QLabel(WidgetMarkerLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        label_4 = new QLabel(WidgetMarkerLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        mRingFilterComboBox = new QComboBox(WidgetMarkerLine);
        mRingFilterComboBox->setObjectName(QString::fromUtf8("mRingFilterComboBox"));

        gridLayout->addWidget(mRingFilterComboBox, 5, 2, 1, 3);

        mCheckPlaceOnEveryPart = new QCheckBox(WidgetMarkerLine);
        mCheckPlaceOnEveryPart->setObjectName(QString::fromUtf8("mCheckPlaceOnEveryPart"));

        gridLayout->addWidget(mCheckPlaceOnEveryPart, 0, 0, 1, 5);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 3);

        QWidget::setTabOrder(mPlacementDDBtn, mCheckInterval);
        QWidget::setTabOrder(mCheckInterval, spinInterval);
        QWidget::setTabOrder(spinInterval, mIntervalUnitWidget);
        QWidget::setTabOrder(mIntervalUnitWidget, mIntervalDDBtn);
        QWidget::setTabOrder(mIntervalDDBtn, mCheckVertex);
        QWidget::setTabOrder(mCheckVertex, mCheckVertexLast);
        QWidget::setTabOrder(mCheckVertexLast, mCheckVertexFirst);
        QWidget::setTabOrder(mCheckVertexFirst, mCheckCentralPoint);
        QWidget::setTabOrder(mCheckCentralPoint, mCheckSegmentCentralPoint);
        QWidget::setTabOrder(mCheckSegmentCentralPoint, mCheckCurvePoint);
        QWidget::setTabOrder(mCheckCurvePoint, mCheckPlaceOnEveryPart);
        QWidget::setTabOrder(mCheckPlaceOnEveryPart, mSpinOffsetAlongLine);
        QWidget::setTabOrder(mSpinOffsetAlongLine, mOffsetAlongLineUnitWidget);
        QWidget::setTabOrder(mOffsetAlongLineUnitWidget, mOffsetAlongLineDDBtn);
        QWidget::setTabOrder(mOffsetAlongLineDDBtn, chkRotateMarker);
        QWidget::setTabOrder(chkRotateMarker, mSpinAverageAngleLength);
        QWidget::setTabOrder(mSpinAverageAngleLength, mAverageAngleUnit);
        QWidget::setTabOrder(mAverageAngleUnit, mAverageAngleDDBtn);
        QWidget::setTabOrder(mAverageAngleDDBtn, spinOffset);
        QWidget::setTabOrder(spinOffset, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mLineOffsetDDBtn);
        QWidget::setTabOrder(mLineOffsetDDBtn, mRingFilterComboBox);

        retranslateUi(WidgetMarkerLine);

        QMetaObject::connectSlotsByName(WidgetMarkerLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetMarkerLine)
    {
        label_2->setText(QCoreApplication::translate("WidgetMarkerLine", "Marker placement", nullptr));
        mIntervalDDBtn->setText(QCoreApplication::translate("WidgetMarkerLine", "\342\200\246", nullptr));
        mCheckInterval->setText(QCoreApplication::translate("WidgetMarkerLine", "With interval", nullptr));
#if QT_CONFIG(tooltip)
        mCheckVertex->setToolTip(QCoreApplication::translate("WidgetMarkerLine", "Shows symbols on inner vertices, i.e. all vertices except the first or last", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckVertex->setText(QCoreApplication::translate("WidgetMarkerLine", "On inner vertices", nullptr));
        mCheckVertexLast->setText(QCoreApplication::translate("WidgetMarkerLine", "On last vertex", nullptr));
        mCheckVertexFirst->setText(QCoreApplication::translate("WidgetMarkerLine", "On first vertex", nullptr));
        mCheckCentralPoint->setText(QCoreApplication::translate("WidgetMarkerLine", "On central point", nullptr));
        mCheckSegmentCentralPoint->setText(QCoreApplication::translate("WidgetMarkerLine", "On central point of segments", nullptr));
        mCheckCurvePoint->setText(QCoreApplication::translate("WidgetMarkerLine", "On every curve point", nullptr));
        mPlacementDDBtn->setText(QCoreApplication::translate("WidgetMarkerLine", "\342\200\246", nullptr));
        mAverageAngleDDBtn->setText(QCoreApplication::translate("WidgetMarkerLine", "\342\200\246", nullptr));
        mLineOffsetDDBtn->setText(QCoreApplication::translate("WidgetMarkerLine", "\342\200\246", nullptr));
        mOffsetAlongLineDDBtn->setText(QCoreApplication::translate("WidgetMarkerLine", "\342\200\246", nullptr));
        mRingsLabel->setText(QCoreApplication::translate("WidgetMarkerLine", "Rings", nullptr));
        chkRotateMarker->setText(QCoreApplication::translate("WidgetMarkerLine", "Rotate marker to follow line direction", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetMarkerLine", "Line offset", nullptr));
        label->setText(QCoreApplication::translate("WidgetMarkerLine", "Offset along line", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetMarkerLine", "Average angle over", nullptr));
#if QT_CONFIG(tooltip)
        mCheckPlaceOnEveryPart->setToolTip(QCoreApplication::translate("WidgetMarkerLine", "If checked, the \"first vertex\" or \"last vertex\" placements will also render at the first and last vertex for every part of multipart geometries", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckPlaceOnEveryPart->setText(QCoreApplication::translate("WidgetMarkerLine", "Place on every part extremity", nullptr));
        (void)WidgetMarkerLine;
    } // retranslateUi

};

namespace Ui {
    class WidgetMarkerLine: public Ui_WidgetMarkerLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_MARKERLINE_H
