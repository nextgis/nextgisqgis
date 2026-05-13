/********************************************************************************
** Form generated from reading UI file 'qgsprocessingdxflayerdetailswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGDXFLAYERDETAILSWIDGETBASE_H
#define UI_QGSPROCESSINGDXFLAYERDETAILSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingDxfLayerDetailsWidget
{
public:
    QGridLayout *gridLayout;
    QgsFieldComboBox *mFieldsComboBox;
    QDialogButtonBox *mButtonBox;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *mOverriddenName;
    QGroupBox *mGroupBoxBlocks;
    QFormLayout *formLayout;
    QLabel *label_3;
    QSpinBox *mSpinBoxBlocks;

    void setupUi(QWidget *QgsProcessingDxfLayerDetailsWidget)
    {
        if (QgsProcessingDxfLayerDetailsWidget->objectName().isEmpty())
            QgsProcessingDxfLayerDetailsWidget->setObjectName(QString::fromUtf8("QgsProcessingDxfLayerDetailsWidget"));
        QgsProcessingDxfLayerDetailsWidget->resize(393, 228);
        gridLayout = new QGridLayout(QgsProcessingDxfLayerDetailsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFieldsComboBox = new QgsFieldComboBox(QgsProcessingDxfLayerDetailsWidget);
        mFieldsComboBox->setObjectName(QString::fromUtf8("mFieldsComboBox"));

        gridLayout->addWidget(mFieldsComboBox, 0, 1, 1, 2);

        mButtonBox = new QDialogButtonBox(QgsProcessingDxfLayerDetailsWidget);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 7, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 3);

        label = new QLabel(QgsProcessingDxfLayerDetailsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(QgsProcessingDxfLayerDetailsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mOverriddenName = new QLineEdit(QgsProcessingDxfLayerDetailsWidget);
        mOverriddenName->setObjectName(QString::fromUtf8("mOverriddenName"));

        gridLayout->addWidget(mOverriddenName, 1, 1, 1, 2);

        mGroupBoxBlocks = new QGroupBox(QgsProcessingDxfLayerDetailsWidget);
        mGroupBoxBlocks->setObjectName(QString::fromUtf8("mGroupBoxBlocks"));
        mGroupBoxBlocks->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGroupBoxBlocks->sizePolicy().hasHeightForWidth());
        mGroupBoxBlocks->setSizePolicy(sizePolicy);
        mGroupBoxBlocks->setCheckable(true);
        mGroupBoxBlocks->setChecked(true);
        formLayout = new QFormLayout(mGroupBoxBlocks);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(mGroupBoxBlocks);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        mSpinBoxBlocks = new QSpinBox(mGroupBoxBlocks);
        mSpinBoxBlocks->setObjectName(QString::fromUtf8("mSpinBoxBlocks"));
        mSpinBoxBlocks->setMinimum(-1);
        mSpinBoxBlocks->setValue(-1);

        formLayout->setWidget(0, QFormLayout::FieldRole, mSpinBoxBlocks);


        gridLayout->addWidget(mGroupBoxBlocks, 2, 0, 2, 3);


        retranslateUi(QgsProcessingDxfLayerDetailsWidget);

        QMetaObject::connectSlotsByName(QgsProcessingDxfLayerDetailsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingDxfLayerDetailsWidget)
    {
        label->setText(QCoreApplication::translate("QgsProcessingDxfLayerDetailsWidget", "Output layer attribute", nullptr));
        label_2->setText(QCoreApplication::translate("QgsProcessingDxfLayerDetailsWidget", "Output layer name", nullptr));
        mGroupBoxBlocks->setTitle(QCoreApplication::translate("QgsProcessingDxfLayerDetailsWidget", "Allow data defined symbol blocks", nullptr));
        label_3->setText(QCoreApplication::translate("QgsProcessingDxfLayerDetailsWidget", "Maximum number of symbol blocks", nullptr));
#if QT_CONFIG(tooltip)
        mSpinBoxBlocks->setToolTip(QCoreApplication::translate("QgsProcessingDxfLayerDetailsWidget", "A value of -1 means no limitation.", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsProcessingDxfLayerDetailsWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingDxfLayerDetailsWidget: public Ui_QgsProcessingDxfLayerDetailsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGDXFLAYERDETAILSWIDGETBASE_H
