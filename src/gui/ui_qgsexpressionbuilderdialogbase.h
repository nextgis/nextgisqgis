/********************************************************************************
** Form generated from reading UI file 'qgsexpressionbuilderdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONBUILDERDIALOGBASE_H
#define UI_QGSEXPRESSIONBUILDERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include "qgsexpressionbuilderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionBuilderDialogBase
{
public:
    QGridLayout *gridLayout;
    QgsExpressionBuilderWidget *builder;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsExpressionBuilderDialogBase)
    {
        if (QgsExpressionBuilderDialogBase->objectName().isEmpty())
            QgsExpressionBuilderDialogBase->setObjectName(QString::fromUtf8("QgsExpressionBuilderDialogBase"));
        QgsExpressionBuilderDialogBase->resize(836, 508);
        gridLayout = new QGridLayout(QgsExpressionBuilderDialogBase);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        builder = new QgsExpressionBuilderWidget(QgsExpressionBuilderDialogBase);
        builder->setObjectName(QString::fromUtf8("builder"));
        builder->setAutoFillBackground(false);
        builder->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(builder, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsExpressionBuilderDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(QgsExpressionBuilderDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsExpressionBuilderDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsExpressionBuilderDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsExpressionBuilderDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsExpressionBuilderDialogBase)
    {
        QgsExpressionBuilderDialogBase->setWindowTitle(QCoreApplication::translate("QgsExpressionBuilderDialogBase", "Expression Builder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionBuilderDialogBase: public Ui_QgsExpressionBuilderDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONBUILDERDIALOGBASE_H
