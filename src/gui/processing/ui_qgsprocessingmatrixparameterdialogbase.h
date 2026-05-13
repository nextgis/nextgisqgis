/********************************************************************************
** Form generated from reading UI file 'qgsprocessingmatrixparameterdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGMATRIXPARAMETERDIALOGBASE_H
#define UI_QGSPROCESSINGMATRIXPARAMETERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingMatrixParameterDialogBase
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *mTblView;
    QDialogButtonBox *mButtonBox;

    void setupUi(QgsPanelWidget *QgsProcessingMatrixParameterDialogBase)
    {
        if (QgsProcessingMatrixParameterDialogBase->objectName().isEmpty())
            QgsProcessingMatrixParameterDialogBase->setObjectName(QString::fromUtf8("QgsProcessingMatrixParameterDialogBase"));
        QgsProcessingMatrixParameterDialogBase->resize(380, 320);
        horizontalLayout = new QHBoxLayout(QgsProcessingMatrixParameterDialogBase);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        mTblView = new QTableView(QgsProcessingMatrixParameterDialogBase);
        mTblView->setObjectName(QString::fromUtf8("mTblView"));
        mTblView->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(mTblView);

        mButtonBox = new QDialogButtonBox(QgsProcessingMatrixParameterDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Vertical);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(mButtonBox);


        retranslateUi(QgsProcessingMatrixParameterDialogBase);

        QMetaObject::connectSlotsByName(QgsProcessingMatrixParameterDialogBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsProcessingMatrixParameterDialogBase)
    {
        QgsProcessingMatrixParameterDialogBase->setWindowTitle(QCoreApplication::translate("QgsProcessingMatrixParameterDialogBase", "Fixed table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingMatrixParameterDialogBase: public Ui_QgsProcessingMatrixParameterDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGMATRIXPARAMETERDIALOGBASE_H
