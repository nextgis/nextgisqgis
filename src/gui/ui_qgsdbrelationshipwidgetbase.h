/********************************************************************************
** Form generated from reading UI file 'qgsdbrelationshipwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDBRELATIONSHIPWIDGETBASE_H
#define UI_QGSDBRELATIONSHIPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDbRelationshipWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *mCardinalityCombo;
    QComboBox *mStrengthCombo;
    QLabel *label_8;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLineEdit *mForwardLabelLineEdit;
    QLabel *mForwardLabel;
    QComboBox *mRelatedTableTypeCombo;
    QLabel *mReverseLabel;
    QLineEdit *mBackwardLabelLineEdit;
    QLineEdit *mNameEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QComboBox *mLeftTableCombo;
    QLabel *label_7;
    QComboBox *mRightTableCombo;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QgsFieldComboBox *mLeftFieldsCombo;
    QLabel *label_10;
    QgsFieldComboBox *mRightFieldsCombo;

    void setupUi(QWidget *QgsDbRelationshipWidgetBase)
    {
        if (QgsDbRelationshipWidgetBase->objectName().isEmpty())
            QgsDbRelationshipWidgetBase->setObjectName(QString::fromUtf8("QgsDbRelationshipWidgetBase"));
        QgsDbRelationshipWidgetBase->resize(712, 670);
        gridLayout_2 = new QGridLayout(QgsDbRelationshipWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(QgsDbRelationshipWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(QgsDbRelationshipWidgetBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        mCardinalityCombo = new QComboBox(QgsDbRelationshipWidgetBase);
        mCardinalityCombo->setObjectName(QString::fromUtf8("mCardinalityCombo"));

        gridLayout_2->addWidget(mCardinalityCombo, 1, 1, 1, 1);

        mStrengthCombo = new QComboBox(QgsDbRelationshipWidgetBase);
        mStrengthCombo->setObjectName(QString::fromUtf8("mStrengthCombo"));

        gridLayout_2->addWidget(mStrengthCombo, 2, 1, 1, 1);

        label_8 = new QLabel(QgsDbRelationshipWidgetBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsDbRelationshipWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 0, 0, 1, 1);

        mForwardLabelLineEdit = new QLineEdit(groupBox_2);
        mForwardLabelLineEdit->setObjectName(QString::fromUtf8("mForwardLabelLineEdit"));

        gridLayout_3->addWidget(mForwardLabelLineEdit, 1, 1, 1, 1);

        mForwardLabel = new QLabel(groupBox_2);
        mForwardLabel->setObjectName(QString::fromUtf8("mForwardLabel"));

        gridLayout_3->addWidget(mForwardLabel, 1, 0, 1, 1);

        mRelatedTableTypeCombo = new QComboBox(groupBox_2);
        mRelatedTableTypeCombo->setObjectName(QString::fromUtf8("mRelatedTableTypeCombo"));

        gridLayout_3->addWidget(mRelatedTableTypeCombo, 0, 1, 1, 1);

        mReverseLabel = new QLabel(groupBox_2);
        mReverseLabel->setObjectName(QString::fromUtf8("mReverseLabel"));

        gridLayout_3->addWidget(mReverseLabel, 2, 0, 1, 1);

        mBackwardLabelLineEdit = new QLineEdit(groupBox_2);
        mBackwardLabelLineEdit->setObjectName(QString::fromUtf8("mBackwardLabelLineEdit"));

        gridLayout_3->addWidget(mBackwardLabelLineEdit, 2, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);

        gridLayout_2->addWidget(groupBox_2, 6, 0, 1, 2);

        mNameEdit = new QLineEdit(QgsDbRelationshipWidgetBase);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

        gridLayout_2->addWidget(mNameEdit, 0, 1, 1, 1);

        groupBox = new QGroupBox(QgsDbRelationshipWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        mLeftTableCombo = new QComboBox(groupBox);
        mLeftTableCombo->setObjectName(QString::fromUtf8("mLeftTableCombo"));

        gridLayout->addWidget(mLeftTableCombo, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        mRightTableCombo = new QComboBox(groupBox);
        mRightTableCombo->setObjectName(QString::fromUtf8("mRightTableCombo"));

        gridLayout->addWidget(mRightTableCombo, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        gridLayout_2->addWidget(groupBox, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 1, 1, 1);

        groupBox_3 = new QGroupBox(QgsDbRelationshipWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        mLeftFieldsCombo = new QgsFieldComboBox(groupBox_3);
        mLeftFieldsCombo->setObjectName(QString::fromUtf8("mLeftFieldsCombo"));

        gridLayout_4->addWidget(mLeftFieldsCombo, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 1, 0, 1, 1);

        mRightFieldsCombo = new QgsFieldComboBox(groupBox_3);
        mRightFieldsCombo->setObjectName(QString::fromUtf8("mRightFieldsCombo"));

        gridLayout_4->addWidget(mRightFieldsCombo, 1, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 2);

        gridLayout_2->addWidget(groupBox_3, 5, 0, 1, 2);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        retranslateUi(QgsDbRelationshipWidgetBase);

        QMetaObject::connectSlotsByName(QgsDbRelationshipWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDbRelationshipWidgetBase)
    {
        QgsDbRelationshipWidgetBase->setWindowTitle(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Field Domain", nullptr));
        label_5->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Cardinality", nullptr));
        label_4->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Name", nullptr));
        label_8->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Strength", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Advanced", nullptr));
        label_9->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Related table type", nullptr));
        mForwardLabel->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Forward label", nullptr));
        mReverseLabel->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Reverse label", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Tables", nullptr));
        label_6->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Parent", nullptr));
        label_7->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Child", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Fields", nullptr));
        label_11->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Parent field", nullptr));
        label_10->setText(QCoreApplication::translate("QgsDbRelationshipWidgetBase", "Child field", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDbRelationshipWidgetBase: public Ui_QgsDbRelationshipWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDBRELATIONSHIPWIDGETBASE_H
