/********************************************************************************
** Form generated from reading UI file 'qgsmeshlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHLAYERPROPERTIESBASE_H
#define UI_QGSMESHLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsfilterlineedit.h"
#include "qgsmeshdatasetgrouptreewidget.h"
#include "qgsmeshstaticdatasetwidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshLayerPropertiesBase
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
    QVBoxLayout *verticalLayout_20;
    QTextBrowser *mInformationTextBrowser;
    QWidget *mOptsPage_Source;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_4;
    QgsCollapsibleGroupBox *groupBox_60;
    QVBoxLayout *verticalLayout_260;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QLineEdit *mLayerOrigNameLineEd;
    QFrame *mDataSourceEncodingFrame;
    QHBoxLayout *horizontalLayout_4;
    QgsCollapsibleGroupBox *mCrsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_11;
    QFrame *line_2;
    QgsMeshDatasetGroupTreeWidget *mDatasetGroupTreeWidget;
    QgsCollapsibleGroupBoxBasic *mStaticDatasetGroupBox;
    QVBoxLayout *verticalLayout_7;
    QgsMeshStaticDatasetWidget *mStaticDatasetWidget;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_14;
    QgsScrollArea *scrollArea;
    QWidget *mOptsPage_StyleContent;
    QVBoxLayout *verticalLayout_10;
    QWidget *mOptsPage_Labels;
    QVBoxLayout *verticalLayout_9;
    QFrame *labelingFrame;
    QWidget *mOptsPage_Rendering;
    QVBoxLayout *verticalLayout_5;
    QgsCollapsibleGroupBox *chkUseScaleDependentRendering;
    QGridLayout *_5;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QgsCollapsibleGroupBox *mSimplifyMeshGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_2;
    QgsSpinBox *mSimplifyMeshResolutionSpinBox;
    QgsDoubleSpinBox *mSimplifyReductionFactorSpinBox;
    QSpacerItem *verticalSpacer;
    QWidget *mOptsPage_Temporal;
    QGridLayout *gridLayout_3;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *mTemporalProviderTimeUnitComboBox;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QDateTimeEdit *mTemporalDateTimeReference;
    QComboBox *mComboBoxTemporalDatasetMatchingMethod;
    QDateTimeEdit *mTemporalDateTimeEnd;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_4;
    QDateTimeEdit *mTemporalDateTimeStart;
    QPushButton *mTemporalReloadButton;
    QCheckBox *mAlwaysTimeFromSourceCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_8;
    QFrame *metadataFrame;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMeshLayerPropertiesBase)
    {
        if (QgsMeshLayerPropertiesBase->objectName().isEmpty())
            QgsMeshLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsMeshLayerPropertiesBase"));
        QgsMeshLayerPropertiesBase->resize(815, 557);
        QgsMeshLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsMeshLayerPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        mOptionsSplitter = new QSplitter(QgsMeshLayerPropertiesBase);
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
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/temporal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/editmetadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
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
        verticalLayout_20 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mInformationTextBrowser = new QTextBrowser(mOptsPage_Information);
        mInformationTextBrowser->setObjectName(QString::fromUtf8("mInformationTextBrowser"));

        verticalLayout_20->addWidget(mInformationTextBrowser);

        mOptionsStackedWidget->addWidget(mOptsPage_Information);
        mOptsPage_Source = new QWidget();
        mOptsPage_Source->setObjectName(QString::fromUtf8("mOptsPage_Source"));
        verticalLayout_6 = new QVBoxLayout(mOptsPage_Source);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QgsScrollArea(mOptsPage_Source);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 304, 316));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_60 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_3);
        groupBox_60->setObjectName(QString::fromUtf8("groupBox_60"));
        verticalLayout_260 = new QVBoxLayout(groupBox_60);
        verticalLayout_260->setObjectName(QString::fromUtf8("verticalLayout_260"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_7 = new QLabel(groupBox_60);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_13->addWidget(label_7);

        mLayerOrigNameLineEd = new QLineEdit(groupBox_60);
        mLayerOrigNameLineEd->setObjectName(QString::fromUtf8("mLayerOrigNameLineEd"));

        horizontalLayout_13->addWidget(mLayerOrigNameLineEd);


        verticalLayout_260->addLayout(horizontalLayout_13);

        mDataSourceEncodingFrame = new QFrame(groupBox_60);
        mDataSourceEncodingFrame->setObjectName(QString::fromUtf8("mDataSourceEncodingFrame"));
        mDataSourceEncodingFrame->setFrameShape(QFrame::NoFrame);
        mDataSourceEncodingFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(mDataSourceEncodingFrame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_260->addWidget(mDataSourceEncodingFrame);


        verticalLayout_4->addWidget(groupBox_60);

        mCrsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_3);
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

        label_11 = new QLabel(mCrsGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setTextFormat(Qt::RichText);
        label_11->setWordWrap(true);

        verticalLayout_28->addWidget(label_11);

        line_2 = new QFrame(mCrsGroupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_2);


        verticalLayout_4->addWidget(mCrsGroupBox);

        mDatasetGroupTreeWidget = new QgsMeshDatasetGroupTreeWidget(scrollAreaWidgetContents_3);
        mDatasetGroupTreeWidget->setObjectName(QString::fromUtf8("mDatasetGroupTreeWidget"));

        verticalLayout_4->addWidget(mDatasetGroupTreeWidget);

        mStaticDatasetGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents_3);
        mStaticDatasetGroupBox->setObjectName(QString::fromUtf8("mStaticDatasetGroupBox"));
        mStaticDatasetGroupBox->setCheckable(true);
        verticalLayout_7 = new QVBoxLayout(mStaticDatasetGroupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        mStaticDatasetWidget = new QgsMeshStaticDatasetWidget(mStaticDatasetGroupBox);
        mStaticDatasetWidget->setObjectName(QString::fromUtf8("mStaticDatasetWidget"));
        mStaticDatasetWidget->setMinimumSize(QSize(0, 0));

        verticalLayout_7->addWidget(mStaticDatasetWidget);


        verticalLayout_4->addWidget(mStaticDatasetGroupBox);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_6->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mOptsPage_Source);
        mOptsPage_Style = new QWidget();
        mOptsPage_Style->setObjectName(QString::fromUtf8("mOptsPage_Style"));
        verticalLayout_14 = new QVBoxLayout(mOptsPage_Style);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(mOptsPage_Style);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        mOptsPage_StyleContent = new QWidget();
        mOptsPage_StyleContent->setObjectName(QString::fromUtf8("mOptsPage_StyleContent"));
        mOptsPage_StyleContent->setGeometry(QRect(0, 0, 661, 509));
        verticalLayout_10 = new QVBoxLayout(mOptsPage_StyleContent);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(mOptsPage_StyleContent);

        verticalLayout_14->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Labels = new QWidget();
        mOptsPage_Labels->setObjectName(QString::fromUtf8("mOptsPage_Labels"));
        verticalLayout_9 = new QVBoxLayout(mOptsPage_Labels);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        labelingFrame = new QFrame(mOptsPage_Labels);
        labelingFrame->setObjectName(QString::fromUtf8("labelingFrame"));
        sizePolicy1.setHeightForWidth(labelingFrame->sizePolicy().hasHeightForWidth());
        labelingFrame->setSizePolicy(sizePolicy1);
        labelingFrame->setFrameShape(QFrame::NoFrame);
        labelingFrame->setFrameShadow(QFrame::Plain);

        verticalLayout_9->addWidget(labelingFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Labels);
        mOptsPage_Rendering = new QWidget();
        mOptsPage_Rendering->setObjectName(QString::fromUtf8("mOptsPage_Rendering"));
        verticalLayout_5 = new QVBoxLayout(mOptsPage_Rendering);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
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


        verticalLayout_5->addWidget(chkUseScaleDependentRendering);

        mSimplifyMeshGroupBox = new QgsCollapsibleGroupBox(mOptsPage_Rendering);
        mSimplifyMeshGroupBox->setObjectName(QString::fromUtf8("mSimplifyMeshGroupBox"));
        mSimplifyMeshGroupBox->setCheckable(true);
        mSimplifyMeshGroupBox->setChecked(true);
        gridLayout_2 = new QGridLayout(mSimplifyMeshGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(mSimplifyMeshGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_2 = new QLabel(mSimplifyMeshGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mSimplifyMeshResolutionSpinBox = new QgsSpinBox(mSimplifyMeshGroupBox);
        mSimplifyMeshResolutionSpinBox->setObjectName(QString::fromUtf8("mSimplifyMeshResolutionSpinBox"));
        mSimplifyMeshResolutionSpinBox->setMinimum(1);
        mSimplifyMeshResolutionSpinBox->setMaximum(200);
        mSimplifyMeshResolutionSpinBox->setValue(5);

        gridLayout_2->addWidget(mSimplifyMeshResolutionSpinBox, 1, 2, 1, 1);

        mSimplifyReductionFactorSpinBox = new QgsDoubleSpinBox(mSimplifyMeshGroupBox);
        mSimplifyReductionFactorSpinBox->setObjectName(QString::fromUtf8("mSimplifyReductionFactorSpinBox"));
        mSimplifyReductionFactorSpinBox->setDecimals(1);
        mSimplifyReductionFactorSpinBox->setMinimum(1.100000000000000);
        mSimplifyReductionFactorSpinBox->setMaximum(1000000.000000000000000);
        mSimplifyReductionFactorSpinBox->setValue(10.000000000000000);

        gridLayout_2->addWidget(mSimplifyReductionFactorSpinBox, 0, 2, 1, 1);


        verticalLayout_5->addWidget(mSimplifyMeshGroupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        mOptionsStackedWidget->addWidget(mOptsPage_Rendering);
        mOptsPage_Temporal = new QWidget();
        mOptsPage_Temporal->setObjectName(QString::fromUtf8("mOptsPage_Temporal"));
        gridLayout_3 = new QGridLayout(mOptsPage_Temporal);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QgsCollapsibleGroupBox(mOptsPage_Temporal);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        mTemporalProviderTimeUnitComboBox = new QComboBox(groupBox_2);
        mTemporalProviderTimeUnitComboBox->setObjectName(QString::fromUtf8("mTemporalProviderTimeUnitComboBox"));

        gridLayout_5->addWidget(mTemporalProviderTimeUnitComboBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 2, 1, 2);

        groupBox = new QgsCollapsibleGroupBox(mOptsPage_Temporal);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 3, 0, 1, 1);

        mTemporalDateTimeReference = new QDateTimeEdit(groupBox);
        mTemporalDateTimeReference->setObjectName(QString::fromUtf8("mTemporalDateTimeReference"));
        mTemporalDateTimeReference->setCalendarPopup(true);
        mTemporalDateTimeReference->setTimeSpec(Qt::UTC);

        gridLayout_4->addWidget(mTemporalDateTimeReference, 0, 1, 1, 1);

        mComboBoxTemporalDatasetMatchingMethod = new QComboBox(groupBox);
        mComboBoxTemporalDatasetMatchingMethod->setObjectName(QString::fromUtf8("mComboBoxTemporalDatasetMatchingMethod"));

        gridLayout_4->addWidget(mComboBoxTemporalDatasetMatchingMethod, 6, 1, 1, 2);

        mTemporalDateTimeEnd = new QDateTimeEdit(groupBox);
        mTemporalDateTimeEnd->setObjectName(QString::fromUtf8("mTemporalDateTimeEnd"));
        mTemporalDateTimeEnd->setEnabled(false);
        mTemporalDateTimeEnd->setWrapping(false);
        mTemporalDateTimeEnd->setFrame(true);
        mTemporalDateTimeEnd->setReadOnly(true);
        mTemporalDateTimeEnd->setButtonSymbols(QAbstractSpinBox::NoButtons);
        mTemporalDateTimeEnd->setAccelerated(false);
        mTemporalDateTimeEnd->setProperty("showGroupSeparator", QVariant(false));
        mTemporalDateTimeEnd->setTimeSpec(Qt::UTC);

        gridLayout_4->addWidget(mTemporalDateTimeEnd, 4, 1, 1, 2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 6, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 4, 0, 1, 1);

        mTemporalDateTimeStart = new QDateTimeEdit(groupBox);
        mTemporalDateTimeStart->setObjectName(QString::fromUtf8("mTemporalDateTimeStart"));
        mTemporalDateTimeStart->setEnabled(false);
        mTemporalDateTimeStart->setReadOnly(true);
        mTemporalDateTimeStart->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_4->addWidget(mTemporalDateTimeStart, 3, 1, 1, 2);

        mTemporalReloadButton = new QPushButton(groupBox);
        mTemporalReloadButton->setObjectName(QString::fromUtf8("mTemporalReloadButton"));
        mTemporalReloadButton->setMaximumSize(QSize(24, 24));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTemporalReloadButton->setIcon(icon7);

        gridLayout_4->addWidget(mTemporalReloadButton, 0, 2, 1, 1);

        mAlwaysTimeFromSourceCheckBox = new QCheckBox(groupBox);
        mAlwaysTimeFromSourceCheckBox->setObjectName(QString::fromUtf8("mAlwaysTimeFromSourceCheckBox"));

        gridLayout_4->addWidget(mAlwaysTimeFromSourceCheckBox, 2, 1, 1, 2);


        gridLayout_3->addWidget(groupBox, 0, 2, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 2, 1, 1);

        mOptionsStackedWidget->addWidget(mOptsPage_Temporal);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QString::fromUtf8("mOptsPage_Metadata"));
        verticalLayout_8 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        metadataFrame = new QFrame(mOptsPage_Metadata);
        metadataFrame->setObjectName(QString::fromUtf8("metadataFrame"));
        metadataFrame->setFrameShape(QFrame::NoFrame);
        metadataFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(metadataFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsMeshLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy2);
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
        QWidget::setTabOrder(mInformationTextBrowser, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mLayerOrigNameLineEd);
        QWidget::setTabOrder(mLayerOrigNameLineEd, mCrsGroupBox);
        QWidget::setTabOrder(mCrsGroupBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mStaticDatasetGroupBox);
        QWidget::setTabOrder(mStaticDatasetGroupBox, scrollArea);
        QWidget::setTabOrder(scrollArea, chkUseScaleDependentRendering);
        QWidget::setTabOrder(chkUseScaleDependentRendering, mSimplifyMeshGroupBox);
        QWidget::setTabOrder(mSimplifyMeshGroupBox, mSimplifyReductionFactorSpinBox);
        QWidget::setTabOrder(mSimplifyReductionFactorSpinBox, mSimplifyMeshResolutionSpinBox);
        QWidget::setTabOrder(mSimplifyMeshResolutionSpinBox, mTemporalDateTimeReference);
        QWidget::setTabOrder(mTemporalDateTimeReference, mTemporalReloadButton);
        QWidget::setTabOrder(mTemporalReloadButton, mAlwaysTimeFromSourceCheckBox);
        QWidget::setTabOrder(mAlwaysTimeFromSourceCheckBox, mTemporalDateTimeStart);
        QWidget::setTabOrder(mTemporalDateTimeStart, mTemporalDateTimeEnd);
        QWidget::setTabOrder(mTemporalDateTimeEnd, mComboBoxTemporalDatasetMatchingMethod);
        QWidget::setTabOrder(mComboBoxTemporalDatasetMatchingMethod, mTemporalProviderTimeUnitComboBox);

        retranslateUi(QgsMeshLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(QgsMeshLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeshLayerPropertiesBase)
    {
        QgsMeshLayerPropertiesBase->setWindowTitle(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Raster Layer Properties", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Information", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Information", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Source", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem1->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Source", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Symbology", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem2->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Symbology", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Labels", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Rendering", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem4->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Rendering", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Temporal", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem5->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Temporal Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Metadata", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem6->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupBox_60->setTitle(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Settings", nullptr));
        label_7->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Layer name", nullptr));
        mCrsGroupBox->setTitle(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Assigned Coordinate Reference System (CRS)", nullptr));
        label_11->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "<html><head/><body><p><span style=\" font-weight:600;\">Changing this option does not modify the original data source or perform any reprojection of the mesh. Rather, it can be used to override the layer's CRS within this project if it could not be detected or has been incorrectly detected.</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        mStaticDatasetGroupBox->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Always treat as a static dataset even if the temporal navigation is on", nullptr));
#endif // QT_CONFIG(tooltip)
        mStaticDatasetGroupBox->setTitle(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Treat as Static Dataset", nullptr));
        chkUseScaleDependentRendering->setTitle(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Scale Dependent Visibility", nullptr));
#if QT_CONFIG(tooltip)
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mSimplifyMeshGroupBox->setTitle(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Simplify Mesh", nullptr));
        label_5->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Reduction factor", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Minimum triangle size", nullptr));
        mSimplifyMeshResolutionSpinBox->setSuffix(QCoreApplication::translate("QgsMeshLayerPropertiesBase", " pixels", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Provider Time Settings", nullptr));
        label_12->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Time unit", nullptr));
#if QT_CONFIG(tooltip)
        mTemporalProviderTimeUnitComboBox->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Default time unit of mesh data provider is hour, change to override the time unit", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Layer Temporal Settings", nullptr));
        label_6->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Start time", nullptr));
#if QT_CONFIG(tooltip)
        mTemporalDateTimeReference->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Reference time used to render mesh dataset when using temporal range or temporal animation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mComboBoxTemporalDatasetMatchingMethod->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Method for selection of temporal mesh dataset from a range time", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Dataset matching method", nullptr));
        label_3->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Reference time", nullptr));
        label_4->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "End time", nullptr));
#if QT_CONFIG(tooltip)
        mTemporalReloadButton->setToolTip(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Reload from provider", nullptr));
#endif // QT_CONFIG(tooltip)
        mTemporalReloadButton->setText(QString());
        mAlwaysTimeFromSourceCheckBox->setText(QCoreApplication::translate("QgsMeshLayerPropertiesBase", "Always take reference time from data source", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMeshLayerPropertiesBase: public Ui_QgsMeshLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHLAYERPROPERTIESBASE_H
