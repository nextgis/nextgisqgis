/********************************************************************************
** Form generated from reading UI file 'qgsprocessinghelpeditorwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGHELPEDITORWIDGETBASE_H
#define UI_QGSPROCESSINGHELPEDITORWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsrichtexteditor.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingHelpEditorWidgetBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *mTextPreview;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *mElementTree;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabelDescription;
    QStackedWidget *mEditStackedWidget;
    QWidget *mPagePlainText;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *mTextEdit;
    QWidget *mPageRichEdit;
    QVBoxLayout *verticalLayout_5;
    QgsRichTextEditor *mRichTextEdit;

    void setupUi(QWidget *QgsProcessingHelpEditorWidgetBase)
    {
        if (QgsProcessingHelpEditorWidgetBase->objectName().isEmpty())
            QgsProcessingHelpEditorWidgetBase->setObjectName(QString::fromUtf8("QgsProcessingHelpEditorWidgetBase"));
        QgsProcessingHelpEditorWidgetBase->resize(600, 460);
        verticalLayout_3 = new QVBoxLayout(QgsProcessingHelpEditorWidgetBase);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mTextPreview = new QTextBrowser(QgsProcessingHelpEditorWidgetBase);
        mTextPreview->setObjectName(QString::fromUtf8("mTextPreview"));

        verticalLayout_3->addWidget(mTextPreview);

        splitter_2 = new QSplitter(QgsProcessingHelpEditorWidgetBase);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mElementTree = new QTreeWidget(layoutWidget1);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mElementTree->setHeaderItem(__qtreewidgetitem);
        mElementTree->setObjectName(QString::fromUtf8("mElementTree"));
        mElementTree->setMinimumSize(QSize(0, 200));
        mElementTree->setAlternatingRowColors(true);
        mElementTree->header()->setVisible(false);

        verticalLayout->addWidget(mElementTree);

        splitter->addWidget(layoutWidget1);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mLabelDescription = new QLabel(layoutWidget);
        mLabelDescription->setObjectName(QString::fromUtf8("mLabelDescription"));

        verticalLayout_2->addWidget(mLabelDescription);

        mEditStackedWidget = new QStackedWidget(layoutWidget);
        mEditStackedWidget->setObjectName(QString::fromUtf8("mEditStackedWidget"));
        mPagePlainText = new QWidget();
        mPagePlainText->setObjectName(QString::fromUtf8("mPagePlainText"));
        verticalLayout_4 = new QVBoxLayout(mPagePlainText);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mTextEdit = new QTextEdit(mPagePlainText);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setMinimumSize(QSize(0, 200));

        verticalLayout_4->addWidget(mTextEdit);

        mEditStackedWidget->addWidget(mPagePlainText);
        mPageRichEdit = new QWidget();
        mPageRichEdit->setObjectName(QString::fromUtf8("mPageRichEdit"));
        verticalLayout_5 = new QVBoxLayout(mPageRichEdit);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mRichTextEdit = new QgsRichTextEditor(mPageRichEdit);
        mRichTextEdit->setObjectName(QString::fromUtf8("mRichTextEdit"));

        verticalLayout_5->addWidget(mRichTextEdit);

        mEditStackedWidget->addWidget(mPageRichEdit);

        verticalLayout_2->addWidget(mEditStackedWidget);

        splitter->addWidget(layoutWidget);
        splitter_2->addWidget(splitter);

        verticalLayout_3->addWidget(splitter_2);


        retranslateUi(QgsProcessingHelpEditorWidgetBase);

        mEditStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsProcessingHelpEditorWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingHelpEditorWidgetBase)
    {
        QgsProcessingHelpEditorWidgetBase->setWindowTitle(QCoreApplication::translate("QgsProcessingHelpEditorWidgetBase", "Help Editor", nullptr));
        label->setText(QCoreApplication::translate("QgsProcessingHelpEditorWidgetBase", "Select element to edit", nullptr));
        mLabelDescription->setText(QCoreApplication::translate("QgsProcessingHelpEditorWidgetBase", "Element description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingHelpEditorWidgetBase: public Ui_QgsProcessingHelpEditorWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGHELPEDITORWIDGETBASE_H
