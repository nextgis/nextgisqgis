/********************************************************************************
** Form generated from reading UI file 'qgsfindfilesbypatternwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFINDFILESBYPATTERNWIDGET_H
#define UI_QGSFINDFILESBYPATTERNWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFindFilesByPatternWidgetBase
{
public:
    QGridLayout *gridLayout;
    QPushButton *mFindButton;
    QLabel *label_2;
    QLineEdit *mPatternLineEdit;
    QLabel *label;
    QCheckBox *mRecursiveCheckBox;
    QTableWidget *mResultsTable;
    QgsFileWidget *mFolderWidget;

    void setupUi(QWidget *QgsFindFilesByPatternWidgetBase)
    {
        if (QgsFindFilesByPatternWidgetBase->objectName().isEmpty())
            QgsFindFilesByPatternWidgetBase->setObjectName(QString::fromUtf8("QgsFindFilesByPatternWidgetBase"));
        QgsFindFilesByPatternWidgetBase->resize(542, 286);
        QgsFindFilesByPatternWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsFindFilesByPatternWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mFindButton = new QPushButton(QgsFindFilesByPatternWidgetBase);
        mFindButton->setObjectName(QString::fromUtf8("mFindButton"));

        gridLayout->addWidget(mFindButton, 2, 2, 1, 1);

        label_2 = new QLabel(QgsFindFilesByPatternWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mPatternLineEdit = new QLineEdit(QgsFindFilesByPatternWidgetBase);
        mPatternLineEdit->setObjectName(QString::fromUtf8("mPatternLineEdit"));

        gridLayout->addWidget(mPatternLineEdit, 0, 1, 1, 2);

        label = new QLabel(QgsFindFilesByPatternWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mRecursiveCheckBox = new QCheckBox(QgsFindFilesByPatternWidgetBase);
        mRecursiveCheckBox->setObjectName(QString::fromUtf8("mRecursiveCheckBox"));
        mRecursiveCheckBox->setChecked(true);

        gridLayout->addWidget(mRecursiveCheckBox, 2, 0, 1, 2);

        mResultsTable = new QTableWidget(QgsFindFilesByPatternWidgetBase);
        mResultsTable->setObjectName(QString::fromUtf8("mResultsTable"));

        gridLayout->addWidget(mResultsTable, 5, 0, 1, 3);

        mFolderWidget = new QgsFileWidget(QgsFindFilesByPatternWidgetBase);
        mFolderWidget->setObjectName(QString::fromUtf8("mFolderWidget"));

        gridLayout->addWidget(mFolderWidget, 1, 1, 1, 2);

        QWidget::setTabOrder(mPatternLineEdit, mFolderWidget);
        QWidget::setTabOrder(mFolderWidget, mRecursiveCheckBox);
        QWidget::setTabOrder(mRecursiveCheckBox, mFindButton);
        QWidget::setTabOrder(mFindButton, mResultsTable);

        retranslateUi(QgsFindFilesByPatternWidgetBase);

        QMetaObject::connectSlotsByName(QgsFindFilesByPatternWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsFindFilesByPatternWidgetBase)
    {
        mFindButton->setText(QCoreApplication::translate("QgsFindFilesByPatternWidgetBase", "Find Files", nullptr));
        label_2->setText(QCoreApplication::translate("QgsFindFilesByPatternWidgetBase", "File pattern", nullptr));
        mPatternLineEdit->setPlaceholderText(QCoreApplication::translate("QgsFindFilesByPatternWidgetBase", "Pattern to match, e.g. *.shp", nullptr));
        label->setText(QCoreApplication::translate("QgsFindFilesByPatternWidgetBase", "Look in", nullptr));
        mRecursiveCheckBox->setText(QCoreApplication::translate("QgsFindFilesByPatternWidgetBase", "Search recursively", nullptr));
        (void)QgsFindFilesByPatternWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsFindFilesByPatternWidgetBase: public Ui_QgsFindFilesByPatternWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFINDFILESBYPATTERNWIDGET_H
