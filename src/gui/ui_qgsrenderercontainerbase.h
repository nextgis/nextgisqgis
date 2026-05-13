/********************************************************************************
** Form generated from reading UI file 'qgsrenderercontainerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERCONTAINERBASE_H
#define UI_QGSRENDERERCONTAINERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererWidgetContainerBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mBackButton;
    QLabel *mTitleText;
    QToolButton *mMenuButton;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QStackedWidget *mStackedWidget;

    void setupUi(QWidget *QgsRendererWidgetContainerBase)
    {
        if (QgsRendererWidgetContainerBase->objectName().isEmpty())
            QgsRendererWidgetContainerBase->setObjectName(QString::fromUtf8("QgsRendererWidgetContainerBase"));
        QgsRendererWidgetContainerBase->resize(375, 628);
        QgsRendererWidgetContainerBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(QgsRendererWidgetContainerBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(QgsRendererWidgetContainerBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(55, 0));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mBackButton = new QToolButton(widget);
        mBackButton->setObjectName(QString::fromUtf8("mBackButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mBackButton->sizePolicy().hasHeightForWidth());
        mBackButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBackButton->setIcon(icon);
        mBackButton->setAutoRepeat(false);
        mBackButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_2->addWidget(mBackButton);

        mTitleText = new QLabel(widget);
        mTitleText->setObjectName(QString::fromUtf8("mTitleText"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mTitleText->sizePolicy().hasHeightForWidth());
        mTitleText->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(mTitleText);


        horizontalLayout->addWidget(widget);

        mMenuButton = new QToolButton(QgsRendererWidgetContainerBase);
        mMenuButton->setObjectName(QString::fromUtf8("mMenuButton"));
        sizePolicy.setHeightForWidth(mMenuButton->sizePolicy().hasHeightForWidth());
        mMenuButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconHamburgerMenu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMenuButton->setIcon(icon1);
        mMenuButton->setAutoRepeat(false);
        mMenuButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(mMenuButton);

        horizontalLayout->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        scrollArea = new QgsScrollArea(QgsRendererWidgetContainerBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 375, 597));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mStackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));

        verticalLayout->addWidget(mStackedWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(QgsRendererWidgetContainerBase);

        QMetaObject::connectSlotsByName(QgsRendererWidgetContainerBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRendererWidgetContainerBase)
    {
#if QT_CONFIG(tooltip)
        mBackButton->setToolTip(QCoreApplication::translate("QgsRendererWidgetContainerBase", "Go back", nullptr));
#endif // QT_CONFIG(tooltip)
        mBackButton->setText(QString());
        mTitleText->setText(QString());
#if QT_CONFIG(tooltip)
        mMenuButton->setToolTip(QCoreApplication::translate("QgsRendererWidgetContainerBase", "Go back", nullptr));
#endif // QT_CONFIG(tooltip)
        mMenuButton->setText(QString());
        (void)QgsRendererWidgetContainerBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRendererWidgetContainerBase: public Ui_QgsRendererWidgetContainerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERCONTAINERBASE_H
