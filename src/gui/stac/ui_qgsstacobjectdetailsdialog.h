/********************************************************************************
** Form generated from reading UI file 'qgsstacobjectdetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTACOBJECTDETAILSDIALOG_H
#define UI_QGSSTACOBJECTDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>
#include "qgswebview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStacObjectDetailsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsWebView *mWebView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStacObjectDetailsDialog)
    {
        if (QgsStacObjectDetailsDialog->objectName().isEmpty())
            QgsStacObjectDetailsDialog->setObjectName(QString::fromUtf8("QgsStacObjectDetailsDialog"));
        QgsStacObjectDetailsDialog->resize(530, 554);
        verticalLayout = new QVBoxLayout(QgsStacObjectDetailsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mWebView = new QgsWebView(QgsStacObjectDetailsDialog);
        mWebView->setObjectName(QString::fromUtf8("mWebView"));

        verticalLayout->addWidget(mWebView);

        buttonBox = new QDialogButtonBox(QgsStacObjectDetailsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsStacObjectDetailsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsStacObjectDetailsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStacObjectDetailsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsStacObjectDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsStacObjectDetailsDialog)
    {
        QgsStacObjectDetailsDialog->setWindowTitle(QCoreApplication::translate("QgsStacObjectDetailsDialog", "STAC Object Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsStacObjectDetailsDialog: public Ui_QgsStacObjectDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTACOBJECTDETAILSDIALOG_H
