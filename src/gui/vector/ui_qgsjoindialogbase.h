/********************************************************************************
** Form generated from reading UI file 'qgsjoindialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSJOINDIALOGBASE_H
#define UI_QGSJOINDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include "qgscollapsiblegroupbox.h"
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsJoinDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mJoinLayerLabel;
    QgsMapLayerComboBox *mJoinLayerComboBox;
    QLabel *mJoinFieldLabel;
    QgsFieldComboBox *mJoinFieldComboBox;
    QLabel *mTargetFieldLabel;
    QgsFieldComboBox *mTargetFieldComboBox;
    QgsCollapsibleGroupBox *mUseJoinFieldsSubset;
    QGridLayout *gridLayout_21;
    QListView *mJoinFieldsSubsetView;
    QgsCollapsibleGroupBox *mUseCustomPrefix;
    QGridLayout *gridLayout_3;
    QLineEdit *mCustomPrefix;
    QSpacerItem *verticalSpacer;
    QCheckBox *mCacheInMemoryCheckBox;
    QCheckBox *mCreateIndexCheckBox;
    QDialogButtonBox *buttonBox;
    QCheckBox *mDynamicFormCheckBox;
    QgsCollapsibleGroupBox *mEditableJoinLayer;
    QGridLayout *gridLayout_2;
    QCheckBox *mUpsertOnEditCheckBox;
    QCheckBox *mDeleteCascadeCheckBox;

    void setupUi(QDialog *QgsJoinDialogBase)
    {
        if (QgsJoinDialogBase->objectName().isEmpty())
            QgsJoinDialogBase->setObjectName(QString::fromUtf8("QgsJoinDialogBase"));
        QgsJoinDialogBase->resize(505, 576);
        gridLayout = new QGridLayout(QgsJoinDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mJoinLayerLabel = new QLabel(QgsJoinDialogBase);
        mJoinLayerLabel->setObjectName(QString::fromUtf8("mJoinLayerLabel"));

        gridLayout->addWidget(mJoinLayerLabel, 0, 0, 1, 1);

        mJoinLayerComboBox = new QgsMapLayerComboBox(QgsJoinDialogBase);
        mJoinLayerComboBox->setObjectName(QString::fromUtf8("mJoinLayerComboBox"));

        gridLayout->addWidget(mJoinLayerComboBox, 0, 1, 1, 1);

        mJoinFieldLabel = new QLabel(QgsJoinDialogBase);
        mJoinFieldLabel->setObjectName(QString::fromUtf8("mJoinFieldLabel"));

        gridLayout->addWidget(mJoinFieldLabel, 1, 0, 1, 1);

        mJoinFieldComboBox = new QgsFieldComboBox(QgsJoinDialogBase);
        mJoinFieldComboBox->setObjectName(QString::fromUtf8("mJoinFieldComboBox"));

        gridLayout->addWidget(mJoinFieldComboBox, 1, 1, 1, 1);

        mTargetFieldLabel = new QLabel(QgsJoinDialogBase);
        mTargetFieldLabel->setObjectName(QString::fromUtf8("mTargetFieldLabel"));

        gridLayout->addWidget(mTargetFieldLabel, 2, 0, 1, 1);

        mTargetFieldComboBox = new QgsFieldComboBox(QgsJoinDialogBase);
        mTargetFieldComboBox->setObjectName(QString::fromUtf8("mTargetFieldComboBox"));

        gridLayout->addWidget(mTargetFieldComboBox, 2, 1, 1, 1);

        mUseJoinFieldsSubset = new QgsCollapsibleGroupBox(QgsJoinDialogBase);
        mUseJoinFieldsSubset->setObjectName(QString::fromUtf8("mUseJoinFieldsSubset"));
        mUseJoinFieldsSubset->setCheckable(true);
        mUseJoinFieldsSubset->setChecked(false);
        mUseJoinFieldsSubset->setProperty("collapsed", QVariant(true));
        gridLayout_21 = new QGridLayout(mUseJoinFieldsSubset);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        mJoinFieldsSubsetView = new QListView(mUseJoinFieldsSubset);
        mJoinFieldsSubsetView->setObjectName(QString::fromUtf8("mJoinFieldsSubsetView"));

        gridLayout_21->addWidget(mJoinFieldsSubsetView, 0, 0, 1, 1);


        gridLayout->addWidget(mUseJoinFieldsSubset, 8, 0, 1, 2);

        mUseCustomPrefix = new QgsCollapsibleGroupBox(QgsJoinDialogBase);
        mUseCustomPrefix->setObjectName(QString::fromUtf8("mUseCustomPrefix"));
        mUseCustomPrefix->setCheckable(true);
        mUseCustomPrefix->setChecked(false);
        mUseCustomPrefix->setProperty("collapsed", QVariant(true));
        gridLayout_3 = new QGridLayout(mUseCustomPrefix);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mCustomPrefix = new QLineEdit(mUseCustomPrefix);
        mCustomPrefix->setObjectName(QString::fromUtf8("mCustomPrefix"));

        gridLayout_3->addWidget(mCustomPrefix, 0, 0, 1, 1);


        gridLayout->addWidget(mUseCustomPrefix, 9, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        mCacheInMemoryCheckBox = new QCheckBox(QgsJoinDialogBase);
        mCacheInMemoryCheckBox->setObjectName(QString::fromUtf8("mCacheInMemoryCheckBox"));

        gridLayout->addWidget(mCacheInMemoryCheckBox, 3, 0, 1, 2);

        mCreateIndexCheckBox = new QCheckBox(QgsJoinDialogBase);
        mCreateIndexCheckBox->setObjectName(QString::fromUtf8("mCreateIndexCheckBox"));

        gridLayout->addWidget(mCreateIndexCheckBox, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsJoinDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 11, 0, 1, 2);

        mDynamicFormCheckBox = new QCheckBox(QgsJoinDialogBase);
        mDynamicFormCheckBox->setObjectName(QString::fromUtf8("mDynamicFormCheckBox"));

        gridLayout->addWidget(mDynamicFormCheckBox, 6, 0, 1, 2);

        mEditableJoinLayer = new QgsCollapsibleGroupBox(QgsJoinDialogBase);
        mEditableJoinLayer->setObjectName(QString::fromUtf8("mEditableJoinLayer"));
        mEditableJoinLayer->setCheckable(true);
        mEditableJoinLayer->setChecked(false);
        mEditableJoinLayer->setProperty("collapsed", QVariant(true));
        gridLayout_2 = new QGridLayout(mEditableJoinLayer);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mUpsertOnEditCheckBox = new QCheckBox(mEditableJoinLayer);
        mUpsertOnEditCheckBox->setObjectName(QString::fromUtf8("mUpsertOnEditCheckBox"));

        gridLayout_2->addWidget(mUpsertOnEditCheckBox, 0, 0, 1, 1);

        mDeleteCascadeCheckBox = new QCheckBox(mEditableJoinLayer);
        mDeleteCascadeCheckBox->setObjectName(QString::fromUtf8("mDeleteCascadeCheckBox"));

        gridLayout_2->addWidget(mDeleteCascadeCheckBox, 1, 0, 1, 1);


        gridLayout->addWidget(mEditableJoinLayer, 7, 0, 1, 2);

        QWidget::setTabOrder(mJoinLayerComboBox, mJoinFieldComboBox);
        QWidget::setTabOrder(mJoinFieldComboBox, mTargetFieldComboBox);
        QWidget::setTabOrder(mTargetFieldComboBox, mCacheInMemoryCheckBox);
        QWidget::setTabOrder(mCacheInMemoryCheckBox, mCreateIndexCheckBox);
        QWidget::setTabOrder(mCreateIndexCheckBox, mDynamicFormCheckBox);
        QWidget::setTabOrder(mDynamicFormCheckBox, mEditableJoinLayer);
        QWidget::setTabOrder(mEditableJoinLayer, mUpsertOnEditCheckBox);
        QWidget::setTabOrder(mUpsertOnEditCheckBox, mDeleteCascadeCheckBox);
        QWidget::setTabOrder(mDeleteCascadeCheckBox, mUseJoinFieldsSubset);
        QWidget::setTabOrder(mUseJoinFieldsSubset, mJoinFieldsSubsetView);
        QWidget::setTabOrder(mJoinFieldsSubsetView, mUseCustomPrefix);
        QWidget::setTabOrder(mUseCustomPrefix, mCustomPrefix);

        retranslateUi(QgsJoinDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsJoinDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsJoinDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsJoinDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsJoinDialogBase)
    {
        QgsJoinDialogBase->setWindowTitle(QCoreApplication::translate("QgsJoinDialogBase", "Add Vector Join", nullptr));
        mJoinLayerLabel->setText(QCoreApplication::translate("QgsJoinDialogBase", "Join layer", nullptr));
        mJoinFieldLabel->setText(QCoreApplication::translate("QgsJoinDialogBase", "Join field", nullptr));
        mTargetFieldLabel->setText(QCoreApplication::translate("QgsJoinDialogBase", "Target field", nullptr));
        mUseJoinFieldsSubset->setTitle(QCoreApplication::translate("QgsJoinDialogBase", "&Joined fields", nullptr));
        mUseCustomPrefix->setTitle(QCoreApplication::translate("QgsJoinDialogBase", "Custom field &name prefix", nullptr));
        mCacheInMemoryCheckBox->setText(QCoreApplication::translate("QgsJoinDialogBase", "Cache join layer in memory", nullptr));
        mCreateIndexCheckBox->setText(QCoreApplication::translate("QgsJoinDialogBase", "Create attribute index on join field", nullptr));
        mDynamicFormCheckBox->setText(QCoreApplication::translate("QgsJoinDialogBase", "Dynamic form", nullptr));
        mEditableJoinLayer->setTitle(QCoreApplication::translate("QgsJoinDialogBase", "Edi&table join layer", nullptr));
        mUpsertOnEditCheckBox->setText(QCoreApplication::translate("QgsJoinDialogBase", "Upsert on edit", nullptr));
        mDeleteCascadeCheckBox->setText(QCoreApplication::translate("QgsJoinDialogBase", "Delete cascade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsJoinDialogBase: public Ui_QgsJoinDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSJOINDIALOGBASE_H
