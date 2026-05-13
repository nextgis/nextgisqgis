/********************************************************************************
** Form generated from reading UI file 'qgspointdisplacementrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTDISPLACEMENTRENDERERWIDGETBASE_H
#define UI_QGSPOINTDISPLACEMENTRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsscalewidget.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointDisplacementRendererWidgetBase
{
public:
    QGridLayout *gridLayout_3;
    QLabel *mRendererLabel;
    QComboBox *mRendererComboBox;
    QgsCollapsibleGroupBoxBasic *mLabelingGroupBox;
    QGridLayout *gridLayout;
    QLabel *mLabelDistanceLabel;
    QLabel *mLabelColorLabel;
    QgsScaleWidget *mMinLabelScaleWidget;
    QLabel *mLabelAttributeLabel;
    QCheckBox *mScaleDependentLabelsCheckBox;
    QgsColorButton *mLabelColorButton;
    QLabel *label;
    QComboBox *mLabelFieldComboBox;
    QLabel *mMaxScaleLabel;
    QgsFontButton *mLabelFontButton;
    QgsDoubleSpinBox *mLabelDistanceFactorSpinBox;
    QLabel *label_2;
    QLabel *mDistanceToleranceLabel;
    QPushButton *mRendererSettingsButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mDistanceSpinBox;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QComboBox *mPlacementComboBox;
    QLabel *mCenterSymbolLabel;
    QgsCollapsibleGroupBoxBasic *mDisplacementCirclesGroupBox;
    QGridLayout *gridLayout_2;
    QgsColorButton *mCircleColorButton;
    QLabel *mCircleRadiusLabel;
    QLabel *mCircleWidthLabel;
    QLabel *mCircleColorLabel;
    QgsDoubleSpinBox *mCircleModificationSpinBox;
    QgsDoubleSpinBox *mCircleWidthSpinBox;
    QgsSymbolButton *mCenterSymbolToolButton;

    void setupUi(QWidget *QgsPointDisplacementRendererWidgetBase)
    {
        if (QgsPointDisplacementRendererWidgetBase->objectName().isEmpty())
            QgsPointDisplacementRendererWidgetBase->setObjectName(QString::fromUtf8("QgsPointDisplacementRendererWidgetBase"));
        QgsPointDisplacementRendererWidgetBase->resize(381, 550);
        QgsPointDisplacementRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_3 = new QGridLayout(QgsPointDisplacementRendererWidgetBase);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mRendererLabel = new QLabel(QgsPointDisplacementRendererWidgetBase);
        mRendererLabel->setObjectName(QString::fromUtf8("mRendererLabel"));

        gridLayout_3->addWidget(mRendererLabel, 2, 0, 1, 1);

        mRendererComboBox = new QComboBox(QgsPointDisplacementRendererWidgetBase);
        mRendererComboBox->setObjectName(QString::fromUtf8("mRendererComboBox"));

        gridLayout_3->addWidget(mRendererComboBox, 2, 1, 1, 1);

        mLabelingGroupBox = new QgsCollapsibleGroupBoxBasic(QgsPointDisplacementRendererWidgetBase);
        mLabelingGroupBox->setObjectName(QString::fromUtf8("mLabelingGroupBox"));
        gridLayout = new QGridLayout(mLabelingGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLabelDistanceLabel = new QLabel(mLabelingGroupBox);
        mLabelDistanceLabel->setObjectName(QString::fromUtf8("mLabelDistanceLabel"));

        gridLayout->addWidget(mLabelDistanceLabel, 3, 0, 1, 1);

        mLabelColorLabel = new QLabel(mLabelingGroupBox);
        mLabelColorLabel->setObjectName(QString::fromUtf8("mLabelColorLabel"));

        gridLayout->addWidget(mLabelColorLabel, 2, 0, 1, 1);

        mMinLabelScaleWidget = new QgsScaleWidget(mLabelingGroupBox);
        mMinLabelScaleWidget->setObjectName(QString::fromUtf8("mMinLabelScaleWidget"));
        mMinLabelScaleWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mMinLabelScaleWidget, 5, 2, 1, 1);

        mLabelAttributeLabel = new QLabel(mLabelingGroupBox);
        mLabelAttributeLabel->setObjectName(QString::fromUtf8("mLabelAttributeLabel"));

        gridLayout->addWidget(mLabelAttributeLabel, 0, 0, 1, 1);

        mScaleDependentLabelsCheckBox = new QCheckBox(mLabelingGroupBox);
        mScaleDependentLabelsCheckBox->setObjectName(QString::fromUtf8("mScaleDependentLabelsCheckBox"));

        gridLayout->addWidget(mScaleDependentLabelsCheckBox, 4, 0, 1, 3);

        mLabelColorButton = new QgsColorButton(mLabelingGroupBox);
        mLabelColorButton->setObjectName(QString::fromUtf8("mLabelColorButton"));
        mLabelColorButton->setMinimumSize(QSize(120, 0));
        mLabelColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mLabelColorButton, 2, 2, 1, 1);

        label = new QLabel(mLabelingGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mLabelFieldComboBox = new QComboBox(mLabelingGroupBox);
        mLabelFieldComboBox->setObjectName(QString::fromUtf8("mLabelFieldComboBox"));

        gridLayout->addWidget(mLabelFieldComboBox, 0, 2, 1, 1);

        mMaxScaleLabel = new QLabel(mLabelingGroupBox);
        mMaxScaleLabel->setObjectName(QString::fromUtf8("mMaxScaleLabel"));

        gridLayout->addWidget(mMaxScaleLabel, 5, 0, 1, 1);

        mLabelFontButton = new QgsFontButton(mLabelingGroupBox);
        mLabelFontButton->setObjectName(QString::fromUtf8("mLabelFontButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelFontButton->sizePolicy().hasHeightForWidth());
        mLabelFontButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLabelFontButton, 1, 2, 1, 1);

        mLabelDistanceFactorSpinBox = new QgsDoubleSpinBox(mLabelingGroupBox);
        mLabelDistanceFactorSpinBox->setObjectName(QString::fromUtf8("mLabelDistanceFactorSpinBox"));
        mLabelDistanceFactorSpinBox->setMinimum(-5.000000000000000);
        mLabelDistanceFactorSpinBox->setMaximum(5.000000000000000);
        mLabelDistanceFactorSpinBox->setSingleStep(0.100000000000000);
        mLabelDistanceFactorSpinBox->setValue(0.500000000000000);

        gridLayout->addWidget(mLabelDistanceFactorSpinBox, 3, 2, 1, 1);


        gridLayout_3->addWidget(mLabelingGroupBox, 9, 0, 1, 2);

        label_2 = new QLabel(QgsPointDisplacementRendererWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 7, 0, 1, 1);

        mDistanceToleranceLabel = new QLabel(QgsPointDisplacementRendererWidgetBase);
        mDistanceToleranceLabel->setObjectName(QString::fromUtf8("mDistanceToleranceLabel"));

        gridLayout_3->addWidget(mDistanceToleranceLabel, 6, 0, 1, 1);

        mRendererSettingsButton = new QPushButton(QgsPointDisplacementRendererWidgetBase);
        mRendererSettingsButton->setObjectName(QString::fromUtf8("mRendererSettingsButton"));

        gridLayout_3->addWidget(mRendererSettingsButton, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 10, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mDistanceSpinBox = new QgsDoubleSpinBox(QgsPointDisplacementRendererWidgetBase);
        mDistanceSpinBox->setObjectName(QString::fromUtf8("mDistanceSpinBox"));
        mDistanceSpinBox->setDecimals(7);
        mDistanceSpinBox->setMaximum(999999999.000000000000000);

        horizontalLayout->addWidget(mDistanceSpinBox);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(QgsPointDisplacementRendererWidgetBase);
        mDistanceUnitWidget->setObjectName(QString::fromUtf8("mDistanceUnitWidget"));
        mDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mDistanceUnitWidget);


        gridLayout_3->addLayout(horizontalLayout, 6, 1, 1, 1);

        mPlacementComboBox = new QComboBox(QgsPointDisplacementRendererWidgetBase);
        mPlacementComboBox->setObjectName(QString::fromUtf8("mPlacementComboBox"));

        gridLayout_3->addWidget(mPlacementComboBox, 7, 1, 1, 1);

        mCenterSymbolLabel = new QLabel(QgsPointDisplacementRendererWidgetBase);
        mCenterSymbolLabel->setObjectName(QString::fromUtf8("mCenterSymbolLabel"));

        gridLayout_3->addWidget(mCenterSymbolLabel, 0, 0, 1, 1);

        mDisplacementCirclesGroupBox = new QgsCollapsibleGroupBoxBasic(QgsPointDisplacementRendererWidgetBase);
        mDisplacementCirclesGroupBox->setObjectName(QString::fromUtf8("mDisplacementCirclesGroupBox"));
        gridLayout_2 = new QGridLayout(mDisplacementCirclesGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mCircleColorButton = new QgsColorButton(mDisplacementCirclesGroupBox);
        mCircleColorButton->setObjectName(QString::fromUtf8("mCircleColorButton"));
        mCircleColorButton->setMinimumSize(QSize(120, 0));
        mCircleColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(mCircleColorButton, 2, 1, 1, 1);

        mCircleRadiusLabel = new QLabel(mDisplacementCirclesGroupBox);
        mCircleRadiusLabel->setObjectName(QString::fromUtf8("mCircleRadiusLabel"));

        gridLayout_2->addWidget(mCircleRadiusLabel, 3, 0, 1, 1);

        mCircleWidthLabel = new QLabel(mDisplacementCirclesGroupBox);
        mCircleWidthLabel->setObjectName(QString::fromUtf8("mCircleWidthLabel"));

        gridLayout_2->addWidget(mCircleWidthLabel, 0, 0, 1, 1);

        mCircleColorLabel = new QLabel(mDisplacementCirclesGroupBox);
        mCircleColorLabel->setObjectName(QString::fromUtf8("mCircleColorLabel"));

        gridLayout_2->addWidget(mCircleColorLabel, 2, 0, 1, 1);

        mCircleModificationSpinBox = new QgsDoubleSpinBox(mDisplacementCirclesGroupBox);
        mCircleModificationSpinBox->setObjectName(QString::fromUtf8("mCircleModificationSpinBox"));
        mCircleModificationSpinBox->setMinimum(-9999.000000000000000);
        mCircleModificationSpinBox->setMaximum(9999.000000000000000);
        mCircleModificationSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(mCircleModificationSpinBox, 3, 1, 1, 1);

        mCircleWidthSpinBox = new QgsDoubleSpinBox(mDisplacementCirclesGroupBox);
        mCircleWidthSpinBox->setObjectName(QString::fromUtf8("mCircleWidthSpinBox"));
        mCircleWidthSpinBox->setMaximum(9999.000000000000000);
        mCircleWidthSpinBox->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(mCircleWidthSpinBox, 0, 1, 1, 1);


        gridLayout_3->addWidget(mDisplacementCirclesGroupBox, 8, 0, 1, 2);

        mCenterSymbolToolButton = new QgsSymbolButton(QgsPointDisplacementRendererWidgetBase);
        mCenterSymbolToolButton->setObjectName(QString::fromUtf8("mCenterSymbolToolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCenterSymbolToolButton->sizePolicy().hasHeightForWidth());
        mCenterSymbolToolButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mCenterSymbolToolButton, 0, 1, 1, 1);

        QWidget::setTabOrder(mCenterSymbolToolButton, mRendererComboBox);
        QWidget::setTabOrder(mRendererComboBox, mRendererSettingsButton);
        QWidget::setTabOrder(mRendererSettingsButton, mDistanceSpinBox);
        QWidget::setTabOrder(mDistanceSpinBox, mDistanceUnitWidget);
        QWidget::setTabOrder(mDistanceUnitWidget, mPlacementComboBox);
        QWidget::setTabOrder(mPlacementComboBox, mCircleWidthSpinBox);
        QWidget::setTabOrder(mCircleWidthSpinBox, mCircleColorButton);
        QWidget::setTabOrder(mCircleColorButton, mCircleModificationSpinBox);
        QWidget::setTabOrder(mCircleModificationSpinBox, mLabelFieldComboBox);
        QWidget::setTabOrder(mLabelFieldComboBox, mLabelFontButton);
        QWidget::setTabOrder(mLabelFontButton, mLabelColorButton);
        QWidget::setTabOrder(mLabelColorButton, mLabelDistanceFactorSpinBox);
        QWidget::setTabOrder(mLabelDistanceFactorSpinBox, mScaleDependentLabelsCheckBox);
        QWidget::setTabOrder(mScaleDependentLabelsCheckBox, mMinLabelScaleWidget);

        retranslateUi(QgsPointDisplacementRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointDisplacementRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointDisplacementRendererWidgetBase)
    {
        mRendererLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Renderer", nullptr));
        mLabelingGroupBox->setTitle(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Labels", nullptr));
        mLabelDistanceLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label distance factor", nullptr));
        mLabelColorLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label color", nullptr));
        mLabelAttributeLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label attribute", nullptr));
        mScaleDependentLabelsCheckBox->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Use scale dependent labeling", nullptr));
        mLabelColorButton->setText(QString());
        label->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label font", nullptr));
        mMaxScaleLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Minimum map scale", nullptr));
        mLabelFontButton->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Font", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Placement method", nullptr));
#if QT_CONFIG(tooltip)
        mDistanceToleranceLabel->setToolTip(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Point distance tolerance", nullptr));
#endif // QT_CONFIG(tooltip)
        mDistanceToleranceLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Distance", nullptr));
        mRendererSettingsButton->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Renderer Settings\342\200\246", nullptr));
        mCenterSymbolLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Center symbol", nullptr));
        mDisplacementCirclesGroupBox->setTitle(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Displacement Lines", nullptr));
        mCircleColorButton->setText(QString());
        mCircleRadiusLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Size adjustment", nullptr));
        mCircleWidthLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Stroke width", nullptr));
        mCircleColorLabel->setText(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", "Stroke color", nullptr));
        mCircleModificationSpinBox->setSuffix(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", " mm", nullptr));
        mCircleWidthSpinBox->setSuffix(QCoreApplication::translate("QgsPointDisplacementRendererWidgetBase", " mm", nullptr));
        mCenterSymbolToolButton->setText(QString());
        (void)QgsPointDisplacementRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsPointDisplacementRendererWidgetBase: public Ui_QgsPointDisplacementRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTDISPLACEMENTRENDERERWIDGETBASE_H
