/********************************************************************************
** Form generated from reading UI file 'qgsexpressionbasednumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONBASEDNUMERICFORMATWIDGETBASE_H
#define UI_QGSEXPRESSIONBASEDNUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include "qgsexpressionlineedit.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionBasedNumericFormatWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsExpressionLineEdit *mExpressionSelector;

    void setupUi(QgsPanelWidget *QgsExpressionBasedNumericFormatWidgetBase)
    {
        if (QgsExpressionBasedNumericFormatWidgetBase->objectName().isEmpty())
            QgsExpressionBasedNumericFormatWidgetBase->setObjectName(QString::fromUtf8("QgsExpressionBasedNumericFormatWidgetBase"));
        QgsExpressionBasedNumericFormatWidgetBase->resize(288, 289);
        QgsExpressionBasedNumericFormatWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsExpressionBasedNumericFormatWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mExpressionSelector = new QgsExpressionLineEdit(QgsExpressionBasedNumericFormatWidgetBase);
        mExpressionSelector->setObjectName(QString::fromUtf8("mExpressionSelector"));

        verticalLayout->addWidget(mExpressionSelector);


        retranslateUi(QgsExpressionBasedNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsExpressionBasedNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsExpressionBasedNumericFormatWidgetBase)
    {
        (void)QgsExpressionBasedNumericFormatWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionBasedNumericFormatWidgetBase: public Ui_QgsExpressionBasedNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONBASEDNUMERICFORMATWIDGETBASE_H
