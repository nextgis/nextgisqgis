/********************************************************************************
** Form generated from reading UI file 'qgsattributeformcontaineredit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEFORMCONTAINEREDIT_H
#define UI_QGSATTRIBUTEFORMCONTAINEREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsformlabelformatwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeFormContainerEdit
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mSizeGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *mColumnsLabel_2;
    QgsSpinBox *mHozStretchSpin;
    QLabel *mColumnsLabel_3;
    QgsSpinBox *mVertStretchSpin;
    QgsCollapsibleGroupBox *mControlVisibilityGroupBox;
    QGridLayout *gridLayout_2;
    QgsFieldExpressionWidget *mVisibilityExpressionWidget;
    QCheckBox *mCollapsedCheckBox;
    QLabel *label;
    QCheckBox *mShowLabelCheckBox;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBox *mGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QgsColorButton *mBackgroundColorButton;
    QgsFormLabelFormatWidget *mFormLabelFormatWidget;
    QgsCollapsibleGroupBox *mControlCollapsedGroupBox;
    QGridLayout *gridLayout_4;
    QgsFieldExpressionWidget *mCollapsedExpressionWidget;
    QComboBox *mTypeCombo;
    QLineEdit *mTitleLineEdit;
    QLabel *label_4;
    QLabel *mColumnsLabel;
    QgsSpinBox *mColumnCountSpinBox;

    void setupUi(QWidget *QgsAttributeFormContainerEdit)
    {
        if (QgsAttributeFormContainerEdit->objectName().isEmpty())
            QgsAttributeFormContainerEdit->setObjectName(QString::fromUtf8("QgsAttributeFormContainerEdit"));
        QgsAttributeFormContainerEdit->resize(401, 552);
        QgsAttributeFormContainerEdit->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsAttributeFormContainerEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSizeGroupBox = new QGroupBox(QgsAttributeFormContainerEdit);
        mSizeGroupBox->setObjectName(QString::fromUtf8("mSizeGroupBox"));
        gridLayout_5 = new QGridLayout(mSizeGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mColumnsLabel_2 = new QLabel(mSizeGroupBox);
        mColumnsLabel_2->setObjectName(QString::fromUtf8("mColumnsLabel_2"));

        gridLayout_5->addWidget(mColumnsLabel_2, 0, 0, 1, 1);

        mHozStretchSpin = new QgsSpinBox(mSizeGroupBox);
        mHozStretchSpin->setObjectName(QString::fromUtf8("mHozStretchSpin"));
        mHozStretchSpin->setMinimum(0);
        mHozStretchSpin->setMaximum(10);
        mHozStretchSpin->setValue(0);

        gridLayout_5->addWidget(mHozStretchSpin, 0, 1, 1, 1);

        mColumnsLabel_3 = new QLabel(mSizeGroupBox);
        mColumnsLabel_3->setObjectName(QString::fromUtf8("mColumnsLabel_3"));

        gridLayout_5->addWidget(mColumnsLabel_3, 1, 0, 1, 1);

        mVertStretchSpin = new QgsSpinBox(mSizeGroupBox);
        mVertStretchSpin->setObjectName(QString::fromUtf8("mVertStretchSpin"));
        mVertStretchSpin->setMinimum(0);
        mVertStretchSpin->setMaximum(10);
        mVertStretchSpin->setValue(0);

        gridLayout_5->addWidget(mVertStretchSpin, 1, 1, 1, 1);


        gridLayout->addWidget(mSizeGroupBox, 6, 0, 1, 2);

        mControlVisibilityGroupBox = new QgsCollapsibleGroupBox(QgsAttributeFormContainerEdit);
        mControlVisibilityGroupBox->setObjectName(QString::fromUtf8("mControlVisibilityGroupBox"));
        mControlVisibilityGroupBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(mControlVisibilityGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mVisibilityExpressionWidget = new QgsFieldExpressionWidget(mControlVisibilityGroupBox);
        mVisibilityExpressionWidget->setObjectName(QString::fromUtf8("mVisibilityExpressionWidget"));

        gridLayout_2->addWidget(mVisibilityExpressionWidget, 0, 0, 1, 1);


        gridLayout->addWidget(mControlVisibilityGroupBox, 7, 0, 1, 2);

        mCollapsedCheckBox = new QCheckBox(QgsAttributeFormContainerEdit);
        mCollapsedCheckBox->setObjectName(QString::fromUtf8("mCollapsedCheckBox"));

        gridLayout->addWidget(mCollapsedCheckBox, 9, 0, 1, 2);

        label = new QLabel(QgsAttributeFormContainerEdit);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        mShowLabelCheckBox = new QCheckBox(QgsAttributeFormContainerEdit);
        mShowLabelCheckBox->setObjectName(QString::fromUtf8("mShowLabelCheckBox"));

        gridLayout->addWidget(mShowLabelCheckBox, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 0, 1, 1);

        mGroupBox = new QgsCollapsibleGroupBox(QgsAttributeFormContainerEdit);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        gridLayout_3 = new QGridLayout(mGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        mBackgroundColorButton = new QgsColorButton(mGroupBox);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));

        gridLayout_3->addWidget(mBackgroundColorButton, 1, 1, 1, 1);

        mFormLabelFormatWidget = new QgsFormLabelFormatWidget(mGroupBox);
        mFormLabelFormatWidget->setObjectName(QString::fromUtf8("mFormLabelFormatWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFormLabelFormatWidget->sizePolicy().hasHeightForWidth());
        mFormLabelFormatWidget->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mFormLabelFormatWidget, 2, 0, 1, 2);


        gridLayout->addWidget(mGroupBox, 12, 0, 1, 2);

        mControlCollapsedGroupBox = new QgsCollapsibleGroupBox(QgsAttributeFormContainerEdit);
        mControlCollapsedGroupBox->setObjectName(QString::fromUtf8("mControlCollapsedGroupBox"));
        mControlCollapsedGroupBox->setCheckable(true);
        gridLayout_4 = new QGridLayout(mControlCollapsedGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mCollapsedExpressionWidget = new QgsFieldExpressionWidget(mControlCollapsedGroupBox);
        mCollapsedExpressionWidget->setObjectName(QString::fromUtf8("mCollapsedExpressionWidget"));

        gridLayout_4->addWidget(mCollapsedExpressionWidget, 0, 0, 1, 1);


        gridLayout->addWidget(mControlCollapsedGroupBox, 10, 0, 1, 2);

        mTypeCombo = new QComboBox(QgsAttributeFormContainerEdit);
        mTypeCombo->setObjectName(QString::fromUtf8("mTypeCombo"));

        gridLayout->addWidget(mTypeCombo, 3, 1, 1, 1);

        mTitleLineEdit = new QLineEdit(QgsAttributeFormContainerEdit);
        mTitleLineEdit->setObjectName(QString::fromUtf8("mTitleLineEdit"));

        gridLayout->addWidget(mTitleLineEdit, 2, 1, 1, 1);

        label_4 = new QLabel(QgsAttributeFormContainerEdit);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        mColumnsLabel = new QLabel(QgsAttributeFormContainerEdit);
        mColumnsLabel->setObjectName(QString::fromUtf8("mColumnsLabel"));

        gridLayout->addWidget(mColumnsLabel, 4, 0, 1, 1);

        mColumnCountSpinBox = new QgsSpinBox(QgsAttributeFormContainerEdit);
        mColumnCountSpinBox->setObjectName(QString::fromUtf8("mColumnCountSpinBox"));
        mColumnCountSpinBox->setMinimum(1);
        mColumnCountSpinBox->setMaximum(10);

        gridLayout->addWidget(mColumnCountSpinBox, 4, 1, 1, 1);

        QWidget::setTabOrder(mShowLabelCheckBox, mTitleLineEdit);
        QWidget::setTabOrder(mTitleLineEdit, mTypeCombo);
        QWidget::setTabOrder(mTypeCombo, mColumnCountSpinBox);
        QWidget::setTabOrder(mColumnCountSpinBox, mHozStretchSpin);
        QWidget::setTabOrder(mHozStretchSpin, mVertStretchSpin);
        QWidget::setTabOrder(mVertStretchSpin, mControlVisibilityGroupBox);
        QWidget::setTabOrder(mControlVisibilityGroupBox, mCollapsedCheckBox);
        QWidget::setTabOrder(mCollapsedCheckBox, mControlCollapsedGroupBox);
        QWidget::setTabOrder(mControlCollapsedGroupBox, mBackgroundColorButton);

        retranslateUi(QgsAttributeFormContainerEdit);

        QMetaObject::connectSlotsByName(QgsAttributeFormContainerEdit);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeFormContainerEdit)
    {
        mSizeGroupBox->setTitle(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Size", nullptr));
        mColumnsLabel_2->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Horizontal stretch", nullptr));
        mColumnsLabel_3->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Vertical stretch", nullptr));
        mControlVisibilityGroupBox->setTitle(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Control Visibility by Expression", nullptr));
        mCollapsedCheckBox->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Collapsed", nullptr));
        label->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Title", nullptr));
        mShowLabelCheckBox->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Show label", nullptr));
        mGroupBox->setTitle(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Style", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Background color", nullptr));
        mControlCollapsedGroupBox->setTitle(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Control Collapsed by Expression", nullptr));
        label_4->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Type", nullptr));
        mColumnsLabel->setText(QCoreApplication::translate("QgsAttributeFormContainerEdit", "Columns", nullptr));
        (void)QgsAttributeFormContainerEdit;
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeFormContainerEdit: public Ui_QgsAttributeFormContainerEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEFORMCONTAINEREDIT_H
