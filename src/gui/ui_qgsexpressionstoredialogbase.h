/********************************************************************************
** Form generated from reading UI file 'qgsexpressionstoredialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONSTOREDIALOGBASE_H
#define UI_QGSEXPRESSIONSTOREDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include "qgscodeeditorexpression.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionStoreDialogBase
{
public:
    QFormLayout *formLayout;
    QLabel *lblLabel;
    QDialogButtonBox *buttonBox;
    QLineEdit *mLabel;
    QTextEdit *mHelpText;
    QLabel *lblHelpText;
    QgsCodeEditorExpression *mExpression;
    QLabel *lblExpression;
    QLabel *mValidationError;

    void setupUi(QDialog *QgsExpressionStoreDialogBase)
    {
        if (QgsExpressionStoreDialogBase->objectName().isEmpty())
            QgsExpressionStoreDialogBase->setObjectName(QString::fromUtf8("QgsExpressionStoreDialogBase"));
        QgsExpressionStoreDialogBase->resize(395, 212);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsExpressionStoreDialogBase->sizePolicy().hasHeightForWidth());
        QgsExpressionStoreDialogBase->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(QgsExpressionStoreDialogBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblLabel = new QLabel(QgsExpressionStoreDialogBase);
        lblLabel->setObjectName(QString::fromUtf8("lblLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblLabel);

        buttonBox = new QDialogButtonBox(QgsExpressionStoreDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        formLayout->setWidget(6, QFormLayout::FieldRole, buttonBox);

        mLabel = new QLineEdit(QgsExpressionStoreDialogBase);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mLabel);

        mHelpText = new QTextEdit(QgsExpressionStoreDialogBase);
        mHelpText->setObjectName(QString::fromUtf8("mHelpText"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mHelpText);

        lblHelpText = new QLabel(QgsExpressionStoreDialogBase);
        lblHelpText->setObjectName(QString::fromUtf8("lblHelpText"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblHelpText);

        mExpression = new QgsCodeEditorExpression(QgsExpressionStoreDialogBase);
        mExpression->setObjectName(QString::fromUtf8("mExpression"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mExpression);

        lblExpression = new QLabel(QgsExpressionStoreDialogBase);
        lblExpression->setObjectName(QString::fromUtf8("lblExpression"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblExpression);

        mValidationError = new QLabel(QgsExpressionStoreDialogBase);
        mValidationError->setObjectName(QString::fromUtf8("mValidationError"));
        mValidationError->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, mValidationError);


        retranslateUi(QgsExpressionStoreDialogBase);

        QMetaObject::connectSlotsByName(QgsExpressionStoreDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsExpressionStoreDialogBase)
    {
        QgsExpressionStoreDialogBase->setWindowTitle(QCoreApplication::translate("QgsExpressionStoreDialogBase", "Store Expression", nullptr));
        lblLabel->setText(QCoreApplication::translate("QgsExpressionStoreDialogBase", "Label", nullptr));
        lblHelpText->setText(QCoreApplication::translate("QgsExpressionStoreDialogBase", "Help text", nullptr));
        lblExpression->setText(QCoreApplication::translate("QgsExpressionStoreDialogBase", "Expression", nullptr));
        mValidationError->setText(QCoreApplication::translate("QgsExpressionStoreDialogBase", "A stored expression with this name already exists!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionStoreDialogBase: public Ui_QgsExpressionStoreDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONSTOREDIALOGBASE_H
