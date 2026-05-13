/********************************************************************************
** Form generated from reading UI file 'qgsarrowsymbollayerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSARROWSYMBOLLAYERWIDGETBASE_H
#define UI_QGSARROWSYMBOLLAYERWIDGETBASE_H

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

class Ui_QgsArrowSymbolLayerWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsPropertyOverrideButton *mArrowTypeDDBtn;
    QComboBox *mHeadTypeCombo;
    QCheckBox *mCurvedArrowChck;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mHeadThicknessSpin;
    QgsUnitSelectionWidget *mHeadThicknessUnitWidget;
    QgsPropertyOverrideButton *mHeadHeightDDBtn;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_8;
    QgsPropertyOverrideButton *mHeadWidthDDBtn;
    QgsPropertyOverrideButton *mArrowWidthDDBtn;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mOffsetSpin;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QHBoxLayout *horizontalLayout_6;
    QgsDoubleSpinBox *mArrowWidthSpin;
    QgsUnitSelectionWidget *mArrowWidthUnitWidget;
    QgsPropertyOverrideButton *mHeadTypeDDBtn;
    QLabel *label_2;
    QgsPropertyOverrideButton *mArrowStartWidthDDBtn;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QgsDoubleSpinBox *mHeadLengthSpin;
    QgsUnitSelectionWidget *mHeadLengthUnitWidget;
    QLabel *label_10;
    QComboBox *mArrowTypeCombo;
    QLabel *label;
    QHBoxLayout *horizontalLayout_9;
    QgsDoubleSpinBox *mArrowStartWidthSpin;
    QgsUnitSelectionWidget *mArrowStartWidthUnitWidget;
    QCheckBox *mRepeatArrowChck;

    void setupUi(QWidget *QgsArrowSymbolLayerWidgetBase)
    {
        if (QgsArrowSymbolLayerWidgetBase->objectName().isEmpty())
            QgsArrowSymbolLayerWidgetBase->setObjectName(QString::fromUtf8("QgsArrowSymbolLayerWidgetBase"));
        QgsArrowSymbolLayerWidgetBase->resize(721, 364);
        QgsArrowSymbolLayerWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsArrowSymbolLayerWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mArrowTypeDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mArrowTypeDDBtn->setObjectName(QString::fromUtf8("mArrowTypeDDBtn"));

        gridLayout->addWidget(mArrowTypeDDBtn, 1, 2, 1, 1);

        mHeadTypeCombo = new QComboBox(QgsArrowSymbolLayerWidgetBase);
        mHeadTypeCombo->addItem(QString());
        mHeadTypeCombo->addItem(QString());
        mHeadTypeCombo->addItem(QString());
        mHeadTypeCombo->setObjectName(QString::fromUtf8("mHeadTypeCombo"));

        gridLayout->addWidget(mHeadTypeCombo, 0, 1, 1, 1);

        mCurvedArrowChck = new QCheckBox(QgsArrowSymbolLayerWidgetBase);
        mCurvedArrowChck->setObjectName(QString::fromUtf8("mCurvedArrowChck"));
        mCurvedArrowChck->setChecked(true);
        mCurvedArrowChck->setTristate(false);

        gridLayout->addWidget(mCurvedArrowChck, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mHeadThicknessSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mHeadThicknessSpin->setObjectName(QString::fromUtf8("mHeadThicknessSpin"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mHeadThicknessSpin->sizePolicy().hasHeightForWidth());
        mHeadThicknessSpin->setSizePolicy(sizePolicy);
        mHeadThicknessSpin->setDecimals(6);
        mHeadThicknessSpin->setMaximum(999999999.999999046325684);
        mHeadThicknessSpin->setSingleStep(0.200000000000000);

        horizontalLayout_2->addWidget(mHeadThicknessSpin);

        mHeadThicknessUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mHeadThicknessUnitWidget->setObjectName(QString::fromUtf8("mHeadThicknessUnitWidget"));
        mHeadThicknessUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(mHeadThicknessUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        mHeadHeightDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mHeadHeightDDBtn->setObjectName(QString::fromUtf8("mHeadHeightDDBtn"));

        gridLayout->addWidget(mHeadHeightDDBtn, 5, 2, 1, 1);

        label_6 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_3 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_8 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        mHeadWidthDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mHeadWidthDDBtn->setObjectName(QString::fromUtf8("mHeadWidthDDBtn"));

        gridLayout->addWidget(mHeadWidthDDBtn, 4, 2, 1, 1);

        mArrowWidthDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mArrowWidthDDBtn->setObjectName(QString::fromUtf8("mArrowWidthDDBtn"));

        gridLayout->addWidget(mArrowWidthDDBtn, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mOffsetSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mOffsetSpin->setObjectName(QString::fromUtf8("mOffsetSpin"));
        sizePolicy.setHeightForWidth(mOffsetSpin->sizePolicy().hasHeightForWidth());
        mOffsetSpin->setSizePolicy(sizePolicy);
        mOffsetSpin->setDecimals(6);
        mOffsetSpin->setMinimum(-99999999.989999994635582);
        mOffsetSpin->setMaximum(99999999.989999994635582);
        mOffsetSpin->setSingleStep(0.200000000000000);

        horizontalLayout->addWidget(mOffsetSpin);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout, 6, 1, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout->addWidget(mOffsetDDBtn, 6, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mArrowWidthSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mArrowWidthSpin->setObjectName(QString::fromUtf8("mArrowWidthSpin"));
        sizePolicy.setHeightForWidth(mArrowWidthSpin->sizePolicy().hasHeightForWidth());
        mArrowWidthSpin->setSizePolicy(sizePolicy);
        mArrowWidthSpin->setDecimals(6);
        mArrowWidthSpin->setMaximum(999999999.999999046325684);
        mArrowWidthSpin->setSingleStep(0.200000000000000);
        mArrowWidthSpin->setProperty("showClearButton", QVariant(false));

        horizontalLayout_6->addWidget(mArrowWidthSpin);

        mArrowWidthUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mArrowWidthUnitWidget->setObjectName(QString::fromUtf8("mArrowWidthUnitWidget"));
        mArrowWidthUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_6->addWidget(mArrowWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        mHeadTypeDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mHeadTypeDDBtn->setObjectName(QString::fromUtf8("mHeadTypeDDBtn"));

        gridLayout->addWidget(mHeadTypeDDBtn, 0, 2, 1, 1);

        label_2 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        mArrowStartWidthDDBtn = new QgsPropertyOverrideButton(QgsArrowSymbolLayerWidgetBase);
        mArrowStartWidthDDBtn->setObjectName(QString::fromUtf8("mArrowStartWidthDDBtn"));

        gridLayout->addWidget(mArrowStartWidthDDBtn, 3, 2, 1, 1);

        label_9 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mHeadLengthSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mHeadLengthSpin->setObjectName(QString::fromUtf8("mHeadLengthSpin"));
        sizePolicy.setHeightForWidth(mHeadLengthSpin->sizePolicy().hasHeightForWidth());
        mHeadLengthSpin->setSizePolicy(sizePolicy);
        mHeadLengthSpin->setDecimals(6);
        mHeadLengthSpin->setMaximum(999999999.999999046325684);
        mHeadLengthSpin->setSingleStep(0.200000000000000);
        mHeadLengthSpin->setProperty("showClearButton", QVariant(false));

        horizontalLayout_7->addWidget(mHeadLengthSpin);

        mHeadLengthUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mHeadLengthUnitWidget->setObjectName(QString::fromUtf8("mHeadLengthUnitWidget"));
        mHeadLengthUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_7->addWidget(mHeadLengthUnitWidget);


        gridLayout->addLayout(horizontalLayout_7, 4, 1, 1, 1);

        label_10 = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        mArrowTypeCombo = new QComboBox(QgsArrowSymbolLayerWidgetBase);
        mArrowTypeCombo->addItem(QString());
        mArrowTypeCombo->addItem(QString());
        mArrowTypeCombo->addItem(QString());
        mArrowTypeCombo->setObjectName(QString::fromUtf8("mArrowTypeCombo"));

        gridLayout->addWidget(mArrowTypeCombo, 1, 1, 1, 1);

        label = new QLabel(QgsArrowSymbolLayerWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mArrowStartWidthSpin = new QgsDoubleSpinBox(QgsArrowSymbolLayerWidgetBase);
        mArrowStartWidthSpin->setObjectName(QString::fromUtf8("mArrowStartWidthSpin"));
        sizePolicy.setHeightForWidth(mArrowStartWidthSpin->sizePolicy().hasHeightForWidth());
        mArrowStartWidthSpin->setSizePolicy(sizePolicy);
        mArrowStartWidthSpin->setDecimals(6);
        mArrowStartWidthSpin->setMaximum(999999999.999999046325684);
        mArrowStartWidthSpin->setSingleStep(0.200000000000000);
        mArrowStartWidthSpin->setProperty("showClearButton", QVariant(false));

        horizontalLayout_9->addWidget(mArrowStartWidthSpin);

        mArrowStartWidthUnitWidget = new QgsUnitSelectionWidget(QgsArrowSymbolLayerWidgetBase);
        mArrowStartWidthUnitWidget->setObjectName(QString::fromUtf8("mArrowStartWidthUnitWidget"));
        mArrowStartWidthUnitWidget->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_9->addWidget(mArrowStartWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_9, 3, 1, 1, 1);

        mRepeatArrowChck = new QCheckBox(QgsArrowSymbolLayerWidgetBase);
        mRepeatArrowChck->setObjectName(QString::fromUtf8("mRepeatArrowChck"));
        mRepeatArrowChck->setChecked(true);
        mRepeatArrowChck->setTristate(false);

        gridLayout->addWidget(mRepeatArrowChck, 8, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        QWidget::setTabOrder(mHeadTypeCombo, mHeadTypeDDBtn);
        QWidget::setTabOrder(mHeadTypeDDBtn, mArrowTypeCombo);
        QWidget::setTabOrder(mArrowTypeCombo, mArrowTypeDDBtn);
        QWidget::setTabOrder(mArrowTypeDDBtn, mArrowWidthSpin);
        QWidget::setTabOrder(mArrowWidthSpin, mArrowWidthUnitWidget);
        QWidget::setTabOrder(mArrowWidthUnitWidget, mArrowWidthDDBtn);
        QWidget::setTabOrder(mArrowWidthDDBtn, mArrowStartWidthSpin);
        QWidget::setTabOrder(mArrowStartWidthSpin, mArrowStartWidthUnitWidget);
        QWidget::setTabOrder(mArrowStartWidthUnitWidget, mArrowStartWidthDDBtn);
        QWidget::setTabOrder(mArrowStartWidthDDBtn, mHeadLengthSpin);
        QWidget::setTabOrder(mHeadLengthSpin, mHeadLengthUnitWidget);
        QWidget::setTabOrder(mHeadLengthUnitWidget, mHeadWidthDDBtn);
        QWidget::setTabOrder(mHeadWidthDDBtn, mHeadThicknessSpin);
        QWidget::setTabOrder(mHeadThicknessSpin, mHeadThicknessUnitWidget);
        QWidget::setTabOrder(mHeadThicknessUnitWidget, mHeadHeightDDBtn);
        QWidget::setTabOrder(mHeadHeightDDBtn, mOffsetSpin);
        QWidget::setTabOrder(mOffsetSpin, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mCurvedArrowChck);
        QWidget::setTabOrder(mCurvedArrowChck, mRepeatArrowChck);

        retranslateUi(QgsArrowSymbolLayerWidgetBase);

        QMetaObject::connectSlotsByName(QgsArrowSymbolLayerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsArrowSymbolLayerWidgetBase)
    {
        mArrowTypeDDBtn->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", nullptr));
        mHeadTypeCombo->setItemText(0, QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Single", nullptr));
        mHeadTypeCombo->setItemText(1, QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Single, reversed", nullptr));
        mHeadTypeCombo->setItemText(2, QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Double", nullptr));

        mCurvedArrowChck->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Curved arrows", nullptr));
        mHeadHeightDDBtn->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Offset", nullptr));
        label_3->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Arrow type", nullptr));
        label_8->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Arrow width", nullptr));
        mHeadWidthDDBtn->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", nullptr));
        mArrowWidthDDBtn->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", nullptr));
        mHeadTypeDDBtn->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Head thickness", nullptr));
        mArrowStartWidthDDBtn->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "\342\200\246", nullptr));
        label_9->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Head length", nullptr));
        label_10->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Head type", nullptr));
        mArrowTypeCombo->setItemText(0, QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Plain", nullptr));
        mArrowTypeCombo->setItemText(1, QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Left/Exterior half", nullptr));
        mArrowTypeCombo->setItemText(2, QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Right/Interior half", nullptr));

#if QT_CONFIG(tooltip)
        mArrowTypeCombo->setToolTip(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "<html><head/><body><p>Plain: the arrow will be displayed entirely</p><p>Left/Exterior half: only the half of the head that is on the left of the arrow for straight arrows, or the one toward the exterior for curved arrows will be displayed</p><p>Right/Interior half: only the half of the head that is on the right of the arrow for straight arrows, or the one toward the interior for curved arrows will be displayed</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Arrow width at start", nullptr));
#if QT_CONFIG(tooltip)
        mRepeatArrowChck->setToolTip(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "<html><head/><body><p>If checked, one arrow will be rendered for each consecutive points (each 2 points for a straight arrow or 3 points for a curved arrow).</p><p>If unchecked, the arrow will be defined by extermum points of the line (the middle point will be used as a control point for a curved arrow)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mRepeatArrowChck->setText(QCoreApplication::translate("QgsArrowSymbolLayerWidgetBase", "Repeat arrow on each segment", nullptr));
        (void)QgsArrowSymbolLayerWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsArrowSymbolLayerWidgetBase: public Ui_QgsArrowSymbolLayerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSARROWSYMBOLLAYERWIDGETBASE_H
