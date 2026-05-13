/********************************************************************************
** Form generated from reading UI file 'qgssensorthingsconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSENSORTHINGSCONNECTIONDIALOG_H
#define UI_QGSSENSORTHINGSCONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsSensorThingsConnectionDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *mEditName;
    QGroupBox *mConnectionGroupBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSensorThingsConnectionDialog)
    {
        if (QgsSensorThingsConnectionDialog->objectName().isEmpty())
            QgsSensorThingsConnectionDialog->setObjectName(QString::fromUtf8("QgsSensorThingsConnectionDialog"));
        QgsSensorThingsConnectionDialog->resize(636, 353);
        gridLayout_2 = new QGridLayout(QgsSensorThingsConnectionDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(QgsSensorThingsConnectionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mEditName = new QLineEdit(QgsSensorThingsConnectionDialog);
        mEditName->setObjectName(QString::fromUtf8("mEditName"));

        gridLayout_2->addWidget(mEditName, 0, 1, 1, 1);

        mConnectionGroupBox = new QGroupBox(QgsSensorThingsConnectionDialog);
        mConnectionGroupBox->setObjectName(QString::fromUtf8("mConnectionGroupBox"));

        gridLayout_2->addWidget(mConnectionGroupBox, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsSensorThingsConnectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(QgsSensorThingsConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSensorThingsConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSensorThingsConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSensorThingsConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsSensorThingsConnectionDialog)
    {
        QgsSensorThingsConnectionDialog->setWindowTitle(QCoreApplication::translate("QgsSensorThingsConnectionDialog", "SensorThings Connection", nullptr));
        label->setText(QCoreApplication::translate("QgsSensorThingsConnectionDialog", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mEditName->setToolTip(QCoreApplication::translate("QgsSensorThingsConnectionDialog", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        mConnectionGroupBox->setTitle(QCoreApplication::translate("QgsSensorThingsConnectionDialog", "Connection Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSensorThingsConnectionDialog: public Ui_QgsSensorThingsConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSENSORTHINGSCONNECTIONDIALOG_H
