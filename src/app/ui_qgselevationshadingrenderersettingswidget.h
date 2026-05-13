/********************************************************************************
** Form generated from reading UI file 'qgselevationshadingrenderersettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSELEVATIONSHADINGRENDERERSETTINGSWIDGET_H
#define UI_QGSELEVATIONSHADINGRENDERERSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdirectionallightwidget.h"
#include "qgsdoublespinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsElevationShadingRendererSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mShadingGroupBox;
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *mHillshadingGroupBox;
    QGridLayout *gridLayout_6;
    QLabel *mHillshadingZFactorLabel;
    QLabel *mHillshadingMultidirLabel;
    QgsDoubleSpinBox *mHillshadingZFactorSpinBox;
    QCheckBox *mHillshadingMultidirCheckBox;
    QgsDirectionalLightWidget *mDirectionalLightWidget;
    QLabel *label_4;
    QLabel *label_3;
    QgsCollapsibleGroupBox *mEdlGroupBox;
    QGridLayout *gridLayout_5;
    QgsDoubleSpinBox *mEdlStrengthSpinBox;
    QgsDoubleSpinBox *mEdlDistanceSpinBox;
    QLabel *label_2;
    QLabel *label;
    QgsUnitSelectionWidget *mEdlDistanceUnit;
    QComboBox *mCombineMethodCombo;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsElevationShadingRendererSettingsWidget)
    {
        if (QgsElevationShadingRendererSettingsWidget->objectName().isEmpty())
            QgsElevationShadingRendererSettingsWidget->setObjectName(QString::fromUtf8("QgsElevationShadingRendererSettingsWidget"));
        QgsElevationShadingRendererSettingsWidget->resize(312, 377);
        QgsElevationShadingRendererSettingsWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(QgsElevationShadingRendererSettingsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mShadingGroupBox = new QgsCollapsibleGroupBox(QgsElevationShadingRendererSettingsWidget);
        mShadingGroupBox->setObjectName(QString::fromUtf8("mShadingGroupBox"));
        mShadingGroupBox->setCheckable(true);
        gridLayout = new QGridLayout(mShadingGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        mHillshadingGroupBox = new QgsCollapsibleGroupBox(mShadingGroupBox);
        mHillshadingGroupBox->setObjectName(QString::fromUtf8("mHillshadingGroupBox"));
        mHillshadingGroupBox->setCheckable(true);
        gridLayout_6 = new QGridLayout(mHillshadingGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        mHillshadingZFactorLabel = new QLabel(mHillshadingGroupBox);
        mHillshadingZFactorLabel->setObjectName(QString::fromUtf8("mHillshadingZFactorLabel"));

        gridLayout_6->addWidget(mHillshadingZFactorLabel, 0, 0, 1, 1);

        mHillshadingMultidirLabel = new QLabel(mHillshadingGroupBox);
        mHillshadingMultidirLabel->setObjectName(QString::fromUtf8("mHillshadingMultidirLabel"));

        gridLayout_6->addWidget(mHillshadingMultidirLabel, 1, 0, 1, 1);

        mHillshadingZFactorSpinBox = new QgsDoubleSpinBox(mHillshadingGroupBox);
        mHillshadingZFactorSpinBox->setObjectName(QString::fromUtf8("mHillshadingZFactorSpinBox"));
        mHillshadingZFactorSpinBox->setDecimals(6);
        mHillshadingZFactorSpinBox->setMaximum(9999999999999999455752309870428160.000000000000000);
        mHillshadingZFactorSpinBox->setValue(1.000000000000000);

        gridLayout_6->addWidget(mHillshadingZFactorSpinBox, 0, 1, 1, 1);

        mHillshadingMultidirCheckBox = new QCheckBox(mHillshadingGroupBox);
        mHillshadingMultidirCheckBox->setObjectName(QString::fromUtf8("mHillshadingMultidirCheckBox"));
        mHillshadingMultidirCheckBox->setTristate(false);

        gridLayout_6->addWidget(mHillshadingMultidirCheckBox, 1, 1, 1, 1);

        mDirectionalLightWidget = new QgsDirectionalLightWidget(mHillshadingGroupBox);
        mDirectionalLightWidget->setObjectName(QString::fromUtf8("mDirectionalLightWidget"));

        gridLayout_6->addWidget(mDirectionalLightWidget, 2, 0, 1, 2);


        gridLayout->addWidget(mHillshadingGroupBox, 4, 0, 1, 2);

        label_4 = new QLabel(mShadingGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        label_3 = new QLabel(mShadingGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        mEdlGroupBox = new QgsCollapsibleGroupBox(mShadingGroupBox);
        mEdlGroupBox->setObjectName(QString::fromUtf8("mEdlGroupBox"));
        mEdlGroupBox->setCheckable(true);
        gridLayout_5 = new QGridLayout(mEdlGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mEdlStrengthSpinBox = new QgsDoubleSpinBox(mEdlGroupBox);
        mEdlStrengthSpinBox->setObjectName(QString::fromUtf8("mEdlStrengthSpinBox"));
        mEdlStrengthSpinBox->setDecimals(0);
        mEdlStrengthSpinBox->setMaximum(999999999999.000000000000000);
        mEdlStrengthSpinBox->setSingleStep(100.000000000000000);
        mEdlStrengthSpinBox->setValue(1000.000000000000000);

        gridLayout_5->addWidget(mEdlStrengthSpinBox, 0, 1, 1, 1);

        mEdlDistanceSpinBox = new QgsDoubleSpinBox(mEdlGroupBox);
        mEdlDistanceSpinBox->setObjectName(QString::fromUtf8("mEdlDistanceSpinBox"));

        gridLayout_5->addWidget(mEdlDistanceSpinBox, 1, 1, 1, 1);

        label_2 = new QLabel(mEdlGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(mEdlGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        mEdlDistanceUnit = new QgsUnitSelectionWidget(mEdlGroupBox);
        mEdlDistanceUnit->setObjectName(QString::fromUtf8("mEdlDistanceUnit"));

        gridLayout_5->addWidget(mEdlDistanceUnit, 1, 2, 1, 1);


        gridLayout->addWidget(mEdlGroupBox, 3, 0, 1, 2);

        mCombineMethodCombo = new QComboBox(mShadingGroupBox);
        mCombineMethodCombo->setObjectName(QString::fromUtf8("mCombineMethodCombo"));

        gridLayout->addWidget(mCombineMethodCombo, 1, 1, 1, 1);


        verticalLayout->addWidget(mShadingGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsElevationShadingRendererSettingsWidget);

        QMetaObject::connectSlotsByName(QgsElevationShadingRendererSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsElevationShadingRendererSettingsWidget)
    {
#if QT_CONFIG(tooltip)
        mShadingGroupBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mShadingGroupBox->setTitle(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Global Map Shading", nullptr));
        mHillshadingGroupBox->setTitle(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Hillshading", nullptr));
        mHillshadingZFactorLabel->setText(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Z Factor", nullptr));
        mHillshadingMultidirLabel->setText(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Multidirectional", nullptr));
#if QT_CONFIG(tooltip)
        mHillshadingZFactorSpinBox->setToolTip(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Vertical exageration for hillshading", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mHillshadingMultidirCheckBox->setToolTip(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Use multidirectional lights instead of the specified azimuth for hillshading.", nullptr));
#endif // QT_CONFIG(tooltip)
        mHillshadingMultidirCheckBox->setText(QString());
        label_4->setText(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Apply shading on the canvas following elevation of point cloud layers, mesh layers and raster layers if they represent elevation surface.", nullptr));
        label_3->setText(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Method to combine ", nullptr));
        mEdlGroupBox->setTitle(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Eye-Dome Lighting", nullptr));
#if QT_CONFIG(tooltip)
        mEdlStrengthSpinBox->setToolTip(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Adjusts how strong the added shading will be. Greater values mean stronger effect.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mEdlDistanceSpinBox->setToolTip(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Distance away from the original pixel to sample neighbors.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Distance", nullptr));
        label->setText(QCoreApplication::translate("QgsElevationShadingRendererSettingsWidget", "Strength", nullptr));
        (void)QgsElevationShadingRendererSettingsWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsElevationShadingRendererSettingsWidget: public Ui_QgsElevationShadingRendererSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSELEVATIONSHADINGRENDERERSETTINGSWIDGET_H
