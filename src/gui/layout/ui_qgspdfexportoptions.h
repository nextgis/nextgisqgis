/********************************************************************************
** Form generated from reading UI file 'qgspdfexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPDFEXPORTOPTIONS_H
#define UI_QGSPDFEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPdfExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *mIncludeMetadataCheckbox;
    QComboBox *mComboImageCompression;
    QCheckBox *mForceVectorCheckBox;
    QLabel *label_6;
    QComboBox *mTextRenderFormatComboBox;
    QCheckBox *mAppendGeoreferenceCheckbox;
    QLabel *label_3;
    QgsCollapsibleGroupBoxBasic *mGeospatialPDFGroupBox;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *mGeospatialPDFOptionsStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QLabel *mGeospatialPdfUnavailableReason;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QgsCollapsibleGroupBoxBasic *mIncludeMapThemesCheck;
    QVBoxLayout *verticalLayout_4;
    QListWidget *mThemesList;
    QGroupBox *mExportGeospatialPdfFeaturesCheckBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QTreeView *mGeospatialPdfStructureTree;
    QgsCollapsibleGroupBoxBasic *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *mDisableRasterTilingCheckBox;
    QCheckBox *mSimplifyGeometriesCheckbox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *mHelpButtonBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mOpenAfterExportingCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPdfExportOptionsDialog)
    {
        if (QgsPdfExportOptionsDialog->objectName().isEmpty())
            QgsPdfExportOptionsDialog->setObjectName(QString::fromUtf8("QgsPdfExportOptionsDialog"));
        QgsPdfExportOptionsDialog->resize(565, 773);
        verticalLayout = new QVBoxLayout(QgsPdfExportOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QgsScrollArea(QgsPdfExportOptionsDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 533, 944));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mIncludeMetadataCheckbox = new QCheckBox(groupBox);
        mIncludeMetadataCheckbox->setObjectName(QString::fromUtf8("mIncludeMetadataCheckbox"));
        mIncludeMetadataCheckbox->setChecked(true);

        gridLayout->addWidget(mIncludeMetadataCheckbox, 2, 0, 1, 2);

        mComboImageCompression = new QComboBox(groupBox);
        mComboImageCompression->setObjectName(QString::fromUtf8("mComboImageCompression"));

        gridLayout->addWidget(mComboImageCompression, 5, 1, 1, 1);

        mForceVectorCheckBox = new QCheckBox(groupBox);
        mForceVectorCheckBox->setObjectName(QString::fromUtf8("mForceVectorCheckBox"));

        gridLayout->addWidget(mForceVectorCheckBox, 0, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        mTextRenderFormatComboBox = new QComboBox(groupBox);
        mTextRenderFormatComboBox->setObjectName(QString::fromUtf8("mTextRenderFormatComboBox"));

        gridLayout->addWidget(mTextRenderFormatComboBox, 4, 1, 1, 1);

        mAppendGeoreferenceCheckbox = new QCheckBox(groupBox);
        mAppendGeoreferenceCheckbox->setObjectName(QString::fromUtf8("mAppendGeoreferenceCheckbox"));
        mAppendGeoreferenceCheckbox->setChecked(true);

        gridLayout->addWidget(mAppendGeoreferenceCheckbox, 1, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_6->addWidget(groupBox);

        mGeospatialPDFGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGeospatialPDFGroupBox->setObjectName(QString::fromUtf8("mGeospatialPDFGroupBox"));
        mGeospatialPDFGroupBox->setCheckable(true);
        mGeospatialPDFGroupBox->setChecked(true);
        verticalLayout_2 = new QVBoxLayout(mGeospatialPDFGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mGeospatialPDFOptionsStackedWidget = new QStackedWidget(mGeospatialPDFGroupBox);
        mGeospatialPDFOptionsStackedWidget->setObjectName(QString::fromUtf8("mGeospatialPDFOptionsStackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGeospatialPDFOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mGeospatialPDFOptionsStackedWidget->setSizePolicy(sizePolicy);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mGeospatialPdfUnavailableReason = new QLabel(page);
        mGeospatialPdfUnavailableReason->setObjectName(QString::fromUtf8("mGeospatialPdfUnavailableReason"));

        verticalLayout_3->addWidget(mGeospatialPdfUnavailableReason);

        mGeospatialPDFOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mIncludeMapThemesCheck = new QgsCollapsibleGroupBoxBasic(page_2);
        mIncludeMapThemesCheck->setObjectName(QString::fromUtf8("mIncludeMapThemesCheck"));
        mIncludeMapThemesCheck->setCheckable(true);
        mIncludeMapThemesCheck->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(mIncludeMapThemesCheck);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mThemesList = new QListWidget(mIncludeMapThemesCheck);
        mThemesList->setObjectName(QString::fromUtf8("mThemesList"));

        verticalLayout_4->addWidget(mThemesList);


        gridLayout_3->addWidget(mIncludeMapThemesCheck, 1, 0, 1, 2);

        mExportGeospatialPdfFeaturesCheckBox = new QGroupBox(page_2);
        mExportGeospatialPdfFeaturesCheckBox->setObjectName(QString::fromUtf8("mExportGeospatialPdfFeaturesCheckBox"));
        mExportGeospatialPdfFeaturesCheckBox->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(mExportGeospatialPdfFeaturesCheckBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(mExportGeospatialPdfFeaturesCheckBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_5->addWidget(label_2);

        mGeospatialPdfStructureTree = new QTreeView(mExportGeospatialPdfFeaturesCheckBox);
        mGeospatialPdfStructureTree->setObjectName(QString::fromUtf8("mGeospatialPdfStructureTree"));
        mGeospatialPdfStructureTree->setHeaderHidden(true);

        verticalLayout_5->addWidget(mGeospatialPdfStructureTree);


        gridLayout_3->addWidget(mExportGeospatialPdfFeaturesCheckBox, 2, 0, 1, 2);

        gridLayout_3->setRowStretch(2, 2);
        gridLayout_3->setRowStretch(3, 5);
        mGeospatialPDFOptionsStackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(mGeospatialPDFOptionsStackedWidget);


        verticalLayout_6->addWidget(mGeospatialPDFGroupBox);

        groupBox_2 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDisableRasterTilingCheckBox = new QCheckBox(groupBox_2);
        mDisableRasterTilingCheckBox->setObjectName(QString::fromUtf8("mDisableRasterTilingCheckBox"));
        mDisableRasterTilingCheckBox->setChecked(false);

        gridLayout_2->addWidget(mDisableRasterTilingCheckBox, 0, 0, 1, 2);

        mSimplifyGeometriesCheckbox = new QCheckBox(groupBox_2);
        mSimplifyGeometriesCheckbox->setObjectName(QString::fromUtf8("mSimplifyGeometriesCheckbox"));
        mSimplifyGeometriesCheckbox->setChecked(true);

        gridLayout_2->addWidget(mSimplifyGeometriesCheckbox, 1, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(6, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(horizontalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mHelpButtonBox = new QDialogButtonBox(QgsPdfExportOptionsDialog);
        mHelpButtonBox->setObjectName(QString::fromUtf8("mHelpButtonBox"));
        mHelpButtonBox->setOrientation(Qt::Horizontal);
        mHelpButtonBox->setStandardButtons(QDialogButtonBox::Help);

        horizontalLayout->addWidget(mHelpButtonBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mOpenAfterExportingCheckBox = new QCheckBox(QgsPdfExportOptionsDialog);
        mOpenAfterExportingCheckBox->setObjectName(QString::fromUtf8("mOpenAfterExportingCheckBox"));

        horizontalLayout->addWidget(mOpenAfterExportingCheckBox);

        buttonBox = new QDialogButtonBox(QgsPdfExportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(scrollArea, mForceVectorCheckBox);
        QWidget::setTabOrder(mForceVectorCheckBox, mAppendGeoreferenceCheckbox);
        QWidget::setTabOrder(mAppendGeoreferenceCheckbox, mIncludeMetadataCheckbox);
        QWidget::setTabOrder(mIncludeMetadataCheckbox, mTextRenderFormatComboBox);
        QWidget::setTabOrder(mTextRenderFormatComboBox, mComboImageCompression);
        QWidget::setTabOrder(mComboImageCompression, mGeospatialPDFGroupBox);
        QWidget::setTabOrder(mGeospatialPDFGroupBox, mIncludeMapThemesCheck);
        QWidget::setTabOrder(mIncludeMapThemesCheck, mThemesList);
        QWidget::setTabOrder(mThemesList, mGeospatialPdfStructureTree);
        QWidget::setTabOrder(mGeospatialPdfStructureTree, mSimplifyGeometriesCheckbox);
        QWidget::setTabOrder(mSimplifyGeometriesCheckbox, mDisableRasterTilingCheckBox);

        retranslateUi(QgsPdfExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPdfExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPdfExportOptionsDialog, SLOT(reject()));

        mGeospatialPDFOptionsStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsPdfExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsPdfExportOptionsDialog)
    {
        QgsPdfExportOptionsDialog->setWindowTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "PDF Export Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Export Options", nullptr));
        mIncludeMetadataCheckbox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Export RDF metadata (title, author, etc.)", nullptr));
#if QT_CONFIG(tooltip)
        mForceVectorCheckBox->setToolTip(QCoreApplication::translate("QgsPdfExportOptionsDialog", "If checked, the layout will always be kept as vector objects when exported to a compatible format, even if the appearance of the resultant file does not match the layouts settings. If unchecked, some elements in the layout may be rasterized in order to keep their appearance intact.", nullptr));
#endif // QT_CONFIG(tooltip)
        mForceVectorCheckBox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Always export as vectors", nullptr));
        label_6->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Text export", nullptr));
        mAppendGeoreferenceCheckbox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Append georeference information", nullptr));
        label_3->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Image compression", nullptr));
        mGeospatialPDFGroupBox->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Create Geospatial PDF", nullptr));
        mGeospatialPdfUnavailableReason->setText(QString());
        mIncludeMapThemesCheck->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Include multiple map themes", nullptr));
        mExportGeospatialPdfFeaturesCheckBox->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Layer Structure", nullptr));
        label_2->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Uncheck layers to avoid exporting vector feature information for those layers, and optionally set the group name to allow multiple layers to be joined into a single logical PDF group. Layers can be dragged and dropped to rearrange their order in the generated Geospatial PDF table of contents.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Advanced Options", nullptr));
#if QT_CONFIG(tooltip)
        mDisableRasterTilingCheckBox->setToolTip(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Disables tiled rendering of raster layers. This setting may improve the export quality in some circumstances, at the cost of much greater memory usage during exports.", nullptr));
#endif // QT_CONFIG(tooltip)
        mDisableRasterTilingCheckBox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Disable tiled raster layer exports", nullptr));
        mSimplifyGeometriesCheckbox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Simplify geometries to reduce output file size", nullptr));
        mOpenAfterExportingCheckBox->setText(QCoreApplication::translate("QgsPdfExportOptionsDialog", "Open file after exporting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPdfExportOptionsDialog: public Ui_QgsPdfExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPDFEXPORTOPTIONS_H
