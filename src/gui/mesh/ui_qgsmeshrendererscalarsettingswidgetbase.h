/********************************************************************************
** Form generated from reading UI file 'qgsmeshrendererscalarsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERSCALARSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERSCALARSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorrampshaderwidget.h"
#include "qgsdoublespinbox.h"
#include "qgsmeshvariablestrokewidthwidget.h"
#include "qgsopacitywidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererScalarSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mOpacityContainerWidget;
    QFormLayout *formLayout;
    QLabel *mOpacityLabel;
    QgsOpacityWidget *mOpacityWidget;
    QGroupBox *mEdgeWidthGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *mScalarEdgeStrokeWidthVariableRadioButton;
    QRadioButton *mScalarEdgeStrokeWidthFixedRadioButton;
    QgsMeshVariableStrokeWidthButton *mScalarEdgeStrokeWidthVariablePushButton;
    QgsDoubleSpinBox *mScalarEdgeStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mScalarEdgeStrokeWidthUnitSelectionWidget;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mScalarMinLabel;
    QgsDoubleSpinBox *mScalarMinSpinBox;
    QLabel *mScalarMaxLabel;
    QgsDoubleSpinBox *mScalarMaxSpinBox;
    QPushButton *mScalarRecalculateMinMaxButton;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *mUserDefinedRadioButton;
    QRadioButton *mMinMaxRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mMinMaxValueTypeLabel;
    QComboBox *mMinMaxValueTypeComboBox;
    QWidget *mScalarResamplingWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mLabelDataInterpolation;
    QComboBox *mScalarInterpolationTypeComboBox;
    QgsColorRampShaderWidget *mScalarColorRampShaderWidget;
    QButtonGroup *mMinMaxTypeButtonGroup;

    void setupUi(QWidget *QgsMeshRendererScalarSettingsWidgetBase)
    {
        if (QgsMeshRendererScalarSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererScalarSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsMeshRendererScalarSettingsWidgetBase"));
        QgsMeshRendererScalarSettingsWidgetBase->resize(416, 272);
        QgsMeshRendererScalarSettingsWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsMeshRendererScalarSettingsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOpacityContainerWidget = new QWidget(QgsMeshRendererScalarSettingsWidgetBase);
        mOpacityContainerWidget->setObjectName(QString::fromUtf8("mOpacityContainerWidget"));
        formLayout = new QFormLayout(mOpacityContainerWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        mOpacityLabel = new QLabel(mOpacityContainerWidget);
        mOpacityLabel->setObjectName(QString::fromUtf8("mOpacityLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mOpacityLabel);

        mOpacityWidget = new QgsOpacityWidget(mOpacityContainerWidget);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setMinimumSize(QSize(0, 14));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(0, QFormLayout::FieldRole, mOpacityWidget);


        verticalLayout->addWidget(mOpacityContainerWidget);

        mEdgeWidthGroupBox = new QGroupBox(QgsMeshRendererScalarSettingsWidgetBase);
        mEdgeWidthGroupBox->setObjectName(QString::fromUtf8("mEdgeWidthGroupBox"));
        gridLayout_2 = new QGridLayout(mEdgeWidthGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mScalarEdgeStrokeWidthVariableRadioButton = new QRadioButton(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthVariableRadioButton->setObjectName(QString::fromUtf8("mScalarEdgeStrokeWidthVariableRadioButton"));

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthVariableRadioButton, 2, 0, 1, 1);

        mScalarEdgeStrokeWidthFixedRadioButton = new QRadioButton(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthFixedRadioButton->setObjectName(QString::fromUtf8("mScalarEdgeStrokeWidthFixedRadioButton"));
        mScalarEdgeStrokeWidthFixedRadioButton->setChecked(true);

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthFixedRadioButton, 0, 0, 1, 1);

        mScalarEdgeStrokeWidthVariablePushButton = new QgsMeshVariableStrokeWidthButton(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthVariablePushButton->setObjectName(QString::fromUtf8("mScalarEdgeStrokeWidthVariablePushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mScalarEdgeStrokeWidthVariablePushButton->sizePolicy().hasHeightForWidth());
        mScalarEdgeStrokeWidthVariablePushButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthVariablePushButton, 0, 3, 3, 1);

        mScalarEdgeStrokeWidthSpinBox = new QgsDoubleSpinBox(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mScalarEdgeStrokeWidthSpinBox"));
        sizePolicy.setHeightForWidth(mScalarEdgeStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mScalarEdgeStrokeWidthSpinBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthSpinBox, 0, 2, 3, 1);

        mScalarEdgeStrokeWidthUnitSelectionWidget = new QgsUnitSelectionWidget(mEdgeWidthGroupBox);
        mScalarEdgeStrokeWidthUnitSelectionWidget->setObjectName(QString::fromUtf8("mScalarEdgeStrokeWidthUnitSelectionWidget"));

        gridLayout_2->addWidget(mScalarEdgeStrokeWidthUnitSelectionWidget, 0, 4, 3, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 3, 1);


        verticalLayout->addWidget(mEdgeWidthGroupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mScalarMinLabel = new QLabel(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMinLabel->setObjectName(QString::fromUtf8("mScalarMinLabel"));

        horizontalLayout_2->addWidget(mScalarMinLabel);

        mScalarMinSpinBox = new QgsDoubleSpinBox(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMinSpinBox->setObjectName(QString::fromUtf8("mScalarMinSpinBox"));
        mScalarMinSpinBox->setMinimum(-10000000000000.000000000000000);
        mScalarMinSpinBox->setMaximum(10000000000000.000000000000000);

        horizontalLayout_2->addWidget(mScalarMinSpinBox);

        mScalarMaxLabel = new QLabel(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMaxLabel->setObjectName(QString::fromUtf8("mScalarMaxLabel"));

        horizontalLayout_2->addWidget(mScalarMaxLabel);

        mScalarMaxSpinBox = new QgsDoubleSpinBox(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarMaxSpinBox->setObjectName(QString::fromUtf8("mScalarMaxSpinBox"));
        mScalarMaxSpinBox->setMinimum(-10000000000000.000000000000000);
        mScalarMaxSpinBox->setMaximum(10000000000000.000000000000000);

        horizontalLayout_2->addWidget(mScalarMaxSpinBox);

        mScalarRecalculateMinMaxButton = new QPushButton(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarRecalculateMinMaxButton->setObjectName(QString::fromUtf8("mScalarRecalculateMinMaxButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mScalarRecalculateMinMaxButton->setIcon(icon);

        horizontalLayout_2->addWidget(mScalarRecalculateMinMaxButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mUserDefinedRadioButton = new QRadioButton(QgsMeshRendererScalarSettingsWidgetBase);
        mMinMaxTypeButtonGroup = new QButtonGroup(QgsMeshRendererScalarSettingsWidgetBase);
        mMinMaxTypeButtonGroup->setObjectName(QString::fromUtf8("mMinMaxTypeButtonGroup"));
        mMinMaxTypeButtonGroup->addButton(mUserDefinedRadioButton);
        mUserDefinedRadioButton->setObjectName(QString::fromUtf8("mUserDefinedRadioButton"));

        verticalLayout_2->addWidget(mUserDefinedRadioButton);

        mMinMaxRadioButton = new QRadioButton(QgsMeshRendererScalarSettingsWidgetBase);
        mMinMaxTypeButtonGroup->addButton(mMinMaxRadioButton);
        mMinMaxRadioButton->setObjectName(QString::fromUtf8("mMinMaxRadioButton"));

        verticalLayout_2->addWidget(mMinMaxRadioButton);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mMinMaxValueTypeLabel = new QLabel(QgsMeshRendererScalarSettingsWidgetBase);
        mMinMaxValueTypeLabel->setObjectName(QString::fromUtf8("mMinMaxValueTypeLabel"));

        horizontalLayout_3->addWidget(mMinMaxValueTypeLabel);

        mMinMaxValueTypeComboBox = new QComboBox(QgsMeshRendererScalarSettingsWidgetBase);
        mMinMaxValueTypeComboBox->setObjectName(QString::fromUtf8("mMinMaxValueTypeComboBox"));

        horizontalLayout_3->addWidget(mMinMaxValueTypeComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        mScalarResamplingWidget = new QWidget(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarResamplingWidget->setObjectName(QString::fromUtf8("mScalarResamplingWidget"));
        horizontalLayout_4 = new QHBoxLayout(mScalarResamplingWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mLabelDataInterpolation = new QLabel(mScalarResamplingWidget);
        mLabelDataInterpolation->setObjectName(QString::fromUtf8("mLabelDataInterpolation"));

        horizontalLayout_4->addWidget(mLabelDataInterpolation);

        mScalarInterpolationTypeComboBox = new QComboBox(mScalarResamplingWidget);
        mScalarInterpolationTypeComboBox->setObjectName(QString::fromUtf8("mScalarInterpolationTypeComboBox"));

        horizontalLayout_4->addWidget(mScalarInterpolationTypeComboBox);


        verticalLayout->addWidget(mScalarResamplingWidget);

        mScalarColorRampShaderWidget = new QgsColorRampShaderWidget(QgsMeshRendererScalarSettingsWidgetBase);
        mScalarColorRampShaderWidget->setObjectName(QString::fromUtf8("mScalarColorRampShaderWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mScalarColorRampShaderWidget->sizePolicy().hasHeightForWidth());
        mScalarColorRampShaderWidget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(mScalarColorRampShaderWidget);

        QWidget::setTabOrder(mOpacityWidget, mScalarEdgeStrokeWidthFixedRadioButton);
        QWidget::setTabOrder(mScalarEdgeStrokeWidthFixedRadioButton, mScalarEdgeStrokeWidthVariableRadioButton);
        QWidget::setTabOrder(mScalarEdgeStrokeWidthVariableRadioButton, mScalarEdgeStrokeWidthSpinBox);
        QWidget::setTabOrder(mScalarEdgeStrokeWidthSpinBox, mScalarEdgeStrokeWidthVariablePushButton);
        QWidget::setTabOrder(mScalarEdgeStrokeWidthVariablePushButton, mScalarEdgeStrokeWidthUnitSelectionWidget);
        QWidget::setTabOrder(mScalarEdgeStrokeWidthUnitSelectionWidget, mScalarMinSpinBox);
        QWidget::setTabOrder(mScalarMinSpinBox, mScalarMaxSpinBox);
        QWidget::setTabOrder(mScalarMaxSpinBox, mScalarRecalculateMinMaxButton);
        QWidget::setTabOrder(mScalarRecalculateMinMaxButton, mScalarInterpolationTypeComboBox);

        retranslateUi(QgsMeshRendererScalarSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshRendererScalarSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererScalarSettingsWidgetBase)
    {
        mOpacityLabel->setText(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Opacity", nullptr));
        mEdgeWidthGroupBox->setTitle(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Stroke width", nullptr));
        mScalarEdgeStrokeWidthVariableRadioButton->setText(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Variable", nullptr));
        mScalarEdgeStrokeWidthFixedRadioButton->setText(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Fixed", nullptr));
        mScalarMinLabel->setText(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Min", nullptr));
        mScalarMaxLabel->setText(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Max", nullptr));
#if QT_CONFIG(tooltip)
        mScalarRecalculateMinMaxButton->setToolTip(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Load", nullptr));
#endif // QT_CONFIG(tooltip)
        mUserDefinedRadioButton->setText(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Use&r defined", nullptr));
        mMinMaxRadioButton->setText(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "&Min / max", nullptr));
        mMinMaxValueTypeLabel->setText(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Statistics extent", nullptr));
        mLabelDataInterpolation->setText(QCoreApplication::translate("QgsMeshRendererScalarSettingsWidgetBase", "Resampling method", nullptr));
        (void)QgsMeshRendererScalarSettingsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererScalarSettingsWidgetBase: public Ui_QgsMeshRendererScalarSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERSCALARSETTINGSWIDGETBASE_H
