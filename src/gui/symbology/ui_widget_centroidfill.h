/********************************************************************************
** Form generated from reading UI file 'widget_centroidfill.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_CENTROIDFILL_H
#define UI_WIDGET_CENTROIDFILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetCentroidFill
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *mDrawInsideCheckBox;
    QCheckBox *mDrawAllPartsCheckBox;
    QCheckBox *mClipPointsCheckBox;
    QCheckBox *mClipOnCurrentPartOnlyCheckBox;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *WidgetCentroidFill)
    {
        if (WidgetCentroidFill->objectName().isEmpty())
            WidgetCentroidFill->setObjectName(QString::fromUtf8("WidgetCentroidFill"));
        WidgetCentroidFill->resize(382, 242);
        WidgetCentroidFill->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(WidgetCentroidFill);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mDrawInsideCheckBox = new QCheckBox(WidgetCentroidFill);
        mDrawInsideCheckBox->setObjectName(QString::fromUtf8("mDrawInsideCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDrawInsideCheckBox->sizePolicy().hasHeightForWidth());
        mDrawInsideCheckBox->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mDrawInsideCheckBox);

        mDrawAllPartsCheckBox = new QCheckBox(WidgetCentroidFill);
        mDrawAllPartsCheckBox->setObjectName(QString::fromUtf8("mDrawAllPartsCheckBox"));

        verticalLayout->addWidget(mDrawAllPartsCheckBox);

        mClipPointsCheckBox = new QCheckBox(WidgetCentroidFill);
        mClipPointsCheckBox->setObjectName(QString::fromUtf8("mClipPointsCheckBox"));

        verticalLayout->addWidget(mClipPointsCheckBox);

        mClipOnCurrentPartOnlyCheckBox = new QCheckBox(WidgetCentroidFill);
        mClipOnCurrentPartOnlyCheckBox->setObjectName(QString::fromUtf8("mClipOnCurrentPartOnlyCheckBox"));
        mClipOnCurrentPartOnlyCheckBox->setEnabled(false);

        verticalLayout->addWidget(mClipOnCurrentPartOnlyCheckBox);

        spacerItem = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);


        retranslateUi(WidgetCentroidFill);
        QObject::connect(mClipPointsCheckBox, SIGNAL(toggled(bool)), mClipOnCurrentPartOnlyCheckBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(WidgetCentroidFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetCentroidFill)
    {
        mDrawInsideCheckBox->setText(QCoreApplication::translate("WidgetCentroidFill", "Force placement of markers inside polygons", nullptr));
#if QT_CONFIG(tooltip)
        mDrawAllPartsCheckBox->setToolTip(QCoreApplication::translate("WidgetCentroidFill", "When unchecked, a single marker will be drawn on the biggest part of multi-part features", nullptr));
#endif // QT_CONFIG(tooltip)
        mDrawAllPartsCheckBox->setText(QCoreApplication::translate("WidgetCentroidFill", "Draw markers on every part of multi-part features", nullptr));
        mClipPointsCheckBox->setText(QCoreApplication::translate("WidgetCentroidFill", "Clip markers to polygon boundary", nullptr));
        mClipOnCurrentPartOnlyCheckBox->setText(QCoreApplication::translate("WidgetCentroidFill", "Clip markers to current part boundary only", nullptr));
        (void)WidgetCentroidFill;
    } // retranslateUi

};

namespace Ui {
    class WidgetCentroidFill: public Ui_WidgetCentroidFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_CENTROIDFILL_H
