/********************************************************************************
** Form generated from reading UI file 'qgssensorsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSENSORSETTINGSWIDGETBASE_H
#define UI_QGSSENSORSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSensorSettingsWidgetBase
{
public:
    QVBoxLayout *mMainLayout;
    QLabel *mNameLabel;
    QLineEdit *mNameLineEdit;
    QLabel *mTypeLabel;
    QComboBox *mTypeComboBox;
    QGroupBox *mTypeGroupBox;
    QVBoxLayout *mTypeLayout;

    void setupUi(QgsPanelWidget *QgsSensorSettingsWidgetBase)
    {
        if (QgsSensorSettingsWidgetBase->objectName().isEmpty())
            QgsSensorSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsSensorSettingsWidgetBase"));
        QgsSensorSettingsWidgetBase->resize(291, 376);
        mMainLayout = new QVBoxLayout(QgsSensorSettingsWidgetBase);
        mMainLayout->setSpacing(3);
        mMainLayout->setObjectName(QString::fromUtf8("mMainLayout"));
        mMainLayout->setContentsMargins(0, 0, 0, 0);
        mNameLabel = new QLabel(QgsSensorSettingsWidgetBase);
        mNameLabel->setObjectName(QString::fromUtf8("mNameLabel"));
        mNameLabel->setWordWrap(true);

        mMainLayout->addWidget(mNameLabel);

        mNameLineEdit = new QLineEdit(QgsSensorSettingsWidgetBase);
        mNameLineEdit->setObjectName(QString::fromUtf8("mNameLineEdit"));

        mMainLayout->addWidget(mNameLineEdit);

        mTypeLabel = new QLabel(QgsSensorSettingsWidgetBase);
        mTypeLabel->setObjectName(QString::fromUtf8("mTypeLabel"));
        mTypeLabel->setWordWrap(true);

        mMainLayout->addWidget(mTypeLabel);

        mTypeComboBox = new QComboBox(QgsSensorSettingsWidgetBase);
        mTypeComboBox->setObjectName(QString::fromUtf8("mTypeComboBox"));

        mMainLayout->addWidget(mTypeComboBox);

        mTypeGroupBox = new QGroupBox(QgsSensorSettingsWidgetBase);
        mTypeGroupBox->setObjectName(QString::fromUtf8("mTypeGroupBox"));
        mTypeLayout = new QVBoxLayout(mTypeGroupBox);
        mTypeLayout->setObjectName(QString::fromUtf8("mTypeLayout"));

        mMainLayout->addWidget(mTypeGroupBox);


        retranslateUi(QgsSensorSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsSensorSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsSensorSettingsWidgetBase)
    {
        mNameLabel->setText(QCoreApplication::translate("QgsSensorSettingsWidgetBase", "Sensor name", nullptr));
        mTypeLabel->setText(QCoreApplication::translate("QgsSensorSettingsWidgetBase", "Sensor type", nullptr));
        (void)QgsSensorSettingsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsSensorSettingsWidgetBase: public Ui_QgsSensorSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSENSORSETTINGSWIDGETBASE_H
