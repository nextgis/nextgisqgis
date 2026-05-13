/********************************************************************************
** Form generated from reading UI file 'qgsnewogrconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWOGRCONNECTIONBASE_H
#define UI_QGSNEWOGRCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsettingswidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewOgrConnectionBase
{
public:
    QGridLayout *grLayout1;
    QDialogButtonBox *buttonBox;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout;
    QPushButton *btnConnect;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettingsDatabase;
    QLabel *label;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QLabel *TextLabel2;
    QLabel *TextLabel2_2;
    QLineEdit *txtName;
    QComboBox *cmbDatabaseTypes;
    QLineEdit *txtHost;
    QLineEdit *txtDatabase;
    QLineEdit *txtPort;

    void setupUi(QDialog *QgsNewOgrConnectionBase)
    {
        if (QgsNewOgrConnectionBase->objectName().isEmpty())
            QgsNewOgrConnectionBase->setObjectName(QString::fromUtf8("QgsNewOgrConnectionBase"));
        QgsNewOgrConnectionBase->resize(404, 386);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewOgrConnectionBase->sizePolicy().hasHeightForWidth());
        QgsNewOgrConnectionBase->setSizePolicy(sizePolicy);
        QgsNewOgrConnectionBase->setSizeGripEnabled(true);
        QgsNewOgrConnectionBase->setModal(true);
        grLayout1 = new QGridLayout(QgsNewOgrConnectionBase);
        grLayout1->setSpacing(6);
        grLayout1->setContentsMargins(11, 11, 11, 11);
        grLayout1->setObjectName(QString::fromUtf8("grLayout1"));
        grLayout1->setContentsMargins(9, 9, 9, 9);
        buttonBox = new QDialogButtonBox(QgsNewOgrConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        grLayout1->addWidget(buttonBox, 1, 0, 1, 1);

        GroupBox1 = new QGroupBox(QgsNewOgrConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout = new QGridLayout(GroupBox1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        gridLayout->addWidget(btnConnect, 8, 0, 1, 4);

        mAuthGroupBox = new QGroupBox(GroupBox1);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettingsDatabase = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettingsDatabase->setObjectName(QString::fromUtf8("mAuthSettingsDatabase"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAuthSettingsDatabase->sizePolicy().hasHeightForWidth());
        mAuthSettingsDatabase->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(mAuthSettingsDatabase);


        gridLayout->addWidget(mAuthGroupBox, 5, 0, 3, 4);

        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        gridLayout->addWidget(TextLabel1_2, 1, 0, 1, 1);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout->addWidget(TextLabel1, 2, 0, 1, 1);

        TextLabel2 = new QLabel(GroupBox1);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout->addWidget(TextLabel2, 3, 0, 1, 1);

        TextLabel2_2 = new QLabel(GroupBox1);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        gridLayout->addWidget(TextLabel2_2, 4, 0, 1, 1);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        gridLayout->addWidget(txtName, 1, 1, 1, 3);

        cmbDatabaseTypes = new QComboBox(GroupBox1);
        cmbDatabaseTypes->setObjectName(QString::fromUtf8("cmbDatabaseTypes"));

        gridLayout->addWidget(cmbDatabaseTypes, 0, 1, 1, 3);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));

        gridLayout->addWidget(txtHost, 2, 1, 1, 3);

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

        gridLayout->addWidget(txtDatabase, 3, 1, 1, 3);

        txtPort = new QLineEdit(GroupBox1);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));

        gridLayout->addWidget(txtPort, 4, 1, 1, 3);


        grLayout1->addWidget(GroupBox1, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(cmbDatabaseTypes);
        TextLabel1_2->setBuddy(txtName);
        TextLabel1->setBuddy(txtHost);
        TextLabel2->setBuddy(txtDatabase);
        TextLabel2_2->setBuddy(txtPort);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(cmbDatabaseTypes, txtName);
        QWidget::setTabOrder(txtName, txtHost);
        QWidget::setTabOrder(txtHost, txtDatabase);
        QWidget::setTabOrder(txtDatabase, txtPort);
        QWidget::setTabOrder(txtPort, btnConnect);

        retranslateUi(QgsNewOgrConnectionBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewOgrConnectionBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewOgrConnectionBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewOgrConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewOgrConnectionBase)
    {
        QgsNewOgrConnectionBase->setWindowTitle(QCoreApplication::translate("QgsNewOgrConnectionBase", "Create a New OGR Database Connection", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("QgsNewOgrConnectionBase", "Connection Information", nullptr));
        btnConnect->setText(QCoreApplication::translate("QgsNewOgrConnectionBase", "&Test Connection", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsNewOgrConnectionBase", "Authentication", nullptr));
        label->setText(QCoreApplication::translate("QgsNewOgrConnectionBase", "&Type", nullptr));
        TextLabel1_2->setText(QCoreApplication::translate("QgsNewOgrConnectionBase", "&Name", nullptr));
        TextLabel1->setText(QCoreApplication::translate("QgsNewOgrConnectionBase", "Host", nullptr));
        TextLabel2->setText(QCoreApplication::translate("QgsNewOgrConnectionBase", "&Database", nullptr));
        TextLabel2_2->setText(QCoreApplication::translate("QgsNewOgrConnectionBase", "Port", nullptr));
#if QT_CONFIG(tooltip)
        txtName->setToolTip(QCoreApplication::translate("QgsNewOgrConnectionBase", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        txtPort->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsNewOgrConnectionBase: public Ui_QgsNewOgrConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWOGRCONNECTIONBASE_H
