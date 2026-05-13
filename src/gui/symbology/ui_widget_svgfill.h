/********************************************************************************
** Form generated from reading UI file 'widget_svgfill.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SVGFILL_H
#define UI_WIDGET_SVGFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgssvgselectorwidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSVGFill
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mTextureWidthSpinBox;
    QgsUnitSelectionWidget *mTextureWidthUnitWidget;
    QLabel *mStrokeColorLabel;
    QLabel *label;
    QLabel *mTextureWidthLabel;
    QgsPropertyOverrideButton *mTextureWidthDDBtn;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QgsDoubleSpinBox *mRotationSpinBox;
    QLabel *mStrokeWidthLabel;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QgsColorButton *mChangeColorButton;
    QgsColorButton *mChangeStrokeColorButton;
    QLabel *mRotationLabel;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QgsPropertyOverrideButton *mFilColorDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mSvgStrokeWidthUnitWidget;
    QgsSvgSelectorWidget *mSvgSelectorWidget;

    void setupUi(QWidget *WidgetSVGFill)
    {
        if (WidgetSVGFill->objectName().isEmpty())
            WidgetSVGFill->setObjectName(QString::fromUtf8("WidgetSVGFill"));
        WidgetSVGFill->resize(328, 514);
        WidgetSVGFill->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(WidgetSVGFill);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mTextureWidthSpinBox = new QgsDoubleSpinBox(WidgetSVGFill);
        mTextureWidthSpinBox->setObjectName(QString::fromUtf8("mTextureWidthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTextureWidthSpinBox->sizePolicy().hasHeightForWidth());
        mTextureWidthSpinBox->setSizePolicy(sizePolicy);
        mTextureWidthSpinBox->setDecimals(6);
        mTextureWidthSpinBox->setMaximum(999999999.999999046325684);
        mTextureWidthSpinBox->setSingleStep(0.200000000000000);
        mTextureWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_2->addWidget(mTextureWidthSpinBox);

        mTextureWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSVGFill);
        mTextureWidthUnitWidget->setObjectName(QString::fromUtf8("mTextureWidthUnitWidget"));
        mTextureWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mTextureWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        mStrokeColorLabel = new QLabel(WidgetSVGFill);
        mStrokeColorLabel->setObjectName(QString::fromUtf8("mStrokeColorLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mStrokeColorLabel->sizePolicy().hasHeightForWidth());
        mStrokeColorLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mStrokeColorLabel, 5, 0, 1, 1);

        label = new QLabel(WidgetSVGFill);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        mTextureWidthLabel = new QLabel(WidgetSVGFill);
        mTextureWidthLabel->setObjectName(QString::fromUtf8("mTextureWidthLabel"));

        gridLayout->addWidget(mTextureWidthLabel, 0, 0, 1, 1);

        mTextureWidthDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mTextureWidthDDBtn->setObjectName(QString::fromUtf8("mTextureWidthDDBtn"));

        gridLayout->addWidget(mTextureWidthDDBtn, 0, 2, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mStrokeWidthDDBtn->setObjectName(QString::fromUtf8("mStrokeWidthDDBtn"));

        gridLayout->addWidget(mStrokeWidthDDBtn, 6, 2, 1, 1);

        mRotationSpinBox = new QgsDoubleSpinBox(WidgetSVGFill);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360.000000000000000);
        mRotationSpinBox->setMaximum(360.000000000000000);
        mRotationSpinBox->setSingleStep(0.500000000000000);

        gridLayout->addWidget(mRotationSpinBox, 8, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetSVGFill);
        mStrokeWidthLabel->setObjectName(QString::fromUtf8("mStrokeWidthLabel"));

        gridLayout->addWidget(mStrokeWidthLabel, 6, 0, 1, 1);

        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mRotationDDBtn->setObjectName(QString::fromUtf8("mRotationDDBtn"));

        gridLayout->addWidget(mRotationDDBtn, 8, 2, 1, 1);

        mChangeColorButton = new QgsColorButton(WidgetSVGFill);
        mChangeColorButton->setObjectName(QString::fromUtf8("mChangeColorButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mChangeColorButton->sizePolicy().hasHeightForWidth());
        mChangeColorButton->setSizePolicy(sizePolicy2);
        mChangeColorButton->setMinimumSize(QSize(120, 0));
        mChangeColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mChangeColorButton, 3, 1, 1, 1);

        mChangeStrokeColorButton = new QgsColorButton(WidgetSVGFill);
        mChangeStrokeColorButton->setObjectName(QString::fromUtf8("mChangeStrokeColorButton"));
        sizePolicy2.setHeightForWidth(mChangeStrokeColorButton->sizePolicy().hasHeightForWidth());
        mChangeStrokeColorButton->setSizePolicy(sizePolicy2);
        mChangeStrokeColorButton->setMinimumSize(QSize(120, 0));
        mChangeStrokeColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mChangeStrokeColorButton, 5, 1, 1, 1);

        mRotationLabel = new QLabel(WidgetSVGFill);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout->addWidget(mRotationLabel, 8, 0, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mStrokeColorDDBtn->setObjectName(QString::fromUtf8("mStrokeColorDDBtn"));

        gridLayout->addWidget(mStrokeColorDDBtn, 5, 2, 1, 1);

        mFilColorDDBtn = new QgsPropertyOverrideButton(WidgetSVGFill);
        mFilColorDDBtn->setObjectName(QString::fromUtf8("mFilColorDDBtn"));

        gridLayout->addWidget(mFilColorDDBtn, 3, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetSVGFill);
        mStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mStrokeWidthSpinBox"));
        sizePolicy.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(999999999.999999046325684);
        mStrokeWidthSpinBox->setSingleStep(0.200000000000000);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_4->addWidget(mStrokeWidthSpinBox);

        mSvgStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSVGFill);
        mSvgStrokeWidthUnitWidget->setObjectName(QString::fromUtf8("mSvgStrokeWidthUnitWidget"));
        mSvgStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(mSvgStrokeWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_4, 6, 1, 1, 1);

        mSvgSelectorWidget = new QgsSvgSelectorWidget(WidgetSVGFill);
        mSvgSelectorWidget->setObjectName(QString::fromUtf8("mSvgSelectorWidget"));

        gridLayout->addWidget(mSvgSelectorWidget, 9, 0, 1, 3);

        QWidget::setTabOrder(mTextureWidthSpinBox, mTextureWidthUnitWidget);
        QWidget::setTabOrder(mTextureWidthUnitWidget, mTextureWidthDDBtn);
        QWidget::setTabOrder(mTextureWidthDDBtn, mChangeColorButton);
        QWidget::setTabOrder(mChangeColorButton, mFilColorDDBtn);
        QWidget::setTabOrder(mFilColorDDBtn, mChangeStrokeColorButton);
        QWidget::setTabOrder(mChangeStrokeColorButton, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mSvgStrokeWidthUnitWidget);
        QWidget::setTabOrder(mSvgStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mRotationDDBtn);

        retranslateUi(WidgetSVGFill);

        QMetaObject::connectSlotsByName(WidgetSVGFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetSVGFill)
    {
        mStrokeColorLabel->setText(QCoreApplication::translate("WidgetSVGFill", "Stroke color", nullptr));
        label->setText(QCoreApplication::translate("WidgetSVGFill", "Fill color", nullptr));
        mTextureWidthLabel->setText(QCoreApplication::translate("WidgetSVGFill", "Texture width", nullptr));
        mTextureWidthDDBtn->setText(QCoreApplication::translate("WidgetSVGFill", "\342\200\246", nullptr));
        mStrokeWidthDDBtn->setText(QCoreApplication::translate("WidgetSVGFill", "\342\200\246", nullptr));
        mRotationSpinBox->setSuffix(QCoreApplication::translate("WidgetSVGFill", " \302\260", nullptr));
        mStrokeWidthLabel->setText(QCoreApplication::translate("WidgetSVGFill", "Stroke width", nullptr));
        mRotationDDBtn->setText(QCoreApplication::translate("WidgetSVGFill", "\342\200\246", nullptr));
        mChangeColorButton->setText(QString());
        mChangeStrokeColorButton->setText(QString());
        mRotationLabel->setText(QCoreApplication::translate("WidgetSVGFill", "Rotation", nullptr));
        mStrokeColorDDBtn->setText(QCoreApplication::translate("WidgetSVGFill", "\342\200\246", nullptr));
        mFilColorDDBtn->setText(QCoreApplication::translate("WidgetSVGFill", "\342\200\246", nullptr));
        mStrokeWidthSpinBox->setSpecialValueText(QCoreApplication::translate("WidgetSVGFill", "No stroke", nullptr));
        (void)WidgetSVGFill;
    } // retranslateUi

};

namespace Ui {
    class WidgetSVGFill: public Ui_WidgetSVGFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGFILL_H
