/********************************************************************************
** Form generated from reading UI file 'qgsvectortilebasiclabelingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORTILEBASICLABELINGWIDGET_H
#define UI_QGSVECTORTILEBASICLABELINGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorTileBasicLabelingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *mLabelModeComboBox;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mNoLabelPage;
    QWidget *mRuleBasedLabelPage;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_2;
    QgsFilterLineEdit *mFilterLineEdit;
    QCheckBox *mCheckVisibleOnly;
    QTreeView *viewStyles;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnAddRule;
    QPushButton *btnRemoveRule;
    QPushButton *btnEditRule;
    QSpacerItem *horizontalSpacer;
    QLabel *mLabelCurrentZoom;

    void setupUi(QWidget *QgsVectorTileBasicLabelingWidget)
    {
        if (QgsVectorTileBasicLabelingWidget->objectName().isEmpty())
            QgsVectorTileBasicLabelingWidget->setObjectName(QString::fromUtf8("QgsVectorTileBasicLabelingWidget"));
        QgsVectorTileBasicLabelingWidget->resize(557, 424);
        verticalLayout = new QVBoxLayout(QgsVectorTileBasicLabelingWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mLabelModeComboBox = new QComboBox(QgsVectorTileBasicLabelingWidget);
        mLabelModeComboBox->setObjectName(QString::fromUtf8("mLabelModeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelModeComboBox->sizePolicy().hasHeightForWidth());
        mLabelModeComboBox->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mLabelModeComboBox);

        mOptionsStackedWidget = new QStackedWidget(QgsVectorTileBasicLabelingWidget);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        mOptionsStackedWidget->setLineWidth(0);
        mNoLabelPage = new QWidget();
        mNoLabelPage->setObjectName(QString::fromUtf8("mNoLabelPage"));
        mOptionsStackedWidget->addWidget(mNoLabelPage);
        mRuleBasedLabelPage = new QWidget();
        mRuleBasedLabelPage->setObjectName(QString::fromUtf8("mRuleBasedLabelPage"));
        verticalLayout_1 = new QVBoxLayout(mRuleBasedLabelPage);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        mFilterLineEdit = new QgsFilterLineEdit(mRuleBasedLabelPage);
        mFilterLineEdit->setObjectName(QString::fromUtf8("mFilterLineEdit"));

        horizontalLayout_2->addWidget(mFilterLineEdit);

        mCheckVisibleOnly = new QCheckBox(mRuleBasedLabelPage);
        mCheckVisibleOnly->setObjectName(QString::fromUtf8("mCheckVisibleOnly"));

        horizontalLayout_2->addWidget(mCheckVisibleOnly);


        verticalLayout_1->addLayout(horizontalLayout_2);

        viewStyles = new QTreeView(mRuleBasedLabelPage);
        viewStyles->setObjectName(QString::fromUtf8("viewStyles"));
        viewStyles->setAcceptDrops(true);
        viewStyles->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        viewStyles->setDragEnabled(true);
        viewStyles->setDragDropMode(QAbstractItemView::InternalMove);
        viewStyles->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewStyles->setRootIsDecorated(false);

        verticalLayout_1->addWidget(viewStyles);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAddRule = new QToolButton(mRuleBasedLabelPage);
        btnAddRule->setObjectName(QString::fromUtf8("btnAddRule"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);
        btnAddRule->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(btnAddRule);

        btnRemoveRule = new QPushButton(mRuleBasedLabelPage);
        btnRemoveRule->setObjectName(QString::fromUtf8("btnRemoveRule"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon1);

        horizontalLayout->addWidget(btnRemoveRule);

        btnEditRule = new QPushButton(mRuleBasedLabelPage);
        btnEditRule->setObjectName(QString::fromUtf8("btnEditRule"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon2);

        horizontalLayout->addWidget(btnEditRule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mLabelCurrentZoom = new QLabel(mRuleBasedLabelPage);
        mLabelCurrentZoom->setObjectName(QString::fromUtf8("mLabelCurrentZoom"));

        horizontalLayout->addWidget(mLabelCurrentZoom);


        verticalLayout_1->addLayout(horizontalLayout);

        mOptionsStackedWidget->addWidget(mRuleBasedLabelPage);

        verticalLayout->addWidget(mOptionsStackedWidget);

        QWidget::setTabOrder(mFilterLineEdit, mCheckVisibleOnly);
        QWidget::setTabOrder(mCheckVisibleOnly, viewStyles);
        QWidget::setTabOrder(viewStyles, btnAddRule);
        QWidget::setTabOrder(btnAddRule, btnRemoveRule);
        QWidget::setTabOrder(btnRemoveRule, btnEditRule);

        retranslateUi(QgsVectorTileBasicLabelingWidget);

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsVectorTileBasicLabelingWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorTileBasicLabelingWidget)
    {
#if QT_CONFIG(tooltip)
        mCheckVisibleOnly->setToolTip(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Hides any rules which are invisible because they fall outside the current map canvas zoom level", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckVisibleOnly->setText(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Visible rules only", nullptr));
#if QT_CONFIG(tooltip)
        btnAddRule->setToolTip(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Add rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveRule->setToolTip(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Remove selected rules", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveRule->setText(QString());
#if QT_CONFIG(tooltip)
        btnEditRule->setToolTip(QCoreApplication::translate("QgsVectorTileBasicLabelingWidget", "Edit current rule", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditRule->setText(QString());
        mLabelCurrentZoom->setText(QString());
        (void)QgsVectorTileBasicLabelingWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsVectorTileBasicLabelingWidget: public Ui_QgsVectorTileBasicLabelingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORTILEBASICLABELINGWIDGET_H
