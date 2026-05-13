/********************************************************************************
** Form generated from reading UI file 'qgslayerrefreshwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYERREFRESHWIDGETBASE_H
#define UI_QGSLAYERREFRESHWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayerRefreshWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mEnabledGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *mHelpLabel;
    QComboBox *mModeComboBox;
    QgsDoubleSpinBox *mRefreshLayerIntervalSpinBox;
    QLabel *label_3;

    void setupUi(QWidget *QgsLayerRefreshWidgetBase)
    {
        if (QgsLayerRefreshWidgetBase->objectName().isEmpty())
            QgsLayerRefreshWidgetBase->setObjectName(QString::fromUtf8("QgsLayerRefreshWidgetBase"));
        QgsLayerRefreshWidgetBase->resize(377, 170);
        verticalLayout = new QVBoxLayout(QgsLayerRefreshWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mEnabledGroupBox = new QGroupBox(QgsLayerRefreshWidgetBase);
        mEnabledGroupBox->setObjectName(QString::fromUtf8("mEnabledGroupBox"));
        mEnabledGroupBox->setFocusPolicy(Qt::StrongFocus);
        mEnabledGroupBox->setCheckable(true);
        mEnabledGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout = new QGridLayout(mEnabledGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(mEnabledGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mHelpLabel = new QLabel(mEnabledGroupBox);
        mHelpLabel->setObjectName(QString::fromUtf8("mHelpLabel"));
        mHelpLabel->setWordWrap(true);

        gridLayout->addWidget(mHelpLabel, 1, 0, 1, 2);

        mModeComboBox = new QComboBox(mEnabledGroupBox);
        mModeComboBox->setObjectName(QString::fromUtf8("mModeComboBox"));

        gridLayout->addWidget(mModeComboBox, 0, 1, 1, 1);

        mRefreshLayerIntervalSpinBox = new QgsDoubleSpinBox(mEnabledGroupBox);
        mRefreshLayerIntervalSpinBox->setObjectName(QString::fromUtf8("mRefreshLayerIntervalSpinBox"));
        mRefreshLayerIntervalSpinBox->setDecimals(2);
        mRefreshLayerIntervalSpinBox->setMinimum(0.000000000000000);
        mRefreshLayerIntervalSpinBox->setMaximum(100000000000000000000.000000000000000);
        mRefreshLayerIntervalSpinBox->setSingleStep(5.000000000000000);
        mRefreshLayerIntervalSpinBox->setValue(10.000000000000000);

        gridLayout->addWidget(mRefreshLayerIntervalSpinBox, 2, 1, 1, 1);

        label_3 = new QLabel(mEnabledGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 3);

        verticalLayout->addWidget(mEnabledGroupBox);


        retranslateUi(QgsLayerRefreshWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayerRefreshWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayerRefreshWidgetBase)
    {
        QgsLayerRefreshWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayerRefreshWidgetBase", "Refresh Layer at Interval", nullptr));
        mEnabledGroupBox->setTitle(QCoreApplication::translate("QgsLayerRefreshWidgetBase", "Refresh layer at interval", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayerRefreshWidgetBase", "Configuration", nullptr));
        mHelpLabel->setText(QCoreApplication::translate("QgsLayerRefreshWidgetBase", "<html><head/><body><p><br/></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        mRefreshLayerIntervalSpinBox->setToolTip(QCoreApplication::translate("QgsLayerRefreshWidgetBase", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QgsLayerRefreshWidgetBase", "Interval (seconds)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayerRefreshWidgetBase: public Ui_QgsLayerRefreshWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYERREFRESHWIDGETBASE_H
