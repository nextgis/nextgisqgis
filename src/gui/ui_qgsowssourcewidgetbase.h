/********************************************************************************
** Form generated from reading UI file 'qgsowssourcewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOWSSOURCEWIDGETBASE_H
#define UI_QGSOWSSOURCEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsprovidersourcewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOWSSourceWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mSpatialExtentBoxWidget;
    QVBoxLayout *verticalLayout_2;
    QgsExtentGroupBox *mSpatialExtentBox;

    void setupUi(QgsProviderSourceWidget *QgsOWSSourceWidgetBase)
    {
        if (QgsOWSSourceWidgetBase->objectName().isEmpty())
            QgsOWSSourceWidgetBase->setObjectName(QString::fromUtf8("QgsOWSSourceWidgetBase"));
        QgsOWSSourceWidgetBase->resize(629, 349);
        verticalLayout = new QVBoxLayout(QgsOWSSourceWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mSpatialExtentBoxWidget = new QWidget(QgsOWSSourceWidgetBase);
        mSpatialExtentBoxWidget->setObjectName(QString::fromUtf8("mSpatialExtentBoxWidget"));
        verticalLayout_2 = new QVBoxLayout(mSpatialExtentBoxWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSpatialExtentBox = new QgsExtentGroupBox(mSpatialExtentBoxWidget);
        mSpatialExtentBox->setObjectName(QString::fromUtf8("mSpatialExtentBox"));
        mSpatialExtentBox->setCheckable(true);
        mSpatialExtentBox->setChecked(false);
        mSpatialExtentBox->setProperty("collapsed", QVariant(true));

        verticalLayout_2->addWidget(mSpatialExtentBox);


        verticalLayout->addWidget(mSpatialExtentBoxWidget);


        retranslateUi(QgsOWSSourceWidgetBase);

        QMetaObject::connectSlotsByName(QgsOWSSourceWidgetBase);
    } // setupUi

    void retranslateUi(QgsProviderSourceWidget *QgsOWSSourceWidgetBase)
    {
        QgsOWSSourceWidgetBase->setWindowTitle(QCoreApplication::translate("QgsOWSSourceWidgetBase", "XYZ Connection", nullptr));
        mSpatialExtentBox->setTitle(QCoreApplication::translate("QgsOWSSourceWidgetBase", "Extent (current: none)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsOWSSourceWidgetBase: public Ui_QgsOWSSourceWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOWSSOURCEWIDGETBASE_H
