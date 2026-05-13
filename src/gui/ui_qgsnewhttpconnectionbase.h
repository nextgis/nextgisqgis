/********************************************************************************
** Form generated from reading UI file 'qgsnewhttpconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWHTTPCONNECTIONBASE_H
#define UI_QGSNEWHTTPCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthsettingswidget.h"
#include "qgshttpheaderwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewHttpConnectionBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QLabel *TextLabel1_2;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout;
    QgsAuthSettingsWidget *mAuthSettings;
    QLabel *TextLabel1;
    QLineEdit *txtName;
    QLineEdit *txtUrl;
    QgsHttpHeaderWidget *mHttpHeaders;
    QPushButton *mTestConnectionButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mWmsOptionsGroupBox;
    QGridLayout *gridLayout_2;
    QComboBox *cmbDpiMode;
    QComboBox *cmbTilePixelRatio;
    QSpinBox *sbFeatureCount;
    QCheckBox *cbxWmsIgnoreAxisOrientation;
    QLabel *lblDpiMode;
    QCheckBox *cbxSmoothPixmapTransform;
    QLabel *lblFeatureCount;
    QCheckBox *cbxIgnoreGetFeatureInfoURI;
    QCheckBox *cbxWmsInvertAxisOrientation;
    QLabel *lblTilePixelRatio;
    QCheckBox *cbxWmsIgnoreReportedLayerExtents;
    QCheckBox *cbxIgnoreGetMapURI;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *mWfsOptionsGroupBox;
    QGridLayout *gridLayout1;
    QCheckBox *cbxWfsInvertAxisOrientation;
    QComboBox *cmbVersion;
    QComboBox *cmbFeaturePaging;
    QLineEdit *txtPageSize;
    QLabel *lblFeaturePaging;
    QLabel *lblMaxNumFeatures;
    QCheckBox *cbxWfsUseGml2EncodingForTransactions;
    QPushButton *mWfsVersionDetectButton;
    QLabel *lblVersion_2;
    QComboBox *mComboHttpMethod;
    QCheckBox *cbxWfsIgnoreAxisOrientation;
    QComboBox *mComboWfsFeatureMode;
    QLineEdit *txtMaxNumFeatures;
    QLabel *lblPageSize;
    QLabel *lblFeatureMode;
    QLabel *lblVersion;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewHttpConnectionBase)
    {
        if (QgsNewHttpConnectionBase->objectName().isEmpty())
            QgsNewHttpConnectionBase->setObjectName(QString::fromUtf8("QgsNewHttpConnectionBase"));
        QgsNewHttpConnectionBase->resize(880, 600);
        QgsNewHttpConnectionBase->setSizeGripEnabled(true);
        QgsNewHttpConnectionBase->setModal(true);
        verticalLayout_3 = new QVBoxLayout(QgsNewHttpConnectionBase);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QgsScrollArea(QgsNewHttpConnectionBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 920, 862));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextLabel1_2 = new QLabel(mGroupBox);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        TextLabel1_2->setWordWrap(true);
        TextLabel1_2->setMargin(5);

        gridLayout->addWidget(TextLabel1_2, 2, 0, 1, 1);

        mAuthGroupBox = new QGroupBox(mGroupBox);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout = new QVBoxLayout(mAuthGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAuthSettings->sizePolicy().hasHeightForWidth());
        mAuthSettings->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 6, 0, 1, 2);

        TextLabel1 = new QLabel(mGroupBox);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setMargin(5);

        gridLayout->addWidget(TextLabel1, 3, 0, 1, 1);

        txtName = new QLineEdit(mGroupBox);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setMinimumSize(QSize(0, 0));
        txtName->setFrame(true);

        gridLayout->addWidget(txtName, 2, 1, 1, 1);

        txtUrl = new QLineEdit(mGroupBox);
        txtUrl->setObjectName(QString::fromUtf8("txtUrl"));

        gridLayout->addWidget(txtUrl, 3, 1, 1, 1);

        mHttpHeaders = new QgsHttpHeaderWidget(mGroupBox);
        mHttpHeaders->setObjectName(QString::fromUtf8("mHttpHeaders"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mHttpHeaders->sizePolicy().hasHeightForWidth());
        mHttpHeaders->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHttpHeaders, 7, 0, 1, 2);

        mTestConnectionButton = new QPushButton(mGroupBox);
        mTestConnectionButton->setObjectName(QString::fromUtf8("mTestConnectionButton"));

        gridLayout->addWidget(mTestConnectionButton, 8, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 2);


        horizontalLayout->addWidget(mGroupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mWmsOptionsGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mWmsOptionsGroupBox->setObjectName(QString::fromUtf8("mWmsOptionsGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mWmsOptionsGroupBox->sizePolicy().hasHeightForWidth());
        mWmsOptionsGroupBox->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(mWmsOptionsGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cmbDpiMode = new QComboBox(mWmsOptionsGroupBox);
        cmbDpiMode->setObjectName(QString::fromUtf8("cmbDpiMode"));

        gridLayout_2->addWidget(cmbDpiMode, 0, 1, 1, 1);

        cmbTilePixelRatio = new QComboBox(mWmsOptionsGroupBox);
        cmbTilePixelRatio->setObjectName(QString::fromUtf8("cmbTilePixelRatio"));

        gridLayout_2->addWidget(cmbTilePixelRatio, 1, 1, 1, 1);

        sbFeatureCount = new QSpinBox(mWmsOptionsGroupBox);
        sbFeatureCount->setObjectName(QString::fromUtf8("sbFeatureCount"));
        sbFeatureCount->setMinimum(0);
        sbFeatureCount->setMaximum(1000);
        sbFeatureCount->setValue(10);

        gridLayout_2->addWidget(sbFeatureCount, 2, 1, 1, 1);

        cbxWmsIgnoreAxisOrientation = new QCheckBox(mWmsOptionsGroupBox);
        cbxWmsIgnoreAxisOrientation->setObjectName(QString::fromUtf8("cbxWmsIgnoreAxisOrientation"));

        gridLayout_2->addWidget(cbxWmsIgnoreAxisOrientation, 8, 0, 1, 2);

        lblDpiMode = new QLabel(mWmsOptionsGroupBox);
        lblDpiMode->setObjectName(QString::fromUtf8("lblDpiMode"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblDpiMode->sizePolicy().hasHeightForWidth());
        lblDpiMode->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(lblDpiMode, 0, 0, 1, 1);

        cbxSmoothPixmapTransform = new QCheckBox(mWmsOptionsGroupBox);
        cbxSmoothPixmapTransform->setObjectName(QString::fromUtf8("cbxSmoothPixmapTransform"));

        gridLayout_2->addWidget(cbxSmoothPixmapTransform, 13, 0, 1, 2);

        lblFeatureCount = new QLabel(mWmsOptionsGroupBox);
        lblFeatureCount->setObjectName(QString::fromUtf8("lblFeatureCount"));
        sizePolicy3.setHeightForWidth(lblFeatureCount->sizePolicy().hasHeightForWidth());
        lblFeatureCount->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(lblFeatureCount, 2, 0, 1, 1);

        cbxIgnoreGetFeatureInfoURI = new QCheckBox(mWmsOptionsGroupBox);
        cbxIgnoreGetFeatureInfoURI->setObjectName(QString::fromUtf8("cbxIgnoreGetFeatureInfoURI"));

        gridLayout_2->addWidget(cbxIgnoreGetFeatureInfoURI, 6, 0, 1, 2);

        cbxWmsInvertAxisOrientation = new QCheckBox(mWmsOptionsGroupBox);
        cbxWmsInvertAxisOrientation->setObjectName(QString::fromUtf8("cbxWmsInvertAxisOrientation"));

        gridLayout_2->addWidget(cbxWmsInvertAxisOrientation, 9, 0, 1, 2);

        lblTilePixelRatio = new QLabel(mWmsOptionsGroupBox);
        lblTilePixelRatio->setObjectName(QString::fromUtf8("lblTilePixelRatio"));
        sizePolicy3.setHeightForWidth(lblTilePixelRatio->sizePolicy().hasHeightForWidth());
        lblTilePixelRatio->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(lblTilePixelRatio, 1, 0, 1, 1);

        cbxWmsIgnoreReportedLayerExtents = new QCheckBox(mWmsOptionsGroupBox);
        cbxWmsIgnoreReportedLayerExtents->setObjectName(QString::fromUtf8("cbxWmsIgnoreReportedLayerExtents"));

        gridLayout_2->addWidget(cbxWmsIgnoreReportedLayerExtents, 7, 0, 1, 2);

        cbxIgnoreGetMapURI = new QCheckBox(mWmsOptionsGroupBox);
        cbxIgnoreGetMapURI->setObjectName(QString::fromUtf8("cbxIgnoreGetMapURI"));

        gridLayout_2->addWidget(cbxIgnoreGetMapURI, 5, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 14, 0, 1, 2);


        verticalLayout_2->addWidget(mWmsOptionsGroupBox);

        mWfsOptionsGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mWfsOptionsGroupBox->setObjectName(QString::fromUtf8("mWfsOptionsGroupBox"));
        sizePolicy2.setHeightForWidth(mWfsOptionsGroupBox->sizePolicy().hasHeightForWidth());
        mWfsOptionsGroupBox->setSizePolicy(sizePolicy2);
        gridLayout1 = new QGridLayout(mWfsOptionsGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        cbxWfsInvertAxisOrientation = new QCheckBox(mWfsOptionsGroupBox);
        cbxWfsInvertAxisOrientation->setObjectName(QString::fromUtf8("cbxWfsInvertAxisOrientation"));

        gridLayout1->addWidget(cbxWfsInvertAxisOrientation, 7, 0, 1, 3);

        cmbVersion = new QComboBox(mWfsOptionsGroupBox);
        cmbVersion->setObjectName(QString::fromUtf8("cmbVersion"));

        gridLayout1->addWidget(cmbVersion, 0, 1, 1, 1);

        cmbFeaturePaging = new QComboBox(mWfsOptionsGroupBox);
        cmbFeaturePaging->setObjectName(QString::fromUtf8("cmbFeaturePaging"));

        gridLayout1->addWidget(cmbFeaturePaging, 3, 1, 1, 2);

        txtPageSize = new QLineEdit(mWfsOptionsGroupBox);
        txtPageSize->setObjectName(QString::fromUtf8("txtPageSize"));

        gridLayout1->addWidget(txtPageSize, 4, 1, 1, 2);

        lblFeaturePaging = new QLabel(mWfsOptionsGroupBox);
        lblFeaturePaging->setObjectName(QString::fromUtf8("lblFeaturePaging"));
        sizePolicy3.setHeightForWidth(lblFeaturePaging->sizePolicy().hasHeightForWidth());
        lblFeaturePaging->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(lblFeaturePaging, 3, 0, 1, 1);

        lblMaxNumFeatures = new QLabel(mWfsOptionsGroupBox);
        lblMaxNumFeatures->setObjectName(QString::fromUtf8("lblMaxNumFeatures"));
        sizePolicy3.setHeightForWidth(lblMaxNumFeatures->sizePolicy().hasHeightForWidth());
        lblMaxNumFeatures->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(lblMaxNumFeatures, 2, 0, 1, 1);

        cbxWfsUseGml2EncodingForTransactions = new QCheckBox(mWfsOptionsGroupBox);
        cbxWfsUseGml2EncodingForTransactions->setObjectName(QString::fromUtf8("cbxWfsUseGml2EncodingForTransactions"));

        gridLayout1->addWidget(cbxWfsUseGml2EncodingForTransactions, 8, 0, 1, 1);

        mWfsVersionDetectButton = new QPushButton(mWfsOptionsGroupBox);
        mWfsVersionDetectButton->setObjectName(QString::fromUtf8("mWfsVersionDetectButton"));

        gridLayout1->addWidget(mWfsVersionDetectButton, 0, 2, 1, 1);

        lblVersion_2 = new QLabel(mWfsOptionsGroupBox);
        lblVersion_2->setObjectName(QString::fromUtf8("lblVersion_2"));
        sizePolicy3.setHeightForWidth(lblVersion_2->sizePolicy().hasHeightForWidth());
        lblVersion_2->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(lblVersion_2, 1, 0, 1, 1);

        mComboHttpMethod = new QComboBox(mWfsOptionsGroupBox);
        mComboHttpMethod->setObjectName(QString::fromUtf8("mComboHttpMethod"));

        gridLayout1->addWidget(mComboHttpMethod, 1, 1, 1, 2);

        cbxWfsIgnoreAxisOrientation = new QCheckBox(mWfsOptionsGroupBox);
        cbxWfsIgnoreAxisOrientation->setObjectName(QString::fromUtf8("cbxWfsIgnoreAxisOrientation"));

        gridLayout1->addWidget(cbxWfsIgnoreAxisOrientation, 6, 0, 1, 3);

        mComboWfsFeatureMode = new QComboBox(mWfsOptionsGroupBox);
        mComboWfsFeatureMode->setObjectName(QString::fromUtf8("mComboWfsFeatureMode"));

        gridLayout1->addWidget(mComboWfsFeatureMode, 5, 1, 1, 2);

        txtMaxNumFeatures = new QLineEdit(mWfsOptionsGroupBox);
        txtMaxNumFeatures->setObjectName(QString::fromUtf8("txtMaxNumFeatures"));

        gridLayout1->addWidget(txtMaxNumFeatures, 2, 1, 1, 2);

        lblPageSize = new QLabel(mWfsOptionsGroupBox);
        lblPageSize->setObjectName(QString::fromUtf8("lblPageSize"));
        sizePolicy3.setHeightForWidth(lblPageSize->sizePolicy().hasHeightForWidth());
        lblPageSize->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(lblPageSize, 4, 0, 1, 1);

        lblFeatureMode = new QLabel(mWfsOptionsGroupBox);
        lblFeatureMode->setObjectName(QString::fromUtf8("lblFeatureMode"));
        sizePolicy3.setHeightForWidth(lblFeatureMode->sizePolicy().hasHeightForWidth());
        lblFeatureMode->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(lblFeatureMode, 5, 0, 1, 1);

        lblVersion = new QLabel(mWfsOptionsGroupBox);
        lblVersion->setObjectName(QString::fromUtf8("lblVersion"));
        sizePolicy3.setHeightForWidth(lblVersion->sizePolicy().hasHeightForWidth());
        lblVersion->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(lblVersion, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(verticalSpacer_3, 9, 0, 1, 3);


        verticalLayout_2->addWidget(mWfsOptionsGroupBox);


        horizontalLayout->addLayout(verticalLayout_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(QgsNewHttpConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        lblDpiMode->setBuddy(cmbDpiMode);
        lblTilePixelRatio->setBuddy(cmbTilePixelRatio);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(cmbVersion, mWfsVersionDetectButton);
        QWidget::setTabOrder(mWfsVersionDetectButton, mComboHttpMethod);
        QWidget::setTabOrder(mComboHttpMethod, txtMaxNumFeatures);
        QWidget::setTabOrder(txtMaxNumFeatures, cmbFeaturePaging);
        QWidget::setTabOrder(cmbFeaturePaging, txtPageSize);
        QWidget::setTabOrder(txtPageSize, mComboWfsFeatureMode);
        QWidget::setTabOrder(mComboWfsFeatureMode, cbxWfsIgnoreAxisOrientation);
        QWidget::setTabOrder(cbxWfsIgnoreAxisOrientation, cbxWfsInvertAxisOrientation);
        QWidget::setTabOrder(cbxWfsInvertAxisOrientation, cmbDpiMode);
        QWidget::setTabOrder(cmbDpiMode, cmbTilePixelRatio);
        QWidget::setTabOrder(cmbTilePixelRatio, sbFeatureCount);
        QWidget::setTabOrder(sbFeatureCount, cbxIgnoreGetMapURI);
        QWidget::setTabOrder(cbxIgnoreGetMapURI, cbxIgnoreGetFeatureInfoURI);
        QWidget::setTabOrder(cbxIgnoreGetFeatureInfoURI, cbxWmsIgnoreReportedLayerExtents);
        QWidget::setTabOrder(cbxWmsIgnoreReportedLayerExtents, cbxWmsIgnoreAxisOrientation);
        QWidget::setTabOrder(cbxWmsIgnoreAxisOrientation, cbxWmsInvertAxisOrientation);
        QWidget::setTabOrder(cbxWmsInvertAxisOrientation, cbxSmoothPixmapTransform);
        QWidget::setTabOrder(cbxSmoothPixmapTransform, mTestConnectionButton);

        retranslateUi(QgsNewHttpConnectionBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewHttpConnectionBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewHttpConnectionBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewHttpConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewHttpConnectionBase)
    {
        QgsNewHttpConnectionBase->setWindowTitle(QCoreApplication::translate("QgsNewHttpConnectionBase", "Create a New Connection", nullptr));
        mGroupBox->setTitle(QCoreApplication::translate("QgsNewHttpConnectionBase", "Connection Details", nullptr));
        TextLabel1_2->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Name", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsNewHttpConnectionBase", "Authentication", nullptr));
        TextLabel1->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "URL", nullptr));
#if QT_CONFIG(tooltip)
        txtName->setToolTip(QCoreApplication::translate("QgsNewHttpConnectionBase", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        txtUrl->setToolTip(QCoreApplication::translate("QgsNewHttpConnectionBase", "HTTP address of the Web Map Server", nullptr));
#endif // QT_CONFIG(tooltip)
        mTestConnectionButton->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "&Test Connection", nullptr));
        mWmsOptionsGroupBox->setTitle(QCoreApplication::translate("QgsNewHttpConnectionBase", "WMS/WMTS Options", nullptr));
#if QT_CONFIG(tooltip)
        sbFeatureCount->setToolTip(QCoreApplication::translate("QgsNewHttpConnectionBase", "<html><head/><body><p>Specify a default value for FEATURE_COUNT when a new layer is created from this connection. </p><p>FEATURE_COUNT defines the maximum number of results returned by a GetFeatureInfo request, if not specified the server default value (usually 1) will be used.</p><p>Set to 0 to use server default: no FEATURE_COUNT parameter will be added to the request.</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sbFeatureCount->setSpecialValueText(QCoreApplication::translate("QgsNewHttpConnectionBase", "server default", nullptr));
        cbxWmsIgnoreAxisOrientation->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Ignore axis orientation (WMS 1.3/WMTS)", nullptr));
        lblDpiMode->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "WMS DPI-&Mode", nullptr));
        cbxSmoothPixmapTransform->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Smooth pixmap transform", nullptr));
        lblFeatureCount->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Maximum number of GetFeatureInfo results", nullptr));
        cbxIgnoreGetFeatureInfoURI->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Ignore GetFeatureInfo URI reported in capabilities", nullptr));
        cbxWmsInvertAxisOrientation->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Invert axis orientation", nullptr));
        lblTilePixelRatio->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "WMTS server-side tile pixel ratio", nullptr));
        cbxWmsIgnoreReportedLayerExtents->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Ignore reported layer extents", nullptr));
        cbxIgnoreGetMapURI->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Ignore GetMap/GetTile/GetLegendGraphic URI reported in capabilities", nullptr));
        mWfsOptionsGroupBox->setTitle(QCoreApplication::translate("QgsNewHttpConnectionBase", "WFS Options", nullptr));
        cbxWfsInvertAxisOrientation->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Invert axis orientation", nullptr));
#if QT_CONFIG(tooltip)
        txtPageSize->setToolTip(QCoreApplication::translate("QgsNewHttpConnectionBase", "<html><head/><body><p>Enter a number to limit the maximum number of features retrieved in a single GetFeature request when paging is enabled. If let to empty, server default will apply.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lblFeaturePaging->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Feature paging", nullptr));
        lblMaxNumFeatures->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Max. number of features", nullptr));
#if QT_CONFIG(tooltip)
        cbxWfsUseGml2EncodingForTransactions->setToolTip(QCoreApplication::translate("QgsNewHttpConnectionBase", "<html><head/><body><p>This might be necessary on some <span style=\" font-weight:600;\">broken</span> ESRI map servers when using WFS-T 1.1.0.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbxWfsUseGml2EncodingForTransactions->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Use GML2 encoding for transactions", nullptr));
        mWfsVersionDetectButton->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Detect", nullptr));
        lblVersion_2->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Preferred HTTP method", nullptr));
        cbxWfsIgnoreAxisOrientation->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Ignore axis orientation (WFS 1.1/WFS 2.0)", nullptr));
#if QT_CONFIG(tooltip)
        txtMaxNumFeatures->setToolTip(QCoreApplication::translate("QgsNewHttpConnectionBase", "<html><head/><body><p>Enter a number to limit the maximum number of features retrieved per feature request. If let to empty, no limit is set.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lblPageSize->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Page size", nullptr));
        lblFeatureMode->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "<html><head/><body><p>Feature mode<br/>(Simple vs Complex)</p></body></html>", nullptr));
        lblVersion->setText(QCoreApplication::translate("QgsNewHttpConnectionBase", "Version", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewHttpConnectionBase: public Ui_QgsNewHttpConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWHTTPCONNECTIONBASE_H
