/********************************************************************************
** Form generated from reading UI file 'qgstiledscenetexturerendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILEDSCENETEXTURERENDERERWIDGETBASE_H
#define UI_QGSTILEDSCENETEXTURERENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTiledSceneTextureRendererWidgetBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QgsSymbolButton *mFillSymbolButton;

    void setupUi(QWidget *QgsTiledSceneTextureRendererWidgetBase)
    {
        if (QgsTiledSceneTextureRendererWidgetBase->objectName().isEmpty())
            QgsTiledSceneTextureRendererWidgetBase->setObjectName(QString::fromUtf8("QgsTiledSceneTextureRendererWidgetBase"));
        QgsTiledSceneTextureRendererWidgetBase->resize(350, 345);
        QgsTiledSceneTextureRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsTiledSceneTextureRendererWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 292, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        label_2 = new QLabel(QgsTiledSceneTextureRendererWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mFillSymbolButton = new QgsSymbolButton(QgsTiledSceneTextureRendererWidgetBase);
        mFillSymbolButton->setObjectName(QString::fromUtf8("mFillSymbolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFillSymbolButton->sizePolicy().hasHeightForWidth());
        mFillSymbolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mFillSymbolButton, 0, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(QgsTiledSceneTextureRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsTiledSceneTextureRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsTiledSceneTextureRendererWidgetBase)
    {
        label_2->setText(QCoreApplication::translate("QgsTiledSceneTextureRendererWidgetBase", "Fill symbol", nullptr));
#if QT_CONFIG(tooltip)
        mFillSymbolButton->setToolTip(QCoreApplication::translate("QgsTiledSceneTextureRendererWidgetBase", "Fill symbol to use when scene content has no textures available", nullptr));
#endif // QT_CONFIG(tooltip)
        mFillSymbolButton->setText(QCoreApplication::translate("QgsTiledSceneTextureRendererWidgetBase", "Change\342\200\246", nullptr));
        (void)QgsTiledSceneTextureRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsTiledSceneTextureRendererWidgetBase: public Ui_QgsTiledSceneTextureRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILEDSCENETEXTURERENDERERWIDGETBASE_H
