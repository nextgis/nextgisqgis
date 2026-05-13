/********************************************************************************
** Form generated from reading UI file 'qgssymbolbuffersettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSYMBOLBUFFERSETTINGSWIDGETBASE_H
#define UI_QGSSYMBOLBUFFERSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"
#include "qgspenstylecombobox.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSymbolBufferSettingsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mEnabledGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_2;
    QgsPenJoinStyleComboBox *mComboJoinStyle;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mSpinWidth;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QgsSymbolButton *mFillSymbolButton;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsSymbolBufferSettingsWidgetBase)
    {
        if (QgsSymbolBufferSettingsWidgetBase->objectName().isEmpty())
            QgsSymbolBufferSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsSymbolBufferSettingsWidgetBase"));
        QgsSymbolBufferSettingsWidgetBase->resize(343, 300);
        gridLayout = new QGridLayout(QgsSymbolBufferSettingsWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mEnabledGroup = new QGroupBox(QgsSymbolBufferSettingsWidgetBase);
        mEnabledGroup->setObjectName(QString::fromUtf8("mEnabledGroup"));
        mEnabledGroup->setCheckable(true);
        gridLayout_2 = new QGridLayout(mEnabledGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(mEnabledGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_2 = new QLabel(mEnabledGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mComboJoinStyle = new QgsPenJoinStyleComboBox(mEnabledGroup);
        mComboJoinStyle->setObjectName(QString::fromUtf8("mComboJoinStyle"));

        gridLayout_2->addWidget(mComboJoinStyle, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSpinWidth = new QgsDoubleSpinBox(mEnabledGroup);
        mSpinWidth->setObjectName(QString::fromUtf8("mSpinWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinWidth->sizePolicy().hasHeightForWidth());
        mSpinWidth->setSizePolicy(sizePolicy);
        mSpinWidth->setDecimals(6);
        mSpinWidth->setMaximum(100000.000000000000000);
        mSpinWidth->setSingleStep(0.200000000000000);
        mSpinWidth->setValue(1.000000000000000);
        mSpinWidth->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(mSpinWidth);

        mSizeUnitWidget = new QgsUnitSelectionWidget(mEnabledGroup);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mSizeUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        mFillSymbolButton = new QgsSymbolButton(mEnabledGroup);
        mFillSymbolButton->setObjectName(QString::fromUtf8("mFillSymbolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFillSymbolButton->sizePolicy().hasHeightForWidth());
        mFillSymbolButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mFillSymbolButton, 3, 1, 1, 1);

        label_6 = new QLabel(mEnabledGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);


        gridLayout->addWidget(mEnabledGroup, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(QgsSymbolBufferSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsSymbolBufferSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsSymbolBufferSettingsWidgetBase)
    {
        QgsSymbolBufferSettingsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsSymbolBufferSettingsWidgetBase", "Buffer Settings", nullptr));
        mEnabledGroup->setTitle(QCoreApplication::translate("QgsSymbolBufferSettingsWidgetBase", "Draw Buffer", nullptr));
        label_5->setText(QCoreApplication::translate("QgsSymbolBufferSettingsWidgetBase", "Join style", nullptr));
        label_2->setText(QCoreApplication::translate("QgsSymbolBufferSettingsWidgetBase", "Size", nullptr));
        mSpinWidth->setSpecialValueText(QCoreApplication::translate("QgsSymbolBufferSettingsWidgetBase", "Hairline", nullptr));
        mFillSymbolButton->setText(QCoreApplication::translate("QgsSymbolBufferSettingsWidgetBase", "Change\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("QgsSymbolBufferSettingsWidgetBase", "Symbol", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSymbolBufferSettingsWidgetBase: public Ui_QgsSymbolBufferSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLBUFFERSETTINGSWIDGETBASE_H
