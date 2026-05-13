/********************************************************************************
** Form generated from reading UI file 'qgsattributewidgeteditgroupbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEWIDGETEDITGROUPBOX_H
#define UI_QGSATTRIBUTEWIDGETEDITGROUPBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsformlabelformatwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeWidgetEditGroupBox
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *mShowLabelCheckBox;
    QgsFormLabelFormatWidget *mFormLabelFormatWidget;
    QGroupBox *mSizeGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *mColumnsLabel_2;
    QgsSpinBox *mHozStretchSpin;
    QLabel *mColumnsLabel_3;
    QgsSpinBox *mVertStretchSpin;
    QgsCollapsibleGroupBox *mWidgetSpecificConfigGroupBox;

    void setupUi(QgsCollapsibleGroupBox *QgsAttributeWidgetEditGroupBox)
    {
        if (QgsAttributeWidgetEditGroupBox->objectName().isEmpty())
            QgsAttributeWidgetEditGroupBox->setObjectName(QString::fromUtf8("QgsAttributeWidgetEditGroupBox"));
        QgsAttributeWidgetEditGroupBox->resize(283, 298);
        verticalLayout = new QVBoxLayout(QgsAttributeWidgetEditGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mShowLabelCheckBox = new QCheckBox(QgsAttributeWidgetEditGroupBox);
        mShowLabelCheckBox->setObjectName(QString::fromUtf8("mShowLabelCheckBox"));

        verticalLayout->addWidget(mShowLabelCheckBox);

        mFormLabelFormatWidget = new QgsFormLabelFormatWidget(QgsAttributeWidgetEditGroupBox);
        mFormLabelFormatWidget->setObjectName(QString::fromUtf8("mFormLabelFormatWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFormLabelFormatWidget->sizePolicy().hasHeightForWidth());
        mFormLabelFormatWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mFormLabelFormatWidget);

        mSizeGroupBox = new QGroupBox(QgsAttributeWidgetEditGroupBox);
        mSizeGroupBox->setObjectName(QString::fromUtf8("mSizeGroupBox"));
        gridLayout_5 = new QGridLayout(mSizeGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mColumnsLabel_2 = new QLabel(mSizeGroupBox);
        mColumnsLabel_2->setObjectName(QString::fromUtf8("mColumnsLabel_2"));

        gridLayout_5->addWidget(mColumnsLabel_2, 0, 0, 1, 1);

        mHozStretchSpin = new QgsSpinBox(mSizeGroupBox);
        mHozStretchSpin->setObjectName(QString::fromUtf8("mHozStretchSpin"));
        mHozStretchSpin->setMinimum(0);
        mHozStretchSpin->setMaximum(10);
        mHozStretchSpin->setValue(0);

        gridLayout_5->addWidget(mHozStretchSpin, 0, 1, 1, 1);

        mColumnsLabel_3 = new QLabel(mSizeGroupBox);
        mColumnsLabel_3->setObjectName(QString::fromUtf8("mColumnsLabel_3"));

        gridLayout_5->addWidget(mColumnsLabel_3, 1, 0, 1, 1);

        mVertStretchSpin = new QgsSpinBox(mSizeGroupBox);
        mVertStretchSpin->setObjectName(QString::fromUtf8("mVertStretchSpin"));
        mVertStretchSpin->setMinimum(0);
        mVertStretchSpin->setMaximum(10);
        mVertStretchSpin->setValue(0);

        gridLayout_5->addWidget(mVertStretchSpin, 1, 1, 1, 1);


        verticalLayout->addWidget(mSizeGroupBox);

        mWidgetSpecificConfigGroupBox = new QgsCollapsibleGroupBox(QgsAttributeWidgetEditGroupBox);
        mWidgetSpecificConfigGroupBox->setObjectName(QString::fromUtf8("mWidgetSpecificConfigGroupBox"));

        verticalLayout->addWidget(mWidgetSpecificConfigGroupBox);


        retranslateUi(QgsAttributeWidgetEditGroupBox);

        QMetaObject::connectSlotsByName(QgsAttributeWidgetEditGroupBox);
    } // setupUi

    void retranslateUi(QgsCollapsibleGroupBox *QgsAttributeWidgetEditGroupBox)
    {
        QgsAttributeWidgetEditGroupBox->setWindowTitle(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "QgsCollapsibleGroupBox", nullptr));
        QgsAttributeWidgetEditGroupBox->setTitle(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "Widget Display", nullptr));
        mShowLabelCheckBox->setText(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "Show label", nullptr));
        mSizeGroupBox->setTitle(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "Size", nullptr));
        mColumnsLabel_2->setText(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "Horizontal stretch", nullptr));
        mColumnsLabel_3->setText(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "Vertical stretch", nullptr));
        mWidgetSpecificConfigGroupBox->setTitle(QCoreApplication::translate("QgsAttributeWidgetEditGroupBox", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeWidgetEditGroupBox: public Ui_QgsAttributeWidgetEditGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEWIDGETEDITGROUPBOX_H
