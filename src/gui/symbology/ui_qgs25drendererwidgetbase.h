/********************************************************************************
** Form generated from reading UI file 'qgs25drendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGS25DRENDERERWIDGETBASE_H
#define UI_QGS25DRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Qgs25DRendererWidgetBase
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *mAdvancedConfigurationBox;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QgsColorButton *mRoofColorButton;
    QLabel *label_4;
    QgsColorButton *mWallColorButton;
    QCheckBox *mWallExpositionShading;
    QGroupBox *mShadowEnabledWidget;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QgsColorButton *mShadowColorButton;
    QgsDoubleSpinBox *mShadowSizeWidget;
    QLabel *label_6;
    QgsFieldExpressionWidget *mHeightWidget;
    QgsSpinBox *mAngleWidget;
    QLabel *label_7;

    void setupUi(QWidget *Qgs25DRendererWidgetBase)
    {
        if (Qgs25DRendererWidgetBase->objectName().isEmpty())
            Qgs25DRendererWidgetBase->setObjectName(QString::fromUtf8("Qgs25DRendererWidgetBase"));
        Qgs25DRendererWidgetBase->resize(657, 587);
        Qgs25DRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        formLayout = new QFormLayout(Qgs25DRendererWidgetBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(Qgs25DRendererWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(Qgs25DRendererWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        mAdvancedConfigurationBox = new QGroupBox(Qgs25DRendererWidgetBase);
        mAdvancedConfigurationBox->setObjectName(QString::fromUtf8("mAdvancedConfigurationBox"));
        formLayout_2 = new QFormLayout(mAdvancedConfigurationBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(mAdvancedConfigurationBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        mRoofColorButton = new QgsColorButton(mAdvancedConfigurationBox);
        mRoofColorButton->setObjectName(QString::fromUtf8("mRoofColorButton"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mRoofColorButton);

        label_4 = new QLabel(mAdvancedConfigurationBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        mWallColorButton = new QgsColorButton(mAdvancedConfigurationBox);
        mWallColorButton->setObjectName(QString::fromUtf8("mWallColorButton"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, mWallColorButton);

        mWallExpositionShading = new QCheckBox(mAdvancedConfigurationBox);
        mWallExpositionShading->setObjectName(QString::fromUtf8("mWallExpositionShading"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, mWallExpositionShading);

        mShadowEnabledWidget = new QGroupBox(mAdvancedConfigurationBox);
        mShadowEnabledWidget->setObjectName(QString::fromUtf8("mShadowEnabledWidget"));
        mShadowEnabledWidget->setCheckable(true);
        formLayout_3 = new QFormLayout(mShadowEnabledWidget);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_5 = new QLabel(mShadowEnabledWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        mShadowColorButton = new QgsColorButton(mShadowEnabledWidget);
        mShadowColorButton->setObjectName(QString::fromUtf8("mShadowColorButton"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mShadowColorButton);

        mShadowSizeWidget = new QgsDoubleSpinBox(mShadowEnabledWidget);
        mShadowSizeWidget->setObjectName(QString::fromUtf8("mShadowSizeWidget"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, mShadowSizeWidget);

        label_6 = new QLabel(mShadowEnabledWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);


        formLayout_2->setWidget(4, QFormLayout::SpanningRole, mShadowEnabledWidget);


        formLayout->setWidget(2, QFormLayout::SpanningRole, mAdvancedConfigurationBox);

        mHeightWidget = new QgsFieldExpressionWidget(Qgs25DRendererWidgetBase);
        mHeightWidget->setObjectName(QString::fromUtf8("mHeightWidget"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mHeightWidget);

        mAngleWidget = new QgsSpinBox(Qgs25DRendererWidgetBase);
        mAngleWidget->setObjectName(QString::fromUtf8("mAngleWidget"));
        mAngleWidget->setWrapping(true);
        mAngleWidget->setMinimum(-360);
        mAngleWidget->setMaximum(359);

        formLayout->setWidget(1, QFormLayout::FieldRole, mAngleWidget);

        label_7 = new QLabel(Qgs25DRendererWidgetBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        formLayout->setWidget(3, QFormLayout::SpanningRole, label_7);


        retranslateUi(Qgs25DRendererWidgetBase);

        QMetaObject::connectSlotsByName(Qgs25DRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *Qgs25DRendererWidgetBase)
    {
        label->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "Height", nullptr));
        label_2->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "Angle", nullptr));
        mAdvancedConfigurationBox->setTitle(QCoreApplication::translate("Qgs25DRendererWidgetBase", "Advanced Configuration", nullptr));
        label_3->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "Roof color", nullptr));
        mRoofColorButton->setProperty("text", QVariant(QCoreApplication::translate("Qgs25DRendererWidgetBase", "\342\200\246", nullptr)));
        label_4->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "Wall color", nullptr));
        mWallColorButton->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mWallExpositionShading->setToolTip(QCoreApplication::translate("Qgs25DRendererWidgetBase", "<html><head/><body><p>Walls will have a different color based on their aspect to make them appear to differently reflect the solar radiation.</p><p><br/></p><p>If this option is enabled, make sure that <span style=\" font-style:italic;\">simplification </span>is disabled on the rendering tab or some colors may be wrong at small scales.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mWallExpositionShading->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "Shade walls based on aspect", nullptr));
        mShadowEnabledWidget->setTitle(QCoreApplication::translate("Qgs25DRendererWidgetBase", "Shadow", nullptr));
        label_5->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "Color", nullptr));
        mShadowColorButton->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "Size", nullptr));
        mAngleWidget->setSuffix(QCoreApplication::translate("Qgs25DRendererWidgetBase", "\302\260", nullptr));
        label_7->setText(QCoreApplication::translate("Qgs25DRendererWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Advanced Styling</span><br/>This page helps to configure the 2.5D effect as easily as possible with some basic parameters.</p><p>Once you have finished the basic styling, you can convert this to another renderer (single, categorized, graduated) and fine-tune the appearance to your liking.</p><p><span style=\" font-weight:600;\">Overlay problems</span></p><p>Features are rendered based on their distance to the camera. It is sometimes possible that parts of a feature are in front of another feature by mistake. This happens if any part of the overlapped feature is closer to the camera than the overlapping feature.</p><p>In such cases you can avoid rendering problems by cutting the feature in front into smaller pieces.</p></body></html>", nullptr));
        (void)Qgs25DRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class Qgs25DRendererWidgetBase: public Ui_Qgs25DRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGS25DRENDERERWIDGETBASE_H
