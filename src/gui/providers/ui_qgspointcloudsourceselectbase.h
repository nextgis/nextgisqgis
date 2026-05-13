/********************************************************************************
** Form generated from reading UI file 'qgspointcloudsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDSOURCESELECTBASE_H
#define UI_QGSPOINTCLOUDSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsettingswidget.h"
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudSourceSelectBase
{
public:
    QGridLayout *gridLayout;
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
    QLabel *mAuthWarning;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettingsProtocol;
    QDialogButtonBox *buttonBox;
    QGroupBox *srcGroupBox;
    QHBoxLayout *horizontalLayout1_2;
    QRadioButton *mRadioSrcFile;
    QRadioButton *mRadioSrcProtocol;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *fileGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsFileWidget *mFileWidget;

    void setupUi(QDialog *QgsPointCloudSourceSelectBase)
    {
        if (QgsPointCloudSourceSelectBase->objectName().isEmpty())
            QgsPointCloudSourceSelectBase->setObjectName(QString::fromUtf8("QgsPointCloudSourceSelectBase"));
        QgsPointCloudSourceSelectBase->resize(584, 495);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsPointCloudSourceSelectBase->setWindowIcon(icon);
        QgsPointCloudSourceSelectBase->setSizeGripEnabled(true);
        QgsPointCloudSourceSelectBase->setModal(true);
        gridLayout = new QGridLayout(QgsPointCloudSourceSelectBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        protocolGroupBox = new QGroupBox(QgsPointCloudSourceSelectBase);
        protocolGroupBox->setObjectName(QString::fromUtf8("protocolGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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

        mAuthWarning = new QLabel(protocolGroupBox);
        mAuthWarning->setObjectName(QString::fromUtf8("mAuthWarning"));
        mAuthWarning->setWordWrap(true);
        mAuthWarning->setOpenExternalLinks(true);

        gridLayout_21->addWidget(mAuthWarning, 4, 0, 1, 2);

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


        gridLayout->addWidget(protocolGroupBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsPointCloudSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);

        srcGroupBox = new QGroupBox(QgsPointCloudSourceSelectBase);
        srcGroupBox->setObjectName(QString::fromUtf8("srcGroupBox"));
        sizePolicy.setHeightForWidth(srcGroupBox->sizePolicy().hasHeightForWidth());
        srcGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout1_2 = new QHBoxLayout(srcGroupBox);
        horizontalLayout1_2->setSpacing(6);
        horizontalLayout1_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout1_2->setObjectName(QString::fromUtf8("horizontalLayout1_2"));
        mRadioSrcFile = new QRadioButton(srcGroupBox);
        mRadioSrcFile->setObjectName(QString::fromUtf8("mRadioSrcFile"));
        mRadioSrcFile->setChecked(true);

        horizontalLayout1_2->addWidget(mRadioSrcFile);

        mRadioSrcProtocol = new QRadioButton(srcGroupBox);
        mRadioSrcProtocol->setObjectName(QString::fromUtf8("mRadioSrcProtocol"));

        horizontalLayout1_2->addWidget(mRadioSrcProtocol);

        horizontalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1_2->addItem(horizontalSpacer_2);


        gridLayout->addWidget(srcGroupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        fileGroupBox = new QGroupBox(QgsPointCloudSourceSelectBase);
        fileGroupBox->setObjectName(QString::fromUtf8("fileGroupBox"));
        sizePolicy.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(fileGroupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(fileGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mFileWidget = new QgsFileWidget(fileGroupBox);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        horizontalLayout->addWidget(mFileWidget);


        gridLayout->addWidget(fileGroupBox, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        labelProtocolURI->setBuddy(protocolURI);
        labelBucket->setBuddy(mBucket);
        labelKey->setBuddy(mKey);
#endif // QT_CONFIG(shortcut)

        retranslateUi(QgsPointCloudSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsPointCloudSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPointCloudSourceSelectBase)
    {
        QgsPointCloudSourceSelectBase->setWindowTitle(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Add Point Cloud Layer(s)", nullptr));
        protocolGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Protocol", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Type", nullptr));
        labelProtocolURI->setText(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "&URI", nullptr));
        labelBucket->setText(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Bucket or container", nullptr));
        labelKey->setText(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Object key", nullptr));
        mAuthWarning->setText(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "\342\200\246", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Authentication", nullptr));
        srcGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Source Type", nullptr));
        mRadioSrcFile->setText(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "F&ile", nullptr));
        mRadioSrcProtocol->setText(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Protoco&l: HTTP(S), cloud, etc.", nullptr));
        fileGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Source", nullptr));
        label->setText(QCoreApplication::translate("QgsPointCloudSourceSelectBase", "Point cloud dataset(s)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudSourceSelectBase: public Ui_QgsPointCloudSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDSOURCESELECTBASE_H
