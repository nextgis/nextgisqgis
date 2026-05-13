/********************************************************************************
** Form generated from reading UI file 'qgslayertreegrouppropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYERTREEGROUPPROPERTIESWIDGETBASE_H
#define UI_QGSLAYERTREEGROUPPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgseffectstackpropertieswidget.h"
#include "qgsopacitywidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayerTreeGroupPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mRenderAsGroupCheckBox;
    QGridLayout *gridLayout;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QLabel *lblTransparency;
    QLabel *lblBlend;
    QgsOpacityWidget *mOpacityWidget;
    QgsEffectStackCompactWidget *mEffectWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayerTreeGroupPropertiesWidgetBase)
    {
        if (QgsLayerTreeGroupPropertiesWidgetBase->objectName().isEmpty())
            QgsLayerTreeGroupPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsLayerTreeGroupPropertiesWidgetBase"));
        QgsLayerTreeGroupPropertiesWidgetBase->resize(424, 702);
        verticalLayout = new QVBoxLayout(QgsLayerTreeGroupPropertiesWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mRenderAsGroupCheckBox = new QGroupBox(QgsLayerTreeGroupPropertiesWidgetBase);
        mRenderAsGroupCheckBox->setObjectName(QString::fromUtf8("mRenderAsGroupCheckBox"));
        mRenderAsGroupCheckBox->setCheckable(true);
        gridLayout = new QGridLayout(mRenderAsGroupCheckBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mBlendModeComboBox = new QgsBlendModeComboBox(mRenderAsGroupCheckBox);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mBlendModeComboBox->sizePolicy().hasHeightForWidth());
        mBlendModeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mBlendModeComboBox, 1, 2, 1, 1);

        lblTransparency = new QLabel(mRenderAsGroupCheckBox);
        lblTransparency->setObjectName(QString::fromUtf8("lblTransparency"));

        gridLayout->addWidget(lblTransparency, 0, 0, 1, 1);

        lblBlend = new QLabel(mRenderAsGroupCheckBox);
        lblBlend->setObjectName(QString::fromUtf8("lblBlend"));

        gridLayout->addWidget(lblBlend, 1, 0, 1, 2);

        mOpacityWidget = new QgsOpacityWidget(mRenderAsGroupCheckBox);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOpacityWidget, 0, 2, 1, 1);

        mEffectWidget = new QgsEffectStackCompactWidget(mRenderAsGroupCheckBox);
        mEffectWidget->setObjectName(QString::fromUtf8("mEffectWidget"));
        mEffectWidget->setMinimumSize(QSize(16, 16));
        mEffectWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mEffectWidget, 2, 0, 1, 3);


        verticalLayout->addWidget(mRenderAsGroupCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mRenderAsGroupCheckBox, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mEffectWidget);

        retranslateUi(QgsLayerTreeGroupPropertiesWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayerTreeGroupPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayerTreeGroupPropertiesWidgetBase)
    {
        QgsLayerTreeGroupPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayerTreeGroupPropertiesWidgetBase", "Group Properties", nullptr));
        mRenderAsGroupCheckBox->setTitle(QCoreApplication::translate("QgsLayerTreeGroupPropertiesWidgetBase", "Render Layers as a Group", nullptr));
        lblTransparency->setText(QCoreApplication::translate("QgsLayerTreeGroupPropertiesWidgetBase", "Opacity", nullptr));
        lblBlend->setText(QCoreApplication::translate("QgsLayerTreeGroupPropertiesWidgetBase", "Blending mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayerTreeGroupPropertiesWidgetBase: public Ui_QgsLayerTreeGroupPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYERTREEGROUPPROPERTIESWIDGETBASE_H
