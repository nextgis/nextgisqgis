/********************************************************************************
** Form generated from reading UI file 'qgscolorramplegendnodewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOLORRAMPLEGENDNODEWIDGETBASE_H
#define UI_QGSCOLORRAMPLEGENDNODEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilterlineedit.h"
#include "qgsfontbutton.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsColorRampLegendNodeWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QCheckBox *mUseContinuousLegendCheckBox;
    QGroupBox *mLabelsGroup;
    QGridLayout *gridLayout;
    QgsFilterLineEdit *mMaxLabelLineEdit;
    QgsFontButton *mFontButton;
    QLabel *label_7;
    QgsFilterLineEdit *mMinLabelLineEdit;
    QgsFilterLineEdit *mPrefixLineEdit;
    QLabel *mPrefixLabel;
    QLabel *label;
    QLabel *mSuffixLabel;
    QLabel *label_2;
    QLabel *mNumberFormatLabel;
    QLabel *label_6;
    QPushButton *mNumberFormatPushButton;
    QgsFilterLineEdit *mSuffixLineEdit;
    QGroupBox *mLayoutGroup;
    QGridLayout *gridLayout_2;
    QComboBox *mDirectionComboBox;
    QLabel *label_3;
    QLabel *label_8;
    QComboBox *mOrientationComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsColorRampLegendNodeWidgetBase)
    {
        if (QgsColorRampLegendNodeWidgetBase->objectName().isEmpty())
            QgsColorRampLegendNodeWidgetBase->setObjectName(QString::fromUtf8("QgsColorRampLegendNodeWidgetBase"));
        QgsColorRampLegendNodeWidgetBase->resize(359, 399);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsColorRampLegendNodeWidgetBase->sizePolicy().hasHeightForWidth());
        QgsColorRampLegendNodeWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsColorRampLegendNodeWidgetBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mUseContinuousLegendCheckBox = new QCheckBox(QgsColorRampLegendNodeWidgetBase);
        mUseContinuousLegendCheckBox->setObjectName(QString::fromUtf8("mUseContinuousLegendCheckBox"));
        mUseContinuousLegendCheckBox->setChecked(true);

        verticalLayout_2->addWidget(mUseContinuousLegendCheckBox);

        mLabelsGroup = new QGroupBox(QgsColorRampLegendNodeWidgetBase);
        mLabelsGroup->setObjectName(QString::fromUtf8("mLabelsGroup"));
        gridLayout = new QGridLayout(mLabelsGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mMaxLabelLineEdit = new QgsFilterLineEdit(mLabelsGroup);
        mMaxLabelLineEdit->setObjectName(QString::fromUtf8("mMaxLabelLineEdit"));

        gridLayout->addWidget(mMaxLabelLineEdit, 4, 1, 1, 1);

        mFontButton = new QgsFontButton(mLabelsGroup);
        mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mFontButton, 6, 1, 1, 1);

        label_7 = new QLabel(mLabelsGroup);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        mMinLabelLineEdit = new QgsFilterLineEdit(mLabelsGroup);
        mMinLabelLineEdit->setObjectName(QString::fromUtf8("mMinLabelLineEdit"));

        gridLayout->addWidget(mMinLabelLineEdit, 3, 1, 1, 1);

        mPrefixLineEdit = new QgsFilterLineEdit(mLabelsGroup);
        mPrefixLineEdit->setObjectName(QString::fromUtf8("mPrefixLineEdit"));

        gridLayout->addWidget(mPrefixLineEdit, 1, 1, 1, 1);

        mPrefixLabel = new QLabel(mLabelsGroup);
        mPrefixLabel->setObjectName(QString::fromUtf8("mPrefixLabel"));

        gridLayout->addWidget(mPrefixLabel, 1, 0, 1, 1);

        label = new QLabel(mLabelsGroup);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        mSuffixLabel = new QLabel(mLabelsGroup);
        mSuffixLabel->setObjectName(QString::fromUtf8("mSuffixLabel"));

        gridLayout->addWidget(mSuffixLabel, 2, 0, 1, 1);

        label_2 = new QLabel(mLabelsGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        mNumberFormatLabel = new QLabel(mLabelsGroup);
        mNumberFormatLabel->setObjectName(QString::fromUtf8("mNumberFormatLabel"));
        mNumberFormatLabel->setWordWrap(true);

        gridLayout->addWidget(mNumberFormatLabel, 5, 0, 1, 1);

        label_6 = new QLabel(mLabelsGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 1, 1, 1);

        mNumberFormatPushButton = new QPushButton(mLabelsGroup);
        mNumberFormatPushButton->setObjectName(QString::fromUtf8("mNumberFormatPushButton"));

        gridLayout->addWidget(mNumberFormatPushButton, 5, 1, 1, 1);

        mSuffixLineEdit = new QgsFilterLineEdit(mLabelsGroup);
        mSuffixLineEdit->setObjectName(QString::fromUtf8("mSuffixLineEdit"));

        gridLayout->addWidget(mSuffixLineEdit, 2, 1, 1, 1);


        verticalLayout_2->addWidget(mLabelsGroup);

        mLayoutGroup = new QGroupBox(QgsColorRampLegendNodeWidgetBase);
        mLayoutGroup->setObjectName(QString::fromUtf8("mLayoutGroup"));
        gridLayout_2 = new QGridLayout(mLayoutGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDirectionComboBox = new QComboBox(mLayoutGroup);
        mDirectionComboBox->setObjectName(QString::fromUtf8("mDirectionComboBox"));

        gridLayout_2->addWidget(mDirectionComboBox, 1, 1, 1, 1);

        label_3 = new QLabel(mLayoutGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_8 = new QLabel(mLayoutGroup);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        mOrientationComboBox = new QComboBox(mLayoutGroup);
        mOrientationComboBox->setObjectName(QString::fromUtf8("mOrientationComboBox"));

        gridLayout_2->addWidget(mOrientationComboBox, 0, 1, 1, 1);


        verticalLayout_2->addWidget(mLayoutGroup);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(mPrefixLineEdit, mSuffixLineEdit);
        QWidget::setTabOrder(mSuffixLineEdit, mMinLabelLineEdit);
        QWidget::setTabOrder(mMinLabelLineEdit, mMaxLabelLineEdit);
        QWidget::setTabOrder(mMaxLabelLineEdit, mNumberFormatPushButton);
        QWidget::setTabOrder(mNumberFormatPushButton, mFontButton);
        QWidget::setTabOrder(mFontButton, mOrientationComboBox);
        QWidget::setTabOrder(mOrientationComboBox, mDirectionComboBox);

        retranslateUi(QgsColorRampLegendNodeWidgetBase);

        QMetaObject::connectSlotsByName(QgsColorRampLegendNodeWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsColorRampLegendNodeWidgetBase)
    {
        QgsColorRampLegendNodeWidgetBase->setWindowTitle(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Legend Node Properties", nullptr));
        mUseContinuousLegendCheckBox->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Use continuous legend", nullptr));
        mLabelsGroup->setTitle(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Labels", nullptr));
        mFontButton->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Font", nullptr));
        label_7->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Text format", nullptr));
        mPrefixLabel->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Prefix", nullptr));
        label->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Minimum", nullptr));
        mSuffixLabel->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Suffix", nullptr));
        label_2->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Maximum", nullptr));
        mNumberFormatLabel->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Number format", nullptr));
        label_6->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "<html><head/><body><p><span style=\" font-style:italic;\">(Applies to print layout legends only)</span></p></body></html>", nullptr));
        mNumberFormatPushButton->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Customize", nullptr));
        mLayoutGroup->setTitle(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Layout", nullptr));
        label_3->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Direction", nullptr));
        label_8->setText(QCoreApplication::translate("QgsColorRampLegendNodeWidgetBase", "Orientation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsColorRampLegendNodeWidgetBase: public Ui_QgsColorRampLegendNodeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOLORRAMPLEGENDNODEWIDGETBASE_H
