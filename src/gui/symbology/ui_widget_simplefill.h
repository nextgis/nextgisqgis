/********************************************************************************
** Form generated from reading UI file 'widget_simplefill.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLEFILL_H
#define UI_WIDGET_SIMPLEFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsbrushstylecombobox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleFill
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_6;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QLabel *label_5;
    QgsPenStyleComboBox *cboStrokeStyle;
    QgsColorButton *btnChangeStrokeColor;
    QgsPropertyOverrideButton *mStrokeStyleDDBtn;
    QgsBrushStyleComboBox *cboFillStyle;
    QgsColorButton *btnChangeColor;
    QLabel *label_3;
    QgsPropertyOverrideButton *mFillStyleDDBtn;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinStrokeWidth;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *spinOffsetY;
    QgsDoubleSpinBox *spinOffsetX;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mOffsetDDBtn;

    void setupUi(QWidget *WidgetSimpleFill)
    {
        if (WidgetSimpleFill->objectName().isEmpty())
            WidgetSimpleFill->setObjectName(QString::fromUtf8("WidgetSimpleFill"));
        WidgetSimpleFill->resize(307, 303);
        WidgetSimpleFill->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(WidgetSimpleFill);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(WidgetSimpleFill);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        label_7 = new QLabel(WidgetSimpleFill);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_4 = new QLabel(WidgetSimpleFill);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 8, 3, 1, 1);

        label_2 = new QLabel(WidgetSimpleFill);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(WidgetSimpleFill);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        label_9 = new QLabel(WidgetSimpleFill);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 1, 1, 1, 1);

        label_6 = new QLabel(WidgetSimpleFill);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 0, 0, 2, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout_2->addLayout(gridLayout_3, 7, 0, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mFillColorDDBtn->setObjectName(QString::fromUtf8("mFillColorDDBtn"));

        gridLayout_2->addWidget(mFillColorDDBtn, 0, 5, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mStrokeWidthDDBtn->setObjectName(QString::fromUtf8("mStrokeWidthDDBtn"));

        gridLayout_2->addWidget(mStrokeWidthDDBtn, 3, 5, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetSimpleFill);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout_2->addWidget(cboJoinStyle, 5, 3, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mStrokeColorDDBtn->setObjectName(QString::fromUtf8("mStrokeColorDDBtn"));

        gridLayout_2->addWidget(mStrokeColorDDBtn, 2, 5, 1, 1);

        label_5 = new QLabel(WidgetSimpleFill);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        cboStrokeStyle = new QgsPenStyleComboBox(WidgetSimpleFill);
        cboStrokeStyle->setObjectName(QString::fromUtf8("cboStrokeStyle"));

        gridLayout_2->addWidget(cboStrokeStyle, 4, 3, 1, 1);

        btnChangeStrokeColor = new QgsColorButton(WidgetSimpleFill);
        btnChangeStrokeColor->setObjectName(QString::fromUtf8("btnChangeStrokeColor"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnChangeStrokeColor->sizePolicy().hasHeightForWidth());
        btnChangeStrokeColor->setSizePolicy(sizePolicy1);
        btnChangeStrokeColor->setMinimumSize(QSize(120, 0));
        btnChangeStrokeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeStrokeColor, 2, 3, 1, 1);

        mStrokeStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mStrokeStyleDDBtn->setObjectName(QString::fromUtf8("mStrokeStyleDDBtn"));

        gridLayout_2->addWidget(mStrokeStyleDDBtn, 4, 5, 1, 1);

        cboFillStyle = new QgsBrushStyleComboBox(WidgetSimpleFill);
        cboFillStyle->setObjectName(QString::fromUtf8("cboFillStyle"));

        gridLayout_2->addWidget(cboFillStyle, 1, 3, 1, 1);

        btnChangeColor = new QgsColorButton(WidgetSimpleFill);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        sizePolicy1.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy1);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColor, 0, 3, 1, 1);

        label_3 = new QLabel(WidgetSimpleFill);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        mFillStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mFillStyleDDBtn->setObjectName(QString::fromUtf8("mFillStyleDDBtn"));

        gridLayout_2->addWidget(mFillStyleDDBtn, 1, 5, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinStrokeWidth = new QgsDoubleSpinBox(WidgetSimpleFill);
        spinStrokeWidth->setObjectName(QString::fromUtf8("spinStrokeWidth"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinStrokeWidth->sizePolicy().hasHeightForWidth());
        spinStrokeWidth->setSizePolicy(sizePolicy2);
        spinStrokeWidth->setDecimals(6);
        spinStrokeWidth->setMaximum(999999999.999999046325684);
        spinStrokeWidth->setSingleStep(0.200000000000000);
        spinStrokeWidth->setProperty("showClearButton", QVariant(true));

        horizontalLayout_3->addWidget(spinStrokeWidth);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleFill);
        mStrokeWidthUnitWidget->setObjectName(QString::fromUtf8("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mStrokeWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 3, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mJoinStyleDDBtn->setObjectName(QString::fromUtf8("mJoinStyleDDBtn"));

        gridLayout_2->addWidget(mJoinStyleDDBtn, 5, 5, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, -1);
        spinOffsetY = new QgsDoubleSpinBox(WidgetSimpleFill);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy2.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy2);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-99999999.989999994635582);
        spinOffsetY->setMaximum(99999999.989999994635582);
        spinOffsetY->setSingleStep(0.200000000000000);

        gridLayout->addWidget(spinOffsetY, 1, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetSimpleFill);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        sizePolicy2.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy2);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-99999999.989999994635582);
        spinOffsetX->setMaximum(99999999.989999994635582);
        spinOffsetX->setSingleStep(0.200000000000000);

        gridLayout->addWidget(spinOffsetX, 0, 0, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleFill);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 1, 2, 1);


        gridLayout_2->addLayout(gridLayout, 7, 3, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetSimpleFill);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 7, 5, 1, 1);

        gridLayout_2->setColumnStretch(3, 1);
        QWidget::setTabOrder(btnChangeColor, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, cboFillStyle);
        QWidget::setTabOrder(cboFillStyle, mFillStyleDDBtn);
        QWidget::setTabOrder(mFillStyleDDBtn, btnChangeStrokeColor);
        QWidget::setTabOrder(btnChangeStrokeColor, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, spinStrokeWidth);
        QWidget::setTabOrder(spinStrokeWidth, mStrokeWidthUnitWidget);
        QWidget::setTabOrder(mStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, cboStrokeStyle);
        QWidget::setTabOrder(cboStrokeStyle, mStrokeStyleDDBtn);
        QWidget::setTabOrder(mStrokeStyleDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);

        retranslateUi(WidgetSimpleFill);

        QMetaObject::connectSlotsByName(WidgetSimpleFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleFill)
    {
        label_8->setText(QCoreApplication::translate("WidgetSimpleFill", "Join style", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetSimpleFill", "Fill color", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetSimpleFill", "Stroke style", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetSimpleFill", "Fill style", nullptr));
        label->setText(QCoreApplication::translate("WidgetSimpleFill", "x", nullptr));
        label_9->setText(QCoreApplication::translate("WidgetSimpleFill", "y", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetSimpleFill", "Offset", nullptr));
        mFillColorDDBtn->setText(QCoreApplication::translate("WidgetSimpleFill", "\342\200\246", nullptr));
        mStrokeWidthDDBtn->setText(QCoreApplication::translate("WidgetSimpleFill", "\342\200\246", nullptr));
        mStrokeColorDDBtn->setText(QCoreApplication::translate("WidgetSimpleFill", "\342\200\246", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetSimpleFill", "Stroke width", nullptr));
        btnChangeStrokeColor->setText(QString());
        mStrokeStyleDDBtn->setText(QCoreApplication::translate("WidgetSimpleFill", "\342\200\246", nullptr));
        btnChangeColor->setText(QString());
        label_3->setText(QCoreApplication::translate("WidgetSimpleFill", "Stroke color", nullptr));
        mFillStyleDDBtn->setText(QCoreApplication::translate("WidgetSimpleFill", "\342\200\246", nullptr));
        spinStrokeWidth->setSpecialValueText(QCoreApplication::translate("WidgetSimpleFill", "Hairline", nullptr));
        mJoinStyleDDBtn->setText(QCoreApplication::translate("WidgetSimpleFill", "\342\200\246", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetSimpleFill", "\342\200\246", nullptr));
        (void)WidgetSimpleFill;
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleFill: public Ui_WidgetSimpleFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLEFILL_H
