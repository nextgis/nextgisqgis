/********************************************************************************
** Form generated from reading UI file 'goochmaterialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOCHMATERIALWIDGET_H
#define UI_GOOCHMATERIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_GoochMaterialWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *lblShininess;
    QLabel *lblAmbient_2;
    QLabel *lblDiffuse;
    QgsDoubleSpinBox *spinAlpha;
    QLabel *lblSpecular;
    QgsColorButton *btnDiffuse;
    QgsDoubleSpinBox *spinShininess;
    QLabel *lblShininess_2;
    QgsColorButton *btnCool;
    QgsDoubleSpinBox *spinBeta;
    QLabel *lblShininess_3;
    QgsColorButton *btnSpecular;
    QgsColorButton *btnWarm;
    QLabel *lblAmbient;
    QgsPropertyOverrideButton *mDiffuseDataDefinedButton;
    QgsPropertyOverrideButton *mWarmDataDefinedButton;
    QgsPropertyOverrideButton *mCoolDataDefinedButton;
    QgsPropertyOverrideButton *mSpecularDataDefinedButton;

    void setupUi(QWidget *GoochMaterialWidget)
    {
        if (GoochMaterialWidget->objectName().isEmpty())
            GoochMaterialWidget->setObjectName(QString::fromUtf8("GoochMaterialWidget"));
        GoochMaterialWidget->resize(394, 326);
        GoochMaterialWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(GoochMaterialWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblShininess = new QLabel(GoochMaterialWidget);
        lblShininess->setObjectName(QString::fromUtf8("lblShininess"));

        gridLayout->addWidget(lblShininess, 4, 0, 1, 1);

        lblAmbient_2 = new QLabel(GoochMaterialWidget);
        lblAmbient_2->setObjectName(QString::fromUtf8("lblAmbient_2"));

        gridLayout->addWidget(lblAmbient_2, 2, 0, 1, 1);

        lblDiffuse = new QLabel(GoochMaterialWidget);
        lblDiffuse->setObjectName(QString::fromUtf8("lblDiffuse"));

        gridLayout->addWidget(lblDiffuse, 0, 0, 1, 1);

        spinAlpha = new QgsDoubleSpinBox(GoochMaterialWidget);
        spinAlpha->setObjectName(QString::fromUtf8("spinAlpha"));
        spinAlpha->setMaximum(1000.000000000000000);
        spinAlpha->setSingleStep(0.100000000000000);

        gridLayout->addWidget(spinAlpha, 5, 1, 1, 1);

        lblSpecular = new QLabel(GoochMaterialWidget);
        lblSpecular->setObjectName(QString::fromUtf8("lblSpecular"));

        gridLayout->addWidget(lblSpecular, 3, 0, 1, 1);

        btnDiffuse = new QgsColorButton(GoochMaterialWidget);
        btnDiffuse->setObjectName(QString::fromUtf8("btnDiffuse"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDiffuse->sizePolicy().hasHeightForWidth());
        btnDiffuse->setSizePolicy(sizePolicy);
        btnDiffuse->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnDiffuse, 0, 1, 1, 1);

        spinShininess = new QgsDoubleSpinBox(GoochMaterialWidget);
        spinShininess->setObjectName(QString::fromUtf8("spinShininess"));
        spinShininess->setMinimum(1.000000000000000);
        spinShininess->setMaximum(1000.000000000000000);
        spinShininess->setValue(100.000000000000000);

        gridLayout->addWidget(spinShininess, 4, 1, 1, 1);

        lblShininess_2 = new QLabel(GoochMaterialWidget);
        lblShininess_2->setObjectName(QString::fromUtf8("lblShininess_2"));

        gridLayout->addWidget(lblShininess_2, 5, 0, 1, 1);

        btnCool = new QgsColorButton(GoochMaterialWidget);
        btnCool->setObjectName(QString::fromUtf8("btnCool"));
        sizePolicy.setHeightForWidth(btnCool->sizePolicy().hasHeightForWidth());
        btnCool->setSizePolicy(sizePolicy);
        btnCool->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnCool, 2, 1, 1, 1);

        spinBeta = new QgsDoubleSpinBox(GoochMaterialWidget);
        spinBeta->setObjectName(QString::fromUtf8("spinBeta"));
        spinBeta->setMaximum(1000.000000000000000);
        spinBeta->setSingleStep(0.100000000000000);

        gridLayout->addWidget(spinBeta, 6, 1, 1, 1);

        lblShininess_3 = new QLabel(GoochMaterialWidget);
        lblShininess_3->setObjectName(QString::fromUtf8("lblShininess_3"));

        gridLayout->addWidget(lblShininess_3, 6, 0, 1, 1);

        btnSpecular = new QgsColorButton(GoochMaterialWidget);
        btnSpecular->setObjectName(QString::fromUtf8("btnSpecular"));
        sizePolicy.setHeightForWidth(btnSpecular->sizePolicy().hasHeightForWidth());
        btnSpecular->setSizePolicy(sizePolicy);
        btnSpecular->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnSpecular, 3, 1, 1, 1);

        btnWarm = new QgsColorButton(GoochMaterialWidget);
        btnWarm->setObjectName(QString::fromUtf8("btnWarm"));
        sizePolicy.setHeightForWidth(btnWarm->sizePolicy().hasHeightForWidth());
        btnWarm->setSizePolicy(sizePolicy);
        btnWarm->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnWarm, 1, 1, 1, 1);

        lblAmbient = new QLabel(GoochMaterialWidget);
        lblAmbient->setObjectName(QString::fromUtf8("lblAmbient"));

        gridLayout->addWidget(lblAmbient, 1, 0, 1, 1);

        mDiffuseDataDefinedButton = new QgsPropertyOverrideButton(GoochMaterialWidget);
        mDiffuseDataDefinedButton->setObjectName(QString::fromUtf8("mDiffuseDataDefinedButton"));

        gridLayout->addWidget(mDiffuseDataDefinedButton, 0, 2, 1, 1);

        mWarmDataDefinedButton = new QgsPropertyOverrideButton(GoochMaterialWidget);
        mWarmDataDefinedButton->setObjectName(QString::fromUtf8("mWarmDataDefinedButton"));

        gridLayout->addWidget(mWarmDataDefinedButton, 1, 2, 1, 1);

        mCoolDataDefinedButton = new QgsPropertyOverrideButton(GoochMaterialWidget);
        mCoolDataDefinedButton->setObjectName(QString::fromUtf8("mCoolDataDefinedButton"));

        gridLayout->addWidget(mCoolDataDefinedButton, 2, 2, 1, 1);

        mSpecularDataDefinedButton = new QgsPropertyOverrideButton(GoochMaterialWidget);
        mSpecularDataDefinedButton->setObjectName(QString::fromUtf8("mSpecularDataDefinedButton"));

        gridLayout->addWidget(mSpecularDataDefinedButton, 3, 2, 1, 1);

        QWidget::setTabOrder(btnDiffuse, mDiffuseDataDefinedButton);
        QWidget::setTabOrder(mDiffuseDataDefinedButton, btnWarm);
        QWidget::setTabOrder(btnWarm, mWarmDataDefinedButton);
        QWidget::setTabOrder(mWarmDataDefinedButton, btnCool);
        QWidget::setTabOrder(btnCool, mCoolDataDefinedButton);
        QWidget::setTabOrder(mCoolDataDefinedButton, btnSpecular);
        QWidget::setTabOrder(btnSpecular, mSpecularDataDefinedButton);
        QWidget::setTabOrder(mSpecularDataDefinedButton, spinShininess);
        QWidget::setTabOrder(spinShininess, spinAlpha);
        QWidget::setTabOrder(spinAlpha, spinBeta);

        retranslateUi(GoochMaterialWidget);

        QMetaObject::connectSlotsByName(GoochMaterialWidget);
    } // setupUi

    void retranslateUi(QWidget *GoochMaterialWidget)
    {
#if QT_CONFIG(tooltip)
        lblShininess->setToolTip(QCoreApplication::translate("GoochMaterialWidget", "How shiny smooth surfaces are.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblShininess->setText(QCoreApplication::translate("GoochMaterialWidget", "Shininess", nullptr));
        lblAmbient_2->setText(QCoreApplication::translate("GoochMaterialWidget", "Cool", nullptr));
#if QT_CONFIG(tooltip)
        lblDiffuse->setToolTip(QCoreApplication::translate("GoochMaterialWidget", "Color of light reflected from rough surfaces.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblDiffuse->setText(QCoreApplication::translate("GoochMaterialWidget", "Diffuse", nullptr));
#if QT_CONFIG(tooltip)
        lblSpecular->setToolTip(QCoreApplication::translate("GoochMaterialWidget", "Color of light reflecting from smooth surfaces.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSpecular->setText(QCoreApplication::translate("GoochMaterialWidget", "Specular", nullptr));
        lblShininess_2->setText(QCoreApplication::translate("GoochMaterialWidget", "Alpha", nullptr));
        lblShininess_3->setText(QCoreApplication::translate("GoochMaterialWidget", "Beta", nullptr));
        lblAmbient->setText(QCoreApplication::translate("GoochMaterialWidget", "Warm", nullptr));
        mDiffuseDataDefinedButton->setText(QCoreApplication::translate("GoochMaterialWidget", "...", nullptr));
        mWarmDataDefinedButton->setText(QCoreApplication::translate("GoochMaterialWidget", "...", nullptr));
        mCoolDataDefinedButton->setText(QCoreApplication::translate("GoochMaterialWidget", "...", nullptr));
        mSpecularDataDefinedButton->setText(QCoreApplication::translate("GoochMaterialWidget", "...", nullptr));
        (void)GoochMaterialWidget;
    } // retranslateUi

};

namespace Ui {
    class GoochMaterialWidget: public Ui_GoochMaterialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOCHMATERIALWIDGET_H
