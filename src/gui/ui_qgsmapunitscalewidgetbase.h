/********************************************************************************
** Form generated from reading UI file 'qgsmapunitscalewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPUNITSCALEWIDGETBASE_H
#define UI_QGSMAPUNITSCALEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"
#include "qgsscalewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapUnitScaleWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QgsScaleWidget *mComboBoxMinScale;
    QLabel *label;
    QCheckBox *mCheckBoxMinScale;
    QgsScaleWidget *mComboBoxMaxScale;
    QCheckBox *mCheckBoxMaxScale;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QCheckBox *mCheckBoxMinSize;
    QCheckBox *mCheckBoxMaxSize;
    QgsDoubleSpinBox *mSpinBoxMinSize;
    QgsDoubleSpinBox *mSpinBoxMaxSize;
    QLabel *label_2;

    void setupUi(QgsPanelWidget *QgsMapUnitScaleWidgetBase)
    {
        if (QgsMapUnitScaleWidgetBase->objectName().isEmpty())
            QgsMapUnitScaleWidgetBase->setObjectName(QString::fromUtf8("QgsMapUnitScaleWidgetBase"));
        QgsMapUnitScaleWidgetBase->resize(285, 233);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        QgsMapUnitScaleWidgetBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsMapUnitScaleWidgetBase);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(QgsMapUnitScaleWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mComboBoxMinScale = new QgsScaleWidget(groupBox);
        mComboBoxMinScale->setObjectName(QString::fromUtf8("mComboBoxMinScale"));
        mComboBoxMinScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mComboBoxMinScale, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        mCheckBoxMinScale = new QCheckBox(groupBox);
        mCheckBoxMinScale->setObjectName(QString::fromUtf8("mCheckBoxMinScale"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCheckBoxMinScale->sizePolicy().hasHeightForWidth());
        mCheckBoxMinScale->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mCheckBoxMinScale, 1, 0, 1, 1);

        mComboBoxMaxScale = new QgsScaleWidget(groupBox);
        mComboBoxMaxScale->setObjectName(QString::fromUtf8("mComboBoxMaxScale"));
        mComboBoxMaxScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mComboBoxMaxScale, 3, 1, 1, 1);

        mCheckBoxMaxScale = new QCheckBox(groupBox);
        mCheckBoxMaxScale->setObjectName(QString::fromUtf8("mCheckBoxMaxScale"));
        sizePolicy.setHeightForWidth(mCheckBoxMaxScale->sizePolicy().hasHeightForWidth());
        mCheckBoxMaxScale->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mCheckBoxMaxScale, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsMapUnitScaleWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mCheckBoxMinSize = new QCheckBox(groupBox_2);
        mCheckBoxMinSize->setObjectName(QString::fromUtf8("mCheckBoxMinSize"));
        sizePolicy.setHeightForWidth(mCheckBoxMinSize->sizePolicy().hasHeightForWidth());
        mCheckBoxMinSize->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mCheckBoxMinSize, 1, 0, 1, 1);

        mCheckBoxMaxSize = new QCheckBox(groupBox_2);
        mCheckBoxMaxSize->setObjectName(QString::fromUtf8("mCheckBoxMaxSize"));
        sizePolicy.setHeightForWidth(mCheckBoxMaxSize->sizePolicy().hasHeightForWidth());
        mCheckBoxMaxSize->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mCheckBoxMaxSize, 2, 0, 1, 1);

        mSpinBoxMinSize = new QgsDoubleSpinBox(groupBox_2);
        mSpinBoxMinSize->setObjectName(QString::fromUtf8("mSpinBoxMinSize"));
        mSpinBoxMinSize->setMaximum(9999999.000000000000000);

        gridLayout_3->addWidget(mSpinBoxMinSize, 1, 1, 1, 1);

        mSpinBoxMaxSize = new QgsDoubleSpinBox(groupBox_2);
        mSpinBoxMaxSize->setObjectName(QString::fromUtf8("mSpinBoxMaxSize"));
        mSpinBoxMaxSize->setMaximum(999999.000000000000000);

        gridLayout_3->addWidget(mSpinBoxMaxSize, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 2);

        QWidget::setTabOrder(mCheckBoxMinScale, mComboBoxMinScale);
        QWidget::setTabOrder(mComboBoxMinScale, mCheckBoxMaxScale);
        QWidget::setTabOrder(mCheckBoxMaxScale, mComboBoxMaxScale);
        QWidget::setTabOrder(mComboBoxMaxScale, mCheckBoxMinSize);
        QWidget::setTabOrder(mCheckBoxMinSize, mSpinBoxMinSize);
        QWidget::setTabOrder(mSpinBoxMinSize, mCheckBoxMaxSize);
        QWidget::setTabOrder(mCheckBoxMaxSize, mSpinBoxMaxSize);

        retranslateUi(QgsMapUnitScaleWidgetBase);

        QMetaObject::connectSlotsByName(QgsMapUnitScaleWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsMapUnitScaleWidgetBase)
    {
        QgsMapUnitScaleWidgetBase->setWindowTitle(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", "Adjust Scaling Range", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", "Scale Range", nullptr));
        label->setText(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", "Scale only within the following map unit scale range", nullptr));
        mCheckBoxMinScale->setText(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", "Minimum scale", nullptr));
        mCheckBoxMaxScale->setText(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", "Maximum scale", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", "Size Range", nullptr));
        mCheckBoxMinSize->setText(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", "Minimum size", nullptr));
        mCheckBoxMaxSize->setText(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", "Maximum size", nullptr));
        mSpinBoxMinSize->setSuffix(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", " mm", nullptr));
        mSpinBoxMaxSize->setSuffix(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", " mm", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMapUnitScaleWidgetBase", "Scale only within the following size range", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMapUnitScaleWidgetBase: public Ui_QgsMapUnitScaleWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPUNITSCALEWIDGETBASE_H
