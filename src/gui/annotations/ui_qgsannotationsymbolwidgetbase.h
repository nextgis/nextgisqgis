/********************************************************************************
** Form generated from reading UI file 'qgsannotationsymbolwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONSYMBOLWIDGETBASE_H
#define UI_QGSANNOTATIONSYMBOLWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qgsannotationitemcommonpropertieswidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationSymbolWidgetBase
{
public:
    QGridLayout *gridLayout;
    QFrame *mSymbolSelectorFrame;
    QgsAnnotationItemCommonPropertiesWidget *mPropertiesWidget;

    void setupUi(QWidget *QgsAnnotationSymbolWidgetBase)
    {
        if (QgsAnnotationSymbolWidgetBase->objectName().isEmpty())
            QgsAnnotationSymbolWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationSymbolWidgetBase"));
        QgsAnnotationSymbolWidgetBase->resize(321, 325);
        gridLayout = new QGridLayout(QgsAnnotationSymbolWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mSymbolSelectorFrame = new QFrame(QgsAnnotationSymbolWidgetBase);
        mSymbolSelectorFrame->setObjectName(QString::fromUtf8("mSymbolSelectorFrame"));
        mSymbolSelectorFrame->setFrameShape(QFrame::NoFrame);
        mSymbolSelectorFrame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(mSymbolSelectorFrame, 0, 0, 1, 1);

        mPropertiesWidget = new QgsAnnotationItemCommonPropertiesWidget(QgsAnnotationSymbolWidgetBase);
        mPropertiesWidget->setObjectName(QString::fromUtf8("mPropertiesWidget"));

        gridLayout->addWidget(mPropertiesWidget, 1, 0, 1, 1);


        retranslateUi(QgsAnnotationSymbolWidgetBase);

        QMetaObject::connectSlotsByName(QgsAnnotationSymbolWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationSymbolWidgetBase)
    {
        QgsAnnotationSymbolWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationSymbolWidgetBase", "Marker Annotation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationSymbolWidgetBase: public Ui_QgsAnnotationSymbolWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONSYMBOLWIDGETBASE_H
