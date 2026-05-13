/********************************************************************************
** Form generated from reading UI file 'qgsfeaturefilterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFEATUREFILTERWIDGET_H
#define UI_QGSFEATUREFILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFeatureFilterWidget
{
public:
    QAction *mActionApplyFilter;
    QAction *mActionFilterColumnsMenu;
    QAction *mActionEditStoredFilterExpression;
    QAction *mActionSaveAsStoredFilterExpression;
    QAction *mActionHandleStoreFilterExpression;
    QAction *mActionStoredFilterExpressions;
    QAction *mActionShowAllFilter;
    QAction *mActionAdvancedFilter;
    QAction *mActionSelectedFilter;
    QAction *mActionVisibleFilter;
    QAction *mActionInvalidFilter;
    QAction *mActionEditedFilter;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *mFilterButton;
    QWidget *mFilterContainer;
    QGridLayout *mFilterLayout;
    QgsFilterLineEdit *mFilterQuery;
    QToolButton *mStoreFilterExpressionButton;
    QToolButton *mApplyFilterButton;

    void setupUi(QWidget *QgsFeatureFilterWidget)
    {
        if (QgsFeatureFilterWidget->objectName().isEmpty())
            QgsFeatureFilterWidget->setObjectName(QString::fromUtf8("QgsFeatureFilterWidget"));
        QgsFeatureFilterWidget->resize(1127, 29);
        QgsFeatureFilterWidget->setWindowTitle(QString::fromUtf8("Form"));
        mActionApplyFilter = new QAction(QgsFeatureFilterWidget);
        mActionApplyFilter->setObjectName(QString::fromUtf8("mActionApplyFilter"));
        mActionFilterColumnsMenu = new QAction(QgsFeatureFilterWidget);
        mActionFilterColumnsMenu->setObjectName(QString::fromUtf8("mActionFilterColumnsMenu"));
        mActionEditStoredFilterExpression = new QAction(QgsFeatureFilterWidget);
        mActionEditStoredFilterExpression->setObjectName(QString::fromUtf8("mActionEditStoredFilterExpression"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionHandleStoreFilterExpressionChecked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEditStoredFilterExpression->setIcon(icon);
        mActionSaveAsStoredFilterExpression = new QAction(QgsFeatureFilterWidget);
        mActionSaveAsStoredFilterExpression->setObjectName(QString::fromUtf8("mActionSaveAsStoredFilterExpression"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionHandleStoreFilterExpressionUnchecked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveAsStoredFilterExpression->setIcon(icon1);
        mActionHandleStoreFilterExpression = new QAction(QgsFeatureFilterWidget);
        mActionHandleStoreFilterExpression->setObjectName(QString::fromUtf8("mActionHandleStoreFilterExpression"));
        mActionHandleStoreFilterExpression->setCheckable(true);
        mActionHandleStoreFilterExpression->setIcon(icon1);
        mActionStoredFilterExpressions = new QAction(QgsFeatureFilterWidget);
        mActionStoredFilterExpressions->setObjectName(QString::fromUtf8("mActionStoredFilterExpressions"));
        mActionStoredFilterExpressions->setIcon(icon);
        mActionShowAllFilter = new QAction(QgsFeatureFilterWidget);
        mActionShowAllFilter->setObjectName(QString::fromUtf8("mActionShowAllFilter"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowAllFilter->setIcon(icon2);
        mActionAdvancedFilter = new QAction(QgsFeatureFilterWidget);
        mActionAdvancedFilter->setObjectName(QString::fromUtf8("mActionAdvancedFilter"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAdvancedFilter->setIcon(icon3);
        mActionSelectedFilter = new QAction(QgsFeatureFilterWidget);
        mActionSelectedFilter->setObjectName(QString::fromUtf8("mActionSelectedFilter"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTableSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectedFilter->setIcon(icon4);
        mActionVisibleFilter = new QAction(QgsFeatureFilterWidget);
        mActionVisibleFilter->setObjectName(QString::fromUtf8("mActionVisibleFilter"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTableVisible.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionVisibleFilter->setIcon(icon5);
        mActionInvalidFilter = new QAction(QgsFeatureFilterWidget);
        mActionInvalidFilter->setObjectName(QString::fromUtf8("mActionInvalidFilter"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTableInvalid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionInvalidFilter->setIcon(icon6);
        mActionEditedFilter = new QAction(QgsFeatureFilterWidget);
        mActionEditedFilter->setObjectName(QString::fromUtf8("mActionEditedFilter"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTableEdited.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEditedFilter->setIcon(icon7);
        gridLayout = new QGridLayout(QgsFeatureFilterWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFilterButton = new QToolButton(QgsFeatureFilterWidget);
        mFilterButton->setObjectName(QString::fromUtf8("mFilterButton"));
        mFilterButton->setIcon(icon3);
        mFilterButton->setPopupMode(QToolButton::MenuButtonPopup);
        mFilterButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(mFilterButton);

        mFilterContainer = new QWidget(QgsFeatureFilterWidget);
        mFilterContainer->setObjectName(QString::fromUtf8("mFilterContainer"));
        mFilterLayout = new QGridLayout(mFilterContainer);
        mFilterLayout->setObjectName(QString::fromUtf8("mFilterLayout"));
        mFilterLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        mFilterLayout->setContentsMargins(0, 0, 0, 0);
        mFilterQuery = new QgsFilterLineEdit(mFilterContainer);
        mFilterQuery->setObjectName(QString::fromUtf8("mFilterQuery"));

        mFilterLayout->addWidget(mFilterQuery, 0, 0, 1, 1);

        mStoreFilterExpressionButton = new QToolButton(mFilterContainer);
        mStoreFilterExpressionButton->setObjectName(QString::fromUtf8("mStoreFilterExpressionButton"));
        mStoreFilterExpressionButton->setCheckable(false);
        mStoreFilterExpressionButton->setPopupMode(QToolButton::MenuButtonPopup);

        mFilterLayout->addWidget(mStoreFilterExpressionButton, 0, 1, 1, 1);


        horizontalLayout->addWidget(mFilterContainer);

        mApplyFilterButton = new QToolButton(QgsFeatureFilterWidget);
        mApplyFilterButton->setObjectName(QString::fromUtf8("mApplyFilterButton"));
        mApplyFilterButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(mApplyFilterButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(QgsFeatureFilterWidget);

        QMetaObject::connectSlotsByName(QgsFeatureFilterWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsFeatureFilterWidget)
    {
        mActionApplyFilter->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Apply", nullptr));
        mActionFilterColumnsMenu->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Field Filter", nullptr));
        mActionEditStoredFilterExpression->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Edit Expression", nullptr));
#if QT_CONFIG(tooltip)
        mActionEditStoredFilterExpression->setToolTip(QCoreApplication::translate("QgsFeatureFilterWidget", "Edit the stored expression (change name or content)", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSaveAsStoredFilterExpression->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Save Expression as...", nullptr));
#if QT_CONFIG(tooltip)
        mActionSaveAsStoredFilterExpression->setToolTip(QCoreApplication::translate("QgsFeatureFilterWidget", "Save expression under defined name", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionHandleStoreFilterExpression->setText(QString());
#if QT_CONFIG(tooltip)
        mActionHandleStoreFilterExpression->setToolTip(QCoreApplication::translate("QgsFeatureFilterWidget", "Handle expression (save or delete)", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionStoredFilterExpressions->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Stored Filter Expressions", nullptr));
#if QT_CONFIG(tooltip)
        mActionStoredFilterExpressions->setToolTip(QCoreApplication::translate("QgsFeatureFilterWidget", "Stored expressions to filter features", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionShowAllFilter->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Show All Features", nullptr));
        mActionAdvancedFilter->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Advanced Filter (Expression)", nullptr));
#if QT_CONFIG(tooltip)
        mActionAdvancedFilter->setToolTip(QCoreApplication::translate("QgsFeatureFilterWidget", "Use the Expression Builder to define the filter", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSelectedFilter->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Show Selected Features", nullptr));
        mActionVisibleFilter->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Show Features Visible on Map", nullptr));
        mActionInvalidFilter->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Show Features with Failing Constraints", nullptr));
        mActionEditedFilter->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Show Edited and New Features", nullptr));
#if QT_CONFIG(tooltip)
        mActionEditedFilter->setToolTip(QCoreApplication::translate("QgsFeatureFilterWidget", "Filter all the features which have been edited but not yet saved", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mFilterButton->setToolTip(QCoreApplication::translate("QgsFeatureFilterWidget", "The filter defines which features are currently shown in the list or on the table", nullptr));
#endif // QT_CONFIG(tooltip)
        mFilterButton->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Filter", nullptr));
        mStoreFilterExpressionButton->setText(QString());
#if QT_CONFIG(tooltip)
        mApplyFilterButton->setToolTip(QCoreApplication::translate("QgsFeatureFilterWidget", "Filters the visible features according to the current filter selection and filter string.", nullptr));
#endif // QT_CONFIG(tooltip)
        mApplyFilterButton->setText(QCoreApplication::translate("QgsFeatureFilterWidget", "Apply", nullptr));
        (void)QgsFeatureFilterWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsFeatureFilterWidget: public Ui_QgsFeatureFilterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFEATUREFILTERWIDGET_H
