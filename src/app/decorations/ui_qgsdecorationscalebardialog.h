/********************************************************************************
** Form generated from reading UI file 'qgsdecorationscalebardialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONSCALEBARDIALOG_H
#define UI_QGSDECORATIONSCALEBARDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include "qgscolorbutton.h"
#include "qgsfontbutton.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationScaleBarDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout_2;
    QHBoxLayout *colorLayout;
    QLabel *fillLabel;
    QgsColorButton *pbnChangeColor;
    QLabel *outlineLabel;
    QgsColorButton *pbnChangeOutlineColor;
    QLabel *textLabel1;
    QLabel *textLabel1_3;
    QComboBox *cboStyle;
    QLabel *textLabel1_3_2;
    QLabel *textLabel1_3_22;
    QgsFontButton *mButtonFontStyle;
    QHBoxLayout *horizontalLayout_3;
    QgsSpinBox *spnSize;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *hlytMargin;
    QLabel *lblHorizontal;
    QgsSpinBox *spnHorizontal;
    QLabel *lblVertical;
    QgsSpinBox *spnVertical;
    QgsUnitSelectionWidget *wgtUnitSelection;
    QComboBox *cboPlacement;
    QLabel *lblMargin;
    QLabel *lblLocation;
    QCheckBox *chkSnapping;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QgsDecorationScaleBarDialog)
    {
        if (QgsDecorationScaleBarDialog->objectName().isEmpty())
            QgsDecorationScaleBarDialog->setObjectName(QString::fromUtf8("QgsDecorationScaleBarDialog"));
        QgsDecorationScaleBarDialog->resize(596, 337);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationScaleBarDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsDecorationScaleBarDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsDecorationScaleBarDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        grpEnable = new QGroupBox(QgsDecorationScaleBarDialog);
        grpEnable->setObjectName(QString::fromUtf8("grpEnable"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grpEnable->sizePolicy().hasHeightForWidth());
        grpEnable->setSizePolicy(sizePolicy);
        grpEnable->setMinimumSize(QSize(0, 220));
        grpEnable->setCheckable(true);
        grpEnable->setChecked(false);
        gridLayout_2 = new QGridLayout(grpEnable);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
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


        gridLayout_2->addLayout(colorLayout, 3, 1, 1, 1);

        textLabel1 = new QLabel(grpEnable);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textLabel1, 2, 0, 1, 1);

        textLabel1_3 = new QLabel(grpEnable);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        sizePolicy.setHeightForWidth(textLabel1_3->sizePolicy().hasHeightForWidth());
        textLabel1_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textLabel1_3, 5, 0, 1, 1);

        cboStyle = new QComboBox(grpEnable);
        cboStyle->addItem(QString());
        cboStyle->addItem(QString());
        cboStyle->addItem(QString());
        cboStyle->addItem(QString());
        cboStyle->setObjectName(QString::fromUtf8("cboStyle"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cboStyle->sizePolicy().hasHeightForWidth());
        cboStyle->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(cboStyle, 2, 1, 1, 1);

        textLabel1_3_2 = new QLabel(grpEnable);
        textLabel1_3_2->setObjectName(QString::fromUtf8("textLabel1_3_2"));
        sizePolicy.setHeightForWidth(textLabel1_3_2->sizePolicy().hasHeightForWidth());
        textLabel1_3_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textLabel1_3_2, 3, 0, 1, 1);

        textLabel1_3_22 = new QLabel(grpEnable);
        textLabel1_3_22->setObjectName(QString::fromUtf8("textLabel1_3_22"));
        sizePolicy.setHeightForWidth(textLabel1_3_22->sizePolicy().hasHeightForWidth());
        textLabel1_3_22->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textLabel1_3_22, 4, 0, 1, 1);

        mButtonFontStyle = new QgsFontButton(grpEnable);
        mButtonFontStyle->setObjectName(QString::fromUtf8("mButtonFontStyle"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonFontStyle->sizePolicy().hasHeightForWidth());
        mButtonFontStyle->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(mButtonFontStyle, 4, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spnSize = new QgsSpinBox(grpEnable);
        spnSize->setObjectName(QString::fromUtf8("spnSize"));
        sizePolicy1.setHeightForWidth(spnSize->sizePolicy().hasHeightForWidth());
        spnSize->setSizePolicy(sizePolicy1);
        spnSize->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(spnSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_3, 5, 1, 1, 1);

        hlytMargin = new QHBoxLayout();
        hlytMargin->setSpacing(10);
        hlytMargin->setObjectName(QString::fromUtf8("hlytMargin"));
        hlytMargin->setSizeConstraint(QLayout::SetDefaultConstraint);
        lblHorizontal = new QLabel(grpEnable);
        lblHorizontal->setObjectName(QString::fromUtf8("lblHorizontal"));
        sizePolicy1.setHeightForWidth(lblHorizontal->sizePolicy().hasHeightForWidth());
        lblHorizontal->setSizePolicy(sizePolicy1);
        lblHorizontal->setMinimumSize(QSize(70, 0));
        lblHorizontal->setMaximumSize(QSize(60, 16777215));
        lblHorizontal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hlytMargin->addWidget(lblHorizontal);

        spnHorizontal = new QgsSpinBox(grpEnable);
        spnHorizontal->setObjectName(QString::fromUtf8("spnHorizontal"));
        sizePolicy1.setHeightForWidth(spnHorizontal->sizePolicy().hasHeightForWidth());
        spnHorizontal->setSizePolicy(sizePolicy1);
        spnHorizontal->setMinimumSize(QSize(90, 0));
        spnHorizontal->setMaximumSize(QSize(90, 16777215));
        spnHorizontal->setMinimum(0);
        spnHorizontal->setMaximum(100);

        hlytMargin->addWidget(spnHorizontal);

        lblVertical = new QLabel(grpEnable);
        lblVertical->setObjectName(QString::fromUtf8("lblVertical"));
        lblVertical->setMinimumSize(QSize(0, 0));
        lblVertical->setMaximumSize(QSize(60, 16777215));

        hlytMargin->addWidget(lblVertical);

        spnVertical = new QgsSpinBox(grpEnable);
        spnVertical->setObjectName(QString::fromUtf8("spnVertical"));
        sizePolicy1.setHeightForWidth(spnVertical->sizePolicy().hasHeightForWidth());
        spnVertical->setSizePolicy(sizePolicy1);
        spnVertical->setMinimumSize(QSize(90, 0));
        spnVertical->setMaximumSize(QSize(90, 16777215));
        spnVertical->setMaximum(100);

        hlytMargin->addWidget(spnVertical);

        wgtUnitSelection = new QgsUnitSelectionWidget(grpEnable);
        wgtUnitSelection->setObjectName(QString::fromUtf8("wgtUnitSelection"));
        wgtUnitSelection->setFocusPolicy(Qt::StrongFocus);

        hlytMargin->addWidget(wgtUnitSelection);


        gridLayout_2->addLayout(hlytMargin, 8, 1, 1, 1);

        cboPlacement = new QComboBox(grpEnable);
        cboPlacement->setObjectName(QString::fromUtf8("cboPlacement"));
        sizePolicy1.setHeightForWidth(cboPlacement->sizePolicy().hasHeightForWidth());
        cboPlacement->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(cboPlacement, 7, 1, 1, 1);

        lblMargin = new QLabel(grpEnable);
        lblMargin->setObjectName(QString::fromUtf8("lblMargin"));
        lblMargin->setMinimumSize(QSize(155, 0));

        gridLayout_2->addWidget(lblMargin, 8, 0, 1, 1);

        lblLocation = new QLabel(grpEnable);
        lblLocation->setObjectName(QString::fromUtf8("lblLocation"));
        sizePolicy.setHeightForWidth(lblLocation->sizePolicy().hasHeightForWidth());
        lblLocation->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lblLocation, 7, 0, 1, 1);

        chkSnapping = new QCheckBox(grpEnable);
        chkSnapping->setObjectName(QString::fromUtf8("chkSnapping"));
        sizePolicy1.setHeightForWidth(chkSnapping->sizePolicy().hasHeightForWidth());
        chkSnapping->setSizePolicy(sizePolicy1);
        chkSnapping->setChecked(true);

        gridLayout_2->addWidget(chkSnapping, 6, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 0, 1, 2);


        gridLayout->addWidget(grpEnable, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        textLabel1->setBuddy(cboStyle);
        textLabel1_3->setBuddy(spnSize);
        lblLocation->setBuddy(cboPlacement);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(grpEnable, cboStyle);
        QWidget::setTabOrder(cboStyle, pbnChangeColor);
        QWidget::setTabOrder(pbnChangeColor, pbnChangeOutlineColor);
        QWidget::setTabOrder(pbnChangeOutlineColor, mButtonFontStyle);
        QWidget::setTabOrder(mButtonFontStyle, spnSize);
        QWidget::setTabOrder(spnSize, chkSnapping);
        QWidget::setTabOrder(chkSnapping, cboPlacement);
        QWidget::setTabOrder(cboPlacement, spnHorizontal);
        QWidget::setTabOrder(spnHorizontal, spnVertical);
        QWidget::setTabOrder(spnVertical, wgtUnitSelection);

        retranslateUi(QgsDecorationScaleBarDialog);

        QMetaObject::connectSlotsByName(QgsDecorationScaleBarDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationScaleBarDialog)
    {
        QgsDecorationScaleBarDialog->setWindowTitle(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Scale Bar Decoration", nullptr));
        grpEnable->setTitle(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Enable Scale Bar", nullptr));
        fillLabel->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Fill", nullptr));
        pbnChangeColor->setText(QString());
        outlineLabel->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Outline", nullptr));
        pbnChangeOutlineColor->setText(QString());
        textLabel1->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Scale bar style", nullptr));
        textLabel1_3->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Size of bar", nullptr));
        cboStyle->setItemText(0, QCoreApplication::translate("QgsDecorationScaleBarDialog", "Tick Down", nullptr));
        cboStyle->setItemText(1, QCoreApplication::translate("QgsDecorationScaleBarDialog", "Tick Up", nullptr));
        cboStyle->setItemText(2, QCoreApplication::translate("QgsDecorationScaleBarDialog", "Box", nullptr));
        cboStyle->setItemText(3, QCoreApplication::translate("QgsDecorationScaleBarDialog", "Bar", nullptr));

#if QT_CONFIG(tooltip)
        cboStyle->setToolTip(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Select the style of the scale bar", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel1_3_2->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Color of bar", nullptr));
        textLabel1_3_22->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Font of bar", nullptr));
        mButtonFontStyle->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Font", nullptr));
        lblHorizontal->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Horizontal", nullptr));
#if QT_CONFIG(tooltip)
        spnHorizontal->setToolTip(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Horizontal offset on the map canvas from the placement anchor", nullptr));
#endif // QT_CONFIG(tooltip)
        lblVertical->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Vertical", nullptr));
#if QT_CONFIG(tooltip)
        spnVertical->setToolTip(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Vertical offset on the map canvas from the placement anchor", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMargin->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Margin from edge", nullptr));
        lblLocation->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Placement", nullptr));
        chkSnapping->setText(QCoreApplication::translate("QgsDecorationScaleBarDialog", "Automatically snap to round number on resize", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationScaleBarDialog: public Ui_QgsDecorationScaleBarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONSCALEBARDIALOG_H
