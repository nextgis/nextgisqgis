/********************************************************************************
** Form generated from reading UI file 'qgssymbolanimationsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSYMBOLANIMATIONSETTINGSWIDGETBASE_H
#define UI_QGSSYMBOLANIMATIONSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSymbolAnimationSettingsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mIsAnimatedGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QgsDoubleSpinBox *mFrameRateSpin;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsSymbolAnimationSettingsWidgetBase)
    {
        if (QgsSymbolAnimationSettingsWidgetBase->objectName().isEmpty())
            QgsSymbolAnimationSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsSymbolAnimationSettingsWidgetBase"));
        QgsSymbolAnimationSettingsWidgetBase->resize(343, 300);
        gridLayout = new QGridLayout(QgsSymbolAnimationSettingsWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mIsAnimatedGroup = new QGroupBox(QgsSymbolAnimationSettingsWidgetBase);
        mIsAnimatedGroup->setObjectName(QString::fromUtf8("mIsAnimatedGroup"));
        mIsAnimatedGroup->setCheckable(true);
        gridLayout_2 = new QGridLayout(mIsAnimatedGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(mIsAnimatedGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mFrameRateSpin = new QgsDoubleSpinBox(mIsAnimatedGroup);
        mFrameRateSpin->setObjectName(QString::fromUtf8("mFrameRateSpin"));
        mFrameRateSpin->setMinimum(0.010000000000000);
        mFrameRateSpin->setMaximum(1000.000000000000000);
        mFrameRateSpin->setValue(10.000000000000000);

        gridLayout_2->addWidget(mFrameRateSpin, 1, 1, 1, 1);

        label = new QLabel(mIsAnimatedGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        gridLayout->addWidget(mIsAnimatedGroup, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(QgsSymbolAnimationSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsSymbolAnimationSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsSymbolAnimationSettingsWidgetBase)
    {
        QgsSymbolAnimationSettingsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsSymbolAnimationSettingsWidgetBase", "Animation Settings", nullptr));
        mIsAnimatedGroup->setTitle(QCoreApplication::translate("QgsSymbolAnimationSettingsWidgetBase", "Is Animated", nullptr));
        label_2->setText(QCoreApplication::translate("QgsSymbolAnimationSettingsWidgetBase", "Frame rate", nullptr));
        mFrameRateSpin->setSuffix(QCoreApplication::translate("QgsSymbolAnimationSettingsWidgetBase", " fps", nullptr));
        label->setText(QCoreApplication::translate("QgsSymbolAnimationSettingsWidgetBase", "The symbol will be animated using the specified frame rate. The <code>@symbol_frame</code> variable can be used in symbol property expressions in order to dynamically alter the symbol's appearance over time.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSymbolAnimationSettingsWidgetBase: public Ui_QgsSymbolAnimationSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLANIMATIONSETTINGSWIDGETBASE_H
