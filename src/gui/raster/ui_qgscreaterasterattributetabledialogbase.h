/********************************************************************************
** Form generated from reading UI file 'qgscreaterasterattributetabledialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCREATERASTERATTRIBUTETABLEDIALOGBASE_H
#define UI_QGSCREATERASTERATTRIBUTETABLEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCreateRasterAttributeTableDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mCreateInfoLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *mDbfRadioButton;
    QgsFileWidget *mDbfPathWidget;
    QRadioButton *mNativeRadioButton;
    QCheckBox *mOpenRat;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsCreateRasterAttributeTableDialogBase)
    {
        if (QgsCreateRasterAttributeTableDialogBase->objectName().isEmpty())
            QgsCreateRasterAttributeTableDialogBase->setObjectName(QString::fromUtf8("QgsCreateRasterAttributeTableDialogBase"));
        QgsCreateRasterAttributeTableDialogBase->resize(391, 188);
        verticalLayout = new QVBoxLayout(QgsCreateRasterAttributeTableDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mCreateInfoLabel = new QLabel(QgsCreateRasterAttributeTableDialogBase);
        mCreateInfoLabel->setObjectName(QString::fromUtf8("mCreateInfoLabel"));
        mCreateInfoLabel->setWordWrap(true);

        verticalLayout->addWidget(mCreateInfoLabel);

        groupBox = new QGroupBox(QgsCreateRasterAttributeTableDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mDbfRadioButton = new QRadioButton(groupBox);
        mDbfRadioButton->setObjectName(QString::fromUtf8("mDbfRadioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDbfRadioButton->sizePolicy().hasHeightForWidth());
        mDbfRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mDbfRadioButton, 1, 0, 1, 1);

        mDbfPathWidget = new QgsFileWidget(groupBox);
        mDbfPathWidget->setObjectName(QString::fromUtf8("mDbfPathWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDbfPathWidget->sizePolicy().hasHeightForWidth());
        mDbfPathWidget->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mDbfPathWidget, 1, 1, 1, 1);

        mNativeRadioButton = new QRadioButton(groupBox);
        mNativeRadioButton->setObjectName(QString::fromUtf8("mNativeRadioButton"));
        mNativeRadioButton->setChecked(true);

        gridLayout->addWidget(mNativeRadioButton, 0, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        mOpenRat = new QCheckBox(QgsCreateRasterAttributeTableDialogBase);
        mOpenRat->setObjectName(QString::fromUtf8("mOpenRat"));
        mOpenRat->setChecked(true);

        verticalLayout->addWidget(mOpenRat);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mButtonBox = new QDialogButtonBox(QgsCreateRasterAttributeTableDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsCreateRasterAttributeTableDialogBase);

        QMetaObject::connectSlotsByName(QgsCreateRasterAttributeTableDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCreateRasterAttributeTableDialogBase)
    {
        QgsCreateRasterAttributeTableDialogBase->setWindowTitle(QCoreApplication::translate("QgsCreateRasterAttributeTableDialogBase", "New Raster Attribute Table", nullptr));
        mCreateInfoLabel->setText(QCoreApplication::translate("QgsCreateRasterAttributeTableDialogBase", "<html><head/><body><p>Create a new Raster Attribute Table from the current symbology.</p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsCreateRasterAttributeTableDialogBase", "Raster Attribute Table Storage", nullptr));
#if QT_CONFIG(tooltip)
        mDbfRadioButton->setToolTip(QCoreApplication::translate("QgsCreateRasterAttributeTableDialogBase", "<html><head/><body><p>This method will save the attribute table into a sidecar VAT.DBF file.</p><p><br/></p><p>The resulting file will not be associated with any particular band.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mDbfRadioButton->setText(QCoreApplication::translate("QgsCreateRasterAttributeTableDialogBase", "Sidecar VAT.DBF file", nullptr));
#if QT_CONFIG(tooltip)
        mNativeRadioButton->setToolTip(QCoreApplication::translate("QgsCreateRasterAttributeTableDialogBase", "<html><head/><body><p>This method will save the attribute table using the data provider, </p><p>overwriting any existing attribute table for the raster band used</p><p>by the current style.</p><p><br/></p><p>Depending on the data provider and the raster file format, the </p><p>attribute table will be embedded in the main raster file or saved</p><p> into a sidecar file managed by the data provider.</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mNativeRadioButton->setText(QCoreApplication::translate("QgsCreateRasterAttributeTableDialogBase", "Managed by the data provider", nullptr));
        mOpenRat->setText(QCoreApplication::translate("QgsCreateRasterAttributeTableDialogBase", "Open the newly created attribute table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsCreateRasterAttributeTableDialogBase: public Ui_QgsCreateRasterAttributeTableDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCREATERASTERATTRIBUTETABLEDIALOGBASE_H
