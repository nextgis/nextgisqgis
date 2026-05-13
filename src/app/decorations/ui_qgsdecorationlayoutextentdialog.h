/********************************************************************************
** Form generated from reading UI file 'qgsdecorationlayoutextentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONLAYOUTEXTENTDIALOG_H
#define UI_QGSDECORATIONLAYOUTEXTENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsfontbutton.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationLayoutExtentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpEnable;
    QGridLayout *gridLayout;
    QgsFontButton *mButtonFontStyle;
    QLabel *mLineSymbolLabel;
    QCheckBox *mCheckBoxLabelExtents;
    QgsSymbolButton *mSymbolButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationLayoutExtentDialog)
    {
        if (QgsDecorationLayoutExtentDialog->objectName().isEmpty())
            QgsDecorationLayoutExtentDialog->setObjectName(QString::fromUtf8("QgsDecorationLayoutExtentDialog"));
        QgsDecorationLayoutExtentDialog->resize(377, 152);
        verticalLayout = new QVBoxLayout(QgsDecorationLayoutExtentDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        grpEnable = new QGroupBox(QgsDecorationLayoutExtentDialog);
        grpEnable->setObjectName(QString::fromUtf8("grpEnable"));
        grpEnable->setCheckable(true);
        grpEnable->setChecked(false);
        gridLayout = new QGridLayout(grpEnable);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mButtonFontStyle = new QgsFontButton(grpEnable);
        mButtonFontStyle->setObjectName(QString::fromUtf8("mButtonFontStyle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonFontStyle->sizePolicy().hasHeightForWidth());
        mButtonFontStyle->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mButtonFontStyle, 1, 1, 1, 1);

        mLineSymbolLabel = new QLabel(grpEnable);
        mLineSymbolLabel->setObjectName(QString::fromUtf8("mLineSymbolLabel"));
        mLineSymbolLabel->setWordWrap(true);

        gridLayout->addWidget(mLineSymbolLabel, 0, 0, 1, 1);

        mCheckBoxLabelExtents = new QCheckBox(grpEnable);
        mCheckBoxLabelExtents->setObjectName(QString::fromUtf8("mCheckBoxLabelExtents"));

        gridLayout->addWidget(mCheckBoxLabelExtents, 1, 0, 1, 1);

        mSymbolButton = new QgsSymbolButton(grpEnable);
        mSymbolButton->setObjectName(QString::fromUtf8("mSymbolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSymbolButton->sizePolicy().hasHeightForWidth());
        mSymbolButton->setSizePolicy(sizePolicy1);
        mSymbolButton->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(mSymbolButton, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);


        verticalLayout->addWidget(grpEnable);

        buttonBox = new QDialogButtonBox(QgsDecorationLayoutExtentDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(grpEnable, mSymbolButton);
        QWidget::setTabOrder(mSymbolButton, mCheckBoxLabelExtents);
        QWidget::setTabOrder(mCheckBoxLabelExtents, mButtonFontStyle);

        retranslateUi(QgsDecorationLayoutExtentDialog);

        QMetaObject::connectSlotsByName(QgsDecorationLayoutExtentDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationLayoutExtentDialog)
    {
        QgsDecorationLayoutExtentDialog->setWindowTitle(QCoreApplication::translate("QgsDecorationLayoutExtentDialog", "Layout Extents Properties", nullptr));
        grpEnable->setTitle(QCoreApplication::translate("QgsDecorationLayoutExtentDialog", "Show Layout Extents", nullptr));
        mButtonFontStyle->setText(QCoreApplication::translate("QgsDecorationLayoutExtentDialog", "Font", nullptr));
        mLineSymbolLabel->setText(QCoreApplication::translate("QgsDecorationLayoutExtentDialog", "Symbol", nullptr));
        mCheckBoxLabelExtents->setText(QCoreApplication::translate("QgsDecorationLayoutExtentDialog", "Label extents", nullptr));
        mSymbolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationLayoutExtentDialog: public Ui_QgsDecorationLayoutExtentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONLAYOUTEXTENTDIALOG_H
