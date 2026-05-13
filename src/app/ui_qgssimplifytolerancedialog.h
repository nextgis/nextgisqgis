/********************************************************************************
** Form generated from reading UI file 'qgssimplifytolerancedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSIMPLIFYTOLERANCEDIALOG_H
#define UI_QGSSIMPLIFYTOLERANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_SimplifyUserInputWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *labelStatus;
    QLabel *label_2;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsDoubleSpinBox *mToleranceSpinBox;
    QComboBox *mToleranceUnitsComboBox;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QgsSpinBox *mIterationsSpin;
    QLabel *label_4;
    QgsSpinBox *mOffsetSpin;
    QDialogButtonBox *mButtonBox;
    QComboBox *mMethodComboBox;

    void setupUi(QWidget *SimplifyUserInputWidgetBase)
    {
        if (SimplifyUserInputWidgetBase->objectName().isEmpty())
            SimplifyUserInputWidgetBase->setObjectName(QString::fromUtf8("SimplifyUserInputWidgetBase"));
        SimplifyUserInputWidgetBase->resize(452, 114);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SimplifyUserInputWidgetBase->sizePolicy().hasHeightForWidth());
        SimplifyUserInputWidgetBase->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(SimplifyUserInputWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelStatus = new QLabel(SimplifyUserInputWidgetBase);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));

        gridLayout->addWidget(labelStatus, 2, 0, 1, 5);

        label_2 = new QLabel(SimplifyUserInputWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mOptionsStackedWidget = new QStackedWidget(SimplifyUserInputWidgetBase);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mToleranceSpinBox = new QgsDoubleSpinBox(page);
        mToleranceSpinBox->setObjectName(QString::fromUtf8("mToleranceSpinBox"));
        mToleranceSpinBox->setDecimals(6);
        mToleranceSpinBox->setMaximum(999999.000000000000000);
        mToleranceSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(mToleranceSpinBox);

        mToleranceUnitsComboBox = new QComboBox(page);
        mToleranceUnitsComboBox->setObjectName(QString::fromUtf8("mToleranceUnitsComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mToleranceUnitsComboBox->sizePolicy().hasHeightForWidth());
        mToleranceUnitsComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mToleranceUnitsComboBox);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        mOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout_2 = new QHBoxLayout(page_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        mIterationsSpin = new QgsSpinBox(page_2);
        mIterationsSpin->setObjectName(QString::fromUtf8("mIterationsSpin"));
        sizePolicy1.setHeightForWidth(mIterationsSpin->sizePolicy().hasHeightForWidth());
        mIterationsSpin->setSizePolicy(sizePolicy1);
        mIterationsSpin->setMinimum(1);
        mIterationsSpin->setMaximum(5);
        mIterationsSpin->setValue(1);

        horizontalLayout_2->addWidget(mIterationsSpin);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        mOffsetSpin = new QgsSpinBox(page_2);
        mOffsetSpin->setObjectName(QString::fromUtf8("mOffsetSpin"));
        sizePolicy1.setHeightForWidth(mOffsetSpin->sizePolicy().hasHeightForWidth());
        mOffsetSpin->setSizePolicy(sizePolicy1);
        mOffsetSpin->setMaximum(50);

        horizontalLayout_2->addWidget(mOffsetSpin);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(3, 1);
        mOptionsStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mOptionsStackedWidget, 1, 0, 1, 5);

        mButtonBox = new QDialogButtonBox(SimplifyUserInputWidgetBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy2);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 0, 3, 1, 1);

        mMethodComboBox = new QComboBox(SimplifyUserInputWidgetBase);
        mMethodComboBox->setObjectName(QString::fromUtf8("mMethodComboBox"));
        sizePolicy1.setHeightForWidth(mMethodComboBox->sizePolicy().hasHeightForWidth());
        mMethodComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mMethodComboBox, 0, 1, 1, 2);


        retranslateUi(SimplifyUserInputWidgetBase);

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SimplifyUserInputWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *SimplifyUserInputWidgetBase)
    {
        SimplifyUserInputWidgetBase->setWindowTitle(QCoreApplication::translate("SimplifyUserInputWidgetBase", "Simplification Tool", nullptr));
        label_2->setText(QCoreApplication::translate("SimplifyUserInputWidgetBase", "Method", nullptr));
        label->setText(QCoreApplication::translate("SimplifyUserInputWidgetBase", "Tolerance", nullptr));
        label_3->setText(QCoreApplication::translate("SimplifyUserInputWidgetBase", "Iterations", nullptr));
#if QT_CONFIG(tooltip)
        mIterationsSpin->setToolTip(QCoreApplication::translate("SimplifyUserInputWidgetBase", "Number of smooth iterations. More iterations results in smoother geometries, at the expense of greatly increasing the number of vertices in those geometries.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("SimplifyUserInputWidgetBase", "Offset", nullptr));
#if QT_CONFIG(tooltip)
        mOffsetSpin->setToolTip(QCoreApplication::translate("SimplifyUserInputWidgetBase", "Offset from existing vertices at which to insert smoothed vertices. Larger values result in \"looser\" smoothing, smaller values result in \"tight\" smoothing.", nullptr));
#endif // QT_CONFIG(tooltip)
        mOffsetSpin->setSuffix(QCoreApplication::translate("SimplifyUserInputWidgetBase", " %", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimplifyUserInputWidgetBase: public Ui_SimplifyUserInputWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSIMPLIFYTOLERANCEDIALOG_H
