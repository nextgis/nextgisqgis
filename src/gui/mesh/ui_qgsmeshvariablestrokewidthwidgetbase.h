/********************************************************************************
** Form generated from reading UI file 'qgsmeshvariablestrokewidthwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHVARIABLESTROKEWIDTHWIDGETBASE_H
#define UI_QGSMESHVARIABLESTROKEWIDTHWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshVariableStrokeWidthWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mIgnoreOutOfRangecheckBox;
    QCheckBox *mUseAbsoluteValueCheckBox;
    QFrame *line;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QPushButton *mDefaultMinMaxButton;
    QgsDoubleSpinBox *mValueMaximumSpinBox;
    QgsDoubleSpinBox *mValueMinimumSpinBox;
    QgsDoubleSpinBox *mWidthMinimumSpinBox;
    QgsDoubleSpinBox *mWidthMaximumSpinBox;

    void setupUi(QWidget *QgsMeshVariableStrokeWidthWidget)
    {
        if (QgsMeshVariableStrokeWidthWidget->objectName().isEmpty())
            QgsMeshVariableStrokeWidthWidget->setObjectName(QString::fromUtf8("QgsMeshVariableStrokeWidthWidget"));
        QgsMeshVariableStrokeWidthWidget->resize(395, 219);
        QgsMeshVariableStrokeWidthWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsMeshVariableStrokeWidthWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_3 = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        mIgnoreOutOfRangecheckBox = new QCheckBox(QgsMeshVariableStrokeWidthWidget);
        mIgnoreOutOfRangecheckBox->setObjectName(QString::fromUtf8("mIgnoreOutOfRangecheckBox"));

        horizontalLayout->addWidget(mIgnoreOutOfRangecheckBox);

        mUseAbsoluteValueCheckBox = new QCheckBox(QgsMeshVariableStrokeWidthWidget);
        mUseAbsoluteValueCheckBox->setObjectName(QString::fromUtf8("mUseAbsoluteValueCheckBox"));

        horizontalLayout->addWidget(mUseAbsoluteValueCheckBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 4);

        line = new QFrame(QgsMeshVariableStrokeWidthWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 10));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 6, 0, 1, 4);

        label_2 = new QLabel(QgsMeshVariableStrokeWidthWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 8, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        mDefaultMinMaxButton = new QPushButton(QgsMeshVariableStrokeWidthWidget);
        mDefaultMinMaxButton->setObjectName(QString::fromUtf8("mDefaultMinMaxButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDefaultMinMaxButton->sizePolicy().hasHeightForWidth());
        mDefaultMinMaxButton->setSizePolicy(sizePolicy);
        mDefaultMinMaxButton->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDefaultMinMaxButton->setIcon(icon);

        gridLayout->addWidget(mDefaultMinMaxButton, 1, 3, 2, 1);

        mValueMaximumSpinBox = new QgsDoubleSpinBox(QgsMeshVariableStrokeWidthWidget);
        mValueMaximumSpinBox->setObjectName(QString::fromUtf8("mValueMaximumSpinBox"));
        mValueMaximumSpinBox->setMinimum(-1000000000.000000000000000);
        mValueMaximumSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(mValueMaximumSpinBox, 2, 1, 1, 2);

        mValueMinimumSpinBox = new QgsDoubleSpinBox(QgsMeshVariableStrokeWidthWidget);
        mValueMinimumSpinBox->setObjectName(QString::fromUtf8("mValueMinimumSpinBox"));
        mValueMinimumSpinBox->setMinimum(-1000000000.000000000000000);
        mValueMinimumSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(mValueMinimumSpinBox, 1, 1, 1, 2);

        mWidthMinimumSpinBox = new QgsDoubleSpinBox(QgsMeshVariableStrokeWidthWidget);
        mWidthMinimumSpinBox->setObjectName(QString::fromUtf8("mWidthMinimumSpinBox"));
        mWidthMinimumSpinBox->setValue(1.000000000000000);

        gridLayout->addWidget(mWidthMinimumSpinBox, 7, 1, 1, 2);

        mWidthMaximumSpinBox = new QgsDoubleSpinBox(QgsMeshVariableStrokeWidthWidget);
        mWidthMaximumSpinBox->setObjectName(QString::fromUtf8("mWidthMaximumSpinBox"));
        mWidthMaximumSpinBox->setValue(5.000000000000000);

        gridLayout->addWidget(mWidthMaximumSpinBox, 8, 1, 1, 2);

        QWidget::setTabOrder(mValueMinimumSpinBox, mValueMaximumSpinBox);
        QWidget::setTabOrder(mValueMaximumSpinBox, mDefaultMinMaxButton);
        QWidget::setTabOrder(mDefaultMinMaxButton, mIgnoreOutOfRangecheckBox);
        QWidget::setTabOrder(mIgnoreOutOfRangecheckBox, mUseAbsoluteValueCheckBox);
        QWidget::setTabOrder(mUseAbsoluteValueCheckBox, mWidthMinimumSpinBox);
        QWidget::setTabOrder(mWidthMinimumSpinBox, mWidthMaximumSpinBox);

        retranslateUi(QgsMeshVariableStrokeWidthWidget);

        QMetaObject::connectSlotsByName(QgsMeshVariableStrokeWidthWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshVariableStrokeWidthWidget)
    {
        label_4->setText(QCoreApplication::translate("QgsMeshVariableStrokeWidthWidget", "Min Value", nullptr));
        label_5->setText(QCoreApplication::translate("QgsMeshVariableStrokeWidthWidget", "Max Value", nullptr));
        label_3->setText(QCoreApplication::translate("QgsMeshVariableStrokeWidthWidget", "Input Values", nullptr));
        label->setText(QCoreApplication::translate("QgsMeshVariableStrokeWidthWidget", "Min Width", nullptr));
        mIgnoreOutOfRangecheckBox->setText(QCoreApplication::translate("QgsMeshVariableStrokeWidthWidget", "Ignore Out of Range Values", nullptr));
        mUseAbsoluteValueCheckBox->setText(QCoreApplication::translate("QgsMeshVariableStrokeWidthWidget", "Use Absolute Value", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMeshVariableStrokeWidthWidget", "Max Width", nullptr));
#if QT_CONFIG(tooltip)
        mDefaultMinMaxButton->setToolTip(QCoreApplication::translate("QgsMeshVariableStrokeWidthWidget", "Load", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsMeshVariableStrokeWidthWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsMeshVariableStrokeWidthWidget: public Ui_QgsMeshVariableStrokeWidthWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHVARIABLESTROKEWIDTHWIDGETBASE_H
