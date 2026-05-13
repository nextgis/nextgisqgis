/********************************************************************************
** Form generated from reading UI file 'qgsannotationrectangulartextwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONRECTANGULARTEXTWIDGETBASE_H
#define UI_QGSANNOTATIONRECTANGULARTEXTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsalignmentcombobox.h"
#include "qgsannotationitemcommonpropertieswidget.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsrichtexteditor.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationRectangleTextWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mFrameCheckbox;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QgsSymbolButton *mFrameSymbolButton;
    QgsAlignmentComboBox *mAlignmentComboBox;
    QLabel *label_3;
    QToolButton *mInsertExpressionButton;
    QGroupBox *mBackgroundCheckbox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QgsSymbolButton *mBackgroundSymbolButton;
    QComboBox *mSizeModeCombo;
    QgsAlignmentComboBox *mVerticalAlignmentComboBox;
    QLabel *label_2;
    QWidget *mWidgetFixedSize;
    QGridLayout *gridLayout_5;
    QLabel *label_11;
    QgsDoubleSpinBox *mWidthSpinBox;
    QLabel *label_12;
    QgsDoubleSpinBox *mHeightSpinBox;
    QLabel *label_13;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QgsRichTextEditor *mTextEdit;
    QgsCollapsibleGroupBox *mMarginsGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QgsDoubleSpinBox *mSpinRightMargin;
    QgsDoubleSpinBox *mSpinLeftMargin;
    QLabel *label_9;
    QgsDoubleSpinBox *mSpinBottomMargin;
    QgsDoubleSpinBox *mSpinTopMargin;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_10;
    QgsUnitSelectionWidget *mMarginUnitWidget;
    QLabel *label_7;
    QgsFontButton *mTextFormatButton;
    QgsAnnotationItemCommonPropertiesWidget *mPropertiesWidget;

    void setupUi(QWidget *QgsAnnotationRectangleTextWidgetBase)
    {
        if (QgsAnnotationRectangleTextWidgetBase->objectName().isEmpty())
            QgsAnnotationRectangleTextWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationRectangleTextWidgetBase"));
        QgsAnnotationRectangleTextWidgetBase->resize(321, 779);
        gridLayout = new QGridLayout(QgsAnnotationRectangleTextWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        mFrameCheckbox = new QGroupBox(QgsAnnotationRectangleTextWidgetBase);
        mFrameCheckbox->setObjectName(QString::fromUtf8("mFrameCheckbox"));
        mFrameCheckbox->setCheckable(true);
        gridLayout_3 = new QGridLayout(mFrameCheckbox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(mFrameCheckbox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        mFrameSymbolButton = new QgsSymbolButton(mFrameCheckbox);
        mFrameSymbolButton->setObjectName(QString::fromUtf8("mFrameSymbolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFrameSymbolButton->sizePolicy().hasHeightForWidth());
        mFrameSymbolButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mFrameSymbolButton, 0, 1, 1, 1);


        gridLayout->addWidget(mFrameCheckbox, 10, 0, 1, 2);

        mAlignmentComboBox = new QgsAlignmentComboBox(QgsAnnotationRectangleTextWidgetBase);
        mAlignmentComboBox->setObjectName(QString::fromUtf8("mAlignmentComboBox"));

        gridLayout->addWidget(mAlignmentComboBox, 5, 1, 1, 1);

        label_3 = new QLabel(QgsAnnotationRectangleTextWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        mInsertExpressionButton = new QToolButton(QgsAnnotationRectangleTextWidgetBase);
        mInsertExpressionButton->setObjectName(QString::fromUtf8("mInsertExpressionButton"));
        sizePolicy.setHeightForWidth(mInsertExpressionButton->sizePolicy().hasHeightForWidth());
        mInsertExpressionButton->setSizePolicy(sizePolicy);
        mInsertExpressionButton->setPopupMode(QToolButton::MenuButtonPopup);
        mInsertExpressionButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        mInsertExpressionButton->setArrowType(Qt::DownArrow);

        gridLayout->addWidget(mInsertExpressionButton, 3, 0, 1, 2);

        mBackgroundCheckbox = new QGroupBox(QgsAnnotationRectangleTextWidgetBase);
        mBackgroundCheckbox->setObjectName(QString::fromUtf8("mBackgroundCheckbox"));
        mBackgroundCheckbox->setCheckable(true);
        gridLayout_2 = new QGridLayout(mBackgroundCheckbox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(mBackgroundCheckbox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mBackgroundSymbolButton = new QgsSymbolButton(mBackgroundCheckbox);
        mBackgroundSymbolButton->setObjectName(QString::fromUtf8("mBackgroundSymbolButton"));
        sizePolicy.setHeightForWidth(mBackgroundSymbolButton->sizePolicy().hasHeightForWidth());
        mBackgroundSymbolButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mBackgroundSymbolButton, 0, 1, 1, 1);


        gridLayout->addWidget(mBackgroundCheckbox, 11, 0, 1, 2);

        mSizeModeCombo = new QComboBox(QgsAnnotationRectangleTextWidgetBase);
        mSizeModeCombo->setObjectName(QString::fromUtf8("mSizeModeCombo"));

        gridLayout->addWidget(mSizeModeCombo, 0, 0, 1, 2);

        mVerticalAlignmentComboBox = new QgsAlignmentComboBox(QgsAnnotationRectangleTextWidgetBase);
        mVerticalAlignmentComboBox->setObjectName(QString::fromUtf8("mVerticalAlignmentComboBox"));

        gridLayout->addWidget(mVerticalAlignmentComboBox, 6, 1, 1, 1);

        label_2 = new QLabel(QgsAnnotationRectangleTextWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        mWidgetFixedSize = new QWidget(QgsAnnotationRectangleTextWidgetBase);
        mWidgetFixedSize->setObjectName(QString::fromUtf8("mWidgetFixedSize"));
        gridLayout_5 = new QGridLayout(mWidgetFixedSize);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_11 = new QLabel(mWidgetFixedSize);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 0, 0, 1, 1);

        mWidthSpinBox = new QgsDoubleSpinBox(mWidgetFixedSize);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mWidthSpinBox->sizePolicy().hasHeightForWidth());
        mWidthSpinBox->setSizePolicy(sizePolicy1);
        mWidthSpinBox->setDecimals(6);
        mWidthSpinBox->setMaximum(100000.000000000000000);
        mWidthSpinBox->setSingleStep(0.200000000000000);
        mWidthSpinBox->setValue(1.000000000000000);
        mWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_5->addWidget(mWidthSpinBox, 0, 1, 1, 1);

        label_12 = new QLabel(mWidgetFixedSize);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        mHeightSpinBox = new QgsDoubleSpinBox(mWidgetFixedSize);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        sizePolicy1.setHeightForWidth(mHeightSpinBox->sizePolicy().hasHeightForWidth());
        mHeightSpinBox->setSizePolicy(sizePolicy1);
        mHeightSpinBox->setDecimals(6);
        mHeightSpinBox->setMaximum(100000.000000000000000);
        mHeightSpinBox->setSingleStep(0.200000000000000);
        mHeightSpinBox->setValue(1.000000000000000);
        mHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_5->addWidget(mHeightSpinBox, 1, 1, 1, 1);

        label_13 = new QLabel(mWidgetFixedSize);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 2, 0, 1, 1);

        mSizeUnitWidget = new QgsUnitSelectionWidget(mWidgetFixedSize);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_5->addWidget(mSizeUnitWidget, 2, 1, 1, 1);


        gridLayout->addWidget(mWidgetFixedSize, 1, 0, 1, 2);

        mTextEdit = new QgsRichTextEditor(QgsAnnotationRectangleTextWidgetBase);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setMinimumSize(QSize(0, 150));

        gridLayout->addWidget(mTextEdit, 2, 0, 1, 2);

        mMarginsGroupBox = new QgsCollapsibleGroupBox(QgsAnnotationRectangleTextWidgetBase);
        mMarginsGroupBox->setObjectName(QString::fromUtf8("mMarginsGroupBox"));
        gridLayout_4 = new QGridLayout(mMarginsGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_5 = new QLabel(mMarginsGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 3, 0, 1, 1);

        mSpinRightMargin = new QgsDoubleSpinBox(mMarginsGroupBox);
        mSpinRightMargin->setObjectName(QString::fromUtf8("mSpinRightMargin"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSpinRightMargin->sizePolicy().hasHeightForWidth());
        mSpinRightMargin->setSizePolicy(sizePolicy2);
        mSpinRightMargin->setDecimals(6);
        mSpinRightMargin->setMinimum(0.000000000000000);
        mSpinRightMargin->setMaximum(10000000.000000000000000);
        mSpinRightMargin->setSingleStep(0.200000000000000);
        mSpinRightMargin->setValue(1.000000000000000);

        gridLayout_4->addWidget(mSpinRightMargin, 2, 1, 1, 1);

        mSpinLeftMargin = new QgsDoubleSpinBox(mMarginsGroupBox);
        mSpinLeftMargin->setObjectName(QString::fromUtf8("mSpinLeftMargin"));
        sizePolicy2.setHeightForWidth(mSpinLeftMargin->sizePolicy().hasHeightForWidth());
        mSpinLeftMargin->setSizePolicy(sizePolicy2);
        mSpinLeftMargin->setDecimals(6);
        mSpinLeftMargin->setMinimum(0.000000000000000);
        mSpinLeftMargin->setMaximum(10000000.000000000000000);
        mSpinLeftMargin->setSingleStep(0.200000000000000);
        mSpinLeftMargin->setValue(1.000000000000000);

        gridLayout_4->addWidget(mSpinLeftMargin, 1, 1, 1, 1);

        label_9 = new QLabel(mMarginsGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        mSpinBottomMargin = new QgsDoubleSpinBox(mMarginsGroupBox);
        mSpinBottomMargin->setObjectName(QString::fromUtf8("mSpinBottomMargin"));
        sizePolicy2.setHeightForWidth(mSpinBottomMargin->sizePolicy().hasHeightForWidth());
        mSpinBottomMargin->setSizePolicy(sizePolicy2);
        mSpinBottomMargin->setDecimals(6);
        mSpinBottomMargin->setMinimum(0.000000000000000);
        mSpinBottomMargin->setMaximum(10000000.000000000000000);
        mSpinBottomMargin->setSingleStep(0.200000000000000);
        mSpinBottomMargin->setValue(1.000000000000000);

        gridLayout_4->addWidget(mSpinBottomMargin, 3, 1, 1, 1);

        mSpinTopMargin = new QgsDoubleSpinBox(mMarginsGroupBox);
        mSpinTopMargin->setObjectName(QString::fromUtf8("mSpinTopMargin"));
        sizePolicy2.setHeightForWidth(mSpinTopMargin->sizePolicy().hasHeightForWidth());
        mSpinTopMargin->setSizePolicy(sizePolicy2);
        mSpinTopMargin->setDecimals(6);
        mSpinTopMargin->setMinimum(0.000000000000000);
        mSpinTopMargin->setMaximum(10000000.000000000000000);
        mSpinTopMargin->setSingleStep(0.200000000000000);
        mSpinTopMargin->setValue(1.000000000000000);

        gridLayout_4->addWidget(mSpinTopMargin, 0, 1, 1, 1);

        label_6 = new QLabel(mMarginsGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 4, 0, 1, 1);

        label_8 = new QLabel(mMarginsGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        label_10 = new QLabel(mMarginsGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        mMarginUnitWidget = new QgsUnitSelectionWidget(mMarginsGroupBox);
        mMarginUnitWidget->setObjectName(QString::fromUtf8("mMarginUnitWidget"));
        mMarginUnitWidget->setMinimumSize(QSize(10, 0));
        mMarginUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mMarginUnitWidget, 4, 1, 1, 1);


        gridLayout->addWidget(mMarginsGroupBox, 7, 0, 1, 2);

        label_7 = new QLabel(QgsAnnotationRectangleTextWidgetBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        mTextFormatButton = new QgsFontButton(QgsAnnotationRectangleTextWidgetBase);
        mTextFormatButton->setObjectName(QString::fromUtf8("mTextFormatButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mTextFormatButton->sizePolicy().hasHeightForWidth());
        mTextFormatButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(mTextFormatButton, 4, 1, 1, 1);

        mPropertiesWidget = new QgsAnnotationItemCommonPropertiesWidget(QgsAnnotationRectangleTextWidgetBase);
        mPropertiesWidget->setObjectName(QString::fromUtf8("mPropertiesWidget"));
        mPropertiesWidget->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(mPropertiesWidget, 12, 0, 1, 2);

        QWidget::setTabOrder(mSizeModeCombo, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mTextFormatButton);
        QWidget::setTabOrder(mTextFormatButton, mAlignmentComboBox);
        QWidget::setTabOrder(mAlignmentComboBox, mVerticalAlignmentComboBox);
        QWidget::setTabOrder(mVerticalAlignmentComboBox, mSpinTopMargin);
        QWidget::setTabOrder(mSpinTopMargin, mSpinLeftMargin);
        QWidget::setTabOrder(mSpinLeftMargin, mSpinRightMargin);
        QWidget::setTabOrder(mSpinRightMargin, mSpinBottomMargin);
        QWidget::setTabOrder(mSpinBottomMargin, mMarginUnitWidget);
        QWidget::setTabOrder(mMarginUnitWidget, mFrameCheckbox);
        QWidget::setTabOrder(mFrameCheckbox, mFrameSymbolButton);
        QWidget::setTabOrder(mFrameSymbolButton, mBackgroundCheckbox);
        QWidget::setTabOrder(mBackgroundCheckbox, mBackgroundSymbolButton);

        retranslateUi(QgsAnnotationRectangleTextWidgetBase);

        QMetaObject::connectSlotsByName(QgsAnnotationRectangleTextWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationRectangleTextWidgetBase)
    {
        QgsAnnotationRectangleTextWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Rectangle Text Annotation", nullptr));
        mFrameCheckbox->setTitle(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Frame", nullptr));
        label_4->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Symbol", nullptr));
        mFrameSymbolButton->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Change\342\200\246", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Vertical alignment", nullptr));
        mInsertExpressionButton->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Insert/Edit Expression\342\200\246", nullptr));
        mBackgroundCheckbox->setTitle(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Background", nullptr));
        label->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Symbol", nullptr));
        mBackgroundSymbolButton->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Change\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Horizontal alignment", nullptr));
        label_11->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Width", nullptr));
        label_12->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Height", nullptr));
        label_13->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Unit", nullptr));
        mMarginsGroupBox->setTitle(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", " Margins", nullptr));
        label_5->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Bottom", nullptr));
        mSpinRightMargin->setSuffix(QString());
        mSpinLeftMargin->setSuffix(QString());
        label_9->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Top", nullptr));
        mSpinBottomMargin->setSuffix(QString());
        mSpinTopMargin->setSuffix(QString());
        label_6->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Units", nullptr));
        label_8->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Left", nullptr));
        label_10->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Right", nullptr));
        label_7->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Text format", nullptr));
        mTextFormatButton->setText(QCoreApplication::translate("QgsAnnotationRectangleTextWidgetBase", "Text format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationRectangleTextWidgetBase: public Ui_QgsAnnotationRectangleTextWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONRECTANGULARTEXTWIDGETBASE_H
