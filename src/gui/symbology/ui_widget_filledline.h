/********************************************************************************
** Form generated from reading UI file 'widget_filledline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_FILLEDLINE_H
#define UI_WIDGET_FILLEDLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetFilledLine
{
public:
    QGridLayout *gridLayout;
    QgsPropertyOverrideButton *mCapStyleDDBtn;
    QgsPenCapStyleComboBox *cboCapStyle;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *spinWidth;
    QgsUnitSelectionWidget *mPenWidthUnitWidget;
    QLabel *label_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QLabel *label_4;
    QgsPropertyOverrideButton *mPenWidthDDBtn;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinOffset;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label_5;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;

    void setupUi(QWidget *WidgetFilledLine)
    {
        if (WidgetFilledLine->objectName().isEmpty())
            WidgetFilledLine->setObjectName(QString::fromUtf8("WidgetFilledLine"));
        WidgetFilledLine->resize(432, 232);
        WidgetFilledLine->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(WidgetFilledLine);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mCapStyleDDBtn = new QgsPropertyOverrideButton(WidgetFilledLine);
        mCapStyleDDBtn->setObjectName(QString::fromUtf8("mCapStyleDDBtn"));

        gridLayout->addWidget(mCapStyleDDBtn, 3, 2, 1, 1);

        cboCapStyle = new QgsPenCapStyleComboBox(WidgetFilledLine);
        cboCapStyle->setObjectName(QString::fromUtf8("cboCapStyle"));

        gridLayout->addWidget(cboCapStyle, 3, 1, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetFilledLine);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout->addWidget(mOffsetDDBtn, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinWidth = new QgsDoubleSpinBox(WidgetFilledLine);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinWidth->sizePolicy().hasHeightForWidth());
        spinWidth->setSizePolicy(sizePolicy);
        spinWidth->setDecimals(6);
        spinWidth->setMaximum(100000.000000000000000);
        spinWidth->setSingleStep(0.200000000000000);
        spinWidth->setValue(1.000000000000000);
        spinWidth->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(spinWidth);

        mPenWidthUnitWidget = new QgsUnitSelectionWidget(WidgetFilledLine);
        mPenWidthUnitWidget->setObjectName(QString::fromUtf8("mPenWidthUnitWidget"));
        mPenWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mPenWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mPenWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_2 = new QLabel(WidgetFilledLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_6 = new QLabel(WidgetFilledLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetFilledLine);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout->addWidget(cboJoinStyle, 2, 1, 1, 1);

        label_4 = new QLabel(WidgetFilledLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        mPenWidthDDBtn = new QgsPropertyOverrideButton(WidgetFilledLine);
        mPenWidthDDBtn->setObjectName(QString::fromUtf8("mPenWidthDDBtn"));

        gridLayout->addWidget(mPenWidthDDBtn, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinOffset = new QgsDoubleSpinBox(WidgetFilledLine);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinOffset->sizePolicy().hasHeightForWidth());
        spinOffset->setSizePolicy(sizePolicy1);
        spinOffset->setStyleSheet(QString::fromUtf8(""));
        spinOffset->setDecimals(6);
        spinOffset->setMinimum(-100000.000000000000000);
        spinOffset->setMaximum(100000.000000000000000);
        spinOffset->setSingleStep(0.200000000000000);

        horizontalLayout_3->addWidget(spinOffset);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetFilledLine);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_5 = new QLabel(WidgetFilledLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetFilledLine);
        mJoinStyleDDBtn->setObjectName(QString::fromUtf8("mJoinStyleDDBtn"));

        gridLayout->addWidget(mJoinStyleDDBtn, 2, 2, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        QWidget::setTabOrder(spinWidth, mPenWidthUnitWidget);
        QWidget::setTabOrder(mPenWidthUnitWidget, mPenWidthDDBtn);
        QWidget::setTabOrder(mPenWidthDDBtn, spinOffset);
        QWidget::setTabOrder(spinOffset, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, cboCapStyle);
        QWidget::setTabOrder(cboCapStyle, mCapStyleDDBtn);

        retranslateUi(WidgetFilledLine);

        QMetaObject::connectSlotsByName(WidgetFilledLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetFilledLine)
    {
        mCapStyleDDBtn->setText(QCoreApplication::translate("WidgetFilledLine", "\342\200\246", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetFilledLine", "\342\200\246", nullptr));
        spinWidth->setSpecialValueText(QCoreApplication::translate("WidgetFilledLine", "Hairline", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetFilledLine", "Stroke width", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetFilledLine", "Cap style", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetFilledLine", "Offset", nullptr));
        mPenWidthDDBtn->setText(QCoreApplication::translate("WidgetFilledLine", "\342\200\246", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetFilledLine", "Join style", nullptr));
        mJoinStyleDDBtn->setText(QCoreApplication::translate("WidgetFilledLine", "\342\200\246", nullptr));
        (void)WidgetFilledLine;
    } // retranslateUi

};

namespace Ui {
    class WidgetFilledLine: public Ui_WidgetFilledLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_FILLEDLINE_H
