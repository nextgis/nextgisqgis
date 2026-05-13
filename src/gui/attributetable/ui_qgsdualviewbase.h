/********************************************************************************
** Form generated from reading UI file 'qgsdualviewbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDUALVIEWBASE_H
#define UI_QGSDUALVIEWBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsattributetableview.h"
#include "qgsfeaturelistview.h"
#include "qgspanelwidgetstack.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDualViewBase
{
public:
    QWidget *mPageTableView;
    QGridLayout *gridLayout_3;
    QSplitter *mConditionalSplitter;
    QgsAttributeTableView *mTableView;
    QgsPanelWidgetStack *mConditionalFormatWidgetStack;
    QWidget *mPageAttributeEditor;
    QAction *mActionExpressionPreview;
    QAction *mActionPreviewColumnsMenu;
    QGridLayout *gridLayout_2;
    QSplitter *mAttributeEditorViewSplitter;
    QWidget *listViewWdg;
    QVBoxLayout *verticalLayout_2;
    QToolButton *mFeatureListPreviewButton;
    QgsFeatureListView *mFeatureListView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *mFirstFeatureButton;
    QToolButton *mPreviousFeatureButton;
    QToolButton *mNextFeatureButton;
    QToolButton *mLastFeatureButton;
    QLabel *mProgressCount;
    QSpacerItem *horizontalSpacer;
    QToolButton *mFlashButton;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mAutoPanButton;
    QToolButton *mAutoZoomButton;
    QFrame *mAttributeEditor;
    QGridLayout *gridLayout;

    void setupUi(QStackedWidget *QgsDualViewBase)
    {
        if (QgsDualViewBase->objectName().isEmpty())
            QgsDualViewBase->setObjectName(QString::fromUtf8("QgsDualViewBase"));
        QgsDualViewBase->resize(495, 507);
        mPageTableView = new QWidget();
        mPageTableView->setObjectName(QString::fromUtf8("mPageTableView"));
        gridLayout_3 = new QGridLayout(mPageTableView);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mConditionalSplitter = new QSplitter(mPageTableView);
        mConditionalSplitter->setObjectName(QString::fromUtf8("mConditionalSplitter"));
        mConditionalSplitter->setOrientation(Qt::Horizontal);
        mConditionalSplitter->setChildrenCollapsible(false);
        mTableView = new QgsAttributeTableView(mConditionalSplitter);
        mTableView->setObjectName(QString::fromUtf8("mTableView"));
        mTableView->setAlternatingRowColors(true);
        mConditionalSplitter->addWidget(mTableView);
        mConditionalFormatWidgetStack = new QgsPanelWidgetStack(mConditionalSplitter);
        mConditionalFormatWidgetStack->setObjectName(QString::fromUtf8("mConditionalFormatWidgetStack"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mConditionalFormatWidgetStack->sizePolicy().hasHeightForWidth());
        mConditionalFormatWidgetStack->setSizePolicy(sizePolicy);
        mConditionalSplitter->addWidget(mConditionalFormatWidgetStack);

        gridLayout_3->addWidget(mConditionalSplitter, 0, 0, 1, 1);

        QgsDualViewBase->addWidget(mPageTableView);
        mPageAttributeEditor = new QWidget();
        mPageAttributeEditor->setObjectName(QString::fromUtf8("mPageAttributeEditor"));
        mActionExpressionPreview = new QAction(mPageAttributeEditor);
        mActionExpressionPreview->setObjectName(QString::fromUtf8("mActionExpressionPreview"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExpressionPreview->setIcon(icon);
        mActionPreviewColumnsMenu = new QAction(mPageAttributeEditor);
        mActionPreviewColumnsMenu->setObjectName(QString::fromUtf8("mActionPreviewColumnsMenu"));
        gridLayout_2 = new QGridLayout(mPageAttributeEditor);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mAttributeEditorViewSplitter = new QSplitter(mPageAttributeEditor);
        mAttributeEditorViewSplitter->setObjectName(QString::fromUtf8("mAttributeEditorViewSplitter"));
        mAttributeEditorViewSplitter->setOrientation(Qt::Horizontal);
        listViewWdg = new QWidget(mAttributeEditorViewSplitter);
        listViewWdg->setObjectName(QString::fromUtf8("listViewWdg"));
        verticalLayout_2 = new QVBoxLayout(listViewWdg);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mFeatureListPreviewButton = new QToolButton(listViewWdg);
        mFeatureListPreviewButton->setObjectName(QString::fromUtf8("mFeatureListPreviewButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFeatureListPreviewButton->sizePolicy().hasHeightForWidth());
        mFeatureListPreviewButton->setSizePolicy(sizePolicy1);
        mFeatureListPreviewButton->setPopupMode(QToolButton::InstantPopup);
        mFeatureListPreviewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mFeatureListPreviewButton->setAutoRaise(true);
        mFeatureListPreviewButton->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(mFeatureListPreviewButton);

        mFeatureListView = new QgsFeatureListView(listViewWdg);
        mFeatureListView->setObjectName(QString::fromUtf8("mFeatureListView"));
        sizePolicy.setHeightForWidth(mFeatureListView->sizePolicy().hasHeightForWidth());
        mFeatureListView->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(mFeatureListView);

        widget = new QWidget(listViewWdg);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mFirstFeatureButton = new QToolButton(widget);
        mFirstFeatureButton->setObjectName(QString::fromUtf8("mFirstFeatureButton"));
        mFirstFeatureButton->setMaximumSize(QSize(24, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionDoubleArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFirstFeatureButton->setIcon(icon1);
        mFirstFeatureButton->setAutoRaise(true);

        horizontalLayout->addWidget(mFirstFeatureButton);

        mPreviousFeatureButton = new QToolButton(widget);
        mPreviousFeatureButton->setObjectName(QString::fromUtf8("mPreviousFeatureButton"));
        mPreviousFeatureButton->setMaximumSize(QSize(24, 24));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPreviousFeatureButton->setIcon(icon2);
        mPreviousFeatureButton->setAutoRaise(true);

        horizontalLayout->addWidget(mPreviousFeatureButton);

        mNextFeatureButton = new QToolButton(widget);
        mNextFeatureButton->setObjectName(QString::fromUtf8("mNextFeatureButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mNextFeatureButton->sizePolicy().hasHeightForWidth());
        mNextFeatureButton->setSizePolicy(sizePolicy3);
        mNextFeatureButton->setMaximumSize(QSize(24, 24));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNextFeatureButton->setIcon(icon3);
        mNextFeatureButton->setAutoRaise(true);

        horizontalLayout->addWidget(mNextFeatureButton);

        mLastFeatureButton = new QToolButton(widget);
        mLastFeatureButton->setObjectName(QString::fromUtf8("mLastFeatureButton"));
        mLastFeatureButton->setMaximumSize(QSize(24, 24));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionDoubleArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLastFeatureButton->setIcon(icon4);
        mLastFeatureButton->setAutoRaise(true);

        horizontalLayout->addWidget(mLastFeatureButton);

        mProgressCount = new QLabel(widget);
        mProgressCount->setObjectName(QString::fromUtf8("mProgressCount"));
        QFont font;
        font.setPointSize(11);
        mProgressCount->setFont(font);

        horizontalLayout->addWidget(mProgressCount);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mFlashButton = new QToolButton(widget);
        mFlashButton->setObjectName(QString::fromUtf8("mFlashButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionHighlightFeature.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFlashButton->setIcon(icon5);
        mFlashButton->setCheckable(true);
        mFlashButton->setAutoRaise(true);

        horizontalLayout->addWidget(mFlashButton);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mAutoPanButton = new QToolButton(widget);
        mAutoPanButton->setObjectName(QString::fromUtf8("mAutoPanButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionPanTo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAutoPanButton->setIcon(icon6);
        mAutoPanButton->setCheckable(true);
        mAutoPanButton->setAutoRaise(true);

        horizontalLayout->addWidget(mAutoPanButton);

        mAutoZoomButton = new QToolButton(widget);
        mAutoZoomButton->setObjectName(QString::fromUtf8("mAutoZoomButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomTo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAutoZoomButton->setIcon(icon7);
        mAutoZoomButton->setCheckable(true);
        mAutoZoomButton->setAutoRaise(true);

        horizontalLayout->addWidget(mAutoZoomButton);

        horizontalLayout->setStretch(5, 1);

        verticalLayout_2->addWidget(widget);

        mAttributeEditorViewSplitter->addWidget(listViewWdg);
        mAttributeEditor = new QFrame(mAttributeEditorViewSplitter);
        mAttributeEditor->setObjectName(QString::fromUtf8("mAttributeEditor"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mAttributeEditor->sizePolicy().hasHeightForWidth());
        mAttributeEditor->setSizePolicy(sizePolicy4);
        mAttributeEditor->setFrameShape(QFrame::StyledPanel);
        mAttributeEditor->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mAttributeEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mAttributeEditorViewSplitter->addWidget(mAttributeEditor);

        gridLayout_2->addWidget(mAttributeEditorViewSplitter, 0, 0, 1, 1);

        QgsDualViewBase->addWidget(mPageAttributeEditor);

        retranslateUi(QgsDualViewBase);

        QgsDualViewBase->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsDualViewBase);
    } // setupUi

    void retranslateUi(QStackedWidget *QgsDualViewBase)
    {
        mActionExpressionPreview->setText(QCoreApplication::translate("QgsDualViewBase", "Expression", nullptr));
        mActionPreviewColumnsMenu->setText(QCoreApplication::translate("QgsDualViewBase", "Columns", nullptr));
        mFeatureListPreviewButton->setText(QCoreApplication::translate("QgsDualViewBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mFirstFeatureButton->setToolTip(QCoreApplication::translate("QgsDualViewBase", "Navigate to first feature", nullptr));
#endif // QT_CONFIG(tooltip)
        mFirstFeatureButton->setText(QString());
#if QT_CONFIG(tooltip)
        mPreviousFeatureButton->setToolTip(QCoreApplication::translate("QgsDualViewBase", "Navigate to previous feature", nullptr));
#endif // QT_CONFIG(tooltip)
        mPreviousFeatureButton->setText(QString());
#if QT_CONFIG(tooltip)
        mNextFeatureButton->setToolTip(QCoreApplication::translate("QgsDualViewBase", "Navigate to next feature", nullptr));
#endif // QT_CONFIG(tooltip)
        mNextFeatureButton->setText(QString());
#if QT_CONFIG(tooltip)
        mLastFeatureButton->setToolTip(QCoreApplication::translate("QgsDualViewBase", "Navigate to last feature", nullptr));
#endif // QT_CONFIG(tooltip)
        mLastFeatureButton->setText(QString());
        mProgressCount->setText(QString());
#if QT_CONFIG(tooltip)
        mFlashButton->setToolTip(QCoreApplication::translate("QgsDualViewBase", "Highlight current feature on map", nullptr));
#endif // QT_CONFIG(tooltip)
        mFlashButton->setText(QString());
#if QT_CONFIG(tooltip)
        mAutoPanButton->setToolTip(QCoreApplication::translate("QgsDualViewBase", "Automatically pan to the current feature", nullptr));
#endif // QT_CONFIG(tooltip)
        mAutoPanButton->setText(QString());
#if QT_CONFIG(tooltip)
        mAutoZoomButton->setToolTip(QCoreApplication::translate("QgsDualViewBase", "Automatically zoom to the current feature", nullptr));
#endif // QT_CONFIG(tooltip)
        mAutoZoomButton->setText(QString());
        (void)QgsDualViewBase;
    } // retranslateUi

};

namespace Ui {
    class QgsDualViewBase: public Ui_QgsDualViewBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDUALVIEWBASE_H
