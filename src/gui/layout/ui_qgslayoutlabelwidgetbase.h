/********************************************************************************
** Form generated from reading UI file 'qgslayoutlabelwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTLABELWIDGETBASE_H
#define UI_QGSLAYOUTLABELWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsalignmentcombobox.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutLabelWidgetBase
{
public:
    QVBoxLayout *_2;
    QLabel *label;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mTextGroupBox;
    QGridLayout *gridLayout_2;
    QToolButton *mDynamicTextButton;
    QToolButton *mInsertExpressionButton;
    QCheckBox *mHtmlCheckBox;
    QPlainTextEdit *mTextEdit;
    QgsCollapsibleGroupBoxBasic *mAppearanceGroup;
    QGridLayout *gridLayout;
    QLabel *mVerticalAlignementLabel;
    QgsAlignmentComboBox *mHAlignmentComboBox;
    QgsDoubleSpinBox *mMarginYDoubleSpinBox;
    QgsFontButton *mFontButton;
    QLabel *mMarginYLabel;
    QLabel *mMarginXLabel;
    QgsAlignmentComboBox *mVAlignmentComboBox;
    QgsDoubleSpinBox *mMarginXDoubleSpinBox;
    QLabel *mHorizontalAlignementLabel;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *QgsLayoutLabelWidgetBase)
    {
        if (QgsLayoutLabelWidgetBase->objectName().isEmpty())
            QgsLayoutLabelWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutLabelWidgetBase"));
        QgsLayoutLabelWidgetBase->resize(360, 705);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutLabelWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutLabelWidgetBase->setSizePolicy(sizePolicy);
        _2 = new QVBoxLayout(QgsLayoutLabelWidgetBase);
        _2->setSpacing(0);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLayoutLabelWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        _2->addWidget(label);

        scrollArea = new QgsScrollArea(QgsLayoutLabelWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 358, 681));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mTextGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mTextGroupBox->setObjectName(QString::fromUtf8("mTextGroupBox"));
        mTextGroupBox->setFocusPolicy(Qt::StrongFocus);
        mTextGroupBox->setCheckable(false);
        mTextGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mTextGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mTextGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDynamicTextButton = new QToolButton(mTextGroupBox);
        mDynamicTextButton->setObjectName(QString::fromUtf8("mDynamicTextButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mDynamicTextButton->sizePolicy().hasHeightForWidth());
        mDynamicTextButton->setSizePolicy(sizePolicy2);
        mDynamicTextButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout_2->addWidget(mDynamicTextButton, 2, 1, 1, 1);

        mInsertExpressionButton = new QToolButton(mTextGroupBox);
        mInsertExpressionButton->setObjectName(QString::fromUtf8("mInsertExpressionButton"));
        sizePolicy2.setHeightForWidth(mInsertExpressionButton->sizePolicy().hasHeightForWidth());
        mInsertExpressionButton->setSizePolicy(sizePolicy2);
        mInsertExpressionButton->setPopupMode(QToolButton::MenuButtonPopup);
        mInsertExpressionButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        mInsertExpressionButton->setArrowType(Qt::DownArrow);

        gridLayout_2->addWidget(mInsertExpressionButton, 2, 0, 1, 1);

        mHtmlCheckBox = new QCheckBox(mTextGroupBox);
        mHtmlCheckBox->setObjectName(QString::fromUtf8("mHtmlCheckBox"));

        gridLayout_2->addWidget(mHtmlCheckBox, 1, 0, 1, 2);

        mTextEdit = new QPlainTextEdit(mTextGroupBox);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setMinimumSize(QSize(0, 150));

        gridLayout_2->addWidget(mTextEdit, 0, 0, 1, 2);


        mainLayout->addWidget(mTextGroupBox);

        mAppearanceGroup = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mAppearanceGroup->setObjectName(QString::fromUtf8("mAppearanceGroup"));
        mAppearanceGroup->setFocusPolicy(Qt::StrongFocus);
        mAppearanceGroup->setCheckable(false);
        mAppearanceGroup->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mAppearanceGroup->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mAppearanceGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mVerticalAlignementLabel = new QLabel(mAppearanceGroup);
        mVerticalAlignementLabel->setObjectName(QString::fromUtf8("mVerticalAlignementLabel"));

        gridLayout->addWidget(mVerticalAlignementLabel, 4, 0, 1, 1);

        mHAlignmentComboBox = new QgsAlignmentComboBox(mAppearanceGroup);
        mHAlignmentComboBox->setObjectName(QString::fromUtf8("mHAlignmentComboBox"));

        gridLayout->addWidget(mHAlignmentComboBox, 3, 1, 1, 1);

        mMarginYDoubleSpinBox = new QgsDoubleSpinBox(mAppearanceGroup);
        mMarginYDoubleSpinBox->setObjectName(QString::fromUtf8("mMarginYDoubleSpinBox"));
        mMarginYDoubleSpinBox->setMinimum(-99.989999999999995);

        gridLayout->addWidget(mMarginYDoubleSpinBox, 2, 1, 1, 1);

        mFontButton = new QgsFontButton(mAppearanceGroup);
        mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(mFontButton, 0, 0, 1, 2);

        mMarginYLabel = new QLabel(mAppearanceGroup);
        mMarginYLabel->setObjectName(QString::fromUtf8("mMarginYLabel"));

        gridLayout->addWidget(mMarginYLabel, 2, 0, 1, 1);

        mMarginXLabel = new QLabel(mAppearanceGroup);
        mMarginXLabel->setObjectName(QString::fromUtf8("mMarginXLabel"));

        gridLayout->addWidget(mMarginXLabel, 1, 0, 1, 1);

        mVAlignmentComboBox = new QgsAlignmentComboBox(mAppearanceGroup);
        mVAlignmentComboBox->setObjectName(QString::fromUtf8("mVAlignmentComboBox"));

        gridLayout->addWidget(mVAlignmentComboBox, 4, 1, 1, 1);

        mMarginXDoubleSpinBox = new QgsDoubleSpinBox(mAppearanceGroup);
        mMarginXDoubleSpinBox->setObjectName(QString::fromUtf8("mMarginXDoubleSpinBox"));
        mMarginXDoubleSpinBox->setMinimum(-99.989999999999995);

        gridLayout->addWidget(mMarginXDoubleSpinBox, 1, 1, 1, 1);

        mHorizontalAlignementLabel = new QLabel(mAppearanceGroup);
        mHorizontalAlignementLabel->setObjectName(QString::fromUtf8("mHorizontalAlignementLabel"));

        gridLayout->addWidget(mHorizontalAlignementLabel, 3, 0, 1, 1);


        mainLayout->addWidget(mAppearanceGroup);

        scrollArea->setWidget(scrollAreaWidgetContents);

        _2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mTextGroupBox);
        QWidget::setTabOrder(mTextGroupBox, mTextEdit);
        QWidget::setTabOrder(mTextEdit, mHtmlCheckBox);
        QWidget::setTabOrder(mHtmlCheckBox, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mDynamicTextButton);
        QWidget::setTabOrder(mDynamicTextButton, mAppearanceGroup);
        QWidget::setTabOrder(mAppearanceGroup, mFontButton);
        QWidget::setTabOrder(mFontButton, mMarginXDoubleSpinBox);
        QWidget::setTabOrder(mMarginXDoubleSpinBox, mMarginYDoubleSpinBox);

        retranslateUi(QgsLayoutLabelWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutLabelWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutLabelWidgetBase)
    {
        QgsLayoutLabelWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Label Options", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Label", nullptr));
        mTextGroupBox->setTitle(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Main Properties", nullptr));
        mDynamicTextButton->setText(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Dynamic Text", nullptr));
        mInsertExpressionButton->setText(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Insert/Edit Expression\342\200\246", nullptr));
        mHtmlCheckBox->setText(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Render as HTML", nullptr));
        mAppearanceGroup->setTitle(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Appearance", nullptr));
        mVerticalAlignementLabel->setText(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Vertical alignment", nullptr));
        mMarginYDoubleSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLabelWidgetBase", " mm", nullptr));
        mFontButton->setText(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Font", nullptr));
        mMarginYLabel->setText(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Vertical margin", nullptr));
        mMarginXLabel->setText(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Horizontal margin", nullptr));
        mMarginXDoubleSpinBox->setPrefix(QString());
        mMarginXDoubleSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutLabelWidgetBase", " mm", nullptr));
        mHorizontalAlignementLabel->setText(QCoreApplication::translate("QgsLayoutLabelWidgetBase", "Horizontal alignment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutLabelWidgetBase: public Ui_QgsLayoutLabelWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTLABELWIDGETBASE_H
