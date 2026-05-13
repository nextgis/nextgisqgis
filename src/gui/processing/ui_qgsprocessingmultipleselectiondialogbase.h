/********************************************************************************
** Form generated from reading UI file 'qgsprocessingmultipleselectiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGMULTIPLESELECTIONDIALOGBASE_H
#define UI_QGSPROCESSINGMULTIPLESELECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingMultipleSelectionDialogBase
{
public:
    QHBoxLayout *horizontalLayout;
    QListView *mSelectionList;
    QDialogButtonBox *mButtonBox;

    void setupUi(QgsPanelWidget *QgsProcessingMultipleSelectionDialogBase)
    {
        if (QgsProcessingMultipleSelectionDialogBase->objectName().isEmpty())
            QgsProcessingMultipleSelectionDialogBase->setObjectName(QString::fromUtf8("QgsProcessingMultipleSelectionDialogBase"));
        QgsProcessingMultipleSelectionDialogBase->resize(380, 320);
        horizontalLayout = new QHBoxLayout(QgsProcessingMultipleSelectionDialogBase);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        mSelectionList = new QListView(QgsProcessingMultipleSelectionDialogBase);
        mSelectionList->setObjectName(QString::fromUtf8("mSelectionList"));
        mSelectionList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mSelectionList->setAlternatingRowColors(true);

        horizontalLayout->addWidget(mSelectionList);

        mButtonBox = new QDialogButtonBox(QgsProcessingMultipleSelectionDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Vertical);
        mButtonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(mButtonBox);


        retranslateUi(QgsProcessingMultipleSelectionDialogBase);

        QMetaObject::connectSlotsByName(QgsProcessingMultipleSelectionDialogBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsProcessingMultipleSelectionDialogBase)
    {
        QgsProcessingMultipleSelectionDialogBase->setWindowTitle(QCoreApplication::translate("QgsProcessingMultipleSelectionDialogBase", "Multiple selection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingMultipleSelectionDialogBase: public Ui_QgsProcessingMultipleSelectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGMULTIPLESELECTIONDIALOGBASE_H
