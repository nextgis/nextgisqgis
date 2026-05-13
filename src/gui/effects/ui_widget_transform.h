/********************************************************************************
** Form generated from reading UI file 'widget_transform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_TRANSFORM_H
#define UI_WIDGET_TRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgseffectdrawmodecombobox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetTransform
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_38;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mSpinTranslateX;
    QgsDoubleSpinBox *mSpinTranslateY;
    QgsUnitSelectionWidget *mTranslateUnitWidget;
    QLabel *label_7;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QLabel *label_2;
    QgsDoubleSpinBox *mRotationSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mReflectXCheckBox;
    QCheckBox *mReflectYCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mSpinShearX;
    QgsDoubleSpinBox *mSpinShearY;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mSpinScaleX;
    QgsDoubleSpinBox *mSpinScaleY;
    QLabel *label_8;
    QLabel *label;
    QgsEffectDrawModeComboBox *mDrawModeComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetTransform)
    {
        if (WidgetTransform->objectName().isEmpty())
            WidgetTransform->setObjectName(QString::fromUtf8("WidgetTransform"));
        WidgetTransform->resize(404, 348);
        WidgetTransform->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetTransform);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mSpinTranslateX = new QgsDoubleSpinBox(WidgetTransform);
        mSpinTranslateX->setObjectName(QString::fromUtf8("mSpinTranslateX"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinTranslateX->sizePolicy().hasHeightForWidth());
        mSpinTranslateX->setSizePolicy(sizePolicy);
        mSpinTranslateX->setDecimals(6);
        mSpinTranslateX->setMinimum(-999.000000000000000);
        mSpinTranslateX->setMaximum(999.000000000000000);
        mSpinTranslateX->setSingleStep(0.200000000000000);

        horizontalLayout->addWidget(mSpinTranslateX);

        mSpinTranslateY = new QgsDoubleSpinBox(WidgetTransform);
        mSpinTranslateY->setObjectName(QString::fromUtf8("mSpinTranslateY"));
        sizePolicy.setHeightForWidth(mSpinTranslateY->sizePolicy().hasHeightForWidth());
        mSpinTranslateY->setSizePolicy(sizePolicy);
        mSpinTranslateY->setDecimals(6);
        mSpinTranslateY->setMinimum(-999.000000000000000);
        mSpinTranslateY->setMaximum(999.000000000000000);
        mSpinTranslateY->setSingleStep(0.200000000000000);

        horizontalLayout->addWidget(mSpinTranslateY);

        mTranslateUnitWidget = new QgsUnitSelectionWidget(WidgetTransform);
        mTranslateUnitWidget->setObjectName(QString::fromUtf8("mTranslateUnitWidget"));
        mTranslateUnitWidget->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(mTranslateUnitWidget);


        gridLayout_38->addLayout(horizontalLayout, 4, 1, 1, 1);

        label_7 = new QLabel(WidgetTransform);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_38->addWidget(label_7, 1, 0, 1, 1);

        mShadowFrame = new QFrame(WidgetTransform);
        mShadowFrame->setObjectName(QString::fromUtf8("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);

        gridLayout_38->addWidget(mShadowFrame, 6, 0, 1, 2);

        label_2 = new QLabel(WidgetTransform);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_38->addWidget(label_2, 3, 0, 1, 1);

        mRotationSpinBox = new QgsDoubleSpinBox(WidgetTransform);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mRotationSpinBox->sizePolicy().hasHeightForWidth());
        mRotationSpinBox->setSizePolicy(sizePolicy1);
        mRotationSpinBox->setMinimum(-360.000000000000000);
        mRotationSpinBox->setMaximum(360.000000000000000);
        mRotationSpinBox->setSingleStep(0.500000000000000);

        gridLayout_38->addWidget(mRotationSpinBox, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mReflectXCheckBox = new QCheckBox(WidgetTransform);
        mReflectXCheckBox->setObjectName(QString::fromUtf8("mReflectXCheckBox"));

        horizontalLayout_2->addWidget(mReflectXCheckBox);

        mReflectYCheckBox = new QCheckBox(WidgetTransform);
        mReflectYCheckBox->setObjectName(QString::fromUtf8("mReflectYCheckBox"));

        horizontalLayout_2->addWidget(mReflectYCheckBox);


        gridLayout_38->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mSpinShearX = new QgsDoubleSpinBox(WidgetTransform);
        mSpinShearX->setObjectName(QString::fromUtf8("mSpinShearX"));
        sizePolicy.setHeightForWidth(mSpinShearX->sizePolicy().hasHeightForWidth());
        mSpinShearX->setSizePolicy(sizePolicy);
        mSpinShearX->setDecimals(2);
        mSpinShearX->setMinimum(-999.000000000000000);
        mSpinShearX->setMaximum(999.000000000000000);
        mSpinShearX->setSingleStep(0.010000000000000);

        horizontalLayout_3->addWidget(mSpinShearX);

        mSpinShearY = new QgsDoubleSpinBox(WidgetTransform);
        mSpinShearY->setObjectName(QString::fromUtf8("mSpinShearY"));
        sizePolicy.setHeightForWidth(mSpinShearY->sizePolicy().hasHeightForWidth());
        mSpinShearY->setSizePolicy(sizePolicy);
        mSpinShearY->setDecimals(2);
        mSpinShearY->setMinimum(-999.000000000000000);
        mSpinShearY->setMaximum(999.000000000000000);
        mSpinShearY->setSingleStep(0.010000000000000);

        horizontalLayout_3->addWidget(mSpinShearY);


        gridLayout_38->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_6 = new QLabel(WidgetTransform);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_38->addWidget(label_6, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mSpinScaleX = new QgsDoubleSpinBox(WidgetTransform);
        mSpinScaleX->setObjectName(QString::fromUtf8("mSpinScaleX"));
        sizePolicy.setHeightForWidth(mSpinScaleX->sizePolicy().hasHeightForWidth());
        mSpinScaleX->setSizePolicy(sizePolicy);
        mSpinScaleX->setDecimals(1);
        mSpinScaleX->setMinimum(0.000000000000000);
        mSpinScaleX->setMaximum(10000.000000000000000);
        mSpinScaleX->setSingleStep(1.000000000000000);
        mSpinScaleX->setValue(100.000000000000000);

        horizontalLayout_4->addWidget(mSpinScaleX);

        mSpinScaleY = new QgsDoubleSpinBox(WidgetTransform);
        mSpinScaleY->setObjectName(QString::fromUtf8("mSpinScaleY"));
        sizePolicy.setHeightForWidth(mSpinScaleY->sizePolicy().hasHeightForWidth());
        mSpinScaleY->setSizePolicy(sizePolicy);
        mSpinScaleY->setDecimals(1);
        mSpinScaleY->setMinimum(0.000000000000000);
        mSpinScaleY->setMaximum(10000.000000000000000);
        mSpinScaleY->setSingleStep(1.000000000000000);
        mSpinScaleY->setValue(100.000000000000000);

        horizontalLayout_4->addWidget(mSpinScaleY);


        gridLayout_38->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        label_8 = new QLabel(WidgetTransform);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_38->addWidget(label_8, 2, 0, 1, 1);

        label = new QLabel(WidgetTransform);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_38->addWidget(label, 5, 0, 1, 1);

        mDrawModeComboBox = new QgsEffectDrawModeComboBox(WidgetTransform);
        mDrawModeComboBox->setObjectName(QString::fromUtf8("mDrawModeComboBox"));

        gridLayout_38->addWidget(mDrawModeComboBox, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_38);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mReflectXCheckBox, mReflectYCheckBox);
        QWidget::setTabOrder(mReflectYCheckBox, mSpinShearX);
        QWidget::setTabOrder(mSpinShearX, mSpinShearY);
        QWidget::setTabOrder(mSpinShearY, mSpinScaleX);
        QWidget::setTabOrder(mSpinScaleX, mSpinScaleY);
        QWidget::setTabOrder(mSpinScaleY, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mSpinTranslateX);
        QWidget::setTabOrder(mSpinTranslateX, mSpinTranslateY);
        QWidget::setTabOrder(mSpinTranslateY, mDrawModeComboBox);

        retranslateUi(WidgetTransform);

        QMetaObject::connectSlotsByName(WidgetTransform);
    } // setupUi

    void retranslateUi(QWidget *WidgetTransform)
    {
        label_7->setText(QCoreApplication::translate("WidgetTransform", "Shear X,Y", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetTransform", "Rotation", nullptr));
        mRotationSpinBox->setSuffix(QCoreApplication::translate("WidgetTransform", " \302\260", nullptr));
        mReflectXCheckBox->setText(QCoreApplication::translate("WidgetTransform", "Reflect horizontal", nullptr));
        mReflectYCheckBox->setText(QCoreApplication::translate("WidgetTransform", "Reflect vertical", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetTransform", "Translate X,Y", nullptr));
        mSpinScaleX->setSuffix(QCoreApplication::translate("WidgetTransform", "%", nullptr));
        mSpinScaleY->setSuffix(QCoreApplication::translate("WidgetTransform", "%", nullptr));
        label_8->setText(QCoreApplication::translate("WidgetTransform", "Scale X,Y", nullptr));
        label->setText(QCoreApplication::translate("WidgetTransform", "Draw mode", nullptr));
        (void)WidgetTransform;
    } // retranslateUi

};

namespace Ui {
    class WidgetTransform: public Ui_WidgetTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_TRANSFORM_H
