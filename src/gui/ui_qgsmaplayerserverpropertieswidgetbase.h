/********************************************************************************
** Form generated from reading UI file 'qgsmaplayerserverpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPLAYERSERVERPROPERTIESWIDGETBASE_H
#define UI_QGSMAPLAYERSERVERPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapLayerServerPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mMetaDescriptionGrpBx;
    QGridLayout *gridLayout_5;
    QLineEdit *mLayerKeywordListLineEdit;
    QLabel *mLayerAbstractLabel;
    QLabel *mLayerDataUrlLabel;
    QPlainTextEdit *mLayerAbstractTextEdit;
    QLineEdit *mLayerShortNameLineEdit;
    QLineEdit *mLayerTitleLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *mLayerDataUrlLineEdit;
    QLabel *mLayerDataUrlFormatLabel;
    QComboBox *mLayerDataUrlFormatComboBox;
    QLabel *mLayerOptWfsTitleLabel;
    QLabel *mLayerTitleLabel;
    QLabel *mLayerShortNameLabel;
    QLineEdit *mLayerOptWfsTitleLineEdit;
    QLabel *mLayerKeywordListLabel;
    QgsCollapsibleGroupBox *mMetaAttributionGrpBx;
    QGridLayout *gridLayout_7;
    QLabel *mLayerAttributionLabel;
    QLineEdit *mLayerAttributionLineEdit;
    QLabel *mLayerAttributionUrlLabel;
    QLineEdit *mLayerAttributionUrlLineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_34;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *buttonAddMetadataUrl;
    QPushButton *buttonRemoveMetadataUrl;
    QTableView *tableViewMetadataUrl;
    QgsCollapsibleGroupBox *mMetaLegendGrpBx;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mLayerLegendUrlLabel;
    QLineEdit *mLayerLegendUrlLineEdit;
    QLabel *mLayerLegendUrlFormatLabel;
    QComboBox *mLayerLegendUrlFormatComboBox;

    void setupUi(QWidget *QgsMapLayerServerPropertiesWidgetBase)
    {
        if (QgsMapLayerServerPropertiesWidgetBase->objectName().isEmpty())
            QgsMapLayerServerPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsMapLayerServerPropertiesWidgetBase"));
        QgsMapLayerServerPropertiesWidgetBase->resize(619, 866);
        verticalLayout = new QVBoxLayout(QgsMapLayerServerPropertiesWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mMetaDescriptionGrpBx = new QgsCollapsibleGroupBox(QgsMapLayerServerPropertiesWidgetBase);
        mMetaDescriptionGrpBx->setObjectName(QString::fromUtf8("mMetaDescriptionGrpBx"));
        mMetaDescriptionGrpBx->setSyncGroup(QString::fromUtf8("vectormeta"));
        gridLayout_5 = new QGridLayout(mMetaDescriptionGrpBx);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mLayerKeywordListLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerKeywordListLineEdit->setObjectName(QString::fromUtf8("mLayerKeywordListLineEdit"));

        gridLayout_5->addWidget(mLayerKeywordListLineEdit, 6, 1, 1, 1);

        mLayerAbstractLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerAbstractLabel->setObjectName(QString::fromUtf8("mLayerAbstractLabel"));

        gridLayout_5->addWidget(mLayerAbstractLabel, 4, 0, 1, 1);

        mLayerDataUrlLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlLabel->setObjectName(QString::fromUtf8("mLayerDataUrlLabel"));

        gridLayout_5->addWidget(mLayerDataUrlLabel, 7, 0, 1, 1);

        mLayerAbstractTextEdit = new QPlainTextEdit(mMetaDescriptionGrpBx);
        mLayerAbstractTextEdit->setObjectName(QString::fromUtf8("mLayerAbstractTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLayerAbstractTextEdit->sizePolicy().hasHeightForWidth());
        mLayerAbstractTextEdit->setSizePolicy(sizePolicy);
        mLayerAbstractTextEdit->setMaximumSize(QSize(16777215, 150));

        gridLayout_5->addWidget(mLayerAbstractTextEdit, 4, 1, 1, 1);

        mLayerShortNameLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerShortNameLineEdit->setObjectName(QString::fromUtf8("mLayerShortNameLineEdit"));

        gridLayout_5->addWidget(mLayerShortNameLineEdit, 0, 1, 1, 1);

        mLayerTitleLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerTitleLineEdit->setObjectName(QString::fromUtf8("mLayerTitleLineEdit"));

        gridLayout_5->addWidget(mLayerTitleLineEdit, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mLayerDataUrlLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerDataUrlLineEdit->setObjectName(QString::fromUtf8("mLayerDataUrlLineEdit"));

        horizontalLayout_7->addWidget(mLayerDataUrlLineEdit);

        mLayerDataUrlFormatLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerDataUrlFormatLabel"));

        horizontalLayout_7->addWidget(mLayerDataUrlFormatLabel);

        mLayerDataUrlFormatComboBox = new QComboBox(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatComboBox->addItem(QString::fromUtf8("text/html"));
        mLayerDataUrlFormatComboBox->addItem(QString::fromUtf8("text/plain"));
        mLayerDataUrlFormatComboBox->addItem(QString::fromUtf8("application/pdf"));
        mLayerDataUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerDataUrlFormatComboBox"));

        horizontalLayout_7->addWidget(mLayerDataUrlFormatComboBox);


        gridLayout_5->addLayout(horizontalLayout_7, 7, 1, 1, 1);

        mLayerOptWfsTitleLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerOptWfsTitleLabel->setObjectName(QString::fromUtf8("mLayerOptWfsTitleLabel"));

        gridLayout_5->addWidget(mLayerOptWfsTitleLabel, 2, 0, 1, 1);

        mLayerTitleLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerTitleLabel->setObjectName(QString::fromUtf8("mLayerTitleLabel"));

        gridLayout_5->addWidget(mLayerTitleLabel, 1, 0, 1, 1);

        mLayerShortNameLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerShortNameLabel->setObjectName(QString::fromUtf8("mLayerShortNameLabel"));

        gridLayout_5->addWidget(mLayerShortNameLabel, 0, 0, 1, 1);

        mLayerOptWfsTitleLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerOptWfsTitleLineEdit->setObjectName(QString::fromUtf8("mLayerOptWfsTitleLineEdit"));

        gridLayout_5->addWidget(mLayerOptWfsTitleLineEdit, 2, 1, 1, 1);

        mLayerKeywordListLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel->setObjectName(QString::fromUtf8("mLayerKeywordListLabel"));

        gridLayout_5->addWidget(mLayerKeywordListLabel, 6, 0, 1, 1);


        verticalLayout->addWidget(mMetaDescriptionGrpBx);

        mMetaAttributionGrpBx = new QgsCollapsibleGroupBox(QgsMapLayerServerPropertiesWidgetBase);
        mMetaAttributionGrpBx->setObjectName(QString::fromUtf8("mMetaAttributionGrpBx"));
        mMetaAttributionGrpBx->setSyncGroup(QString::fromUtf8("vectormeta"));
        gridLayout_7 = new QGridLayout(mMetaAttributionGrpBx);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mLayerAttributionLabel = new QLabel(mMetaAttributionGrpBx);
        mLayerAttributionLabel->setObjectName(QString::fromUtf8("mLayerAttributionLabel"));

        gridLayout_7->addWidget(mLayerAttributionLabel, 0, 0, 1, 1);

        mLayerAttributionLineEdit = new QLineEdit(mMetaAttributionGrpBx);
        mLayerAttributionLineEdit->setObjectName(QString::fromUtf8("mLayerAttributionLineEdit"));

        gridLayout_7->addWidget(mLayerAttributionLineEdit, 0, 1, 1, 1);

        mLayerAttributionUrlLabel = new QLabel(mMetaAttributionGrpBx);
        mLayerAttributionUrlLabel->setObjectName(QString::fromUtf8("mLayerAttributionUrlLabel"));

        gridLayout_7->addWidget(mLayerAttributionUrlLabel, 2, 0, 1, 1);

        mLayerAttributionUrlLineEdit = new QLineEdit(mMetaAttributionGrpBx);
        mLayerAttributionUrlLineEdit->setObjectName(QString::fromUtf8("mLayerAttributionUrlLineEdit"));

        gridLayout_7->addWidget(mLayerAttributionUrlLineEdit, 2, 1, 1, 1);


        verticalLayout->addWidget(mMetaAttributionGrpBx);

        groupBox = new QGroupBox(QgsMapLayerServerPropertiesWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_34 = new QVBoxLayout(groupBox);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_6 = new QSpacerItem(566, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        buttonAddMetadataUrl = new QPushButton(groupBox);
        buttonAddMetadataUrl->setObjectName(QString::fromUtf8("buttonAddMetadataUrl"));
        buttonAddMetadataUrl->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAddMetadataUrl->setIcon(icon);

        horizontalLayout_10->addWidget(buttonAddMetadataUrl);

        buttonRemoveMetadataUrl = new QPushButton(groupBox);
        buttonRemoveMetadataUrl->setObjectName(QString::fromUtf8("buttonRemoveMetadataUrl"));
        buttonRemoveMetadataUrl->setText(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRemoveMetadataUrl->setIcon(icon1);

        horizontalLayout_10->addWidget(buttonRemoveMetadataUrl);


        verticalLayout_34->addLayout(horizontalLayout_10);

        tableViewMetadataUrl = new QTableView(groupBox);
        tableViewMetadataUrl->setObjectName(QString::fromUtf8("tableViewMetadataUrl"));

        verticalLayout_34->addWidget(tableViewMetadataUrl);


        verticalLayout->addWidget(groupBox);

        mMetaLegendGrpBx = new QgsCollapsibleGroupBox(QgsMapLayerServerPropertiesWidgetBase);
        mMetaLegendGrpBx->setObjectName(QString::fromUtf8("mMetaLegendGrpBx"));
        gridLayout_10 = new QGridLayout(mMetaLegendGrpBx);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mLayerLegendUrlLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlLabel->setObjectName(QString::fromUtf8("mLayerLegendUrlLabel"));

        horizontalLayout_11->addWidget(mLayerLegendUrlLabel);

        mLayerLegendUrlLineEdit = new QLineEdit(mMetaLegendGrpBx);
        mLayerLegendUrlLineEdit->setObjectName(QString::fromUtf8("mLayerLegendUrlLineEdit"));

        horizontalLayout_11->addWidget(mLayerLegendUrlLineEdit);

        mLayerLegendUrlFormatLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerLegendUrlFormatLabel"));

        horizontalLayout_11->addWidget(mLayerLegendUrlFormatLabel);

        mLayerLegendUrlFormatComboBox = new QComboBox(mMetaLegendGrpBx);
        mLayerLegendUrlFormatComboBox->addItem(QString::fromUtf8("image/png"));
        mLayerLegendUrlFormatComboBox->addItem(QString::fromUtf8("image/jpeg"));
        mLayerLegendUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerLegendUrlFormatComboBox"));
        mLayerLegendUrlFormatComboBox->setMinimumSize(QSize(137, 0));

        horizontalLayout_11->addWidget(mLayerLegendUrlFormatComboBox);


        gridLayout_10->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        verticalLayout->addWidget(mMetaLegendGrpBx);


        retranslateUi(QgsMapLayerServerPropertiesWidgetBase);

        mLayerLegendUrlFormatComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsMapLayerServerPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMapLayerServerPropertiesWidgetBase)
    {
        QgsMapLayerServerPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Map Layer Server Properties", nullptr));
        mMetaDescriptionGrpBx->setTitle(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Description", nullptr));
#if QT_CONFIG(tooltip)
        mLayerKeywordListLineEdit->setToolTip(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "List of keywords separated by comma to help catalog searching.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerKeywordListLineEdit->setPlaceholderText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "List of keywords separated by comma to help catalog searching.", nullptr));
        mLayerAbstractLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Abstract", nullptr));
        mLayerDataUrlLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Data URL", nullptr));
#if QT_CONFIG(tooltip)
        mLayerAbstractTextEdit->setToolTip(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "The abstract is a descriptive narrative providing more information about the layer.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mLayerShortNameLineEdit->setToolTip(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerShortNameLineEdit->setInputMask(QString());
        mLayerShortNameLineEdit->setText(QString());
        mLayerShortNameLineEdit->setPlaceholderText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", nullptr));
#if QT_CONFIG(tooltip)
        mLayerTitleLineEdit->setToolTip(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "The title is for the benefit of humans to identify layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerTitleLineEdit->setPlaceholderText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "The title is for the benefit of humans to identify layer.", nullptr));
#if QT_CONFIG(tooltip)
        mLayerDataUrlLineEdit->setToolTip(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "A URL of the data presentation.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerDataUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "A URL of the data presentation.", nullptr));
        mLayerDataUrlFormatLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Format", nullptr));

        mLayerOptWfsTitleLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "WFS title", nullptr));
        mLayerTitleLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Title", nullptr));
        mLayerShortNameLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Short name", nullptr));
#if QT_CONFIG(tooltip)
        mLayerOptWfsTitleLineEdit->setToolTip(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "The alternative title is for the benefit of humans to identify the WFS layer if the original title is only helpful with the WMS grouping.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerOptWfsTitleLineEdit->setText(QString());
        mLayerOptWfsTitleLineEdit->setPlaceholderText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Optional alternative title for the layer for use with WFS", nullptr));
        mLayerKeywordListLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Keyword list", nullptr));
        mMetaAttributionGrpBx->setTitle(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Attribution", nullptr));
        mLayerAttributionLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Title", nullptr));
#if QT_CONFIG(tooltip)
        mLayerAttributionLineEdit->setToolTip(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Attribution's title indicates the provider of the layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerAttributionLineEdit->setPlaceholderText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Attribution's title indicates the provider of the data layer.", nullptr));
        mLayerAttributionUrlLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "URL", nullptr));
#if QT_CONFIG(tooltip)
        mLayerAttributionUrlLineEdit->setToolTip(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerAttributionUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Metadata URL", nullptr));
        mMetaLegendGrpBx->setTitle(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Legend URL", nullptr));
        mLayerLegendUrlLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "URL", nullptr));
#if QT_CONFIG(tooltip)
        mLayerLegendUrlLineEdit->setToolTip(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "A URL of the legend image.", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerLegendUrlLineEdit->setPlaceholderText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "A URL of the legend image.", nullptr));
        mLayerLegendUrlFormatLabel->setText(QCoreApplication::translate("QgsMapLayerServerPropertiesWidgetBase", "Format", nullptr));

    } // retranslateUi

};

namespace Ui {
    class QgsMapLayerServerPropertiesWidgetBase: public Ui_QgsMapLayerServerPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPLAYERSERVERPROPERTIESWIDGETBASE_H
