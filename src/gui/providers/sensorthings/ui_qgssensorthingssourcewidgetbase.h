/********************************************************************************
** Form generated from reading UI file 'qgssensorthingssourcewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSENSORTHINGSSOURCEWIDGETBASE_H
#define UI_QGSSENSORTHINGSSOURCEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSensorThingsSourceWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *mExpansionsTable;
    QComboBox *mComboEntityType;
    QWidget *mExtentLimitFrame;
    QToolButton *mRetrieveTypesButton;
    QComboBox *mComboGeometryType;
    QgsSpinBox *mSpinFeatureLimit;
    QgsSpinBox *mSpinPageSize;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;

    void setupUi(QWidget *QgsSensorThingsSourceWidgetBase)
    {
        if (QgsSensorThingsSourceWidgetBase->objectName().isEmpty())
            QgsSensorThingsSourceWidgetBase->setObjectName(QString::fromUtf8("QgsSensorThingsSourceWidgetBase"));
        QgsSensorThingsSourceWidgetBase->resize(537, 300);
        gridLayout = new QGridLayout(QgsSensorThingsSourceWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsSensorThingsSourceWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(QgsSensorThingsSourceWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mExpansionsTable = new QTableView(groupBox);
        mExpansionsTable->setObjectName(QString::fromUtf8("mExpansionsTable"));

        verticalLayout->addWidget(mExpansionsTable);


        gridLayout->addWidget(groupBox, 6, 0, 1, 3);

        mComboEntityType = new QComboBox(QgsSensorThingsSourceWidgetBase);
        mComboEntityType->setObjectName(QString::fromUtf8("mComboEntityType"));

        gridLayout->addWidget(mComboEntityType, 0, 1, 1, 2);

        mExtentLimitFrame = new QWidget(QgsSensorThingsSourceWidgetBase);
        mExtentLimitFrame->setObjectName(QString::fromUtf8("mExtentLimitFrame"));
        mExtentLimitFrame->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExtentLimitFrame, 5, 1, 1, 2);

        mRetrieveTypesButton = new QToolButton(QgsSensorThingsSourceWidgetBase);
        mRetrieveTypesButton->setObjectName(QString::fromUtf8("mRetrieveTypesButton"));
        mRetrieveTypesButton->setMinimumSize(QSize(24, 24));
        mRetrieveTypesButton->setMaximumSize(QSize(24, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::On);
        mRetrieveTypesButton->setIcon(icon);
        mRetrieveTypesButton->setAutoRaise(true);

        gridLayout->addWidget(mRetrieveTypesButton, 1, 2, 1, 1);

        mComboGeometryType = new QComboBox(QgsSensorThingsSourceWidgetBase);
        mComboGeometryType->setObjectName(QString::fromUtf8("mComboGeometryType"));

        gridLayout->addWidget(mComboGeometryType, 1, 1, 1, 1);

        mSpinFeatureLimit = new QgsSpinBox(QgsSensorThingsSourceWidgetBase);
        mSpinFeatureLimit->setObjectName(QString::fromUtf8("mSpinFeatureLimit"));
        mSpinFeatureLimit->setMaximum(999999999);

        gridLayout->addWidget(mSpinFeatureLimit, 4, 1, 1, 2);

        mSpinPageSize = new QgsSpinBox(QgsSensorThingsSourceWidgetBase);
        mSpinPageSize->setObjectName(QString::fromUtf8("mSpinPageSize"));
        mSpinPageSize->setMaximum(9999999);

        gridLayout->addWidget(mSpinPageSize, 2, 1, 1, 2);

        label_3 = new QLabel(QgsSensorThingsSourceWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(QgsSensorThingsSourceWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_6 = new QLabel(QgsSensorThingsSourceWidgetBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label = new QLabel(QgsSensorThingsSourceWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        QWidget::setTabOrder(mComboEntityType, mComboGeometryType);
        QWidget::setTabOrder(mComboGeometryType, mRetrieveTypesButton);
        QWidget::setTabOrder(mRetrieveTypesButton, mSpinPageSize);
        QWidget::setTabOrder(mSpinPageSize, mSpinFeatureLimit);
        QWidget::setTabOrder(mSpinFeatureLimit, mExtentLimitFrame);

        retranslateUi(QgsSensorThingsSourceWidgetBase);

        QMetaObject::connectSlotsByName(QgsSensorThingsSourceWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSensorThingsSourceWidgetBase)
    {
        QgsSensorThingsSourceWidgetBase->setWindowTitle(QCoreApplication::translate("QgsSensorThingsSourceWidgetBase", "QgsSensorThingsSourceWidgetBase", nullptr));
        label_2->setText(QCoreApplication::translate("QgsSensorThingsSourceWidgetBase", "Geometry type", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsSensorThingsSourceWidgetBase", "Expansions", nullptr));
#if QT_CONFIG(tooltip)
        mRetrieveTypesButton->setToolTip(QCoreApplication::translate("QgsSensorThingsSourceWidgetBase", "Check available types", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QgsSensorThingsSourceWidgetBase", "Page size", nullptr));
        label_5->setText(QCoreApplication::translate("QgsSensorThingsSourceWidgetBase", "Extent limit", nullptr));
        label_6->setText(QCoreApplication::translate("QgsSensorThingsSourceWidgetBase", "Feature limit", nullptr));
        label->setText(QCoreApplication::translate("QgsSensorThingsSourceWidgetBase", "Entity type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSensorThingsSourceWidgetBase: public Ui_QgsSensorThingsSourceWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSENSORTHINGSSOURCEWIDGETBASE_H
