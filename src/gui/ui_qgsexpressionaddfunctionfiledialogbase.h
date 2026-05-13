/********************************************************************************
** Form generated from reading UI file 'qgsexpressionaddfunctionfiledialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONADDFUNCTIONFILEDIALOGBASE_H
#define UI_QGSEXPRESSIONADDFUNCTIONFILEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionAddFunctionFileDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txtNewFileName;
    QComboBox *cboFileOptions;
    QDialogButtonBox *buttonBox;
    QLabel *lblNewFileName;

    void setupUi(QDialog *QgsExpressionAddFunctionFileDialogBase)
    {
        if (QgsExpressionAddFunctionFileDialogBase->objectName().isEmpty())
            QgsExpressionAddFunctionFileDialogBase->setObjectName(QString::fromUtf8("QgsExpressionAddFunctionFileDialogBase"));
        QgsExpressionAddFunctionFileDialogBase->resize(265, 135);
        gridLayout = new QGridLayout(QgsExpressionAddFunctionFileDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsExpressionAddFunctionFileDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtNewFileName = new QLineEdit(QgsExpressionAddFunctionFileDialogBase);
        txtNewFileName->setObjectName(QString::fromUtf8("txtNewFileName"));

        gridLayout->addWidget(txtNewFileName, 1, 1, 1, 1);

        cboFileOptions = new QComboBox(QgsExpressionAddFunctionFileDialogBase);
        cboFileOptions->setObjectName(QString::fromUtf8("cboFileOptions"));

        gridLayout->addWidget(cboFileOptions, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsExpressionAddFunctionFileDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        lblNewFileName = new QLabel(QgsExpressionAddFunctionFileDialogBase);
        lblNewFileName->setObjectName(QString::fromUtf8("lblNewFileName"));

        gridLayout->addWidget(lblNewFileName, 1, 0, 1, 1);


        retranslateUi(QgsExpressionAddFunctionFileDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsExpressionAddFunctionFileDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsExpressionAddFunctionFileDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsExpressionAddFunctionFileDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsExpressionAddFunctionFileDialogBase)
    {
        QgsExpressionAddFunctionFileDialogBase->setWindowTitle(QCoreApplication::translate("QgsExpressionAddFunctionFileDialogBase", "Add Function File", nullptr));
        label->setText(QCoreApplication::translate("QgsExpressionAddFunctionFileDialogBase", "Create", nullptr));
        lblNewFileName->setText(QCoreApplication::translate("QgsExpressionAddFunctionFileDialogBase", "File name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionAddFunctionFileDialogBase: public Ui_QgsExpressionAddFunctionFileDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONADDFUNCTIONFILEDIALOGBASE_H
