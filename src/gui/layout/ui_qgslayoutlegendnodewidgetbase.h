/********************************************************************************
** Form generated from reading UI file 'qgslayoutlegendnodewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTLEGENDNODEWIDGETBASE_H
#define UI_QGSLAYOUTLEGENDNODEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgscolorramplegendnodewidget.h"
#include "qgsdoublespinbox.h"
#include "qgslegendpatchshapebutton.h"
#include "qgspanelwidget.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutLegendNodeWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mLabelGroup;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *mLabelEdit;
    QPushButton *mInsertExpressionButton;
    QGroupBox *mPatchGroup;
    QGridLayout *gridLayout_2;
    QLabel *mPatchShapeLabel;
    QgsLegendPatchShapeButton *mPatchShapeButton;
    QLabel *mPatchWidthLabel;
    QgsDoubleSpinBox *mWidthSpinBox;
    QLabel *mPatchHeightLabel;
    QgsDoubleSpinBox *mHeightSpinBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QComboBox *mColumnSplitBehaviorComboBox;
    QLabel *mColumnSplitLabel;
    QCheckBox *mColumnBreakBeforeCheckBox;
    QGroupBox *mCustomSymbolCheckBox;
    QVBoxLayout *verticalLayout;
    QgsSymbolButton *mCustomSymbolButton;
    QSpacerItem *verticalSpacer;
    QgsColorRampLegendNodeWidget *mColorRampLegendWidget;

    void setupUi(QgsPanelWidget *QgsLayoutLegendNodeWidgetBase)
    {
        if (QgsLayoutLegendNodeWidgetBase->objectName().isEmpty())
            QgsLayoutLegendNodeWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutLegendNodeWidgetBase"));
        QgsLayoutLegendNodeWidgetBase->resize(351, 635);
        QgsLayoutLegendNodeWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsLayoutLegendNodeWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mLabelGroup = new QGroupBox(QgsLayoutLegendNodeWidgetBase);
        mLabelGroup->setObjectName(QString::fromUtf8("mLabelGroup"));
        gridLayout_3 = new QGridLayout(mLabelGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mLabelEdit = new QPlainTextEdit(mLabelGroup);
        mLabelEdit->setObjectName(QString::fromUtf8("mLabelEdit"));
        mLabelEdit->setMinimumSize(QSize(0, 150));

        gridLayout_3->addWidget(mLabelEdit, 0, 0, 1, 1);

        mInsertExpressionButton = new QPushButton(mLabelGroup);
        mInsertExpressionButton->setObjectName(QString::fromUtf8("mInsertExpressionButton"));

        gridLayout_3->addWidget(mInsertExpressionButton, 1, 0, 1, 1);


        gridLayout->addWidget(mLabelGroup, 0, 0, 1, 2);

        mPatchGroup = new QGroupBox(QgsLayoutLegendNodeWidgetBase);
        mPatchGroup->setObjectName(QString::fromUtf8("mPatchGroup"));
        gridLayout_2 = new QGridLayout(mPatchGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mPatchShapeLabel = new QLabel(mPatchGroup);
        mPatchShapeLabel->setObjectName(QString::fromUtf8("mPatchShapeLabel"));

        gridLayout_2->addWidget(mPatchShapeLabel, 0, 0, 1, 1);

        mPatchShapeButton = new QgsLegendPatchShapeButton(mPatchGroup);
        mPatchShapeButton->setObjectName(QString::fromUtf8("mPatchShapeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPatchShapeButton->sizePolicy().hasHeightForWidth());
        mPatchShapeButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mPatchShapeButton, 0, 1, 1, 1);

        mPatchWidthLabel = new QLabel(mPatchGroup);
        mPatchWidthLabel->setObjectName(QString::fromUtf8("mPatchWidthLabel"));

        gridLayout_2->addWidget(mPatchWidthLabel, 1, 0, 1, 1);

        mWidthSpinBox = new QgsDoubleSpinBox(mPatchGroup);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        mWidthSpinBox->setMaximum(9999.989999999999782);

        gridLayout_2->addWidget(mWidthSpinBox, 1, 1, 1, 1);

        mPatchHeightLabel = new QLabel(mPatchGroup);
        mPatchHeightLabel->setObjectName(QString::fromUtf8("mPatchHeightLabel"));

        gridLayout_2->addWidget(mPatchHeightLabel, 2, 0, 1, 1);

        mHeightSpinBox = new QgsDoubleSpinBox(mPatchGroup);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        mHeightSpinBox->setMaximum(9999.989999999999782);

        gridLayout_2->addWidget(mHeightSpinBox, 2, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        gridLayout->addWidget(mPatchGroup, 2, 0, 1, 2);

        groupBox_3 = new QGroupBox(QgsLayoutLegendNodeWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mColumnSplitBehaviorComboBox = new QComboBox(groupBox_3);
        mColumnSplitBehaviorComboBox->setObjectName(QString::fromUtf8("mColumnSplitBehaviorComboBox"));

        gridLayout_4->addWidget(mColumnSplitBehaviorComboBox, 1, 1, 1, 1);

        mColumnSplitLabel = new QLabel(groupBox_3);
        mColumnSplitLabel->setObjectName(QString::fromUtf8("mColumnSplitLabel"));

        gridLayout_4->addWidget(mColumnSplitLabel, 1, 0, 1, 1);

        mColumnBreakBeforeCheckBox = new QCheckBox(groupBox_3);
        mColumnBreakBeforeCheckBox->setObjectName(QString::fromUtf8("mColumnBreakBeforeCheckBox"));

        gridLayout_4->addWidget(mColumnBreakBeforeCheckBox, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox_3, 5, 0, 1, 2);

        mCustomSymbolCheckBox = new QGroupBox(QgsLayoutLegendNodeWidgetBase);
        mCustomSymbolCheckBox->setObjectName(QString::fromUtf8("mCustomSymbolCheckBox"));
        mCustomSymbolCheckBox->setCheckable(true);
        verticalLayout = new QVBoxLayout(mCustomSymbolCheckBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mCustomSymbolButton = new QgsSymbolButton(mCustomSymbolCheckBox);
        mCustomSymbolButton->setObjectName(QString::fromUtf8("mCustomSymbolButton"));
        mCustomSymbolButton->setEnabled(true);
        sizePolicy.setHeightForWidth(mCustomSymbolButton->sizePolicy().hasHeightForWidth());
        mCustomSymbolButton->setSizePolicy(sizePolicy);
        mCustomSymbolButton->setMinimumSize(QSize(100, 0));

        verticalLayout->addWidget(mCustomSymbolButton);


        gridLayout->addWidget(mCustomSymbolCheckBox, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        mColorRampLegendWidget = new QgsColorRampLegendNodeWidget(QgsLayoutLegendNodeWidgetBase);
        mColorRampLegendWidget->setObjectName(QString::fromUtf8("mColorRampLegendWidget"));

        gridLayout->addWidget(mColorRampLegendWidget, 4, 0, 1, 2);

        QWidget::setTabOrder(mLabelEdit, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mPatchShapeButton);
        QWidget::setTabOrder(mPatchShapeButton, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mCustomSymbolCheckBox);
        QWidget::setTabOrder(mCustomSymbolCheckBox, mCustomSymbolButton);
        QWidget::setTabOrder(mCustomSymbolButton, mColumnBreakBeforeCheckBox);
        QWidget::setTabOrder(mColumnBreakBeforeCheckBox, mColumnSplitBehaviorComboBox);

        retranslateUi(QgsLayoutLegendNodeWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutLegendNodeWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLayoutLegendNodeWidgetBase)
    {
        mLabelGroup->setTitle(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Label", nullptr));
        mInsertExpressionButton->setText(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Insert or Edit an Expression\342\200\246", nullptr));
        mPatchGroup->setTitle(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Patch", nullptr));
        mPatchShapeLabel->setText(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Shape", nullptr));
        mPatchShapeButton->setText(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Customize", nullptr));
        mPatchWidthLabel->setText(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Width (mm)", nullptr));
        mPatchHeightLabel->setText(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Height (mm)", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Columns", nullptr));
        mColumnSplitLabel->setText(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Column spanning", nullptr));
        mColumnBreakBeforeCheckBox->setText(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Start a new column before this item", nullptr));
        mCustomSymbolCheckBox->setTitle(QCoreApplication::translate("QgsLayoutLegendNodeWidgetBase", "Custom Symbol", nullptr));
        mCustomSymbolButton->setText(QString());
        (void)QgsLayoutLegendNodeWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutLegendNodeWidgetBase: public Ui_QgsLayoutLegendNodeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTLEGENDNODEWIDGETBASE_H
