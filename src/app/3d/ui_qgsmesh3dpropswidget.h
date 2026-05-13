/********************************************************************************
** Form generated from reading UI file 'qgsmesh3dpropswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESH3DPROPSWIDGET_H
#define UI_QGSMESH3DPROPSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgscolorrampshaderwidget.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMesh3dPropsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *cullingModeFormLayout;
    QLabel *mCullingModeLabel;
    QComboBox *mCullingMode;
    QgsCollapsibleGroupBox *mGroupBoxTrianglesSettings;
    QGridLayout *gridLayout_3;
    QLabel *mLabelLod;
    QGroupBox *mGroupBoxWireframe;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QgsDoubleSpinBox *mSpinBoxWireframeLineWidth;
    QLabel *label_10;
    QgsColorButton *mColorButtonWireframe;
    QCheckBox *mChkSmoothTriangles;
    QSlider *mLodSlider;
    QgsCollapsibleGroupBox *mGroupBoxVerticaleSettings;
    QFormLayout *formLayout;
    QLabel *label_4;
    QgsDoubleSpinBox *mSpinBoxVerticaleScale;
    QLabel *label;
    QComboBox *mComboBoxDatasetVertical;
    QCheckBox *mCheckBoxVerticalMagnitudeRelative;
    QgsCollapsibleGroupBox *mGroupBoxTextureSettings;
    QGridLayout *gridLayout_6;
    QGroupBox *mGroupBoxColorRampShader;
    QGridLayout *gridLayout_7;
    QFrame *line_2;
    QLineEdit *mColorRampShaderMinEdit;
    QLabel *label_2;
    QLabel *label_7;
    QPushButton *mColorRampShaderMinMaxReloadButton;
    QgsColorRampShaderWidget *mColorRampShaderWidget;
    QLineEdit *mColorRampShaderMaxEdit;
    QLabel *label_5;
    QWidget *mMeshSingleColorWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QgsColorButton *mMeshSingleColorButton;
    QComboBox *mComboBoxTextureType;
    QgsCollapsibleGroupBox *mGroupBoxArrowsSettings;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QgsDoubleSpinBox *mArrowsSpacingSpinBox;
    QLabel *label_3;
    QCheckBox *mArrowsFixedSizeCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsMesh3dPropsWidget)
    {
        if (QgsMesh3dPropsWidget->objectName().isEmpty())
            QgsMesh3dPropsWidget->setObjectName(QString::fromUtf8("QgsMesh3dPropsWidget"));
        QgsMesh3dPropsWidget->resize(325, 678);
        QgsMesh3dPropsWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsMesh3dPropsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cullingModeFormLayout = new QFormLayout();
        cullingModeFormLayout->setObjectName(QString::fromUtf8("cullingModeFormLayout"));
        mCullingModeLabel = new QLabel(QgsMesh3dPropsWidget);
        mCullingModeLabel->setObjectName(QString::fromUtf8("mCullingModeLabel"));

        cullingModeFormLayout->setWidget(0, QFormLayout::LabelRole, mCullingModeLabel);

        mCullingMode = new QComboBox(QgsMesh3dPropsWidget);
        mCullingMode->setObjectName(QString::fromUtf8("mCullingMode"));

        cullingModeFormLayout->setWidget(0, QFormLayout::FieldRole, mCullingMode);


        verticalLayout->addLayout(cullingModeFormLayout);

        mGroupBoxTrianglesSettings = new QgsCollapsibleGroupBox(QgsMesh3dPropsWidget);
        mGroupBoxTrianglesSettings->setObjectName(QString::fromUtf8("mGroupBoxTrianglesSettings"));
        gridLayout_3 = new QGridLayout(mGroupBoxTrianglesSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mLabelLod = new QLabel(mGroupBoxTrianglesSettings);
        mLabelLod->setObjectName(QString::fromUtf8("mLabelLod"));

        gridLayout_3->addWidget(mLabelLod, 2, 0, 1, 1);

        mGroupBoxWireframe = new QGroupBox(mGroupBoxTrianglesSettings);
        mGroupBoxWireframe->setObjectName(QString::fromUtf8("mGroupBoxWireframe"));
        mGroupBoxWireframe->setCheckable(true);
        mGroupBoxWireframe->setChecked(false);
        gridLayout_2 = new QGridLayout(mGroupBoxWireframe);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_9 = new QLabel(mGroupBoxWireframe);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        mSpinBoxWireframeLineWidth = new QgsDoubleSpinBox(mGroupBoxWireframe);
        mSpinBoxWireframeLineWidth->setObjectName(QString::fromUtf8("mSpinBoxWireframeLineWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinBoxWireframeLineWidth->sizePolicy().hasHeightForWidth());
        mSpinBoxWireframeLineWidth->setSizePolicy(sizePolicy);
        mSpinBoxWireframeLineWidth->setValue(1.000000000000000);

        gridLayout_2->addWidget(mSpinBoxWireframeLineWidth, 0, 1, 1, 1);

        label_10 = new QLabel(mGroupBoxWireframe);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        mColorButtonWireframe = new QgsColorButton(mGroupBoxWireframe);
        mColorButtonWireframe->setObjectName(QString::fromUtf8("mColorButtonWireframe"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mColorButtonWireframe->sizePolicy().hasHeightForWidth());
        mColorButtonWireframe->setSizePolicy(sizePolicy1);
        mColorButtonWireframe->setMinimumSize(QSize(120, 0));

        gridLayout_2->addWidget(mColorButtonWireframe, 1, 1, 1, 1);


        gridLayout_3->addWidget(mGroupBoxWireframe, 1, 0, 1, 3);

        mChkSmoothTriangles = new QCheckBox(mGroupBoxTrianglesSettings);
        mChkSmoothTriangles->setObjectName(QString::fromUtf8("mChkSmoothTriangles"));

        gridLayout_3->addWidget(mChkSmoothTriangles, 0, 0, 1, 3);

        mLodSlider = new QSlider(mGroupBoxTrianglesSettings);
        mLodSlider->setObjectName(QString::fromUtf8("mLodSlider"));
        mLodSlider->setValue(99);
        mLodSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(mLodSlider, 2, 1, 1, 2);


        verticalLayout->addWidget(mGroupBoxTrianglesSettings);

        mGroupBoxVerticaleSettings = new QgsCollapsibleGroupBox(QgsMesh3dPropsWidget);
        mGroupBoxVerticaleSettings->setObjectName(QString::fromUtf8("mGroupBoxVerticaleSettings"));
        formLayout = new QFormLayout(mGroupBoxVerticaleSettings);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(mGroupBoxVerticaleSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        mSpinBoxVerticaleScale = new QgsDoubleSpinBox(mGroupBoxVerticaleSettings);
        mSpinBoxVerticaleScale->setObjectName(QString::fromUtf8("mSpinBoxVerticaleScale"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSpinBoxVerticaleScale->sizePolicy().hasHeightForWidth());
        mSpinBoxVerticaleScale->setSizePolicy(sizePolicy2);
        mSpinBoxVerticaleScale->setMaximum(9999999.990000000223517);
        mSpinBoxVerticaleScale->setValue(1.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, mSpinBoxVerticaleScale);

        label = new QLabel(mGroupBoxVerticaleSettings);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mComboBoxDatasetVertical = new QComboBox(mGroupBoxVerticaleSettings);
        mComboBoxDatasetVertical->setObjectName(QString::fromUtf8("mComboBoxDatasetVertical"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mComboBoxDatasetVertical->sizePolicy().hasHeightForWidth());
        mComboBoxDatasetVertical->setSizePolicy(sizePolicy3);

        formLayout->setWidget(0, QFormLayout::FieldRole, mComboBoxDatasetVertical);

        mCheckBoxVerticalMagnitudeRelative = new QCheckBox(mGroupBoxVerticaleSettings);
        mCheckBoxVerticalMagnitudeRelative->setObjectName(QString::fromUtf8("mCheckBoxVerticalMagnitudeRelative"));
        sizePolicy3.setHeightForWidth(mCheckBoxVerticalMagnitudeRelative->sizePolicy().hasHeightForWidth());
        mCheckBoxVerticalMagnitudeRelative->setSizePolicy(sizePolicy3);
        mCheckBoxVerticalMagnitudeRelative->setMinimumSize(QSize(100, 0));

        formLayout->setWidget(1, QFormLayout::SpanningRole, mCheckBoxVerticalMagnitudeRelative);


        verticalLayout->addWidget(mGroupBoxVerticaleSettings);

        mGroupBoxTextureSettings = new QgsCollapsibleGroupBox(QgsMesh3dPropsWidget);
        mGroupBoxTextureSettings->setObjectName(QString::fromUtf8("mGroupBoxTextureSettings"));
        gridLayout_6 = new QGridLayout(mGroupBoxTextureSettings);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mGroupBoxColorRampShader = new QGroupBox(mGroupBoxTextureSettings);
        mGroupBoxColorRampShader->setObjectName(QString::fromUtf8("mGroupBoxColorRampShader"));
        gridLayout_7 = new QGridLayout(mGroupBoxColorRampShader);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(9, 9, 9, 9);
        line_2 = new QFrame(mGroupBoxColorRampShader);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_2, 1, 0, 1, 5);

        mColorRampShaderMinEdit = new QLineEdit(mGroupBoxColorRampShader);
        mColorRampShaderMinEdit->setObjectName(QString::fromUtf8("mColorRampShaderMinEdit"));
        sizePolicy3.setHeightForWidth(mColorRampShaderMinEdit->sizePolicy().hasHeightForWidth());
        mColorRampShaderMinEdit->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(mColorRampShaderMinEdit, 0, 1, 1, 1);

        label_2 = new QLabel(mGroupBoxColorRampShader);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        label_7 = new QLabel(mGroupBoxColorRampShader);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_7->addWidget(label_7, 0, 2, 1, 1);

        mColorRampShaderMinMaxReloadButton = new QPushButton(mGroupBoxColorRampShader);
        mColorRampShaderMinMaxReloadButton->setObjectName(QString::fromUtf8("mColorRampShaderMinMaxReloadButton"));
        mColorRampShaderMinMaxReloadButton->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mColorRampShaderMinMaxReloadButton->setIcon(icon);

        gridLayout_7->addWidget(mColorRampShaderMinMaxReloadButton, 0, 4, 1, 1);

        mColorRampShaderWidget = new QgsColorRampShaderWidget(mGroupBoxColorRampShader);
        mColorRampShaderWidget->setObjectName(QString::fromUtf8("mColorRampShaderWidget"));
        mColorRampShaderWidget->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(mColorRampShaderWidget, 2, 0, 1, 5);

        mColorRampShaderMaxEdit = new QLineEdit(mGroupBoxColorRampShader);
        mColorRampShaderMaxEdit->setObjectName(QString::fromUtf8("mColorRampShaderMaxEdit"));
        sizePolicy3.setHeightForWidth(mColorRampShaderMaxEdit->sizePolicy().hasHeightForWidth());
        mColorRampShaderMaxEdit->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(mColorRampShaderMaxEdit, 0, 3, 1, 1);


        gridLayout_6->addWidget(mGroupBoxColorRampShader, 1, 0, 1, 2);

        label_5 = new QLabel(mGroupBoxTextureSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        mMeshSingleColorWidget = new QWidget(mGroupBoxTextureSettings);
        mMeshSingleColorWidget->setObjectName(QString::fromUtf8("mMeshSingleColorWidget"));
        horizontalLayout_3 = new QHBoxLayout(mMeshSingleColorWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(mMeshSingleColorWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        mMeshSingleColorButton = new QgsColorButton(mMeshSingleColorWidget);
        mMeshSingleColorButton->setObjectName(QString::fromUtf8("mMeshSingleColorButton"));
        sizePolicy1.setHeightForWidth(mMeshSingleColorButton->sizePolicy().hasHeightForWidth());
        mMeshSingleColorButton->setSizePolicy(sizePolicy1);
        mMeshSingleColorButton->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(mMeshSingleColorButton);


        gridLayout_6->addWidget(mMeshSingleColorWidget, 2, 0, 1, 2);

        mComboBoxTextureType = new QComboBox(mGroupBoxTextureSettings);
        mComboBoxTextureType->setObjectName(QString::fromUtf8("mComboBoxTextureType"));
        sizePolicy3.setHeightForWidth(mComboBoxTextureType->sizePolicy().hasHeightForWidth());
        mComboBoxTextureType->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(mComboBoxTextureType, 0, 1, 1, 1);


        verticalLayout->addWidget(mGroupBoxTextureSettings);

        mGroupBoxArrowsSettings = new QgsCollapsibleGroupBox(QgsMesh3dPropsWidget);
        mGroupBoxArrowsSettings->setObjectName(QString::fromUtf8("mGroupBoxArrowsSettings"));
        mGroupBoxArrowsSettings->setCheckable(true);
        gridLayout = new QGridLayout(mGroupBoxArrowsSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(mGroupBoxArrowsSettings);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 2, 1, 1);

        mArrowsSpacingSpinBox = new QgsDoubleSpinBox(mGroupBoxArrowsSettings);
        mArrowsSpacingSpinBox->setObjectName(QString::fromUtf8("mArrowsSpacingSpinBox"));
        sizePolicy3.setHeightForWidth(mArrowsSpacingSpinBox->sizePolicy().hasHeightForWidth());
        mArrowsSpacingSpinBox->setSizePolicy(sizePolicy3);
        mArrowsSpacingSpinBox->setMinimum(1.000000000000000);
        mArrowsSpacingSpinBox->setMaximum(100000000000000000.000000000000000);
        mArrowsSpacingSpinBox->setValue(25.000000000000000);

        gridLayout->addWidget(mArrowsSpacingSpinBox, 0, 1, 1, 1);

        label_3 = new QLabel(mGroupBoxArrowsSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mArrowsFixedSizeCheckBox = new QCheckBox(mGroupBoxArrowsSettings);
        mArrowsFixedSizeCheckBox->setObjectName(QString::fromUtf8("mArrowsFixedSizeCheckBox"));

        gridLayout->addWidget(mArrowsFixedSizeCheckBox, 2, 0, 1, 1);


        verticalLayout->addWidget(mGroupBoxArrowsSettings);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mCullingMode, mChkSmoothTriangles);
        QWidget::setTabOrder(mChkSmoothTriangles, mGroupBoxWireframe);
        QWidget::setTabOrder(mGroupBoxWireframe, mSpinBoxWireframeLineWidth);
        QWidget::setTabOrder(mSpinBoxWireframeLineWidth, mColorButtonWireframe);
        QWidget::setTabOrder(mColorButtonWireframe, mLodSlider);
        QWidget::setTabOrder(mLodSlider, mSpinBoxVerticaleScale);
        QWidget::setTabOrder(mSpinBoxVerticaleScale, mComboBoxDatasetVertical);
        QWidget::setTabOrder(mComboBoxDatasetVertical, mCheckBoxVerticalMagnitudeRelative);
        QWidget::setTabOrder(mCheckBoxVerticalMagnitudeRelative, mComboBoxTextureType);
        QWidget::setTabOrder(mComboBoxTextureType, mColorRampShaderMinEdit);
        QWidget::setTabOrder(mColorRampShaderMinEdit, mColorRampShaderMaxEdit);
        QWidget::setTabOrder(mColorRampShaderMaxEdit, mColorRampShaderMinMaxReloadButton);
        QWidget::setTabOrder(mColorRampShaderMinMaxReloadButton, mMeshSingleColorButton);
        QWidget::setTabOrder(mMeshSingleColorButton, mGroupBoxArrowsSettings);
        QWidget::setTabOrder(mGroupBoxArrowsSettings, mArrowsSpacingSpinBox);
        QWidget::setTabOrder(mArrowsSpacingSpinBox, mArrowsFixedSizeCheckBox);

        retranslateUi(QgsMesh3dPropsWidget);

        QMetaObject::connectSlotsByName(QgsMesh3dPropsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsMesh3dPropsWidget)
    {
        mCullingModeLabel->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Culling mode", nullptr));
        mGroupBoxTrianglesSettings->setTitle(QCoreApplication::translate("QgsMesh3dPropsWidget", "Triangles Settings", nullptr));
        mLabelLod->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Level of detail", nullptr));
        mGroupBoxWireframe->setTitle(QCoreApplication::translate("QgsMesh3dPropsWidget", "Show wireframe", nullptr));
        label_9->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Line width", nullptr));
        mSpinBoxWireframeLineWidth->setSuffix(QCoreApplication::translate("QgsMesh3dPropsWidget", " px", nullptr));
        label_10->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Color", nullptr));
        mChkSmoothTriangles->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Smooth triangles", nullptr));
#if QT_CONFIG(tooltip)
        mLodSlider->setToolTip(QCoreApplication::translate("QgsMesh3dPropsWidget", "Level of detail can only be set when mesh simplification is enabled (see Rendering tab in the Mesh Layer Properties)", nullptr));
#endif // QT_CONFIG(tooltip)
        mGroupBoxVerticaleSettings->setTitle(QCoreApplication::translate("QgsMesh3dPropsWidget", "Vertical Settings", nullptr));
        label_4->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Vertical scale", nullptr));
        label->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Dataset group for vertical value", nullptr));
        mCheckBoxVerticalMagnitudeRelative->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Dataset value relative to vertices Z value", nullptr));
        mGroupBoxTextureSettings->setTitle(QCoreApplication::translate("QgsMesh3dPropsWidget", "Rendering Color Settings", nullptr));
        mGroupBoxColorRampShader->setTitle(QCoreApplication::translate("QgsMesh3dPropsWidget", "Color Ramp Shader", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Min", nullptr));
        label_7->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Max", nullptr));
#if QT_CONFIG(tooltip)
        mColorRampShaderMinMaxReloadButton->setToolTip(QCoreApplication::translate("QgsMesh3dPropsWidget", "Load", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Rendering style", nullptr));
        label_6->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Mesh color", nullptr));
        mMeshSingleColorButton->setText(QString());
        mGroupBoxArrowsSettings->setTitle(QCoreApplication::translate("QgsMesh3dPropsWidget", "Show Arrows", nullptr));
        label_8->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Map units", nullptr));
        label_3->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Arrow spacing", nullptr));
        mArrowsFixedSizeCheckBox->setText(QCoreApplication::translate("QgsMesh3dPropsWidget", "Fixed size", nullptr));
        (void)QgsMesh3dPropsWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsMesh3dPropsWidget: public Ui_QgsMesh3dPropsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESH3DPROPSWIDGET_H
