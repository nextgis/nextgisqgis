/********************************************************************************
** Form generated from reading UI file 'widget_udpsocketsensor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_UDPSOCKETSENSOR_H
#define UI_WIDGET_UDPSOCKETSENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetUdpSocketSensor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mHostNameLabel;
    QLineEdit *mHostNameLineEdit;
    QLabel *mPortLabel;
    QgsSpinBox *mPortSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetUdpSocketSensor)
    {
        if (WidgetUdpSocketSensor->objectName().isEmpty())
            WidgetUdpSocketSensor->setObjectName(QString::fromUtf8("WidgetUdpSocketSensor"));
        WidgetUdpSocketSensor->resize(371, 409);
        WidgetUdpSocketSensor->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetUdpSocketSensor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mHostNameLabel = new QLabel(WidgetUdpSocketSensor);
        mHostNameLabel->setObjectName(QString::fromUtf8("mHostNameLabel"));
        mHostNameLabel->setWordWrap(true);

        verticalLayout->addWidget(mHostNameLabel);

        mHostNameLineEdit = new QLineEdit(WidgetUdpSocketSensor);
        mHostNameLineEdit->setObjectName(QString::fromUtf8("mHostNameLineEdit"));

        verticalLayout->addWidget(mHostNameLineEdit);

        mPortLabel = new QLabel(WidgetUdpSocketSensor);
        mPortLabel->setObjectName(QString::fromUtf8("mPortLabel"));
        mPortLabel->setWordWrap(true);

        verticalLayout->addWidget(mPortLabel);

        mPortSpinBox = new QgsSpinBox(WidgetUdpSocketSensor);
        mPortSpinBox->setObjectName(QString::fromUtf8("mPortSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPortSpinBox->sizePolicy().hasHeightForWidth());
        mPortSpinBox->setSizePolicy(sizePolicy);
        mPortSpinBox->setMinimum(1);
        mPortSpinBox->setMaximum(65535);
        mPortSpinBox->setProperty("showClearButton", QVariant(false));

        verticalLayout->addWidget(mPortSpinBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(WidgetUdpSocketSensor);

        QMetaObject::connectSlotsByName(WidgetUdpSocketSensor);
    } // setupUi

    void retranslateUi(QWidget *WidgetUdpSocketSensor)
    {
        mHostNameLabel->setText(QCoreApplication::translate("WidgetUdpSocketSensor", "Host name (a domain string or IP address)", nullptr));
        mPortLabel->setText(QCoreApplication::translate("WidgetUdpSocketSensor", "Port", nullptr));
        mPortSpinBox->setPrefix(QString());
        (void)WidgetUdpSocketSensor;
    } // retranslateUi

};

namespace Ui {
    class WidgetUdpSocketSensor: public Ui_WidgetUdpSocketSensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_UDPSOCKETSENSOR_H
