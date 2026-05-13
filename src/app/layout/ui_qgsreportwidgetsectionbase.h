/********************************************************************************
** Form generated from reading UI file 'qgsreportwidgetsectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSREPORTWIDGETSECTIONBASE_H
#define UI_QGSREPORTWIDGETSECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsReportWidgetSectionBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *mButtonEditHeader;
    QCheckBox *mCheckShowHeader;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *mCheckShowFooter;
    QPushButton *mButtonEditFooter;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsReportWidgetSectionBase)
    {
        if (QgsReportWidgetSectionBase->objectName().isEmpty())
            QgsReportWidgetSectionBase->setObjectName(QString::fromUtf8("QgsReportWidgetSectionBase"));
        QgsReportWidgetSectionBase->resize(460, 174);
        verticalLayout = new QVBoxLayout(QgsReportWidgetSectionBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mButtonEditHeader = new QPushButton(QgsReportWidgetSectionBase);
        mButtonEditHeader->setObjectName(QString::fromUtf8("mButtonEditHeader"));

        gridLayout_2->addWidget(mButtonEditHeader, 0, 1, 1, 1);

        mCheckShowHeader = new QCheckBox(QgsReportWidgetSectionBase);
        mCheckShowHeader->setObjectName(QString::fromUtf8("mCheckShowHeader"));

        gridLayout_2->addWidget(mCheckShowHeader, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        mCheckShowFooter = new QCheckBox(QgsReportWidgetSectionBase);
        mCheckShowFooter->setObjectName(QString::fromUtf8("mCheckShowFooter"));

        gridLayout_2->addWidget(mCheckShowFooter, 1, 0, 1, 1);

        mButtonEditFooter = new QPushButton(QgsReportWidgetSectionBase);
        mButtonEditFooter->setObjectName(QString::fromUtf8("mButtonEditFooter"));

        gridLayout_2->addWidget(mButtonEditFooter, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mCheckShowHeader, mButtonEditHeader);
        QWidget::setTabOrder(mButtonEditHeader, mCheckShowFooter);
        QWidget::setTabOrder(mCheckShowFooter, mButtonEditFooter);

        retranslateUi(QgsReportWidgetSectionBase);

        QMetaObject::connectSlotsByName(QgsReportWidgetSectionBase);
    } // setupUi

    void retranslateUi(QWidget *QgsReportWidgetSectionBase)
    {
        QgsReportWidgetSectionBase->setWindowTitle(QCoreApplication::translate("QgsReportWidgetSectionBase", "Layout Manager", nullptr));
#if QT_CONFIG(tooltip)
        mButtonEditHeader->setToolTip(QCoreApplication::translate("QgsReportWidgetSectionBase", "Edit the report header layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonEditHeader->setText(QCoreApplication::translate("QgsReportWidgetSectionBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        mCheckShowHeader->setToolTip(QCoreApplication::translate("QgsReportWidgetSectionBase", "Include a layout at the very beginning of the report", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckShowHeader->setText(QCoreApplication::translate("QgsReportWidgetSectionBase", "Include report header", nullptr));
#if QT_CONFIG(tooltip)
        mCheckShowFooter->setToolTip(QCoreApplication::translate("QgsReportWidgetSectionBase", "Include a layout at the very end of the report", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckShowFooter->setText(QCoreApplication::translate("QgsReportWidgetSectionBase", "Include report footer", nullptr));
#if QT_CONFIG(tooltip)
        mButtonEditFooter->setToolTip(QCoreApplication::translate("QgsReportWidgetSectionBase", "Edit the report footer layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonEditFooter->setText(QCoreApplication::translate("QgsReportWidgetSectionBase", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsReportWidgetSectionBase: public Ui_QgsReportWidgetSectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSREPORTWIDGETSECTIONBASE_H
