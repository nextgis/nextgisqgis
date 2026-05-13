/********************************************************************************
** Form generated from reading UI file 'animationexport3ddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONEXPORT3DDIALOG_H
#define UI_ANIMATIONEXPORT3DDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "qgsfilewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_AnimationExport3DDialog
{
public:
    QGridLayout *gridLayout;
    QgsFileWidget *mOutputDirFileWidget;
    QLabel *mHeightLabel;
    QLabel *mFpsLabel;
    QLineEdit *mTemplateLineEdit;
    QLabel *mOutputDirLabel;
    QLabel *mTemplateLabel;
    QgsSpinBox *mFpsSpinBox;
    QLabel *mWidthLabel;
    QgsSpinBox *mWidthSpinBox;
    QgsSpinBox *mHeightSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *AnimationExport3DDialog)
    {
        if (AnimationExport3DDialog->objectName().isEmpty())
            AnimationExport3DDialog->setObjectName(QString::fromUtf8("AnimationExport3DDialog"));
        AnimationExport3DDialog->resize(434, 314);
        AnimationExport3DDialog->setModal(true);
        gridLayout = new QGridLayout(AnimationExport3DDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mOutputDirFileWidget = new QgsFileWidget(AnimationExport3DDialog);
        mOutputDirFileWidget->setObjectName(QString::fromUtf8("mOutputDirFileWidget"));

        gridLayout->addWidget(mOutputDirFileWidget, 1, 1, 1, 2);

        mHeightLabel = new QLabel(AnimationExport3DDialog);
        mHeightLabel->setObjectName(QString::fromUtf8("mHeightLabel"));

        gridLayout->addWidget(mHeightLabel, 4, 0, 1, 1);

        mFpsLabel = new QLabel(AnimationExport3DDialog);
        mFpsLabel->setObjectName(QString::fromUtf8("mFpsLabel"));

        gridLayout->addWidget(mFpsLabel, 2, 0, 1, 1);

        mTemplateLineEdit = new QLineEdit(AnimationExport3DDialog);
        mTemplateLineEdit->setObjectName(QString::fromUtf8("mTemplateLineEdit"));

        gridLayout->addWidget(mTemplateLineEdit, 0, 1, 1, 2);

        mOutputDirLabel = new QLabel(AnimationExport3DDialog);
        mOutputDirLabel->setObjectName(QString::fromUtf8("mOutputDirLabel"));

        gridLayout->addWidget(mOutputDirLabel, 1, 0, 1, 1);

        mTemplateLabel = new QLabel(AnimationExport3DDialog);
        mTemplateLabel->setObjectName(QString::fromUtf8("mTemplateLabel"));

        gridLayout->addWidget(mTemplateLabel, 0, 0, 1, 1);

        mFpsSpinBox = new QgsSpinBox(AnimationExport3DDialog);
        mFpsSpinBox->setObjectName(QString::fromUtf8("mFpsSpinBox"));
        mFpsSpinBox->setMinimum(1);
        mFpsSpinBox->setValue(30);

        gridLayout->addWidget(mFpsSpinBox, 2, 1, 1, 2);

        mWidthLabel = new QLabel(AnimationExport3DDialog);
        mWidthLabel->setObjectName(QString::fromUtf8("mWidthLabel"));

        gridLayout->addWidget(mWidthLabel, 3, 0, 1, 1);

        mWidthSpinBox = new QgsSpinBox(AnimationExport3DDialog);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        mWidthSpinBox->setMinimum(100);
        mWidthSpinBox->setMaximum(10000);
        mWidthSpinBox->setSingleStep(100);
        mWidthSpinBox->setValue(800);

        gridLayout->addWidget(mWidthSpinBox, 3, 1, 1, 2);

        mHeightSpinBox = new QgsSpinBox(AnimationExport3DDialog);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        mHeightSpinBox->setMinimum(100);
        mHeightSpinBox->setMaximum(10000);
        mHeightSpinBox->setSingleStep(100);
        mHeightSpinBox->setValue(600);

        gridLayout->addWidget(mHeightSpinBox, 4, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(AnimationExport3DDialog);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 6, 0, 1, 3);

#if QT_CONFIG(shortcut)
        mHeightLabel->setBuddy(mHeightSpinBox);
        mTemplateLabel->setBuddy(mTemplateLineEdit);
        mWidthLabel->setBuddy(mWidthSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mTemplateLineEdit, mFpsSpinBox);
        QWidget::setTabOrder(mFpsSpinBox, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mHeightSpinBox);

        retranslateUi(AnimationExport3DDialog);
        QObject::connect(mButtonBox, SIGNAL(accepted()), AnimationExport3DDialog, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), AnimationExport3DDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AnimationExport3DDialog);
    } // setupUi

    void retranslateUi(QDialog *AnimationExport3DDialog)
    {
        AnimationExport3DDialog->setWindowTitle(QCoreApplication::translate("AnimationExport3DDialog", "Export 3D Animation", nullptr));
        mHeightLabel->setText(QCoreApplication::translate("AnimationExport3DDialog", "Output height", nullptr));
        mFpsLabel->setText(QCoreApplication::translate("AnimationExport3DDialog", "Frames per second", nullptr));
#if QT_CONFIG(tooltip)
        mTemplateLineEdit->setToolTip(QCoreApplication::translate("AnimationExport3DDialog", "Number of # represents number of digits (e.g. frame###.png -> frame001.png)", nullptr));
#endif // QT_CONFIG(tooltip)
        mOutputDirLabel->setText(QCoreApplication::translate("AnimationExport3DDialog", "Output directory", nullptr));
        mTemplateLabel->setText(QCoreApplication::translate("AnimationExport3DDialog", "Template", nullptr));
        mWidthLabel->setText(QCoreApplication::translate("AnimationExport3DDialog", "Output width", nullptr));
        mWidthSpinBox->setSuffix(QCoreApplication::translate("AnimationExport3DDialog", " px", nullptr));
        mHeightSpinBox->setSuffix(QCoreApplication::translate("AnimationExport3DDialog", " px", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnimationExport3DDialog: public Ui_AnimationExport3DDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONEXPORT3DDIALOG_H
