/********************************************************************************
** Form generated from reading UI file 'qgsstylegroupselectiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLEGROUPSELECTIONDIALOGBASE_H
#define UI_QGSSTYLEGROUPSELECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SymbolsGroupSelectionDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *groupTree;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *SymbolsGroupSelectionDialogBase)
    {
        if (SymbolsGroupSelectionDialogBase->objectName().isEmpty())
            SymbolsGroupSelectionDialogBase->setObjectName(QString::fromUtf8("SymbolsGroupSelectionDialogBase"));
        SymbolsGroupSelectionDialogBase->resize(287, 348);
        verticalLayout = new QVBoxLayout(SymbolsGroupSelectionDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupTree = new QTreeView(SymbolsGroupSelectionDialogBase);
        groupTree->setObjectName(QString::fromUtf8("groupTree"));
        groupTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        groupTree->setHeaderHidden(true);

        verticalLayout->addWidget(groupTree);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(SymbolsGroupSelectionDialogBase);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SymbolsGroupSelectionDialogBase);
        QObject::connect(okButton, SIGNAL(clicked()), SymbolsGroupSelectionDialogBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(SymbolsGroupSelectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *SymbolsGroupSelectionDialogBase)
    {
        SymbolsGroupSelectionDialogBase->setWindowTitle(QCoreApplication::translate("SymbolsGroupSelectionDialogBase", "Group Selection Dialog", nullptr));
        okButton->setText(QCoreApplication::translate("SymbolsGroupSelectionDialogBase", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SymbolsGroupSelectionDialogBase: public Ui_SymbolsGroupSelectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEGROUPSELECTIONDIALOGBASE_H
