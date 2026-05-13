/********************************************************************************
** Form generated from reading UI file 'qgscodeditorhistorydialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCODEDITORHISTORYDIALOGBASE_H
#define UI_QGSCODEDITORHISTORYDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QgsCodeEditorHistoryDialogBase
{
public:
    QGridLayout *gridLayout;
    QPushButton *mButtonReloadHistory;
    QPushButton *mButtonSaveHistory;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mButtonRunHistory;
    QDialogButtonBox *buttonBox;
    QListView *listView;

    void setupUi(QDialog *QgsCodeEditorHistoryDialogBase)
    {
        if (QgsCodeEditorHistoryDialogBase->objectName().isEmpty())
            QgsCodeEditorHistoryDialogBase->setObjectName(QString::fromUtf8("QgsCodeEditorHistoryDialogBase"));
        QgsCodeEditorHistoryDialogBase->resize(587, 375);
        QgsCodeEditorHistoryDialogBase->setWindowTitle(QString::fromUtf8("Dialog"));
        gridLayout = new QGridLayout(QgsCodeEditorHistoryDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 4, 2, 4);
        mButtonReloadHistory = new QPushButton(QgsCodeEditorHistoryDialogBase);
        mButtonReloadHistory->setObjectName(QString::fromUtf8("mButtonReloadHistory"));
        mButtonReloadHistory->setAutoDefault(false);

        gridLayout->addWidget(mButtonReloadHistory, 1, 0, 1, 1);

        mButtonSaveHistory = new QPushButton(QgsCodeEditorHistoryDialogBase);
        mButtonSaveHistory->setObjectName(QString::fromUtf8("mButtonSaveHistory"));
        mButtonSaveHistory->setEnabled(true);
        mButtonSaveHistory->setAutoDefault(false);

        gridLayout->addWidget(mButtonSaveHistory, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mButtonRunHistory = new QPushButton(QgsCodeEditorHistoryDialogBase);
        mButtonRunHistory->setObjectName(QString::fromUtf8("mButtonRunHistory"));
        mButtonRunHistory->setAutoDefault(false);

        horizontalLayout->addWidget(mButtonRunHistory);

        buttonBox = new QDialogButtonBox(QgsCodeEditorHistoryDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setFocusPolicy(Qt::TabFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 1, 2, 1, 1);

        listView = new QListView(QgsCodeEditorHistoryDialogBase);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setFrameShape(QFrame::NoFrame);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setAlternatingRowColors(true);
        listView->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(listView, 0, 0, 1, 3);


        retranslateUi(QgsCodeEditorHistoryDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsCodeEditorHistoryDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsCodeEditorHistoryDialogBase, SLOT(reject()));

        mButtonRunHistory->setDefault(true);


        QMetaObject::connectSlotsByName(QgsCodeEditorHistoryDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCodeEditorHistoryDialogBase)
    {
        mButtonReloadHistory->setText(QCoreApplication::translate("QgsCodeEditorHistoryDialogBase", "Reload", nullptr));
        mButtonSaveHistory->setText(QCoreApplication::translate("QgsCodeEditorHistoryDialogBase", "Save", nullptr));
        mButtonRunHistory->setText(QCoreApplication::translate("QgsCodeEditorHistoryDialogBase", "Run", nullptr));
        (void)QgsCodeEditorHistoryDialogBase;
    } // retranslateUi

};

namespace Ui {
    class QgsCodeEditorHistoryDialogBase: public Ui_QgsCodeEditorHistoryDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCODEDITORHISTORYDIALOGBASE_H
