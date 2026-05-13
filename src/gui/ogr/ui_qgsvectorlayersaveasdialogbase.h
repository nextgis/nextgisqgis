/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayersaveasdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERSAVEASDIALOGBASE_H
#define UI_QGSVECTORLAYERSAVEASDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsfilewidget.h"
#include "qgsfilterlineedit.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerSaveAsDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QLabel *mCrsLabel;
    QgsFileWidget *mFilename;
    QLabel *label_2;
    QComboBox *mFormatComboBox;
    QLabel *label;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_7;
    QgsFilterLineEdit *leLayername;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *mEncodingComboBox;
    QCheckBox *mSelectedOnly;
    QgsCollapsibleGroupBox *mAttributesSelection;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *mAttributeTable;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mSelectAllAttributes;
    QPushButton *mDeselectAllAttributes;
    QCheckBox *mUseAliasesForExportedName;
    QCheckBox *mReplaceRawFieldValues;
    QCheckBox *mCheckPersistMetadata;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mSymbologyExportLabel;
    QComboBox *mSymbologyExportComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mScaleLabel;
    QgsScaleWidget *mScaleWidget;
    QgsCollapsibleGroupBox *mGeometryGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mSymbologyExportLabel_2;
    QComboBox *mGeometryTypeComboBox;
    QCheckBox *mIncludeZCheckBox;
    QCheckBox *mForceMultiCheckBox;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsCollapsibleGroupBox *mDatasourceOptionsGroupBox;
    QFormLayout *formLayout;
    QgsCollapsibleGroupBox *mLayerOptionsGroupBox;
    QFormLayout *formLayout_2;
    QgsCollapsibleGroupBox *mOgrOptionsGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QTextEdit *mOgrDatasourceOptions;
    QLabel *label_6;
    QTextEdit *mOgrLayerOptions;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout1;
    QDialogButtonBox *mHelpButtonBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mAddToCanvas;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsVectorLayerSaveAsDialogBase)
    {
        if (QgsVectorLayerSaveAsDialogBase->objectName().isEmpty())
            QgsVectorLayerSaveAsDialogBase->setObjectName(QString::fromUtf8("QgsVectorLayerSaveAsDialogBase"));
        QgsVectorLayerSaveAsDialogBase->resize(591, 632);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsVectorLayerSaveAsDialogBase->sizePolicy().hasHeightForWidth());
        QgsVectorLayerSaveAsDialogBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsVectorLayerSaveAsDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(QgsVectorLayerSaveAsDialogBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mCrsLabel = new QLabel(widget);
        mCrsLabel->setObjectName(QString::fromUtf8("mCrsLabel"));

        gridLayout_4->addWidget(mCrsLabel, 3, 0, 1, 1);

        mFilename = new QgsFileWidget(widget);
        mFilename->setObjectName(QString::fromUtf8("mFilename"));
        mFilename->setEnabled(false);

        gridLayout_4->addWidget(mFilename, 1, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        mFormatComboBox = new QComboBox(widget);
        mFormatComboBox->setObjectName(QString::fromUtf8("mFormatComboBox"));

        gridLayout_4->addWidget(mFormatComboBox, 0, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(widget);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 3, 2, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 2, 0, 1, 1);

        leLayername = new QgsFilterLineEdit(widget);
        leLayername->setObjectName(QString::fromUtf8("leLayername"));
        leLayername->setEnabled(false);

        gridLayout_4->addWidget(leLayername, 2, 2, 1, 1);


        verticalLayout_2->addWidget(widget);

        scrollArea = new QgsScrollArea(QgsVectorLayerSaveAsDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 557, 1000));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        mEncodingComboBox = new QComboBox(scrollAreaWidgetContents);
        mEncodingComboBox->setObjectName(QString::fromUtf8("mEncodingComboBox"));

        horizontalLayout_3->addWidget(mEncodingComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        mSelectedOnly = new QCheckBox(scrollAreaWidgetContents);
        mSelectedOnly->setObjectName(QString::fromUtf8("mSelectedOnly"));

        verticalLayout->addWidget(mSelectedOnly);

        mAttributesSelection = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mAttributesSelection->setObjectName(QString::fromUtf8("mAttributesSelection"));
        mAttributesSelection->setCheckable(false);
        mAttributesSelection->setChecked(false);
        mAttributesSelection->setProperty("collapsed", QVariant(true));
        verticalLayout_4 = new QVBoxLayout(mAttributesSelection);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mAttributeTable = new QTableWidget(mAttributesSelection);
        if (mAttributeTable->columnCount() < 2)
            mAttributeTable->setColumnCount(2);
        if (mAttributeTable->rowCount() < 1)
            mAttributeTable->setRowCount(1);
        mAttributeTable->setObjectName(QString::fromUtf8("mAttributeTable"));
        mAttributeTable->setMinimumSize(QSize(0, 200));
        mAttributeTable->setRowCount(1);
        mAttributeTable->setColumnCount(2);
        mAttributeTable->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(mAttributeTable);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mSelectAllAttributes = new QPushButton(mAttributesSelection);
        mSelectAllAttributes->setObjectName(QString::fromUtf8("mSelectAllAttributes"));

        horizontalLayout_5->addWidget(mSelectAllAttributes);

        mDeselectAllAttributes = new QPushButton(mAttributesSelection);
        mDeselectAllAttributes->setObjectName(QString::fromUtf8("mDeselectAllAttributes"));

        horizontalLayout_5->addWidget(mDeselectAllAttributes);


        verticalLayout_4->addLayout(horizontalLayout_5);

        mUseAliasesForExportedName = new QCheckBox(mAttributesSelection);
        mUseAliasesForExportedName->setObjectName(QString::fromUtf8("mUseAliasesForExportedName"));

        verticalLayout_4->addWidget(mUseAliasesForExportedName);

        mReplaceRawFieldValues = new QCheckBox(mAttributesSelection);
        mReplaceRawFieldValues->setObjectName(QString::fromUtf8("mReplaceRawFieldValues"));

        verticalLayout_4->addWidget(mReplaceRawFieldValues);


        verticalLayout->addWidget(mAttributesSelection);

        mCheckPersistMetadata = new QCheckBox(scrollAreaWidgetContents);
        mCheckPersistMetadata->setObjectName(QString::fromUtf8("mCheckPersistMetadata"));
        mCheckPersistMetadata->setChecked(true);

        verticalLayout->addWidget(mCheckPersistMetadata);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSymbologyExportLabel = new QLabel(scrollAreaWidgetContents);
        mSymbologyExportLabel->setObjectName(QString::fromUtf8("mSymbologyExportLabel"));

        horizontalLayout_2->addWidget(mSymbologyExportLabel);

        mSymbologyExportComboBox = new QComboBox(scrollAreaWidgetContents);
        mSymbologyExportComboBox->setObjectName(QString::fromUtf8("mSymbologyExportComboBox"));

        horizontalLayout_2->addWidget(mSymbologyExportComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mScaleLabel = new QLabel(scrollAreaWidgetContents);
        mScaleLabel->setObjectName(QString::fromUtf8("mScaleLabel"));

        horizontalLayout->addWidget(mScaleLabel);

        mScaleWidget = new QgsScaleWidget(scrollAreaWidgetContents);
        mScaleWidget->setObjectName(QString::fromUtf8("mScaleWidget"));
        mScaleWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mScaleWidget);


        verticalLayout->addLayout(horizontalLayout);

        mGeometryGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mGeometryGroupBox->setObjectName(QString::fromUtf8("mGeometryGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mGeometryGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mSymbologyExportLabel_2 = new QLabel(mGeometryGroupBox);
        mSymbologyExportLabel_2->setObjectName(QString::fromUtf8("mSymbologyExportLabel_2"));

        horizontalLayout_4->addWidget(mSymbologyExportLabel_2);

        mGeometryTypeComboBox = new QComboBox(mGeometryGroupBox);
        mGeometryTypeComboBox->setObjectName(QString::fromUtf8("mGeometryTypeComboBox"));

        horizontalLayout_4->addWidget(mGeometryTypeComboBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        mIncludeZCheckBox = new QCheckBox(mGeometryGroupBox);
        mIncludeZCheckBox->setObjectName(QString::fromUtf8("mIncludeZCheckBox"));

        verticalLayout_3->addWidget(mIncludeZCheckBox);

        mForceMultiCheckBox = new QCheckBox(mGeometryGroupBox);
        mForceMultiCheckBox->setObjectName(QString::fromUtf8("mForceMultiCheckBox"));

        verticalLayout_3->addWidget(mForceMultiCheckBox);


        verticalLayout->addWidget(mGeometryGroupBox);

        mExtentGroupBox = new QgsExtentGroupBox(scrollAreaWidgetContents);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));

        verticalLayout->addWidget(mExtentGroupBox);

        mDatasourceOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mDatasourceOptionsGroupBox->setObjectName(QString::fromUtf8("mDatasourceOptionsGroupBox"));
        formLayout = new QFormLayout(mDatasourceOptionsGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        verticalLayout->addWidget(mDatasourceOptionsGroupBox);

        mLayerOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mLayerOptionsGroupBox->setObjectName(QString::fromUtf8("mLayerOptionsGroupBox"));
        formLayout_2 = new QFormLayout(mLayerOptionsGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        verticalLayout->addWidget(mLayerOptionsGroupBox);

        mOgrOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mOgrOptionsGroupBox->setObjectName(QString::fromUtf8("mOgrOptionsGroupBox"));
        mOgrOptionsGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_3 = new QGridLayout(mOgrOptionsGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(mOgrOptionsGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        mOgrDatasourceOptions = new QTextEdit(mOgrOptionsGroupBox);
        mOgrDatasourceOptions->setObjectName(QString::fromUtf8("mOgrDatasourceOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOgrDatasourceOptions->sizePolicy().hasHeightForWidth());
        mOgrDatasourceOptions->setSizePolicy(sizePolicy1);
        mOgrDatasourceOptions->setMinimumSize(QSize(0, 0));
        mOgrDatasourceOptions->setMaximumSize(QSize(16777215, 16777215));
        mOgrDatasourceOptions->setBaseSize(QSize(0, 0));

        gridLayout_3->addWidget(mOgrDatasourceOptions, 0, 1, 1, 1);

        label_6 = new QLabel(mOgrOptionsGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        mOgrLayerOptions = new QTextEdit(mOgrOptionsGroupBox);
        mOgrLayerOptions->setObjectName(QString::fromUtf8("mOgrLayerOptions"));
        sizePolicy1.setHeightForWidth(mOgrLayerOptions->sizePolicy().hasHeightForWidth());
        mOgrLayerOptions->setSizePolicy(sizePolicy1);
        mOgrLayerOptions->setMinimumSize(QSize(0, 0));
        mOgrLayerOptions->setMaximumSize(QSize(16777215, 16777215));
        mOgrLayerOptions->setBaseSize(QSize(0, 0));

        gridLayout_3->addWidget(mOgrLayerOptions, 1, 1, 1, 1);

        label_6->raise();
        label_5->raise();
        mOgrDatasourceOptions->raise();
        mOgrLayerOptions->raise();

        verticalLayout->addWidget(mOgrOptionsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        mHelpButtonBox = new QDialogButtonBox(QgsVectorLayerSaveAsDialogBase);
        mHelpButtonBox->setObjectName(QString::fromUtf8("mHelpButtonBox"));
        mHelpButtonBox->setOrientation(Qt::Horizontal);
        mHelpButtonBox->setStandardButtons(QDialogButtonBox::Help);

        horizontalLayout1->addWidget(mHelpButtonBox);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer);

        mAddToCanvas = new QCheckBox(QgsVectorLayerSaveAsDialogBase);
        mAddToCanvas->setObjectName(QString::fromUtf8("mAddToCanvas"));
        mAddToCanvas->setChecked(true);

        horizontalLayout1->addWidget(mAddToCanvas);

        mButtonBox = new QDialogButtonBox(QgsVectorLayerSaveAsDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout1->addWidget(mButtonBox);


        verticalLayout_2->addLayout(horizontalLayout1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(mFormatComboBox);
        label->setBuddy(mFilename);
        label_7->setBuddy(leLayername);
        label_4->setBuddy(mEncodingComboBox);
        label_5->setBuddy(mOgrDatasourceOptions);
        label_6->setBuddy(mOgrLayerOptions);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mFormatComboBox, leLayername);
        QWidget::setTabOrder(leLayername, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, scrollArea);
        QWidget::setTabOrder(scrollArea, mEncodingComboBox);
        QWidget::setTabOrder(mEncodingComboBox, mSelectedOnly);
        QWidget::setTabOrder(mSelectedOnly, mAttributeTable);
        QWidget::setTabOrder(mAttributeTable, mSelectAllAttributes);
        QWidget::setTabOrder(mSelectAllAttributes, mDeselectAllAttributes);
        QWidget::setTabOrder(mDeselectAllAttributes, mReplaceRawFieldValues);
        QWidget::setTabOrder(mReplaceRawFieldValues, mCheckPersistMetadata);
        QWidget::setTabOrder(mCheckPersistMetadata, mSymbologyExportComboBox);
        QWidget::setTabOrder(mSymbologyExportComboBox, mScaleWidget);
        QWidget::setTabOrder(mScaleWidget, mGeometryTypeComboBox);
        QWidget::setTabOrder(mGeometryTypeComboBox, mForceMultiCheckBox);
        QWidget::setTabOrder(mForceMultiCheckBox, mIncludeZCheckBox);
        QWidget::setTabOrder(mIncludeZCheckBox, mOgrDatasourceOptions);
        QWidget::setTabOrder(mOgrDatasourceOptions, mOgrLayerOptions);
        QWidget::setTabOrder(mOgrLayerOptions, mAddToCanvas);

        retranslateUi(QgsVectorLayerSaveAsDialogBase);

        QMetaObject::connectSlotsByName(QgsVectorLayerSaveAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerSaveAsDialogBase)
    {
        QgsVectorLayerSaveAsDialogBase->setWindowTitle(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Save Vector Layer as\342\200\246", nullptr));
        mCrsLabel->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "CRS", nullptr));
        label_2->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Format", nullptr));
        label->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "File name", nullptr));
        label_7->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Layer name", nullptr));
        label_4->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Encoding", nullptr));
        mSelectedOnly->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Save only selected features", nullptr));
        mAttributesSelection->setTitle(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Select fields to export and their export options", nullptr));
        mSelectAllAttributes->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Select All", nullptr));
        mDeselectAllAttributes->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Deselect All", nullptr));
        mUseAliasesForExportedName->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Use aliases for exported name", nullptr));
        mReplaceRawFieldValues->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Replace all selected raw field values by displayed values", nullptr));
#if QT_CONFIG(tooltip)
        mCheckPersistMetadata->setToolTip(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "If checked, any metadata present in the source layer will be copied to the output layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckPersistMetadata->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Persist layer metadata", nullptr));
        mSymbologyExportLabel->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Symbology export", nullptr));
        mScaleLabel->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Scale", nullptr));
        mGeometryGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Geometry", nullptr));
        mSymbologyExportLabel_2->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Geometry type", nullptr));
        mIncludeZCheckBox->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Include z-dimension", nullptr));
        mForceMultiCheckBox->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Force multi-type", nullptr));
        mExtentGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Extent", nullptr));
        mDatasourceOptionsGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Datasource Options", nullptr));
        mLayerOptionsGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Layer Options", nullptr));
        mOgrOptionsGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Custom Options", nullptr));
        label_5->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Data source", nullptr));
        label_6->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Layer", nullptr));
        mAddToCanvas->setText(QCoreApplication::translate("QgsVectorLayerSaveAsDialogBase", "Add saved file to map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerSaveAsDialogBase: public Ui_QgsVectorLayerSaveAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERSAVEASDIALOGBASE_H
