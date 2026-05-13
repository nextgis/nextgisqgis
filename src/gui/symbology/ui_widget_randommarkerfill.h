/********************************************************************************
** Form generated from reading UI file 'widget_randommarkerfill.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_RANDOMMARKERFILL_H
#define UI_WIDGET_RANDOMMARKERFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetRandomMarkerFill
{
public:
    QGridLayout *gridLayout;
    QLabel *mCountMethodLabel;
    QComboBox *mCountMethodComboBox;
    QgsPropertyOverrideButton *mSeedDdbtn;
    QLabel *label;
    QLabel *mPointCountLabel;
    QLabel *mDensityAreaLabel;
    QSpacerItem *verticalSpacer;
    QgsSpinBox *mPointCountSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QgsDoubleSpinBox *mDensityAreaSpinBox;
    QgsUnitSelectionWidget *mDensityAreaUnitWidget;
    QgsPropertyOverrideButton *mDensityAreaDdbtn;
    QgsSpinBox *mSeedSpinBox;
    QgsPropertyOverrideButton *mPointCountDdbtn;
    QCheckBox *mClipPointsCheckBox;
    QgsPropertyOverrideButton *mClipPointsDdbtn;

    void setupUi(QWidget *WidgetRandomMarkerFill)
    {
        if (WidgetRandomMarkerFill->objectName().isEmpty())
            WidgetRandomMarkerFill->setObjectName(QString::fromUtf8("WidgetRandomMarkerFill"));
        WidgetRandomMarkerFill->resize(401, 225);
        WidgetRandomMarkerFill->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(WidgetRandomMarkerFill);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mCountMethodLabel = new QLabel(WidgetRandomMarkerFill);
        mCountMethodLabel->setObjectName(QString::fromUtf8("mCountMethodLabel"));

        gridLayout->addWidget(mCountMethodLabel, 0, 0, 1, 1);

        mCountMethodComboBox = new QComboBox(WidgetRandomMarkerFill);
        mCountMethodComboBox->setObjectName(QString::fromUtf8("mCountMethodComboBox"));

        gridLayout->addWidget(mCountMethodComboBox, 0, 1, 1, 2);

        mSeedDdbtn = new QgsPropertyOverrideButton(WidgetRandomMarkerFill);
        mSeedDdbtn->setObjectName(QString::fromUtf8("mSeedDdbtn"));

        gridLayout->addWidget(mSeedDdbtn, 3, 2, 1, 1);

        label = new QLabel(WidgetRandomMarkerFill);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        mPointCountLabel = new QLabel(WidgetRandomMarkerFill);
        mPointCountLabel->setObjectName(QString::fromUtf8("mPointCountLabel"));

        gridLayout->addWidget(mPointCountLabel, 1, 0, 1, 1);

        mDensityAreaLabel = new QLabel(WidgetRandomMarkerFill);
        mDensityAreaLabel->setObjectName(QString::fromUtf8("mDensityAreaLabel"));

        gridLayout->addWidget(mDensityAreaLabel, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 3);

        mPointCountSpinBox = new QgsSpinBox(WidgetRandomMarkerFill);
        mPointCountSpinBox->setObjectName(QString::fromUtf8("mPointCountSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPointCountSpinBox->sizePolicy().hasHeightForWidth());
        mPointCountSpinBox->setSizePolicy(sizePolicy);
        mPointCountSpinBox->setMaximum(999999999);

        gridLayout->addWidget(mPointCountSpinBox, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mDensityAreaSpinBox = new QgsDoubleSpinBox(WidgetRandomMarkerFill);
        mDensityAreaSpinBox->setObjectName(QString::fromUtf8("mDensityAreaSpinBox"));
        sizePolicy.setHeightForWidth(mDensityAreaSpinBox->sizePolicy().hasHeightForWidth());
        mDensityAreaSpinBox->setSizePolicy(sizePolicy);
        mDensityAreaSpinBox->setDecimals(6);
        mDensityAreaSpinBox->setMinimum(0.000000000000000);
        mDensityAreaSpinBox->setMaximum(99999999.989999994635582);
        mDensityAreaSpinBox->setSingleStep(0.200000000000000);

        horizontalLayout_3->addWidget(mDensityAreaSpinBox);

        mDensityAreaUnitWidget = new QgsUnitSelectionWidget(WidgetRandomMarkerFill);
        mDensityAreaUnitWidget->setObjectName(QString::fromUtf8("mDensityAreaUnitWidget"));
        mDensityAreaUnitWidget->setMinimumSize(QSize(0, 0));
        mDensityAreaUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mDensityAreaUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        mDensityAreaDdbtn = new QgsPropertyOverrideButton(WidgetRandomMarkerFill);
        mDensityAreaDdbtn->setObjectName(QString::fromUtf8("mDensityAreaDdbtn"));

        gridLayout->addWidget(mDensityAreaDdbtn, 2, 2, 1, 1);

        mSeedSpinBox = new QgsSpinBox(WidgetRandomMarkerFill);
        mSeedSpinBox->setObjectName(QString::fromUtf8("mSeedSpinBox"));
        sizePolicy.setHeightForWidth(mSeedSpinBox->sizePolicy().hasHeightForWidth());
        mSeedSpinBox->setSizePolicy(sizePolicy);
        mSeedSpinBox->setMaximum(999999999);

        gridLayout->addWidget(mSeedSpinBox, 3, 1, 1, 1);

        mPointCountDdbtn = new QgsPropertyOverrideButton(WidgetRandomMarkerFill);
        mPointCountDdbtn->setObjectName(QString::fromUtf8("mPointCountDdbtn"));

        gridLayout->addWidget(mPointCountDdbtn, 1, 2, 1, 1);

        mClipPointsCheckBox = new QCheckBox(WidgetRandomMarkerFill);
        mClipPointsCheckBox->setObjectName(QString::fromUtf8("mClipPointsCheckBox"));

        gridLayout->addWidget(mClipPointsCheckBox, 4, 0, 1, 2);

        mClipPointsDdbtn = new QgsPropertyOverrideButton(WidgetRandomMarkerFill);
        mClipPointsDdbtn->setObjectName(QString::fromUtf8("mClipPointsDdbtn"));

        gridLayout->addWidget(mClipPointsDdbtn, 4, 2, 1, 1);

        QWidget::setTabOrder(mCountMethodComboBox, mPointCountSpinBox);
        QWidget::setTabOrder(mPointCountSpinBox, mPointCountDdbtn);
        QWidget::setTabOrder(mPointCountDdbtn, mDensityAreaSpinBox);
        QWidget::setTabOrder(mDensityAreaSpinBox, mDensityAreaUnitWidget);
        QWidget::setTabOrder(mDensityAreaUnitWidget, mDensityAreaDdbtn);
        QWidget::setTabOrder(mDensityAreaDdbtn, mSeedSpinBox);
        QWidget::setTabOrder(mSeedSpinBox, mSeedDdbtn);
        QWidget::setTabOrder(mSeedDdbtn, mClipPointsCheckBox);
        QWidget::setTabOrder(mClipPointsCheckBox, mClipPointsDdbtn);

        retranslateUi(WidgetRandomMarkerFill);

        QMetaObject::connectSlotsByName(WidgetRandomMarkerFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetRandomMarkerFill)
    {
        mCountMethodLabel->setText(QCoreApplication::translate("WidgetRandomMarkerFill", "Count method", nullptr));
        mSeedDdbtn->setText(QCoreApplication::translate("WidgetRandomMarkerFill", "\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("WidgetRandomMarkerFill", "Seed", nullptr));
        mPointCountLabel->setText(QCoreApplication::translate("WidgetRandomMarkerFill", "Point count", nullptr));
        mDensityAreaLabel->setText(QCoreApplication::translate("WidgetRandomMarkerFill", "Density area", nullptr));
        mDensityAreaDdbtn->setText(QCoreApplication::translate("WidgetRandomMarkerFill", "\342\200\246", nullptr));
        mSeedSpinBox->setSpecialValueText(QCoreApplication::translate("WidgetRandomMarkerFill", "randomised", nullptr));
        mPointCountDdbtn->setText(QCoreApplication::translate("WidgetRandomMarkerFill", "\342\200\246", nullptr));
        mClipPointsCheckBox->setText(QCoreApplication::translate("WidgetRandomMarkerFill", "Clip markers to polygon boundary", nullptr));
        mClipPointsDdbtn->setText(QCoreApplication::translate("WidgetRandomMarkerFill", "\342\200\246", nullptr));
        (void)WidgetRandomMarkerFill;
    } // retranslateUi

};

namespace Ui {
    class WidgetRandomMarkerFill: public Ui_WidgetRandomMarkerFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_RANDOMMARKERFILL_H
