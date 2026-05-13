/********************************************************************************
** Form generated from reading UI file 'qgsattributetypeedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTETYPEEDIT_H
#define UI_QGSATTRIBUTETYPEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsexpressionlineedit.h"
#include "qgsfieldexpressionwidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeTypeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QCheckBox *labelOnTopCheckBox;
    QLabel *label_6;
    QLabel *laComment;
    QCheckBox *isFieldEditableCheckBox;
    QgsPropertyOverrideButton *mAliasExpressionButton;
    QCheckBox *reuseLastValuesCheckBox;
    QLabel *label_9;
    QLineEdit *mAlias;
    QgsPropertyOverrideButton *mEditableExpressionButton;
    QgsCollapsibleGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QStackedWidget *stackedWidget;
    QComboBox *mWidgetTypeComboBox;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *mUniqueCheckBox;
    QCheckBox *notNullCheckBox;
    QCheckBox *mCheckBoxEnforceUnique;
    QgsFieldExpressionWidget *constraintExpressionWidget;
    QLabel *label_2;
    QLineEdit *leConstraintExpressionDescription;
    QCheckBox *mCheckBoxEnforceNotNull;
    QLabel *label;
    QCheckBox *mCheckBoxEnforceExpression;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QgsExpressionLineEdit *mExpressionWidget;
    QLabel *mDefaultPreviewLabel;
    QWidget *mWarnDefaultValueHasFieldsWidget;
    QHBoxLayout *mWarnDefaultValueHasFields;
    QLabel *label_8;
    QLabel *label_7;
    QCheckBox *mApplyDefaultValueOnUpdateCheckBox;
    QgsCollapsibleGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QLabel *mSplitPolicyLabel;
    QComboBox *mDuplicatePolicyComboBox;
    QLabel *mDuplicatePolicyDescriptionLabel;
    QComboBox *mMergePolicyComboBox;
    QLabel *mMergePolicyLabel;
    QLabel *mDuplicatePolicyLabel;
    QComboBox *mSplitPolicyComboBox;
    QLabel *mSplitPolicyDescriptionLabel;
    QLabel *mMergePolicyDescriptionLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsAttributeTypeDialog)
    {
        if (QgsAttributeTypeDialog->objectName().isEmpty())
            QgsAttributeTypeDialog->setObjectName(QString::fromUtf8("QgsAttributeTypeDialog"));
        QgsAttributeTypeDialog->resize(1033, 880);
        verticalLayout = new QVBoxLayout(QgsAttributeTypeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_4 = new QgsCollapsibleGroupBox(QgsAttributeTypeDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelOnTopCheckBox = new QCheckBox(groupBox_4);
        labelOnTopCheckBox->setObjectName(QString::fromUtf8("labelOnTopCheckBox"));
        labelOnTopCheckBox->setChecked(false);

        gridLayout->addWidget(labelOnTopCheckBox, 2, 3, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        laComment = new QLabel(groupBox_4);
        laComment->setObjectName(QString::fromUtf8("laComment"));
        laComment->setWordWrap(true);

        gridLayout->addWidget(laComment, 1, 2, 1, 3);

        isFieldEditableCheckBox = new QCheckBox(groupBox_4);
        isFieldEditableCheckBox->setObjectName(QString::fromUtf8("isFieldEditableCheckBox"));
        isFieldEditableCheckBox->setChecked(true);

        gridLayout->addWidget(isFieldEditableCheckBox, 2, 0, 1, 1);

        mAliasExpressionButton = new QgsPropertyOverrideButton(groupBox_4);
        mAliasExpressionButton->setObjectName(QString::fromUtf8("mAliasExpressionButton"));

        gridLayout->addWidget(mAliasExpressionButton, 0, 5, 1, 1);

        reuseLastValuesCheckBox = new QCheckBox(groupBox_4);
        reuseLastValuesCheckBox->setObjectName(QString::fromUtf8("reuseLastValuesCheckBox"));
        reuseLastValuesCheckBox->setChecked(false);

        gridLayout->addWidget(reuseLastValuesCheckBox, 2, 2, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        mAlias = new QLineEdit(groupBox_4);
        mAlias->setObjectName(QString::fromUtf8("mAlias"));

        gridLayout->addWidget(mAlias, 0, 2, 1, 3);

        mEditableExpressionButton = new QgsPropertyOverrideButton(groupBox_4);
        mEditableExpressionButton->setObjectName(QString::fromUtf8("mEditableExpressionButton"));

        gridLayout->addWidget(mEditableExpressionButton, 2, 1, 1, 1);

        gridLayout->setColumnStretch(2, 1);

        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QgsCollapsibleGroupBox(QgsAttributeTypeDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        stackedWidget = new QStackedWidget(groupBox_3);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        gridLayout_5->addWidget(stackedWidget, 1, 1, 1, 1);

        mWidgetTypeComboBox = new QComboBox(groupBox_3);
        mWidgetTypeComboBox->setObjectName(QString::fromUtf8("mWidgetTypeComboBox"));

        gridLayout_5->addWidget(mWidgetTypeComboBox, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox = new QgsCollapsibleGroupBox(QgsAttributeTypeDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::NoFocus);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mUniqueCheckBox = new QCheckBox(groupBox);
        mUniqueCheckBox->setObjectName(QString::fromUtf8("mUniqueCheckBox"));

        gridLayout_3->addWidget(mUniqueCheckBox, 1, 0, 1, 1);

        notNullCheckBox = new QCheckBox(groupBox);
        notNullCheckBox->setObjectName(QString::fromUtf8("notNullCheckBox"));

        gridLayout_3->addWidget(notNullCheckBox, 0, 0, 1, 1);

        mCheckBoxEnforceUnique = new QCheckBox(groupBox);
        mCheckBoxEnforceUnique->setObjectName(QString::fromUtf8("mCheckBoxEnforceUnique"));
        mCheckBoxEnforceUnique->setEnabled(false);

        gridLayout_3->addWidget(mCheckBoxEnforceUnique, 1, 1, 1, 1);

        constraintExpressionWidget = new QgsFieldExpressionWidget(groupBox);
        constraintExpressionWidget->setObjectName(QString::fromUtf8("constraintExpressionWidget"));
        constraintExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(constraintExpressionWidget, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        leConstraintExpressionDescription = new QLineEdit(groupBox);
        leConstraintExpressionDescription->setObjectName(QString::fromUtf8("leConstraintExpressionDescription"));

        gridLayout_3->addWidget(leConstraintExpressionDescription, 3, 1, 1, 1);

        mCheckBoxEnforceNotNull = new QCheckBox(groupBox);
        mCheckBoxEnforceNotNull->setObjectName(QString::fromUtf8("mCheckBoxEnforceNotNull"));
        mCheckBoxEnforceNotNull->setEnabled(false);

        gridLayout_3->addWidget(mCheckBoxEnforceNotNull, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        mCheckBoxEnforceExpression = new QCheckBox(groupBox);
        mCheckBoxEnforceExpression->setObjectName(QString::fromUtf8("mCheckBoxEnforceExpression"));

        gridLayout_3->addWidget(mCheckBoxEnforceExpression, 4, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QgsCollapsibleGroupBox(QgsAttributeTypeDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        mExpressionWidget = new QgsExpressionLineEdit(groupBox_2);
        mExpressionWidget->setObjectName(QString::fromUtf8("mExpressionWidget"));
        mExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mExpressionWidget, 4, 1, 1, 1);

        mDefaultPreviewLabel = new QLabel(groupBox_2);
        mDefaultPreviewLabel->setObjectName(QString::fromUtf8("mDefaultPreviewLabel"));

        gridLayout_2->addWidget(mDefaultPreviewLabel, 6, 1, 1, 1);

        mWarnDefaultValueHasFieldsWidget = new QWidget(groupBox_2);
        mWarnDefaultValueHasFieldsWidget->setObjectName(QString::fromUtf8("mWarnDefaultValueHasFieldsWidget"));
        mWarnDefaultValueHasFields = new QHBoxLayout(mWarnDefaultValueHasFieldsWidget);
        mWarnDefaultValueHasFields->setObjectName(QString::fromUtf8("mWarnDefaultValueHasFields"));
        label_8 = new QLabel(mWarnDefaultValueHasFieldsWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/mIconWarning.svg")));

        mWarnDefaultValueHasFields->addWidget(label_8);

        label_7 = new QLabel(mWarnDefaultValueHasFieldsWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        mWarnDefaultValueHasFields->addWidget(label_7);


        gridLayout_2->addWidget(mWarnDefaultValueHasFieldsWidget, 7, 0, 1, 2);

        mApplyDefaultValueOnUpdateCheckBox = new QCheckBox(groupBox_2);
        mApplyDefaultValueOnUpdateCheckBox->setObjectName(QString::fromUtf8("mApplyDefaultValueOnUpdateCheckBox"));

        gridLayout_2->addWidget(mApplyDefaultValueOnUpdateCheckBox, 8, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        groupBox_5 = new QgsCollapsibleGroupBox(QgsAttributeTypeDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mSplitPolicyLabel = new QLabel(groupBox_5);
        mSplitPolicyLabel->setObjectName(QString::fromUtf8("mSplitPolicyLabel"));

        gridLayout_4->addWidget(mSplitPolicyLabel, 0, 0, 1, 1);

        mDuplicatePolicyComboBox = new QComboBox(groupBox_5);
        mDuplicatePolicyComboBox->setObjectName(QString::fromUtf8("mDuplicatePolicyComboBox"));

        gridLayout_4->addWidget(mDuplicatePolicyComboBox, 4, 1, 1, 3);

        mDuplicatePolicyDescriptionLabel = new QLabel(groupBox_5);
        mDuplicatePolicyDescriptionLabel->setObjectName(QString::fromUtf8("mDuplicatePolicyDescriptionLabel"));
        mDuplicatePolicyDescriptionLabel->setWordWrap(true);

        gridLayout_4->addWidget(mDuplicatePolicyDescriptionLabel, 5, 0, 1, 4);

        mMergePolicyComboBox = new QComboBox(groupBox_5);
        mMergePolicyComboBox->setObjectName(QString::fromUtf8("mMergePolicyComboBox"));

        gridLayout_4->addWidget(mMergePolicyComboBox, 6, 1, 1, 3);

        mMergePolicyLabel = new QLabel(groupBox_5);
        mMergePolicyLabel->setObjectName(QString::fromUtf8("mMergePolicyLabel"));

        gridLayout_4->addWidget(mMergePolicyLabel, 6, 0, 1, 1);

        mDuplicatePolicyLabel = new QLabel(groupBox_5);
        mDuplicatePolicyLabel->setObjectName(QString::fromUtf8("mDuplicatePolicyLabel"));

        gridLayout_4->addWidget(mDuplicatePolicyLabel, 4, 0, 1, 1);

        mSplitPolicyComboBox = new QComboBox(groupBox_5);
        mSplitPolicyComboBox->setObjectName(QString::fromUtf8("mSplitPolicyComboBox"));

        gridLayout_4->addWidget(mSplitPolicyComboBox, 0, 1, 1, 3);

        mSplitPolicyDescriptionLabel = new QLabel(groupBox_5);
        mSplitPolicyDescriptionLabel->setObjectName(QString::fromUtf8("mSplitPolicyDescriptionLabel"));
        mSplitPolicyDescriptionLabel->setWordWrap(true);

        gridLayout_4->addWidget(mSplitPolicyDescriptionLabel, 1, 0, 1, 4);

        mMergePolicyDescriptionLabel = new QLabel(groupBox_5);
        mMergePolicyDescriptionLabel->setObjectName(QString::fromUtf8("mMergePolicyDescriptionLabel"));

        gridLayout_4->addWidget(mMergePolicyDescriptionLabel, 7, 0, 1, 4);


        verticalLayout->addWidget(groupBox_5);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mAlias, mAliasExpressionButton);
        QWidget::setTabOrder(mAliasExpressionButton, isFieldEditableCheckBox);
        QWidget::setTabOrder(isFieldEditableCheckBox, reuseLastValuesCheckBox);
        QWidget::setTabOrder(reuseLastValuesCheckBox, labelOnTopCheckBox);
        QWidget::setTabOrder(labelOnTopCheckBox, mWidgetTypeComboBox);
        QWidget::setTabOrder(mWidgetTypeComboBox, notNullCheckBox);
        QWidget::setTabOrder(notNullCheckBox, mCheckBoxEnforceNotNull);
        QWidget::setTabOrder(mCheckBoxEnforceNotNull, mUniqueCheckBox);
        QWidget::setTabOrder(mUniqueCheckBox, mCheckBoxEnforceUnique);
        QWidget::setTabOrder(mCheckBoxEnforceUnique, constraintExpressionWidget);
        QWidget::setTabOrder(constraintExpressionWidget, leConstraintExpressionDescription);
        QWidget::setTabOrder(leConstraintExpressionDescription, mCheckBoxEnforceExpression);
        QWidget::setTabOrder(mCheckBoxEnforceExpression, mExpressionWidget);
        QWidget::setTabOrder(mExpressionWidget, mApplyDefaultValueOnUpdateCheckBox);

        retranslateUi(QgsAttributeTypeDialog);

        QMetaObject::connectSlotsByName(QgsAttributeTypeDialog);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeTypeDialog)
    {
        QgsAttributeTypeDialog->setWindowTitle(QCoreApplication::translate("QgsAttributeTypeDialog", "Edit Widget Properties", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QgsAttributeTypeDialog", "General", nullptr));
        labelOnTopCheckBox->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Label on top", nullptr));
        label_6->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Comment", nullptr));
        laComment->setText(QString());
        isFieldEditableCheckBox->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Editable", nullptr));
        mAliasExpressionButton->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        reuseLastValuesCheckBox->setToolTip(QCoreApplication::translate("QgsAttributeTypeDialog", "If checked, then the most recent value entered for this field will be remembered and reused when creating a new feature.", nullptr));
#endif // QT_CONFIG(tooltip)
        reuseLastValuesCheckBox->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Reuse last entered value", nullptr));
        label_9->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Alias", nullptr));
        mEditableExpressionButton->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "...", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsAttributeTypeDialog", "Widget Type", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsAttributeTypeDialog", "Constraints", nullptr));
        mUniqueCheckBox->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Unique", nullptr));
        notNullCheckBox->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Not null", nullptr));
#if QT_CONFIG(tooltip)
        mCheckBoxEnforceUnique->setToolTip(QCoreApplication::translate("QgsAttributeTypeDialog", "<p>Enforcing the unique constraint prevents committing features which do not meet the constraint.</p><p>Unenforced constraints display a warning to users, but do not prevent committing the feature.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxEnforceUnique->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Enforce unique constraint", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Expression description", nullptr));
#if QT_CONFIG(tooltip)
        leConstraintExpressionDescription->setToolTip(QCoreApplication::translate("QgsAttributeTypeDialog", "Optional descriptive name for expression constraint", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mCheckBoxEnforceNotNull->setToolTip(QCoreApplication::translate("QgsAttributeTypeDialog", "<p>Enforcing the not null constraint prevents committing features which do not meet the constraint.</p><p>Unenforced constraints display a warning to users, but do not prevent committing the feature.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxEnforceNotNull->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Enforce not null constraint", nullptr));
        label->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Expression", nullptr));
#if QT_CONFIG(tooltip)
        mCheckBoxEnforceExpression->setToolTip(QCoreApplication::translate("QgsAttributeTypeDialog", "<p>Enforcing the expression constraint prevents committing features which do not meet the constraint.</p><p>Unenforced constraints display a warning to users, but do not prevent committing the feature.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxEnforceExpression->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Enforce expression constraint", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsAttributeTypeDialog", "Defaults", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Default value", nullptr));
        label_4->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Preview", nullptr));
        mDefaultPreviewLabel->setText(QString());
        label_8->setText(QString());
        label_7->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Using fields in a default value expression only works if \"Apply default value on update\" is checked.", nullptr));
#if QT_CONFIG(tooltip)
        mApplyDefaultValueOnUpdateCheckBox->setToolTip(QCoreApplication::translate("QgsAttributeTypeDialog", "<p>With this option checked, the default value will not only be used when the feature is first created, but also whenever a feature's attribute or geometry is changed.</p><p>This is often useful for a last_modified timestamp or to record the username that last modified the feature.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        mApplyDefaultValueOnUpdateCheckBox->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "Apply default value on update", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QgsAttributeTypeDialog", "Policies", nullptr));
        mSplitPolicyLabel->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "When splitting features", nullptr));
        mDuplicatePolicyDescriptionLabel->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "TextLabel", nullptr));
        mMergePolicyLabel->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "When merging features", nullptr));
        mDuplicatePolicyLabel->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "When duplicating features", nullptr));
        mSplitPolicyDescriptionLabel->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "TextLabel", nullptr));
        mMergePolicyDescriptionLabel->setText(QCoreApplication::translate("QgsAttributeTypeDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeTypeDialog: public Ui_QgsAttributeTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTETYPEEDIT_H
