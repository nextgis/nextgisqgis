/********************************************************************************
** Form generated from reading UI file 'widget_rasterline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_RASTERLINE_H
#define UI_WIDGET_RASTERLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"
#include "qgsopacitywidget.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetRasterLine
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *spinWidth;
    QgsUnitSelectionWidget *mPenWidthUnitWidget;
    QgsPropertyOverrideButton *mPenWidthDDBtn;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QSpacerItem *verticalSpacer;
    QgsImageSourceLineEdit *mImageSourceLineEdit;
    QLabel *label_6;
    QgsPropertyOverrideButton *mFilenameDDBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mLabelImagePreview;
    QSpacerItem *horizontalSpacer;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QgsPenCapStyleComboBox *cboCapStyle;
    QgsPropertyOverrideButton *mCapStyleDDBtn;
    QgsPropertyOverrideButton *mOpacityDDBtn;
    QgsOpacityWidget *mOpacityWidget;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinOffset;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mOffsetDDBtn;

    void setupUi(QWidget *WidgetRasterLine)
    {
        if (WidgetRasterLine->objectName().isEmpty())
            WidgetRasterLine->setObjectName(QString::fromUtf8("WidgetRasterLine"));
        WidgetRasterLine->resize(444, 443);
        WidgetRasterLine->setWindowTitle(QString::fromUtf8("Raster Line Symbol"));
        gridLayout_2 = new QGridLayout(WidgetRasterLine);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinWidth = new QgsDoubleSpinBox(WidgetRasterLine);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinWidth->sizePolicy().hasHeightForWidth());
        spinWidth->setSizePolicy(sizePolicy);
        spinWidth->setDecimals(6);
        spinWidth->setMaximum(100000.000000000000000);
        spinWidth->setSingleStep(0.200000000000000);
        spinWidth->setValue(1.000000000000000);
        spinWidth->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(spinWidth);

        mPenWidthUnitWidget = new QgsUnitSelectionWidget(WidgetRasterLine);
        mPenWidthUnitWidget->setObjectName(QString::fromUtf8("mPenWidthUnitWidget"));
        mPenWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mPenWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mPenWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        mPenWidthDDBtn = new QgsPropertyOverrideButton(WidgetRasterLine);
        mPenWidthDDBtn->setObjectName(QString::fromUtf8("mPenWidthDDBtn"));

        gridLayout_2->addWidget(mPenWidthDDBtn, 2, 2, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetRasterLine);
        mJoinStyleDDBtn->setObjectName(QString::fromUtf8("mJoinStyleDDBtn"));

        gridLayout_2->addWidget(mJoinStyleDDBtn, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 0, 1, 1);

        mImageSourceLineEdit = new QgsImageSourceLineEdit(WidgetRasterLine);
        mImageSourceLineEdit->setObjectName(QString::fromUtf8("mImageSourceLineEdit"));
        mImageSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mImageSourceLineEdit, 1, 0, 1, 2);

        label_6 = new QLabel(WidgetRasterLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        mFilenameDDBtn = new QgsPropertyOverrideButton(WidgetRasterLine);
        mFilenameDDBtn->setObjectName(QString::fromUtf8("mFilenameDDBtn"));

        gridLayout_2->addWidget(mFilenameDDBtn, 1, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        mLabelImagePreview = new QLabel(WidgetRasterLine);
        mLabelImagePreview->setObjectName(QString::fromUtf8("mLabelImagePreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLabelImagePreview->sizePolicy().hasHeightForWidth());
        mLabelImagePreview->setSizePolicy(sizePolicy1);
        mLabelImagePreview->setMinimumSize(QSize(150, 150));
        mLabelImagePreview->setFrameShape(QFrame::Panel);
        mLabelImagePreview->setFrameShadow(QFrame::Sunken);
        mLabelImagePreview->setLineWidth(1);
        mLabelImagePreview->setMidLineWidth(0);

        horizontalLayout_4->addWidget(mLabelImagePreview);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 3);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetRasterLine);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout_2->addWidget(cboJoinStyle, 4, 1, 1, 1);

        cboCapStyle = new QgsPenCapStyleComboBox(WidgetRasterLine);
        cboCapStyle->setObjectName(QString::fromUtf8("cboCapStyle"));

        gridLayout_2->addWidget(cboCapStyle, 5, 1, 1, 1);

        mCapStyleDDBtn = new QgsPropertyOverrideButton(WidgetRasterLine);
        mCapStyleDDBtn->setObjectName(QString::fromUtf8("mCapStyleDDBtn"));

        gridLayout_2->addWidget(mCapStyleDDBtn, 5, 2, 1, 1);

        mOpacityDDBtn = new QgsPropertyOverrideButton(WidgetRasterLine);
        mOpacityDDBtn->setObjectName(QString::fromUtf8("mOpacityDDBtn"));

        gridLayout_2->addWidget(mOpacityDDBtn, 6, 2, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(WidgetRasterLine);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOpacityWidget, 6, 1, 1, 1);

        label = new QLabel(WidgetRasterLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 6, 0, 1, 1);

        label_5 = new QLabel(WidgetRasterLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(WidgetRasterLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_4 = new QLabel(WidgetRasterLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinOffset = new QgsDoubleSpinBox(WidgetRasterLine);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinOffset->sizePolicy().hasHeightForWidth());
        spinOffset->setSizePolicy(sizePolicy2);
        spinOffset->setStyleSheet(QString::fromUtf8(""));
        spinOffset->setDecimals(6);
        spinOffset->setMinimum(-100000.000000000000000);
        spinOffset->setMaximum(100000.000000000000000);
        spinOffset->setSingleStep(0.200000000000000);

        horizontalLayout_3->addWidget(spinOffset);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetRasterLine);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mOffsetUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetRasterLine);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 3, 2, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        QWidget::setTabOrder(mImageSourceLineEdit, mFilenameDDBtn);
        QWidget::setTabOrder(mFilenameDDBtn, spinWidth);
        QWidget::setTabOrder(spinWidth, mPenWidthUnitWidget);
        QWidget::setTabOrder(mPenWidthUnitWidget, mPenWidthDDBtn);
        QWidget::setTabOrder(mPenWidthDDBtn, spinOffset);
        QWidget::setTabOrder(spinOffset, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, cboCapStyle);
        QWidget::setTabOrder(cboCapStyle, mCapStyleDDBtn);
        QWidget::setTabOrder(mCapStyleDDBtn, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mOpacityDDBtn);

        retranslateUi(WidgetRasterLine);

        QMetaObject::connectSlotsByName(WidgetRasterLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetRasterLine)
    {
        spinWidth->setSpecialValueText(QCoreApplication::translate("WidgetRasterLine", "Hairline", nullptr));
        mPenWidthDDBtn->setText(QCoreApplication::translate("WidgetRasterLine", "\342\200\246", nullptr));
        mJoinStyleDDBtn->setText(QCoreApplication::translate("WidgetRasterLine", "\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetRasterLine", "Cap style", nullptr));
        mFilenameDDBtn->setText(QCoreApplication::translate("WidgetRasterLine", "\342\200\246", nullptr));
        mLabelImagePreview->setText(QString());
        mCapStyleDDBtn->setText(QCoreApplication::translate("WidgetRasterLine", "\342\200\246", nullptr));
        mOpacityDDBtn->setText(QCoreApplication::translate("WidgetRasterLine", "\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("WidgetRasterLine", "Opacity", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetRasterLine", "Join style", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetRasterLine", "Stroke width", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetRasterLine", "Offset", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetRasterLine", "\342\200\246", nullptr));
        (void)WidgetRasterLine;
    } // retranslateUi

};

namespace Ui {
    class WidgetRasterLine: public Ui_WidgetRasterLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_RASTERLINE_H
