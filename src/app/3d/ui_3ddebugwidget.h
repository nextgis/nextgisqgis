/********************************************************************************
** Form generated from reading UI file '3ddebugwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_3DDEBUGWIDGET_H
#define UI_3DDEBUGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_Q3DDebugWidget
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkShowTileInfo;
    QCheckBox *chkShowBoundingBoxes;
    QCheckBox *chkShowCameraViewCenter;
    QCheckBox *chkShowCameraRotationCenter;
    QCheckBox *chkShowLightSourceOrigins;
    QCheckBox *chkStopUpdates;
    QCheckBox *chkStopOriginShifts;
    QCheckBox *chkDebugOverlay;
    QgsCollapsibleGroupBox *mDebugShadowMapGroupBox;
    QGridLayout *gridLayout_10;
    QComboBox *mDebugShadowMapCornerComboBox;
    QLabel *lblDebugShadowMapCorner;
    QLabel *lblDebugShadowMapSize;
    QgsDoubleSpinBox *mDebugShadowMapSizeSpinBox;
    QgsCollapsibleGroupBox *mDebugDepthMapGroupBox;
    QGridLayout *gridLayout_9;
    QComboBox *mDebugDepthMapCornerComboBox;
    QLabel *lblDebugDepthMapSize;
    QLabel *lblDebugDepthMapCorner;
    QgsDoubleSpinBox *mDebugDepthMapSizeSpinBox;
    QgsCollapsibleGroupBox *mCameraInfoGroupBox;
    QGridLayout *gridLayout;
    QDoubleSpinBox *mCameraZ;
    QLabel *lblLookingX;
    QLabel *lblLookingY;
    QDoubleSpinBox *mNearPlane;
    QDoubleSpinBox *mFarPlane;
    QLabel *lblCameraX;
    QLabel *lblCameraY;
    QDoubleSpinBox *mCameraX;
    QLabel *lblFarPlane;
    QLabel *lblCameraZ;
    QLabel *lblNearPlane;
    QDoubleSpinBox *mCameraY;
    QLabel *lblLookingZ;
    QDoubleSpinBox *mLookingX;
    QDoubleSpinBox *mLookingY;
    QDoubleSpinBox *mLookingZ;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Q3DDebugWidget)
    {
        if (Q3DDebugWidget->objectName().isEmpty())
            Q3DDebugWidget->setObjectName(QString::fromUtf8("Q3DDebugWidget"));
        Q3DDebugWidget->resize(515, 681);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Q3DDebugWidget->sizePolicy().hasHeightForWidth());
        Q3DDebugWidget->setSizePolicy(sizePolicy);
        Q3DDebugWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(Q3DDebugWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(Q3DDebugWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 501, 795));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy2);
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_4->setContentsMargins(6, 0, 6, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        chkShowTileInfo = new QCheckBox(scrollAreaWidgetContents);
        chkShowTileInfo->setObjectName(QString::fromUtf8("chkShowTileInfo"));

        verticalLayout_2->addWidget(chkShowTileInfo);

        chkShowBoundingBoxes = new QCheckBox(scrollAreaWidgetContents);
        chkShowBoundingBoxes->setObjectName(QString::fromUtf8("chkShowBoundingBoxes"));

        verticalLayout_2->addWidget(chkShowBoundingBoxes);

        chkShowCameraViewCenter = new QCheckBox(scrollAreaWidgetContents);
        chkShowCameraViewCenter->setObjectName(QString::fromUtf8("chkShowCameraViewCenter"));

        verticalLayout_2->addWidget(chkShowCameraViewCenter);

        chkShowCameraRotationCenter = new QCheckBox(scrollAreaWidgetContents);
        chkShowCameraRotationCenter->setObjectName(QString::fromUtf8("chkShowCameraRotationCenter"));

        verticalLayout_2->addWidget(chkShowCameraRotationCenter);

        chkShowLightSourceOrigins = new QCheckBox(scrollAreaWidgetContents);
        chkShowLightSourceOrigins->setObjectName(QString::fromUtf8("chkShowLightSourceOrigins"));

        verticalLayout_2->addWidget(chkShowLightSourceOrigins);

        chkStopUpdates = new QCheckBox(scrollAreaWidgetContents);
        chkStopUpdates->setObjectName(QString::fromUtf8("chkStopUpdates"));

        verticalLayout_2->addWidget(chkStopUpdates);

        chkStopOriginShifts = new QCheckBox(scrollAreaWidgetContents);
        chkStopOriginShifts->setObjectName(QString::fromUtf8("chkStopOriginShifts"));

        verticalLayout_2->addWidget(chkStopOriginShifts);

        chkDebugOverlay = new QCheckBox(scrollAreaWidgetContents);
        chkDebugOverlay->setObjectName(QString::fromUtf8("chkDebugOverlay"));
        chkDebugOverlay->setVisible(true);

        verticalLayout_2->addWidget(chkDebugOverlay);


        verticalLayout_4->addLayout(verticalLayout_2);

        mDebugShadowMapGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mDebugShadowMapGroupBox->setObjectName(QString::fromUtf8("mDebugShadowMapGroupBox"));
        mDebugShadowMapGroupBox->setCheckable(true);
        mDebugShadowMapGroupBox->setChecked(false);
        mDebugShadowMapGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_10 = new QGridLayout(mDebugShadowMapGroupBox);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(-1, 10, -1, -1);
        mDebugShadowMapCornerComboBox = new QComboBox(mDebugShadowMapGroupBox);
        mDebugShadowMapCornerComboBox->setObjectName(QString::fromUtf8("mDebugShadowMapCornerComboBox"));

        gridLayout_10->addWidget(mDebugShadowMapCornerComboBox, 0, 1, 1, 1);

        lblDebugShadowMapCorner = new QLabel(mDebugShadowMapGroupBox);
        lblDebugShadowMapCorner->setObjectName(QString::fromUtf8("lblDebugShadowMapCorner"));

        gridLayout_10->addWidget(lblDebugShadowMapCorner, 0, 0, 1, 1);

        lblDebugShadowMapSize = new QLabel(mDebugShadowMapGroupBox);
        lblDebugShadowMapSize->setObjectName(QString::fromUtf8("lblDebugShadowMapSize"));

        gridLayout_10->addWidget(lblDebugShadowMapSize, 1, 0, 1, 1);

        mDebugShadowMapSizeSpinBox = new QgsDoubleSpinBox(mDebugShadowMapGroupBox);
        mDebugShadowMapSizeSpinBox->setObjectName(QString::fromUtf8("mDebugShadowMapSizeSpinBox"));
        mDebugShadowMapSizeSpinBox->setMaximum(1.000000000000000);
        mDebugShadowMapSizeSpinBox->setSingleStep(0.100000000000000);
        mDebugShadowMapSizeSpinBox->setValue(0.100000000000000);

        gridLayout_10->addWidget(mDebugShadowMapSizeSpinBox, 1, 1, 1, 1);


        verticalLayout_4->addWidget(mDebugShadowMapGroupBox);

        mDebugDepthMapGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mDebugDepthMapGroupBox->setObjectName(QString::fromUtf8("mDebugDepthMapGroupBox"));
        mDebugDepthMapGroupBox->setCheckable(true);
        mDebugDepthMapGroupBox->setChecked(false);
        mDebugDepthMapGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_9 = new QGridLayout(mDebugDepthMapGroupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        mDebugDepthMapCornerComboBox = new QComboBox(mDebugDepthMapGroupBox);
        mDebugDepthMapCornerComboBox->setObjectName(QString::fromUtf8("mDebugDepthMapCornerComboBox"));

        gridLayout_9->addWidget(mDebugDepthMapCornerComboBox, 0, 1, 1, 1);

        lblDebugDepthMapSize = new QLabel(mDebugDepthMapGroupBox);
        lblDebugDepthMapSize->setObjectName(QString::fromUtf8("lblDebugDepthMapSize"));

        gridLayout_9->addWidget(lblDebugDepthMapSize, 1, 0, 1, 1);

        lblDebugDepthMapCorner = new QLabel(mDebugDepthMapGroupBox);
        lblDebugDepthMapCorner->setObjectName(QString::fromUtf8("lblDebugDepthMapCorner"));

        gridLayout_9->addWidget(lblDebugDepthMapCorner, 0, 0, 1, 1);

        mDebugDepthMapSizeSpinBox = new QgsDoubleSpinBox(mDebugDepthMapGroupBox);
        mDebugDepthMapSizeSpinBox->setObjectName(QString::fromUtf8("mDebugDepthMapSizeSpinBox"));
        mDebugDepthMapSizeSpinBox->setMaximum(1.000000000000000);
        mDebugDepthMapSizeSpinBox->setSingleStep(0.100000000000000);
        mDebugDepthMapSizeSpinBox->setValue(0.100000000000000);

        gridLayout_9->addWidget(mDebugDepthMapSizeSpinBox, 1, 1, 1, 1);


        verticalLayout_4->addWidget(mDebugDepthMapGroupBox);

        mCameraInfoGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mCameraInfoGroupBox->setObjectName(QString::fromUtf8("mCameraInfoGroupBox"));
        mCameraInfoGroupBox->setCheckable(false);
        mCameraInfoGroupBox->setChecked(false);
        gridLayout = new QGridLayout(mCameraInfoGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        mCameraZ = new QDoubleSpinBox(mCameraInfoGroupBox);
        mCameraZ->setObjectName(QString::fromUtf8("mCameraZ"));
        mCameraZ->setDecimals(2);

        gridLayout->addWidget(mCameraZ, 12, 1, 1, 1);

        lblLookingX = new QLabel(mCameraInfoGroupBox);
        lblLookingX->setObjectName(QString::fromUtf8("lblLookingX"));

        gridLayout->addWidget(lblLookingX, 13, 0, 1, 1);

        lblLookingY = new QLabel(mCameraInfoGroupBox);
        lblLookingY->setObjectName(QString::fromUtf8("lblLookingY"));

        gridLayout->addWidget(lblLookingY, 14, 0, 1, 1);

        mNearPlane = new QDoubleSpinBox(mCameraInfoGroupBox);
        mNearPlane->setObjectName(QString::fromUtf8("mNearPlane"));
        mNearPlane->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        mNearPlane->setDecimals(2);

        gridLayout->addWidget(mNearPlane, 9, 1, 1, 1);

        mFarPlane = new QDoubleSpinBox(mCameraInfoGroupBox);
        mFarPlane->setObjectName(QString::fromUtf8("mFarPlane"));
        mFarPlane->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        mFarPlane->setDecimals(2);

        gridLayout->addWidget(mFarPlane, 7, 1, 1, 1);

        lblCameraX = new QLabel(mCameraInfoGroupBox);
        lblCameraX->setObjectName(QString::fromUtf8("lblCameraX"));

        gridLayout->addWidget(lblCameraX, 10, 0, 1, 1);

        lblCameraY = new QLabel(mCameraInfoGroupBox);
        lblCameraY->setObjectName(QString::fromUtf8("lblCameraY"));

        gridLayout->addWidget(lblCameraY, 11, 0, 1, 1);

        mCameraX = new QDoubleSpinBox(mCameraInfoGroupBox);
        mCameraX->setObjectName(QString::fromUtf8("mCameraX"));
        mCameraX->setDecimals(2);

        gridLayout->addWidget(mCameraX, 10, 1, 1, 1);

        lblFarPlane = new QLabel(mCameraInfoGroupBox);
        lblFarPlane->setObjectName(QString::fromUtf8("lblFarPlane"));

        gridLayout->addWidget(lblFarPlane, 7, 0, 1, 1);

        lblCameraZ = new QLabel(mCameraInfoGroupBox);
        lblCameraZ->setObjectName(QString::fromUtf8("lblCameraZ"));

        gridLayout->addWidget(lblCameraZ, 12, 0, 1, 1);

        lblNearPlane = new QLabel(mCameraInfoGroupBox);
        lblNearPlane->setObjectName(QString::fromUtf8("lblNearPlane"));

        gridLayout->addWidget(lblNearPlane, 9, 0, 1, 1);

        mCameraY = new QDoubleSpinBox(mCameraInfoGroupBox);
        mCameraY->setObjectName(QString::fromUtf8("mCameraY"));
        mCameraY->setDecimals(2);

        gridLayout->addWidget(mCameraY, 11, 1, 1, 1);

        lblLookingZ = new QLabel(mCameraInfoGroupBox);
        lblLookingZ->setObjectName(QString::fromUtf8("lblLookingZ"));

        gridLayout->addWidget(lblLookingZ, 15, 0, 1, 1);

        mLookingX = new QDoubleSpinBox(mCameraInfoGroupBox);
        mLookingX->setObjectName(QString::fromUtf8("mLookingX"));
        mLookingX->setDecimals(2);

        gridLayout->addWidget(mLookingX, 13, 1, 1, 1);

        mLookingY = new QDoubleSpinBox(mCameraInfoGroupBox);
        mLookingY->setObjectName(QString::fromUtf8("mLookingY"));
        mLookingY->setDecimals(2);

        gridLayout->addWidget(mLookingY, 14, 1, 1, 1);

        mLookingZ = new QDoubleSpinBox(mCameraInfoGroupBox);
        mLookingZ->setObjectName(QString::fromUtf8("mLookingZ"));
        mLookingZ->setDecimals(2);

        gridLayout->addWidget(mLookingZ, 15, 1, 1, 1);


        verticalLayout_4->addWidget(mCameraInfoGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Q3DDebugWidget);

        QMetaObject::connectSlotsByName(Q3DDebugWidget);
    } // setupUi

    void retranslateUi(QWidget *Q3DDebugWidget)
    {
        chkShowTileInfo->setText(QCoreApplication::translate("Q3DDebugWidget", "Show map tile info", nullptr));
        chkShowBoundingBoxes->setText(QCoreApplication::translate("Q3DDebugWidget", "Show bounding boxes", nullptr));
        chkShowCameraViewCenter->setText(QCoreApplication::translate("Q3DDebugWidget", "Show camera's view center", nullptr));
        chkShowCameraRotationCenter->setText(QCoreApplication::translate("Q3DDebugWidget", "Show camera's rotation center", nullptr));
        chkShowLightSourceOrigins->setText(QCoreApplication::translate("Q3DDebugWidget", "Show light sources", nullptr));
        chkStopUpdates->setText(QCoreApplication::translate("Q3DDebugWidget", "Stop scene updates", nullptr));
        chkStopOriginShifts->setText(QCoreApplication::translate("Q3DDebugWidget", "Stop automatic origin shifts", nullptr));
        chkDebugOverlay->setText(QCoreApplication::translate("Q3DDebugWidget", "Show debug overlay", nullptr));
        mDebugShadowMapGroupBox->setTitle(QCoreApplication::translate("Q3DDebugWidget", "Debug shadow map", nullptr));
        lblDebugShadowMapCorner->setText(QCoreApplication::translate("Q3DDebugWidget", "Corner", nullptr));
        lblDebugShadowMapSize->setText(QCoreApplication::translate("Q3DDebugWidget", "Size", nullptr));
        mDebugDepthMapGroupBox->setTitle(QCoreApplication::translate("Q3DDebugWidget", "Debug depth map", nullptr));
        lblDebugDepthMapSize->setText(QCoreApplication::translate("Q3DDebugWidget", "Size", nullptr));
        lblDebugDepthMapCorner->setText(QCoreApplication::translate("Q3DDebugWidget", "Corner", nullptr));
        mCameraInfoGroupBox->setTitle(QCoreApplication::translate("Q3DDebugWidget", "Show camera info", nullptr));
        lblLookingX->setText(QCoreApplication::translate("Q3DDebugWidget", "Looking at X", nullptr));
        lblLookingY->setText(QCoreApplication::translate("Q3DDebugWidget", "Looking at Y", nullptr));
        lblCameraX->setText(QCoreApplication::translate("Q3DDebugWidget", "Camera X pos", nullptr));
        lblCameraY->setText(QCoreApplication::translate("Q3DDebugWidget", "Camera Y pos", nullptr));
        lblFarPlane->setText(QCoreApplication::translate("Q3DDebugWidget", "Far plane", nullptr));
        lblCameraZ->setText(QCoreApplication::translate("Q3DDebugWidget", "Camera Z pos", nullptr));
        lblNearPlane->setText(QCoreApplication::translate("Q3DDebugWidget", "Near plane", nullptr));
        lblLookingZ->setText(QCoreApplication::translate("Q3DDebugWidget", "Looking at Z", nullptr));
        (void)Q3DDebugWidget;
    } // retranslateUi

};

namespace Ui {
    class Q3DDebugWidget: public Ui_Q3DDebugWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_3DDEBUGWIDGET_H
