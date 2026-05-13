/********************************************************************************
** Form generated from reading UI file 'qgsvectorrenderingoptionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORRENDERINGOPTIONSBASE_H
#define UI_QGSVECTORRENDERINGOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsscalecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorRenderingOptionsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *mSimplifyDrawingGroupBox;
    QGridLayout *_14;
    QgsDoubleSpinBox *mSimplifyDrawingSpinBox;
    QLabel *mSimplifyAlgorithmLabel;
    QgsScaleComboBox *mSimplifyMaximumScaleComboBox;
    QLabel *mSimplifyMaxScaleLabel;
    QLabel *mSimplifyMaxScaleExtraLabel;
    QCheckBox *mSimplifyDrawingAtProvider;
    QLabel *label_59;
    QComboBox *mSimplifyAlgorithmComboBox;
    QLabel *mSimplificationThresholdLabel;
    QLabel *mSimplificationThresholdExtraLabel;
    QgsCollapsibleGroupBox *mSegmentationGroupBox;
    QGridLayout *gridLayout_20;
    QLabel *mSegmentationToleranceLabel;
    QgsDoubleSpinBox *mSegmentationToleranceSpinBox;
    QLabel *mToleranceTypeLabel;
    QComboBox *mToleranceTypeComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsVectorRenderingOptionsWidgetBase)
    {
        if (QgsVectorRenderingOptionsWidgetBase->objectName().isEmpty())
            QgsVectorRenderingOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsVectorRenderingOptionsWidgetBase"));
        QgsVectorRenderingOptionsWidgetBase->resize(693, 534);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsVectorRenderingOptionsWidgetBase->sizePolicy().hasHeightForWidth());
        QgsVectorRenderingOptionsWidgetBase->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QgsVectorRenderingOptionsWidgetBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mSimplifyDrawingGroupBox = new QgsCollapsibleGroupBox(QgsVectorRenderingOptionsWidgetBase);
        mSimplifyDrawingGroupBox->setObjectName(QString::fromUtf8("mSimplifyDrawingGroupBox"));
        mSimplifyDrawingGroupBox->setFlat(true);
        mSimplifyDrawingGroupBox->setCheckable(true);
        _14 = new QGridLayout(mSimplifyDrawingGroupBox);
        _14->setSpacing(6);
        _14->setContentsMargins(11, 11, 11, 11);
        _14->setObjectName(QString::fromUtf8("_14"));
        mSimplifyDrawingSpinBox = new QgsDoubleSpinBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingSpinBox->setObjectName(QString::fromUtf8("mSimplifyDrawingSpinBox"));
        mSimplifyDrawingSpinBox->setDecimals(2);
        mSimplifyDrawingSpinBox->setMinimum(1.000000000000000);
        mSimplifyDrawingSpinBox->setMaximum(5.000000000000000);
        mSimplifyDrawingSpinBox->setSingleStep(0.200000000000000);
        mSimplifyDrawingSpinBox->setValue(1.000000000000000);

        _14->addWidget(mSimplifyDrawingSpinBox, 1, 1, 1, 1);

        mSimplifyAlgorithmLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyAlgorithmLabel->setObjectName(QString::fromUtf8("mSimplifyAlgorithmLabel"));
        mSimplifyAlgorithmLabel->setMargin(2);

        _14->addWidget(mSimplifyAlgorithmLabel, 3, 0, 1, 1);

        mSimplifyMaximumScaleComboBox = new QgsScaleComboBox(mSimplifyDrawingGroupBox);
        mSimplifyMaximumScaleComboBox->setObjectName(QString::fromUtf8("mSimplifyMaximumScaleComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSimplifyMaximumScaleComboBox->sizePolicy().hasHeightForWidth());
        mSimplifyMaximumScaleComboBox->setSizePolicy(sizePolicy1);

        _14->addWidget(mSimplifyMaximumScaleComboBox, 5, 1, 1, 1);

        mSimplifyMaxScaleLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyMaxScaleLabel->setObjectName(QString::fromUtf8("mSimplifyMaxScaleLabel"));
        mSimplifyMaxScaleLabel->setMargin(2);

        _14->addWidget(mSimplifyMaxScaleLabel, 5, 0, 1, 1);

        mSimplifyMaxScaleExtraLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyMaxScaleExtraLabel->setObjectName(QString::fromUtf8("mSimplifyMaxScaleExtraLabel"));

        _14->addWidget(mSimplifyMaxScaleExtraLabel, 6, 0, 1, 2);

        mSimplifyDrawingAtProvider = new QCheckBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingAtProvider->setObjectName(QString::fromUtf8("mSimplifyDrawingAtProvider"));

        _14->addWidget(mSimplifyDrawingAtProvider, 4, 0, 1, 2);

        label_59 = new QLabel(mSimplifyDrawingGroupBox);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setWordWrap(true);

        _14->addWidget(label_59, 0, 0, 1, 2);

        mSimplifyAlgorithmComboBox = new QComboBox(mSimplifyDrawingGroupBox);
        mSimplifyAlgorithmComboBox->setObjectName(QString::fromUtf8("mSimplifyAlgorithmComboBox"));

        _14->addWidget(mSimplifyAlgorithmComboBox, 3, 1, 1, 1);

        mSimplificationThresholdLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplificationThresholdLabel->setObjectName(QString::fromUtf8("mSimplificationThresholdLabel"));
        mSimplificationThresholdLabel->setMargin(2);

        _14->addWidget(mSimplificationThresholdLabel, 1, 0, 1, 1);

        mSimplificationThresholdExtraLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplificationThresholdExtraLabel->setObjectName(QString::fromUtf8("mSimplificationThresholdExtraLabel"));

        _14->addWidget(mSimplificationThresholdExtraLabel, 2, 0, 1, 2);

        _14->setColumnStretch(1, 1);

        gridLayout->addWidget(mSimplifyDrawingGroupBox, 0, 0, 1, 1);

        mSegmentationGroupBox = new QgsCollapsibleGroupBox(QgsVectorRenderingOptionsWidgetBase);
        mSegmentationGroupBox->setObjectName(QString::fromUtf8("mSegmentationGroupBox"));
        gridLayout_20 = new QGridLayout(mSegmentationGroupBox);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        mSegmentationToleranceLabel = new QLabel(mSegmentationGroupBox);
        mSegmentationToleranceLabel->setObjectName(QString::fromUtf8("mSegmentationToleranceLabel"));

        gridLayout_20->addWidget(mSegmentationToleranceLabel, 0, 0, 1, 1);

        mSegmentationToleranceSpinBox = new QgsDoubleSpinBox(mSegmentationGroupBox);
        mSegmentationToleranceSpinBox->setObjectName(QString::fromUtf8("mSegmentationToleranceSpinBox"));

        gridLayout_20->addWidget(mSegmentationToleranceSpinBox, 0, 1, 1, 1);

        mToleranceTypeLabel = new QLabel(mSegmentationGroupBox);
        mToleranceTypeLabel->setObjectName(QString::fromUtf8("mToleranceTypeLabel"));

        gridLayout_20->addWidget(mToleranceTypeLabel, 1, 0, 1, 1);

        mToleranceTypeComboBox = new QComboBox(mSegmentationGroupBox);
        mToleranceTypeComboBox->setObjectName(QString::fromUtf8("mToleranceTypeComboBox"));

        gridLayout_20->addWidget(mToleranceTypeComboBox, 1, 1, 1, 1);


        gridLayout->addWidget(mSegmentationGroupBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 225, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(mSimplifyDrawingGroupBox, mSimplifyDrawingSpinBox);
        QWidget::setTabOrder(mSimplifyDrawingSpinBox, mSimplifyAlgorithmComboBox);
        QWidget::setTabOrder(mSimplifyAlgorithmComboBox, mSimplifyDrawingAtProvider);
        QWidget::setTabOrder(mSimplifyDrawingAtProvider, mSimplifyMaximumScaleComboBox);
        QWidget::setTabOrder(mSimplifyMaximumScaleComboBox, mSegmentationToleranceSpinBox);
        QWidget::setTabOrder(mSegmentationToleranceSpinBox, mToleranceTypeComboBox);

        retranslateUi(QgsVectorRenderingOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsVectorRenderingOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorRenderingOptionsWidgetBase)
    {
        QgsVectorRenderingOptionsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Vector Rendering Options", nullptr));
        mSimplifyDrawingGroupBox->setTitle(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Enable feature si&mplification by default for newly added layers", nullptr));
#if QT_CONFIG(tooltip)
        mSimplifyDrawingSpinBox->setToolTip(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Higher values result in more simplification", nullptr));
#endif // QT_CONFIG(tooltip)
        mSimplifyDrawingSpinBox->setSuffix(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", " px", nullptr));
#if QT_CONFIG(tooltip)
        mSimplifyAlgorithmLabel->setToolTip(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "This algorithm is only applied to simplify on local side", nullptr));
#endif // QT_CONFIG(tooltip)
        mSimplifyAlgorithmLabel->setText(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Simplification algorithm", nullptr));
        mSimplifyMaxScaleLabel->setText(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Maximum scale at which the layer should be simplified", nullptr));
        mSimplifyMaxScaleExtraLabel->setText(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "(1:1 always simplifies)", nullptr));
        mSimplifyDrawingAtProvider->setText(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Simplify on provider side if possible", nullptr));
        label_59->setText(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "<b>Note:</b> Feature simplification may speed up rendering but can result in rendering inconsistencies", nullptr));
        mSimplificationThresholdLabel->setText(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Simplification threshold", nullptr));
        mSimplificationThresholdExtraLabel->setText(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "(higher values result in more simplification)", nullptr));
        mSegmentationGroupBox->setTitle(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Curve Segmentation", nullptr));
        mSegmentationToleranceLabel->setText(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Segmentation tolerance", nullptr));
        mToleranceTypeLabel->setText(QCoreApplication::translate("QgsVectorRenderingOptionsWidgetBase", "Tolerance type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorRenderingOptionsWidgetBase: public Ui_QgsVectorRenderingOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORRENDERINGOPTIONSBASE_H
