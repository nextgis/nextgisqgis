/********************************************************************************
** Form generated from reading UI file 'qgsrangedomainwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRANGEDOMAINWIDGETBASE_H
#define UI_QGSRANGEDOMAINWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRangeDomainWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mMinSpinBox;
    QgsDoubleSpinBox *mMaxSpinBox;
    QCheckBox *mMaxInclusiveCheckBox;
    QLabel *minimumLabel_2;
    QLabel *maximumLabel_2;
    QCheckBox *mMinInclusiveCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsRangeDomainWidgetBase)
    {
        if (QgsRangeDomainWidgetBase->objectName().isEmpty())
            QgsRangeDomainWidgetBase->setObjectName(QString::fromUtf8("QgsRangeDomainWidgetBase"));
        QgsRangeDomainWidgetBase->resize(305, 116);
        gridLayout_2 = new QGridLayout(QgsRangeDomainWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsRangeDomainWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mMinSpinBox = new QgsDoubleSpinBox(groupBox);
        mMinSpinBox->setObjectName(QString::fromUtf8("mMinSpinBox"));

        gridLayout->addWidget(mMinSpinBox, 0, 1, 1, 1);

        mMaxSpinBox = new QgsDoubleSpinBox(groupBox);
        mMaxSpinBox->setObjectName(QString::fromUtf8("mMaxSpinBox"));

        gridLayout->addWidget(mMaxSpinBox, 1, 1, 1, 1);

        mMaxInclusiveCheckBox = new QCheckBox(groupBox);
        mMaxInclusiveCheckBox->setObjectName(QString::fromUtf8("mMaxInclusiveCheckBox"));

        gridLayout->addWidget(mMaxInclusiveCheckBox, 1, 2, 1, 1);

        minimumLabel_2 = new QLabel(groupBox);
        minimumLabel_2->setObjectName(QString::fromUtf8("minimumLabel_2"));

        gridLayout->addWidget(minimumLabel_2, 0, 0, 1, 1);

        maximumLabel_2 = new QLabel(groupBox);
        maximumLabel_2->setObjectName(QString::fromUtf8("maximumLabel_2"));

        gridLayout->addWidget(maximumLabel_2, 1, 0, 1, 1);

        mMinInclusiveCheckBox = new QCheckBox(groupBox);
        mMinInclusiveCheckBox->setObjectName(QString::fromUtf8("mMinInclusiveCheckBox"));

        gridLayout->addWidget(mMinInclusiveCheckBox, 0, 2, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(QgsRangeDomainWidgetBase);

        QMetaObject::connectSlotsByName(QgsRangeDomainWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRangeDomainWidgetBase)
    {
        QgsRangeDomainWidgetBase->setWindowTitle(QCoreApplication::translate("QgsRangeDomainWidgetBase", "Range Domain", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsRangeDomainWidgetBase", "Range", nullptr));
        mMaxInclusiveCheckBox->setText(QCoreApplication::translate("QgsRangeDomainWidgetBase", "Inclusive", nullptr));
        minimumLabel_2->setText(QCoreApplication::translate("QgsRangeDomainWidgetBase", "Minimum", nullptr));
        maximumLabel_2->setText(QCoreApplication::translate("QgsRangeDomainWidgetBase", "Maximum", nullptr));
        mMinInclusiveCheckBox->setText(QCoreApplication::translate("QgsRangeDomainWidgetBase", "Inclusive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRangeDomainWidgetBase: public Ui_QgsRangeDomainWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRANGEDOMAINWIDGETBASE_H
