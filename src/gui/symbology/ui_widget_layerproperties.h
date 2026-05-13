/********************************************************************************
** Form generated from reading UI file 'widget_layerproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_LAYERPROPERTIES_H
#define UI_WIDGET_LAYERPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgseffectstackpropertieswidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_LayerPropertiesWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cboLayerType;
    QStackedWidget *stackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *mEnabledCheckBox;
    QgsPropertyOverrideButton *mEnabledDDBtn;
    QHBoxLayout *horizontalLayout_2;
    QgsEffectStackCompactWidget *mEffectWidget;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *LayerPropertiesWidget)
    {
        if (LayerPropertiesWidget->objectName().isEmpty())
            LayerPropertiesWidget->setObjectName(QString::fromUtf8("LayerPropertiesWidget"));
        LayerPropertiesWidget->resize(335, 439);
        LayerPropertiesWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(LayerPropertiesWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(LayerPropertiesWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cboLayerType = new QComboBox(LayerPropertiesWidget);
        cboLayerType->setObjectName(QString::fromUtf8("cboLayerType"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboLayerType->sizePolicy().hasHeightForWidth());
        cboLayerType->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cboLayerType);

        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(LayerPropertiesWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QString::fromUtf8("pageDummy"));
        verticalLayout = new QVBoxLayout(pageDummy);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(pageDummy);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(pageDummy);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        mEnabledCheckBox = new QCheckBox(LayerPropertiesWidget);
        mEnabledCheckBox->setObjectName(QString::fromUtf8("mEnabledCheckBox"));

        horizontalLayout_3->addWidget(mEnabledCheckBox);

        mEnabledDDBtn = new QgsPropertyOverrideButton(LayerPropertiesWidget);
        mEnabledDDBtn->setObjectName(QString::fromUtf8("mEnabledDDBtn"));

        horizontalLayout_3->addWidget(mEnabledDDBtn);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, -1, -1);
        mEffectWidget = new QgsEffectStackCompactWidget(LayerPropertiesWidget);
        mEffectWidget->setObjectName(QString::fromUtf8("mEffectWidget"));

        horizontalLayout_2->addWidget(mEffectWidget);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);


        retranslateUi(LayerPropertiesWidget);

        QMetaObject::connectSlotsByName(LayerPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *LayerPropertiesWidget)
    {
        label->setText(QCoreApplication::translate("LayerPropertiesWidget", "Symbol layer type", nullptr));
        label_2->setText(QCoreApplication::translate("LayerPropertiesWidget", "This layer doesn't have any editable properties", nullptr));
        mEnabledCheckBox->setText(QCoreApplication::translate("LayerPropertiesWidget", "Enable symbol layer", nullptr));
        mEnabledDDBtn->setText(QCoreApplication::translate("LayerPropertiesWidget", "\342\200\246", nullptr));
        (void)LayerPropertiesWidget;
    } // retranslateUi

};

namespace Ui {
    class LayerPropertiesWidget: public Ui_LayerPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_LAYERPROPERTIES_H
