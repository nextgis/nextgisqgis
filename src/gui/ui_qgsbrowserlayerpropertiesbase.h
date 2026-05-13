/********************************************************************************
** Form generated from reading UI file 'qgsbrowserlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBROWSERLAYERPROPERTIESBASE_H
#define UI_QGSBROWSERLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsattributetableview.h"
#include "qgsmapcanvas.h"

QT_BEGIN_NAMESPACE

class Ui_QgsBrowserLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *mMetadataTextBrowser;
    QWidget *mPreviewTab;
    QHBoxLayout *horizontalLayout;
    QgsMapCanvas *mMapCanvas;
    QWidget *mAttributesTab;
    QHBoxLayout *horizontalLayout_2;
    QgsAttributeTableView *mAttributeTable;
    QLabel *mNoticeLabel;

    void setupUi(QWidget *QgsBrowserLayerPropertiesBase)
    {
        if (QgsBrowserLayerPropertiesBase->objectName().isEmpty())
            QgsBrowserLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsBrowserLayerPropertiesBase"));
        QgsBrowserLayerPropertiesBase->resize(800, 703);
        verticalLayout = new QVBoxLayout(QgsBrowserLayerPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mTabWidget = new QTabWidget(QgsBrowserLayerPropertiesBase);
        mTabWidget->setObjectName(QString::fromUtf8("mTabWidget"));
        mTabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mMetadataTextBrowser = new QTextBrowser(tab);
        mMetadataTextBrowser->setObjectName(QString::fromUtf8("mMetadataTextBrowser"));

        verticalLayout_2->addWidget(mMetadataTextBrowser);

        mTabWidget->addTab(tab, QString());
        mPreviewTab = new QWidget();
        mPreviewTab->setObjectName(QString::fromUtf8("mPreviewTab"));
        horizontalLayout = new QHBoxLayout(mPreviewTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mMapCanvas = new QgsMapCanvas(mPreviewTab);
        mMapCanvas->setObjectName(QString::fromUtf8("mMapCanvas"));

        horizontalLayout->addWidget(mMapCanvas);

        mTabWidget->addTab(mPreviewTab, QString());
        mAttributesTab = new QWidget();
        mAttributesTab->setObjectName(QString::fromUtf8("mAttributesTab"));
        horizontalLayout_2 = new QHBoxLayout(mAttributesTab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mAttributeTable = new QgsAttributeTableView(mAttributesTab);
        mAttributeTable->setObjectName(QString::fromUtf8("mAttributeTable"));

        horizontalLayout_2->addWidget(mAttributeTable);

        mTabWidget->addTab(mAttributesTab, QString());

        verticalLayout->addWidget(mTabWidget);

        mNoticeLabel = new QLabel(QgsBrowserLayerPropertiesBase);
        mNoticeLabel->setObjectName(QString::fromUtf8("mNoticeLabel"));
        mNoticeLabel->setEnabled(true);

        verticalLayout->addWidget(mNoticeLabel);


        retranslateUi(QgsBrowserLayerPropertiesBase);

        mTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsBrowserLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QWidget *QgsBrowserLayerPropertiesBase)
    {
        mTabWidget->setTabText(mTabWidget->indexOf(tab), QCoreApplication::translate("QgsBrowserLayerPropertiesBase", "Metadata", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(mPreviewTab), QCoreApplication::translate("QgsBrowserLayerPropertiesBase", "Preview", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(mAttributesTab), QCoreApplication::translate("QgsBrowserLayerPropertiesBase", "Attributes", nullptr));
        mNoticeLabel->setText(QCoreApplication::translate("QgsBrowserLayerPropertiesBase", "notice", nullptr));
        (void)QgsBrowserLayerPropertiesBase;
    } // retranslateUi

};

namespace Ui {
    class QgsBrowserLayerPropertiesBase: public Ui_QgsBrowserLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBROWSERLAYERPROPERTIESBASE_H
