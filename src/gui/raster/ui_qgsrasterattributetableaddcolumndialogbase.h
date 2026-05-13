/********************************************************************************
** Form generated from reading UI file 'qgsrasterattributetableaddcolumndialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERATTRIBUTETABLEADDCOLUMNDIALOGBASE_H
#define UI_QGSRASTERATTRIBUTETABLEADDCOLUMNDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsRasterAttributeTableAddColumnDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mColumnType;
    QGridLayout *gridLayout_3;
    QRadioButton *mStandardColumn;
    QRadioButton *mColor;
    QRadioButton *mRamp;
    QGroupBox *mDefinition;
    QGridLayout *gridLayout_2;
    QComboBox *mDataType;
    QLabel *mError;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *mName;
    QComboBox *mUsage;
    QLabel *label_4;
    QGroupBox *mPositionGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *mBefore;
    QRadioButton *mAfter;
    QComboBox *mColumn;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsRasterAttributeTableAddColumnDialogBase)
    {
        if (QgsRasterAttributeTableAddColumnDialogBase->objectName().isEmpty())
            QgsRasterAttributeTableAddColumnDialogBase->setObjectName(QString::fromUtf8("QgsRasterAttributeTableAddColumnDialogBase"));
        QgsRasterAttributeTableAddColumnDialogBase->resize(422, 459);
        verticalLayout = new QVBoxLayout(QgsRasterAttributeTableAddColumnDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mColumnType = new QGroupBox(QgsRasterAttributeTableAddColumnDialogBase);
        mColumnType->setObjectName(QString::fromUtf8("mColumnType"));
        gridLayout_3 = new QGridLayout(mColumnType);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mStandardColumn = new QRadioButton(mColumnType);
        mStandardColumn->setObjectName(QString::fromUtf8("mStandardColumn"));
        mStandardColumn->setChecked(true);

        gridLayout_3->addWidget(mStandardColumn, 0, 0, 1, 1);

        mColor = new QRadioButton(mColumnType);
        mColor->setObjectName(QString::fromUtf8("mColor"));

        gridLayout_3->addWidget(mColor, 1, 0, 1, 1);

        mRamp = new QRadioButton(mColumnType);
        mRamp->setObjectName(QString::fromUtf8("mRamp"));

        gridLayout_3->addWidget(mRamp, 2, 0, 1, 1);


        verticalLayout->addWidget(mColumnType);

        mDefinition = new QGroupBox(QgsRasterAttributeTableAddColumnDialogBase);
        mDefinition->setObjectName(QString::fromUtf8("mDefinition"));
        gridLayout_2 = new QGridLayout(mDefinition);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDataType = new QComboBox(mDefinition);
        mDataType->setObjectName(QString::fromUtf8("mDataType"));

        gridLayout_2->addWidget(mDataType, 1, 1, 1, 1);

        mError = new QLabel(mDefinition);
        mError->setObjectName(QString::fromUtf8("mError"));

        gridLayout_2->addWidget(mError, 3, 1, 1, 1);

        label_2 = new QLabel(mDefinition);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(mDefinition);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        mName = new QLineEdit(mDefinition);
        mName->setObjectName(QString::fromUtf8("mName"));

        gridLayout_2->addWidget(mName, 2, 1, 1, 1);

        mUsage = new QComboBox(mDefinition);
        mUsage->setObjectName(QString::fromUtf8("mUsage"));

        gridLayout_2->addWidget(mUsage, 0, 1, 1, 1);

        label_4 = new QLabel(mDefinition);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);


        verticalLayout->addWidget(mDefinition);

        mPositionGroupBox = new QGroupBox(QgsRasterAttributeTableAddColumnDialogBase);
        mPositionGroupBox->setObjectName(QString::fromUtf8("mPositionGroupBox"));
        gridLayout = new QGridLayout(mPositionGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mBefore = new QRadioButton(mPositionGroupBox);
        mBefore->setObjectName(QString::fromUtf8("mBefore"));
        mBefore->setChecked(false);

        gridLayout->addWidget(mBefore, 3, 0, 1, 1);

        mAfter = new QRadioButton(mPositionGroupBox);
        mAfter->setObjectName(QString::fromUtf8("mAfter"));
        mAfter->setChecked(true);

        gridLayout->addWidget(mAfter, 4, 0, 1, 1);

        mColumn = new QComboBox(mPositionGroupBox);
        mColumn->setObjectName(QString::fromUtf8("mColumn"));

        gridLayout->addWidget(mColumn, 6, 0, 1, 2);


        verticalLayout->addWidget(mPositionGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mButtonBox = new QDialogButtonBox(QgsRasterAttributeTableAddColumnDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsRasterAttributeTableAddColumnDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsRasterAttributeTableAddColumnDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsRasterAttributeTableAddColumnDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRasterAttributeTableAddColumnDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterAttributeTableAddColumnDialogBase)
    {
        QgsRasterAttributeTableAddColumnDialogBase->setWindowTitle(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Add Column", nullptr));
        mColumnType->setTitle(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Column Type", nullptr));
        mStandardColumn->setText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Standard column", nullptr));
        mColor->setText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Color (RGBA)", nullptr));
        mRamp->setText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Color ramp (RGBA  minimum and RGBA maximum)", nullptr));
        mDefinition->setTitle(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Column Definition", nullptr));
        mError->setText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Error", nullptr));
        label_2->setText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Data type", nullptr));
        mName->setPlaceholderText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Enter the name of the new column", nullptr));
        label_4->setText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Usage", nullptr));
        mPositionGroupBox->setTitle(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Insertion point", nullptr));
        mBefore->setText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "Before", nullptr));
        mAfter->setText(QCoreApplication::translate("QgsRasterAttributeTableAddColumnDialogBase", "After", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterAttributeTableAddColumnDialogBase: public Ui_QgsRasterAttributeTableAddColumnDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERATTRIBUTETABLEADDCOLUMNDIALOGBASE_H
