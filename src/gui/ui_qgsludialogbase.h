/********************************************************************************
** Form generated from reading UI file 'qgsludialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLUDIALOGBASE_H
#define UI_QGSLUDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLUDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mLowerLabel;
    QLabel *mUpperLabel;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QgsDoubleSpinBox *mLowerEdit;
    QgsDoubleSpinBox *mUpperEdit;

    void setupUi(QDialog *QgsLUDialogBase)
    {
        if (QgsLUDialogBase->objectName().isEmpty())
            QgsLUDialogBase->setObjectName(QString::fromUtf8("QgsLUDialogBase"));
        QgsLUDialogBase->resize(302, 122);
        QgsLUDialogBase->setModal(true);
        gridLayout = new QGridLayout(QgsLUDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLowerLabel = new QLabel(QgsLUDialogBase);
        mLowerLabel->setObjectName(QString::fromUtf8("mLowerLabel"));

        gridLayout->addWidget(mLowerLabel, 0, 0, 1, 1);

        mUpperLabel = new QLabel(QgsLUDialogBase);
        mUpperLabel->setObjectName(QString::fromUtf8("mUpperLabel"));

        gridLayout->addWidget(mUpperLabel, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLUDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        mLowerEdit = new QgsDoubleSpinBox(QgsLUDialogBase);
        mLowerEdit->setObjectName(QString::fromUtf8("mLowerEdit"));
        mLowerEdit->setDecimals(12);
        mLowerEdit->setMinimum(-1000000000000.000000000000000);
        mLowerEdit->setMaximum(1000000000000.000000000000000);

        gridLayout->addWidget(mLowerEdit, 0, 1, 1, 1);

        mUpperEdit = new QgsDoubleSpinBox(QgsLUDialogBase);
        mUpperEdit->setObjectName(QString::fromUtf8("mUpperEdit"));
        mUpperEdit->setDecimals(12);
        mUpperEdit->setMinimum(-1000000000000.000000000000000);
        mUpperEdit->setMaximum(1000000000000.000000000000000);

        gridLayout->addWidget(mUpperEdit, 1, 1, 1, 1);


        retranslateUi(QgsLUDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLUDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLUDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLUDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLUDialogBase)
    {
        QgsLUDialogBase->setWindowTitle(QCoreApplication::translate("QgsLUDialogBase", "Enter Class Bounds", nullptr));
        mLowerLabel->setText(QCoreApplication::translate("QgsLUDialogBase", "Lower value", nullptr));
        mUpperLabel->setText(QCoreApplication::translate("QgsLUDialogBase", "Upper value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLUDialogBase: public Ui_QgsLUDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLUDIALOGBASE_H
