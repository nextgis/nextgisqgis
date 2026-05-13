/********************************************************************************
** Form generated from reading UI file 'qgsprocessingalignrasterlayerdetailswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGALIGNRASTERLAYERDETAILSWIDGETBASE_H
#define UI_QGSPROCESSINGALIGNRASTERLAYERDETAILSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingAlignRasterLayerDetailsWidget
{
public:
    QGridLayout *gridLayout;
    QgsFileWidget *mOutputFileWidget;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QDialogButtonBox *mButtonBox;
    QLabel *label_2;
    QCheckBox *chkRescaleValues;
    QComboBox *cmbResamplingMethod;

    void setupUi(QWidget *QgsProcessingAlignRasterLayerDetailsWidget)
    {
        if (QgsProcessingAlignRasterLayerDetailsWidget->objectName().isEmpty())
            QgsProcessingAlignRasterLayerDetailsWidget->setObjectName(QString::fromUtf8("QgsProcessingAlignRasterLayerDetailsWidget"));
        QgsProcessingAlignRasterLayerDetailsWidget->resize(522, 125);
        gridLayout = new QGridLayout(QgsProcessingAlignRasterLayerDetailsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mOutputFileWidget = new QgsFileWidget(QgsProcessingAlignRasterLayerDetailsWidget);
        mOutputFileWidget->setObjectName(QString::fromUtf8("mOutputFileWidget"));

        gridLayout->addWidget(mOutputFileWidget, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 2);

        label = new QLabel(QgsProcessingAlignRasterLayerDetailsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsProcessingAlignRasterLayerDetailsWidget);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 4, 1, 1, 1);

        label_2 = new QLabel(QgsProcessingAlignRasterLayerDetailsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        chkRescaleValues = new QCheckBox(QgsProcessingAlignRasterLayerDetailsWidget);
        chkRescaleValues->setObjectName(QString::fromUtf8("chkRescaleValues"));

        gridLayout->addWidget(chkRescaleValues, 2, 0, 1, 2);

        cmbResamplingMethod = new QComboBox(QgsProcessingAlignRasterLayerDetailsWidget);
        cmbResamplingMethod->setObjectName(QString::fromUtf8("cmbResamplingMethod"));

        gridLayout->addWidget(cmbResamplingMethod, 1, 1, 1, 1);


        retranslateUi(QgsProcessingAlignRasterLayerDetailsWidget);

        QMetaObject::connectSlotsByName(QgsProcessingAlignRasterLayerDetailsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingAlignRasterLayerDetailsWidget)
    {
        label->setText(QCoreApplication::translate("QgsProcessingAlignRasterLayerDetailsWidget", "Output file", nullptr));
        label_2->setText(QCoreApplication::translate("QgsProcessingAlignRasterLayerDetailsWidget", "Resampling method", nullptr));
        chkRescaleValues->setText(QCoreApplication::translate("QgsProcessingAlignRasterLayerDetailsWidget", "Rescale values according to the cell size", nullptr));
        (void)QgsProcessingAlignRasterLayerDetailsWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingAlignRasterLayerDetailsWidget: public Ui_QgsProcessingAlignRasterLayerDetailsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGALIGNRASTERLAYERDETAILSWIDGETBASE_H
