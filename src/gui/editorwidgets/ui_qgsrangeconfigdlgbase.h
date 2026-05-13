/********************************************************************************
** Form generated from reading UI file 'qgsrangeconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRANGECONFIGDLGBASE_H
#define UI_QGSRANGECONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRangeConfigDlgBase
{
public:
    QGridLayout *gridLayout;
    QLabel *rangeLabel;
    QgsCollapsibleGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QLabel *suffixLabel;
    QLineEdit *suffixLineEdit;
    QLabel *precisionLabel;
    QgsSpinBox *precisionSpinBox;
    QComboBox *rangeWidget;
    QSpacerItem *verticalSpacer;
    QLabel *valuesLabel;
    QStackedWidget *rangeStackedWidget;
    QWidget *intPage;
    QFormLayout *formLayout;
    QLabel *minimumLabel;
    QgsSpinBox *minimumSpinBox;
    QLabel *maximumLabel;
    QgsSpinBox *maximumSpinBox;
    QLabel *stepLabel;
    QgsSpinBox *stepSpinBox;
    QWidget *doublePage;
    QFormLayout *formLayout_2;
    QLabel *stepLabel_2;
    QLabel *maximumLabel_2;
    QLabel *minimumLabel_2;
    QgsDoubleSpinBox *minimumDoubleSpinBox;
    QgsDoubleSpinBox *maximumDoubleSpinBox;
    QgsDoubleSpinBox *stepDoubleSpinBox;
    QCheckBox *allowNullCheckBox;

    void setupUi(QWidget *QgsRangeConfigDlgBase)
    {
        if (QgsRangeConfigDlgBase->objectName().isEmpty())
            QgsRangeConfigDlgBase->setObjectName(QString::fromUtf8("QgsRangeConfigDlgBase"));
        QgsRangeConfigDlgBase->resize(549, 333);
        QgsRangeConfigDlgBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsRangeConfigDlgBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rangeLabel = new QLabel(QgsRangeConfigDlgBase);
        rangeLabel->setObjectName(QString::fromUtf8("rangeLabel"));
        rangeLabel->setWordWrap(true);

        gridLayout->addWidget(rangeLabel, 0, 0, 1, 2);

        groupBox = new QgsCollapsibleGroupBox(QgsRangeConfigDlgBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        suffixLabel = new QLabel(groupBox);
        suffixLabel->setObjectName(QString::fromUtf8("suffixLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, suffixLabel);

        suffixLineEdit = new QLineEdit(groupBox);
        suffixLineEdit->setObjectName(QString::fromUtf8("suffixLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, suffixLineEdit);

        precisionLabel = new QLabel(groupBox);
        precisionLabel->setObjectName(QString::fromUtf8("precisionLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, precisionLabel);

        precisionSpinBox = new QgsSpinBox(groupBox);
        precisionSpinBox->setObjectName(QString::fromUtf8("precisionSpinBox"));
        precisionSpinBox->setValue(4);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, precisionSpinBox);


        gridLayout->addWidget(groupBox, 4, 0, 1, 1);

        rangeWidget = new QComboBox(QgsRangeConfigDlgBase);
        rangeWidget->setObjectName(QString::fromUtf8("rangeWidget"));

        gridLayout->addWidget(rangeWidget, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        valuesLabel = new QLabel(QgsRangeConfigDlgBase);
        valuesLabel->setObjectName(QString::fromUtf8("valuesLabel"));
        valuesLabel->setWordWrap(true);

        gridLayout->addWidget(valuesLabel, 5, 0, 1, 1);

        rangeStackedWidget = new QStackedWidget(QgsRangeConfigDlgBase);
        rangeStackedWidget->setObjectName(QString::fromUtf8("rangeStackedWidget"));
        intPage = new QWidget();
        intPage->setObjectName(QString::fromUtf8("intPage"));
        formLayout = new QFormLayout(intPage);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, -1, -1, 3);
        minimumLabel = new QLabel(intPage);
        minimumLabel->setObjectName(QString::fromUtf8("minimumLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, minimumLabel);

        minimumSpinBox = new QgsSpinBox(intPage);
        minimumSpinBox->setObjectName(QString::fromUtf8("minimumSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, minimumSpinBox);

        maximumLabel = new QLabel(intPage);
        maximumLabel->setObjectName(QString::fromUtf8("maximumLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maximumLabel);

        maximumSpinBox = new QgsSpinBox(intPage);
        maximumSpinBox->setObjectName(QString::fromUtf8("maximumSpinBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, maximumSpinBox);

        stepLabel = new QLabel(intPage);
        stepLabel->setObjectName(QString::fromUtf8("stepLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, stepLabel);

        stepSpinBox = new QgsSpinBox(intPage);
        stepSpinBox->setObjectName(QString::fromUtf8("stepSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, stepSpinBox);

        rangeStackedWidget->addWidget(intPage);
        doublePage = new QWidget();
        doublePage->setObjectName(QString::fromUtf8("doublePage"));
        formLayout_2 = new QFormLayout(doublePage);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(-1, -1, -1, 3);
        stepLabel_2 = new QLabel(doublePage);
        stepLabel_2->setObjectName(QString::fromUtf8("stepLabel_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, stepLabel_2);

        maximumLabel_2 = new QLabel(doublePage);
        maximumLabel_2->setObjectName(QString::fromUtf8("maximumLabel_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, maximumLabel_2);

        minimumLabel_2 = new QLabel(doublePage);
        minimumLabel_2->setObjectName(QString::fromUtf8("minimumLabel_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, minimumLabel_2);

        minimumDoubleSpinBox = new QgsDoubleSpinBox(doublePage);
        minimumDoubleSpinBox->setObjectName(QString::fromUtf8("minimumDoubleSpinBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, minimumDoubleSpinBox);

        maximumDoubleSpinBox = new QgsDoubleSpinBox(doublePage);
        maximumDoubleSpinBox->setObjectName(QString::fromUtf8("maximumDoubleSpinBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, maximumDoubleSpinBox);

        stepDoubleSpinBox = new QgsDoubleSpinBox(doublePage);
        stepDoubleSpinBox->setObjectName(QString::fromUtf8("stepDoubleSpinBox"));
        stepDoubleSpinBox->setValue(1.000000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, stepDoubleSpinBox);

        rangeStackedWidget->addWidget(doublePage);

        gridLayout->addWidget(rangeStackedWidget, 2, 0, 1, 1);

        allowNullCheckBox = new QCheckBox(QgsRangeConfigDlgBase);
        allowNullCheckBox->setObjectName(QString::fromUtf8("allowNullCheckBox"));

        gridLayout->addWidget(allowNullCheckBox, 3, 0, 1, 1);

        QWidget::setTabOrder(rangeWidget, minimumSpinBox);
        QWidget::setTabOrder(minimumSpinBox, maximumSpinBox);
        QWidget::setTabOrder(maximumSpinBox, stepSpinBox);
        QWidget::setTabOrder(stepSpinBox, minimumDoubleSpinBox);
        QWidget::setTabOrder(minimumDoubleSpinBox, maximumDoubleSpinBox);
        QWidget::setTabOrder(maximumDoubleSpinBox, stepDoubleSpinBox);
        QWidget::setTabOrder(stepDoubleSpinBox, allowNullCheckBox);
        QWidget::setTabOrder(allowNullCheckBox, groupBox);
        QWidget::setTabOrder(groupBox, suffixLineEdit);

        retranslateUi(QgsRangeConfigDlgBase);

        rangeStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsRangeConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRangeConfigDlgBase)
    {
        rangeLabel->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Allows setting of numeric values from a specified range. The edit widget can be either a slider or a spin box.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsRangeConfigDlgBase", "Advanced Options", nullptr));
        suffixLabel->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Suffix", nullptr));
        suffixLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Inactive", nullptr));
        precisionLabel->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Precision", nullptr));
#if QT_CONFIG(tooltip)
        precisionSpinBox->setToolTip(QCoreApplication::translate("QgsRangeConfigDlgBase", "Number of decimal places", nullptr));
#endif // QT_CONFIG(tooltip)
        valuesLabel->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Local minimum/maximum = 0/0", nullptr));
        minimumLabel->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Minimum", nullptr));
        maximumLabel->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Maximum", nullptr));
        stepLabel->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Step", nullptr));
        stepLabel_2->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Step", nullptr));
        maximumLabel_2->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Maximum", nullptr));
        minimumLabel_2->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Minimum", nullptr));
        allowNullCheckBox->setText(QCoreApplication::translate("QgsRangeConfigDlgBase", "Allow NULL", nullptr));
        (void)QgsRangeConfigDlgBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRangeConfigDlgBase: public Ui_QgsRangeConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRANGECONFIGDLGBASE_H
