/********************************************************************************
** Form generated from reading UI file 'qgssymbolselectordialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSYMBOLSELECTORDIALOGBASE_H
#define UI_QGSSYMBOLSELECTORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSymbolSelectorDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lblPreview;
    QTreeView *layersTree;
    QVBoxLayout *pushBtnBox_1;
    QToolButton *btnAddLayer;
    QToolButton *btnRemoveLayer;
    QToolButton *btnDuplicate;
    QSpacerItem *verticalSpacer_1;
    QVBoxLayout *pushBtnBox_2;
    QToolButton *btnUp;
    QToolButton *btnDown;
    QToolButton *btnLock;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_2;

    void setupUi(QWidget *QgsSymbolSelectorDialogBase)
    {
        if (QgsSymbolSelectorDialogBase->objectName().isEmpty())
            QgsSymbolSelectorDialogBase->setObjectName(QString::fromUtf8("QgsSymbolSelectorDialogBase"));
        QgsSymbolSelectorDialogBase->resize(356, 616);
        QgsSymbolSelectorDialogBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(QgsSymbolSelectorDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblPreview = new QLabel(QgsSymbolSelectorDialogBase);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        lblPreview->setMinimumSize(QSize(100, 100));
        lblPreview->setMaximumSize(QSize(100, 100));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblPreview);

        layersTree = new QTreeView(QgsSymbolSelectorDialogBase);
        layersTree->setObjectName(QString::fromUtf8("layersTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(layersTree->sizePolicy().hasHeightForWidth());
        layersTree->setSizePolicy(sizePolicy1);
        layersTree->setMaximumSize(QSize(16777215, 100));
        layersTree->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(layersTree);

        pushBtnBox_1 = new QVBoxLayout();
        pushBtnBox_1->setSpacing(4);
        pushBtnBox_1->setObjectName(QString::fromUtf8("pushBtnBox_1"));
        btnAddLayer = new QToolButton(QgsSymbolSelectorDialogBase);
        btnAddLayer->setObjectName(QString::fromUtf8("btnAddLayer"));
        btnAddLayer->setMaximumSize(QSize(50, 16777215));
        btnAddLayer->setAutoRaise(false);

        pushBtnBox_1->addWidget(btnAddLayer);

        btnRemoveLayer = new QToolButton(QgsSymbolSelectorDialogBase);
        btnRemoveLayer->setObjectName(QString::fromUtf8("btnRemoveLayer"));
        btnRemoveLayer->setMaximumSize(QSize(50, 16777215));
        btnRemoveLayer->setAutoRaise(false);

        pushBtnBox_1->addWidget(btnRemoveLayer);

        btnDuplicate = new QToolButton(QgsSymbolSelectorDialogBase);
        btnDuplicate->setObjectName(QString::fromUtf8("btnDuplicate"));
        btnDuplicate->setMaximumSize(QSize(50, 16777215));
        btnDuplicate->setAutoRaise(false);

        pushBtnBox_1->addWidget(btnDuplicate);

        verticalSpacer_1 = new QSpacerItem(10, 50, QSizePolicy::Minimum, QSizePolicy::Preferred);

        pushBtnBox_1->addItem(verticalSpacer_1);


        horizontalLayout->addLayout(pushBtnBox_1);

        pushBtnBox_2 = new QVBoxLayout();
        pushBtnBox_2->setSpacing(4);
        pushBtnBox_2->setObjectName(QString::fromUtf8("pushBtnBox_2"));
        btnUp = new QToolButton(QgsSymbolSelectorDialogBase);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        btnUp->setMaximumSize(QSize(50, 16777215));
        btnUp->setAutoRaise(false);

        pushBtnBox_2->addWidget(btnUp);

        btnDown = new QToolButton(QgsSymbolSelectorDialogBase);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        btnDown->setMaximumSize(QSize(50, 16777215));
        btnDown->setAutoRaise(false);

        pushBtnBox_2->addWidget(btnDown);

        btnLock = new QToolButton(QgsSymbolSelectorDialogBase);
        btnLock->setObjectName(QString::fromUtf8("btnLock"));
        btnLock->setMaximumSize(QSize(50, 16777215));
        btnLock->setCheckable(true);
        btnLock->setAutoRaise(false);

        pushBtnBox_2->addWidget(btnLock);

        verticalSpacer_2 = new QSpacerItem(10, 50, QSizePolicy::Minimum, QSizePolicy::Preferred);

        pushBtnBox_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(pushBtnBox_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        line = new QFrame(QgsSymbolSelectorDialogBase);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        frame = new QFrame(QgsSymbolSelectorDialogBase);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        gridLayout_2->addWidget(frame, 4, 0, 1, 1);

        scrollArea = new QgsScrollArea(QgsSymbolSelectorDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 338, 442));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, -1);
        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 3, 0, 1, 1);


        retranslateUi(QgsSymbolSelectorDialogBase);

        QMetaObject::connectSlotsByName(QgsSymbolSelectorDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSymbolSelectorDialogBase)
    {
        lblPreview->setText(QString());
#if QT_CONFIG(tooltip)
        btnAddLayer->setToolTip(QCoreApplication::translate("QgsSymbolSelectorDialogBase", "Add symbol layer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnRemoveLayer->setToolTip(QCoreApplication::translate("QgsSymbolSelectorDialogBase", "Remove symbol layer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnDuplicate->setToolTip(QCoreApplication::translate("QgsSymbolSelectorDialogBase", "Duplicate symbol layer", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDuplicate->setText(QString());
#if QT_CONFIG(tooltip)
        btnUp->setToolTip(QCoreApplication::translate("QgsSymbolSelectorDialogBase", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnDown->setToolTip(QCoreApplication::translate("QgsSymbolSelectorDialogBase", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnLock->setToolTip(QCoreApplication::translate("QgsSymbolSelectorDialogBase", "Lock symbol layer's color", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsSymbolSelectorDialogBase;
    } // retranslateUi

};

namespace Ui {
    class QgsSymbolSelectorDialogBase: public Ui_QgsSymbolSelectorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLSELECTORDIALOGBASE_H
