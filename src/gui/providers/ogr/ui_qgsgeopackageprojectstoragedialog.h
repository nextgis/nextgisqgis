/********************************************************************************
** Form generated from reading UI file 'qgsgeopackageprojectstoragedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOPACKAGEPROJECTSTORAGEDIALOG_H
#define UI_QGSGEOPACKAGEPROJECTSTORAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGeoPackageProjectStorageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *mCboConnection;
    QLabel *label_3;
    QgsFileWidget *mFileWidget;
    QComboBox *mCboProject;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGeoPackageProjectStorageDialog)
    {
        if (QgsGeoPackageProjectStorageDialog->objectName().isEmpty())
            QgsGeoPackageProjectStorageDialog->setObjectName(QString::fromUtf8("QgsGeoPackageProjectStorageDialog"));
        QgsGeoPackageProjectStorageDialog->resize(552, 128);
        verticalLayout = new QVBoxLayout(QgsGeoPackageProjectStorageDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsGeoPackageProjectStorageDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mCboConnection = new QComboBox(QgsGeoPackageProjectStorageDialog);
        mCboConnection->setObjectName(QString::fromUtf8("mCboConnection"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCboConnection->sizePolicy().hasHeightForWidth());
        mCboConnection->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mCboConnection, 0, 1, 1, 1);

        label_3 = new QLabel(QgsGeoPackageProjectStorageDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        mFileWidget = new QgsFileWidget(QgsGeoPackageProjectStorageDialog);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        gridLayout->addWidget(mFileWidget, 0, 2, 1, 1);

        mCboProject = new QComboBox(QgsGeoPackageProjectStorageDialog);
        mCboProject->setObjectName(QString::fromUtf8("mCboProject"));

        gridLayout->addWidget(mCboProject, 1, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsGeoPackageProjectStorageDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsGeoPackageProjectStorageDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsGeoPackageProjectStorageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGeoPackageProjectStorageDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsGeoPackageProjectStorageDialog)
    {
        label->setText(QCoreApplication::translate("QgsGeoPackageProjectStorageDialog", "Connection", nullptr));
        label_3->setText(QCoreApplication::translate("QgsGeoPackageProjectStorageDialog", "Project", nullptr));
        (void)QgsGeoPackageProjectStorageDialog;
    } // retranslateUi

};

namespace Ui {
    class QgsGeoPackageProjectStorageDialog: public Ui_QgsGeoPackageProjectStorageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOPACKAGEPROJECTSTORAGEDIALOG_H
