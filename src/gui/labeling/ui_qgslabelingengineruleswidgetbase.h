/********************************************************************************
** Form generated from reading UI file 'qgslabelingengineruleswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGENGINERULESWIDGETBASE_H
#define UI_QGSLABELINGENGINERULESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingEngineRulesWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *viewRules;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnAddRule;
    QToolButton *btnEditRule;
    QToolButton *btnRemoveRule;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QgsLabelingEngineRulesWidgetBase)
    {
        if (QgsLabelingEngineRulesWidgetBase->objectName().isEmpty())
            QgsLabelingEngineRulesWidgetBase->setObjectName(QString::fromUtf8("QgsLabelingEngineRulesWidgetBase"));
        QgsLabelingEngineRulesWidgetBase->resize(457, 372);
        verticalLayout = new QVBoxLayout(QgsLabelingEngineRulesWidgetBase);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        viewRules = new QTreeView(QgsLabelingEngineRulesWidgetBase);
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
        btnAddRule = new QToolButton(QgsLabelingEngineRulesWidgetBase);
        btnAddRule->setObjectName(QString::fromUtf8("btnAddRule"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);

        horizontalLayout->addWidget(btnAddRule);

        btnEditRule = new QToolButton(QgsLabelingEngineRulesWidgetBase);
        btnEditRule->setObjectName(QString::fromUtf8("btnEditRule"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon1);

        horizontalLayout->addWidget(btnEditRule);

        btnRemoveRule = new QToolButton(QgsLabelingEngineRulesWidgetBase);
        btnRemoveRule->setObjectName(QString::fromUtf8("btnRemoveRule"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon2);

        horizontalLayout->addWidget(btnRemoveRule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsLabelingEngineRulesWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelingEngineRulesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelingEngineRulesWidgetBase)
    {
#if QT_CONFIG(tooltip)
        btnAddRule->setToolTip(QCoreApplication::translate("QgsLabelingEngineRulesWidgetBase", "Add rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnEditRule->setToolTip(QCoreApplication::translate("QgsLabelingEngineRulesWidgetBase", "Edit rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveRule->setToolTip(QCoreApplication::translate("QgsLabelingEngineRulesWidgetBase", "Remove rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveRule->setText(QString());
        (void)QgsLabelingEngineRulesWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingEngineRulesWidgetBase: public Ui_QgsLabelingEngineRulesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGENGINERULESWIDGETBASE_H
