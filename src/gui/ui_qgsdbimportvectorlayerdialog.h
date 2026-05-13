/********************************************************************************
** Form generated from reading UI file 'qgsdbimportvectorlayerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDBIMPORTVECTORLAYERDIALOG_H
#define UI_QGSDBIMPORTVECTORLAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsexpressionlineedit.h"
#include "qgsextentgroupbox.h"
#include "qgsfieldmappingwidget.h"
#include "qgsmaplayercombobox.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDbImportVectorLayerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QgsMapLayerComboBox *mSourceLayerComboBox;
    QLabel *mLabelSchemas_2;
    QCheckBox *mSourceLayerOnlySelected;
    QGroupBox *mGroupBoxOutput;
    QGridLayout *gridLayout_2;
    QLabel *mLabelSchemas;
    QLabel *label_3;
    QLineEdit *mEditTable;
    QCheckBox *mChkDropTable;
    QHBoxLayout *mLayoutSchemeCombo;
    QGroupBox *mGroupBoxSettings;
    QGridLayout *gridLayout;
    QLabel *mLabelComment;
    QLabel *mLabelGeometryColumn;
    QTextEdit *mEditComment;
    QLabel *mLabelPrimaryKey;
    QLineEdit *mEditGeometryColumnName;
    QLineEdit *mEditPrimaryKey;
    QLabel *mLabelDestinationCrs;
    QgsProjectionSelectionWidget *mCrsSelector;
    QgsCollapsibleGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QVBoxLayout *buttonLayout;
    QToolButton *mAddButton;
    QToolButton *mDeleteButton;
    QToolButton *mUpButton;
    QToolButton *mDownButton;
    QToolButton *mResetButton;
    QToolButton *mEditButton;
    QSpacerItem *verticalSpacer_2;
    QgsFieldMappingWidget *mFieldsView;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QgsExpressionLineEdit *mFilterExpressionWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsDbImportVectorLayerDialog)
    {
        if (QgsDbImportVectorLayerDialog->objectName().isEmpty())
            QgsDbImportVectorLayerDialog->setObjectName(QString::fromUtf8("QgsDbImportVectorLayerDialog"));
        QgsDbImportVectorLayerDialog->resize(922, 891);
        verticalLayout = new QVBoxLayout(QgsDbImportVectorLayerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(QgsDbImportVectorLayerDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        mSourceLayerComboBox = new QgsMapLayerComboBox(groupBox);
        mSourceLayerComboBox->setObjectName(QString::fromUtf8("mSourceLayerComboBox"));

        horizontalLayout->addWidget(mSourceLayerComboBox);


        gridLayout_3->addLayout(horizontalLayout, 1, 1, 1, 1);

        mLabelSchemas_2 = new QLabel(groupBox);
        mLabelSchemas_2->setObjectName(QString::fromUtf8("mLabelSchemas_2"));

        gridLayout_3->addWidget(mLabelSchemas_2, 1, 0, 1, 1);

        mSourceLayerOnlySelected = new QCheckBox(groupBox);
        mSourceLayerOnlySelected->setObjectName(QString::fromUtf8("mSourceLayerOnlySelected"));

        gridLayout_3->addWidget(mSourceLayerOnlySelected, 2, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox);

        mGroupBoxOutput = new QGroupBox(QgsDbImportVectorLayerDialog);
        mGroupBoxOutput->setObjectName(QString::fromUtf8("mGroupBoxOutput"));
        gridLayout_2 = new QGridLayout(mGroupBoxOutput);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mLabelSchemas = new QLabel(mGroupBoxOutput);
        mLabelSchemas->setObjectName(QString::fromUtf8("mLabelSchemas"));

        gridLayout_2->addWidget(mLabelSchemas, 0, 0, 1, 1);

        label_3 = new QLabel(mGroupBoxOutput);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        mEditTable = new QLineEdit(mGroupBoxOutput);
        mEditTable->setObjectName(QString::fromUtf8("mEditTable"));

        gridLayout_2->addWidget(mEditTable, 1, 1, 1, 1);

        mChkDropTable = new QCheckBox(mGroupBoxOutput);
        mChkDropTable->setObjectName(QString::fromUtf8("mChkDropTable"));

        gridLayout_2->addWidget(mChkDropTable, 2, 0, 1, 2);

        mLayoutSchemeCombo = new QHBoxLayout();
        mLayoutSchemeCombo->setSpacing(0);
        mLayoutSchemeCombo->setObjectName(QString::fromUtf8("mLayoutSchemeCombo"));

        gridLayout_2->addLayout(mLayoutSchemeCombo, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        verticalLayout->addWidget(mGroupBoxOutput);

        mGroupBoxSettings = new QGroupBox(QgsDbImportVectorLayerDialog);
        mGroupBoxSettings->setObjectName(QString::fromUtf8("mGroupBoxSettings"));
        gridLayout = new QGridLayout(mGroupBoxSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLabelComment = new QLabel(mGroupBoxSettings);
        mLabelComment->setObjectName(QString::fromUtf8("mLabelComment"));

        gridLayout->addWidget(mLabelComment, 3, 0, 1, 1);

        mLabelGeometryColumn = new QLabel(mGroupBoxSettings);
        mLabelGeometryColumn->setObjectName(QString::fromUtf8("mLabelGeometryColumn"));

        gridLayout->addWidget(mLabelGeometryColumn, 1, 0, 1, 1);

        mEditComment = new QTextEdit(mGroupBoxSettings);
        mEditComment->setObjectName(QString::fromUtf8("mEditComment"));
        mEditComment->setEnabled(true);

        gridLayout->addWidget(mEditComment, 3, 1, 1, 1);

        mLabelPrimaryKey = new QLabel(mGroupBoxSettings);
        mLabelPrimaryKey->setObjectName(QString::fromUtf8("mLabelPrimaryKey"));

        gridLayout->addWidget(mLabelPrimaryKey, 0, 0, 1, 1);

        mEditGeometryColumnName = new QLineEdit(mGroupBoxSettings);
        mEditGeometryColumnName->setObjectName(QString::fromUtf8("mEditGeometryColumnName"));

        gridLayout->addWidget(mEditGeometryColumnName, 1, 1, 1, 1);

        mEditPrimaryKey = new QLineEdit(mGroupBoxSettings);
        mEditPrimaryKey->setObjectName(QString::fromUtf8("mEditPrimaryKey"));

        gridLayout->addWidget(mEditPrimaryKey, 0, 1, 1, 1);

        mLabelDestinationCrs = new QLabel(mGroupBoxSettings);
        mLabelDestinationCrs->setObjectName(QString::fromUtf8("mLabelDestinationCrs"));

        gridLayout->addWidget(mLabelDestinationCrs, 2, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(mGroupBoxSettings);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mCrsSelector, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout->addWidget(mGroupBoxSettings);

        groupBox_3 = new QgsCollapsibleGroupBox(QgsDbImportVectorLayerDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        buttonLayout = new QVBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        mAddButton = new QToolButton(groupBox_3);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddButton->setIcon(icon);

        buttonLayout->addWidget(mAddButton);

        mDeleteButton = new QToolButton(groupBox_3);
        mDeleteButton->setObjectName(QString::fromUtf8("mDeleteButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteButton->setIcon(icon1);

        buttonLayout->addWidget(mDeleteButton);

        mUpButton = new QToolButton(groupBox_3);
        mUpButton->setObjectName(QString::fromUtf8("mUpButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mUpButton->setIcon(icon2);

        buttonLayout->addWidget(mUpButton);

        mDownButton = new QToolButton(groupBox_3);
        mDownButton->setObjectName(QString::fromUtf8("mDownButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDownButton->setIcon(icon3);

        buttonLayout->addWidget(mDownButton);

        mResetButton = new QToolButton(groupBox_3);
        mResetButton->setObjectName(QString::fromUtf8("mResetButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mIconClearText.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetButton->setIcon(icon4);

        buttonLayout->addWidget(mResetButton);

        mEditButton = new QToolButton(groupBox_3);
        mEditButton->setObjectName(QString::fromUtf8("mEditButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditButton->setIcon(icon5);

        buttonLayout->addWidget(mEditButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        buttonLayout->addItem(verticalSpacer_2);


        gridLayout_5->addLayout(buttonLayout, 0, 1, 2, 2);

        mFieldsView = new QgsFieldMappingWidget(groupBox_3);
        mFieldsView->setObjectName(QString::fromUtf8("mFieldsView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFieldsView->sizePolicy().hasHeightForWidth());
        mFieldsView->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(mFieldsView, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        mExtentGroupBox = new QgsExtentGroupBox(QgsDbImportVectorLayerDialog);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));
        mExtentGroupBox->setCheckable(true);

        verticalLayout->addWidget(mExtentGroupBox);

        groupBox_2 = new QgsCollapsibleGroupBox(QgsDbImportVectorLayerDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        mFilterExpressionWidget = new QgsExpressionLineEdit(groupBox_2);
        mFilterExpressionWidget->setObjectName(QString::fromUtf8("mFilterExpressionWidget"));
        mFilterExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mFilterExpressionWidget, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mButtonBox = new QDialogButtonBox(QgsDbImportVectorLayerDialog);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtonBox);

        verticalLayout->setStretch(3, 1);
        mGroupBoxSettings->raise();
        mButtonBox->raise();
        mGroupBoxOutput->raise();
        groupBox->raise();
        groupBox_2->raise();
        mExtentGroupBox->raise();
        groupBox_3->raise();
        QWidget::setTabOrder(mSourceLayerComboBox, mEditTable);
        QWidget::setTabOrder(mEditTable, mChkDropTable);
        QWidget::setTabOrder(mChkDropTable, mEditPrimaryKey);
        QWidget::setTabOrder(mEditPrimaryKey, mEditGeometryColumnName);
        QWidget::setTabOrder(mEditGeometryColumnName, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mEditComment);

        retranslateUi(QgsDbImportVectorLayerDialog);

        QMetaObject::connectSlotsByName(QgsDbImportVectorLayerDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDbImportVectorLayerDialog)
    {
        QgsDbImportVectorLayerDialog->setWindowTitle(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Import Vector Layer", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Input", nullptr));
#if QT_CONFIG(tooltip)
        mSourceLayerComboBox->setToolTip(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Allows the annotation to be associated with a map layer. If set, the annotation will only be visible when the layer is visible.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLabelSchemas_2->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Source layer", nullptr));
        mSourceLayerOnlySelected->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Selected features only", nullptr));
        mGroupBoxOutput->setTitle(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Output", nullptr));
        mLabelSchemas->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Schema", nullptr));
        label_3->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Table name", nullptr));
        mChkDropTable->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Replace destination table (if exists)", nullptr));
        mGroupBoxSettings->setTitle(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Options", nullptr));
        mLabelComment->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Comment", nullptr));
        mLabelGeometryColumn->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Geometry column", nullptr));
        mLabelPrimaryKey->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Primary key", nullptr));
        mLabelDestinationCrs->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Output CRS", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Attributes", nullptr));
#if QT_CONFIG(tooltip)
        mAddButton->setToolTip(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Add new field", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddButton->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "add", nullptr));
#if QT_CONFIG(tooltip)
        mDeleteButton->setToolTip(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Delete selected field", nullptr));
#endif // QT_CONFIG(tooltip)
        mDeleteButton->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "delete", nullptr));
#if QT_CONFIG(tooltip)
        mUpButton->setToolTip(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Move selected field up", nullptr));
#endif // QT_CONFIG(tooltip)
        mUpButton->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "up", nullptr));
#if QT_CONFIG(tooltip)
        mDownButton->setToolTip(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Move selected field down", nullptr));
#endif // QT_CONFIG(tooltip)
        mDownButton->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "down", nullptr));
#if QT_CONFIG(tooltip)
        mResetButton->setToolTip(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Reset all fields", nullptr));
#endif // QT_CONFIG(tooltip)
        mResetButton->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "reset", nullptr));
        mEditButton->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "edits", nullptr));
        mExtentGroupBox->setTitle(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Filter by Extent", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Filtering", nullptr));
        label->setText(QCoreApplication::translate("QgsDbImportVectorLayerDialog", "Feature filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDbImportVectorLayerDialog: public Ui_QgsDbImportVectorLayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDBIMPORTVECTORLAYERDIALOG_H
