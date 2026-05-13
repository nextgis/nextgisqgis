/********************************************************************************
** Form generated from reading UI file 'qgstiledscenewireframerendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILEDSCENEWIREFRAMERENDERERWIDGETBASE_H
#define UI_QGSTILEDSCENEWIREFRAMERENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTiledSceneWireframeRendererWidgetBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mCheckUseTextureColors;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QgsSymbolButton *mFillSymbolButton;
    QLabel *label_2;
    QgsSymbolButton *mLineSymbolButton;

    void setupUi(QWidget *QgsTiledSceneWireframeRendererWidgetBase)
    {
        if (QgsTiledSceneWireframeRendererWidgetBase->objectName().isEmpty())
            QgsTiledSceneWireframeRendererWidgetBase->setObjectName(QString::fromUtf8("QgsTiledSceneWireframeRendererWidgetBase"));
        QgsTiledSceneWireframeRendererWidgetBase->resize(350, 345);
        QgsTiledSceneWireframeRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsTiledSceneWireframeRendererWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mCheckUseTextureColors = new QCheckBox(QgsTiledSceneWireframeRendererWidgetBase);
        mCheckUseTextureColors->setObjectName(QString::fromUtf8("mCheckUseTextureColors"));

        gridLayout->addWidget(mCheckUseTextureColors, 2, 0, 1, 2);

        label = new QLabel(QgsTiledSceneWireframeRendererWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 292, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        mFillSymbolButton = new QgsSymbolButton(QgsTiledSceneWireframeRendererWidgetBase);
        mFillSymbolButton->setObjectName(QString::fromUtf8("mFillSymbolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFillSymbolButton->sizePolicy().hasHeightForWidth());
        mFillSymbolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mFillSymbolButton, 0, 1, 1, 1);

        label_2 = new QLabel(QgsTiledSceneWireframeRendererWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mLineSymbolButton = new QgsSymbolButton(QgsTiledSceneWireframeRendererWidgetBase);
        mLineSymbolButton->setObjectName(QString::fromUtf8("mLineSymbolButton"));
        sizePolicy.setHeightForWidth(mLineSymbolButton->sizePolicy().hasHeightForWidth());
        mLineSymbolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLineSymbolButton, 1, 1, 1, 1);

        QWidget::setTabOrder(mFillSymbolButton, mLineSymbolButton);
        QWidget::setTabOrder(mLineSymbolButton, mCheckUseTextureColors);

        retranslateUi(QgsTiledSceneWireframeRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsTiledSceneWireframeRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsTiledSceneWireframeRendererWidgetBase)
    {
        mCheckUseTextureColors->setText(QCoreApplication::translate("QgsTiledSceneWireframeRendererWidgetBase", "Use texture colors", nullptr));
        label->setText(QCoreApplication::translate("QgsTiledSceneWireframeRendererWidgetBase", "Fill symbol", nullptr));
        mFillSymbolButton->setText(QCoreApplication::translate("QgsTiledSceneWireframeRendererWidgetBase", "Change\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsTiledSceneWireframeRendererWidgetBase", "Line symbol", nullptr));
        mLineSymbolButton->setText(QCoreApplication::translate("QgsTiledSceneWireframeRendererWidgetBase", "Change\342\200\246", nullptr));
        (void)QgsTiledSceneWireframeRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsTiledSceneWireframeRendererWidgetBase: public Ui_QgsTiledSceneWireframeRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILEDSCENEWIREFRAMERENDERERWIDGETBASE_H
