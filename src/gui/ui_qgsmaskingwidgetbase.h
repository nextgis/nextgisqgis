/********************************************************************************
** Form generated from reading UI file 'qgsmaskingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMASKINGWIDGETBASE_H
#define UI_QGSMASKINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmasksourceselectionwidget.h"
#include "qgsmessagebar.h"
#include "qgssymbollayerselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMaskingWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsMessageBar *mMessageBar;
    QLabel *label;
    QgsSymbolLayerSelectionWidget *mMaskTargetsWidget;
    QLabel *label_2;
    QgsMaskSourceSelectionWidget *mMaskSourcesWidget;

    void setupUi(QWidget *QgsMaskingWidgetBase)
    {
        if (QgsMaskingWidgetBase->objectName().isEmpty())
            QgsMaskingWidgetBase->setObjectName(QString::fromUtf8("QgsMaskingWidgetBase"));
        QgsMaskingWidgetBase->resize(812, 538);
        QgsMaskingWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(QgsMaskingWidgetBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mMessageBar = new QgsMessageBar(QgsMaskingWidgetBase);
        mMessageBar->setObjectName(QString::fromUtf8("mMessageBar"));
        mMessageBar->setFrameShape(QFrame::StyledPanel);
        mMessageBar->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(mMessageBar);

        label = new QLabel(QgsMaskingWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        mMaskTargetsWidget = new QgsSymbolLayerSelectionWidget(QgsMaskingWidgetBase);
        mMaskTargetsWidget->setObjectName(QString::fromUtf8("mMaskTargetsWidget"));

        verticalLayout_2->addWidget(mMaskTargetsWidget);

        label_2 = new QLabel(QgsMaskingWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        mMaskSourcesWidget = new QgsMaskSourceSelectionWidget(QgsMaskingWidgetBase);
        mMaskSourcesWidget->setObjectName(QString::fromUtf8("mMaskSourcesWidget"));

        verticalLayout_2->addWidget(mMaskSourcesWidget);


        retranslateUi(QgsMaskingWidgetBase);

        QMetaObject::connectSlotsByName(QgsMaskingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMaskingWidgetBase)
    {
        label->setText(QCoreApplication::translate("QgsMaskingWidgetBase", "Masked symbol layers", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMaskingWidgetBase", "Masking symbol layers", nullptr));
        (void)QgsMaskingWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMaskingWidgetBase: public Ui_QgsMaskingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMASKINGWIDGETBASE_H
