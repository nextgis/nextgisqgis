/********************************************************************************
** Form generated from reading UI file 'qgslabellineanchorwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELLINEANCHORWIDGETBASE_H
#define UI_QGSLABELLINEANCHORWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelLineAnchorWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QComboBox *mClippingComboBox;
    QLabel *clippinglabel;
    QLabel *label;
    QgsPropertyOverrideButton *mLineClippingDDBtn;
    QgsPropertyOverrideButton *mLinePlacementDDBtn;
    QgsDoubleSpinBox *mCustomPlacementSpinBox;
    QComboBox *mPercentPlacementComboBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QComboBox *mAnchorTextPointComboBox;
    QgsPropertyOverrideButton *mAnchorTextPointDDBtn;
    QLabel *mAnchorTextPointHintLabel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QComboBox *mAnchorTypeComboBox;
    QgsPropertyOverrideButton *mAnchorTypeDDBtn;
    QLabel *mAnchorTypeHintLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsLabelLineAnchorWidgetBase)
    {
        if (QgsLabelLineAnchorWidgetBase->objectName().isEmpty())
            QgsLabelLineAnchorWidgetBase->setObjectName(QString::fromUtf8("QgsLabelLineAnchorWidgetBase"));
        QgsLabelLineAnchorWidgetBase->resize(280, 380);
        QgsLabelLineAnchorWidgetBase->setWindowTitle(QString::fromUtf8("Line Anchor Settings"));
        gridLayout = new QGridLayout(QgsLabelLineAnchorWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsLabelLineAnchorWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mClippingComboBox = new QComboBox(groupBox);
        mClippingComboBox->setObjectName(QString::fromUtf8("mClippingComboBox"));

        gridLayout_4->addWidget(mClippingComboBox, 3, 1, 1, 1);

        clippinglabel = new QLabel(groupBox);
        clippinglabel->setObjectName(QString::fromUtf8("clippinglabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clippinglabel->sizePolicy().hasHeightForWidth());
        clippinglabel->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(clippinglabel, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setWordWrap(true);

        gridLayout_4->addWidget(label, 0, 0, 1, 3);

        mLineClippingDDBtn = new QgsPropertyOverrideButton(groupBox);
        mLineClippingDDBtn->setObjectName(QString::fromUtf8("mLineClippingDDBtn"));
        sizePolicy.setHeightForWidth(mLineClippingDDBtn->sizePolicy().hasHeightForWidth());
        mLineClippingDDBtn->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(mLineClippingDDBtn, 3, 2, 1, 1);

        mLinePlacementDDBtn = new QgsPropertyOverrideButton(groupBox);
        mLinePlacementDDBtn->setObjectName(QString::fromUtf8("mLinePlacementDDBtn"));
        sizePolicy.setHeightForWidth(mLinePlacementDDBtn->sizePolicy().hasHeightForWidth());
        mLinePlacementDDBtn->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(mLinePlacementDDBtn, 1, 2, 1, 1);

        mCustomPlacementSpinBox = new QgsDoubleSpinBox(groupBox);
        mCustomPlacementSpinBox->setObjectName(QString::fromUtf8("mCustomPlacementSpinBox"));
        sizePolicy1.setHeightForWidth(mCustomPlacementSpinBox->sizePolicy().hasHeightForWidth());
        mCustomPlacementSpinBox->setSizePolicy(sizePolicy1);
        mCustomPlacementSpinBox->setMaximum(100.000000000000000);

        gridLayout_4->addWidget(mCustomPlacementSpinBox, 2, 0, 1, 3);

        mPercentPlacementComboBox = new QComboBox(groupBox);
        mPercentPlacementComboBox->setObjectName(QString::fromUtf8("mPercentPlacementComboBox"));

        gridLayout_4->addWidget(mPercentPlacementComboBox, 1, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(QgsLabelLineAnchorWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mAnchorTextPointComboBox = new QComboBox(groupBox_3);
        mAnchorTextPointComboBox->setObjectName(QString::fromUtf8("mAnchorTextPointComboBox"));

        gridLayout_5->addWidget(mAnchorTextPointComboBox, 0, 0, 1, 1);

        mAnchorTextPointDDBtn = new QgsPropertyOverrideButton(groupBox_3);
        mAnchorTextPointDDBtn->setObjectName(QString::fromUtf8("mAnchorTextPointDDBtn"));

        gridLayout_5->addWidget(mAnchorTextPointDDBtn, 0, 1, 1, 1);

        mAnchorTextPointHintLabel = new QLabel(groupBox_3);
        mAnchorTextPointHintLabel->setObjectName(QString::fromUtf8("mAnchorTextPointHintLabel"));
        mAnchorTextPointHintLabel->setWordWrap(true);

        gridLayout_5->addWidget(mAnchorTextPointHintLabel, 1, 0, 1, 2);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsLabelLineAnchorWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mAnchorTypeComboBox = new QComboBox(groupBox_2);
        mAnchorTypeComboBox->setObjectName(QString::fromUtf8("mAnchorTypeComboBox"));

        gridLayout_3->addWidget(mAnchorTypeComboBox, 0, 0, 1, 1);

        mAnchorTypeDDBtn = new QgsPropertyOverrideButton(groupBox_2);
        mAnchorTypeDDBtn->setObjectName(QString::fromUtf8("mAnchorTypeDDBtn"));

        gridLayout_3->addWidget(mAnchorTypeDDBtn, 0, 1, 1, 1);

        mAnchorTypeHintLabel = new QLabel(groupBox_2);
        mAnchorTypeHintLabel->setObjectName(QString::fromUtf8("mAnchorTypeHintLabel"));
        mAnchorTypeHintLabel->setWordWrap(true);

        gridLayout_3->addWidget(mAnchorTypeHintLabel, 1, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        QWidget::setTabOrder(mPercentPlacementComboBox, mLinePlacementDDBtn);
        QWidget::setTabOrder(mLinePlacementDDBtn, mCustomPlacementSpinBox);
        QWidget::setTabOrder(mCustomPlacementSpinBox, mClippingComboBox);
        QWidget::setTabOrder(mClippingComboBox, mLineClippingDDBtn);
        QWidget::setTabOrder(mLineClippingDDBtn, mAnchorTextPointComboBox);
        QWidget::setTabOrder(mAnchorTextPointComboBox, mAnchorTextPointDDBtn);
        QWidget::setTabOrder(mAnchorTextPointDDBtn, mAnchorTypeComboBox);
        QWidget::setTabOrder(mAnchorTypeComboBox, mAnchorTypeDDBtn);

        retranslateUi(QgsLabelLineAnchorWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelLineAnchorWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelLineAnchorWidgetBase)
    {
        groupBox->setTitle(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "Label Anchoring", nullptr));
        clippinglabel->setText(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "Clipping", nullptr));
        label->setText(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "<b>Controls the position along the line which labels will be placed close to.</b>", nullptr));
        mLineClippingDDBtn->setText(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "\342\200\246", nullptr));
        mLinePlacementDDBtn->setText(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "\342\200\246", nullptr));
        mCustomPlacementSpinBox->setSuffix(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", " %", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "Text Anchor", nullptr));
        mAnchorTextPointDDBtn->setText(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "\342\200\246", nullptr));
        mAnchorTextPointHintLabel->setText(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "Hint", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "Placement Behavior", nullptr));
        mAnchorTypeDDBtn->setText(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "\342\200\246", nullptr));
        mAnchorTypeHintLabel->setText(QCoreApplication::translate("QgsLabelLineAnchorWidgetBase", "Hint", nullptr));
        (void)QgsLabelLineAnchorWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLabelLineAnchorWidgetBase: public Ui_QgsLabelLineAnchorWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELLINEANCHORWIDGETBASE_H
