/********************************************************************************
** Form generated from reading UI file 'qgsextentgroupboxwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXTENTGROUPBOXWIDGET_H
#define UI_QGSEXTENTGROUPBOXWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgshighlightablelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExtentGroupBoxWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mExpandedWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_4;
    QLabel *mYMinLabel;
    QLineEdit *mYMaxLineEdit;
    QLineEdit *mYMinLineEdit;
    QLabel *mYMaxLabel;
    QLabel *mXMaxLabel;
    QLabel *mXMinLabel;
    QLineEdit *mXMaxLineEdit;
    QLineEdit *mXMinLineEdit;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout1;
    QLabel *calculateLabel;
    QPushButton *mButtonCalcFromLayer;
    QPushButton *mButtonCalcFromLayout;
    QPushButton *mButtonCalcFromBookmark;
    QHBoxLayout *horizontalLayout2;
    QPushButton *mOriginalExtentButton;
    QPushButton *mCurrentExtentButton;
    QPushButton *mButtonDrawOnCanvas;
    QWidget *mCondensedFrame;
    QHBoxLayout *horizontalLayout;
    QgsHighlightableLineEdit *mCondensedLineEdit;
    QToolButton *mCondensedToolButton;

    void setupUi(QWidget *QgsExtentGroupBoxWidget)
    {
        if (QgsExtentGroupBoxWidget->objectName().isEmpty())
            QgsExtentGroupBoxWidget->setObjectName(QString::fromUtf8("QgsExtentGroupBoxWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsExtentGroupBoxWidget->sizePolicy().hasHeightForWidth());
        QgsExtentGroupBoxWidget->setSizePolicy(sizePolicy);
        QgsExtentGroupBoxWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsExtentGroupBoxWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mExpandedWidget = new QWidget(QgsExtentGroupBoxWidget);
        mExpandedWidget->setObjectName(QString::fromUtf8("mExpandedWidget"));
        verticalLayout_2 = new QVBoxLayout(mExpandedWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mYMinLabel = new QLabel(mExpandedWidget);
        mYMinLabel->setObjectName(QString::fromUtf8("mYMinLabel"));
        mYMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mYMinLabel, 2, 1, 1, 1);

        mYMaxLineEdit = new QLineEdit(mExpandedWidget);
        mYMaxLineEdit->setObjectName(QString::fromUtf8("mYMaxLineEdit"));

        gridLayout_4->addWidget(mYMaxLineEdit, 0, 2, 1, 1);

        mYMinLineEdit = new QLineEdit(mExpandedWidget);
        mYMinLineEdit->setObjectName(QString::fromUtf8("mYMinLineEdit"));

        gridLayout_4->addWidget(mYMinLineEdit, 2, 2, 1, 1);

        mYMaxLabel = new QLabel(mExpandedWidget);
        mYMaxLabel->setObjectName(QString::fromUtf8("mYMaxLabel"));
        mYMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mYMaxLabel, 0, 1, 1, 1);

        mXMaxLabel = new QLabel(mExpandedWidget);
        mXMaxLabel->setObjectName(QString::fromUtf8("mXMaxLabel"));
        mXMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mXMaxLabel, 1, 2, 1, 1);

        mXMinLabel = new QLabel(mExpandedWidget);
        mXMinLabel->setObjectName(QString::fromUtf8("mXMinLabel"));
        mXMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mXMinLabel, 1, 0, 1, 1);

        mXMaxLineEdit = new QLineEdit(mExpandedWidget);
        mXMaxLineEdit->setObjectName(QString::fromUtf8("mXMaxLineEdit"));

        gridLayout_4->addWidget(mXMaxLineEdit, 1, 3, 1, 1);

        mXMinLineEdit = new QLineEdit(mExpandedWidget);
        mXMinLineEdit->setObjectName(QString::fromUtf8("mXMinLineEdit"));

        gridLayout_4->addWidget(mXMinLineEdit, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        widget_2 = new QWidget(mExpandedWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 10, 1, 1);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        calculateLabel = new QLabel(widget_2);
        calculateLabel->setObjectName(QString::fromUtf8("calculateLabel"));
        calculateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout1->addWidget(calculateLabel);

        mButtonCalcFromLayer = new QPushButton(widget_2);
        mButtonCalcFromLayer->setObjectName(QString::fromUtf8("mButtonCalcFromLayer"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mButtonCalcFromLayer->sizePolicy().hasHeightForWidth());
        mButtonCalcFromLayer->setSizePolicy(sizePolicy1);

        horizontalLayout1->addWidget(mButtonCalcFromLayer);

        mButtonCalcFromLayout = new QPushButton(widget_2);
        mButtonCalcFromLayout->setObjectName(QString::fromUtf8("mButtonCalcFromLayout"));
        sizePolicy1.setHeightForWidth(mButtonCalcFromLayout->sizePolicy().hasHeightForWidth());
        mButtonCalcFromLayout->setSizePolicy(sizePolicy1);

        horizontalLayout1->addWidget(mButtonCalcFromLayout);

        mButtonCalcFromBookmark = new QPushButton(widget_2);
        mButtonCalcFromBookmark->setObjectName(QString::fromUtf8("mButtonCalcFromBookmark"));
        sizePolicy1.setHeightForWidth(mButtonCalcFromBookmark->sizePolicy().hasHeightForWidth());
        mButtonCalcFromBookmark->setSizePolicy(sizePolicy1);

        horizontalLayout1->addWidget(mButtonCalcFromBookmark);


        gridLayout->addLayout(horizontalLayout1, 2, 1, 1, 7);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setObjectName(QString::fromUtf8("horizontalLayout2"));
        mOriginalExtentButton = new QPushButton(widget_2);
        mOriginalExtentButton->setObjectName(QString::fromUtf8("mOriginalExtentButton"));
        sizePolicy1.setHeightForWidth(mOriginalExtentButton->sizePolicy().hasHeightForWidth());
        mOriginalExtentButton->setSizePolicy(sizePolicy1);

        horizontalLayout2->addWidget(mOriginalExtentButton);

        mCurrentExtentButton = new QPushButton(widget_2);
        mCurrentExtentButton->setObjectName(QString::fromUtf8("mCurrentExtentButton"));
        sizePolicy1.setHeightForWidth(mCurrentExtentButton->sizePolicy().hasHeightForWidth());
        mCurrentExtentButton->setSizePolicy(sizePolicy1);

        horizontalLayout2->addWidget(mCurrentExtentButton);

        mButtonDrawOnCanvas = new QPushButton(widget_2);
        mButtonDrawOnCanvas->setObjectName(QString::fromUtf8("mButtonDrawOnCanvas"));
        sizePolicy1.setHeightForWidth(mButtonDrawOnCanvas->sizePolicy().hasHeightForWidth());
        mButtonDrawOnCanvas->setSizePolicy(sizePolicy1);

        horizontalLayout2->addWidget(mButtonDrawOnCanvas);


        gridLayout->addLayout(horizontalLayout2, 3, 1, 1, 7);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(mExpandedWidget);

        mCondensedFrame = new QWidget(QgsExtentGroupBoxWidget);
        mCondensedFrame->setObjectName(QString::fromUtf8("mCondensedFrame"));
        horizontalLayout = new QHBoxLayout(mCondensedFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mCondensedLineEdit = new QgsHighlightableLineEdit(mCondensedFrame);
        mCondensedLineEdit->setObjectName(QString::fromUtf8("mCondensedLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mCondensedLineEdit->sizePolicy().hasHeightForWidth());
        mCondensedLineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(mCondensedLineEdit);

        mCondensedToolButton = new QToolButton(mCondensedFrame);
        mCondensedToolButton->setObjectName(QString::fromUtf8("mCondensedToolButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mCondensedToolButton->sizePolicy().hasHeightForWidth());
        mCondensedToolButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(mCondensedToolButton);


        verticalLayout->addWidget(mCondensedFrame);

        QWidget::setTabOrder(mYMaxLineEdit, mXMinLineEdit);
        QWidget::setTabOrder(mXMinLineEdit, mXMaxLineEdit);
        QWidget::setTabOrder(mXMaxLineEdit, mYMinLineEdit);
        QWidget::setTabOrder(mYMinLineEdit, mOriginalExtentButton);
        QWidget::setTabOrder(mOriginalExtentButton, mButtonCalcFromLayer);
        QWidget::setTabOrder(mButtonCalcFromLayer, mCurrentExtentButton);
        QWidget::setTabOrder(mCurrentExtentButton, mButtonDrawOnCanvas);

        retranslateUi(QgsExtentGroupBoxWidget);

        QMetaObject::connectSlotsByName(QgsExtentGroupBoxWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsExtentGroupBoxWidget)
    {
        mYMinLabel->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "South", nullptr));
        mYMaxLineEdit->setText(QString());
        mYMaxLabel->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "North", nullptr));
        mXMaxLabel->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "East", nullptr));
        mXMinLabel->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "West", nullptr));
        calculateLabel->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "Calculate from", nullptr));
        mButtonCalcFromLayer->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "Layer", nullptr));
        mButtonCalcFromLayout->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "Layout Map", nullptr));
        mButtonCalcFromBookmark->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "Bookmark", nullptr));
        mOriginalExtentButton->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "Current Layer Extent", nullptr));
        mCurrentExtentButton->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "Map Canvas Extent", nullptr));
        mButtonDrawOnCanvas->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "Draw on Canvas", nullptr));
        mCondensedToolButton->setText(QCoreApplication::translate("QgsExtentGroupBoxWidget", "\342\200\246", nullptr));
        (void)QgsExtentGroupBoxWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsExtentGroupBoxWidget: public Ui_QgsExtentGroupBoxWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXTENTGROUPBOXWIDGET_H
