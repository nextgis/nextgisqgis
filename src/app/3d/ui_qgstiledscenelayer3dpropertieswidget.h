/********************************************************************************
** Form generated from reading UI file 'qgstiledscenelayer3dpropertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILEDSCENELAYER3DPROPERTIESWIDGET_H
#define UI_QGSTILEDSCENELAYER3DPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTiledSceneLayer3DPropertiesWidget
{
public:
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mMaxErrorSpinBox;
    QLabel *lblMaxError;
    QSpacerItem *verticalSpacer;
    QCheckBox *mShowBoundingBoxesCheckBox;

    void setupUi(QWidget *QgsTiledSceneLayer3DPropertiesWidget)
    {
        if (QgsTiledSceneLayer3DPropertiesWidget->objectName().isEmpty())
            QgsTiledSceneLayer3DPropertiesWidget->setObjectName(QString::fromUtf8("QgsTiledSceneLayer3DPropertiesWidget"));
        QgsTiledSceneLayer3DPropertiesWidget->resize(403, 393);
        gridLayout = new QGridLayout(QgsTiledSceneLayer3DPropertiesWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mMaxErrorSpinBox = new QgsDoubleSpinBox(QgsTiledSceneLayer3DPropertiesWidget);
        mMaxErrorSpinBox->setObjectName(QString::fromUtf8("mMaxErrorSpinBox"));
        mMaxErrorSpinBox->setDecimals(2);
        mMaxErrorSpinBox->setMaximum(100000.000000000000000);
        mMaxErrorSpinBox->setValue(25.000000000000000);

        gridLayout->addWidget(mMaxErrorSpinBox, 0, 1, 1, 1);

        lblMaxError = new QLabel(QgsTiledSceneLayer3DPropertiesWidget);
        lblMaxError->setObjectName(QString::fromUtf8("lblMaxError"));

        gridLayout->addWidget(lblMaxError, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(378, 297, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 2);

        mShowBoundingBoxesCheckBox = new QCheckBox(QgsTiledSceneLayer3DPropertiesWidget);
        mShowBoundingBoxesCheckBox->setObjectName(QString::fromUtf8("mShowBoundingBoxesCheckBox"));

        gridLayout->addWidget(mShowBoundingBoxesCheckBox, 3, 0, 1, 2);


        retranslateUi(QgsTiledSceneLayer3DPropertiesWidget);

        QMetaObject::connectSlotsByName(QgsTiledSceneLayer3DPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsTiledSceneLayer3DPropertiesWidget)
    {
        mMaxErrorSpinBox->setSuffix(QCoreApplication::translate("QgsTiledSceneLayer3DPropertiesWidget", " px", nullptr));
        lblMaxError->setText(QCoreApplication::translate("QgsTiledSceneLayer3DPropertiesWidget", "Maximum screen space error", nullptr));
        mShowBoundingBoxesCheckBox->setText(QCoreApplication::translate("QgsTiledSceneLayer3DPropertiesWidget", "Show bounding boxes", nullptr));
        (void)QgsTiledSceneLayer3DPropertiesWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsTiledSceneLayer3DPropertiesWidget: public Ui_QgsTiledSceneLayer3DPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILEDSCENELAYER3DPROPERTIESWIDGET_H
