/********************************************************************************
** Form generated from reading UI file 'widget_svgselector.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SVGSELECTOR_H
#define UI_WIDGET_SVGSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilecontentsourcelineedit.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSvgSelector
{
public:
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *mSvgBrowserGroupBox;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *mGroupsLabel;
    QTreeView *mGroupsTreeView;
    QWidget *layoutWidget_1;
    QVBoxLayout *verticalLayout_2;
    QLabel *mImagesLabel;
    QListView *mImagesListView;
    QgsFilterLineEdit *mSvgFilterLineEdit;
    QgsCollapsibleGroupBox *mParametersGroupBox;
    QGridLayout *gridLayout_3;
    QToolButton *mRemoveParameterButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *mAddParameterButton;
    QTreeView *mParametersTreeView;
    QSpacerItem *verticalSpacer;
    QgsPictureSourceLineEditBase *mSourceLineEdit;

    void setupUi(QWidget *WidgetSvgSelector)
    {
        if (WidgetSvgSelector->objectName().isEmpty())
            WidgetSvgSelector->setObjectName(QString::fromUtf8("WidgetSvgSelector"));
        WidgetSvgSelector->resize(331, 500);
        WidgetSvgSelector->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(WidgetSvgSelector);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mSvgBrowserGroupBox = new QgsCollapsibleGroupBox(WidgetSvgSelector);
        mSvgBrowserGroupBox->setObjectName(QString::fromUtf8("mSvgBrowserGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSvgBrowserGroupBox->sizePolicy().hasHeightForWidth());
        mSvgBrowserGroupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(mSvgBrowserGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(3);
        splitter = new QSplitter(mSvgBrowserGroupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mGroupsLabel = new QLabel(layoutWidget);
        mGroupsLabel->setObjectName(QString::fromUtf8("mGroupsLabel"));

        verticalLayout->addWidget(mGroupsLabel);

        mGroupsTreeView = new QTreeView(layoutWidget);
        mGroupsTreeView->setObjectName(QString::fromUtf8("mGroupsTreeView"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mGroupsTreeView->sizePolicy().hasHeightForWidth());
        mGroupsTreeView->setSizePolicy(sizePolicy1);
        mGroupsTreeView->setMinimumSize(QSize(200, 0));

        verticalLayout->addWidget(mGroupsTreeView);

        splitter->addWidget(layoutWidget);
        layoutWidget_1 = new QWidget(splitter);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_1);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mImagesLabel = new QLabel(layoutWidget_1);
        mImagesLabel->setObjectName(QString::fromUtf8("mImagesLabel"));

        verticalLayout_2->addWidget(mImagesLabel);

        mImagesListView = new QListView(layoutWidget_1);
        mImagesListView->setObjectName(QString::fromUtf8("mImagesListView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(5);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mImagesListView->sizePolicy().hasHeightForWidth());
        mImagesListView->setSizePolicy(sizePolicy2);
        mImagesListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mImagesListView->setIconSize(QSize(32, 32));
        mImagesListView->setMovement(QListView::Static);
        mImagesListView->setResizeMode(QListView::Adjust);
        mImagesListView->setLayoutMode(QListView::Batched);
        mImagesListView->setSpacing(2);
        mImagesListView->setGridSize(QSize(36, 36));
        mImagesListView->setViewMode(QListView::IconMode);
        mImagesListView->setUniformItemSizes(true);
        mImagesListView->setWordWrap(true);

        verticalLayout_2->addWidget(mImagesListView);

        mSvgFilterLineEdit = new QgsFilterLineEdit(layoutWidget_1);
        mSvgFilterLineEdit->setObjectName(QString::fromUtf8("mSvgFilterLineEdit"));
        mSvgFilterLineEdit->setProperty("showSearchIcon", QVariant(true));

        verticalLayout_2->addWidget(mSvgFilterLineEdit);

        splitter->addWidget(layoutWidget_1);

        gridLayout_2->addWidget(splitter, 1, 0, 1, 1);


        gridLayout->addWidget(mSvgBrowserGroupBox, 1, 0, 1, 1);

        mParametersGroupBox = new QgsCollapsibleGroupBox(WidgetSvgSelector);
        mParametersGroupBox->setObjectName(QString::fromUtf8("mParametersGroupBox"));
        gridLayout_3 = new QGridLayout(mParametersGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mRemoveParameterButton = new QToolButton(mParametersGroupBox);
        mRemoveParameterButton->setObjectName(QString::fromUtf8("mRemoveParameterButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveParameterButton->setIcon(icon);

        gridLayout_3->addWidget(mRemoveParameterButton, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);

        mAddParameterButton = new QToolButton(mParametersGroupBox);
        mAddParameterButton->setObjectName(QString::fromUtf8("mAddParameterButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddParameterButton->setIcon(icon1);

        gridLayout_3->addWidget(mAddParameterButton, 1, 3, 1, 1);

        mParametersTreeView = new QTreeView(mParametersGroupBox);
        mParametersTreeView->setObjectName(QString::fromUtf8("mParametersTreeView"));
        mParametersTreeView->setRootIsDecorated(false);
        mParametersTreeView->setItemsExpandable(false);

        gridLayout_3->addWidget(mParametersTreeView, 0, 0, 1, 5);


        gridLayout->addWidget(mParametersGroupBox, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        mSourceLineEdit = new QgsPictureSourceLineEditBase(WidgetSvgSelector);
        mSourceLineEdit->setObjectName(QString::fromUtf8("mSourceLineEdit"));
        mSourceLineEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mSourceLineEdit, 3, 0, 1, 1);

        QWidget::setTabOrder(mSourceLineEdit, mGroupsTreeView);
        QWidget::setTabOrder(mGroupsTreeView, mImagesListView);
        QWidget::setTabOrder(mImagesListView, mParametersTreeView);
        QWidget::setTabOrder(mParametersTreeView, mAddParameterButton);
        QWidget::setTabOrder(mAddParameterButton, mRemoveParameterButton);

        retranslateUi(WidgetSvgSelector);

        QMetaObject::connectSlotsByName(WidgetSvgSelector);
    } // setupUi

    void retranslateUi(QWidget *WidgetSvgSelector)
    {
        mSvgBrowserGroupBox->setTitle(QCoreApplication::translate("WidgetSvgSelector", "SVG browser", nullptr));
        mGroupsLabel->setText(QCoreApplication::translate("WidgetSvgSelector", "SVG Groups", nullptr));
        mImagesLabel->setText(QCoreApplication::translate("WidgetSvgSelector", "SVG Images", nullptr));
        mParametersGroupBox->setTitle(QCoreApplication::translate("WidgetSvgSelector", "Dynamic SVG parameters", nullptr));
        mRemoveParameterButton->setText(QCoreApplication::translate("WidgetSvgSelector", "...", nullptr));
        mAddParameterButton->setText(QCoreApplication::translate("WidgetSvgSelector", "...", nullptr));
        (void)WidgetSvgSelector;
    } // retranslateUi

};

namespace Ui {
    class WidgetSvgSelector: public Ui_WidgetSvgSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGSELECTOR_H
