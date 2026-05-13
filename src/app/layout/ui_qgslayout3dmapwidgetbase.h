/********************************************************************************
** Form generated from reading UI file 'qgslayout3dmapwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUT3DMAPWIDGETBASE_H
#define UI_QGSLAYOUT3DMAPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayout3DMapWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabel;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *mainLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *mCopySettingsButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *mCenterYSpinBox;
    QLabel *label;
    QgsDoubleSpinBox *mDistanceToCenterSpinBox;
    QLabel *label_4;
    QLabel *label_3;
    QgsDoubleSpinBox *mHeadingAngleSpinBox;
    QLabel *label_7;
    QLabel *label_6;
    QgsDoubleSpinBox *mPitchAngleSpinBox;
    QgsDoubleSpinBox *mCenterXSpinBox;
    QLabel *label_5;
    QgsDoubleSpinBox *mCenterZSpinBox;
    QPushButton *mPoseFromViewButton;

    void setupUi(QWidget *QgsLayout3DMapWidgetBase)
    {
        if (QgsLayout3DMapWidgetBase->objectName().isEmpty())
            QgsLayout3DMapWidgetBase->setObjectName(QString::fromUtf8("QgsLayout3DMapWidgetBase"));
        QgsLayout3DMapWidgetBase->resize(540, 613);
        verticalLayout_2 = new QVBoxLayout(QgsLayout3DMapWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mLabel = new QLabel(QgsLayout3DMapWidgetBase);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabel->sizePolicy().hasHeightForWidth());
        mLabel->setSizePolicy(sizePolicy);
        mLabel->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout_2->addWidget(mLabel);

        scrollArea = new QgsScrollArea(QgsLayout3DMapWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 538, 590));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mCopySettingsButton = new QPushButton(groupBox_3);
        mCopySettingsButton->setObjectName(QString::fromUtf8("mCopySettingsButton"));

        verticalLayout_5->addWidget(mCopySettingsButton);


        mainLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mCenterYSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mCenterYSpinBox->setObjectName(QString::fromUtf8("mCenterYSpinBox"));
        mCenterYSpinBox->setDecimals(1);
        mCenterYSpinBox->setMinimum(-9999999.000000000000000);
        mCenterYSpinBox->setMaximum(9999999.000000000000000);

        gridLayout_3->addWidget(mCenterYSpinBox, 1, 1, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        mDistanceToCenterSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mDistanceToCenterSpinBox->setObjectName(QString::fromUtf8("mDistanceToCenterSpinBox"));
        mDistanceToCenterSpinBox->setDecimals(1);
        mDistanceToCenterSpinBox->setMaximum(9999999.000000000000000);

        gridLayout_3->addWidget(mDistanceToCenterSpinBox, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        mHeadingAngleSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mHeadingAngleSpinBox->setObjectName(QString::fromUtf8("mHeadingAngleSpinBox"));
        mHeadingAngleSpinBox->setDecimals(1);
        mHeadingAngleSpinBox->setMaximum(360.000000000000000);

        gridLayout_3->addWidget(mHeadingAngleSpinBox, 5, 1, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 5, 0, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 4, 0, 1, 1);

        mPitchAngleSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mPitchAngleSpinBox->setObjectName(QString::fromUtf8("mPitchAngleSpinBox"));
        mPitchAngleSpinBox->setDecimals(1);
        mPitchAngleSpinBox->setMaximum(360.000000000000000);

        gridLayout_3->addWidget(mPitchAngleSpinBox, 4, 1, 1, 1);

        mCenterXSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mCenterXSpinBox->setObjectName(QString::fromUtf8("mCenterXSpinBox"));
        mCenterXSpinBox->setDecimals(1);
        mCenterXSpinBox->setMinimum(-9999999.000000000000000);
        mCenterXSpinBox->setMaximum(9999999.000000000000000);

        gridLayout_3->addWidget(mCenterXSpinBox, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        mCenterZSpinBox = new QgsDoubleSpinBox(groupBox_4);
        mCenterZSpinBox->setObjectName(QString::fromUtf8("mCenterZSpinBox"));
        mCenterZSpinBox->setDecimals(1);
        mCenterZSpinBox->setMinimum(-9999999.000000000000000);
        mCenterZSpinBox->setMaximum(9999999.000000000000000);

        gridLayout_3->addWidget(mCenterZSpinBox, 2, 1, 1, 1);

        mPoseFromViewButton = new QPushButton(groupBox_4);
        mPoseFromViewButton->setObjectName(QString::fromUtf8("mPoseFromViewButton"));

        gridLayout_3->addWidget(mPoseFromViewButton, 6, 0, 1, 2);


        mainLayout->addWidget(groupBox_4);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mCopySettingsButton);
        QWidget::setTabOrder(mCopySettingsButton, mCenterXSpinBox);
        QWidget::setTabOrder(mCenterXSpinBox, mCenterYSpinBox);
        QWidget::setTabOrder(mCenterYSpinBox, mCenterZSpinBox);
        QWidget::setTabOrder(mCenterZSpinBox, mDistanceToCenterSpinBox);
        QWidget::setTabOrder(mDistanceToCenterSpinBox, mPitchAngleSpinBox);
        QWidget::setTabOrder(mPitchAngleSpinBox, mHeadingAngleSpinBox);
        QWidget::setTabOrder(mHeadingAngleSpinBox, mPoseFromViewButton);

        retranslateUi(QgsLayout3DMapWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayout3DMapWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayout3DMapWidgetBase)
    {
        QgsLayout3DMapWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "3D Map", nullptr));
        mLabel->setText(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "3D Map", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Scene Settings", nullptr));
        mCopySettingsButton->setText(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Copy Settings from a 3D View\342\200\246", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Camera Pose", nullptr));
        label->setText(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Center X", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Center Z", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Center Y", nullptr));
        mHeadingAngleSpinBox->setSuffix(QCoreApplication::translate("QgsLayout3DMapWidgetBase", " \302\260", nullptr));
        label_7->setText(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Heading", nullptr));
        label_6->setText(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Pitch", nullptr));
        mPitchAngleSpinBox->setSuffix(QCoreApplication::translate("QgsLayout3DMapWidgetBase", " \302\260", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Distance", nullptr));
        mPoseFromViewButton->setText(QCoreApplication::translate("QgsLayout3DMapWidgetBase", "Set from a 3D View\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayout3DMapWidgetBase: public Ui_QgsLayout3DMapWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUT3DMAPWIDGETBASE_H
