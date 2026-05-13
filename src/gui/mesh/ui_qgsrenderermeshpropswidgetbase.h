/********************************************************************************
** Form generated from reading UI file 'qgsrenderermeshpropswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERMESHPROPSWIDGETBASE_H
#define UI_QGSRENDERERMESHPROPSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsmeshrenderer3daveragingwidget.h"
#include "qgsmeshrendereractivedatasetwidget.h"
#include "qgsmeshrenderermeshsettingswidget.h"
#include "qgsmeshrendererscalarsettingswidget.h"
#include "qgsmeshrenderervectorsettingswidget.h"
#include "qgsopacitywidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererMeshPropsWidgetBase
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *mStyleOptionsTab;
    QWidget *mActiveDatasetTab;
    QVBoxLayout *verticalLayout_11;
    QgsMeshRendererActiveDatasetWidget *mMeshRendererActiveDatasetWidget;
    QgsCollapsibleGroupBox *mActiveDatasetBlendingMode;
    QGridLayout *gridLayout;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QLabel *label;
    QLabel *lblTransparency;
    QgsOpacityWidget *mOpacityWidget;
    QWidget *mContoursTab;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *mContoursGroupBox;
    QVBoxLayout *verticalLayout_6;
    QgsMeshRendererScalarSettingsWidget *mMeshRendererScalarSettingsWidget;
    QWidget *mVectorsTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mVectorsGroupBox;
    QVBoxLayout *verticalLayout_5;
    QgsMeshRendererVectorSettingsWidget *mMeshRendererVectorSettingsWidget;
    QSpacerItem *verticalSpacer_5;
    QWidget *mMeshTab;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *mEdgeMeshGroupBox;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *mEdgeMeshGroup;
    QVBoxLayout *verticalLayout_9;
    QgsMeshRendererMeshSettingsWidget *mEdgeMeshSettingsWidget;
    QGroupBox *mFaceMeshGroupBox;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *mNativeMeshGroup;
    QVBoxLayout *verticalLayout_4;
    QgsMeshRendererMeshSettingsWidget *mNativeMeshSettingsWidget;
    QGroupBox *mTriangularMeshGroup;
    QVBoxLayout *verticalLayout_3;
    QgsMeshRendererMeshSettingsWidget *mTriangularMeshSettingsWidget;
    QSpacerItem *verticalSpacer_2;
    QWidget *mAveragingTab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QgsMeshRenderer3DAveragingWidget *m3dAveragingSettingsWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsRendererMeshPropsWidgetBase)
    {
        if (QgsRendererMeshPropsWidgetBase->objectName().isEmpty())
            QgsRendererMeshPropsWidgetBase->setObjectName(QString::fromUtf8("QgsRendererMeshPropsWidgetBase"));
        QgsRendererMeshPropsWidgetBase->resize(453, 345);
        QgsRendererMeshPropsWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout_2 = new QHBoxLayout(QgsRendererMeshPropsWidgetBase);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mStyleOptionsTab = new QTabWidget(QgsRendererMeshPropsWidgetBase);
        mStyleOptionsTab->setObjectName(QString::fromUtf8("mStyleOptionsTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mStyleOptionsTab->sizePolicy().hasHeightForWidth());
        mStyleOptionsTab->setSizePolicy(sizePolicy);
        mStyleOptionsTab->setTabPosition(QTabWidget::North);
        mStyleOptionsTab->setTabShape(QTabWidget::Rounded);
        mStyleOptionsTab->setIconSize(QSize(20, 20));
        mStyleOptionsTab->setElideMode(Qt::ElideNone);
        mStyleOptionsTab->setDocumentMode(true);
        mStyleOptionsTab->setTabsClosable(false);
        mActiveDatasetTab = new QWidget();
        mActiveDatasetTab->setObjectName(QString::fromUtf8("mActiveDatasetTab"));
        verticalLayout_11 = new QVBoxLayout(mActiveDatasetTab);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, -1, 0, 0);
        mMeshRendererActiveDatasetWidget = new QgsMeshRendererActiveDatasetWidget(mActiveDatasetTab);
        mMeshRendererActiveDatasetWidget->setObjectName(QString::fromUtf8("mMeshRendererActiveDatasetWidget"));
        mMeshRendererActiveDatasetWidget->setEnabled(true);
        mMeshRendererActiveDatasetWidget->setMinimumSize(QSize(0, 0));

        verticalLayout_11->addWidget(mMeshRendererActiveDatasetWidget);

        mActiveDatasetBlendingMode = new QgsCollapsibleGroupBox(mActiveDatasetTab);
        mActiveDatasetBlendingMode->setObjectName(QString::fromUtf8("mActiveDatasetBlendingMode"));
        gridLayout = new QGridLayout(mActiveDatasetBlendingMode);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 3, -1);
        mBlendModeComboBox = new QgsBlendModeComboBox(mActiveDatasetBlendingMode);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));
        mBlendModeComboBox->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(mBlendModeComboBox, 1, 1, 1, 1);

        label = new QLabel(mActiveDatasetBlendingMode);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lblTransparency = new QLabel(mActiveDatasetBlendingMode);
        lblTransparency->setObjectName(QString::fromUtf8("lblTransparency"));

        gridLayout->addWidget(lblTransparency, 0, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mActiveDatasetBlendingMode);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOpacityWidget, 0, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_11->addWidget(mActiveDatasetBlendingMode);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStyleOptionsTab->addTab(mActiveDatasetTab, icon, QString());
        mContoursTab = new QWidget();
        mContoursTab->setObjectName(QString::fromUtf8("mContoursTab"));
        verticalLayout_10 = new QVBoxLayout(mContoursTab);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, -1, 0, 0);
        mContoursGroupBox = new QGroupBox(mContoursTab);
        mContoursGroupBox->setObjectName(QString::fromUtf8("mContoursGroupBox"));
        mContoursGroupBox->setCheckable(true);
        mContoursGroupBox->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(mContoursGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mMeshRendererScalarSettingsWidget = new QgsMeshRendererScalarSettingsWidget(mContoursGroupBox);
        mMeshRendererScalarSettingsWidget->setObjectName(QString::fromUtf8("mMeshRendererScalarSettingsWidget"));

        verticalLayout_6->addWidget(mMeshRendererScalarSettingsWidget);


        verticalLayout_10->addWidget(mContoursGroupBox);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/meshcontours.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStyleOptionsTab->addTab(mContoursTab, icon1, QString());
        mVectorsTab = new QWidget();
        mVectorsTab->setObjectName(QString::fromUtf8("mVectorsTab"));
        verticalLayout_2 = new QVBoxLayout(mVectorsTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        mVectorsGroupBox = new QGroupBox(mVectorsTab);
        mVectorsGroupBox->setObjectName(QString::fromUtf8("mVectorsGroupBox"));
        mVectorsGroupBox->setCheckable(true);
        mVectorsGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(mVectorsGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mMeshRendererVectorSettingsWidget = new QgsMeshRendererVectorSettingsWidget(mVectorsGroupBox);
        mMeshRendererVectorSettingsWidget->setObjectName(QString::fromUtf8("mMeshRendererVectorSettingsWidget"));
        sizePolicy.setHeightForWidth(mMeshRendererVectorSettingsWidget->sizePolicy().hasHeightForWidth());
        mMeshRendererVectorSettingsWidget->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(mMeshRendererVectorSettingsWidget);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);


        verticalLayout_2->addWidget(mVectorsGroupBox);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/meshvectors.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStyleOptionsTab->addTab(mVectorsTab, icon2, QString());
        mMeshTab = new QWidget();
        mMeshTab->setObjectName(QString::fromUtf8("mMeshTab"));
        verticalLayout_12 = new QVBoxLayout(mMeshTab);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, -1, 0, 0);
        mEdgeMeshGroupBox = new QGroupBox(mMeshTab);
        mEdgeMeshGroupBox->setObjectName(QString::fromUtf8("mEdgeMeshGroupBox"));
        verticalLayout_13 = new QVBoxLayout(mEdgeMeshGroupBox);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        mEdgeMeshGroup = new QGroupBox(mEdgeMeshGroupBox);
        mEdgeMeshGroup->setObjectName(QString::fromUtf8("mEdgeMeshGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mEdgeMeshGroup->sizePolicy().hasHeightForWidth());
        mEdgeMeshGroup->setSizePolicy(sizePolicy1);
        mEdgeMeshGroup->setCheckable(true);
        verticalLayout_9 = new QVBoxLayout(mEdgeMeshGroup);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        mEdgeMeshSettingsWidget = new QgsMeshRendererMeshSettingsWidget(mEdgeMeshGroup);
        mEdgeMeshSettingsWidget->setObjectName(QString::fromUtf8("mEdgeMeshSettingsWidget"));
        sizePolicy1.setHeightForWidth(mEdgeMeshSettingsWidget->sizePolicy().hasHeightForWidth());
        mEdgeMeshSettingsWidget->setSizePolicy(sizePolicy1);

        verticalLayout_9->addWidget(mEdgeMeshSettingsWidget);


        verticalLayout_13->addWidget(mEdgeMeshGroup);


        verticalLayout_12->addWidget(mEdgeMeshGroupBox);

        mFaceMeshGroupBox = new QGroupBox(mMeshTab);
        mFaceMeshGroupBox->setObjectName(QString::fromUtf8("mFaceMeshGroupBox"));
        verticalLayout_8 = new QVBoxLayout(mFaceMeshGroupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        mNativeMeshGroup = new QGroupBox(mFaceMeshGroupBox);
        mNativeMeshGroup->setObjectName(QString::fromUtf8("mNativeMeshGroup"));
        sizePolicy1.setHeightForWidth(mNativeMeshGroup->sizePolicy().hasHeightForWidth());
        mNativeMeshGroup->setSizePolicy(sizePolicy1);
        mNativeMeshGroup->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(mNativeMeshGroup);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mNativeMeshSettingsWidget = new QgsMeshRendererMeshSettingsWidget(mNativeMeshGroup);
        mNativeMeshSettingsWidget->setObjectName(QString::fromUtf8("mNativeMeshSettingsWidget"));
        sizePolicy1.setHeightForWidth(mNativeMeshSettingsWidget->sizePolicy().hasHeightForWidth());
        mNativeMeshSettingsWidget->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(mNativeMeshSettingsWidget);


        verticalLayout_8->addWidget(mNativeMeshGroup);

        mTriangularMeshGroup = new QGroupBox(mFaceMeshGroupBox);
        mTriangularMeshGroup->setObjectName(QString::fromUtf8("mTriangularMeshGroup"));
        sizePolicy1.setHeightForWidth(mTriangularMeshGroup->sizePolicy().hasHeightForWidth());
        mTriangularMeshGroup->setSizePolicy(sizePolicy1);
        mTriangularMeshGroup->setCheckable(true);
        mTriangularMeshGroup->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(mTriangularMeshGroup);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mTriangularMeshSettingsWidget = new QgsMeshRendererMeshSettingsWidget(mTriangularMeshGroup);
        mTriangularMeshSettingsWidget->setObjectName(QString::fromUtf8("mTriangularMeshSettingsWidget"));
        sizePolicy1.setHeightForWidth(mTriangularMeshSettingsWidget->sizePolicy().hasHeightForWidth());
        mTriangularMeshSettingsWidget->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(mTriangularMeshSettingsWidget);


        verticalLayout_8->addWidget(mTriangularMeshGroup);


        verticalLayout_12->addWidget(mFaceMeshGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_2);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/meshframe.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStyleOptionsTab->addTab(mMeshTab, icon3, QString());
        mAveragingTab = new QWidget();
        mAveragingTab->setObjectName(QString::fromUtf8("mAveragingTab"));
        verticalLayout = new QVBoxLayout(mAveragingTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        groupBox = new QGroupBox(mAveragingTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        m3dAveragingSettingsWidget = new QgsMeshRenderer3DAveragingWidget(groupBox);
        m3dAveragingSettingsWidget->setObjectName(QString::fromUtf8("m3dAveragingSettingsWidget"));

        verticalLayout_7->addWidget(m3dAveragingSettingsWidget);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/meshaveraging.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mStyleOptionsTab->addTab(mAveragingTab, icon4, QString());

        horizontalLayout_2->addWidget(mStyleOptionsTab);

        QWidget::setTabOrder(mStyleOptionsTab, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mContoursGroupBox);
        QWidget::setTabOrder(mContoursGroupBox, mVectorsGroupBox);
        QWidget::setTabOrder(mVectorsGroupBox, mEdgeMeshGroup);
        QWidget::setTabOrder(mEdgeMeshGroup, mNativeMeshGroup);
        QWidget::setTabOrder(mNativeMeshGroup, mTriangularMeshGroup);

        retranslateUi(QgsRendererMeshPropsWidgetBase);

        mStyleOptionsTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRendererMeshPropsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRendererMeshPropsWidgetBase)
    {
        mActiveDatasetBlendingMode->setTitle(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Layer Rendering", nullptr));
        label->setText(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Blending mode", nullptr));
        lblTransparency->setText(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Opacity", nullptr));
        mStyleOptionsTab->setTabText(mStyleOptionsTab->indexOf(mActiveDatasetTab), QString());
#if QT_CONFIG(tooltip)
        mStyleOptionsTab->setTabToolTip(mStyleOptionsTab->indexOf(mActiveDatasetTab), QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Datasets", nullptr));
#endif // QT_CONFIG(tooltip)
        mContoursGroupBox->setTitle(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Show Contours", nullptr));
        mStyleOptionsTab->setTabText(mStyleOptionsTab->indexOf(mContoursTab), QString());
#if QT_CONFIG(tooltip)
        mStyleOptionsTab->setTabToolTip(mStyleOptionsTab->indexOf(mContoursTab), QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Contours", nullptr));
#endif // QT_CONFIG(tooltip)
        mVectorsGroupBox->setTitle(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Show Vectors", nullptr));
        mStyleOptionsTab->setTabText(mStyleOptionsTab->indexOf(mVectorsTab), QString());
#if QT_CONFIG(tooltip)
        mStyleOptionsTab->setTabToolTip(mStyleOptionsTab->indexOf(mVectorsTab), QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Vectors", nullptr));
#endif // QT_CONFIG(tooltip)
        mEdgeMeshGroupBox->setTitle(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "1D Mesh", nullptr));
        mEdgeMeshGroup->setTitle(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Edge Mesh Rendering", nullptr));
        mFaceMeshGroupBox->setTitle(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "2D Mesh", nullptr));
        mNativeMeshGroup->setTitle(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Native Mesh Rendering", nullptr));
        mTriangularMeshGroup->setTitle(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Triangular Mesh Rendering", nullptr));
        mStyleOptionsTab->setTabText(mStyleOptionsTab->indexOf(mMeshTab), QString());
#if QT_CONFIG(tooltip)
        mStyleOptionsTab->setTabToolTip(mStyleOptionsTab->indexOf(mMeshTab), QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Rendering", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Average 3D Stacked Mesh Results to 2D Dataset Values", nullptr));
        mStyleOptionsTab->setTabText(mStyleOptionsTab->indexOf(mAveragingTab), QString());
#if QT_CONFIG(tooltip)
        mStyleOptionsTab->setTabToolTip(mStyleOptionsTab->indexOf(mAveragingTab), QCoreApplication::translate("QgsRendererMeshPropsWidgetBase", "Stacked mesh averaging method", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsRendererMeshPropsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRendererMeshPropsWidgetBase: public Ui_QgsRendererMeshPropsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERMESHPROPSWIDGETBASE_H
