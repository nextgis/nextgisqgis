/********************************************************************************
** Form generated from reading UI file 'qgsrasterrenderingoptionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERRENDERINGOPTIONSBASE_H
#define UI_QGSRASTERRENDERINGOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterRenderingOptionsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget;
    QGridLayout *gridLayout_35;
    QLabel *lbldefaultZoomedInResampling;
    QLabel *lbldefaultZoomedOutResampling;
    QLabel *label_21;
    QLabel *lbldefaultOversampling;
    QComboBox *mZoomedInResamplingComboBox;
    QGridLayout *bandsGridLayout;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QgsSpinBox *spnRed;
    QgsSpinBox *spnGreen;
    QgsSpinBox *spnBlue;
    QComboBox *mZoomedOutResamplingComboBox;
    QgsDoubleSpinBox *spnOversampling;
    QCheckBox *mCbEarlyResampling;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_2;
    QComboBox *cboxContrastEnhancementLimitsSingleBand;
    QComboBox *cboxContrastEnhancementAlgorithmMultiBandSingleByte;
    QgsDoubleSpinBox *mRasterCumulativeCutUpperDoubleSpinBox;
    QLabel *label_35;
    QComboBox *cboxContrastEnhancementAlgorithmSingleBand;
    QLabel *label_50;
    QComboBox *cboxContrastEnhancementLimitsMultiBandSingleByte;
    QLabel *label_25;
    QComboBox *cboxContrastEnhancementLimitsMultiBandMultiByte;
    QLabel *label_51;
    QLabel *label_34;
    QLabel *label_36;
    QLabel *label_37;
    QFrame *line;
    QgsDoubleSpinBox *mRasterCumulativeCutLowerDoubleSpinBox;
    QLabel *label_38;
    QLabel *label_39;
    QComboBox *cboxContrastEnhancementAlgorithmMultiBandMultiByte;
    QgsDoubleSpinBox *spnThreeBandStdDev;

    void setupUi(QWidget *QgsRasterRenderingOptionsWidgetBase)
    {
        if (QgsRasterRenderingOptionsWidgetBase->objectName().isEmpty())
            QgsRasterRenderingOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsRasterRenderingOptionsWidgetBase"));
        QgsRasterRenderingOptionsWidgetBase->resize(612, 534);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsRasterRenderingOptionsWidgetBase->sizePolicy().hasHeightForWidth());
        QgsRasterRenderingOptionsWidgetBase->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QgsRasterRenderingOptionsWidgetBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_14 = new QgsCollapsibleGroupBox(QgsRasterRenderingOptionsWidgetBase);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        verticalLayout_10 = new QVBoxLayout(groupBox_14);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        widget = new QWidget(groupBox_14);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_35 = new QGridLayout(widget);
        gridLayout_35->setSpacing(6);
        gridLayout_35->setContentsMargins(11, 11, 11, 11);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        gridLayout_35->setContentsMargins(0, 0, 0, 0);
        lbldefaultZoomedInResampling = new QLabel(widget);
        lbldefaultZoomedInResampling->setObjectName(QString::fromUtf8("lbldefaultZoomedInResampling"));

        gridLayout_35->addWidget(lbldefaultZoomedInResampling, 1, 0, 1, 1);

        lbldefaultZoomedOutResampling = new QLabel(widget);
        lbldefaultZoomedOutResampling->setObjectName(QString::fromUtf8("lbldefaultZoomedOutResampling"));

        gridLayout_35->addWidget(lbldefaultZoomedOutResampling, 2, 0, 1, 1);

        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_35->addWidget(label_21, 0, 0, 1, 1);

        lbldefaultOversampling = new QLabel(widget);
        lbldefaultOversampling->setObjectName(QString::fromUtf8("lbldefaultOversampling"));

        gridLayout_35->addWidget(lbldefaultOversampling, 3, 0, 1, 1);

        mZoomedInResamplingComboBox = new QComboBox(widget);
        mZoomedInResamplingComboBox->setObjectName(QString::fromUtf8("mZoomedInResamplingComboBox"));

        gridLayout_35->addWidget(mZoomedInResamplingComboBox, 1, 1, 1, 6);

        bandsGridLayout = new QGridLayout();
        bandsGridLayout->setSpacing(6);
        bandsGridLayout->setObjectName(QString::fromUtf8("bandsGridLayout"));
        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        bandsGridLayout->addWidget(label_22, 0, 0, 1, 1);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        bandsGridLayout->addWidget(label_23, 1, 0, 1, 1);

        label_24 = new QLabel(widget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        bandsGridLayout->addWidget(label_24, 2, 0, 1, 1);

        spnRed = new QgsSpinBox(widget);
        spnRed->setObjectName(QString::fromUtf8("spnRed"));

        bandsGridLayout->addWidget(spnRed, 0, 1, 1, 1);

        spnGreen = new QgsSpinBox(widget);
        spnGreen->setObjectName(QString::fromUtf8("spnGreen"));

        bandsGridLayout->addWidget(spnGreen, 1, 1, 1, 1);

        spnBlue = new QgsSpinBox(widget);
        spnBlue->setObjectName(QString::fromUtf8("spnBlue"));

        bandsGridLayout->addWidget(spnBlue, 2, 1, 1, 1);


        gridLayout_35->addLayout(bandsGridLayout, 0, 1, 1, 1);

        mZoomedOutResamplingComboBox = new QComboBox(widget);
        mZoomedOutResamplingComboBox->setObjectName(QString::fromUtf8("mZoomedOutResamplingComboBox"));

        gridLayout_35->addWidget(mZoomedOutResamplingComboBox, 2, 1, 1, 6);

        spnOversampling = new QgsDoubleSpinBox(widget);
        spnOversampling->setObjectName(QString::fromUtf8("spnOversampling"));

        gridLayout_35->addWidget(spnOversampling, 3, 1, 1, 2);

        mCbEarlyResampling = new QCheckBox(widget);
        mCbEarlyResampling->setObjectName(QString::fromUtf8("mCbEarlyResampling"));

        gridLayout_35->addWidget(mCbEarlyResampling, 4, 0, 1, 7);


        verticalLayout_10->addWidget(widget);


        gridLayout->addWidget(groupBox_14, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        groupBox_17 = new QGroupBox(QgsRasterRenderingOptionsWidgetBase);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBox_17);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cboxContrastEnhancementLimitsSingleBand = new QComboBox(groupBox_17);
        cboxContrastEnhancementLimitsSingleBand->setObjectName(QString::fromUtf8("cboxContrastEnhancementLimitsSingleBand"));
        cboxContrastEnhancementLimitsSingleBand->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(cboxContrastEnhancementLimitsSingleBand, 1, 3, 1, 2);

        cboxContrastEnhancementAlgorithmMultiBandSingleByte = new QComboBox(groupBox_17);
        cboxContrastEnhancementAlgorithmMultiBandSingleByte->setObjectName(QString::fromUtf8("cboxContrastEnhancementAlgorithmMultiBandSingleByte"));
        cboxContrastEnhancementAlgorithmMultiBandSingleByte->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(cboxContrastEnhancementAlgorithmMultiBandSingleByte, 2, 1, 1, 2);

        mRasterCumulativeCutUpperDoubleSpinBox = new QgsDoubleSpinBox(groupBox_17);
        mRasterCumulativeCutUpperDoubleSpinBox->setObjectName(QString::fromUtf8("mRasterCumulativeCutUpperDoubleSpinBox"));
        mRasterCumulativeCutUpperDoubleSpinBox->setDecimals(1);

        gridLayout_2->addWidget(mRasterCumulativeCutUpperDoubleSpinBox, 5, 3, 1, 1);

        label_35 = new QLabel(groupBox_17);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_2->addWidget(label_35, 5, 4, 1, 1);

        cboxContrastEnhancementAlgorithmSingleBand = new QComboBox(groupBox_17);
        cboxContrastEnhancementAlgorithmSingleBand->setObjectName(QString::fromUtf8("cboxContrastEnhancementAlgorithmSingleBand"));
        cboxContrastEnhancementAlgorithmSingleBand->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(cboxContrastEnhancementAlgorithmSingleBand, 1, 1, 1, 2);

        label_50 = new QLabel(groupBox_17);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_50, 0, 1, 1, 1);

        cboxContrastEnhancementLimitsMultiBandSingleByte = new QComboBox(groupBox_17);
        cboxContrastEnhancementLimitsMultiBandSingleByte->setObjectName(QString::fromUtf8("cboxContrastEnhancementLimitsMultiBandSingleByte"));
        cboxContrastEnhancementLimitsMultiBandSingleByte->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(cboxContrastEnhancementLimitsMultiBandSingleByte, 2, 3, 1, 2);

        label_25 = new QLabel(groupBox_17);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 6, 0, 1, 1);

        cboxContrastEnhancementLimitsMultiBandMultiByte = new QComboBox(groupBox_17);
        cboxContrastEnhancementLimitsMultiBandMultiByte->setObjectName(QString::fromUtf8("cboxContrastEnhancementLimitsMultiBandMultiByte"));
        cboxContrastEnhancementLimitsMultiBandMultiByte->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(cboxContrastEnhancementLimitsMultiBandMultiByte, 3, 3, 1, 2);

        label_51 = new QLabel(groupBox_17);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_51, 0, 3, 1, 2);

        label_34 = new QLabel(groupBox_17);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_2->addWidget(label_34, 5, 2, 1, 1);

        label_36 = new QLabel(groupBox_17);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_2->addWidget(label_36, 5, 0, 1, 1);

        label_37 = new QLabel(groupBox_17);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_2->addWidget(label_37, 1, 0, 1, 1);

        line = new QFrame(groupBox_17);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 4, 0, 1, 5);

        mRasterCumulativeCutLowerDoubleSpinBox = new QgsDoubleSpinBox(groupBox_17);
        mRasterCumulativeCutLowerDoubleSpinBox->setObjectName(QString::fromUtf8("mRasterCumulativeCutLowerDoubleSpinBox"));
        mRasterCumulativeCutLowerDoubleSpinBox->setDecimals(1);

        gridLayout_2->addWidget(mRasterCumulativeCutLowerDoubleSpinBox, 5, 1, 1, 1);

        label_38 = new QLabel(groupBox_17);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_2->addWidget(label_38, 2, 0, 1, 1);

        label_39 = new QLabel(groupBox_17);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_2->addWidget(label_39, 3, 0, 1, 1);

        cboxContrastEnhancementAlgorithmMultiBandMultiByte = new QComboBox(groupBox_17);
        cboxContrastEnhancementAlgorithmMultiBandMultiByte->setObjectName(QString::fromUtf8("cboxContrastEnhancementAlgorithmMultiBandMultiByte"));
        cboxContrastEnhancementAlgorithmMultiBandMultiByte->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(cboxContrastEnhancementAlgorithmMultiBandMultiByte, 3, 1, 1, 2);

        spnThreeBandStdDev = new QgsDoubleSpinBox(groupBox_17);
        spnThreeBandStdDev->setObjectName(QString::fromUtf8("spnThreeBandStdDev"));
        spnThreeBandStdDev->setMaximum(10.000000000000000);
        spnThreeBandStdDev->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(spnThreeBandStdDev, 6, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(3, 1);

        gridLayout->addWidget(groupBox_17, 3, 0, 1, 1);

        QWidget::setTabOrder(spnRed, spnGreen);
        QWidget::setTabOrder(spnGreen, spnBlue);
        QWidget::setTabOrder(spnBlue, mZoomedInResamplingComboBox);
        QWidget::setTabOrder(mZoomedInResamplingComboBox, mZoomedOutResamplingComboBox);
        QWidget::setTabOrder(mZoomedOutResamplingComboBox, spnOversampling);
        QWidget::setTabOrder(spnOversampling, mCbEarlyResampling);
        QWidget::setTabOrder(mCbEarlyResampling, cboxContrastEnhancementAlgorithmSingleBand);
        QWidget::setTabOrder(cboxContrastEnhancementAlgorithmSingleBand, cboxContrastEnhancementLimitsSingleBand);
        QWidget::setTabOrder(cboxContrastEnhancementLimitsSingleBand, cboxContrastEnhancementAlgorithmMultiBandSingleByte);
        QWidget::setTabOrder(cboxContrastEnhancementAlgorithmMultiBandSingleByte, cboxContrastEnhancementLimitsMultiBandSingleByte);
        QWidget::setTabOrder(cboxContrastEnhancementLimitsMultiBandSingleByte, cboxContrastEnhancementAlgorithmMultiBandMultiByte);
        QWidget::setTabOrder(cboxContrastEnhancementAlgorithmMultiBandMultiByte, cboxContrastEnhancementLimitsMultiBandMultiByte);
        QWidget::setTabOrder(cboxContrastEnhancementLimitsMultiBandMultiByte, mRasterCumulativeCutLowerDoubleSpinBox);
        QWidget::setTabOrder(mRasterCumulativeCutLowerDoubleSpinBox, mRasterCumulativeCutUpperDoubleSpinBox);
        QWidget::setTabOrder(mRasterCumulativeCutUpperDoubleSpinBox, spnThreeBandStdDev);

        retranslateUi(QgsRasterRenderingOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterRenderingOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterRenderingOptionsWidgetBase)
    {
        QgsRasterRenderingOptionsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Raster Rendering Options", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Bands and Resampling", nullptr));
        lbldefaultZoomedInResampling->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Zoomed in resampling", nullptr));
        lbldefaultZoomedOutResampling->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Zoomed out resampling", nullptr));
        label_21->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "RGB band selection", nullptr));
        lbldefaultOversampling->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Oversampling", nullptr));
        label_22->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Red band", nullptr));
        label_23->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Green band", nullptr));
        label_24->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Blue band", nullptr));
        mCbEarlyResampling->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Early resampling", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Contrast Enhancement", nullptr));
        label_35->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "%", nullptr));
        label_50->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Algorithm", nullptr));
        label_25->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Standard deviation multiplier", nullptr));
        label_51->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Limits (minimum/maximum)", nullptr));
        label_34->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "-", nullptr));
        label_36->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Cumulative pixel count cut limits", nullptr));
        label_37->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Single band gray", nullptr));
        label_38->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Multi band color (byte / band) ", nullptr));
        label_39->setText(QCoreApplication::translate("QgsRasterRenderingOptionsWidgetBase", "Multi band color (> byte / band) ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterRenderingOptionsWidgetBase: public Ui_QgsRasterRenderingOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERRENDERINGOPTIONSBASE_H
