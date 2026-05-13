/********************************************************************************
** Form generated from reading UI file 'materialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIALWIDGET_H
#define UI_MATERIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaterialWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *mMaterialTypeComboBox;
    QStackedWidget *mStackedWidget;
    QWidget *mPageDummy;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;

    void setupUi(QWidget *MaterialWidgetBase)
    {
        if (MaterialWidgetBase->objectName().isEmpty())
            MaterialWidgetBase->setObjectName(QString::fromUtf8("MaterialWidgetBase"));
        MaterialWidgetBase->resize(382, 264);
        MaterialWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(MaterialWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mMaterialTypeComboBox = new QComboBox(MaterialWidgetBase);
        mMaterialTypeComboBox->setObjectName(QString::fromUtf8("mMaterialTypeComboBox"));

        verticalLayout->addWidget(mMaterialTypeComboBox);

        mStackedWidget = new QStackedWidget(MaterialWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        mPageDummy = new QWidget();
        mPageDummy->setObjectName(QString::fromUtf8("mPageDummy"));
        horizontalLayout = new QHBoxLayout(mPageDummy);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(mPageDummy);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        mStackedWidget->addWidget(mPageDummy);

        verticalLayout->addWidget(mStackedWidget);


        retranslateUi(MaterialWidgetBase);

        QMetaObject::connectSlotsByName(MaterialWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *MaterialWidgetBase)
    {
        label_2->setText(QCoreApplication::translate("MaterialWidgetBase", "This material doesn't have any editable properties", nullptr));
        (void)MaterialWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class MaterialWidgetBase: public Ui_MaterialWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIALWIDGET_H
