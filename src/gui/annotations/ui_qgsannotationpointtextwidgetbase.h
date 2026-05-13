/********************************************************************************
** Form generated from reading UI file 'qgsannotationpointtextwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONPOINTTEXTWIDGETBASE_H
#define UI_QGSANNOTATIONPOINTTEXTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsalignmentcombobox.h"
#include "qgsannotationitemcommonpropertieswidget.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsrichtexteditor.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationPointTextWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QgsDoubleSpinBox *mSpinTextAngle;
    QComboBox *mRotationModeCombo;
    QgsAnnotationItemCommonPropertiesWidget *mPropertiesWidget;
    QToolButton *mInsertExpressionButton;
    QLabel *label_2;
    QgsAlignmentComboBox *mAlignmentComboBox;
    QgsFontButton *mTextFormatButton;
    QgsRichTextEditor *mTextEdit;
    QLabel *label_3;

    void setupUi(QWidget *QgsAnnotationPointTextWidgetBase)
    {
        if (QgsAnnotationPointTextWidgetBase->objectName().isEmpty())
            QgsAnnotationPointTextWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationPointTextWidgetBase"));
        QgsAnnotationPointTextWidgetBase->resize(321, 526);
        gridLayout = new QGridLayout(QgsAnnotationPointTextWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsAnnotationPointTextWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        mSpinTextAngle = new QgsDoubleSpinBox(groupBox);
        mSpinTextAngle->setObjectName(QString::fromUtf8("mSpinTextAngle"));
        mSpinTextAngle->setWrapping(true);
        mSpinTextAngle->setDecimals(2);
        mSpinTextAngle->setMinimum(-360.000000000000000);
        mSpinTextAngle->setMaximum(360.000000000000000);
        mSpinTextAngle->setSingleStep(0.500000000000000);

        gridLayout_2->addWidget(mSpinTextAngle, 1, 1, 1, 1);

        mRotationModeCombo = new QComboBox(groupBox);
        mRotationModeCombo->setObjectName(QString::fromUtf8("mRotationModeCombo"));

        gridLayout_2->addWidget(mRotationModeCombo, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox, 5, 0, 1, 2);

        mPropertiesWidget = new QgsAnnotationItemCommonPropertiesWidget(QgsAnnotationPointTextWidgetBase);
        mPropertiesWidget->setObjectName(QString::fromUtf8("mPropertiesWidget"));
        sizePolicy.setHeightForWidth(mPropertiesWidget->sizePolicy().hasHeightForWidth());
        mPropertiesWidget->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mPropertiesWidget, 6, 0, 1, 2);

        mInsertExpressionButton = new QToolButton(QgsAnnotationPointTextWidgetBase);
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

        label_2 = new QLabel(QgsAnnotationPointTextWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        mAlignmentComboBox = new QgsAlignmentComboBox(QgsAnnotationPointTextWidgetBase);
        mAlignmentComboBox->setObjectName(QString::fromUtf8("mAlignmentComboBox"));

        gridLayout->addWidget(mAlignmentComboBox, 3, 1, 1, 1);

        mTextFormatButton = new QgsFontButton(QgsAnnotationPointTextWidgetBase);
        mTextFormatButton->setObjectName(QString::fromUtf8("mTextFormatButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mTextFormatButton->sizePolicy().hasHeightForWidth());
        mTextFormatButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mTextFormatButton, 2, 1, 1, 1);

        mTextEdit = new QgsRichTextEditor(QgsAnnotationPointTextWidgetBase);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(mTextEdit->sizePolicy().hasHeightForWidth());
        mTextEdit->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(mTextEdit, 0, 0, 1, 2);

        label_3 = new QLabel(QgsAnnotationPointTextWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        gridLayout->setColumnStretch(1, 2);
        QWidget::setTabOrder(mInsertExpressionButton, mTextFormatButton);
        QWidget::setTabOrder(mTextFormatButton, mAlignmentComboBox);
        QWidget::setTabOrder(mAlignmentComboBox, mRotationModeCombo);
        QWidget::setTabOrder(mRotationModeCombo, mSpinTextAngle);

        retranslateUi(QgsAnnotationPointTextWidgetBase);

        QMetaObject::connectSlotsByName(QgsAnnotationPointTextWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationPointTextWidgetBase)
    {
        QgsAnnotationPointTextWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Point Text Annotation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Rotation", nullptr));
        label->setText(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Angle", nullptr));
        mSpinTextAngle->setSuffix(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", " \302\260", nullptr));
        mInsertExpressionButton->setText(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Insert/Edit Expression\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Alignment", nullptr));
        mTextFormatButton->setText(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Text format", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAnnotationPointTextWidgetBase", "Text format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationPointTextWidgetBase: public Ui_QgsAnnotationPointTextWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONPOINTTEXTWIDGETBASE_H
