/********************************************************************************
** Form generated from reading UI file 'qgsgdalsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGDALSOURCESELECTBASE_H
#define UI_QGSGDALSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthsettingswidget.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGdalSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *srcGroupBox;
    QHBoxLayout *horizontalLayout1;
    QRadioButton *radioSrcFile;
    QRadioButton *radioSrcProtocol;
    QRadioButton *radioSrcOgcApi;
    QSpacerItem *horizontalSpacer;
    QGroupBox *fileGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *rasterDatasetLabel;
    QgsFileWidget *mFileWidget;
    QGroupBox *protocolGroupBox;
    QGridLayout *gridLayout_21;
    QComboBox *cmbProtocolTypes;
    QLabel *label_2;
    QLabel *labelProtocolURI;
    QLineEdit *protocolURI;
    QLabel *labelBucket;
    QLineEdit *mBucket;
    QLabel *labelKey;
    QLineEdit *mKey;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettingsProtocol;
    QgsCollapsibleGroupBox *mCredentialOptionsGroupBox;
    QVBoxLayout *openOptionsVBoxLayout_2;
    QFormLayout *mCredentialOptionsLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QgsCollapsibleGroupBox *mOpenOptionsGroupBox;
    QVBoxLayout *openOptionsVBoxLayout;
    QLabel *mOpenOptionsLabel;
    QFormLayout *mOpenOptionsLayout;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGdalSourceSelectBase)
    {
        if (QgsGdalSourceSelectBase->objectName().isEmpty())
            QgsGdalSourceSelectBase->setObjectName(QString::fromUtf8("QgsGdalSourceSelectBase"));
        QgsGdalSourceSelectBase->resize(878, 921);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsGdalSourceSelectBase->setWindowIcon(icon);
        QgsGdalSourceSelectBase->setSizeGripEnabled(true);
        QgsGdalSourceSelectBase->setModal(true);
        verticalLayout_4 = new QVBoxLayout(QgsGdalSourceSelectBase);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        srcGroupBox = new QGroupBox(QgsGdalSourceSelectBase);
        srcGroupBox->setObjectName(QString::fromUtf8("srcGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(srcGroupBox->sizePolicy().hasHeightForWidth());
        srcGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout1 = new QHBoxLayout(srcGroupBox);
        horizontalLayout1->setSpacing(6);
        horizontalLayout1->setContentsMargins(11, 11, 11, 11);
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        radioSrcFile = new QRadioButton(srcGroupBox);
        radioSrcFile->setObjectName(QString::fromUtf8("radioSrcFile"));

        horizontalLayout1->addWidget(radioSrcFile);

        radioSrcProtocol = new QRadioButton(srcGroupBox);
        radioSrcProtocol->setObjectName(QString::fromUtf8("radioSrcProtocol"));

        horizontalLayout1->addWidget(radioSrcProtocol);

        radioSrcOgcApi = new QRadioButton(srcGroupBox);
        radioSrcOgcApi->setObjectName(QString::fromUtf8("radioSrcOgcApi"));

        horizontalLayout1->addWidget(radioSrcOgcApi);

        horizontalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer);


        verticalLayout->addWidget(srcGroupBox);

        fileGroupBox = new QGroupBox(QgsGdalSourceSelectBase);
        fileGroupBox->setObjectName(QString::fromUtf8("fileGroupBox"));
        sizePolicy.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(fileGroupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rasterDatasetLabel = new QLabel(fileGroupBox);
        rasterDatasetLabel->setObjectName(QString::fromUtf8("rasterDatasetLabel"));

        horizontalLayout->addWidget(rasterDatasetLabel);

        mFileWidget = new QgsFileWidget(fileGroupBox);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        horizontalLayout->addWidget(mFileWidget);


        verticalLayout->addWidget(fileGroupBox);

        protocolGroupBox = new QGroupBox(QgsGdalSourceSelectBase);
        protocolGroupBox->setObjectName(QString::fromUtf8("protocolGroupBox"));
        sizePolicy.setHeightForWidth(protocolGroupBox->sizePolicy().hasHeightForWidth());
        protocolGroupBox->setSizePolicy(sizePolicy);
        protocolGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_21 = new QGridLayout(protocolGroupBox);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        cmbProtocolTypes = new QComboBox(protocolGroupBox);
        cmbProtocolTypes->setObjectName(QString::fromUtf8("cmbProtocolTypes"));

        gridLayout_21->addWidget(cmbProtocolTypes, 0, 1, 1, 1);

        label_2 = new QLabel(protocolGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_21->addWidget(label_2, 0, 0, 1, 1);

        labelProtocolURI = new QLabel(protocolGroupBox);
        labelProtocolURI->setObjectName(QString::fromUtf8("labelProtocolURI"));

        gridLayout_21->addWidget(labelProtocolURI, 1, 0, 1, 1);

        protocolURI = new QLineEdit(protocolGroupBox);
        protocolURI->setObjectName(QString::fromUtf8("protocolURI"));

        gridLayout_21->addWidget(protocolURI, 1, 1, 1, 1);

        labelBucket = new QLabel(protocolGroupBox);
        labelBucket->setObjectName(QString::fromUtf8("labelBucket"));

        gridLayout_21->addWidget(labelBucket, 2, 0, 1, 1);

        mBucket = new QLineEdit(protocolGroupBox);
        mBucket->setObjectName(QString::fromUtf8("mBucket"));

        gridLayout_21->addWidget(mBucket, 2, 1, 1, 1);

        labelKey = new QLabel(protocolGroupBox);
        labelKey->setObjectName(QString::fromUtf8("labelKey"));

        gridLayout_21->addWidget(labelKey, 3, 0, 1, 1);

        mKey = new QLineEdit(protocolGroupBox);
        mKey->setObjectName(QString::fromUtf8("mKey"));

        gridLayout_21->addWidget(mKey, 3, 1, 1, 1);

        mAuthGroupBox = new QGroupBox(protocolGroupBox);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettingsProtocol = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettingsProtocol->setObjectName(QString::fromUtf8("mAuthSettingsProtocol"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAuthSettingsProtocol->sizePolicy().hasHeightForWidth());
        mAuthSettingsProtocol->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(mAuthSettingsProtocol);


        gridLayout_21->addWidget(mAuthGroupBox, 5, 0, 1, 2);


        verticalLayout->addWidget(protocolGroupBox);

        mCredentialOptionsGroupBox = new QgsCollapsibleGroupBox(QgsGdalSourceSelectBase);
        mCredentialOptionsGroupBox->setObjectName(QString::fromUtf8("mCredentialOptionsGroupBox"));
        openOptionsVBoxLayout_2 = new QVBoxLayout(mCredentialOptionsGroupBox);
        openOptionsVBoxLayout_2->setSpacing(6);
        openOptionsVBoxLayout_2->setContentsMargins(11, 11, 11, 11);
        openOptionsVBoxLayout_2->setObjectName(QString::fromUtf8("openOptionsVBoxLayout_2"));
        mCredentialOptionsLayout = new QFormLayout();
        mCredentialOptionsLayout->setSpacing(6);
        mCredentialOptionsLayout->setObjectName(QString::fromUtf8("mCredentialOptionsLayout"));

        openOptionsVBoxLayout_2->addLayout(mCredentialOptionsLayout);

        openOptionsVBoxLayout_2->setStretch(0, 1);

        verticalLayout->addWidget(mCredentialOptionsGroupBox);

        scrollArea = new QgsScrollArea(QgsGdalSourceSelectBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 876, 246));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mOpenOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mOpenOptionsGroupBox->setObjectName(QString::fromUtf8("mOpenOptionsGroupBox"));
        openOptionsVBoxLayout = new QVBoxLayout(mOpenOptionsGroupBox);
        openOptionsVBoxLayout->setSpacing(6);
        openOptionsVBoxLayout->setContentsMargins(11, 11, 11, 11);
        openOptionsVBoxLayout->setObjectName(QString::fromUtf8("openOptionsVBoxLayout"));
        mOpenOptionsLabel = new QLabel(mOpenOptionsGroupBox);
        mOpenOptionsLabel->setObjectName(QString::fromUtf8("mOpenOptionsLabel"));

        openOptionsVBoxLayout->addWidget(mOpenOptionsLabel);

        mOpenOptionsLayout = new QFormLayout();
        mOpenOptionsLayout->setSpacing(6);
        mOpenOptionsLayout->setObjectName(QString::fromUtf8("mOpenOptionsLayout"));
        mOpenOptionsLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        openOptionsVBoxLayout->addLayout(mOpenOptionsLayout);


        verticalLayout_5->addWidget(mOpenOptionsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        verticalLayout_4->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(QgsGdalSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        verticalLayout_4->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        labelProtocolURI->setBuddy(protocolURI);
        labelBucket->setBuddy(mBucket);
        labelKey->setBuddy(mKey);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mOpenOptionsGroupBox, buttonBox);

        retranslateUi(QgsGdalSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsGdalSourceSelectBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGdalSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGdalSourceSelectBase)
    {
        QgsGdalSourceSelectBase->setWindowTitle(QCoreApplication::translate("QgsGdalSourceSelectBase", "Add Raster Layer(s)", nullptr));
        srcGroupBox->setTitle(QCoreApplication::translate("QgsGdalSourceSelectBase", "Source Type", nullptr));
        radioSrcFile->setText(QCoreApplication::translate("QgsGdalSourceSelectBase", "F&ile", nullptr));
        radioSrcProtocol->setText(QCoreApplication::translate("QgsGdalSourceSelectBase", "Protoco&l: HTTP(S), cloud, etc.", nullptr));
        radioSrcOgcApi->setText(QCoreApplication::translate("QgsGdalSourceSelectBase", "OGC API", nullptr));
        fileGroupBox->setTitle(QCoreApplication::translate("QgsGdalSourceSelectBase", "Source", nullptr));
        rasterDatasetLabel->setText(QCoreApplication::translate("QgsGdalSourceSelectBase", "Raster dataset(s)", nullptr));
        protocolGroupBox->setTitle(QCoreApplication::translate("QgsGdalSourceSelectBase", "Protocol", nullptr));
        label_2->setText(QCoreApplication::translate("QgsGdalSourceSelectBase", "Type", nullptr));
        labelProtocolURI->setText(QCoreApplication::translate("QgsGdalSourceSelectBase", "&URI", nullptr));
        labelBucket->setText(QCoreApplication::translate("QgsGdalSourceSelectBase", "Bucket or container", nullptr));
        labelKey->setText(QCoreApplication::translate("QgsGdalSourceSelectBase", "Object key", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsGdalSourceSelectBase", "Authentication", nullptr));
        mCredentialOptionsGroupBox->setProperty("title", QVariant(QCoreApplication::translate("QgsGdalSourceSelectBase", "Credential Options", nullptr)));
        mOpenOptionsGroupBox->setProperty("title", QVariant(QCoreApplication::translate("QgsGdalSourceSelectBase", "Options", nullptr)));
        mOpenOptionsLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsGdalSourceSelectBase: public Ui_QgsGdalSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGDALSOURCESELECTBASE_H
