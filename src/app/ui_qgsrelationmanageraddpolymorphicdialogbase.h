/********************************************************************************
** Form generated from reading UI file 'qgsrelationmanageraddpolymorphicdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONMANAGERADDPOLYMORPHICDIALOGBASE_H
#define UI_QGSRELATIONMANAGERADDPOLYMORPHICDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscheckablecombobox.h"
#include "qgsfieldcombobox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRelationManagerAddPolymorphicDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mReferencedLayersLabel;
    QLineEdit *mIdLineEdit;
    QgsFieldComboBox *mReferencedLayerFieldComboBox;
    QComboBox *mRelationStrengthComboBox;
    QgsMapLayerComboBox *mReferencingLayerComboBox;
    QgsCheckableComboBox *mReferencedLayersComboBox;
    QLabel *mRelationStrengthLabel;
    QDialogButtonBox *mButtonBox;
    QLabel *mReferencingLayerLabel;
    QLabel *mReferencedLayerFieldLabel;
    QLabel *mIdLabel;
    QLabel *mReferencedLayerExpressionLabel;
    QgsFieldExpressionWidget *mReferencedLayerExpressionWidget;
    QWidget *mFieldsMappingWidget;
    QGridLayout *mFieldsMappingLayout;
    QTableWidget *mFieldsMappingTable;
    QVBoxLayout *mFieldsMappingButtonsVBoxLayout;
    QToolButton *mFieldsMappingAddButton;
    QToolButton *mFieldsMappingRemoveButton;
    QSpacerItem *mFieldsMappingVSpacer;
    QLabel *mPolymorphicRelationHelpLabel;
    QLabel *mFieldsMappingLabel;

    void setupUi(QWidget *QgsRelationManagerAddPolymorphicDialogBase)
    {
        if (QgsRelationManagerAddPolymorphicDialogBase->objectName().isEmpty())
            QgsRelationManagerAddPolymorphicDialogBase->setObjectName(QString::fromUtf8("QgsRelationManagerAddPolymorphicDialogBase"));
        QgsRelationManagerAddPolymorphicDialogBase->resize(453, 487);
        gridLayout = new QGridLayout(QgsRelationManagerAddPolymorphicDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mReferencedLayersLabel = new QLabel(QgsRelationManagerAddPolymorphicDialogBase);
        mReferencedLayersLabel->setObjectName(QString::fromUtf8("mReferencedLayersLabel"));

        gridLayout->addWidget(mReferencedLayersLabel, 7, 0, 1, 1);

        mIdLineEdit = new QLineEdit(QgsRelationManagerAddPolymorphicDialogBase);
        mIdLineEdit->setObjectName(QString::fromUtf8("mIdLineEdit"));

        gridLayout->addWidget(mIdLineEdit, 0, 1, 1, 1);

        mReferencedLayerFieldComboBox = new QgsFieldComboBox(QgsRelationManagerAddPolymorphicDialogBase);
        mReferencedLayerFieldComboBox->setObjectName(QString::fromUtf8("mReferencedLayerFieldComboBox"));

        gridLayout->addWidget(mReferencedLayerFieldComboBox, 2, 1, 1, 1);

        mRelationStrengthComboBox = new QComboBox(QgsRelationManagerAddPolymorphicDialogBase);
        mRelationStrengthComboBox->setObjectName(QString::fromUtf8("mRelationStrengthComboBox"));

        gridLayout->addWidget(mRelationStrengthComboBox, 6, 1, 1, 1);

        mReferencingLayerComboBox = new QgsMapLayerComboBox(QgsRelationManagerAddPolymorphicDialogBase);
        mReferencingLayerComboBox->setObjectName(QString::fromUtf8("mReferencingLayerComboBox"));

        gridLayout->addWidget(mReferencingLayerComboBox, 1, 1, 1, 1);

        mReferencedLayersComboBox = new QgsCheckableComboBox(QgsRelationManagerAddPolymorphicDialogBase);
        mReferencedLayersComboBox->setObjectName(QString::fromUtf8("mReferencedLayersComboBox"));

        gridLayout->addWidget(mReferencedLayersComboBox, 7, 1, 1, 1);

        mRelationStrengthLabel = new QLabel(QgsRelationManagerAddPolymorphicDialogBase);
        mRelationStrengthLabel->setObjectName(QString::fromUtf8("mRelationStrengthLabel"));

        gridLayout->addWidget(mRelationStrengthLabel, 6, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsRelationManagerAddPolymorphicDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 13, 0, 1, 2);

        mReferencingLayerLabel = new QLabel(QgsRelationManagerAddPolymorphicDialogBase);
        mReferencingLayerLabel->setObjectName(QString::fromUtf8("mReferencingLayerLabel"));

        gridLayout->addWidget(mReferencingLayerLabel, 1, 0, 1, 1);

        mReferencedLayerFieldLabel = new QLabel(QgsRelationManagerAddPolymorphicDialogBase);
        mReferencedLayerFieldLabel->setObjectName(QString::fromUtf8("mReferencedLayerFieldLabel"));

        gridLayout->addWidget(mReferencedLayerFieldLabel, 2, 0, 1, 1);

        mIdLabel = new QLabel(QgsRelationManagerAddPolymorphicDialogBase);
        mIdLabel->setObjectName(QString::fromUtf8("mIdLabel"));

        gridLayout->addWidget(mIdLabel, 0, 0, 1, 1);

        mReferencedLayerExpressionLabel = new QLabel(QgsRelationManagerAddPolymorphicDialogBase);
        mReferencedLayerExpressionLabel->setObjectName(QString::fromUtf8("mReferencedLayerExpressionLabel"));

        gridLayout->addWidget(mReferencedLayerExpressionLabel, 3, 0, 1, 1);

        mReferencedLayerExpressionWidget = new QgsFieldExpressionWidget(QgsRelationManagerAddPolymorphicDialogBase);
        mReferencedLayerExpressionWidget->setObjectName(QString::fromUtf8("mReferencedLayerExpressionWidget"));

        gridLayout->addWidget(mReferencedLayerExpressionWidget, 3, 1, 1, 1);

        mFieldsMappingWidget = new QWidget(QgsRelationManagerAddPolymorphicDialogBase);
        mFieldsMappingWidget->setObjectName(QString::fromUtf8("mFieldsMappingWidget"));
        mFieldsMappingLayout = new QGridLayout(mFieldsMappingWidget);
        mFieldsMappingLayout->setObjectName(QString::fromUtf8("mFieldsMappingLayout"));
        mFieldsMappingTable = new QTableWidget(mFieldsMappingWidget);
        if (mFieldsMappingTable->columnCount() < 2)
            mFieldsMappingTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mFieldsMappingTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mFieldsMappingTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mFieldsMappingTable->setObjectName(QString::fromUtf8("mFieldsMappingTable"));
        mFieldsMappingTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mFieldsMappingTable->setRowCount(0);
        mFieldsMappingTable->horizontalHeader()->setDefaultSectionSize(150);
        mFieldsMappingTable->horizontalHeader()->setStretchLastSection(true);

        mFieldsMappingLayout->addWidget(mFieldsMappingTable, 0, 0, 1, 1);

        mFieldsMappingButtonsVBoxLayout = new QVBoxLayout();
        mFieldsMappingButtonsVBoxLayout->setObjectName(QString::fromUtf8("mFieldsMappingButtonsVBoxLayout"));
        mFieldsMappingAddButton = new QToolButton(mFieldsMappingWidget);
        mFieldsMappingAddButton->setObjectName(QString::fromUtf8("mFieldsMappingAddButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFieldsMappingAddButton->setIcon(icon);

        mFieldsMappingButtonsVBoxLayout->addWidget(mFieldsMappingAddButton);

        mFieldsMappingRemoveButton = new QToolButton(mFieldsMappingWidget);
        mFieldsMappingRemoveButton->setObjectName(QString::fromUtf8("mFieldsMappingRemoveButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFieldsMappingRemoveButton->setIcon(icon1);

        mFieldsMappingButtonsVBoxLayout->addWidget(mFieldsMappingRemoveButton);

        mFieldsMappingVSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mFieldsMappingButtonsVBoxLayout->addItem(mFieldsMappingVSpacer);


        mFieldsMappingLayout->addLayout(mFieldsMappingButtonsVBoxLayout, 0, 1, 1, 1);


        gridLayout->addWidget(mFieldsMappingWidget, 9, 0, 1, 2);

        mPolymorphicRelationHelpLabel = new QLabel(QgsRelationManagerAddPolymorphicDialogBase);
        mPolymorphicRelationHelpLabel->setObjectName(QString::fromUtf8("mPolymorphicRelationHelpLabel"));
        mPolymorphicRelationHelpLabel->setWordWrap(true);

        gridLayout->addWidget(mPolymorphicRelationHelpLabel, 12, 0, 1, 2);

        mFieldsMappingLabel = new QLabel(QgsRelationManagerAddPolymorphicDialogBase);
        mFieldsMappingLabel->setObjectName(QString::fromUtf8("mFieldsMappingLabel"));

        gridLayout->addWidget(mFieldsMappingLabel, 8, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);
        QWidget::setTabOrder(mIdLineEdit, mReferencingLayerComboBox);
        QWidget::setTabOrder(mReferencingLayerComboBox, mReferencedLayerFieldComboBox);
        QWidget::setTabOrder(mReferencedLayerFieldComboBox, mRelationStrengthComboBox);
        QWidget::setTabOrder(mRelationStrengthComboBox, mFieldsMappingAddButton);
        QWidget::setTabOrder(mFieldsMappingAddButton, mFieldsMappingRemoveButton);

        retranslateUi(QgsRelationManagerAddPolymorphicDialogBase);

        QMetaObject::connectSlotsByName(QgsRelationManagerAddPolymorphicDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRelationManagerAddPolymorphicDialogBase)
    {
        QgsRelationManagerAddPolymorphicDialogBase->setWindowTitle(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Add Polymorphic Relation", nullptr));
        mReferencedLayersLabel->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Referenced layers", nullptr));
        mIdLineEdit->setPlaceholderText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "[Generated automatically]", nullptr));
        mRelationStrengthLabel->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Relationship strength", nullptr));
        mReferencingLayerLabel->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Referencing layer", nullptr));
        mReferencedLayerFieldLabel->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Layer field", nullptr));
        mIdLabel->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Id", nullptr));
        mReferencedLayerExpressionLabel->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Layer field expression", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mFieldsMappingTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Referenced (parent)", "polymorphic relations"));
        QTableWidgetItem *___qtablewidgetitem1 = mFieldsMappingTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Referencing (child)", nullptr));
#if QT_CONFIG(tooltip)
        mFieldsMappingAddButton->setToolTip(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Add new field pair as part of a composite foreign key", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mFieldsMappingRemoveButton->setToolTip(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Remove the selected or last pair of fields", nullptr));
#endif // QT_CONFIG(tooltip)
        mPolymorphicRelationHelpLabel->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Polymorphic relations are for advanced usage where a set of standard relations have the same referencing layer but the referenced layer is calculated from an expression.", nullptr));
        mFieldsMappingLabel->setText(QCoreApplication::translate("QgsRelationManagerAddPolymorphicDialogBase", "Fields mapping", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRelationManagerAddPolymorphicDialogBase: public Ui_QgsRelationManagerAddPolymorphicDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONMANAGERADDPOLYMORPHICDIALOGBASE_H
