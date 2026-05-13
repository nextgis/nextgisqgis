/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayer3dpropertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYER3DPROPERTIESWIDGET_H
#define UI_QGSVECTORLAYER3DPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayer3DPropertiesWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBox *groupLayerRendering;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsSpinBox *spinZoomLevelsCount;
    QCheckBox *chkShowBoundingBoxes;

    void setupUi(QWidget *QgsVectorLayer3DPropertiesWidget)
    {
        if (QgsVectorLayer3DPropertiesWidget->objectName().isEmpty())
            QgsVectorLayer3DPropertiesWidget->setObjectName(QString::fromUtf8("QgsVectorLayer3DPropertiesWidget"));
        QgsVectorLayer3DPropertiesWidget->resize(386, 130);
        QgsVectorLayer3DPropertiesWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(QgsVectorLayer3DPropertiesWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupLayerRendering = new QgsCollapsibleGroupBox(QgsVectorLayer3DPropertiesWidget);
        groupLayerRendering->setObjectName(QString::fromUtf8("groupLayerRendering"));
        verticalLayout = new QVBoxLayout(groupLayerRendering);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupLayerRendering);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinZoomLevelsCount = new QgsSpinBox(groupLayerRendering);
        spinZoomLevelsCount->setObjectName(QString::fromUtf8("spinZoomLevelsCount"));
        spinZoomLevelsCount->setMinimum(1);
        spinZoomLevelsCount->setMaximum(5);
        spinZoomLevelsCount->setValue(3);

        horizontalLayout->addWidget(spinZoomLevelsCount);


        verticalLayout->addLayout(horizontalLayout);

        chkShowBoundingBoxes = new QCheckBox(groupLayerRendering);
        chkShowBoundingBoxes->setObjectName(QString::fromUtf8("chkShowBoundingBoxes"));

        verticalLayout->addWidget(chkShowBoundingBoxes);


        verticalLayout_2->addWidget(groupLayerRendering);

        QWidget::setTabOrder(spinZoomLevelsCount, chkShowBoundingBoxes);

        retranslateUi(QgsVectorLayer3DPropertiesWidget);

        QMetaObject::connectSlotsByName(QgsVectorLayer3DPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorLayer3DPropertiesWidget)
    {
        groupLayerRendering->setTitle(QCoreApplication::translate("QgsVectorLayer3DPropertiesWidget", "Layer Rendering", nullptr));
        label->setText(QCoreApplication::translate("QgsVectorLayer3DPropertiesWidget", "Zoom levels count", nullptr));
        chkShowBoundingBoxes->setText(QCoreApplication::translate("QgsVectorLayer3DPropertiesWidget", "Show bounding boxes of tiles", nullptr));
        (void)QgsVectorLayer3DPropertiesWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayer3DPropertiesWidget: public Ui_QgsVectorLayer3DPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYER3DPROPERTIESWIDGET_H
