/********************************************************************************
** Form generated from reading UI file 'qgsrulebasedlabelingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRULEBASEDLABELINGWIDGET_H
#define UI_QGSRULEBASEDLABELINGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRuleBasedLabelingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *viewRules;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddRule;
    QPushButton *btnEditRule;
    QPushButton *btnRemoveRule;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QgsRuleBasedLabelingWidget)
    {
        if (QgsRuleBasedLabelingWidget->objectName().isEmpty())
            QgsRuleBasedLabelingWidget->setObjectName(QString::fromUtf8("QgsRuleBasedLabelingWidget"));
        QgsRuleBasedLabelingWidget->resize(457, 372);
        verticalLayout = new QVBoxLayout(QgsRuleBasedLabelingWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        viewRules = new QTreeView(QgsRuleBasedLabelingWidget);
        viewRules->setObjectName(QString::fromUtf8("viewRules"));
        viewRules->setContextMenuPolicy(Qt::ActionsContextMenu);
        viewRules->setAcceptDrops(true);
        viewRules->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        viewRules->setDragEnabled(true);
        viewRules->setDragDropMode(QAbstractItemView::InternalMove);
        viewRules->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewRules->setAllColumnsShowFocus(true);
        viewRules->header()->setMinimumSectionSize(100);

        verticalLayout->addWidget(viewRules);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAddRule = new QPushButton(QgsRuleBasedLabelingWidget);
        btnAddRule->setObjectName(QString::fromUtf8("btnAddRule"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);

        horizontalLayout->addWidget(btnAddRule);

        btnEditRule = new QPushButton(QgsRuleBasedLabelingWidget);
        btnEditRule->setObjectName(QString::fromUtf8("btnEditRule"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon1);

        horizontalLayout->addWidget(btnEditRule);

        btnRemoveRule = new QPushButton(QgsRuleBasedLabelingWidget);
        btnRemoveRule->setObjectName(QString::fromUtf8("btnRemoveRule"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon2);

        horizontalLayout->addWidget(btnRemoveRule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsRuleBasedLabelingWidget);

        QMetaObject::connectSlotsByName(QgsRuleBasedLabelingWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRuleBasedLabelingWidget)
    {
#if QT_CONFIG(tooltip)
        btnAddRule->setToolTip(QCoreApplication::translate("QgsRuleBasedLabelingWidget", "Add rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnEditRule->setToolTip(QCoreApplication::translate("QgsRuleBasedLabelingWidget", "Edit rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveRule->setToolTip(QCoreApplication::translate("QgsRuleBasedLabelingWidget", "Remove rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveRule->setText(QString());
        (void)QgsRuleBasedLabelingWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsRuleBasedLabelingWidget: public Ui_QgsRuleBasedLabelingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRULEBASEDLABELINGWIDGET_H
