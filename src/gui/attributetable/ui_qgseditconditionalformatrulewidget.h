/********************************************************************************
** Form generated from reading UI file 'qgseditconditionalformatrulewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEDITCONDITIONALFORMATRULEWIDGET_H
#define UI_QGSEDITCONDITIONALFORMATRULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsEditConditionalRuleWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *mPresetsList;
    QLineEdit *mNameEdit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mSaveRule;
    QPushButton *mCancelButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *mDeleteButton;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *mRuleEdit;
    QToolButton *btnBuildExpression;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QFrame *horizontalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QgsColorButton *btnBackgroundColor;
    QgsColorButton *btnTextColor;
    QLabel *label_6;
    QLabel *label_5;
    QCheckBox *checkIcon;
    QHBoxLayout *horizontalLayout_6;
    QgsSymbolButton *btnChangeIcon;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_13;
    QToolButton *mFontBoldBtn;
    QToolButton *mFontItalicBtn;
    QToolButton *mFontUnderlineBtn;
    QToolButton *mFontStrikethroughBtn;
    QFontComboBox *mFontFamilyCmbBx;
    QButtonGroup *mFontButtons;

    void setupUi(QWidget *QgsEditConditionalRuleWidget)
    {
        if (QgsEditConditionalRuleWidget->objectName().isEmpty())
            QgsEditConditionalRuleWidget->setObjectName(QString::fromUtf8("QgsEditConditionalRuleWidget"));
        QgsEditConditionalRuleWidget->resize(384, 331);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsEditConditionalRuleWidget->sizePolicy().hasHeightForWidth());
        QgsEditConditionalRuleWidget->setSizePolicy(sizePolicy);
        QgsEditConditionalRuleWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsEditConditionalRuleWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mPresetsList = new QComboBox(QgsEditConditionalRuleWidget);
        mPresetsList->setObjectName(QString::fromUtf8("mPresetsList"));

        gridLayout->addWidget(mPresetsList, 5, 0, 1, 2);

        mNameEdit = new QLineEdit(QgsEditConditionalRuleWidget);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

        gridLayout->addWidget(mNameEdit, 1, 0, 1, 2);

        label_2 = new QLabel(QgsEditConditionalRuleWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSaveRule = new QPushButton(QgsEditConditionalRuleWidget);
        mSaveRule->setObjectName(QString::fromUtf8("mSaveRule"));

        horizontalLayout_2->addWidget(mSaveRule);

        mCancelButton = new QPushButton(QgsEditConditionalRuleWidget);
        mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));

        horizontalLayout_2->addWidget(mCancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mDeleteButton = new QToolButton(QgsEditConditionalRuleWidget);
        mDeleteButton->setObjectName(QString::fromUtf8("mDeleteButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteButton->setIcon(icon);
        mDeleteButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(mDeleteButton);


        gridLayout->addLayout(horizontalLayout_2, 8, 0, 1, 2);

        label_3 = new QLabel(QgsEditConditionalRuleWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mRuleEdit = new QLineEdit(QgsEditConditionalRuleWidget);
        mRuleEdit->setObjectName(QString::fromUtf8("mRuleEdit"));

        horizontalLayout_5->addWidget(mRuleEdit);

        btnBuildExpression = new QToolButton(QgsEditConditionalRuleWidget);
        btnBuildExpression->setObjectName(QString::fromUtf8("btnBuildExpression"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnBuildExpression->setIcon(icon1);

        horizontalLayout_5->addWidget(btnBuildExpression);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        label = new QLabel(QgsEditConditionalRuleWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        horizontalFrame_2 = new QFrame(QgsEditConditionalRuleWidget);
        horizontalFrame_2->setObjectName(QString::fromUtf8("horizontalFrame_2"));
        verticalLayout_2 = new QVBoxLayout(horizontalFrame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 5, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        btnBackgroundColor = new QgsColorButton(horizontalFrame_2);
        btnBackgroundColor->setObjectName(QString::fromUtf8("btnBackgroundColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnBackgroundColor->sizePolicy().hasHeightForWidth());
        btnBackgroundColor->setSizePolicy(sizePolicy2);
        btnBackgroundColor->setMinimumSize(QSize(10, 0));
        btnBackgroundColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnBackgroundColor, 0, 1, 1, 1);

        btnTextColor = new QgsColorButton(horizontalFrame_2);
        btnTextColor->setObjectName(QString::fromUtf8("btnTextColor"));
        sizePolicy2.setHeightForWidth(btnTextColor->sizePolicy().hasHeightForWidth());
        btnTextColor->setSizePolicy(sizePolicy2);
        btnTextColor->setMinimumSize(QSize(10, 0));
        btnTextColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnTextColor, 0, 3, 1, 1);

        label_6 = new QLabel(horizontalFrame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        label_5 = new QLabel(horizontalFrame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        checkIcon = new QCheckBox(horizontalFrame_2);
        checkIcon->setObjectName(QString::fromUtf8("checkIcon"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(checkIcon->sizePolicy().hasHeightForWidth());
        checkIcon->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(checkIcon, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btnChangeIcon = new QgsSymbolButton(horizontalFrame_2);
        btnChangeIcon->setObjectName(QString::fromUtf8("btnChangeIcon"));
        btnChangeIcon->setEnabled(false);
        sizePolicy2.setHeightForWidth(btnChangeIcon->sizePolicy().hasHeightForWidth());
        btnChangeIcon->setSizePolicy(sizePolicy2);
        btnChangeIcon->setMinimumSize(QSize(10, 0));
        btnChangeIcon->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(btnChangeIcon);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_6, 1, 1, 1, 3);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mFontBoldBtn = new QToolButton(horizontalFrame_2);
        mFontBoldBtn->setObjectName(QString::fromUtf8("mFontBoldBtn"));
        mFontBoldBtn->setEnabled(true);
        mFontBoldBtn->setMinimumSize(QSize(24, 24));
        mFontBoldBtn->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setPointSize(13);
        mFontBoldBtn->setFont(font);
        mFontBoldBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontBoldBtn);

        mFontItalicBtn = new QToolButton(horizontalFrame_2);
        mFontItalicBtn->setObjectName(QString::fromUtf8("mFontItalicBtn"));
        mFontItalicBtn->setEnabled(true);
        mFontItalicBtn->setMinimumSize(QSize(24, 24));
        mFontItalicBtn->setMaximumSize(QSize(24, 24));
        QFont font1;
        font1.setPointSize(13);
        font1.setItalic(true);
        mFontItalicBtn->setFont(font1);
        mFontItalicBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontItalicBtn);

        mFontUnderlineBtn = new QToolButton(horizontalFrame_2);
        mFontUnderlineBtn->setObjectName(QString::fromUtf8("mFontUnderlineBtn"));
        mFontUnderlineBtn->setEnabled(true);
        mFontUnderlineBtn->setMinimumSize(QSize(24, 24));
        mFontUnderlineBtn->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(13);
        font2.setUnderline(true);
        mFontUnderlineBtn->setFont(font2);
        mFontUnderlineBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontUnderlineBtn);

        mFontStrikethroughBtn = new QToolButton(horizontalFrame_2);
        mFontStrikethroughBtn->setObjectName(QString::fromUtf8("mFontStrikethroughBtn"));
        mFontStrikethroughBtn->setEnabled(true);
        mFontStrikethroughBtn->setMinimumSize(QSize(24, 24));
        mFontStrikethroughBtn->setMaximumSize(QSize(24, 24));
        QFont font3;
        font3.setPointSize(13);
        font3.setStrikeOut(true);
        mFontStrikethroughBtn->setFont(font3);
        mFontStrikethroughBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontStrikethroughBtn);

        mFontFamilyCmbBx = new QFontComboBox(horizontalFrame_2);
        mFontFamilyCmbBx->setObjectName(QString::fromUtf8("mFontFamilyCmbBx"));

        horizontalLayout_13->addWidget(mFontFamilyCmbBx);


        verticalLayout_2->addLayout(horizontalLayout_13);


        gridLayout->addWidget(horizontalFrame_2, 6, 0, 1, 2);

        QWidget::setTabOrder(mNameEdit, mRuleEdit);
        QWidget::setTabOrder(mRuleEdit, btnBuildExpression);
        QWidget::setTabOrder(btnBuildExpression, mPresetsList);
        QWidget::setTabOrder(mPresetsList, btnBackgroundColor);
        QWidget::setTabOrder(btnBackgroundColor, btnTextColor);
        QWidget::setTabOrder(btnTextColor, checkIcon);
        QWidget::setTabOrder(checkIcon, btnChangeIcon);
        QWidget::setTabOrder(btnChangeIcon, mFontBoldBtn);
        QWidget::setTabOrder(mFontBoldBtn, mFontItalicBtn);
        QWidget::setTabOrder(mFontItalicBtn, mFontUnderlineBtn);
        QWidget::setTabOrder(mFontUnderlineBtn, mFontStrikethroughBtn);
        QWidget::setTabOrder(mFontStrikethroughBtn, mFontFamilyCmbBx);
        QWidget::setTabOrder(mFontFamilyCmbBx, mSaveRule);
        QWidget::setTabOrder(mSaveRule, mCancelButton);
        QWidget::setTabOrder(mCancelButton, mDeleteButton);

        retranslateUi(QgsEditConditionalRuleWidget);

        QMetaObject::connectSlotsByName(QgsEditConditionalRuleWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsEditConditionalRuleWidget)
    {
        mNameEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Name", nullptr));
        mSaveRule->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Done", nullptr));
        mCancelButton->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Cancel", nullptr));
        mDeleteButton->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Preset", nullptr));
        mRuleEdit->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "@value", nullptr));
        btnBuildExpression->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Condition", nullptr));
        btnBackgroundColor->setText(QString());
        btnTextColor->setText(QString());
        label_6->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Text", nullptr));
        label_5->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Background", nullptr));
        checkIcon->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Icon", nullptr));
        btnChangeIcon->setText(QString());
#if QT_CONFIG(tooltip)
        mFontBoldBtn->setToolTip(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Bold text\n"
"(data defined only, overrides Style)", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontBoldBtn->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "B", nullptr));
#if QT_CONFIG(tooltip)
        mFontItalicBtn->setToolTip(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Italic text\n"
"(data defined only, overrides Style)", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontItalicBtn->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "I", nullptr));
#if QT_CONFIG(tooltip)
        mFontUnderlineBtn->setToolTip(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Underlined text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontUnderlineBtn->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "U", nullptr));
#if QT_CONFIG(tooltip)
        mFontStrikethroughBtn->setToolTip(QCoreApplication::translate("QgsEditConditionalRuleWidget", "Strikeout text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontStrikethroughBtn->setText(QCoreApplication::translate("QgsEditConditionalRuleWidget", "S", nullptr));
        (void)QgsEditConditionalRuleWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsEditConditionalRuleWidget: public Ui_QgsEditConditionalRuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEDITCONDITIONALFORMATRULEWIDGET_H
