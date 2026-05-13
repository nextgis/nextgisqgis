/********************************************************************************
** Form generated from reading UI file 'widget_coloreffects.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_COLOREFFECTS_H
#define UI_WIDGET_COLOREFFECTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscolorbutton.h"
#include "qgseffectdrawmodecombobox.h"
#include "qgsopacitywidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetColorEffect
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_38;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QgsSpinBox *mSaturationSpinBox;
    QCheckBox *mColorizeCheck;
    QSlider *mSliderColorizeStrength;
    QSlider *mSliderContrast;
    QLabel *label_5;
    QLabel *label_2;
    QSlider *mSliderSaturation;
    QgsSpinBox *mContrastSpinBox;
    QSlider *mSliderBrightness;
    QLabel *labelSaturation;
    QgsSpinBox *mColorizeStrengthSpinBox;
    QLabel *label_28;
    QLabel *label_30;
    QgsEffectDrawModeComboBox *mDrawModeComboBox;
    QgsBlendModeComboBox *mBlendCmbBx;
    QLabel *label;
    QgsSpinBox *mBrightnessSpinBox;
    QLabel *labelGrayscale;
    QComboBox *mGrayscaleCombo;
    QgsOpacityWidget *mOpacityWidget;
    QgsColorButton *mColorizeColorButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetColorEffect)
    {
        if (WidgetColorEffect->objectName().isEmpty())
            WidgetColorEffect->setObjectName(QString::fromUtf8("WidgetColorEffect"));
        WidgetColorEffect->resize(374, 365);
        WidgetColorEffect->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetColorEffect);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        mShadowFrame = new QFrame(WidgetColorEffect);
        mShadowFrame->setObjectName(QString::fromUtf8("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        mSaturationSpinBox = new QgsSpinBox(mShadowFrame);
        mSaturationSpinBox->setObjectName(QString::fromUtf8("mSaturationSpinBox"));
        mSaturationSpinBox->setMinimum(-100);
        mSaturationSpinBox->setMaximum(100);
        mSaturationSpinBox->setValue(0);
        mSaturationSpinBox->setProperty("decimals", QVariant(0));

        gridLayout_7->addWidget(mSaturationSpinBox, 2, 2, 1, 1);

        mColorizeCheck = new QCheckBox(mShadowFrame);
        mColorizeCheck->setObjectName(QString::fromUtf8("mColorizeCheck"));

        gridLayout_7->addWidget(mColorizeCheck, 3, 0, 1, 1);

        mSliderColorizeStrength = new QSlider(mShadowFrame);
        mSliderColorizeStrength->setObjectName(QString::fromUtf8("mSliderColorizeStrength"));
        mSliderColorizeStrength->setMaximum(100);
        mSliderColorizeStrength->setValue(100);
        mSliderColorizeStrength->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(mSliderColorizeStrength, 3, 1, 1, 1);

        mSliderContrast = new QSlider(mShadowFrame);
        mSliderContrast->setObjectName(QString::fromUtf8("mSliderContrast"));
        mSliderContrast->setMinimumSize(QSize(75, 0));
        mSliderContrast->setMinimum(-100);
        mSliderContrast->setMaximum(100);
        mSliderContrast->setSingleStep(1);
        mSliderContrast->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(mSliderContrast, 1, 1, 1, 1);

        label_5 = new QLabel(mShadowFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_7->addWidget(label_5, 1, 0, 1, 1);

        label_2 = new QLabel(mShadowFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        mSliderSaturation = new QSlider(mShadowFrame);
        mSliderSaturation->setObjectName(QString::fromUtf8("mSliderSaturation"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSliderSaturation->sizePolicy().hasHeightForWidth());
        mSliderSaturation->setSizePolicy(sizePolicy);
        mSliderSaturation->setMinimumSize(QSize(75, 0));
        mSliderSaturation->setMinimum(-100);
        mSliderSaturation->setMaximum(100);
        mSliderSaturation->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(mSliderSaturation, 2, 1, 1, 1);

        mContrastSpinBox = new QgsSpinBox(mShadowFrame);
        mContrastSpinBox->setObjectName(QString::fromUtf8("mContrastSpinBox"));
        mContrastSpinBox->setMinimum(-100);
        mContrastSpinBox->setMaximum(100);

        gridLayout_7->addWidget(mContrastSpinBox, 1, 2, 1, 1);

        mSliderBrightness = new QSlider(mShadowFrame);
        mSliderBrightness->setObjectName(QString::fromUtf8("mSliderBrightness"));
        mSliderBrightness->setMinimumSize(QSize(75, 0));
        mSliderBrightness->setMinimum(-255);
        mSliderBrightness->setMaximum(255);
        mSliderBrightness->setOrientation(Qt::Horizontal);
        mSliderBrightness->setTickPosition(QSlider::NoTicks);
        mSliderBrightness->setTickInterval(0);

        gridLayout_7->addWidget(mSliderBrightness, 0, 1, 1, 1);

        labelSaturation = new QLabel(mShadowFrame);
        labelSaturation->setObjectName(QString::fromUtf8("labelSaturation"));

        gridLayout_7->addWidget(labelSaturation, 2, 0, 1, 1);

        mColorizeStrengthSpinBox = new QgsSpinBox(mShadowFrame);
        mColorizeStrengthSpinBox->setObjectName(QString::fromUtf8("mColorizeStrengthSpinBox"));
        mColorizeStrengthSpinBox->setMinimum(0);
        mColorizeStrengthSpinBox->setMaximum(100);
        mColorizeStrengthSpinBox->setValue(100);

        gridLayout_7->addWidget(mColorizeStrengthSpinBox, 3, 2, 1, 1);

        label_28 = new QLabel(mShadowFrame);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_7->addWidget(label_28, 6, 0, 1, 1);

        label_30 = new QLabel(mShadowFrame);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_7->addWidget(label_30, 7, 0, 1, 1);

        mDrawModeComboBox = new QgsEffectDrawModeComboBox(mShadowFrame);
        mDrawModeComboBox->setObjectName(QString::fromUtf8("mDrawModeComboBox"));

        gridLayout_7->addWidget(mDrawModeComboBox, 8, 1, 1, 2);

        mBlendCmbBx = new QgsBlendModeComboBox(mShadowFrame);
        mBlendCmbBx->setObjectName(QString::fromUtf8("mBlendCmbBx"));

        gridLayout_7->addWidget(mBlendCmbBx, 7, 1, 1, 2);

        label = new QLabel(mShadowFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_7->addWidget(label, 8, 0, 1, 1);

        mBrightnessSpinBox = new QgsSpinBox(mShadowFrame);
        mBrightnessSpinBox->setObjectName(QString::fromUtf8("mBrightnessSpinBox"));
        mBrightnessSpinBox->setMinimum(-255);
        mBrightnessSpinBox->setMaximum(255);

        gridLayout_7->addWidget(mBrightnessSpinBox, 0, 2, 1, 1);

        labelGrayscale = new QLabel(mShadowFrame);
        labelGrayscale->setObjectName(QString::fromUtf8("labelGrayscale"));

        gridLayout_7->addWidget(labelGrayscale, 5, 0, 1, 1);

        mGrayscaleCombo = new QComboBox(mShadowFrame);
        mGrayscaleCombo->setObjectName(QString::fromUtf8("mGrayscaleCombo"));

        gridLayout_7->addWidget(mGrayscaleCombo, 5, 1, 1, 2);

        mOpacityWidget = new QgsOpacityWidget(mShadowFrame);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(mOpacityWidget, 6, 1, 1, 2);

        mColorizeColorButton = new QgsColorButton(mShadowFrame);
        mColorizeColorButton->setObjectName(QString::fromUtf8("mColorizeColorButton"));
        sizePolicy.setHeightForWidth(mColorizeColorButton->sizePolicy().hasHeightForWidth());
        mColorizeColorButton->setSizePolicy(sizePolicy);
        mColorizeColorButton->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(mColorizeColorButton, 4, 1, 1, 2);


        gridLayout_38->addWidget(mShadowFrame, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_38);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mSliderBrightness, mBrightnessSpinBox);
        QWidget::setTabOrder(mBrightnessSpinBox, mSliderContrast);
        QWidget::setTabOrder(mSliderContrast, mContrastSpinBox);
        QWidget::setTabOrder(mContrastSpinBox, mSliderSaturation);
        QWidget::setTabOrder(mSliderSaturation, mSaturationSpinBox);
        QWidget::setTabOrder(mSaturationSpinBox, mColorizeCheck);
        QWidget::setTabOrder(mColorizeCheck, mSliderColorizeStrength);
        QWidget::setTabOrder(mSliderColorizeStrength, mColorizeStrengthSpinBox);
        QWidget::setTabOrder(mColorizeStrengthSpinBox, mColorizeColorButton);
        QWidget::setTabOrder(mColorizeColorButton, mGrayscaleCombo);
        QWidget::setTabOrder(mGrayscaleCombo, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendCmbBx);
        QWidget::setTabOrder(mBlendCmbBx, mDrawModeComboBox);

        retranslateUi(WidgetColorEffect);
        QObject::connect(mSliderBrightness, SIGNAL(valueChanged(int)), mBrightnessSpinBox, SLOT(setValue(int)));
        QObject::connect(mBrightnessSpinBox, SIGNAL(valueChanged(int)), mSliderBrightness, SLOT(setValue(int)));
        QObject::connect(mSliderContrast, SIGNAL(valueChanged(int)), mContrastSpinBox, SLOT(setValue(int)));
        QObject::connect(mContrastSpinBox, SIGNAL(valueChanged(int)), mSliderContrast, SLOT(setValue(int)));
        QObject::connect(mSliderSaturation, SIGNAL(valueChanged(int)), mSaturationSpinBox, SLOT(setValue(int)));
        QObject::connect(mSaturationSpinBox, SIGNAL(valueChanged(int)), mSliderSaturation, SLOT(setValue(int)));
        QObject::connect(mSliderColorizeStrength, SIGNAL(valueChanged(int)), mColorizeStrengthSpinBox, SLOT(setValue(int)));
        QObject::connect(mColorizeStrengthSpinBox, SIGNAL(valueChanged(int)), mSliderColorizeStrength, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(WidgetColorEffect);
    } // setupUi

    void retranslateUi(QWidget *WidgetColorEffect)
    {
        mColorizeCheck->setText(QCoreApplication::translate("WidgetColorEffect", "Colorize", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetColorEffect", "Contrast", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetColorEffect", "Brightness", nullptr));
        labelSaturation->setText(QCoreApplication::translate("WidgetColorEffect", "Saturation", nullptr));
        mColorizeStrengthSpinBox->setSuffix(QCoreApplication::translate("WidgetColorEffect", "%", nullptr));
        label_28->setText(QCoreApplication::translate("WidgetColorEffect", "Opacity", nullptr));
        label_30->setText(QCoreApplication::translate("WidgetColorEffect", "Blend mode", nullptr));
        label->setText(QCoreApplication::translate("WidgetColorEffect", "Draw mode", nullptr));
        labelGrayscale->setText(QCoreApplication::translate("WidgetColorEffect", "Grayscale", nullptr));
        mColorizeColorButton->setText(QString());
        (void)WidgetColorEffect;
    } // retranslateUi

};

namespace Ui {
    class WidgetColorEffect: public Ui_WidgetColorEffect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_COLOREFFECTS_H
