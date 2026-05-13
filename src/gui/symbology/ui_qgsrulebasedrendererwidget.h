/********************************************************************************
** Form generated from reading UI file 'qgsrulebasedrendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRULEBASEDRENDERERWIDGET_H
#define UI_QGSRULEBASEDRENDERERWIDGET_H

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

class Ui_QgsRuleBasedRendererWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *viewRules;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddRule;
    QPushButton *btnRemoveRule;
    QPushButton *btnEditRule;
    QPushButton *btnCountFeatures;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRenderingOrder;
    QHBoxLayout *horizontalLayout2;
    QPushButton *btnRefineRule;
    QSpacerItem *horizontalSpacer2;

    void setupUi(QWidget *QgsRuleBasedRendererWidget)
    {
        if (QgsRuleBasedRendererWidget->objectName().isEmpty())
            QgsRuleBasedRendererWidget->setObjectName(QString::fromUtf8("QgsRuleBasedRendererWidget"));
        QgsRuleBasedRendererWidget->resize(709, 401);
        verticalLayout = new QVBoxLayout(QgsRuleBasedRendererWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        viewRules = new QTreeView(QgsRuleBasedRendererWidget);
        viewRules->setObjectName(QString::fromUtf8("viewRules"));
        viewRules->setContextMenuPolicy(Qt::CustomContextMenu);
        viewRules->setAcceptDrops(true);
        viewRules->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        viewRules->setDragEnabled(true);
        viewRules->setDragDropMode(QAbstractItemView::InternalMove);
        viewRules->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewRules->setAllColumnsShowFocus(true);
        viewRules->header()->setMinimumSectionSize(100);
        viewRules->header()->setStretchLastSection(true);

        verticalLayout->addWidget(viewRules);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAddRule = new QPushButton(QgsRuleBasedRendererWidget);
        btnAddRule->setObjectName(QString::fromUtf8("btnAddRule"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);

        horizontalLayout->addWidget(btnAddRule);

        btnRemoveRule = new QPushButton(QgsRuleBasedRendererWidget);
        btnRemoveRule->setObjectName(QString::fromUtf8("btnRemoveRule"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon1);

        horizontalLayout->addWidget(btnRemoveRule);

        btnEditRule = new QPushButton(QgsRuleBasedRendererWidget);
        btnEditRule->setObjectName(QString::fromUtf8("btnEditRule"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon2);

        horizontalLayout->addWidget(btnEditRule);

        btnCountFeatures = new QPushButton(QgsRuleBasedRendererWidget);
        btnCountFeatures->setObjectName(QString::fromUtf8("btnCountFeatures"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionSum.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnCountFeatures->setIcon(icon3);

        horizontalLayout->addWidget(btnCountFeatures);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRenderingOrder = new QPushButton(QgsRuleBasedRendererWidget);
        btnRenderingOrder->setObjectName(QString::fromUtf8("btnRenderingOrder"));

        horizontalLayout->addWidget(btnRenderingOrder);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setObjectName(QString::fromUtf8("horizontalLayout2"));
        btnRefineRule = new QPushButton(QgsRuleBasedRendererWidget);
        btnRefineRule->setObjectName(QString::fromUtf8("btnRefineRule"));
        btnRefineRule->setEnabled(true);
        btnRefineRule->setCheckable(false);
        btnRefineRule->setAutoDefault(false);
        btnRefineRule->setFlat(false);

        horizontalLayout2->addWidget(btnRefineRule);

        horizontalSpacer2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout2->addItem(horizontalSpacer2);


        verticalLayout->addLayout(horizontalLayout2);


        retranslateUi(QgsRuleBasedRendererWidget);

        btnRefineRule->setDefault(false);


        QMetaObject::connectSlotsByName(QgsRuleBasedRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRuleBasedRendererWidget)
    {
#if QT_CONFIG(tooltip)
        btnAddRule->setToolTip(QCoreApplication::translate("QgsRuleBasedRendererWidget", "Add rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveRule->setToolTip(QCoreApplication::translate("QgsRuleBasedRendererWidget", "Remove selected rules", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnEditRule->setToolTip(QCoreApplication::translate("QgsRuleBasedRendererWidget", "Edit current rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnCountFeatures->setToolTip(QCoreApplication::translate("QgsRuleBasedRendererWidget", "Count features", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRenderingOrder->setText(QCoreApplication::translate("QgsRuleBasedRendererWidget", "Symbol Levels\342\200\246", nullptr));
        btnRefineRule->setText(QCoreApplication::translate("QgsRuleBasedRendererWidget", "Refine Selected Rules", nullptr));
        (void)QgsRuleBasedRendererWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsRuleBasedRendererWidget: public Ui_QgsRuleBasedRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRULEBASEDRENDERERWIDGET_H
