/********************************************************************************
** Form generated from reading UI file 'ngauthoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NGAUTHOPTIONS_H
#define UI_NGAUTHOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NGAuthOptions
{
public:
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBox_29;
    QLabel *avatar;
    QLabel *descriptionText;
    QGroupBox *authGroupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_23;
    QLabel *tokenEndpointLabel;
    QLineEdit *authEndpointEdit;
    QLineEdit *endpointEdit;
    QLabel *userInfoEndpoinLabel;
    QLineEdit *userInfoEndpointEdit;
    QLabel *enpointLabel;
    QLabel *typeLabel;
    QLabel *authEndpointLabel;
    QLineEdit *tokenEndpointEdit;
    QComboBox *authTypeSelector;
    QCheckBox *codeChallengeCheckBox;
    QLabel *codeChallengeLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *availableEndpointLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *defaultsButton;
    QPushButton *signinButton;
    QCheckBox *sendCrashes;
    QSpacerItem *verticalSpacer_13;

    void setupUi(QWidget *NGAuthOptions)
    {
        if (NGAuthOptions->objectName().isEmpty())
            NGAuthOptions->setObjectName(QString::fromUtf8("NGAuthOptions"));
        NGAuthOptions->resize(344, 490);
        verticalLayout_23 = new QVBoxLayout(NGAuthOptions);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        groupBox_29 = new QGroupBox(NGAuthOptions);
        groupBox_29->setObjectName(QString::fromUtf8("groupBox_29"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_29->sizePolicy().hasHeightForWidth());
        groupBox_29->setSizePolicy(sizePolicy);
        groupBox_29->setMinimumSize(QSize(0, 140));
        groupBox_29->setMaximumSize(QSize(16777215, 140));
        avatar = new QLabel(groupBox_29);
        avatar->setObjectName(QString::fromUtf8("avatar"));
        avatar->setGeometry(QRect(20, 40, 64, 64));
        descriptionText = new QLabel(groupBox_29);
        descriptionText->setObjectName(QString::fromUtf8("descriptionText"));
        descriptionText->setGeometry(QRect(110, 40, 311, 81));

        verticalLayout_23->addWidget(groupBox_29);

        authGroupBox = new QGroupBox(NGAuthOptions);
        authGroupBox->setObjectName(QString::fromUtf8("authGroupBox"));
        verticalLayout = new QVBoxLayout(authGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        tokenEndpointLabel = new QLabel(authGroupBox);
        tokenEndpointLabel->setObjectName(QString::fromUtf8("tokenEndpointLabel"));

        gridLayout_23->addWidget(tokenEndpointLabel, 3, 0, 1, 1);

        authEndpointEdit = new QLineEdit(authGroupBox);
        authEndpointEdit->setObjectName(QString::fromUtf8("authEndpointEdit"));
        authEndpointEdit->setInputMethodHints(Qt::ImhUrlCharactersOnly);

        gridLayout_23->addWidget(authEndpointEdit, 2, 1, 1, 1);

        endpointEdit = new QLineEdit(authGroupBox);
        endpointEdit->setObjectName(QString::fromUtf8("endpointEdit"));
        endpointEdit->setInputMethodHints(Qt::ImhUrlCharactersOnly);

        gridLayout_23->addWidget(endpointEdit, 1, 1, 1, 1);

        userInfoEndpoinLabel = new QLabel(authGroupBox);
        userInfoEndpoinLabel->setObjectName(QString::fromUtf8("userInfoEndpoinLabel"));

        gridLayout_23->addWidget(userInfoEndpoinLabel, 4, 0, 1, 1);

        userInfoEndpointEdit = new QLineEdit(authGroupBox);
        userInfoEndpointEdit->setObjectName(QString::fromUtf8("userInfoEndpointEdit"));
        userInfoEndpointEdit->setInputMethodHints(Qt::ImhUrlCharactersOnly);

        gridLayout_23->addWidget(userInfoEndpointEdit, 4, 1, 1, 1);

        enpointLabel = new QLabel(authGroupBox);
        enpointLabel->setObjectName(QString::fromUtf8("enpointLabel"));

        gridLayout_23->addWidget(enpointLabel, 1, 0, 1, 1);

        typeLabel = new QLabel(authGroupBox);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        gridLayout_23->addWidget(typeLabel, 0, 0, 1, 1);

        authEndpointLabel = new QLabel(authGroupBox);
        authEndpointLabel->setObjectName(QString::fromUtf8("authEndpointLabel"));

        gridLayout_23->addWidget(authEndpointLabel, 2, 0, 1, 1);

        tokenEndpointEdit = new QLineEdit(authGroupBox);
        tokenEndpointEdit->setObjectName(QString::fromUtf8("tokenEndpointEdit"));
        tokenEndpointEdit->setInputMethodHints(Qt::ImhUrlCharactersOnly);

        gridLayout_23->addWidget(tokenEndpointEdit, 3, 1, 1, 1);

        authTypeSelector = new QComboBox(authGroupBox);
        authTypeSelector->addItem(QString());
        authTypeSelector->addItem(QString());
        authTypeSelector->addItem(QString());
        authTypeSelector->addItem(QString());
        authTypeSelector->setObjectName(QString::fromUtf8("authTypeSelector"));

        gridLayout_23->addWidget(authTypeSelector, 0, 1, 1, 1);

        codeChallengeCheckBox = new QCheckBox(authGroupBox);
        codeChallengeCheckBox->setObjectName(QString::fromUtf8("codeChallengeCheckBox"));

        gridLayout_23->addWidget(codeChallengeCheckBox, 5, 1, 1, 1);

        codeChallengeLabel = new QLabel(authGroupBox);
        codeChallengeLabel->setObjectName(QString::fromUtf8("codeChallengeLabel"));

        gridLayout_23->addWidget(codeChallengeLabel, 5, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_23);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        availableEndpointLabel = new QLabel(authGroupBox);
        availableEndpointLabel->setObjectName(QString::fromUtf8("availableEndpointLabel"));

        horizontalLayout->addWidget(availableEndpointLabel);

        horizontalSpacer_2 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        defaultsButton = new QPushButton(authGroupBox);
        defaultsButton->setObjectName(QString::fromUtf8("defaultsButton"));

        horizontalLayout->addWidget(defaultsButton);

        signinButton = new QPushButton(authGroupBox);
        signinButton->setObjectName(QString::fromUtf8("signinButton"));

        horizontalLayout->addWidget(signinButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_23->addWidget(authGroupBox);

        sendCrashes = new QCheckBox(NGAuthOptions);
        sendCrashes->setObjectName(QString::fromUtf8("sendCrashes"));
        sendCrashes->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sendCrashes->sizePolicy().hasHeightForWidth());
        sendCrashes->setSizePolicy(sizePolicy1);

        verticalLayout_23->addWidget(sendCrashes);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_13);


        retranslateUi(NGAuthOptions);

        QMetaObject::connectSlotsByName(NGAuthOptions);
    } // setupUi

    void retranslateUi(QWidget *NGAuthOptions)
    {
        groupBox_29->setTitle(QCoreApplication::translate("NGAuthOptions", "User info", nullptr));
        avatar->setText(QString());
        descriptionText->setText(QCoreApplication::translate("NGAuthOptions", "Not authorized", nullptr));
        authGroupBox->setTitle(QCoreApplication::translate("NGAuthOptions", "Authorize options", nullptr));
        tokenEndpointLabel->setText(QCoreApplication::translate("NGAuthOptions", "Token endpoint", nullptr));
        userInfoEndpoinLabel->setText(QCoreApplication::translate("NGAuthOptions", "User info endpoint", nullptr));
        enpointLabel->setText(QCoreApplication::translate("NGAuthOptions", "Endpoint", nullptr));
        typeLabel->setText(QCoreApplication::translate("NGAuthOptions", "Type", nullptr));
        authEndpointLabel->setText(QCoreApplication::translate("NGAuthOptions", "Auth endpoint", nullptr));
        authTypeSelector->setItemText(0, QCoreApplication::translate("NGAuthOptions", "NextGIS ID", nullptr));
        authTypeSelector->setItemText(1, QCoreApplication::translate("NGAuthOptions", "Keycloak", nullptr));
        authTypeSelector->setItemText(2, QCoreApplication::translate("NGAuthOptions", "Custom", nullptr));
        authTypeSelector->setItemText(3, QCoreApplication::translate("NGAuthOptions", "Blitz", nullptr));

        codeChallengeCheckBox->setText(QString());
        codeChallengeLabel->setText(QCoreApplication::translate("NGAuthOptions", "Use code challenge", nullptr));
        availableEndpointLabel->setText(QCoreApplication::translate("NGAuthOptions", "Not available", nullptr));
        defaultsButton->setText(QCoreApplication::translate("NGAuthOptions", "Defaults", nullptr));
        signinButton->setText(QCoreApplication::translate("NGAuthOptions", "Sign in", nullptr));
        sendCrashes->setText(QCoreApplication::translate("NGAuthOptions", "Send crashes to NextGIS", nullptr));
        (void)NGAuthOptions;
    } // retranslateUi

};

namespace Ui {
    class NGAuthOptions: public Ui_NGAuthOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NGAUTHOPTIONS_H
