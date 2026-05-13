/********************************************************************************
** Form generated from reading UI file 'widget_simplemarker.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLEMARKER_H
#define UI_WIDGET_SIMPLEMARKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleMarker
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QgsPropertyOverrideButton *mSizeDDBtn;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *spinSize;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QLabel *mStrokeWidthLabel;
    QLabel *label;
    QLabel *mStrokeStyleLabel;
    QLabel *label_8;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QgsDoubleSpinBox *spinAngle;
    QgsPropertyOverrideButton *mAngleDDBtn;
    QLabel *label_2;
    QLabel *mAnchorPointLabel;
    QLabel *label_4;
    QLabel *label_5;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QgsDoubleSpinBox *spinOffsetX;
    QLabel *label_6;
    QgsDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QHBoxLayout *horizontalLayout_8;
    QListWidget *lstNames;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QgsPropertyOverrideButton *mNameDDBtn;
    QgsPropertyOverrideButton *mStrokeStyleDDBtn;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QComboBox *mVerticalAnchorComboBox;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsPenStyleComboBox *mStrokeStyleComboBox;
    QComboBox *mHorizontalAnchorComboBox;
    QgsColorButton *btnChangeColorStroke;
    QgsColorButton *btnChangeColorFill;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QLabel *label_9;
    QgsPenCapStyleComboBox *cboCapStyle;
    QgsPropertyOverrideButton *mCapStyleDDBtn;

    void setupUi(QWidget *WidgetSimpleMarker)
    {
        if (WidgetSimpleMarker->objectName().isEmpty())
            WidgetSimpleMarker->setObjectName(QString::fromUtf8("WidgetSimpleMarker"));
        WidgetSimpleMarker->resize(333, 637);
        WidgetSimpleMarker->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(WidgetSimpleMarker);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(WidgetSimpleMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        mSizeDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mSizeDDBtn->setObjectName(QString::fromUtf8("mSizeDDBtn"));

        gridLayout_2->addWidget(mSizeDDBtn, 0, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinSize = new QgsDoubleSpinBox(WidgetSimpleMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinSize->sizePolicy().hasHeightForWidth());
        spinSize->setSizePolicy(sizePolicy);
        spinSize->setDecimals(6);
        spinSize->setMaximum(100000.000000000000000);
        spinSize->setSingleStep(0.200000000000000);
        spinSize->setValue(1.000000000000000);
        spinSize->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(spinSize);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleMarker);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mSizeUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 2, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetSimpleMarker);
        mStrokeWidthLabel->setObjectName(QString::fromUtf8("mStrokeWidthLabel"));

        gridLayout_2->addWidget(mStrokeWidthLabel, 8, 0, 1, 1);

        label = new QLabel(WidgetSimpleMarker);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        mStrokeStyleLabel = new QLabel(WidgetSimpleMarker);
        mStrokeStyleLabel->setObjectName(QString::fromUtf8("mStrokeStyleLabel"));

        gridLayout_2->addWidget(mStrokeStyleLabel, 6, 0, 1, 1);

        label_8 = new QLabel(WidgetSimpleMarker);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_8, 9, 0, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetSimpleMarker);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout_2->addWidget(cboJoinStyle, 9, 2, 1, 1);

        spinAngle = new QgsDoubleSpinBox(WidgetSimpleMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setWrapping(true);
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-360.000000000000000);
        spinAngle->setMaximum(360.000000000000000);
        spinAngle->setSingleStep(0.500000000000000);

        gridLayout_2->addWidget(spinAngle, 12, 2, 1, 1);

        mAngleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mAngleDDBtn->setObjectName(QString::fromUtf8("mAngleDDBtn"));

        gridLayout_2->addWidget(mAngleDDBtn, 12, 4, 1, 1);

        label_2 = new QLabel(WidgetSimpleMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetSimpleMarker);
        mAnchorPointLabel->setObjectName(QString::fromUtf8("mAnchorPointLabel"));

        gridLayout_2->addWidget(mAnchorPointLabel, 15, 0, 3, 1);

        label_4 = new QLabel(WidgetSimpleMarker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 12, 0, 1, 1);

        label_5 = new QLabel(WidgetSimpleMarker);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 13, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(WidgetSimpleMarker);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetSimpleMarker);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        sizePolicy.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-99999999.989999994635582);
        spinOffsetX->setMaximum(99999999.989999994635582);
        spinOffsetX->setSingleStep(0.200000000000000);

        gridLayout->addWidget(spinOffsetX, 0, 1, 1, 1);

        label_6 = new QLabel(WidgetSimpleMarker);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetSimpleMarker);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy2);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-99999999.989999994635582);
        spinOffsetY->setMaximum(99999999.989999994635582);
        spinOffsetY->setSingleStep(0.200000000000000);

        gridLayout->addWidget(spinOffsetY, 1, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleMarker);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);


        gridLayout_2->addLayout(gridLayout, 13, 2, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mJoinStyleDDBtn->setObjectName(QString::fromUtf8("mJoinStyleDDBtn"));

        gridLayout_2->addWidget(mJoinStyleDDBtn, 9, 4, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lstNames = new QListWidget(WidgetSimpleMarker);
        lstNames->setObjectName(QString::fromUtf8("lstNames"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lstNames->sizePolicy().hasHeightForWidth());
        lstNames->setSizePolicy(sizePolicy3);
        lstNames->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstNames->setIconSize(QSize(20, 20));
        lstNames->setMovement(QListView::Static);
        lstNames->setFlow(QListView::LeftToRight);
        lstNames->setResizeMode(QListView::Adjust);
        lstNames->setSpacing(4);
        lstNames->setGridSize(QSize(30, 25));
        lstNames->setViewMode(QListView::IconMode);
        lstNames->setWordWrap(true);

        horizontalLayout_8->addWidget(lstNames);


        gridLayout_2->addLayout(horizontalLayout_8, 18, 0, 1, 3);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mVerticalAnchorDDBtn->setObjectName(QString::fromUtf8("mVerticalAnchorDDBtn"));

        gridLayout_2->addWidget(mVerticalAnchorDDBtn, 15, 4, 1, 1);

        mNameDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mNameDDBtn->setObjectName(QString::fromUtf8("mNameDDBtn"));

        gridLayout_2->addWidget(mNameDDBtn, 18, 4, 1, 1);

        mStrokeStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mStrokeStyleDDBtn->setObjectName(QString::fromUtf8("mStrokeStyleDDBtn"));

        gridLayout_2->addWidget(mStrokeStyleDDBtn, 6, 4, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mFillColorDDBtn->setObjectName(QString::fromUtf8("mFillColorDDBtn"));

        gridLayout_2->addWidget(mFillColorDDBtn, 1, 4, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mHorizontalAnchorDDBtn->setObjectName(QString::fromUtf8("mHorizontalAnchorDDBtn"));

        gridLayout_2->addWidget(mHorizontalAnchorDDBtn, 16, 4, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mStrokeColorDDBtn->setObjectName(QString::fromUtf8("mStrokeColorDDBtn"));

        gridLayout_2->addWidget(mStrokeColorDDBtn, 3, 4, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetSimpleMarker);
        mVerticalAnchorComboBox->setObjectName(QString::fromUtf8("mVerticalAnchorComboBox"));

        gridLayout_2->addWidget(mVerticalAnchorComboBox, 15, 2, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 13, 4, 1, 1);

        mStrokeStyleComboBox = new QgsPenStyleComboBox(WidgetSimpleMarker);
        mStrokeStyleComboBox->setObjectName(QString::fromUtf8("mStrokeStyleComboBox"));

        gridLayout_2->addWidget(mStrokeStyleComboBox, 6, 2, 1, 1);

        mHorizontalAnchorComboBox = new QComboBox(WidgetSimpleMarker);
        mHorizontalAnchorComboBox->setObjectName(QString::fromUtf8("mHorizontalAnchorComboBox"));

        gridLayout_2->addWidget(mHorizontalAnchorComboBox, 16, 2, 1, 1);

        btnChangeColorStroke = new QgsColorButton(WidgetSimpleMarker);
        btnChangeColorStroke->setObjectName(QString::fromUtf8("btnChangeColorStroke"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnChangeColorStroke->sizePolicy().hasHeightForWidth());
        btnChangeColorStroke->setSizePolicy(sizePolicy4);
        btnChangeColorStroke->setMinimumSize(QSize(120, 0));
        btnChangeColorStroke->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColorStroke, 3, 2, 1, 1);

        btnChangeColorFill = new QgsColorButton(WidgetSimpleMarker);
        btnChangeColorFill->setObjectName(QString::fromUtf8("btnChangeColorFill"));
        sizePolicy4.setHeightForWidth(btnChangeColorFill->sizePolicy().hasHeightForWidth());
        btnChangeColorFill->setSizePolicy(sizePolicy4);
        btnChangeColorFill->setMinimumSize(QSize(120, 0));
        btnChangeColorFill->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColorFill, 1, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetSimpleMarker);
        mStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mStrokeWidthSpinBox"));
        sizePolicy2.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy2);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(999999999.999999046325684);
        mStrokeWidthSpinBox->setSingleStep(0.200000000000000);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_4->addWidget(mStrokeWidthSpinBox);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleMarker);
        mStrokeWidthUnitWidget->setObjectName(QString::fromUtf8("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(mStrokeWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_4, 8, 2, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mStrokeWidthDDBtn->setObjectName(QString::fromUtf8("mStrokeWidthDDBtn"));

        gridLayout_2->addWidget(mStrokeWidthDDBtn, 8, 4, 1, 1);

        label_9 = new QLabel(WidgetSimpleMarker);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_9, 10, 0, 1, 1);

        cboCapStyle = new QgsPenCapStyleComboBox(WidgetSimpleMarker);
        cboCapStyle->setObjectName(QString::fromUtf8("cboCapStyle"));

        gridLayout_2->addWidget(cboCapStyle, 10, 2, 1, 1);

        mCapStyleDDBtn = new QgsPropertyOverrideButton(WidgetSimpleMarker);
        mCapStyleDDBtn->setObjectName(QString::fromUtf8("mCapStyleDDBtn"));

        gridLayout_2->addWidget(mCapStyleDDBtn, 10, 4, 1, 1);

        QWidget::setTabOrder(spinSize, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mSizeDDBtn);
        QWidget::setTabOrder(mSizeDDBtn, btnChangeColorFill);
        QWidget::setTabOrder(btnChangeColorFill, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, btnChangeColorStroke);
        QWidget::setTabOrder(btnChangeColorStroke, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeStyleComboBox);
        QWidget::setTabOrder(mStrokeStyleComboBox, mStrokeStyleDDBtn);
        QWidget::setTabOrder(mStrokeStyleDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeWidthUnitWidget);
        QWidget::setTabOrder(mStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, mJoinStyleDDBtn);
        QWidget::setTabOrder(mJoinStyleDDBtn, cboCapStyle);
        QWidget::setTabOrder(cboCapStyle, mCapStyleDDBtn);
        QWidget::setTabOrder(mCapStyleDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mAngleDDBtn);
        QWidget::setTabOrder(mAngleDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);
        QWidget::setTabOrder(mHorizontalAnchorDDBtn, lstNames);
        QWidget::setTabOrder(lstNames, mNameDDBtn);

        retranslateUi(WidgetSimpleMarker);

        QMetaObject::connectSlotsByName(WidgetSimpleMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleMarker)
    {
        label_3->setText(QCoreApplication::translate("WidgetSimpleMarker", "Size", nullptr));
        mSizeDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        mStrokeWidthLabel->setText(QCoreApplication::translate("WidgetSimpleMarker", "Stroke width", nullptr));
        label->setText(QCoreApplication::translate("WidgetSimpleMarker", "Stroke color", nullptr));
        mStrokeStyleLabel->setText(QCoreApplication::translate("WidgetSimpleMarker", "Stroke style", nullptr));
        label_8->setText(QCoreApplication::translate("WidgetSimpleMarker", "Join style", nullptr));
        spinAngle->setSuffix(QCoreApplication::translate("WidgetSimpleMarker", " \302\260", nullptr));
        mAngleDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetSimpleMarker", "Fill color", nullptr));
        mAnchorPointLabel->setText(QCoreApplication::translate("WidgetSimpleMarker", "Anchor point", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetSimpleMarker", "Rotation", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetSimpleMarker", "Offset", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetSimpleMarker", "x", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetSimpleMarker", "y", nullptr));
        mJoinStyleDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        mVerticalAnchorDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        mNameDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        mStrokeStyleDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        mFillColorDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        mHorizontalAnchorDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        mStrokeColorDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        btnChangeColorStroke->setText(QString());
        btnChangeColorFill->setText(QString());
        mStrokeWidthSpinBox->setSpecialValueText(QCoreApplication::translate("WidgetSimpleMarker", "Hairline", nullptr));
        mStrokeWidthDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        label_9->setText(QCoreApplication::translate("WidgetSimpleMarker", "Cap style", nullptr));
        mCapStyleDDBtn->setText(QCoreApplication::translate("WidgetSimpleMarker", "\342\200\246", nullptr));
        (void)WidgetSimpleMarker;
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleMarker: public Ui_WidgetSimpleMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLEMARKER_H
