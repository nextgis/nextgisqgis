/********************************************************************************
** Form generated from reading UI file 'qgsaddtaborgroupbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADDTABORGROUPBASE_H
#define UI_QGSADDTABORGROUPBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAddTabOrGroupBase
{
public:
    QGridLayout *gridLayout_0;
    QLineEdit *mName;
    QSpacerItem *verticalSpacer;
    QComboBox *mTypeCombo;
    QLabel *label_2;
    QComboBox *mParentCombo;
    QDialogButtonBox *buttonBox;
    QLabel *mColumnsLabel;
    QgsSpinBox *mColumnCountSpinBox;
    QLabel *label;
    QLabel *mLabelParent;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QgsAddTabOrGroupBase)
    {
        if (QgsAddTabOrGroupBase->objectName().isEmpty())
            QgsAddTabOrGroupBase->setObjectName(QString::fromUtf8("QgsAddTabOrGroupBase"));
        QgsAddTabOrGroupBase->resize(479, 231);
        QgsAddTabOrGroupBase->setWindowTitle(QString::fromUtf8("Dialog"));
        gridLayout_0 = new QGridLayout(QgsAddTabOrGroupBase);
        gridLayout_0->setObjectName(QString::fromUtf8("gridLayout_0"));
        mName = new QLineEdit(QgsAddTabOrGroupBase);
        mName->setObjectName(QString::fromUtf8("mName"));

        gridLayout_0->addWidget(mName, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_0->addItem(verticalSpacer, 4, 0, 1, 1);

        mTypeCombo = new QComboBox(QgsAddTabOrGroupBase);
        mTypeCombo->setObjectName(QString::fromUtf8("mTypeCombo"));

        gridLayout_0->addWidget(mTypeCombo, 1, 1, 1, 1);

        label_2 = new QLabel(QgsAddTabOrGroupBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_0->addWidget(label_2, 1, 0, 1, 1);

        mParentCombo = new QComboBox(QgsAddTabOrGroupBase);
        mParentCombo->setObjectName(QString::fromUtf8("mParentCombo"));
        mParentCombo->setEnabled(true);

        gridLayout_0->addWidget(mParentCombo, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsAddTabOrGroupBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_0->addWidget(buttonBox, 5, 0, 1, 2);

        mColumnsLabel = new QLabel(QgsAddTabOrGroupBase);
        mColumnsLabel->setObjectName(QString::fromUtf8("mColumnsLabel"));

        gridLayout_0->addWidget(mColumnsLabel, 3, 0, 1, 1);

        mColumnCountSpinBox = new QgsSpinBox(QgsAddTabOrGroupBase);
        mColumnCountSpinBox->setObjectName(QString::fromUtf8("mColumnCountSpinBox"));
        mColumnCountSpinBox->setMinimum(1);
        mColumnCountSpinBox->setMaximum(5);

        gridLayout_0->addWidget(mColumnCountSpinBox, 3, 1, 1, 1);

        label = new QLabel(QgsAddTabOrGroupBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_0->addWidget(label, 0, 0, 1, 1);

        mLabelParent = new QLabel(QgsAddTabOrGroupBase);
        mLabelParent->setObjectName(QString::fromUtf8("mLabelParent"));

        gridLayout_0->addWidget(mLabelParent, 2, 0, 1, 1);

        gridLayout_0->setColumnStretch(0, 1);
        gridLayout_0->setColumnStretch(1, 2);
        QWidget::setTabOrder(mName, mColumnCountSpinBox);

        retranslateUi(QgsAddTabOrGroupBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAddTabOrGroupBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAddTabOrGroupBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAddTabOrGroupBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAddTabOrGroupBase)
    {
        label_2->setText(QCoreApplication::translate("QgsAddTabOrGroupBase", "Container type", nullptr));
        mColumnsLabel->setText(QCoreApplication::translate("QgsAddTabOrGroupBase", "Number of columns", nullptr));
        label->setText(QCoreApplication::translate("QgsAddTabOrGroupBase", "Label", nullptr));
        mLabelParent->setText(QCoreApplication::translate("QgsAddTabOrGroupBase", "Within", nullptr));
        (void)QgsAddTabOrGroupBase;
    } // retranslateUi

};

namespace Ui {
    class QgsAddTabOrGroupBase: public Ui_QgsAddTabOrGroupBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADDTABORGROUPBASE_H
