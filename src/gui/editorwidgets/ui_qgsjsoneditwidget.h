/********************************************************************************
** Form generated from reading UI file 'qgsjsoneditwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSJSONEDITWIDGET_H
#define UI_QGSJSONEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qgscodeeditorjson.h"

QT_BEGIN_NAMESPACE

class Ui_QgsJsonEditWidget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *mStackedWidget;
    QWidget *mStackedWidgetPageText;
    QGridLayout *gridLayout_2;
    QgsCodeEditorJson *mCodeEditorJson;
    QWidget *mStackedWidgetPageTree;
    QGridLayout *gridLayout_3;
    QTreeWidget *mTreeWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QToolButton *mTextToolButton;
    QToolButton *mTreeToolButton;
    QWidget *mControlsWidget;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *QgsJsonEditWidget)
    {
        if (QgsJsonEditWidget->objectName().isEmpty())
            QgsJsonEditWidget->setObjectName(QString::fromUtf8("QgsJsonEditWidget"));
        QgsJsonEditWidget->resize(693, 289);
        QgsJsonEditWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsJsonEditWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mStackedWidget = new QStackedWidget(QgsJsonEditWidget);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        mStackedWidgetPageText = new QWidget();
        mStackedWidgetPageText->setObjectName(QString::fromUtf8("mStackedWidgetPageText"));
        gridLayout_2 = new QGridLayout(mStackedWidgetPageText);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mCodeEditorJson = new QgsCodeEditorJson(mStackedWidgetPageText);
        mCodeEditorJson->setObjectName(QString::fromUtf8("mCodeEditorJson"));

        gridLayout_2->addWidget(mCodeEditorJson, 0, 0, 1, 1);

        mStackedWidget->addWidget(mStackedWidgetPageText);
        mStackedWidgetPageTree = new QWidget();
        mStackedWidgetPageTree->setObjectName(QString::fromUtf8("mStackedWidgetPageTree"));
        gridLayout_3 = new QGridLayout(mStackedWidgetPageTree);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mTreeWidget = new QTreeWidget(mStackedWidgetPageTree);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Key"));
        mTreeWidget->setHeaderItem(__qtreewidgetitem);
        mTreeWidget->setObjectName(QString::fromUtf8("mTreeWidget"));
        mTreeWidget->header()->setVisible(false);

        gridLayout_3->addWidget(mTreeWidget, 0, 0, 1, 1);

        mStackedWidget->addWidget(mStackedWidgetPageTree);

        gridLayout->addWidget(mStackedWidget, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        mTextToolButton = new QToolButton(QgsJsonEditWidget);
        mTextToolButton->setObjectName(QString::fromUtf8("mTextToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconFieldText.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTextToolButton->setIcon(icon);
        mTextToolButton->setCheckable(true);
        mTextToolButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(mTextToolButton);

        mTreeToolButton = new QToolButton(QgsJsonEditWidget);
        mTreeToolButton->setObjectName(QString::fromUtf8("mTreeToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconTreeView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTreeToolButton->setIcon(icon1);
        mTreeToolButton->setCheckable(true);
        mTreeToolButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(mTreeToolButton);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        mControlsWidget = new QWidget(QgsJsonEditWidget);
        mControlsWidget->setObjectName(QString::fromUtf8("mControlsWidget"));
        horizontalLayout = new QHBoxLayout(mControlsWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(mControlsWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(mTreeWidget, mTextToolButton);
        QWidget::setTabOrder(mTextToolButton, mTreeToolButton);

        retranslateUi(QgsJsonEditWidget);

        mStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsJsonEditWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsJsonEditWidget)
    {
        QTreeWidgetItem *___qtreewidgetitem = mTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsJsonEditWidget", "Value", nullptr));
#if QT_CONFIG(tooltip)
        mTextToolButton->setToolTip(QCoreApplication::translate("QgsJsonEditWidget", "Show text", nullptr));
#endif // QT_CONFIG(tooltip)
        mTextToolButton->setText(QCoreApplication::translate("QgsJsonEditWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        mTreeToolButton->setToolTip(QCoreApplication::translate("QgsJsonEditWidget", "Show tree", nullptr));
#endif // QT_CONFIG(tooltip)
        mTreeToolButton->setText(QCoreApplication::translate("QgsJsonEditWidget", "...", nullptr));
        (void)QgsJsonEditWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsJsonEditWidget: public Ui_QgsJsonEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSJSONEDITWIDGET_H
