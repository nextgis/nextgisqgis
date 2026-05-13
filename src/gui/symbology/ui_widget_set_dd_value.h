/********************************************************************************
** Form generated from reading UI file 'widget_set_dd_value.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SET_DD_VALUE_H
#define UI_WIDGET_SET_DD_VALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDataDefinedValueBaseDialog
{
public:
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mSpinBox;
    QgsPropertyOverrideButton *mDDBtn;
    QLabel *mLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDataDefinedValueBaseDialog)
    {
        if (QgsDataDefinedValueBaseDialog->objectName().isEmpty())
            QgsDataDefinedValueBaseDialog->setObjectName(QString::fromUtf8("QgsDataDefinedValueBaseDialog"));
        QgsDataDefinedValueBaseDialog->resize(214, 81);
        QgsDataDefinedValueBaseDialog->setWindowTitle(QString::fromUtf8("Dialog"));
        gridLayout = new QGridLayout(QgsDataDefinedValueBaseDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSpinBox = new QgsDoubleSpinBox(QgsDataDefinedValueBaseDialog);
        mSpinBox->setObjectName(QString::fromUtf8("mSpinBox"));
        mSpinBox->setMaximum(99999999.989999994635582);

        gridLayout->addWidget(mSpinBox, 0, 1, 1, 1);

        mDDBtn = new QgsPropertyOverrideButton(QgsDataDefinedValueBaseDialog);
        mDDBtn->setObjectName(QString::fromUtf8("mDDBtn"));

        gridLayout->addWidget(mDDBtn, 0, 2, 1, 1);

        mLabel = new QLabel(QgsDataDefinedValueBaseDialog);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));

        gridLayout->addWidget(mLabel, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsDataDefinedValueBaseDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 3);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(QgsDataDefinedValueBaseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDataDefinedValueBaseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDataDefinedValueBaseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDataDefinedValueBaseDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDataDefinedValueBaseDialog)
    {
        mDDBtn->setText(QCoreApplication::translate("QgsDataDefinedValueBaseDialog", "\342\200\246", nullptr));
        mLabel->setText(QCoreApplication::translate("QgsDataDefinedValueBaseDialog", "Label", nullptr));
        (void)QgsDataDefinedValueBaseDialog;
    } // retranslateUi

};

namespace Ui {
    class QgsDataDefinedValueBaseDialog: public Ui_QgsDataDefinedValueBaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SET_DD_VALUE_H
