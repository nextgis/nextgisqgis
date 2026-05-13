/********************************************************************************
** Form generated from reading UI file 'qgshistorywidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHISTORYWIDGETBASE_H
#define UI_QGSHISTORYWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsHistoryWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *mSplitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QgsFilterLineEdit *mFilterEdit;
    QTreeView *mTreeView;
    QStackedWidget *mContainerStackedWidget;
    QWidget *mEntryContainerStackedWidgetPage1;

    void setupUi(QgsPanelWidget *QgsHistoryWidgetBase)
    {
        if (QgsHistoryWidgetBase->objectName().isEmpty())
            QgsHistoryWidgetBase->setObjectName(QString::fromUtf8("QgsHistoryWidgetBase"));
        QgsHistoryWidgetBase->resize(387, 220);
        verticalLayout_2 = new QVBoxLayout(QgsHistoryWidgetBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSplitter = new QSplitter(QgsHistoryWidgetBase);
        mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
        mSplitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(mSplitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFilterEdit = new QgsFilterLineEdit(layoutWidget);
        mFilterEdit->setObjectName(QString::fromUtf8("mFilterEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFilterEdit->sizePolicy().hasHeightForWidth());
        mFilterEdit->setSizePolicy(sizePolicy);
        mFilterEdit->setMinimumSize(QSize(0, 0));
        mFilterEdit->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(mFilterEdit);


        verticalLayout->addLayout(horizontalLayout);

        mTreeView = new QTreeView(layoutWidget);
        mTreeView->setObjectName(QString::fromUtf8("mTreeView"));
        mTreeView->header()->setVisible(false);

        verticalLayout->addWidget(mTreeView);

        mSplitter->addWidget(layoutWidget);
        mContainerStackedWidget = new QStackedWidget(mSplitter);
        mContainerStackedWidget->setObjectName(QString::fromUtf8("mContainerStackedWidget"));
        mEntryContainerStackedWidgetPage1 = new QWidget();
        mEntryContainerStackedWidgetPage1->setObjectName(QString::fromUtf8("mEntryContainerStackedWidgetPage1"));
        mContainerStackedWidget->addWidget(mEntryContainerStackedWidgetPage1);
        mSplitter->addWidget(mContainerStackedWidget);

        verticalLayout_2->addWidget(mSplitter);


        retranslateUi(QgsHistoryWidgetBase);

        QMetaObject::connectSlotsByName(QgsHistoryWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsHistoryWidgetBase)
    {
        QgsHistoryWidgetBase->setWindowTitle(QCoreApplication::translate("QgsHistoryWidgetBase", "History", nullptr));
        mFilterEdit->setPlaceholderText(QCoreApplication::translate("QgsHistoryWidgetBase", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsHistoryWidgetBase: public Ui_QgsHistoryWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHISTORYWIDGETBASE_H
