/********************************************************************************
** Form generated from reading UI file 'qgslayoutpagepropertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTPAGEPROPERTIESWIDGET_H
#define UI_QGSLAYOUTPAGEPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsratiolockbutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutPagePropertiesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mTitleLabel;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *mWidthLabel;
    QGridLayout *gridLayout_3;
    QgsLayoutUnitsComboBox *mSizeUnitsComboBox;
    QgsDoubleSpinBox *mHeightSpin;
    QgsDoubleSpinBox *mWidthSpin;
    QHBoxLayout *_2;
    QgsRatioLockButton *mLockAspectRatio;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QgsPropertyOverrideButton *mHeightDDBtn;
    QLabel *mHeightLabel;
    QHBoxLayout *horizontalLayout;
    QComboBox *mPageSizeComboBox;
    QgsPropertyOverrideButton *mPaperSizeDDBtn;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mPageOrientationComboBox;
    QgsPropertyOverrideButton *mOrientationDDBtn;
    QLabel *label_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mExcludePageCheckBox;
    QgsPropertyOverrideButton *mExcludePageDDBtn;
    QSpacerItem *horizontalSpacer;
    QgsSymbolButton *mSymbolButton;
    QSpacerItem *verticalSpacer;
    QPushButton *mApplyToAllButton;

    void setupUi(QWidget *QgsLayoutPagePropertiesWidget)
    {
        if (QgsLayoutPagePropertiesWidget->objectName().isEmpty())
            QgsLayoutPagePropertiesWidget->setObjectName(QString::fromUtf8("QgsLayoutPagePropertiesWidget"));
        QgsLayoutPagePropertiesWidget->resize(407, 405);
        verticalLayout = new QVBoxLayout(QgsLayoutPagePropertiesWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mTitleLabel = new QLabel(QgsLayoutPagePropertiesWidget);
        mTitleLabel->setObjectName(QString::fromUtf8("mTitleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTitleLabel->sizePolicy().hasHeightForWidth());
        mTitleLabel->setSizePolicy(sizePolicy);
        mTitleLabel->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout->addWidget(mTitleLabel);

        frame = new QFrame(QgsLayoutPagePropertiesWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mWidthLabel = new QLabel(groupBox);
        mWidthLabel->setObjectName(QString::fromUtf8("mWidthLabel"));

        gridLayout->addWidget(mWidthLabel, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mSizeUnitsComboBox = new QgsLayoutUnitsComboBox(groupBox);
        mSizeUnitsComboBox->setObjectName(QString::fromUtf8("mSizeUnitsComboBox"));

        gridLayout_3->addWidget(mSizeUnitsComboBox, 0, 5, 2, 1);

        mHeightSpin = new QgsDoubleSpinBox(groupBox);
        mHeightSpin->setObjectName(QString::fromUtf8("mHeightSpin"));
        mHeightSpin->setDecimals(3);
        mHeightSpin->setMaximum(9999999.000000000000000);
        mHeightSpin->setValue(100.000000000000000);
        mHeightSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mHeightSpin, 1, 0, 1, 3);

        mWidthSpin = new QgsDoubleSpinBox(groupBox);
        mWidthSpin->setObjectName(QString::fromUtf8("mWidthSpin"));
        mWidthSpin->setDecimals(3);
        mWidthSpin->setMaximum(9999999.000000000000000);
        mWidthSpin->setValue(100.000000000000000);
        mWidthSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mWidthSpin, 0, 0, 1, 3);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(groupBox);
        mLockAspectRatio->setObjectName(QString::fromUtf8("mLockAspectRatio"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy1);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mLockAspectRatio);


        gridLayout_3->addLayout(_2, 0, 4, 2, 1);

        mWidthDDBtn = new QgsPropertyOverrideButton(groupBox);
        mWidthDDBtn->setObjectName(QString::fromUtf8("mWidthDDBtn"));

        gridLayout_3->addWidget(mWidthDDBtn, 0, 3, 1, 1);

        mHeightDDBtn = new QgsPropertyOverrideButton(groupBox);
        mHeightDDBtn->setObjectName(QString::fromUtf8("mHeightDDBtn"));

        gridLayout_3->addWidget(mHeightDDBtn, 1, 3, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout->addLayout(gridLayout_3, 3, 1, 2, 1);

        mHeightLabel = new QLabel(groupBox);
        mHeightLabel->setObjectName(QString::fromUtf8("mHeightLabel"));

        gridLayout->addWidget(mHeightLabel, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mPageSizeComboBox = new QComboBox(groupBox);
        mPageSizeComboBox->setObjectName(QString::fromUtf8("mPageSizeComboBox"));

        horizontalLayout->addWidget(mPageSizeComboBox);

        mPaperSizeDDBtn = new QgsPropertyOverrideButton(groupBox);
        mPaperSizeDDBtn->setObjectName(QString::fromUtf8("mPaperSizeDDBtn"));

        horizontalLayout->addWidget(mPaperSizeDDBtn);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mPageOrientationComboBox = new QComboBox(groupBox);
        mPageOrientationComboBox->setObjectName(QString::fromUtf8("mPageOrientationComboBox"));

        horizontalLayout_3->addWidget(mPageOrientationComboBox);

        mOrientationDDBtn = new QgsPropertyOverrideButton(groupBox);
        mOrientationDDBtn->setObjectName(QString::fromUtf8("mOrientationDDBtn"));

        horizontalLayout_3->addWidget(mOrientationDDBtn);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mExcludePageCheckBox = new QCheckBox(frame);
        mExcludePageCheckBox->setObjectName(QString::fromUtf8("mExcludePageCheckBox"));
        mExcludePageCheckBox->setChecked(false);

        horizontalLayout_2->addWidget(mExcludePageCheckBox);

        mExcludePageDDBtn = new QgsPropertyOverrideButton(frame);
        mExcludePageDDBtn->setObjectName(QString::fromUtf8("mExcludePageDDBtn"));

        horizontalLayout_2->addWidget(mExcludePageDDBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        mSymbolButton = new QgsSymbolButton(frame);
        mSymbolButton->setObjectName(QString::fromUtf8("mSymbolButton"));
        mSymbolButton->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSymbolButton->sizePolicy().hasHeightForWidth());
        mSymbolButton->setSizePolicy(sizePolicy2);
        mSymbolButton->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(mSymbolButton, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 1, 1, 1);

        mApplyToAllButton = new QPushButton(frame);
        mApplyToAllButton->setObjectName(QString::fromUtf8("mApplyToAllButton"));

        gridLayout_2->addWidget(mApplyToAllButton, 2, 0, 1, 2);


        verticalLayout->addWidget(frame);

        QWidget::setTabOrder(mPageSizeComboBox, mPaperSizeDDBtn);
        QWidget::setTabOrder(mPaperSizeDDBtn, mPageOrientationComboBox);
        QWidget::setTabOrder(mPageOrientationComboBox, mOrientationDDBtn);
        QWidget::setTabOrder(mOrientationDDBtn, mWidthSpin);
        QWidget::setTabOrder(mWidthSpin, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, mHeightSpin);
        QWidget::setTabOrder(mHeightSpin, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mLockAspectRatio);
        QWidget::setTabOrder(mLockAspectRatio, mSizeUnitsComboBox);
        QWidget::setTabOrder(mSizeUnitsComboBox, mExcludePageCheckBox);
        QWidget::setTabOrder(mExcludePageCheckBox, mExcludePageDDBtn);

        retranslateUi(QgsLayoutPagePropertiesWidget);

        QMetaObject::connectSlotsByName(QgsLayoutPagePropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutPagePropertiesWidget)
    {
        QgsLayoutPagePropertiesWidget->setWindowTitle(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "New Item Properties", nullptr));
        mTitleLabel->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Page", nullptr));
        groupBox->setTitle(QString());
        mWidthLabel->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Width", nullptr));
        mHeightSpin->setSuffix(QString());
        mWidthSpin->setSuffix(QString());
#if QT_CONFIG(tooltip)
        mLockAspectRatio->setToolTip(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Lock aspect ratio (including while drawing extent onto canvas)", nullptr));
#endif // QT_CONFIG(tooltip)
        mWidthDDBtn->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", nullptr));
        mHeightDDBtn->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", nullptr));
        mHeightLabel->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Height", nullptr));
        mPaperSizeDDBtn->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Size", nullptr));
        mOrientationDDBtn->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Orientation", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Background", nullptr));
#if QT_CONFIG(tooltip)
        mExcludePageCheckBox->setToolTip(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "If checked, this page will not be included when exporting the layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mExcludePageCheckBox->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Exclude page from exports", nullptr));
        mExcludePageDDBtn->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "\342\200\246", nullptr));
        mSymbolButton->setText(QString());
#if QT_CONFIG(tooltip)
        mApplyToAllButton->setToolTip(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Resets all other pages' size and background color to match this page", nullptr));
#endif // QT_CONFIG(tooltip)
        mApplyToAllButton->setText(QCoreApplication::translate("QgsLayoutPagePropertiesWidget", "Apply to all Pages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutPagePropertiesWidget: public Ui_QgsLayoutPagePropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTPAGEPROPERTIESWIDGET_H
