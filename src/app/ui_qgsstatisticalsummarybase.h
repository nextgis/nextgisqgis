/********************************************************************************
** Form generated from reading UI file 'qgsstatisticalsummarybase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTATISTICALSUMMARYBASE_H
#define UI_QGSSTATISTICALSUMMARYBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStatisticalSummaryWidgetBase
{
public:
    QWidget *mContents;
    QVBoxLayout *verticalLayout;
    QgsMapLayerComboBox *mLayerComboBox;
    QgsFieldExpressionWidget *mFieldExpressionWidget;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *mCalculatingProgressBar;
    QPushButton *mCancelButton;
    QTableWidget *mStatisticsTable;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mSelectedOnlyCheckBox;
    QToolButton *mButtonCopy;
    QToolButton *mButtonRefresh;
    QToolButton *mOptionsToolButton;

    void setupUi(QgsDockWidget *QgsStatisticalSummaryWidgetBase)
    {
        if (QgsStatisticalSummaryWidgetBase->objectName().isEmpty())
            QgsStatisticalSummaryWidgetBase->setObjectName(QString::fromUtf8("QgsStatisticalSummaryWidgetBase"));
        QgsStatisticalSummaryWidgetBase->resize(291, 376);
        mContents = new QWidget();
        mContents->setObjectName(QString::fromUtf8("mContents"));
        verticalLayout = new QVBoxLayout(mContents);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mLayerComboBox = new QgsMapLayerComboBox(mContents);
        mLayerComboBox->setObjectName(QString::fromUtf8("mLayerComboBox"));

        verticalLayout->addWidget(mLayerComboBox);

        mFieldExpressionWidget = new QgsFieldExpressionWidget(mContents);
        mFieldExpressionWidget->setObjectName(QString::fromUtf8("mFieldExpressionWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFieldExpressionWidget->sizePolicy().hasHeightForWidth());
        mFieldExpressionWidget->setSizePolicy(sizePolicy);
        mFieldExpressionWidget->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(mFieldExpressionWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        mCalculatingProgressBar = new QProgressBar(mContents);
        mCalculatingProgressBar->setObjectName(QString::fromUtf8("mCalculatingProgressBar"));
        mCalculatingProgressBar->setValue(0);

        horizontalLayout_3->addWidget(mCalculatingProgressBar);

        mCancelButton = new QPushButton(mContents);
        mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));

        horizontalLayout_3->addWidget(mCancelButton);


        verticalLayout->addLayout(horizontalLayout_3);

        mStatisticsTable = new QTableWidget(mContents);
        if (mStatisticsTable->columnCount() < 2)
            mStatisticsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mStatisticsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mStatisticsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mStatisticsTable->setObjectName(QString::fromUtf8("mStatisticsTable"));
        mStatisticsTable->setAlternatingRowColors(true);
        mStatisticsTable->horizontalHeader()->setVisible(true);
        mStatisticsTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(mStatisticsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mSelectedOnlyCheckBox = new QCheckBox(mContents);
        mSelectedOnlyCheckBox->setObjectName(QString::fromUtf8("mSelectedOnlyCheckBox"));

        horizontalLayout->addWidget(mSelectedOnlyCheckBox);

        mButtonCopy = new QToolButton(mContents);
        mButtonCopy->setObjectName(QString::fromUtf8("mButtonCopy"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonCopy->setIcon(icon);
        mButtonCopy->setAutoRaise(true);

        horizontalLayout->addWidget(mButtonCopy);

        mButtonRefresh = new QToolButton(mContents);
        mButtonRefresh->setObjectName(QString::fromUtf8("mButtonRefresh"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRefresh->setIcon(icon1);
        mButtonRefresh->setAutoRaise(true);

        horizontalLayout->addWidget(mButtonRefresh);

        mOptionsToolButton = new QToolButton(mContents);
        mOptionsToolButton->setObjectName(QString::fromUtf8("mOptionsToolButton"));
        mOptionsToolButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(mOptionsToolButton);


        verticalLayout->addLayout(horizontalLayout);

        QgsStatisticalSummaryWidgetBase->setWidget(mContents);

        retranslateUi(QgsStatisticalSummaryWidgetBase);

        QMetaObject::connectSlotsByName(QgsStatisticalSummaryWidgetBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsStatisticalSummaryWidgetBase)
    {
        QgsStatisticalSummaryWidgetBase->setWindowTitle(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "Statistics", nullptr));
        mCancelButton->setText(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "Cancel", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mStatisticsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "Statistic", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mStatisticsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "Value", nullptr));
        mSelectedOnlyCheckBox->setText(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "Selected features only", nullptr));
#if QT_CONFIG(tooltip)
        mButtonCopy->setToolTip(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "Copy Statistics to Clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonCopy->setText(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonRefresh->setToolTip(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "Recalculate Statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRefresh->setText(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "\342\200\246", nullptr));
        mOptionsToolButton->setText(QCoreApplication::translate("QgsStatisticalSummaryWidgetBase", "\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsStatisticalSummaryWidgetBase: public Ui_QgsStatisticalSummaryWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTATISTICALSUMMARYBASE_H
