/********************************************************************************
** Form generated from reading UI file 'qgsmeshrendereractivedatasetwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERACTIVEDATASETWIDGETBASE_H
#define UI_QGSMESHRENDERERACTIVEDATASETWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsmeshdatasetgrouptreeview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererActiveDatasetWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsMeshActiveDatasetGroupTreeView *mDatasetGroupTreeView;
    QgsCollapsibleGroupBox *mActiveDatasetMetadataGroup;
    QVBoxLayout *verticalLayout_2;
    QLabel *mActiveDatasetMetadata;

    void setupUi(QWidget *QgsMeshRendererActiveDatasetWidgetBase)
    {
        if (QgsMeshRendererActiveDatasetWidgetBase->objectName().isEmpty())
            QgsMeshRendererActiveDatasetWidgetBase->setObjectName(QString::fromUtf8("QgsMeshRendererActiveDatasetWidgetBase"));
        QgsMeshRendererActiveDatasetWidgetBase->setEnabled(true);
        QgsMeshRendererActiveDatasetWidgetBase->resize(343, 337);
        QgsMeshRendererActiveDatasetWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsMeshRendererActiveDatasetWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mDatasetGroupTreeView = new QgsMeshActiveDatasetGroupTreeView(QgsMeshRendererActiveDatasetWidgetBase);
        mDatasetGroupTreeView->setObjectName(QString::fromUtf8("mDatasetGroupTreeView"));
        mDatasetGroupTreeView->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(mDatasetGroupTreeView);

        mActiveDatasetMetadataGroup = new QgsCollapsibleGroupBox(QgsMeshRendererActiveDatasetWidgetBase);
        mActiveDatasetMetadataGroup->setObjectName(QString::fromUtf8("mActiveDatasetMetadataGroup"));
        verticalLayout_2 = new QVBoxLayout(mActiveDatasetMetadataGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mActiveDatasetMetadata = new QLabel(mActiveDatasetMetadataGroup);
        mActiveDatasetMetadata->setObjectName(QString::fromUtf8("mActiveDatasetMetadata"));
        mActiveDatasetMetadata->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(mActiveDatasetMetadata);


        verticalLayout->addWidget(mActiveDatasetMetadataGroup);


        retranslateUi(QgsMeshRendererActiveDatasetWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshRendererActiveDatasetWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererActiveDatasetWidgetBase)
    {
        mActiveDatasetMetadataGroup->setTitle(QCoreApplication::translate("QgsMeshRendererActiveDatasetWidgetBase", "Selected Dataset Group(s) Metadata", nullptr));
        mActiveDatasetMetadata->setText(QString());
        (void)QgsMeshRendererActiveDatasetWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererActiveDatasetWidgetBase: public Ui_QgsMeshRendererActiveDatasetWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERACTIVEDATASETWIDGETBASE_H
