/********************************************************************************
** Form generated from reading UI file 'nullmaterialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NULLMATERIALWIDGET_H
#define UI_NULLMATERIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NullMaterialWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *lblAmbient;

    void setupUi(QWidget *NullMaterialWidget)
    {
        if (NullMaterialWidget->objectName().isEmpty())
            NullMaterialWidget->setObjectName(QString::fromUtf8("NullMaterialWidget"));
        NullMaterialWidget->resize(394, 242);
        NullMaterialWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(NullMaterialWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblAmbient = new QLabel(NullMaterialWidget);
        lblAmbient->setObjectName(QString::fromUtf8("lblAmbient"));

        gridLayout->addWidget(lblAmbient, 0, 0, 1, 1);


        retranslateUi(NullMaterialWidget);

        QMetaObject::connectSlotsByName(NullMaterialWidget);
    } // setupUi

    void retranslateUi(QWidget *NullMaterialWidget)
    {
        lblAmbient->setText(QCoreApplication::translate("NullMaterialWidget", "Embedded textures from source model will be used.", nullptr));
        (void)NullMaterialWidget;
    } // retranslateUi

};

namespace Ui {
    class NullMaterialWidget: public Ui_NullMaterialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NULLMATERIALWIDGET_H
