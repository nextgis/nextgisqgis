/********************************************************************************
** Form generated from reading UI file 'qgshttpheaderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHTTPHEADERWIDGET_H
#define UI_QGSHTTPHEADERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsfilterlineedit.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsHttpHeaderWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mHttpGroupBox;
    QVBoxLayout *verticalLayout_2;
    QFrame *mRefererFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *mRefererLabel;
    QgsFilterLineEdit *mRefererLineEdit;
    QgsCollapsibleGroupBoxBasic *grpbxAdvanced;
    QVBoxLayout *verticalLayout_5;
    QgsScrollArea *scrollAreaAdvanced_2;
    QWidget *scrollAreaWidgetContentsAdvanced_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *tblwdgQueryPairs;
    QVBoxLayout *verticalLayout_7;
    QToolButton *btnAddQueryPair;
    QToolButton *btnRemoveQueryPair;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QWidget *QgsHttpHeaderWidget)
    {
        if (QgsHttpHeaderWidget->objectName().isEmpty())
            QgsHttpHeaderWidget->setObjectName(QString::fromUtf8("QgsHttpHeaderWidget"));
        QgsHttpHeaderWidget->resize(400, 324);
        verticalLayout = new QVBoxLayout(QgsHttpHeaderWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mHttpGroupBox = new QGroupBox(QgsHttpHeaderWidget);
        mHttpGroupBox->setObjectName(QString::fromUtf8("mHttpGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mHttpGroupBox->sizePolicy().hasHeightForWidth());
        mHttpGroupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(mHttpGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mRefererFrame = new QFrame(mHttpGroupBox);
        mRefererFrame->setObjectName(QString::fromUtf8("mRefererFrame"));
        mRefererFrame->setFrameShape(QFrame::NoFrame);
        mRefererFrame->setFrameShadow(QFrame::Raised);
        mRefererFrame->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(mRefererFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mRefererLabel = new QLabel(mRefererFrame);
        mRefererLabel->setObjectName(QString::fromUtf8("mRefererLabel"));

        horizontalLayout->addWidget(mRefererLabel);

        mRefererLineEdit = new QgsFilterLineEdit(mRefererFrame);
        mRefererLineEdit->setObjectName(QString::fromUtf8("mRefererLineEdit"));

        horizontalLayout->addWidget(mRefererLineEdit);


        verticalLayout_2->addWidget(mRefererFrame);

        grpbxAdvanced = new QgsCollapsibleGroupBoxBasic(mHttpGroupBox);
        grpbxAdvanced->setObjectName(QString::fromUtf8("grpbxAdvanced"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(4);
        sizePolicy1.setHeightForWidth(grpbxAdvanced->sizePolicy().hasHeightForWidth());
        grpbxAdvanced->setSizePolicy(sizePolicy1);
        grpbxAdvanced->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(grpbxAdvanced);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollAreaAdvanced_2 = new QgsScrollArea(grpbxAdvanced);
        scrollAreaAdvanced_2->setObjectName(QString::fromUtf8("scrollAreaAdvanced_2"));
        scrollAreaAdvanced_2->setFrameShape(QFrame::NoFrame);
        scrollAreaAdvanced_2->setWidgetResizable(true);
        scrollAreaWidgetContentsAdvanced_2 = new QWidget();
        scrollAreaWidgetContentsAdvanced_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContentsAdvanced_2"));
        scrollAreaWidgetContentsAdvanced_2->setGeometry(QRect(0, 0, 370, 215));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContentsAdvanced_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        tblwdgQueryPairs = new QTableWidget(scrollAreaWidgetContentsAdvanced_2);
        if (tblwdgQueryPairs->columnCount() < 2)
            tblwdgQueryPairs->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblwdgQueryPairs->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblwdgQueryPairs->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tblwdgQueryPairs->setObjectName(QString::fromUtf8("tblwdgQueryPairs"));
        tblwdgQueryPairs->setEditTriggers(QAbstractItemView::AllEditTriggers);
        tblwdgQueryPairs->setDragEnabled(true);
        tblwdgQueryPairs->setDragDropMode(QAbstractItemView::DragOnly);
        tblwdgQueryPairs->setSelectionMode(QAbstractItemView::SingleSelection);
        tblwdgQueryPairs->setSortingEnabled(true);
        tblwdgQueryPairs->setWordWrap(false);
        tblwdgQueryPairs->horizontalHeader()->setMinimumSectionSize(120);
        tblwdgQueryPairs->horizontalHeader()->setDefaultSectionSize(120);
        tblwdgQueryPairs->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tblwdgQueryPairs->horizontalHeader()->setStretchLastSection(true);
        tblwdgQueryPairs->verticalHeader()->setVisible(false);

        horizontalLayout_6->addWidget(tblwdgQueryPairs);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        btnAddQueryPair = new QToolButton(scrollAreaWidgetContentsAdvanced_2);
        btnAddQueryPair->setObjectName(QString::fromUtf8("btnAddQueryPair"));
        btnAddQueryPair->setMinimumSize(QSize(24, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddQueryPair->setIcon(icon);

        verticalLayout_7->addWidget(btnAddQueryPair);

        btnRemoveQueryPair = new QToolButton(scrollAreaWidgetContentsAdvanced_2);
        btnRemoveQueryPair->setObjectName(QString::fromUtf8("btnRemoveQueryPair"));
        btnRemoveQueryPair->setMinimumSize(QSize(24, 0));
        btnRemoveQueryPair->setText(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveQueryPair->setIcon(icon1);

        verticalLayout_7->addWidget(btnRemoveQueryPair);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_8);


        horizontalLayout_6->addLayout(verticalLayout_7);


        gridLayout_4->addLayout(horizontalLayout_6, 3, 0, 1, 2);

        scrollAreaAdvanced_2->setWidget(scrollAreaWidgetContentsAdvanced_2);

        verticalLayout_5->addWidget(scrollAreaAdvanced_2);


        verticalLayout_2->addWidget(grpbxAdvanced);


        verticalLayout->addWidget(mHttpGroupBox);

#if QT_CONFIG(shortcut)
        mRefererLabel->setBuddy(mRefererLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(QgsHttpHeaderWidget);

        QMetaObject::connectSlotsByName(QgsHttpHeaderWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsHttpHeaderWidget)
    {
        QgsHttpHeaderWidget->setWindowTitle(QCoreApplication::translate("QgsHttpHeaderWidget", "Http Header Widget", nullptr));
        mHttpGroupBox->setTitle(QCoreApplication::translate("QgsHttpHeaderWidget", "HTTP Headers", nullptr));
        mRefererLabel->setText(QCoreApplication::translate("QgsHttpHeaderWidget", "Referer", nullptr));
        grpbxAdvanced->setTitle(QCoreApplication::translate("QgsHttpHeaderWidget", "Advanced", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblwdgQueryPairs->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsHttpHeaderWidget", "Key", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblwdgQueryPairs->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsHttpHeaderWidget", "Value (raw)", nullptr));
#if QT_CONFIG(tooltip)
        btnAddQueryPair->setToolTip(QCoreApplication::translate("QgsHttpHeaderWidget", "Add HTTP header", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnRemoveQueryPair->setToolTip(QCoreApplication::translate("QgsHttpHeaderWidget", "Remove selected HTTP header", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsHttpHeaderWidget: public Ui_QgsHttpHeaderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHTTPHEADERWIDGET_H
