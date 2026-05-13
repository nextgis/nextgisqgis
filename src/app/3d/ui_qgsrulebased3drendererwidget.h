/********************************************************************************
** Form generated from reading UI file 'qgsrulebased3drendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRULEBASED3DRENDERERWIDGET_H
#define UI_QGSRULEBASED3DRENDERERWIDGET_H

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

class Ui_QgsRuleBased3DRendererWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *viewRules;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddRule;
    QPushButton *btnEditRule;
    QPushButton *btnRemoveRule;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QgsRuleBased3DRendererWidget)
    {
        if (QgsRuleBased3DRendererWidget->objectName().isEmpty())
            QgsRuleBased3DRendererWidget->setObjectName(QString::fromUtf8("QgsRuleBased3DRendererWidget"));
        QgsRuleBased3DRendererWidget->resize(457, 372);
        verticalLayout = new QVBoxLayout(QgsRuleBased3DRendererWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        viewRules = new QTreeView(QgsRuleBased3DRendererWidget);
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
        btnAddRule = new QPushButton(QgsRuleBased3DRendererWidget);
        btnAddRule->setObjectName(QString::fromUtf8("btnAddRule"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);

        horizontalLayout->addWidget(btnAddRule);

        btnEditRule = new QPushButton(QgsRuleBased3DRendererWidget);
        btnEditRule->setObjectName(QString::fromUtf8("btnEditRule"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon1);

        horizontalLayout->addWidget(btnEditRule);

        btnRemoveRule = new QPushButton(QgsRuleBased3DRendererWidget);
        btnRemoveRule->setObjectName(QString::fromUtf8("btnRemoveRule"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon2);

        horizontalLayout->addWidget(btnRemoveRule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsRuleBased3DRendererWidget);

        QMetaObject::connectSlotsByName(QgsRuleBased3DRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRuleBased3DRendererWidget)
    {
#if QT_CONFIG(tooltip)
        btnAddRule->setToolTip(QCoreApplication::translate("QgsRuleBased3DRendererWidget", "Add rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnEditRule->setToolTip(QCoreApplication::translate("QgsRuleBased3DRendererWidget", "Edit rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveRule->setToolTip(QCoreApplication::translate("QgsRuleBased3DRendererWidget", "Remove rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveRule->setText(QString());
        (void)QgsRuleBased3DRendererWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsRuleBased3DRendererWidget: public Ui_QgsRuleBased3DRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRULEBASED3DRENDERERWIDGET_H
