/********************************************************************************
** Form generated from reading UI file 'qgsvectortilesourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORTILESOURCESELECTBASE_H
#define UI_QGSVECTORTILESOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorTileSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *srcGroupBox;
    QHBoxLayout *horizontalLayout1;
    QRadioButton *mRadioSourceFile;
    QRadioButton *mRadioSourceService;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *fileGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsFileWidget *mFileWidget;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *mConnectionsGroupBox;
    QGridLayout *gridLayout_2;
    QComboBox *cmbConnections;
    QToolButton *btnLoad;
    QSpacerItem *spacerItem;
    QToolButton *btnEdit;
    QToolButton *btnDelete;
    QToolButton *btnNew;
    QToolButton *btnSave;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorTileSourceSelectBase)
    {
        if (QgsVectorTileSourceSelectBase->objectName().isEmpty())
            QgsVectorTileSourceSelectBase->setObjectName(QString::fromUtf8("QgsVectorTileSourceSelectBase"));
        QgsVectorTileSourceSelectBase->resize(553, 383);
        verticalLayout_3 = new QVBoxLayout(QgsVectorTileSourceSelectBase);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        srcGroupBox = new QGroupBox(QgsVectorTileSourceSelectBase);
        srcGroupBox->setObjectName(QString::fromUtf8("srcGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(srcGroupBox->sizePolicy().hasHeightForWidth());
        srcGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout1 = new QHBoxLayout(srcGroupBox);
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        mRadioSourceFile = new QRadioButton(srcGroupBox);
        mRadioSourceFile->setObjectName(QString::fromUtf8("mRadioSourceFile"));

        horizontalLayout1->addWidget(mRadioSourceFile);

        mRadioSourceService = new QRadioButton(srcGroupBox);
        mRadioSourceService->setObjectName(QString::fromUtf8("mRadioSourceService"));

        horizontalLayout1->addWidget(mRadioSourceService);

        horizontalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(srcGroupBox);

        mStackedWidget = new QStackedWidget(QgsVectorTileSourceSelectBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        fileGroupBox = new QGroupBox(page);
        fileGroupBox->setObjectName(QString::fromUtf8("fileGroupBox"));
        sizePolicy.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(fileGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(fileGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mFileWidget = new QgsFileWidget(fileGroupBox);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        horizontalLayout->addWidget(mFileWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_2->addWidget(fileGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mConnectionsGroupBox = new QGroupBox(page_2);
        mConnectionsGroupBox->setObjectName(QString::fromUtf8("mConnectionsGroupBox"));
        gridLayout_2 = new QGridLayout(mConnectionsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cmbConnections = new QComboBox(mConnectionsGroupBox);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout_2->addWidget(cmbConnections, 0, 0, 1, 7);

        btnLoad = new QToolButton(mConnectionsGroupBox);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        gridLayout_2->addWidget(btnLoad, 1, 5, 1, 1);

        spacerItem = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem, 1, 4, 1, 1);

        btnEdit = new QToolButton(mConnectionsGroupBox);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setEnabled(false);

        gridLayout_2->addWidget(btnEdit, 1, 2, 1, 1);

        btnDelete = new QToolButton(mConnectionsGroupBox);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setEnabled(false);

        gridLayout_2->addWidget(btnDelete, 1, 3, 1, 1);

        btnNew = new QToolButton(mConnectionsGroupBox);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        gridLayout_2->addWidget(btnNew, 1, 0, 1, 2);

        btnSave = new QToolButton(mConnectionsGroupBox);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        gridLayout_2->addWidget(btnSave, 1, 6, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 3, 1, 1);


        verticalLayout->addWidget(mConnectionsGroupBox);

        mStackedWidget->addWidget(page_2);

        verticalLayout_3->addWidget(mStackedWidget);

        buttonBox = new QDialogButtonBox(QgsVectorTileSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        verticalLayout_3->addWidget(buttonBox);

        QWidget::setTabOrder(cmbConnections, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);

        retranslateUi(QgsVectorTileSourceSelectBase);

        mStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsVectorTileSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorTileSourceSelectBase)
    {
        srcGroupBox->setTitle(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Source Type", nullptr));
        mRadioSourceFile->setText(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "F&ile", nullptr));
        mRadioSourceService->setText(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Service", nullptr));
        fileGroupBox->setTitle(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Source", nullptr));
        label->setText(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Vector tile dataset", nullptr));
        mConnectionsGroupBox->setTitle(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Connections", nullptr));
#if QT_CONFIG(tooltip)
        btnLoad->setToolTip(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Load connections from file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLoad->setText(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Load", nullptr));
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Edit selected service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Remove connection to selected service", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        btnNew->setToolTip(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Create a new service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNew->setText(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "&New", nullptr));
#if QT_CONFIG(tooltip)
        btnSave->setToolTip(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSave->setText(QCoreApplication::translate("QgsVectorTileSourceSelectBase", "Save", nullptr));
        (void)QgsVectorTileSourceSelectBase;
    } // retranslateUi

};

namespace Ui {
    class QgsVectorTileSourceSelectBase: public Ui_QgsVectorTileSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORTILESOURCESELECTBASE_H
