/********************************************************************************
** Form generated from reading UI file 'qgslayoutmaplabelingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMAPLABELINGWIDGETBASE_H
#define UI_QGSLAYOUTMAPLABELINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMapLabelingWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBoxBasic *qgsCollapsibleGroupBoxBasic;
    QGridLayout *gridLayout_6;
    QLabel *label_10;
    QgsLayoutUnitsComboBox *mLabelBoundaryUnitsCombo;
    QgsDoubleSpinBox *mLabelBoundarySpinBox;
    QLabel *label_8;
    QgsPropertyOverrideButton *mLabelMarginDDBtn;
    QCheckBox *mShowPartialLabelsCheckBox;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QListView *mBlockingItemsListView;
    QCheckBox *mShowUnplacedCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayoutMapLabelingWidgetBase)
    {
        if (QgsLayoutMapLabelingWidgetBase->objectName().isEmpty())
            QgsLayoutMapLabelingWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutMapLabelingWidgetBase"));
        QgsLayoutMapLabelingWidgetBase->resize(318, 408);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutMapLabelingWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutMapLabelingWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutMapLabelingWidgetBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        qgsCollapsibleGroupBoxBasic = new QgsCollapsibleGroupBoxBasic(QgsLayoutMapLabelingWidgetBase);
        qgsCollapsibleGroupBoxBasic->setObjectName(QString::fromUtf8("qgsCollapsibleGroupBoxBasic"));
        gridLayout_6 = new QGridLayout(qgsCollapsibleGroupBoxBasic);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_10 = new QLabel(qgsCollapsibleGroupBoxBasic);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setScaledContents(false);
        label_10->setWordWrap(true);

        gridLayout_6->addWidget(label_10, 1, 0, 1, 4);

        mLabelBoundaryUnitsCombo = new QgsLayoutUnitsComboBox(qgsCollapsibleGroupBoxBasic);
        mLabelBoundaryUnitsCombo->setObjectName(QString::fromUtf8("mLabelBoundaryUnitsCombo"));

        gridLayout_6->addWidget(mLabelBoundaryUnitsCombo, 2, 2, 1, 1);

        mLabelBoundarySpinBox = new QgsDoubleSpinBox(qgsCollapsibleGroupBoxBasic);
        mLabelBoundarySpinBox->setObjectName(QString::fromUtf8("mLabelBoundarySpinBox"));
        mLabelBoundarySpinBox->setMinimum(0.000000000000000);
        mLabelBoundarySpinBox->setMaximum(9999.000000000000000);
        mLabelBoundarySpinBox->setValue(0.000000000000000);
        mLabelBoundarySpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mLabelBoundarySpinBox, 2, 0, 1, 2);

        label_8 = new QLabel(qgsCollapsibleGroupBoxBasic);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 4);

        mLabelMarginDDBtn = new QgsPropertyOverrideButton(qgsCollapsibleGroupBoxBasic);
        mLabelMarginDDBtn->setObjectName(QString::fromUtf8("mLabelMarginDDBtn"));

        gridLayout_6->addWidget(mLabelMarginDDBtn, 2, 3, 1, 1);

        mShowPartialLabelsCheckBox = new QCheckBox(qgsCollapsibleGroupBoxBasic);
        mShowPartialLabelsCheckBox->setObjectName(QString::fromUtf8("mShowPartialLabelsCheckBox"));

        gridLayout_6->addWidget(mShowPartialLabelsCheckBox, 3, 0, 1, 4);


        verticalLayout->addWidget(qgsCollapsibleGroupBoxBasic);

        groupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutMapLabelingWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        verticalLayout_2->addWidget(label_9);

        mBlockingItemsListView = new QListView(groupBox);
        mBlockingItemsListView->setObjectName(QString::fromUtf8("mBlockingItemsListView"));

        verticalLayout_2->addWidget(mBlockingItemsListView);


        verticalLayout->addWidget(groupBox);

        mShowUnplacedCheckBox = new QCheckBox(QgsLayoutMapLabelingWidgetBase);
        mShowUnplacedCheckBox->setObjectName(QString::fromUtf8("mShowUnplacedCheckBox"));

        verticalLayout->addWidget(mShowUnplacedCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mLabelBoundarySpinBox, mLabelBoundaryUnitsCombo);
        QWidget::setTabOrder(mLabelBoundaryUnitsCombo, mLabelMarginDDBtn);
        QWidget::setTabOrder(mLabelMarginDDBtn, mShowPartialLabelsCheckBox);
        QWidget::setTabOrder(mShowPartialLabelsCheckBox, mBlockingItemsListView);
        QWidget::setTabOrder(mBlockingItemsListView, mShowUnplacedCheckBox);

        retranslateUi(QgsLayoutMapLabelingWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutMapLabelingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMapLabelingWidgetBase)
    {
        QgsLayoutMapLabelingWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutMapLabelingWidgetBase", "Map Options", nullptr));
        qgsCollapsibleGroupBoxBasic->setTitle(QCoreApplication::translate("QgsLayoutMapLabelingWidgetBase", "Placement", nullptr));
        label_10->setText(QCoreApplication::translate("QgsLayoutMapLabelingWidgetBase", "No labels will be placed within this distance of the map\342\200\231s edges, or from any label-blocking items which are checked below.", nullptr));
        mLabelBoundarySpinBox->setPrefix(QString());
        label_8->setText(QCoreApplication::translate("QgsLayoutMapLabelingWidgetBase", "<b>Margin from map edges</b>", nullptr));
        mLabelMarginDDBtn->setText(QCoreApplication::translate("QgsLayoutMapLabelingWidgetBase", "\342\200\246", nullptr));
        mShowPartialLabelsCheckBox->setText(QCoreApplication::translate("QgsLayoutMapLabelingWidgetBase", "Allow truncated labels on edges of map", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutMapLabelingWidgetBase", "Label Blocking Items", nullptr));
        label_9->setText(QCoreApplication::translate("QgsLayoutMapLabelingWidgetBase", "Avoid placing labels under these items", nullptr));
        mShowUnplacedCheckBox->setText(QCoreApplication::translate("QgsLayoutMapLabelingWidgetBase", "Show unplaced labels", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMapLabelingWidgetBase: public Ui_QgsLayoutMapLabelingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMAPLABELINGWIDGETBASE_H
