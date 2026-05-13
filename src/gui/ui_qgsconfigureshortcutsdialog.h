/********************************************************************************
** Form generated from reading UI file 'qgsconfigureshortcutsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCONFIGURESHORTCUTSDIALOG_H
#define UI_QGSCONFIGURESHORTCUTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsConfigureShortcutsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsFilterLineEdit *mLeFilter;
    QTreeWidget *treeActions;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnChangeShortcut;
    QPushButton *btnSetNoShortcut;
    QPushButton *btnResetShortcut;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnLoadShortcuts;
    QPushButton *btnSaveShortcuts;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsConfigureShortcutsDialog)
    {
        if (QgsConfigureShortcutsDialog->objectName().isEmpty())
            QgsConfigureShortcutsDialog->setObjectName(QString::fromUtf8("QgsConfigureShortcutsDialog"));
        QgsConfigureShortcutsDialog->resize(385, 304);
        verticalLayout = new QVBoxLayout(QgsConfigureShortcutsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mLeFilter = new QgsFilterLineEdit(QgsConfigureShortcutsDialog);
        mLeFilter->setObjectName(QString::fromUtf8("mLeFilter"));

        verticalLayout->addWidget(mLeFilter);

        treeActions = new QTreeWidget(QgsConfigureShortcutsDialog);
        treeActions->setObjectName(QString::fromUtf8("treeActions"));
        treeActions->setRootIsDecorated(false);
        treeActions->setSortingEnabled(true);
        treeActions->setColumnCount(2);

        verticalLayout->addWidget(treeActions);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnChangeShortcut = new QPushButton(QgsConfigureShortcutsDialog);
        btnChangeShortcut->setObjectName(QString::fromUtf8("btnChangeShortcut"));
        btnChangeShortcut->setFocusPolicy(Qt::StrongFocus);
        btnChangeShortcut->setCheckable(true);
        btnChangeShortcut->setAutoDefault(false);

        horizontalLayout->addWidget(btnChangeShortcut);

        btnSetNoShortcut = new QPushButton(QgsConfigureShortcutsDialog);
        btnSetNoShortcut->setObjectName(QString::fromUtf8("btnSetNoShortcut"));
        btnSetNoShortcut->setAutoDefault(false);

        horizontalLayout->addWidget(btnSetNoShortcut);

        btnResetShortcut = new QPushButton(QgsConfigureShortcutsDialog);
        btnResetShortcut->setObjectName(QString::fromUtf8("btnResetShortcut"));
        btnResetShortcut->setAutoDefault(false);

        horizontalLayout->addWidget(btnResetShortcut);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnLoadShortcuts = new QPushButton(QgsConfigureShortcutsDialog);
        btnLoadShortcuts->setObjectName(QString::fromUtf8("btnLoadShortcuts"));
        btnLoadShortcuts->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnLoadShortcuts);

        btnSaveShortcuts = new QPushButton(QgsConfigureShortcutsDialog);
        btnSaveShortcuts->setObjectName(QString::fromUtf8("btnSaveShortcuts"));
        btnSaveShortcuts->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnSaveShortcuts);

        buttonBox = new QDialogButtonBox(QgsConfigureShortcutsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(mLeFilter, treeActions);
        QWidget::setTabOrder(treeActions, btnChangeShortcut);
        QWidget::setTabOrder(btnChangeShortcut, btnSetNoShortcut);
        QWidget::setTabOrder(btnSetNoShortcut, btnResetShortcut);
        QWidget::setTabOrder(btnResetShortcut, btnLoadShortcuts);
        QWidget::setTabOrder(btnLoadShortcuts, btnSaveShortcuts);

        retranslateUi(QgsConfigureShortcutsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsConfigureShortcutsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsConfigureShortcutsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsConfigureShortcutsDialog)
    {
        QgsConfigureShortcutsDialog->setWindowTitle(QCoreApplication::translate("QgsConfigureShortcutsDialog", "Keyboard Shortcuts", nullptr));
        mLeFilter->setPlaceholderText(QCoreApplication::translate("QgsConfigureShortcutsDialog", "Search\342\200\246", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeActions->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsConfigureShortcutsDialog", "Shortcut", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsConfigureShortcutsDialog", "Action", nullptr));
        btnChangeShortcut->setText(QCoreApplication::translate("QgsConfigureShortcutsDialog", "Change", nullptr));
        btnSetNoShortcut->setText(QCoreApplication::translate("QgsConfigureShortcutsDialog", "Set None", nullptr));
        btnResetShortcut->setText(QCoreApplication::translate("QgsConfigureShortcutsDialog", "Set Default", nullptr));
        btnLoadShortcuts->setText(QCoreApplication::translate("QgsConfigureShortcutsDialog", "Load\342\200\246", nullptr));
        btnSaveShortcuts->setText(QCoreApplication::translate("QgsConfigureShortcutsDialog", "Save\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsConfigureShortcutsDialog: public Ui_QgsConfigureShortcutsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCONFIGURESHORTCUTSDIALOG_H
