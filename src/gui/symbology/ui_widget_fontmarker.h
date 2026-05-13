/********************************************************************************
** Form generated from reading UI file 'widget_fontmarker.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_FONTMARKER_H
#define UI_WIDGET_FONTMARKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetFontMarker
{
public:
    QGridLayout *gridLayout_3;
    QgsColorButton *btnColor;
    QgsColorButton *btnStrokeColor;
    QLabel *label_2;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QLabel *lblFamily;
    QLabel *lblStyle;
    QComboBox *mFontStyleComboBox;
    QgsPropertyOverrideButton *mFontStyleDDBtn;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QgsDoubleSpinBox *spinOffsetX;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label_6;
    QgsDoubleSpinBox *spinOffsetY;
    QFontComboBox *cboFont;
    QgsPropertyOverrideButton *mFontFamilyDDBtn;
    QLabel *mAnchorPointLabel;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_8;
    QComboBox *mHorizontalAnchorComboBox;
    QLabel *label_4;
    QComboBox *mVerticalAnchorComboBox;
    QgsPropertyOverrideButton *mColorDDBtn;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsDoubleSpinBox *spinAngle;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QLabel *label_12;
    QLineEdit *mCharLineEdit;
    QgsPropertyOverrideButton *mCharDDBtn;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QGridLayout *gridLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QLabel *mStrokeWidthLabel;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *spinSize;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QgsPropertyOverrideButton *mSizeDDBtn;
    QLineEdit *mCharPreview;
    QLabel *label_13;

    void setupUi(QWidget *WidgetFontMarker)
    {
        if (WidgetFontMarker->objectName().isEmpty())
            WidgetFontMarker->setObjectName(QString::fromUtf8("WidgetFontMarker"));
        WidgetFontMarker->resize(487, 639);
        WidgetFontMarker->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_3 = new QGridLayout(WidgetFontMarker);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btnColor = new QgsColorButton(WidgetFontMarker);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnColor->sizePolicy().hasHeightForWidth());
        btnColor->setSizePolicy(sizePolicy);
        btnColor->setMinimumSize(QSize(120, 0));
        btnColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(btnColor, 3, 2, 1, 1);

        btnStrokeColor = new QgsColorButton(WidgetFontMarker);
        btnStrokeColor->setObjectName(QString::fromUtf8("btnStrokeColor"));
        sizePolicy.setHeightForWidth(btnStrokeColor->sizePolicy().hasHeightForWidth());
        btnStrokeColor->setSizePolicy(sizePolicy);
        btnStrokeColor->setMinimumSize(QSize(120, 0));
        btnStrokeColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(btnStrokeColor, 4, 2, 1, 1);

        label_2 = new QLabel(WidgetFontMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mStrokeWidthDDBtn->setObjectName(QString::fromUtf8("mStrokeWidthDDBtn"));

        gridLayout_3->addWidget(mStrokeWidthDDBtn, 5, 4, 1, 1);

        lblFamily = new QLabel(WidgetFontMarker);
        lblFamily->setObjectName(QString::fromUtf8("lblFamily"));

        gridLayout_3->addWidget(lblFamily, 0, 0, 1, 1);

        lblStyle = new QLabel(WidgetFontMarker);
        lblStyle->setObjectName(QString::fromUtf8("lblStyle"));

        gridLayout_3->addWidget(lblStyle, 1, 0, 1, 1);

        mFontStyleComboBox = new QComboBox(WidgetFontMarker);
        mFontStyleComboBox->setObjectName(QString::fromUtf8("mFontStyleComboBox"));
        sizePolicy.setHeightForWidth(mFontStyleComboBox->sizePolicy().hasHeightForWidth());
        mFontStyleComboBox->setSizePolicy(sizePolicy);
        mFontStyleComboBox->setMinimumSize(QSize(0, 0));
        mFontStyleComboBox->setMaximumSize(QSize(16777215, 16777215));
        mFontStyleComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_3->addWidget(mFontStyleComboBox, 1, 2, 1, 1);

        mFontStyleDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mFontStyleDDBtn->setObjectName(QString::fromUtf8("mFontStyleDDBtn"));

        gridLayout_3->addWidget(mFontStyleDDBtn, 1, 4, 1, 1);

        label_5 = new QLabel(WidgetFontMarker);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 10, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(WidgetFontMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetFontMarker);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy1);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-999999999.000000000000000);
        spinOffsetX->setMaximum(999999999.000000000000000);
        spinOffsetX->setSingleStep(0.200000000000000);

        gridLayout_2->addWidget(spinOffsetX, 0, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetFontMarker);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);

        label_6 = new QLabel(WidgetFontMarker);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetFontMarker);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy1.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy1);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-999999999.000000000000000);
        spinOffsetY->setMaximum(999999999.000000000000000);
        spinOffsetY->setSingleStep(0.200000000000000);

        gridLayout_2->addWidget(spinOffsetY, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 10, 2, 1, 1);

        cboFont = new QFontComboBox(WidgetFontMarker);
        cboFont->setObjectName(QString::fromUtf8("cboFont"));
        cboFont->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        cboFont->setMinimumContentsLength(8);

        gridLayout_3->addWidget(cboFont, 0, 2, 1, 1);

        mFontFamilyDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mFontFamilyDDBtn->setObjectName(QString::fromUtf8("mFontFamilyDDBtn"));

        gridLayout_3->addWidget(mFontFamilyDDBtn, 0, 4, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetFontMarker);
        mAnchorPointLabel->setObjectName(QString::fromUtf8("mAnchorPointLabel"));

        gridLayout_3->addWidget(mAnchorPointLabel, 11, 0, 3, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mStrokeColorDDBtn->setObjectName(QString::fromUtf8("mStrokeColorDDBtn"));

        gridLayout_3->addWidget(mStrokeColorDDBtn, 4, 4, 1, 1);

        label_10 = new QLabel(WidgetFontMarker);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        label_9 = new QLabel(WidgetFontMarker);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        label_8 = new QLabel(WidgetFontMarker);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 7, 0, 1, 1);

        mHorizontalAnchorComboBox = new QComboBox(WidgetFontMarker);
        mHorizontalAnchorComboBox->setObjectName(QString::fromUtf8("mHorizontalAnchorComboBox"));

        gridLayout_3->addWidget(mHorizontalAnchorComboBox, 12, 2, 1, 1);

        label_4 = new QLabel(WidgetFontMarker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 9, 0, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetFontMarker);
        mVerticalAnchorComboBox->setObjectName(QString::fromUtf8("mVerticalAnchorComboBox"));

        gridLayout_3->addWidget(mVerticalAnchorComboBox, 11, 2, 1, 1);

        mColorDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mColorDDBtn->setObjectName(QString::fromUtf8("mColorDDBtn"));

        gridLayout_3->addWidget(mColorDDBtn, 3, 4, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mHorizontalAnchorDDBtn->setObjectName(QString::fromUtf8("mHorizontalAnchorDDBtn"));

        gridLayout_3->addWidget(mHorizontalAnchorDDBtn, 12, 4, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_3->addWidget(mOffsetDDBtn, 10, 4, 1, 1);

        spinAngle = new QgsDoubleSpinBox(WidgetFontMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setWrapping(true);
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-360.000000000000000);
        spinAngle->setMaximum(360.000000000000000);
        spinAngle->setSingleStep(0.500000000000000);

        gridLayout_3->addWidget(spinAngle, 9, 2, 1, 1);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mVerticalAnchorDDBtn->setObjectName(QString::fromUtf8("mVerticalAnchorDDBtn"));

        gridLayout_3->addWidget(mVerticalAnchorDDBtn, 11, 4, 1, 1);

        label_12 = new QLabel(WidgetFontMarker);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 15, 0, 1, 1);

        mCharLineEdit = new QLineEdit(WidgetFontMarker);
        mCharLineEdit->setObjectName(QString::fromUtf8("mCharLineEdit"));

        gridLayout_3->addWidget(mCharLineEdit, 15, 1, 1, 2);

        mCharDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mCharDDBtn->setObjectName(QString::fromUtf8("mCharDDBtn"));

        gridLayout_3->addWidget(mCharDDBtn, 15, 4, 1, 1);

        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mRotationDDBtn->setObjectName(QString::fromUtf8("mRotationDDBtn"));

        gridLayout_3->addWidget(mRotationDDBtn, 9, 4, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QgsScrollArea(WidgetFontMarker);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 158));
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 378, 158));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 2, 1);

        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 14, 0, 1, 5);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mJoinStyleDDBtn->setObjectName(QString::fromUtf8("mJoinStyleDDBtn"));

        gridLayout_3->addWidget(mJoinStyleDDBtn, 7, 4, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetFontMarker);
        mStrokeWidthLabel->setObjectName(QString::fromUtf8("mStrokeWidthLabel"));

        gridLayout_3->addWidget(mStrokeWidthLabel, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetFontMarker);
        mStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mStrokeWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy1);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(999999999.999999046325684);
        mStrokeWidthSpinBox->setSingleStep(0.200000000000000);
        mStrokeWidthSpinBox->setValue(0.200000000000000);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(mStrokeWidthSpinBox);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetFontMarker);
        mStrokeWidthUnitWidget->setObjectName(QString::fromUtf8("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mStrokeWidthUnitWidget);


        gridLayout_3->addLayout(horizontalLayout_3, 5, 2, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetFontMarker);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout_3->addWidget(cboJoinStyle, 7, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinSize = new QgsDoubleSpinBox(WidgetFontMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        sizePolicy1.setHeightForWidth(spinSize->sizePolicy().hasHeightForWidth());
        spinSize->setSizePolicy(sizePolicy1);
        spinSize->setDecimals(6);
        spinSize->setMaximum(99999999.000000000000000);
        spinSize->setSingleStep(0.200000000000000);
        spinSize->setValue(12.000000000000000);
        spinSize->setProperty("showClearButton", QVariant(false));

        horizontalLayout->addWidget(spinSize);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetFontMarker);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mSizeUnitWidget);


        gridLayout_3->addLayout(horizontalLayout, 2, 2, 1, 1);

        mSizeDDBtn = new QgsPropertyOverrideButton(WidgetFontMarker);
        mSizeDDBtn->setObjectName(QString::fromUtf8("mSizeDDBtn"));

        gridLayout_3->addWidget(mSizeDDBtn, 2, 4, 1, 1);

        mCharPreview = new QLineEdit(WidgetFontMarker);
        mCharPreview->setObjectName(QString::fromUtf8("mCharPreview"));
        mCharPreview->setReadOnly(true);

        gridLayout_3->addWidget(mCharPreview, 16, 1, 1, 2);

        label_13 = new QLabel(WidgetFontMarker);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 16, 0, 1, 1);

        QWidget::setTabOrder(cboFont, mFontFamilyDDBtn);
        QWidget::setTabOrder(mFontFamilyDDBtn, mFontStyleComboBox);
        QWidget::setTabOrder(mFontStyleComboBox, mFontStyleDDBtn);
        QWidget::setTabOrder(mFontStyleDDBtn, spinSize);
        QWidget::setTabOrder(spinSize, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mSizeDDBtn);
        QWidget::setTabOrder(mSizeDDBtn, btnColor);
        QWidget::setTabOrder(btnColor, mColorDDBtn);
        QWidget::setTabOrder(mColorDDBtn, btnStrokeColor);
        QWidget::setTabOrder(btnStrokeColor, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeWidthUnitWidget);
        QWidget::setTabOrder(mStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);
        QWidget::setTabOrder(mHorizontalAnchorDDBtn, scrollArea);
        QWidget::setTabOrder(scrollArea, mCharLineEdit);
        QWidget::setTabOrder(mCharLineEdit, mCharDDBtn);
        QWidget::setTabOrder(mCharDDBtn, mCharPreview);

        retranslateUi(WidgetFontMarker);

        QMetaObject::connectSlotsByName(WidgetFontMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetFontMarker)
    {
        btnColor->setText(QString());
        btnStrokeColor->setText(QString());
        label_2->setText(QCoreApplication::translate("WidgetFontMarker", "Size", nullptr));
        mStrokeWidthDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        lblFamily->setText(QCoreApplication::translate("WidgetFontMarker", "Font family", nullptr));
        lblStyle->setText(QCoreApplication::translate("WidgetFontMarker", "Font style", nullptr));
#if QT_CONFIG(tooltip)
        mFontStyleComboBox->setToolTip(QCoreApplication::translate("WidgetFontMarker", "Available typeface styles", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontStyleDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetFontMarker", "Offset", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetFontMarker", "x", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetFontMarker", "y", nullptr));
        mFontFamilyDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        mAnchorPointLabel->setText(QCoreApplication::translate("WidgetFontMarker", "Anchor point", nullptr));
        mStrokeColorDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        label_10->setText(QCoreApplication::translate("WidgetFontMarker", "Fill color", nullptr));
        label_9->setText(QCoreApplication::translate("WidgetFontMarker", "Stroke color", nullptr));
        label_8->setText(QCoreApplication::translate("WidgetFontMarker", "Join style", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetFontMarker", "Rotation", nullptr));
        mColorDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        mHorizontalAnchorDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        spinAngle->setSuffix(QCoreApplication::translate("WidgetFontMarker", " \302\260", nullptr));
        mVerticalAnchorDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        label_12->setText(QCoreApplication::translate("WidgetFontMarker", "Character(s)", nullptr));
#if QT_CONFIG(tooltip)
        mCharLineEdit->setToolTip(QCoreApplication::translate("WidgetFontMarker", "Type in characters directly, or enter a character's hexadecimal value.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCharDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        mRotationDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        mJoinStyleDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
        mStrokeWidthLabel->setText(QCoreApplication::translate("WidgetFontMarker", "Stroke width", nullptr));
        mStrokeWidthSpinBox->setSpecialValueText(QCoreApplication::translate("WidgetFontMarker", "No stroke", nullptr));
        mSizeDDBtn->setText(QCoreApplication::translate("WidgetFontMarker", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mCharPreview->setToolTip(QCoreApplication::translate("WidgetFontMarker", "Type in characters directly, or enter a character's hexadecimal value.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("WidgetFontMarker", "Preview", nullptr));
        (void)WidgetFontMarker;
    } // retranslateUi

};

namespace Ui {
    class WidgetFontMarker: public Ui_WidgetFontMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_FONTMARKER_H
