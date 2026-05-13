/********************************************************************************
** Form generated from reading UI file 'qgstransformsettingsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTRANSFORMSETTINGSDIALOGBASE_H
#define UI_QGSTRANSFORMSETTINGSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <georeferencer/qgsvalidateddoublespinbox.h>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsrasterformatsaveoptionswidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTransformSettingsDialog
{
public:
    QGridLayout *gridLayout_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QComboBox *cmbTransformType;
    QLabel *label_3;
    QgsProjectionSelectionWidget *mCrsSelector;
    QCheckBox *cbxLoadInProjectsWhenDone;
    QCheckBox *saveGcpCheckBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QLabel *label_7;
    QgsFileWidget *mPdfReport;
    QgsFileWidget *mPdfMap;
    QGroupBox *mOutputSettingsGroupBox;
    QVBoxLayout *verticalLayout;
    QStackedWidget *mOutputSettingsStackedWidget;
    QWidget *mRasterOutputSettings;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *mWorldFileCheckBox;
    QLabel *textLabel1;
    QGroupBox *cbxUserResolution;
    QGridLayout *gridLayout_3;
    QgsValidatedDoubleSpinBox *dsbVerticalRes;
    QLabel *label_4;
    QLabel *label_5;
    QgsValidatedDoubleSpinBox *dsbHorizRes;
    QCheckBox *cbxZeroAsTrans;
    QgsFileWidget *mRasterOutputFile;
    QgsCollapsibleGroupBox *mCreationOptionsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QgsRasterFormatSaveOptionsWidget *mCreationOptionsWidget;
    QComboBox *cmbResampling;
    QWidget *mVectorOutputSettings;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QgsFileWidget *mVectorOutputFile;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsTransformSettingsDialog)
    {
        if (QgsTransformSettingsDialog->objectName().isEmpty())
            QgsTransformSettingsDialog->setObjectName(QString::fromUtf8("QgsTransformSettingsDialog"));
        QgsTransformSettingsDialog->resize(438, 646);
        gridLayout_2 = new QGridLayout(QgsTransformSettingsDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, -1);
        scrollArea = new QgsScrollArea(QgsTransformSettingsDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 438, 600));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        cmbTransformType = new QComboBox(groupBox);
        cmbTransformType->setObjectName(QString::fromUtf8("cmbTransformType"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbTransformType->sizePolicy().hasHeightForWidth());
        cmbTransformType->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(cmbTransformType, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(groupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 1, 1, 1, 1);


        gridLayout_7->addWidget(groupBox, 0, 0, 1, 1);

        cbxLoadInProjectsWhenDone = new QCheckBox(scrollAreaWidgetContents);
        cbxLoadInProjectsWhenDone->setObjectName(QString::fromUtf8("cbxLoadInProjectsWhenDone"));

        gridLayout_7->addWidget(cbxLoadInProjectsWhenDone, 4, 0, 1, 1);

        saveGcpCheckBox = new QCheckBox(scrollAreaWidgetContents);
        saveGcpCheckBox->setObjectName(QString::fromUtf8("saveGcpCheckBox"));

        gridLayout_7->addWidget(saveGcpCheckBox, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);

        mPdfReport = new QgsFileWidget(groupBox_3);
        mPdfReport->setObjectName(QString::fromUtf8("mPdfReport"));

        gridLayout_6->addWidget(mPdfReport, 1, 1, 1, 1);

        mPdfMap = new QgsFileWidget(groupBox_3);
        mPdfMap->setObjectName(QString::fromUtf8("mPdfMap"));

        gridLayout_6->addWidget(mPdfMap, 0, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 2, 0, 1, 1);

        mOutputSettingsGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mOutputSettingsGroupBox->setObjectName(QString::fromUtf8("mOutputSettingsGroupBox"));
        verticalLayout = new QVBoxLayout(mOutputSettingsGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOutputSettingsStackedWidget = new QStackedWidget(mOutputSettingsGroupBox);
        mOutputSettingsStackedWidget->setObjectName(QString::fromUtf8("mOutputSettingsStackedWidget"));
        mRasterOutputSettings = new QWidget();
        mRasterOutputSettings->setObjectName(QString::fromUtf8("mRasterOutputSettings"));
        gridLayout = new QGridLayout(mRasterOutputSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(mRasterOutputSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mWorldFileCheckBox = new QCheckBox(mRasterOutputSettings);
        mWorldFileCheckBox->setObjectName(QString::fromUtf8("mWorldFileCheckBox"));

        gridLayout->addWidget(mWorldFileCheckBox, 4, 0, 1, 2);

        textLabel1 = new QLabel(mRasterOutputSettings);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textLabel1, 2, 0, 1, 1);

        cbxUserResolution = new QGroupBox(mRasterOutputSettings);
        cbxUserResolution->setObjectName(QString::fromUtf8("cbxUserResolution"));
        cbxUserResolution->setCheckable(true);
        cbxUserResolution->setChecked(false);
        gridLayout_3 = new QGridLayout(cbxUserResolution);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        dsbVerticalRes = new QgsValidatedDoubleSpinBox(cbxUserResolution);
        dsbVerticalRes->setObjectName(QString::fromUtf8("dsbVerticalRes"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dsbVerticalRes->sizePolicy().hasHeightForWidth());
        dsbVerticalRes->setSizePolicy(sizePolicy2);
        dsbVerticalRes->setFrame(true);
        dsbVerticalRes->setDecimals(5);
        dsbVerticalRes->setMinimum(-999999.000000000000000);
        dsbVerticalRes->setMaximum(0.000000000000000);

        gridLayout_3->addWidget(dsbVerticalRes, 1, 1, 1, 1);

        label_4 = new QLabel(cbxUserResolution);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(cbxUserResolution);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        dsbHorizRes = new QgsValidatedDoubleSpinBox(cbxUserResolution);
        dsbHorizRes->setObjectName(QString::fromUtf8("dsbHorizRes"));
        dsbHorizRes->setDecimals(5);
        dsbHorizRes->setMinimum(0.000000000000000);
        dsbHorizRes->setMaximum(999999.000000000000000);

        gridLayout_3->addWidget(dsbHorizRes, 0, 1, 1, 1);


        gridLayout->addWidget(cbxUserResolution, 6, 0, 1, 2);

        cbxZeroAsTrans = new QCheckBox(mRasterOutputSettings);
        cbxZeroAsTrans->setObjectName(QString::fromUtf8("cbxZeroAsTrans"));
        cbxZeroAsTrans->setChecked(false);

        gridLayout->addWidget(cbxZeroAsTrans, 5, 0, 1, 2);

        mRasterOutputFile = new QgsFileWidget(mRasterOutputSettings);
        mRasterOutputFile->setObjectName(QString::fromUtf8("mRasterOutputFile"));

        gridLayout->addWidget(mRasterOutputFile, 1, 1, 1, 1);

        mCreationOptionsGroupBox = new QgsCollapsibleGroupBox(mRasterOutputSettings);
        mCreationOptionsGroupBox->setObjectName(QString::fromUtf8("mCreationOptionsGroupBox"));
        mCreationOptionsGroupBox->setCheckable(true);
        mCreationOptionsGroupBox->setChecked(false);
        mCreationOptionsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout_2 = new QVBoxLayout(mCreationOptionsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mCreationOptionsWidget = new QgsRasterFormatSaveOptionsWidget(mCreationOptionsGroupBox);
        mCreationOptionsWidget->setObjectName(QString::fromUtf8("mCreationOptionsWidget"));

        verticalLayout_2->addWidget(mCreationOptionsWidget);


        gridLayout->addWidget(mCreationOptionsGroupBox, 3, 0, 1, 2);

        cmbResampling = new QComboBox(mRasterOutputSettings);
        cmbResampling->setObjectName(QString::fromUtf8("cmbResampling"));

        gridLayout->addWidget(cmbResampling, 2, 1, 1, 1);

        mOutputSettingsStackedWidget->addWidget(mRasterOutputSettings);
        mVectorOutputSettings = new QWidget();
        mVectorOutputSettings->setObjectName(QString::fromUtf8("mVectorOutputSettings"));
        gridLayout_5 = new QGridLayout(mVectorOutputSettings);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(mVectorOutputSettings);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        mVectorOutputFile = new QgsFileWidget(mVectorOutputSettings);
        mVectorOutputFile->setObjectName(QString::fromUtf8("mVectorOutputFile"));

        gridLayout_5->addWidget(mVectorOutputFile, 0, 1, 1, 1);

        mOutputSettingsStackedWidget->addWidget(mVectorOutputSettings);

        verticalLayout->addWidget(mOutputSettingsStackedWidget);


        gridLayout_7->addWidget(mOutputSettingsGroupBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(verticalSpacer, 5, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsTransformSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        gridLayout_2->addWidget(buttonBox, 4, 0, 1, 1);

#if QT_CONFIG(shortcut)
        textLabel1->setBuddy(cmbResampling);
#endif // QT_CONFIG(shortcut)

        retranslateUi(QgsTransformSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsTransformSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsTransformSettingsDialog, SLOT(reject()));

        mOutputSettingsStackedWidget->setCurrentIndex(0);
        cmbResampling->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsTransformSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsTransformSettingsDialog)
    {
        QgsTransformSettingsDialog->setWindowTitle(QCoreApplication::translate("QgsTransformSettingsDialog", "Transformation Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsTransformSettingsDialog", "Transformation Parameters", nullptr));
        label->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Transformation type", nullptr));
        label_3->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Target CRS", nullptr));
        cbxLoadInProjectsWhenDone->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Load in project when done", nullptr));
        saveGcpCheckBox->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Save GCP points", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsTransformSettingsDialog", "Reports", nullptr));
        label_6->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Generate PDF report", nullptr));
        label_7->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Generate PDF map", nullptr));
        mOutputSettingsGroupBox->setTitle(QCoreApplication::translate("QgsTransformSettingsDialog", "Output Settings", nullptr));
        label_2->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Output file", nullptr));
        mWorldFileCheckBox->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Create world file only (linear transforms)", nullptr));
        textLabel1->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Resampling method", nullptr));
        cbxUserResolution->setTitle(QCoreApplication::translate("QgsTransformSettingsDialog", "Set target resolution", nullptr));
        label_4->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Horizontal", nullptr));
        label_5->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Vertical", nullptr));
        cbxZeroAsTrans->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Use 0 for transparency when needed", nullptr));
        mCreationOptionsGroupBox->setTitle(QCoreApplication::translate("QgsTransformSettingsDialog", "Raster creation options", nullptr));
        label_8->setText(QCoreApplication::translate("QgsTransformSettingsDialog", "Output file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTransformSettingsDialog: public Ui_QgsTransformSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTRANSFORMSETTINGSDIALOGBASE_H
