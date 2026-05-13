/********************************************************************************
** Form generated from reading UI file 'qgsrasterattributetableaddrowdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERATTRIBUTETABLEADDROWDIALOGBASE_H
#define UI_QGSRASTERATTRIBUTETABLEADDROWDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsRasterAttributeTableAddRowDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *mPositionGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *mBefore;
    QRadioButton *mAfter;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsRasterAttributeTableAddRowDialogBase)
    {
        if (QgsRasterAttributeTableAddRowDialogBase->objectName().isEmpty())
            QgsRasterAttributeTableAddRowDialogBase->setObjectName(QString::fromUtf8("QgsRasterAttributeTableAddRowDialogBase"));
        QgsRasterAttributeTableAddRowDialogBase->resize(422, 154);
        verticalLayout = new QVBoxLayout(QgsRasterAttributeTableAddRowDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsRasterAttributeTableAddRowDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mPositionGroupBox = new QGroupBox(QgsRasterAttributeTableAddRowDialogBase);
        mPositionGroupBox->setObjectName(QString::fromUtf8("mPositionGroupBox"));
        gridLayout = new QGridLayout(mPositionGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mBefore = new QRadioButton(mPositionGroupBox);
        mBefore->setObjectName(QString::fromUtf8("mBefore"));
        mBefore->setChecked(true);

        gridLayout->addWidget(mBefore, 3, 0, 1, 1);

        mAfter = new QRadioButton(mPositionGroupBox);
        mAfter->setObjectName(QString::fromUtf8("mAfter"));

        gridLayout->addWidget(mAfter, 4, 0, 1, 1);


        verticalLayout->addWidget(mPositionGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mButtonBox = new QDialogButtonBox(QgsRasterAttributeTableAddRowDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsRasterAttributeTableAddRowDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsRasterAttributeTableAddRowDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsRasterAttributeTableAddRowDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRasterAttributeTableAddRowDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterAttributeTableAddRowDialogBase)
    {
        QgsRasterAttributeTableAddRowDialogBase->setWindowTitle(QCoreApplication::translate("QgsRasterAttributeTableAddRowDialogBase", "Add Row", nullptr));
        label->setText(QCoreApplication::translate("QgsRasterAttributeTableAddRowDialogBase", "Add a new row to the attribute table.", nullptr));
        mPositionGroupBox->setTitle(QCoreApplication::translate("QgsRasterAttributeTableAddRowDialogBase", "Insertion point", nullptr));
        mBefore->setText(QCoreApplication::translate("QgsRasterAttributeTableAddRowDialogBase", "Before current row ", nullptr));
        mAfter->setText(QCoreApplication::translate("QgsRasterAttributeTableAddRowDialogBase", "After current row ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterAttributeTableAddRowDialogBase: public Ui_QgsRasterAttributeTableAddRowDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERATTRIBUTETABLEADDROWDIALOGBASE_H
