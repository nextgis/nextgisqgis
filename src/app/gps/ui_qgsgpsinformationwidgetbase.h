/********************************************************************************
** Form generated from reading UI file 'qgsgpsinformationwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGPSINFORMATIONWIDGETBASE_H
#define UI_QGSGPSINFORMATIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgspanelwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGpsInformationWidgetBase
{
public:
    QGridLayout *gridLayout_4;
    QStackedWidget *mStackedWidget;
    QWidget *stackedWidgetPage1;
    QGridLayout *gridLayout_11;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_10;
    QLabel *mLblLongitude;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *mTxtDateTime;
    QLabel *mLblDirection;
    QSpacerItem *verticalSpacer_3;
    QLabel *mLblVdop;
    QLabel *mLblHacc;
    QLineEdit *mTxtHacc;
    QLineEdit *mTxtSpeed;
    QLabel *mLblSatellitesUsed_4;
    QLineEdit *mTxtPdop;
    QLineEdit *mTxtVdop;
    QLabel *mLblStatus;
    QLineEdit *mTxtLatitude;
    QLabel *mLblVacc;
    QLineEdit *mTxtDirection;
    QLineEdit *mTxtLongitude;
    QLabel *mLblSpeed;
    QLineEdit *mTxt3Dacc;
    QLabel *mLblSatellitesUsed;
    QLineEdit *mTxtFixMode;
    QLabel *mLblQuality;
    QLineEdit *mTxtQuality;
    QLineEdit *mTxtAltitudeDiff;
    QLabel *mLbl3Dacc;
    QLineEdit *mTxtVacc;
    QLabel *mLblSatellitesUsed_3;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_10;
    QLabel *mLblLatitude;
    QLineEdit *mTxtHdop;
    QLabel *mLblAltitude;
    QLabel *mLblFixType;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *mTxtDirectTrackLength;
    QLabel *mLblUtcTime;
    QLabel *mLblFixMode;
    QLineEdit *mTxtSatellitesUsed;
    QLineEdit *mTxtStatus;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *mTxtFixType;
    QLabel *mLblHdop;
    QLabel *mLblPdop;
    QLineEdit *mTxtAltitude;
    QLineEdit *mTxtTotalTrackLength;
    QLabel *mLblAltitude_3;
    QLineEdit *mTxtAltitudeEllipsoid;
    QWidget *stackedWidgetPage2;
    QWidget *stackedWidgetPage3;
    QWidget *stackedWidgetPage5;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *mGPSPlainTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mBtnPosition;
    QToolButton *mBtnSignal;
    QToolButton *mBtnSatellites;
    QToolButton *mBtnDebug;
    QToolButton *mBtnPopupOptions;
    QSpacerItem *horizontalSpacer;
    QLabel *mLblStatusIndicator;
    QPushButton *mConnectButton;

    void setupUi(QgsPanelWidget *QgsGpsInformationWidgetBase)
    {
        if (QgsGpsInformationWidgetBase->objectName().isEmpty())
            QgsGpsInformationWidgetBase->setObjectName(QString::fromUtf8("QgsGpsInformationWidgetBase"));
        QgsGpsInformationWidgetBase->resize(583, 837);
        gridLayout_4 = new QGridLayout(QgsGpsInformationWidgetBase);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(2);
        gridLayout_4->setContentsMargins(2, 2, 2, 2);
        mStackedWidget = new QStackedWidget(QgsGpsInformationWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        gridLayout_11 = new QGridLayout(stackedWidgetPage1);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(stackedWidgetPage1);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 579, 803));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(2, 2, 2, 2);
        mLblLongitude = new QLabel(scrollAreaWidgetContents_2);
        mLblLongitude->setObjectName(QString::fromUtf8("mLblLongitude"));

        gridLayout_10->addWidget(mLblLongitude, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_4, 11, 1, 1, 1);

        mTxtDateTime = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtDateTime->setObjectName(QString::fromUtf8("mTxtDateTime"));
        mTxtDateTime->setReadOnly(true);

        gridLayout_10->addWidget(mTxtDateTime, 7, 1, 1, 1);

        mLblDirection = new QLabel(scrollAreaWidgetContents_2);
        mLblDirection->setObjectName(QString::fromUtf8("mLblDirection"));

        gridLayout_10->addWidget(mLblDirection, 10, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_3, 18, 1, 1, 1);

        mLblVdop = new QLabel(scrollAreaWidgetContents_2);
        mLblVdop->setObjectName(QString::fromUtf8("mLblVdop"));

        gridLayout_10->addWidget(mLblVdop, 13, 0, 1, 1);

        mLblHacc = new QLabel(scrollAreaWidgetContents_2);
        mLblHacc->setObjectName(QString::fromUtf8("mLblHacc"));

        gridLayout_10->addWidget(mLblHacc, 15, 0, 1, 1);

        mTxtHacc = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtHacc->setObjectName(QString::fromUtf8("mTxtHacc"));

        gridLayout_10->addWidget(mTxtHacc, 15, 1, 1, 1);

        mTxtSpeed = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtSpeed->setObjectName(QString::fromUtf8("mTxtSpeed"));
        mTxtSpeed->setReadOnly(true);

        gridLayout_10->addWidget(mTxtSpeed, 9, 1, 1, 1);

        mLblSatellitesUsed_4 = new QLabel(scrollAreaWidgetContents_2);
        mLblSatellitesUsed_4->setObjectName(QString::fromUtf8("mLblSatellitesUsed_4"));

        gridLayout_10->addWidget(mLblSatellitesUsed_4, 26, 0, 1, 1);

        mTxtPdop = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtPdop->setObjectName(QString::fromUtf8("mTxtPdop"));
        mTxtPdop->setReadOnly(true);

        gridLayout_10->addWidget(mTxtPdop, 14, 1, 1, 1);

        mTxtVdop = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtVdop->setObjectName(QString::fromUtf8("mTxtVdop"));
        mTxtVdop->setReadOnly(true);

        gridLayout_10->addWidget(mTxtVdop, 13, 1, 1, 1);

        mLblStatus = new QLabel(scrollAreaWidgetContents_2);
        mLblStatus->setObjectName(QString::fromUtf8("mLblStatus"));

        gridLayout_10->addWidget(mLblStatus, 22, 0, 1, 1);

        mTxtLatitude = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtLatitude->setObjectName(QString::fromUtf8("mTxtLatitude"));
        mTxtLatitude->setReadOnly(true);

        gridLayout_10->addWidget(mTxtLatitude, 0, 1, 1, 1);

        mLblVacc = new QLabel(scrollAreaWidgetContents_2);
        mLblVacc->setObjectName(QString::fromUtf8("mLblVacc"));

        gridLayout_10->addWidget(mLblVacc, 16, 0, 1, 1);

        mTxtDirection = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtDirection->setObjectName(QString::fromUtf8("mTxtDirection"));
        mTxtDirection->setReadOnly(true);

        gridLayout_10->addWidget(mTxtDirection, 10, 1, 1, 1);

        mTxtLongitude = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtLongitude->setObjectName(QString::fromUtf8("mTxtLongitude"));
        mTxtLongitude->setReadOnly(true);

        gridLayout_10->addWidget(mTxtLongitude, 1, 1, 1, 1);

        mLblSpeed = new QLabel(scrollAreaWidgetContents_2);
        mLblSpeed->setObjectName(QString::fromUtf8("mLblSpeed"));

        gridLayout_10->addWidget(mLblSpeed, 9, 0, 1, 1);

        mTxt3Dacc = new QLineEdit(scrollAreaWidgetContents_2);
        mTxt3Dacc->setObjectName(QString::fromUtf8("mTxt3Dacc"));

        gridLayout_10->addWidget(mTxt3Dacc, 17, 1, 1, 1);

        mLblSatellitesUsed = new QLabel(scrollAreaWidgetContents_2);
        mLblSatellitesUsed->setObjectName(QString::fromUtf8("mLblSatellitesUsed"));

        gridLayout_10->addWidget(mLblSatellitesUsed, 23, 0, 1, 1);

        mTxtFixMode = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtFixMode->setObjectName(QString::fromUtf8("mTxtFixMode"));
        mTxtFixMode->setReadOnly(true);

        gridLayout_10->addWidget(mTxtFixMode, 19, 1, 1, 1);

        mLblQuality = new QLabel(scrollAreaWidgetContents_2);
        mLblQuality->setObjectName(QString::fromUtf8("mLblQuality"));

        gridLayout_10->addWidget(mLblQuality, 21, 0, 1, 1);

        mTxtQuality = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtQuality->setObjectName(QString::fromUtf8("mTxtQuality"));
        mTxtQuality->setReadOnly(true);

        gridLayout_10->addWidget(mTxtQuality, 21, 1, 1, 1);

        mTxtAltitudeDiff = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtAltitudeDiff->setObjectName(QString::fromUtf8("mTxtAltitudeDiff"));

        gridLayout_10->addWidget(mTxtAltitudeDiff, 4, 1, 1, 1);

        mLbl3Dacc = new QLabel(scrollAreaWidgetContents_2);
        mLbl3Dacc->setObjectName(QString::fromUtf8("mLbl3Dacc"));

        gridLayout_10->addWidget(mLbl3Dacc, 17, 0, 1, 1);

        mTxtVacc = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtVacc->setObjectName(QString::fromUtf8("mTxtVacc"));

        gridLayout_10->addWidget(mTxtVacc, 16, 1, 1, 1);

        mLblSatellitesUsed_3 = new QLabel(scrollAreaWidgetContents_2);
        mLblSatellitesUsed_3->setObjectName(QString::fromUtf8("mLblSatellitesUsed_3"));

        gridLayout_10->addWidget(mLblSatellitesUsed_3, 25, 0, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_10->addWidget(label_13, 4, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_10, 24, 1, 1, 1);

        mLblLatitude = new QLabel(scrollAreaWidgetContents_2);
        mLblLatitude->setObjectName(QString::fromUtf8("mLblLatitude"));

        gridLayout_10->addWidget(mLblLatitude, 0, 0, 1, 1);

        mTxtHdop = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtHdop->setObjectName(QString::fromUtf8("mTxtHdop"));
        mTxtHdop->setReadOnly(true);

        gridLayout_10->addWidget(mTxtHdop, 12, 1, 1, 1);

        mLblAltitude = new QLabel(scrollAreaWidgetContents_2);
        mLblAltitude->setObjectName(QString::fromUtf8("mLblAltitude"));

        gridLayout_10->addWidget(mLblAltitude, 2, 0, 1, 1);

        mLblFixType = new QLabel(scrollAreaWidgetContents_2);
        mLblFixType->setObjectName(QString::fromUtf8("mLblFixType"));

        gridLayout_10->addWidget(mLblFixType, 20, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_2, 6, 1, 1, 1);

        mTxtDirectTrackLength = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtDirectTrackLength->setObjectName(QString::fromUtf8("mTxtDirectTrackLength"));
        mTxtDirectTrackLength->setReadOnly(true);

        gridLayout_10->addWidget(mTxtDirectTrackLength, 26, 1, 1, 1);

        mLblUtcTime = new QLabel(scrollAreaWidgetContents_2);
        mLblUtcTime->setObjectName(QString::fromUtf8("mLblUtcTime"));

        gridLayout_10->addWidget(mLblUtcTime, 7, 0, 1, 1);

        mLblFixMode = new QLabel(scrollAreaWidgetContents_2);
        mLblFixMode->setObjectName(QString::fromUtf8("mLblFixMode"));

        gridLayout_10->addWidget(mLblFixMode, 19, 0, 1, 1);

        mTxtSatellitesUsed = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtSatellitesUsed->setObjectName(QString::fromUtf8("mTxtSatellitesUsed"));
        mTxtSatellitesUsed->setReadOnly(true);

        gridLayout_10->addWidget(mTxtSatellitesUsed, 23, 1, 1, 1);

        mTxtStatus = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtStatus->setObjectName(QString::fromUtf8("mTxtStatus"));
        mTxtStatus->setReadOnly(true);

        gridLayout_10->addWidget(mTxtStatus, 22, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_5, 8, 1, 1, 1);

        mTxtFixType = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtFixType->setObjectName(QString::fromUtf8("mTxtFixType"));
        mTxtFixType->setReadOnly(true);

        gridLayout_10->addWidget(mTxtFixType, 20, 1, 1, 1);

        mLblHdop = new QLabel(scrollAreaWidgetContents_2);
        mLblHdop->setObjectName(QString::fromUtf8("mLblHdop"));

        gridLayout_10->addWidget(mLblHdop, 12, 0, 1, 1);

        mLblPdop = new QLabel(scrollAreaWidgetContents_2);
        mLblPdop->setObjectName(QString::fromUtf8("mLblPdop"));

        gridLayout_10->addWidget(mLblPdop, 14, 0, 1, 1);

        mTxtAltitude = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtAltitude->setObjectName(QString::fromUtf8("mTxtAltitude"));
        mTxtAltitude->setReadOnly(true);

        gridLayout_10->addWidget(mTxtAltitude, 2, 1, 1, 1);

        mTxtTotalTrackLength = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtTotalTrackLength->setObjectName(QString::fromUtf8("mTxtTotalTrackLength"));
        mTxtTotalTrackLength->setReadOnly(true);

        gridLayout_10->addWidget(mTxtTotalTrackLength, 25, 1, 1, 1);

        mLblAltitude_3 = new QLabel(scrollAreaWidgetContents_2);
        mLblAltitude_3->setObjectName(QString::fromUtf8("mLblAltitude_3"));

        gridLayout_10->addWidget(mLblAltitude_3, 3, 0, 1, 1);

        mTxtAltitudeEllipsoid = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtAltitudeEllipsoid->setObjectName(QString::fromUtf8("mTxtAltitudeEllipsoid"));

        gridLayout_10->addWidget(mTxtAltitudeEllipsoid, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_10, 2, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_11->addWidget(scrollArea_2, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        mStackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QString::fromUtf8("stackedWidgetPage3"));
        mStackedWidget->addWidget(stackedWidgetPage3);
        stackedWidgetPage5 = new QWidget();
        stackedWidgetPage5->setObjectName(QString::fromUtf8("stackedWidgetPage5"));
        gridLayout_6 = new QGridLayout(stackedWidgetPage5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        mGPSPlainTextEdit = new QPlainTextEdit(stackedWidgetPage5);
        mGPSPlainTextEdit->setObjectName(QString::fromUtf8("mGPSPlainTextEdit"));
        mGPSPlainTextEdit->setAcceptDrops(false);
        mGPSPlainTextEdit->setUndoRedoEnabled(false);

        gridLayout_6->addWidget(mGPSPlainTextEdit, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage5);

        gridLayout_4->addWidget(mStackedWidget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mBtnPosition = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnPosition->setObjectName(QString::fromUtf8("mBtnPosition"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionPropertiesWidget.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnPosition->setIcon(icon);
        mBtnPosition->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnPosition);

        mBtnSignal = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnSignal->setObjectName(QString::fromUtf8("mBtnSignal"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/gpsicons/barchart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnSignal->setIcon(icon1);
        mBtnSignal->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnSignal);

        mBtnSatellites = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnSatellites->setObjectName(QString::fromUtf8("mBtnSatellites"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/gpsicons/polarchart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnSatellites->setIcon(icon2);
        mBtnSatellites->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnSatellites);

        mBtnDebug = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnDebug->setObjectName(QString::fromUtf8("mBtnDebug"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnDebug->setIcon(icon3);
        mBtnDebug->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnDebug);

        mBtnPopupOptions = new QToolButton(QgsGpsInformationWidgetBase);
        mBtnPopupOptions->setObjectName(QString::fromUtf8("mBtnPopupOptions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnPopupOptions->setIcon(icon4);
        mBtnPopupOptions->setAutoRaise(true);

        horizontalLayout_2->addWidget(mBtnPopupOptions);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mLblStatusIndicator = new QLabel(QgsGpsInformationWidgetBase);
        mLblStatusIndicator->setObjectName(QString::fromUtf8("mLblStatusIndicator"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLblStatusIndicator->sizePolicy().hasHeightForWidth());
        mLblStatusIndicator->setSizePolicy(sizePolicy);
        mLblStatusIndicator->setMinimumSize(QSize(42, 0));
        mLblStatusIndicator->setMaximumSize(QSize(42, 16777215));
        mLblStatusIndicator->setFrameShape(QFrame::Box);
        mLblStatusIndicator->setScaledContents(true);

        horizontalLayout_2->addWidget(mLblStatusIndicator);

        mConnectButton = new QPushButton(QgsGpsInformationWidgetBase);
        mConnectButton->setObjectName(QString::fromUtf8("mConnectButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mConnectButton->sizePolicy().hasHeightForWidth());
        mConnectButton->setSizePolicy(sizePolicy1);
        mConnectButton->setCheckable(true);

        horizontalLayout_2->addWidget(mConnectButton);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        QWidget::setTabOrder(mBtnPosition, mBtnSignal);
        QWidget::setTabOrder(mBtnSignal, mBtnSatellites);
        QWidget::setTabOrder(mBtnSatellites, mBtnDebug);
        QWidget::setTabOrder(mBtnDebug, mConnectButton);
        QWidget::setTabOrder(mConnectButton, mGPSPlainTextEdit);
        QWidget::setTabOrder(mGPSPlainTextEdit, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mTxtLatitude);
        QWidget::setTabOrder(mTxtLatitude, mTxtLongitude);
        QWidget::setTabOrder(mTxtLongitude, mTxtAltitude);
        QWidget::setTabOrder(mTxtAltitude, mTxtAltitudeEllipsoid);
        QWidget::setTabOrder(mTxtAltitudeEllipsoid, mTxtAltitudeDiff);
        QWidget::setTabOrder(mTxtAltitudeDiff, mTxtDateTime);
        QWidget::setTabOrder(mTxtDateTime, mTxtSpeed);
        QWidget::setTabOrder(mTxtSpeed, mTxtDirection);
        QWidget::setTabOrder(mTxtDirection, mTxtHdop);
        QWidget::setTabOrder(mTxtHdop, mTxtVdop);
        QWidget::setTabOrder(mTxtVdop, mTxtPdop);
        QWidget::setTabOrder(mTxtPdop, mTxtHacc);
        QWidget::setTabOrder(mTxtHacc, mTxtVacc);
        QWidget::setTabOrder(mTxtVacc, mTxt3Dacc);
        QWidget::setTabOrder(mTxt3Dacc, mTxtFixMode);
        QWidget::setTabOrder(mTxtFixMode, mTxtFixType);
        QWidget::setTabOrder(mTxtFixType, mTxtQuality);
        QWidget::setTabOrder(mTxtQuality, mTxtStatus);
        QWidget::setTabOrder(mTxtStatus, mTxtSatellitesUsed);
        QWidget::setTabOrder(mTxtSatellitesUsed, mTxtTotalTrackLength);
        QWidget::setTabOrder(mTxtTotalTrackLength, mTxtDirectTrackLength);
        QWidget::setTabOrder(mTxtDirectTrackLength, mBtnPopupOptions);

        retranslateUi(QgsGpsInformationWidgetBase);

        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsGpsInformationWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsGpsInformationWidgetBase)
    {
        QgsGpsInformationWidgetBase->setWindowTitle(QCoreApplication::translate("QgsGpsInformationWidgetBase", "GPS Connect", nullptr));
        mLblLongitude->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Longitude", nullptr));
#if QT_CONFIG(tooltip)
        mTxtDateTime->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Date/time of position fix", nullptr));
#endif // QT_CONFIG(tooltip)
        mTxtDateTime->setText(QString());
#if QT_CONFIG(tooltip)
        mLblDirection->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLblDirection->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Direction", nullptr));
        mLblVdop->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "VDOP", nullptr));
        mLblHacc->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "H accuracy", nullptr));
#if QT_CONFIG(tooltip)
        mTxtSpeed->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Speed over ground", nullptr));
#endif // QT_CONFIG(tooltip)
        mLblSatellitesUsed_4->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Distance from start of track", nullptr));
#if QT_CONFIG(tooltip)
        mTxtPdop->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Position Dilution of Precision", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTxtVdop->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Vertical Dilution of Precision", nullptr));
#endif // QT_CONFIG(tooltip)
        mLblStatus->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Status", nullptr));
#if QT_CONFIG(tooltip)
        mTxtLatitude->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Latitude of position fix (degrees)", nullptr));
#endif // QT_CONFIG(tooltip)
        mLblVacc->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "V accuracy", nullptr));
#if QT_CONFIG(tooltip)
        mTxtDirection->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Track direction (degrees)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTxtLongitude->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Longitude of position fix (degrees)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mLblSpeed->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLblSpeed->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Speed", nullptr));
        mLblSatellitesUsed->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Satellites", nullptr));
#if QT_CONFIG(tooltip)
        mTxtFixMode->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "GPS receiver configuration 2D/3D mode: Automatic or Manual", nullptr));
#endif // QT_CONFIG(tooltip)
        mLblQuality->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Quality", nullptr));
#if QT_CONFIG(tooltip)
        mTxtQuality->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Positioning quality indicator (NMEA GGA or comparable sentence)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTxtAltitudeDiff->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Difference between the WGS-84 Earth ellipsoid and mean-sea-level", nullptr));
#endif // QT_CONFIG(tooltip)
        mLbl3Dacc->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "3D accuracy", nullptr));
        mLblSatellitesUsed_3->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Total track length", nullptr));
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "<html><head/><body><p>Difference between WGS-84 earth ellipsoid and mean sea level.  -=geoid is below WGS-84 ellipsoid</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Geoidal separation", nullptr));
        mLblLatitude->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Latitude", nullptr));
#if QT_CONFIG(tooltip)
        mTxtHdop->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Horizontal Dilution of Precision", nullptr));
#endif // QT_CONFIG(tooltip)
        mLblAltitude->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Altitude (geoid)", nullptr));
        mLblFixType->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Dimensions", nullptr));
#if QT_CONFIG(tooltip)
        mTxtDirectTrackLength->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Direct distance from first vertex in GPS track to last vertex", nullptr));
#endif // QT_CONFIG(tooltip)
        mLblUtcTime->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Time of fix", nullptr));
        mLblFixMode->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Mode", nullptr));
#if QT_CONFIG(tooltip)
        mTxtSatellitesUsed->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Number of satellites used in the position fix", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTxtStatus->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Position fix status: Valid or Invalid", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTxtFixType->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Position fix dimensions: 2D, 3D or No fix", nullptr));
#endif // QT_CONFIG(tooltip)
        mLblHdop->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "HDOP", nullptr));
        mLblPdop->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "PDOP", nullptr));
#if QT_CONFIG(tooltip)
        mTxtAltitude->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Antenna altitude with respect to geoid (mean sea level)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTxtTotalTrackLength->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Total length of current GPS track", nullptr));
#endif // QT_CONFIG(tooltip)
        mLblAltitude_3->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Altitude (WGS 84 ellipsoid)", nullptr));
#if QT_CONFIG(tooltip)
        mTxtAltitudeEllipsoid->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Antenna altitude with respect to the WGS-84 Earth ellipsoid", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mBtnPosition->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Position", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnPosition->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mBtnSignal->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Signal", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnSignal->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mBtnSatellites->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Satellite", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnSatellites->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mBtnDebug->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Debug", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnDebug->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mBtnPopupOptions->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Options", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnPopupOptions->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mLblStatusIndicator->setToolTip(QCoreApplication::translate("QgsGpsInformationWidgetBase", "Quick status indicator:\n"
"green = good or 3D fix\n"
"yellow = good 2D fix\n"
"red = no fix or bad fix\n"
"gray = no data\n"
"\n"
"2D/3D depends on this information being available", nullptr));
#endif // QT_CONFIG(tooltip)
        mLblStatusIndicator->setText(QString());
        mConnectButton->setText(QCoreApplication::translate("QgsGpsInformationWidgetBase", "&Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGpsInformationWidgetBase: public Ui_QgsGpsInformationWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGPSINFORMATIONWIDGETBASE_H
