/********************************************************************************
** Form generated from reading UI file 'qgslayoutguidewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTGUIDEWIDGETBASE_H
#define UI_QGSLAYOUTGUIDEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutGuideWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *mPageLabel;
    QSpacerItem *verticalSpacer;
    QComboBox *mPageNumberComboBox;
    QgsCollapsibleGroupBoxBasic *mSnapToGridGroupCheckBox;
    QGridLayout *gridLayout_2;
    QPushButton *mAddHozGuideButton;
    QPushButton *mDeleteHozGuideButton;
    QSpacerItem *horizontalSpacer;
    QTableView *mHozGuidesTableView;
    QgsCollapsibleGroupBoxBasic *mSnapToGridGroupCheckBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *mAddVertGuideButton;
    QPushButton *mDeleteVertGuideButton;
    QSpacerItem *horizontalSpacer_2;
    QTableView *mVertGuidesTableView;
    QPushButton *mApplyToAllButton;
    QPushButton *mClearAllButton;

    void setupUi(QWidget *QgsLayoutGuideWidgetBase)
    {
        if (QgsLayoutGuideWidgetBase->objectName().isEmpty())
            QgsLayoutGuideWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutGuideWidgetBase"));
        QgsLayoutGuideWidgetBase->resize(231, 518);
        verticalLayout = new QVBoxLayout(QgsLayoutGuideWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsLayoutGuideWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setFocusPolicy(Qt::WheelFocus);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 217, 527));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mPageLabel = new QLabel(scrollAreaWidgetContents);
        mPageLabel->setObjectName(QString::fromUtf8("mPageLabel"));

        gridLayout->addWidget(mPageLabel, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        mPageNumberComboBox = new QComboBox(scrollAreaWidgetContents);
        mPageNumberComboBox->setObjectName(QString::fromUtf8("mPageNumberComboBox"));

        gridLayout->addWidget(mPageNumberComboBox, 0, 1, 1, 1);

        mSnapToGridGroupCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSnapToGridGroupCheckBox->setObjectName(QString::fromUtf8("mSnapToGridGroupCheckBox"));
        mSnapToGridGroupCheckBox->setFocusPolicy(Qt::StrongFocus);
        mSnapToGridGroupCheckBox->setCheckable(false);
        mSnapToGridGroupCheckBox->setChecked(false);
        mSnapToGridGroupCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSnapToGridGroupCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mSnapToGridGroupCheckBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mAddHozGuideButton = new QPushButton(mSnapToGridGroupCheckBox);
        mAddHozGuideButton->setObjectName(QString::fromUtf8("mAddHozGuideButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::On);
        mAddHozGuideButton->setIcon(icon);

        gridLayout_2->addWidget(mAddHozGuideButton, 1, 0, 1, 1);

        mDeleteHozGuideButton = new QPushButton(mSnapToGridGroupCheckBox);
        mDeleteHozGuideButton->setObjectName(QString::fromUtf8("mDeleteHozGuideButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::On);
        mDeleteHozGuideButton->setIcon(icon1);

        gridLayout_2->addWidget(mDeleteHozGuideButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        mHozGuidesTableView = new QTableView(mSnapToGridGroupCheckBox);
        mHozGuidesTableView->setObjectName(QString::fromUtf8("mHozGuidesTableView"));
        mHozGuidesTableView->setMinimumSize(QSize(0, 120));
        mHozGuidesTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        mHozGuidesTableView->setShowGrid(false);
        mHozGuidesTableView->setCornerButtonEnabled(false);
        mHozGuidesTableView->horizontalHeader()->setVisible(false);
        mHozGuidesTableView->verticalHeader()->setVisible(true);

        gridLayout_2->addWidget(mHozGuidesTableView, 0, 0, 1, 3);


        gridLayout->addWidget(mSnapToGridGroupCheckBox, 1, 0, 1, 2);

        mSnapToGridGroupCheckBox_2 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSnapToGridGroupCheckBox_2->setObjectName(QString::fromUtf8("mSnapToGridGroupCheckBox_2"));
        mSnapToGridGroupCheckBox_2->setFocusPolicy(Qt::StrongFocus);
        mSnapToGridGroupCheckBox_2->setCheckable(false);
        mSnapToGridGroupCheckBox_2->setChecked(false);
        mSnapToGridGroupCheckBox_2->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSnapToGridGroupCheckBox_2->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(mSnapToGridGroupCheckBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mAddVertGuideButton = new QPushButton(mSnapToGridGroupCheckBox_2);
        mAddVertGuideButton->setObjectName(QString::fromUtf8("mAddVertGuideButton"));
        mAddVertGuideButton->setIcon(icon);

        gridLayout_3->addWidget(mAddVertGuideButton, 1, 0, 1, 1);

        mDeleteVertGuideButton = new QPushButton(mSnapToGridGroupCheckBox_2);
        mDeleteVertGuideButton->setObjectName(QString::fromUtf8("mDeleteVertGuideButton"));
        mDeleteVertGuideButton->setIcon(icon1);

        gridLayout_3->addWidget(mDeleteVertGuideButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        mVertGuidesTableView = new QTableView(mSnapToGridGroupCheckBox_2);
        mVertGuidesTableView->setObjectName(QString::fromUtf8("mVertGuidesTableView"));
        mVertGuidesTableView->setMinimumSize(QSize(0, 120));
        mVertGuidesTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        mVertGuidesTableView->setShowGrid(false);
        mVertGuidesTableView->setCornerButtonEnabled(false);
        mVertGuidesTableView->horizontalHeader()->setVisible(false);
        mVertGuidesTableView->verticalHeader()->setVisible(true);

        gridLayout_3->addWidget(mVertGuidesTableView, 0, 0, 1, 3);


        gridLayout->addWidget(mSnapToGridGroupCheckBox_2, 2, 0, 1, 2);

        mApplyToAllButton = new QPushButton(scrollAreaWidgetContents);
        mApplyToAllButton->setObjectName(QString::fromUtf8("mApplyToAllButton"));

        gridLayout->addWidget(mApplyToAllButton, 3, 0, 1, 2);

        mClearAllButton = new QPushButton(scrollAreaWidgetContents);
        mClearAllButton->setObjectName(QString::fromUtf8("mClearAllButton"));

        gridLayout->addWidget(mClearAllButton, 4, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mPageNumberComboBox);
        QWidget::setTabOrder(mPageNumberComboBox, mSnapToGridGroupCheckBox);
        QWidget::setTabOrder(mSnapToGridGroupCheckBox, mHozGuidesTableView);
        QWidget::setTabOrder(mHozGuidesTableView, mAddHozGuideButton);
        QWidget::setTabOrder(mAddHozGuideButton, mDeleteHozGuideButton);
        QWidget::setTabOrder(mDeleteHozGuideButton, mSnapToGridGroupCheckBox_2);
        QWidget::setTabOrder(mSnapToGridGroupCheckBox_2, mVertGuidesTableView);
        QWidget::setTabOrder(mVertGuidesTableView, mAddVertGuideButton);
        QWidget::setTabOrder(mAddVertGuideButton, mDeleteVertGuideButton);
        QWidget::setTabOrder(mDeleteVertGuideButton, mApplyToAllButton);
        QWidget::setTabOrder(mApplyToAllButton, mClearAllButton);

        retranslateUi(QgsLayoutGuideWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutGuideWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutGuideWidgetBase)
    {
        QgsLayoutGuideWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Composition", nullptr));
        mPageLabel->setText(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Page", nullptr));
        mSnapToGridGroupCheckBox->setTitle(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Horizontal Guides", nullptr));
#if QT_CONFIG(tooltip)
        mAddHozGuideButton->setToolTip(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Add new guide", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddHozGuideButton->setText(QString());
#if QT_CONFIG(tooltip)
        mDeleteHozGuideButton->setToolTip(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Remove selected guide", nullptr));
#endif // QT_CONFIG(tooltip)
        mDeleteHozGuideButton->setText(QString());
        mSnapToGridGroupCheckBox_2->setTitle(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Vertical Guides", nullptr));
#if QT_CONFIG(tooltip)
        mAddVertGuideButton->setToolTip(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Add new guide", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddVertGuideButton->setText(QString());
#if QT_CONFIG(tooltip)
        mDeleteVertGuideButton->setToolTip(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Remove selected guide", nullptr));
#endif // QT_CONFIG(tooltip)
        mDeleteVertGuideButton->setText(QString());
#if QT_CONFIG(tooltip)
        mApplyToAllButton->setToolTip(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Resets all other pages' guides to match this page", nullptr));
#endif // QT_CONFIG(tooltip)
        mApplyToAllButton->setText(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Apply to All Pages", nullptr));
#if QT_CONFIG(tooltip)
        mClearAllButton->setToolTip(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Removes all guides from the current page", nullptr));
#endif // QT_CONFIG(tooltip)
        mClearAllButton->setText(QCoreApplication::translate("QgsLayoutGuideWidgetBase", "Clear All Guides", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutGuideWidgetBase: public Ui_QgsLayoutGuideWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTGUIDEWIDGETBASE_H
