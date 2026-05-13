/********************************************************************************
** Form generated from reading UI file 'qgspointcloudlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDLAYERPROPERTIESBASE_H
#define UI_QGSPOINTCLOUDLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsfilterlineedit.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalerangewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_Information;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *mInformationTextBrowser;
    QWidget *mOptsPage_Source;
    QVBoxLayout *verticalLayout_9;
    QgsCollapsibleGroupBox *groupBox_60;
    QVBoxLayout *verticalLayout_260;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_6;
    QLineEdit *mLayerOrigNameLineEdit;
    QgsCollapsibleGroupBox *mCrsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_7;
    QFrame *line_2;
    QgsCollapsibleGroupBox *mSubsetGroupBox;
    QGridLayout *gridLayout_2;
    QPushButton *pbnQueryBuilder;
    QSpacerItem *horizontalSpacer;
    QgsCodeEditorSQL *txtSubsetSQL;
    QSpacerItem *verticalSpacer;
    QWidget *mOptsPage_Rendering;
    QVBoxLayout *verticalLayout_10;
    QgsCollapsibleGroupBox *chkUseScaleDependentRendering;
    QGridLayout *_5;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QSpacerItem *verticalSpacer_2;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_5;
    QFrame *metadataFrame;
    QWidget *mOptsPage_Statistics;
    QVBoxLayout *verticalLayout_6;
    QgsCollapsibleGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QTableView *mStatisticsTableView;
    QgsCollapsibleGroupBox *mClassificationStatsGroupBox;
    QVBoxLayout *verticalLayout_8;
    QTableView *mClassificationStatisticsTableView;
    QLabel *mStatisticsCalculationWarningLabel;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPointCloudLayerPropertiesBase)
    {
        if (QgsPointCloudLayerPropertiesBase->objectName().isEmpty())
            QgsPointCloudLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsPointCloudLayerPropertiesBase"));
        QgsPointCloudLayerPropertiesBase->resize(815, 557);
        QgsPointCloudLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsPointCloudLayerPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        mOptionsSplitter = new QSplitter(QgsPointCloudLayerPropertiesBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QString::fromUtf8("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/algorithms/mAlgorithmBasicStatistics.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptionsStackedWidget->setFrameShadow(QFrame::Plain);
        mOptsPage_Information = new QWidget();
        mOptsPage_Information->setObjectName(QString::fromUtf8("mOptsPage_Information"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mInformationTextBrowser = new QTextBrowser(mOptsPage_Information);
        mInformationTextBrowser->setObjectName(QString::fromUtf8("mInformationTextBrowser"));

        verticalLayout_4->addWidget(mInformationTextBrowser);

        mOptionsStackedWidget->addWidget(mOptsPage_Information);
        mOptsPage_Source = new QWidget();
        mOptsPage_Source->setObjectName(QString::fromUtf8("mOptsPage_Source"));
        verticalLayout_9 = new QVBoxLayout(mOptsPage_Source);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        groupBox_60 = new QgsCollapsibleGroupBox(mOptsPage_Source);
        groupBox_60->setObjectName(QString::fromUtf8("groupBox_60"));
        verticalLayout_260 = new QVBoxLayout(groupBox_60);
        verticalLayout_260->setObjectName(QString::fromUtf8("verticalLayout_260"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_6 = new QLabel(groupBox_60);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_13->addWidget(label_6);

        mLayerOrigNameLineEdit = new QLineEdit(groupBox_60);
        mLayerOrigNameLineEdit->setObjectName(QString::fromUtf8("mLayerOrigNameLineEdit"));

        horizontalLayout_13->addWidget(mLayerOrigNameLineEdit);


        verticalLayout_260->addLayout(horizontalLayout_13);


        verticalLayout_9->addWidget(groupBox_60);

        mCrsGroupBox = new QgsCollapsibleGroupBox(mOptsPage_Source);
        mCrsGroupBox->setObjectName(QString::fromUtf8("mCrsGroupBox"));
        mCrsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mCrsGroupBox->setCheckable(false);
        mCrsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        verticalLayout_28 = new QVBoxLayout(mCrsGroupBox);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        mCrsSelector = new QgsProjectionSelectionWidget(mCrsGroupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_28->addWidget(mCrsSelector);

        label_7 = new QLabel(mCrsGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setTextFormat(Qt::RichText);
        label_7->setWordWrap(true);

        verticalLayout_28->addWidget(label_7);

        line_2 = new QFrame(mCrsGroupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_2);


        verticalLayout_9->addWidget(mCrsGroupBox);

        mSubsetGroupBox = new QgsCollapsibleGroupBox(mOptsPage_Source);
        mSubsetGroupBox->setObjectName(QString::fromUtf8("mSubsetGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(mSubsetGroupBox->sizePolicy().hasHeightForWidth());
        mSubsetGroupBox->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(mSubsetGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pbnQueryBuilder = new QPushButton(mSubsetGroupBox);
        pbnQueryBuilder->setObjectName(QString::fromUtf8("pbnQueryBuilder"));

        gridLayout_2->addWidget(pbnQueryBuilder, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        txtSubsetSQL = new QgsCodeEditorSQL(mSubsetGroupBox);
        txtSubsetSQL->setObjectName(QString::fromUtf8("txtSubsetSQL"));

        gridLayout_2->addWidget(txtSubsetSQL, 0, 0, 1, 2);


        verticalLayout_9->addWidget(mSubsetGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        mOptionsStackedWidget->addWidget(mOptsPage_Source);
        mOptsPage_Rendering = new QWidget();
        mOptsPage_Rendering->setObjectName(QString::fromUtf8("mOptsPage_Rendering"));
        verticalLayout_10 = new QVBoxLayout(mOptsPage_Rendering);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        chkUseScaleDependentRendering = new QgsCollapsibleGroupBox(mOptsPage_Rendering);
        chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
        chkUseScaleDependentRendering->setCheckable(true);
        chkUseScaleDependentRendering->setChecked(false);
        chkUseScaleDependentRendering->setProperty("syncGroup", QVariant(QString::fromUtf8("rastergeneral")));
        _5 = new QGridLayout(chkUseScaleDependentRendering);
        _5->setObjectName(QString::fromUtf8("_5"));
        _5->setVerticalSpacing(6);
        _5->setContentsMargins(11, 11, 11, 11);
        mScaleRangeWidget = new QgsScaleRangeWidget(chkUseScaleDependentRendering);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        _5->addWidget(mScaleRangeWidget, 0, 0, 1, 2);


        verticalLayout_10->addWidget(chkUseScaleDependentRendering);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        mOptionsStackedWidget->addWidget(mOptsPage_Rendering);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QString::fromUtf8("mOptsPage_Metadata"));
        verticalLayout_5 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        metadataFrame = new QFrame(mOptsPage_Metadata);
        metadataFrame->setObjectName(QString::fromUtf8("metadataFrame"));
        metadataFrame->setFrameShape(QFrame::NoFrame);
        metadataFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_5->addWidget(metadataFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);
        mOptsPage_Statistics = new QWidget();
        mOptsPage_Statistics->setObjectName(QString::fromUtf8("mOptsPage_Statistics"));
        verticalLayout_6 = new QVBoxLayout(mOptsPage_Statistics);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox = new QgsCollapsibleGroupBox(mOptsPage_Statistics);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        mStatisticsTableView = new QTableView(groupBox);
        mStatisticsTableView->setObjectName(QString::fromUtf8("mStatisticsTableView"));
        mStatisticsTableView->setAlternatingRowColors(true);

        verticalLayout_7->addWidget(mStatisticsTableView);


        verticalLayout_6->addWidget(groupBox);

        mClassificationStatsGroupBox = new QgsCollapsibleGroupBox(mOptsPage_Statistics);
        mClassificationStatsGroupBox->setObjectName(QString::fromUtf8("mClassificationStatsGroupBox"));
        verticalLayout_8 = new QVBoxLayout(mClassificationStatsGroupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        mClassificationStatisticsTableView = new QTableView(mClassificationStatsGroupBox);
        mClassificationStatisticsTableView->setObjectName(QString::fromUtf8("mClassificationStatisticsTableView"));
        mClassificationStatisticsTableView->setAlternatingRowColors(true);

        verticalLayout_8->addWidget(mClassificationStatisticsTableView);


        verticalLayout_6->addWidget(mClassificationStatsGroupBox);

        mStatisticsCalculationWarningLabel = new QLabel(mOptsPage_Statistics);
        mStatisticsCalculationWarningLabel->setObjectName(QString::fromUtf8("mStatisticsCalculationWarningLabel"));

        verticalLayout_6->addWidget(mStatisticsCalculationWarningLabel);

        mOptionsStackedWidget->addWidget(mOptsPage_Statistics);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsPointCloudLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy3);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mButtonBoxFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 2);


        verticalLayout->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, mInformationTextBrowser);
        QWidget::setTabOrder(mInformationTextBrowser, mLayerOrigNameLineEdit);
        QWidget::setTabOrder(mLayerOrigNameLineEdit, mCrsGroupBox);
        QWidget::setTabOrder(mCrsGroupBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, pbnQueryBuilder);
        QWidget::setTabOrder(pbnQueryBuilder, chkUseScaleDependentRendering);
        QWidget::setTabOrder(chkUseScaleDependentRendering, mStatisticsTableView);
        QWidget::setTabOrder(mStatisticsTableView, mClassificationStatisticsTableView);

        retranslateUi(QgsPointCloudLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsPointCloudLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPointCloudLayerPropertiesBase)
    {
        QgsPointCloudLayerPropertiesBase->setWindowTitle(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Vector Tile Layer Properties", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Information", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem->setToolTip(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Information", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Source", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem1->setToolTip(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Source", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Rendering", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem2->setToolTip(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Rendering", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Metadata", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem3->setToolTip(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Statistics", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem4->setToolTip(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupBox_60->setTitle(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Settings", nullptr));
        label_6->setText(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Layer name", nullptr));
        mCrsGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Assigned Coordinate Reference System (CRS)", nullptr));
        label_7->setText(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "<html><head/><body><p><span style=\" font-weight:600;\">Changing this option does not modify the original data source or perform any reprojection of points. Rather, it can be used to override the layer's CRS within this project if it could not be detected or has been incorrectly detected.</span></p></body></html>", nullptr));
        mSubsetGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Provider Feature Filter", nullptr));
        pbnQueryBuilder->setText(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Query Builder", nullptr));
        chkUseScaleDependentRendering->setTitle(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Scale Dependent Visibility", nullptr));
#if QT_CONFIG(tooltip)
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Attribute Statistics", nullptr));
        mClassificationStatsGroupBox->setTitle(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Classification Statistics", nullptr));
        mStatisticsCalculationWarningLabel->setText(QCoreApplication::translate("QgsPointCloudLayerPropertiesBase", "Note: The displayed statistics are estimated based on sampling data from the dataset and it is not guaranteed to be accurate!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudLayerPropertiesBase: public Ui_QgsPointCloudLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDLAYERPROPERTIESBASE_H
