/********************************************************************************
** Form generated from reading UI file 'shadowrenderingsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADOWRENDERINGSETTINGSWIDGET_H
#define UI_SHADOWRENDERINGSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_ShadowRenderingSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *labelUsedDirectionalLight;
    QComboBox *usedDirectionalLightComboBox;
    QLabel *labelShadowRenderinMaximumDistance;
    QgsDoubleSpinBox *shadowRenderinMaximumDistanceSpinBox;
    QLabel *labelShadowBias;
    QgsDoubleSpinBox *shadowBiasSpinBox;
    QLabel *labelShadowMapResolution;
    QgsSpinBox *shadowMapResolutionSpinBox;

    void setupUi(QWidget *ShadowRenderingSettingsWidget)
    {
        if (ShadowRenderingSettingsWidget->objectName().isEmpty())
            ShadowRenderingSettingsWidget->setObjectName(QString::fromUtf8("ShadowRenderingSettingsWidget"));
        ShadowRenderingSettingsWidget->resize(482, 139);
        gridLayout = new QGridLayout(ShadowRenderingSettingsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelUsedDirectionalLight = new QLabel(ShadowRenderingSettingsWidget);
        labelUsedDirectionalLight->setObjectName(QString::fromUtf8("labelUsedDirectionalLight"));

        gridLayout->addWidget(labelUsedDirectionalLight, 0, 0, 1, 1);

        usedDirectionalLightComboBox = new QComboBox(ShadowRenderingSettingsWidget);
        usedDirectionalLightComboBox->setObjectName(QString::fromUtf8("usedDirectionalLightComboBox"));

        gridLayout->addWidget(usedDirectionalLightComboBox, 0, 1, 1, 1);

        labelShadowRenderinMaximumDistance = new QLabel(ShadowRenderingSettingsWidget);
        labelShadowRenderinMaximumDistance->setObjectName(QString::fromUtf8("labelShadowRenderinMaximumDistance"));

        gridLayout->addWidget(labelShadowRenderinMaximumDistance, 1, 0, 1, 1);

        shadowRenderinMaximumDistanceSpinBox = new QgsDoubleSpinBox(ShadowRenderingSettingsWidget);
        shadowRenderinMaximumDistanceSpinBox->setObjectName(QString::fromUtf8("shadowRenderinMaximumDistanceSpinBox"));
        shadowRenderinMaximumDistanceSpinBox->setMaximum(9999999999.000000000000000);
        shadowRenderinMaximumDistanceSpinBox->setValue(500.000000000000000);

        gridLayout->addWidget(shadowRenderinMaximumDistanceSpinBox, 1, 1, 1, 1);

        labelShadowBias = new QLabel(ShadowRenderingSettingsWidget);
        labelShadowBias->setObjectName(QString::fromUtf8("labelShadowBias"));

        gridLayout->addWidget(labelShadowBias, 2, 0, 1, 1);

        shadowBiasSpinBox = new QgsDoubleSpinBox(ShadowRenderingSettingsWidget);
        shadowBiasSpinBox->setObjectName(QString::fromUtf8("shadowBiasSpinBox"));
        shadowBiasSpinBox->setDecimals(10);
        shadowBiasSpinBox->setMaximum(1.000000000000000);
        shadowBiasSpinBox->setSingleStep(0.000010000000000);
        shadowBiasSpinBox->setValue(0.000000000000000);

        gridLayout->addWidget(shadowBiasSpinBox, 2, 1, 1, 1);

        labelShadowMapResolution = new QLabel(ShadowRenderingSettingsWidget);
        labelShadowMapResolution->setObjectName(QString::fromUtf8("labelShadowMapResolution"));

        gridLayout->addWidget(labelShadowMapResolution, 3, 0, 1, 1);

        shadowMapResolutionSpinBox = new QgsSpinBox(ShadowRenderingSettingsWidget);
        shadowMapResolutionSpinBox->setObjectName(QString::fromUtf8("shadowMapResolutionSpinBox"));
        shadowMapResolutionSpinBox->setMinimum(128);
        shadowMapResolutionSpinBox->setMaximum(8192);
        shadowMapResolutionSpinBox->setValue(2048);

        gridLayout->addWidget(shadowMapResolutionSpinBox, 3, 1, 1, 1);


        retranslateUi(ShadowRenderingSettingsWidget);

        QMetaObject::connectSlotsByName(ShadowRenderingSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *ShadowRenderingSettingsWidget)
    {
        labelUsedDirectionalLight->setText(QCoreApplication::translate("ShadowRenderingSettingsWidget", "Directional light", nullptr));
        labelShadowRenderinMaximumDistance->setText(QCoreApplication::translate("ShadowRenderingSettingsWidget", "Shadow rendering maximum distance", nullptr));
        shadowRenderinMaximumDistanceSpinBox->setSuffix(QCoreApplication::translate("ShadowRenderingSettingsWidget", " map units", nullptr));
        labelShadowBias->setText(QCoreApplication::translate("ShadowRenderingSettingsWidget", "Shadow bias", nullptr));
        labelShadowMapResolution->setText(QCoreApplication::translate("ShadowRenderingSettingsWidget", "Shadow map resolution", nullptr));
        shadowMapResolutionSpinBox->setSuffix(QCoreApplication::translate("ShadowRenderingSettingsWidget", " px", nullptr));
        (void)ShadowRenderingSettingsWidget;
    } // retranslateUi

};

namespace Ui {
    class ShadowRenderingSettingsWidget: public Ui_ShadowRenderingSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADOWRENDERINGSETTINGSWIDGET_H
