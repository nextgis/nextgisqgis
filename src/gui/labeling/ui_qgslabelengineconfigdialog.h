/********************************************************************************
** Form generated from reading UI file 'qgslabelengineconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELENGINECONFIGDIALOG_H
#define UI_QGSLABELENGINECONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelEngineConfigWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *spinCandLine;
    QLabel *label_3;
    QLabel *label_4;
    QgsDoubleSpinBox *spinCandPolygon;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QCheckBox *chkShowPartialsLabels;
    QCheckBox *chkShowCandidates;
    QCheckBox *chkShowAllLabels;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QgsColorButton *mUnplacedColorButton;
    QComboBox *mPlacementVersionComboBox;
    QComboBox *mTextRenderFormatComboBox;
    QLabel *label_7;
    QLabel *label_5;
    QCheckBox *chkShowUnplaced;
    QCheckBox *chkShowMetrics;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QgsPanelWidget *QgsLabelEngineConfigWidgetBase)
    {
        if (QgsLabelEngineConfigWidgetBase->objectName().isEmpty())
            QgsLabelEngineConfigWidgetBase->setObjectName(QString::fromUtf8("QgsLabelEngineConfigWidgetBase"));
        QgsLabelEngineConfigWidgetBase->resize(437, 426);
        verticalLayout = new QVBoxLayout(QgsLabelEngineConfigWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(QgsLabelEngineConfigWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinCandLine = new QgsDoubleSpinBox(groupBox);
        spinCandLine->setObjectName(QString::fromUtf8("spinCandLine"));
        spinCandLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandLine->setDecimals(1);
        spinCandLine->setMaximum(1000.000000000000000);
        spinCandLine->setSingleStep(1.000000000000000);

        gridLayout->addWidget(spinCandLine, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        spinCandPolygon = new QgsDoubleSpinBox(groupBox);
        spinCandPolygon->setObjectName(QString::fromUtf8("spinCandPolygon"));
        spinCandPolygon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandPolygon->setDecimals(1);
        spinCandPolygon->setMaximum(1000.000000000000000);
        spinCandPolygon->setSingleStep(1.000000000000000);

        gridLayout->addWidget(spinCandPolygon, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 3);

        horizontalLayout_2->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        chkShowPartialsLabels = new QCheckBox(QgsLabelEngineConfigWidgetBase);
        chkShowPartialsLabels->setObjectName(QString::fromUtf8("chkShowPartialsLabels"));

        gridLayout_2->addWidget(chkShowPartialsLabels, 1, 0, 1, 3);

        chkShowCandidates = new QCheckBox(QgsLabelEngineConfigWidgetBase);
        chkShowCandidates->setObjectName(QString::fromUtf8("chkShowCandidates"));

        gridLayout_2->addWidget(chkShowCandidates, 5, 0, 1, 3);

        chkShowAllLabels = new QCheckBox(QgsLabelEngineConfigWidgetBase);
        chkShowAllLabels->setObjectName(QString::fromUtf8("chkShowAllLabels"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(chkShowAllLabels->sizePolicy().hasHeightForWidth());
        chkShowAllLabels->setSizePolicy(sizePolicy2);
        chkShowAllLabels->setInputMethodHints(Qt::ImhNone);

        gridLayout_2->addWidget(chkShowAllLabels, 2, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        label_6 = new QLabel(QgsLabelEngineConfigWidgetBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        mUnplacedColorButton = new QgsColorButton(QgsLabelEngineConfigWidgetBase);
        mUnplacedColorButton->setObjectName(QString::fromUtf8("mUnplacedColorButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mUnplacedColorButton->sizePolicy().hasHeightForWidth());
        mUnplacedColorButton->setSizePolicy(sizePolicy3);
        mUnplacedColorButton->setMinimumSize(QSize(120, 0));
        mUnplacedColorButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(mUnplacedColorButton);


        gridLayout_2->addLayout(horizontalLayout_3, 4, 0, 1, 3);

        mPlacementVersionComboBox = new QComboBox(QgsLabelEngineConfigWidgetBase);
        mPlacementVersionComboBox->setObjectName(QString::fromUtf8("mPlacementVersionComboBox"));
        mPlacementVersionComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        mPlacementVersionComboBox->setMinimumContentsLength(8);

        gridLayout_2->addWidget(mPlacementVersionComboBox, 7, 1, 1, 2);

        mTextRenderFormatComboBox = new QComboBox(QgsLabelEngineConfigWidgetBase);
        mTextRenderFormatComboBox->setObjectName(QString::fromUtf8("mTextRenderFormatComboBox"));
        mTextRenderFormatComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        mTextRenderFormatComboBox->setMinimumContentsLength(8);

        gridLayout_2->addWidget(mTextRenderFormatComboBox, 0, 1, 1, 2);

        label_7 = new QLabel(QgsLabelEngineConfigWidgetBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 7, 0, 1, 1);

        label_5 = new QLabel(QgsLabelEngineConfigWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        chkShowUnplaced = new QCheckBox(QgsLabelEngineConfigWidgetBase);
        chkShowUnplaced->setObjectName(QString::fromUtf8("chkShowUnplaced"));

        gridLayout_2->addWidget(chkShowUnplaced, 3, 0, 1, 3);

        chkShowMetrics = new QCheckBox(QgsLabelEngineConfigWidgetBase);
        chkShowMetrics->setObjectName(QString::fromUtf8("chkShowMetrics"));

        gridLayout_2->addWidget(chkShowMetrics, 6, 0, 1, 3);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        QWidget::setTabOrder(spinCandLine, spinCandPolygon);
        QWidget::setTabOrder(spinCandPolygon, mTextRenderFormatComboBox);
        QWidget::setTabOrder(mTextRenderFormatComboBox, chkShowPartialsLabels);
        QWidget::setTabOrder(chkShowPartialsLabels, chkShowAllLabels);
        QWidget::setTabOrder(chkShowAllLabels, chkShowUnplaced);
        QWidget::setTabOrder(chkShowUnplaced, mUnplacedColorButton);
        QWidget::setTabOrder(mUnplacedColorButton, chkShowCandidates);
        QWidget::setTabOrder(chkShowCandidates, chkShowMetrics);
        QWidget::setTabOrder(chkShowMetrics, mPlacementVersionComboBox);

        retranslateUi(QgsLabelEngineConfigWidgetBase);

        QMetaObject::connectSlotsByName(QgsLabelEngineConfigWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsLabelEngineConfigWidgetBase)
    {
        QgsLabelEngineConfigWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Automated Placement Engine", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Number of Candidates", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Line (per cm)", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Polygon (per cm\302\262)", nullptr));
        chkShowPartialsLabels->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Allow truncated labels on edges of map", nullptr));
        chkShowCandidates->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Show candidates (for debugging)", nullptr));
        chkShowAllLabels->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Show all labels for all layers (i.e. including collisions)", nullptr));
        label_6->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Color for unplaced labels", nullptr));
        mUnplacedColorButton->setText(QString());
        label_7->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Project labeling version", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Text rendering", nullptr));
        chkShowUnplaced->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Show unplaced labels", nullptr));
        chkShowMetrics->setText(QCoreApplication::translate("QgsLabelEngineConfigWidgetBase", "Show label metrics (for debugging)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelEngineConfigWidgetBase: public Ui_QgsLabelEngineConfigWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELENGINECONFIGDIALOG_H
