/********************************************************************************
** Form generated from reading UI file 'metalroughmaterialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METALROUGHMATERIALWIDGET_H
#define UI_METALROUGHMATERIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_MetalRoughMaterialWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *lblSpecular;
    QgsColorButton *mButtonBaseColor;
    QLabel *lblShininess;
    QgsDoubleSpinBox *mSpinMetalness;
    QLabel *lblShininess_2;
    QgsDoubleSpinBox *mSpinRoughness;

    void setupUi(QWidget *MetalRoughMaterialWidget)
    {
        if (MetalRoughMaterialWidget->objectName().isEmpty())
            MetalRoughMaterialWidget->setObjectName(QString::fromUtf8("MetalRoughMaterialWidget"));
        MetalRoughMaterialWidget->resize(378, 107);
        MetalRoughMaterialWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(MetalRoughMaterialWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblSpecular = new QLabel(MetalRoughMaterialWidget);
        lblSpecular->setObjectName(QString::fromUtf8("lblSpecular"));

        gridLayout->addWidget(lblSpecular, 0, 0, 1, 1);

        mButtonBaseColor = new QgsColorButton(MetalRoughMaterialWidget);
        mButtonBaseColor->setObjectName(QString::fromUtf8("mButtonBaseColor"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonBaseColor->sizePolicy().hasHeightForWidth());
        mButtonBaseColor->setSizePolicy(sizePolicy);
        mButtonBaseColor->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(mButtonBaseColor, 0, 1, 1, 1);

        lblShininess = new QLabel(MetalRoughMaterialWidget);
        lblShininess->setObjectName(QString::fromUtf8("lblShininess"));

        gridLayout->addWidget(lblShininess, 1, 0, 1, 1);

        mSpinMetalness = new QgsDoubleSpinBox(MetalRoughMaterialWidget);
        mSpinMetalness->setObjectName(QString::fromUtf8("mSpinMetalness"));
        mSpinMetalness->setMaximum(1000.000000000000000);

        gridLayout->addWidget(mSpinMetalness, 1, 1, 1, 1);

        lblShininess_2 = new QLabel(MetalRoughMaterialWidget);
        lblShininess_2->setObjectName(QString::fromUtf8("lblShininess_2"));

        gridLayout->addWidget(lblShininess_2, 2, 0, 1, 1);

        mSpinRoughness = new QgsDoubleSpinBox(MetalRoughMaterialWidget);
        mSpinRoughness->setObjectName(QString::fromUtf8("mSpinRoughness"));
        mSpinRoughness->setMaximum(1000.000000000000000);

        gridLayout->addWidget(mSpinRoughness, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        QWidget::setTabOrder(mButtonBaseColor, mSpinMetalness);

        retranslateUi(MetalRoughMaterialWidget);

        QMetaObject::connectSlotsByName(MetalRoughMaterialWidget);
    } // setupUi

    void retranslateUi(QWidget *MetalRoughMaterialWidget)
    {
        lblSpecular->setText(QCoreApplication::translate("MetalRoughMaterialWidget", "Base color", nullptr));
        lblShininess->setText(QCoreApplication::translate("MetalRoughMaterialWidget", "Metalness", nullptr));
        lblShininess_2->setText(QCoreApplication::translate("MetalRoughMaterialWidget", "Roughness", nullptr));
        (void)MetalRoughMaterialWidget;
    } // retranslateUi

};

namespace Ui {
    class MetalRoughMaterialWidget: public Ui_MetalRoughMaterialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METALROUGHMATERIALWIDGET_H
