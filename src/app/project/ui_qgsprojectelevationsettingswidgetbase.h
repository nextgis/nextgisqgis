/********************************************************************************
** Form generated from reading UI file 'qgsprojectelevationsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTELEVATIONSETTINGSWIDGETBASE_H
#define UI_QGSPROJECTELEVATIONSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsmaplayercombobox.h"
#include "qgsmessagebar.h"
#include "qgsscrollarea.h"
#include "qgsstackedwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectElevationSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QgsMessageBar *mMessageBar;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QgsStackedWidget *mVerticalCrsStackedWidget;
    QWidget *mCrsPageDisabled;
    QVBoxLayout *verticalLayout_3;
    QLabel *mCrsDisabledLabel;
    QWidget *mCrsPageEnabled;
    QGroupBox *mElevationRangeCheckBox;
    QGridLayout *gridLayout_6;
    QgsDoubleSpinBox *mElevationUpperSpin;
    QgsDoubleSpinBox *mElevationLowerSpin;
    QLabel *mEndDateTimeLabel_2;
    QLabel *mStartDateTimeLabel_2;
    QLabel *label;
    QgsCollapsibleGroupBox *mTerrainGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *labelTerrainType;
    QComboBox *mComboTerrainType;
    QgsStackedWidget *mStackedWidget;
    QWidget *mPageFlat;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QgsDoubleSpinBox *mFlatHeightSpinBox;
    QWidget *mPageRasterDem;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QLabel *labelTerrainScale;
    QgsDoubleSpinBox *mDemOffsetSpinBox;
    QgsMapLayerComboBox *mComboDemLayer;
    QgsDoubleSpinBox *mDemScaleSpinBox;
    QLabel *labelTerrainLayer;
    QWidget *mPageMesh;
    QGridLayout *gridLayout_3;
    QLabel *labelTerrainScale_2;
    QLabel *labelTerrainLayer_2;
    QgsDoubleSpinBox *mMeshOffsetSpinBox;
    QgsMapLayerComboBox *mComboMeshLayer;
    QgsDoubleSpinBox *mMeshScaleSpinBox;
    QLabel *label_15;
    QVBoxLayout *mElevationShadingSettingsLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsProjectElevationSettingsWidgetBase)
    {
        if (QgsProjectElevationSettingsWidgetBase->objectName().isEmpty())
            QgsProjectElevationSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsProjectElevationSettingsWidgetBase"));
        QgsProjectElevationSettingsWidgetBase->resize(504, 445);
        verticalLayout = new QVBoxLayout(QgsProjectElevationSettingsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsProjectElevationSettingsWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 504, 447));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mMessageBar = new QgsMessageBar(scrollAreaWidgetContents);
        mMessageBar->setObjectName(QString::fromUtf8("mMessageBar"));

        verticalLayout_4->addWidget(mMessageBar);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mVerticalCrsStackedWidget = new QgsStackedWidget(groupBox_2);
        mVerticalCrsStackedWidget->setObjectName(QString::fromUtf8("mVerticalCrsStackedWidget"));
        mCrsPageDisabled = new QWidget();
        mCrsPageDisabled->setObjectName(QString::fromUtf8("mCrsPageDisabled"));
        verticalLayout_3 = new QVBoxLayout(mCrsPageDisabled);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mCrsDisabledLabel = new QLabel(mCrsPageDisabled);
        mCrsDisabledLabel->setObjectName(QString::fromUtf8("mCrsDisabledLabel"));
        mCrsDisabledLabel->setWordWrap(true);

        verticalLayout_3->addWidget(mCrsDisabledLabel);

        mVerticalCrsStackedWidget->addWidget(mCrsPageDisabled);
        mCrsPageEnabled = new QWidget();
        mCrsPageEnabled->setObjectName(QString::fromUtf8("mCrsPageEnabled"));
        mVerticalCrsStackedWidget->addWidget(mCrsPageEnabled);

        verticalLayout_2->addWidget(mVerticalCrsStackedWidget);


        verticalLayout_4->addWidget(groupBox_2);

        mElevationRangeCheckBox = new QGroupBox(scrollAreaWidgetContents);
        mElevationRangeCheckBox->setObjectName(QString::fromUtf8("mElevationRangeCheckBox"));
        mElevationRangeCheckBox->setCheckable(false);
        mElevationRangeCheckBox->setChecked(false);
        mElevationRangeCheckBox->setProperty("collapsed", QVariant(true));
        mElevationRangeCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout_6 = new QGridLayout(mElevationRangeCheckBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mElevationUpperSpin = new QgsDoubleSpinBox(mElevationRangeCheckBox);
        mElevationUpperSpin->setObjectName(QString::fromUtf8("mElevationUpperSpin"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mElevationUpperSpin->sizePolicy().hasHeightForWidth());
        mElevationUpperSpin->setSizePolicy(sizePolicy);
        mElevationUpperSpin->setDecimals(4);
        mElevationUpperSpin->setMinimum(-9999999999.000000000000000);
        mElevationUpperSpin->setMaximum(9999999999.000000000000000);

        gridLayout_6->addWidget(mElevationUpperSpin, 2, 1, 1, 1);

        mElevationLowerSpin = new QgsDoubleSpinBox(mElevationRangeCheckBox);
        mElevationLowerSpin->setObjectName(QString::fromUtf8("mElevationLowerSpin"));
        sizePolicy.setHeightForWidth(mElevationLowerSpin->sizePolicy().hasHeightForWidth());
        mElevationLowerSpin->setSizePolicy(sizePolicy);
        mElevationLowerSpin->setDecimals(4);
        mElevationLowerSpin->setMinimum(-9999999999.000000000000000);
        mElevationLowerSpin->setMaximum(9999999999.000000000000000);

        gridLayout_6->addWidget(mElevationLowerSpin, 1, 1, 1, 1);

        mEndDateTimeLabel_2 = new QLabel(mElevationRangeCheckBox);
        mEndDateTimeLabel_2->setObjectName(QString::fromUtf8("mEndDateTimeLabel_2"));
        mEndDateTimeLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mEndDateTimeLabel_2, 2, 0, 1, 1);

        mStartDateTimeLabel_2 = new QLabel(mElevationRangeCheckBox);
        mStartDateTimeLabel_2->setObjectName(QString::fromUtf8("mStartDateTimeLabel_2"));
        mStartDateTimeLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mStartDateTimeLabel_2, 1, 0, 1, 1);

        label = new QLabel(mElevationRangeCheckBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_6->addWidget(label, 0, 0, 1, 2);

        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(1, 2);

        verticalLayout_4->addWidget(mElevationRangeCheckBox);

        mTerrainGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mTerrainGroupBox->setObjectName(QString::fromUtf8("mTerrainGroupBox"));
        gridLayout_4 = new QGridLayout(mTerrainGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        labelTerrainType = new QLabel(mTerrainGroupBox);
        labelTerrainType->setObjectName(QString::fromUtf8("labelTerrainType"));

        gridLayout_4->addWidget(labelTerrainType, 0, 0, 1, 1);

        mComboTerrainType = new QComboBox(mTerrainGroupBox);
        mComboTerrainType->setObjectName(QString::fromUtf8("mComboTerrainType"));

        gridLayout_4->addWidget(mComboTerrainType, 0, 1, 1, 1);

        mStackedWidget = new QgsStackedWidget(mTerrainGroupBox);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        mPageFlat = new QWidget();
        mPageFlat->setObjectName(QString::fromUtf8("mPageFlat"));
        gridLayout = new QGridLayout(mPageFlat);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(mPageFlat);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        mFlatHeightSpinBox = new QgsDoubleSpinBox(mPageFlat);
        mFlatHeightSpinBox->setObjectName(QString::fromUtf8("mFlatHeightSpinBox"));
        mFlatHeightSpinBox->setMinimum(-1000000.000000000000000);
        mFlatHeightSpinBox->setMaximum(1000000.000000000000000);

        gridLayout->addWidget(mFlatHeightSpinBox, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageFlat);
        mPageRasterDem = new QWidget();
        mPageRasterDem->setObjectName(QString::fromUtf8("mPageRasterDem"));
        gridLayout_2 = new QGridLayout(mPageRasterDem);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(mPageRasterDem);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        labelTerrainScale = new QLabel(mPageRasterDem);
        labelTerrainScale->setObjectName(QString::fromUtf8("labelTerrainScale"));

        gridLayout_2->addWidget(labelTerrainScale, 1, 0, 1, 1);

        mDemOffsetSpinBox = new QgsDoubleSpinBox(mPageRasterDem);
        mDemOffsetSpinBox->setObjectName(QString::fromUtf8("mDemOffsetSpinBox"));
        mDemOffsetSpinBox->setMinimum(-1000000.000000000000000);
        mDemOffsetSpinBox->setMaximum(1000000.000000000000000);

        gridLayout_2->addWidget(mDemOffsetSpinBox, 2, 1, 1, 1);

        mComboDemLayer = new QgsMapLayerComboBox(mPageRasterDem);
        mComboDemLayer->setObjectName(QString::fromUtf8("mComboDemLayer"));

        gridLayout_2->addWidget(mComboDemLayer, 0, 1, 1, 1);

        mDemScaleSpinBox = new QgsDoubleSpinBox(mPageRasterDem);
        mDemScaleSpinBox->setObjectName(QString::fromUtf8("mDemScaleSpinBox"));
        mDemScaleSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(mDemScaleSpinBox, 1, 1, 1, 1);

        labelTerrainLayer = new QLabel(mPageRasterDem);
        labelTerrainLayer->setObjectName(QString::fromUtf8("labelTerrainLayer"));

        gridLayout_2->addWidget(labelTerrainLayer, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageRasterDem);
        mPageMesh = new QWidget();
        mPageMesh->setObjectName(QString::fromUtf8("mPageMesh"));
        gridLayout_3 = new QGridLayout(mPageMesh);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        labelTerrainScale_2 = new QLabel(mPageMesh);
        labelTerrainScale_2->setObjectName(QString::fromUtf8("labelTerrainScale_2"));

        gridLayout_3->addWidget(labelTerrainScale_2, 1, 0, 1, 1);

        labelTerrainLayer_2 = new QLabel(mPageMesh);
        labelTerrainLayer_2->setObjectName(QString::fromUtf8("labelTerrainLayer_2"));

        gridLayout_3->addWidget(labelTerrainLayer_2, 0, 0, 1, 1);

        mMeshOffsetSpinBox = new QgsDoubleSpinBox(mPageMesh);
        mMeshOffsetSpinBox->setObjectName(QString::fromUtf8("mMeshOffsetSpinBox"));
        mMeshOffsetSpinBox->setMinimum(-1000000.000000000000000);
        mMeshOffsetSpinBox->setMaximum(1000000.000000000000000);

        gridLayout_3->addWidget(mMeshOffsetSpinBox, 2, 1, 1, 1);

        mComboMeshLayer = new QgsMapLayerComboBox(mPageMesh);
        mComboMeshLayer->setObjectName(QString::fromUtf8("mComboMeshLayer"));

        gridLayout_3->addWidget(mComboMeshLayer, 0, 1, 1, 1);

        mMeshScaleSpinBox = new QgsDoubleSpinBox(mPageMesh);
        mMeshScaleSpinBox->setObjectName(QString::fromUtf8("mMeshScaleSpinBox"));
        mMeshScaleSpinBox->setValue(1.000000000000000);

        gridLayout_3->addWidget(mMeshScaleSpinBox, 1, 1, 1, 1);

        label_15 = new QLabel(mPageMesh);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 2, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageMesh);

        gridLayout_4->addWidget(mStackedWidget, 1, 0, 1, 2);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);

        verticalLayout_4->addWidget(mTerrainGroupBox);

        mElevationShadingSettingsLayout = new QVBoxLayout();
        mElevationShadingSettingsLayout->setObjectName(QString::fromUtf8("mElevationShadingSettingsLayout"));

        verticalLayout_4->addLayout(mElevationShadingSettingsLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(mComboTerrainType, mFlatHeightSpinBox);
        QWidget::setTabOrder(mFlatHeightSpinBox, mDemOffsetSpinBox);
        QWidget::setTabOrder(mDemOffsetSpinBox, mComboDemLayer);
        QWidget::setTabOrder(mComboDemLayer, mDemScaleSpinBox);
        QWidget::setTabOrder(mDemScaleSpinBox, mMeshOffsetSpinBox);
        QWidget::setTabOrder(mMeshOffsetSpinBox, mComboMeshLayer);
        QWidget::setTabOrder(mComboMeshLayer, mMeshScaleSpinBox);
        QWidget::setTabOrder(mMeshScaleSpinBox, mElevationLowerSpin);
        QWidget::setTabOrder(mElevationLowerSpin, mElevationUpperSpin);

        retranslateUi(QgsProjectElevationSettingsWidgetBase);

        mVerticalCrsStackedWidget->setCurrentIndex(1);
        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsProjectElevationSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProjectElevationSettingsWidgetBase)
    {
        QgsProjectElevationSettingsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Project Elevation Settings", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Vertical Reference System", nullptr));
        mCrsDisabledLabel->setText(QString());
        mElevationRangeCheckBox->setTitle(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Elevation Range", nullptr));
#if QT_CONFIG(tooltip)
        mElevationUpperSpin->setToolTip(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Maximum elevation of interest", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mElevationLowerSpin->setToolTip(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Minimum elevation of interest", nullptr));
#endif // QT_CONFIG(tooltip)
        mEndDateTimeLabel_2->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Upper", nullptr));
        mStartDateTimeLabel_2->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Lower", nullptr));
        label->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "When set, these heights define the upper and lower elevation limits for the area of interest in this project.", nullptr));
        mTerrainGroupBox->setTitle(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Terrain", nullptr));
        labelTerrainType->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Type", nullptr));
        label_13->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Terrain height", nullptr));
        label_14->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Offset", nullptr));
        labelTerrainScale->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Vertical scale", nullptr));
        labelTerrainLayer->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "DEM layer", nullptr));
        labelTerrainScale_2->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Vertical scale", nullptr));
        labelTerrainLayer_2->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Mesh layer", nullptr));
        label_15->setText(QCoreApplication::translate("QgsProjectElevationSettingsWidgetBase", "Offset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectElevationSettingsWidgetBase: public Ui_QgsProjectElevationSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTELEVATIONSETTINGSWIDGETBASE_H
