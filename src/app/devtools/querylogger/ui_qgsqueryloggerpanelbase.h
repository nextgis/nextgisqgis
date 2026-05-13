/********************************************************************************
** Form generated from reading UI file 'qgsqueryloggerpanelbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSQUERYLOGGERPANELBASE_H
#define UI_QGSQUERYLOGGERPANELBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilterlineedit.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDatabaseQueryLoggerPanelBase
{
public:
    QAction *mActionClear;
    QAction *mActionRecord;
    QAction *mActionSaveLog;
    QVBoxLayout *verticalLayout;
    QToolBar *mToolbar;
    QgsFilterLineEdit *mFilterLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsDatabaseQueryLoggerPanelBase)
    {
        if (QgsDatabaseQueryLoggerPanelBase->objectName().isEmpty())
            QgsDatabaseQueryLoggerPanelBase->setObjectName(QString::fromUtf8("QgsDatabaseQueryLoggerPanelBase"));
        QgsDatabaseQueryLoggerPanelBase->resize(700, 629);
        mActionClear = new QAction(QgsDatabaseQueryLoggerPanelBase);
        mActionClear->setObjectName(QString::fromUtf8("mActionClear"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionClear->setIcon(icon);
        mActionRecord = new QAction(QgsDatabaseQueryLoggerPanelBase);
        mActionRecord->setObjectName(QString::fromUtf8("mActionRecord"));
        mActionRecord->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionRecord.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRecord->setIcon(icon1);
        mActionSaveLog = new QAction(QgsDatabaseQueryLoggerPanelBase);
        mActionSaveLog->setObjectName(QString::fromUtf8("mActionSaveLog"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveLog->setIcon(icon2);
        verticalLayout = new QVBoxLayout(QgsDatabaseQueryLoggerPanelBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mToolbar = new QToolBar(QgsDatabaseQueryLoggerPanelBase);
        mToolbar->setObjectName(QString::fromUtf8("mToolbar"));
        mToolbar->setIconSize(QSize(24, 24));
        mToolbar->setFloatable(false);

        verticalLayout->addWidget(mToolbar);

        mFilterLineEdit = new QgsFilterLineEdit(QgsDatabaseQueryLoggerPanelBase);
        mFilterLineEdit->setObjectName(QString::fromUtf8("mFilterLineEdit"));

        verticalLayout->addWidget(mFilterLineEdit);

        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        mToolbar->addAction(mActionRecord);
        mToolbar->addAction(mActionClear);
        mToolbar->addAction(mActionSaveLog);
        mToolbar->addSeparator();

        retranslateUi(QgsDatabaseQueryLoggerPanelBase);

        QMetaObject::connectSlotsByName(QgsDatabaseQueryLoggerPanelBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsDatabaseQueryLoggerPanelBase)
    {
        mActionClear->setText(QCoreApplication::translate("QgsDatabaseQueryLoggerPanelBase", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        mActionClear->setToolTip(QCoreApplication::translate("QgsDatabaseQueryLoggerPanelBase", "Clear Log", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRecord->setText(QCoreApplication::translate("QgsDatabaseQueryLoggerPanelBase", "Record Log", nullptr));
        mActionSaveLog->setText(QCoreApplication::translate("QgsDatabaseQueryLoggerPanelBase", "Save Log\342\200\246", nullptr));
        (void)QgsDatabaseQueryLoggerPanelBase;
    } // retranslateUi

};

namespace Ui {
    class QgsDatabaseQueryLoggerPanelBase: public Ui_QgsDatabaseQueryLoggerPanelBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSQUERYLOGGERPANELBASE_H
