/********************************************************************************
** Form generated from reading UI file 'qgsannotationpicturewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONPICTUREWIDGETBASE_H
#define UI_QGSANNOTATIONPICTUREWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsannotationitemcommonpropertieswidget.h"
#include "qgsdoublespinbox.h"
#include "qgsfilecontentsourcelineedit.h"
#include "qgsratiolockbutton.h"
#include "qgsstackedwidget.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationPictureWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsAnnotationItemCommonPropertiesWidget *mPropertiesWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mRadioRaster;
    QRadioButton *mRadioSVG;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *mBackgroundCheckbox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QgsSymbolButton *mBackgroundSymbolButton;
    QComboBox *mSizeModeCombo;
    QSpacerItem *verticalSpacer;
    QgsStackedWidget *mSizeStackedWidget;
    QWidget *mPageSpatialBounds;
    QGridLayout *gridLayout_4;
    QCheckBox *mLockAspectRatioCheck;
    QWidget *mPageFixedSize;
    QGridLayout *gridLayout_6;
    QLabel *label_10;
    QLabel *label_13;
    QgsDoubleSpinBox *mWidthSpinBox;
    QgsDoubleSpinBox *mHeightSpinBox;
    QLabel *label_11;
    QgsRatioLockButton *mLockAspectRatio;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QgsPictureSourceLineEditBase *mSourceLineEdit;
    QGroupBox *mFrameCheckbox;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QgsSymbolButton *mFrameSymbolButton;

    void setupUi(QWidget *QgsAnnotationPictureWidgetBase)
    {
        if (QgsAnnotationPictureWidgetBase->objectName().isEmpty())
            QgsAnnotationPictureWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationPictureWidgetBase"));
        QgsAnnotationPictureWidgetBase->resize(321, 575);
        gridLayout = new QGridLayout(QgsAnnotationPictureWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mPropertiesWidget = new QgsAnnotationItemCommonPropertiesWidget(QgsAnnotationPictureWidgetBase);
        mPropertiesWidget->setObjectName(QString::fromUtf8("mPropertiesWidget"));

        gridLayout->addWidget(mPropertiesWidget, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mRadioRaster = new QRadioButton(QgsAnnotationPictureWidgetBase);
        mRadioRaster->setObjectName(QString::fromUtf8("mRadioRaster"));

        horizontalLayout->addWidget(mRadioRaster);

        mRadioSVG = new QRadioButton(QgsAnnotationPictureWidgetBase);
        mRadioSVG->setObjectName(QString::fromUtf8("mRadioSVG"));
        mRadioSVG->setChecked(true);

        horizontalLayout->addWidget(mRadioSVG);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mBackgroundCheckbox = new QGroupBox(QgsAnnotationPictureWidgetBase);
        mBackgroundCheckbox->setObjectName(QString::fromUtf8("mBackgroundCheckbox"));
        mBackgroundCheckbox->setCheckable(true);
        gridLayout_2 = new QGridLayout(mBackgroundCheckbox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(mBackgroundCheckbox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mBackgroundSymbolButton = new QgsSymbolButton(mBackgroundCheckbox);
        mBackgroundSymbolButton->setObjectName(QString::fromUtf8("mBackgroundSymbolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mBackgroundSymbolButton->sizePolicy().hasHeightForWidth());
        mBackgroundSymbolButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mBackgroundSymbolButton, 0, 1, 1, 1);


        gridLayout->addWidget(mBackgroundCheckbox, 5, 0, 1, 1);

        mSizeModeCombo = new QComboBox(QgsAnnotationPictureWidgetBase);
        mSizeModeCombo->setObjectName(QString::fromUtf8("mSizeModeCombo"));

        gridLayout->addWidget(mSizeModeCombo, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);

        mSizeStackedWidget = new QgsStackedWidget(QgsAnnotationPictureWidgetBase);
        mSizeStackedWidget->setObjectName(QString::fromUtf8("mSizeStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSizeStackedWidget->sizePolicy().hasHeightForWidth());
        mSizeStackedWidget->setSizePolicy(sizePolicy1);
        mPageSpatialBounds = new QWidget();
        mPageSpatialBounds->setObjectName(QString::fromUtf8("mPageSpatialBounds"));
        sizePolicy1.setHeightForWidth(mPageSpatialBounds->sizePolicy().hasHeightForWidth());
        mPageSpatialBounds->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(mPageSpatialBounds);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        mLockAspectRatioCheck = new QCheckBox(mPageSpatialBounds);
        mLockAspectRatioCheck->setObjectName(QString::fromUtf8("mLockAspectRatioCheck"));

        gridLayout_4->addWidget(mLockAspectRatioCheck, 0, 0, 1, 1);

        mSizeStackedWidget->addWidget(mPageSpatialBounds);
        mPageFixedSize = new QWidget();
        mPageFixedSize->setObjectName(QString::fromUtf8("mPageFixedSize"));
        sizePolicy1.setHeightForWidth(mPageFixedSize->sizePolicy().hasHeightForWidth());
        mPageFixedSize->setSizePolicy(sizePolicy1);
        gridLayout_6 = new QGridLayout(mPageFixedSize);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_10 = new QLabel(mPageFixedSize);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 0, 0, 1, 1);

        label_13 = new QLabel(mPageFixedSize);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 2, 0, 1, 1);

        mWidthSpinBox = new QgsDoubleSpinBox(mPageFixedSize);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mWidthSpinBox->sizePolicy().hasHeightForWidth());
        mWidthSpinBox->setSizePolicy(sizePolicy2);
        mWidthSpinBox->setDecimals(6);
        mWidthSpinBox->setMaximum(100000.000000000000000);
        mWidthSpinBox->setSingleStep(0.200000000000000);
        mWidthSpinBox->setValue(1.000000000000000);
        mWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mWidthSpinBox, 0, 1, 1, 1);

        mHeightSpinBox = new QgsDoubleSpinBox(mPageFixedSize);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        sizePolicy2.setHeightForWidth(mHeightSpinBox->sizePolicy().hasHeightForWidth());
        mHeightSpinBox->setSizePolicy(sizePolicy2);
        mHeightSpinBox->setDecimals(6);
        mHeightSpinBox->setMaximum(100000.000000000000000);
        mHeightSpinBox->setSingleStep(0.200000000000000);
        mHeightSpinBox->setValue(1.000000000000000);
        mHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mHeightSpinBox, 1, 1, 1, 1);

        label_11 = new QLabel(mPageFixedSize);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);

        mLockAspectRatio = new QgsRatioLockButton(mPageFixedSize);
        mLockAspectRatio->setObjectName(QString::fromUtf8("mLockAspectRatio"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy3);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        gridLayout_6->addWidget(mLockAspectRatio, 0, 2, 2, 1);

        mSizeUnitWidget = new QgsUnitSelectionWidget(mPageFixedSize);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_6->addWidget(mSizeUnitWidget, 2, 1, 1, 1);

        mSizeStackedWidget->addWidget(mPageFixedSize);

        gridLayout->addWidget(mSizeStackedWidget, 3, 0, 1, 1);

        mSourceLineEdit = new QgsPictureSourceLineEditBase(QgsAnnotationPictureWidgetBase);
        mSourceLineEdit->setObjectName(QString::fromUtf8("mSourceLineEdit"));
        mSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mSourceLineEdit, 1, 0, 1, 1);

        mFrameCheckbox = new QGroupBox(QgsAnnotationPictureWidgetBase);
        mFrameCheckbox->setObjectName(QString::fromUtf8("mFrameCheckbox"));
        mFrameCheckbox->setCheckable(true);
        gridLayout_3 = new QGridLayout(mFrameCheckbox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(mFrameCheckbox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        mFrameSymbolButton = new QgsSymbolButton(mFrameCheckbox);
        mFrameSymbolButton->setObjectName(QString::fromUtf8("mFrameSymbolButton"));
        sizePolicy.setHeightForWidth(mFrameSymbolButton->sizePolicy().hasHeightForWidth());
        mFrameSymbolButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mFrameSymbolButton, 0, 1, 1, 1);


        gridLayout->addWidget(mFrameCheckbox, 4, 0, 1, 1);

        QWidget::setTabOrder(mRadioRaster, mRadioSVG);
        QWidget::setTabOrder(mRadioSVG, mSourceLineEdit);
        QWidget::setTabOrder(mSourceLineEdit, mSizeModeCombo);
        QWidget::setTabOrder(mSizeModeCombo, mLockAspectRatioCheck);
        QWidget::setTabOrder(mLockAspectRatioCheck, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mLockAspectRatio);
        QWidget::setTabOrder(mLockAspectRatio, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mFrameCheckbox);
        QWidget::setTabOrder(mFrameCheckbox, mFrameSymbolButton);
        QWidget::setTabOrder(mFrameSymbolButton, mBackgroundCheckbox);
        QWidget::setTabOrder(mBackgroundCheckbox, mBackgroundSymbolButton);

        retranslateUi(QgsAnnotationPictureWidgetBase);

        mSizeStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsAnnotationPictureWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationPictureWidgetBase)
    {
        QgsAnnotationPictureWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Point Text Annotation", nullptr));
        mRadioRaster->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Raster image", nullptr));
        mRadioSVG->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "SVG image", nullptr));
        mBackgroundCheckbox->setTitle(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Background", nullptr));
        label->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Symbol", nullptr));
        mBackgroundSymbolButton->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Change\342\200\246", nullptr));
        mLockAspectRatioCheck->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Lock aspect ratio", nullptr));
        label_10->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Width", nullptr));
        label_13->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Unit", nullptr));
        label_11->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Height", nullptr));
#if QT_CONFIG(tooltip)
        mLockAspectRatio->setToolTip(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Lock aspect ratio", nullptr));
#endif // QT_CONFIG(tooltip)
        mFrameCheckbox->setTitle(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Frame", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Symbol", nullptr));
        mFrameSymbolButton->setText(QCoreApplication::translate("QgsAnnotationPictureWidgetBase", "Change\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationPictureWidgetBase: public Ui_QgsAnnotationPictureWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONPICTUREWIDGETBASE_H
