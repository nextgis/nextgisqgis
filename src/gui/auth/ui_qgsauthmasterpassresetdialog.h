/********************************************************************************
** Form generated from reading UI file 'qgsauthmasterpassresetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHMASTERPASSRESETDIALOG_H
#define UI_QGSAUTHMASTERPASSRESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgspasswordlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMasterPasswordResetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QgsPasswordLineEdit *leMasterPassCurrent;
    QLabel *label_7;
    QgsPasswordLineEdit *leMasterPassNew;
    QLabel *label_8;
    QgsPasswordLineEdit *leMasterPassNew2;
    QCheckBox *chkKeepBackup;
    QLabel *lblWarning;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMasterPasswordResetDialog)
    {
        if (QgsMasterPasswordResetDialog->objectName().isEmpty())
            QgsMasterPasswordResetDialog->setObjectName(QString::fromUtf8("QgsMasterPasswordResetDialog"));
        QgsMasterPasswordResetDialog->resize(362, 280);
        verticalLayout = new QVBoxLayout(QgsMasterPasswordResetDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(QgsMasterPasswordResetDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        leMasterPassCurrent = new QgsPasswordLineEdit(QgsMasterPasswordResetDialog);
        leMasterPassCurrent->setObjectName(QString::fromUtf8("leMasterPassCurrent"));
        leMasterPassCurrent->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(leMasterPassCurrent);

        label_7 = new QLabel(QgsMasterPasswordResetDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        leMasterPassNew = new QgsPasswordLineEdit(QgsMasterPasswordResetDialog);
        leMasterPassNew->setObjectName(QString::fromUtf8("leMasterPassNew"));
        leMasterPassNew->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(leMasterPassNew);

        label_8 = new QLabel(QgsMasterPasswordResetDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        leMasterPassNew2 = new QgsPasswordLineEdit(QgsMasterPasswordResetDialog);
        leMasterPassNew2->setObjectName(QString::fromUtf8("leMasterPassNew2"));
        leMasterPassNew2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(leMasterPassNew2);

        chkKeepBackup = new QCheckBox(QgsMasterPasswordResetDialog);
        chkKeepBackup->setObjectName(QString::fromUtf8("chkKeepBackup"));

        verticalLayout->addWidget(chkKeepBackup);

        lblWarning = new QLabel(QgsMasterPasswordResetDialog);
        lblWarning->setObjectName(QString::fromUtf8("lblWarning"));
        lblWarning->setWordWrap(true);

        verticalLayout->addWidget(lblWarning);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsMasterPasswordResetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(leMasterPassCurrent, leMasterPassNew);
        QWidget::setTabOrder(leMasterPassNew, leMasterPassNew2);
        QWidget::setTabOrder(leMasterPassNew2, chkKeepBackup);

        retranslateUi(QgsMasterPasswordResetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMasterPasswordResetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMasterPasswordResetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMasterPasswordResetDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsMasterPasswordResetDialog)
    {
        QgsMasterPasswordResetDialog->setWindowTitle(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Reset Master Password", nullptr));
        label_6->setText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Enter CURRENT master authentication password", nullptr));
        leMasterPassCurrent->setPlaceholderText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Required", nullptr));
        label_7->setText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Enter NEW master authentication password", nullptr));
        leMasterPassNew->setPlaceholderText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Required", nullptr));
        label_8->setText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Re-enter NEW password", nullptr));
        leMasterPassNew2->setPlaceholderText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Required", nullptr));
        chkKeepBackup->setText(QCoreApplication::translate("QgsMasterPasswordResetDialog", "Keep backup of current database", nullptr));
        lblWarning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsMasterPasswordResetDialog: public Ui_QgsMasterPasswordResetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHMASTERPASSRESETDIALOG_H
