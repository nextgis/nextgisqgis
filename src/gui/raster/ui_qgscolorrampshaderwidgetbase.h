/********************************************************************************
** Form generated from reading UI file 'qgscolorrampshaderwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOLORRAMPSHADERWIDGETBASE_H
#define UI_QGSCOLORRAMPSHADERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qgscolorrampbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsColorRampShaderWidgetBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mColormapTreeWidget;
    QgsColorRampButton *btnColorRamp;
    QLabel *mColorInterpolationLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mClassificationModeLabel;
    QComboBox *mClassificationModeComboBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *mNumberOfEntriesLabel;
    QgsSpinBox *mNumberOfEntriesSpinBox;
    QComboBox *mColorInterpolationComboBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mClassifyButton;
    QPushButton *mAddEntryButton;
    QPushButton *mDeleteEntryButton;
    QPushButton *mLoadFromBandButton;
    QPushButton *mLoadFromFileButton;
    QPushButton *mExportToFileButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *mLegendSettingsButton;
    QCheckBox *mClipCheckBox;
    QLineEdit *mUnitLineEdit;
    QLabel *mUnitLabel;
    QLabel *mColorInterpolationLabel_2;
    QLabel *mLabelPrecisionLabel;
    QgsSpinBox *mLabelPrecisionSpinBox;

    void setupUi(QWidget *QgsColorRampShaderWidgetBase)
    {
        if (QgsColorRampShaderWidgetBase->objectName().isEmpty())
            QgsColorRampShaderWidgetBase->setObjectName(QString::fromUtf8("QgsColorRampShaderWidgetBase"));
        QgsColorRampShaderWidgetBase->resize(397, 605);
        QgsColorRampShaderWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsColorRampShaderWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mColormapTreeWidget = new QTreeWidget(QgsColorRampShaderWidgetBase);
        mColormapTreeWidget->setObjectName(QString::fromUtf8("mColormapTreeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mColormapTreeWidget->sizePolicy().hasHeightForWidth());
        mColormapTreeWidget->setSizePolicy(sizePolicy);
        mColormapTreeWidget->setMinimumSize(QSize(0, 100));
        mColormapTreeWidget->header()->setMinimumSectionSize(10);
        mColormapTreeWidget->header()->setDefaultSectionSize(70);
        mColormapTreeWidget->header()->setStretchLastSection(true);

        gridLayout->addWidget(mColormapTreeWidget, 4, 0, 1, 3);

        btnColorRamp = new QgsColorRampButton(QgsColorRampShaderWidgetBase);
        btnColorRamp->setObjectName(QString::fromUtf8("btnColorRamp"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy1);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnColorRamp, 1, 1, 1, 2);

        mColorInterpolationLabel = new QLabel(QgsColorRampShaderWidgetBase);
        mColorInterpolationLabel->setObjectName(QString::fromUtf8("mColorInterpolationLabel"));

        gridLayout->addWidget(mColorInterpolationLabel, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mClassificationModeLabel = new QLabel(QgsColorRampShaderWidgetBase);
        mClassificationModeLabel->setObjectName(QString::fromUtf8("mClassificationModeLabel"));

        horizontalLayout_5->addWidget(mClassificationModeLabel);

        mClassificationModeComboBox = new QComboBox(QgsColorRampShaderWidgetBase);
        mClassificationModeComboBox->setObjectName(QString::fromUtf8("mClassificationModeComboBox"));

        horizontalLayout_5->addWidget(mClassificationModeComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        mNumberOfEntriesLabel = new QLabel(QgsColorRampShaderWidgetBase);
        mNumberOfEntriesLabel->setObjectName(QString::fromUtf8("mNumberOfEntriesLabel"));

        horizontalLayout_5->addWidget(mNumberOfEntriesLabel);

        mNumberOfEntriesSpinBox = new QgsSpinBox(QgsColorRampShaderWidgetBase);
        mNumberOfEntriesSpinBox->setObjectName(QString::fromUtf8("mNumberOfEntriesSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mNumberOfEntriesSpinBox->sizePolicy().hasHeightForWidth());
        mNumberOfEntriesSpinBox->setSizePolicy(sizePolicy2);
        mNumberOfEntriesSpinBox->setMinimum(2);
        mNumberOfEntriesSpinBox->setMaximum(255);
        mNumberOfEntriesSpinBox->setValue(5);

        horizontalLayout_5->addWidget(mNumberOfEntriesSpinBox);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 3);

        mColorInterpolationComboBox = new QComboBox(QgsColorRampShaderWidgetBase);
        mColorInterpolationComboBox->setObjectName(QString::fromUtf8("mColorInterpolationComboBox"));

        gridLayout->addWidget(mColorInterpolationComboBox, 0, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mClassifyButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mClassifyButton->setObjectName(QString::fromUtf8("mClassifyButton"));

        horizontalLayout_3->addWidget(mClassifyButton);

        mAddEntryButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mAddEntryButton->setObjectName(QString::fromUtf8("mAddEntryButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddEntryButton->setIcon(icon);

        horizontalLayout_3->addWidget(mAddEntryButton);

        mDeleteEntryButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mDeleteEntryButton->setObjectName(QString::fromUtf8("mDeleteEntryButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteEntryButton->setIcon(icon1);

        horizontalLayout_3->addWidget(mDeleteEntryButton);

        mLoadFromBandButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mLoadFromBandButton->setObjectName(QString::fromUtf8("mLoadFromBandButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionReload.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLoadFromBandButton->setIcon(icon2);

        horizontalLayout_3->addWidget(mLoadFromBandButton);

        mLoadFromFileButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mLoadFromFileButton->setObjectName(QString::fromUtf8("mLoadFromFileButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLoadFromFileButton->setIcon(icon3);

        horizontalLayout_3->addWidget(mLoadFromFileButton);

        mExportToFileButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mExportToFileButton->setObjectName(QString::fromUtf8("mExportToFileButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSaveAs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExportToFileButton->setIcon(icon4);

        horizontalLayout_3->addWidget(mExportToFileButton);

        horizontalSpacer = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        mLegendSettingsButton = new QPushButton(QgsColorRampShaderWidgetBase);
        mLegendSettingsButton->setObjectName(QString::fromUtf8("mLegendSettingsButton"));

        horizontalLayout_3->addWidget(mLegendSettingsButton);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 3);

        mClipCheckBox = new QCheckBox(QgsColorRampShaderWidgetBase);
        mClipCheckBox->setObjectName(QString::fromUtf8("mClipCheckBox"));

        gridLayout->addWidget(mClipCheckBox, 7, 0, 1, 3);

        mUnitLineEdit = new QLineEdit(QgsColorRampShaderWidgetBase);
        mUnitLineEdit->setObjectName(QString::fromUtf8("mUnitLineEdit"));

        gridLayout->addWidget(mUnitLineEdit, 2, 1, 1, 2);

        mUnitLabel = new QLabel(QgsColorRampShaderWidgetBase);
        mUnitLabel->setObjectName(QString::fromUtf8("mUnitLabel"));
        mUnitLabel->setWordWrap(true);

        gridLayout->addWidget(mUnitLabel, 2, 0, 1, 1);

        mColorInterpolationLabel_2 = new QLabel(QgsColorRampShaderWidgetBase);
        mColorInterpolationLabel_2->setObjectName(QString::fromUtf8("mColorInterpolationLabel_2"));

        gridLayout->addWidget(mColorInterpolationLabel_2, 1, 0, 1, 1);

        mLabelPrecisionLabel = new QLabel(QgsColorRampShaderWidgetBase);
        mLabelPrecisionLabel->setObjectName(QString::fromUtf8("mLabelPrecisionLabel"));

        gridLayout->addWidget(mLabelPrecisionLabel, 3, 0, 1, 1);

        mLabelPrecisionSpinBox = new QgsSpinBox(QgsColorRampShaderWidgetBase);
        mLabelPrecisionSpinBox->setObjectName(QString::fromUtf8("mLabelPrecisionSpinBox"));
        mLabelPrecisionSpinBox->setMinimum(-10);
        mLabelPrecisionSpinBox->setMaximum(16);
        mLabelPrecisionSpinBox->setValue(4);

        gridLayout->addWidget(mLabelPrecisionSpinBox, 3, 1, 1, 2);

        QWidget::setTabOrder(mColorInterpolationComboBox, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, mUnitLineEdit);
        QWidget::setTabOrder(mUnitLineEdit, mLabelPrecisionSpinBox);
        QWidget::setTabOrder(mLabelPrecisionSpinBox, mColormapTreeWidget);
        QWidget::setTabOrder(mColormapTreeWidget, mClassificationModeComboBox);
        QWidget::setTabOrder(mClassificationModeComboBox, mNumberOfEntriesSpinBox);
        QWidget::setTabOrder(mNumberOfEntriesSpinBox, mClassifyButton);
        QWidget::setTabOrder(mClassifyButton, mAddEntryButton);
        QWidget::setTabOrder(mAddEntryButton, mDeleteEntryButton);
        QWidget::setTabOrder(mDeleteEntryButton, mLoadFromBandButton);
        QWidget::setTabOrder(mLoadFromBandButton, mLoadFromFileButton);
        QWidget::setTabOrder(mLoadFromFileButton, mExportToFileButton);
        QWidget::setTabOrder(mExportToFileButton, mLegendSettingsButton);
        QWidget::setTabOrder(mLegendSettingsButton, mClipCheckBox);

        retranslateUi(QgsColorRampShaderWidgetBase);

        QMetaObject::connectSlotsByName(QgsColorRampShaderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsColorRampShaderWidgetBase)
    {
        QTreeWidgetItem *___qtreewidgetitem = mColormapTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Label", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Color", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Value", nullptr));
        mColorInterpolationLabel->setText(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Interpolation", nullptr));
        mClassificationModeLabel->setText(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Mode", nullptr));
        mNumberOfEntriesLabel->setText(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Classes", nullptr));
        mClassifyButton->setText(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Classify", nullptr));
#if QT_CONFIG(tooltip)
        mAddEntryButton->setToolTip(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Add values manually", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mDeleteEntryButton->setToolTip(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Remove selected row(s)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mLoadFromBandButton->setToolTip(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Load color map from band", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mLoadFromFileButton->setToolTip(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Load color map from file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mExportToFileButton->setToolTip(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Export color map to file", nullptr));
#endif // QT_CONFIG(tooltip)
        mLegendSettingsButton->setText(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Legend Settings\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mClipCheckBox->setToolTip(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "If checked, any pixels with a value out of range will not be rendered", nullptr));
#endif // QT_CONFIG(tooltip)
        mClipCheckBox->setText(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Clip out of range values", nullptr));
#if QT_CONFIG(tooltip)
        mUnitLineEdit->setToolTip(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Unit suffix", nullptr));
#endif // QT_CONFIG(tooltip)
        mUnitLabel->setText(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Label unit suffix", nullptr));
        mColorInterpolationLabel_2->setText(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Color ramp", nullptr));
        mLabelPrecisionLabel->setText(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Label precision", nullptr));
#if QT_CONFIG(tooltip)
        mLabelPrecisionSpinBox->setToolTip(QCoreApplication::translate("QgsColorRampShaderWidgetBase", "Precision of upper and lower values in label text.\n"
"Positive is number of decimal places\n"
"Negative rounds to powers of 10", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsColorRampShaderWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsColorRampShaderWidgetBase: public Ui_QgsColorRampShaderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOLORRAMPSHADERWIDGETBASE_H
