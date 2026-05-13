/********************************************************************************
** Form generated from reading UI file 'qgsattributetabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTETABLEDIALOG_H
#define UI_QGSATTRIBUTETABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include "qgsdualview.h"
#include "qgsfeaturefilterwidget_p.h"
#include "qgsfieldcombobox.h"
#include "qgsfieldexpressionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeTableDialog
{
public:
    QAction *mActionSearchForm;
    QAction *mActionToggleEditing;
    QAction *mActionToggleMultiEdit;
    QAction *mActionSaveEdits;
    QAction *mActionReload;
    QAction *mActionAddFeature;
    QAction *mActionDeleteSelected;
    QAction *mActionExpressionSelect;
    QAction *mActionSelectAll;
    QAction *mActionInvertSelection;
    QAction *mActionRemoveSelection;
    QAction *mActionSelectedToTop;
    QAction *mActionPanMapToSelectedRows;
    QAction *mActionZoomMapToSelectedRows;
    QAction *mActionCutSelectedRows;
    QAction *mActionCopySelectedRows;
    QAction *mActionPasteFeatures;
    QAction *mActionRemoveAttribute;
    QAction *mActionAddAttribute;
    QAction *mActionOpenFieldCalculator;
    QAction *mActionSetStyles;
    QAction *mActionOrganizeColumns;
    QAction *mActionAddFeatureViaAttributeTable;
    QAction *mActionAddFeatureViaAttributeForm;
    QGridLayout *gridLayout;
    QgsDualView *mMainView;
    QFrame *mUpdateExpressionBox;
    QHBoxLayout *horizontalLayout_3;
    QgsFieldComboBox *mFieldCombo;
    QLabel *label;
    QgsFieldExpressionWidget *mUpdateExpressionText;
    QToolButton *mRunFieldCalc;
    QToolButton *mRunFieldCalcSelected;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *horizontalLayout_2;
    QgsFeatureFilterWidget *mFeatureFilterWidget;
    QToolButton *mAttributeViewButton;
    QToolButton *mTableViewButton;
    QToolBar *mToolbar;
    QButtonGroup *mMainViewButtonGroup;

    void setupUi(QDialog *QgsAttributeTableDialog)
    {
        if (QgsAttributeTableDialog->objectName().isEmpty())
            QgsAttributeTableDialog->setObjectName(QString::fromUtf8("QgsAttributeTableDialog"));
        QgsAttributeTableDialog->resize(1054, 570);
        mActionSearchForm = new QAction(QgsAttributeTableDialog);
        mActionSearchForm->setObjectName(QString::fromUtf8("mActionSearchForm"));
        mActionSearchForm->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFilter2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSearchForm->setIcon(icon);
        mActionToggleEditing = new QAction(QgsAttributeTableDialog);
        mActionToggleEditing->setObjectName(QString::fromUtf8("mActionToggleEditing"));
        mActionToggleEditing->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionToggleEditing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionToggleEditing->setIcon(icon1);
        mActionToggleMultiEdit = new QAction(QgsAttributeTableDialog);
        mActionToggleMultiEdit->setObjectName(QString::fromUtf8("mActionToggleMultiEdit"));
        mActionToggleMultiEdit->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionMultiEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionToggleMultiEdit->setIcon(icon2);
        mActionSaveEdits = new QAction(QgsAttributeTableDialog);
        mActionSaveEdits->setObjectName(QString::fromUtf8("mActionSaveEdits"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveAllEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveEdits->setIcon(icon3);
        mActionReload = new QAction(QgsAttributeTableDialog);
        mActionReload->setObjectName(QString::fromUtf8("mActionReload"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionReload->setIcon(icon4);
        mActionAddFeature = new QAction(QgsAttributeTableDialog);
        mActionAddFeature->setObjectName(QString::fromUtf8("mActionAddFeature"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionNewTableRow.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddFeature->setIcon(icon5);
        mActionDeleteSelected = new QAction(QgsAttributeTableDialog);
        mActionDeleteSelected->setObjectName(QString::fromUtf8("mActionDeleteSelected"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelectedFeatures.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeleteSelected->setIcon(icon6);
        mActionExpressionSelect = new QAction(QgsAttributeTableDialog);
        mActionExpressionSelect->setObjectName(QString::fromUtf8("mActionExpressionSelect"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mIconExpressionSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExpressionSelect->setIcon(icon7);
        mActionSelectAll = new QAction(QgsAttributeTableDialog);
        mActionSelectAll->setObjectName(QString::fromUtf8("mActionSelectAll"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionSelectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectAll->setIcon(icon8);
        mActionInvertSelection = new QAction(QgsAttributeTableDialog);
        mActionInvertSelection->setObjectName(QString::fromUtf8("mActionInvertSelection"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionInvertSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionInvertSelection->setIcon(icon9);
        mActionRemoveSelection = new QAction(QgsAttributeTableDialog);
        mActionRemoveSelection->setObjectName(QString::fromUtf8("mActionRemoveSelection"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionDeselectActiveLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRemoveSelection->setIcon(icon10);
        mActionSelectedToTop = new QAction(QgsAttributeTableDialog);
        mActionSelectedToTop->setObjectName(QString::fromUtf8("mActionSelectedToTop"));
        mActionSelectedToTop->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mActionSelectedToTop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectedToTop->setIcon(icon11);
        mActionPanMapToSelectedRows = new QAction(QgsAttributeTableDialog);
        mActionPanMapToSelectedRows->setObjectName(QString::fromUtf8("mActionPanMapToSelectedRows"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mActionPanToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPanMapToSelectedRows->setIcon(icon12);
        mActionZoomMapToSelectedRows = new QAction(QgsAttributeTableDialog);
        mActionZoomMapToSelectedRows->setObjectName(QString::fromUtf8("mActionZoomMapToSelectedRows"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomMapToSelectedRows->setIcon(icon13);
        mActionCutSelectedRows = new QAction(QgsAttributeTableDialog);
        mActionCutSelectedRows->setObjectName(QString::fromUtf8("mActionCutSelectedRows"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCutSelectedRows->setIcon(icon14);
        mActionCopySelectedRows = new QAction(QgsAttributeTableDialog);
        mActionCopySelectedRows->setObjectName(QString::fromUtf8("mActionCopySelectedRows"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCopySelectedRows->setIcon(icon15);
        mActionPasteFeatures = new QAction(QgsAttributeTableDialog);
        mActionPasteFeatures->setObjectName(QString::fromUtf8("mActionPasteFeatures"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/themes/default/mActionEditPaste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPasteFeatures->setIcon(icon16);
        mActionRemoveAttribute = new QAction(QgsAttributeTableDialog);
        mActionRemoveAttribute->setObjectName(QString::fromUtf8("mActionRemoveAttribute"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRemoveAttribute->setIcon(icon17);
        mActionAddAttribute = new QAction(QgsAttributeTableDialog);
        mActionAddAttribute->setObjectName(QString::fromUtf8("mActionAddAttribute"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddAttribute->setIcon(icon18);
        mActionOpenFieldCalculator = new QAction(QgsAttributeTableDialog);
        mActionOpenFieldCalculator->setObjectName(QString::fromUtf8("mActionOpenFieldCalculator"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/themes/default/mActionCalculateField.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpenFieldCalculator->setIcon(icon19);
        mActionSetStyles = new QAction(QgsAttributeTableDialog);
        mActionSetStyles->setObjectName(QString::fromUtf8("mActionSetStyles"));
        mActionSetStyles->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/themes/default/mActionConditionalFormatting.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSetStyles->setIcon(icon20);
        mActionOrganizeColumns = new QAction(QgsAttributeTableDialog);
        mActionOrganizeColumns->setObjectName(QString::fromUtf8("mActionOrganizeColumns"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/themes/default/mActionEditTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOrganizeColumns->setIcon(icon21);
        mActionAddFeatureViaAttributeTable = new QAction(QgsAttributeTableDialog);
        mActionAddFeatureViaAttributeTable->setObjectName(QString::fromUtf8("mActionAddFeatureViaAttributeTable"));
        mActionAddFeatureViaAttributeTable->setIcon(icon5);
        mActionAddFeatureViaAttributeForm = new QAction(QgsAttributeTableDialog);
        mActionAddFeatureViaAttributeForm->setObjectName(QString::fromUtf8("mActionAddFeatureViaAttributeForm"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/themes/default/mIconFormSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddFeatureViaAttributeForm->setIcon(icon22);
        gridLayout = new QGridLayout(QgsAttributeTableDialog);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mMainView = new QgsDualView(QgsAttributeTableDialog);
        mMainView->setObjectName(QString::fromUtf8("mMainView"));

        gridLayout->addWidget(mMainView, 6, 0, 1, 1);

        mUpdateExpressionBox = new QFrame(QgsAttributeTableDialog);
        mUpdateExpressionBox->setObjectName(QString::fromUtf8("mUpdateExpressionBox"));
        horizontalLayout_3 = new QHBoxLayout(mUpdateExpressionBox);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(3, 1, 0, 3);
        mFieldCombo = new QgsFieldComboBox(mUpdateExpressionBox);
        mFieldCombo->setObjectName(QString::fromUtf8("mFieldCombo"));

        horizontalLayout_3->addWidget(mFieldCombo);

        label = new QLabel(mUpdateExpressionBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label);

        mUpdateExpressionText = new QgsFieldExpressionWidget(mUpdateExpressionBox);
        mUpdateExpressionText->setObjectName(QString::fromUtf8("mUpdateExpressionText"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mUpdateExpressionText->sizePolicy().hasHeightForWidth());
        mUpdateExpressionText->setSizePolicy(sizePolicy1);
        mUpdateExpressionText->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mUpdateExpressionText);

        mRunFieldCalc = new QToolButton(mUpdateExpressionBox);
        mRunFieldCalc->setObjectName(QString::fromUtf8("mRunFieldCalc"));

        horizontalLayout_3->addWidget(mRunFieldCalc);

        mRunFieldCalcSelected = new QToolButton(mUpdateExpressionBox);
        mRunFieldCalcSelected->setObjectName(QString::fromUtf8("mRunFieldCalcSelected"));

        horizontalLayout_3->addWidget(mRunFieldCalcSelected);


        gridLayout->addWidget(mUpdateExpressionBox, 5, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mFeatureFilterWidget = new QgsFeatureFilterWidget(QgsAttributeTableDialog);
        mFeatureFilterWidget->setObjectName(QString::fromUtf8("mFeatureFilterWidget"));

        horizontalLayout_2->addWidget(mFeatureFilterWidget);

        mAttributeViewButton = new QToolButton(QgsAttributeTableDialog);
        mMainViewButtonGroup = new QButtonGroup(QgsAttributeTableDialog);
        mMainViewButtonGroup->setObjectName(QString::fromUtf8("mMainViewButtonGroup"));
        mMainViewButtonGroup->addButton(mAttributeViewButton);
        mAttributeViewButton->setObjectName(QString::fromUtf8("mAttributeViewButton"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/themes/default/mActionFormView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAttributeViewButton->setIcon(icon23);
        mAttributeViewButton->setCheckable(true);
        mAttributeViewButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mAttributeViewButton);

        mTableViewButton = new QToolButton(QgsAttributeTableDialog);
        mMainViewButtonGroup->addButton(mTableViewButton);
        mTableViewButton->setObjectName(QString::fromUtf8("mTableViewButton"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTableViewButton->setIcon(icon24);
        mTableViewButton->setCheckable(true);
        mTableViewButton->setChecked(true);
        mTableViewButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(mTableViewButton);


        hboxLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(hboxLayout, 8, 0, 1, 1);

        mToolbar = new QToolBar(QgsAttributeTableDialog);
        mToolbar->setObjectName(QString::fromUtf8("mToolbar"));
        mToolbar->setIconSize(QSize(18, 18));
        mToolbar->setFloatable(false);

        gridLayout->addWidget(mToolbar, 4, 0, 1, 1);

        QWidget::setTabOrder(mFieldCombo, mUpdateExpressionText);
        QWidget::setTabOrder(mUpdateExpressionText, mRunFieldCalc);
        QWidget::setTabOrder(mRunFieldCalc, mRunFieldCalcSelected);
        QWidget::setTabOrder(mRunFieldCalcSelected, mAttributeViewButton);
        QWidget::setTabOrder(mAttributeViewButton, mTableViewButton);

        mToolbar->addAction(mActionToggleEditing);
        mToolbar->addAction(mActionToggleMultiEdit);
        mToolbar->addAction(mActionSaveEdits);
        mToolbar->addAction(mActionReload);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionAddFeature);
        mToolbar->addAction(mActionDeleteSelected);
        mToolbar->addAction(mActionCutSelectedRows);
        mToolbar->addAction(mActionCopySelectedRows);
        mToolbar->addAction(mActionPasteFeatures);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionExpressionSelect);
        mToolbar->addAction(mActionSelectAll);
        mToolbar->addAction(mActionInvertSelection);
        mToolbar->addAction(mActionRemoveSelection);
        mToolbar->addAction(mActionSearchForm);
        mToolbar->addAction(mActionSelectedToTop);
        mToolbar->addAction(mActionPanMapToSelectedRows);
        mToolbar->addAction(mActionZoomMapToSelectedRows);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionAddAttribute);
        mToolbar->addAction(mActionRemoveAttribute);
        mToolbar->addAction(mActionOrganizeColumns);
        mToolbar->addAction(mActionOpenFieldCalculator);
        mToolbar->addSeparator();
        mToolbar->addAction(mActionSetStyles);
        mToolbar->addSeparator();

        retranslateUi(QgsAttributeTableDialog);

        mMainView->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsAttributeTableDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeTableDialog)
    {
        QgsAttributeTableDialog->setWindowTitle(QCoreApplication::translate("QgsAttributeTableDialog", "Attribute Table", nullptr));
        mActionSearchForm->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Select/filter features using form", nullptr));
#if QT_CONFIG(tooltip)
        mActionSearchForm->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Select/filter features using form (Ctrl+F)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionSearchForm->setShortcut(QCoreApplication::translate("QgsAttributeTableDialog", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionToggleEditing->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Toggle editing mode", nullptr));
#if QT_CONFIG(tooltip)
        mActionToggleEditing->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Toggle editing mode (Ctrl+E)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionToggleEditing->setShortcut(QCoreApplication::translate("QgsAttributeTableDialog", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionToggleMultiEdit->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Toggle multi edit mode", nullptr));
#if QT_CONFIG(tooltip)
        mActionToggleMultiEdit->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Toggle multi edit mode", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSaveEdits->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Save edits", nullptr));
#if QT_CONFIG(tooltip)
        mActionSaveEdits->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Save edits (Ctrl+S)", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionReload->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Reload the table", nullptr));
#if QT_CONFIG(tooltip)
        mActionReload->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Reload the table", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionAddFeature->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Add feature", nullptr));
        mActionDeleteSelected->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Delete selected features", nullptr));
#if QT_CONFIG(tooltip)
        mActionDeleteSelected->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Delete selected features", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionDeleteSelected->setShortcut(QCoreApplication::translate("QgsAttributeTableDialog", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionExpressionSelect->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Select features using an expression", nullptr));
#if QT_CONFIG(tooltip)
        mActionExpressionSelect->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Select features using an expression", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionSelectAll->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Select all", nullptr));
#if QT_CONFIG(tooltip)
        mActionSelectAll->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Select all (Ctrl+A)", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionInvertSelection->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Invert selection", nullptr));
#if QT_CONFIG(tooltip)
        mActionInvertSelection->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Invert selection (Ctrl+R)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionInvertSelection->setShortcut(QCoreApplication::translate("QgsAttributeTableDialog", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionRemoveSelection->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Deselect all features from the layer", nullptr));
#if QT_CONFIG(tooltip)
        mActionRemoveSelection->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Deselect all features from the layer (Ctrl+Shift+A)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionRemoveSelection->setShortcut(QCoreApplication::translate("QgsAttributeTableDialog", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSelectedToTop->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Move selection to top", nullptr));
#if QT_CONFIG(tooltip)
        mActionSelectedToTop->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Move selection to top", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionPanMapToSelectedRows->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Pan map to the selected rows", nullptr));
#if QT_CONFIG(tooltip)
        mActionPanMapToSelectedRows->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Pan map to the selected rows (Ctrl+P)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionPanMapToSelectedRows->setShortcut(QCoreApplication::translate("QgsAttributeTableDialog", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionZoomMapToSelectedRows->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Zoom map to the selected rows", nullptr));
#if QT_CONFIG(tooltip)
        mActionZoomMapToSelectedRows->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Zoom map to the selected rows (Ctrl+J)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionZoomMapToSelectedRows->setShortcut(QCoreApplication::translate("QgsAttributeTableDialog", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionCutSelectedRows->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Cut selected rows to clipboard", nullptr));
#if QT_CONFIG(tooltip)
        mActionCutSelectedRows->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Cut selected rows to clipboard (Ctrl+X)", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionCopySelectedRows->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Copy selected rows to clipboard", nullptr));
#if QT_CONFIG(tooltip)
        mActionCopySelectedRows->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Copy selected rows to clipboard (Ctrl+C)", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionPasteFeatures->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Paste features from clipboard", nullptr));
#if QT_CONFIG(tooltip)
        mActionPasteFeatures->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Paste features from clipboard (Ctrl+V)", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRemoveAttribute->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Delete field", nullptr));
#if QT_CONFIG(tooltip)
        mActionRemoveAttribute->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Delete field (Ctrl+L)", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionAddAttribute->setText(QCoreApplication::translate("QgsAttributeTableDialog", "New field", nullptr));
#if QT_CONFIG(tooltip)
        mActionAddAttribute->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "New field (Ctrl+W)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionAddAttribute->setShortcut(QCoreApplication::translate("QgsAttributeTableDialog", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionOpenFieldCalculator->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Open field calculator", nullptr));
#if QT_CONFIG(tooltip)
        mActionOpenFieldCalculator->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Open field calculator (Ctrl+I)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mActionOpenFieldCalculator->setShortcut(QCoreApplication::translate("QgsAttributeTableDialog", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        mActionSetStyles->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Conditional formatting", nullptr));
#if QT_CONFIG(tooltip)
        mActionSetStyles->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Conditional formatting", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionOrganizeColumns->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Organize Columns", nullptr));
        mActionAddFeatureViaAttributeTable->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Add feature via attribute table", nullptr));
        mActionAddFeatureViaAttributeForm->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Add feature via attribute form", nullptr));
#if QT_CONFIG(tooltip)
        mActionAddFeatureViaAttributeForm->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Add feature via attribute form", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsAttributeTableDialog", "=", nullptr));
        mRunFieldCalc->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Update All", nullptr));
        mRunFieldCalcSelected->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Update Selected", nullptr));
#if QT_CONFIG(tooltip)
        mAttributeViewButton->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Switch to form view", nullptr));
#endif // QT_CONFIG(tooltip)
        mAttributeViewButton->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Form View", nullptr));
#if QT_CONFIG(tooltip)
        mTableViewButton->setToolTip(QCoreApplication::translate("QgsAttributeTableDialog", "Switch to table view", nullptr));
#endif // QT_CONFIG(tooltip)
        mTableViewButton->setText(QCoreApplication::translate("QgsAttributeTableDialog", "Table View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeTableDialog: public Ui_QgsAttributeTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTETABLEDIALOG_H
