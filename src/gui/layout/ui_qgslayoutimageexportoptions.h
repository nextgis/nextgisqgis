/********************************************************************************
** Form generated from reading UI file 'qgslayoutimageexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTIMAGEEXPORTOPTIONS_H
#define UI_QGSLAYOUTIMAGEEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutImageExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *mGenerateWorldFile;
    QLabel *label_10;
    QgsSpinBox *mWidthSpinBox;
    QLabel *label_9;
    QCheckBox *mAntialiasingCheckBox;
    QgsSpinBox *mResolutionSpinBox;
    QLabel *label_13;
    QgsSpinBox *mHeightSpinBox;
    QLabel *mQualityLabel;
    QSlider *mQualitySlider;
    QSpinBox *mQualitySpinBox;
    QgsCollapsibleGroupBoxBasic *mClipToContentGroupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QgsSpinBox *mLeftMarginSpinBox;
    QLabel *label_11;
    QgsSpinBox *mRightMarginSpinBox;
    QLabel *label_12;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QgsSpinBox *mTopMarginSpinBox;
    QgsSpinBox *mBottomMarginSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *mHelpButtonBox;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *mOpenAfterExportingCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLayoutImageExportOptionsDialog)
    {
        if (QgsLayoutImageExportOptionsDialog->objectName().isEmpty())
            QgsLayoutImageExportOptionsDialog->setObjectName(QString::fromUtf8("QgsLayoutImageExportOptionsDialog"));
        QgsLayoutImageExportOptionsDialog->resize(565, 524);
        verticalLayout = new QVBoxLayout(QgsLayoutImageExportOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutImageExportOptionsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        mGenerateWorldFile = new QCheckBox(groupBox);
        mGenerateWorldFile->setObjectName(QString::fromUtf8("mGenerateWorldFile"));

        gridLayout->addWidget(mGenerateWorldFile, 5, 0, 1, 5);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        mWidthSpinBox = new QgsSpinBox(groupBox);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        mWidthSpinBox->setMinimum(0);
        mWidthSpinBox->setMaximum(99999999);
        mWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mWidthSpinBox, 1, 2, 1, 2);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 2);

        mAntialiasingCheckBox = new QCheckBox(groupBox);
        mAntialiasingCheckBox->setObjectName(QString::fromUtf8("mAntialiasingCheckBox"));

        gridLayout->addWidget(mAntialiasingCheckBox, 4, 0, 1, 5);

        mResolutionSpinBox = new QgsSpinBox(groupBox);
        mResolutionSpinBox->setObjectName(QString::fromUtf8("mResolutionSpinBox"));
        mResolutionSpinBox->setMaximum(3000);
        mResolutionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mResolutionSpinBox, 0, 2, 1, 2);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 2, 0, 1, 2);

        mHeightSpinBox = new QgsSpinBox(groupBox);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        mHeightSpinBox->setMinimum(0);
        mHeightSpinBox->setMaximum(99999999);
        mHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mHeightSpinBox, 2, 2, 1, 2);

        mQualityLabel = new QLabel(groupBox);
        mQualityLabel->setObjectName(QString::fromUtf8("mQualityLabel"));

        gridLayout->addWidget(mQualityLabel, 3, 0, 1, 1);

        mQualitySlider = new QSlider(groupBox);
        mQualitySlider->setObjectName(QString::fromUtf8("mQualitySlider"));
        mQualitySlider->setMinimum(1);
        mQualitySlider->setMaximum(100);
        mQualitySlider->setValue(90);
        mQualitySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(mQualitySlider, 3, 2, 1, 1);

        mQualitySpinBox = new QSpinBox(groupBox);
        mQualitySpinBox->setObjectName(QString::fromUtf8("mQualitySpinBox"));
        mQualitySpinBox->setMinimum(1);
        mQualitySpinBox->setMaximum(100);
        mQualitySpinBox->setValue(90);

        gridLayout->addWidget(mQualitySpinBox, 3, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        mClipToContentGroupBox = new QgsCollapsibleGroupBoxBasic(QgsLayoutImageExportOptionsDialog);
        mClipToContentGroupBox->setObjectName(QString::fromUtf8("mClipToContentGroupBox"));
        mClipToContentGroupBox->setCheckable(true);
        mClipToContentGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(mClipToContentGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(mClipToContentGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        mLeftMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mLeftMarginSpinBox->setObjectName(QString::fromUtf8("mLeftMarginSpinBox"));
        mLeftMarginSpinBox->setMaximum(1000);

        horizontalLayout_7->addWidget(mLeftMarginSpinBox);

        label_11 = new QLabel(mClipToContentGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        mRightMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mRightMarginSpinBox->setObjectName(QString::fromUtf8("mRightMarginSpinBox"));
        mRightMarginSpinBox->setMaximum(1000);

        horizontalLayout_7->addWidget(mRightMarginSpinBox);


        gridLayout_5->addLayout(horizontalLayout_7, 1, 0, 1, 4);

        label_12 = new QLabel(mClipToContentGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 2, 1, 1, 1);

        label_4 = new QLabel(mClipToContentGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);

        mTopMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mTopMarginSpinBox->setObjectName(QString::fromUtf8("mTopMarginSpinBox"));
        mTopMarginSpinBox->setMaximum(1000);

        gridLayout_5->addWidget(mTopMarginSpinBox, 0, 2, 1, 1);

        mBottomMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mBottomMarginSpinBox->setObjectName(QString::fromUtf8("mBottomMarginSpinBox"));
        mBottomMarginSpinBox->setMaximum(1000);

        gridLayout_5->addWidget(mBottomMarginSpinBox, 2, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout_5);


        verticalLayout->addWidget(mClipToContentGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mHelpButtonBox = new QDialogButtonBox(QgsLayoutImageExportOptionsDialog);
        mHelpButtonBox->setObjectName(QString::fromUtf8("mHelpButtonBox"));
        mHelpButtonBox->setOrientation(Qt::Horizontal);
        mHelpButtonBox->setStandardButtons(QDialogButtonBox::Help);

        horizontalLayout_2->addWidget(mHelpButtonBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        mOpenAfterExportingCheckBox = new QCheckBox(QgsLayoutImageExportOptionsDialog);
        mOpenAfterExportingCheckBox->setObjectName(QString::fromUtf8("mOpenAfterExportingCheckBox"));

        horizontalLayout_2->addWidget(mOpenAfterExportingCheckBox);

        buttonBox = new QDialogButtonBox(QgsLayoutImageExportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(mResolutionSpinBox, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mQualitySlider);
        QWidget::setTabOrder(mQualitySlider, mQualitySpinBox);
        QWidget::setTabOrder(mQualitySpinBox, mAntialiasingCheckBox);
        QWidget::setTabOrder(mAntialiasingCheckBox, mGenerateWorldFile);
        QWidget::setTabOrder(mGenerateWorldFile, mClipToContentGroupBox);
        QWidget::setTabOrder(mClipToContentGroupBox, mTopMarginSpinBox);
        QWidget::setTabOrder(mTopMarginSpinBox, mLeftMarginSpinBox);
        QWidget::setTabOrder(mLeftMarginSpinBox, mRightMarginSpinBox);
        QWidget::setTabOrder(mRightMarginSpinBox, mBottomMarginSpinBox);
        QWidget::setTabOrder(mBottomMarginSpinBox, mOpenAfterExportingCheckBox);

        retranslateUi(QgsLayoutImageExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLayoutImageExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLayoutImageExportOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLayoutImageExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutImageExportOptionsDialog)
    {
        QgsLayoutImageExportOptionsDialog->setWindowTitle(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Image Export Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Export Options", nullptr));
#if QT_CONFIG(tooltip)
        mGenerateWorldFile->setToolTip(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "If checked, a separate world file which georeferences exported images will be created", nullptr));
#endif // QT_CONFIG(tooltip)
        mGenerateWorldFile->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Generate world file", nullptr));
        label_10->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Page width", nullptr));
        mWidthSpinBox->setSpecialValueText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Auto", nullptr));
        mWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", " px", nullptr));
        mWidthSpinBox->setPrefix(QString());
        label_9->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Export resolution", nullptr));
#if QT_CONFIG(tooltip)
        mAntialiasingCheckBox->setToolTip(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "If unchecked, the generated images will not be antialiased", nullptr));
#endif // QT_CONFIG(tooltip)
        mAntialiasingCheckBox->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Enable antialiasing", nullptr));
        mResolutionSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", " dpi", nullptr));
        mResolutionSpinBox->setPrefix(QString());
        label_13->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Page height", nullptr));
        mHeightSpinBox->setSpecialValueText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Auto", nullptr));
        mHeightSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", " px", nullptr));
        mHeightSpinBox->setPrefix(QString());
        mQualityLabel->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Quality", nullptr));
        mQualitySpinBox->setSuffix(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "%", nullptr));
        mClipToContentGroupBox->setTitle(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Crop to Content", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Left", nullptr));
        mLeftMarginSpinBox->setSuffix(QString());
        label_11->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Right", nullptr));
        mRightMarginSpinBox->setSuffix(QString());
        label_12->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Bottom", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Top margin (px)", nullptr));
        mTopMarginSpinBox->setSuffix(QString());
        mBottomMarginSpinBox->setSuffix(QString());
        mOpenAfterExportingCheckBox->setText(QCoreApplication::translate("QgsLayoutImageExportOptionsDialog", "Open file after exporting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutImageExportOptionsDialog: public Ui_QgsLayoutImageExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTIMAGEEXPORTOPTIONS_H
