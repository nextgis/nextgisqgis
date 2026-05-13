/********************************************************************************
** Form generated from reading UI file 'widget_blur.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_BLUR_H
#define UI_WIDGET_BLUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgsdoublespinbox.h"
#include "qgseffectdrawmodecombobox.h"
#include "qgsopacitywidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetBlur
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_38;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QComboBox *mBlurTypeCombo;
    QLabel *label_28;
    QLabel *label_30;
    QgsBlendModeComboBox *mBlendCmbBx;
    QgsDoubleSpinBox *mBlurStrengthSpnBx;
    QgsUnitSelectionWidget *mBlurUnitWidget;
    QLabel *label;
    QLabel *label_27;
    QgsEffectDrawModeComboBox *mDrawModeComboBox;
    QLabel *label_2;
    QgsOpacityWidget *mOpacityWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetBlur)
    {
        if (WidgetBlur->objectName().isEmpty())
            WidgetBlur->setObjectName(QString::fromUtf8("WidgetBlur"));
        WidgetBlur->resize(404, 348);
        WidgetBlur->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetBlur);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        mShadowFrame = new QFrame(WidgetBlur);
        mShadowFrame->setObjectName(QString::fromUtf8("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mBlurTypeCombo = new QComboBox(mShadowFrame);
        mBlurTypeCombo->setObjectName(QString::fromUtf8("mBlurTypeCombo"));

        gridLayout_7->addWidget(mBlurTypeCombo, 0, 1, 1, 2);

        label_28 = new QLabel(mShadowFrame);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_7->addWidget(label_28, 2, 0, 1, 1);

        label_30 = new QLabel(mShadowFrame);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_7->addWidget(label_30, 3, 0, 1, 1);

        mBlendCmbBx = new QgsBlendModeComboBox(mShadowFrame);
        mBlendCmbBx->setObjectName(QString::fromUtf8("mBlendCmbBx"));

        gridLayout_7->addWidget(mBlendCmbBx, 3, 1, 1, 2);

        mBlurStrengthSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mBlurStrengthSpnBx->setObjectName(QString::fromUtf8("mBlurStrengthSpnBx"));
        mBlurStrengthSpnBx->setDecimals(4);
        mBlurStrengthSpnBx->setMinimum(0.000000000000000);
        mBlurStrengthSpnBx->setMaximum(9999999.000000000000000);
        mBlurStrengthSpnBx->setSingleStep(0.200000000000000);
        mBlurStrengthSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mBlurStrengthSpnBx, 1, 1, 1, 1);

        mBlurUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mBlurUnitWidget->setObjectName(QString::fromUtf8("mBlurUnitWidget"));
        mBlurUnitWidget->setMinimumSize(QSize(0, 0));
        mBlurUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mBlurUnitWidget, 1, 2, 1, 1);

        label = new QLabel(mShadowFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        label_27 = new QLabel(mShadowFrame);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_7->addWidget(label_27, 1, 0, 1, 1);

        mDrawModeComboBox = new QgsEffectDrawModeComboBox(mShadowFrame);
        mDrawModeComboBox->setObjectName(QString::fromUtf8("mDrawModeComboBox"));

        gridLayout_7->addWidget(mDrawModeComboBox, 4, 1, 1, 2);

        label_2 = new QLabel(mShadowFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_7->addWidget(label_2, 4, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mShadowFrame);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOpacityWidget, 2, 1, 1, 2);


        gridLayout_38->addWidget(mShadowFrame, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_38);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mBlurTypeCombo, mBlurStrengthSpnBx);
        QWidget::setTabOrder(mBlurStrengthSpnBx, mBlurUnitWidget);
        QWidget::setTabOrder(mBlurUnitWidget, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendCmbBx);
        QWidget::setTabOrder(mBlendCmbBx, mDrawModeComboBox);

        retranslateUi(WidgetBlur);

        QMetaObject::connectSlotsByName(WidgetBlur);
    } // setupUi

    void retranslateUi(QWidget *WidgetBlur)
    {
        label_28->setText(QCoreApplication::translate("WidgetBlur", "Opacity", nullptr));
        label_30->setText(QCoreApplication::translate("WidgetBlur", "Blend mode", nullptr));
        label->setText(QCoreApplication::translate("WidgetBlur", "Blur type", nullptr));
        label_27->setText(QCoreApplication::translate("WidgetBlur", "Blur strength", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetBlur", "Draw mode", nullptr));
        (void)WidgetBlur;
    } // retranslateUi

};

namespace Ui {
    class WidgetBlur: public Ui_WidgetBlur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_BLUR_H
