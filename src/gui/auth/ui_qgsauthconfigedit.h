/********************************************************************************
** Form generated from reading UI file 'qgsauthconfigedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGEDIT_H
#define UI_QGSAUTHCONFIGEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include "qgsauthconfigidedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigEdit
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbAuthMethods;
    QToolButton *btnClear;
    QLineEdit *leResource;
    QLabel *lblNote;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *leName;
    QLabel *label;
    QgsAuthConfigIdEdit *authCfgEdit;
    QLabel *lblResource;
    QStackedWidget *stkwAuthMethods;
    QLabel *lblName;

    void setupUi(QDialog *QgsAuthConfigEdit)
    {
        if (QgsAuthConfigEdit->objectName().isEmpty())
            QgsAuthConfigEdit->setObjectName(QString::fromUtf8("QgsAuthConfigEdit"));
        QgsAuthConfigEdit->resize(400, 317);
        QgsAuthConfigEdit->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(QgsAuthConfigEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsAuthConfigEdit);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmbAuthMethods = new QComboBox(QgsAuthConfigEdit);
        cmbAuthMethods->setObjectName(QString::fromUtf8("cmbAuthMethods"));

        horizontalLayout->addWidget(cmbAuthMethods);

        btnClear = new QToolButton(QgsAuthConfigEdit);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout->addWidget(btnClear);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);

        leResource = new QLineEdit(QgsAuthConfigEdit);
        leResource->setObjectName(QString::fromUtf8("leResource"));

        gridLayout->addWidget(leResource, 2, 1, 1, 1);

        lblNote = new QLabel(QgsAuthConfigEdit);
        lblNote->setObjectName(QString::fromUtf8("lblNote"));
        QFont font;
        font.setItalic(true);
        lblNote->setFont(font);
        lblNote->setStyleSheet(QString::fromUtf8("color: rgb(128, 128, 128);"));
        lblNote->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblNote, 7, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        leName = new QLineEdit(QgsAuthConfigEdit);
        leName->setObjectName(QString::fromUtf8("leName"));

        horizontalLayout_5->addWidget(leName);

        label = new QLabel(QgsAuthConfigEdit);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        authCfgEdit = new QgsAuthConfigIdEdit(QgsAuthConfigEdit);
        authCfgEdit->setObjectName(QString::fromUtf8("authCfgEdit"));

        horizontalLayout_5->addWidget(authCfgEdit);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        lblResource = new QLabel(QgsAuthConfigEdit);
        lblResource->setObjectName(QString::fromUtf8("lblResource"));

        gridLayout->addWidget(lblResource, 2, 0, 1, 1);

        stkwAuthMethods = new QStackedWidget(QgsAuthConfigEdit);
        stkwAuthMethods->setObjectName(QString::fromUtf8("stkwAuthMethods"));

        gridLayout->addWidget(stkwAuthMethods, 6, 0, 1, 2);

        lblName = new QLabel(QgsAuthConfigEdit);
        lblName->setObjectName(QString::fromUtf8("lblName"));

        gridLayout->addWidget(lblName, 1, 0, 1, 1);

        QWidget::setTabOrder(leName, leResource);
        QWidget::setTabOrder(leResource, cmbAuthMethods);
        QWidget::setTabOrder(cmbAuthMethods, btnClear);

        retranslateUi(QgsAuthConfigEdit);

        stkwAuthMethods->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsAuthConfigEdit);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthConfigEdit)
    {
        QgsAuthConfigEdit->setWindowTitle(QCoreApplication::translate("QgsAuthConfigEdit", "Authentication", nullptr));
        btnClear->setText(QCoreApplication::translate("QgsAuthConfigEdit", "Clear", nullptr));
        leResource->setPlaceholderText(QCoreApplication::translate("QgsAuthConfigEdit", "Optional URL resource", nullptr));
        lblNote->setText(QCoreApplication::translate("QgsAuthConfigEdit", "Note: Saving writes directly to authentication storage", nullptr));
        leName->setPlaceholderText(QCoreApplication::translate("QgsAuthConfigEdit", "Required", nullptr));
        label->setText(QCoreApplication::translate("QgsAuthConfigEdit", "Id", nullptr));
        lblResource->setText(QCoreApplication::translate("QgsAuthConfigEdit", "Resource", nullptr));
        lblName->setText(QCoreApplication::translate("QgsAuthConfigEdit", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigEdit: public Ui_QgsAuthConfigEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGEDIT_H
