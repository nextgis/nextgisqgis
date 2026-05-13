/********************************************************************************
** Form generated from reading UI file 'qgspointcloudrendererpropsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDRENDERERPROPSDIALOGBASE_H
#define UI_QGSPOINTCLOUDRENDERERPROPSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsopacitywidget.h"
#include "qgspanelwidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudRendererPropsDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *mainStack;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *cboRenderers;
    QStackedWidget *stackedWidget;
    QWidget *pageNoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *mLayerRenderingGroupBox_2;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *mPointSizeSpinBox;
    QLabel *label_2;
    QgsUnitSelectionWidget *mPointSizeUnitWidget;
    QComboBox *mPointStyleComboBox;
    QLabel *lblTransparency_4;
    QgsCollapsibleGroupBox *mTriangulateGroupBox;
    QGridLayout *gridLayout_8;
    QCheckBox *mHorizontalTriangleCheckBox;
    QgsDoubleSpinBox *mHorizontalTriangleThresholdSpinBox;
    QgsUnitSelectionWidget *mHorizontalTriangleUnitWidget;
    QgsCollapsibleGroupBox *mVpcGroupBox;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QComboBox *mZoomOutOptions;
    QgsFontButton *mLabelOptions;
    QLabel *label_3;
    QCheckBox *mLabels;
    QGroupBox *mLayerRenderingGroupBox;
    QGridLayout *gridLayout;
    QLabel *lblTransparency_2;
    QLabel *lblBlend;
    QgsUnitSelectionWidget *mMaxErrorUnitWidget;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QgsOpacityWidget *mOpacityWidget;
    QComboBox *mDrawOrderComboBox;
    QgsDoubleSpinBox *mMaxErrorSpinBox;
    QLabel *lblTransparency;
    QLabel *lblDrawOrder;
    QHBoxLayout *labelLayout;

    void setupUi(QgsPanelWidget *QgsPointCloudRendererPropsDialogBase)
    {
        if (QgsPointCloudRendererPropsDialogBase->objectName().isEmpty())
            QgsPointCloudRendererPropsDialogBase->setObjectName(QString::fromUtf8("QgsPointCloudRendererPropsDialogBase"));
        QgsPointCloudRendererPropsDialogBase->resize(569, 618);
        verticalLayout_2 = new QVBoxLayout(QgsPointCloudRendererPropsDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mainStack = new QStackedWidget(QgsPointCloudRendererPropsDialogBase);
        mainStack->setObjectName(QString::fromUtf8("mainStack"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cboRenderers = new QComboBox(page);
        cboRenderers->setObjectName(QString::fromUtf8("cboRenderers"));

        horizontalLayout->addWidget(cboRenderers);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(page);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageNoWidget = new QWidget();
        pageNoWidget->setObjectName(QString::fromUtf8("pageNoWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageNoWidget->sizePolicy().hasHeightForWidth());
        pageNoWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(pageNoWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pageNoWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        stackedWidget->addWidget(pageNoWidget);

        verticalLayout_3->addWidget(stackedWidget);

        mLayerRenderingGroupBox_2 = new QGroupBox(page);
        mLayerRenderingGroupBox_2->setObjectName(QString::fromUtf8("mLayerRenderingGroupBox_2"));
        mLayerRenderingGroupBox_2->setFlat(true);
        mLayerRenderingGroupBox_2->setCheckable(false);
        gridLayout_2 = new QGridLayout(mLayerRenderingGroupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 3, -1);
        mPointSizeSpinBox = new QgsDoubleSpinBox(mLayerRenderingGroupBox_2);
        mPointSizeSpinBox->setObjectName(QString::fromUtf8("mPointSizeSpinBox"));
        mPointSizeSpinBox->setDecimals(6);
        mPointSizeSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_2->addWidget(mPointSizeSpinBox, 0, 1, 1, 2);

        label_2 = new QLabel(mLayerRenderingGroupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mPointSizeUnitWidget = new QgsUnitSelectionWidget(mLayerRenderingGroupBox_2);
        mPointSizeUnitWidget->setObjectName(QString::fromUtf8("mPointSizeUnitWidget"));
        mPointSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mPointSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mPointSizeUnitWidget, 0, 3, 1, 1);

        mPointStyleComboBox = new QComboBox(mLayerRenderingGroupBox_2);
        mPointStyleComboBox->setObjectName(QString::fromUtf8("mPointStyleComboBox"));

        gridLayout_2->addWidget(mPointStyleComboBox, 1, 1, 1, 3);

        lblTransparency_4 = new QLabel(mLayerRenderingGroupBox_2);
        lblTransparency_4->setObjectName(QString::fromUtf8("lblTransparency_4"));

        gridLayout_2->addWidget(lblTransparency_4, 0, 0, 1, 1);


        verticalLayout_3->addWidget(mLayerRenderingGroupBox_2);

        mTriangulateGroupBox = new QgsCollapsibleGroupBox(page);
        mTriangulateGroupBox->setObjectName(QString::fromUtf8("mTriangulateGroupBox"));
        mTriangulateGroupBox->setCheckable(true);
        mTriangulateGroupBox->setChecked(false);
        gridLayout_8 = new QGridLayout(mTriangulateGroupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, -1, 3, -1);
        mHorizontalTriangleCheckBox = new QCheckBox(mTriangulateGroupBox);
        mHorizontalTriangleCheckBox->setObjectName(QString::fromUtf8("mHorizontalTriangleCheckBox"));

        gridLayout_8->addWidget(mHorizontalTriangleCheckBox, 0, 0, 1, 1);

        mHorizontalTriangleThresholdSpinBox = new QgsDoubleSpinBox(mTriangulateGroupBox);
        mHorizontalTriangleThresholdSpinBox->setObjectName(QString::fromUtf8("mHorizontalTriangleThresholdSpinBox"));
        mHorizontalTriangleThresholdSpinBox->setDecimals(6);
        mHorizontalTriangleThresholdSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_8->addWidget(mHorizontalTriangleThresholdSpinBox, 0, 1, 1, 1);

        mHorizontalTriangleUnitWidget = new QgsUnitSelectionWidget(mTriangulateGroupBox);
        mHorizontalTriangleUnitWidget->setObjectName(QString::fromUtf8("mHorizontalTriangleUnitWidget"));

        gridLayout_8->addWidget(mHorizontalTriangleUnitWidget, 0, 2, 1, 1);


        verticalLayout_3->addWidget(mTriangulateGroupBox);

        mVpcGroupBox = new QgsCollapsibleGroupBox(page);
        mVpcGroupBox->setObjectName(QString::fromUtf8("mVpcGroupBox"));
        mVpcGroupBox->setCheckable(false);
        mVpcGroupBox->setChecked(false);
        gridLayout_3 = new QGridLayout(mVpcGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(301, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 1, 1, 1);

        mZoomOutOptions = new QComboBox(mVpcGroupBox);
        mZoomOutOptions->setObjectName(QString::fromUtf8("mZoomOutOptions"));

        gridLayout_3->addWidget(mZoomOutOptions, 0, 1, 1, 2);

        mLabelOptions = new QgsFontButton(mVpcGroupBox);
        mLabelOptions->setObjectName(QString::fromUtf8("mLabelOptions"));

        gridLayout_3->addWidget(mLabelOptions, 1, 2, 1, 1);

        label_3 = new QLabel(mVpcGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        mLabels = new QCheckBox(mVpcGroupBox);
        mLabels->setObjectName(QString::fromUtf8("mLabels"));

        gridLayout_3->addWidget(mLabels, 1, 0, 1, 1);


        verticalLayout_3->addWidget(mVpcGroupBox);

        mLayerRenderingGroupBox = new QGroupBox(page);
        mLayerRenderingGroupBox->setObjectName(QString::fromUtf8("mLayerRenderingGroupBox"));
        mLayerRenderingGroupBox->setFlat(true);
        mLayerRenderingGroupBox->setCheckable(false);
        gridLayout = new QGridLayout(mLayerRenderingGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 3, -1);
        lblTransparency_2 = new QLabel(mLayerRenderingGroupBox);
        lblTransparency_2->setObjectName(QString::fromUtf8("lblTransparency_2"));

        gridLayout->addWidget(lblTransparency_2, 1, 0, 1, 1);

        lblBlend = new QLabel(mLayerRenderingGroupBox);
        lblBlend->setObjectName(QString::fromUtf8("lblBlend"));

        gridLayout->addWidget(lblBlend, 3, 0, 1, 1);

        mMaxErrorUnitWidget = new QgsUnitSelectionWidget(mLayerRenderingGroupBox);
        mMaxErrorUnitWidget->setObjectName(QString::fromUtf8("mMaxErrorUnitWidget"));
        mMaxErrorUnitWidget->setMinimumSize(QSize(0, 0));
        mMaxErrorUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mMaxErrorUnitWidget, 1, 3, 1, 1);

        mBlendModeComboBox = new QgsBlendModeComboBox(mLayerRenderingGroupBox);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));
        sizePolicy.setHeightForWidth(mBlendModeComboBox->sizePolicy().hasHeightForWidth());
        mBlendModeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mBlendModeComboBox, 3, 1, 1, 3);

        mOpacityWidget = new QgsOpacityWidget(mLayerRenderingGroupBox);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOpacityWidget, 2, 1, 1, 3);

        mDrawOrderComboBox = new QComboBox(mLayerRenderingGroupBox);
        mDrawOrderComboBox->setObjectName(QString::fromUtf8("mDrawOrderComboBox"));
        sizePolicy.setHeightForWidth(mDrawOrderComboBox->sizePolicy().hasHeightForWidth());
        mDrawOrderComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mDrawOrderComboBox, 0, 1, 1, 3);

        mMaxErrorSpinBox = new QgsDoubleSpinBox(mLayerRenderingGroupBox);
        mMaxErrorSpinBox->setObjectName(QString::fromUtf8("mMaxErrorSpinBox"));
        mMaxErrorSpinBox->setDecimals(6);
        mMaxErrorSpinBox->setMaximum(99999999999.000000000000000);
        mMaxErrorSpinBox->setValue(0.300000000000000);

        gridLayout->addWidget(mMaxErrorSpinBox, 1, 1, 1, 2);

        lblTransparency = new QLabel(mLayerRenderingGroupBox);
        lblTransparency->setObjectName(QString::fromUtf8("lblTransparency"));

        gridLayout->addWidget(lblTransparency, 2, 0, 1, 1);

        lblDrawOrder = new QLabel(mLayerRenderingGroupBox);
        lblDrawOrder->setObjectName(QString::fromUtf8("lblDrawOrder"));

        gridLayout->addWidget(lblDrawOrder, 0, 0, 1, 1);


        verticalLayout_3->addWidget(mLayerRenderingGroupBox);

        labelLayout = new QHBoxLayout();
        labelLayout->setObjectName(QString::fromUtf8("labelLayout"));
        labelLayout->setContentsMargins(6, -1, 6, -1);

        verticalLayout_3->addLayout(labelLayout);

        mainStack->addWidget(page);

        verticalLayout_2->addWidget(mainStack);

        QWidget::setTabOrder(cboRenderers, mPointSizeSpinBox);
        QWidget::setTabOrder(mPointSizeSpinBox, mPointSizeUnitWidget);
        QWidget::setTabOrder(mPointSizeUnitWidget, mPointStyleComboBox);
        QWidget::setTabOrder(mPointStyleComboBox, mDrawOrderComboBox);
        QWidget::setTabOrder(mDrawOrderComboBox, mMaxErrorSpinBox);
        QWidget::setTabOrder(mMaxErrorSpinBox, mMaxErrorUnitWidget);
        QWidget::setTabOrder(mMaxErrorUnitWidget, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendModeComboBox);

        retranslateUi(QgsPointCloudRendererPropsDialogBase);

        QMetaObject::connectSlotsByName(QgsPointCloudRendererPropsDialogBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsPointCloudRendererPropsDialogBase)
    {
        QgsPointCloudRendererPropsDialogBase->setWindowTitle(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Renderer Settings", nullptr));
        label->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "This renderer doesn't implement a graphical interface.", nullptr));
        mLayerRenderingGroupBox_2->setTitle(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Point Symbol", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Style", nullptr));
        lblTransparency_4->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Point size", nullptr));
        mTriangulateGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Render as a Surface (Triangulate)", nullptr));
        mHorizontalTriangleCheckBox->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Skip triangles longer than", nullptr));
#if QT_CONFIG(tooltip)
        mHorizontalTriangleThresholdSpinBox->setToolTip(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Maximum Triangle Side Size in Horizontal Plan", nullptr));
#endif // QT_CONFIG(tooltip)
        mVpcGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Virtual Point Cloud Options", nullptr));
        mLabelOptions->setText(QString());
        label_3->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "When zoomed out", nullptr));
        mLabels->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Show tile labels", nullptr));
        mLayerRenderingGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Layer Rendering", nullptr));
        lblTransparency_2->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Maximum error", nullptr));
        lblBlend->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Blending mode", nullptr));
        lblTransparency->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Opacity", nullptr));
        lblDrawOrder->setText(QCoreApplication::translate("QgsPointCloudRendererPropsDialogBase", "Draw order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudRendererPropsDialogBase: public Ui_QgsPointCloudRendererPropsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDRENDERERPROPSDIALOGBASE_H
