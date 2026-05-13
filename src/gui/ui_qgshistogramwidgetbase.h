/********************************************************************************
** Form generated from reading UI file 'qgshistogramwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHISTOGRAMWIDGETBASE_H
#define UI_QGSHISTOGRAMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsspinbox.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsHistogramWidgetBase
{
public:
    QGridLayout *gridLayout;
    QPushButton *mLoadValuesButton;
    QSpacerItem *horizontalSpacer;
    QwtPlot *mpPlot;
    QLabel *label_12;
    QgsSpinBox *mBinsSpinBox;
    QCheckBox *mMeanCheckBox;
    QCheckBox *mStdevCheckBox;

    void setupUi(QWidget *QgsHistogramWidgetBase)
    {
        if (QgsHistogramWidgetBase->objectName().isEmpty())
            QgsHistogramWidgetBase->setObjectName(QString::fromUtf8("QgsHistogramWidgetBase"));
        QgsHistogramWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsHistogramWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLoadValuesButton = new QPushButton(QgsHistogramWidgetBase);
        mLoadValuesButton->setObjectName(QString::fromUtf8("mLoadValuesButton"));

        gridLayout->addWidget(mLoadValuesButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(182, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 2);

        mpPlot = new QwtPlot(QgsHistogramWidgetBase);
        mpPlot->setObjectName(QString::fromUtf8("mpPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpPlot->sizePolicy().hasHeightForWidth());
        mpPlot->setSizePolicy(sizePolicy);
        mpPlot->setMinimumSize(QSize(0, 120));

        gridLayout->addWidget(mpPlot, 1, 0, 1, 3);

        label_12 = new QLabel(QgsHistogramWidgetBase);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 2, 0, 1, 2);

        mBinsSpinBox = new QgsSpinBox(QgsHistogramWidgetBase);
        mBinsSpinBox->setObjectName(QString::fromUtf8("mBinsSpinBox"));
        mBinsSpinBox->setMinimum(1);
        mBinsSpinBox->setMaximum(999);
        mBinsSpinBox->setValue(50);

        gridLayout->addWidget(mBinsSpinBox, 2, 2, 1, 1);

        mMeanCheckBox = new QCheckBox(QgsHistogramWidgetBase);
        mMeanCheckBox->setObjectName(QString::fromUtf8("mMeanCheckBox"));

        gridLayout->addWidget(mMeanCheckBox, 3, 2, 1, 1);

        mStdevCheckBox = new QCheckBox(QgsHistogramWidgetBase);
        mStdevCheckBox->setObjectName(QString::fromUtf8("mStdevCheckBox"));

        gridLayout->addWidget(mStdevCheckBox, 4, 2, 1, 1);


        retranslateUi(QgsHistogramWidgetBase);

        QMetaObject::connectSlotsByName(QgsHistogramWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsHistogramWidgetBase)
    {
        mLoadValuesButton->setText(QCoreApplication::translate("QgsHistogramWidgetBase", "Load Values", nullptr));
        label_12->setText(QCoreApplication::translate("QgsHistogramWidgetBase", "Histogram bins", nullptr));
        mMeanCheckBox->setText(QCoreApplication::translate("QgsHistogramWidgetBase", "Show mean value", nullptr));
        mStdevCheckBox->setText(QCoreApplication::translate("QgsHistogramWidgetBase", "Show standard deviation", nullptr));
        (void)QgsHistogramWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsHistogramWidgetBase: public Ui_QgsHistogramWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHISTOGRAMWIDGETBASE_H
