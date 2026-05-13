/********************************************************************************
** Form generated from reading UI file 'qgsmeshelevationpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHELEVATIONPROPERTIESWIDGETBASE_H
#define UI_QGSMESHELEVATIONPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsstackedwidget.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshElevationPropertiesWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QLabel *mConfigurationLabel;
    QComboBox *mModeComboBox;
    QgsCollapsibleGroupBox *mProfileChartGroupBox;
    QGridLayout *gridLayout_3;
    QComboBox *mStyleComboBox;
    QLabel *mStyleLabel;
    QgsStackedWidget *mSymbologyStackedWidget;
    QWidget *mPageLine;
    QGridLayout *gridLayout;
    QLabel *mLineStyleLabel;
    QgsSymbolButton *mLineStyleButton;
    QWidget *mPageFill;
    QGridLayout *gridLayout_4;
    QLabel *mLimitLabel;
    QLabel *mFillStyleLabel;
    QgsDoubleSpinBox *mElevationLimitSpinBox;
    QgsSymbolButton *mFillStyleButton;
    QSpacerItem *verticalSpacer;
    QgsStackedWidget *mStackedWidget;
    QWidget *mPageFromVertices;
    QGridLayout *gridLayout_5;
    QLabel *mScaleLabel;
    QLabel *mFromVerticesLabel;
    QgsDoubleSpinBox *mOffsetZSpinBox;
    QLabel *mOffsetLabel;
    QgsDoubleSpinBox *mScaleZSpinBox;
    QWidget *mPageFixedRange;
    QGridLayout *gridLayout_6;
    QLabel *mLowerLabel;
    QComboBox *mLimitsComboBox;
    QLabel *mUpperLabel;
    QLabel *mLimitsLabel;
    QgsDoubleSpinBox *mFixedUpperSpinBox;
    QgsDoubleSpinBox *mFixedLowerSpinBox;
    QLabel *mFixedRangeLabel;
    QWidget *mPageFixedRangePerGroup;
    QVBoxLayout *verticalLayout;
    QLabel *mFixedRangePerBandLabel;
    QTableView *mGroupElevationTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mCalculateFixedRangePerGroupButton;

    void setupUi(QWidget *QgsMeshElevationPropertiesWidgetBase)
    {
        if (QgsMeshElevationPropertiesWidgetBase->objectName().isEmpty())
            QgsMeshElevationPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsMeshElevationPropertiesWidgetBase"));
        QgsMeshElevationPropertiesWidgetBase->resize(515, 424);
        gridLayout_2 = new QGridLayout(QgsMeshElevationPropertiesWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mConfigurationLabel = new QLabel(QgsMeshElevationPropertiesWidgetBase);
        mConfigurationLabel->setObjectName(QString::fromUtf8("mConfigurationLabel"));

        gridLayout_2->addWidget(mConfigurationLabel, 0, 0, 1, 1);

        mModeComboBox = new QComboBox(QgsMeshElevationPropertiesWidgetBase);
        mModeComboBox->setObjectName(QString::fromUtf8("mModeComboBox"));

        gridLayout_2->addWidget(mModeComboBox, 0, 1, 1, 1);

        mProfileChartGroupBox = new QgsCollapsibleGroupBox(QgsMeshElevationPropertiesWidgetBase);
        mProfileChartGroupBox->setObjectName(QString::fromUtf8("mProfileChartGroupBox"));
        gridLayout_3 = new QGridLayout(mProfileChartGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mStyleComboBox = new QComboBox(mProfileChartGroupBox);
        mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

        gridLayout_3->addWidget(mStyleComboBox, 0, 1, 1, 1);

        mStyleLabel = new QLabel(mProfileChartGroupBox);
        mStyleLabel->setObjectName(QString::fromUtf8("mStyleLabel"));

        gridLayout_3->addWidget(mStyleLabel, 0, 0, 1, 1);

        mSymbologyStackedWidget = new QgsStackedWidget(mProfileChartGroupBox);
        mSymbologyStackedWidget->setObjectName(QString::fromUtf8("mSymbologyStackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSymbologyStackedWidget->sizePolicy().hasHeightForWidth());
        mSymbologyStackedWidget->setSizePolicy(sizePolicy);
        mPageLine = new QWidget();
        mPageLine->setObjectName(QString::fromUtf8("mPageLine"));
        gridLayout = new QGridLayout(mPageLine);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mLineStyleLabel = new QLabel(mPageLine);
        mLineStyleLabel->setObjectName(QString::fromUtf8("mLineStyleLabel"));

        gridLayout->addWidget(mLineStyleLabel, 0, 0, 1, 1);

        mLineStyleButton = new QgsSymbolButton(mPageLine);
        mLineStyleButton->setObjectName(QString::fromUtf8("mLineStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineStyleButton->sizePolicy().hasHeightForWidth());
        mLineStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLineStyleButton, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageLine);
        mPageFill = new QWidget();
        mPageFill->setObjectName(QString::fromUtf8("mPageFill"));
        gridLayout_4 = new QGridLayout(mPageFill);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        mLimitLabel = new QLabel(mPageFill);
        mLimitLabel->setObjectName(QString::fromUtf8("mLimitLabel"));

        gridLayout_4->addWidget(mLimitLabel, 1, 0, 1, 1);

        mFillStyleLabel = new QLabel(mPageFill);
        mFillStyleLabel->setObjectName(QString::fromUtf8("mFillStyleLabel"));

        gridLayout_4->addWidget(mFillStyleLabel, 0, 0, 1, 1);

        mElevationLimitSpinBox = new QgsDoubleSpinBox(mPageFill);
        mElevationLimitSpinBox->setObjectName(QString::fromUtf8("mElevationLimitSpinBox"));
        mElevationLimitSpinBox->setDecimals(6);
        mElevationLimitSpinBox->setMinimum(-99999.000000000000000);
        mElevationLimitSpinBox->setMaximum(99999.000000000000000);

        gridLayout_4->addWidget(mElevationLimitSpinBox, 1, 1, 1, 1);

        mFillStyleButton = new QgsSymbolButton(mPageFill);
        mFillStyleButton->setObjectName(QString::fromUtf8("mFillStyleButton"));
        sizePolicy1.setHeightForWidth(mFillStyleButton->sizePolicy().hasHeightForWidth());
        mFillStyleButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(mFillStyleButton, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);
        mSymbologyStackedWidget->addWidget(mPageFill);

        gridLayout_3->addWidget(mSymbologyStackedWidget, 1, 0, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);

        gridLayout_2->addWidget(mProfileChartGroupBox, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        mStackedWidget = new QgsStackedWidget(QgsMeshElevationPropertiesWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        sizePolicy.setHeightForWidth(mStackedWidget->sizePolicy().hasHeightForWidth());
        mStackedWidget->setSizePolicy(sizePolicy);
        mStackedWidget->setFrameShape(QFrame::NoFrame);
        mPageFromVertices = new QWidget();
        mPageFromVertices->setObjectName(QString::fromUtf8("mPageFromVertices"));
        sizePolicy.setHeightForWidth(mPageFromVertices->sizePolicy().hasHeightForWidth());
        mPageFromVertices->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(mPageFromVertices);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mScaleLabel = new QLabel(mPageFromVertices);
        mScaleLabel->setObjectName(QString::fromUtf8("mScaleLabel"));

        gridLayout_5->addWidget(mScaleLabel, 1, 0, 1, 1);

        mFromVerticesLabel = new QLabel(mPageFromVertices);
        mFromVerticesLabel->setObjectName(QString::fromUtf8("mFromVerticesLabel"));
        sizePolicy.setHeightForWidth(mFromVerticesLabel->sizePolicy().hasHeightForWidth());
        mFromVerticesLabel->setSizePolicy(sizePolicy);
        mFromVerticesLabel->setWordWrap(true);

        gridLayout_5->addWidget(mFromVerticesLabel, 0, 0, 1, 2);

        mOffsetZSpinBox = new QgsDoubleSpinBox(mPageFromVertices);
        mOffsetZSpinBox->setObjectName(QString::fromUtf8("mOffsetZSpinBox"));
        mOffsetZSpinBox->setDecimals(6);
        mOffsetZSpinBox->setMinimum(-99999999999.000000000000000);
        mOffsetZSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_5->addWidget(mOffsetZSpinBox, 2, 1, 1, 1);

        mOffsetLabel = new QLabel(mPageFromVertices);
        mOffsetLabel->setObjectName(QString::fromUtf8("mOffsetLabel"));

        gridLayout_5->addWidget(mOffsetLabel, 2, 0, 1, 1);

        mScaleZSpinBox = new QgsDoubleSpinBox(mPageFromVertices);
        mScaleZSpinBox->setObjectName(QString::fromUtf8("mScaleZSpinBox"));
        mScaleZSpinBox->setDecimals(6);
        mScaleZSpinBox->setMinimum(-99999999999.000000000000000);
        mScaleZSpinBox->setMaximum(99999999999.000000000000000);
        mScaleZSpinBox->setValue(1.000000000000000);

        gridLayout_5->addWidget(mScaleZSpinBox, 1, 1, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageFromVertices);
        mPageFixedRange = new QWidget();
        mPageFixedRange->setObjectName(QString::fromUtf8("mPageFixedRange"));
        sizePolicy.setHeightForWidth(mPageFixedRange->sizePolicy().hasHeightForWidth());
        mPageFixedRange->setSizePolicy(sizePolicy);
        mPageFixedRange->setAutoFillBackground(false);
        gridLayout_6 = new QGridLayout(mPageFixedRange);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mLowerLabel = new QLabel(mPageFixedRange);
        mLowerLabel->setObjectName(QString::fromUtf8("mLowerLabel"));

        gridLayout_6->addWidget(mLowerLabel, 1, 0, 1, 1);

        mLimitsComboBox = new QComboBox(mPageFixedRange);
        mLimitsComboBox->setObjectName(QString::fromUtf8("mLimitsComboBox"));

        gridLayout_6->addWidget(mLimitsComboBox, 3, 1, 1, 1);

        mUpperLabel = new QLabel(mPageFixedRange);
        mUpperLabel->setObjectName(QString::fromUtf8("mUpperLabel"));

        gridLayout_6->addWidget(mUpperLabel, 2, 0, 1, 1);

        mLimitsLabel = new QLabel(mPageFixedRange);
        mLimitsLabel->setObjectName(QString::fromUtf8("mLimitsLabel"));

        gridLayout_6->addWidget(mLimitsLabel, 3, 0, 1, 1);

        mFixedUpperSpinBox = new QgsDoubleSpinBox(mPageFixedRange);
        mFixedUpperSpinBox->setObjectName(QString::fromUtf8("mFixedUpperSpinBox"));
        mFixedUpperSpinBox->setDecimals(4);
        mFixedUpperSpinBox->setMinimum(-9999999998.000000000000000);
        mFixedUpperSpinBox->setMaximum(9999999999.000000000000000);

        gridLayout_6->addWidget(mFixedUpperSpinBox, 2, 1, 1, 1);

        mFixedLowerSpinBox = new QgsDoubleSpinBox(mPageFixedRange);
        mFixedLowerSpinBox->setObjectName(QString::fromUtf8("mFixedLowerSpinBox"));
        mFixedLowerSpinBox->setDecimals(4);
        mFixedLowerSpinBox->setMinimum(-9999999998.000000000000000);
        mFixedLowerSpinBox->setMaximum(9999999999.000000000000000);

        gridLayout_6->addWidget(mFixedLowerSpinBox, 1, 1, 1, 1);

        mFixedRangeLabel = new QLabel(mPageFixedRange);
        mFixedRangeLabel->setObjectName(QString::fromUtf8("mFixedRangeLabel"));
        sizePolicy.setHeightForWidth(mFixedRangeLabel->sizePolicy().hasHeightForWidth());
        mFixedRangeLabel->setSizePolicy(sizePolicy);
        mFixedRangeLabel->setWordWrap(true);

        gridLayout_6->addWidget(mFixedRangeLabel, 0, 0, 1, 2);

        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(1, 2);
        mStackedWidget->addWidget(mPageFixedRange);
        mPageFixedRangePerGroup = new QWidget();
        mPageFixedRangePerGroup->setObjectName(QString::fromUtf8("mPageFixedRangePerGroup"));
        verticalLayout = new QVBoxLayout(mPageFixedRangePerGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mFixedRangePerBandLabel = new QLabel(mPageFixedRangePerGroup);
        mFixedRangePerBandLabel->setObjectName(QString::fromUtf8("mFixedRangePerBandLabel"));
        sizePolicy.setHeightForWidth(mFixedRangePerBandLabel->sizePolicy().hasHeightForWidth());
        mFixedRangePerBandLabel->setSizePolicy(sizePolicy);
        mFixedRangePerBandLabel->setWordWrap(true);

        verticalLayout->addWidget(mFixedRangePerBandLabel);

        mGroupElevationTable = new QTableView(mPageFixedRangePerGroup);
        mGroupElevationTable->setObjectName(QString::fromUtf8("mGroupElevationTable"));

        verticalLayout->addWidget(mGroupElevationTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(494, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mCalculateFixedRangePerGroupButton = new QToolButton(mPageFixedRangePerGroup);
        mCalculateFixedRangePerGroupButton->setObjectName(QString::fromUtf8("mCalculateFixedRangePerGroupButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCalculateFixedRangePerGroupButton->setIcon(icon);
        mCalculateFixedRangePerGroupButton->setPopupMode(QToolButton::MenuButtonPopup);
        mCalculateFixedRangePerGroupButton->setAutoRaise(false);

        horizontalLayout->addWidget(mCalculateFixedRangePerGroupButton);


        verticalLayout->addLayout(horizontalLayout);

        mStackedWidget->addWidget(mPageFixedRangePerGroup);

        gridLayout_2->addWidget(mStackedWidget, 1, 0, 1, 2);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        retranslateUi(QgsMeshElevationPropertiesWidgetBase);

        mSymbologyStackedWidget->setCurrentIndex(0);
        mStackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QgsMeshElevationPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshElevationPropertiesWidgetBase)
    {
        QgsMeshElevationPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Mesh Elevation Properties", nullptr));
        mConfigurationLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Configuration", nullptr));
        mProfileChartGroupBox->setTitle(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Profile Chart Appearance", nullptr));
        mStyleLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Style", nullptr));
        mLineStyleLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Line style", nullptr));
        mLineStyleButton->setText(QString());
        mLimitLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Limit", nullptr));
        mFillStyleLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Fill style", nullptr));
        mFillStyleButton->setText(QString());
        mScaleLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Scale", nullptr));
        mFromVerticesLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The elevation will be taken from the mesh vertices.</span></p><p>Elevation scaling and offset can be used to manually correct elevation values from the layer. The scale is applied to the raster values before adding the offset.</p></body></html>", nullptr));
        mOffsetLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Offset", nullptr));
        mLowerLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Lower", nullptr));
        mUpperLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Upper", nullptr));
        mLimitsLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "Limits", nullptr));
        mFixedRangeLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">The mesh layer is associated with a fixed elevation range.</span></p><p>This mode can be used when a layer has a single fixed elevation, or a range (slice) of elevation values. If a range is specified, mesh values will be extruded over this range.</p></body></html>", nullptr));
        mFixedRangePerBandLabel->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Each group in the mesh layer is associated with a fixed elevation range.</span></p><p>This mode can be used when a layer has elevation data exposed through different dataset groups.</p></body></html>", nullptr));
        mCalculateFixedRangePerGroupButton->setText(QCoreApplication::translate("QgsMeshElevationPropertiesWidgetBase", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMeshElevationPropertiesWidgetBase: public Ui_QgsMeshElevationPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHELEVATIONPROPERTIESWIDGETBASE_H
