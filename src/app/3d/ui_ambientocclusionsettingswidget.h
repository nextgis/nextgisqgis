/********************************************************************************
** Form generated from reading UI file 'ambientocclusionsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMBIENTOCCLUSIONSETTINGSWIDGET_H
#define UI_AMBIENTOCCLUSIONSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAmbientOcclusionSettingsWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *mAmbientOcclusionGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QgsDoubleSpinBox *mRadiusSpinBox;
    QgsDoubleSpinBox *mIntensitySpinBox;
    QLabel *label_2;
    QgsSpinBox *mThresholdSpinBox;

    void setupUi(QWidget *QgsAmbientOcclusionSettingsWidget)
    {
        if (QgsAmbientOcclusionSettingsWidget->objectName().isEmpty())
            QgsAmbientOcclusionSettingsWidget->setObjectName(QString::fromUtf8("QgsAmbientOcclusionSettingsWidget"));
        QgsAmbientOcclusionSettingsWidget->resize(400, 185);
        gridLayout_2 = new QGridLayout(QgsAmbientOcclusionSettingsWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mAmbientOcclusionGroupBox = new QGroupBox(QgsAmbientOcclusionSettingsWidget);
        mAmbientOcclusionGroupBox->setObjectName(QString::fromUtf8("mAmbientOcclusionGroupBox"));
        mAmbientOcclusionGroupBox->setCheckable(true);
        mAmbientOcclusionGroupBox->setChecked(false);
        gridLayout = new QGridLayout(mAmbientOcclusionGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(mAmbientOcclusionGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(mAmbientOcclusionGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mRadiusSpinBox = new QgsDoubleSpinBox(mAmbientOcclusionGroupBox);
        mRadiusSpinBox->setObjectName(QString::fromUtf8("mRadiusSpinBox"));
        mRadiusSpinBox->setDecimals(1);
        mRadiusSpinBox->setMinimum(0.100000000000000);
        mRadiusSpinBox->setMaximum(1000.000000000000000);
        mRadiusSpinBox->setSingleStep(1.000000000000000);
        mRadiusSpinBox->setValue(25.000000000000000);

        gridLayout->addWidget(mRadiusSpinBox, 0, 1, 1, 1);

        mIntensitySpinBox = new QgsDoubleSpinBox(mAmbientOcclusionGroupBox);
        mIntensitySpinBox->setObjectName(QString::fromUtf8("mIntensitySpinBox"));
        mIntensitySpinBox->setDecimals(1);
        mIntensitySpinBox->setMinimum(0.100000000000000);
        mIntensitySpinBox->setMaximum(3.000000000000000);
        mIntensitySpinBox->setSingleStep(0.100000000000000);
        mIntensitySpinBox->setValue(0.500000000000000);

        gridLayout->addWidget(mIntensitySpinBox, 1, 1, 1, 1);

        label_2 = new QLabel(mAmbientOcclusionGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mThresholdSpinBox = new QgsSpinBox(mAmbientOcclusionGroupBox);
        mThresholdSpinBox->setObjectName(QString::fromUtf8("mThresholdSpinBox"));
        mThresholdSpinBox->setMaximum(95);
        mThresholdSpinBox->setSingleStep(5);
        mThresholdSpinBox->setValue(50);

        gridLayout->addWidget(mThresholdSpinBox, 2, 1, 1, 1);


        gridLayout_2->addWidget(mAmbientOcclusionGroupBox, 0, 0, 1, 1);

        QWidget::setTabOrder(mAmbientOcclusionGroupBox, mRadiusSpinBox);
        QWidget::setTabOrder(mRadiusSpinBox, mIntensitySpinBox);

        retranslateUi(QgsAmbientOcclusionSettingsWidget);

        QMetaObject::connectSlotsByName(QgsAmbientOcclusionSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsAmbientOcclusionSettingsWidget)
    {
        mAmbientOcclusionGroupBox->setTitle(QCoreApplication::translate("QgsAmbientOcclusionSettingsWidget", "Ambient Occlusion", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAmbientOcclusionSettingsWidget", "Radius", nullptr));
        label->setText(QCoreApplication::translate("QgsAmbientOcclusionSettingsWidget", "Intensity", nullptr));
        mRadiusSpinBox->setSuffix(QCoreApplication::translate("QgsAmbientOcclusionSettingsWidget", " map units", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAmbientOcclusionSettingsWidget", "Occlusion Threshold", nullptr));
        mThresholdSpinBox->setSuffix(QCoreApplication::translate("QgsAmbientOcclusionSettingsWidget", "%", nullptr));
        (void)QgsAmbientOcclusionSettingsWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsAmbientOcclusionSettingsWidget: public Ui_QgsAmbientOcclusionSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMBIENTOCCLUSIONSETTINGSWIDGET_H
