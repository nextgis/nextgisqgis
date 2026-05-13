/********************************************************************************
** Form generated from reading UI file 'qgsnewauxiliarylayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWAUXILIARYLAYERDIALOGBASE_H
#define UI_QGSNEWAUXILIARYLAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsNewAuxiliaryLayerDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewAuxiliaryLayerDialogBase)
    {
        if (QgsNewAuxiliaryLayerDialogBase->objectName().isEmpty())
            QgsNewAuxiliaryLayerDialogBase->setObjectName(QString::fromUtf8("QgsNewAuxiliaryLayerDialogBase"));
        QgsNewAuxiliaryLayerDialogBase->resize(440, 180);
        verticalLayout = new QVBoxLayout(QgsNewAuxiliaryLayerDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsNewAuxiliaryLayerDialogBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(QgsNewAuxiliaryLayerDialogBase);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsNewAuxiliaryLayerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsNewAuxiliaryLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewAuxiliaryLayerDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewAuxiliaryLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewAuxiliaryLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewAuxiliaryLayerDialogBase)
    {
        QgsNewAuxiliaryLayerDialogBase->setWindowTitle(QCoreApplication::translate("QgsNewAuxiliaryLayerDialogBase", "Auxiliary Storage : Choose Primary Key", nullptr));
        label->setText(QCoreApplication::translate("QgsNewAuxiliaryLayerDialogBase", "Select the primary key to use for joining with internal data storage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewAuxiliaryLayerDialogBase: public Ui_QgsNewAuxiliaryLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWAUXILIARYLAYERDIALOGBASE_H
