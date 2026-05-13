/********************************************************************************
** Form generated from reading UI file 'qgsdxfexportdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDXFEXPORTDIALOGBASE_H
#define UI_QGSDXFEXPORTDIALOGBASE_H

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
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDxfExportDialogBase
{
public:
    QVBoxLayout *mainLayout;
    QGridLayout *gridLayout_2;
    QLabel *mSaveAsLabel;
    QgsFileWidget *mFileName;
    QLabel *mSymbologyModeLabel;
    QComboBox *mSymbologyModeComboBox;
    QLabel *mSymbologyScaleLabel;
    QgsScaleWidget *mScaleWidget;
    QLabel *label;
    QComboBox *mEncoding;
    QLabel *label_3;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *mSymbologyScaleLabel_2;
    QComboBox *mVisibilityPresets;
    QWidget *mTreeViewContainer;
    QHBoxLayout *mTreeViewLayout;
    QGridLayout *gridLayout_3;
    QPushButton *mSelectAllButton;
    QPushButton *mDeselectAllButton;
    QPushButton *mSelectDataDefinedBlocks;
    QPushButton *mDeselectDataDefinedBlocks;
    QGridLayout *gridLayout;
    QCheckBox *mMapExtentCheckBox;
    QCheckBox *mLayerTitleAsName;
    QCheckBox *mForce2d;
    QCheckBox *mMTextCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mSelectedFeaturesOnly;
    QCheckBox *mHairlineWidthExportCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDxfExportDialogBase)
    {
        if (QgsDxfExportDialogBase->objectName().isEmpty())
            QgsDxfExportDialogBase->setObjectName(QString::fromUtf8("QgsDxfExportDialogBase"));
        QgsDxfExportDialogBase->resize(716, 680);
        mainLayout = new QVBoxLayout(QgsDxfExportDialogBase);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mSaveAsLabel = new QLabel(QgsDxfExportDialogBase);
        mSaveAsLabel->setObjectName(QString::fromUtf8("mSaveAsLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSaveAsLabel->sizePolicy().hasHeightForWidth());
        mSaveAsLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSaveAsLabel, 0, 0, 1, 1);

        mFileName = new QgsFileWidget(QgsDxfExportDialogBase);
        mFileName->setObjectName(QString::fromUtf8("mFileName"));

        gridLayout_2->addWidget(mFileName, 0, 1, 1, 1);

        mSymbologyModeLabel = new QLabel(QgsDxfExportDialogBase);
        mSymbologyModeLabel->setObjectName(QString::fromUtf8("mSymbologyModeLabel"));
        sizePolicy.setHeightForWidth(mSymbologyModeLabel->sizePolicy().hasHeightForWidth());
        mSymbologyModeLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSymbologyModeLabel, 1, 0, 1, 1);

        mSymbologyModeComboBox = new QComboBox(QgsDxfExportDialogBase);
        mSymbologyModeComboBox->setObjectName(QString::fromUtf8("mSymbologyModeComboBox"));

        gridLayout_2->addWidget(mSymbologyModeComboBox, 1, 1, 1, 1);

        mSymbologyScaleLabel = new QLabel(QgsDxfExportDialogBase);
        mSymbologyScaleLabel->setObjectName(QString::fromUtf8("mSymbologyScaleLabel"));
        sizePolicy.setHeightForWidth(mSymbologyScaleLabel->sizePolicy().hasHeightForWidth());
        mSymbologyScaleLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSymbologyScaleLabel, 2, 0, 1, 1);

        mScaleWidget = new QgsScaleWidget(QgsDxfExportDialogBase);
        mScaleWidget->setObjectName(QString::fromUtf8("mScaleWidget"));
        mScaleWidget->setFocusPolicy(Qt::StrongFocus);
        mScaleWidget->setProperty("showCurrentScaleButton", QVariant(true));

        gridLayout_2->addWidget(mScaleWidget, 2, 1, 1, 1);

        label = new QLabel(QgsDxfExportDialogBase);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        mEncoding = new QComboBox(QgsDxfExportDialogBase);
        mEncoding->setObjectName(QString::fromUtf8("mEncoding"));

        gridLayout_2->addWidget(mEncoding, 3, 1, 1, 1);

        label_3 = new QLabel(QgsDxfExportDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsDxfExportDialogBase);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mCrsSelector, 4, 1, 1, 1);

        mSymbologyScaleLabel_2 = new QLabel(QgsDxfExportDialogBase);
        mSymbologyScaleLabel_2->setObjectName(QString::fromUtf8("mSymbologyScaleLabel_2"));
        sizePolicy.setHeightForWidth(mSymbologyScaleLabel_2->sizePolicy().hasHeightForWidth());
        mSymbologyScaleLabel_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSymbologyScaleLabel_2, 5, 0, 1, 1);

        mVisibilityPresets = new QComboBox(QgsDxfExportDialogBase);
        mVisibilityPresets->setObjectName(QString::fromUtf8("mVisibilityPresets"));

        gridLayout_2->addWidget(mVisibilityPresets, 5, 1, 1, 1);

        mTreeViewContainer = new QWidget(QgsDxfExportDialogBase);
        mTreeViewContainer->setObjectName(QString::fromUtf8("mTreeViewContainer"));
        mTreeViewLayout = new QHBoxLayout(mTreeViewContainer);
        mTreeViewLayout->setObjectName(QString::fromUtf8("mTreeViewLayout"));
        mTreeViewLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout_2->addWidget(mTreeViewContainer, 7, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mSelectAllButton = new QPushButton(QgsDxfExportDialogBase);
        mSelectAllButton->setObjectName(QString::fromUtf8("mSelectAllButton"));

        gridLayout_3->addWidget(mSelectAllButton, 0, 0, 1, 1);

        mDeselectAllButton = new QPushButton(QgsDxfExportDialogBase);
        mDeselectAllButton->setObjectName(QString::fromUtf8("mDeselectAllButton"));

        gridLayout_3->addWidget(mDeselectAllButton, 0, 1, 1, 1);

        mSelectDataDefinedBlocks = new QPushButton(QgsDxfExportDialogBase);
        mSelectDataDefinedBlocks->setObjectName(QString::fromUtf8("mSelectDataDefinedBlocks"));

        gridLayout_3->addWidget(mSelectDataDefinedBlocks, 0, 2, 1, 1);

        mDeselectDataDefinedBlocks = new QPushButton(QgsDxfExportDialogBase);
        mDeselectDataDefinedBlocks->setObjectName(QString::fromUtf8("mDeselectDataDefinedBlocks"));

        gridLayout_3->addWidget(mDeselectDataDefinedBlocks, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 9, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mMapExtentCheckBox = new QCheckBox(QgsDxfExportDialogBase);
        mMapExtentCheckBox->setObjectName(QString::fromUtf8("mMapExtentCheckBox"));

        gridLayout->addWidget(mMapExtentCheckBox, 1, 0, 1, 1);

        mLayerTitleAsName = new QCheckBox(QgsDxfExportDialogBase);
        mLayerTitleAsName->setObjectName(QString::fromUtf8("mLayerTitleAsName"));

        gridLayout->addWidget(mLayerTitleAsName, 0, 0, 1, 1);

        mForce2d = new QCheckBox(QgsDxfExportDialogBase);
        mForce2d->setObjectName(QString::fromUtf8("mForce2d"));

        gridLayout->addWidget(mForce2d, 2, 0, 1, 1);

        mMTextCheckBox = new QCheckBox(QgsDxfExportDialogBase);
        mMTextCheckBox->setObjectName(QString::fromUtf8("mMTextCheckBox"));
        mMTextCheckBox->setChecked(true);

        gridLayout->addWidget(mMTextCheckBox, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        mSelectedFeaturesOnly = new QCheckBox(QgsDxfExportDialogBase);
        mSelectedFeaturesOnly->setObjectName(QString::fromUtf8("mSelectedFeaturesOnly"));

        gridLayout->addWidget(mSelectedFeaturesOnly, 1, 1, 1, 1);

        mHairlineWidthExportCheckBox = new QCheckBox(QgsDxfExportDialogBase);
        mHairlineWidthExportCheckBox->setObjectName(QString::fromUtf8("mHairlineWidthExportCheckBox"));

        gridLayout->addWidget(mHairlineWidthExportCheckBox, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 11, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsDxfExportDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 15, 0, 1, 2);


        mainLayout->addLayout(gridLayout_2);

        QWidget::setTabOrder(mFileName, mSymbologyModeComboBox);
        QWidget::setTabOrder(mSymbologyModeComboBox, mScaleWidget);
        QWidget::setTabOrder(mScaleWidget, mEncoding);
        QWidget::setTabOrder(mEncoding, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mVisibilityPresets);
        QWidget::setTabOrder(mVisibilityPresets, mSelectAllButton);
        QWidget::setTabOrder(mSelectAllButton, mDeselectAllButton);
        QWidget::setTabOrder(mDeselectAllButton, mSelectDataDefinedBlocks);
        QWidget::setTabOrder(mSelectDataDefinedBlocks, mDeselectDataDefinedBlocks);
        QWidget::setTabOrder(mDeselectDataDefinedBlocks, mLayerTitleAsName);
        QWidget::setTabOrder(mLayerTitleAsName, mMTextCheckBox);
        QWidget::setTabOrder(mMTextCheckBox, mMapExtentCheckBox);
        QWidget::setTabOrder(mMapExtentCheckBox, mSelectedFeaturesOnly);
        QWidget::setTabOrder(mSelectedFeaturesOnly, mForce2d);
        QWidget::setTabOrder(mForce2d, buttonBox);

        retranslateUi(QgsDxfExportDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDxfExportDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDxfExportDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDxfExportDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDxfExportDialogBase)
    {
        QgsDxfExportDialogBase->setWindowTitle(QCoreApplication::translate("QgsDxfExportDialogBase", "DXF Export", nullptr));
        mSaveAsLabel->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Save as", nullptr));
        mSymbologyModeLabel->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Symbology mode", nullptr));
        mSymbologyScaleLabel->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Symbology scale", nullptr));
        label->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Encoding", nullptr));
        label_3->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "CRS", nullptr));
        mSymbologyScaleLabel_2->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Map themes", nullptr));
        mSelectAllButton->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Select All Layers", nullptr));
        mDeselectAllButton->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Deselect All Layers", nullptr));
        mSelectDataDefinedBlocks->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Select Data Defined Blocks", nullptr));
        mDeselectDataDefinedBlocks->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Deselect Data Defined Blocks", nullptr));
        mMapExtentCheckBox->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Export features intersecting the current map extent", nullptr));
#if QT_CONFIG(tooltip)
        mLayerTitleAsName->setToolTip(QCoreApplication::translate("QgsDxfExportDialogBase", "If no attribute is chosen and layer name is not being overridden, prefer layer title (set in layer properties) to layer name.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerTitleAsName->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Use layer title as name if set", nullptr));
        mForce2d->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Force 2d output (eg. to support polyline width)", nullptr));
        mMTextCheckBox->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Export labels as MTEXT elements", nullptr));
        mSelectedFeaturesOnly->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Use only selected features", nullptr));
        mHairlineWidthExportCheckBox->setText(QCoreApplication::translate("QgsDxfExportDialogBase", "Export lines with zero width", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDxfExportDialogBase: public Ui_QgsDxfExportDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDXFEXPORTDIALOGBASE_H
