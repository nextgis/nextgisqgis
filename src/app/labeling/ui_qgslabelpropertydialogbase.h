/********************************************************************************
** Form generated from reading UI file 'qgslabelpropertydialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELPROPERTYDIALOGBASE_H
#define UI_QGSLABELPROPERTYDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsscalewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelPropertyDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mLabelTextLabel;
    QLineEdit *mLabelTextLineEdit;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mLabelPropertiesLayout;
    QgsCollapsibleGroupBox *mDisplayGroupBox;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QgsScaleWidget *mMinScaleWidget;
    QgsScaleWidget *mMaxScaleWidget;
    QCheckBox *mShowLabelChkbx;
    QCheckBox *mAlwaysShowChkbx;
    QgsCollapsibleGroupBox *mFontGroupBox;
    QGridLayout *gridLayout;
    QFontComboBox *mFontFamilyCmbBx;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *mFontUnderlineBtn;
    QToolButton *mFontStrikethroughBtn;
    QSpacerItem *horizontalSpacer;
    QToolButton *mFontBoldBtn;
    QToolButton *mFontItalicBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *mFontSizeLabel;
    QgsDoubleSpinBox *mFontSizeSpinBox;
    QgsColorButton *mFontColorButton;
    QHBoxLayout *horizontalLayout_22;
    QLabel *mMultiLineAlignLabel;
    QComboBox *mMultiLineAlignComboBox;
    QComboBox *mFontStyleCmbBx;
    QgsCollapsibleGroupBox *mBufferGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mBufferSizeLabel;
    QgsDoubleSpinBox *mBufferSizeSpinBox;
    QgsColorButton *mBufferColorButton;
    QCheckBox *mBufferDrawChkbx;
    QCheckBox *mShowCalloutChkbx;
    QgsCollapsibleGroupBox *mPositionGroupBlox;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *mLabelDistanceSpinBox;
    QgsDoubleSpinBox *mXCoordSpinBox;
    QComboBox *mValiComboBox;
    QLabel *mLabelDistanceLabel;
    QgsDoubleSpinBox *mYCoordSpinBox;
    QComboBox *mHaliComboBox;
    QLabel *mValiLabel;
    QLabel *mXCoordLabel;
    QLabel *mYCoordLabel;
    QLabel *mRotationLabel;
    QLabel *mHaliLabel;
    QgsDoubleSpinBox *mRotationSpinBox;
    QCheckBox *mLabelAllPartsCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLabelPropertyDialogBase)
    {
        if (QgsLabelPropertyDialogBase->objectName().isEmpty())
            QgsLabelPropertyDialogBase->setObjectName(QString::fromUtf8("QgsLabelPropertyDialogBase"));
        QgsLabelPropertyDialogBase->resize(451, 703);
        verticalLayout_2 = new QVBoxLayout(QgsLabelPropertyDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mLabelTextLabel = new QLabel(QgsLabelPropertyDialogBase);
        mLabelTextLabel->setObjectName(QString::fromUtf8("mLabelTextLabel"));

        horizontalLayout_3->addWidget(mLabelTextLabel);

        mLabelTextLineEdit = new QLineEdit(QgsLabelPropertyDialogBase);
        mLabelTextLineEdit->setObjectName(QString::fromUtf8("mLabelTextLineEdit"));

        horizontalLayout_3->addWidget(mLabelTextLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        scrollArea = new QgsScrollArea(QgsLabelPropertyDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 419, 731));
        mLabelPropertiesLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mLabelPropertiesLayout->setObjectName(QString::fromUtf8("mLabelPropertiesLayout"));
        mLabelPropertiesLayout->setContentsMargins(0, 0, 0, 0);
        mDisplayGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mDisplayGroupBox->setObjectName(QString::fromUtf8("mDisplayGroupBox"));
        gridLayout_5 = new QGridLayout(mDisplayGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(mDisplayGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label);

        mMinScaleWidget = new QgsScaleWidget(mDisplayGroupBox);
        mMinScaleWidget->setObjectName(QString::fromUtf8("mMinScaleWidget"));
        mMinScaleWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(mMinScaleWidget);

        mMaxScaleWidget = new QgsScaleWidget(mDisplayGroupBox);
        mMaxScaleWidget->setObjectName(QString::fromUtf8("mMaxScaleWidget"));
        mMaxScaleWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(mMaxScaleWidget);


        gridLayout_5->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        mShowLabelChkbx = new QCheckBox(mDisplayGroupBox);
        mShowLabelChkbx->setObjectName(QString::fromUtf8("mShowLabelChkbx"));

        gridLayout_5->addWidget(mShowLabelChkbx, 0, 0, 1, 1);

        mAlwaysShowChkbx = new QCheckBox(mDisplayGroupBox);
        mAlwaysShowChkbx->setObjectName(QString::fromUtf8("mAlwaysShowChkbx"));

        gridLayout_5->addWidget(mAlwaysShowChkbx, 3, 0, 1, 1);


        mLabelPropertiesLayout->addWidget(mDisplayGroupBox);

        mFontGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mFontGroupBox->setObjectName(QString::fromUtf8("mFontGroupBox"));
        gridLayout = new QGridLayout(mFontGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFontFamilyCmbBx = new QFontComboBox(mFontGroupBox);
        mFontFamilyCmbBx->setObjectName(QString::fromUtf8("mFontFamilyCmbBx"));

        gridLayout->addWidget(mFontFamilyCmbBx, 0, 0, 1, 3);

        label_3 = new QLabel(mFontGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mFontUnderlineBtn = new QToolButton(mFontGroupBox);
        mFontUnderlineBtn->setObjectName(QString::fromUtf8("mFontUnderlineBtn"));
        mFontUnderlineBtn->setEnabled(true);
        mFontUnderlineBtn->setMinimumSize(QSize(24, 24));
        mFontUnderlineBtn->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setPointSize(13);
        font.setUnderline(true);
        mFontUnderlineBtn->setFont(font);
        mFontUnderlineBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontUnderlineBtn);

        mFontStrikethroughBtn = new QToolButton(mFontGroupBox);
        mFontStrikethroughBtn->setObjectName(QString::fromUtf8("mFontStrikethroughBtn"));
        mFontStrikethroughBtn->setEnabled(true);
        mFontStrikethroughBtn->setMinimumSize(QSize(24, 24));
        mFontStrikethroughBtn->setMaximumSize(QSize(24, 24));
        QFont font1;
        font1.setPointSize(13);
        font1.setStrikeOut(true);
        mFontStrikethroughBtn->setFont(font1);
        mFontStrikethroughBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontStrikethroughBtn);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mFontBoldBtn = new QToolButton(mFontGroupBox);
        mFontBoldBtn->setObjectName(QString::fromUtf8("mFontBoldBtn"));
        mFontBoldBtn->setEnabled(false);
        mFontBoldBtn->setMinimumSize(QSize(24, 24));
        mFontBoldBtn->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(13);
        mFontBoldBtn->setFont(font2);
        mFontBoldBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontBoldBtn);

        mFontItalicBtn = new QToolButton(mFontGroupBox);
        mFontItalicBtn->setObjectName(QString::fromUtf8("mFontItalicBtn"));
        mFontItalicBtn->setEnabled(false);
        mFontItalicBtn->setMinimumSize(QSize(24, 24));
        mFontItalicBtn->setMaximumSize(QSize(24, 24));
        QFont font3;
        font3.setPointSize(13);
        font3.setItalic(true);
        mFontItalicBtn->setFont(font3);
        mFontItalicBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontItalicBtn);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFontSizeLabel = new QLabel(mFontGroupBox);
        mFontSizeLabel->setObjectName(QString::fromUtf8("mFontSizeLabel"));
        sizePolicy.setHeightForWidth(mFontSizeLabel->sizePolicy().hasHeightForWidth());
        mFontSizeLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mFontSizeLabel);

        mFontSizeSpinBox = new QgsDoubleSpinBox(mFontGroupBox);
        mFontSizeSpinBox->setObjectName(QString::fromUtf8("mFontSizeSpinBox"));
        mFontSizeSpinBox->setMinimum(0.000000000000000);
        mFontSizeSpinBox->setMaximum(999999.000000000000000);
        mFontSizeSpinBox->setValue(0.000000000000000);
        mFontSizeSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout->addWidget(mFontSizeSpinBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        mFontColorButton = new QgsColorButton(mFontGroupBox);
        mFontColorButton->setObjectName(QString::fromUtf8("mFontColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFontColorButton->sizePolicy().hasHeightForWidth());
        mFontColorButton->setSizePolicy(sizePolicy1);
        mFontColorButton->setMinimumSize(QSize(120, 0));
        mFontColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mFontColorButton, 3, 2, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        mMultiLineAlignLabel = new QLabel(mFontGroupBox);
        mMultiLineAlignLabel->setObjectName(QString::fromUtf8("mMultiLineAlignLabel"));
        sizePolicy.setHeightForWidth(mMultiLineAlignLabel->sizePolicy().hasHeightForWidth());
        mMultiLineAlignLabel->setSizePolicy(sizePolicy);

        horizontalLayout_22->addWidget(mMultiLineAlignLabel);

        mMultiLineAlignComboBox = new QComboBox(mFontGroupBox);
        mMultiLineAlignComboBox->setObjectName(QString::fromUtf8("mMultiLineAlignComboBox"));

        horizontalLayout_22->addWidget(mMultiLineAlignComboBox);


        gridLayout->addLayout(horizontalLayout_22, 4, 0, 1, 3);

        mFontStyleCmbBx = new QComboBox(mFontGroupBox);
        mFontStyleCmbBx->setObjectName(QString::fromUtf8("mFontStyleCmbBx"));

        gridLayout->addWidget(mFontStyleCmbBx, 1, 1, 1, 2);


        mLabelPropertiesLayout->addWidget(mFontGroupBox);

        mBufferGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mBufferGroupBox->setObjectName(QString::fromUtf8("mBufferGroupBox"));
        mBufferGroupBox->setCheckable(false);
        mBufferGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(mBufferGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mBufferSizeLabel = new QLabel(mBufferGroupBox);
        mBufferSizeLabel->setObjectName(QString::fromUtf8("mBufferSizeLabel"));
        sizePolicy.setHeightForWidth(mBufferSizeLabel->sizePolicy().hasHeightForWidth());
        mBufferSizeLabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(mBufferSizeLabel);

        mBufferSizeSpinBox = new QgsDoubleSpinBox(mBufferGroupBox);
        mBufferSizeSpinBox->setObjectName(QString::fromUtf8("mBufferSizeSpinBox"));
        mBufferSizeSpinBox->setMinimum(-1.000000000000000);
        mBufferSizeSpinBox->setMaximum(999999.000000000000000);
        mBufferSizeSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(mBufferSizeSpinBox);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        mBufferColorButton = new QgsColorButton(mBufferGroupBox);
        mBufferColorButton->setObjectName(QString::fromUtf8("mBufferColorButton"));
        sizePolicy1.setHeightForWidth(mBufferColorButton->sizePolicy().hasHeightForWidth());
        mBufferColorButton->setSizePolicy(sizePolicy1);
        mBufferColorButton->setMinimumSize(QSize(120, 0));
        mBufferColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(mBufferColorButton, 1, 1, 1, 1);

        mBufferDrawChkbx = new QCheckBox(mBufferGroupBox);
        mBufferDrawChkbx->setObjectName(QString::fromUtf8("mBufferDrawChkbx"));

        gridLayout_2->addWidget(mBufferDrawChkbx, 0, 0, 1, 1);


        mLabelPropertiesLayout->addWidget(mBufferGroupBox);

        mShowCalloutChkbx = new QCheckBox(scrollAreaWidgetContents);
        mShowCalloutChkbx->setObjectName(QString::fromUtf8("mShowCalloutChkbx"));
        mShowCalloutChkbx->setChecked(true);

        mLabelPropertiesLayout->addWidget(mShowCalloutChkbx);

        mPositionGroupBlox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mPositionGroupBlox->setObjectName(QString::fromUtf8("mPositionGroupBlox"));
        gridLayout_3 = new QGridLayout(mPositionGroupBlox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mLabelDistanceSpinBox = new QgsDoubleSpinBox(mPositionGroupBlox);
        mLabelDistanceSpinBox->setObjectName(QString::fromUtf8("mLabelDistanceSpinBox"));
        mLabelDistanceSpinBox->setMinimum(-1.000000000000000);
        mLabelDistanceSpinBox->setMaximum(999999.000000000000000);
        mLabelDistanceSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_3->addWidget(mLabelDistanceSpinBox, 0, 1, 1, 1);

        mXCoordSpinBox = new QgsDoubleSpinBox(mPositionGroupBlox);
        mXCoordSpinBox->setObjectName(QString::fromUtf8("mXCoordSpinBox"));
        mXCoordSpinBox->setMinimum(-999999999.000000000000000);
        mXCoordSpinBox->setMaximum(999999999.000000000000000);
        mXCoordSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_3->addWidget(mXCoordSpinBox, 1, 1, 1, 1);

        mValiComboBox = new QComboBox(mPositionGroupBlox);
        mValiComboBox->setObjectName(QString::fromUtf8("mValiComboBox"));

        gridLayout_3->addWidget(mValiComboBox, 4, 1, 1, 1);

        mLabelDistanceLabel = new QLabel(mPositionGroupBlox);
        mLabelDistanceLabel->setObjectName(QString::fromUtf8("mLabelDistanceLabel"));
        sizePolicy.setHeightForWidth(mLabelDistanceLabel->sizePolicy().hasHeightForWidth());
        mLabelDistanceLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mLabelDistanceLabel, 0, 0, 1, 1);

        mYCoordSpinBox = new QgsDoubleSpinBox(mPositionGroupBlox);
        mYCoordSpinBox->setObjectName(QString::fromUtf8("mYCoordSpinBox"));
        mYCoordSpinBox->setMinimum(-999999999.000000000000000);
        mYCoordSpinBox->setMaximum(999999999.000000000000000);
        mYCoordSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_3->addWidget(mYCoordSpinBox, 2, 1, 1, 1);

        mHaliComboBox = new QComboBox(mPositionGroupBlox);
        mHaliComboBox->setObjectName(QString::fromUtf8("mHaliComboBox"));

        gridLayout_3->addWidget(mHaliComboBox, 3, 1, 1, 1);

        mValiLabel = new QLabel(mPositionGroupBlox);
        mValiLabel->setObjectName(QString::fromUtf8("mValiLabel"));
        sizePolicy.setHeightForWidth(mValiLabel->sizePolicy().hasHeightForWidth());
        mValiLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mValiLabel, 4, 0, 1, 1);

        mXCoordLabel = new QLabel(mPositionGroupBlox);
        mXCoordLabel->setObjectName(QString::fromUtf8("mXCoordLabel"));
        sizePolicy.setHeightForWidth(mXCoordLabel->sizePolicy().hasHeightForWidth());
        mXCoordLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mXCoordLabel, 1, 0, 1, 1);

        mYCoordLabel = new QLabel(mPositionGroupBlox);
        mYCoordLabel->setObjectName(QString::fromUtf8("mYCoordLabel"));
        sizePolicy.setHeightForWidth(mYCoordLabel->sizePolicy().hasHeightForWidth());
        mYCoordLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mYCoordLabel, 2, 0, 1, 1);

        mRotationLabel = new QLabel(mPositionGroupBlox);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));
        sizePolicy.setHeightForWidth(mRotationLabel->sizePolicy().hasHeightForWidth());
        mRotationLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mRotationLabel, 5, 0, 1, 1);

        mHaliLabel = new QLabel(mPositionGroupBlox);
        mHaliLabel->setObjectName(QString::fromUtf8("mHaliLabel"));
        sizePolicy.setHeightForWidth(mHaliLabel->sizePolicy().hasHeightForWidth());
        mHaliLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mHaliLabel, 3, 0, 1, 1);

        mRotationSpinBox = new QgsDoubleSpinBox(mPositionGroupBlox);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360.000000000000000);
        mRotationSpinBox->setMaximum(360.000000000000000);
        mRotationSpinBox->setProperty("showClearButton", QVariant(true));

        gridLayout_3->addWidget(mRotationSpinBox, 5, 1, 1, 1);

        mLabelAllPartsCheckBox = new QCheckBox(mPositionGroupBlox);
        mLabelAllPartsCheckBox->setObjectName(QString::fromUtf8("mLabelAllPartsCheckBox"));
        mLabelAllPartsCheckBox->setChecked(false);

        gridLayout_3->addWidget(mLabelAllPartsCheckBox, 6, 0, 1, 2);


        mLabelPropertiesLayout->addWidget(mPositionGroupBlox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLabelPropertiesLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(QgsLabelPropertyDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(mLabelTextLineEdit, scrollArea);
        QWidget::setTabOrder(scrollArea, mShowLabelChkbx);
        QWidget::setTabOrder(mShowLabelChkbx, mMinScaleWidget);
        QWidget::setTabOrder(mMinScaleWidget, mMaxScaleWidget);
        QWidget::setTabOrder(mMaxScaleWidget, mAlwaysShowChkbx);
        QWidget::setTabOrder(mAlwaysShowChkbx, mFontFamilyCmbBx);
        QWidget::setTabOrder(mFontFamilyCmbBx, mFontStyleCmbBx);
        QWidget::setTabOrder(mFontStyleCmbBx, mFontUnderlineBtn);
        QWidget::setTabOrder(mFontUnderlineBtn, mFontStrikethroughBtn);
        QWidget::setTabOrder(mFontStrikethroughBtn, mFontBoldBtn);
        QWidget::setTabOrder(mFontBoldBtn, mFontItalicBtn);
        QWidget::setTabOrder(mFontItalicBtn, mFontSizeSpinBox);
        QWidget::setTabOrder(mFontSizeSpinBox, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mMultiLineAlignComboBox);
        QWidget::setTabOrder(mMultiLineAlignComboBox, mBufferDrawChkbx);
        QWidget::setTabOrder(mBufferDrawChkbx, mBufferSizeSpinBox);
        QWidget::setTabOrder(mBufferSizeSpinBox, mBufferColorButton);
        QWidget::setTabOrder(mBufferColorButton, mShowCalloutChkbx);
        QWidget::setTabOrder(mShowCalloutChkbx, mLabelDistanceSpinBox);
        QWidget::setTabOrder(mLabelDistanceSpinBox, mXCoordSpinBox);
        QWidget::setTabOrder(mXCoordSpinBox, mYCoordSpinBox);
        QWidget::setTabOrder(mYCoordSpinBox, mHaliComboBox);
        QWidget::setTabOrder(mHaliComboBox, mValiComboBox);
        QWidget::setTabOrder(mValiComboBox, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mLabelAllPartsCheckBox);

        retranslateUi(QgsLabelPropertyDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLabelPropertyDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLabelPropertyDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLabelPropertyDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLabelPropertyDialogBase)
    {
        QgsLabelPropertyDialogBase->setWindowTitle(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Label Properties", nullptr));
        mLabelTextLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Text", nullptr));
        mDisplayGroupBox->setTitle(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Display", nullptr));
        label->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Scale-based", nullptr));
#if QT_CONFIG(tooltip)
        mMinScaleWidget->setToolTip(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Minimum scale, i.e. most \"zoomed out\".", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mMaxScaleWidget->setToolTip(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Minimum scale, i.e. most \"zoomed out\".", nullptr));
#endif // QT_CONFIG(tooltip)
        mShowLabelChkbx->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Show label", nullptr));
#if QT_CONFIG(tooltip)
        mAlwaysShowChkbx->setToolTip(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Ignores priority and permits collisions/overlaps", nullptr));
#endif // QT_CONFIG(tooltip)
        mAlwaysShowChkbx->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Always show (exceptions above)", nullptr));
        mFontGroupBox->setTitle(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Font", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Style", nullptr));
#if QT_CONFIG(tooltip)
        mFontUnderlineBtn->setToolTip(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Underlined text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontUnderlineBtn->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "U", nullptr));
#if QT_CONFIG(tooltip)
        mFontStrikethroughBtn->setToolTip(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Strikeout text", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontStrikethroughBtn->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "S", nullptr));
#if QT_CONFIG(tooltip)
        mFontBoldBtn->setToolTip(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Bold text\n"
"(data defined only, overrides Style)", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontBoldBtn->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "B", nullptr));
#if QT_CONFIG(tooltip)
        mFontItalicBtn->setToolTip(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Italic text\n"
"(data defined only, overrides Style)", nullptr));
#endif // QT_CONFIG(tooltip)
        mFontItalicBtn->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "I", nullptr));
        mFontSizeLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Size", nullptr));
        mFontSizeSpinBox->setSpecialValueText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Default", nullptr));
        mFontColorButton->setText(QString());
        mMultiLineAlignLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Multiline alignment", nullptr));
#if QT_CONFIG(tooltip)
        mFontStyleCmbBx->setToolTip(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Available typeface styles", nullptr));
#endif // QT_CONFIG(tooltip)
        mBufferGroupBox->setTitle(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Buffer", nullptr));
        mBufferSizeLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Size", nullptr));
        mBufferColorButton->setText(QString());
        mBufferDrawChkbx->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Draw text buffer", nullptr));
        mShowCalloutChkbx->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Show callout", nullptr));
        mPositionGroupBlox->setTitle(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Position", nullptr));
        mLabelDistanceSpinBox->setSpecialValueText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Default", nullptr));
        mXCoordSpinBox->setSpecialValueText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Default", nullptr));
        mLabelDistanceLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Label distance", nullptr));
        mYCoordSpinBox->setSpecialValueText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Default", nullptr));
        mValiLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Vertical alignment", nullptr));
        mXCoordLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "X Coordinate", nullptr));
        mYCoordLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Y Coordinate", nullptr));
        mRotationLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Rotation", nullptr));
        mHaliLabel->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Horizontal alignment", nullptr));
        mRotationSpinBox->setSpecialValueText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Default", nullptr));
        mRotationSpinBox->setSuffix(QCoreApplication::translate("QgsLabelPropertyDialogBase", "\313\232", nullptr));
        mLabelAllPartsCheckBox->setText(QCoreApplication::translate("QgsLabelPropertyDialogBase", "Label every part of feature", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelPropertyDialogBase: public Ui_QgsLabelPropertyDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELPROPERTYDIALOGBASE_H
