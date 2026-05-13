/********************************************************************************
** Form generated from reading UI file 'qgspointcloudextentrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDEXTENTRENDERERWIDGETBASE_H
#define UI_QGSPOINTCLOUDEXTENTRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudExtentRendererWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QgsSymbolButton *mSymbolButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsPointCloudExtentRendererWidgetBase)
    {
        if (QgsPointCloudExtentRendererWidgetBase->objectName().isEmpty())
            QgsPointCloudExtentRendererWidgetBase->setObjectName(QString::fromUtf8("QgsPointCloudExtentRendererWidgetBase"));
        QgsPointCloudExtentRendererWidgetBase->resize(350, 345);
        QgsPointCloudExtentRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsPointCloudExtentRendererWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsPointCloudExtentRendererWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mSymbolButton = new QgsSymbolButton(QgsPointCloudExtentRendererWidgetBase);
        mSymbolButton->setObjectName(QString::fromUtf8("mSymbolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSymbolButton->sizePolicy().hasHeightForWidth());
        mSymbolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mSymbolButton, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 292, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        retranslateUi(QgsPointCloudExtentRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointCloudExtentRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointCloudExtentRendererWidgetBase)
    {
        label->setText(QCoreApplication::translate("QgsPointCloudExtentRendererWidgetBase", "Symbol", nullptr));
        mSymbolButton->setText(QCoreApplication::translate("QgsPointCloudExtentRendererWidgetBase", "Change\342\200\246", nullptr));
        (void)QgsPointCloudExtentRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudExtentRendererWidgetBase: public Ui_QgsPointCloudExtentRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDEXTENTRENDERERWIDGETBASE_H
