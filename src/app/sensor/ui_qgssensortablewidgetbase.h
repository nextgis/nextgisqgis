/********************************************************************************
** Form generated from reading UI file 'qgssensortablewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSENSORTABLEWIDGETBASE_H
#define UI_QGSSENSORTABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSensorTableWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *mSensorTable;
    QVBoxLayout *actionsLayout;
    QToolButton *mActionConnection;
    QToolButton *mActionAddSensor;
    QToolButton *mActionRemoveSensor;
    QToolButton *mActionEditSensor;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsSensorTableWidgetBase)
    {
        if (QgsSensorTableWidgetBase->objectName().isEmpty())
            QgsSensorTableWidgetBase->setObjectName(QString::fromUtf8("QgsSensorTableWidgetBase"));
        QgsSensorTableWidgetBase->resize(291, 376);
        horizontalLayout = new QHBoxLayout(QgsSensorTableWidgetBase);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mSensorTable = new QTableView(QgsSensorTableWidgetBase);
        mSensorTable->setObjectName(QString::fromUtf8("mSensorTable"));
        mSensorTable->setAlternatingRowColors(true);
        mSensorTable->horizontalHeader()->setVisible(true);
        mSensorTable->horizontalHeader()->setMinimumSectionSize(400);
        mSensorTable->horizontalHeader()->setDefaultSectionSize(400);
        mSensorTable->horizontalHeader()->setStretchLastSection(true);
        mSensorTable->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(mSensorTable);

        actionsLayout = new QVBoxLayout();
        actionsLayout->setObjectName(QString::fromUtf8("actionsLayout"));
        mActionConnection = new QToolButton(QgsSensorTableWidgetBase);
        mActionConnection->setObjectName(QString::fromUtf8("mActionConnection"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionStart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionConnection->setIcon(icon);

        actionsLayout->addWidget(mActionConnection);

        mActionAddSensor = new QToolButton(QgsSensorTableWidgetBase);
        mActionAddSensor->setObjectName(QString::fromUtf8("mActionAddSensor"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddSensor->setIcon(icon1);

        actionsLayout->addWidget(mActionAddSensor);

        mActionRemoveSensor = new QToolButton(QgsSensorTableWidgetBase);
        mActionRemoveSensor->setObjectName(QString::fromUtf8("mActionRemoveSensor"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRemoveSensor->setIcon(icon2);

        actionsLayout->addWidget(mActionRemoveSensor);

        mActionEditSensor = new QToolButton(QgsSensorTableWidgetBase);
        mActionEditSensor->setObjectName(QString::fromUtf8("mActionEditSensor"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEditSensor->setIcon(icon3);

        actionsLayout->addWidget(mActionEditSensor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        actionsLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(actionsLayout);


        retranslateUi(QgsSensorTableWidgetBase);

        QMetaObject::connectSlotsByName(QgsSensorTableWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsSensorTableWidgetBase)
    {
#if QT_CONFIG(tooltip)
        mActionConnection->setToolTip(QCoreApplication::translate("QgsSensorTableWidgetBase", "Toggle sensor connection status", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionConnection->setText(QString());
#if QT_CONFIG(tooltip)
        mActionAddSensor->setToolTip(QCoreApplication::translate("QgsSensorTableWidgetBase", "Create new sensor", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionAddSensor->setText(QString());
#if QT_CONFIG(tooltip)
        mActionRemoveSensor->setToolTip(QCoreApplication::translate("QgsSensorTableWidgetBase", "Create new sensor", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRemoveSensor->setText(QString());
#if QT_CONFIG(tooltip)
        mActionEditSensor->setToolTip(QCoreApplication::translate("QgsSensorTableWidgetBase", "Edit sensor", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionEditSensor->setText(QString());
        (void)QgsSensorTableWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsSensorTableWidgetBase: public Ui_QgsSensorTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSENSORTABLEWIDGETBASE_H
