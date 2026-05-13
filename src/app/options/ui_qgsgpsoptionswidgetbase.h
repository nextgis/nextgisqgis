/********************************************************************************
** Form generated from reading UI file 'qgsgpsoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGPSOPTIONSWIDGETBASE_H
#define UI_QGSGPSOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscollapsiblegroupbox.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGpsOptionsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBox *mDeviceGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *mRadInternal;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mCboDevices;
    QToolButton *mBtnRefreshDevices;
    QRadioButton *mRadAutodetect;
    QGridLayout *gridLayout_12;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *mGpsdDevice;
    QLineEdit *mGpsdHost;
    QgsSpinBox *mSpinGpsdPort;
    QRadioButton *mRadGpsd;
    QRadioButton *mRadSerialDevice;
    QgsCollapsibleGroupBox *groupBox_4;
    QGridLayout *gridLayout_14;
    QComboBox *mCboDistanceThreshold;
    QLabel *label_9;
    QLabel *label_8;
    QComboBox *mCboAcquisitionInterval;
    QgsCollapsibleGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QComboBox *mComboMValueAttribute;
    QLabel *label_6;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QgsSymbolButton *mGpsMarkerSymbolButton;
    QCheckBox *mCheckRotateLocationMarker;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QgsSymbolButton *mBearingLineStyleButton;
    QCheckBox *mTravelBearingCheckBox;
    QgsCollapsibleGroupBox *groupBox_3;
    QGridLayout *gridLayout_16;
    QLabel *label_13;
    QgsSymbolButton *mTrackLineStyleButton;
    QgsCollapsibleGroupBoxBasic *groupBox_6;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QgsSpinBox *mSpinMapExtentMultiplier;
    QLabel *label_12;
    QgsSpinBox *mSpinMapRotateInterval;
    QGroupBox *mGboxTimestamp;
    QFormLayout *formLayout;
    QLabel *mLblTimestampFormat;
    QComboBox *mCboTimestampFormat;
    QLabel *mLblTimeZone;
    QComboBox *mCboTimeZones;
    QCheckBox *mCbxLeapSeconds;
    QgsSpinBox *mLeapSeconds;
    QLabel *mLblOffsetFromUtc;
    QgsSpinBox *mOffsetFromUtc;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsGpsOptionsWidgetBase)
    {
        if (QgsGpsOptionsWidgetBase->objectName().isEmpty())
            QgsGpsOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsGpsOptionsWidgetBase"));
        QgsGpsOptionsWidgetBase->resize(690, 761);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsGpsOptionsWidgetBase->sizePolicy().hasHeightForWidth());
        QgsGpsOptionsWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsGpsOptionsWidgetBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsGpsOptionsWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -157, 676, 931));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, -1, 0);
        mDeviceGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mDeviceGroupBox->setObjectName(QString::fromUtf8("mDeviceGroupBox"));
        gridLayout_2 = new QGridLayout(mDeviceGroupBox);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 2, -1, 4);
        mRadInternal = new QRadioButton(mDeviceGroupBox);
        mRadInternal->setObjectName(QString::fromUtf8("mRadInternal"));

        gridLayout_2->addWidget(mRadInternal, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        mCboDevices = new QComboBox(mDeviceGroupBox);
        mCboDevices->setObjectName(QString::fromUtf8("mCboDevices"));
        mCboDevices->setEnabled(false);

        horizontalLayout_3->addWidget(mCboDevices);

        mBtnRefreshDevices = new QToolButton(mDeviceGroupBox);
        mBtnRefreshDevices->setObjectName(QString::fromUtf8("mBtnRefreshDevices"));
        mBtnRefreshDevices->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mBtnRefreshDevices->sizePolicy().hasHeightForWidth());
        mBtnRefreshDevices->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRefreshDevices->setIcon(icon);
        mBtnRefreshDevices->setAutoRaise(true);

        horizontalLayout_3->addWidget(mBtnRefreshDevices);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        mRadAutodetect = new QRadioButton(mDeviceGroupBox);
        mRadAutodetect->setObjectName(QString::fromUtf8("mRadAutodetect"));
        mRadAutodetect->setChecked(true);

        gridLayout_2->addWidget(mRadAutodetect, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setVerticalSpacing(2);
        gridLayout_12->setContentsMargins(20, -1, -1, -1);
        label_4 = new QLabel(mDeviceGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_12->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(mDeviceGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_12->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(mDeviceGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_12->addWidget(label_5, 2, 0, 1, 1);

        mGpsdDevice = new QLineEdit(mDeviceGroupBox);
        mGpsdDevice->setObjectName(QString::fromUtf8("mGpsdDevice"));
        mGpsdDevice->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mGpsdDevice->sizePolicy().hasHeightForWidth());
        mGpsdDevice->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(mGpsdDevice, 2, 1, 1, 1);

        mGpsdHost = new QLineEdit(mDeviceGroupBox);
        mGpsdHost->setObjectName(QString::fromUtf8("mGpsdHost"));
        mGpsdHost->setEnabled(false);
        sizePolicy2.setHeightForWidth(mGpsdHost->sizePolicy().hasHeightForWidth());
        mGpsdHost->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(mGpsdHost, 0, 1, 1, 1);

        mSpinGpsdPort = new QgsSpinBox(mDeviceGroupBox);
        mSpinGpsdPort->setObjectName(QString::fromUtf8("mSpinGpsdPort"));
        mSpinGpsdPort->setEnabled(false);
        mSpinGpsdPort->setMaximum(65535);

        gridLayout_12->addWidget(mSpinGpsdPort, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_12, 5, 0, 1, 1);

        mRadGpsd = new QRadioButton(mDeviceGroupBox);
        mRadGpsd->setObjectName(QString::fromUtf8("mRadGpsd"));

        gridLayout_2->addWidget(mRadGpsd, 4, 0, 1, 1);

        mRadSerialDevice = new QRadioButton(mDeviceGroupBox);
        mRadSerialDevice->setObjectName(QString::fromUtf8("mRadSerialDevice"));

        gridLayout_2->addWidget(mRadSerialDevice, 2, 0, 1, 1);


        verticalLayout_2->addWidget(mDeviceGroupBox);

        groupBox_4 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_14 = new QGridLayout(groupBox_4);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        mCboDistanceThreshold = new QComboBox(groupBox_4);
        mCboDistanceThreshold->setObjectName(QString::fromUtf8("mCboDistanceThreshold"));
        mCboDistanceThreshold->setEditable(true);

        gridLayout_14->addWidget(mCboDistanceThreshold, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_14->addWidget(label_9, 1, 0, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_14->addWidget(label_8, 0, 0, 1, 1);

        mCboAcquisitionInterval = new QComboBox(groupBox_4);
        mCboAcquisitionInterval->setObjectName(QString::fromUtf8("mCboAcquisitionInterval"));
        mCboAcquisitionInterval->setEditable(true);

        gridLayout_14->addWidget(mCboAcquisitionInterval, 0, 1, 1, 1);

        gridLayout_14->setColumnStretch(0, 1);
        gridLayout_14->setColumnStretch(1, 2);

        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mComboMValueAttribute = new QComboBox(groupBox_5);
        mComboMValueAttribute->setObjectName(QString::fromUtf8("mComboMValueAttribute"));

        gridLayout_5->addWidget(mComboMValueAttribute, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);

        verticalLayout_2->addWidget(groupBox_5);

        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        mGpsMarkerSymbolButton = new QgsSymbolButton(groupBox_2);
        mGpsMarkerSymbolButton->setObjectName(QString::fromUtf8("mGpsMarkerSymbolButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mGpsMarkerSymbolButton->sizePolicy().hasHeightForWidth());
        mGpsMarkerSymbolButton->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(mGpsMarkerSymbolButton, 0, 1, 1, 1);

        mCheckRotateLocationMarker = new QCheckBox(groupBox_2);
        mCheckRotateLocationMarker->setObjectName(QString::fromUtf8("mCheckRotateLocationMarker"));

        gridLayout_4->addWidget(mCheckRotateLocationMarker, 1, 0, 1, 3);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);

        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        mBearingLineStyleButton = new QgsSymbolButton(groupBox);
        mBearingLineStyleButton->setObjectName(QString::fromUtf8("mBearingLineStyleButton"));
        sizePolicy3.setHeightForWidth(mBearingLineStyleButton->sizePolicy().hasHeightForWidth());
        mBearingLineStyleButton->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(mBearingLineStyleButton, 0, 1, 1, 1);

        mTravelBearingCheckBox = new QCheckBox(groupBox);
        mTravelBearingCheckBox->setObjectName(QString::fromUtf8("mTravelBearingCheckBox"));

        gridLayout_3->addWidget(mTravelBearingCheckBox, 1, 0, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);

        verticalLayout_2->addWidget(groupBox);

        groupBox_3 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_16 = new QGridLayout(groupBox_3);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(-1, 2, -1, 4);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_16->addWidget(label_13, 0, 0, 1, 1);

        mTrackLineStyleButton = new QgsSymbolButton(groupBox_3);
        mTrackLineStyleButton->setObjectName(QString::fromUtf8("mTrackLineStyleButton"));
        sizePolicy3.setHeightForWidth(mTrackLineStyleButton->sizePolicy().hasHeightForWidth());
        mTrackLineStyleButton->setSizePolicy(sizePolicy3);

        gridLayout_16->addWidget(mTrackLineStyleButton, 0, 1, 1, 1);

        gridLayout_16->setColumnStretch(0, 1);
        gridLayout_16->setColumnStretch(1, 2);

        verticalLayout_2->addWidget(groupBox_3);

        groupBox_6 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout = new QGridLayout(groupBox_6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mSpinMapExtentMultiplier = new QgsSpinBox(groupBox_6);
        mSpinMapExtentMultiplier->setObjectName(QString::fromUtf8("mSpinMapExtentMultiplier"));
        mSpinMapExtentMultiplier->setEnabled(true);
        sizePolicy3.setHeightForWidth(mSpinMapExtentMultiplier->sizePolicy().hasHeightForWidth());
        mSpinMapExtentMultiplier->setSizePolicy(sizePolicy3);
        mSpinMapExtentMultiplier->setMinimum(5);
        mSpinMapExtentMultiplier->setMaximum(100);
        mSpinMapExtentMultiplier->setSingleStep(1);
        mSpinMapExtentMultiplier->setValue(50);

        gridLayout->addWidget(mSpinMapExtentMultiplier, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        mSpinMapRotateInterval = new QgsSpinBox(groupBox_6);
        mSpinMapRotateInterval->setObjectName(QString::fromUtf8("mSpinMapRotateInterval"));
        mSpinMapRotateInterval->setEnabled(true);
        sizePolicy3.setHeightForWidth(mSpinMapRotateInterval->sizePolicy().hasHeightForWidth());
        mSpinMapRotateInterval->setSizePolicy(sizePolicy3);
        mSpinMapRotateInterval->setMinimum(0);
        mSpinMapRotateInterval->setMaximum(1000);
        mSpinMapRotateInterval->setSingleStep(1);
        mSpinMapRotateInterval->setValue(0);

        gridLayout->addWidget(mSpinMapRotateInterval, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout_2->addWidget(groupBox_6);

        mGboxTimestamp = new QGroupBox(scrollAreaWidgetContents);
        mGboxTimestamp->setObjectName(QString::fromUtf8("mGboxTimestamp"));
        formLayout = new QFormLayout(mGboxTimestamp);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mLblTimestampFormat = new QLabel(mGboxTimestamp);
        mLblTimestampFormat->setObjectName(QString::fromUtf8("mLblTimestampFormat"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mLblTimestampFormat);

        mCboTimestampFormat = new QComboBox(mGboxTimestamp);
        mCboTimestampFormat->setObjectName(QString::fromUtf8("mCboTimestampFormat"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mCboTimestampFormat);

        mLblTimeZone = new QLabel(mGboxTimestamp);
        mLblTimeZone->setObjectName(QString::fromUtf8("mLblTimeZone"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mLblTimeZone);

        mCboTimeZones = new QComboBox(mGboxTimestamp);
        mCboTimeZones->setObjectName(QString::fromUtf8("mCboTimeZones"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mCboTimeZones);

        mCbxLeapSeconds = new QCheckBox(mGboxTimestamp);
        mCbxLeapSeconds->setObjectName(QString::fromUtf8("mCbxLeapSeconds"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mCbxLeapSeconds);

        mLeapSeconds = new QgsSpinBox(mGboxTimestamp);
        mLeapSeconds->setObjectName(QString::fromUtf8("mLeapSeconds"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mLeapSeconds);

        mLblOffsetFromUtc = new QLabel(mGboxTimestamp);
        mLblOffsetFromUtc->setObjectName(QString::fromUtf8("mLblOffsetFromUtc"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mLblOffsetFromUtc);

        mOffsetFromUtc = new QgsSpinBox(mGboxTimestamp);
        mOffsetFromUtc->setObjectName(QString::fromUtf8("mOffsetFromUtc"));
        mOffsetFromUtc->setMinimum(-86400);
        mOffsetFromUtc->setMaximum(86400);

        formLayout->setWidget(3, QFormLayout::FieldRole, mOffsetFromUtc);


        verticalLayout_2->addWidget(mGboxTimestamp);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(mGpsdHost);
        label_5->setBuddy(mGpsdDevice);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, mRadAutodetect);
        QWidget::setTabOrder(mRadAutodetect, mRadInternal);
        QWidget::setTabOrder(mRadInternal, mRadSerialDevice);
        QWidget::setTabOrder(mRadSerialDevice, mCboDevices);
        QWidget::setTabOrder(mCboDevices, mBtnRefreshDevices);
        QWidget::setTabOrder(mBtnRefreshDevices, mRadGpsd);
        QWidget::setTabOrder(mRadGpsd, mGpsdHost);
        QWidget::setTabOrder(mGpsdHost, mSpinGpsdPort);
        QWidget::setTabOrder(mSpinGpsdPort, mGpsdDevice);
        QWidget::setTabOrder(mGpsdDevice, mCboAcquisitionInterval);
        QWidget::setTabOrder(mCboAcquisitionInterval, mCboDistanceThreshold);
        QWidget::setTabOrder(mCboDistanceThreshold, mComboMValueAttribute);
        QWidget::setTabOrder(mComboMValueAttribute, mGpsMarkerSymbolButton);
        QWidget::setTabOrder(mGpsMarkerSymbolButton, mCheckRotateLocationMarker);
        QWidget::setTabOrder(mCheckRotateLocationMarker, mBearingLineStyleButton);
        QWidget::setTabOrder(mBearingLineStyleButton, mTravelBearingCheckBox);
        QWidget::setTabOrder(mTravelBearingCheckBox, mTrackLineStyleButton);
        QWidget::setTabOrder(mTrackLineStyleButton, mSpinMapExtentMultiplier);
        QWidget::setTabOrder(mSpinMapExtentMultiplier, mSpinMapRotateInterval);
        QWidget::setTabOrder(mSpinMapRotateInterval, mCboTimestampFormat);
        QWidget::setTabOrder(mCboTimestampFormat, mCboTimeZones);
        QWidget::setTabOrder(mCboTimeZones, mOffsetFromUtc);
        QWidget::setTabOrder(mOffsetFromUtc, mCbxLeapSeconds);
        QWidget::setTabOrder(mCbxLeapSeconds, mLeapSeconds);

        retranslateUi(QgsGpsOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsGpsOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsGpsOptionsWidgetBase)
    {
        QgsGpsOptionsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "GPS Device Editor", nullptr));
        mDeviceGroupBox->setTitle(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "GPS Connection", nullptr));
        mRadInternal->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Internal", nullptr));
#if QT_CONFIG(tooltip)
        mBtnRefreshDevices->setToolTip(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Refresh serial device list", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnRefreshDevices->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "\342\200\246", nullptr));
        mRadAutodetect->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Autodetect", nullptr));
        label_4->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Port", nullptr));
        label_3->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Host", nullptr));
        label_5->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Device", nullptr));
        mRadGpsd->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "gpsd", nullptr));
        mRadSerialDevice->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Serial device", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Filtering", nullptr));
        label_9->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Distance threshold (meters)", nullptr));
        label_8->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Acquisition interval (seconds)", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Geometry Options", nullptr));
        label_6->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Store in M values", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "GPS Location Marker", nullptr));
        label->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "GPS location marker", nullptr));
        mGpsMarkerSymbolButton->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Change\342\200\246", nullptr));
        mCheckRotateLocationMarker->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Rotate location marker to match GPS bearing", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "GPS Bearing", nullptr));
        label_11->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Bearing line style", nullptr));
        mBearingLineStyleButton->setText(QString());
#if QT_CONFIG(tooltip)
        mTravelBearingCheckBox->setToolTip(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "If checked, the bearing reported by the GPS device will be ignored and the bearing will instead be calculated by the angle between the previous two GPS locations", nullptr));
#endif // QT_CONFIG(tooltip)
        mTravelBearingCheckBox->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Calculate bearings from travel direction", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "GPS Track", nullptr));
        label_13->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Track line style", nullptr));
        mTrackLineStyleButton->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Map Centering and Rotation", nullptr));
        label_2->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Threshold for automatic map centering", nullptr));
        mSpinMapExtentMultiplier->setSuffix(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "% of map extent", nullptr));
        label_12->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Automatic map rotation frequency", nullptr));
        mSpinMapRotateInterval->setSpecialValueText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "On GPS signal", nullptr));
        mSpinMapRotateInterval->setSuffix(QCoreApplication::translate("QgsGpsOptionsWidgetBase", " s", nullptr));
        mGboxTimestamp->setTitle(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Timestamp Properties", nullptr));
        mLblTimestampFormat->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Format", nullptr));
        mLblTimeZone->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Timezone", nullptr));
#if QT_CONFIG(tooltip)
        mCbxLeapSeconds->setToolTip(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Apply leap seconds correction by adding the seconds to GPS timestamp", nullptr));
#endif // QT_CONFIG(tooltip)
        mCbxLeapSeconds->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Leap seconds", nullptr));
        mLblOffsetFromUtc->setText(QCoreApplication::translate("QgsGpsOptionsWidgetBase", "Offset from UTC", nullptr));
        mOffsetFromUtc->setSuffix(QCoreApplication::translate("QgsGpsOptionsWidgetBase", " seconds", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGpsOptionsWidgetBase: public Ui_QgsGpsOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGPSOPTIONSWIDGETBASE_H
