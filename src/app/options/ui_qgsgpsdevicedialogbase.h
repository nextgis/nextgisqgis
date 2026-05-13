/********************************************************************************
** Form generated from reading UI file 'qgsgpsdevicedialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGPSDEVICEDIALOGBASE_H
#define UI_QGSGPSDEVICEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGpsDeviceWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QgsFileWidget *mGpsBabelFileWidget;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QToolButton *mButtonAddDevice;
    QSpacerItem *spacerItem;
    QToolButton *mButtonRemoveDevice;
    QListWidget *mListDevices;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QLabel *textLabel3;
    QLineEdit *leDeviceName;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *textLabel1_2_5;
    QLabel *textLabel1_2_4;
    QLabel *textLabel1_2;
    QLineEdit *leRteDown;
    QLabel *textLabel1_2_3;
    QLineEdit *leWptUp;
    QLabel *textLabel1_2_5_2;
    QLineEdit *leTrkDown;
    QLineEdit *leRteUp;
    QLineEdit *leWptDown;
    QLineEdit *leTrkUp;
    QLabel *textLabel1_2_2;
    QTextBrowser *mDescriptionBrowser;

    void setupUi(QWidget *QgsGpsDeviceWidgetBase)
    {
        if (QgsGpsDeviceWidgetBase->objectName().isEmpty())
            QgsGpsDeviceWidgetBase->setObjectName(QString::fromUtf8("QgsGpsDeviceWidgetBase"));
        QgsGpsDeviceWidgetBase->resize(968, 792);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsGpsDeviceWidgetBase->sizePolicy().hasHeightForWidth());
        QgsGpsDeviceWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsGpsDeviceWidgetBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(QgsGpsDeviceWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        mGpsBabelFileWidget = new QgsFileWidget(groupBox_2);
        mGpsBabelFileWidget->setObjectName(QString::fromUtf8("mGpsBabelFileWidget"));
        mGpsBabelFileWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mGpsBabelFileWidget, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(QgsGpsDeviceWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(groupBox_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mButtonAddDevice = new QToolButton(frame);
        mButtonAddDevice->setObjectName(QString::fromUtf8("mButtonAddDevice"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddDevice->setIcon(icon);

        gridLayout_3->addWidget(mButtonAddDevice, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem, 1, 0, 1, 1);

        mButtonRemoveDevice = new QToolButton(frame);
        mButtonRemoveDevice->setObjectName(QString::fromUtf8("mButtonRemoveDevice"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveDevice->setIcon(icon1);

        gridLayout_3->addWidget(mButtonRemoveDevice, 1, 2, 1, 1);

        mListDevices = new QListWidget(frame);
        mListDevices->setObjectName(QString::fromUtf8("mListDevices"));
        mListDevices->setMinimumSize(QSize(0, 120));

        gridLayout_3->addWidget(mListDevices, 0, 0, 1, 3);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(groupBox_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        textLabel3 = new QLabel(frame_2);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(textLabel3, 0, 0, 1, 1);

        leDeviceName = new QLineEdit(frame_2);
        leDeviceName->setObjectName(QString::fromUtf8("leDeviceName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leDeviceName->sizePolicy().hasHeightForWidth());
        leDeviceName->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(leDeviceName, 0, 1, 1, 1);

        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel1_2_5 = new QLabel(groupBox);
        textLabel1_2_5->setObjectName(QString::fromUtf8("textLabel1_2_5"));

        gridLayout1->addWidget(textLabel1_2_5, 4, 0, 1, 1);

        textLabel1_2_4 = new QLabel(groupBox);
        textLabel1_2_4->setObjectName(QString::fromUtf8("textLabel1_2_4"));

        gridLayout1->addWidget(textLabel1_2_4, 3, 0, 1, 1);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout1->addWidget(textLabel1_2, 0, 0, 1, 1);

        leRteDown = new QLineEdit(groupBox);
        leRteDown->setObjectName(QString::fromUtf8("leRteDown"));

        gridLayout1->addWidget(leRteDown, 2, 1, 1, 1);

        textLabel1_2_3 = new QLabel(groupBox);
        textLabel1_2_3->setObjectName(QString::fromUtf8("textLabel1_2_3"));

        gridLayout1->addWidget(textLabel1_2_3, 2, 0, 1, 1);

        leWptUp = new QLineEdit(groupBox);
        leWptUp->setObjectName(QString::fromUtf8("leWptUp"));

        gridLayout1->addWidget(leWptUp, 1, 1, 1, 1);

        textLabel1_2_5_2 = new QLabel(groupBox);
        textLabel1_2_5_2->setObjectName(QString::fromUtf8("textLabel1_2_5_2"));

        gridLayout1->addWidget(textLabel1_2_5_2, 5, 0, 1, 1);

        leTrkDown = new QLineEdit(groupBox);
        leTrkDown->setObjectName(QString::fromUtf8("leTrkDown"));

        gridLayout1->addWidget(leTrkDown, 4, 1, 1, 1);

        leRteUp = new QLineEdit(groupBox);
        leRteUp->setObjectName(QString::fromUtf8("leRteUp"));

        gridLayout1->addWidget(leRteUp, 3, 1, 1, 1);

        leWptDown = new QLineEdit(groupBox);
        leWptDown->setObjectName(QString::fromUtf8("leWptDown"));

        gridLayout1->addWidget(leWptDown, 0, 1, 1, 1);

        leTrkUp = new QLineEdit(groupBox);
        leTrkUp->setObjectName(QString::fromUtf8("leTrkUp"));

        gridLayout1->addWidget(leTrkUp, 5, 1, 1, 1);

        textLabel1_2_2 = new QLabel(groupBox);
        textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));

        gridLayout1->addWidget(textLabel1_2_2, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 2);

        mDescriptionBrowser = new QTextBrowser(frame_2);
        mDescriptionBrowser->setObjectName(QString::fromUtf8("mDescriptionBrowser"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mDescriptionBrowser->sizePolicy().hasHeightForWidth());
        mDescriptionBrowser->setSizePolicy(sizePolicy3);
        mDescriptionBrowser->setAcceptDrops(false);
        mDescriptionBrowser->setReadOnly(true);

        gridLayout_2->addWidget(mDescriptionBrowser, 2, 0, 1, 2);

        gridLayout_2->setRowStretch(2, 1);

        gridLayout->addWidget(frame_2, 0, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_3);

#if QT_CONFIG(shortcut)
        textLabel3->setBuddy(leDeviceName);
        textLabel1_2_5->setBuddy(leTrkDown);
        textLabel1_2_4->setBuddy(leRteUp);
        textLabel1_2->setBuddy(leWptDown);
        textLabel1_2_3->setBuddy(leRteDown);
        textLabel1_2_5_2->setBuddy(leTrkUp);
        textLabel1_2_2->setBuddy(leWptUp);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mGpsBabelFileWidget, mListDevices);
        QWidget::setTabOrder(mListDevices, mButtonAddDevice);
        QWidget::setTabOrder(mButtonAddDevice, mButtonRemoveDevice);
        QWidget::setTabOrder(mButtonRemoveDevice, leDeviceName);
        QWidget::setTabOrder(leDeviceName, leWptDown);
        QWidget::setTabOrder(leWptDown, leWptUp);
        QWidget::setTabOrder(leWptUp, leRteDown);
        QWidget::setTabOrder(leRteDown, leRteUp);
        QWidget::setTabOrder(leRteUp, leTrkDown);
        QWidget::setTabOrder(leTrkDown, leTrkUp);
        QWidget::setTabOrder(leTrkUp, mDescriptionBrowser);

        retranslateUi(QgsGpsDeviceWidgetBase);

        QMetaObject::connectSlotsByName(QgsGpsDeviceWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsGpsDeviceWidgetBase)
    {
        QgsGpsDeviceWidgetBase->setWindowTitle(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "GPS Device Editor", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "GPSBabel Options", nullptr));
        label->setText(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Path to GPSBabel", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Devices", nullptr));
#if QT_CONFIG(tooltip)
        mButtonAddDevice->setToolTip(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Add new device", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddDevice->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonRemoveDevice->setToolTip(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Remove device", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveDevice->setText(QString());
        textLabel3->setText(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Device name", nullptr));
#if QT_CONFIG(tooltip)
        leDeviceName->setToolTip(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "This is the name of the device as it will appear in the lists", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Commands", nullptr));
        textLabel1_2_5->setText(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Track download", nullptr));
        textLabel1_2_4->setText(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Route upload", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Waypoint download", nullptr));
#if QT_CONFIG(tooltip)
        leRteDown->setToolTip(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "The command that is used to download routes from the device", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel1_2_3->setText(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Route download", nullptr));
#if QT_CONFIG(tooltip)
        leWptUp->setToolTip(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "The command that is used to upload waypoints to the device", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel1_2_5_2->setText(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Track upload", nullptr));
#if QT_CONFIG(tooltip)
        leTrkDown->setToolTip(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "The command that is used to download tracks from the device", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        leRteUp->setToolTip(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "The command that is used to upload routes to the device", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        leWptDown->setToolTip(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "The command that is used to download waypoints from the device", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        leTrkUp->setToolTip(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "The command that is used to upload tracks to the device", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel1_2_2->setText(QCoreApplication::translate("QgsGpsDeviceWidgetBase", "Waypoint upload", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGpsDeviceWidgetBase: public Ui_QgsGpsDeviceWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGPSDEVICEDIALOGBASE_H
