/********************************************************************************
** Form generated from reading UI file 'qgslabelingrulemindistancelabeltolabelwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGRULEMINDISTANCELABELTOLABELWIDGETBASE_H
#define UI_QGSLABELINGRULEMINDISTANCELABELTOLABELWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsdoublespinbox.h"
#include "qgsmaplayercombobox.h"
#include "qgspanelwidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase
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
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase)
    {
        if (QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase->objectName().isEmpty())
            QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase->setObjectName(QString::fromUtf8("QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase"));
        QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase->resize(280, 306);
        QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mEditName = new QLineEdit(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
        mEditName->setObjectName(QString::fromUtf8("mEditName"));

        verticalLayout->addWidget(mEditName);

        label_2 = new QLabel(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        mComboLabeledLayer = new QgsMapLayerComboBox(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
        mComboLabeledLayer->setObjectName(QString::fromUtf8("mComboLabeledLayer"));

        verticalLayout->addWidget(mComboLabeledLayer);

        label_3 = new QLabel(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSpinDistance = new QgsDoubleSpinBox(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
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

        mDistanceUnitWidget = new QgsUnitSelectionWidget(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
        mDistanceUnitWidget->setObjectName(QString::fromUtf8("mDistanceUnitWidget"));
        mDistanceUnitWidget->setMinimumSize(QSize(0, 0));
        mDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mDistanceUnitWidget);


        verticalLayout->addLayout(horizontalLayout_2);

        label_4 = new QLabel(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        mComboTargetLayer = new QgsMapLayerComboBox(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
        mComboTargetLayer->setObjectName(QString::fromUtf8("mComboTargetLayer"));

        verticalLayout->addWidget(mComboTargetLayer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mEditName, mComboLabeledLayer);
        QWidget::setTabOrder(mComboLabeledLayer, mSpinDistance);
        QWidget::setTabOrder(mSpinDistance, mDistanceUnitWidget);
        QWidget::setTabOrder(mDistanceUnitWidget, mComboTargetLayer);

        retranslateUi(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase)
    {
        label->setText(QCoreApplication::translate("QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase", "Labels from layer", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase", "Must be at least", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase", "From the labels from layer", nullptr));
        (void)QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase: public Ui_QgsLabelingRuleMinimumDistanceLabelToLabelWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGRULEMINDISTANCELABELTOLABELWIDGETBASE_H
