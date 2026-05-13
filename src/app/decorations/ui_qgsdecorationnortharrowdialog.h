/********************************************************************************
** Form generated from reading UI file 'qgsdecorationnortharrowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONNORTHARROWDIALOG_H
#define UI_QGSDECORATIONNORTHARROWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationNorthArrowDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout;
    QLabel *sizeLabel;
    QgsDoubleSpinBox *spinSize;
    QLabel *svgLabel;
    QHBoxLayout *horizontalLayout_26;
    QLineEdit *mSvgPathLineEdit;
    QPushButton *mSvgSelectorBtn;
    QLabel *colorLabel;
    QHBoxLayout *colorLayout;
    QLabel *fillLabel;
    QgsColorButton *pbnChangeColor;
    QLabel *outlineLabel;
    QgsColorButton *pbnChangeOutlineColor;
    QHBoxLayout *horizontalLayout;
    QLabel *labelHorizontal;
    QgsSpinBox *spinHorizontal;
    QLabel *labelVertical;
    QgsSpinBox *spinVertical;
    QgsUnitSelectionWidget *wgtUnitSelection;
    QLabel *angleLabel;
    QLabel *placementLabel;
    QLabel *lblMargin;
    QComboBox *cboPlacement;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_36;
    QSlider *sliderRotation;
    QgsSpinBox *spinAngle;
    QCheckBox *cboxAutomatic;
    QLabel *pixmapLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationNorthArrowDialog)
    {
        if (QgsDecorationNorthArrowDialog->objectName().isEmpty())
            QgsDecorationNorthArrowDialog->setObjectName(QString::fromUtf8("QgsDecorationNorthArrowDialog"));
        QgsDecorationNorthArrowDialog->resize(578, 259);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationNorthArrowDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QgsDecorationNorthArrowDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        grpEnable = new QGroupBox(QgsDecorationNorthArrowDialog);
        grpEnable->setObjectName(QString::fromUtf8("grpEnable"));
        grpEnable->setCheckable(true);
        grpEnable->setChecked(false);
        gridLayout = new QGridLayout(grpEnable);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sizeLabel = new QLabel(grpEnable);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sizeLabel->sizePolicy().hasHeightForWidth());
        sizeLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sizeLabel, 1, 1, 1, 1);

        spinSize = new QgsDoubleSpinBox(grpEnable);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setMinimum(0.100000000000000);
        spinSize->setMaximum(9999.000000000000000);
        spinSize->setSingleStep(0.500000000000000);

        gridLayout->addWidget(spinSize, 1, 2, 1, 3);

        svgLabel = new QLabel(grpEnable);
        svgLabel->setObjectName(QString::fromUtf8("svgLabel"));
        sizePolicy.setHeightForWidth(svgLabel->sizePolicy().hasHeightForWidth());
        svgLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(svgLabel, 2, 1, 1, 1);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        mSvgPathLineEdit = new QLineEdit(grpEnable);
        mSvgPathLineEdit->setObjectName(QString::fromUtf8("mSvgPathLineEdit"));

        horizontalLayout_26->addWidget(mSvgPathLineEdit);

        mSvgSelectorBtn = new QPushButton(grpEnable);
        mSvgSelectorBtn->setObjectName(QString::fromUtf8("mSvgSelectorBtn"));

        horizontalLayout_26->addWidget(mSvgSelectorBtn);


        gridLayout->addLayout(horizontalLayout_26, 2, 2, 1, 3);

        colorLabel = new QLabel(grpEnable);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        sizePolicy.setHeightForWidth(colorLabel->sizePolicy().hasHeightForWidth());
        colorLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(colorLabel, 0, 1, 1, 1);

        colorLayout = new QHBoxLayout();
        colorLayout->setSpacing(6);
        colorLayout->setObjectName(QString::fromUtf8("colorLayout"));
        fillLabel = new QLabel(grpEnable);
        fillLabel->setObjectName(QString::fromUtf8("fillLabel"));

        colorLayout->addWidget(fillLabel);

        pbnChangeColor = new QgsColorButton(grpEnable);
        pbnChangeColor->setObjectName(QString::fromUtf8("pbnChangeColor"));
        pbnChangeColor->setMinimumSize(QSize(150, 0));
        pbnChangeColor->setMaximumSize(QSize(120, 16777215));

        colorLayout->addWidget(pbnChangeColor);

        outlineLabel = new QLabel(grpEnable);
        outlineLabel->setObjectName(QString::fromUtf8("outlineLabel"));

        colorLayout->addWidget(outlineLabel);

        pbnChangeOutlineColor = new QgsColorButton(grpEnable);
        pbnChangeOutlineColor->setObjectName(QString::fromUtf8("pbnChangeOutlineColor"));
        pbnChangeOutlineColor->setMinimumSize(QSize(150, 0));
        pbnChangeOutlineColor->setMaximumSize(QSize(120, 16777215));

        colorLayout->addWidget(pbnChangeOutlineColor);


        gridLayout->addLayout(colorLayout, 0, 2, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelHorizontal = new QLabel(grpEnable);
        labelHorizontal->setObjectName(QString::fromUtf8("labelHorizontal"));

        horizontalLayout->addWidget(labelHorizontal);

        spinHorizontal = new QgsSpinBox(grpEnable);
        spinHorizontal->setObjectName(QString::fromUtf8("spinHorizontal"));
        spinHorizontal->setMinimumSize(QSize(90, 0));
        spinHorizontal->setMinimum(0);
        spinHorizontal->setMaximum(100);
        spinHorizontal->setValue(0);

        horizontalLayout->addWidget(spinHorizontal);

        labelVertical = new QLabel(grpEnable);
        labelVertical->setObjectName(QString::fromUtf8("labelVertical"));

        horizontalLayout->addWidget(labelVertical);

        spinVertical = new QgsSpinBox(grpEnable);
        spinVertical->setObjectName(QString::fromUtf8("spinVertical"));
        spinVertical->setMinimumSize(QSize(90, 0));
        spinVertical->setMinimum(0);
        spinVertical->setMaximum(100);
        spinVertical->setValue(0);

        horizontalLayout->addWidget(spinVertical);

        wgtUnitSelection = new QgsUnitSelectionWidget(grpEnable);
        wgtUnitSelection->setObjectName(QString::fromUtf8("wgtUnitSelection"));
        wgtUnitSelection->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(wgtUnitSelection);


        gridLayout->addLayout(horizontalLayout, 5, 2, 1, 3);

        angleLabel = new QLabel(grpEnable);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));
        sizePolicy.setHeightForWidth(angleLabel->sizePolicy().hasHeightForWidth());
        angleLabel->setSizePolicy(sizePolicy);
        angleLabel->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(angleLabel, 3, 1, 1, 1);

        placementLabel = new QLabel(grpEnable);
        placementLabel->setObjectName(QString::fromUtf8("placementLabel"));

        gridLayout->addWidget(placementLabel, 4, 1, 1, 1);

        lblMargin = new QLabel(grpEnable);
        lblMargin->setObjectName(QString::fromUtf8("lblMargin"));
        lblMargin->setMinimumSize(QSize(155, 0));

        gridLayout->addWidget(lblMargin, 5, 1, 1, 1);

        cboPlacement = new QComboBox(grpEnable);
        cboPlacement->setObjectName(QString::fromUtf8("cboPlacement"));

        gridLayout->addWidget(cboPlacement, 4, 2, 1, 3);

        verticalSpacer = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        sliderRotation = new QSlider(grpEnable);
        sliderRotation->setObjectName(QString::fromUtf8("sliderRotation"));
        sliderRotation->setMaximum(360);
        sliderRotation->setSingleStep(1);
        sliderRotation->setPageStep(10);
        sliderRotation->setOrientation(Qt::Horizontal);

        horizontalLayout_36->addWidget(sliderRotation);

        spinAngle = new QgsSpinBox(grpEnable);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(1);
        spinAngle->setValue(0);

        horizontalLayout_36->addWidget(spinAngle);

        cboxAutomatic = new QCheckBox(grpEnable);
        cboxAutomatic->setObjectName(QString::fromUtf8("cboxAutomatic"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cboxAutomatic->sizePolicy().hasHeightForWidth());
        cboxAutomatic->setSizePolicy(sizePolicy1);
        cboxAutomatic->setMinimumSize(QSize(0, 30));
        cboxAutomatic->setChecked(true);

        horizontalLayout_36->addWidget(cboxAutomatic);


        gridLayout->addLayout(horizontalLayout_36, 3, 2, 1, 3);

        pixmapLabel = new QLabel(grpEnable);
        pixmapLabel->setObjectName(QString::fromUtf8("pixmapLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pixmapLabel->sizePolicy().hasHeightForWidth());
        pixmapLabel->setSizePolicy(sizePolicy2);
        pixmapLabel->setFrameShape(QFrame::StyledPanel);
        pixmapLabel->setScaledContents(false);
        pixmapLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pixmapLabel, 0, 0, 6, 1);


        verticalLayout->addWidget(grpEnable);

        buttonBox = new QDialogButtonBox(QgsDecorationNorthArrowDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        angleLabel->setBuddy(sliderRotation);
        placementLabel->setBuddy(cboPlacement);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(grpEnable, pbnChangeColor);
        QWidget::setTabOrder(pbnChangeColor, pbnChangeOutlineColor);
        QWidget::setTabOrder(pbnChangeOutlineColor, spinSize);
        QWidget::setTabOrder(spinSize, mSvgPathLineEdit);
        QWidget::setTabOrder(mSvgPathLineEdit, mSvgSelectorBtn);
        QWidget::setTabOrder(mSvgSelectorBtn, sliderRotation);
        QWidget::setTabOrder(sliderRotation, spinAngle);
        QWidget::setTabOrder(spinAngle, cboxAutomatic);
        QWidget::setTabOrder(cboxAutomatic, cboPlacement);
        QWidget::setTabOrder(cboPlacement, spinHorizontal);
        QWidget::setTabOrder(spinHorizontal, spinVertical);
        QWidget::setTabOrder(spinVertical, wgtUnitSelection);
        QWidget::setTabOrder(wgtUnitSelection, buttonBox);

        retranslateUi(QgsDecorationNorthArrowDialog);

        QMetaObject::connectSlotsByName(QgsDecorationNorthArrowDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationNorthArrowDialog)
    {
        QgsDecorationNorthArrowDialog->setWindowTitle(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "North Arrow Decoration", nullptr));
        grpEnable->setTitle(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Enable North Arrow", nullptr));
        sizeLabel->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Size", nullptr));
        spinSize->setSuffix(QCoreApplication::translate("QgsDecorationNorthArrowDialog", " mm", nullptr));
        svgLabel->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Custom SVG", nullptr));
        mSvgSelectorBtn->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "\342\200\246", nullptr));
        colorLabel->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Color", nullptr));
        fillLabel->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Fill", nullptr));
        pbnChangeColor->setText(QString());
        outlineLabel->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Stroke", nullptr));
        pbnChangeOutlineColor->setText(QString());
        labelHorizontal->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Horizontal", nullptr));
#if QT_CONFIG(tooltip)
        spinHorizontal->setToolTip(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Horizontal offset on the map canvas from the placement anchor", nullptr));
#endif // QT_CONFIG(tooltip)
        labelVertical->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Vertical", nullptr));
#if QT_CONFIG(tooltip)
        spinVertical->setToolTip(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Vertical offset on the map canvas from the placement anchor", nullptr));
#endif // QT_CONFIG(tooltip)
        angleLabel->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Angle", nullptr));
        placementLabel->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Placement", nullptr));
        lblMargin->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Margin from edge", nullptr));
#if QT_CONFIG(tooltip)
        cboPlacement->setToolTip(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Placement on screen", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sliderRotation->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cboxAutomatic->setToolTip(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "keeps the selected arrow oriented to the north", nullptr));
#endif // QT_CONFIG(tooltip)
        cboxAutomatic->setText(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Automatic", nullptr));
#if QT_CONFIG(tooltip)
        pixmapLabel->setToolTip(QCoreApplication::translate("QgsDecorationNorthArrowDialog", "Preview of north arrow", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationNorthArrowDialog: public Ui_QgsDecorationNorthArrowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONNORTHARROWDIALOG_H
