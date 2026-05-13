/********************************************************************************
** Form generated from reading UI file 'qgsprofilerpanelbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROFILERPANELBASE_H
#define UI_QGSPROFILERPANELBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProfilerPanelBase
{
public:
    QAction *mActionClear;
    QAction *mActionRecord;
    QAction *mActionShowSuccessful;
    QAction *mActionShowTimeouts;
    QAction *mActionSaveLog;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mCategoryComboBox;
    QTreeView *mTreeView;

    void setupUi(QgsPanelWidget *QgsProfilerPanelBase)
    {
        if (QgsProfilerPanelBase->objectName().isEmpty())
            QgsProfilerPanelBase->setObjectName(QString::fromUtf8("QgsProfilerPanelBase"));
        QgsProfilerPanelBase->resize(700, 629);
        mActionClear = new QAction(QgsProfilerPanelBase);
        mActionClear->setObjectName(QString::fromUtf8("mActionClear"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionClear->setIcon(icon);
        mActionRecord = new QAction(QgsProfilerPanelBase);
        mActionRecord->setObjectName(QString::fromUtf8("mActionRecord"));
        mActionRecord->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionPlay.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRecord->setIcon(icon1);
        mActionShowSuccessful = new QAction(QgsProfilerPanelBase);
        mActionShowSuccessful->setObjectName(QString::fromUtf8("mActionShowSuccessful"));
        mActionShowSuccessful->setCheckable(true);
        mActionShowTimeouts = new QAction(QgsProfilerPanelBase);
        mActionShowTimeouts->setObjectName(QString::fromUtf8("mActionShowTimeouts"));
        mActionShowTimeouts->setCheckable(true);
        mActionSaveLog = new QAction(QgsProfilerPanelBase);
        mActionSaveLog->setObjectName(QString::fromUtf8("mActionSaveLog"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveLog->setIcon(icon2);
        verticalLayout = new QVBoxLayout(QgsProfilerPanelBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(QgsProfilerPanelBase);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mCategoryComboBox = new QComboBox(QgsProfilerPanelBase);
        mCategoryComboBox->setObjectName(QString::fromUtf8("mCategoryComboBox"));

        horizontalLayout->addWidget(mCategoryComboBox);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        mTreeView = new QTreeView(QgsProfilerPanelBase);
        mTreeView->setObjectName(QString::fromUtf8("mTreeView"));

        verticalLayout->addWidget(mTreeView);


        retranslateUi(QgsProfilerPanelBase);

        QMetaObject::connectSlotsByName(QgsProfilerPanelBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsProfilerPanelBase)
    {
        mActionClear->setText(QCoreApplication::translate("QgsProfilerPanelBase", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        mActionClear->setToolTip(QCoreApplication::translate("QgsProfilerPanelBase", "Clear Log", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRecord->setText(QCoreApplication::translate("QgsProfilerPanelBase", "Record Log", nullptr));
        mActionShowSuccessful->setText(QCoreApplication::translate("QgsProfilerPanelBase", "Show Successful Requests", nullptr));
        mActionShowTimeouts->setText(QCoreApplication::translate("QgsProfilerPanelBase", "Show Timeouts", nullptr));
        mActionSaveLog->setText(QCoreApplication::translate("QgsProfilerPanelBase", "Save Log\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("QgsProfilerPanelBase", "Category", nullptr));
        (void)QgsProfilerPanelBase;
    } // retranslateUi

};

namespace Ui {
    class QgsProfilerPanelBase: public Ui_QgsProfilerPanelBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROFILERPANELBASE_H
