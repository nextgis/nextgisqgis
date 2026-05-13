/********************************************************************************
** Form generated from reading UI file 'qgsstyleitemslistwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLEITEMSLISTWIDGETBASE_H
#define UI_QGSSTYLEITEMSLISTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsStyleItemsListWidgetBase
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *groupsCombo;
    QToolButton *openStyleManagerButton;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *mButtonIconView;
    QToolButton *mButtonListView;
    QLabel *lblSymbolName;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSaveSymbol;
    QPushButton *btnAdvanced;
    QStackedWidget *mSymbolViewStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QListView *viewSymbols;
    QWidget *page2;
    QVBoxLayout *verticalLayout_3;
    QTreeView *mSymbolTreeView;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *QgsStyleItemsListWidgetBase)
    {
        if (QgsStyleItemsListWidgetBase->objectName().isEmpty())
            QgsStyleItemsListWidgetBase->setObjectName(QString::fromUtf8("QgsStyleItemsListWidgetBase"));
        QgsStyleItemsListWidgetBase->resize(563, 633);
        QgsStyleItemsListWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_4 = new QGridLayout(QgsStyleItemsListWidgetBase);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupsCombo = new QComboBox(QgsStyleItemsListWidgetBase);
        groupsCombo->setObjectName(QString::fromUtf8("groupsCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupsCombo->sizePolicy().hasHeightForWidth());
        groupsCombo->setSizePolicy(sizePolicy);
        groupsCombo->setMinimumSize(QSize(50, 0));
        groupsCombo->setEditable(true);

        horizontalLayout_3->addWidget(groupsCombo);

        openStyleManagerButton = new QToolButton(QgsStyleItemsListWidgetBase);
        openStyleManagerButton->setObjectName(QString::fromUtf8("openStyleManagerButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionStyleManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        openStyleManagerButton->setIcon(icon);
        openStyleManagerButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(openStyleManagerButton);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 2, -1, -1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 0, -1);
        mButtonIconView = new QToolButton(QgsStyleItemsListWidgetBase);
        buttonGroup = new QButtonGroup(QgsStyleItemsListWidgetBase);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(mButtonIconView);
        mButtonIconView->setObjectName(QString::fromUtf8("mButtonIconView"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionIconView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonIconView->setIcon(icon1);
        mButtonIconView->setCheckable(true);
        mButtonIconView->setAutoRaise(true);

        horizontalLayout_7->addWidget(mButtonIconView);

        mButtonListView = new QToolButton(QgsStyleItemsListWidgetBase);
        buttonGroup->addButton(mButtonListView);
        mButtonListView->setObjectName(QString::fromUtf8("mButtonListView"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonListView->setIcon(icon2);
        mButtonListView->setCheckable(true);
        mButtonListView->setAutoRaise(true);

        horizontalLayout_7->addWidget(mButtonListView);


        horizontalLayout_4->addLayout(horizontalLayout_7);

        lblSymbolName = new QLabel(QgsStyleItemsListWidgetBase);
        lblSymbolName->setObjectName(QString::fromUtf8("lblSymbolName"));

        horizontalLayout_4->addWidget(lblSymbolName);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnSaveSymbol = new QPushButton(QgsStyleItemsListWidgetBase);
        btnSaveSymbol->setObjectName(QString::fromUtf8("btnSaveSymbol"));

        horizontalLayout_4->addWidget(btnSaveSymbol);

        btnAdvanced = new QPushButton(QgsStyleItemsListWidgetBase);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));

        horizontalLayout_4->addWidget(btnAdvanced);


        gridLayout_4->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        mSymbolViewStackedWidget = new QStackedWidget(QgsStyleItemsListWidgetBase);
        mSymbolViewStackedWidget->setObjectName(QString::fromUtf8("mSymbolViewStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        viewSymbols = new QListView(page);
        viewSymbols->setObjectName(QString::fromUtf8("viewSymbols"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(viewSymbols->sizePolicy().hasHeightForWidth());
        viewSymbols->setSizePolicy(sizePolicy1);
        viewSymbols->setIconSize(QSize(77, 70));
        viewSymbols->setTextElideMode(Qt::ElideNone);
        viewSymbols->setFlow(QListView::LeftToRight);
        viewSymbols->setResizeMode(QListView::Adjust);
        viewSymbols->setSpacing(5);
        viewSymbols->setViewMode(QListView::IconMode);
        viewSymbols->setUniformItemSizes(false);
        viewSymbols->setWordWrap(true);

        verticalLayout_2->addWidget(viewSymbols);

        mSymbolViewStackedWidget->addWidget(page);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        verticalLayout_3 = new QVBoxLayout(page2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mSymbolTreeView = new QTreeView(page2);
        mSymbolTreeView->setObjectName(QString::fromUtf8("mSymbolTreeView"));

        verticalLayout_3->addWidget(mSymbolTreeView);

        mSymbolViewStackedWidget->addWidget(page2);

        gridLayout_4->addWidget(mSymbolViewStackedWidget, 1, 0, 1, 1);

        QWidget::setTabOrder(groupsCombo, openStyleManagerButton);
        QWidget::setTabOrder(openStyleManagerButton, btnSaveSymbol);
        QWidget::setTabOrder(btnSaveSymbol, btnAdvanced);

        retranslateUi(QgsStyleItemsListWidgetBase);

        mSymbolViewStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsStyleItemsListWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsStyleItemsListWidgetBase)
    {
#if QT_CONFIG(tooltip)
        groupsCombo->setToolTip(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "Filter Symbols", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        openStyleManagerButton->setToolTip(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "Style Manager", nullptr));
#endif // QT_CONFIG(tooltip)
        openStyleManagerButton->setText(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "Open Library\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonIconView->setToolTip(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "Icon View", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonIconView->setText(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "PushButton", nullptr));
#if QT_CONFIG(tooltip)
        mButtonListView->setToolTip(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "List View", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonListView->setText(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "PushButton", nullptr));
        lblSymbolName->setText(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "Symbol Name", nullptr));
#if QT_CONFIG(tooltip)
        btnSaveSymbol->setToolTip(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "Save symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSaveSymbol->setText(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "Save Symbol", nullptr));
        btnAdvanced->setText(QCoreApplication::translate("QgsStyleItemsListWidgetBase", "Advanced", nullptr));
        (void)QgsStyleItemsListWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsStyleItemsListWidgetBase: public Ui_QgsStyleItemsListWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEITEMSLISTWIDGETBASE_H
