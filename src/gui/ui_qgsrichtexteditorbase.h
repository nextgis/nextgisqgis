/********************************************************************************
** Form generated from reading UI file 'qgsrichtexteditorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRICHTEXTEDITORBASE_H
#define UI_QGSRICHTEXTEDITORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsimagedroptextedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRichTextEditorBase
{
public:
    QAction *mActionUndo;
    QAction *mActionRedo;
    QAction *mActionCut;
    QAction *mActionCopy;
    QAction *mActionPaste;
    QAction *mActionInsertLink;
    QAction *mActionBold;
    QAction *mActionItalic;
    QAction *mActionUnderline;
    QAction *mActionStrikeOut;
    QAction *mActionBulletList;
    QAction *mActionOrderedList;
    QAction *mActionDecreaseIndent;
    QAction *mActionIncreaseIndent;
    QAction *mActionInsertImage;
    QAction *mActionEditSource;
    QVBoxLayout *verticalLayout;
    QToolBar *mToolBar;
    QStackedWidget *mStackedWidget;
    QWidget *mPageRichEdit;
    QVBoxLayout *verticalLayout_2;
    QgsImageDropTextEdit *mTextEdit;
    QWidget *mPageSourceEdit;

    void setupUi(QWidget *QgsRichTextEditorBase)
    {
        if (QgsRichTextEditorBase->objectName().isEmpty())
            QgsRichTextEditorBase->setObjectName(QString::fromUtf8("QgsRichTextEditorBase"));
        QgsRichTextEditorBase->resize(846, 705);
        QgsRichTextEditorBase->setWindowTitle(QString::fromUtf8(""));
        mActionUndo = new QAction(QgsRichTextEditorBase);
        mActionUndo->setObjectName(QString::fromUtf8("mActionUndo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionUndo->setIcon(icon);
        mActionRedo = new QAction(QgsRichTextEditorBase);
        mActionRedo->setObjectName(QString::fromUtf8("mActionRedo"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionRedo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRedo->setIcon(icon1);
        mActionCut = new QAction(QgsRichTextEditorBase);
        mActionCut->setObjectName(QString::fromUtf8("mActionCut"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCut->setIcon(icon2);
        mActionCopy = new QAction(QgsRichTextEditorBase);
        mActionCopy->setObjectName(QString::fromUtf8("mActionCopy"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCopy->setIcon(icon3);
        mActionPaste = new QAction(QgsRichTextEditorBase);
        mActionPaste->setObjectName(QString::fromUtf8("mActionPaste"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionEditPaste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPaste->setIcon(icon4);
        mActionInsertLink = new QAction(QgsRichTextEditorBase);
        mActionInsertLink->setObjectName(QString::fromUtf8("mActionInsertLink"));
        mActionInsertLink->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionEditInsertLink.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionInsertLink->setIcon(icon5);
        mActionBold = new QAction(QgsRichTextEditorBase);
        mActionBold->setObjectName(QString::fromUtf8("mActionBold"));
        mActionBold->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionEditBold.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionBold->setIcon(icon6);
        mActionItalic = new QAction(QgsRichTextEditorBase);
        mActionItalic->setObjectName(QString::fromUtf8("mActionItalic"));
        mActionItalic->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionEditItalic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionItalic->setIcon(icon7);
        mActionUnderline = new QAction(QgsRichTextEditorBase);
        mActionUnderline->setObjectName(QString::fromUtf8("mActionUnderline"));
        mActionUnderline->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionEditUnderline.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionUnderline->setIcon(icon8);
        mActionStrikeOut = new QAction(QgsRichTextEditorBase);
        mActionStrikeOut->setObjectName(QString::fromUtf8("mActionStrikeOut"));
        mActionStrikeOut->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionStrikeOut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionStrikeOut->setIcon(icon9);
        mActionBulletList = new QAction(QgsRichTextEditorBase);
        mActionBulletList->setObjectName(QString::fromUtf8("mActionBulletList"));
        mActionBulletList->setCheckable(true);
        mActionOrderedList = new QAction(QgsRichTextEditorBase);
        mActionOrderedList->setObjectName(QString::fromUtf8("mActionOrderedList"));
        mActionOrderedList->setCheckable(true);
        mActionDecreaseIndent = new QAction(QgsRichTextEditorBase);
        mActionDecreaseIndent->setObjectName(QString::fromUtf8("mActionDecreaseIndent"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionEditIndentLess.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecreaseIndent->setIcon(icon10);
        mActionIncreaseIndent = new QAction(QgsRichTextEditorBase);
        mActionIncreaseIndent->setObjectName(QString::fromUtf8("mActionIncreaseIndent"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mActionEditIndentMore.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionIncreaseIndent->setIcon(icon11);
        mActionInsertImage = new QAction(QgsRichTextEditorBase);
        mActionInsertImage->setObjectName(QString::fromUtf8("mActionInsertImage"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mActionEditInsertImage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionInsertImage->setIcon(icon12);
        mActionEditSource = new QAction(QgsRichTextEditorBase);
        mActionEditSource->setObjectName(QString::fromUtf8("mActionEditSource"));
        mActionEditSource->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/mActionEditHtml.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEditSource->setIcon(icon13);
        verticalLayout = new QVBoxLayout(QgsRichTextEditorBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mToolBar = new QToolBar(QgsRichTextEditorBase);
        mToolBar->setObjectName(QString::fromUtf8("mToolBar"));

        verticalLayout->addWidget(mToolBar);

        mStackedWidget = new QStackedWidget(QgsRichTextEditorBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        mPageRichEdit = new QWidget();
        mPageRichEdit->setObjectName(QString::fromUtf8("mPageRichEdit"));
        verticalLayout_2 = new QVBoxLayout(mPageRichEdit);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mTextEdit = new QgsImageDropTextEdit(mPageRichEdit);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setAutoFormatting(QTextEdit::AutoNone);
        mTextEdit->setTabChangesFocus(true);

        verticalLayout_2->addWidget(mTextEdit);

        mStackedWidget->addWidget(mPageRichEdit);
        mPageSourceEdit = new QWidget();
        mPageSourceEdit->setObjectName(QString::fromUtf8("mPageSourceEdit"));
        mStackedWidget->addWidget(mPageSourceEdit);

        verticalLayout->addWidget(mStackedWidget);


        retranslateUi(QgsRichTextEditorBase);

        QMetaObject::connectSlotsByName(QgsRichTextEditorBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRichTextEditorBase)
    {
        mActionUndo->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        mActionUndo->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRedo->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        mActionRedo->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionCut->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        mActionCut->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Cut", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionCopy->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        mActionCopy->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionPaste->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        mActionPaste->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionInsertLink->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Insert Link", nullptr));
#if QT_CONFIG(tooltip)
        mActionInsertLink->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Insert link", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionBold->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Bold", nullptr));
        mActionItalic->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Italic", nullptr));
#if QT_CONFIG(tooltip)
        mActionItalic->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Italic", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionUnderline->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Underline", nullptr));
#if QT_CONFIG(tooltip)
        mActionUnderline->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Underline", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionStrikeOut->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Strike Out", nullptr));
#if QT_CONFIG(tooltip)
        mActionStrikeOut->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Strike Out", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionBulletList->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Bullet List", nullptr));
#if QT_CONFIG(tooltip)
        mActionBulletList->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Create a bullet list", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionOrderedList->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Ordered List", nullptr));
#if QT_CONFIG(tooltip)
        mActionOrderedList->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Create an ordered list", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionDecreaseIndent->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Decrease Indentation", nullptr));
#if QT_CONFIG(tooltip)
        mActionDecreaseIndent->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Decrease indentation", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionIncreaseIndent->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Increase Indentation", nullptr));
#if QT_CONFIG(tooltip)
        mActionIncreaseIndent->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Increase indentation", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionInsertImage->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Insert Image", nullptr));
#if QT_CONFIG(tooltip)
        mActionInsertImage->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Insert image", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionEditSource->setText(QCoreApplication::translate("QgsRichTextEditorBase", "Edit HTML Source", nullptr));
#if QT_CONFIG(tooltip)
        mActionEditSource->setToolTip(QCoreApplication::translate("QgsRichTextEditorBase", "Edit HTML Source", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsRichTextEditorBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRichTextEditorBase: public Ui_QgsRichTextEditorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRICHTEXTEDITORBASE_H
