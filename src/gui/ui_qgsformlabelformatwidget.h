/********************************************************************************
** Form generated from reading UI file 'qgsformlabelformatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFORMLABELFORMATWIDGET_H
#define UI_QGSFORMLABELFORMATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFormLabelFormatWidget
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mOverrideLabelColorGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QgsColorButton *btnTextColor;
    QgsCollapsibleGroupBox *mOverrideLabelFontGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mFontBoldBtn;
    QToolButton *mFontItalicBtn;
    QToolButton *mFontUnderlineBtn;
    QToolButton *mFontStrikethroughBtn;
    QFontComboBox *mFontFamilyCmbBx;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsFormLabelFormatWidget)
    {
        if (QgsFormLabelFormatWidget->objectName().isEmpty())
            QgsFormLabelFormatWidget->setObjectName(QString::fromUtf8("QgsFormLabelFormatWidget"));
        QgsFormLabelFormatWidget->resize(384, 133);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsFormLabelFormatWidget->sizePolicy().hasHeightForWidth());
        QgsFormLabelFormatWidget->setSizePolicy(sizePolicy);
        QgsFormLabelFormatWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsFormLabelFormatWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOverrideLabelColorGroupBox = new QgsCollapsibleGroupBox(QgsFormLabelFormatWidget);
        mOverrideLabelColorGroupBox->setObjectName(QString::fromUtf8("mOverrideLabelColorGroupBox"));
        mOverrideLabelColorGroupBox->setCheckable(true);
        mOverrideLabelColorGroupBox->setChecked(false);
        horizontalLayout = new QHBoxLayout(mOverrideLabelColorGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(mOverrideLabelColorGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_6);

        btnTextColor = new QgsColorButton(mOverrideLabelColorGroupBox);
        btnTextColor->setObjectName(QString::fromUtf8("btnTextColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnTextColor->sizePolicy().hasHeightForWidth());
        btnTextColor->setSizePolicy(sizePolicy2);
        btnTextColor->setMinimumSize(QSize(10, 0));
        btnTextColor->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(btnTextColor);


        verticalLayout->addWidget(mOverrideLabelColorGroupBox);

        mOverrideLabelFontGroupBox = new QgsCollapsibleGroupBox(QgsFormLabelFormatWidget);
        mOverrideLabelFontGroupBox->setObjectName(QString::fromUtf8("mOverrideLabelFontGroupBox"));
        mOverrideLabelFontGroupBox->setCheckable(true);
        mOverrideLabelFontGroupBox->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(mOverrideLabelFontGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mFontBoldBtn = new QToolButton(mOverrideLabelFontGroupBox);
        mFontBoldBtn->setObjectName(QString::fromUtf8("mFontBoldBtn"));
        mFontBoldBtn->setEnabled(true);
        mFontBoldBtn->setMinimumSize(QSize(24, 24));
        mFontBoldBtn->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setPointSize(13);
        mFontBoldBtn->setFont(font);
        mFontBoldBtn->setCheckable(true);

        horizontalLayout_2->addWidget(mFontBoldBtn);

        mFontItalicBtn = new QToolButton(mOverrideLabelFontGroupBox);
        mFontItalicBtn->setObjectName(QString::fromUtf8("mFontItalicBtn"));
        mFontItalicBtn->setEnabled(true);
        mFontItalicBtn->setMinimumSize(QSize(24, 24));
        mFontItalicBtn->setMaximumSize(QSize(24, 24));
        QFont font1;
        font1.setPointSize(13);
        font1.setItalic(true);
        mFontItalicBtn->setFont(font1);
        mFontItalicBtn->setCheckable(true);

        horizontalLayout_2->addWidget(mFontItalicBtn);

        mFontUnderlineBtn = new QToolButton(mOverrideLabelFontGroupBox);
        mFontUnderlineBtn->setObjectName(QString::fromUtf8("mFontUnderlineBtn"));
        mFontUnderlineBtn->setEnabled(true);
        mFontUnderlineBtn->setMinimumSize(QSize(24, 24));
        mFontUnderlineBtn->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(13);
        font2.setUnderline(true);
        mFontUnderlineBtn->setFont(font2);
        mFontUnderlineBtn->setCheckable(true);

        horizontalLayout_2->addWidget(mFontUnderlineBtn);

        mFontStrikethroughBtn = new QToolButton(mOverrideLabelFontGroupBox);
        mFontStrikethroughBtn->setObjectName(QString::fromUtf8("mFontStrikethroughBtn"));
        mFontStrikethroughBtn->setEnabled(true);
        mFontStrikethroughBtn->setMinimumSize(QSize(24, 24));
        mFontStrikethroughBtn->setMaximumSize(QSize(24, 24));
        QFont font3;
        font3.setPointSize(13);
        font3.setStrikeOut(true);
        mFontStrikethroughBtn->setFont(font3);
        mFontStrikethroughBtn->setCheckable(true);

        horizontalLayout_2->addWidget(mFontStrikethroughBtn);

        mFontFamilyCmbBx = new QFontComboBox(mOverrideLabelFontGroupBox);
        mFontFamilyCmbBx->setObjectName(QString::fromUtf8("mFontFamilyCmbBx"));

        horizontalLayout_2->addWidget(mFontFamilyCmbBx);


        verticalLayout->addWidget(mOverrideLabelFontGroupBox);

        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mFontBoldBtn, mFontItalicBtn);
        QWidget::setTabOrder(mFontItalicBtn, mFontUnderlineBtn);
        QWidget::setTabOrder(mFontUnderlineBtn, mFontStrikethroughBtn);
        QWidget::setTabOrder(mFontStrikethroughBtn, mFontFamilyCmbBx);

        retranslateUi(QgsFormLabelFormatWidget);

        QMetaObject::connectSlotsByName(QgsFormLabelFormatWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsFormLabelFormatWidget)
    {
        mOverrideLabelColorGroupBox->setTitle(QCoreApplication::translate("QgsFormLabelFormatWidget", "Override Label Color", nullptr));
        label_6->setText(QCoreApplication::translate("QgsFormLabelFormatWidget", "Color", nullptr));
        btnTextColor->setText(QString());
        mOverrideLabelFontGroupBox->setTitle(QCoreApplication::translate("QgsFormLabelFormatWidget", "Override Label Font", nullptr));
#if QT_CONFIG(tooltip)
        mFontBoldBtn->setToolTip(QCoreApplication::translate("QgsFormLabelFormatWidget", "Bold text\n"
"(data defined only, overrides Style)", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontBoldBtn->setText(QCoreApplication::translate("QgsFormLabelFormatWidget", "B", nullptr));
#if QT_CONFIG(tooltip)
        mFontItalicBtn->setToolTip(QCoreApplication::translate("QgsFormLabelFormatWidget", "Italic text\n"
"(data defined only, overrides Style)", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontItalicBtn->setText(QCoreApplication::translate("QgsFormLabelFormatWidget", "I", nullptr));
#if QT_CONFIG(tooltip)
        mFontUnderlineBtn->setToolTip(QCoreApplication::translate("QgsFormLabelFormatWidget", "Underlined text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontUnderlineBtn->setText(QCoreApplication::translate("QgsFormLabelFormatWidget", "U", nullptr));
#if QT_CONFIG(tooltip)
        mFontStrikethroughBtn->setToolTip(QCoreApplication::translate("QgsFormLabelFormatWidget", "Strikeout text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontStrikethroughBtn->setText(QCoreApplication::translate("QgsFormLabelFormatWidget", "S", nullptr));
        (void)QgsFormLabelFormatWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsFormLabelFormatWidget: public Ui_QgsFormLabelFormatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFORMLABELFORMATWIDGET_H
