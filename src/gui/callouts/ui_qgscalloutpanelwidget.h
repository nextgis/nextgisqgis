/********************************************************************************
** Form generated from reading UI file 'qgscalloutpanelwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCALLOUTPANELWIDGET_H
#define UI_QGSCALLOUTPANELWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCalloutPanelWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_11;
    QComboBox *mCalloutStyleComboBox;
    QStackedWidget *mCalloutStackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_45;

    void setupUi(QgsPanelWidget *QgsCalloutPanelWidgetBase)
    {
        if (QgsCalloutPanelWidgetBase->objectName().isEmpty())
            QgsCalloutPanelWidgetBase->setObjectName(QString::fromUtf8("QgsCalloutPanelWidgetBase"));
        QgsCalloutPanelWidgetBase->resize(352, 342);
        gridLayout = new QGridLayout(QgsCalloutPanelWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(QgsCalloutPanelWidgetBase);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        mCalloutStyleComboBox = new QComboBox(QgsCalloutPanelWidgetBase);
        mCalloutStyleComboBox->setObjectName(QString::fromUtf8("mCalloutStyleComboBox"));

        gridLayout->addWidget(mCalloutStyleComboBox, 0, 1, 1, 1);

        mCalloutStackedWidget = new QStackedWidget(QgsCalloutPanelWidgetBase);
        mCalloutStackedWidget->setObjectName(QString::fromUtf8("mCalloutStackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QString::fromUtf8("pageDummy"));
        verticalLayout_19 = new QVBoxLayout(pageDummy);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label_45 = new QLabel(pageDummy);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setAlignment(Qt::AlignCenter);
        label_45->setWordWrap(true);

        verticalLayout_19->addWidget(label_45);

        mCalloutStackedWidget->addWidget(pageDummy);

        gridLayout->addWidget(mCalloutStackedWidget, 1, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(QgsCalloutPanelWidgetBase);

        QMetaObject::connectSlotsByName(QgsCalloutPanelWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsCalloutPanelWidgetBase)
    {
        QgsCalloutPanelWidgetBase->setWindowTitle(QCoreApplication::translate("QgsCalloutPanelWidgetBase", "Callout", nullptr));
        label_11->setText(QCoreApplication::translate("QgsCalloutPanelWidgetBase", "Style", nullptr));
        label_45->setText(QCoreApplication::translate("QgsCalloutPanelWidgetBase", "This callout type doesn't have any editable properties", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsCalloutPanelWidgetBase: public Ui_QgsCalloutPanelWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCALLOUTPANELWIDGET_H
