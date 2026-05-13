/********************************************************************************
** Form generated from reading UI file 'qgspointcloud3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUD3DSYMBOLWIDGET_H
#define UI_QGSPOINTCLOUD3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgscolorrampshaderwidget.h"
#include "qgsdoublespinbox.h"
#include "qgspointcloudattributecombobox.h"
#include "qgsstackedwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloud3DSymbolWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mLayerRenderingGroupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_7;
    QLabel *labelPointSize;
    QLabel *labelMaxScreenError;
    QgsDoubleSpinBox *mPointSizeSpinBox;
    QLabel *labelPointBudget;
    QDoubleSpinBox *mPointBudgetSpinBox;
    QgsDoubleSpinBox *mMaxScreenErrorSpinBox;
    QgsCollapsibleGroupBox *mTriangulateGroupBox;
    QGridLayout *gridLayout_8;
    QCheckBox *mHorizontalTriangleCheckBox;
    QgsDoubleSpinBox *mHorizontalTriangleThresholdSpinBox;
    QCheckBox *mVerticalTriangleCheckBox;
    QgsDoubleSpinBox *mVerticalTriangleThresholdSpinBox;
    QCheckBox *mShowBoundingBoxesCheckBox;
    QgsCollapsibleGroupBox *mVpcGroupBox;
    QGridLayout *gridLayout_5;
    QComboBox *mZoomOutOptions;
    QLabel *label_4;
    QgsStackedWidget *mStackedWidget;
    QWidget *noRendererPage;
    QWidget *follow2DRendererPage;
    QGridLayout *gridLayout_9;
    QLabel *label_8;
    QWidget *singleColorRendererPage;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QgsColorButton *mSingleColorBtn;
    QWidget *colorRampRendererPage;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QgsPointCloudAttributeComboBox *mRenderingParameterComboBox;
    QgsColorRampShaderWidget *mColorRampShaderWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QgsDoubleSpinBox *mColorRampShaderMinEdit;
    QLabel *label_2;
    QgsDoubleSpinBox *mColorRampShaderMaxEdit;
    QPushButton *mScalarRecalculateMinMaxButton;
    QWidget *rgbRendererPage;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *mContrastEnhancementAlgorithmLabel;
    QLabel *mRedBandLabel;
    QComboBox *mContrastEnhancementAlgorithmComboBox;
    QLabel *mRedMinLabel;
    QLabel *mRedMaxLabel;
    QLineEdit *mRedMinLineEdit;
    QgsPointCloudAttributeComboBox *mRedAttributeComboBox;
    QLabel *mBlueMinLabel;
    QLabel *mBlueMaxLabel;
    QgsPointCloudAttributeComboBox *mGreenAttributeComboBox;
    QLabel *mGreenMinLabel;
    QLabel *mGreenMaxLabel;
    QgsPointCloudAttributeComboBox *mBlueAttributeComboBox;
    QLineEdit *mRedMaxLineEdit;
    QLineEdit *mGreenMinLineEdit;
    QLabel *mBlueBandLabel;
    QLineEdit *mBlueMinLineEdit;
    QLineEdit *mBlueMaxLineEdit;
    QLabel *mGreenBandLabel;
    QLineEdit *mGreenMaxLineEdit;
    QSpacerItem *verticalSpacer;
    QWidget *classifiedrenderingPage;
    QGridLayout *gridLayout_6;
    QGridLayout *mClassifiedRenderingLayout;
    QComboBox *mRenderingStyleComboBox;

    void setupUi(QWidget *QgsPointCloud3DSymbolWidget)
    {
        if (QgsPointCloud3DSymbolWidget->objectName().isEmpty())
            QgsPointCloud3DSymbolWidget->setObjectName(QString::fromUtf8("QgsPointCloud3DSymbolWidget"));
        QgsPointCloud3DSymbolWidget->resize(581, 728);
        gridLayout = new QGridLayout(QgsPointCloud3DSymbolWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mLayerRenderingGroupBox_2 = new QGroupBox(QgsPointCloud3DSymbolWidget);
        mLayerRenderingGroupBox_2->setObjectName(QString::fromUtf8("mLayerRenderingGroupBox_2"));
        mLayerRenderingGroupBox_2->setFlat(true);
        mLayerRenderingGroupBox_2->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(mLayerRenderingGroupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        labelPointSize = new QLabel(mLayerRenderingGroupBox_2);
        labelPointSize->setObjectName(QString::fromUtf8("labelPointSize"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPointSize->sizePolicy().hasHeightForWidth());
        labelPointSize->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(labelPointSize, 0, 0, 1, 1);

        labelMaxScreenError = new QLabel(mLayerRenderingGroupBox_2);
        labelMaxScreenError->setObjectName(QString::fromUtf8("labelMaxScreenError"));

        gridLayout_7->addWidget(labelMaxScreenError, 1, 0, 1, 1);

        mPointSizeSpinBox = new QgsDoubleSpinBox(mLayerRenderingGroupBox_2);
        mPointSizeSpinBox->setObjectName(QString::fromUtf8("mPointSizeSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mPointSizeSpinBox->sizePolicy().hasHeightForWidth());
        mPointSizeSpinBox->setSizePolicy(sizePolicy1);
        mPointSizeSpinBox->setMaximum(10.000000000000000);
        mPointSizeSpinBox->setValue(3.000000000000000);

        gridLayout_7->addWidget(mPointSizeSpinBox, 0, 1, 1, 2);

        labelPointBudget = new QLabel(mLayerRenderingGroupBox_2);
        labelPointBudget->setObjectName(QString::fromUtf8("labelPointBudget"));

        gridLayout_7->addWidget(labelPointBudget, 2, 0, 1, 1);

        mPointBudgetSpinBox = new QDoubleSpinBox(mLayerRenderingGroupBox_2);
        mPointBudgetSpinBox->setObjectName(QString::fromUtf8("mPointBudgetSpinBox"));
        mPointBudgetSpinBox->setEnabled(true);
        mPointBudgetSpinBox->setDecimals(0);
        mPointBudgetSpinBox->setMinimum(100000.000000000000000);
        mPointBudgetSpinBox->setMaximum(99999999.000000000000000);
        mPointBudgetSpinBox->setSingleStep(100000.000000000000000);
        mPointBudgetSpinBox->setValue(5000000.000000000000000);

        gridLayout_7->addWidget(mPointBudgetSpinBox, 2, 1, 1, 2);

        mMaxScreenErrorSpinBox = new QgsDoubleSpinBox(mLayerRenderingGroupBox_2);
        mMaxScreenErrorSpinBox->setObjectName(QString::fromUtf8("mMaxScreenErrorSpinBox"));
        mMaxScreenErrorSpinBox->setMaximum(100000.000000000000000);
        mMaxScreenErrorSpinBox->setValue(3.000000000000000);

        gridLayout_7->addWidget(mMaxScreenErrorSpinBox, 1, 1, 1, 2);


        verticalLayout_2->addLayout(gridLayout_7);

        mTriangulateGroupBox = new QgsCollapsibleGroupBox(mLayerRenderingGroupBox_2);
        mTriangulateGroupBox->setObjectName(QString::fromUtf8("mTriangulateGroupBox"));
        mTriangulateGroupBox->setCheckable(true);
        mTriangulateGroupBox->setChecked(false);
        gridLayout_8 = new QGridLayout(mTriangulateGroupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        mHorizontalTriangleCheckBox = new QCheckBox(mTriangulateGroupBox);
        mHorizontalTriangleCheckBox->setObjectName(QString::fromUtf8("mHorizontalTriangleCheckBox"));

        gridLayout_8->addWidget(mHorizontalTriangleCheckBox, 0, 0, 1, 1);

        mHorizontalTriangleThresholdSpinBox = new QgsDoubleSpinBox(mTriangulateGroupBox);
        mHorizontalTriangleThresholdSpinBox->setObjectName(QString::fromUtf8("mHorizontalTriangleThresholdSpinBox"));
        mHorizontalTriangleThresholdSpinBox->setMaximum(10000000000000000000000.000000000000000);

        gridLayout_8->addWidget(mHorizontalTriangleThresholdSpinBox, 0, 1, 1, 1);

        mVerticalTriangleCheckBox = new QCheckBox(mTriangulateGroupBox);
        mVerticalTriangleCheckBox->setObjectName(QString::fromUtf8("mVerticalTriangleCheckBox"));

        gridLayout_8->addWidget(mVerticalTriangleCheckBox, 1, 0, 1, 1);

        mVerticalTriangleThresholdSpinBox = new QgsDoubleSpinBox(mTriangulateGroupBox);
        mVerticalTriangleThresholdSpinBox->setObjectName(QString::fromUtf8("mVerticalTriangleThresholdSpinBox"));
        mVerticalTriangleThresholdSpinBox->setMaximum(10000000000000000000000.000000000000000);

        gridLayout_8->addWidget(mVerticalTriangleThresholdSpinBox, 1, 1, 1, 1);


        verticalLayout_2->addWidget(mTriangulateGroupBox);

        mShowBoundingBoxesCheckBox = new QCheckBox(mLayerRenderingGroupBox_2);
        mShowBoundingBoxesCheckBox->setObjectName(QString::fromUtf8("mShowBoundingBoxesCheckBox"));

        verticalLayout_2->addWidget(mShowBoundingBoxesCheckBox);

        mVpcGroupBox = new QgsCollapsibleGroupBox(mLayerRenderingGroupBox_2);
        mVpcGroupBox->setObjectName(QString::fromUtf8("mVpcGroupBox"));
        mVpcGroupBox->setCheckable(false);
        mVpcGroupBox->setChecked(false);
        gridLayout_5 = new QGridLayout(mVpcGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mZoomOutOptions = new QComboBox(mVpcGroupBox);
        mZoomOutOptions->setObjectName(QString::fromUtf8("mZoomOutOptions"));

        gridLayout_5->addWidget(mZoomOutOptions, 0, 1, 1, 2);

        label_4 = new QLabel(mVpcGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);


        verticalLayout_2->addWidget(mVpcGroupBox);


        gridLayout->addWidget(mLayerRenderingGroupBox_2, 3, 0, 1, 3);

        mStackedWidget = new QgsStackedWidget(QgsPointCloud3DSymbolWidget);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        noRendererPage = new QWidget();
        noRendererPage->setObjectName(QString::fromUtf8("noRendererPage"));
        mStackedWidget->addWidget(noRendererPage);
        follow2DRendererPage = new QWidget();
        follow2DRendererPage->setObjectName(QString::fromUtf8("follow2DRendererPage"));
        gridLayout_9 = new QGridLayout(follow2DRendererPage);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, -1);
        label_8 = new QLabel(follow2DRendererPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_8, 0, 0, 1, 1);

        mStackedWidget->addWidget(follow2DRendererPage);
        singleColorRendererPage = new QWidget();
        singleColorRendererPage->setObjectName(QString::fromUtf8("singleColorRendererPage"));
        gridLayout_2 = new QGridLayout(singleColorRendererPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(singleColorRendererPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 1, 1, 1);

        mSingleColorBtn = new QgsColorButton(singleColorRendererPage);
        mSingleColorBtn->setObjectName(QString::fromUtf8("mSingleColorBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSingleColorBtn->sizePolicy().hasHeightForWidth());
        mSingleColorBtn->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(mSingleColorBtn, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        mStackedWidget->addWidget(singleColorRendererPage);
        colorRampRendererPage = new QWidget();
        colorRampRendererPage->setObjectName(QString::fromUtf8("colorRampRendererPage"));
        gridLayout_3 = new QGridLayout(colorRampRendererPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(colorRampRendererPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        mRenderingParameterComboBox = new QgsPointCloudAttributeComboBox(colorRampRendererPage);
        mRenderingParameterComboBox->setObjectName(QString::fromUtf8("mRenderingParameterComboBox"));

        gridLayout_3->addWidget(mRenderingParameterComboBox, 0, 1, 1, 1);

        mColorRampShaderWidget = new QgsColorRampShaderWidget(colorRampRendererPage);
        mColorRampShaderWidget->setObjectName(QString::fromUtf8("mColorRampShaderWidget"));

        gridLayout_3->addWidget(mColorRampShaderWidget, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(colorRampRendererPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        mColorRampShaderMinEdit = new QgsDoubleSpinBox(colorRampRendererPage);
        mColorRampShaderMinEdit->setObjectName(QString::fromUtf8("mColorRampShaderMinEdit"));
        mColorRampShaderMinEdit->setDecimals(6);
        mColorRampShaderMinEdit->setMinimum(-9999999999.000000000000000);
        mColorRampShaderMinEdit->setMaximum(9999999999.000000000000000);
        mColorRampShaderMinEdit->setValue(0.000000000000000);

        horizontalLayout->addWidget(mColorRampShaderMinEdit);

        label_2 = new QLabel(colorRampRendererPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        mColorRampShaderMaxEdit = new QgsDoubleSpinBox(colorRampRendererPage);
        mColorRampShaderMaxEdit->setObjectName(QString::fromUtf8("mColorRampShaderMaxEdit"));
        mColorRampShaderMaxEdit->setDecimals(6);
        mColorRampShaderMaxEdit->setMinimum(-9999999999.000000000000000);
        mColorRampShaderMaxEdit->setMaximum(9999999999.000000000000000);
        mColorRampShaderMaxEdit->setValue(1.000000000000000);

        horizontalLayout->addWidget(mColorRampShaderMaxEdit);

        mScalarRecalculateMinMaxButton = new QPushButton(colorRampRendererPage);
        mScalarRecalculateMinMaxButton->setObjectName(QString::fromUtf8("mScalarRecalculateMinMaxButton"));

        horizontalLayout->addWidget(mScalarRecalculateMinMaxButton);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(3, 1);

        gridLayout_3->addLayout(horizontalLayout, 1, 1, 1, 1);

        gridLayout_3->setRowStretch(2, 1);
        mStackedWidget->addWidget(colorRampRendererPage);
        rgbRendererPage = new QWidget();
        rgbRendererPage->setObjectName(QString::fromUtf8("rgbRendererPage"));
        verticalLayout = new QVBoxLayout(rgbRendererPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mContrastEnhancementAlgorithmLabel = new QLabel(rgbRendererPage);
        mContrastEnhancementAlgorithmLabel->setObjectName(QString::fromUtf8("mContrastEnhancementAlgorithmLabel"));

        gridLayout_4->addWidget(mContrastEnhancementAlgorithmLabel, 6, 0, 1, 1);

        mRedBandLabel = new QLabel(rgbRendererPage);
        mRedBandLabel->setObjectName(QString::fromUtf8("mRedBandLabel"));

        gridLayout_4->addWidget(mRedBandLabel, 0, 0, 1, 1);

        mContrastEnhancementAlgorithmComboBox = new QComboBox(rgbRendererPage);
        mContrastEnhancementAlgorithmComboBox->setObjectName(QString::fromUtf8("mContrastEnhancementAlgorithmComboBox"));

        gridLayout_4->addWidget(mContrastEnhancementAlgorithmComboBox, 6, 1, 1, 4);

        mRedMinLabel = new QLabel(rgbRendererPage);
        mRedMinLabel->setObjectName(QString::fromUtf8("mRedMinLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mRedMinLabel->sizePolicy().hasHeightForWidth());
        mRedMinLabel->setSizePolicy(sizePolicy3);
        mRedMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(mRedMinLabel, 1, 1, 1, 1);

        mRedMaxLabel = new QLabel(rgbRendererPage);
        mRedMaxLabel->setObjectName(QString::fromUtf8("mRedMaxLabel"));
        sizePolicy3.setHeightForWidth(mRedMaxLabel->sizePolicy().hasHeightForWidth());
        mRedMaxLabel->setSizePolicy(sizePolicy3);
        mRedMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(mRedMaxLabel, 1, 3, 1, 1);

        mRedMinLineEdit = new QLineEdit(rgbRendererPage);
        mRedMinLineEdit->setObjectName(QString::fromUtf8("mRedMinLineEdit"));
        mRedMinLineEdit->setMaxLength(16);

        gridLayout_4->addWidget(mRedMinLineEdit, 1, 2, 1, 1);

        mRedAttributeComboBox = new QgsPointCloudAttributeComboBox(rgbRendererPage);
        mRedAttributeComboBox->setObjectName(QString::fromUtf8("mRedAttributeComboBox"));

        gridLayout_4->addWidget(mRedAttributeComboBox, 0, 1, 1, 4);

        mBlueMinLabel = new QLabel(rgbRendererPage);
        mBlueMinLabel->setObjectName(QString::fromUtf8("mBlueMinLabel"));
        sizePolicy3.setHeightForWidth(mBlueMinLabel->sizePolicy().hasHeightForWidth());
        mBlueMinLabel->setSizePolicy(sizePolicy3);
        mBlueMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(mBlueMinLabel, 5, 1, 1, 1);

        mBlueMaxLabel = new QLabel(rgbRendererPage);
        mBlueMaxLabel->setObjectName(QString::fromUtf8("mBlueMaxLabel"));
        sizePolicy3.setHeightForWidth(mBlueMaxLabel->sizePolicy().hasHeightForWidth());
        mBlueMaxLabel->setSizePolicy(sizePolicy3);
        mBlueMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(mBlueMaxLabel, 5, 3, 1, 1);

        mGreenAttributeComboBox = new QgsPointCloudAttributeComboBox(rgbRendererPage);
        mGreenAttributeComboBox->setObjectName(QString::fromUtf8("mGreenAttributeComboBox"));

        gridLayout_4->addWidget(mGreenAttributeComboBox, 2, 1, 1, 4);

        mGreenMinLabel = new QLabel(rgbRendererPage);
        mGreenMinLabel->setObjectName(QString::fromUtf8("mGreenMinLabel"));
        sizePolicy3.setHeightForWidth(mGreenMinLabel->sizePolicy().hasHeightForWidth());
        mGreenMinLabel->setSizePolicy(sizePolicy3);
        mGreenMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(mGreenMinLabel, 3, 1, 1, 1);

        mGreenMaxLabel = new QLabel(rgbRendererPage);
        mGreenMaxLabel->setObjectName(QString::fromUtf8("mGreenMaxLabel"));
        sizePolicy3.setHeightForWidth(mGreenMaxLabel->sizePolicy().hasHeightForWidth());
        mGreenMaxLabel->setSizePolicy(sizePolicy3);
        mGreenMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(mGreenMaxLabel, 3, 3, 1, 1);

        mBlueAttributeComboBox = new QgsPointCloudAttributeComboBox(rgbRendererPage);
        mBlueAttributeComboBox->setObjectName(QString::fromUtf8("mBlueAttributeComboBox"));

        gridLayout_4->addWidget(mBlueAttributeComboBox, 4, 1, 1, 4);

        mRedMaxLineEdit = new QLineEdit(rgbRendererPage);
        mRedMaxLineEdit->setObjectName(QString::fromUtf8("mRedMaxLineEdit"));
        mRedMaxLineEdit->setMaxLength(16);

        gridLayout_4->addWidget(mRedMaxLineEdit, 1, 4, 1, 1);

        mGreenMinLineEdit = new QLineEdit(rgbRendererPage);
        mGreenMinLineEdit->setObjectName(QString::fromUtf8("mGreenMinLineEdit"));
        mGreenMinLineEdit->setMaxLength(16);

        gridLayout_4->addWidget(mGreenMinLineEdit, 3, 2, 1, 1);

        mBlueBandLabel = new QLabel(rgbRendererPage);
        mBlueBandLabel->setObjectName(QString::fromUtf8("mBlueBandLabel"));
        sizePolicy3.setHeightForWidth(mBlueBandLabel->sizePolicy().hasHeightForWidth());
        mBlueBandLabel->setSizePolicy(sizePolicy3);
        mBlueBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(mBlueBandLabel, 4, 0, 1, 1);

        mBlueMinLineEdit = new QLineEdit(rgbRendererPage);
        mBlueMinLineEdit->setObjectName(QString::fromUtf8("mBlueMinLineEdit"));
        mBlueMinLineEdit->setMaxLength(16);

        gridLayout_4->addWidget(mBlueMinLineEdit, 5, 2, 1, 1);

        mBlueMaxLineEdit = new QLineEdit(rgbRendererPage);
        mBlueMaxLineEdit->setObjectName(QString::fromUtf8("mBlueMaxLineEdit"));
        mBlueMaxLineEdit->setMaxLength(16);

        gridLayout_4->addWidget(mBlueMaxLineEdit, 5, 4, 1, 1);

        mGreenBandLabel = new QLabel(rgbRendererPage);
        mGreenBandLabel->setObjectName(QString::fromUtf8("mGreenBandLabel"));
        sizePolicy3.setHeightForWidth(mGreenBandLabel->sizePolicy().hasHeightForWidth());
        mGreenBandLabel->setSizePolicy(sizePolicy3);
        mGreenBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(mGreenBandLabel, 2, 0, 1, 1);

        mGreenMaxLineEdit = new QLineEdit(rgbRendererPage);
        mGreenMaxLineEdit->setObjectName(QString::fromUtf8("mGreenMaxLineEdit"));
        mGreenMaxLineEdit->setMaxLength(16);

        gridLayout_4->addWidget(mGreenMaxLineEdit, 3, 4, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mStackedWidget->addWidget(rgbRendererPage);
        classifiedrenderingPage = new QWidget();
        classifiedrenderingPage->setObjectName(QString::fromUtf8("classifiedrenderingPage"));
        gridLayout_6 = new QGridLayout(classifiedrenderingPage);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        mClassifiedRenderingLayout = new QGridLayout();
        mClassifiedRenderingLayout->setObjectName(QString::fromUtf8("mClassifiedRenderingLayout"));

        gridLayout_6->addLayout(mClassifiedRenderingLayout, 0, 0, 1, 1);

        mStackedWidget->addWidget(classifiedrenderingPage);

        gridLayout->addWidget(mStackedWidget, 2, 0, 1, 3);

        mRenderingStyleComboBox = new QComboBox(QgsPointCloud3DSymbolWidget);
        mRenderingStyleComboBox->setObjectName(QString::fromUtf8("mRenderingStyleComboBox"));

        gridLayout->addWidget(mRenderingStyleComboBox, 1, 0, 1, 3);

        QWidget::setTabOrder(mRenderingStyleComboBox, mSingleColorBtn);
        QWidget::setTabOrder(mSingleColorBtn, mPointSizeSpinBox);
        QWidget::setTabOrder(mPointSizeSpinBox, mMaxScreenErrorSpinBox);
        QWidget::setTabOrder(mMaxScreenErrorSpinBox, mPointBudgetSpinBox);
        QWidget::setTabOrder(mPointBudgetSpinBox, mShowBoundingBoxesCheckBox);
        QWidget::setTabOrder(mShowBoundingBoxesCheckBox, mRenderingParameterComboBox);
        QWidget::setTabOrder(mRenderingParameterComboBox, mColorRampShaderMinEdit);
        QWidget::setTabOrder(mColorRampShaderMinEdit, mColorRampShaderMaxEdit);
        QWidget::setTabOrder(mColorRampShaderMaxEdit, mScalarRecalculateMinMaxButton);
        QWidget::setTabOrder(mScalarRecalculateMinMaxButton, mContrastEnhancementAlgorithmComboBox);
        QWidget::setTabOrder(mContrastEnhancementAlgorithmComboBox, mRedMinLineEdit);
        QWidget::setTabOrder(mRedMinLineEdit, mRedAttributeComboBox);
        QWidget::setTabOrder(mRedAttributeComboBox, mGreenAttributeComboBox);
        QWidget::setTabOrder(mGreenAttributeComboBox, mBlueAttributeComboBox);
        QWidget::setTabOrder(mBlueAttributeComboBox, mRedMaxLineEdit);
        QWidget::setTabOrder(mRedMaxLineEdit, mGreenMinLineEdit);
        QWidget::setTabOrder(mGreenMinLineEdit, mBlueMinLineEdit);
        QWidget::setTabOrder(mBlueMinLineEdit, mBlueMaxLineEdit);
        QWidget::setTabOrder(mBlueMaxLineEdit, mGreenMaxLineEdit);

        retranslateUi(QgsPointCloud3DSymbolWidget);

        mStackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(QgsPointCloud3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsPointCloud3DSymbolWidget)
    {
        mLayerRenderingGroupBox_2->setTitle(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Point Symbol", nullptr));
        labelPointSize->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Point size", nullptr));
        labelMaxScreenError->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Maximum screen space error", nullptr));
        labelPointBudget->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Point budget", nullptr));
        mTriangulateGroupBox->setTitle(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Render as a Surface (Triangulate)", nullptr));
        mHorizontalTriangleCheckBox->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Skip triangles longer than", nullptr));
#if QT_CONFIG(tooltip)
        mHorizontalTriangleThresholdSpinBox->setToolTip(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Maximum Triangle Side Size in Horizontal Plan", nullptr));
#endif // QT_CONFIG(tooltip)
        mVerticalTriangleCheckBox->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Skip triangles taller than", nullptr));
#if QT_CONFIG(tooltip)
        mVerticalTriangleThresholdSpinBox->setToolTip(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Maximum Triangle Side 3D Height", nullptr));
#endif // QT_CONFIG(tooltip)
        mShowBoundingBoxesCheckBox->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Show bounding boxes", nullptr));
        mVpcGroupBox->setTitle(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Virtual Point Cloud Options", nullptr));
        label_4->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "When zoomed out", nullptr));
        label_8->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "See 2D Symbology settings", nullptr));
        label_6->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Color", nullptr));
        mSingleColorBtn->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "...", nullptr));
        label_5->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Attribute", nullptr));
        label_3->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Min", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Max", nullptr));
        mScalarRecalculateMinMaxButton->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Load", nullptr));
        mContrastEnhancementAlgorithmLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Contrast\n"
"enhancement", nullptr));
        mRedBandLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Red band", nullptr));
        mRedMinLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Min", nullptr));
        mRedMaxLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Max", nullptr));
        mBlueMinLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Min", nullptr));
        mBlueMaxLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Max", nullptr));
        mGreenMinLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Min", nullptr));
        mGreenMaxLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Max", nullptr));
        mBlueBandLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Blue band", nullptr));
        mGreenBandLabel->setText(QCoreApplication::translate("QgsPointCloud3DSymbolWidget", "Green band", nullptr));
        (void)QgsPointCloud3DSymbolWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloud3DSymbolWidget: public Ui_QgsPointCloud3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUD3DSYMBOLWIDGET_H
