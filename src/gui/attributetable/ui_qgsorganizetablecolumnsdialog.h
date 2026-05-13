/********************************************************************************
** Form generated from reading UI file 'qgsorganizetablecolumnsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSORGANIZETABLECOLUMNSDIALOG_H
#define UI_QGSORGANIZETABLECOLUMNSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QgsOrganizeTableColumnsDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QListWidget *mFieldsList;
    QPushButton *mHideAllButton;
    QDialogButtonBox *buttonBox;
    QPushButton *mShowAllButton;
    QPushButton *mToggleSelectionButton;

    void setupUi(QDialog *QgsOrganizeTableColumnsDialog)
    {
        if (QgsOrganizeTableColumnsDialog->objectName().isEmpty())
            QgsOrganizeTableColumnsDialog->setObjectName(QString::fromUtf8("QgsOrganizeTableColumnsDialog"));
        QgsOrganizeTableColumnsDialog->resize(499, 357);
        gridLayout = new QGridLayout(QgsOrganizeTableColumnsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        mFieldsList = new QListWidget(QgsOrganizeTableColumnsDialog);
        mFieldsList->setObjectName(QString::fromUtf8("mFieldsList"));
        mFieldsList->setDragDropMode(QAbstractItemView::DragDrop);
        mFieldsList->setDefaultDropAction(Qt::MoveAction);
        mFieldsList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(mFieldsList, 0, 0, 1, 5);

        mHideAllButton = new QPushButton(QgsOrganizeTableColumnsDialog);
        mHideAllButton->setObjectName(QString::fromUtf8("mHideAllButton"));

        gridLayout->addWidget(mHideAllButton, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsOrganizeTableColumnsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 4, 1, 1);

        mShowAllButton = new QPushButton(QgsOrganizeTableColumnsDialog);
        mShowAllButton->setObjectName(QString::fromUtf8("mShowAllButton"));

        gridLayout->addWidget(mShowAllButton, 2, 0, 1, 1);

        mToggleSelectionButton = new QPushButton(QgsOrganizeTableColumnsDialog);
        mToggleSelectionButton->setObjectName(QString::fromUtf8("mToggleSelectionButton"));

        gridLayout->addWidget(mToggleSelectionButton, 2, 2, 1, 1);

        QWidget::setTabOrder(mFieldsList, mShowAllButton);
        QWidget::setTabOrder(mShowAllButton, mHideAllButton);

        retranslateUi(QgsOrganizeTableColumnsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOrganizeTableColumnsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOrganizeTableColumnsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsOrganizeTableColumnsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsOrganizeTableColumnsDialog)
    {
        QgsOrganizeTableColumnsDialog->setWindowTitle(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Organize Table columns", nullptr));
        mHideAllButton->setText(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Hide All", nullptr));
#if QT_CONFIG(tooltip)
        mHideAllButton->setToolTip(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Hides all the fields and actions in the table", nullptr));
#endif // QT_CONFIG(tooltip)
        mShowAllButton->setText(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Show All", nullptr));
#if QT_CONFIG(tooltip)
        mShowAllButton->setToolTip(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Displays all the fields and actions in the table", nullptr));
#endif // QT_CONFIG(tooltip)
        mToggleSelectionButton->setText(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Toggle Selection", nullptr));
#if QT_CONFIG(tooltip)
        mToggleSelectionButton->setToolTip(QCoreApplication::translate("QgsOrganizeTableColumnsDialog", "Toggles visibility of the selected fields and actions", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsOrganizeTableColumnsDialog: public Ui_QgsOrganizeTableColumnsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSORGANIZETABLECOLUMNSDIALOG_H
