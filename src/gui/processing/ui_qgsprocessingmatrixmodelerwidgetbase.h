/********************************************************************************
** Form generated from reading UI file 'qgsprocessingmatrixmodelerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGMATRIXMODELERWIDGETBASE_H
#define UI_QGSPROCESSINGMATRIXMODELERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingMatrixModelerWidgetBase
{
public:
    QGridLayout *gridLayout;
    QTableView *mTableView;
    QToolButton *mButtonRemoveRow;
    QToolButton *mButtonClear;
    QSpacerItem *verticalSpacer;
    QCheckBox *mFixedRows;
    QToolButton *mButtonAddRow;
    QToolButton *mButtonAddColumn;
    QToolButton *mButtonRemoveColumn;

    void setupUi(QWidget *QgsProcessingMatrixModelerWidgetBase)
    {
        if (QgsProcessingMatrixModelerWidgetBase->objectName().isEmpty())
            QgsProcessingMatrixModelerWidgetBase->setObjectName(QString::fromUtf8("QgsProcessingMatrixModelerWidgetBase"));
        QgsProcessingMatrixModelerWidgetBase->resize(400, 300);
        QgsProcessingMatrixModelerWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsProcessingMatrixModelerWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mTableView = new QTableView(QgsProcessingMatrixModelerWidgetBase);
        mTableView->setObjectName(QString::fromUtf8("mTableView"));
        mTableView->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(mTableView, 0, 0, 8, 1);

        mButtonRemoveRow = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonRemoveRow->setObjectName(QString::fromUtf8("mButtonRemoveRow"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveRow->setIcon(icon);

        gridLayout->addWidget(mButtonRemoveRow, 4, 1, 1, 1);

        mButtonClear = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonClear->setObjectName(QString::fromUtf8("mButtonClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/console/iconClearConsole.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonClear->setIcon(icon1);

        gridLayout->addWidget(mButtonClear, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 172, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        mFixedRows = new QCheckBox(QgsProcessingMatrixModelerWidgetBase);
        mFixedRows->setObjectName(QString::fromUtf8("mFixedRows"));

        gridLayout->addWidget(mFixedRows, 8, 0, 1, 2);

        mButtonAddRow = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonAddRow->setObjectName(QString::fromUtf8("mButtonAddRow"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddRow->setIcon(icon2);

        gridLayout->addWidget(mButtonAddRow, 3, 1, 1, 1);

        mButtonAddColumn = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonAddColumn->setObjectName(QString::fromUtf8("mButtonAddColumn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddColumn->setIcon(icon3);

        gridLayout->addWidget(mButtonAddColumn, 1, 1, 1, 1);

        mButtonRemoveColumn = new QToolButton(QgsProcessingMatrixModelerWidgetBase);
        mButtonRemoveColumn->setObjectName(QString::fromUtf8("mButtonRemoveColumn"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveColumn->setIcon(icon4);

        gridLayout->addWidget(mButtonRemoveColumn, 2, 1, 1, 1);

        QWidget::setTabOrder(mTableView, mButtonAddColumn);
        QWidget::setTabOrder(mButtonAddColumn, mButtonRemoveColumn);
        QWidget::setTabOrder(mButtonRemoveColumn, mButtonAddRow);
        QWidget::setTabOrder(mButtonAddRow, mButtonRemoveRow);
        QWidget::setTabOrder(mButtonRemoveRow, mButtonClear);
        QWidget::setTabOrder(mButtonClear, mFixedRows);

        retranslateUi(QgsProcessingMatrixModelerWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingMatrixModelerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingMatrixModelerWidgetBase)
    {
#if QT_CONFIG(tooltip)
        mButtonRemoveRow->setToolTip(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Remove row", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveRow->setText(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonClear->setToolTip(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Clear all", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonClear->setText(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", nullptr));
        mFixedRows->setText(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Fixed number of rows", nullptr));
#if QT_CONFIG(tooltip)
        mButtonAddRow->setToolTip(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Add row", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddRow->setText(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonAddColumn->setToolTip(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Add column", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddColumn->setText(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mButtonRemoveColumn->setToolTip(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "Remove column", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveColumn->setText(QCoreApplication::translate("QgsProcessingMatrixModelerWidgetBase", "\342\200\246", nullptr));
        (void)QgsProcessingMatrixModelerWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingMatrixModelerWidgetBase: public Ui_QgsProcessingMatrixModelerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGMATRIXMODELERWIDGETBASE_H
