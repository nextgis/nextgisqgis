/********************************************************************************
** Form generated from reading UI file 'qgspointcloudlayersaveasdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDLAYERSAVEASDIALOGBASE_H
#define UI_QGSPOINTCLOUDLAYERSAVEASDIALOGBASE_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsextentgroupbox.h"
#include "qgsfilewidget.h"
#include "qgsfilterlineedit.h"
#include "qgsmaplayercombobox.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudLayerSaveAsDialogBase
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
    QgsCollapsibleGroupBox *mAttributesSelection;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *mAttributeTable;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mSelectAllAttributes;
    QPushButton *mDeselectAllAttributes;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsCollapsibleGroupBox *mFilterGeometryGroupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QgsMapLayerComboBox *mFilterGeometryLayerComboBox;
    QCheckBox *mSelectedFeaturesCheckBox;
    QgsCollapsibleGroupBox *mZRangeGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QgsDoubleSpinBox *mMaximumZSpinBox;
    QgsDoubleSpinBox *mMinimumZSpinBox;
    QLabel *label_3;
    QgsCollapsibleGroupBox *mPointsLimitGroupBox;
    QFormLayout *formLayout;
    QLabel *label_5;
    QgsSpinBox *mPointsLimitSpinBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout1;
    QDialogButtonBox *mHelpButtonBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mAddToCanvas;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsPointCloudLayerSaveAsDialogBase)
    {
        if (QgsPointCloudLayerSaveAsDialogBase->objectName().isEmpty())
            QgsPointCloudLayerSaveAsDialogBase->setObjectName(QString::fromUtf8("QgsPointCloudLayerSaveAsDialogBase"));
        QgsPointCloudLayerSaveAsDialogBase->resize(591, 632);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsPointCloudLayerSaveAsDialogBase->sizePolicy().hasHeightForWidth());
        QgsPointCloudLayerSaveAsDialogBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsPointCloudLayerSaveAsDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(QgsPointCloudLayerSaveAsDialogBase);
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

        scrollArea = new QgsScrollArea(QgsPointCloudLayerSaveAsDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -72, 557, 616));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mAttributesSelection = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mAttributesSelection->setObjectName(QString::fromUtf8("mAttributesSelection"));
        mAttributesSelection->setCheckable(true);
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


        verticalLayout->addWidget(mAttributesSelection);

        mExtentGroupBox = new QgsExtentGroupBox(scrollAreaWidgetContents);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));

        verticalLayout->addWidget(mExtentGroupBox);

        mFilterGeometryGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mFilterGeometryGroupBox->setObjectName(QString::fromUtf8("mFilterGeometryGroupBox"));
        mFilterGeometryGroupBox->setCheckable(true);
        mFilterGeometryGroupBox->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(mFilterGeometryGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(mFilterGeometryGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        mFilterGeometryLayerComboBox = new QgsMapLayerComboBox(mFilterGeometryGroupBox);
        mFilterGeometryLayerComboBox->setObjectName(QString::fromUtf8("mFilterGeometryLayerComboBox"));

        verticalLayout_3->addWidget(mFilterGeometryLayerComboBox);

        mSelectedFeaturesCheckBox = new QCheckBox(mFilterGeometryGroupBox);
        mSelectedFeaturesCheckBox->setObjectName(QString::fromUtf8("mSelectedFeaturesCheckBox"));

        verticalLayout_3->addWidget(mSelectedFeaturesCheckBox);


        verticalLayout->addWidget(mFilterGeometryGroupBox);

        mZRangeGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mZRangeGroupBox->setObjectName(QString::fromUtf8("mZRangeGroupBox"));
        mZRangeGroupBox->setCheckable(true);
        mZRangeGroupBox->setChecked(false);
        gridLayout = new QGridLayout(mZRangeGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(mZRangeGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        mMaximumZSpinBox = new QgsDoubleSpinBox(mZRangeGroupBox);
        mMaximumZSpinBox->setObjectName(QString::fromUtf8("mMaximumZSpinBox"));

        gridLayout->addWidget(mMaximumZSpinBox, 2, 1, 1, 1);

        mMinimumZSpinBox = new QgsDoubleSpinBox(mZRangeGroupBox);
        mMinimumZSpinBox->setObjectName(QString::fromUtf8("mMinimumZSpinBox"));

        gridLayout->addWidget(mMinimumZSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(mZRangeGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);


        verticalLayout->addWidget(mZRangeGroupBox);

        mPointsLimitGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mPointsLimitGroupBox->setObjectName(QString::fromUtf8("mPointsLimitGroupBox"));
        mPointsLimitGroupBox->setCheckable(true);
        mPointsLimitGroupBox->setChecked(false);
        formLayout = new QFormLayout(mPointsLimitGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(mPointsLimitGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        mPointsLimitSpinBox = new QgsSpinBox(mPointsLimitGroupBox);
        mPointsLimitSpinBox->setObjectName(QString::fromUtf8("mPointsLimitSpinBox"));
        mPointsLimitSpinBox->setMinimum(1);
        mPointsLimitSpinBox->setSingleStep(100000);

        formLayout->setWidget(0, QFormLayout::FieldRole, mPointsLimitSpinBox);


        verticalLayout->addWidget(mPointsLimitGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        mHelpButtonBox = new QDialogButtonBox(QgsPointCloudLayerSaveAsDialogBase);
        mHelpButtonBox->setObjectName(QString::fromUtf8("mHelpButtonBox"));
        mHelpButtonBox->setOrientation(Qt::Horizontal);
        mHelpButtonBox->setStandardButtons(QDialogButtonBox::Help);

        horizontalLayout1->addWidget(mHelpButtonBox);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer);

        mAddToCanvas = new QCheckBox(QgsPointCloudLayerSaveAsDialogBase);
        mAddToCanvas->setObjectName(QString::fromUtf8("mAddToCanvas"));
        mAddToCanvas->setChecked(true);

        horizontalLayout1->addWidget(mAddToCanvas);

        mButtonBox = new QDialogButtonBox(QgsPointCloudLayerSaveAsDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout1->addWidget(mButtonBox);


        verticalLayout_2->addLayout(horizontalLayout1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(mFormatComboBox);
        label->setBuddy(mFilename);
        label_7->setBuddy(leLayername);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mFormatComboBox, leLayername);
        QWidget::setTabOrder(leLayername, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, scrollArea);
        QWidget::setTabOrder(scrollArea, mAttributeTable);
        QWidget::setTabOrder(mAttributeTable, mSelectAllAttributes);
        QWidget::setTabOrder(mSelectAllAttributes, mDeselectAllAttributes);
        QWidget::setTabOrder(mDeselectAllAttributes, mAddToCanvas);

        retranslateUi(QgsPointCloudLayerSaveAsDialogBase);

        QMetaObject::connectSlotsByName(QgsPointCloudLayerSaveAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPointCloudLayerSaveAsDialogBase)
    {
        QgsPointCloudLayerSaveAsDialogBase->setWindowTitle(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Save Point Cloud Layer as\342\200\246", nullptr));
        mCrsLabel->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "CRS", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Format", nullptr));
        label->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "File name", nullptr));
        label_7->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Layer name", nullptr));
        mAttributesSelection->setTitle(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Select fields to export", nullptr));
        mSelectAllAttributes->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Select All", nullptr));
        mDeselectAllAttributes->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Deselect All", nullptr));
        mExtentGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Extent", nullptr));
        mFilterGeometryGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Filter by Polygon Layer", nullptr));
        label_6->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Export points intersecting features from layer", nullptr));
        mSelectedFeaturesCheckBox->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Selected features only", nullptr));
        mZRangeGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Elevation Range", nullptr));
        label_4->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Maximum Z value", nullptr));
        label_3->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Minimum Z value", nullptr));
        mPointsLimitGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Limit number of points", nullptr));
        label_5->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Limit total number of exported points to", nullptr));
        mAddToCanvas->setText(QCoreApplication::translate("QgsPointCloudLayerSaveAsDialogBase", "Add saved file to map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudLayerSaveAsDialogBase: public Ui_QgsPointCloudLayerSaveAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDLAYERSAVEASDIALOGBASE_H
