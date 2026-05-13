/********************************************************************************
** Form generated from reading UI file 'simplelinematerialwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLELINEMATERIALWIDGETBASE_H
#define UI_SIMPLELINEMATERIALWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_SimpleLineMaterialWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsColorButton *btnAmbient;
    QgsPropertyOverrideButton *mAmbientDataDefinedButton;
    QLabel *lblAmbient;

    void setupUi(QWidget *SimpleLineMaterialWidgetBase)
    {
        if (SimpleLineMaterialWidgetBase->objectName().isEmpty())
            SimpleLineMaterialWidgetBase->setObjectName(QString::fromUtf8("SimpleLineMaterialWidgetBase"));
        SimpleLineMaterialWidgetBase->resize(394, 25);
        SimpleLineMaterialWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(SimpleLineMaterialWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnAmbient = new QgsColorButton(SimpleLineMaterialWidgetBase);
        btnAmbient->setObjectName(QString::fromUtf8("btnAmbient"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAmbient->sizePolicy().hasHeightForWidth());
        btnAmbient->setSizePolicy(sizePolicy);
        btnAmbient->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnAmbient, 0, 1, 1, 1);

        mAmbientDataDefinedButton = new QgsPropertyOverrideButton(SimpleLineMaterialWidgetBase);
        mAmbientDataDefinedButton->setObjectName(QString::fromUtf8("mAmbientDataDefinedButton"));

        gridLayout->addWidget(mAmbientDataDefinedButton, 0, 2, 1, 1);

        lblAmbient = new QLabel(SimpleLineMaterialWidgetBase);
        lblAmbient->setObjectName(QString::fromUtf8("lblAmbient"));

        gridLayout->addWidget(lblAmbient, 0, 0, 1, 1);


        retranslateUi(SimpleLineMaterialWidgetBase);

        QMetaObject::connectSlotsByName(SimpleLineMaterialWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *SimpleLineMaterialWidgetBase)
    {
        mAmbientDataDefinedButton->setText(QCoreApplication::translate("SimpleLineMaterialWidgetBase", "...", nullptr));
        lblAmbient->setText(QCoreApplication::translate("SimpleLineMaterialWidgetBase", "Color", nullptr));
        (void)SimpleLineMaterialWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class SimpleLineMaterialWidgetBase: public Ui_SimpleLineMaterialWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLELINEMATERIALWIDGETBASE_H
