/********************************************************************************
** Form generated from reading UI file 'qgsembeddedsymbolrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEMBEDDEDSYMBOLRENDERERWIDGETBASE_H
#define UI_QGSEMBEDDEDSYMBOLRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsEmbeddedSymbolRendererWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsSymbolButton *mDefaultSymbolToolButton;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsEmbeddedSymbolRendererWidgetBase)
    {
        if (QgsEmbeddedSymbolRendererWidgetBase->objectName().isEmpty())
            QgsEmbeddedSymbolRendererWidgetBase->setObjectName(QString::fromUtf8("QgsEmbeddedSymbolRendererWidgetBase"));
        QgsEmbeddedSymbolRendererWidgetBase->resize(316, 78);
        QgsEmbeddedSymbolRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsEmbeddedSymbolRendererWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mDefaultSymbolToolButton = new QgsSymbolButton(QgsEmbeddedSymbolRendererWidgetBase);
        mDefaultSymbolToolButton->setObjectName(QString::fromUtf8("mDefaultSymbolToolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDefaultSymbolToolButton->sizePolicy().hasHeightForWidth());
        mDefaultSymbolToolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mDefaultSymbolToolButton, 0, 1, 1, 1);

        label = new QLabel(QgsEmbeddedSymbolRendererWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(QgsEmbeddedSymbolRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsEmbeddedSymbolRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsEmbeddedSymbolRendererWidgetBase)
    {
        mDefaultSymbolToolButton->setText(QString());
        label->setText(QCoreApplication::translate("QgsEmbeddedSymbolRendererWidgetBase", "Default symbol", nullptr));
        (void)QgsEmbeddedSymbolRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsEmbeddedSymbolRendererWidgetBase: public Ui_QgsEmbeddedSymbolRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEMBEDDEDSYMBOLRENDERERWIDGETBASE_H
