/********************************************************************************
** Form generated from reading UI file 'qgsauthconfiguriedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGURIEDIT_H
#define UI_QGSAUTHCONFIGURIEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthconfigselect.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigUriEdit
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *teDataUri;
    QgsAuthConfigSelect *wdgtAuthSelect;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAuthConfigUriEdit)
    {
        if (QgsAuthConfigUriEdit->objectName().isEmpty())
            QgsAuthConfigUriEdit->setObjectName(QString::fromUtf8("QgsAuthConfigUriEdit"));
        QgsAuthConfigUriEdit->resize(449, 449);
        QgsAuthConfigUriEdit->setWindowTitle(QString::fromUtf8("Dialog"));
        verticalLayout = new QVBoxLayout(QgsAuthConfigUriEdit);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(QgsAuthConfigUriEdit);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, 6, 6);
        teDataUri = new QPlainTextEdit(groupBox);
        teDataUri->setObjectName(QString::fromUtf8("teDataUri"));
        teDataUri->setMaximumSize(QSize(16777215, 75));
        teDataUri->setReadOnly(true);

        verticalLayout_2->addWidget(teDataUri);

        wdgtAuthSelect = new QgsAuthConfigSelect(groupBox);
        wdgtAuthSelect->setObjectName(QString::fromUtf8("wdgtAuthSelect"));

        verticalLayout_2->addWidget(wdgtAuthSelect);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(128, 128, 128);"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(QgsAuthConfigUriEdit);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(teDataUri, buttonBox);

        retranslateUi(QgsAuthConfigUriEdit);

        QMetaObject::connectSlotsByName(QgsAuthConfigUriEdit);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthConfigUriEdit)
    {
        groupBox->setTitle(QCoreApplication::translate("QgsAuthConfigUriEdit", "Edit Authentication Configuration ID", nullptr));
        label->setText(QCoreApplication::translate("QgsAuthConfigUriEdit", "Note: Button actions above affect authentication storage", nullptr));
        (void)QgsAuthConfigUriEdit;
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigUriEdit: public Ui_QgsAuthConfigUriEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGURIEDIT_H
