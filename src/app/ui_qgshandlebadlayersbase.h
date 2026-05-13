/********************************************************************************
** Form generated from reading UI file 'qgshandlebadlayersbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHANDLEBADLAYERSBASE_H
#define UI_QGSHANDLEBADLAYERSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsHandleBadLayersBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mLayerList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsHandleBadLayersBase)
    {
        if (QgsHandleBadLayersBase->objectName().isEmpty())
            QgsHandleBadLayersBase->setObjectName(QString::fromUtf8("QgsHandleBadLayersBase"));
        QgsHandleBadLayersBase->resize(834, 505);
        verticalLayout = new QVBoxLayout(QgsHandleBadLayersBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mLayerList = new QTableWidget(QgsHandleBadLayersBase);
        mLayerList->setObjectName(QString::fromUtf8("mLayerList"));
        mLayerList->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(mLayerList);

        buttonBox = new QDialogButtonBox(QgsHandleBadLayersBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Ignore);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsHandleBadLayersBase);

        QMetaObject::connectSlotsByName(QgsHandleBadLayersBase);
    } // setupUi

    void retranslateUi(QDialog *QgsHandleBadLayersBase)
    {
        QgsHandleBadLayersBase->setWindowTitle(QCoreApplication::translate("QgsHandleBadLayersBase", "Handle Unavailable Layers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsHandleBadLayersBase: public Ui_QgsHandleBadLayersBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHANDLEBADLAYERSBASE_H
