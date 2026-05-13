/********************************************************************************
** Form generated from reading UI file 'qgslabelingrulemaxdistancelabeltofeaturewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGRULEMAXDISTANCELABELTOFEATUREWIDGETBASE_H
#define UI_QGSLABELINGRULEMAXDISTANCELABELTOFEATUREWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsdoublespinbox.h"
#include "qgsmaplayercombobox.h"
#include "qgspanelwidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *mEditName;
    QLabel *label_2;
    QgsMapLayerComboBox *mComboLabeledLayer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mSpinDistance;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QLabel *label_4;
    QgsMapLayerComboBox *mComboTargetLayer;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_40;
    QSlider *mCostSlider;
    QLabel *label_41;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase)
    {
        if (QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase->objectName().isEmpty())
            QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase->setObjectName(QString::fromUtf8("QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase"));
        QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase->resize(280, 306);
        QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mEditName = new QLineEdit(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        mEditName->setObjectName(QString::fromUtf8("mEditName"));

        verticalLayout->addWidget(mEditName);

        label_2 = new QLabel(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        mComboLabeledLayer = new QgsMapLayerComboBox(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        mComboLabeledLayer->setObjectName(QString::fromUtf8("mComboLabeledLayer"));

        verticalLayout->addWidget(mComboLabeledLayer);

        label_3 = new QLabel(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSpinDistance = new QgsDoubleSpinBox(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        mSpinDistance->setObjectName(QString::fromUtf8("mSpinDistance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinDistance->sizePolicy().hasHeightForWidth());
        mSpinDistance->setSizePolicy(sizePolicy);
        mSpinDistance->setDecimals(6);
        mSpinDistance->setMaximum(100000.000000000000000);
        mSpinDistance->setSingleStep(0.200000000000000);
        mSpinDistance->setValue(1.000000000000000);
        mSpinDistance->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(mSpinDistance);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        mDistanceUnitWidget->setObjectName(QString::fromUtf8("mDistanceUnitWidget"));
        mDistanceUnitWidget->setMinimumSize(QSize(0, 0));
        mDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mDistanceUnitWidget);


        verticalLayout->addLayout(horizontalLayout_2);

        label_4 = new QLabel(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        mComboTargetLayer = new QgsMapLayerComboBox(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        mComboTargetLayer->setObjectName(QString::fromUtf8("mComboTargetLayer"));

        verticalLayout->addWidget(mComboTargetLayer);

        label_5 = new QLabel(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_40 = new QLabel(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout->addWidget(label_40);

        mCostSlider = new QSlider(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        mCostSlider->setObjectName(QString::fromUtf8("mCostSlider"));
        mCostSlider->setMinimum(0);
        mCostSlider->setMaximum(100);
        mCostSlider->setSingleStep(1);
        mCostSlider->setValue(5);
        mCostSlider->setOrientation(Qt::Horizontal);
        mCostSlider->setTickPosition(QSlider::TicksBelow);
        mCostSlider->setTickInterval(10);

        horizontalLayout->addWidget(mCostSlider);

        label_41 = new QLabel(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        horizontalLayout->addWidget(label_41);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mEditName, mComboLabeledLayer);
        QWidget::setTabOrder(mComboLabeledLayer, mSpinDistance);
        QWidget::setTabOrder(mSpinDistance, mDistanceUnitWidget);
        QWidget::setTabOrder(mDistanceUnitWidget, mComboTargetLayer);

        retranslateUi(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase)
    {
        label->setText(QCoreApplication::translate("QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase", "Labels from layer", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase", "Must be at most", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase", "From the features in", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase", "Rule priority", nullptr));
        label_40->setText(QCoreApplication::translate("QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase", "Low", nullptr));
#if QT_CONFIG(tooltip)
        mCostSlider->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_41->setText(QCoreApplication::translate("QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase", "High", nullptr));
        (void)QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase: public Ui_QgsLabelingRuleMaximumDistanceLabelToFeatureWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGRULEMAXDISTANCELABELTOFEATUREWIDGETBASE_H
