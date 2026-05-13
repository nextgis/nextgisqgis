/********************************************************************************
** Form generated from reading UI file 'qgslayoutlegendmapfilteringwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTLEGENDMAPFILTERINGWIDGETBASE_H
#define UI_QGSLAYOUTLEGENDMAPFILTERINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutLegendMapFilteringWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QListView *mFilterMapItemsListView;

    void setupUi(QWidget *QgsLayoutLegendMapFilteringWidgetBase)
    {
        if (QgsLayoutLegendMapFilteringWidgetBase->objectName().isEmpty())
            QgsLayoutLegendMapFilteringWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutLegendMapFilteringWidgetBase"));
        QgsLayoutLegendMapFilteringWidgetBase->resize(318, 619);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutLegendMapFilteringWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutLegendMapFilteringWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutLegendMapFilteringWidgetBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsLayoutLegendMapFilteringWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        verticalLayout_2->addWidget(label_9);

        mFilterMapItemsListView = new QListView(groupBox);
        mFilterMapItemsListView->setObjectName(QString::fromUtf8("mFilterMapItemsListView"));

        verticalLayout_2->addWidget(mFilterMapItemsListView);


        verticalLayout->addWidget(groupBox);


        retranslateUi(QgsLayoutLegendMapFilteringWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutLegendMapFilteringWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutLegendMapFilteringWidgetBase)
    {
        QgsLayoutLegendMapFilteringWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutLegendMapFilteringWidgetBase", "Legend Filtering Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutLegendMapFilteringWidgetBase", "Filter Legend by Map", nullptr));
        label_9->setText(QCoreApplication::translate("QgsLayoutLegendMapFilteringWidgetBase", "Only show legend items visible in the selected maps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutLegendMapFilteringWidgetBase: public Ui_QgsLayoutLegendMapFilteringWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTLEGENDMAPFILTERINGWIDGETBASE_H
