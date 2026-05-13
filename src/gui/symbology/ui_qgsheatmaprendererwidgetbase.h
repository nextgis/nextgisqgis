/********************************************************************************
** Form generated from reading UI file 'qgsheatmaprendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHEATMAPRENDERERWIDGETBASE_H
#define UI_QGSHEATMAPRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include "qgscolorrampbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgspanelwidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsHeatmapRendererWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QLabel *label_3;
    QgsDoubleSpinBox *mMaxSpinBox;
    QLabel *label_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mRadiusSpinBox;
    QgsUnitSelectionWidget *mRadiusUnitWidget;
    QgsPropertyOverrideButton *mRadiusDDBtn;
    QgsPropertyOverrideButton *mMaximumValueDDBtn;
    QgsColorRampButton *btnColorRamp;
    QgsFieldExpressionWidget *mWeightExpressionWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSlider *mQualitySlider;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mLegendSettingsButton;

    void setupUi(QgsPanelWidget *QgsHeatmapRendererWidgetBase)
    {
        if (QgsHeatmapRendererWidgetBase->objectName().isEmpty())
            QgsHeatmapRendererWidgetBase->setObjectName(QString::fromUtf8("QgsHeatmapRendererWidgetBase"));
        QgsHeatmapRendererWidgetBase->resize(334, 386);
        QgsHeatmapRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsHeatmapRendererWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsHeatmapRendererWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 2, 1, 1);

        label_7 = new QLabel(QgsHeatmapRendererWidgetBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        label_3 = new QLabel(QgsHeatmapRendererWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        mMaxSpinBox = new QgsDoubleSpinBox(QgsHeatmapRendererWidgetBase);
        mMaxSpinBox->setObjectName(QString::fromUtf8("mMaxSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mMaxSpinBox->sizePolicy().hasHeightForWidth());
        mMaxSpinBox->setSizePolicy(sizePolicy);
        mMaxSpinBox->setDecimals(6);
        mMaxSpinBox->setMaximum(99999999.000000000000000);
        mMaxSpinBox->setSingleStep(0.200000000000000);

        gridLayout->addWidget(mMaxSpinBox, 2, 1, 1, 2);

        label_2 = new QLabel(QgsHeatmapRendererWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(QgsHeatmapRendererWidgetBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mRadiusSpinBox = new QgsDoubleSpinBox(QgsHeatmapRendererWidgetBase);
        mRadiusSpinBox->setObjectName(QString::fromUtf8("mRadiusSpinBox"));
        sizePolicy.setHeightForWidth(mRadiusSpinBox->sizePolicy().hasHeightForWidth());
        mRadiusSpinBox->setSizePolicy(sizePolicy);
        mRadiusSpinBox->setDecimals(6);
        mRadiusSpinBox->setMaximum(99999999.000000000000000);
        mRadiusSpinBox->setSingleStep(0.200000000000000);

        horizontalLayout_2->addWidget(mRadiusSpinBox);

        mRadiusUnitWidget = new QgsUnitSelectionWidget(QgsHeatmapRendererWidgetBase);
        mRadiusUnitWidget->setObjectName(QString::fromUtf8("mRadiusUnitWidget"));

        horizontalLayout_2->addWidget(mRadiusUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 2);

        mRadiusDDBtn = new QgsPropertyOverrideButton(QgsHeatmapRendererWidgetBase);
        mRadiusDDBtn->setObjectName(QString::fromUtf8("mRadiusDDBtn"));

        gridLayout->addWidget(mRadiusDDBtn, 1, 3, 1, 1);

        mMaximumValueDDBtn = new QgsPropertyOverrideButton(QgsHeatmapRendererWidgetBase);
        mMaximumValueDDBtn->setObjectName(QString::fromUtf8("mMaximumValueDDBtn"));

        gridLayout->addWidget(mMaximumValueDDBtn, 2, 3, 1, 1);

        btnColorRamp = new QgsColorRampButton(QgsHeatmapRendererWidgetBase);
        btnColorRamp->setObjectName(QString::fromUtf8("btnColorRamp"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy1);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnColorRamp, 0, 1, 1, 3);

        mWeightExpressionWidget = new QgsFieldExpressionWidget(QgsHeatmapRendererWidgetBase);
        mWeightExpressionWidget->setObjectName(QString::fromUtf8("mWeightExpressionWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mWeightExpressionWidget->sizePolicy().hasHeightForWidth());
        mWeightExpressionWidget->setSizePolicy(sizePolicy2);
        mWeightExpressionWidget->setMaximumSize(QSize(16777215, 16777215));
        mWeightExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mWeightExpressionWidget, 3, 1, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(QgsHeatmapRendererWidgetBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::RichText);

        horizontalLayout_3->addWidget(label_4);

        mQualitySlider = new QSlider(QgsHeatmapRendererWidgetBase);
        mQualitySlider->setObjectName(QString::fromUtf8("mQualitySlider"));
        mQualitySlider->setMinimum(1);
        mQualitySlider->setMaximum(5);
        mQualitySlider->setPageStep(1);
        mQualitySlider->setOrientation(Qt::Horizontal);
        mQualitySlider->setInvertedAppearance(false);
        mQualitySlider->setInvertedControls(false);
        mQualitySlider->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_3->addWidget(mQualitySlider);

        label_5 = new QLabel(QgsHeatmapRendererWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTextFormat(Qt::RichText);

        horizontalLayout_3->addWidget(label_5);


        gridLayout->addLayout(horizontalLayout_3, 4, 1, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mLegendSettingsButton = new QPushButton(QgsHeatmapRendererWidgetBase);
        mLegendSettingsButton->setObjectName(QString::fromUtf8("mLegendSettingsButton"));

        horizontalLayout->addWidget(mLegendSettingsButton);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 4);

        gridLayout->setColumnStretch(1, 1);
        QWidget::setTabOrder(btnColorRamp, mRadiusSpinBox);
        QWidget::setTabOrder(mRadiusSpinBox, mRadiusDDBtn);
        QWidget::setTabOrder(mRadiusDDBtn, mMaxSpinBox);
        QWidget::setTabOrder(mMaxSpinBox, mMaximumValueDDBtn);
        QWidget::setTabOrder(mMaximumValueDDBtn, mWeightExpressionWidget);
        QWidget::setTabOrder(mWeightExpressionWidget, mQualitySlider);
        QWidget::setTabOrder(mQualitySlider, mLegendSettingsButton);

        retranslateUi(QgsHeatmapRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsHeatmapRendererWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsHeatmapRendererWidgetBase)
    {
        label->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "Maximum value", nullptr));
        label_7->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "Color ramp", nullptr));
        label_3->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "Rendering quality", nullptr));
        mMaxSpinBox->setSpecialValueText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "Automatic", nullptr));
        label_2->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "Radius", nullptr));
        label_6->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "Weight points by", nullptr));
        mRadiusDDBtn->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "\342\200\246", nullptr));
        mMaximumValueDDBtn->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "\342\200\246", nullptr));
        label_4->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "<html><head/><body><p><span style=\" font-style:italic;\">Best</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "<html><head/><body><p><span style=\" font-style:italic;\">Fastest</span></p></body></html>", nullptr));
        mLegendSettingsButton->setText(QCoreApplication::translate("QgsHeatmapRendererWidgetBase", "Legend Settings\342\200\246", nullptr));
        (void)QgsHeatmapRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsHeatmapRendererWidgetBase: public Ui_QgsHeatmapRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHEATMAPRENDERERWIDGETBASE_H
