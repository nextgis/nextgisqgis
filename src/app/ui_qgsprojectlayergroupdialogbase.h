/********************************************************************************
** Form generated from reading UI file 'qgsprojectlayergroupdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTLAYERGROUPDIALOGBASE_H
#define UI_QGSPROJECTLAYERGROUPDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qgsfilewidget.h"
#include "qgslayertreeview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectLayerGroupDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mProjectFileLabel;
    QgsFileWidget *mProjectFileWidget;
    QDialogButtonBox *mButtonBox;
    QgsLayerTreeView *mTreeView;

    void setupUi(QDialog *QgsProjectLayerGroupDialogBase)
    {
        if (QgsProjectLayerGroupDialogBase->objectName().isEmpty())
            QgsProjectLayerGroupDialogBase->setObjectName(QString::fromUtf8("QgsProjectLayerGroupDialogBase"));
        QgsProjectLayerGroupDialogBase->resize(400, 300);
        gridLayout = new QGridLayout(QgsProjectLayerGroupDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mProjectFileLabel = new QLabel(QgsProjectLayerGroupDialogBase);
        mProjectFileLabel->setObjectName(QString::fromUtf8("mProjectFileLabel"));

        horizontalLayout->addWidget(mProjectFileLabel);

        mProjectFileWidget = new QgsFileWidget(QgsProjectLayerGroupDialogBase);
        mProjectFileWidget->setObjectName(QString::fromUtf8("mProjectFileWidget"));
        mProjectFileWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mProjectFileWidget);

        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsProjectLayerGroupDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 2, 0, 1, 1);

        mTreeView = new QgsLayerTreeView(QgsProjectLayerGroupDialogBase);
        mTreeView->setObjectName(QString::fromUtf8("mTreeView"));
        mTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mTreeView->header()->setDefaultSectionSize(0);

        gridLayout->addWidget(mTreeView, 1, 0, 1, 1);

        QWidget::setTabOrder(mProjectFileWidget, mTreeView);

        retranslateUi(QgsProjectLayerGroupDialogBase);

        QMetaObject::connectSlotsByName(QgsProjectLayerGroupDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProjectLayerGroupDialogBase)
    {
        QgsProjectLayerGroupDialogBase->setWindowTitle(QCoreApplication::translate("QgsProjectLayerGroupDialogBase", "Select Layers and Groups to Embed", nullptr));
        mProjectFileLabel->setText(QCoreApplication::translate("QgsProjectLayerGroupDialogBase", "Project file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectLayerGroupDialogBase: public Ui_QgsProjectLayerGroupDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTLAYERGROUPDIALOGBASE_H
