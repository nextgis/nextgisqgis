/********************************************************************************
** Form generated from reading UI file 'qgsdocumentationpanelbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDOCUMENTATIONPANELBASE_H
#define UI_QGSDOCUMENTATIONPANELBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDocumentationPanelBase
{
public:
    QAction *mActionPyQgis;
    QAction *mActionQt;
    QAction *mActionOpenInBrowser;
    QVBoxLayout *verticalLayout;
    QToolBar *mToolbar;
    QFrame *mWebViewContainer;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QgsPanelWidget *QgsDocumentationPanelBase)
    {
        if (QgsDocumentationPanelBase->objectName().isEmpty())
            QgsDocumentationPanelBase->setObjectName(QString::fromUtf8("QgsDocumentationPanelBase"));
        QgsDocumentationPanelBase->resize(428, 538);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionHelpContents.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QgsDocumentationPanelBase->setWindowIcon(icon);
        mActionPyQgis = new QAction(QgsDocumentationPanelBase);
        mActionPyQgis->setObjectName(QString::fromUtf8("mActionPyQgis"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/qgis_icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPyQgis->setIcon(icon1);
        mActionPyQgis->setMenuRole(QAction::NoRole);
        mActionQt = new QAction(QgsDocumentationPanelBase);
        mActionQt->setObjectName(QString::fromUtf8("mActionQt"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mIconQt.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionQt->setIcon(icon2);
        mActionQt->setMenuRole(QAction::NoRole);
        mActionOpenInBrowser = new QAction(QgsDocumentationPanelBase);
        mActionOpenInBrowser->setObjectName(QString::fromUtf8("mActionOpenInBrowser"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mIconWms.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpenInBrowser->setIcon(icon3);
        mActionOpenInBrowser->setMenuRole(QAction::NoRole);
        verticalLayout = new QVBoxLayout(QgsDocumentationPanelBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mToolbar = new QToolBar(QgsDocumentationPanelBase);
        mToolbar->setObjectName(QString::fromUtf8("mToolbar"));
        mToolbar->setIconSize(QSize(24, 24));
        mToolbar->setFloatable(false);

        verticalLayout->addWidget(mToolbar);

        mWebViewContainer = new QFrame(QgsDocumentationPanelBase);
        mWebViewContainer->setObjectName(QString::fromUtf8("mWebViewContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mWebViewContainer->sizePolicy().hasHeightForWidth());
        mWebViewContainer->setSizePolicy(sizePolicy);
        mWebViewContainer->setFrameShape(QFrame::StyledPanel);
        verticalLayout_2 = new QVBoxLayout(mWebViewContainer);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(mWebViewContainer);


        mToolbar->addAction(mActionPyQgis);
        mToolbar->addAction(mActionQt);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionOpenInBrowser);

        retranslateUi(QgsDocumentationPanelBase);

        QMetaObject::connectSlotsByName(QgsDocumentationPanelBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsDocumentationPanelBase)
    {
        QgsDocumentationPanelBase->setWindowTitle(QCoreApplication::translate("QgsDocumentationPanelBase", "API Documentation", nullptr));
        mActionPyQgis->setText(QCoreApplication::translate("QgsDocumentationPanelBase", "PyQGIS API Documentation", nullptr));
#if QT_CONFIG(tooltip)
        mActionPyQgis->setToolTip(QCoreApplication::translate("QgsDocumentationPanelBase", "PyQGIS API Documentation", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionQt->setText(QCoreApplication::translate("QgsDocumentationPanelBase", "Qt API Documentation", nullptr));
        mActionOpenInBrowser->setText(QCoreApplication::translate("QgsDocumentationPanelBase", "Open in Web Browser", nullptr));
#if QT_CONFIG(tooltip)
        mActionOpenInBrowser->setToolTip(QCoreApplication::translate("QgsDocumentationPanelBase", "Open in Web Browser", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsDocumentationPanelBase: public Ui_QgsDocumentationPanelBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDOCUMENTATIONPANELBASE_H
