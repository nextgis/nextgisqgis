/********************************************************************************
** Form generated from reading UI file 'qgsnumericformatselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNUMERICFORMATSELECTORBASE_H
#define UI_QGSNUMERICFORMATSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNumericFormatSelectorBase
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mCategoryCombo;
    QGroupBox *mSampleGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mSampleLabel;

    void setupUi(QgsPanelWidget *QgsNumericFormatSelectorBase)
    {
        if (QgsNumericFormatSelectorBase->objectName().isEmpty())
            QgsNumericFormatSelectorBase->setObjectName(QString::fromUtf8("QgsNumericFormatSelectorBase"));
        QgsNumericFormatSelectorBase->resize(335, 439);
        QgsNumericFormatSelectorBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsNumericFormatSelectorBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        stackedWidget = new QStackedWidget(QgsNumericFormatSelectorBase);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QString::fromUtf8("pageDummy"));
        verticalLayout = new QVBoxLayout(pageDummy);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(pageDummy);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(pageDummy);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QgsNumericFormatSelectorBase);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mCategoryCombo = new QComboBox(QgsNumericFormatSelectorBase);
        mCategoryCombo->setObjectName(QString::fromUtf8("mCategoryCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCategoryCombo->sizePolicy().hasHeightForWidth());
        mCategoryCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mCategoryCombo);

        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        mSampleGroupBox = new QGroupBox(QgsNumericFormatSelectorBase);
        mSampleGroupBox->setObjectName(QString::fromUtf8("mSampleGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(mSampleGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSampleLabel = new QLabel(mSampleGroupBox);
        mSampleLabel->setObjectName(QString::fromUtf8("mSampleLabel"));

        horizontalLayout_2->addWidget(mSampleLabel);


        gridLayout->addWidget(mSampleGroupBox, 3, 0, 1, 1);


        retranslateUi(QgsNumericFormatSelectorBase);

        QMetaObject::connectSlotsByName(QgsNumericFormatSelectorBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsNumericFormatSelectorBase)
    {
        label_2->setText(QCoreApplication::translate("QgsNumericFormatSelectorBase", "This format doesn't have any editable properties", nullptr));
        label->setText(QCoreApplication::translate("QgsNumericFormatSelectorBase", "Category", nullptr));
        mSampleGroupBox->setTitle(QCoreApplication::translate("QgsNumericFormatSelectorBase", "Sample", nullptr));
        mSampleLabel->setText(QString());
        (void)QgsNumericFormatSelectorBase;
    } // retranslateUi

};

namespace Ui {
    class QgsNumericFormatSelectorBase: public Ui_QgsNumericFormatSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNUMERICFORMATSELECTORBASE_H
