/********************************************************************************
** Form generated from reading UI file 'qgslabelobstaclesettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELOBSTACLESETTINGSWIDGETBASE_H
#define UI_QGSLABELOBSTACLESETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelObstacleSettingsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_40;
    QSlider *mObstacleFactorSlider;
    QLabel *label_41;
    QgsPropertyOverrideButton *mObstacleFactorDDBtn;
    QComboBox *mObstacleTypeComboBox;
    QLabel *mObstacleTypeLabel;

    void setupUi(QgsPanelWidget *QgsLabelObstacleSettingsWidgetBase)
    {
        if (QgsLabelObstacleSettingsWidgetBase->objectName().isEmpty())
            QgsLabelObstacleSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsLabelObstacleSettingsWidgetBase"));
        QgsLabelObstacleSettingsWidgetBase->resize(249, 225);
        QgsLabelObstacleSettingsWidgetBase->setWindowTitle(QString::fromUtf8("Obstacle Settings"));
        gridLayout = new QGridLayout(QgsLabelObstacleSettingsWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        groupBox = new QGroupBox(QgsLabelObstacleSettingsWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_40 = new QLabel(groupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout->addWidget(label_40);

        mObstacleFactorSlider = new QSlider(groupBox);
        mObstacleFactorSlider->setObjectName(QString::fromUtf8("mObstacleFactorSlider"));
        mObstacleFactorSlider->setMinimum(0);
        mObstacleFactorSlider->setMaximum(10);
        mObstacleFactorSlider->setValue(5);
        mObstacleFactorSlider->setOrientation(Qt::Horizontal);
        mObstacleFactorSlider->setTickPosition(QSlider::TicksBelow);
        mObstacleFactorSlider->setTickInterval(1);

        horizontalLayout->addWidget(mObstacleFactorSlider);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        horizontalLayout->addWidget(label_41);

        mObstacleFactorDDBtn = new QgsPropertyOverrideButton(groupBox);
        mObstacleFactorDDBtn->setObjectName(QString::fromUtf8("mObstacleFactorDDBtn"));

        horizontalLayout->addWidget(mObstacleFactorDDBtn);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        mObstacleTypeComboBox = new QComboBox(QgsLabelObstacleSettingsWidgetBase);
        mObstacleTypeComboBox->setObjectName(QString::fromUtf8("mObstacleTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mObstacleTypeComboBox->sizePolicy().hasHeightForWidth());
        mObstacleTypeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mObstacleTypeComboBox, 2, 1, 1, 1);

        mObstacleTypeLabel = new QLabel(QgsLabelObstacleSettingsWidgetBase);
        mObstacleTypeLabel->setObjectName(QString::fromUtf8("mObstacleTypeLabel"));

        gridLayout->addWidget(mObstacleTypeLabel, 2, 0, 1, 1);

        QWidget::setTabOrder(mObstacleFactorSlider, mObstacleFactorDDBtn);
        QWidget::setTabOrder(mObstacleFactorDDBtn, mObstacleTypeComboBox);

        retranslateUi(QgsLabelObstacleSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelObstacleSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelObstacleSettingsWidgetBase)
    {
        groupBox->setTitle(QCoreApplication::translate("QgsLabelObstacleSettingsWidgetBase", "Obstacle Weight", nullptr));
        label->setText(QCoreApplication::translate("QgsLabelObstacleSettingsWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Setting a higher weight for obstacles means that labels are less likely to cover features in this layer.</span></p><p>Only labels with a higher priority than this obstacle weight will be placed over these obstacles.</p></body></html>", nullptr));
        label_40->setText(QCoreApplication::translate("QgsLabelObstacleSettingsWidgetBase", "Low", nullptr));
#if QT_CONFIG(tooltip)
        mObstacleFactorSlider->setToolTip(QCoreApplication::translate("QgsLabelObstacleSettingsWidgetBase", "Controls how likely labels are to cover features in this layer", nullptr));
#endif // QT_CONFIG(tooltip)
        label_41->setText(QCoreApplication::translate("QgsLabelObstacleSettingsWidgetBase", "High", nullptr));
        mObstacleFactorDDBtn->setText(QCoreApplication::translate("QgsLabelObstacleSettingsWidgetBase", "\342\200\246", nullptr));
        mObstacleTypeLabel->setText(QCoreApplication::translate("QgsLabelObstacleSettingsWidgetBase", "Minimize placing labels", nullptr));
        (void)QgsLabelObstacleSettingsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLabelObstacleSettingsWidgetBase: public Ui_QgsLabelObstacleSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELOBSTACLESETTINGSWIDGETBASE_H
