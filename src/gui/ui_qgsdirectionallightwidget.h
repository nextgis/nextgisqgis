/********************************************************************************
** Form generated from reading UI file 'qgsdirectionallightwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDIRECTIONALLIGHTWIDGET_H
#define UI_QGSDIRECTIONALLIGHTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDirectionalLightWidget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QDial *mDialAzimuth;
    QgsDoubleSpinBox *mAzimuthSpinBox;
    QgsDoubleSpinBox *mAltitudeSpinBox;
    QHBoxLayout *horizontalLayout;
    QSlider *mAltitudeSlider;

    void setupUi(QWidget *QgsDirectionalLightWidget)
    {
        if (QgsDirectionalLightWidget->objectName().isEmpty())
            QgsDirectionalLightWidget->setObjectName(QString::fromUtf8("QgsDirectionalLightWidget"));
        QgsDirectionalLightWidget->resize(225, 159);
        QgsDirectionalLightWidget->setWindowTitle(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(QgsDirectionalLightWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsDirectionalLightWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(QgsDirectionalLightWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mDialAzimuth = new QDial(QgsDirectionalLightWidget);
        mDialAzimuth->setObjectName(QString::fromUtf8("mDialAzimuth"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDialAzimuth->sizePolicy().hasHeightForWidth());
        mDialAzimuth->setSizePolicy(sizePolicy);
        mDialAzimuth->setMaximum(3599);
        mDialAzimuth->setValue(1350);
        mDialAzimuth->setInvertedAppearance(false);
        mDialAzimuth->setInvertedControls(false);
        mDialAzimuth->setWrapping(true);
        mDialAzimuth->setNotchTarget(60.000000000000000);
        mDialAzimuth->setNotchesVisible(true);

        gridLayout_2->addWidget(mDialAzimuth, 0, 2, 1, 1);

        mAzimuthSpinBox = new QgsDoubleSpinBox(QgsDirectionalLightWidget);
        mAzimuthSpinBox->setObjectName(QString::fromUtf8("mAzimuthSpinBox"));
        mAzimuthSpinBox->setSuffix(QString::fromUtf8("\302\260"));
        mAzimuthSpinBox->setDecimals(1);
        mAzimuthSpinBox->setMaximum(359.899999999999977);
        mAzimuthSpinBox->setValue(315.000000000000000);

        gridLayout_2->addWidget(mAzimuthSpinBox, 0, 1, 1, 1);

        mAltitudeSpinBox = new QgsDoubleSpinBox(QgsDirectionalLightWidget);
        mAltitudeSpinBox->setObjectName(QString::fromUtf8("mAltitudeSpinBox"));
        mAltitudeSpinBox->setSuffix(QString::fromUtf8("\302\260"));
        mAltitudeSpinBox->setDecimals(1);
        mAltitudeSpinBox->setMaximum(90.000000000000000);
        mAltitudeSpinBox->setValue(45.000000000000000);

        gridLayout_2->addWidget(mAltitudeSpinBox, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        mAltitudeSlider = new QSlider(QgsDirectionalLightWidget);
        mAltitudeSlider->setObjectName(QString::fromUtf8("mAltitudeSlider"));
        mAltitudeSlider->setMaximum(900);
        mAltitudeSlider->setValue(450);
        mAltitudeSlider->setOrientation(Qt::Vertical);
        mAltitudeSlider->setInvertedControls(false);

        horizontalLayout->addWidget(mAltitudeSlider);


        gridLayout_2->addLayout(horizontalLayout, 1, 2, 1, 1);

        gridLayout_2->setColumnStretch(1, 2);
        gridLayout_2->setColumnStretch(2, 1);

        retranslateUi(QgsDirectionalLightWidget);

        QMetaObject::connectSlotsByName(QgsDirectionalLightWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsDirectionalLightWidget)
    {
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("QgsDirectionalLightWidget", "Altitude", nullptr));
        label->setText(QCoreApplication::translate("QgsDirectionalLightWidget", "Azimuth", nullptr));
#if QT_CONFIG(tooltip)
        mAzimuthSpinBox->setToolTip(QCoreApplication::translate("QgsDirectionalLightWidget", "Azimuth is the horizontal angle from the north of the directional light.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mAltitudeSpinBox->setToolTip(QCoreApplication::translate("QgsDirectionalLightWidget", "Altitude is the vertical angle from the horizontal plan of the directional light.", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsDirectionalLightWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsDirectionalLightWidget: public Ui_QgsDirectionalLightWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDIRECTIONALLIGHTWIDGET_H
