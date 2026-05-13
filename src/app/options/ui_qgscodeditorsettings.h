/********************************************************************************
** Form generated from reading UI file 'qgscodeditorsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCODEDITORSETTINGS_H
#define UI_QGSCODEDITORSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorcss.h"
#include "qgscodeeditorexpression.h"
#include "qgscodeeditorhtml.h"
#include "qgscodeeditorjs.h"
#include "qgscodeeditorpython.h"
#include "qgscodeeditorr.h"
#include "qgscodeeditorsql.h"
#include "qgscolorbutton.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCodeEditorSettingsBase
{
public:
    QVBoxLayout *verticalLayout_6;
    QSplitter *mSplitter;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *mListLanguage;
    QStackedWidget *mPreviewStackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_3;
    QgsCodeEditorPython *mPythonPreview;
    QWidget *page_3;
    QVBoxLayout *verticalLayout;
    QgsCodeEditorExpression *mExpressionPreview;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QgsCodeEditorSQL *mSQLPreview;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_3;
    QgsCodeEditorHTML *mHtmlPreview;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_4;
    QgsCodeEditorCSS *mCssPreview;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_5;
    QgsCodeEditorJavascript *mJsPreview;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_7;
    QgsCodeEditorR *mRPreview;
    QWidget *pageBash;
    QWidget *pageBatch;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *mOverrideFontGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QFontComboBox *mFontComboBox;
    QLabel *label_3;
    QgsSpinBox *mSizeSpin;
    QGroupBox *groupBoxFontColor;
    QGridLayout *gridLayout_8;
    QgsColorButton *mColorMarginForeground;
    QLabel *label_19;
    QgsColorButton *mColorBraceForeground;
    QgsColorButton *mColorBraceBackground;
    QgsColorButton *mColorError;
    QgsColorButton *mColorQuotedOperator;
    QgsColorButton *mColorSelectionBackground;
    QgsColorButton *mColorFunction;
    QLabel *label_18;
    QgsColorButton *mColorComment;
    QgsColorButton *mColorQuotedIdentifier;
    QLabel *label_50;
    QgsColorButton *mColorCursor;
    QLabel *label_20;
    QgsColorButton *mColorSelectionForeground;
    QgsColorButton *mColorIdentifier;
    QLabel *label_25;
    QgsColorButton *mColorSingleQuote;
    QLabel *label_16;
    QgsColorButton *mColorTag;
    QgsColorButton *mColorBackground;
    QLabel *label_43;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_73;
    QgsColorButton *mColorNumber;
    QgsColorButton *mColorDecorator;
    QgsColorButton *mColorOperator;
    QgsColorButton *mColorFoldIconHalo;
    QgsColorButton *mColorFoldIcon;
    QgsColorButton *mColorKeyword;
    QLabel *label_32;
    QComboBox *mColorSchemeComboBox;
    QLabel *label_2;
    QLabel *label_26;
    QLabel *label_51;
    QLabel *label_30;
    QgsColorButton *mColorUnknownTag;
    QLabel *label_28;
    QLabel *label_14;
    QgsColorButton *mColorClass;
    QLabel *label_13;
    QgsColorButton *mColorTripleDoubleQuote;
    QLabel *label_15;
    QgsColorButton *mColorTripleSingleQuote;
    QLabel *label_27;
    QLabel *label_33;
    QLabel *label_52;
    QLabel *label_42;
    QLabel *label_29;
    QgsColorButton *mColorCommentBlock;
    QgsColorButton *mColorDoubleQuote;
    QLabel *label_17;
    QLabel *label_24;
    QgsColorButton *mColorDefault;
    QLabel *label_31;
    QgsColorButton *mColorMarginBackground;
    QLabel *label_60;
    QLabel *label_55;
    QLabel *label_23;
    QLabel *label_22;
    QgsColorButton *mColorCaretLine;
    QLabel *label_39;
    QgsColorButton *mColorFold;
    QLabel *label_40;
    QgsColorButton *mColorEdge;
    QLabel *label_38;
    QgsColorButton *mColorIndentation;
    QLabel *label_21;
    QgsColorButton *mColorCommentLine;
    QLabel *label_34;
    QgsColorButton *mColorErrorBackground;
    QgsColorButton *mColorSearchResult;
    QLabel *label_35;

    void setupUi(QWidget *QgsCodeEditorSettingsBase)
    {
        if (QgsCodeEditorSettingsBase->objectName().isEmpty())
            QgsCodeEditorSettingsBase->setObjectName(QString::fromUtf8("QgsCodeEditorSettingsBase"));
        QgsCodeEditorSettingsBase->setProperty("modal", QVariant(false));
        QgsCodeEditorSettingsBase->resize(677, 827);
        verticalLayout_6 = new QVBoxLayout(QgsCodeEditorSettingsBase);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mSplitter = new QSplitter(QgsCodeEditorSettingsBase);
        mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
        mSplitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(mSplitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mListLanguage = new QListWidget(groupBox);
        mListLanguage->setObjectName(QString::fromUtf8("mListLanguage"));

        horizontalLayout->addWidget(mListLanguage);

        mPreviewStackedWidget = new QStackedWidget(groupBox);
        mPreviewStackedWidget->setObjectName(QString::fromUtf8("mPreviewStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_3 = new QHBoxLayout(page);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mPythonPreview = new QgsCodeEditorPython(page);
        mPythonPreview->setObjectName(QString::fromUtf8("mPythonPreview"));
        mPythonPreview->setMinimumSize(QSize(0, 100));

        horizontalLayout_3->addWidget(mPythonPreview);

        mPreviewStackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout = new QVBoxLayout(page_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mExpressionPreview = new QgsCodeEditorExpression(page_3);
        mExpressionPreview->setObjectName(QString::fromUtf8("mExpressionPreview"));
        mExpressionPreview->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(mExpressionPreview);

        mPreviewStackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSQLPreview = new QgsCodeEditorSQL(page_2);
        mSQLPreview->setObjectName(QString::fromUtf8("mSQLPreview"));
        mSQLPreview->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(mSQLPreview);

        mPreviewStackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_3 = new QVBoxLayout(page_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mHtmlPreview = new QgsCodeEditorHTML(page_4);
        mHtmlPreview->setObjectName(QString::fromUtf8("mHtmlPreview"));
        mHtmlPreview->setMinimumSize(QSize(0, 100));

        verticalLayout_3->addWidget(mHtmlPreview);

        mPreviewStackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_4 = new QVBoxLayout(page_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mCssPreview = new QgsCodeEditorCSS(page_5);
        mCssPreview->setObjectName(QString::fromUtf8("mCssPreview"));
        mCssPreview->setMinimumSize(QSize(0, 100));

        verticalLayout_4->addWidget(mCssPreview);

        mPreviewStackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_5 = new QVBoxLayout(page_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mJsPreview = new QgsCodeEditorJavascript(page_6);
        mJsPreview->setObjectName(QString::fromUtf8("mJsPreview"));
        mJsPreview->setMinimumSize(QSize(0, 100));

        verticalLayout_5->addWidget(mJsPreview);

        mPreviewStackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_7 = new QVBoxLayout(page_7);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        mRPreview = new QgsCodeEditorR(page_7);
        mRPreview->setObjectName(QString::fromUtf8("mRPreview"));
        mRPreview->setMinimumSize(QSize(0, 100));

        verticalLayout_7->addWidget(mRPreview);

        mPreviewStackedWidget->addWidget(page_7);
        pageBash = new QWidget();
        pageBash->setObjectName(QString::fromUtf8("pageBash"));
        mPreviewStackedWidget->addWidget(pageBash);
        pageBatch = new QWidget();
        pageBatch->setObjectName(QString::fromUtf8("pageBatch"));
        mPreviewStackedWidget->addWidget(pageBatch);

        horizontalLayout->addWidget(mPreviewStackedWidget);

        horizontalLayout->setStretch(1, 1);
        mSplitter->addWidget(groupBox);
        scrollArea = new QgsScrollArea(mSplitter);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 677, 531));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mOverrideFontGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mOverrideFontGroupBox->setObjectName(QString::fromUtf8("mOverrideFontGroupBox"));
        mOverrideFontGroupBox->setCheckable(true);
        horizontalLayout_2 = new QHBoxLayout(mOverrideFontGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(mOverrideFontGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        mFontComboBox = new QFontComboBox(mOverrideFontGroupBox);
        mFontComboBox->setObjectName(QString::fromUtf8("mFontComboBox"));
        mFontComboBox->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(mFontComboBox);

        label_3 = new QLabel(mOverrideFontGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        mSizeSpin = new QgsSpinBox(mOverrideFontGroupBox);
        mSizeSpin->setObjectName(QString::fromUtf8("mSizeSpin"));
        mSizeSpin->setMinimum(6);
        mSizeSpin->setMaximum(99);
        mSizeSpin->setValue(10);

        horizontalLayout_2->addWidget(mSizeSpin);

        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(3, 1);

        gridLayout->addWidget(mOverrideFontGroupBox, 0, 0, 1, 1);

        groupBoxFontColor = new QGroupBox(scrollAreaWidgetContents);
        groupBoxFontColor->setObjectName(QString::fromUtf8("groupBoxFontColor"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxFontColor->sizePolicy().hasHeightForWidth());
        groupBoxFontColor->setSizePolicy(sizePolicy);
        groupBoxFontColor->setProperty("collapsed", QVariant(false));
        groupBoxFontColor->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_8 = new QGridLayout(groupBoxFontColor);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        mColorMarginForeground = new QgsColorButton(groupBoxFontColor);
        mColorMarginForeground->setObjectName(QString::fromUtf8("mColorMarginForeground"));

        gridLayout_8->addWidget(mColorMarginForeground, 9, 3, 1, 1);

        label_19 = new QLabel(groupBoxFontColor);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_8->addWidget(label_19, 6, 0, 1, 1);

        mColorBraceForeground = new QgsColorButton(groupBoxFontColor);
        mColorBraceForeground->setObjectName(QString::fromUtf8("mColorBraceForeground"));

        gridLayout_8->addWidget(mColorBraceForeground, 11, 3, 1, 1);

        mColorBraceBackground = new QgsColorButton(groupBoxFontColor);
        mColorBraceBackground->setObjectName(QString::fromUtf8("mColorBraceBackground"));

        gridLayout_8->addWidget(mColorBraceBackground, 11, 1, 1, 1);

        mColorError = new QgsColorButton(groupBoxFontColor);
        mColorError->setObjectName(QString::fromUtf8("mColorError"));

        gridLayout_8->addWidget(mColorError, 5, 5, 1, 1);

        mColorQuotedOperator = new QgsColorButton(groupBoxFontColor);
        mColorQuotedOperator->setObjectName(QString::fromUtf8("mColorQuotedOperator"));

        gridLayout_8->addWidget(mColorQuotedOperator, 3, 3, 1, 1);

        mColorSelectionBackground = new QgsColorButton(groupBoxFontColor);
        mColorSelectionBackground->setObjectName(QString::fromUtf8("mColorSelectionBackground"));

        gridLayout_8->addWidget(mColorSelectionBackground, 10, 1, 1, 1);

        mColorFunction = new QgsColorButton(groupBoxFontColor);
        mColorFunction->setObjectName(QString::fromUtf8("mColorFunction"));

        gridLayout_8->addWidget(mColorFunction, 2, 1, 1, 1);

        label_18 = new QLabel(groupBoxFontColor);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_8->addWidget(label_18, 4, 4, 1, 1);

        mColorComment = new QgsColorButton(groupBoxFontColor);
        mColorComment->setObjectName(QString::fromUtf8("mColorComment"));

        gridLayout_8->addWidget(mColorComment, 6, 1, 1, 1);

        mColorQuotedIdentifier = new QgsColorButton(groupBoxFontColor);
        mColorQuotedIdentifier->setObjectName(QString::fromUtf8("mColorQuotedIdentifier"));

        gridLayout_8->addWidget(mColorQuotedIdentifier, 4, 3, 1, 1);

        label_50 = new QLabel(groupBoxFontColor);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout_8->addWidget(label_50, 11, 0, 1, 1);

        mColorCursor = new QgsColorButton(groupBoxFontColor);
        mColorCursor->setObjectName(QString::fromUtf8("mColorCursor"));

        gridLayout_8->addWidget(mColorCursor, 1, 5, 1, 1);

        label_20 = new QLabel(groupBoxFontColor);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_8->addWidget(label_20, 6, 2, 1, 1);

        mColorSelectionForeground = new QgsColorButton(groupBoxFontColor);
        mColorSelectionForeground->setObjectName(QString::fromUtf8("mColorSelectionForeground"));

        gridLayout_8->addWidget(mColorSelectionForeground, 10, 3, 1, 1);

        mColorIdentifier = new QgsColorButton(groupBoxFontColor);
        mColorIdentifier->setObjectName(QString::fromUtf8("mColorIdentifier"));

        gridLayout_8->addWidget(mColorIdentifier, 4, 1, 1, 1);

        label_25 = new QLabel(groupBoxFontColor);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_8->addWidget(label_25, 3, 2, 1, 1);

        mColorSingleQuote = new QgsColorButton(groupBoxFontColor);
        mColorSingleQuote->setObjectName(QString::fromUtf8("mColorSingleQuote"));

        gridLayout_8->addWidget(mColorSingleQuote, 7, 1, 1, 1);

        label_16 = new QLabel(groupBoxFontColor);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_8->addWidget(label_16, 1, 0, 1, 1);

        mColorTag = new QgsColorButton(groupBoxFontColor);
        mColorTag->setObjectName(QString::fromUtf8("mColorTag"));

        gridLayout_8->addWidget(mColorTag, 5, 1, 1, 1);

        mColorBackground = new QgsColorButton(groupBoxFontColor);
        mColorBackground->setObjectName(QString::fromUtf8("mColorBackground"));

        gridLayout_8->addWidget(mColorBackground, 1, 3, 1, 1);

        label_43 = new QLabel(groupBoxFontColor);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_8->addWidget(label_43, 9, 2, 1, 1);

        label_48 = new QLabel(groupBoxFontColor);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_8->addWidget(label_48, 10, 0, 1, 1);

        label_49 = new QLabel(groupBoxFontColor);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_8->addWidget(label_49, 10, 2, 1, 1);

        label_73 = new QLabel(groupBoxFontColor);
        label_73->setObjectName(QString::fromUtf8("label_73"));

        gridLayout_8->addWidget(label_73, 5, 2, 1, 1);

        mColorNumber = new QgsColorButton(groupBoxFontColor);
        mColorNumber->setObjectName(QString::fromUtf8("mColorNumber"));

        gridLayout_8->addWidget(mColorNumber, 3, 5, 1, 1);

        mColorDecorator = new QgsColorButton(groupBoxFontColor);
        mColorDecorator->setObjectName(QString::fromUtf8("mColorDecorator"));

        gridLayout_8->addWidget(mColorDecorator, 4, 5, 1, 1);

        mColorOperator = new QgsColorButton(groupBoxFontColor);
        mColorOperator->setObjectName(QString::fromUtf8("mColorOperator"));

        gridLayout_8->addWidget(mColorOperator, 3, 1, 1, 1);

        mColorFoldIconHalo = new QgsColorButton(groupBoxFontColor);
        mColorFoldIconHalo->setObjectName(QString::fromUtf8("mColorFoldIconHalo"));

        gridLayout_8->addWidget(mColorFoldIconHalo, 12, 3, 1, 1);

        mColorFoldIcon = new QgsColorButton(groupBoxFontColor);
        mColorFoldIcon->setObjectName(QString::fromUtf8("mColorFoldIcon"));

        gridLayout_8->addWidget(mColorFoldIcon, 12, 1, 1, 1);

        mColorKeyword = new QgsColorButton(groupBoxFontColor);
        mColorKeyword->setObjectName(QString::fromUtf8("mColorKeyword"));

        gridLayout_8->addWidget(mColorKeyword, 2, 3, 1, 1);

        label_32 = new QLabel(groupBoxFontColor);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_8->addWidget(label_32, 4, 2, 1, 1);

        mColorSchemeComboBox = new QComboBox(groupBoxFontColor);
        mColorSchemeComboBox->setObjectName(QString::fromUtf8("mColorSchemeComboBox"));

        gridLayout_8->addWidget(mColorSchemeComboBox, 0, 1, 1, 5);

        label_2 = new QLabel(groupBoxFontColor);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_8->addWidget(label_2, 0, 0, 1, 1);

        label_26 = new QLabel(groupBoxFontColor);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_8->addWidget(label_26, 2, 4, 1, 1);

        label_51 = new QLabel(groupBoxFontColor);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout_8->addWidget(label_51, 12, 0, 1, 1);

        label_30 = new QLabel(groupBoxFontColor);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_8->addWidget(label_30, 8, 2, 1, 1);

        mColorUnknownTag = new QgsColorButton(groupBoxFontColor);
        mColorUnknownTag->setObjectName(QString::fromUtf8("mColorUnknownTag"));

        gridLayout_8->addWidget(mColorUnknownTag, 5, 3, 1, 1);

        label_28 = new QLabel(groupBoxFontColor);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_8->addWidget(label_28, 7, 0, 1, 1);

        label_14 = new QLabel(groupBoxFontColor);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_8->addWidget(label_14, 5, 4, 1, 1);

        mColorClass = new QgsColorButton(groupBoxFontColor);
        mColorClass->setObjectName(QString::fromUtf8("mColorClass"));

        gridLayout_8->addWidget(mColorClass, 2, 5, 1, 1);

        label_13 = new QLabel(groupBoxFontColor);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_8->addWidget(label_13, 2, 0, 1, 1);

        mColorTripleDoubleQuote = new QgsColorButton(groupBoxFontColor);
        mColorTripleDoubleQuote->setObjectName(QString::fromUtf8("mColorTripleDoubleQuote"));

        gridLayout_8->addWidget(mColorTripleDoubleQuote, 8, 3, 1, 1);

        label_15 = new QLabel(groupBoxFontColor);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_8->addWidget(label_15, 1, 2, 1, 1);

        mColorTripleSingleQuote = new QgsColorButton(groupBoxFontColor);
        mColorTripleSingleQuote->setObjectName(QString::fromUtf8("mColorTripleSingleQuote"));

        gridLayout_8->addWidget(mColorTripleSingleQuote, 8, 1, 1, 1);

        label_27 = new QLabel(groupBoxFontColor);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_8->addWidget(label_27, 4, 0, 1, 1);

        label_33 = new QLabel(groupBoxFontColor);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_8->addWidget(label_33, 5, 0, 1, 1);

        label_52 = new QLabel(groupBoxFontColor);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout_8->addWidget(label_52, 12, 2, 1, 1);

        label_42 = new QLabel(groupBoxFontColor);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_8->addWidget(label_42, 9, 0, 1, 1);

        label_29 = new QLabel(groupBoxFontColor);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_8->addWidget(label_29, 8, 0, 1, 1);

        mColorCommentBlock = new QgsColorButton(groupBoxFontColor);
        mColorCommentBlock->setObjectName(QString::fromUtf8("mColorCommentBlock"));

        gridLayout_8->addWidget(mColorCommentBlock, 6, 3, 1, 1);

        mColorDoubleQuote = new QgsColorButton(groupBoxFontColor);
        mColorDoubleQuote->setObjectName(QString::fromUtf8("mColorDoubleQuote"));

        gridLayout_8->addWidget(mColorDoubleQuote, 7, 3, 1, 1);

        label_17 = new QLabel(groupBoxFontColor);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_8->addWidget(label_17, 2, 2, 1, 1);

        label_24 = new QLabel(groupBoxFontColor);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_8->addWidget(label_24, 1, 4, 1, 1);

        mColorDefault = new QgsColorButton(groupBoxFontColor);
        mColorDefault->setObjectName(QString::fromUtf8("mColorDefault"));

        gridLayout_8->addWidget(mColorDefault, 1, 1, 1, 1);

        label_31 = new QLabel(groupBoxFontColor);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_8->addWidget(label_31, 7, 2, 1, 1);

        mColorMarginBackground = new QgsColorButton(groupBoxFontColor);
        mColorMarginBackground->setObjectName(QString::fromUtf8("mColorMarginBackground"));

        gridLayout_8->addWidget(mColorMarginBackground, 9, 1, 1, 1);

        label_60 = new QLabel(groupBoxFontColor);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        gridLayout_8->addWidget(label_60, 11, 2, 1, 1);

        label_55 = new QLabel(groupBoxFontColor);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        gridLayout_8->addWidget(label_55, 3, 4, 1, 1);

        label_23 = new QLabel(groupBoxFontColor);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_8->addWidget(label_23, 3, 0, 1, 1);

        label_22 = new QLabel(groupBoxFontColor);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_8->addWidget(label_22, 11, 4, 1, 1);

        mColorCaretLine = new QgsColorButton(groupBoxFontColor);
        mColorCaretLine->setObjectName(QString::fromUtf8("mColorCaretLine"));

        gridLayout_8->addWidget(mColorCaretLine, 11, 5, 1, 1);

        label_39 = new QLabel(groupBoxFontColor);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_8->addWidget(label_39, 10, 4, 1, 1);

        mColorFold = new QgsColorButton(groupBoxFontColor);
        mColorFold->setObjectName(QString::fromUtf8("mColorFold"));

        gridLayout_8->addWidget(mColorFold, 10, 5, 1, 1);

        label_40 = new QLabel(groupBoxFontColor);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_8->addWidget(label_40, 9, 4, 1, 1);

        mColorEdge = new QgsColorButton(groupBoxFontColor);
        mColorEdge->setObjectName(QString::fromUtf8("mColorEdge"));

        gridLayout_8->addWidget(mColorEdge, 9, 5, 1, 1);

        label_38 = new QLabel(groupBoxFontColor);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_8->addWidget(label_38, 8, 4, 1, 1);

        mColorIndentation = new QgsColorButton(groupBoxFontColor);
        mColorIndentation->setObjectName(QString::fromUtf8("mColorIndentation"));

        gridLayout_8->addWidget(mColorIndentation, 8, 5, 1, 1);

        label_21 = new QLabel(groupBoxFontColor);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_8->addWidget(label_21, 7, 4, 1, 1);

        mColorCommentLine = new QgsColorButton(groupBoxFontColor);
        mColorCommentLine->setObjectName(QString::fromUtf8("mColorCommentLine"));

        gridLayout_8->addWidget(mColorCommentLine, 7, 5, 1, 1);

        label_34 = new QLabel(groupBoxFontColor);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_8->addWidget(label_34, 6, 4, 1, 1);

        mColorErrorBackground = new QgsColorButton(groupBoxFontColor);
        mColorErrorBackground->setObjectName(QString::fromUtf8("mColorErrorBackground"));

        gridLayout_8->addWidget(mColorErrorBackground, 6, 5, 1, 1);

        mColorSearchResult = new QgsColorButton(groupBoxFontColor);
        mColorSearchResult->setObjectName(QString::fromUtf8("mColorSearchResult"));

        gridLayout_8->addWidget(mColorSearchResult, 12, 5, 1, 1);

        label_35 = new QLabel(groupBoxFontColor);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_8->addWidget(label_35, 12, 4, 1, 1);


        gridLayout->addWidget(groupBoxFontColor, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        mSplitter->addWidget(scrollArea);

        verticalLayout_6->addWidget(mSplitter);

        QWidget::setTabOrder(scrollArea, mOverrideFontGroupBox);
        QWidget::setTabOrder(mOverrideFontGroupBox, mFontComboBox);
        QWidget::setTabOrder(mFontComboBox, mSizeSpin);
        QWidget::setTabOrder(mSizeSpin, mColorSchemeComboBox);
        QWidget::setTabOrder(mColorSchemeComboBox, mColorDefault);
        QWidget::setTabOrder(mColorDefault, mColorBackground);
        QWidget::setTabOrder(mColorBackground, mColorCursor);
        QWidget::setTabOrder(mColorCursor, mColorFunction);
        QWidget::setTabOrder(mColorFunction, mColorKeyword);
        QWidget::setTabOrder(mColorKeyword, mColorClass);
        QWidget::setTabOrder(mColorClass, mColorOperator);
        QWidget::setTabOrder(mColorOperator, mColorQuotedOperator);
        QWidget::setTabOrder(mColorQuotedOperator, mColorNumber);
        QWidget::setTabOrder(mColorNumber, mColorIdentifier);
        QWidget::setTabOrder(mColorIdentifier, mColorQuotedIdentifier);
        QWidget::setTabOrder(mColorQuotedIdentifier, mColorDecorator);
        QWidget::setTabOrder(mColorDecorator, mColorTag);
        QWidget::setTabOrder(mColorTag, mColorUnknownTag);
        QWidget::setTabOrder(mColorUnknownTag, mColorError);
        QWidget::setTabOrder(mColorError, mColorComment);
        QWidget::setTabOrder(mColorComment, mColorCommentBlock);
        QWidget::setTabOrder(mColorCommentBlock, mColorErrorBackground);
        QWidget::setTabOrder(mColorErrorBackground, mColorSingleQuote);
        QWidget::setTabOrder(mColorSingleQuote, mColorDoubleQuote);
        QWidget::setTabOrder(mColorDoubleQuote, mColorCommentLine);
        QWidget::setTabOrder(mColorCommentLine, mColorTripleSingleQuote);
        QWidget::setTabOrder(mColorTripleSingleQuote, mColorTripleDoubleQuote);
        QWidget::setTabOrder(mColorTripleDoubleQuote, mColorIndentation);
        QWidget::setTabOrder(mColorIndentation, mColorMarginBackground);
        QWidget::setTabOrder(mColorMarginBackground, mColorMarginForeground);
        QWidget::setTabOrder(mColorMarginForeground, mColorEdge);
        QWidget::setTabOrder(mColorEdge, mColorSelectionBackground);
        QWidget::setTabOrder(mColorSelectionBackground, mColorSelectionForeground);
        QWidget::setTabOrder(mColorSelectionForeground, mColorFold);
        QWidget::setTabOrder(mColorFold, mColorBraceBackground);
        QWidget::setTabOrder(mColorBraceBackground, mColorBraceForeground);
        QWidget::setTabOrder(mColorBraceForeground, mColorCaretLine);
        QWidget::setTabOrder(mColorCaretLine, mColorFoldIcon);
        QWidget::setTabOrder(mColorFoldIcon, mColorFoldIconHalo);
        QWidget::setTabOrder(mColorFoldIconHalo, mListLanguage);

        retranslateUi(QgsCodeEditorSettingsBase);

        mPreviewStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsCodeEditorSettingsBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCodeEditorSettingsBase)
    {
        groupBox->setTitle(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Preview", nullptr));
        mOverrideFontGroupBox->setTitle(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Override Code Editor Font", nullptr));
        label->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Font", nullptr));
        label_3->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Size", nullptr));
        groupBoxFontColor->setTitle(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Colors", nullptr));
        mColorMarginForeground->setText(QString());
        label_19->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Comment", nullptr));
        mColorBraceForeground->setText(QString());
        mColorBraceBackground->setText(QString());
        mColorError->setText(QString());
        mColorQuotedOperator->setText(QString());
        mColorSelectionBackground->setText(QString());
        mColorFunction->setText(QString());
        label_18->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Decorator", nullptr));
        mColorComment->setText(QString());
        mColorQuotedIdentifier->setText(QString());
        label_50->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Brace background", nullptr));
        mColorCursor->setText(QString());
        label_20->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Comment block", nullptr));
        mColorSelectionForeground->setText(QString());
        mColorIdentifier->setText(QString());
        label_25->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Quoted operator", nullptr));
        mColorSingleQuote->setText(QString());
        label_16->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Default", nullptr));
        mColorTag->setText(QString());
        mColorBackground->setText(QString());
        label_43->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Margin foreground", nullptr));
        label_48->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Selection background", nullptr));
        label_49->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Selection foreground", nullptr));
        label_73->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Unknown tag", nullptr));
        mColorNumber->setText(QString());
        mColorDecorator->setText(QString());
        mColorOperator->setText(QString());
        mColorFoldIconHalo->setText(QString());
        mColorFoldIcon->setText(QString());
        mColorKeyword->setText(QString());
        label_32->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Quoted identifier", nullptr));
        label_2->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Color scheme", nullptr));
        label_26->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Class name", nullptr));
        label_51->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Fold icon", nullptr));
        label_30->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Triple double quote", nullptr));
        mColorUnknownTag->setText(QString());
        label_28->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Single quote", nullptr));
        label_14->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Error", nullptr));
        mColorClass->setText(QString());
        label_13->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Function", nullptr));
        mColorTripleDoubleQuote->setText(QString());
        label_15->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Background", nullptr));
        mColorTripleSingleQuote->setText(QString());
        label_27->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Identifier", nullptr));
        label_33->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Tag", nullptr));
        label_52->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Fold icon halo", nullptr));
        label_42->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Margin background", nullptr));
        label_29->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Triple single quote", nullptr));
        mColorCommentBlock->setText(QString());
        mColorDoubleQuote->setText(QString());
        label_17->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Keyword", nullptr));
        label_24->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Cursor", nullptr));
        mColorDefault->setText(QString());
        label_31->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Double quote", nullptr));
        mColorMarginBackground->setText(QString());
        label_60->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Brace foreground", nullptr));
        label_55->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Number", nullptr));
        label_23->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Operator", nullptr));
        label_22->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Caretline", nullptr));
        mColorCaretLine->setText(QString());
        label_39->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Fold guide", nullptr));
        mColorFold->setText(QString());
        label_40->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Edge guide", nullptr));
        mColorEdge->setText(QString());
        label_38->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Indentation guide", nullptr));
        mColorIndentation->setText(QString());
        label_21->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Comment line", nullptr));
        mColorCommentLine->setText(QString());
        label_34->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Error background", nullptr));
        mColorErrorBackground->setText(QString());
        mColorSearchResult->setText(QString());
        label_35->setText(QCoreApplication::translate("QgsCodeEditorSettingsBase", "Search result", nullptr));
        (void)QgsCodeEditorSettingsBase;
    } // retranslateUi

};

namespace Ui {
    class QgsCodeEditorSettingsBase: public Ui_QgsCodeEditorSettingsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCODEDITORSETTINGS_H
