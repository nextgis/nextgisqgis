/********************************************************************************
** Form generated from reading UI file 'qgs3doptionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGS3DOPTIONSBASE_H
#define UI_QGS3DOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Qgs3DOptionsBase
{
public:
    QVBoxLayout *verticalLayout_6;
    QSplitter *mSplitter;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *cameraTerrain;
    QGridLayout *gridLayout;
    QComboBox *cboCameraProjectionType;
    QgsSpinBox *spinCameraFieldOfView;
    QLabel *labelCameraProjectionType;
    QLabel *labelFieldofView;
    QComboBox *mCameraNavigationModeCombo;
    QgsDoubleSpinBox *mCameraMovementSpeed;
    QLabel *labelCameraNavigationMode;
    QLabel *labelMovementSpeed;
    QLabel *labelCameraNavigationMode_2;
    QComboBox *mInvertVerticalAxisCombo;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QgsDoubleSpinBox *mGpuMemoryLimit;

    void setupUi(QWidget *Qgs3DOptionsBase)
    {
        if (Qgs3DOptionsBase->objectName().isEmpty())
            Qgs3DOptionsBase->setObjectName(QString::fromUtf8("Qgs3DOptionsBase"));
        Qgs3DOptionsBase->setProperty("modal", QVariant(false));
        Qgs3DOptionsBase->resize(677, 383);
        verticalLayout_6 = new QVBoxLayout(Qgs3DOptionsBase);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mSplitter = new QSplitter(Qgs3DOptionsBase);
        mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
        mSplitter->setOrientation(Qt::Vertical);
        scrollArea = new QgsScrollArea(mSplitter);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 677, 383));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        cameraTerrain = new QGroupBox(scrollAreaWidgetContents);
        cameraTerrain->setObjectName(QString::fromUtf8("cameraTerrain"));
        gridLayout = new QGridLayout(cameraTerrain);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cboCameraProjectionType = new QComboBox(cameraTerrain);
        cboCameraProjectionType->setObjectName(QString::fromUtf8("cboCameraProjectionType"));

        gridLayout->addWidget(cboCameraProjectionType, 1, 1, 1, 2);

        spinCameraFieldOfView = new QgsSpinBox(cameraTerrain);
        spinCameraFieldOfView->setObjectName(QString::fromUtf8("spinCameraFieldOfView"));
        spinCameraFieldOfView->setMaximum(180);

        gridLayout->addWidget(spinCameraFieldOfView, 2, 1, 1, 2);

        labelCameraProjectionType = new QLabel(cameraTerrain);
        labelCameraProjectionType->setObjectName(QString::fromUtf8("labelCameraProjectionType"));

        gridLayout->addWidget(labelCameraProjectionType, 1, 0, 1, 1);

        labelFieldofView = new QLabel(cameraTerrain);
        labelFieldofView->setObjectName(QString::fromUtf8("labelFieldofView"));

        gridLayout->addWidget(labelFieldofView, 2, 0, 1, 1);

        mCameraNavigationModeCombo = new QComboBox(cameraTerrain);
        mCameraNavigationModeCombo->setObjectName(QString::fromUtf8("mCameraNavigationModeCombo"));

        gridLayout->addWidget(mCameraNavigationModeCombo, 3, 1, 1, 2);

        mCameraMovementSpeed = new QgsDoubleSpinBox(cameraTerrain);
        mCameraMovementSpeed->setObjectName(QString::fromUtf8("mCameraMovementSpeed"));
        mCameraMovementSpeed->setMinimum(0.010000000000000);
        mCameraMovementSpeed->setSingleStep(1.000000000000000);
        mCameraMovementSpeed->setValue(5.000000000000000);

        gridLayout->addWidget(mCameraMovementSpeed, 4, 1, 1, 2);

        labelCameraNavigationMode = new QLabel(cameraTerrain);
        labelCameraNavigationMode->setObjectName(QString::fromUtf8("labelCameraNavigationMode"));

        gridLayout->addWidget(labelCameraNavigationMode, 3, 0, 1, 1);

        labelMovementSpeed = new QLabel(cameraTerrain);
        labelMovementSpeed->setObjectName(QString::fromUtf8("labelMovementSpeed"));

        gridLayout->addWidget(labelMovementSpeed, 4, 0, 1, 1);

        labelCameraNavigationMode_2 = new QLabel(cameraTerrain);
        labelCameraNavigationMode_2->setObjectName(QString::fromUtf8("labelCameraNavigationMode_2"));

        gridLayout->addWidget(labelCameraNavigationMode_2, 5, 0, 1, 1);

        mInvertVerticalAxisCombo = new QComboBox(cameraTerrain);
        mInvertVerticalAxisCombo->setObjectName(QString::fromUtf8("mInvertVerticalAxisCombo"));

        gridLayout->addWidget(mInvertVerticalAxisCombo, 5, 1, 1, 2);


        gridLayout_2->addWidget(cameraTerrain, 0, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        mGpuMemoryLimit = new QgsDoubleSpinBox(groupBox);
        mGpuMemoryLimit->setObjectName(QString::fromUtf8("mGpuMemoryLimit"));
        mGpuMemoryLimit->setDecimals(0);
        mGpuMemoryLimit->setMinimum(10.000000000000000);
        mGpuMemoryLimit->setMaximum(100000.000000000000000);
        mGpuMemoryLimit->setSingleStep(100.000000000000000);

        gridLayout_3->addWidget(mGpuMemoryLimit, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        mSplitter->addWidget(scrollArea);

        verticalLayout_6->addWidget(mSplitter);


        retranslateUi(Qgs3DOptionsBase);

        QMetaObject::connectSlotsByName(Qgs3DOptionsBase);
    } // setupUi

    void retranslateUi(QWidget *Qgs3DOptionsBase)
    {
        Qgs3DOptionsBase->setWindowTitle(QCoreApplication::translate("Qgs3DOptionsBase", "3D Options", nullptr));
        cameraTerrain->setTitle(QCoreApplication::translate("Qgs3DOptionsBase", "Default Camera Settings", nullptr));
        spinCameraFieldOfView->setSuffix(QCoreApplication::translate("Qgs3DOptionsBase", "\302\260", nullptr));
        labelCameraProjectionType->setText(QCoreApplication::translate("Qgs3DOptionsBase", "Projection type", nullptr));
        labelFieldofView->setText(QCoreApplication::translate("Qgs3DOptionsBase", "Field of View", nullptr));
        labelCameraNavigationMode->setText(QCoreApplication::translate("Qgs3DOptionsBase", "Navigation mode", nullptr));
        labelMovementSpeed->setText(QCoreApplication::translate("Qgs3DOptionsBase", "Movement speed", nullptr));
        labelCameraNavigationMode_2->setText(QCoreApplication::translate("Qgs3DOptionsBase", "Invert vertical axis", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Qgs3DOptionsBase", "Graphics Memory", nullptr));
        label->setText(QCoreApplication::translate("Qgs3DOptionsBase", "Allowed memory per map layer", nullptr));
        mGpuMemoryLimit->setSuffix(QCoreApplication::translate("Qgs3DOptionsBase", " MB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qgs3DOptionsBase: public Ui_Qgs3DOptionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGS3DOPTIONSBASE_H
