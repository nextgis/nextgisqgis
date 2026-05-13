/********************************************************************************
** Form generated from reading UI file 'widget_rastermarker.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_RASTERMARKER_H
#define UI_WIDGET_RASTERMARKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"
#include "qgsopacitywidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsratiolockbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetRasterMarker
{
public:
    QGridLayout *gridLayout_2;
    QLabel *mAnchorPointLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mLabelImagePreview;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QgsDoubleSpinBox *mSpinOffsetX;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label_4;
    QgsDoubleSpinBox *mSpinOffsetY;
    QGridLayout *gridLayout_3;
    QHBoxLayout *_2;
    QgsRatioLockButton *mLockAspectRatio;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QgsPropertyOverrideButton *mHeightDDBtn;
    QLabel *label_10;
    QgsDoubleSpinBox *mWidthSpinBox;
    QgsDoubleSpinBox *mHeightSpinBox;
    QLabel *label_11;
    QLabel *label_13;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QComboBox *mHorizontalAnchorComboBox;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QLabel *mRotationLabel;
    QgsPropertyOverrideButton *mFilenameDDBtn;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsImageSourceLineEdit *mImageSourceLineEdit;
    QgsOpacityWidget *mOpacityWidget;
    QLabel *mTextureWidthLabel;
    QLabel *label;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QComboBox *mVerticalAnchorComboBox;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QLabel *label_7;
    QgsDoubleSpinBox *mRotationSpinBox;
    QgsPropertyOverrideButton *mOpacityDDBtn;

    void setupUi(QWidget *WidgetRasterMarker)
    {
        if (WidgetRasterMarker->objectName().isEmpty())
            WidgetRasterMarker->setObjectName(QString::fromUtf8("WidgetRasterMarker"));
        WidgetRasterMarker->resize(372, 495);
        WidgetRasterMarker->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(WidgetRasterMarker);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mAnchorPointLabel = new QLabel(WidgetRasterMarker);
        mAnchorPointLabel->setObjectName(QString::fromUtf8("mAnchorPointLabel"));

        gridLayout_2->addWidget(mAnchorPointLabel, 9, 0, 2, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        mLabelImagePreview = new QLabel(WidgetRasterMarker);
        mLabelImagePreview->setObjectName(QString::fromUtf8("mLabelImagePreview"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelImagePreview->sizePolicy().hasHeightForWidth());
        mLabelImagePreview->setSizePolicy(sizePolicy);
        mLabelImagePreview->setMinimumSize(QSize(150, 150));
        mLabelImagePreview->setFrameShape(QFrame::Panel);
        mLabelImagePreview->setFrameShadow(QFrame::Sunken);
        mLabelImagePreview->setLineWidth(1);
        mLabelImagePreview->setMidLineWidth(0);

        horizontalLayout_4->addWidget(mLabelImagePreview);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 11, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(WidgetRasterMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mSpinOffsetX = new QgsDoubleSpinBox(WidgetRasterMarker);
        mSpinOffsetX->setObjectName(QString::fromUtf8("mSpinOffsetX"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSpinOffsetX->sizePolicy().hasHeightForWidth());
        mSpinOffsetX->setSizePolicy(sizePolicy1);
        mSpinOffsetX->setDecimals(6);
        mSpinOffsetX->setMinimum(-99999999.989999994635582);
        mSpinOffsetX->setMaximum(99999999.989999994635582);
        mSpinOffsetX->setSingleStep(0.200000000000000);

        gridLayout->addWidget(mSpinOffsetX, 0, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetRasterMarker);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);

        label_4 = new QLabel(WidgetRasterMarker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        mSpinOffsetY = new QgsDoubleSpinBox(WidgetRasterMarker);
        mSpinOffsetY->setObjectName(QString::fromUtf8("mSpinOffsetY"));
        sizePolicy1.setHeightForWidth(mSpinOffsetY->sizePolicy().hasHeightForWidth());
        mSpinOffsetY->setSizePolicy(sizePolicy1);
        mSpinOffsetY->setDecimals(6);
        mSpinOffsetY->setMinimum(-99999999.989999994635582);
        mSpinOffsetY->setMaximum(99999999.989999994635582);
        mSpinOffsetY->setSingleStep(0.200000000000000);

        gridLayout->addWidget(mSpinOffsetY, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 8, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(WidgetRasterMarker);
        mLockAspectRatio->setObjectName(QString::fromUtf8("mLockAspectRatio"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy2);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mLockAspectRatio);


        gridLayout_3->addLayout(_2, 0, 2, 2, 1);

        mWidthDDBtn = new QgsPropertyOverrideButton(WidgetRasterMarker);
        mWidthDDBtn->setObjectName(QString::fromUtf8("mWidthDDBtn"));

        gridLayout_3->addWidget(mWidthDDBtn, 0, 3, 1, 1);

        mHeightDDBtn = new QgsPropertyOverrideButton(WidgetRasterMarker);
        mHeightDDBtn->setObjectName(QString::fromUtf8("mHeightDDBtn"));

        gridLayout_3->addWidget(mHeightDDBtn, 1, 3, 1, 1);

        label_10 = new QLabel(WidgetRasterMarker);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        mWidthSpinBox = new QgsDoubleSpinBox(WidgetRasterMarker);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mWidthSpinBox->sizePolicy().hasHeightForWidth());
        mWidthSpinBox->setSizePolicy(sizePolicy3);
        mWidthSpinBox->setDecimals(6);
        mWidthSpinBox->setMaximum(100000.000000000000000);
        mWidthSpinBox->setSingleStep(0.200000000000000);
        mWidthSpinBox->setValue(1.000000000000000);
        mWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mWidthSpinBox, 0, 1, 1, 1);

        mHeightSpinBox = new QgsDoubleSpinBox(WidgetRasterMarker);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        sizePolicy3.setHeightForWidth(mHeightSpinBox->sizePolicy().hasHeightForWidth());
        mHeightSpinBox->setSizePolicy(sizePolicy3);
        mHeightSpinBox->setDecimals(6);
        mHeightSpinBox->setMaximum(100000.000000000000000);
        mHeightSpinBox->setSingleStep(0.200000000000000);
        mHeightSpinBox->setValue(1.000000000000000);
        mHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mHeightSpinBox, 1, 1, 1, 1);

        label_11 = new QLabel(WidgetRasterMarker);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        label_13 = new QLabel(WidgetRasterMarker);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetRasterMarker);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(mSizeUnitWidget, 2, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout_3, 3, 1, 1, 2);

        mHorizontalAnchorComboBox = new QComboBox(WidgetRasterMarker);
        mHorizontalAnchorComboBox->setObjectName(QString::fromUtf8("mHorizontalAnchorComboBox"));

        gridLayout_2->addWidget(mHorizontalAnchorComboBox, 10, 1, 1, 1);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetRasterMarker);
        mVerticalAnchorDDBtn->setObjectName(QString::fromUtf8("mVerticalAnchorDDBtn"));

        gridLayout_2->addWidget(mVerticalAnchorDDBtn, 9, 2, 1, 1);

        mRotationLabel = new QLabel(WidgetRasterMarker);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout_2->addWidget(mRotationLabel, 5, 0, 1, 1);

        mFilenameDDBtn = new QgsPropertyOverrideButton(WidgetRasterMarker);
        mFilenameDDBtn->setObjectName(QString::fromUtf8("mFilenameDDBtn"));

        gridLayout_2->addWidget(mFilenameDDBtn, 1, 2, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetRasterMarker);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 8, 2, 1, 1);

        mImageSourceLineEdit = new QgsImageSourceLineEdit(WidgetRasterMarker);
        mImageSourceLineEdit->setObjectName(QString::fromUtf8("mImageSourceLineEdit"));
        mImageSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mImageSourceLineEdit, 1, 0, 1, 2);

        mOpacityWidget = new QgsOpacityWidget(WidgetRasterMarker);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOpacityWidget, 4, 1, 1, 1);

        mTextureWidthLabel = new QLabel(WidgetRasterMarker);
        mTextureWidthLabel->setObjectName(QString::fromUtf8("mTextureWidthLabel"));

        gridLayout_2->addWidget(mTextureWidthLabel, 3, 0, 1, 1);

        label = new QLabel(WidgetRasterMarker);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetRasterMarker);
        mHorizontalAnchorDDBtn->setObjectName(QString::fromUtf8("mHorizontalAnchorDDBtn"));

        gridLayout_2->addWidget(mHorizontalAnchorDDBtn, 10, 2, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetRasterMarker);
        mVerticalAnchorComboBox->setObjectName(QString::fromUtf8("mVerticalAnchorComboBox"));

        gridLayout_2->addWidget(mVerticalAnchorComboBox, 9, 1, 1, 1);

        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetRasterMarker);
        mRotationDDBtn->setObjectName(QString::fromUtf8("mRotationDDBtn"));

        gridLayout_2->addWidget(mRotationDDBtn, 5, 2, 1, 1);

        label_7 = new QLabel(WidgetRasterMarker);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 8, 0, 1, 1);

        mRotationSpinBox = new QgsDoubleSpinBox(WidgetRasterMarker);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mRotationSpinBox->sizePolicy().hasHeightForWidth());
        mRotationSpinBox->setSizePolicy(sizePolicy4);
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360.000000000000000);
        mRotationSpinBox->setMaximum(360.000000000000000);
        mRotationSpinBox->setSingleStep(0.500000000000000);

        gridLayout_2->addWidget(mRotationSpinBox, 5, 1, 1, 1);

        mOpacityDDBtn = new QgsPropertyOverrideButton(WidgetRasterMarker);
        mOpacityDDBtn->setObjectName(QString::fromUtf8("mOpacityDDBtn"));

        gridLayout_2->addWidget(mOpacityDDBtn, 4, 2, 1, 1);

#if QT_CONFIG(shortcut)
        mRotationLabel->setBuddy(mRotationSpinBox);
        label_7->setBuddy(mSpinOffsetX);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mImageSourceLineEdit, mFilenameDDBtn);
        QWidget::setTabOrder(mFilenameDDBtn, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mLockAspectRatio);
        QWidget::setTabOrder(mLockAspectRatio, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mOpacityDDBtn);
        QWidget::setTabOrder(mOpacityDDBtn, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, mSpinOffsetX);
        QWidget::setTabOrder(mSpinOffsetX, mSpinOffsetY);
        QWidget::setTabOrder(mSpinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);

        retranslateUi(WidgetRasterMarker);

        QMetaObject::connectSlotsByName(WidgetRasterMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetRasterMarker)
    {
        mAnchorPointLabel->setText(QCoreApplication::translate("WidgetRasterMarker", "Anchor point", nullptr));
        mLabelImagePreview->setText(QString());
        label_2->setText(QCoreApplication::translate("WidgetRasterMarker", "x", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetRasterMarker", "y", nullptr));
#if QT_CONFIG(tooltip)
        mLockAspectRatio->setToolTip(QCoreApplication::translate("WidgetRasterMarker", "Lock aspect ratio", nullptr));
#endif // QT_CONFIG(tooltip)
        mWidthDDBtn->setText(QCoreApplication::translate("WidgetRasterMarker", "\342\200\246", nullptr));
        mHeightDDBtn->setText(QCoreApplication::translate("WidgetRasterMarker", "\342\200\246", nullptr));
        label_10->setText(QCoreApplication::translate("WidgetRasterMarker", "Width", nullptr));
        label_11->setText(QCoreApplication::translate("WidgetRasterMarker", "Height", nullptr));
        label_13->setText(QCoreApplication::translate("WidgetRasterMarker", "Unit", nullptr));
        mVerticalAnchorDDBtn->setText(QCoreApplication::translate("WidgetRasterMarker", "\342\200\246", nullptr));
        mRotationLabel->setText(QCoreApplication::translate("WidgetRasterMarker", "Rotation", nullptr));
        mFilenameDDBtn->setText(QCoreApplication::translate("WidgetRasterMarker", "\342\200\246", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetRasterMarker", "\342\200\246", nullptr));
        mTextureWidthLabel->setText(QCoreApplication::translate("WidgetRasterMarker", "Size", nullptr));
        label->setText(QCoreApplication::translate("WidgetRasterMarker", "Opacity", nullptr));
        mHorizontalAnchorDDBtn->setText(QCoreApplication::translate("WidgetRasterMarker", "\342\200\246", nullptr));
        mRotationDDBtn->setText(QCoreApplication::translate("WidgetRasterMarker", "\342\200\246", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetRasterMarker", "Offset", nullptr));
        mRotationSpinBox->setSuffix(QCoreApplication::translate("WidgetRasterMarker", " \302\260", nullptr));
        mOpacityDDBtn->setText(QCoreApplication::translate("WidgetRasterMarker", "\342\200\246", nullptr));
        (void)WidgetRasterMarker;
    } // retranslateUi

};

namespace Ui {
    class WidgetRasterMarker: public Ui_WidgetRasterMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_RASTERMARKER_H
