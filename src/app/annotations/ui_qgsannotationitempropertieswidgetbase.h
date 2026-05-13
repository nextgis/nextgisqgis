/********************************************************************************
** Form generated from reading UI file 'qgsannotationitempropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONITEMPROPERTIESWIDGETBASE_H
#define UI_QGSANNOTATIONITEMPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgseffectstackpropertieswidget.h"
#include "qgsopacitywidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationItemPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *mStack;
    QWidget *page;
    QWidget *page_2;
    QgsCollapsibleGroupBox *mLayerRenderingGroupBox;
    QGridLayout *gridLayout_2;
    QgsOpacityWidget *mOpacityWidget;
    QLabel *lblBlend;
    QLabel *lblTransparency;
    QgsEffectStackCompactWidget *mEffectWidget;
    QgsBlendModeComboBox *mBlendModeComboBox;

    void setupUi(QWidget *QgsAnnotationItemPropertiesWidgetBase)
    {
        if (QgsAnnotationItemPropertiesWidgetBase->objectName().isEmpty())
            QgsAnnotationItemPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationItemPropertiesWidgetBase"));
        QgsAnnotationItemPropertiesWidgetBase->resize(424, 702);
        verticalLayout = new QVBoxLayout(QgsAnnotationItemPropertiesWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mStack = new QStackedWidget(QgsAnnotationItemPropertiesWidgetBase);
        mStack->setObjectName(QString::fromUtf8("mStack"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mStack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mStack->addWidget(page_2);

        verticalLayout->addWidget(mStack);

        mLayerRenderingGroupBox = new QgsCollapsibleGroupBox(QgsAnnotationItemPropertiesWidgetBase);
        mLayerRenderingGroupBox->setObjectName(QString::fromUtf8("mLayerRenderingGroupBox"));
        mLayerRenderingGroupBox->setFlat(true);
        mLayerRenderingGroupBox->setCheckable(false);
        mLayerRenderingGroupBox->setProperty("collapsed", QVariant(true));
        mLayerRenderingGroupBox->setProperty("saveCollapsedState", QVariant(false));
        gridLayout_2 = new QGridLayout(mLayerRenderingGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 3, -1);
        mOpacityWidget = new QgsOpacityWidget(mLayerRenderingGroupBox);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOpacityWidget, 0, 1, 1, 3);

        lblBlend = new QLabel(mLayerRenderingGroupBox);
        lblBlend->setObjectName(QString::fromUtf8("lblBlend"));

        gridLayout_2->addWidget(lblBlend, 1, 0, 1, 1);

        lblTransparency = new QLabel(mLayerRenderingGroupBox);
        lblTransparency->setObjectName(QString::fromUtf8("lblTransparency"));

        gridLayout_2->addWidget(lblTransparency, 0, 0, 1, 1);

        mEffectWidget = new QgsEffectStackCompactWidget(mLayerRenderingGroupBox);
        mEffectWidget->setObjectName(QString::fromUtf8("mEffectWidget"));
        mEffectWidget->setMinimumSize(QSize(16, 16));
        mEffectWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mEffectWidget, 2, 0, 1, 4);

        mBlendModeComboBox = new QgsBlendModeComboBox(mLayerRenderingGroupBox);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mBlendModeComboBox->sizePolicy().hasHeightForWidth());
        mBlendModeComboBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mBlendModeComboBox, 1, 1, 1, 3);


        verticalLayout->addWidget(mLayerRenderingGroupBox);

        QWidget::setTabOrder(mOpacityWidget, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mEffectWidget);

        retranslateUi(QgsAnnotationItemPropertiesWidgetBase);

        mStack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsAnnotationItemPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationItemPropertiesWidgetBase)
    {
        QgsAnnotationItemPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationItemPropertiesWidgetBase", "Annotation Item Properties", nullptr));
        mLayerRenderingGroupBox->setTitle(QCoreApplication::translate("QgsAnnotationItemPropertiesWidgetBase", "Layer Rendering", nullptr));
        lblBlend->setText(QCoreApplication::translate("QgsAnnotationItemPropertiesWidgetBase", "Blending mode", nullptr));
        lblTransparency->setText(QCoreApplication::translate("QgsAnnotationItemPropertiesWidgetBase", "Opacity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationItemPropertiesWidgetBase: public Ui_QgsAnnotationItemPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONITEMPROPERTIESWIDGETBASE_H
