/********************************************************************************
** Form generated from reading UI file 'qgsinterpolatedlinesymbollayerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSINTERPOLATEDLINESYMBOLLAYERWIDGETBASE_H
#define UI_QGSINTERPOLATEDLINESYMBOLLAYERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgscolorrampshaderwidget.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsInterpolatedLineSymbolLayerWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QComboBox *mWidthMethodComboBox;
    QWidget *mFixedWidthWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsDoubleSpinBox *mDoubleSpinBoxWidth;
    QgsUnitSelectionWidget *mWidthUnitSelectionFixed;
    QWidget *mVaryingWidthWidget;
    QGridLayout *gridLayout_3;
    QgsFieldExpressionWidget *mWidthEndFieldExpression;
    QgsFieldExpressionWidget *mWidthStartFieldExpression;
    QgsDoubleSpinBox *mDoubleSpinBoxMinWidth;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *mCheckBoxAbsoluteValue;
    QCheckBox *mCheckBoxOutOfrange;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QgsUnitSelectionWidget *mWidthUnitSelectionVarying;
    QVBoxLayout *verticalLayout_3;
    QPushButton *mButtonLoadMinMaxValueWidth;
    QgsDoubleSpinBox *mDoubleSpinBoxMaxWidth;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *mLineEditWidthMinValue;
    QLabel *label_4;
    QLineEdit *mLineEditWidthMaxValue;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QComboBox *mColorMethodComboBox;
    QWidget *mFixedColorWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QgsColorButton *mColorButton;
    QWidget *mVaryingColorWidget;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_12;
    QgsFieldExpressionWidget *mColorStartFieldExpression;
    QLabel *label_10;
    QgsColorRampShaderWidget *mColorRampShaderWidget;
    QLineEdit *mLineEditColorMinValue;
    QVBoxLayout *verticalLayout_6;
    QPushButton *mButtonLoadMinMaxValueColor;
    QLineEdit *mLineEditColorMaxValue;
    QgsFieldExpressionWidget *mColorEndFieldExpression;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QgsInterpolatedLineSymbolLayerWidgetBase)
    {
        if (QgsInterpolatedLineSymbolLayerWidgetBase->objectName().isEmpty())
            QgsInterpolatedLineSymbolLayerWidgetBase->setObjectName(QString::fromUtf8("QgsInterpolatedLineSymbolLayerWidgetBase"));
        QgsInterpolatedLineSymbolLayerWidgetBase->resize(280, 649);
        QgsInterpolatedLineSymbolLayerWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsInterpolatedLineSymbolLayerWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(QgsInterpolatedLineSymbolLayerWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mWidthMethodComboBox = new QComboBox(groupBox_3);
        mWidthMethodComboBox->setObjectName(QString::fromUtf8("mWidthMethodComboBox"));

        verticalLayout_4->addWidget(mWidthMethodComboBox);

        mFixedWidthWidget = new QWidget(groupBox_3);
        mFixedWidthWidget->setObjectName(QString::fromUtf8("mFixedWidthWidget"));
        horizontalLayout = new QHBoxLayout(mFixedWidthWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(mFixedWidthWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mDoubleSpinBoxWidth = new QgsDoubleSpinBox(mFixedWidthWidget);
        mDoubleSpinBoxWidth->setObjectName(QString::fromUtf8("mDoubleSpinBoxWidth"));

        horizontalLayout->addWidget(mDoubleSpinBoxWidth);

        mWidthUnitSelectionFixed = new QgsUnitSelectionWidget(mFixedWidthWidget);
        mWidthUnitSelectionFixed->setObjectName(QString::fromUtf8("mWidthUnitSelectionFixed"));

        horizontalLayout->addWidget(mWidthUnitSelectionFixed);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_4->addWidget(mFixedWidthWidget);

        mVaryingWidthWidget = new QWidget(groupBox_3);
        mVaryingWidthWidget->setObjectName(QString::fromUtf8("mVaryingWidthWidget"));
        gridLayout_3 = new QGridLayout(mVaryingWidthWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mWidthEndFieldExpression = new QgsFieldExpressionWidget(mVaryingWidthWidget);
        mWidthEndFieldExpression->setObjectName(QString::fromUtf8("mWidthEndFieldExpression"));

        gridLayout_3->addWidget(mWidthEndFieldExpression, 1, 1, 1, 3);

        mWidthStartFieldExpression = new QgsFieldExpressionWidget(mVaryingWidthWidget);
        mWidthStartFieldExpression->setObjectName(QString::fromUtf8("mWidthStartFieldExpression"));

        gridLayout_3->addWidget(mWidthStartFieldExpression, 0, 1, 1, 3);

        mDoubleSpinBoxMinWidth = new QgsDoubleSpinBox(mVaryingWidthWidget);
        mDoubleSpinBoxMinWidth->setObjectName(QString::fromUtf8("mDoubleSpinBoxMinWidth"));
        mDoubleSpinBoxMinWidth->setMaximum(999999.989999999990687);

        gridLayout_3->addWidget(mDoubleSpinBoxMinWidth, 6, 1, 1, 2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 0, -1, -1);
        mCheckBoxAbsoluteValue = new QCheckBox(mVaryingWidthWidget);
        mCheckBoxAbsoluteValue->setObjectName(QString::fromUtf8("mCheckBoxAbsoluteValue"));

        verticalLayout_7->addWidget(mCheckBoxAbsoluteValue);

        mCheckBoxOutOfrange = new QCheckBox(mVaryingWidthWidget);
        mCheckBoxOutOfrange->setObjectName(QString::fromUtf8("mCheckBoxOutOfrange"));

        verticalLayout_7->addWidget(mCheckBoxOutOfrange);


        gridLayout_3->addLayout(verticalLayout_7, 8, 0, 1, 4);

        label_2 = new QLabel(mVaryingWidthWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(mVaryingWidthWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        label_7 = new QLabel(mVaryingWidthWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 7, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mWidthUnitSelectionVarying = new QgsUnitSelectionWidget(mVaryingWidthWidget);
        mWidthUnitSelectionVarying->setObjectName(QString::fromUtf8("mWidthUnitSelectionVarying"));

        verticalLayout_2->addWidget(mWidthUnitSelectionVarying);


        gridLayout_3->addLayout(verticalLayout_2, 6, 3, 2, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mButtonLoadMinMaxValueWidth = new QPushButton(mVaryingWidthWidget);
        mButtonLoadMinMaxValueWidth->setObjectName(QString::fromUtf8("mButtonLoadMinMaxValueWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonLoadMinMaxValueWidth->sizePolicy().hasHeightForWidth());
        mButtonLoadMinMaxValueWidth->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonLoadMinMaxValueWidth->setIcon(icon);

        verticalLayout_3->addWidget(mButtonLoadMinMaxValueWidth);


        gridLayout_3->addLayout(verticalLayout_3, 2, 3, 2, 1);

        mDoubleSpinBoxMaxWidth = new QgsDoubleSpinBox(mVaryingWidthWidget);
        mDoubleSpinBoxMaxWidth->setObjectName(QString::fromUtf8("mDoubleSpinBoxMaxWidth"));
        mDoubleSpinBoxMaxWidth->setMaximum(999999.989999999990687);

        gridLayout_3->addWidget(mDoubleSpinBoxMaxWidth, 7, 1, 1, 2);

        label_6 = new QLabel(mVaryingWidthWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 6, 0, 1, 1);

        label_5 = new QLabel(mVaryingWidthWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        mLineEditWidthMinValue = new QLineEdit(mVaryingWidthWidget);
        mLineEditWidthMinValue->setObjectName(QString::fromUtf8("mLineEditWidthMinValue"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineEditWidthMinValue->sizePolicy().hasHeightForWidth());
        mLineEditWidthMinValue->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mLineEditWidthMinValue, 2, 1, 1, 2);

        label_4 = new QLabel(mVaryingWidthWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        mLineEditWidthMaxValue = new QLineEdit(mVaryingWidthWidget);
        mLineEditWidthMaxValue->setObjectName(QString::fromUtf8("mLineEditWidthMaxValue"));
        sizePolicy1.setHeightForWidth(mLineEditWidthMaxValue->sizePolicy().hasHeightForWidth());
        mLineEditWidthMaxValue->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mLineEditWidthMaxValue, 3, 1, 1, 2);


        verticalLayout_4->addWidget(mVaryingWidthWidget);


        verticalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(QgsInterpolatedLineSymbolLayerWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mColorMethodComboBox = new QComboBox(groupBox);
        mColorMethodComboBox->setObjectName(QString::fromUtf8("mColorMethodComboBox"));

        verticalLayout_5->addWidget(mColorMethodComboBox);

        mFixedColorWidget = new QWidget(groupBox);
        mFixedColorWidget->setObjectName(QString::fromUtf8("mFixedColorWidget"));
        gridLayout_2 = new QGridLayout(mFixedColorWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(mFixedColorWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        mColorButton = new QgsColorButton(mFixedColorWidget);
        mColorButton->setObjectName(QString::fromUtf8("mColorButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mColorButton->sizePolicy().hasHeightForWidth());
        mColorButton->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(mColorButton, 0, 1, 1, 1);


        verticalLayout_5->addWidget(mFixedColorWidget);

        mVaryingColorWidget = new QWidget(groupBox);
        mVaryingColorWidget->setObjectName(QString::fromUtf8("mVaryingColorWidget"));
        gridLayout = new QGridLayout(mVaryingColorWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 10);
        label_11 = new QLabel(mVaryingColorWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        label_9 = new QLabel(mVaryingColorWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_12 = new QLabel(mVaryingColorWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        mColorStartFieldExpression = new QgsFieldExpressionWidget(mVaryingColorWidget);
        mColorStartFieldExpression->setObjectName(QString::fromUtf8("mColorStartFieldExpression"));

        gridLayout->addWidget(mColorStartFieldExpression, 0, 1, 1, 2);

        label_10 = new QLabel(mVaryingColorWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        mColorRampShaderWidget = new QgsColorRampShaderWidget(mVaryingColorWidget);
        mColorRampShaderWidget->setObjectName(QString::fromUtf8("mColorRampShaderWidget"));
        mColorRampShaderWidget->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(mColorRampShaderWidget, 5, 0, 1, 3);

        mLineEditColorMinValue = new QLineEdit(mVaryingColorWidget);
        mLineEditColorMinValue->setObjectName(QString::fromUtf8("mLineEditColorMinValue"));

        gridLayout->addWidget(mLineEditColorMinValue, 2, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, -1, 0);
        mButtonLoadMinMaxValueColor = new QPushButton(mVaryingColorWidget);
        mButtonLoadMinMaxValueColor->setObjectName(QString::fromUtf8("mButtonLoadMinMaxValueColor"));
        mButtonLoadMinMaxValueColor->setIcon(icon);

        verticalLayout_6->addWidget(mButtonLoadMinMaxValueColor);


        gridLayout->addLayout(verticalLayout_6, 2, 2, 2, 1);

        mLineEditColorMaxValue = new QLineEdit(mVaryingColorWidget);
        mLineEditColorMaxValue->setObjectName(QString::fromUtf8("mLineEditColorMaxValue"));

        gridLayout->addWidget(mLineEditColorMaxValue, 3, 1, 1, 1);

        mColorEndFieldExpression = new QgsFieldExpressionWidget(mVaryingColorWidget);
        mColorEndFieldExpression->setObjectName(QString::fromUtf8("mColorEndFieldExpression"));

        gridLayout->addWidget(mColorEndFieldExpression, 1, 1, 1, 2);


        verticalLayout_5->addWidget(mVaryingColorWidget);


        verticalLayout->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(QgsInterpolatedLineSymbolLayerWidgetBase);

        QMetaObject::connectSlotsByName(QgsInterpolatedLineSymbolLayerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsInterpolatedLineSymbolLayerWidgetBase)
    {
        groupBox_3->setTitle(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Stroke Width", nullptr));
        label->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Width", nullptr));
        mCheckBoxAbsoluteValue->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Use absolute value", nullptr));
        mCheckBoxOutOfrange->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Ignore out of range", nullptr));
        label_2->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Start value", nullptr));
        label_3->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "End value", nullptr));
        label_7->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Max. width", nullptr));
        mButtonLoadMinMaxValueWidth->setText(QString());
        label_6->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Min. width", nullptr));
        label_5->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Max. value", nullptr));
        mLineEditWidthMinValue->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "0", nullptr));
        label_4->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Min. value", nullptr));
        mLineEditWidthMaxValue->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "10", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Color", nullptr));
        label_8->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Color", nullptr));
        mColorButton->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "...", nullptr));
        label_11->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Min.  value", nullptr));
        label_9->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Start value", nullptr));
        label_12->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "Max. value", nullptr));
        label_10->setText(QCoreApplication::translate("QgsInterpolatedLineSymbolLayerWidgetBase", "End value", nullptr));
        mButtonLoadMinMaxValueColor->setText(QString());
        (void)QgsInterpolatedLineSymbolLayerWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsInterpolatedLineSymbolLayerWidgetBase: public Ui_QgsInterpolatedLineSymbolLayerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSINTERPOLATEDLINESYMBOLLAYERWIDGETBASE_H
