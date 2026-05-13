/********************************************************************************
** Form generated from reading UI file 'qgsreportwidgetfieldgroupsectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSREPORTWIDGETFIELDGROUPSECTIONBASE_H
#define UI_QGSREPORTWIDGETFIELDGROUPSECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsReportWidgetFieldGroupSectionBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *mButtonEditHeader;
    QCheckBox *mSortAscendingCheckBox;
    QLabel *label_2;
    QPushButton *mButtonEditFooter;
    QCheckBox *mCheckShowFooter;
    QgsFieldComboBox *mFieldComboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mCheckHeaderAlwaysVisible;
    QgsMapLayerComboBox *mLayerComboBox;
    QCheckBox *mCheckShowHeader;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mCheckShowBody;
    QPushButton *mButtonEditBody;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *mCheckFooterAlwaysVisible;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsReportWidgetFieldGroupSectionBase)
    {
        if (QgsReportWidgetFieldGroupSectionBase->objectName().isEmpty())
            QgsReportWidgetFieldGroupSectionBase->setObjectName(QString::fromUtf8("QgsReportWidgetFieldGroupSectionBase"));
        QgsReportWidgetFieldGroupSectionBase->resize(277, 415);
        verticalLayout = new QVBoxLayout(QgsReportWidgetFieldGroupSectionBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mButtonEditHeader = new QPushButton(QgsReportWidgetFieldGroupSectionBase);
        mButtonEditHeader->setObjectName(QString::fromUtf8("mButtonEditHeader"));

        gridLayout->addWidget(mButtonEditHeader, 0, 1, 1, 1);

        mSortAscendingCheckBox = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mSortAscendingCheckBox->setObjectName(QString::fromUtf8("mSortAscendingCheckBox"));

        gridLayout->addWidget(mSortAscendingCheckBox, 4, 1, 1, 2);

        label_2 = new QLabel(QgsReportWidgetFieldGroupSectionBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mButtonEditFooter = new QPushButton(QgsReportWidgetFieldGroupSectionBase);
        mButtonEditFooter->setObjectName(QString::fromUtf8("mButtonEditFooter"));

        gridLayout->addWidget(mButtonEditFooter, 6, 1, 1, 1);

        mCheckShowFooter = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckShowFooter->setObjectName(QString::fromUtf8("mCheckShowFooter"));

        gridLayout->addWidget(mCheckShowFooter, 6, 0, 1, 1);

        mFieldComboBox = new QgsFieldComboBox(QgsReportWidgetFieldGroupSectionBase);
        mFieldComboBox->setObjectName(QString::fromUtf8("mFieldComboBox"));

        gridLayout->addWidget(mFieldComboBox, 3, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mCheckHeaderAlwaysVisible = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckHeaderAlwaysVisible->setObjectName(QString::fromUtf8("mCheckHeaderAlwaysVisible"));

        horizontalLayout->addWidget(mCheckHeaderAlwaysVisible);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        mLayerComboBox = new QgsMapLayerComboBox(QgsReportWidgetFieldGroupSectionBase);
        mLayerComboBox->setObjectName(QString::fromUtf8("mLayerComboBox"));

        gridLayout->addWidget(mLayerComboBox, 2, 1, 1, 2);

        mCheckShowHeader = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckShowHeader->setObjectName(QString::fromUtf8("mCheckShowHeader"));

        gridLayout->addWidget(mCheckShowHeader, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 2, 1, 1);

        mCheckShowBody = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckShowBody->setObjectName(QString::fromUtf8("mCheckShowBody"));

        gridLayout->addWidget(mCheckShowBody, 5, 0, 1, 1);

        mButtonEditBody = new QPushButton(QgsReportWidgetFieldGroupSectionBase);
        mButtonEditBody->setObjectName(QString::fromUtf8("mButtonEditBody"));

        gridLayout->addWidget(mButtonEditBody, 5, 1, 1, 1);

        label_3 = new QLabel(QgsReportWidgetFieldGroupSectionBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        mCheckFooterAlwaysVisible = new QCheckBox(QgsReportWidgetFieldGroupSectionBase);
        mCheckFooterAlwaysVisible->setObjectName(QString::fromUtf8("mCheckFooterAlwaysVisible"));

        horizontalLayout_2->addWidget(mCheckFooterAlwaysVisible);


        gridLayout->addLayout(horizontalLayout_2, 7, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mCheckShowHeader, mButtonEditHeader);
        QWidget::setTabOrder(mButtonEditHeader, mCheckHeaderAlwaysVisible);
        QWidget::setTabOrder(mCheckHeaderAlwaysVisible, mLayerComboBox);
        QWidget::setTabOrder(mLayerComboBox, mFieldComboBox);
        QWidget::setTabOrder(mFieldComboBox, mSortAscendingCheckBox);
        QWidget::setTabOrder(mSortAscendingCheckBox, mCheckShowBody);
        QWidget::setTabOrder(mCheckShowBody, mButtonEditBody);
        QWidget::setTabOrder(mButtonEditBody, mCheckShowFooter);
        QWidget::setTabOrder(mCheckShowFooter, mButtonEditFooter);
        QWidget::setTabOrder(mButtonEditFooter, mCheckFooterAlwaysVisible);

        retranslateUi(QgsReportWidgetFieldGroupSectionBase);

        QMetaObject::connectSlotsByName(QgsReportWidgetFieldGroupSectionBase);
    } // setupUi

    void retranslateUi(QWidget *QgsReportWidgetFieldGroupSectionBase)
    {
        QgsReportWidgetFieldGroupSectionBase->setWindowTitle(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Layout Manager", nullptr));
#if QT_CONFIG(tooltip)
        mButtonEditHeader->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit the field group header layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonEditHeader->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        mSortAscendingCheckBox->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Sort features ascendingly by field value", nullptr));
#endif // QT_CONFIG(tooltip)
        mSortAscendingCheckBox->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Sort ascending", nullptr));
        label_2->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Layer", nullptr));
#if QT_CONFIG(tooltip)
        mButtonEditFooter->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit the field group footer layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonEditFooter->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        mCheckShowFooter->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include a footer layout after the last matching feature", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckShowFooter->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include footer", nullptr));
#if QT_CONFIG(tooltip)
        mFieldComboBox->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Source field to iterate over", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mCheckHeaderAlwaysVisible->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "If unchecked, the header will only be shown when at least one matching feature is found", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckHeaderAlwaysVisible->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Show header when no matching\n"
"features are found", nullptr));
#if QT_CONFIG(tooltip)
        mLayerComboBox->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Source layer to iterate over", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mCheckShowHeader->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include a header layout before the first matching feature", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckShowHeader->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include header", nullptr));
#if QT_CONFIG(tooltip)
        mCheckShowBody->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include a separate layout for every matching feature found", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckShowBody->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Include body", nullptr));
#if QT_CONFIG(tooltip)
        mButtonEditBody->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit the field group body layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonEditBody->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Edit", nullptr));
        label_3->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Field", nullptr));
#if QT_CONFIG(tooltip)
        mCheckFooterAlwaysVisible->setToolTip(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "If unchecked, the footer will only be shown when at least one matching feature is found", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckFooterAlwaysVisible->setText(QCoreApplication::translate("QgsReportWidgetFieldGroupSectionBase", "Show footer when no matching\n"
"features are found", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsReportWidgetFieldGroupSectionBase: public Ui_QgsReportWidgetFieldGroupSectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSREPORTWIDGETFIELDGROUPSECTIONBASE_H
