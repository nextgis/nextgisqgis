/********************************************************************************
** Form generated from reading UI file 'widget_serialportsensor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SERIALPORTSENSOR_H
#define UI_WIDGET_SERIALPORTSENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetSerialPortSensor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mSerialPortLabel;
    QComboBox *mSerialPortComboBox;
    QLabel *mBaudRateLabel;
    QComboBox *mBaudRateComboBox;
    QLabel *mDataFrameDelimiterLabel;
    QHBoxLayout *dataFrameDelimiterLayout;
    QComboBox *mDataFrameDelimiterComboBox;
    QLineEdit *mDataFrameDelimiterLineEdit;
    QLabel *mSerialPortDetails;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetSerialPortSensor)
    {
        if (WidgetSerialPortSensor->objectName().isEmpty())
            WidgetSerialPortSensor->setObjectName(QString::fromUtf8("WidgetSerialPortSensor"));
        WidgetSerialPortSensor->resize(371, 409);
        WidgetSerialPortSensor->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetSerialPortSensor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mSerialPortLabel = new QLabel(WidgetSerialPortSensor);
        mSerialPortLabel->setObjectName(QString::fromUtf8("mSerialPortLabel"));
        mSerialPortLabel->setWordWrap(true);

        verticalLayout->addWidget(mSerialPortLabel);

        mSerialPortComboBox = new QComboBox(WidgetSerialPortSensor);
        mSerialPortComboBox->setObjectName(QString::fromUtf8("mSerialPortComboBox"));
        mSerialPortComboBox->setEditable(true);

        verticalLayout->addWidget(mSerialPortComboBox);

        mBaudRateLabel = new QLabel(WidgetSerialPortSensor);
        mBaudRateLabel->setObjectName(QString::fromUtf8("mBaudRateLabel"));

        verticalLayout->addWidget(mBaudRateLabel);

        mBaudRateComboBox = new QComboBox(WidgetSerialPortSensor);
        mBaudRateComboBox->setObjectName(QString::fromUtf8("mBaudRateComboBox"));

        verticalLayout->addWidget(mBaudRateComboBox);

        mDataFrameDelimiterLabel = new QLabel(WidgetSerialPortSensor);
        mDataFrameDelimiterLabel->setObjectName(QString::fromUtf8("mDataFrameDelimiterLabel"));

        verticalLayout->addWidget(mDataFrameDelimiterLabel);

        dataFrameDelimiterLayout = new QHBoxLayout();
        dataFrameDelimiterLayout->setObjectName(QString::fromUtf8("dataFrameDelimiterLayout"));
        dataFrameDelimiterLayout->setContentsMargins(0, 0, 0, 0);
        mDataFrameDelimiterComboBox = new QComboBox(WidgetSerialPortSensor);
        mDataFrameDelimiterComboBox->setObjectName(QString::fromUtf8("mDataFrameDelimiterComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDataFrameDelimiterComboBox->sizePolicy().hasHeightForWidth());
        mDataFrameDelimiterComboBox->setSizePolicy(sizePolicy);

        dataFrameDelimiterLayout->addWidget(mDataFrameDelimiterComboBox);

        mDataFrameDelimiterLineEdit = new QLineEdit(WidgetSerialPortSensor);
        mDataFrameDelimiterLineEdit->setObjectName(QString::fromUtf8("mDataFrameDelimiterLineEdit"));
        mDataFrameDelimiterLineEdit->setEnabled(false);
        mDataFrameDelimiterLineEdit->setMaximumSize(QSize(80, 16777215));

        dataFrameDelimiterLayout->addWidget(mDataFrameDelimiterLineEdit);


        verticalLayout->addLayout(dataFrameDelimiterLayout);

        mSerialPortDetails = new QLabel(WidgetSerialPortSensor);
        mSerialPortDetails->setObjectName(QString::fromUtf8("mSerialPortDetails"));
        mSerialPortDetails->setEnabled(false);
        mSerialPortDetails->setWordWrap(true);

        verticalLayout->addWidget(mSerialPortDetails);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(WidgetSerialPortSensor);

        mBaudRateComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(WidgetSerialPortSensor);
    } // setupUi

    void retranslateUi(QWidget *WidgetSerialPortSensor)
    {
        mSerialPortLabel->setText(QCoreApplication::translate("WidgetSerialPortSensor", "Serial port name", nullptr));
#if QT_CONFIG(tooltip)
        mSerialPortComboBox->setToolTip(QCoreApplication::translate("WidgetSerialPortSensor", "Choose a serial port for the connection", nullptr));
#endif // QT_CONFIG(tooltip)
        mBaudRateLabel->setText(QCoreApplication::translate("WidgetSerialPortSensor", "Data baud rate", nullptr));
#if QT_CONFIG(tooltip)
        mBaudRateComboBox->setToolTip(QCoreApplication::translate("WidgetSerialPortSensor", "Choose a baudrate for the sensor connection", nullptr));
#endif // QT_CONFIG(tooltip)
        mBaudRateComboBox->setCurrentText(QString());
        mDataFrameDelimiterLabel->setText(QCoreApplication::translate("WidgetSerialPortSensor", "Data frame delimiter", nullptr));
#if QT_CONFIG(tooltip)
        mDataFrameDelimiterComboBox->setToolTip(QCoreApplication::translate("WidgetSerialPortSensor", "Choose a character to act as the data frame delimiter", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)WidgetSerialPortSensor;
    } // retranslateUi

};

namespace Ui {
    class WidgetSerialPortSensor: public Ui_WidgetSerialPortSensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SERIALPORTSENSOR_H
