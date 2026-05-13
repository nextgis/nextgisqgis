/********************************************************************************
** Form generated from reading UI file 'qgsauthimportidentitydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHIMPORTIDENTITYDIALOG_H
#define UI_QGSAUTHIMPORTIDENTITYDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthImportIdentityDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpbxImportCert;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbIdentityTypes;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stkwBundleType;
    QWidget *pagePkiPaths;
    QGridLayout *gridLayout_2;
    QLabel *lblPkiPathsKey;
    QSpacerItem *verticalSpacer_3;
    QLabel *lblPkiPathsCert;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lePkiPathsKey;
    QToolButton *btnPkiPathsKey;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lePkiPathsKeyPass;
    QCheckBox *chkPkiPathsPassShow;
    QGridLayout *gridLayout_3;
    QToolButton *btnPkiPathsCert;
    QLineEdit *lePkiPathsCert;
    QWidget *pagePkiPkcs12;
    QGridLayout *gridLayout_8;
    QLabel *lblPkiPathsKey_2;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_5;
    QToolButton *btnPkiPkcs12Bundle;
    QLineEdit *lePkiPkcs12Bundle;
    QLabel *lblPkiPathsCert_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lePkiPkcs12KeyPass;
    QCheckBox *chkPkiPkcs12PassShow;
    QSpacerItem *verticalSpacer;
    QGroupBox *grpbxValidation;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *teValidation;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAuthImportIdentityDialog)
    {
        if (QgsAuthImportIdentityDialog->objectName().isEmpty())
            QgsAuthImportIdentityDialog->setObjectName(QString::fromUtf8("QgsAuthImportIdentityDialog"));
        QgsAuthImportIdentityDialog->resize(400, 350);
        verticalLayout = new QVBoxLayout(QgsAuthImportIdentityDialog);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        grpbxImportCert = new QGroupBox(QgsAuthImportIdentityDialog);
        grpbxImportCert->setObjectName(QString::fromUtf8("grpbxImportCert"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(grpbxImportCert->sizePolicy().hasHeightForWidth());
        grpbxImportCert->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(grpbxImportCert);
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmbIdentityTypes = new QComboBox(grpbxImportCert);
        cmbIdentityTypes->setObjectName(QString::fromUtf8("cmbIdentityTypes"));

        horizontalLayout->addWidget(cmbIdentityTypes);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        stkwBundleType = new QStackedWidget(grpbxImportCert);
        stkwBundleType->setObjectName(QString::fromUtf8("stkwBundleType"));
        pagePkiPaths = new QWidget();
        pagePkiPaths->setObjectName(QString::fromUtf8("pagePkiPaths"));
        gridLayout_2 = new QGridLayout(pagePkiPaths);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblPkiPathsKey = new QLabel(pagePkiPaths);
        lblPkiPathsKey->setObjectName(QString::fromUtf8("lblPkiPathsKey"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblPkiPathsKey->sizePolicy().hasHeightForWidth());
        lblPkiPathsKey->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lblPkiPathsKey, 4, 0, 1, 1, Qt::AlignTop);

        verticalSpacer_3 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 10, 1, 1, 1);

        lblPkiPathsCert = new QLabel(pagePkiPaths);
        lblPkiPathsCert->setObjectName(QString::fromUtf8("lblPkiPathsCert"));
        sizePolicy1.setHeightForWidth(lblPkiPathsCert->sizePolicy().hasHeightForWidth());
        lblPkiPathsCert->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lblPkiPathsCert, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lePkiPathsKey = new QLineEdit(pagePkiPaths);
        lePkiPathsKey->setObjectName(QString::fromUtf8("lePkiPathsKey"));
        lePkiPathsKey->setReadOnly(true);

        horizontalLayout_3->addWidget(lePkiPathsKey);

        btnPkiPathsKey = new QToolButton(pagePkiPaths);
        btnPkiPathsKey->setObjectName(QString::fromUtf8("btnPkiPathsKey"));
        btnPkiPathsKey->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_3->addWidget(btnPkiPathsKey);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lePkiPathsKeyPass = new QLineEdit(pagePkiPaths);
        lePkiPathsKeyPass->setObjectName(QString::fromUtf8("lePkiPathsKeyPass"));
        lePkiPathsKeyPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lePkiPathsKeyPass);

        chkPkiPathsPassShow = new QCheckBox(pagePkiPaths);
        chkPkiPathsPassShow->setObjectName(QString::fromUtf8("chkPkiPathsPassShow"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(chkPkiPathsPassShow->sizePolicy().hasHeightForWidth());
        chkPkiPathsPassShow->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(chkPkiPathsPassShow);


        verticalLayout_4->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout_4, 4, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btnPkiPathsCert = new QToolButton(pagePkiPaths);
        btnPkiPathsCert->setObjectName(QString::fromUtf8("btnPkiPathsCert"));
        btnPkiPathsCert->setPopupMode(QToolButton::InstantPopup);

        gridLayout_3->addWidget(btnPkiPathsCert, 0, 1, 1, 1);

        lePkiPathsCert = new QLineEdit(pagePkiPaths);
        lePkiPathsCert->setObjectName(QString::fromUtf8("lePkiPathsCert"));
        lePkiPathsCert->setReadOnly(true);

        gridLayout_3->addWidget(lePkiPathsCert, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 3, 1, 1, 1);

        stkwBundleType->addWidget(pagePkiPaths);
        pagePkiPkcs12 = new QWidget();
        pagePkiPkcs12->setObjectName(QString::fromUtf8("pagePkiPkcs12"));
        gridLayout_8 = new QGridLayout(pagePkiPkcs12);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        lblPkiPathsKey_2 = new QLabel(pagePkiPkcs12);
        lblPkiPathsKey_2->setObjectName(QString::fromUtf8("lblPkiPathsKey_2"));
        sizePolicy1.setHeightForWidth(lblPkiPathsKey_2->sizePolicy().hasHeightForWidth());
        lblPkiPathsKey_2->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(lblPkiPathsKey_2, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_4, 2, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        btnPkiPkcs12Bundle = new QToolButton(pagePkiPkcs12);
        btnPkiPkcs12Bundle->setObjectName(QString::fromUtf8("btnPkiPkcs12Bundle"));
        btnPkiPkcs12Bundle->setPopupMode(QToolButton::InstantPopup);

        gridLayout_5->addWidget(btnPkiPkcs12Bundle, 0, 1, 1, 1);

        lePkiPkcs12Bundle = new QLineEdit(pagePkiPkcs12);
        lePkiPkcs12Bundle->setObjectName(QString::fromUtf8("lePkiPkcs12Bundle"));
        lePkiPkcs12Bundle->setReadOnly(true);

        gridLayout_5->addWidget(lePkiPkcs12Bundle, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 0, 1, 1, 1);

        lblPkiPathsCert_2 = new QLabel(pagePkiPkcs12);
        lblPkiPathsCert_2->setObjectName(QString::fromUtf8("lblPkiPathsCert_2"));
        sizePolicy1.setHeightForWidth(lblPkiPathsCert_2->sizePolicy().hasHeightForWidth());
        lblPkiPathsCert_2->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(lblPkiPathsCert_2, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lePkiPkcs12KeyPass = new QLineEdit(pagePkiPkcs12);
        lePkiPkcs12KeyPass->setObjectName(QString::fromUtf8("lePkiPkcs12KeyPass"));
        lePkiPkcs12KeyPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(lePkiPkcs12KeyPass);

        chkPkiPkcs12PassShow = new QCheckBox(pagePkiPkcs12);
        chkPkiPkcs12PassShow->setObjectName(QString::fromUtf8("chkPkiPkcs12PassShow"));
        sizePolicy2.setHeightForWidth(chkPkiPkcs12PassShow->sizePolicy().hasHeightForWidth());
        chkPkiPkcs12PassShow->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(chkPkiPkcs12PassShow);


        gridLayout_8->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        stkwBundleType->addWidget(pagePkiPkcs12);

        verticalLayout_2->addWidget(stkwBundleType);


        verticalLayout->addWidget(grpbxImportCert);

        verticalSpacer = new QSpacerItem(373, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        grpbxValidation = new QGroupBox(QgsAuthImportIdentityDialog);
        grpbxValidation->setObjectName(QString::fromUtf8("grpbxValidation"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(grpbxValidation->sizePolicy().hasHeightForWidth());
        grpbxValidation->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(grpbxValidation);
        verticalLayout_3->setSpacing(12);
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        teValidation = new QTextEdit(grpbxValidation);
        teValidation->setObjectName(QString::fromUtf8("teValidation"));
        teValidation->setMaximumSize(QSize(16777215, 60));
        teValidation->setReadOnly(true);

        verticalLayout_3->addWidget(teValidation);


        verticalLayout->addWidget(grpbxValidation);

        buttonBox = new QDialogButtonBox(QgsAuthImportIdentityDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cmbIdentityTypes, lePkiPkcs12Bundle);
        QWidget::setTabOrder(lePkiPkcs12Bundle, btnPkiPkcs12Bundle);
        QWidget::setTabOrder(btnPkiPkcs12Bundle, lePkiPkcs12KeyPass);
        QWidget::setTabOrder(lePkiPkcs12KeyPass, chkPkiPkcs12PassShow);
        QWidget::setTabOrder(chkPkiPkcs12PassShow, lePkiPathsCert);
        QWidget::setTabOrder(lePkiPathsCert, btnPkiPathsCert);
        QWidget::setTabOrder(btnPkiPathsCert, lePkiPathsKey);
        QWidget::setTabOrder(lePkiPathsKey, btnPkiPathsKey);
        QWidget::setTabOrder(btnPkiPathsKey, lePkiPathsKeyPass);
        QWidget::setTabOrder(lePkiPathsKeyPass, chkPkiPathsPassShow);
        QWidget::setTabOrder(chkPkiPathsPassShow, teValidation);
        QWidget::setTabOrder(teValidation, buttonBox);

        retranslateUi(QgsAuthImportIdentityDialog);

        stkwBundleType->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsAuthImportIdentityDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthImportIdentityDialog)
    {
        QgsAuthImportIdentityDialog->setWindowTitle(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Import Identity", nullptr));
        grpbxImportCert->setTitle(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Import Identity", nullptr));
        lblPkiPathsKey->setText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Key", nullptr));
        lblPkiPathsCert->setText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Cert", nullptr));
        lePkiPathsKey->setPlaceholderText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Required", nullptr));
        btnPkiPathsKey->setText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "\342\200\246", nullptr));
        lePkiPathsKeyPass->setPlaceholderText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Optional passphrase", nullptr));
        chkPkiPathsPassShow->setText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Show", nullptr));
        btnPkiPathsCert->setText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "\342\200\246", nullptr));
        lePkiPathsCert->setPlaceholderText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Required", nullptr));
        lblPkiPathsKey_2->setText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Key", nullptr));
        btnPkiPkcs12Bundle->setText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "\342\200\246", nullptr));
        lePkiPkcs12Bundle->setPlaceholderText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Required", nullptr));
        lblPkiPathsCert_2->setText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Bundle", nullptr));
        lePkiPkcs12KeyPass->setPlaceholderText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Optional passphrase", nullptr));
        chkPkiPkcs12PassShow->setText(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Show", nullptr));
        grpbxValidation->setTitle(QCoreApplication::translate("QgsAuthImportIdentityDialog", "Validation Results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthImportIdentityDialog: public Ui_QgsAuthImportIdentityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHIMPORTIDENTITYDIALOG_H
