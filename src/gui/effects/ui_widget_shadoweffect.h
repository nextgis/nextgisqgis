/********************************************************************************
** Form generated from reading UI file 'widget_shadoweffect.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SHADOWEFFECT_H
#define UI_WIDGET_SHADOWEFFECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgseffectdrawmodecombobox.h"
#include "qgsopacitywidget.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetShadowEffect
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_38;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QgsDoubleSpinBox *mShadowOffsetSpnBx;
    QLabel *label_33;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label_28;
    QLabel *label_9;
    QLabel *label_30;
    QLabel *label_27;
    QgsBlendModeComboBox *mShadowBlendCmbBx;
    QgsDoubleSpinBox *mShadowRadiuSpnBx;
    QgsUnitSelectionWidget *mBlurUnitWidget;
    QHBoxLayout *horizontalLayout_24;
    QDial *mShadowOffsetAngleDial;
    QgsSpinBox *mShadowOffsetAngleSpnBx;
    QgsEffectDrawModeComboBox *mDrawModeComboBox;
    QLabel *label;
    QgsOpacityWidget *mOpacityWidget;
    QgsColorButton *mShadowColorBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetShadowEffect)
    {
        if (WidgetShadowEffect->objectName().isEmpty())
            WidgetShadowEffect->setObjectName(QString::fromUtf8("WidgetShadowEffect"));
        WidgetShadowEffect->resize(443, 367);
        WidgetShadowEffect->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetShadowEffect);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        mShadowFrame = new QFrame(WidgetShadowEffect);
        mShadowFrame->setObjectName(QString::fromUtf8("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mShadowOffsetSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mShadowOffsetSpnBx->setObjectName(QString::fromUtf8("mShadowOffsetSpnBx"));
        mShadowOffsetSpnBx->setDecimals(4);
        mShadowOffsetSpnBx->setMinimum(0.000000000000000);
        mShadowOffsetSpnBx->setMaximum(9999999.000000000000000);
        mShadowOffsetSpnBx->setSingleStep(0.200000000000000);
        mShadowOffsetSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowOffsetSpnBx, 1, 1, 1, 1);

        label_33 = new QLabel(mShadowFrame);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy);
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_33, 4, 0, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOffsetUnitWidget, 1, 2, 1, 1);

        label_28 = new QLabel(mShadowFrame);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_7->addWidget(label_28, 3, 0, 1, 1);

        label_9 = new QLabel(mShadowFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_7->addWidget(label_9, 0, 0, 1, 1);

        label_30 = new QLabel(mShadowFrame);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_7->addWidget(label_30, 5, 0, 1, 1);

        label_27 = new QLabel(mShadowFrame);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_7->addWidget(label_27, 2, 0, 1, 1);

        mShadowBlendCmbBx = new QgsBlendModeComboBox(mShadowFrame);
        mShadowBlendCmbBx->setObjectName(QString::fromUtf8("mShadowBlendCmbBx"));

        gridLayout_7->addWidget(mShadowBlendCmbBx, 5, 1, 1, 2);

        mShadowRadiuSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mShadowRadiuSpnBx->setObjectName(QString::fromUtf8("mShadowRadiuSpnBx"));
        mShadowRadiuSpnBx->setDecimals(4);
        mShadowRadiuSpnBx->setMinimum(0.000000000000000);
        mShadowRadiuSpnBx->setMaximum(9999999.000000000000000);
        mShadowRadiuSpnBx->setSingleStep(0.200000000000000);
        mShadowRadiuSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowRadiuSpnBx, 2, 1, 1, 1);

        mBlurUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mBlurUnitWidget->setObjectName(QString::fromUtf8("mBlurUnitWidget"));
        mBlurUnitWidget->setMinimumSize(QSize(0, 0));
        mBlurUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mBlurUnitWidget, 2, 2, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        mShadowOffsetAngleDial = new QDial(mShadowFrame);
        mShadowOffsetAngleDial->setObjectName(QString::fromUtf8("mShadowOffsetAngleDial"));
        mShadowOffsetAngleDial->setMinimumSize(QSize(32, 32));
        mShadowOffsetAngleDial->setMaximumSize(QSize(32, 32));
        mShadowOffsetAngleDial->setMinimum(-180);
        mShadowOffsetAngleDial->setMaximum(180);
        mShadowOffsetAngleDial->setValue(0);
        mShadowOffsetAngleDial->setInvertedControls(true);
        mShadowOffsetAngleDial->setWrapping(true);

        horizontalLayout_24->addWidget(mShadowOffsetAngleDial);

        mShadowOffsetAngleSpnBx = new QgsSpinBox(mShadowFrame);
        mShadowOffsetAngleSpnBx->setObjectName(QString::fromUtf8("mShadowOffsetAngleSpnBx"));
        mShadowOffsetAngleSpnBx->setWrapping(true);
        mShadowOffsetAngleSpnBx->setMinimum(-360);
        mShadowOffsetAngleSpnBx->setMaximum(360);
        mShadowOffsetAngleSpnBx->setProperty("showClearButton", QVariant(false));

        horizontalLayout_24->addWidget(mShadowOffsetAngleSpnBx);


        gridLayout_7->addLayout(horizontalLayout_24, 0, 1, 1, 2);

        mDrawModeComboBox = new QgsEffectDrawModeComboBox(mShadowFrame);
        mDrawModeComboBox->setObjectName(QString::fromUtf8("mDrawModeComboBox"));

        gridLayout_7->addWidget(mDrawModeComboBox, 6, 1, 1, 2);

        label = new QLabel(mShadowFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_7->addWidget(label, 6, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mShadowFrame);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOpacityWidget, 3, 1, 1, 2);

        mShadowColorBtn = new QgsColorButton(mShadowFrame);
        mShadowColorBtn->setObjectName(QString::fromUtf8("mShadowColorBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mShadowColorBtn->sizePolicy().hasHeightForWidth());
        mShadowColorBtn->setSizePolicy(sizePolicy1);
        mShadowColorBtn->setMinimumSize(QSize(120, 0));

        gridLayout_7->addWidget(mShadowColorBtn, 4, 1, 1, 2);


        gridLayout_38->addWidget(mShadowFrame, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_38);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mShadowOffsetAngleDial, mShadowOffsetAngleSpnBx);
        QWidget::setTabOrder(mShadowOffsetAngleSpnBx, mShadowOffsetSpnBx);
        QWidget::setTabOrder(mShadowOffsetSpnBx, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mShadowRadiuSpnBx);
        QWidget::setTabOrder(mShadowRadiuSpnBx, mBlurUnitWidget);
        QWidget::setTabOrder(mBlurUnitWidget, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mShadowColorBtn);
        QWidget::setTabOrder(mShadowColorBtn, mShadowBlendCmbBx);
        QWidget::setTabOrder(mShadowBlendCmbBx, mDrawModeComboBox);

        retranslateUi(WidgetShadowEffect);

        QMetaObject::connectSlotsByName(WidgetShadowEffect);
    } // setupUi

    void retranslateUi(QWidget *WidgetShadowEffect)
    {
        label_33->setText(QCoreApplication::translate("WidgetShadowEffect", "Color", nullptr));
        label_28->setText(QCoreApplication::translate("WidgetShadowEffect", "Opacity", nullptr));
        label_9->setText(QCoreApplication::translate("WidgetShadowEffect", "Offset", nullptr));
        label_30->setText(QCoreApplication::translate("WidgetShadowEffect", "Blend mode", nullptr));
        label_27->setText(QCoreApplication::translate("WidgetShadowEffect", "Blur radius", nullptr));
        mShadowOffsetAngleSpnBx->setSuffix(QCoreApplication::translate("WidgetShadowEffect", "\313\232", nullptr));
        label->setText(QCoreApplication::translate("WidgetShadowEffect", "Draw mode", nullptr));
        (void)WidgetShadowEffect;
    } // retranslateUi

};

namespace Ui {
    class WidgetShadowEffect: public Ui_WidgetShadowEffect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SHADOWEFFECT_H
