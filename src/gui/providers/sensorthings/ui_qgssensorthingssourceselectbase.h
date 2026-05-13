/********************************************************************************
** Form generated from reading UI file 'qgssensorthingssourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSENSORTHINGSSOURCESELECTBASE_H
#define UI_QGSSENSORTHINGSSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditor.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSensorThingsSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *mConnectionDetailsGroupBox;
    QVBoxLayout *verticalLayout;
    QWidget *mConnectionContainerWidget;
    QGroupBox *mConnectionDetailsGroupBox_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *mLayerSettingsContainerWidget;
    QgsCollapsibleGroupBox *mSubsetGroupBox;
    QGridLayout *gridLayout_4;
    QPushButton *pbnQueryBuilder;
    QSpacerItem *spacerItem;
    QgsCodeEditor *txtSubsetSQL;
    QGroupBox *mConnectionsGroupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *spacerItem1;
    QComboBox *cmbConnections;
    QToolButton *btnEdit;
    QToolButton *btnDelete;
    QToolButton *btnLoad;
    QToolButton *btnSave;
    QToolButton *btnNew;

    void setupUi(QDialog *QgsSensorThingsSourceSelectBase)
    {
        if (QgsSensorThingsSourceSelectBase->objectName().isEmpty())
            QgsSensorThingsSourceSelectBase->setObjectName(QString::fromUtf8("QgsSensorThingsSourceSelectBase"));
        QgsSensorThingsSourceSelectBase->resize(678, 501);
        gridLayout = new QGridLayout(QgsSensorThingsSourceSelectBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsSensorThingsSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        scrollArea = new QgsScrollArea(QgsSensorThingsSourceSelectBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 658, 320));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mConnectionDetailsGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mConnectionDetailsGroupBox->setObjectName(QString::fromUtf8("mConnectionDetailsGroupBox"));
        verticalLayout = new QVBoxLayout(mConnectionDetailsGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mConnectionContainerWidget = new QWidget(mConnectionDetailsGroupBox);
        mConnectionContainerWidget->setObjectName(QString::fromUtf8("mConnectionContainerWidget"));

        verticalLayout->addWidget(mConnectionContainerWidget);


        verticalLayout_3->addWidget(mConnectionDetailsGroupBox);

        mConnectionDetailsGroupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        mConnectionDetailsGroupBox_2->setObjectName(QString::fromUtf8("mConnectionDetailsGroupBox_2"));
        verticalLayout_2 = new QVBoxLayout(mConnectionDetailsGroupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mLayerSettingsContainerWidget = new QWidget(mConnectionDetailsGroupBox_2);
        mLayerSettingsContainerWidget->setObjectName(QString::fromUtf8("mLayerSettingsContainerWidget"));

        verticalLayout_2->addWidget(mLayerSettingsContainerWidget);


        verticalLayout_3->addWidget(mConnectionDetailsGroupBox_2);

        mSubsetGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mSubsetGroupBox->setObjectName(QString::fromUtf8("mSubsetGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(mSubsetGroupBox->sizePolicy().hasHeightForWidth());
        mSubsetGroupBox->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(mSubsetGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pbnQueryBuilder = new QPushButton(mSubsetGroupBox);
        pbnQueryBuilder->setObjectName(QString::fromUtf8("pbnQueryBuilder"));

        gridLayout_4->addWidget(pbnQueryBuilder, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(0, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(spacerItem, 1, 0, 1, 1);

        txtSubsetSQL = new QgsCodeEditor(mSubsetGroupBox);
        txtSubsetSQL->setObjectName(QString::fromUtf8("txtSubsetSQL"));

        gridLayout_4->addWidget(txtSubsetSQL, 0, 0, 1, 2);


        verticalLayout_3->addWidget(mSubsetGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        mConnectionsGroupBox = new QGroupBox(QgsSensorThingsSourceSelectBase);
        mConnectionsGroupBox->setObjectName(QString::fromUtf8("mConnectionsGroupBox"));
        gridLayout_2 = new QGridLayout(mConnectionsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spacerItem1 = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem1, 1, 4, 1, 1);

        cmbConnections = new QComboBox(mConnectionsGroupBox);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout_2->addWidget(cmbConnections, 0, 0, 1, 7);

        btnEdit = new QToolButton(mConnectionsGroupBox);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setEnabled(false);

        gridLayout_2->addWidget(btnEdit, 1, 2, 1, 1);

        btnDelete = new QToolButton(mConnectionsGroupBox);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setEnabled(false);

        gridLayout_2->addWidget(btnDelete, 1, 3, 1, 1);

        btnLoad = new QToolButton(mConnectionsGroupBox);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        gridLayout_2->addWidget(btnLoad, 1, 5, 1, 1);

        btnSave = new QToolButton(mConnectionsGroupBox);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        gridLayout_2->addWidget(btnSave, 1, 6, 1, 1);

        btnNew = new QToolButton(mConnectionsGroupBox);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        gridLayout_2->addWidget(btnNew, 1, 0, 1, 2);


        gridLayout->addWidget(mConnectionsGroupBox, 0, 0, 1, 1);

        QWidget::setTabOrder(cmbConnections, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);

        retranslateUi(QgsSensorThingsSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsSensorThingsSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSensorThingsSourceSelectBase)
    {
        mConnectionDetailsGroupBox->setTitle(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Connection Details", nullptr));
        mConnectionDetailsGroupBox_2->setTitle(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Layer Settings", nullptr));
        mSubsetGroupBox->setTitle(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Filter", nullptr));
        pbnQueryBuilder->setText(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Query Builder", nullptr));
        mConnectionsGroupBox->setTitle(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Connections", nullptr));
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Edit selected service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Remove connection to selected service", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        btnLoad->setToolTip(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Load connections from file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLoad->setText(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Load", nullptr));
#if QT_CONFIG(tooltip)
        btnSave->setToolTip(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSave->setText(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Save", nullptr));
#if QT_CONFIG(tooltip)
        btnNew->setToolTip(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "Create a new service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNew->setText(QCoreApplication::translate("QgsSensorThingsSourceSelectBase", "&New", nullptr));
        (void)QgsSensorThingsSourceSelectBase;
    } // retranslateUi

};

namespace Ui {
    class QgsSensorThingsSourceSelectBase: public Ui_QgsSensorThingsSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSENSORTHINGSSOURCESELECTBASE_H
