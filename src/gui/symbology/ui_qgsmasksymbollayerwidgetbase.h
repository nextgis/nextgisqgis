/********************************************************************************
** Form generated from reading UI file 'qgsmasksymbollayerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMASKSYMBOLLAYERWIDGETBASE_H
#define UI_QGSMASKSYMBOLLAYERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMaskSymbolLayerWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsMaskSymbolLayerWidgetBase)
    {
        if (QgsMaskSymbolLayerWidgetBase->objectName().isEmpty())
            QgsMaskSymbolLayerWidgetBase->setObjectName(QString::fromUtf8("QgsMaskSymbolLayerWidgetBase"));
        QgsMaskSymbolLayerWidgetBase->resize(400, 300);
        QgsMaskSymbolLayerWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsMaskSymbolLayerWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsMaskSymbolLayerWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsMaskSymbolLayerWidgetBase);

        QMetaObject::connectSlotsByName(QgsMaskSymbolLayerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMaskSymbolLayerWidgetBase)
    {
        label->setText(QCoreApplication::translate("QgsMaskSymbolLayerWidgetBase", "<html><head/><body><p>The sub-symbol of a mask symbol layer defines a mask shape. Its color property will be ignored and only the opacity of the shape will be used as a mask shape.</p><p>This shape should then be selected as a <span style=\" font-style:italic;\">mask source</span> in the Masks properties of a layer in order to enable masking.</p></body></html>", nullptr));
        (void)QgsMaskSymbolLayerWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMaskSymbolLayerWidgetBase: public Ui_QgsMaskSymbolLayerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMASKSYMBOLLAYERWIDGETBASE_H
