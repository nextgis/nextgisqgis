/********************************************************************************
** Form generated from reading UI file 'qgspropertyassistantwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROPERTYASSISTANTWIDGETBASE_H
#define UI_QGSPROPERTYASSISTANTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include <qgscurveeditorwidget.h>
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyAssistantBase
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QWidget *mOutputWidget;
    QGridLayout *gridLayout;
    QFrame *mLegendVerticalFrame;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLabel *label_2;
    QgsDoubleSpinBox *minValueSpinBox;
    QgsDoubleSpinBox *maxValueSpinBox;
    QLabel *label_3;
    QPushButton *computeValuesButton;
    QgsFieldExpressionWidget *mExpressionWidget;
    QTreeView *mLegendPreview;
    QgsCollapsibleGroupBoxBasic *mTransformCurveCheckBox;
    QVBoxLayout *verticalLayout_2;
    QgsCurveEditorWidget *mCurveEditor;

    void setupUi(QgsPanelWidget *PropertyAssistantBase)
    {
        if (PropertyAssistantBase->objectName().isEmpty())
            PropertyAssistantBase->setObjectName(QString::fromUtf8("PropertyAssistantBase"));
        PropertyAssistantBase->resize(545, 426);
        gridLayout_2 = new QGridLayout(PropertyAssistantBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(PropertyAssistantBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOutputWidget = new QWidget(groupBox_2);
        mOutputWidget->setObjectName(QString::fromUtf8("mOutputWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOutputWidget->sizePolicy().hasHeightForWidth());
        mOutputWidget->setSizePolicy(sizePolicy);
        mOutputWidget->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(mOutputWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(mOutputWidget);


        gridLayout_2->addWidget(groupBox_2, 2, 0, 1, 1);

        mLegendVerticalFrame = new QFrame(PropertyAssistantBase);
        mLegendVerticalFrame->setObjectName(QString::fromUtf8("mLegendVerticalFrame"));
        mLegendVerticalFrame->setFrameShape(QFrame::NoFrame);
        mLegendVerticalFrame->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(mLegendVerticalFrame, 3, 0, 1, 1);

        groupBox = new QGroupBox(PropertyAssistantBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        minValueSpinBox = new QgsDoubleSpinBox(groupBox);
        minValueSpinBox->setObjectName(QString::fromUtf8("minValueSpinBox"));
        minValueSpinBox->setDecimals(6);
        minValueSpinBox->setMinimum(-99999999999999.000000000000000);
        minValueSpinBox->setMaximum(99999999999999.000000000000000);

        gridLayout_3->addWidget(minValueSpinBox, 1, 1, 1, 1);

        maxValueSpinBox = new QgsDoubleSpinBox(groupBox);
        maxValueSpinBox->setObjectName(QString::fromUtf8("maxValueSpinBox"));
        maxValueSpinBox->setDecimals(6);
        maxValueSpinBox->setMinimum(-99999999999999.000000000000000);
        maxValueSpinBox->setMaximum(99999999999999.000000000000000);

        gridLayout_3->addWidget(maxValueSpinBox, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        computeValuesButton = new QPushButton(groupBox);
        computeValuesButton->setObjectName(QString::fromUtf8("computeValuesButton"));
        computeValuesButton->setMinimumSize(QSize(24, 24));
        computeValuesButton->setMaximumSize(QSize(24, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::On);
        computeValuesButton->setIcon(icon);

        gridLayout_3->addWidget(computeValuesButton, 1, 2, 2, 1);

        mExpressionWidget = new QgsFieldExpressionWidget(groupBox);
        mExpressionWidget->setObjectName(QString::fromUtf8("mExpressionWidget"));
        mExpressionWidget->setMaximumSize(QSize(500, 16777215));
        mExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(mExpressionWidget, 0, 1, 1, 2);

        gridLayout_3->setColumnStretch(1, 1);

        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        mLegendPreview = new QTreeView(PropertyAssistantBase);
        mLegendPreview->setObjectName(QString::fromUtf8("mLegendPreview"));
        mLegendPreview->setMinimumSize(QSize(200, 0));

        gridLayout_2->addWidget(mLegendPreview, 0, 1, 3, 1);

        mTransformCurveCheckBox = new QgsCollapsibleGroupBoxBasic(PropertyAssistantBase);
        mTransformCurveCheckBox->setObjectName(QString::fromUtf8("mTransformCurveCheckBox"));
        mTransformCurveCheckBox->setCheckable(true);
        mTransformCurveCheckBox->setChecked(false);
        mTransformCurveCheckBox->setProperty("collapsed", QVariant(true));
        mTransformCurveCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        verticalLayout_2 = new QVBoxLayout(mTransformCurveCheckBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mCurveEditor = new QgsCurveEditorWidget(mTransformCurveCheckBox);
        mCurveEditor->setObjectName(QString::fromUtf8("mCurveEditor"));
        mCurveEditor->setMinimumSize(QSize(0, 100));
        mCurveEditor->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_2->addWidget(mCurveEditor);


        gridLayout_2->addWidget(mTransformCurveCheckBox, 1, 0, 1, 1);

        QWidget::setTabOrder(mExpressionWidget, minValueSpinBox);
        QWidget::setTabOrder(minValueSpinBox, maxValueSpinBox);
        QWidget::setTabOrder(maxValueSpinBox, computeValuesButton);
        QWidget::setTabOrder(computeValuesButton, mTransformCurveCheckBox);
        QWidget::setTabOrder(mTransformCurveCheckBox, mCurveEditor);
        QWidget::setTabOrder(mCurveEditor, mLegendPreview);

        retranslateUi(PropertyAssistantBase);

        QMetaObject::connectSlotsByName(PropertyAssistantBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *PropertyAssistantBase)
    {
        groupBox_2->setTitle(QCoreApplication::translate("PropertyAssistantBase", "Output", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PropertyAssistantBase", "Input", nullptr));
        label_4->setText(QCoreApplication::translate("PropertyAssistantBase", "to", nullptr));
        label_2->setText(QCoreApplication::translate("PropertyAssistantBase", "Source", nullptr));
        label_3->setText(QCoreApplication::translate("PropertyAssistantBase", "Values from", nullptr));
#if QT_CONFIG(tooltip)
        computeValuesButton->setToolTip(QCoreApplication::translate("PropertyAssistantBase", "Fetch value range from layer", nullptr));
#endif // QT_CONFIG(tooltip)
        mTransformCurveCheckBox->setTitle(QCoreApplication::translate("PropertyAssistantBase", "Apply transform curve", nullptr));
        (void)PropertyAssistantBase;
    } // retranslateUi

};

namespace Ui {
    class PropertyAssistantBase: public Ui_PropertyAssistantBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROPERTYASSISTANTWIDGETBASE_H
