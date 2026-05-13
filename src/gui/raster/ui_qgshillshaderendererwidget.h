/********************************************************************************
** Form generated from reading UI file 'qgshillshaderendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHILLSHADERENDERERWIDGET_H
#define UI_QGSHILLSHADERENDERERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsHillShadeWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QgsDoubleSpinBox *mLightAngle;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QgsRasterBandComboBox *mBandsCombo;
    QgsDoubleSpinBox *mZFactor;
    QCheckBox *mMultiDirection;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QDial *mLightAzimuthDial;
    QgsDoubleSpinBox *mLightAzimuth;

    void setupUi(QWidget *QgsHillShadeWidget)
    {
        if (QgsHillShadeWidget->objectName().isEmpty())
            QgsHillShadeWidget->setObjectName(QString::fromUtf8("QgsHillShadeWidget"));
        QgsHillShadeWidget->resize(302, 541);
        QgsHillShadeWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsHillShadeWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsHillShadeWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        label = new QLabel(QgsHillShadeWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_3 = new QLabel(QgsHillShadeWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 2);

        mLightAngle = new QgsDoubleSpinBox(QgsHillShadeWidget);
        mLightAngle->setObjectName(QString::fromUtf8("mLightAngle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLightAngle->sizePolicy().hasHeightForWidth());
        mLightAngle->setSizePolicy(sizePolicy);
        mLightAngle->setSingleStep(5.000000000000000);
        mLightAngle->setValue(45.000000000000000);

        gridLayout->addWidget(mLightAngle, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 3);

        label_4 = new QLabel(QgsHillShadeWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        mBandsCombo = new QgsRasterBandComboBox(QgsHillShadeWidget);
        mBandsCombo->setObjectName(QString::fromUtf8("mBandsCombo"));

        gridLayout->addWidget(mBandsCombo, 0, 2, 1, 1);

        mZFactor = new QgsDoubleSpinBox(QgsHillShadeWidget);
        mZFactor->setObjectName(QString::fromUtf8("mZFactor"));
        sizePolicy.setHeightForWidth(mZFactor->sizePolicy().hasHeightForWidth());
        mZFactor->setSizePolicy(sizePolicy);
        mZFactor->setDecimals(8);
        mZFactor->setValue(1.000000000000000);

        gridLayout->addWidget(mZFactor, 3, 2, 1, 1);

        mMultiDirection = new QCheckBox(QgsHillShadeWidget);
        mMultiDirection->setObjectName(QString::fromUtf8("mMultiDirection"));

        gridLayout->addWidget(mMultiDirection, 4, 2, 1, 1);

        label_5 = new QLabel(QgsHillShadeWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mLightAzimuthDial = new QDial(QgsHillShadeWidget);
        mLightAzimuthDial->setObjectName(QString::fromUtf8("mLightAzimuthDial"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLightAzimuthDial->sizePolicy().hasHeightForWidth());
        mLightAzimuthDial->setSizePolicy(sizePolicy1);
        mLightAzimuthDial->setMaximum(360);
        mLightAzimuthDial->setValue(0);
        mLightAzimuthDial->setSliderPosition(0);
        mLightAzimuthDial->setInvertedAppearance(false);
        mLightAzimuthDial->setInvertedControls(false);
        mLightAzimuthDial->setWrapping(true);
        mLightAzimuthDial->setNotchTarget(10.000000000000000);
        mLightAzimuthDial->setNotchesVisible(true);

        verticalLayout->addWidget(mLightAzimuthDial);

        mLightAzimuth = new QgsDoubleSpinBox(QgsHillShadeWidget);
        mLightAzimuth->setObjectName(QString::fromUtf8("mLightAzimuth"));
        sizePolicy.setHeightForWidth(mLightAzimuth->sizePolicy().hasHeightForWidth());
        mLightAzimuth->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mLightAzimuth);


        gridLayout->addLayout(verticalLayout, 2, 2, 1, 1);

        QWidget::setTabOrder(mBandsCombo, mLightAngle);
        QWidget::setTabOrder(mLightAngle, mLightAzimuthDial);
        QWidget::setTabOrder(mLightAzimuthDial, mLightAzimuth);
        QWidget::setTabOrder(mLightAzimuth, mZFactor);
        QWidget::setTabOrder(mZFactor, mMultiDirection);

        retranslateUi(QgsHillShadeWidget);

        QMetaObject::connectSlotsByName(QgsHillShadeWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsHillShadeWidget)
    {
        label_2->setText(QCoreApplication::translate("QgsHillShadeWidget", "Altitude", nullptr));
        label->setText(QCoreApplication::translate("QgsHillShadeWidget", "Azimuth", nullptr));
        label_3->setText(QCoreApplication::translate("QgsHillShadeWidget", "Z Factor", nullptr));
        mLightAngle->setSuffix(QCoreApplication::translate("QgsHillShadeWidget", "\313\232", nullptr));
        label_4->setText(QCoreApplication::translate("QgsHillShadeWidget", "Band", nullptr));
        mMultiDirection->setText(QString());
        label_5->setText(QCoreApplication::translate("QgsHillShadeWidget", "Multidirectional", nullptr));
        mLightAzimuth->setSuffix(QCoreApplication::translate("QgsHillShadeWidget", "\313\232", nullptr));
        (void)QgsHillShadeWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsHillShadeWidget: public Ui_QgsHillShadeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHILLSHADERENDERERWIDGET_H
