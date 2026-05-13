/********************************************************************************
** Form generated from reading UI file 'qgsprocessingparameterswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGPARAMETERSWIDGETBASE_H
#define UI_QGSPROCESSINGPARAMETERSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgspanelwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingParametersWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mScrollAreaLayout;
    QgsCollapsibleGroupBox *grpAdvanced;
    QVBoxLayout *mAdvancedGroupLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsProcessingParametersWidgetBase)
    {
        if (QgsProcessingParametersWidgetBase->objectName().isEmpty())
            QgsProcessingParametersWidgetBase->setObjectName(QString::fromUtf8("QgsProcessingParametersWidgetBase"));
        QgsProcessingParametersWidgetBase->resize(400, 90);
        QgsProcessingParametersWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsProcessingParametersWidgetBase);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsProcessingParametersWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 400, 90));
        mScrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mScrollAreaLayout->setObjectName(QString::fromUtf8("mScrollAreaLayout"));
        mScrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        grpAdvanced = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        grpAdvanced->setObjectName(QString::fromUtf8("grpAdvanced"));
        grpAdvanced->setProperty("collapsed", QVariant(true));
        mAdvancedGroupLayout = new QVBoxLayout(grpAdvanced);
        mAdvancedGroupLayout->setObjectName(QString::fromUtf8("mAdvancedGroupLayout"));

        mScrollAreaLayout->addWidget(grpAdvanced);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mScrollAreaLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(QgsProcessingParametersWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingParametersWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsProcessingParametersWidgetBase)
    {
        grpAdvanced->setTitle(QCoreApplication::translate("QgsProcessingParametersWidgetBase", "Advanced Parameters", nullptr));
        (void)QgsProcessingParametersWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingParametersWidgetBase: public Ui_QgsProcessingParametersWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGPARAMETERSWIDGETBASE_H
