/********************************************************************************
** Form generated from reading UI file 'qgsideoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSIDEOPTIONSWIDGETBASE_H
#define UI_QGSIDEOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsIdeOptionsWidgetBase
{
public:
    QGridLayout *gridLayout_16;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QLineEdit *mTokenLineEdit;
    QPushButton *mGenerateTokenButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsIdeOptionsWidgetBase)
    {
        if (QgsIdeOptionsWidgetBase->objectName().isEmpty())
            QgsIdeOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsIdeOptionsWidgetBase"));
        QgsIdeOptionsWidgetBase->resize(235, 117);
        gridLayout_16 = new QGridLayout(QgsIdeOptionsWidgetBase);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsIdeOptionsWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 235, 117));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mTokenLineEdit = new QLineEdit(groupBox);
        mTokenLineEdit->setObjectName(QString::fromUtf8("mTokenLineEdit"));

        gridLayout_6->addWidget(mTokenLineEdit, 0, 0, 1, 1);

        mGenerateTokenButton = new QPushButton(groupBox);
        mGenerateTokenButton->setObjectName(QString::fromUtf8("mGenerateTokenButton"));

        gridLayout_6->addWidget(mGenerateTokenButton, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_16->addWidget(scrollArea, 0, 0, 1, 1);

        QWidget::setTabOrder(scrollArea, mTokenLineEdit);
        QWidget::setTabOrder(mTokenLineEdit, mGenerateTokenButton);

        retranslateUi(QgsIdeOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsIdeOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsIdeOptionsWidgetBase)
    {
        groupBox->setTitle(QCoreApplication::translate("QgsIdeOptionsWidgetBase", "GitHub Access Token", nullptr));
        mTokenLineEdit->setPlaceholderText(QCoreApplication::translate("QgsIdeOptionsWidgetBase", "<PERSONAL_ACCESS_TOKEN>", nullptr));
        mGenerateTokenButton->setText(QCoreApplication::translate("QgsIdeOptionsWidgetBase", "Generate\342\200\246", nullptr));
        (void)QgsIdeOptionsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsIdeOptionsWidgetBase: public Ui_QgsIdeOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSIDEOPTIONSWIDGETBASE_H
