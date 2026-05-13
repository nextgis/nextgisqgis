/********************************************************************************
** Form generated from reading UI file 'widget_hashline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_HASHLINE_H
#define UI_WIDGET_HASHLINE_H

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

class Ui_WidgetHashedLine
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *mCheckInterval;
    QgsDoubleSpinBox *spinInterval;
    QgsUnitSelectionWidget *mIntervalUnitWidget;
    QSpacerItem *horizontalSpacer_2;
    QgsPropertyOverrideButton *mIntervalDDBtn;
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
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QLabel *label_4;
    QgsDoubleSpinBox *mSpinAverageAngleLength;
    QgsPropertyOverrideButton *mHashLengthDDBtn;
    QgsUnitSelectionWidget *mHashLengthUnitWidget;
    QgsPropertyOverrideButton *mOffsetAlongLineDDBtn;
    QgsDoubleSpinBox *mSpinOffsetAlongLine;
    QgsDoubleSpinBox *mSpinHashLength;
    QgsPropertyOverrideButton *mHashRotationDDBtn;
    QComboBox *mRingFilterComboBox;
    QgsDoubleSpinBox *mHashRotationSpinBox;
    QLabel *mRingsLabel;
    QLabel *label_3;
    QCheckBox *chkRotateMarker;
    QgsPropertyOverrideButton *mLineOffsetDDBtn;
    QLabel *label_6;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mAverageAngleDDBtn;
    QgsDoubleSpinBox *spinOffset;
    QLabel *label;
    QgsUnitSelectionWidget *mOffsetAlongLineUnitWidget;
    QgsUnitSelectionWidget *mAverageAngleUnit;
    QCheckBox *mCheckPlaceOnEveryPart;

    void setupUi(QWidget *WidgetHashedLine)
    {
        if (WidgetHashedLine->objectName().isEmpty())
            WidgetHashedLine->setObjectName(QString::fromUtf8("WidgetHashedLine"));
        WidgetHashedLine->resize(385, 533);
        WidgetHashedLine->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(WidgetHashedLine);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, -1, 1, 1);
        label_2 = new QLabel(WidgetHashedLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, -1, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mCheckInterval = new QCheckBox(WidgetHashedLine);
        mCheckInterval->setObjectName(QString::fromUtf8("mCheckInterval"));
        mCheckInterval->setChecked(true);

        horizontalLayout_4->addWidget(mCheckInterval);

        spinInterval = new QgsDoubleSpinBox(WidgetHashedLine);
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

        mIntervalUnitWidget = new QgsUnitSelectionWidget(WidgetHashedLine);
        mIntervalUnitWidget->setObjectName(QString::fromUtf8("mIntervalUnitWidget"));
        mIntervalUnitWidget->setMinimumSize(QSize(0, 0));
        mIntervalUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_4->addWidget(mIntervalUnitWidget);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        mIntervalDDBtn = new QgsPropertyOverrideButton(WidgetHashedLine);
        mIntervalDDBtn->setObjectName(QString::fromUtf8("mIntervalDDBtn"));

        gridLayout_3->addWidget(mIntervalDDBtn, 0, 2, 1, 1);

        mCheckVertex = new QCheckBox(WidgetHashedLine);
        mCheckVertex->setObjectName(QString::fromUtf8("mCheckVertex"));

        gridLayout_3->addWidget(mCheckVertex, 3, 1, 1, 1);

        mCheckVertexLast = new QCheckBox(WidgetHashedLine);
        mCheckVertexLast->setObjectName(QString::fromUtf8("mCheckVertexLast"));

        gridLayout_3->addWidget(mCheckVertexLast, 2, 1, 1, 1);

        mCheckVertexFirst = new QCheckBox(WidgetHashedLine);
        mCheckVertexFirst->setObjectName(QString::fromUtf8("mCheckVertexFirst"));

        gridLayout_3->addWidget(mCheckVertexFirst, 1, 1, 1, 1);

        mCheckCentralPoint = new QCheckBox(WidgetHashedLine);
        mCheckCentralPoint->setObjectName(QString::fromUtf8("mCheckCentralPoint"));

        gridLayout_3->addWidget(mCheckCentralPoint, 4, 1, 1, 1);

        mCheckSegmentCentralPoint = new QCheckBox(WidgetHashedLine);
        mCheckSegmentCentralPoint->setObjectName(QString::fromUtf8("mCheckSegmentCentralPoint"));

        gridLayout_3->addWidget(mCheckSegmentCentralPoint, 5, 1, 1, 1);

        mCheckCurvePoint = new QCheckBox(WidgetHashedLine);
        mCheckCurvePoint->setObjectName(QString::fromUtf8("mCheckCurvePoint"));

        gridLayout_3->addWidget(mCheckCurvePoint, 6, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        mPlacementDDBtn = new QgsPropertyOverrideButton(WidgetHashedLine);
        mPlacementDDBtn->setObjectName(QString::fromUtf8("mPlacementDDBtn"));

        gridLayout_2->addWidget(mPlacementDDBtn, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 0, 1, 1);

        label_5 = new QLabel(WidgetHashedLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 2);

        label_4 = new QLabel(WidgetHashedLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        mSpinAverageAngleLength = new QgsDoubleSpinBox(WidgetHashedLine);
        mSpinAverageAngleLength->setObjectName(QString::fromUtf8("mSpinAverageAngleLength"));
        sizePolicy.setHeightForWidth(mSpinAverageAngleLength->sizePolicy().hasHeightForWidth());
        mSpinAverageAngleLength->setSizePolicy(sizePolicy);
        mSpinAverageAngleLength->setDecimals(6);
        mSpinAverageAngleLength->setMaximum(10000000.000000000000000);
        mSpinAverageAngleLength->setSingleStep(0.200000000000000);
        mSpinAverageAngleLength->setValue(1.000000000000000);

        gridLayout->addWidget(mSpinAverageAngleLength, 5, 2, 1, 1);

        mHashLengthDDBtn = new QgsPropertyOverrideButton(WidgetHashedLine);
        mHashLengthDDBtn->setObjectName(QString::fromUtf8("mHashLengthDDBtn"));

        gridLayout->addWidget(mHashLengthDDBtn, 2, 4, 1, 1);

        mHashLengthUnitWidget = new QgsUnitSelectionWidget(WidgetHashedLine);
        mHashLengthUnitWidget->setObjectName(QString::fromUtf8("mHashLengthUnitWidget"));
        mHashLengthUnitWidget->setMinimumSize(QSize(20, 0));
        mHashLengthUnitWidget->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(mHashLengthUnitWidget, 2, 3, 1, 1);

        mOffsetAlongLineDDBtn = new QgsPropertyOverrideButton(WidgetHashedLine);
        mOffsetAlongLineDDBtn->setObjectName(QString::fromUtf8("mOffsetAlongLineDDBtn"));

        gridLayout->addWidget(mOffsetAlongLineDDBtn, 1, 4, 1, 1);

        mSpinOffsetAlongLine = new QgsDoubleSpinBox(WidgetHashedLine);
        mSpinOffsetAlongLine->setObjectName(QString::fromUtf8("mSpinOffsetAlongLine"));
        sizePolicy.setHeightForWidth(mSpinOffsetAlongLine->sizePolicy().hasHeightForWidth());
        mSpinOffsetAlongLine->setSizePolicy(sizePolicy);
        mSpinOffsetAlongLine->setDecimals(6);
        mSpinOffsetAlongLine->setMinimum(-10000000.000000000000000);
        mSpinOffsetAlongLine->setMaximum(10000000.000000000000000);
        mSpinOffsetAlongLine->setSingleStep(0.200000000000000);
        mSpinOffsetAlongLine->setValue(1.000000000000000);

        gridLayout->addWidget(mSpinOffsetAlongLine, 1, 2, 1, 1);

        mSpinHashLength = new QgsDoubleSpinBox(WidgetHashedLine);
        mSpinHashLength->setObjectName(QString::fromUtf8("mSpinHashLength"));
        sizePolicy.setHeightForWidth(mSpinHashLength->sizePolicy().hasHeightForWidth());
        mSpinHashLength->setSizePolicy(sizePolicy);
        mSpinHashLength->setDecimals(6);
        mSpinHashLength->setMaximum(10000000.000000000000000);
        mSpinHashLength->setSingleStep(0.200000000000000);
        mSpinHashLength->setValue(1.000000000000000);

        gridLayout->addWidget(mSpinHashLength, 2, 2, 1, 1);

        mHashRotationDDBtn = new QgsPropertyOverrideButton(WidgetHashedLine);
        mHashRotationDDBtn->setObjectName(QString::fromUtf8("mHashRotationDDBtn"));

        gridLayout->addWidget(mHashRotationDDBtn, 3, 4, 1, 1);

        mRingFilterComboBox = new QComboBox(WidgetHashedLine);
        mRingFilterComboBox->setObjectName(QString::fromUtf8("mRingFilterComboBox"));

        gridLayout->addWidget(mRingFilterComboBox, 7, 2, 1, 3);

        mHashRotationSpinBox = new QgsDoubleSpinBox(WidgetHashedLine);
        mHashRotationSpinBox->setObjectName(QString::fromUtf8("mHashRotationSpinBox"));
        sizePolicy.setHeightForWidth(mHashRotationSpinBox->sizePolicy().hasHeightForWidth());
        mHashRotationSpinBox->setSizePolicy(sizePolicy);
        mHashRotationSpinBox->setWrapping(true);
        mHashRotationSpinBox->setDecimals(2);
        mHashRotationSpinBox->setMinimum(-360.000000000000000);
        mHashRotationSpinBox->setMaximum(360.000000000000000);
        mHashRotationSpinBox->setSingleStep(0.500000000000000);

        gridLayout->addWidget(mHashRotationSpinBox, 3, 2, 1, 1);

        mRingsLabel = new QLabel(WidgetHashedLine);
        mRingsLabel->setObjectName(QString::fromUtf8("mRingsLabel"));

        gridLayout->addWidget(mRingsLabel, 7, 0, 1, 2);

        label_3 = new QLabel(WidgetHashedLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 2);

        chkRotateMarker = new QCheckBox(WidgetHashedLine);
        chkRotateMarker->setObjectName(QString::fromUtf8("chkRotateMarker"));

        gridLayout->addWidget(chkRotateMarker, 4, 0, 1, 5);

        mLineOffsetDDBtn = new QgsPropertyOverrideButton(WidgetHashedLine);
        mLineOffsetDDBtn->setObjectName(QString::fromUtf8("mLineOffsetDDBtn"));

        gridLayout->addWidget(mLineOffsetDDBtn, 6, 4, 1, 1);

        label_6 = new QLabel(WidgetHashedLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetHashedLine);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(20, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 6, 3, 1, 1);

        mAverageAngleDDBtn = new QgsPropertyOverrideButton(WidgetHashedLine);
        mAverageAngleDDBtn->setObjectName(QString::fromUtf8("mAverageAngleDDBtn"));

        gridLayout->addWidget(mAverageAngleDDBtn, 5, 4, 1, 1);

        spinOffset = new QgsDoubleSpinBox(WidgetHashedLine);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        sizePolicy.setHeightForWidth(spinOffset->sizePolicy().hasHeightForWidth());
        spinOffset->setSizePolicy(sizePolicy);
        spinOffset->setDecimals(6);
        spinOffset->setMinimum(-999999999.000000000000000);
        spinOffset->setMaximum(999999999.000000000000000);
        spinOffset->setSingleStep(0.200000000000000);

        gridLayout->addWidget(spinOffset, 6, 2, 1, 1);

        label = new QLabel(WidgetHashedLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        mOffsetAlongLineUnitWidget = new QgsUnitSelectionWidget(WidgetHashedLine);
        mOffsetAlongLineUnitWidget->setObjectName(QString::fromUtf8("mOffsetAlongLineUnitWidget"));
        mOffsetAlongLineUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetAlongLineUnitWidget->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(mOffsetAlongLineUnitWidget, 1, 3, 1, 1);

        mAverageAngleUnit = new QgsUnitSelectionWidget(WidgetHashedLine);
        mAverageAngleUnit->setObjectName(QString::fromUtf8("mAverageAngleUnit"));
        mAverageAngleUnit->setMinimumSize(QSize(20, 0));
        mAverageAngleUnit->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(mAverageAngleUnit, 5, 3, 1, 1);

        mCheckPlaceOnEveryPart = new QCheckBox(WidgetHashedLine);
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
        QWidget::setTabOrder(mOffsetAlongLineDDBtn, mSpinHashLength);
        QWidget::setTabOrder(mSpinHashLength, mHashLengthUnitWidget);
        QWidget::setTabOrder(mHashLengthUnitWidget, mHashLengthDDBtn);
        QWidget::setTabOrder(mHashLengthDDBtn, mHashRotationSpinBox);
        QWidget::setTabOrder(mHashRotationSpinBox, mHashRotationDDBtn);
        QWidget::setTabOrder(mHashRotationDDBtn, chkRotateMarker);
        QWidget::setTabOrder(chkRotateMarker, mSpinAverageAngleLength);
        QWidget::setTabOrder(mSpinAverageAngleLength, mAverageAngleUnit);
        QWidget::setTabOrder(mAverageAngleUnit, mAverageAngleDDBtn);
        QWidget::setTabOrder(mAverageAngleDDBtn, spinOffset);
        QWidget::setTabOrder(spinOffset, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mLineOffsetDDBtn);
        QWidget::setTabOrder(mLineOffsetDDBtn, mRingFilterComboBox);

        retranslateUi(WidgetHashedLine);

        QMetaObject::connectSlotsByName(WidgetHashedLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetHashedLine)
    {
        label_2->setText(QCoreApplication::translate("WidgetHashedLine", "Hash placement", nullptr));
        mCheckInterval->setText(QCoreApplication::translate("WidgetHashedLine", "With interval", nullptr));
        mIntervalDDBtn->setText(QCoreApplication::translate("WidgetHashedLine", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mCheckVertex->setToolTip(QCoreApplication::translate("WidgetHashedLine", "Shows symbols on inner vertices, i.e. all vertices except the first or last", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckVertex->setText(QCoreApplication::translate("WidgetHashedLine", "On inner vertices", nullptr));
        mCheckVertexLast->setText(QCoreApplication::translate("WidgetHashedLine", "On last vertex", nullptr));
        mCheckVertexFirst->setText(QCoreApplication::translate("WidgetHashedLine", "On first vertex", nullptr));
        mCheckCentralPoint->setText(QCoreApplication::translate("WidgetHashedLine", "On central point", nullptr));
        mCheckSegmentCentralPoint->setText(QCoreApplication::translate("WidgetHashedLine", "On central point of segments", nullptr));
        mCheckCurvePoint->setText(QCoreApplication::translate("WidgetHashedLine", "On every curve point", nullptr));
        mPlacementDDBtn->setText(QCoreApplication::translate("WidgetHashedLine", "\342\200\246", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetHashedLine", "Hash length", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetHashedLine", "Hash rotation", nullptr));
        mHashLengthDDBtn->setText(QCoreApplication::translate("WidgetHashedLine", "\342\200\246", nullptr));
        mOffsetAlongLineDDBtn->setText(QCoreApplication::translate("WidgetHashedLine", "\342\200\246", nullptr));
        mHashRotationDDBtn->setText(QCoreApplication::translate("WidgetHashedLine", "\342\200\246", nullptr));
        mHashRotationSpinBox->setSuffix(QCoreApplication::translate("WidgetHashedLine", " \302\260", nullptr));
        mRingsLabel->setText(QCoreApplication::translate("WidgetHashedLine", "Rings", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetHashedLine", "Line offset", nullptr));
        chkRotateMarker->setText(QCoreApplication::translate("WidgetHashedLine", "Rotate hash to follow line direction", nullptr));
        mLineOffsetDDBtn->setText(QCoreApplication::translate("WidgetHashedLine", "\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetHashedLine", "Average angle over", nullptr));
        mAverageAngleDDBtn->setText(QCoreApplication::translate("WidgetHashedLine", "\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("WidgetHashedLine", "Offset along line", nullptr));
#if QT_CONFIG(tooltip)
        mCheckPlaceOnEveryPart->setToolTip(QCoreApplication::translate("WidgetHashedLine", "If checked, the \"first vertex\" or \"last vertex\" placements will also render at the first and last vertex for every part of multipart geometries", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckPlaceOnEveryPart->setText(QCoreApplication::translate("WidgetHashedLine", "Place on every part extremity", nullptr));
        (void)WidgetHashedLine;
    } // retranslateUi

};

namespace Ui {
    class WidgetHashedLine: public Ui_WidgetHashedLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_HASHLINE_H
