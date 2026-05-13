/********************************************************************************
** Form generated from reading UI file 'qgslabelremoveduplicatesettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELREMOVEDUPLICATESETTINGSWIDGETBASE_H
#define UI_QGSLABELREMOVEDUPLICATESETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelRemoveDuplicateSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mNoRepeatDistSpinBox;
    QgsPropertyOverrideButton *mNoRepeatDistDDBtn;
    QgsUnitSelectionWidget *mNoRepeatDistUnitWidget;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsLabelRemoveDuplicateSettingsWidgetBase)
    {
        if (QgsLabelRemoveDuplicateSettingsWidgetBase->objectName().isEmpty())
            QgsLabelRemoveDuplicateSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsLabelRemoveDuplicateSettingsWidgetBase"));
        QgsLabelRemoveDuplicateSettingsWidgetBase->resize(254, 279);
        verticalLayout = new QVBoxLayout(QgsLabelRemoveDuplicateSettingsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsLabelRemoveDuplicateSettingsWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mNoRepeatDistSpinBox = new QgsDoubleSpinBox(groupBox);
        mNoRepeatDistSpinBox->setObjectName(QString::fromUtf8("mNoRepeatDistSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mNoRepeatDistSpinBox->sizePolicy().hasHeightForWidth());
        mNoRepeatDistSpinBox->setSizePolicy(sizePolicy);
        mNoRepeatDistSpinBox->setMinimumSize(QSize(0, 0));
        mNoRepeatDistSpinBox->setDecimals(4);
        mNoRepeatDistSpinBox->setMaximum(999999999.000000000000000);
        mNoRepeatDistSpinBox->setSingleStep(0.100000000000000);
        mNoRepeatDistSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mNoRepeatDistSpinBox, 1, 0, 1, 1);

        mNoRepeatDistDDBtn = new QgsPropertyOverrideButton(groupBox);
        mNoRepeatDistDDBtn->setObjectName(QString::fromUtf8("mNoRepeatDistDDBtn"));

        gridLayout->addWidget(mNoRepeatDistDDBtn, 1, 2, 1, 1);

        mNoRepeatDistUnitWidget = new QgsUnitSelectionWidget(groupBox);
        mNoRepeatDistUnitWidget->setObjectName(QString::fromUtf8("mNoRepeatDistUnitWidget"));
        mNoRepeatDistUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mNoRepeatDistUnitWidget, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 3);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsLabelRemoveDuplicateSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelRemoveDuplicateSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelRemoveDuplicateSettingsWidgetBase)
    {
        QgsLabelRemoveDuplicateSettingsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLabelRemoveDuplicateSettingsWidgetBase", "Duplicate Removal", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLabelRemoveDuplicateSettingsWidgetBase", "Duplicate Removal", nullptr));
        mNoRepeatDistSpinBox->setSuffix(QString());
        mNoRepeatDistDDBtn->setText(QCoreApplication::translate("QgsLabelRemoveDuplicateSettingsWidgetBase", "\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("QgsLabelRemoveDuplicateSettingsWidgetBase", "Labels with the exact same text (including case) will not be placed if they are closer than this distance.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelRemoveDuplicateSettingsWidgetBase: public Ui_QgsLabelRemoveDuplicateSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELREMOVEDUPLICATESETTINGSWIDGETBASE_H
