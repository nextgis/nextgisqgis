/********************************************************************************
** Form generated from reading UI file 'widget_rasterfill.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_RASTERFILL_H
#define UI_WIDGET_RASTERFILL_H

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
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetRasterFill
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *mRotationLabel;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsOpacityWidget *mOpacityWidget;
    QgsPropertyOverrideButton *mOpacityDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mLabelImagePreview;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QLabel *mTextureWidthLabel;
    QgsDoubleSpinBox *mWidthSpinBox;
    QgsPropertyOverrideButton *mHeightDDBtn;
    QLabel *mTextureWidthLabel_3;
    QLabel *mTextureWidthLabel_2;
    QgsDoubleSpinBox *mHeightSpinBox;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QComboBox *cboCoordinateMode;
    QgsPropertyOverrideButton *mFilenameDDBtn;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mSpinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsDoubleSpinBox *mSpinOffsetX;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QgsDoubleSpinBox *mRotationSpinBox;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QgsImageSourceLineEdit *mImageSourceLineEdit;
    QLabel *label_5;

    void setupUi(QWidget *WidgetRasterFill)
    {
        if (WidgetRasterFill->objectName().isEmpty())
            WidgetRasterFill->setObjectName(QString::fromUtf8("WidgetRasterFill"));
        WidgetRasterFill->resize(338, 494);
        WidgetRasterFill->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(WidgetRasterFill);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(WidgetRasterFill);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 2);

        label_3 = new QLabel(WidgetRasterFill);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 2);

        mRotationLabel = new QLabel(WidgetRasterFill);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout_2->addWidget(mRotationLabel, 5, 0, 1, 2);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 8, 3, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(WidgetRasterFill);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOpacityWidget, 4, 2, 1, 1);

        mOpacityDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mOpacityDDBtn->setObjectName(QString::fromUtf8("mOpacityDDBtn"));

        gridLayout_2->addWidget(mOpacityDDBtn, 4, 3, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        mLabelImagePreview = new QLabel(WidgetRasterFill);
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


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 4);

        widget = new QWidget(WidgetRasterFill);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(50, 50));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        mWidthDDBtn = new QgsPropertyOverrideButton(widget);
        mWidthDDBtn->setObjectName(QString::fromUtf8("mWidthDDBtn"));

        gridLayout_4->addWidget(mWidthDDBtn, 0, 3, 1, 1);

        mTextureWidthLabel = new QLabel(widget);
        mTextureWidthLabel->setObjectName(QString::fromUtf8("mTextureWidthLabel"));

        gridLayout_4->addWidget(mTextureWidthLabel, 0, 0, 1, 1);

        mWidthSpinBox = new QgsDoubleSpinBox(widget);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        mWidthSpinBox->setDecimals(6);
        mWidthSpinBox->setMaximum(99999999.000000000000000);
        mWidthSpinBox->setSingleStep(0.200000000000000);

        gridLayout_4->addWidget(mWidthSpinBox, 0, 1, 1, 2);

        mHeightDDBtn = new QgsPropertyOverrideButton(widget);
        mHeightDDBtn->setObjectName(QString::fromUtf8("mHeightDDBtn"));

        gridLayout_4->addWidget(mHeightDDBtn, 1, 3, 1, 1);

        mTextureWidthLabel_3 = new QLabel(widget);
        mTextureWidthLabel_3->setObjectName(QString::fromUtf8("mTextureWidthLabel_3"));

        gridLayout_4->addWidget(mTextureWidthLabel_3, 2, 0, 1, 1);

        mTextureWidthLabel_2 = new QLabel(widget);
        mTextureWidthLabel_2->setObjectName(QString::fromUtf8("mTextureWidthLabel_2"));

        gridLayout_4->addWidget(mTextureWidthLabel_2, 1, 0, 1, 1);

        mHeightSpinBox = new QgsDoubleSpinBox(widget);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        mHeightSpinBox->setDecimals(6);
        mHeightSpinBox->setMaximum(99999999.000000000000000);
        mHeightSpinBox->setSingleStep(0.200000000000000);

        gridLayout_4->addWidget(mHeightSpinBox, 1, 1, 1, 2);

        mSizeUnitWidget = new QgsUnitSelectionWidget(widget);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mSizeUnitWidget, 2, 1, 1, 2);


        gridLayout_2->addWidget(widget, 2, 2, 1, 2);

        cboCoordinateMode = new QComboBox(WidgetRasterFill);
        cboCoordinateMode->addItem(QString());
        cboCoordinateMode->addItem(QString());
        cboCoordinateMode->setObjectName(QString::fromUtf8("cboCoordinateMode"));

        gridLayout_2->addWidget(cboCoordinateMode, 3, 2, 1, 1);

        mFilenameDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mFilenameDDBtn->setObjectName(QString::fromUtf8("mFilenameDDBtn"));

        gridLayout_2->addWidget(mFilenameDDBtn, 1, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSpinOffsetY = new QgsDoubleSpinBox(WidgetRasterFill);
        mSpinOffsetY->setObjectName(QString::fromUtf8("mSpinOffsetY"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSpinOffsetY->sizePolicy().hasHeightForWidth());
        mSpinOffsetY->setSizePolicy(sizePolicy1);
        mSpinOffsetY->setDecimals(6);
        mSpinOffsetY->setMinimum(-99999999.989999994635582);
        mSpinOffsetY->setMaximum(99999999.989999994635582);
        mSpinOffsetY->setSingleStep(0.200000000000000);

        gridLayout->addWidget(mSpinOffsetY, 1, 0, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetRasterFill);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 1, 2, 1);

        mSpinOffsetX = new QgsDoubleSpinBox(WidgetRasterFill);
        mSpinOffsetX->setObjectName(QString::fromUtf8("mSpinOffsetX"));
        sizePolicy1.setHeightForWidth(mSpinOffsetX->sizePolicy().hasHeightForWidth());
        mSpinOffsetX->setSizePolicy(sizePolicy1);
        mSpinOffsetX->setDecimals(6);
        mSpinOffsetX->setMinimum(-99999999.989999994635582);
        mSpinOffsetX->setMaximum(99999999.989999994635582);
        mSpinOffsetX->setSingleStep(0.200000000000000);

        gridLayout->addWidget(mSpinOffsetX, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 8, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(WidgetRasterFill);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        label_4 = new QLabel(WidgetRasterFill);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 1, 1, 1, 1);

        label_7 = new QLabel(WidgetRasterFill);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 2, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout_2->addLayout(gridLayout_3, 8, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 0, 1, 1);

        mRotationSpinBox = new QgsDoubleSpinBox(WidgetRasterFill);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mRotationSpinBox->sizePolicy().hasHeightForWidth());
        mRotationSpinBox->setSizePolicy(sizePolicy2);
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360.000000000000000);
        mRotationSpinBox->setMaximum(360.000000000000000);
        mRotationSpinBox->setSingleStep(0.500000000000000);

        gridLayout_2->addWidget(mRotationSpinBox, 5, 2, 1, 1);

        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetRasterFill);
        mRotationDDBtn->setObjectName(QString::fromUtf8("mRotationDDBtn"));

        gridLayout_2->addWidget(mRotationDDBtn, 5, 3, 1, 1);

        mImageSourceLineEdit = new QgsImageSourceLineEdit(WidgetRasterFill);
        mImageSourceLineEdit->setObjectName(QString::fromUtf8("mImageSourceLineEdit"));
        mImageSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mImageSourceLineEdit, 1, 0, 1, 3);

        label_5 = new QLabel(WidgetRasterFill);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(cboCoordinateMode);
        mRotationLabel->setBuddy(mRotationSpinBox);
        mTextureWidthLabel->setBuddy(mWidthSpinBox);
        mTextureWidthLabel_3->setBuddy(mWidthSpinBox);
        mTextureWidthLabel_2->setBuddy(mWidthSpinBox);
        label_7->setBuddy(mSpinOffsetX);
        label_5->setBuddy(cboCoordinateMode);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mImageSourceLineEdit, mFilenameDDBtn);
        QWidget::setTabOrder(mFilenameDDBtn, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, cboCoordinateMode);
        QWidget::setTabOrder(cboCoordinateMode, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mOpacityDDBtn);
        QWidget::setTabOrder(mOpacityDDBtn, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, mSpinOffsetX);
        QWidget::setTabOrder(mSpinOffsetX, mSpinOffsetY);
        QWidget::setTabOrder(mSpinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);

        retranslateUi(WidgetRasterFill);

        QMetaObject::connectSlotsByName(WidgetRasterFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetRasterFill)
    {
        label->setText(QCoreApplication::translate("WidgetRasterFill", "Opacity", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetRasterFill", "Coord mode", nullptr));
        mRotationLabel->setText(QCoreApplication::translate("WidgetRasterFill", "Rotation", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        mOpacityDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        mLabelImagePreview->setText(QString());
        mWidthDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        mTextureWidthLabel->setText(QCoreApplication::translate("WidgetRasterFill", "Width", nullptr));
        mWidthSpinBox->setSpecialValueText(QCoreApplication::translate("WidgetRasterFill", "Automatic", nullptr));
        mHeightDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        mTextureWidthLabel_3->setText(QCoreApplication::translate("WidgetRasterFill", "Unit", nullptr));
        mTextureWidthLabel_2->setText(QCoreApplication::translate("WidgetRasterFill", "Height", nullptr));
        mHeightSpinBox->setSpecialValueText(QCoreApplication::translate("WidgetRasterFill", "Automatic", nullptr));
        cboCoordinateMode->setItemText(0, QCoreApplication::translate("WidgetRasterFill", "Object", nullptr));
        cboCoordinateMode->setItemText(1, QCoreApplication::translate("WidgetRasterFill", "Viewport", nullptr));

        mFilenameDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetRasterFill", "x", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetRasterFill", "y", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetRasterFill", "Offset", nullptr));
        mRotationSpinBox->setSuffix(QCoreApplication::translate("WidgetRasterFill", " \302\260", nullptr));
        mRotationDDBtn->setText(QCoreApplication::translate("WidgetRasterFill", "\342\200\246", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetRasterFill", "Size", nullptr));
        (void)WidgetRasterFill;
    } // retranslateUi

};

namespace Ui {
    class WidgetRasterFill: public Ui_WidgetRasterFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_RASTERFILL_H
