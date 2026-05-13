/********************************************************************************
** Form generated from reading UI file 'qgsreportwidgetlayoutsectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSREPORTWIDGETLAYOUTSECTIONBASE_H
#define UI_QGSREPORTWIDGETLAYOUTSECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsReportWidgetLayoutSectionBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *mButtonEditBody;
    QCheckBox *mCheckShowBody;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsReportWidgetLayoutSectionBase)
    {
        if (QgsReportWidgetLayoutSectionBase->objectName().isEmpty())
            QgsReportWidgetLayoutSectionBase->setObjectName(QString::fromUtf8("QgsReportWidgetLayoutSectionBase"));
        QgsReportWidgetLayoutSectionBase->resize(385, 237);
        verticalLayout = new QVBoxLayout(QgsReportWidgetLayoutSectionBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mButtonEditBody = new QPushButton(QgsReportWidgetLayoutSectionBase);
        mButtonEditBody->setObjectName(QString::fromUtf8("mButtonEditBody"));

        gridLayout_2->addWidget(mButtonEditBody, 0, 1, 1, 1);

        mCheckShowBody = new QCheckBox(QgsReportWidgetLayoutSectionBase);
        mCheckShowBody->setObjectName(QString::fromUtf8("mCheckShowBody"));

        gridLayout_2->addWidget(mCheckShowBody, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mCheckShowBody, mButtonEditBody);

        retranslateUi(QgsReportWidgetLayoutSectionBase);

        QMetaObject::connectSlotsByName(QgsReportWidgetLayoutSectionBase);
    } // setupUi

    void retranslateUi(QWidget *QgsReportWidgetLayoutSectionBase)
    {
        QgsReportWidgetLayoutSectionBase->setWindowTitle(QCoreApplication::translate("QgsReportWidgetLayoutSectionBase", "Layout Manager", nullptr));
#if QT_CONFIG(tooltip)
        mButtonEditBody->setToolTip(QCoreApplication::translate("QgsReportWidgetLayoutSectionBase", "Edit the static layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonEditBody->setText(QCoreApplication::translate("QgsReportWidgetLayoutSectionBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        mCheckShowBody->setToolTip(QCoreApplication::translate("QgsReportWidgetLayoutSectionBase", "Include a static layout inserted into the report", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckShowBody->setText(QCoreApplication::translate("QgsReportWidgetLayoutSectionBase", "Include section", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsReportWidgetLayoutSectionBase: public Ui_QgsReportWidgetLayoutSectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSREPORTWIDGETLAYOUTSECTIONBASE_H
