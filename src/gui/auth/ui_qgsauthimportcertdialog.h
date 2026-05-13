/********************************************************************************
** Form generated from reading UI file 'qgsauthimportcertdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHIMPORTCERTDIALOG_H
#define UI_QGSAUTHIMPORTCERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthcerttrustpolicycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthImportCertDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpbxImportCert;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QFrame *frameImportFile;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leImportFile;
    QToolButton *btnImportFile;
    QLabel *lblMultiCerts;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *teCertText;
    QRadioButton *radioImportText;
    QRadioButton *radioImportFile;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblTrust;
    QgsAuthCertTrustPolicyComboBox *cmbbxTrust;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGroupBox *grpbxValidation;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *teValidation;
    QCheckBox *chkAllowInvalid;
    QDialogButtonBox *buttonBox;
    QButtonGroup *btngrpImport;

    void setupUi(QDialog *QgsAuthImportCertDialog)
    {
        if (QgsAuthImportCertDialog->objectName().isEmpty())
            QgsAuthImportCertDialog->setObjectName(QString::fromUtf8("QgsAuthImportCertDialog"));
        QgsAuthImportCertDialog->resize(400, 439);
        QgsAuthImportCertDialog->setMinimumSize(QSize(400, 400));
        verticalLayout = new QVBoxLayout(QgsAuthImportCertDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        grpbxImportCert = new QGroupBox(QgsAuthImportCertDialog);
        grpbxImportCert->setObjectName(QString::fromUtf8("grpbxImportCert"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(grpbxImportCert->sizePolicy().hasHeightForWidth());
        grpbxImportCert->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(grpbxImportCert);
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 10, -1, -1);
        frameImportFile = new QFrame(grpbxImportCert);
        frameImportFile->setObjectName(QString::fromUtf8("frameImportFile"));
        horizontalLayout = new QHBoxLayout(frameImportFile);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leImportFile = new QLineEdit(frameImportFile);
        leImportFile->setObjectName(QString::fromUtf8("leImportFile"));
        leImportFile->setReadOnly(true);

        horizontalLayout->addWidget(leImportFile);

        btnImportFile = new QToolButton(frameImportFile);
        btnImportFile->setObjectName(QString::fromUtf8("btnImportFile"));

        horizontalLayout->addWidget(btnImportFile);


        gridLayout->addWidget(frameImportFile, 1, 1, 1, 1);

        lblMultiCerts = new QLabel(grpbxImportCert);
        lblMultiCerts->setObjectName(QString::fromUtf8("lblMultiCerts"));
        QFont font;
        font.setItalic(true);
        lblMultiCerts->setFont(font);
        lblMultiCerts->setStyleSheet(QString::fromUtf8("color: rgb(128, 128, 128);"));
        lblMultiCerts->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblMultiCerts, 4, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        teCertText = new QPlainTextEdit(grpbxImportCert);
        teCertText->setObjectName(QString::fromUtf8("teCertText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(teCertText->sizePolicy().hasHeightForWidth());
        teCertText->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(teCertText, 3, 1, 1, 1);

        radioImportText = new QRadioButton(grpbxImportCert);
        btngrpImport = new QButtonGroup(QgsAuthImportCertDialog);
        btngrpImport->setObjectName(QString::fromUtf8("btngrpImport"));
        btngrpImport->addButton(radioImportText);
        radioImportText->setObjectName(QString::fromUtf8("radioImportText"));

        gridLayout->addWidget(radioImportText, 2, 0, 1, 2);

        radioImportFile = new QRadioButton(grpbxImportCert);
        btngrpImport->addButton(radioImportFile);
        radioImportFile->setObjectName(QString::fromUtf8("radioImportFile"));
        radioImportFile->setChecked(true);

        gridLayout->addWidget(radioImportFile, 0, 0, 1, 2);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblTrust = new QLabel(grpbxImportCert);
        lblTrust->setObjectName(QString::fromUtf8("lblTrust"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblTrust->sizePolicy().hasHeightForWidth());
        lblTrust->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(lblTrust);

        cmbbxTrust = new QgsAuthCertTrustPolicyComboBox(grpbxImportCert);
        cmbbxTrust->setObjectName(QString::fromUtf8("cmbbxTrust"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmbbxTrust->sizePolicy().hasHeightForWidth());
        cmbbxTrust->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(cmbbxTrust);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(grpbxImportCert);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        grpbxValidation = new QGroupBox(QgsAuthImportCertDialog);
        grpbxValidation->setObjectName(QString::fromUtf8("grpbxValidation"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(grpbxValidation->sizePolicy().hasHeightForWidth());
        grpbxValidation->setSizePolicy(sizePolicy4);
        verticalLayout_3 = new QVBoxLayout(grpbxValidation);
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        teValidation = new QTextEdit(grpbxValidation);
        teValidation->setObjectName(QString::fromUtf8("teValidation"));
        teValidation->setMaximumSize(QSize(16777215, 60));
        teValidation->setReadOnly(true);

        verticalLayout_3->addWidget(teValidation);

        chkAllowInvalid = new QCheckBox(grpbxValidation);
        chkAllowInvalid->setObjectName(QString::fromUtf8("chkAllowInvalid"));

        verticalLayout_3->addWidget(chkAllowInvalid);


        verticalLayout->addWidget(grpbxValidation);

        buttonBox = new QDialogButtonBox(QgsAuthImportCertDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(radioImportFile, leImportFile);
        QWidget::setTabOrder(leImportFile, btnImportFile);
        QWidget::setTabOrder(btnImportFile, radioImportText);
        QWidget::setTabOrder(radioImportText, teCertText);
        QWidget::setTabOrder(teCertText, cmbbxTrust);
        QWidget::setTabOrder(cmbbxTrust, teValidation);
        QWidget::setTabOrder(teValidation, chkAllowInvalid);

        retranslateUi(QgsAuthImportCertDialog);

        QMetaObject::connectSlotsByName(QgsAuthImportCertDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthImportCertDialog)
    {
        QgsAuthImportCertDialog->setWindowTitle(QCoreApplication::translate("QgsAuthImportCertDialog", "Import Certificate(s)", nullptr));
        grpbxImportCert->setTitle(QCoreApplication::translate("QgsAuthImportCertDialog", "Import Certificate(s)", nullptr));
        leImportFile->setPlaceholderText(QCoreApplication::translate("QgsAuthImportCertDialog", "PEM/DER-formatted ", nullptr));
        btnImportFile->setText(QCoreApplication::translate("QgsAuthImportCertDialog", "\342\200\246", nullptr));
        lblMultiCerts->setText(QCoreApplication::translate("QgsAuthImportCertDialog", "Import(s) can contain multiple certificates", nullptr));
        radioImportText->setText(QCoreApplication::translate("QgsAuthImportCertDialog", "PEM text", nullptr));
        radioImportFile->setText(QCoreApplication::translate("QgsAuthImportCertDialog", "File", nullptr));
        lblTrust->setText(QCoreApplication::translate("QgsAuthImportCertDialog", "Trust policy", nullptr));
        grpbxValidation->setTitle(QCoreApplication::translate("QgsAuthImportCertDialog", "Validation Results", nullptr));
        chkAllowInvalid->setText(QCoreApplication::translate("QgsAuthImportCertDialog", "Allow invalid certificates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthImportCertDialog: public Ui_QgsAuthImportCertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHIMPORTCERTDIALOG_H
