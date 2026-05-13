/********************************************************************************
** Form generated from reading UI file 'qgslabelingruleavoidoverlapwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGRULEAVOIDOVERLAPWIDGETBASE_H
#define UI_QGSLABELINGRULEAVOIDOVERLAPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsmaplayercombobox.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *mEditName;
    QLabel *label_2;
    QgsMapLayerComboBox *mComboLabeledLayer;
    QLabel *label_3;
    QgsMapLayerComboBox *mComboTargetLayer;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase)
    {
        if (QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase->objectName().isEmpty())
            QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase->setObjectName(QString::fromUtf8("QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase"));
        QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase->resize(280, 306);
        QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mEditName = new QLineEdit(QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase);
        mEditName->setObjectName(QString::fromUtf8("mEditName"));

        verticalLayout->addWidget(mEditName);

        label_2 = new QLabel(QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        mComboLabeledLayer = new QgsMapLayerComboBox(QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase);
        mComboLabeledLayer->setObjectName(QString::fromUtf8("mComboLabeledLayer"));

        verticalLayout->addWidget(mComboLabeledLayer);

        label_3 = new QLabel(QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        mComboTargetLayer = new QgsMapLayerComboBox(QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase);
        mComboTargetLayer->setObjectName(QString::fromUtf8("mComboTargetLayer"));

        verticalLayout->addWidget(mComboTargetLayer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase)
    {
        label->setText(QCoreApplication::translate("QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase", "Labels from layer", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase", "Must not overlap features from", nullptr));
        (void)QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase: public Ui_QgsLabelingRuleAvoidLabelOverlapWithFeatureWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGRULEAVOIDOVERLAPWIDGETBASE_H
