/********************************************************************************
** Form generated from reading UI file 'qgsfieldcalculatorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFIELDCALCULATORBASE_H
#define UI_QGSFIELDCALCULATORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsexpressionbuilderwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFieldCalculatorBase
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vLayout;
    QCheckBox *mOnlyUpdateSelectedCheckBox;
    QGroupBox *mNewFieldGroupBox;
    QGridLayout *gridLayout1;
    QgsSpinBox *mOutputFieldPrecisionSpinBox;
    QLabel *mFieldNameLabel;
    QLabel *mOutputFieldWidthLabel;
    QComboBox *mOutputFieldTypeComboBox;
    QgsSpinBox *mOutputFieldWidthSpinBox;
    QLineEdit *mOutputFieldNameLineEdit;
    QLabel *mOutputFieldTypeLabel;
    QLabel *mOutputFieldPrecisionLabel;
    QCheckBox *mCreateVirtualFieldCheckbox;
    QGroupBox *mUpdateExistingGroupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *mExistingFieldComboBox;
    QgsExpressionBuilderWidget *builder;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *mInfoIcon;
    QLabel *mEditModeAutoTurnOnLabel;
    QLabel *mOnlyVirtualFieldsInfoLabel;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsFieldCalculatorBase)
    {
        if (QgsFieldCalculatorBase->objectName().isEmpty())
            QgsFieldCalculatorBase->setObjectName(QString::fromUtf8("QgsFieldCalculatorBase"));
        QgsFieldCalculatorBase->resize(681, 624);
        gridLayout = new QGridLayout(QgsFieldCalculatorBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vLayout = new QVBoxLayout();
        vLayout->setObjectName(QString::fromUtf8("vLayout"));

        gridLayout->addLayout(vLayout, 0, 0, 1, 2);

        mOnlyUpdateSelectedCheckBox = new QCheckBox(QgsFieldCalculatorBase);
        mOnlyUpdateSelectedCheckBox->setObjectName(QString::fromUtf8("mOnlyUpdateSelectedCheckBox"));

        gridLayout->addWidget(mOnlyUpdateSelectedCheckBox, 1, 0, 1, 1);

        mNewFieldGroupBox = new QGroupBox(QgsFieldCalculatorBase);
        mNewFieldGroupBox->setObjectName(QString::fromUtf8("mNewFieldGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mNewFieldGroupBox->sizePolicy().hasHeightForWidth());
        mNewFieldGroupBox->setSizePolicy(sizePolicy);
        mNewFieldGroupBox->setFlat(true);
        mNewFieldGroupBox->setCheckable(true);
        mNewFieldGroupBox->setChecked(true);
        gridLayout1 = new QGridLayout(mNewFieldGroupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        gridLayout1->setVerticalSpacing(3);
        gridLayout1->setContentsMargins(3, 9, 3, 0);
        mOutputFieldPrecisionSpinBox = new QgsSpinBox(mNewFieldGroupBox);
        mOutputFieldPrecisionSpinBox->setObjectName(QString::fromUtf8("mOutputFieldPrecisionSpinBox"));
        mOutputFieldPrecisionSpinBox->setValue(2);

        gridLayout1->addWidget(mOutputFieldPrecisionSpinBox, 5, 3, 1, 1);

        mFieldNameLabel = new QLabel(mNewFieldGroupBox);
        mFieldNameLabel->setObjectName(QString::fromUtf8("mFieldNameLabel"));

        gridLayout1->addWidget(mFieldNameLabel, 3, 0, 1, 1);

        mOutputFieldWidthLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldWidthLabel->setObjectName(QString::fromUtf8("mOutputFieldWidthLabel"));

        gridLayout1->addWidget(mOutputFieldWidthLabel, 5, 0, 1, 1);

        mOutputFieldTypeComboBox = new QComboBox(mNewFieldGroupBox);
        mOutputFieldTypeComboBox->setObjectName(QString::fromUtf8("mOutputFieldTypeComboBox"));

        gridLayout1->addWidget(mOutputFieldTypeComboBox, 4, 1, 1, 3);

        mOutputFieldWidthSpinBox = new QgsSpinBox(mNewFieldGroupBox);
        mOutputFieldWidthSpinBox->setObjectName(QString::fromUtf8("mOutputFieldWidthSpinBox"));
        mOutputFieldWidthSpinBox->setMinimum(0);
        mOutputFieldWidthSpinBox->setValue(15);

        gridLayout1->addWidget(mOutputFieldWidthSpinBox, 5, 1, 1, 1);

        mOutputFieldNameLineEdit = new QLineEdit(mNewFieldGroupBox);
        mOutputFieldNameLineEdit->setObjectName(QString::fromUtf8("mOutputFieldNameLineEdit"));

        gridLayout1->addWidget(mOutputFieldNameLineEdit, 3, 1, 1, 3);

        mOutputFieldTypeLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldTypeLabel->setObjectName(QString::fromUtf8("mOutputFieldTypeLabel"));

        gridLayout1->addWidget(mOutputFieldTypeLabel, 4, 0, 1, 1);

        mOutputFieldPrecisionLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldPrecisionLabel->setObjectName(QString::fromUtf8("mOutputFieldPrecisionLabel"));

        gridLayout1->addWidget(mOutputFieldPrecisionLabel, 5, 2, 1, 1);

        mCreateVirtualFieldCheckbox = new QCheckBox(mNewFieldGroupBox);
        mCreateVirtualFieldCheckbox->setObjectName(QString::fromUtf8("mCreateVirtualFieldCheckbox"));

        gridLayout1->addWidget(mCreateVirtualFieldCheckbox, 2, 0, 1, 4);


        gridLayout->addWidget(mNewFieldGroupBox, 2, 0, 1, 1);

        mUpdateExistingGroupBox = new QGroupBox(QgsFieldCalculatorBase);
        mUpdateExistingGroupBox->setObjectName(QString::fromUtf8("mUpdateExistingGroupBox"));
        mUpdateExistingGroupBox->setFlat(true);
        mUpdateExistingGroupBox->setCheckable(true);
        mUpdateExistingGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(mUpdateExistingGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 9, 3, 0);
        mExistingFieldComboBox = new QComboBox(mUpdateExistingGroupBox);
        mExistingFieldComboBox->setObjectName(QString::fromUtf8("mExistingFieldComboBox"));

        verticalLayout->addWidget(mExistingFieldComboBox);


        gridLayout->addWidget(mUpdateExistingGroupBox, 2, 1, 1, 1);

        builder = new QgsExpressionBuilderWidget(QgsFieldCalculatorBase);
        builder->setObjectName(QString::fromUtf8("builder"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(builder->sizePolicy().hasHeightForWidth());
        builder->setSizePolicy(sizePolicy1);
        builder->setAutoFillBackground(false);

        gridLayout->addWidget(builder, 3, 0, 1, 2);

        widget = new QWidget(QgsFieldCalculatorBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mInfoIcon = new QLabel(widget);
        mInfoIcon->setObjectName(QString::fromUtf8("mInfoIcon"));
        mInfoIcon->setMinimumSize(QSize(64, 64));
        mInfoIcon->setMaximumSize(QSize(64, 64));

        gridLayout_2->addWidget(mInfoIcon, 0, 0, 1, 1);

        mEditModeAutoTurnOnLabel = new QLabel(widget);
        mEditModeAutoTurnOnLabel->setObjectName(QString::fromUtf8("mEditModeAutoTurnOnLabel"));
        mEditModeAutoTurnOnLabel->setWordWrap(true);

        gridLayout_2->addWidget(mEditModeAutoTurnOnLabel, 0, 1, 1, 1);

        mOnlyVirtualFieldsInfoLabel = new QLabel(widget);
        mOnlyVirtualFieldsInfoLabel->setObjectName(QString::fromUtf8("mOnlyVirtualFieldsInfoLabel"));
        mOnlyVirtualFieldsInfoLabel->setWordWrap(true);

        gridLayout_2->addWidget(mOnlyVirtualFieldsInfoLabel, 1, 1, 1, 1);


        gridLayout->addWidget(widget, 4, 0, 1, 2);

        mButtonBox = new QDialogButtonBox(QgsFieldCalculatorBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy2);
        mButtonBox->setOrientation(Qt::Orientation::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Apply|QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(mButtonBox, 5, 0, 1, 2);

#if QT_CONFIG(shortcut)
        mFieldNameLabel->setBuddy(mOutputFieldNameLineEdit);
        mOutputFieldWidthLabel->setBuddy(mOutputFieldWidthSpinBox);
        mOutputFieldTypeLabel->setBuddy(mOutputFieldTypeComboBox);
        mOutputFieldPrecisionLabel->setBuddy(mOutputFieldPrecisionSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mOnlyUpdateSelectedCheckBox, mNewFieldGroupBox);
        QWidget::setTabOrder(mNewFieldGroupBox, mCreateVirtualFieldCheckbox);
        QWidget::setTabOrder(mCreateVirtualFieldCheckbox, mOutputFieldNameLineEdit);
        QWidget::setTabOrder(mOutputFieldNameLineEdit, mOutputFieldTypeComboBox);
        QWidget::setTabOrder(mOutputFieldTypeComboBox, mOutputFieldWidthSpinBox);
        QWidget::setTabOrder(mOutputFieldWidthSpinBox, mOutputFieldPrecisionSpinBox);
        QWidget::setTabOrder(mOutputFieldPrecisionSpinBox, mUpdateExistingGroupBox);
        QWidget::setTabOrder(mUpdateExistingGroupBox, mExistingFieldComboBox);
        QWidget::setTabOrder(mExistingFieldComboBox, mButtonBox);

        retranslateUi(QgsFieldCalculatorBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFieldCalculatorBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFieldCalculatorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFieldCalculatorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsFieldCalculatorBase)
    {
        QgsFieldCalculatorBase->setWindowTitle(QCoreApplication::translate("QgsFieldCalculatorBase", "Field Calculator", nullptr));
        mOnlyUpdateSelectedCheckBox->setText(QCoreApplication::translate("QgsFieldCalculatorBase", "Only update selected features", nullptr));
        mNewFieldGroupBox->setTitle(QCoreApplication::translate("QgsFieldCalculatorBase", "Create a new field", nullptr));
#if QT_CONFIG(tooltip)
        mOutputFieldPrecisionSpinBox->setToolTip(QCoreApplication::translate("QgsFieldCalculatorBase", "Maximum number of digits after the decimal place. For example 123.45 requires a field precision of 2.", nullptr));
#endif // QT_CONFIG(tooltip)
        mFieldNameLabel->setText(QCoreApplication::translate("QgsFieldCalculatorBase", "Output field name", nullptr));
#if QT_CONFIG(tooltip)
        mOutputFieldWidthLabel->setToolTip(QCoreApplication::translate("QgsFieldCalculatorBase", "Total length of field (including the number of digits after the decimal place for decimal fields).<br>For example 123.45 requires a decimal field length of 5, and 123456 requires an integer field length of 6.", nullptr));
#endif // QT_CONFIG(tooltip)
        mOutputFieldWidthLabel->setText(QCoreApplication::translate("QgsFieldCalculatorBase", "Output field length", nullptr));
#if QT_CONFIG(tooltip)
        mOutputFieldWidthSpinBox->setToolTip(QCoreApplication::translate("QgsFieldCalculatorBase", "Total length of field (including the number of digits after the decimal place for decimal fields).<br>For example 123.45 requires a decimal field length of 5, and 123456 requires an integer field length of 6.", nullptr));
#endif // QT_CONFIG(tooltip)
        mOutputFieldTypeLabel->setText(QCoreApplication::translate("QgsFieldCalculatorBase", "Output field type", nullptr));
#if QT_CONFIG(tooltip)
        mOutputFieldPrecisionLabel->setToolTip(QCoreApplication::translate("QgsFieldCalculatorBase", "Maximum number of digits after the decimal place. For example 123.45 requires a field precision of 2.", nullptr));
#endif // QT_CONFIG(tooltip)
        mOutputFieldPrecisionLabel->setText(QCoreApplication::translate("QgsFieldCalculatorBase", "Precision", nullptr));
#if QT_CONFIG(tooltip)
        mCreateVirtualFieldCheckbox->setToolTip(QCoreApplication::translate("QgsFieldCalculatorBase", "<p>A virtual field will be recalculated every time it is used. Its definition will be saved in the project file. It will not be saved in the dataprovider and therefore its values not be available in other software.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        mCreateVirtualFieldCheckbox->setText(QCoreApplication::translate("QgsFieldCalculatorBase", "Create virtual field", nullptr));
        mUpdateExistingGroupBox->setTitle(QCoreApplication::translate("QgsFieldCalculatorBase", "Update existing field", nullptr));
        mInfoIcon->setText(QString());
        mEditModeAutoTurnOnLabel->setText(QCoreApplication::translate("QgsFieldCalculatorBase", "You are editing information on this layer but the layer is currently not in edit mode. If you click OK, edit mode will automatically be turned on.", nullptr));
        mOnlyVirtualFieldsInfoLabel->setText(QCoreApplication::translate("QgsFieldCalculatorBase", "This layer does not support adding new provider fields. You can only add virtual fields.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsFieldCalculatorBase: public Ui_QgsFieldCalculatorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIELDCALCULATORBASE_H
