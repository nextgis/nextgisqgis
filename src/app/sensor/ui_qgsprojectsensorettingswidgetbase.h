/********************************************************************************
** Form generated from reading UI file 'qgsprojectsensorettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTSENSORETTINGSWIDGETBASE_H
#define UI_QGSPROJECTSENSORETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmessagebar.h"
#include "qgspanelwidgetstack.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectSensorSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsMessageBar *mMessageBar;
    QGroupBox *groupBox;
    QVBoxLayout *mainLayout;
    QgsPanelWidgetStack *mPanelStack;
    QLabel *mSensorIntroductionLabel;

    void setupUi(QWidget *QgsProjectSensorSettingsWidgetBase)
    {
        if (QgsProjectSensorSettingsWidgetBase->objectName().isEmpty())
            QgsProjectSensorSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsProjectSensorSettingsWidgetBase"));
        QgsProjectSensorSettingsWidgetBase->resize(504, 486);
        verticalLayout = new QVBoxLayout(QgsProjectSensorSettingsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mMessageBar = new QgsMessageBar(QgsProjectSensorSettingsWidgetBase);
        mMessageBar->setObjectName(QString::fromUtf8("mMessageBar"));

        verticalLayout->addWidget(mMessageBar);

        groupBox = new QGroupBox(QgsProjectSensorSettingsWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        mainLayout = new QVBoxLayout(groupBox);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mPanelStack = new QgsPanelWidgetStack(groupBox);
        mPanelStack->setObjectName(QString::fromUtf8("mPanelStack"));

        mainLayout->addWidget(mPanelStack);

        mSensorIntroductionLabel = new QLabel(groupBox);
        mSensorIntroductionLabel->setObjectName(QString::fromUtf8("mSensorIntroductionLabel"));
        mSensorIntroductionLabel->setWordWrap(true);

        mainLayout->addWidget(mSensorIntroductionLabel);


        verticalLayout->addWidget(groupBox);


        retranslateUi(QgsProjectSensorSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsProjectSensorSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProjectSensorSettingsWidgetBase)
    {
        QgsProjectSensorSettingsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsProjectSensorSettingsWidgetBase", "Sensor Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsProjectSensorSettingsWidgetBase", "Sensors", nullptr));
        mSensorIntroductionLabel->setText(QCoreApplication::translate("QgsProjectSensorSettingsWidgetBase", "When connected, a sensor will passively capture data in the background. The latest captured data can be accessed within expressions using the <i>sensor_data('sensor name')</i> function.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectSensorSettingsWidgetBase: public Ui_QgsProjectSensorSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTSENSORETTINGSWIDGETBASE_H
