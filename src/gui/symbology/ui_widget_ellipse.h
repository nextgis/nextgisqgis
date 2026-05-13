/********************************************************************************
** Form generated from reading UI file 'widget_ellipse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_ELLIPSE_H
#define UI_WIDGET_ELLIPSE_H

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

class Ui_WidgetEllipseBase
{
public:
    QGridLayout *gridLayout_2;
    QLabel *mSymbolWidthLabel;
    QLabel *label_8;
    QgsPenStyleComboBox *mStrokeStyleComboBox;
    QListWidget *mShapeListWidget;
    QComboBox *mHorizontalAnchorComboBox;
    QLabel *mSymbolHeightLabel;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QgsDoubleSpinBox *spinOffsetX;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label_4;
    QgsDoubleSpinBox *spinOffsetY;
    QLabel *mAnchorPointLabel;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QComboBox *mVerticalAnchorComboBox;
    QLabel *label_9;
    QgsPenCapStyleComboBox *cboCapStyle;
    QgsPropertyOverrideButton *mCapStyleDDBtn;
    QLabel *label_5;
    QLabel *mRotationLabel;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mWidthSpinBox;
    QgsUnitSelectionWidget *mSymbolWidthUnitWidget;
    QgsDoubleSpinBox *mRotationSpinBox;
    QgsPropertyOverrideButton *mSymbolWidthDDBtn;
    QgsPropertyOverrideButton *mShapeDDBtn;
    QLabel *label_3;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QLabel *mStrokeStyleLabel;
    QgsPropertyOverrideButton *mStrokeStyleDDBtn;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mHeightSpinBox;
    QgsUnitSelectionWidget *mSymbolHeightUnitWidget;
    QgsPropertyOverrideButton *mSymbolHeightDDBtn;
    QgsPropertyOverrideButton *mJoinStyleDDBtn;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QgsColorButton *btnChangeColorStroke;
    QLabel *label;
    QgsColorButton *btnChangeColorFill;
    QLabel *mStrokeWidthLabel;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;

    void setupUi(QWidget *WidgetEllipseBase)
    {
        if (WidgetEllipseBase->objectName().isEmpty())
            WidgetEllipseBase->setObjectName(QString::fromUtf8("WidgetEllipseBase"));
        WidgetEllipseBase->resize(328, 680);
        WidgetEllipseBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(WidgetEllipseBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mSymbolWidthLabel = new QLabel(WidgetEllipseBase);
        mSymbolWidthLabel->setObjectName(QString::fromUtf8("mSymbolWidthLabel"));

        gridLayout_2->addWidget(mSymbolWidthLabel, 2, 0, 1, 1);

        label_8 = new QLabel(WidgetEllipseBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_8, 8, 0, 1, 1);

        mStrokeStyleComboBox = new QgsPenStyleComboBox(WidgetEllipseBase);
        mStrokeStyleComboBox->setObjectName(QString::fromUtf8("mStrokeStyleComboBox"));

        gridLayout_2->addWidget(mStrokeStyleComboBox, 6, 1, 1, 1);

        mShapeListWidget = new QListWidget(WidgetEllipseBase);
        mShapeListWidget->setObjectName(QString::fromUtf8("mShapeListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(mShapeListWidget->sizePolicy().hasHeightForWidth());
        mShapeListWidget->setSizePolicy(sizePolicy);
        mShapeListWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        mShapeListWidget->setIconSize(QSize(20, 20));
        mShapeListWidget->setMovement(QListView::Static);
        mShapeListWidget->setFlow(QListView::LeftToRight);
        mShapeListWidget->setResizeMode(QListView::Adjust);
        mShapeListWidget->setSpacing(4);
        mShapeListWidget->setGridSize(QSize(30, 24));
        mShapeListWidget->setViewMode(QListView::IconMode);
        mShapeListWidget->setWordWrap(true);
        mShapeListWidget->setSelectionRectVisible(true);

        gridLayout_2->addWidget(mShapeListWidget, 14, 0, 1, 2);

        mHorizontalAnchorComboBox = new QComboBox(WidgetEllipseBase);
        mHorizontalAnchorComboBox->setObjectName(QString::fromUtf8("mHorizontalAnchorComboBox"));

        gridLayout_2->addWidget(mHorizontalAnchorComboBox, 13, 1, 1, 1);

        mSymbolHeightLabel = new QLabel(WidgetEllipseBase);
        mSymbolHeightLabel->setObjectName(QString::fromUtf8("mSymbolHeightLabel"));

        gridLayout_2->addWidget(mSymbolHeightLabel, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(WidgetEllipseBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetEllipseBase);
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

        gridLayout->addWidget(spinOffsetX, 2, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 2, 2, 2, 1);

        label_4 = new QLabel(WidgetEllipseBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetEllipseBase);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy1.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy1);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-999999999.000000000000000);
        spinOffsetY->setMaximum(999999999.000000000000000);
        spinOffsetY->setSingleStep(0.200000000000000);

        gridLayout->addWidget(spinOffsetY, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 11, 1, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetEllipseBase);
        mAnchorPointLabel->setObjectName(QString::fromUtf8("mAnchorPointLabel"));

        gridLayout_2->addWidget(mAnchorPointLabel, 12, 0, 2, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetEllipseBase);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout_2->addWidget(cboJoinStyle, 8, 1, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetEllipseBase);
        mVerticalAnchorComboBox->setObjectName(QString::fromUtf8("mVerticalAnchorComboBox"));

        gridLayout_2->addWidget(mVerticalAnchorComboBox, 12, 1, 1, 1);

        label_9 = new QLabel(WidgetEllipseBase);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_9, 9, 0, 1, 1);

        cboCapStyle = new QgsPenCapStyleComboBox(WidgetEllipseBase);
        cboCapStyle->setObjectName(QString::fromUtf8("cboCapStyle"));

        gridLayout_2->addWidget(cboCapStyle, 9, 1, 1, 1);

        mCapStyleDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mCapStyleDDBtn->setObjectName(QString::fromUtf8("mCapStyleDDBtn"));

        gridLayout_2->addWidget(mCapStyleDDBtn, 9, 2, 1, 1);

        label_5 = new QLabel(WidgetEllipseBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 11, 0, 1, 1);

        mRotationLabel = new QLabel(WidgetEllipseBase);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout_2->addWidget(mRotationLabel, 10, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mWidthSpinBox = new QgsDoubleSpinBox(WidgetEllipseBase);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mWidthSpinBox->sizePolicy().hasHeightForWidth());
        mWidthSpinBox->setSizePolicy(sizePolicy1);
        mWidthSpinBox->setDecimals(6);
        mWidthSpinBox->setMaximum(999999999.000000000000000);
        mWidthSpinBox->setSingleStep(0.200000000000000);
        mWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout->addWidget(mWidthSpinBox);

        mSymbolWidthUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mSymbolWidthUnitWidget->setObjectName(QString::fromUtf8("mSymbolWidthUnitWidget"));
        mSymbolWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mSymbolWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mSymbolWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);

        mRotationSpinBox = new QgsDoubleSpinBox(WidgetEllipseBase);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setWrapping(true);
        mRotationSpinBox->setMinimum(-360.000000000000000);
        mRotationSpinBox->setMaximum(360.000000000000000);
        mRotationSpinBox->setSingleStep(0.500000000000000);

        gridLayout_2->addWidget(mRotationSpinBox, 10, 1, 1, 1);

        mSymbolWidthDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mSymbolWidthDDBtn->setObjectName(QString::fromUtf8("mSymbolWidthDDBtn"));

        gridLayout_2->addWidget(mSymbolWidthDDBtn, 2, 2, 1, 1);

        mShapeDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mShapeDDBtn->setObjectName(QString::fromUtf8("mShapeDDBtn"));

        gridLayout_2->addWidget(mShapeDDBtn, 14, 2, 1, 1);

        label_3 = new QLabel(WidgetEllipseBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        mRotationDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mRotationDDBtn->setObjectName(QString::fromUtf8("mRotationDDBtn"));

        gridLayout_2->addWidget(mRotationDDBtn, 10, 2, 1, 1);

        mStrokeStyleLabel = new QLabel(WidgetEllipseBase);
        mStrokeStyleLabel->setObjectName(QString::fromUtf8("mStrokeStyleLabel"));

        gridLayout_2->addWidget(mStrokeStyleLabel, 6, 0, 1, 1);

        mStrokeStyleDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mStrokeStyleDDBtn->setObjectName(QString::fromUtf8("mStrokeStyleDDBtn"));

        gridLayout_2->addWidget(mStrokeStyleDDBtn, 6, 2, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mStrokeColorDDBtn->setObjectName(QString::fromUtf8("mStrokeColorDDBtn"));

        gridLayout_2->addWidget(mStrokeColorDDBtn, 5, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mHeightSpinBox = new QgsDoubleSpinBox(WidgetEllipseBase);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        sizePolicy1.setHeightForWidth(mHeightSpinBox->sizePolicy().hasHeightForWidth());
        mHeightSpinBox->setSizePolicy(sizePolicy1);
        mHeightSpinBox->setDecimals(6);
        mHeightSpinBox->setMaximum(999999999.000000000000000);
        mHeightSpinBox->setSingleStep(0.200000000000000);
        mHeightSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_3->addWidget(mHeightSpinBox);

        mSymbolHeightUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mSymbolHeightUnitWidget->setObjectName(QString::fromUtf8("mSymbolHeightUnitWidget"));
        mSymbolHeightUnitWidget->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(mSymbolHeightUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        mSymbolHeightDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mSymbolHeightDDBtn->setObjectName(QString::fromUtf8("mSymbolHeightDDBtn"));

        gridLayout_2->addWidget(mSymbolHeightDDBtn, 3, 2, 1, 1);

        mJoinStyleDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mJoinStyleDDBtn->setObjectName(QString::fromUtf8("mJoinStyleDDBtn"));

        gridLayout_2->addWidget(mJoinStyleDDBtn, 8, 2, 1, 1);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mOffsetDDBtn->setObjectName(QString::fromUtf8("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 11, 2, 1, 1);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mVerticalAnchorDDBtn->setObjectName(QString::fromUtf8("mVerticalAnchorDDBtn"));

        gridLayout_2->addWidget(mVerticalAnchorDDBtn, 12, 2, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mHorizontalAnchorDDBtn->setObjectName(QString::fromUtf8("mHorizontalAnchorDDBtn"));

        gridLayout_2->addWidget(mHorizontalAnchorDDBtn, 13, 2, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mFillColorDDBtn->setObjectName(QString::fromUtf8("mFillColorDDBtn"));

        gridLayout_2->addWidget(mFillColorDDBtn, 4, 2, 1, 1);

        btnChangeColorStroke = new QgsColorButton(WidgetEllipseBase);
        btnChangeColorStroke->setObjectName(QString::fromUtf8("btnChangeColorStroke"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnChangeColorStroke->sizePolicy().hasHeightForWidth());
        btnChangeColorStroke->setSizePolicy(sizePolicy3);
        btnChangeColorStroke->setMinimumSize(QSize(100, 0));
        btnChangeColorStroke->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColorStroke, 5, 1, 1, 1);

        label = new QLabel(WidgetEllipseBase);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label, 5, 0, 1, 1);

        btnChangeColorFill = new QgsColorButton(WidgetEllipseBase);
        btnChangeColorFill->setObjectName(QString::fromUtf8("btnChangeColorFill"));
        sizePolicy3.setHeightForWidth(btnChangeColorFill->sizePolicy().hasHeightForWidth());
        btnChangeColorFill->setSizePolicy(sizePolicy3);
        btnChangeColorFill->setMinimumSize(QSize(100, 0));
        btnChangeColorFill->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnChangeColorFill, 4, 1, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetEllipseBase);
        mStrokeWidthLabel->setObjectName(QString::fromUtf8("mStrokeWidthLabel"));

        gridLayout_2->addWidget(mStrokeWidthLabel, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetEllipseBase);
        mStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mStrokeWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy1);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(999999999.999999046325684);
        mStrokeWidthSpinBox->setSingleStep(0.200000000000000);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(mStrokeWidthSpinBox);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mStrokeWidthUnitWidget->setObjectName(QString::fromUtf8("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mStrokeWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_2, 7, 1, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetEllipseBase);
        mStrokeWidthDDBtn->setObjectName(QString::fromUtf8("mStrokeWidthDDBtn"));

        gridLayout_2->addWidget(mStrokeWidthDDBtn, 7, 2, 1, 1);

#if QT_CONFIG(shortcut)
        mSymbolWidthLabel->setBuddy(mWidthSpinBox);
        mSymbolHeightLabel->setBuddy(mHeightSpinBox);
        mAnchorPointLabel->setBuddy(mHorizontalAnchorComboBox);
        label_5->setBuddy(spinOffsetX);
        mRotationLabel->setBuddy(mRotationSpinBox);
        label_3->setBuddy(btnChangeColorFill);
        mStrokeStyleLabel->setBuddy(mStrokeStyleComboBox);
        label->setBuddy(btnChangeColorStroke);
        mStrokeWidthLabel->setBuddy(mStrokeWidthSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mWidthSpinBox, mSymbolWidthUnitWidget);
        QWidget::setTabOrder(mSymbolWidthUnitWidget, mSymbolWidthDDBtn);
        QWidget::setTabOrder(mSymbolWidthDDBtn, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mSymbolHeightDDBtn);
        QWidget::setTabOrder(mSymbolHeightDDBtn, btnChangeColorFill);
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
        QWidget::setTabOrder(mCapStyleDDBtn, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);
        QWidget::setTabOrder(mHorizontalAnchorDDBtn, mShapeListWidget);
        QWidget::setTabOrder(mShapeListWidget, mShapeDDBtn);

        retranslateUi(WidgetEllipseBase);

        QMetaObject::connectSlotsByName(WidgetEllipseBase);
    } // setupUi

    void retranslateUi(QWidget *WidgetEllipseBase)
    {
        mSymbolWidthLabel->setText(QCoreApplication::translate("WidgetEllipseBase", "Symbol width", nullptr));
        label_8->setText(QCoreApplication::translate("WidgetEllipseBase", "Join style", nullptr));
        mSymbolHeightLabel->setText(QCoreApplication::translate("WidgetEllipseBase", "Symbol height", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetEllipseBase", "x", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetEllipseBase", "y", nullptr));
        mAnchorPointLabel->setText(QCoreApplication::translate("WidgetEllipseBase", "Anchor point", nullptr));
        label_9->setText(QCoreApplication::translate("WidgetEllipseBase", "Cap style", nullptr));
        mCapStyleDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetEllipseBase", "Offset", nullptr));
        mRotationLabel->setText(QCoreApplication::translate("WidgetEllipseBase", "Rotation", nullptr));
        mRotationSpinBox->setSuffix(QCoreApplication::translate("WidgetEllipseBase", " \302\260", nullptr));
        mSymbolWidthDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        mShapeDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetEllipseBase", "Fill color", nullptr));
        mRotationDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        mStrokeStyleLabel->setText(QCoreApplication::translate("WidgetEllipseBase", "Stroke style", nullptr));
        mStrokeStyleDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        mStrokeColorDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        mSymbolHeightDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        mJoinStyleDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        mOffsetDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        mVerticalAnchorDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        mHorizontalAnchorDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        mFillColorDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        btnChangeColorStroke->setText(QString());
        label->setText(QCoreApplication::translate("WidgetEllipseBase", "Stroke color", nullptr));
        btnChangeColorFill->setText(QString());
        mStrokeWidthLabel->setText(QCoreApplication::translate("WidgetEllipseBase", "Stroke width", nullptr));
        mStrokeWidthSpinBox->setSpecialValueText(QCoreApplication::translate("WidgetEllipseBase", "Hairline", nullptr));
        mStrokeWidthDDBtn->setText(QCoreApplication::translate("WidgetEllipseBase", "\342\200\246", nullptr));
        (void)WidgetEllipseBase;
    } // retranslateUi

};

namespace Ui {
    class WidgetEllipseBase: public Ui_WidgetEllipseBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_ELLIPSE_H
