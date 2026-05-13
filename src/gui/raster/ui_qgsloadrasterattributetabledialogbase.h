/********************************************************************************
** Form generated from reading UI file 'qgsloadrasterattributetabledialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLOADRASTERATTRIBUTETABLEDIALOGBASE_H
#define UI_QGSLOADRASTERATTRIBUTETABLEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilewidget.h"
#include "qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLoadRasterAttributeTableDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mLoadInfoLabel;
    QgsFileWidget *mDbfPathWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsRasterBandComboBox *mRasterBand;
    QCheckBox *mOpenRat;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsLoadRasterAttributeTableDialogBase)
    {
        if (QgsLoadRasterAttributeTableDialogBase->objectName().isEmpty())
            QgsLoadRasterAttributeTableDialogBase->setObjectName(QString::fromUtf8("QgsLoadRasterAttributeTableDialogBase"));
        QgsLoadRasterAttributeTableDialogBase->resize(391, 119);
        verticalLayout = new QVBoxLayout(QgsLoadRasterAttributeTableDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mLoadInfoLabel = new QLabel(QgsLoadRasterAttributeTableDialogBase);
        mLoadInfoLabel->setObjectName(QString::fromUtf8("mLoadInfoLabel"));
        mLoadInfoLabel->setWordWrap(true);

        verticalLayout->addWidget(mLoadInfoLabel);

        mDbfPathWidget = new QgsFileWidget(QgsLoadRasterAttributeTableDialogBase);
        mDbfPathWidget->setObjectName(QString::fromUtf8("mDbfPathWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDbfPathWidget->sizePolicy().hasHeightForWidth());
        mDbfPathWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mDbfPathWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QgsLoadRasterAttributeTableDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mRasterBand = new QgsRasterBandComboBox(QgsLoadRasterAttributeTableDialogBase);
        mRasterBand->setObjectName(QString::fromUtf8("mRasterBand"));

        horizontalLayout->addWidget(mRasterBand);


        verticalLayout->addLayout(horizontalLayout);

        mOpenRat = new QCheckBox(QgsLoadRasterAttributeTableDialogBase);
        mOpenRat->setObjectName(QString::fromUtf8("mOpenRat"));
        mOpenRat->setChecked(true);

        verticalLayout->addWidget(mOpenRat);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mButtonBox = new QDialogButtonBox(QgsLoadRasterAttributeTableDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsLoadRasterAttributeTableDialogBase);

        QMetaObject::connectSlotsByName(QgsLoadRasterAttributeTableDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLoadRasterAttributeTableDialogBase)
    {
        QgsLoadRasterAttributeTableDialogBase->setWindowTitle(QCoreApplication::translate("QgsLoadRasterAttributeTableDialogBase", "Load Raster Attribute Table", nullptr));
        mLoadInfoLabel->setText(QCoreApplication::translate("QgsLoadRasterAttributeTableDialogBase", "<html><head/><body><p>Load a new Raster Attribute Table from a VAT.DBF file.</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("QgsLoadRasterAttributeTableDialogBase", "Associate to raster band", nullptr));
        mOpenRat->setText(QCoreApplication::translate("QgsLoadRasterAttributeTableDialogBase", "Open the newly loaded attribute table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLoadRasterAttributeTableDialogBase: public Ui_QgsLoadRasterAttributeTableDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLOADRASTERATTRIBUTETABLEDIALOGBASE_H
