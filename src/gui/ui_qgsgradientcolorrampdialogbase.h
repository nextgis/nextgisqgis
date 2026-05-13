/********************************************************************************
** Form generated from reading UI file 'qgsgradientcolorrampdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGRADIENTCOLORRAMPDIALOGBASE_H
#define UI_QGSGRADIENTCOLORRAMPDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgscompoundcolorwidget.h"
#include "qgsdoublespinbox.h"
#include "qgsgradientstopeditor.h"
#include "qgsscrollarea.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGradientColorRampDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QgsColorButton *btnColor1;
    QLabel *label_2;
    QgsColorButton *btnColor2;
    QLabel *label_3;
    QComboBox *cboType;
    QSpacerItem *horizontalSpacer_3;
    QgsGradientStopEditor *mStopEditor;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QgsCompoundColorWidget *mColorWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QgsDoubleSpinBox *mPositionSpinBox;
    QComboBox *mStopColorSpec;
    QComboBox *mStopDirection;
    QSpacerItem *horizontalSpacer;
    QPushButton *mDeleteStopButton;
    QgsCollapsibleGroupBox *mPlotGroupBox;
    QVBoxLayout *verticalLayout_3;
    QwtPlot *mPlot;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mPlotHueCheckbox;
    QCheckBox *mPlotSaturationCheckbox;
    QCheckBox *mPlotLightnessCheckbox;
    QCheckBox *mPlotAlphaCheckbox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnInformation;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsGradientColorRampDialogBase)
    {
        if (QgsGradientColorRampDialogBase->objectName().isEmpty())
            QgsGradientColorRampDialogBase->setObjectName(QString::fromUtf8("QgsGradientColorRampDialogBase"));
        QgsGradientColorRampDialogBase->resize(868, 638);
        verticalLayout = new QVBoxLayout(QgsGradientColorRampDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(QgsGradientColorRampDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        btnColor1 = new QgsColorButton(QgsGradientColorRampDialogBase);
        btnColor1->setObjectName(QString::fromUtf8("btnColor1"));
        btnColor1->setMinimumSize(QSize(120, 0));
        btnColor1->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(btnColor1);

        label_2 = new QLabel(QgsGradientColorRampDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        btnColor2 = new QgsColorButton(QgsGradientColorRampDialogBase);
        btnColor2->setObjectName(QString::fromUtf8("btnColor2"));
        btnColor2->setMinimumSize(QSize(120, 0));
        btnColor2->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(btnColor2);

        label_3 = new QLabel(QgsGradientColorRampDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cboType = new QComboBox(QgsGradientColorRampDialogBase);
        cboType->setObjectName(QString::fromUtf8("cboType"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboType->sizePolicy().hasHeightForWidth());
        cboType->setSizePolicy(sizePolicy);
        cboType->setStyleSheet(QString::fromUtf8(""));
        cboType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(cboType);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(5, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        mStopEditor = new QgsGradientStopEditor(QgsGradientColorRampDialogBase);
        mStopEditor->setObjectName(QString::fromUtf8("mStopEditor"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mStopEditor->sizePolicy().hasHeightForWidth());
        mStopEditor->setSizePolicy(sizePolicy1);
        mStopEditor->setMinimumSize(QSize(0, 50));
        mStopEditor->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(mStopEditor);

        scrollArea = new QgsScrollArea(QgsGradientColorRampDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 856, 488));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, 0, -1);
        mColorWidget = new QgsCompoundColorWidget(groupBox_2);
        mColorWidget->setObjectName(QString::fromUtf8("mColorWidget"));
        mColorWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mColorWidget, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 6, -1);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        mPositionSpinBox = new QgsDoubleSpinBox(groupBox_2);
        mPositionSpinBox->setObjectName(QString::fromUtf8("mPositionSpinBox"));
        mPositionSpinBox->setDecimals(1);

        horizontalLayout_4->addWidget(mPositionSpinBox);

        mStopColorSpec = new QComboBox(groupBox_2);
        mStopColorSpec->setObjectName(QString::fromUtf8("mStopColorSpec"));

        horizontalLayout_4->addWidget(mStopColorSpec);

        mStopDirection = new QComboBox(groupBox_2);
        mStopDirection->setObjectName(QString::fromUtf8("mStopDirection"));

        horizontalLayout_4->addWidget(mStopDirection);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mDeleteStopButton = new QPushButton(groupBox_2);
        mDeleteStopButton->setObjectName(QString::fromUtf8("mDeleteStopButton"));

        horizontalLayout_4->addWidget(mDeleteStopButton);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        mPlotGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mPlotGroupBox->setObjectName(QString::fromUtf8("mPlotGroupBox"));
        mPlotGroupBox->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(mPlotGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 9, 0, 9);
        mPlot = new QwtPlot(mPlotGroupBox);
        mPlot->setObjectName(QString::fromUtf8("mPlot"));
        mPlot->setMinimumSize(QSize(0, 200));

        verticalLayout_3->addWidget(mPlot);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mPlotHueCheckbox = new QCheckBox(mPlotGroupBox);
        mPlotHueCheckbox->setObjectName(QString::fromUtf8("mPlotHueCheckbox"));

        horizontalLayout_2->addWidget(mPlotHueCheckbox);

        mPlotSaturationCheckbox = new QCheckBox(mPlotGroupBox);
        mPlotSaturationCheckbox->setObjectName(QString::fromUtf8("mPlotSaturationCheckbox"));

        horizontalLayout_2->addWidget(mPlotSaturationCheckbox);

        mPlotLightnessCheckbox = new QCheckBox(mPlotGroupBox);
        mPlotLightnessCheckbox->setObjectName(QString::fromUtf8("mPlotLightnessCheckbox"));

        horizontalLayout_2->addWidget(mPlotLightnessCheckbox);

        mPlotAlphaCheckbox = new QCheckBox(mPlotGroupBox);
        mPlotAlphaCheckbox->setObjectName(QString::fromUtf8("mPlotAlphaCheckbox"));

        horizontalLayout_2->addWidget(mPlotAlphaCheckbox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 1);

        verticalLayout_2->addWidget(mPlotGroupBox);

        verticalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnInformation = new QPushButton(QgsGradientColorRampDialogBase);
        btnInformation->setObjectName(QString::fromUtf8("btnInformation"));

        horizontalLayout->addWidget(btnInformation);

        mButtonBox = new QDialogButtonBox(QgsGradientColorRampDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(mButtonBox);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(btnColor1);
        label_2->setBuddy(btnColor2);
        label_3->setBuddy(cboType);
        label_4->setBuddy(mPositionSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(btnColor1, btnColor2);
        QWidget::setTabOrder(btnColor2, cboType);
        QWidget::setTabOrder(cboType, mStopEditor);
        QWidget::setTabOrder(mStopEditor, scrollArea);
        QWidget::setTabOrder(scrollArea, mPositionSpinBox);
        QWidget::setTabOrder(mPositionSpinBox, mStopColorSpec);
        QWidget::setTabOrder(mStopColorSpec, mStopDirection);
        QWidget::setTabOrder(mStopDirection, mDeleteStopButton);
        QWidget::setTabOrder(mDeleteStopButton, mColorWidget);
        QWidget::setTabOrder(mColorWidget, mPlotHueCheckbox);
        QWidget::setTabOrder(mPlotHueCheckbox, mPlotSaturationCheckbox);
        QWidget::setTabOrder(mPlotSaturationCheckbox, mPlotLightnessCheckbox);
        QWidget::setTabOrder(mPlotLightnessCheckbox, mPlotAlphaCheckbox);
        QWidget::setTabOrder(mPlotAlphaCheckbox, btnInformation);

        retranslateUi(QgsGradientColorRampDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsGradientColorRampDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsGradientColorRampDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGradientColorRampDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGradientColorRampDialogBase)
    {
        QgsGradientColorRampDialogBase->setWindowTitle(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Gradient Color Ramp", nullptr));
        label->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Color &1", nullptr));
        btnColor1->setText(QString());
        label_2->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Color &2", nullptr));
        btnColor2->setText(QString());
        label_3->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "&Type", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Gradient Stop", nullptr));
        label_4->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Relative &position", nullptr));
        mPositionSpinBox->setSuffix(QCoreApplication::translate("QgsGradientColorRampDialogBase", " %", nullptr));
        mDeleteStopButton->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "&Delete Stop", nullptr));
        mPlotGroupBox->setTitle(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Plot", nullptr));
        mPlotHueCheckbox->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Hue", nullptr));
        mPlotSaturationCheckbox->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Saturation", nullptr));
        mPlotLightnessCheckbox->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Lightness", nullptr));
        mPlotAlphaCheckbox->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "Opacity", nullptr));
        btnInformation->setText(QCoreApplication::translate("QgsGradientColorRampDialogBase", "&Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGradientColorRampDialogBase: public Ui_QgsGradientColorRampDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGRADIENTCOLORRAMPDIALOGBASE_H
