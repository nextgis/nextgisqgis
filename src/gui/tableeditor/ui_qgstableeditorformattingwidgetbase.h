/********************************************************************************
** Form generated from reading UI file 'qgstableeditorformattingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTABLEEDITORFORMATTINGWIDGETBASE_H
#define UI_QGSTABLEEDITORFORMATTINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsalignmentcombobox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsfontbutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTableEditorFormattingWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_7;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *mCustomizeFormatButton;
    QgsAlignmentComboBox *mVerticalAlignComboBox;
    QCheckBox *mFormatNumbersCheckBox;
    QgsFontButton *mFontButton;
    QgsAlignmentComboBox *mHorizontalAlignComboBox;
    QLabel *label_11;
    QgsColorButton *mBackgroundColorButton;
    QgsFieldExpressionWidget *mExpressionEdit;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QgsDoubleSpinBox *mRowHeightSpinBox;
    QLabel *label;
    QgsDoubleSpinBox *mColumnWidthSpinBox;
    QLabel *label_2;
    QLabel *label_51;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsTableEditorFormattingWidgetBase)
    {
        if (QgsTableEditorFormattingWidgetBase->objectName().isEmpty())
            QgsTableEditorFormattingWidgetBase->setObjectName(QString::fromUtf8("QgsTableEditorFormattingWidgetBase"));
        QgsTableEditorFormattingWidgetBase->resize(410, 464);
        verticalLayout = new QVBoxLayout(QgsTableEditorFormattingWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsTableEditorFormattingWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 410, 464));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFocusPolicy(Qt::StrongFocus);
        groupBox_7->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_7->setProperty("collapsed", QVariant(false));
        gridLayout_7 = new QGridLayout(groupBox_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_7->addWidget(label_5, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_7->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 3, 0, 1, 1);

        mCustomizeFormatButton = new QPushButton(groupBox_7);
        mCustomizeFormatButton->setObjectName(QString::fromUtf8("mCustomizeFormatButton"));

        gridLayout_7->addWidget(mCustomizeFormatButton, 1, 1, 1, 1);

        mVerticalAlignComboBox = new QgsAlignmentComboBox(groupBox_7);
        mVerticalAlignComboBox->setObjectName(QString::fromUtf8("mVerticalAlignComboBox"));

        gridLayout_7->addWidget(mVerticalAlignComboBox, 3, 1, 1, 1);

        mFormatNumbersCheckBox = new QCheckBox(groupBox_7);
        mFormatNumbersCheckBox->setObjectName(QString::fromUtf8("mFormatNumbersCheckBox"));

        gridLayout_7->addWidget(mFormatNumbersCheckBox, 1, 0, 1, 1);

        mFontButton = new QgsFontButton(groupBox_7);
        mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(mFontButton, 0, 1, 1, 1);

        mHorizontalAlignComboBox = new QgsAlignmentComboBox(groupBox_7);
        mHorizontalAlignComboBox->setObjectName(QString::fromUtf8("mHorizontalAlignComboBox"));

        gridLayout_7->addWidget(mHorizontalAlignComboBox, 2, 1, 1, 1);

        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_7->addWidget(label_11, 4, 0, 1, 1);

        mBackgroundColorButton = new QgsColorButton(groupBox_7);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(mBackgroundColorButton, 4, 1, 1, 1);


        gridLayout->addWidget(groupBox_7, 2, 0, 1, 2);

        mExpressionEdit = new QgsFieldExpressionWidget(scrollAreaWidgetContents);
        mExpressionEdit->setObjectName(QString::fromUtf8("mExpressionEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mExpressionEdit->sizePolicy().hasHeightForWidth());
        mExpressionEdit->setSizePolicy(sizePolicy1);
        mExpressionEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExpressionEdit, 0, 1, 1, 1);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setFocusPolicy(Qt::StrongFocus);
        groupBox_8->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_8->setProperty("collapsed", QVariant(false));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        mRowHeightSpinBox = new QgsDoubleSpinBox(groupBox_8);
        mRowHeightSpinBox->setObjectName(QString::fromUtf8("mRowHeightSpinBox"));
        mRowHeightSpinBox->setMaximum(999999.000000000000000);

        gridLayout_8->addWidget(mRowHeightSpinBox, 0, 1, 1, 1);

        label = new QLabel(groupBox_8);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_8->addWidget(label, 0, 0, 1, 1);

        mColumnWidthSpinBox = new QgsDoubleSpinBox(groupBox_8);
        mColumnWidthSpinBox->setObjectName(QString::fromUtf8("mColumnWidthSpinBox"));
        mColumnWidthSpinBox->setMaximum(999999.000000000000000);

        gridLayout_8->addWidget(mColumnWidthSpinBox, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_8->addWidget(label_2, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_8, 3, 0, 1, 2);

        label_51 = new QLabel(scrollAreaWidgetContents);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout->addWidget(label_51, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mExpressionEdit);
        QWidget::setTabOrder(mExpressionEdit, groupBox_7);
        QWidget::setTabOrder(groupBox_7, mFontButton);
        QWidget::setTabOrder(mFontButton, mFormatNumbersCheckBox);
        QWidget::setTabOrder(mFormatNumbersCheckBox, mCustomizeFormatButton);
        QWidget::setTabOrder(mCustomizeFormatButton, mHorizontalAlignComboBox);
        QWidget::setTabOrder(mHorizontalAlignComboBox, mVerticalAlignComboBox);
        QWidget::setTabOrder(mVerticalAlignComboBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, groupBox_8);
        QWidget::setTabOrder(groupBox_8, mRowHeightSpinBox);
        QWidget::setTabOrder(mRowHeightSpinBox, mColumnWidthSpinBox);

        retranslateUi(QgsTableEditorFormattingWidgetBase);

        QMetaObject::connectSlotsByName(QgsTableEditorFormattingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsTableEditorFormattingWidgetBase)
    {
        QgsTableEditorFormattingWidgetBase->setWindowTitle(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Attribute Table", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Formatting", nullptr));
        label_5->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Text format", nullptr));
        label_3->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Horizontal alignment", nullptr));
        label_4->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Vertical alignment", nullptr));
        mCustomizeFormatButton->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Customize\342\200\246", nullptr));
        mFormatNumbersCheckBox->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Format as number", nullptr));
        mFontButton->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Font", nullptr));
        label_11->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Background color", nullptr));
        mBackgroundColorButton->setText(QString());
        groupBox_8->setTitle(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Cell Size", nullptr));
        mRowHeightSpinBox->setSuffix(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", " mm", nullptr));
        label->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Row height", nullptr));
        mColumnWidthSpinBox->setSuffix(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", " mm", nullptr));
        label_2->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Column width", nullptr));
        label_51->setText(QCoreApplication::translate("QgsTableEditorFormattingWidgetBase", "Expression", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTableEditorFormattingWidgetBase: public Ui_QgsTableEditorFormattingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTABLEEDITORFORMATTINGWIDGETBASE_H
