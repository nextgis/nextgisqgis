/********************************************************************************
** Form generated from reading UI file 'qgsfeatureselectiondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFEATURESELECTIONDLG_H
#define UI_QGSFEATURESELECTIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdualview.h"
#include "qgsfeaturefilterwidget_p.h"
#include "qgsmessagebar.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFeatureSelectionDlg
{
public:
    QAction *mActionSearchForm;
    QAction *mActionExpressionSelect;
    QAction *mActionSelectAll;
    QAction *mActionInvertSelection;
    QAction *mActionRemoveSelection;
    QAction *mActionSelectedToTop;
    QAction *mActionPanMapToSelectedRows;
    QAction *mActionZoomMapToSelectedRows;
    QVBoxLayout *verticalLayout;
    QToolBar *mToolbar;
    QgsMessageBar *mMessageBar;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QgsDualView *mDualView;
    QWidget *page;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout;
    QgsFeatureFilterWidget *mFeatureFilterWidget;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsFeatureSelectionDlg)
    {
        if (QgsFeatureSelectionDlg->objectName().isEmpty())
            QgsFeatureSelectionDlg->setObjectName(QString::fromUtf8("QgsFeatureSelectionDlg"));
        QgsFeatureSelectionDlg->resize(468, 496);
        mActionSearchForm = new QAction(QgsFeatureSelectionDlg);
        mActionSearchForm->setObjectName(QString::fromUtf8("mActionSearchForm"));
        mActionSearchForm->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFilter2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSearchForm->setIcon(icon);
        mActionExpressionSelect = new QAction(QgsFeatureSelectionDlg);
        mActionExpressionSelect->setObjectName(QString::fromUtf8("mActionExpressionSelect"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconExpressionSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExpressionSelect->setIcon(icon1);
        mActionSelectAll = new QAction(QgsFeatureSelectionDlg);
        mActionSelectAll->setObjectName(QString::fromUtf8("mActionSelectAll"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionSelectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectAll->setIcon(icon2);
        mActionInvertSelection = new QAction(QgsFeatureSelectionDlg);
        mActionInvertSelection->setObjectName(QString::fromUtf8("mActionInvertSelection"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionInvertSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionInvertSelection->setIcon(icon3);
        mActionRemoveSelection = new QAction(QgsFeatureSelectionDlg);
        mActionRemoveSelection->setObjectName(QString::fromUtf8("mActionRemoveSelection"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionDeselectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRemoveSelection->setIcon(icon4);
        mActionSelectedToTop = new QAction(QgsFeatureSelectionDlg);
        mActionSelectedToTop->setObjectName(QString::fromUtf8("mActionSelectedToTop"));
        mActionSelectedToTop->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionSelectedToTop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectedToTop->setIcon(icon5);
        mActionPanMapToSelectedRows = new QAction(QgsFeatureSelectionDlg);
        mActionPanMapToSelectedRows->setObjectName(QString::fromUtf8("mActionPanMapToSelectedRows"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionPanToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPanMapToSelectedRows->setIcon(icon6);
        mActionZoomMapToSelectedRows = new QAction(QgsFeatureSelectionDlg);
        mActionZoomMapToSelectedRows->setObjectName(QString::fromUtf8("mActionZoomMapToSelectedRows"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomMapToSelectedRows->setIcon(icon7);
        verticalLayout = new QVBoxLayout(QgsFeatureSelectionDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mToolbar = new QToolBar(QgsFeatureSelectionDlg);
        mToolbar->setObjectName(QString::fromUtf8("mToolbar"));
        mToolbar->setIconSize(QSize(18, 18));
        mToolbar->setFloatable(false);

        verticalLayout->addWidget(mToolbar);

        mMessageBar = new QgsMessageBar(QgsFeatureSelectionDlg);
        mMessageBar->setObjectName(QString::fromUtf8("mMessageBar"));

        verticalLayout->addWidget(mMessageBar);

        scrollArea = new QgsScrollArea(QgsFeatureSelectionDlg);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 389));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mDualView = new QgsDualView(scrollAreaWidgetContents);
        mDualView->setObjectName(QString::fromUtf8("mDualView"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mDualView->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mDualView->addWidget(page_2);

        verticalLayout_2->addWidget(mDualView);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFeatureFilterWidget = new QgsFeatureFilterWidget(QgsFeatureSelectionDlg);
        mFeatureFilterWidget->setObjectName(QString::fromUtf8("mFeatureFilterWidget"));

        horizontalLayout->addWidget(mFeatureFilterWidget);

        mButtonBox = new QDialogButtonBox(QgsFeatureSelectionDlg);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy);
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(mButtonBox);


        verticalLayout->addLayout(horizontalLayout);


        mToolbar->addAction(mActionExpressionSelect);
        mToolbar->addAction(mActionSelectAll);
        mToolbar->addAction(mActionInvertSelection);
        mToolbar->addAction(mActionRemoveSelection);
        mToolbar->addAction(mActionSearchForm);
        mToolbar->addAction(mActionSelectedToTop);
        mToolbar->addAction(mActionZoomMapToSelectedRows);
        mToolbar->addAction(mActionPanMapToSelectedRows);

        retranslateUi(QgsFeatureSelectionDlg);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFeatureSelectionDlg, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFeatureSelectionDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFeatureSelectionDlg);
    } // setupUi

    void retranslateUi(QDialog *QgsFeatureSelectionDlg)
    {
        QgsFeatureSelectionDlg->setWindowTitle(QCoreApplication::translate("QgsFeatureSelectionDlg", "Link existing child features", nullptr));
        mActionSearchForm->setText(QCoreApplication::translate("QgsFeatureSelectionDlg", "Select/filter features using form", nullptr));
#if QT_CONFIG(tooltip)
        mActionSearchForm->setToolTip(QCoreApplication::translate("QgsFeatureSelectionDlg", "Select/filter features using form (Ctrl+F)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionSearchForm->setShortcut(QCoreApplication::translate("QgsFeatureSelectionDlg", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionExpressionSelect->setText(QCoreApplication::translate("QgsFeatureSelectionDlg", "Select features using an expression", nullptr));
#if QT_CONFIG(tooltip)
        mActionExpressionSelect->setToolTip(QCoreApplication::translate("QgsFeatureSelectionDlg", "Select features using an expression", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSelectAll->setText(QCoreApplication::translate("QgsFeatureSelectionDlg", "Select all", nullptr));
#if QT_CONFIG(tooltip)
        mActionSelectAll->setToolTip(QCoreApplication::translate("QgsFeatureSelectionDlg", "Select all (Ctrl+A)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionSelectAll->setShortcut(QCoreApplication::translate("QgsFeatureSelectionDlg", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionInvertSelection->setText(QCoreApplication::translate("QgsFeatureSelectionDlg", "Invert selection", nullptr));
#if QT_CONFIG(tooltip)
        mActionInvertSelection->setToolTip(QCoreApplication::translate("QgsFeatureSelectionDlg", "Invert selection (Ctrl+R)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionInvertSelection->setShortcut(QCoreApplication::translate("QgsFeatureSelectionDlg", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionRemoveSelection->setText(QCoreApplication::translate("QgsFeatureSelectionDlg", "Deselect all", nullptr));
#if QT_CONFIG(tooltip)
        mActionRemoveSelection->setToolTip(QCoreApplication::translate("QgsFeatureSelectionDlg", "Deselect all (Ctrl+Shift+A)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionRemoveSelection->setShortcut(QCoreApplication::translate("QgsFeatureSelectionDlg", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSelectedToTop->setText(QCoreApplication::translate("QgsFeatureSelectionDlg", "Move selection to top", nullptr));
#if QT_CONFIG(tooltip)
        mActionSelectedToTop->setToolTip(QCoreApplication::translate("QgsFeatureSelectionDlg", "Move selection to top", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionPanMapToSelectedRows->setText(QCoreApplication::translate("QgsFeatureSelectionDlg", "Pan map to the selected rows", nullptr));
#if QT_CONFIG(tooltip)
        mActionPanMapToSelectedRows->setToolTip(QCoreApplication::translate("QgsFeatureSelectionDlg", "Pan map to the selected rows (Ctrl+P)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionPanMapToSelectedRows->setShortcut(QCoreApplication::translate("QgsFeatureSelectionDlg", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionZoomMapToSelectedRows->setText(QCoreApplication::translate("QgsFeatureSelectionDlg", "Zoom map to the selected rows", nullptr));
#if QT_CONFIG(tooltip)
        mActionZoomMapToSelectedRows->setToolTip(QCoreApplication::translate("QgsFeatureSelectionDlg", "Zoom map to the selected rows (Ctrl+J)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionZoomMapToSelectedRows->setShortcut(QCoreApplication::translate("QgsFeatureSelectionDlg", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class QgsFeatureSelectionDlg: public Ui_QgsFeatureSelectionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFEATURESELECTIONDLG_H
