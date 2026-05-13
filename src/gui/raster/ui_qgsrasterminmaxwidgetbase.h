/********************************************************************************
** Form generated from reading UI file 'qgsrasterminmaxwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERMINMAXWIDGETBASE_H
#define UI_QGSRASTERMINMAXWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterMinMaxWidgetBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QgsCollapsibleGroupBox *mLoadMinMaxValuesGroupBox;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QRadioButton *mCumulativeCutRadioButton;
    QLabel *mAccuracyLabel;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *mUserDefinedRadioButton;
    QRadioButton *mMinMaxRadioButton;
    QgsDoubleSpinBox *mCumulativeCutUpperDoubleSpinBox;
    QgsDoubleSpinBox *mCumulativeCutLowerDoubleSpinBox;
    QLabel *mStatisticsExtentLabel;
    QgsDoubleSpinBox *mStdDevSpinBox;
    QRadioButton *mStdDevRadioButton;
    QComboBox *mStatisticsExtentCombo;
    QComboBox *cboAccuracy;
    QButtonGroup *mMinMaxMethodRadioButtonGroup;

    void setupUi(QWidget *QgsRasterMinMaxWidgetBase)
    {
        if (QgsRasterMinMaxWidgetBase->objectName().isEmpty())
            QgsRasterMinMaxWidgetBase->setObjectName(QString::fromUtf8("QgsRasterMinMaxWidgetBase"));
        QgsRasterMinMaxWidgetBase->resize(324, 261);
        QgsRasterMinMaxWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(QgsRasterMinMaxWidgetBase);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mLoadMinMaxValuesGroupBox = new QgsCollapsibleGroupBox(QgsRasterMinMaxWidgetBase);
        mLoadMinMaxValuesGroupBox->setObjectName(QString::fromUtf8("mLoadMinMaxValuesGroupBox"));
        mLoadMinMaxValuesGroupBox->setFlat(true);
        mLoadMinMaxValuesGroupBox->setCheckable(false);
        mLoadMinMaxValuesGroupBox->setProperty("collapsed", QVariant(true));
        mLoadMinMaxValuesGroupBox->setProperty("saveCollapsedState", QVariant(false));
        verticalLayout_4 = new QVBoxLayout(mLoadMinMaxValuesGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mCumulativeCutRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        mMinMaxMethodRadioButtonGroup = new QButtonGroup(QgsRasterMinMaxWidgetBase);
        mMinMaxMethodRadioButtonGroup->setObjectName(QString::fromUtf8("mMinMaxMethodRadioButtonGroup"));
        mMinMaxMethodRadioButtonGroup->addButton(mCumulativeCutRadioButton);
        mCumulativeCutRadioButton->setObjectName(QString::fromUtf8("mCumulativeCutRadioButton"));
        mCumulativeCutRadioButton->setChecked(false);

        gridLayout->addWidget(mCumulativeCutRadioButton, 1, 0, 1, 1);

        mAccuracyLabel = new QLabel(mLoadMinMaxValuesGroupBox);
        mAccuracyLabel->setObjectName(QString::fromUtf8("mAccuracyLabel"));

        gridLayout->addWidget(mAccuracyLabel, 5, 0, 1, 1);

        label = new QLabel(mLoadMinMaxValuesGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 2, 1, 1);

        label_2 = new QLabel(mLoadMinMaxValuesGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 4, 1, 1);

        mUserDefinedRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        mMinMaxMethodRadioButtonGroup->addButton(mUserDefinedRadioButton);
        mUserDefinedRadioButton->setObjectName(QString::fromUtf8("mUserDefinedRadioButton"));
        mUserDefinedRadioButton->setChecked(true);

        gridLayout->addWidget(mUserDefinedRadioButton, 0, 0, 1, 1);

        mMinMaxRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        mMinMaxMethodRadioButtonGroup->addButton(mMinMaxRadioButton);
        mMinMaxRadioButton->setObjectName(QString::fromUtf8("mMinMaxRadioButton"));

        gridLayout->addWidget(mMinMaxRadioButton, 2, 0, 1, 1);

        mCumulativeCutUpperDoubleSpinBox = new QgsDoubleSpinBox(mLoadMinMaxValuesGroupBox);
        mCumulativeCutUpperDoubleSpinBox->setObjectName(QString::fromUtf8("mCumulativeCutUpperDoubleSpinBox"));
        mCumulativeCutUpperDoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(mCumulativeCutUpperDoubleSpinBox, 1, 3, 1, 1);

        mCumulativeCutLowerDoubleSpinBox = new QgsDoubleSpinBox(mLoadMinMaxValuesGroupBox);
        mCumulativeCutLowerDoubleSpinBox->setObjectName(QString::fromUtf8("mCumulativeCutLowerDoubleSpinBox"));
        mCumulativeCutLowerDoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(mCumulativeCutLowerDoubleSpinBox, 1, 1, 1, 1);

        mStatisticsExtentLabel = new QLabel(mLoadMinMaxValuesGroupBox);
        mStatisticsExtentLabel->setObjectName(QString::fromUtf8("mStatisticsExtentLabel"));
        mStatisticsExtentLabel->setMargin(0);

        gridLayout->addWidget(mStatisticsExtentLabel, 4, 0, 1, 1);

        mStdDevSpinBox = new QgsDoubleSpinBox(mLoadMinMaxValuesGroupBox);
        mStdDevSpinBox->setObjectName(QString::fromUtf8("mStdDevSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mStdDevSpinBox->sizePolicy().hasHeightForWidth());
        mStdDevSpinBox->setSizePolicy(sizePolicy1);
        mStdDevSpinBox->setValue(1.000000000000000);

        gridLayout->addWidget(mStdDevSpinBox, 3, 3, 1, 1);

        mStdDevRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        mMinMaxMethodRadioButtonGroup->addButton(mStdDevRadioButton);
        mStdDevRadioButton->setObjectName(QString::fromUtf8("mStdDevRadioButton"));

        gridLayout->addWidget(mStdDevRadioButton, 3, 0, 1, 3);

        mStatisticsExtentCombo = new QComboBox(mLoadMinMaxValuesGroupBox);
        mStatisticsExtentCombo->setObjectName(QString::fromUtf8("mStatisticsExtentCombo"));

        gridLayout->addWidget(mStatisticsExtentCombo, 4, 1, 1, 3);

        cboAccuracy = new QComboBox(mLoadMinMaxValuesGroupBox);
        cboAccuracy->setObjectName(QString::fromUtf8("cboAccuracy"));

        gridLayout->addWidget(cboAccuracy, 5, 1, 1, 3);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_3->addWidget(mLoadMinMaxValuesGroupBox);


        retranslateUi(QgsRasterMinMaxWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterMinMaxWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterMinMaxWidgetBase)
    {
        mLoadMinMaxValuesGroupBox->setTitle(QCoreApplication::translate("QgsRasterMinMaxWidgetBase", "Min / Max Value Settings", nullptr));
        mCumulativeCutRadioButton->setText(QCoreApplication::translate("QgsRasterMinMaxWidgetBase", "Cumula&tive\n"
"count cut", nullptr));
        mAccuracyLabel->setText(QCoreApplication::translate("QgsRasterMinMaxWidgetBase", "Accuracy", nullptr));
        label->setText(QCoreApplication::translate("QgsRasterMinMaxWidgetBase", "-", nullptr));
        label_2->setText(QCoreApplication::translate("QgsRasterMinMaxWidgetBase", "%", nullptr));
        mUserDefinedRadioButton->setText(QCoreApplication::translate("QgsRasterMinMaxWidgetBase", "Use&r defined", nullptr));
        mMinMaxRadioButton->setText(QCoreApplication::translate("QgsRasterMinMaxWidgetBase", "&Min / max", nullptr));
        mStatisticsExtentLabel->setText(QCoreApplication::translate("QgsRasterMinMaxWidgetBase", "Statistics extent", nullptr));
        mStdDevRadioButton->setText(QCoreApplication::translate("QgsRasterMinMaxWidgetBase", "Mean +/-\n"
"standard de&viation \303\227", nullptr));
        (void)QgsRasterMinMaxWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRasterMinMaxWidgetBase: public Ui_QgsRasterMinMaxWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERMINMAXWIDGETBASE_H
