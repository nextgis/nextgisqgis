/********************************************************************************
** Form generated from reading UI file 'qgslinearreferencingsymbollayerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLINEARREFERENCINGSYMBOLLAYERWIDGETBASE_H
#define UI_QGSLINEARREFERENCINGSYMBOLLAYERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLinearReferencingSymbolLayerWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mUnitLabelLabel_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QgsDoubleSpinBox *mSpinLabelOffsetX;
    QLabel *label_6;
    QgsDoubleSpinBox *mSpinLabelOffsetY;
    QgsUnitSelectionWidget *mLabelOffsetUnitWidget;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QgsFontButton *mTextFormatButton;
    QLabel *label_4;
    QWidget *mIntervalWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinInterval;
    QgsPropertyOverrideButton *mIntervalDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mSpinSkipMultiples;
    QgsPropertyOverrideButton *mSkipMultiplesDDBtn;
    QPushButton *mNumberFormatPushButton;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mSpinAverageAngleLength;
    QgsUnitSelectionWidget *mAverageAngleUnit;
    QgsPropertyOverrideButton *mAverageAngleDDBtn;
    QLabel *label_5;
    QLabel *label_2;
    QCheckBox *mCheckRotate;
    QLabel *label_8;
    QComboBox *mComboPlacement;
    QComboBox *mComboQuantity;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *mCheckShowMarker;
    QgsPropertyOverrideButton *mShowMarkerDDBtn;

    void setupUi(QWidget *QgsLinearReferencingSymbolLayerWidgetBase)
    {
        if (QgsLinearReferencingSymbolLayerWidgetBase->objectName().isEmpty())
            QgsLinearReferencingSymbolLayerWidgetBase->setObjectName(QString::fromUtf8("QgsLinearReferencingSymbolLayerWidgetBase"));
        QgsLinearReferencingSymbolLayerWidgetBase->resize(388, 419);
        QgsLinearReferencingSymbolLayerWidgetBase->setFocusPolicy(Qt::FocusPolicy::WheelFocus);
        QgsLinearReferencingSymbolLayerWidgetBase->setWindowTitle(QString::fromUtf8("Linear Referencing Symbol Layer"));
        gridLayout = new QGridLayout(QgsLinearReferencingSymbolLayerWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 9);
        mUnitLabelLabel_2 = new QLabel(QgsLinearReferencingSymbolLayerWidgetBase);
        mUnitLabelLabel_2->setObjectName(QString::fromUtf8("mUnitLabelLabel_2"));
        mUnitLabelLabel_2->setWordWrap(true);

        gridLayout->addWidget(mUnitLabelLabel_2, 5, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(QgsLinearReferencingSymbolLayerWidgetBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        mSpinLabelOffsetX = new QgsDoubleSpinBox(QgsLinearReferencingSymbolLayerWidgetBase);
        mSpinLabelOffsetX->setObjectName(QString::fromUtf8("mSpinLabelOffsetX"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinLabelOffsetX->sizePolicy().hasHeightForWidth());
        mSpinLabelOffsetX->setSizePolicy(sizePolicy);
        mSpinLabelOffsetX->setDecimals(6);
        mSpinLabelOffsetX->setMinimum(-99999999.989999994635582);
        mSpinLabelOffsetX->setMaximum(99999999.989999994635582);
        mSpinLabelOffsetX->setSingleStep(0.200000000000000);

        gridLayout_2->addWidget(mSpinLabelOffsetX, 0, 1, 1, 1);

        label_6 = new QLabel(QgsLinearReferencingSymbolLayerWidgetBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        mSpinLabelOffsetY = new QgsDoubleSpinBox(QgsLinearReferencingSymbolLayerWidgetBase);
        mSpinLabelOffsetY->setObjectName(QString::fromUtf8("mSpinLabelOffsetY"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSpinLabelOffsetY->sizePolicy().hasHeightForWidth());
        mSpinLabelOffsetY->setSizePolicy(sizePolicy1);
        mSpinLabelOffsetY->setDecimals(6);
        mSpinLabelOffsetY->setMinimum(-99999999.989999994635582);
        mSpinLabelOffsetY->setMaximum(99999999.989999994635582);
        mSpinLabelOffsetY->setSingleStep(0.200000000000000);

        gridLayout_2->addWidget(mSpinLabelOffsetY, 1, 1, 1, 1);

        mLabelOffsetUnitWidget = new QgsUnitSelectionWidget(QgsLinearReferencingSymbolLayerWidgetBase);
        mLabelOffsetUnitWidget->setObjectName(QString::fromUtf8("mLabelOffsetUnitWidget"));
        mLabelOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mLabelOffsetUnitWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_2->addWidget(mLabelOffsetUnitWidget, 0, 2, 2, 1);


        gridLayout->addLayout(gridLayout_2, 8, 1, 1, 1);

        label_3 = new QLabel(QgsLinearReferencingSymbolLayerWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 13, 0, 1, 1);

        mTextFormatButton = new QgsFontButton(QgsLinearReferencingSymbolLayerWidgetBase);
        mTextFormatButton->setObjectName(QString::fromUtf8("mTextFormatButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mTextFormatButton->sizePolicy().hasHeightForWidth());
        mTextFormatButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mTextFormatButton, 4, 1, 1, 1);

        label_4 = new QLabel(QgsLinearReferencingSymbolLayerWidgetBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 12, 0, 1, 1);

        mIntervalWidget = new QWidget(QgsLinearReferencingSymbolLayerWidgetBase);
        mIntervalWidget->setObjectName(QString::fromUtf8("mIntervalWidget"));
        mIntervalWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        horizontalLayout_2 = new QHBoxLayout(mIntervalWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(mIntervalWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        spinInterval = new QgsDoubleSpinBox(mIntervalWidget);
        spinInterval->setObjectName(QString::fromUtf8("spinInterval"));
        sizePolicy1.setHeightForWidth(spinInterval->sizePolicy().hasHeightForWidth());
        spinInterval->setSizePolicy(sizePolicy1);
        spinInterval->setDecimals(6);
        spinInterval->setMaximum(10000000.000000000000000);
        spinInterval->setSingleStep(0.200000000000000);
        spinInterval->setValue(1.000000000000000);
        spinInterval->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(spinInterval);

        mIntervalDDBtn = new QgsPropertyOverrideButton(mIntervalWidget);
        mIntervalDDBtn->setObjectName(QString::fromUtf8("mIntervalDDBtn"));

        horizontalLayout_3->addWidget(mIntervalDDBtn);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        gridLayout->addWidget(mIntervalWidget, 2, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        mSpinSkipMultiples = new QgsDoubleSpinBox(QgsLinearReferencingSymbolLayerWidgetBase);
        mSpinSkipMultiples->setObjectName(QString::fromUtf8("mSpinSkipMultiples"));
        sizePolicy1.setHeightForWidth(mSpinSkipMultiples->sizePolicy().hasHeightForWidth());
        mSpinSkipMultiples->setSizePolicy(sizePolicy1);
        mSpinSkipMultiples->setDecimals(6);
        mSpinSkipMultiples->setMaximum(10000000.000000000000000);
        mSpinSkipMultiples->setSingleStep(0.200000000000000);
        mSpinSkipMultiples->setValue(1.000000000000000);
        mSpinSkipMultiples->setProperty("showClearButton", QVariant(true));

        horizontalLayout_4->addWidget(mSpinSkipMultiples);

        mSkipMultiplesDDBtn = new QgsPropertyOverrideButton(QgsLinearReferencingSymbolLayerWidgetBase);
        mSkipMultiplesDDBtn->setObjectName(QString::fromUtf8("mSkipMultiplesDDBtn"));

        horizontalLayout_4->addWidget(mSkipMultiplesDDBtn);


        gridLayout->addLayout(horizontalLayout_4, 6, 1, 1, 1);

        mNumberFormatPushButton = new QPushButton(QgsLinearReferencingSymbolLayerWidgetBase);
        mNumberFormatPushButton->setObjectName(QString::fromUtf8("mNumberFormatPushButton"));

        gridLayout->addWidget(mNumberFormatPushButton, 5, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        mSpinAverageAngleLength = new QgsDoubleSpinBox(QgsLinearReferencingSymbolLayerWidgetBase);
        mSpinAverageAngleLength->setObjectName(QString::fromUtf8("mSpinAverageAngleLength"));
        sizePolicy1.setHeightForWidth(mSpinAverageAngleLength->sizePolicy().hasHeightForWidth());
        mSpinAverageAngleLength->setSizePolicy(sizePolicy1);
        mSpinAverageAngleLength->setDecimals(6);
        mSpinAverageAngleLength->setMaximum(10000000.000000000000000);
        mSpinAverageAngleLength->setSingleStep(0.200000000000000);
        mSpinAverageAngleLength->setValue(1.000000000000000);

        horizontalLayout->addWidget(mSpinAverageAngleLength);

        mAverageAngleUnit = new QgsUnitSelectionWidget(QgsLinearReferencingSymbolLayerWidgetBase);
        mAverageAngleUnit->setObjectName(QString::fromUtf8("mAverageAngleUnit"));
        mAverageAngleUnit->setMinimumSize(QSize(20, 0));
        mAverageAngleUnit->setFocusPolicy(Qt::FocusPolicy::TabFocus);

        horizontalLayout->addWidget(mAverageAngleUnit);

        mAverageAngleDDBtn = new QgsPropertyOverrideButton(QgsLinearReferencingSymbolLayerWidgetBase);
        mAverageAngleDDBtn->setObjectName(QString::fromUtf8("mAverageAngleDDBtn"));

        horizontalLayout->addWidget(mAverageAngleDDBtn);


        gridLayout->addLayout(horizontalLayout, 12, 1, 1, 1);

        label_5 = new QLabel(QgsLinearReferencingSymbolLayerWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_2 = new QLabel(QgsLinearReferencingSymbolLayerWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        mCheckRotate = new QCheckBox(QgsLinearReferencingSymbolLayerWidgetBase);
        mCheckRotate->setObjectName(QString::fromUtf8("mCheckRotate"));

        gridLayout->addWidget(mCheckRotate, 11, 0, 1, 2);

        label_8 = new QLabel(QgsLinearReferencingSymbolLayerWidgetBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        mComboPlacement = new QComboBox(QgsLinearReferencingSymbolLayerWidgetBase);
        mComboPlacement->setObjectName(QString::fromUtf8("mComboPlacement"));

        gridLayout->addWidget(mComboPlacement, 1, 1, 1, 1);

        mComboQuantity = new QComboBox(QgsLinearReferencingSymbolLayerWidgetBase);
        mComboQuantity->setObjectName(QString::fromUtf8("mComboQuantity"));

        gridLayout->addWidget(mComboQuantity, 3, 1, 1, 1);

        label = new QLabel(QgsLinearReferencingSymbolLayerWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        mCheckShowMarker = new QCheckBox(QgsLinearReferencingSymbolLayerWidgetBase);
        mCheckShowMarker->setObjectName(QString::fromUtf8("mCheckShowMarker"));

        horizontalLayout_5->addWidget(mCheckShowMarker);

        mShowMarkerDDBtn = new QgsPropertyOverrideButton(QgsLinearReferencingSymbolLayerWidgetBase);
        mShowMarkerDDBtn->setObjectName(QString::fromUtf8("mShowMarkerDDBtn"));

        horizontalLayout_5->addWidget(mShowMarkerDDBtn);


        gridLayout->addLayout(horizontalLayout_5, 10, 0, 1, 2);

        gridLayout->setRowStretch(13, 1);
        gridLayout->setColumnStretch(1, 1);
        QWidget::setTabOrder(mComboPlacement, spinInterval);
        QWidget::setTabOrder(spinInterval, mIntervalDDBtn);
        QWidget::setTabOrder(mIntervalDDBtn, mComboQuantity);
        QWidget::setTabOrder(mComboQuantity, mTextFormatButton);
        QWidget::setTabOrder(mTextFormatButton, mNumberFormatPushButton);
        QWidget::setTabOrder(mNumberFormatPushButton, mSpinSkipMultiples);
        QWidget::setTabOrder(mSpinSkipMultiples, mSkipMultiplesDDBtn);
        QWidget::setTabOrder(mSkipMultiplesDDBtn, mSpinLabelOffsetX);
        QWidget::setTabOrder(mSpinLabelOffsetX, mLabelOffsetUnitWidget);
        QWidget::setTabOrder(mLabelOffsetUnitWidget, mSpinLabelOffsetY);
        QWidget::setTabOrder(mSpinLabelOffsetY, mCheckShowMarker);
        QWidget::setTabOrder(mCheckShowMarker, mShowMarkerDDBtn);
        QWidget::setTabOrder(mShowMarkerDDBtn, mCheckRotate);
        QWidget::setTabOrder(mCheckRotate, mSpinAverageAngleLength);
        QWidget::setTabOrder(mSpinAverageAngleLength, mAverageAngleUnit);
        QWidget::setTabOrder(mAverageAngleUnit, mAverageAngleDDBtn);

        retranslateUi(QgsLinearReferencingSymbolLayerWidgetBase);

        QMetaObject::connectSlotsByName(QgsLinearReferencingSymbolLayerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLinearReferencingSymbolLayerWidgetBase)
    {
        mUnitLabelLabel_2->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Number format", nullptr));
        label_7->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "x", nullptr));
        label_6->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "y", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Label offset", nullptr));
        mTextFormatButton->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Text format", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Average angle over", nullptr));
        label_9->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Interval", nullptr));
        mIntervalDDBtn->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "\342\200\246", nullptr));
        mSkipMultiplesDDBtn->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "\342\200\246", nullptr));
        mNumberFormatPushButton->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Customize", nullptr));
        mAverageAngleDDBtn->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "\342\200\246", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Measure placement", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Skip multiples of", nullptr));
        mCheckRotate->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Rotate labels to follow line direction", nullptr));
        label_8->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Quantity", nullptr));
        label->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Text format", nullptr));
        mCheckShowMarker->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "Show marker symbols", nullptr));
        mShowMarkerDDBtn->setText(QCoreApplication::translate("QgsLinearReferencingSymbolLayerWidgetBase", "\342\200\246", nullptr));
        (void)QgsLinearReferencingSymbolLayerWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLinearReferencingSymbolLayerWidgetBase: public Ui_QgsLinearReferencingSymbolLayerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLINEARREFERENCINGSYMBOLLAYERWIDGETBASE_H
