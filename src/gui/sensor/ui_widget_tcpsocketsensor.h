/********************************************************************************
** Form generated from reading UI file 'widget_tcpsocketsensor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_TCPSOCKETSENSOR_H
#define UI_WIDGET_TCPSOCKETSENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetTcpSocketSensor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mHostNameLabel;
    QLineEdit *mHostNameLineEdit;
    QLabel *mPortLabel;
    QgsSpinBox *mPortSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetTcpSocketSensor)
    {
        if (WidgetTcpSocketSensor->objectName().isEmpty())
            WidgetTcpSocketSensor->setObjectName(QString::fromUtf8("WidgetTcpSocketSensor"));
        WidgetTcpSocketSensor->resize(371, 409);
        WidgetTcpSocketSensor->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetTcpSocketSensor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mHostNameLabel = new QLabel(WidgetTcpSocketSensor);
        mHostNameLabel->setObjectName(QString::fromUtf8("mHostNameLabel"));
        mHostNameLabel->setWordWrap(true);

        verticalLayout->addWidget(mHostNameLabel);

        mHostNameLineEdit = new QLineEdit(WidgetTcpSocketSensor);
        mHostNameLineEdit->setObjectName(QString::fromUtf8("mHostNameLineEdit"));

        verticalLayout->addWidget(mHostNameLineEdit);

        mPortLabel = new QLabel(WidgetTcpSocketSensor);
        mPortLabel->setObjectName(QString::fromUtf8("mPortLabel"));
        mPortLabel->setWordWrap(true);

        verticalLayout->addWidget(mPortLabel);

        mPortSpinBox = new QgsSpinBox(WidgetTcpSocketSensor);
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


        retranslateUi(WidgetTcpSocketSensor);

        QMetaObject::connectSlotsByName(WidgetTcpSocketSensor);
    } // setupUi

    void retranslateUi(QWidget *WidgetTcpSocketSensor)
    {
        mHostNameLabel->setText(QCoreApplication::translate("WidgetTcpSocketSensor", "Host name (a domain string or IP address)", nullptr));
        mPortLabel->setText(QCoreApplication::translate("WidgetTcpSocketSensor", "Port", nullptr));
        mPortSpinBox->setPrefix(QString());
        (void)WidgetTcpSocketSensor;
    } // retranslateUi

};

namespace Ui {
    class WidgetTcpSocketSensor: public Ui_WidgetTcpSocketSensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_TCPSOCKETSENSOR_H
