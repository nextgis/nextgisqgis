/********************************************************************************
** Form generated from reading UI file 'qgsprocessingtinmeshdatawidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGTINMESHDATAWIDGETBASE_H
#define UI_QGSPROCESSINGTINMESHDATAWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingTinInputLayersWidgetBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mButtonAdd;
    QToolButton *mButtonRemove;
    QgsFieldComboBox *mComboFields;
    QgsMapLayerComboBox *mComboLayers;
    QLabel *label_2;
    QCheckBox *mCheckBoxUseZCoordinate;
    QLabel *label_3;
    QTableView *mTableView;

    void setupUi(QWidget *QgsProcessingTinInputLayersWidgetBase)
    {
        if (QgsProcessingTinInputLayersWidgetBase->objectName().isEmpty())
            QgsProcessingTinInputLayersWidgetBase->setObjectName(QString::fromUtf8("QgsProcessingTinInputLayersWidgetBase"));
        QgsProcessingTinInputLayersWidgetBase->resize(527, 300);
        QgsProcessingTinInputLayersWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsProcessingTinInputLayersWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mButtonAdd = new QToolButton(QgsProcessingTinInputLayersWidgetBase);
        mButtonAdd->setObjectName(QString::fromUtf8("mButtonAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAdd->setIcon(icon);

        horizontalLayout->addWidget(mButtonAdd);

        mButtonRemove = new QToolButton(QgsProcessingTinInputLayersWidgetBase);
        mButtonRemove->setObjectName(QString::fromUtf8("mButtonRemove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemove->setIcon(icon1);

        horizontalLayout->addWidget(mButtonRemove);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        mComboFields = new QgsFieldComboBox(QgsProcessingTinInputLayersWidgetBase);
        mComboFields->setObjectName(QString::fromUtf8("mComboFields"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mComboFields->sizePolicy().hasHeightForWidth());
        mComboFields->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mComboFields, 1, 1, 1, 1);

        mComboLayers = new QgsMapLayerComboBox(QgsProcessingTinInputLayersWidgetBase);
        mComboLayers->setObjectName(QString::fromUtf8("mComboLayers"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mComboLayers->sizePolicy().hasHeightForWidth());
        mComboLayers->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mComboLayers, 0, 1, 1, 1);

        label_2 = new QLabel(QgsProcessingTinInputLayersWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mCheckBoxUseZCoordinate = new QCheckBox(QgsProcessingTinInputLayersWidgetBase);
        mCheckBoxUseZCoordinate->setObjectName(QString::fromUtf8("mCheckBoxUseZCoordinate"));

        gridLayout->addWidget(mCheckBoxUseZCoordinate, 2, 0, 1, 2);

        label_3 = new QLabel(QgsProcessingTinInputLayersWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        mTableView = new QTableView(QgsProcessingTinInputLayersWidgetBase);
        mTableView->setObjectName(QString::fromUtf8("mTableView"));
        mTableView->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::SelectedClicked);
        mTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        mTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        mTableView->horizontalHeader()->setCascadingSectionResizes(true);
        mTableView->horizontalHeader()->setHighlightSections(false);
        mTableView->horizontalHeader()->setStretchLastSection(true);
        mTableView->verticalHeader()->setVisible(false);
        mTableView->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(mTableView, 4, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(mComboLayers);
        label_3->setBuddy(mComboFields);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mComboLayers, mComboFields);
        QWidget::setTabOrder(mComboFields, mCheckBoxUseZCoordinate);
        QWidget::setTabOrder(mCheckBoxUseZCoordinate, mButtonAdd);
        QWidget::setTabOrder(mButtonAdd, mButtonRemove);
        QWidget::setTabOrder(mButtonRemove, mTableView);

        retranslateUi(QgsProcessingTinInputLayersWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingTinInputLayersWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingTinInputLayersWidgetBase)
    {
        mButtonAdd->setText(QCoreApplication::translate("QgsProcessingTinInputLayersWidgetBase", "\342\200\246", nullptr));
        mButtonRemove->setText(QCoreApplication::translate("QgsProcessingTinInputLayersWidgetBase", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsProcessingTinInputLayersWidgetBase", "Vector Layer", nullptr));
        mCheckBoxUseZCoordinate->setText(QCoreApplication::translate("QgsProcessingTinInputLayersWidgetBase", "Use Z-coordinate for Value on Vertex", nullptr));
        label_3->setText(QCoreApplication::translate("QgsProcessingTinInputLayersWidgetBase", "Value on Vertex", nullptr));
        (void)QgsProcessingTinInputLayersWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingTinInputLayersWidgetBase: public Ui_QgsProcessingTinInputLayersWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGTINMESHDATAWIDGETBASE_H
