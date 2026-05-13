/********************************************************************************
** Form generated from reading UI file 'qgsgdalcloudconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGDALCLOUDCONNECTIONDIALOG_H
#define UI_QGSGDALCLOUDCONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsGdalCloudConnectionDialog
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *mEditName;
    QLabel *label;
    QGroupBox *mCredentialsGroupBox;
    QLineEdit *mBucket;
    QLineEdit *mKey;
    QLabel *labelBucket;
    QLabel *labelKey;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGdalCloudConnectionDialog)
    {
        if (QgsGdalCloudConnectionDialog->objectName().isEmpty())
            QgsGdalCloudConnectionDialog->setObjectName(QString::fromUtf8("QgsGdalCloudConnectionDialog"));
        QgsGdalCloudConnectionDialog->resize(860, 432);
        gridLayout_2 = new QGridLayout(QgsGdalCloudConnectionDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mEditName = new QLineEdit(QgsGdalCloudConnectionDialog);
        mEditName->setObjectName(QString::fromUtf8("mEditName"));

        gridLayout_2->addWidget(mEditName, 0, 1, 1, 1);

        label = new QLabel(QgsGdalCloudConnectionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mCredentialsGroupBox = new QGroupBox(QgsGdalCloudConnectionDialog);
        mCredentialsGroupBox->setObjectName(QString::fromUtf8("mCredentialsGroupBox"));

        gridLayout_2->addWidget(mCredentialsGroupBox, 3, 0, 1, 2);

        mBucket = new QLineEdit(QgsGdalCloudConnectionDialog);
        mBucket->setObjectName(QString::fromUtf8("mBucket"));

        gridLayout_2->addWidget(mBucket, 1, 1, 1, 1);

        mKey = new QLineEdit(QgsGdalCloudConnectionDialog);
        mKey->setObjectName(QString::fromUtf8("mKey"));

        gridLayout_2->addWidget(mKey, 2, 1, 1, 1);

        labelBucket = new QLabel(QgsGdalCloudConnectionDialog);
        labelBucket->setObjectName(QString::fromUtf8("labelBucket"));

        gridLayout_2->addWidget(labelBucket, 1, 0, 1, 1);

        labelKey = new QLabel(QgsGdalCloudConnectionDialog);
        labelKey->setObjectName(QString::fromUtf8("labelKey"));

        gridLayout_2->addWidget(labelKey, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsGdalCloudConnectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 4, 0, 1, 2);

#if QT_CONFIG(shortcut)
        labelBucket->setBuddy(mBucket);
        labelKey->setBuddy(mKey);
#endif // QT_CONFIG(shortcut)

        retranslateUi(QgsGdalCloudConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsGdalCloudConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsGdalCloudConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGdalCloudConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsGdalCloudConnectionDialog)
    {
        QgsGdalCloudConnectionDialog->setWindowTitle(QCoreApplication::translate("QgsGdalCloudConnectionDialog", "Cloud Storage Connection", nullptr));
#if QT_CONFIG(tooltip)
        mEditName->setToolTip(QCoreApplication::translate("QgsGdalCloudConnectionDialog", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsGdalCloudConnectionDialog", "Name", nullptr));
        mCredentialsGroupBox->setTitle(QCoreApplication::translate("QgsGdalCloudConnectionDialog", "Credentials", nullptr));
        labelBucket->setText(QCoreApplication::translate("QgsGdalCloudConnectionDialog", "Bucket or container", nullptr));
        labelKey->setText(QCoreApplication::translate("QgsGdalCloudConnectionDialog", "Object key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGdalCloudConnectionDialog: public Ui_QgsGdalCloudConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGDALCLOUDCONNECTIONDIALOG_H
