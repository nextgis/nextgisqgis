/********************************************************************************
** Form generated from reading UI file 'qgsdecorationimagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONIMAGEDIALOG_H
#define UI_QGSDECORATIONIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfilewidget.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationImageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout;
    QLabel *sizeLabel;
    QgsDoubleSpinBox *spinSize;
    QLabel *svgLabel;
    QgsFileWidget *wgtImagePath;
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
    QLabel *placementLabel;
    QLabel *lblMargin;
    QComboBox *cboPlacement;
    QSpacerItem *verticalSpacer;
    QLabel *pixmapLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationImageDialog)
    {
        if (QgsDecorationImageDialog->objectName().isEmpty())
            QgsDecorationImageDialog->setObjectName(QString::fromUtf8("QgsDecorationImageDialog"));
        QgsDecorationImageDialog->resize(578, 259);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationImageDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QgsDecorationImageDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        grpEnable = new QGroupBox(QgsDecorationImageDialog);
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

        gridLayout->addWidget(sizeLabel, 2, 1, 1, 1);

        spinSize = new QgsDoubleSpinBox(grpEnable);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setMinimum(0.100000000000000);
        spinSize->setMaximum(9999.000000000000000);
        spinSize->setSingleStep(0.500000000000000);

        gridLayout->addWidget(spinSize, 2, 2, 1, 3);

        svgLabel = new QLabel(grpEnable);
        svgLabel->setObjectName(QString::fromUtf8("svgLabel"));
        sizePolicy.setHeightForWidth(svgLabel->sizePolicy().hasHeightForWidth());
        svgLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(svgLabel, 0, 1, 1, 1);

        wgtImagePath = new QgsFileWidget(grpEnable);
        wgtImagePath->setObjectName(QString::fromUtf8("wgtImagePath"));

        gridLayout->addWidget(wgtImagePath, 0, 2, 1, 3);

        colorLabel = new QLabel(grpEnable);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        sizePolicy.setHeightForWidth(colorLabel->sizePolicy().hasHeightForWidth());
        colorLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(colorLabel, 1, 1, 1, 1);

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


        gridLayout->addLayout(colorLayout, 1, 2, 1, 3);

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

        pixmapLabel = new QLabel(grpEnable);
        pixmapLabel->setObjectName(QString::fromUtf8("pixmapLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pixmapLabel->sizePolicy().hasHeightForWidth());
        pixmapLabel->setSizePolicy(sizePolicy1);
        pixmapLabel->setFrameShape(QFrame::StyledPanel);
        pixmapLabel->setScaledContents(false);
        pixmapLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pixmapLabel, 0, 0, 6, 1);


        verticalLayout->addWidget(grpEnable);

        buttonBox = new QDialogButtonBox(QgsDecorationImageDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        placementLabel->setBuddy(cboPlacement);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(grpEnable, pbnChangeColor);
        QWidget::setTabOrder(pbnChangeColor, pbnChangeOutlineColor);
        QWidget::setTabOrder(pbnChangeOutlineColor, spinSize);
        QWidget::setTabOrder(spinSize, wgtImagePath);
        QWidget::setTabOrder(wgtImagePath, cboPlacement);
        QWidget::setTabOrder(cboPlacement, spinHorizontal);
        QWidget::setTabOrder(spinHorizontal, spinVertical);
        QWidget::setTabOrder(spinVertical, wgtUnitSelection);
        QWidget::setTabOrder(wgtUnitSelection, buttonBox);

        retranslateUi(QgsDecorationImageDialog);

        QMetaObject::connectSlotsByName(QgsDecorationImageDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationImageDialog)
    {
        QgsDecorationImageDialog->setWindowTitle(QCoreApplication::translate("QgsDecorationImageDialog", "Image Decoration", nullptr));
        grpEnable->setTitle(QCoreApplication::translate("QgsDecorationImageDialog", "Enable Image", nullptr));
        sizeLabel->setText(QCoreApplication::translate("QgsDecorationImageDialog", "Size", nullptr));
        spinSize->setSuffix(QCoreApplication::translate("QgsDecorationImageDialog", " mm", nullptr));
        svgLabel->setText(QCoreApplication::translate("QgsDecorationImageDialog", "Image path", nullptr));
        colorLabel->setText(QCoreApplication::translate("QgsDecorationImageDialog", "Color", nullptr));
        fillLabel->setText(QCoreApplication::translate("QgsDecorationImageDialog", "Fill", nullptr));
        pbnChangeColor->setText(QString());
        outlineLabel->setText(QCoreApplication::translate("QgsDecorationImageDialog", "Stroke", nullptr));
        pbnChangeOutlineColor->setText(QString());
        labelHorizontal->setText(QCoreApplication::translate("QgsDecorationImageDialog", "Horizontal", nullptr));
#if QT_CONFIG(tooltip)
        spinHorizontal->setToolTip(QCoreApplication::translate("QgsDecorationImageDialog", "Horizontal offset on the map canvas from the placement anchor", nullptr));
#endif // QT_CONFIG(tooltip)
        labelVertical->setText(QCoreApplication::translate("QgsDecorationImageDialog", "Vertical", nullptr));
#if QT_CONFIG(tooltip)
        spinVertical->setToolTip(QCoreApplication::translate("QgsDecorationImageDialog", "Vertical offset on the map canvas from the placement anchor", nullptr));
#endif // QT_CONFIG(tooltip)
        placementLabel->setText(QCoreApplication::translate("QgsDecorationImageDialog", "Placement", nullptr));
        lblMargin->setText(QCoreApplication::translate("QgsDecorationImageDialog", "Margin from edge", nullptr));
#if QT_CONFIG(tooltip)
        cboPlacement->setToolTip(QCoreApplication::translate("QgsDecorationImageDialog", "Placement on screen", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pixmapLabel->setToolTip(QCoreApplication::translate("QgsDecorationImageDialog", "Preview of image", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationImageDialog: public Ui_QgsDecorationImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONIMAGEDIALOG_H
