/********************************************************************************
** Form generated from reading UI file 'qgselevationprofileexportsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSELEVATIONPROFILEEXPORTSETTINGSWIDGETBASE_H
#define UI_QGSELEVATIONPROFILEEXPORTSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsElevationProfileExportSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QgsDoubleSpinBox *mSpinMinDistance;
    QLabel *label_2;
    QgsDoubleSpinBox *mSpinMaxDistance;
    QLabel *label_3;
    QgsDoubleSpinBox *mSpinMinElevation;
    QLabel *label_4;
    QgsDoubleSpinBox *mSpinMaxElevation;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QgsDoubleSpinBox *mSpinLabelIntervalX;
    QLabel *label_6;
    QgsDoubleSpinBox *mSpinMajorIntervalX;
    QLabel *label_7;
    QgsDoubleSpinBox *mSpinMinorIntervalX;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QgsDoubleSpinBox *mSpinLabelIntervalY;
    QLabel *label_9;
    QgsDoubleSpinBox *mSpinMajorIntervalY;
    QLabel *label_10;
    QgsDoubleSpinBox *mSpinMinorIntervalY;

    void setupUi(QWidget *QgsElevationProfileExportSettingsWidgetBase)
    {
        if (QgsElevationProfileExportSettingsWidgetBase->objectName().isEmpty())
            QgsElevationProfileExportSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsElevationProfileExportSettingsWidgetBase"));
        QgsElevationProfileExportSettingsWidgetBase->resize(493, 472);
        verticalLayout = new QVBoxLayout(QgsElevationProfileExportSettingsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsElevationProfileExportSettingsWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mSpinMinDistance = new QgsDoubleSpinBox(groupBox);
        mSpinMinDistance->setObjectName(QString::fromUtf8("mSpinMinDistance"));
        mSpinMinDistance->setDecimals(4);
        mSpinMinDistance->setMaximum(999999999.000000000000000);

        gridLayout->addWidget(mSpinMinDistance, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mSpinMaxDistance = new QgsDoubleSpinBox(groupBox);
        mSpinMaxDistance->setObjectName(QString::fromUtf8("mSpinMaxDistance"));
        mSpinMaxDistance->setDecimals(4);
        mSpinMaxDistance->setMaximum(999999999.000000000000000);

        gridLayout->addWidget(mSpinMaxDistance, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        mSpinMinElevation = new QgsDoubleSpinBox(groupBox);
        mSpinMinElevation->setObjectName(QString::fromUtf8("mSpinMinElevation"));
        mSpinMinElevation->setDecimals(4);
        mSpinMinElevation->setMinimum(-999999999.000000000000000);
        mSpinMinElevation->setMaximum(999999999.000000000000000);

        gridLayout->addWidget(mSpinMinElevation, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        mSpinMaxElevation = new QgsDoubleSpinBox(groupBox);
        mSpinMaxElevation->setObjectName(QString::fromUtf8("mSpinMaxElevation"));
        mSpinMaxElevation->setDecimals(4);
        mSpinMaxElevation->setMinimum(-999999999.000000000000000);
        mSpinMaxElevation->setMaximum(999999999.000000000000000);

        gridLayout->addWidget(mSpinMaxElevation, 3, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QgsElevationProfileExportSettingsWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        mSpinLabelIntervalX = new QgsDoubleSpinBox(groupBox_2);
        mSpinLabelIntervalX->setObjectName(QString::fromUtf8("mSpinLabelIntervalX"));
        mSpinLabelIntervalX->setDecimals(4);
        mSpinLabelIntervalX->setMaximum(999999999.000000000000000);

        gridLayout_2->addWidget(mSpinLabelIntervalX, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        mSpinMajorIntervalX = new QgsDoubleSpinBox(groupBox_2);
        mSpinMajorIntervalX->setObjectName(QString::fromUtf8("mSpinMajorIntervalX"));
        mSpinMajorIntervalX->setDecimals(4);
        mSpinMajorIntervalX->setMaximum(999999999.000000000000000);

        gridLayout_2->addWidget(mSpinMajorIntervalX, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        mSpinMinorIntervalX = new QgsDoubleSpinBox(groupBox_2);
        mSpinMinorIntervalX->setObjectName(QString::fromUtf8("mSpinMinorIntervalX"));
        mSpinMinorIntervalX->setDecimals(4);
        mSpinMinorIntervalX->setMaximum(999999999.000000000000000);

        gridLayout_2->addWidget(mSpinMinorIntervalX, 2, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(QgsElevationProfileExportSettingsWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        mSpinLabelIntervalY = new QgsDoubleSpinBox(groupBox_3);
        mSpinLabelIntervalY->setObjectName(QString::fromUtf8("mSpinLabelIntervalY"));
        mSpinLabelIntervalY->setDecimals(4);
        mSpinLabelIntervalY->setMaximum(999999999.000000000000000);

        gridLayout_3->addWidget(mSpinLabelIntervalY, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        mSpinMajorIntervalY = new QgsDoubleSpinBox(groupBox_3);
        mSpinMajorIntervalY->setObjectName(QString::fromUtf8("mSpinMajorIntervalY"));
        mSpinMajorIntervalY->setDecimals(4);
        mSpinMajorIntervalY->setMaximum(999999999.000000000000000);

        gridLayout_3->addWidget(mSpinMajorIntervalY, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        mSpinMinorIntervalY = new QgsDoubleSpinBox(groupBox_3);
        mSpinMinorIntervalY->setObjectName(QString::fromUtf8("mSpinMinorIntervalY"));
        mSpinMinorIntervalY->setDecimals(4);
        mSpinMinorIntervalY->setMaximum(999999999.000000000000000);

        gridLayout_3->addWidget(mSpinMinorIntervalY, 2, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox_3);


        retranslateUi(QgsElevationProfileExportSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsElevationProfileExportSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsElevationProfileExportSettingsWidgetBase)
    {
        QgsElevationProfileExportSettingsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Elevation Profile Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Chart Ranges", nullptr));
        label->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Minimum distance", nullptr));
        label_2->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Maximum distance", nullptr));
        label_3->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Minimum elevation", nullptr));
        label_4->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Maximum elevation", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Distance Axis Settings", nullptr));
        label_5->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Label interval", nullptr));
        label_6->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Major grid line interval", nullptr));
        label_7->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Minor grid line interval", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Elevation Axis Settings", nullptr));
        label_8->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Label interval", nullptr));
        label_9->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Major grid line interval", nullptr));
        label_10->setText(QCoreApplication::translate("QgsElevationProfileExportSettingsWidgetBase", "Minor grid line interval", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsElevationProfileExportSettingsWidgetBase: public Ui_QgsElevationProfileExportSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSELEVATIONPROFILEEXPORTSETTINGSWIDGETBASE_H
