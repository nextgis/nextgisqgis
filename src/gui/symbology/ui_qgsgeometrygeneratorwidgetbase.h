/********************************************************************************
** Form generated from reading UI file 'qgsgeometrygeneratorwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOMETRYGENERATORWIDGETBASE_H
#define UI_QGSGEOMETRYGENERATORWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgsexpressionlineedit.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GeometryGeneratorWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsExpressionLineEdit *modificationExpressionSelector;
    QLabel *label_2;
    QLabel *label;
    QgsUnitSelectionWidget *mUnitWidget;
    QComboBox *cbxGeometryType;

    void setupUi(QWidget *GeometryGeneratorWidgetBase)
    {
        if (GeometryGeneratorWidgetBase->objectName().isEmpty())
            GeometryGeneratorWidgetBase->setObjectName(QString::fromUtf8("GeometryGeneratorWidgetBase"));
        GeometryGeneratorWidgetBase->resize(400, 300);
        GeometryGeneratorWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(GeometryGeneratorWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        modificationExpressionSelector = new QgsExpressionLineEdit(GeometryGeneratorWidgetBase);
        modificationExpressionSelector->setObjectName(QString::fromUtf8("modificationExpressionSelector"));

        gridLayout->addWidget(modificationExpressionSelector, 2, 0, 1, 2);

        label_2 = new QLabel(GeometryGeneratorWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(GeometryGeneratorWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mUnitWidget = new QgsUnitSelectionWidget(GeometryGeneratorWidgetBase);
        mUnitWidget->setObjectName(QString::fromUtf8("mUnitWidget"));
        mUnitWidget->setMinimumSize(QSize(0, 0));
        mUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mUnitWidget, 1, 1, 1, 1);

        cbxGeometryType = new QComboBox(GeometryGeneratorWidgetBase);
        cbxGeometryType->setObjectName(QString::fromUtf8("cbxGeometryType"));

        gridLayout->addWidget(cbxGeometryType, 0, 1, 1, 1);

        gridLayout->setRowStretch(2, 1);

        retranslateUi(GeometryGeneratorWidgetBase);

        QMetaObject::connectSlotsByName(GeometryGeneratorWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *GeometryGeneratorWidgetBase)
    {
        label_2->setText(QCoreApplication::translate("GeometryGeneratorWidgetBase", "Units", nullptr));
        label->setText(QCoreApplication::translate("GeometryGeneratorWidgetBase", "Geometry type", nullptr));
        (void)GeometryGeneratorWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class GeometryGeneratorWidgetBase: public Ui_GeometryGeneratorWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOMETRYGENERATORWIDGETBASE_H
