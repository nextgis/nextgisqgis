/********************************************************************************
** Form generated from reading UI file 'qgsstacdownloadassetsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTACDOWNLOADASSETSDIALOG_H
#define UI_QGSSTACDOWNLOADASSETSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStacDownloadAssetsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsFileWidget *mFileWidget;
    QTreeWidget *mTreeWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mSelectAllButton;
    QPushButton *mDeselectAllButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStacDownloadAssetsDialog)
    {
        if (QgsStacDownloadAssetsDialog->objectName().isEmpty())
            QgsStacDownloadAssetsDialog->setObjectName(QString::fromUtf8("QgsStacDownloadAssetsDialog"));
        QgsStacDownloadAssetsDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(QgsStacDownloadAssetsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsStacDownloadAssetsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mFileWidget = new QgsFileWidget(QgsStacDownloadAssetsDialog);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        verticalLayout->addWidget(mFileWidget);

        mTreeWidget = new QTreeWidget(QgsStacDownloadAssetsDialog);
        mTreeWidget->setObjectName(QString::fromUtf8("mTreeWidget"));
        mTreeWidget->setItemsExpandable(false);
        mTreeWidget->setSortingEnabled(true);
        mTreeWidget->setColumnCount(6);
        mTreeWidget->header()->setVisible(true);

        verticalLayout->addWidget(mTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mSelectAllButton = new QPushButton(QgsStacDownloadAssetsDialog);
        mSelectAllButton->setObjectName(QString::fromUtf8("mSelectAllButton"));

        horizontalLayout->addWidget(mSelectAllButton);

        mDeselectAllButton = new QPushButton(QgsStacDownloadAssetsDialog);
        mDeselectAllButton->setObjectName(QString::fromUtf8("mDeselectAllButton"));

        horizontalLayout->addWidget(mDeselectAllButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(QgsStacDownloadAssetsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsStacDownloadAssetsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsStacDownloadAssetsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStacDownloadAssetsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsStacDownloadAssetsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsStacDownloadAssetsDialog)
    {
        QgsStacDownloadAssetsDialog->setWindowTitle(QCoreApplication::translate("QgsStacDownloadAssetsDialog", "Download STAC assets", nullptr));
        label->setText(QCoreApplication::translate("QgsStacDownloadAssetsDialog", "Download location:", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mTreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("QgsStacDownloadAssetsDialog", "URL", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("QgsStacDownloadAssetsDialog", "Media Type", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("QgsStacDownloadAssetsDialog", "Roles", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsStacDownloadAssetsDialog", "Description", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsStacDownloadAssetsDialog", "Title", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsStacDownloadAssetsDialog", "ID", nullptr));
        mSelectAllButton->setText(QCoreApplication::translate("QgsStacDownloadAssetsDialog", "Select All", nullptr));
        mDeselectAllButton->setText(QCoreApplication::translate("QgsStacDownloadAssetsDialog", "Deselect All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsStacDownloadAssetsDialog: public Ui_QgsStacDownloadAssetsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTACDOWNLOADASSETSDIALOG_H
