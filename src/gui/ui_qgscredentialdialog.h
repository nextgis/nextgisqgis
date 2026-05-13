/********************************************************************************
** Form generated from reading UI file 'qgscredentialdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCREDENTIALDIALOG_H
#define UI_QGSCREDENTIALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspasswordlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCredentialDialog
{
public:
    QFormLayout *formLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLabel *labelRealm;
    QLabel *label;
    QLineEdit *leUsername;
    QLabel *label_2;
    QgsPasswordLineEdit *lePassword;
    QLabel *labelMessage;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblPasswordTitle;
    QVBoxLayout *verticalLayout_2;
    QgsPasswordLineEdit *leMasterPass;
    QgsPasswordLineEdit *leMasterPassVerify;
    QCheckBox *chkbxPasswordHelperEnable;
    QLabel *lblDontForget;
    QLabel *lblSavedForSession;
    QGroupBox *grpbxPassAttempts;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *chkbxEraseAuthDb;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mOkButton;
    QToolButton *mIgnoreButton;
    QPushButton *mCancelButton;

    void setupUi(QDialog *QgsCredentialDialog)
    {
        if (QgsCredentialDialog->objectName().isEmpty())
            QgsCredentialDialog->setObjectName(QString::fromUtf8("QgsCredentialDialog"));
        QgsCredentialDialog->resize(387, 293);
        formLayout = new QFormLayout(QgsCredentialDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        stackedWidget = new QStackedWidget(QgsCredentialDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        formLayout_2 = new QFormLayout(page);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        labelRealm = new QLabel(page);
        labelRealm->setObjectName(QString::fromUtf8("labelRealm"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelRealm);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        leUsername = new QLineEdit(page);
        leUsername->setObjectName(QString::fromUtf8("leUsername"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leUsername);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        lePassword = new QgsPasswordLineEdit(page);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lePassword);

        labelMessage = new QLabel(page);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, labelMessage);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblPasswordTitle = new QLabel(page_2);
        lblPasswordTitle->setObjectName(QString::fromUtf8("lblPasswordTitle"));
        lblPasswordTitle->setStyleSheet(QString::fromUtf8("QLabel{ font-weight: bold; }s"));

        verticalLayout->addWidget(lblPasswordTitle);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        leMasterPass = new QgsPasswordLineEdit(page_2);
        leMasterPass->setObjectName(QString::fromUtf8("leMasterPass"));
        leMasterPass->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(leMasterPass);

        leMasterPassVerify = new QgsPasswordLineEdit(page_2);
        leMasterPassVerify->setObjectName(QString::fromUtf8("leMasterPassVerify"));
        leMasterPassVerify->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(leMasterPassVerify);


        verticalLayout->addLayout(verticalLayout_2);

        chkbxPasswordHelperEnable = new QCheckBox(page_2);
        chkbxPasswordHelperEnable->setObjectName(QString::fromUtf8("chkbxPasswordHelperEnable"));

        verticalLayout->addWidget(chkbxPasswordHelperEnable);

        lblDontForget = new QLabel(page_2);
        lblDontForget->setObjectName(QString::fromUtf8("lblDontForget"));
        lblDontForget->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: rgb(128, 128, 128);\n"
"font-weight: bold;\n"
"}"));
        lblDontForget->setWordWrap(true);

        verticalLayout->addWidget(lblDontForget);

        lblSavedForSession = new QLabel(page_2);
        lblSavedForSession->setObjectName(QString::fromUtf8("lblSavedForSession"));
        lblSavedForSession->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: rgb(128, 128, 128);\n"
"font-style: italic;\n"
"}"));
        lblSavedForSession->setWordWrap(true);

        verticalLayout->addWidget(lblSavedForSession);

        grpbxPassAttempts = new QGroupBox(page_2);
        grpbxPassAttempts->setObjectName(QString::fromUtf8("grpbxPassAttempts"));
        verticalLayout_21 = new QVBoxLayout(grpbxPassAttempts);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(6, 6, 6, 6);
        chkbxEraseAuthDb = new QCheckBox(grpbxPassAttempts);
        chkbxEraseAuthDb->setObjectName(QString::fromUtf8("chkbxEraseAuthDb"));

        verticalLayout_21->addWidget(chkbxEraseAuthDb);


        verticalLayout->addWidget(grpbxPassAttempts);

        stackedWidget->addWidget(page_2);

        formLayout->setWidget(0, QFormLayout::LabelRole, stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mOkButton = new QPushButton(QgsCredentialDialog);
        mOkButton->setObjectName(QString::fromUtf8("mOkButton"));

        horizontalLayout->addWidget(mOkButton);

        mIgnoreButton = new QToolButton(QgsCredentialDialog);
        mIgnoreButton->setObjectName(QString::fromUtf8("mIgnoreButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mIgnoreButton->sizePolicy().hasHeightForWidth());
        mIgnoreButton->setSizePolicy(sizePolicy);
        mIgnoreButton->setFocusPolicy(Qt::StrongFocus);
        mIgnoreButton->setPopupMode(QToolButton::MenuButtonPopup);
        mIgnoreButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(mIgnoreButton);

        mCancelButton = new QPushButton(QgsCredentialDialog);
        mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));

        horizontalLayout->addWidget(mCancelButton);


        formLayout->setLayout(1, QFormLayout::SpanningRole, horizontalLayout);

        QWidget::setTabOrder(leUsername, lePassword);
        QWidget::setTabOrder(lePassword, leMasterPass);
        QWidget::setTabOrder(leMasterPass, leMasterPassVerify);
        QWidget::setTabOrder(leMasterPassVerify, chkbxPasswordHelperEnable);
        QWidget::setTabOrder(chkbxPasswordHelperEnable, chkbxEraseAuthDb);
        QWidget::setTabOrder(chkbxEraseAuthDb, mOkButton);
        QWidget::setTabOrder(mOkButton, mIgnoreButton);
        QWidget::setTabOrder(mIgnoreButton, mCancelButton);

        retranslateUi(QgsCredentialDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsCredentialDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsCredentialDialog)
    {
        QgsCredentialDialog->setWindowTitle(QCoreApplication::translate("QgsCredentialDialog", "Enter Credentials", nullptr));
        label_3->setText(QCoreApplication::translate("QgsCredentialDialog", "Realm", nullptr));
        labelRealm->setText(QCoreApplication::translate("QgsCredentialDialog", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("QgsCredentialDialog", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("QgsCredentialDialog", "Password", nullptr));
        labelMessage->setText(QCoreApplication::translate("QgsCredentialDialog", "TextLabel", nullptr));
        lblPasswordTitle->setText(QString());
        leMasterPassVerify->setPlaceholderText(QCoreApplication::translate("QgsCredentialDialog", "Verify password", nullptr));
        chkbxPasswordHelperEnable->setText(QCoreApplication::translate("QgsCredentialDialog", "Store master password in your password manager", nullptr));
        lblDontForget->setText(QCoreApplication::translate("QgsCredentialDialog", "Do not forget it:  NOT retrievable!", nullptr));
        lblSavedForSession->setText(QCoreApplication::translate("QgsCredentialDialog", "Saved for session, until app is quit.", nullptr));
        grpbxPassAttempts->setTitle(QCoreApplication::translate("QgsCredentialDialog", "Password attempts: #", nullptr));
        chkbxEraseAuthDb->setText(QCoreApplication::translate("QgsCredentialDialog", "Erase authentication database?", nullptr));
        mOkButton->setText(QCoreApplication::translate("QgsCredentialDialog", "Ok", nullptr));
#if QT_CONFIG(tooltip)
        mIgnoreButton->setToolTip(QCoreApplication::translate("QgsCredentialDialog", "All requests for this connection will be automatically rejected for the next 60 seconds", nullptr));
#endif // QT_CONFIG(tooltip)
        mIgnoreButton->setText(QCoreApplication::translate("QgsCredentialDialog", "Ignore", nullptr));
        mCancelButton->setText(QCoreApplication::translate("QgsCredentialDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsCredentialDialog: public Ui_QgsCredentialDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCREDENTIALDIALOG_H
