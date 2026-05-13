/********************************************************************************
** Form generated from reading UI file 'qgsrasterattributetabledialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERATTRIBUTETABLEDIALOGBASE_H
#define UI_QGSRASTERATTRIBUTETABLEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "qgsrasterattributetablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QRasterAttributeTableDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsRasterAttributeTableWidget *mRatWidget;

    void setupUi(QDialog *QRasterAttributeTableDialogBase)
    {
        if (QRasterAttributeTableDialogBase->objectName().isEmpty())
            QRasterAttributeTableDialogBase->setObjectName(QString::fromUtf8("QRasterAttributeTableDialogBase"));
        QRasterAttributeTableDialogBase->resize(967, 489);
        verticalLayout = new QVBoxLayout(QRasterAttributeTableDialogBase);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        mRatWidget = new QgsRasterAttributeTableWidget(QRasterAttributeTableDialogBase);
        mRatWidget->setObjectName(QString::fromUtf8("mRatWidget"));

        verticalLayout->addWidget(mRatWidget);


        retranslateUi(QRasterAttributeTableDialogBase);

        QMetaObject::connectSlotsByName(QRasterAttributeTableDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QRasterAttributeTableDialogBase)
    {
        QRasterAttributeTableDialogBase->setWindowTitle(QCoreApplication::translate("QRasterAttributeTableDialogBase", "Raster Attribute Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QRasterAttributeTableDialogBase: public Ui_QRasterAttributeTableDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERATTRIBUTETABLEDIALOGBASE_H
