/********************************************************************************
** Form generated from reading UI file 'qgstiledsceneconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILEDSCENECONNECTIONDIALOG_H
#define UI_QGSTILEDSCENECONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsettingswidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTiledSceneConnectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QLabel *lblReferer;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLineEdit *mEditName;
    QLineEdit *mEditReferer;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *mEditUrl;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsTiledSceneConnectionDialog)
    {
        if (QgsTiledSceneConnectionDialog->objectName().isEmpty())
            QgsTiledSceneConnectionDialog->setObjectName(QString::fromUtf8("QgsTiledSceneConnectionDialog"));
        QgsTiledSceneConnectionDialog->resize(659, 442);
        verticalLayout = new QVBoxLayout(QgsTiledSceneConnectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mGroupBox = new QGroupBox(QgsTiledSceneConnectionDialog);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblReferer = new QLabel(mGroupBox);
        lblReferer->setObjectName(QString::fromUtf8("lblReferer"));

        gridLayout->addWidget(lblReferer, 6, 0, 1, 1);

        mAuthGroupBox = new QGroupBox(mGroupBox);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));

        verticalLayout_3->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 5, 0, 1, 3);

        mEditName = new QLineEdit(mGroupBox);
        mEditName->setObjectName(QString::fromUtf8("mEditName"));

        gridLayout->addWidget(mEditName, 0, 2, 1, 1);

        mEditReferer = new QLineEdit(mGroupBox);
        mEditReferer->setObjectName(QString::fromUtf8("mEditReferer"));

        gridLayout->addWidget(mEditReferer, 6, 2, 1, 1);

        label_2 = new QLabel(mGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(mGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        mEditUrl = new QLineEdit(mGroupBox);
        mEditUrl->setObjectName(QString::fromUtf8("mEditUrl"));

        gridLayout->addWidget(mEditUrl, 1, 2, 1, 1);


        verticalLayout->addWidget(mGroupBox);

        buttonBox = new QDialogButtonBox(QgsTiledSceneConnectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        lblReferer->setBuddy(mEditReferer);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mEditName, mEditUrl);
        QWidget::setTabOrder(mEditUrl, mEditReferer);

        retranslateUi(QgsTiledSceneConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsTiledSceneConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsTiledSceneConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsTiledSceneConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsTiledSceneConnectionDialog)
    {
        QgsTiledSceneConnectionDialog->setWindowTitle(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "Tiled Scene Connection", nullptr));
        mGroupBox->setTitle(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "Connection Details", nullptr));
        lblReferer->setText(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "Referer", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "Authentication", nullptr));
#if QT_CONFIG(tooltip)
        mEditName->setToolTip(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mEditReferer->setToolTip(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "Optional custom referer", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "URL", nullptr));
        label->setText(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mEditUrl->setToolTip(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "URL of the connection", nullptr));
#endif // QT_CONFIG(tooltip)
        mEditUrl->setPlaceholderText(QCoreApplication::translate("QgsTiledSceneConnectionDialog", "http://example.com/tileset.json", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTiledSceneConnectionDialog: public Ui_QgsTiledSceneConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILEDSCENECONNECTIONDIALOG_H
