/********************************************************************************
** Form generated from reading UI file 'qgsrasterattributetablewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERATTRIBUTETABLEWIDGETBASE_H
#define UI_QGSRASTERATTRIBUTETABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRasterAttributeTableWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mTopLayout;
    QLabel *label;
    QComboBox *mRasterBandsComboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mClassifyLabel;
    QComboBox *mClassifyComboBox;
    QPushButton *mClassifyButton;
    QTableView *mRATView;

    void setupUi(QWidget *QgsRasterAttributeTableWidgetBase)
    {
        if (QgsRasterAttributeTableWidgetBase->objectName().isEmpty())
            QgsRasterAttributeTableWidgetBase->setObjectName(QString::fromUtf8("QgsRasterAttributeTableWidgetBase"));
        QgsRasterAttributeTableWidgetBase->resize(967, 489);
        verticalLayout = new QVBoxLayout(QgsRasterAttributeTableWidgetBase);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        mTopLayout = new QHBoxLayout();
        mTopLayout->setObjectName(QString::fromUtf8("mTopLayout"));
        label = new QLabel(QgsRasterAttributeTableWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        mTopLayout->addWidget(label);

        mRasterBandsComboBox = new QComboBox(QgsRasterAttributeTableWidgetBase);
        mRasterBandsComboBox->setObjectName(QString::fromUtf8("mRasterBandsComboBox"));

        mTopLayout->addWidget(mRasterBandsComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mTopLayout->addItem(horizontalSpacer_2);

        mClassifyLabel = new QLabel(QgsRasterAttributeTableWidgetBase);
        mClassifyLabel->setObjectName(QString::fromUtf8("mClassifyLabel"));

        mTopLayout->addWidget(mClassifyLabel);

        mClassifyComboBox = new QComboBox(QgsRasterAttributeTableWidgetBase);
        mClassifyComboBox->setObjectName(QString::fromUtf8("mClassifyComboBox"));

        mTopLayout->addWidget(mClassifyComboBox);

        mClassifyButton = new QPushButton(QgsRasterAttributeTableWidgetBase);
        mClassifyButton->setObjectName(QString::fromUtf8("mClassifyButton"));

        mTopLayout->addWidget(mClassifyButton);

        mTopLayout->setStretch(1, 1);
        mTopLayout->setStretch(4, 1);

        verticalLayout->addLayout(mTopLayout);

        mRATView = new QTableView(QgsRasterAttributeTableWidgetBase);
        mRATView->setObjectName(QString::fromUtf8("mRATView"));
        mRATView->setSelectionMode(QAbstractItemView::SingleSelection);
        mRATView->setSortingEnabled(true);
        mRATView->verticalHeader()->setDefaultSectionSize(28);

        verticalLayout->addWidget(mRATView);


        retranslateUi(QgsRasterAttributeTableWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterAttributeTableWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterAttributeTableWidgetBase)
    {
        QgsRasterAttributeTableWidgetBase->setWindowTitle(QCoreApplication::translate("QgsRasterAttributeTableWidgetBase", "Raster Attribute Table", nullptr));
        label->setText(QCoreApplication::translate("QgsRasterAttributeTableWidgetBase", "Raster band", nullptr));
        mClassifyLabel->setText(QCoreApplication::translate("QgsRasterAttributeTableWidgetBase", "Classification", nullptr));
        mClassifyButton->setText(QCoreApplication::translate("QgsRasterAttributeTableWidgetBase", "Classify", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterAttributeTableWidgetBase: public Ui_QgsRasterAttributeTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERATTRIBUTETABLEWIDGETBASE_H
