/********************************************************************************
** Form generated from reading UI file 'qgsbrowseritemmetadatawidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBROWSERITEMMETADATAWIDGETBASE_H
#define UI_QGSBROWSERITEMMETADATAWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsBrowserItemMetadataWidgetBase
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *mTextBrowser;

    void setupUi(QWidget *QgsBrowserItemMetadataWidgetBase)
    {
        if (QgsBrowserItemMetadataWidgetBase->objectName().isEmpty())
            QgsBrowserItemMetadataWidgetBase->setObjectName(QString::fromUtf8("QgsBrowserItemMetadataWidgetBase"));
        QgsBrowserItemMetadataWidgetBase->resize(302, 378);
        gridLayout = new QGridLayout(QgsBrowserItemMetadataWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mTextBrowser = new QTextBrowser(QgsBrowserItemMetadataWidgetBase);
        mTextBrowser->setObjectName(QString::fromUtf8("mTextBrowser"));

        gridLayout->addWidget(mTextBrowser, 0, 0, 1, 1);


        retranslateUi(QgsBrowserItemMetadataWidgetBase);

        QMetaObject::connectSlotsByName(QgsBrowserItemMetadataWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsBrowserItemMetadataWidgetBase)
    {
        QgsBrowserItemMetadataWidgetBase->setWindowTitle(QCoreApplication::translate("QgsBrowserItemMetadataWidgetBase", "Field Domain Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsBrowserItemMetadataWidgetBase: public Ui_QgsBrowserItemMetadataWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBROWSERITEMMETADATAWIDGETBASE_H
