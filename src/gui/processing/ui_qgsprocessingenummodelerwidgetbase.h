/********************************************************************************
** Form generated from reading UI file 'qgsprocessingenummodelerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGENUMMODELERWIDGETBASE_H
#define UI_QGSPROCESSINGENUMMODELERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingEnumModelerWidgetBase
{
public:
    QGridLayout *gridLayout;
    QToolButton *mButtonRemove;
    QSpacerItem *verticalSpacer;
    QToolButton *mButtonAdd;
    QToolButton *mButtonClear;
    QListView *mItemList;
    QCheckBox *mAllowMultiple;

    void setupUi(QWidget *QgsProcessingEnumModelerWidgetBase)
    {
        if (QgsProcessingEnumModelerWidgetBase->objectName().isEmpty())
            QgsProcessingEnumModelerWidgetBase->setObjectName(QString::fromUtf8("QgsProcessingEnumModelerWidgetBase"));
        QgsProcessingEnumModelerWidgetBase->resize(400, 300);
        QgsProcessingEnumModelerWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsProcessingEnumModelerWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mButtonRemove = new QToolButton(QgsProcessingEnumModelerWidgetBase);
        mButtonRemove->setObjectName(QString::fromUtf8("mButtonRemove"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemove->setIcon(icon);

        gridLayout->addWidget(mButtonRemove, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        mButtonAdd = new QToolButton(QgsProcessingEnumModelerWidgetBase);
        mButtonAdd->setObjectName(QString::fromUtf8("mButtonAdd"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAdd->setIcon(icon1);

        gridLayout->addWidget(mButtonAdd, 0, 1, 1, 1);

        mButtonClear = new QToolButton(QgsProcessingEnumModelerWidgetBase);
        mButtonClear->setObjectName(QString::fromUtf8("mButtonClear"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/console/iconClearConsole.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonClear->setIcon(icon2);

        gridLayout->addWidget(mButtonClear, 2, 1, 1, 1);

        mItemList = new QListView(QgsProcessingEnumModelerWidgetBase);
        mItemList->setObjectName(QString::fromUtf8("mItemList"));
        mItemList->setDragDropMode(QAbstractItemView::InternalMove);
        mItemList->setAlternatingRowColors(true);
        mItemList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(mItemList, 0, 0, 4, 1);

        mAllowMultiple = new QCheckBox(QgsProcessingEnumModelerWidgetBase);
        mAllowMultiple->setObjectName(QString::fromUtf8("mAllowMultiple"));

        gridLayout->addWidget(mAllowMultiple, 4, 0, 1, 2);

        QWidget::setTabOrder(mButtonAdd, mButtonRemove);
        QWidget::setTabOrder(mButtonRemove, mButtonClear);
        QWidget::setTabOrder(mButtonClear, mItemList);
        QWidget::setTabOrder(mItemList, mAllowMultiple);

        retranslateUi(QgsProcessingEnumModelerWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingEnumModelerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingEnumModelerWidgetBase)
    {
#if QT_CONFIG(tooltip)
        mButtonRemove->setToolTip(QCoreApplication::translate("QgsProcessingEnumModelerWidgetBase", "Remove item", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemove->setText(QCoreApplication::translate("QgsProcessingEnumModelerWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonAdd->setToolTip(QCoreApplication::translate("QgsProcessingEnumModelerWidgetBase", "Add item", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAdd->setText(QCoreApplication::translate("QgsProcessingEnumModelerWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonClear->setToolTip(QCoreApplication::translate("QgsProcessingEnumModelerWidgetBase", "Clear all", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonClear->setText(QCoreApplication::translate("QgsProcessingEnumModelerWidgetBase", "\342\200\246", nullptr));
        mAllowMultiple->setText(QCoreApplication::translate("QgsProcessingEnumModelerWidgetBase", "Allow multiple selection", nullptr));
        (void)QgsProcessingEnumModelerWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingEnumModelerWidgetBase: public Ui_QgsProcessingEnumModelerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGENUMMODELERWIDGETBASE_H
