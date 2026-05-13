/********************************************************************************
** Form generated from reading UI file 'qgsprocessingaggregatemappingpanelbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGAGGREGATEMAPPINGPANELBASE_H
#define UI_QGSPROCESSINGAGGREGATEMAPPINGPANELBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmaplayercombobox.h"
#include "qgsprocessingaggregatewidgets.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingAggregateMapPanelBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QgsAggregateMappingWidget *mFieldsView;
    QVBoxLayout *buttonLayout;
    QToolButton *mAddButton;
    QToolButton *mDeleteButton;
    QToolButton *mUpButton;
    QToolButton *mDownButton;
    QToolButton *mResetButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *loadFromLayerLayout;
    QLabel *loadFromLayerLabel;
    QgsMapLayerComboBox *mLayerCombo;
    QPushButton *mLoadLayerFieldsButton;

    void setupUi(QWidget *QgsProcessingAggregateMapPanelBase)
    {
        if (QgsProcessingAggregateMapPanelBase->objectName().isEmpty())
            QgsProcessingAggregateMapPanelBase->setObjectName(QString::fromUtf8("QgsProcessingAggregateMapPanelBase"));
        QgsProcessingAggregateMapPanelBase->resize(590, 552);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsProcessingAggregateMapPanelBase->sizePolicy().hasHeightForWidth());
        QgsProcessingAggregateMapPanelBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsProcessingAggregateMapPanelBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFieldsView = new QgsAggregateMappingWidget(QgsProcessingAggregateMapPanelBase);
        mFieldsView->setObjectName(QString::fromUtf8("mFieldsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFieldsView->sizePolicy().hasHeightForWidth());
        mFieldsView->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mFieldsView);

        buttonLayout = new QVBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        mAddButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddButton->setIcon(icon);

        buttonLayout->addWidget(mAddButton);

        mDeleteButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mDeleteButton->setObjectName(QString::fromUtf8("mDeleteButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteButton->setIcon(icon1);

        buttonLayout->addWidget(mDeleteButton);

        mUpButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mUpButton->setObjectName(QString::fromUtf8("mUpButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mUpButton->setIcon(icon2);

        buttonLayout->addWidget(mUpButton);

        mDownButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mDownButton->setObjectName(QString::fromUtf8("mDownButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDownButton->setIcon(icon3);

        buttonLayout->addWidget(mDownButton);

        mResetButton = new QToolButton(QgsProcessingAggregateMapPanelBase);
        mResetButton->setObjectName(QString::fromUtf8("mResetButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mIconClearText.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetButton->setIcon(icon4);

        buttonLayout->addWidget(mResetButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        buttonLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(buttonLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        loadFromLayerLayout = new QHBoxLayout();
        loadFromLayerLayout->setObjectName(QString::fromUtf8("loadFromLayerLayout"));
        loadFromLayerLabel = new QLabel(QgsProcessingAggregateMapPanelBase);
        loadFromLayerLabel->setObjectName(QString::fromUtf8("loadFromLayerLabel"));

        loadFromLayerLayout->addWidget(loadFromLayerLabel);

        mLayerCombo = new QgsMapLayerComboBox(QgsProcessingAggregateMapPanelBase);
        mLayerCombo->setObjectName(QString::fromUtf8("mLayerCombo"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLayerCombo->sizePolicy().hasHeightForWidth());
        mLayerCombo->setSizePolicy(sizePolicy2);

        loadFromLayerLayout->addWidget(mLayerCombo);

        mLoadLayerFieldsButton = new QPushButton(QgsProcessingAggregateMapPanelBase);
        mLoadLayerFieldsButton->setObjectName(QString::fromUtf8("mLoadLayerFieldsButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mLoadLayerFieldsButton->sizePolicy().hasHeightForWidth());
        mLoadLayerFieldsButton->setSizePolicy(sizePolicy3);

        loadFromLayerLayout->addWidget(mLoadLayerFieldsButton);


        verticalLayout_2->addLayout(loadFromLayerLayout);


        retranslateUi(QgsProcessingAggregateMapPanelBase);

        QMetaObject::connectSlotsByName(QgsProcessingAggregateMapPanelBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingAggregateMapPanelBase)
    {
        QgsProcessingAggregateMapPanelBase->setWindowTitle(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "Fields", nullptr));
#if QT_CONFIG(tooltip)
        mAddButton->setToolTip(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "Add new field", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddButton->setText(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "add", nullptr));
#if QT_CONFIG(tooltip)
        mDeleteButton->setToolTip(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "Delete selected field", nullptr));
#endif // QT_CONFIG(tooltip)
        mDeleteButton->setText(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "delete", nullptr));
#if QT_CONFIG(tooltip)
        mUpButton->setToolTip(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "Move selected field up", nullptr));
#endif // QT_CONFIG(tooltip)
        mUpButton->setText(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "up", nullptr));
#if QT_CONFIG(tooltip)
        mDownButton->setToolTip(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "Move selected field down", nullptr));
#endif // QT_CONFIG(tooltip)
        mDownButton->setText(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "down", nullptr));
#if QT_CONFIG(tooltip)
        mResetButton->setToolTip(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "Reset all fields", nullptr));
#endif // QT_CONFIG(tooltip)
        mResetButton->setText(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "reset", nullptr));
        loadFromLayerLabel->setText(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "Load fields from template layer", nullptr));
#if QT_CONFIG(tooltip)
        mLoadLayerFieldsButton->setToolTip(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "Load fields from selected template layer", nullptr));
#endif // QT_CONFIG(tooltip)
        mLoadLayerFieldsButton->setText(QCoreApplication::translate("QgsProcessingAggregateMapPanelBase", "Load Fields", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingAggregateMapPanelBase: public Ui_QgsProcessingAggregateMapPanelBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGAGGREGATEMAPPINGPANELBASE_H
