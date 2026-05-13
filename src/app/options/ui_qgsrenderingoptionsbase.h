/********************************************************************************
** Form generated from reading UI file 'qgsrenderingoptionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERINGOPTIONSBASE_H
#define UI_QGSRENDERINGOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRenderingOptionsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QCheckBox *chkAddedVisibility;
    QgsSpinBox *spinMapUpdateInterval;
    QLabel *labelMagnifier;
    QgsSpinBox *spinMaxThreads;
    QLabel *label_56;
    QgsDoubleSpinBox *doubleSpinBoxMagnifierDefault;
    QLabel *label;
    QgsCollapsibleGroupBox *groupBox_8;
    QVBoxLayout *_5;
    QCheckBox *chkAntiAliasing;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsRenderingOptionsWidgetBase)
    {
        if (QgsRenderingOptionsWidgetBase->objectName().isEmpty())
            QgsRenderingOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsRenderingOptionsWidgetBase"));
        QgsRenderingOptionsWidgetBase->resize(627, 409);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsRenderingOptionsWidgetBase->sizePolicy().hasHeightForWidth());
        QgsRenderingOptionsWidgetBase->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QgsRenderingOptionsWidgetBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QgsCollapsibleGroupBox(QgsRenderingOptionsWidgetBase);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        chkAddedVisibility = new QCheckBox(groupBox_5);
        chkAddedVisibility->setObjectName(QString::fromUtf8("chkAddedVisibility"));

        gridLayout_2->addWidget(chkAddedVisibility, 0, 0, 1, 2);

        spinMapUpdateInterval = new QgsSpinBox(groupBox_5);
        spinMapUpdateInterval->setObjectName(QString::fromUtf8("spinMapUpdateInterval"));
        spinMapUpdateInterval->setMaximum(999999);
        spinMapUpdateInterval->setSingleStep(50);
        spinMapUpdateInterval->setValue(250);

        gridLayout_2->addWidget(spinMapUpdateInterval, 2, 1, 1, 1);

        labelMagnifier = new QLabel(groupBox_5);
        labelMagnifier->setObjectName(QString::fromUtf8("labelMagnifier"));

        gridLayout_2->addWidget(labelMagnifier, 3, 0, 1, 1);

        spinMaxThreads = new QgsSpinBox(groupBox_5);
        spinMaxThreads->setObjectName(QString::fromUtf8("spinMaxThreads"));

        gridLayout_2->addWidget(spinMaxThreads, 1, 1, 1, 1);

        label_56 = new QLabel(groupBox_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        gridLayout_2->addWidget(label_56, 2, 0, 1, 1);

        doubleSpinBoxMagnifierDefault = new QgsDoubleSpinBox(groupBox_5);
        doubleSpinBoxMagnifierDefault->setObjectName(QString::fromUtf8("doubleSpinBoxMagnifierDefault"));

        gridLayout_2->addWidget(doubleSpinBoxMagnifierDefault, 3, 1, 1, 1);

        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_8 = new QgsCollapsibleGroupBox(QgsRenderingOptionsWidgetBase);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        _5 = new QVBoxLayout(groupBox_8);
        _5->setSpacing(6);
        _5->setContentsMargins(11, 11, 11, 11);
        _5->setObjectName(QString::fromUtf8("_5"));
        _5->setContentsMargins(11, 11, 11, 11);
        chkAntiAliasing = new QCheckBox(groupBox_8);
        chkAntiAliasing->setObjectName(QString::fromUtf8("chkAntiAliasing"));

        _5->addWidget(chkAntiAliasing);


        gridLayout->addWidget(groupBox_8, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(chkAddedVisibility, spinMaxThreads);
        QWidget::setTabOrder(spinMaxThreads, spinMapUpdateInterval);
        QWidget::setTabOrder(spinMapUpdateInterval, doubleSpinBoxMagnifierDefault);
        QWidget::setTabOrder(doubleSpinBoxMagnifierDefault, chkAntiAliasing);

        retranslateUi(QgsRenderingOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsRenderingOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRenderingOptionsWidgetBase)
    {
        QgsRenderingOptionsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsRenderingOptionsWidgetBase", "Rendering Options", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QgsRenderingOptionsWidgetBase", "Rendering Behavior", nullptr));
        chkAddedVisibility->setText(QCoreApplication::translate("QgsRenderingOptionsWidgetBase", "By default new la&yers added to the map should be displayed", nullptr));
        spinMapUpdateInterval->setSuffix(QCoreApplication::translate("QgsRenderingOptionsWidgetBase", " ms", nullptr));
        labelMagnifier->setText(QCoreApplication::translate("QgsRenderingOptionsWidgetBase", "Magnification level", nullptr));
        label_56->setText(QCoreApplication::translate("QgsRenderingOptionsWidgetBase", "Map update interval", nullptr));
        label->setText(QCoreApplication::translate("QgsRenderingOptionsWidgetBase", "Maximum cores to use for map rendering", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("QgsRenderingOptionsWidgetBase", "Rendering Quality", nullptr));
        chkAntiAliasing->setText(QCoreApplication::translate("QgsRenderingOptionsWidgetBase", "Make lines appear less jagged at the expense of some drawing performance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRenderingOptionsWidgetBase: public Ui_QgsRenderingOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERINGOPTIONSBASE_H
