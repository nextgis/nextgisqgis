/********************************************************************************
** Form generated from reading UI file 'qgsauthsslimportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHSSLIMPORTDIALOG_H
#define UI_QGSAUTHSSLIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsslconfigwidget.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthSslTestDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblWarningIcon;
    QLabel *lblWarningText;
    QSplitter *splitter;
    QgsCollapsibleGroupBoxBasic *grpbxServer;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioServerImport;
    QFrame *frameServerImport;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *lblHttps;
    QLineEdit *leServer;
    QLabel *label;
    QgsSpinBox *spinbxPort;
    QToolButton *btnConnect;
    QFrame *line_2;
    QLabel *lblTimeout;
    QgsSpinBox *spinbxTimeout;
    QRadioButton *radioFileImport;
    QFrame *frameFileImport;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leCertPath;
    QToolButton *btnCertPath;
    QPlainTextEdit *pteSessionStatus;
    QgsAuthSslConfigWidget *wdgtSslConfig;
    QDialogButtonBox *buttonBox;
    QButtonGroup *btngrpImport;

    void setupUi(QDialog *QgsAuthSslTestDialog)
    {
        if (QgsAuthSslTestDialog->objectName().isEmpty())
            QgsAuthSslTestDialog->setObjectName(QString::fromUtf8("QgsAuthSslTestDialog"));
        QgsAuthSslTestDialog->resize(617, 710);
        verticalLayout = new QVBoxLayout(QgsAuthSslTestDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblWarningIcon = new QLabel(QgsAuthSslTestDialog);
        lblWarningIcon->setObjectName(QString::fromUtf8("lblWarningIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblWarningIcon->sizePolicy().hasHeightForWidth());
        lblWarningIcon->setSizePolicy(sizePolicy);
        lblWarningIcon->setMinimumSize(QSize(48, 48));
        lblWarningIcon->setMaximumSize(QSize(48, 48));

        horizontalLayout_3->addWidget(lblWarningIcon);

        lblWarningText = new QLabel(QgsAuthSslTestDialog);
        lblWarningText->setObjectName(QString::fromUtf8("lblWarningText"));
        lblWarningText->setWordWrap(true);

        horizontalLayout_3->addWidget(lblWarningText);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter = new QSplitter(QgsAuthSslTestDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        grpbxServer = new QgsCollapsibleGroupBoxBasic(splitter);
        grpbxServer->setObjectName(QString::fromUtf8("grpbxServer"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(grpbxServer->sizePolicy().hasHeightForWidth());
        grpbxServer->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(grpbxServer);
#ifndef Q_OS_MAC
        verticalLayout_3->setSpacing(6);
#endif
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioServerImport = new QRadioButton(grpbxServer);
        btngrpImport = new QButtonGroup(QgsAuthSslTestDialog);
        btngrpImport->setObjectName(QString::fromUtf8("btngrpImport"));
        btngrpImport->addButton(radioServerImport);
        radioServerImport->setObjectName(QString::fromUtf8("radioServerImport"));

        verticalLayout_3->addWidget(radioServerImport);

        frameServerImport = new QFrame(grpbxServer);
        frameServerImport->setObjectName(QString::fromUtf8("frameServerImport"));
        horizontalLayout_5 = new QHBoxLayout(frameServerImport);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblHttps = new QLabel(frameServerImport);
        lblHttps->setObjectName(QString::fromUtf8("lblHttps"));

        horizontalLayout->addWidget(lblHttps);

        leServer = new QLineEdit(frameServerImport);
        leServer->setObjectName(QString::fromUtf8("leServer"));
        leServer->setMinimumSize(QSize(175, 0));

        horizontalLayout->addWidget(leServer);

        label = new QLabel(frameServerImport);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinbxPort = new QgsSpinBox(frameServerImport);
        spinbxPort->setObjectName(QString::fromUtf8("spinbxPort"));
        spinbxPort->setMaximum(50000);
        spinbxPort->setValue(443);

        horizontalLayout->addWidget(spinbxPort);


        horizontalLayout_5->addLayout(horizontalLayout);

        btnConnect = new QToolButton(frameServerImport);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        QFont font;
        font.setPointSize(8);
        btnConnect->setFont(font);

        horizontalLayout_5->addWidget(btnConnect);

        line_2 = new QFrame(frameServerImport);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        lblTimeout = new QLabel(frameServerImport);
        lblTimeout->setObjectName(QString::fromUtf8("lblTimeout"));
        lblTimeout->setFont(font);

        horizontalLayout_5->addWidget(lblTimeout);

        spinbxTimeout = new QgsSpinBox(frameServerImport);
        spinbxTimeout->setObjectName(QString::fromUtf8("spinbxTimeout"));
        spinbxTimeout->setFont(font);
        spinbxTimeout->setMinimum(5);
        spinbxTimeout->setMaximum(90);
        spinbxTimeout->setValue(15);

        horizontalLayout_5->addWidget(spinbxTimeout);


        verticalLayout_3->addWidget(frameServerImport);

        radioFileImport = new QRadioButton(grpbxServer);
        btngrpImport->addButton(radioFileImport);
        radioFileImport->setObjectName(QString::fromUtf8("radioFileImport"));

        verticalLayout_3->addWidget(radioFileImport);

        frameFileImport = new QFrame(grpbxServer);
        frameFileImport->setObjectName(QString::fromUtf8("frameFileImport"));
        horizontalLayout_2 = new QHBoxLayout(frameFileImport);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leCertPath = new QLineEdit(frameFileImport);
        leCertPath->setObjectName(QString::fromUtf8("leCertPath"));
        leCertPath->setReadOnly(true);

        horizontalLayout_2->addWidget(leCertPath);

        btnCertPath = new QToolButton(frameFileImport);
        btnCertPath->setObjectName(QString::fromUtf8("btnCertPath"));
        btnCertPath->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_2->addWidget(btnCertPath);


        verticalLayout_3->addWidget(frameFileImport);

        pteSessionStatus = new QPlainTextEdit(grpbxServer);
        pteSessionStatus->setObjectName(QString::fromUtf8("pteSessionStatus"));
        pteSessionStatus->setMinimumSize(QSize(0, 50));

        verticalLayout_3->addWidget(pteSessionStatus);

        splitter->addWidget(grpbxServer);
        wdgtSslConfig = new QgsAuthSslConfigWidget(splitter);
        wdgtSslConfig->setObjectName(QString::fromUtf8("wdgtSslConfig"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(5);
        sizePolicy2.setHeightForWidth(wdgtSslConfig->sizePolicy().hasHeightForWidth());
        wdgtSslConfig->setSizePolicy(sizePolicy2);
        splitter->addWidget(wdgtSslConfig);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(QgsAuthSslTestDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(radioServerImport, leServer);
        QWidget::setTabOrder(leServer, spinbxPort);
        QWidget::setTabOrder(spinbxPort, btnConnect);
        QWidget::setTabOrder(btnConnect, spinbxTimeout);
        QWidget::setTabOrder(spinbxTimeout, radioFileImport);
        QWidget::setTabOrder(radioFileImport, leCertPath);
        QWidget::setTabOrder(leCertPath, btnCertPath);
        QWidget::setTabOrder(btnCertPath, pteSessionStatus);

        retranslateUi(QgsAuthSslTestDialog);

        QMetaObject::connectSlotsByName(QgsAuthSslTestDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthSslTestDialog)
    {
        QgsAuthSslTestDialog->setWindowTitle(QCoreApplication::translate("QgsAuthSslTestDialog", "Custom Certificate Configuration", nullptr));
        lblWarningIcon->setText(QString());
        lblWarningText->setText(QCoreApplication::translate("QgsAuthSslTestDialog", "<html><head/><body><p>Save a custom SSL server configuration, importing certificate from server or file. WARNING: Only save configurations when necessary.</p></body></html>", nullptr));
        grpbxServer->setTitle(QCoreApplication::translate("QgsAuthSslTestDialog", "Import Certificate", nullptr));
        radioServerImport->setText(QCoreApplication::translate("QgsAuthSslTestDialog", "From server", nullptr));
        lblHttps->setText(QCoreApplication::translate("QgsAuthSslTestDialog", "https://", nullptr));
        leServer->setPlaceholderText(QCoreApplication::translate("QgsAuthSslTestDialog", "www.example.com", nullptr));
        label->setText(QCoreApplication::translate("QgsAuthSslTestDialog", ":", nullptr));
        btnConnect->setText(QCoreApplication::translate("QgsAuthSslTestDialog", "Connect", nullptr));
        lblTimeout->setText(QCoreApplication::translate("QgsAuthSslTestDialog", "Timeout", nullptr));
        spinbxTimeout->setSuffix(QCoreApplication::translate("QgsAuthSslTestDialog", " sec", nullptr));
        radioFileImport->setText(QCoreApplication::translate("QgsAuthSslTestDialog", "From file", nullptr));
        leCertPath->setPlaceholderText(QCoreApplication::translate("QgsAuthSslTestDialog", "PEM/DER formatted file", nullptr));
        btnCertPath->setText(QCoreApplication::translate("QgsAuthSslTestDialog", "\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthSslTestDialog: public Ui_QgsAuthSslTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHSSLIMPORTDIALOG_H
