/********************************************************************************
** Form generated from reading UI file 'phongtexturedmaterialwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONGTEXTUREDMATERIALWIDGETBASE_H
#define UI_PHONGTEXTUREDMATERIALWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <qgsopacitywidget.h>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_PhongTexturedMaterialWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *textureScaleSpinBox;
    QgsDoubleSpinBox *spinShininess;
    QgsColorButton *btnSpecular;
    QgsImageSourceLineEdit *textureFile;
    QLabel *lblSpecular;
    QLabel *lblTextureRotation;
    QLabel *lblAmbient;
    QLabel *lblTextureScale;
    QLabel *lblShininess;
    QgsColorButton *btnAmbient;
    QLabel *lblTextureScale_2;
    QgsDoubleSpinBox *textureRotationSpinBox;
    QLabel *lblOpacity;
    QgsOpacityWidget *mOpacityWidget;

    void setupUi(QWidget *PhongTexturedMaterialWidgetBase)
    {
        if (PhongTexturedMaterialWidgetBase->objectName().isEmpty())
            PhongTexturedMaterialWidgetBase->setObjectName(QString::fromUtf8("PhongTexturedMaterialWidgetBase"));
        PhongTexturedMaterialWidgetBase->resize(394, 252);
        PhongTexturedMaterialWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(PhongTexturedMaterialWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textureScaleSpinBox = new QgsDoubleSpinBox(PhongTexturedMaterialWidgetBase);
        textureScaleSpinBox->setObjectName(QString::fromUtf8("textureScaleSpinBox"));
        textureScaleSpinBox->setMinimum(0.010000000000000);
        textureScaleSpinBox->setMaximum(100000.000000000000000);
        textureScaleSpinBox->setSingleStep(1.000000000000000);
        textureScaleSpinBox->setValue(100.000000000000000);

        gridLayout->addWidget(textureScaleSpinBox, 5, 1, 1, 1);

        spinShininess = new QgsDoubleSpinBox(PhongTexturedMaterialWidgetBase);
        spinShininess->setObjectName(QString::fromUtf8("spinShininess"));
        spinShininess->setMaximum(1000.000000000000000);

        gridLayout->addWidget(spinShininess, 2, 1, 1, 1);

        btnSpecular = new QgsColorButton(PhongTexturedMaterialWidgetBase);
        btnSpecular->setObjectName(QString::fromUtf8("btnSpecular"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSpecular->sizePolicy().hasHeightForWidth());
        btnSpecular->setSizePolicy(sizePolicy);
        btnSpecular->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnSpecular, 1, 1, 1, 1);

        textureFile = new QgsImageSourceLineEdit(PhongTexturedMaterialWidgetBase);
        textureFile->setObjectName(QString::fromUtf8("textureFile"));

        gridLayout->addWidget(textureFile, 4, 1, 1, 1);

        lblSpecular = new QLabel(PhongTexturedMaterialWidgetBase);
        lblSpecular->setObjectName(QString::fromUtf8("lblSpecular"));

        gridLayout->addWidget(lblSpecular, 1, 0, 1, 1);

        lblTextureRotation = new QLabel(PhongTexturedMaterialWidgetBase);
        lblTextureRotation->setObjectName(QString::fromUtf8("lblTextureRotation"));

        gridLayout->addWidget(lblTextureRotation, 6, 0, 1, 1);

        lblAmbient = new QLabel(PhongTexturedMaterialWidgetBase);
        lblAmbient->setObjectName(QString::fromUtf8("lblAmbient"));

        gridLayout->addWidget(lblAmbient, 0, 0, 1, 1);

        lblTextureScale = new QLabel(PhongTexturedMaterialWidgetBase);
        lblTextureScale->setObjectName(QString::fromUtf8("lblTextureScale"));

        gridLayout->addWidget(lblTextureScale, 5, 0, 1, 1);

        lblShininess = new QLabel(PhongTexturedMaterialWidgetBase);
        lblShininess->setObjectName(QString::fromUtf8("lblShininess"));

        gridLayout->addWidget(lblShininess, 2, 0, 1, 1);

        btnAmbient = new QgsColorButton(PhongTexturedMaterialWidgetBase);
        btnAmbient->setObjectName(QString::fromUtf8("btnAmbient"));
        sizePolicy.setHeightForWidth(btnAmbient->sizePolicy().hasHeightForWidth());
        btnAmbient->setSizePolicy(sizePolicy);
        btnAmbient->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnAmbient, 0, 1, 1, 1);

        lblTextureScale_2 = new QLabel(PhongTexturedMaterialWidgetBase);
        lblTextureScale_2->setObjectName(QString::fromUtf8("lblTextureScale_2"));

        gridLayout->addWidget(lblTextureScale_2, 4, 0, 1, 1);

        textureRotationSpinBox = new QgsDoubleSpinBox(PhongTexturedMaterialWidgetBase);
        textureRotationSpinBox->setObjectName(QString::fromUtf8("textureRotationSpinBox"));
        textureRotationSpinBox->setMinimum(-360.000000000000000);
        textureRotationSpinBox->setMaximum(360.000000000000000);
        textureRotationSpinBox->setSingleStep(0.500000000000000);

        gridLayout->addWidget(textureRotationSpinBox, 6, 1, 1, 1);

        lblOpacity = new QLabel(PhongTexturedMaterialWidgetBase);
        lblOpacity->setObjectName(QString::fromUtf8("lblOpacity"));

        gridLayout->addWidget(lblOpacity, 3, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(PhongTexturedMaterialWidgetBase);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));

        gridLayout->addWidget(mOpacityWidget, 3, 1, 1, 1);

        QWidget::setTabOrder(btnAmbient, btnSpecular);
        QWidget::setTabOrder(btnSpecular, spinShininess);
        QWidget::setTabOrder(spinShininess, textureScaleSpinBox);
        QWidget::setTabOrder(textureScaleSpinBox, textureRotationSpinBox);

        retranslateUi(PhongTexturedMaterialWidgetBase);

        QMetaObject::connectSlotsByName(PhongTexturedMaterialWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *PhongTexturedMaterialWidgetBase)
    {
        textureScaleSpinBox->setSuffix(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", " %", nullptr));
#if QT_CONFIG(tooltip)
        lblSpecular->setToolTip(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "Color of light reflecting from smooth surfaces.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSpecular->setText(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "Specular", nullptr));
        lblTextureRotation->setText(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "Texture rotation", nullptr));
#if QT_CONFIG(tooltip)
        lblAmbient->setToolTip(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "Color of light that is scattered around the entire scene.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblAmbient->setText(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "Ambient", nullptr));
        lblTextureScale->setText(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "Texture scale", nullptr));
#if QT_CONFIG(tooltip)
        lblShininess->setToolTip(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "How shiny smooth surfaces are.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblShininess->setText(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "Shininess", nullptr));
        lblTextureScale_2->setText(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "Diffuse texture", nullptr));
        textureRotationSpinBox->setSuffix(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", " \302\260", nullptr));
        lblOpacity->setText(QCoreApplication::translate("PhongTexturedMaterialWidgetBase", "Opacity", nullptr));
        (void)PhongTexturedMaterialWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class PhongTexturedMaterialWidgetBase: public Ui_PhongTexturedMaterialWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONGTEXTUREDMATERIALWIDGETBASE_H
