/********************************************************************************
** Form generated from reading UI file 'qgsmaplayersavestyledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPLAYERSAVESTYLEDIALOG_H
#define UI_QGSMAPLAYERSAVESTYLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapLayerSaveStyleDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *mModeLabel;
    QLabel *mStylesWidgetLabel;
    QListWidget *mStylesWidget;
    QWidget *mSaveToSldWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QCheckBox *mSldExportPng;
    QLabel *mFileLabel;
    QWidget *mSaveToDbWidget;
    QGridLayout *gridLayout_3;
    QLineEdit *mDbStyleNameEdit;
    QPlainTextEdit *mDbStyleDescriptionEdit;
    QgsFileWidget *mDbStyleUIFileWidget;
    QCheckBox *mDbStyleUseAsDefault;
    QLabel *mUILabel;
    QLabel *descriptionLabel;
    QLabel *nameLabel;
    QLabel *label_3;
    QListView *mStyleCategoriesListView;
    QPushButton *mSelectAllButton;
    QPushButton *mDeselectAllButton;
    QPushButton *mInvertSelectionButton;
    QDialogButtonBox *buttonBox;
    QComboBox *mStyleTypeComboBox;
    QgsFileWidget *mFileWidget;

    void setupUi(QDialog *QgsMapLayerSaveStyleDialog)
    {
        if (QgsMapLayerSaveStyleDialog->objectName().isEmpty())
            QgsMapLayerSaveStyleDialog->setObjectName(QString::fromUtf8("QgsMapLayerSaveStyleDialog"));
        QgsMapLayerSaveStyleDialog->resize(486, 742);
        gridLayout = new QGridLayout(QgsMapLayerSaveStyleDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mModeLabel = new QLabel(QgsMapLayerSaveStyleDialog);
        mModeLabel->setObjectName(QString::fromUtf8("mModeLabel"));

        gridLayout->addWidget(mModeLabel, 0, 0, 1, 1);

        mStylesWidgetLabel = new QLabel(QgsMapLayerSaveStyleDialog);
        mStylesWidgetLabel->setObjectName(QString::fromUtf8("mStylesWidgetLabel"));

        gridLayout->addWidget(mStylesWidgetLabel, 1, 0, 1, 1);

        mStylesWidget = new QListWidget(QgsMapLayerSaveStyleDialog);
        mStylesWidget->setObjectName(QString::fromUtf8("mStylesWidget"));

        gridLayout->addWidget(mStylesWidget, 1, 1, 1, 4);

        mSaveToSldWidget = new QWidget(QgsMapLayerSaveStyleDialog);
        mSaveToSldWidget->setObjectName(QString::fromUtf8("mSaveToSldWidget"));
        formLayout = new QFormLayout(mSaveToSldWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(mSaveToSldWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mSldExportPng = new QCheckBox(mSaveToSldWidget);
        mSldExportPng->setObjectName(QString::fromUtf8("mSldExportPng"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mSldExportPng);


        gridLayout->addWidget(mSaveToSldWidget, 2, 0, 1, 5);

        mFileLabel = new QLabel(QgsMapLayerSaveStyleDialog);
        mFileLabel->setObjectName(QString::fromUtf8("mFileLabel"));

        gridLayout->addWidget(mFileLabel, 3, 0, 1, 1);

        mSaveToDbWidget = new QWidget(QgsMapLayerSaveStyleDialog);
        mSaveToDbWidget->setObjectName(QString::fromUtf8("mSaveToDbWidget"));
        gridLayout_3 = new QGridLayout(mSaveToDbWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mDbStyleNameEdit = new QLineEdit(mSaveToDbWidget);
        mDbStyleNameEdit->setObjectName(QString::fromUtf8("mDbStyleNameEdit"));

        gridLayout_3->addWidget(mDbStyleNameEdit, 0, 1, 1, 1);

        mDbStyleDescriptionEdit = new QPlainTextEdit(mSaveToDbWidget);
        mDbStyleDescriptionEdit->setObjectName(QString::fromUtf8("mDbStyleDescriptionEdit"));

        gridLayout_3->addWidget(mDbStyleDescriptionEdit, 1, 1, 1, 1);

        mDbStyleUIFileWidget = new QgsFileWidget(mSaveToDbWidget);
        mDbStyleUIFileWidget->setObjectName(QString::fromUtf8("mDbStyleUIFileWidget"));

        gridLayout_3->addWidget(mDbStyleUIFileWidget, 2, 1, 1, 1);

        mDbStyleUseAsDefault = new QCheckBox(mSaveToDbWidget);
        mDbStyleUseAsDefault->setObjectName(QString::fromUtf8("mDbStyleUseAsDefault"));

        gridLayout_3->addWidget(mDbStyleUseAsDefault, 3, 1, 1, 1);

        mUILabel = new QLabel(mSaveToDbWidget);
        mUILabel->setObjectName(QString::fromUtf8("mUILabel"));

        gridLayout_3->addWidget(mUILabel, 2, 0, 1, 1);

        descriptionLabel = new QLabel(mSaveToDbWidget);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        gridLayout_3->addWidget(descriptionLabel, 1, 0, 1, 1);

        nameLabel = new QLabel(mSaveToDbWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout_3->addWidget(nameLabel, 0, 0, 1, 1);


        gridLayout->addWidget(mSaveToDbWidget, 4, 0, 1, 5);

        label_3 = new QLabel(QgsMapLayerSaveStyleDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        mStyleCategoriesListView = new QListView(QgsMapLayerSaveStyleDialog);
        mStyleCategoriesListView->setObjectName(QString::fromUtf8("mStyleCategoriesListView"));

        gridLayout->addWidget(mStyleCategoriesListView, 5, 1, 1, 4);

        mSelectAllButton = new QPushButton(QgsMapLayerSaveStyleDialog);
        mSelectAllButton->setObjectName(QString::fromUtf8("mSelectAllButton"));

        gridLayout->addWidget(mSelectAllButton, 6, 2, 1, 1);

        mDeselectAllButton = new QPushButton(QgsMapLayerSaveStyleDialog);
        mDeselectAllButton->setObjectName(QString::fromUtf8("mDeselectAllButton"));

        gridLayout->addWidget(mDeselectAllButton, 6, 3, 1, 1);

        mInvertSelectionButton = new QPushButton(QgsMapLayerSaveStyleDialog);
        mInvertSelectionButton->setObjectName(QString::fromUtf8("mInvertSelectionButton"));

        gridLayout->addWidget(mInvertSelectionButton, 6, 4, 1, 1);

        buttonBox = new QDialogButtonBox(QgsMapLayerSaveStyleDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 5);

        mStyleTypeComboBox = new QComboBox(QgsMapLayerSaveStyleDialog);
        mStyleTypeComboBox->setObjectName(QString::fromUtf8("mStyleTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mStyleTypeComboBox->sizePolicy().hasHeightForWidth());
        mStyleTypeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mStyleTypeComboBox, 0, 1, 1, 4);

        mFileWidget = new QgsFileWidget(QgsMapLayerSaveStyleDialog);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        gridLayout->addWidget(mFileWidget, 3, 1, 1, 4);

#if QT_CONFIG(shortcut)
        mUILabel->setBuddy(mDbStyleNameEdit);
        nameLabel->setBuddy(mDbStyleNameEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mStyleTypeComboBox, mStylesWidget);
        QWidget::setTabOrder(mStylesWidget, mDbStyleNameEdit);
        QWidget::setTabOrder(mDbStyleNameEdit, mDbStyleDescriptionEdit);
        QWidget::setTabOrder(mDbStyleDescriptionEdit, mDbStyleUseAsDefault);

        retranslateUi(QgsMapLayerSaveStyleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMapLayerSaveStyleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMapLayerSaveStyleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMapLayerSaveStyleDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsMapLayerSaveStyleDialog)
    {
        QgsMapLayerSaveStyleDialog->setWindowTitle(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Save Layer Style", nullptr));
        mModeLabel->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Save style", nullptr));
        mStylesWidgetLabel->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Styles", nullptr));
        label->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "SLD Options", nullptr));
#if QT_CONFIG(tooltip)
        mSldExportPng->setToolTip(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "<html><head/><body><p>Complex and rotated polygon fills are generally not supported by SLD. </p><p>By checking this option supported symbols will be exported as PNG tiles in the same directory of the SLD document and the SLD document will refer to the PNG images as external graphic symbols.</p><p>Note that not all symbols can be exported to PNG, if the symbol cannot be exported the default SLD export implementation will be used.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mSldExportPng->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Export polygon fills as PNG tiles", nullptr));
        mFileLabel->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "File", nullptr));
#if QT_CONFIG(tooltip)
        mDbStyleUIFileWidget->setToolTip(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Optionally pick an input form for attribute editing (QT Designer UI format), it will be stored in the database", nullptr));
#endif // QT_CONFIG(tooltip)
        mDbStyleUseAsDefault->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Use as default style for this layer", nullptr));
        mUILabel->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "UI", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Description", nullptr));
        nameLabel->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Style name", nullptr));
        label_3->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Categories", nullptr));
        mSelectAllButton->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Select All", nullptr));
        mDeselectAllButton->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Deselect All", nullptr));
        mInvertSelectionButton->setText(QCoreApplication::translate("QgsMapLayerSaveStyleDialog", "Invert Selection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMapLayerSaveStyleDialog: public Ui_QgsMapLayerSaveStyleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPLAYERSAVESTYLEDIALOG_H
