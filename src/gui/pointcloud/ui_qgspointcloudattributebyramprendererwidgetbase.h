/********************************************************************************
** Form generated from reading UI file 'qgspointcloudattributebyramprendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDATTRIBUTEBYRAMPRENDERERWIDGETBASE_H
#define UI_QGSPOINTCLOUDATTRIBUTEBYRAMPRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qgscolorrampshaderwidget.h"
#include "qgsdoublespinbox.h"
#include "qgspointcloudattributecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudAttributeByRampRendererWidgetBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mScalarMinLabel;
    QgsDoubleSpinBox *mMinSpin;
    QLabel *mScalarMaxLabel;
    QgsDoubleSpinBox *mMaxSpin;
    QPushButton *mScalarRecalculateMinMaxButton;
    QLabel *label_4;
    QgsPointCloudAttributeComboBox *mAttributeComboBox;
    QgsColorRampShaderWidget *mScalarColorRampShaderWidget;

    void setupUi(QWidget *QgsPointCloudAttributeByRampRendererWidgetBase)
    {
        if (QgsPointCloudAttributeByRampRendererWidgetBase->objectName().isEmpty())
            QgsPointCloudAttributeByRampRendererWidgetBase->setObjectName(QString::fromUtf8("QgsPointCloudAttributeByRampRendererWidgetBase"));
        QgsPointCloudAttributeByRampRendererWidgetBase->resize(631, 781);
        QgsPointCloudAttributeByRampRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsPointCloudAttributeByRampRendererWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mScalarMinLabel = new QLabel(QgsPointCloudAttributeByRampRendererWidgetBase);
        mScalarMinLabel->setObjectName(QString::fromUtf8("mScalarMinLabel"));

        horizontalLayout_2->addWidget(mScalarMinLabel);

        mMinSpin = new QgsDoubleSpinBox(QgsPointCloudAttributeByRampRendererWidgetBase);
        mMinSpin->setObjectName(QString::fromUtf8("mMinSpin"));
        mMinSpin->setDecimals(5);
        mMinSpin->setMinimum(-9999999999.000000000000000);
        mMinSpin->setMaximum(9999999999.000000000000000);

        horizontalLayout_2->addWidget(mMinSpin);

        mScalarMaxLabel = new QLabel(QgsPointCloudAttributeByRampRendererWidgetBase);
        mScalarMaxLabel->setObjectName(QString::fromUtf8("mScalarMaxLabel"));

        horizontalLayout_2->addWidget(mScalarMaxLabel);

        mMaxSpin = new QgsDoubleSpinBox(QgsPointCloudAttributeByRampRendererWidgetBase);
        mMaxSpin->setObjectName(QString::fromUtf8("mMaxSpin"));
        mMaxSpin->setDecimals(5);
        mMaxSpin->setMinimum(-9999999999.000000000000000);
        mMaxSpin->setMaximum(9999999999.000000000000000);

        horizontalLayout_2->addWidget(mMaxSpin);

        mScalarRecalculateMinMaxButton = new QPushButton(QgsPointCloudAttributeByRampRendererWidgetBase);
        mScalarRecalculateMinMaxButton->setObjectName(QString::fromUtf8("mScalarRecalculateMinMaxButton"));
        mScalarRecalculateMinMaxButton->setEnabled(false);

        horizontalLayout_2->addWidget(mScalarRecalculateMinMaxButton);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(3, 1);

        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        label_4 = new QLabel(QgsPointCloudAttributeByRampRendererWidgetBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        mAttributeComboBox = new QgsPointCloudAttributeComboBox(QgsPointCloudAttributeByRampRendererWidgetBase);
        mAttributeComboBox->setObjectName(QString::fromUtf8("mAttributeComboBox"));

        gridLayout->addWidget(mAttributeComboBox, 0, 1, 1, 1);

        mScalarColorRampShaderWidget = new QgsColorRampShaderWidget(QgsPointCloudAttributeByRampRendererWidgetBase);
        mScalarColorRampShaderWidget->setObjectName(QString::fromUtf8("mScalarColorRampShaderWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mScalarColorRampShaderWidget->sizePolicy().hasHeightForWidth());
        mScalarColorRampShaderWidget->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mScalarColorRampShaderWidget, 2, 0, 1, 2);

        gridLayout->setRowStretch(2, 1);

        retranslateUi(QgsPointCloudAttributeByRampRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointCloudAttributeByRampRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointCloudAttributeByRampRendererWidgetBase)
    {
        mScalarMinLabel->setText(QCoreApplication::translate("QgsPointCloudAttributeByRampRendererWidgetBase", "Min", nullptr));
        mScalarMaxLabel->setText(QCoreApplication::translate("QgsPointCloudAttributeByRampRendererWidgetBase", "Max", nullptr));
        mScalarRecalculateMinMaxButton->setText(QCoreApplication::translate("QgsPointCloudAttributeByRampRendererWidgetBase", "Load", nullptr));
        label_4->setText(QCoreApplication::translate("QgsPointCloudAttributeByRampRendererWidgetBase", "Attribute", nullptr));
        (void)QgsPointCloudAttributeByRampRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudAttributeByRampRendererWidgetBase: public Ui_QgsPointCloudAttributeByRampRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDATTRIBUTEBYRAMPRENDERERWIDGETBASE_H
