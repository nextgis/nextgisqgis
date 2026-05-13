/********************************************************************************
** Form generated from reading UI file 'qgsnewauxiliaryfielddialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWAUXILIARYFIELDDIALOGBASE_H
#define UI_QGSNEWAUXILIARYFIELDDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsNewAuxiliaryFieldDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *mType;
    QLabel *label_2;
    QLineEdit *mName;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewAuxiliaryFieldDialogBase)
    {
        if (QgsNewAuxiliaryFieldDialogBase->objectName().isEmpty())
            QgsNewAuxiliaryFieldDialogBase->setObjectName(QString::fromUtf8("QgsNewAuxiliaryFieldDialogBase"));
        QgsNewAuxiliaryFieldDialogBase->resize(440, 190);
        verticalLayout = new QVBoxLayout(QgsNewAuxiliaryFieldDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(QgsNewAuxiliaryFieldDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(QgsNewAuxiliaryFieldDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        mType = new QComboBox(QgsNewAuxiliaryFieldDialogBase);
        mType->setObjectName(QString::fromUtf8("mType"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mType);

        label_2 = new QLabel(QgsNewAuxiliaryFieldDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        mName = new QLineEdit(QgsNewAuxiliaryFieldDialogBase);
        mName->setObjectName(QString::fromUtf8("mName"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mName);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsNewAuxiliaryFieldDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsNewAuxiliaryFieldDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewAuxiliaryFieldDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewAuxiliaryFieldDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewAuxiliaryFieldDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewAuxiliaryFieldDialogBase)
    {
        QgsNewAuxiliaryFieldDialogBase->setWindowTitle(QCoreApplication::translate("QgsNewAuxiliaryFieldDialogBase", "Auxiliary Storage : New Auxiliary Field", nullptr));
        label_3->setText(QCoreApplication::translate("QgsNewAuxiliaryFieldDialogBase", "New auxiliary field parameters", nullptr));
        label->setText(QCoreApplication::translate("QgsNewAuxiliaryFieldDialogBase", "Type", nullptr));
        label_2->setText(QCoreApplication::translate("QgsNewAuxiliaryFieldDialogBase", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewAuxiliaryFieldDialogBase: public Ui_QgsNewAuxiliaryFieldDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWAUXILIARYFIELDDIALOGBASE_H
