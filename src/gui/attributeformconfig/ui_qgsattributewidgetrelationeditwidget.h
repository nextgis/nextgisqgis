/********************************************************************************
** Form generated from reading UI file 'qgsattributewidgetrelationeditwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEWIDGETRELATIONEDITWIDGET_H
#define UI_QGSATTRIBUTEWIDGETRELATIONEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeWidgetRelationEditWidget
{
public:
    QFormLayout *formLayout;
    QLabel *mLabelLabel;
    QLineEdit *mRelationLabelEdit;
    QLabel *mCardinalityLabel;
    QComboBox *mRelationCardinalityCombo;
    QCheckBox *mRelationForceSuppressFormPopupCheckBox;
    QgsCollapsibleGroupBox *mWidgetTypeGroupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *mWidgetTypePlaceholderLayout;
    QSpacerItem *mVerticalSpacer;
    QComboBox *mWidgetTypeComboBox;
    QLabel *mCardinalityLabel_2;

    void setupUi(QWidget *QgsAttributeWidgetRelationEditWidget)
    {
        if (QgsAttributeWidgetRelationEditWidget->objectName().isEmpty())
            QgsAttributeWidgetRelationEditWidget->setObjectName(QString::fromUtf8("QgsAttributeWidgetRelationEditWidget"));
        QgsAttributeWidgetRelationEditWidget->resize(340, 316);
        formLayout = new QFormLayout(QgsAttributeWidgetRelationEditWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mLabelLabel = new QLabel(QgsAttributeWidgetRelationEditWidget);
        mLabelLabel->setObjectName(QString::fromUtf8("mLabelLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mLabelLabel);

        mRelationLabelEdit = new QLineEdit(QgsAttributeWidgetRelationEditWidget);
        mRelationLabelEdit->setObjectName(QString::fromUtf8("mRelationLabelEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRelationLabelEdit->sizePolicy().hasHeightForWidth());
        mRelationLabelEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, mRelationLabelEdit);

        mCardinalityLabel = new QLabel(QgsAttributeWidgetRelationEditWidget);
        mCardinalityLabel->setObjectName(QString::fromUtf8("mCardinalityLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mCardinalityLabel);

        mRelationCardinalityCombo = new QComboBox(QgsAttributeWidgetRelationEditWidget);
        mRelationCardinalityCombo->setObjectName(QString::fromUtf8("mRelationCardinalityCombo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mRelationCardinalityCombo);

        mRelationForceSuppressFormPopupCheckBox = new QCheckBox(QgsAttributeWidgetRelationEditWidget);
        mRelationForceSuppressFormPopupCheckBox->setObjectName(QString::fromUtf8("mRelationForceSuppressFormPopupCheckBox"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, mRelationForceSuppressFormPopupCheckBox);

        mWidgetTypeGroupBox = new QgsCollapsibleGroupBox(QgsAttributeWidgetRelationEditWidget);
        mWidgetTypeGroupBox->setObjectName(QString::fromUtf8("mWidgetTypeGroupBox"));
        verticalLayout_2 = new QVBoxLayout(mWidgetTypeGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mWidgetTypePlaceholderLayout = new QVBoxLayout();
        mWidgetTypePlaceholderLayout->setObjectName(QString::fromUtf8("mWidgetTypePlaceholderLayout"));

        verticalLayout_2->addLayout(mWidgetTypePlaceholderLayout);


        formLayout->setWidget(4, QFormLayout::SpanningRole, mWidgetTypeGroupBox);

        mVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::SpanningRole, mVerticalSpacer);

        mWidgetTypeComboBox = new QComboBox(QgsAttributeWidgetRelationEditWidget);
        mWidgetTypeComboBox->setObjectName(QString::fromUtf8("mWidgetTypeComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mWidgetTypeComboBox);

        mCardinalityLabel_2 = new QLabel(QgsAttributeWidgetRelationEditWidget);
        mCardinalityLabel_2->setObjectName(QString::fromUtf8("mCardinalityLabel_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mCardinalityLabel_2);


        retranslateUi(QgsAttributeWidgetRelationEditWidget);

        QMetaObject::connectSlotsByName(QgsAttributeWidgetRelationEditWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeWidgetRelationEditWidget)
    {
        QgsAttributeWidgetRelationEditWidget->setWindowTitle(QCoreApplication::translate("QgsAttributeWidgetRelationEditWidget", "Attribute Widget Relation Edit Widget", nullptr));
        mLabelLabel->setText(QCoreApplication::translate("QgsAttributeWidgetRelationEditWidget", "Label", nullptr));
#if QT_CONFIG(tooltip)
        mRelationLabelEdit->setToolTip(QCoreApplication::translate("QgsAttributeWidgetRelationEditWidget", "If left empty the relation name is used.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCardinalityLabel->setText(QCoreApplication::translate("QgsAttributeWidgetRelationEditWidget", "Cardinality", nullptr));
#if QT_CONFIG(statustip)
        mRelationForceSuppressFormPopupCheckBox->setStatusTip(QCoreApplication::translate("QgsAttributeWidgetRelationEditWidget", "Do not open a new attribute form after digitizing a new feature, overrides all other options", nullptr));
#endif // QT_CONFIG(statustip)
        mRelationForceSuppressFormPopupCheckBox->setText(QCoreApplication::translate("QgsAttributeWidgetRelationEditWidget", "Force hide form on add feature", nullptr));
        mWidgetTypeGroupBox->setTitle(QCoreApplication::translate("QgsAttributeWidgetRelationEditWidget", "Widget Configuration", nullptr));
        mCardinalityLabel_2->setText(QCoreApplication::translate("QgsAttributeWidgetRelationEditWidget", "Widget Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeWidgetRelationEditWidget: public Ui_QgsAttributeWidgetRelationEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEWIDGETRELATIONEDITWIDGET_H
