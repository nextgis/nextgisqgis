/********************************************************************************
** Form generated from reading UI file 'qgsannotationlinetextwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONLINETEXTWIDGETBASE_H
#define UI_QGSANNOTATIONLINETEXTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsannotationitemcommonpropertieswidget.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsrichtexteditor.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationLineTextWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QgsFontButton *mTextFormatButton;
    QToolButton *mInsertExpressionButton;
    QgsRichTextEditor *mTextEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mSpinOffset;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *label_4;
    QgsAnnotationItemCommonPropertiesWidget *mPropertiesWidget;

    void setupUi(QWidget *QgsAnnotationLineTextWidgetBase)
    {
        if (QgsAnnotationLineTextWidgetBase->objectName().isEmpty())
            QgsAnnotationLineTextWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationLineTextWidgetBase"));
        QgsAnnotationLineTextWidgetBase->resize(321, 575);
        gridLayout = new QGridLayout(QgsAnnotationLineTextWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(QgsAnnotationLineTextWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        mTextFormatButton = new QgsFontButton(QgsAnnotationLineTextWidgetBase);
        mTextFormatButton->setObjectName(QString::fromUtf8("mTextFormatButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTextFormatButton->sizePolicy().hasHeightForWidth());
        mTextFormatButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mTextFormatButton, 2, 1, 1, 1);

        mInsertExpressionButton = new QToolButton(QgsAnnotationLineTextWidgetBase);
        mInsertExpressionButton->setObjectName(QString::fromUtf8("mInsertExpressionButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mInsertExpressionButton->sizePolicy().hasHeightForWidth());
        mInsertExpressionButton->setSizePolicy(sizePolicy1);
        mInsertExpressionButton->setPopupMode(QToolButton::MenuButtonPopup);
        mInsertExpressionButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        mInsertExpressionButton->setArrowType(Qt::DownArrow);

        gridLayout->addWidget(mInsertExpressionButton, 1, 0, 1, 2);

        mTextEdit = new QgsRichTextEditor(QgsAnnotationLineTextWidgetBase);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setMinimumSize(QSize(0, 150));

        gridLayout->addWidget(mTextEdit, 0, 0, 1, 2);

        groupBox = new QGroupBox(QgsAnnotationLineTextWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mSpinOffset = new QgsDoubleSpinBox(groupBox);
        mSpinOffset->setObjectName(QString::fromUtf8("mSpinOffset"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSpinOffset->sizePolicy().hasHeightForWidth());
        mSpinOffset->setSizePolicy(sizePolicy2);
        mSpinOffset->setStyleSheet(QString::fromUtf8(""));
        mSpinOffset->setDecimals(6);
        mSpinOffset->setMinimum(-100000.000000000000000);
        mSpinOffset->setMaximum(100000.000000000000000);
        mSpinOffset->setSingleStep(0.200000000000000);

        horizontalLayout_3->addWidget(mSpinOffset);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(groupBox);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mOffsetUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        gridLayout->addWidget(groupBox, 3, 0, 1, 2);

        mPropertiesWidget = new QgsAnnotationItemCommonPropertiesWidget(QgsAnnotationLineTextWidgetBase);
        mPropertiesWidget->setObjectName(QString::fromUtf8("mPropertiesWidget"));

        gridLayout->addWidget(mPropertiesWidget, 4, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);
        QWidget::setTabOrder(mInsertExpressionButton, mTextFormatButton);
        QWidget::setTabOrder(mTextFormatButton, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mSpinOffset);

        retranslateUi(QgsAnnotationLineTextWidgetBase);

        QMetaObject::connectSlotsByName(QgsAnnotationLineTextWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationLineTextWidgetBase)
    {
        QgsAnnotationLineTextWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationLineTextWidgetBase", "Point Text Annotation", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAnnotationLineTextWidgetBase", "Text format", nullptr));
        mTextFormatButton->setText(QCoreApplication::translate("QgsAnnotationLineTextWidgetBase", "Text format", nullptr));
        mInsertExpressionButton->setText(QCoreApplication::translate("QgsAnnotationLineTextWidgetBase", "Insert/Edit Expression\342\200\246", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsAnnotationLineTextWidgetBase", "Properties", nullptr));
        label_4->setText(QCoreApplication::translate("QgsAnnotationLineTextWidgetBase", "Offset from line", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationLineTextWidgetBase: public Ui_QgsAnnotationLineTextWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONLINETEXTWIDGETBASE_H
