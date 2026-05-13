/********************************************************************************
** Form generated from reading UI file 'qgspropertycolorassistantwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROPERTYCOLORASSISTANTWIDGET_H
#define UI_QGSPROPERTYCOLORASSISTANTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgscolorrampbutton.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyColorAssistant
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QgsColorButton *mNullColorButton;
    QgsColorRampButton *mColorRampButton;
    QLabel *label;

    void setupUi(QWidget *PropertyColorAssistant)
    {
        if (PropertyColorAssistant->objectName().isEmpty())
            PropertyColorAssistant->setObjectName(QString::fromUtf8("PropertyColorAssistant"));
        PropertyColorAssistant->resize(285, 115);
        gridLayout_2 = new QGridLayout(PropertyColorAssistant);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        label_8 = new QLabel(PropertyColorAssistant);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        mNullColorButton = new QgsColorButton(PropertyColorAssistant);
        mNullColorButton->setObjectName(QString::fromUtf8("mNullColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mNullColorButton->sizePolicy().hasHeightForWidth());
        mNullColorButton->setSizePolicy(sizePolicy);
        mNullColorButton->setMinimumSize(QSize(120, 0));
        mNullColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(mNullColorButton, 4, 1, 1, 1);

        mColorRampButton = new QgsColorRampButton(PropertyColorAssistant);
        mColorRampButton->setObjectName(QString::fromUtf8("mColorRampButton"));
        sizePolicy.setHeightForWidth(mColorRampButton->sizePolicy().hasHeightForWidth());
        mColorRampButton->setSizePolicy(sizePolicy);
        mColorRampButton->setMinimumSize(QSize(120, 0));
        mColorRampButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(mColorRampButton, 2, 1, 1, 1);

        label = new QLabel(PropertyColorAssistant);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        QWidget::setTabOrder(mColorRampButton, mNullColorButton);

        retranslateUi(PropertyColorAssistant);

        QMetaObject::connectSlotsByName(PropertyColorAssistant);
    } // setupUi

    void retranslateUi(QWidget *PropertyColorAssistant)
    {
        label_8->setText(QCoreApplication::translate("PropertyColorAssistant", "Color when NULL", nullptr));
        mNullColorButton->setText(QString());
        label->setText(QCoreApplication::translate("PropertyColorAssistant", "Color ramp", nullptr));
        (void)PropertyColorAssistant;
    } // retranslateUi

};

namespace Ui {
    class PropertyColorAssistant: public Ui_PropertyColorAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROPERTYCOLORASSISTANTWIDGET_H
