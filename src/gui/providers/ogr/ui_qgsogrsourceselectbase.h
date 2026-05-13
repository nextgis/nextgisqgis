/********************************************************************************
** Form generated from reading UI file 'qgsogrsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOGRSOURCESELECTBASE_H
#define UI_QGSOGRSOURCESELECTBASE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthsettingswidget.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOgrSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *srcGroupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioSrcFile;
    QRadioButton *radioSrcDirectory;
    QRadioButton *radioSrcDatabase;
    QRadioButton *radioSrcProtocol;
    QRadioButton *radioSrcOgcApi;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *cmbEncodings;
    QGroupBox *protocolGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *mKey;
    QComboBox *cmbProtocolTypes;
    QLabel *labelKey;
    QLineEdit *protocolURI;
    QLabel *labelBucket;
    QLineEdit *mBucket;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettingsProtocol;
    QLabel *label_2;
    QLabel *labelProtocolURI;
    QGroupBox *fileGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *labelDirectoryType;
    QComboBox *cmbDirectoryTypes;
    QLabel *labelSrcDataset;
    QgsFileWidget *mFileWidget;
    QGroupBox *dbGroupBox;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QComboBox *cmbDatabaseTypes;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QComboBox *cmbConnections;
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

    void setupUi(QDialog *QgsOgrSourceSelectBase)
    {
        if (QgsOgrSourceSelectBase->objectName().isEmpty())
            QgsOgrSourceSelectBase->setObjectName(QString::fromUtf8("QgsOgrSourceSelectBase"));
        QgsOgrSourceSelectBase->resize(545, 786);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsOgrSourceSelectBase->setWindowIcon(icon);
        QgsOgrSourceSelectBase->setModal(true);
        verticalLayout_4 = new QVBoxLayout(QgsOgrSourceSelectBase);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        srcGroupBox_2 = new QGroupBox(QgsOgrSourceSelectBase);
        srcGroupBox_2->setObjectName(QString::fromUtf8("srcGroupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(srcGroupBox_2->sizePolicy().hasHeightForWidth());
        srcGroupBox_2->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(srcGroupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioSrcFile = new QRadioButton(srcGroupBox_2);
        radioSrcFile->setObjectName(QString::fromUtf8("radioSrcFile"));

        horizontalLayout->addWidget(radioSrcFile);

        radioSrcDirectory = new QRadioButton(srcGroupBox_2);
        radioSrcDirectory->setObjectName(QString::fromUtf8("radioSrcDirectory"));

        horizontalLayout->addWidget(radioSrcDirectory);

        radioSrcDatabase = new QRadioButton(srcGroupBox_2);
        radioSrcDatabase->setObjectName(QString::fromUtf8("radioSrcDatabase"));

        horizontalLayout->addWidget(radioSrcDatabase);

        radioSrcProtocol = new QRadioButton(srcGroupBox_2);
        radioSrcProtocol->setObjectName(QString::fromUtf8("radioSrcProtocol"));

        horizontalLayout->addWidget(radioSrcProtocol);

        radioSrcOgcApi = new QRadioButton(srcGroupBox_2);
        radioSrcOgcApi->setObjectName(QString::fromUtf8("radioSrcOgcApi"));

        horizontalLayout->addWidget(radioSrcOgcApi);

        horizontalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(srcGroupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        cmbEncodings = new QComboBox(srcGroupBox_2);
        cmbEncodings->setObjectName(QString::fromUtf8("cmbEncodings"));
        cmbEncodings->setMinimumSize(QSize(341, 0));

        horizontalLayout_2->addWidget(cmbEncodings);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(srcGroupBox_2);

        protocolGroupBox = new QGroupBox(QgsOgrSourceSelectBase);
        protocolGroupBox->setObjectName(QString::fromUtf8("protocolGroupBox"));
        sizePolicy.setHeightForWidth(protocolGroupBox->sizePolicy().hasHeightForWidth());
        protocolGroupBox->setSizePolicy(sizePolicy);
        protocolGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(protocolGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mKey = new QLineEdit(protocolGroupBox);
        mKey->setObjectName(QString::fromUtf8("mKey"));

        gridLayout_2->addWidget(mKey, 3, 1, 1, 1);

        cmbProtocolTypes = new QComboBox(protocolGroupBox);
        cmbProtocolTypes->setObjectName(QString::fromUtf8("cmbProtocolTypes"));

        gridLayout_2->addWidget(cmbProtocolTypes, 0, 1, 1, 1);

        labelKey = new QLabel(protocolGroupBox);
        labelKey->setObjectName(QString::fromUtf8("labelKey"));

        gridLayout_2->addWidget(labelKey, 3, 0, 1, 1);

        protocolURI = new QLineEdit(protocolGroupBox);
        protocolURI->setObjectName(QString::fromUtf8("protocolURI"));

        gridLayout_2->addWidget(protocolURI, 1, 1, 1, 1);

        labelBucket = new QLabel(protocolGroupBox);
        labelBucket->setObjectName(QString::fromUtf8("labelBucket"));

        gridLayout_2->addWidget(labelBucket, 2, 0, 1, 1);

        mBucket = new QLineEdit(protocolGroupBox);
        mBucket->setObjectName(QString::fromUtf8("mBucket"));

        gridLayout_2->addWidget(mBucket, 2, 1, 1, 1);

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


        gridLayout_2->addWidget(mAuthGroupBox, 4, 0, 1, 2);

        label_2 = new QLabel(protocolGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        labelProtocolURI = new QLabel(protocolGroupBox);
        labelProtocolURI->setObjectName(QString::fromUtf8("labelProtocolURI"));

        gridLayout_2->addWidget(labelProtocolURI, 1, 0, 1, 1);


        verticalLayout_2->addWidget(protocolGroupBox);

        fileGroupBox = new QGroupBox(QgsOgrSourceSelectBase);
        fileGroupBox->setObjectName(QString::fromUtf8("fileGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy2);
        fileGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(fileGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelDirectoryType = new QLabel(fileGroupBox);
        labelDirectoryType->setObjectName(QString::fromUtf8("labelDirectoryType"));

        gridLayout_3->addWidget(labelDirectoryType, 0, 0, 1, 1);

        cmbDirectoryTypes = new QComboBox(fileGroupBox);
        cmbDirectoryTypes->setObjectName(QString::fromUtf8("cmbDirectoryTypes"));
        sizePolicy2.setHeightForWidth(cmbDirectoryTypes->sizePolicy().hasHeightForWidth());
        cmbDirectoryTypes->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(cmbDirectoryTypes, 0, 1, 1, 1);

        labelSrcDataset = new QLabel(fileGroupBox);
        labelSrcDataset->setObjectName(QString::fromUtf8("labelSrcDataset"));

        gridLayout_3->addWidget(labelSrcDataset, 1, 0, 1, 1);

        mFileWidget = new QgsFileWidget(fileGroupBox);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        gridLayout_3->addWidget(mFileWidget, 1, 1, 1, 1);


        verticalLayout_2->addWidget(fileGroupBox);

        dbGroupBox = new QGroupBox(QgsOgrSourceSelectBase);
        dbGroupBox->setObjectName(QString::fromUtf8("dbGroupBox"));
        sizePolicy2.setHeightForWidth(dbGroupBox->sizePolicy().hasHeightForWidth());
        dbGroupBox->setSizePolicy(sizePolicy2);
        dbGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_6 = new QGridLayout(dbGroupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_4 = new QLabel(dbGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        cmbDatabaseTypes = new QComboBox(dbGroupBox);
        cmbDatabaseTypes->setObjectName(QString::fromUtf8("cmbDatabaseTypes"));
        sizePolicy2.setHeightForWidth(cmbDatabaseTypes->sizePolicy().hasHeightForWidth());
        cmbDatabaseTypes->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(cmbDatabaseTypes, 0, 1, 1, 1);

        groupBox = new QGroupBox(dbGroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btnNew = new QPushButton(groupBox);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        gridLayout_4->addWidget(btnNew, 1, 0, 1, 1);

        btnEdit = new QPushButton(groupBox);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

        gridLayout_4->addWidget(btnEdit, 1, 1, 1, 1);

        btnDelete = new QPushButton(groupBox);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        gridLayout_4->addWidget(btnDelete, 1, 2, 1, 1);

        cmbConnections = new QComboBox(groupBox);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout_4->addWidget(cmbConnections, 0, 0, 1, 3);


        gridLayout_6->addWidget(groupBox, 1, 0, 1, 2);


        verticalLayout_2->addWidget(dbGroupBox);

        mCredentialOptionsGroupBox = new QgsCollapsibleGroupBox(QgsOgrSourceSelectBase);
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

        verticalLayout_2->addWidget(mCredentialOptionsGroupBox);

        scrollArea = new QgsScrollArea(QgsOgrSourceSelectBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollArea->setContentsMargins(0, 0, 0, 0);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 529, 77));
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

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout_4->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(QgsOgrSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        verticalLayout_4->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        labelKey->setBuddy(mKey);
        labelBucket->setBuddy(mBucket);
        labelProtocolURI->setBuddy(protocolURI);
        labelSrcDataset->setBuddy(mFileWidget);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(radioSrcFile, radioSrcDirectory);
        QWidget::setTabOrder(radioSrcDirectory, radioSrcDatabase);
        QWidget::setTabOrder(radioSrcDatabase, radioSrcProtocol);
        QWidget::setTabOrder(radioSrcProtocol, cmbEncodings);
        QWidget::setTabOrder(cmbEncodings, cmbProtocolTypes);
        QWidget::setTabOrder(cmbProtocolTypes, protocolURI);
        QWidget::setTabOrder(protocolURI, mBucket);
        QWidget::setTabOrder(mBucket, mKey);
        QWidget::setTabOrder(mKey, cmbDirectoryTypes);
        QWidget::setTabOrder(cmbDirectoryTypes, cmbDatabaseTypes);
        QWidget::setTabOrder(cmbDatabaseTypes, cmbConnections);
        QWidget::setTabOrder(cmbConnections, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);

        retranslateUi(QgsOgrSourceSelectBase);
        QObject::connect(radioSrcDatabase, SIGNAL(toggled(bool)), dbGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(QgsOgrSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOgrSourceSelectBase)
    {
        QgsOgrSourceSelectBase->setWindowTitle(QCoreApplication::translate("QgsOgrSourceSelectBase", "Add Vector Layer", nullptr));
        srcGroupBox_2->setTitle(QCoreApplication::translate("QgsOgrSourceSelectBase", "Source Type", nullptr));
        radioSrcFile->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "F&ile", nullptr));
        radioSrcDirectory->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "&Directory", nullptr));
        radioSrcDatabase->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Da&tabase", nullptr));
        radioSrcProtocol->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Protoco&l: HTTP(S), cloud, etc.", nullptr));
        radioSrcOgcApi->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "OGC API", nullptr));
        label_3->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Encoding", nullptr));
        protocolGroupBox->setTitle(QCoreApplication::translate("QgsOgrSourceSelectBase", "Protocol", nullptr));
        labelKey->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Object key", nullptr));
        labelBucket->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Bucket or container", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsOgrSourceSelectBase", "Authentication", nullptr));
        label_2->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Type", nullptr));
        labelProtocolURI->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "&URI", nullptr));
        fileGroupBox->setTitle(QCoreApplication::translate("QgsOgrSourceSelectBase", "Source", nullptr));
        labelDirectoryType->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Type", nullptr));
        labelSrcDataset->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Vector Dataset(s)", nullptr));
        dbGroupBox->setTitle(QCoreApplication::translate("QgsOgrSourceSelectBase", "Database", nullptr));
        label_4->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Type", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsOgrSourceSelectBase", "Connections", nullptr));
        btnNew->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "New", nullptr));
        btnEdit->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Edit", nullptr));
        btnDelete->setText(QCoreApplication::translate("QgsOgrSourceSelectBase", "Delete", nullptr));
        mCredentialOptionsGroupBox->setTitle(QCoreApplication::translate("QgsOgrSourceSelectBase", "Credential Options", nullptr));
        mOpenOptionsGroupBox->setTitle(QCoreApplication::translate("QgsOgrSourceSelectBase", "Options", nullptr));
        mOpenOptionsLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsOgrSourceSelectBase: public Ui_QgsOgrSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOGRSOURCESELECTBASE_H
