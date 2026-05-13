/********************************************************************************
** Form generated from reading UI file 'qgslayoutmapclippingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMAPCLIPPINGWIDGETBASE_H
#define UI_QGSLAYOUTMAPCLIPPINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgslayoutitemcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMapClippingWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mClipToAtlasCheckBox;
    QGridLayout *gridLayout;
    QTreeView *mLayersTreeView;
    QComboBox *mAtlasClippingTypeComboBox;
    QLabel *label;
    QLabel *mClipToAtlasLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mSelectAllButton;
    QPushButton *mDeselectAllButton;
    QPushButton *mInvertSelectionButton;
    QRadioButton *mRadioClipSelectedLayers;
    QRadioButton *mRadioClipAllLayers;
    QCheckBox *mForceLabelsInsideCheckBox;
    QgsCollapsibleGroupBox *mClipToItemCheckBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *mClipToItemLabel;
    QComboBox *mItemClippingTypeComboBox;
    QCheckBox *mForceLabelsInsideItemCheckBox;
    QgsLayoutItemComboBox *mClipItemComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayoutMapClippingWidgetBase)
    {
        if (QgsLayoutMapClippingWidgetBase->objectName().isEmpty())
            QgsLayoutMapClippingWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutMapClippingWidgetBase"));
        QgsLayoutMapClippingWidgetBase->resize(318, 619);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutMapClippingWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutMapClippingWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutMapClippingWidgetBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mClipToAtlasCheckBox = new QgsCollapsibleGroupBox(QgsLayoutMapClippingWidgetBase);
        mClipToAtlasCheckBox->setObjectName(QString::fromUtf8("mClipToAtlasCheckBox"));
        mClipToAtlasCheckBox->setCheckable(true);
        gridLayout = new QGridLayout(mClipToAtlasCheckBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLayersTreeView = new QTreeView(mClipToAtlasCheckBox);
        mLayersTreeView->setObjectName(QString::fromUtf8("mLayersTreeView"));
        mLayersTreeView->setHeaderHidden(true);
        mLayersTreeView->header()->setDefaultSectionSize(26);

        gridLayout->addWidget(mLayersTreeView, 6, 0, 1, 1);

        mAtlasClippingTypeComboBox = new QComboBox(mClipToAtlasCheckBox);
        mAtlasClippingTypeComboBox->setObjectName(QString::fromUtf8("mAtlasClippingTypeComboBox"));

        gridLayout->addWidget(mAtlasClippingTypeComboBox, 2, 0, 1, 1);

        label = new QLabel(mClipToAtlasCheckBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mClipToAtlasLabel = new QLabel(mClipToAtlasCheckBox);
        mClipToAtlasLabel->setObjectName(QString::fromUtf8("mClipToAtlasLabel"));
        mClipToAtlasLabel->setWordWrap(true);

        gridLayout->addWidget(mClipToAtlasLabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mSelectAllButton = new QPushButton(mClipToAtlasCheckBox);
        mSelectAllButton->setObjectName(QString::fromUtf8("mSelectAllButton"));

        horizontalLayout->addWidget(mSelectAllButton);

        mDeselectAllButton = new QPushButton(mClipToAtlasCheckBox);
        mDeselectAllButton->setObjectName(QString::fromUtf8("mDeselectAllButton"));

        horizontalLayout->addWidget(mDeselectAllButton);

        mInvertSelectionButton = new QPushButton(mClipToAtlasCheckBox);
        mInvertSelectionButton->setObjectName(QString::fromUtf8("mInvertSelectionButton"));

        horizontalLayout->addWidget(mInvertSelectionButton);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);

        mRadioClipSelectedLayers = new QRadioButton(mClipToAtlasCheckBox);
        mRadioClipSelectedLayers->setObjectName(QString::fromUtf8("mRadioClipSelectedLayers"));

        gridLayout->addWidget(mRadioClipSelectedLayers, 5, 0, 1, 1);

        mRadioClipAllLayers = new QRadioButton(mClipToAtlasCheckBox);
        mRadioClipAllLayers->setObjectName(QString::fromUtf8("mRadioClipAllLayers"));

        gridLayout->addWidget(mRadioClipAllLayers, 4, 0, 1, 1);

        mForceLabelsInsideCheckBox = new QCheckBox(mClipToAtlasCheckBox);
        mForceLabelsInsideCheckBox->setObjectName(QString::fromUtf8("mForceLabelsInsideCheckBox"));

        gridLayout->addWidget(mForceLabelsInsideCheckBox, 3, 0, 1, 1);


        verticalLayout->addWidget(mClipToAtlasCheckBox);

        mClipToItemCheckBox = new QgsCollapsibleGroupBox(QgsLayoutMapClippingWidgetBase);
        mClipToItemCheckBox->setObjectName(QString::fromUtf8("mClipToItemCheckBox"));
        mClipToItemCheckBox->setCheckable(true);
        gridLayout_2 = new QGridLayout(mClipToItemCheckBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(mClipToItemCheckBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        mClipToItemLabel = new QLabel(mClipToItemCheckBox);
        mClipToItemLabel->setObjectName(QString::fromUtf8("mClipToItemLabel"));
        mClipToItemLabel->setWordWrap(true);

        gridLayout_2->addWidget(mClipToItemLabel, 0, 0, 1, 1);

        mItemClippingTypeComboBox = new QComboBox(mClipToItemCheckBox);
        mItemClippingTypeComboBox->setObjectName(QString::fromUtf8("mItemClippingTypeComboBox"));

        gridLayout_2->addWidget(mItemClippingTypeComboBox, 3, 0, 1, 1);

        mForceLabelsInsideItemCheckBox = new QCheckBox(mClipToItemCheckBox);
        mForceLabelsInsideItemCheckBox->setObjectName(QString::fromUtf8("mForceLabelsInsideItemCheckBox"));

        gridLayout_2->addWidget(mForceLabelsInsideItemCheckBox, 4, 0, 1, 1);

        mClipItemComboBox = new QgsLayoutItemComboBox(mClipToItemCheckBox);
        mClipItemComboBox->setObjectName(QString::fromUtf8("mClipItemComboBox"));

        gridLayout_2->addWidget(mClipItemComboBox, 1, 0, 1, 1);


        verticalLayout->addWidget(mClipToItemCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mClipToAtlasCheckBox, mAtlasClippingTypeComboBox);
        QWidget::setTabOrder(mAtlasClippingTypeComboBox, mForceLabelsInsideCheckBox);
        QWidget::setTabOrder(mForceLabelsInsideCheckBox, mRadioClipAllLayers);
        QWidget::setTabOrder(mRadioClipAllLayers, mRadioClipSelectedLayers);
        QWidget::setTabOrder(mRadioClipSelectedLayers, mLayersTreeView);
        QWidget::setTabOrder(mLayersTreeView, mSelectAllButton);
        QWidget::setTabOrder(mSelectAllButton, mDeselectAllButton);
        QWidget::setTabOrder(mDeselectAllButton, mInvertSelectionButton);
        QWidget::setTabOrder(mInvertSelectionButton, mClipToItemCheckBox);
        QWidget::setTabOrder(mClipToItemCheckBox, mClipItemComboBox);
        QWidget::setTabOrder(mClipItemComboBox, mItemClippingTypeComboBox);
        QWidget::setTabOrder(mItemClippingTypeComboBox, mForceLabelsInsideItemCheckBox);

        retranslateUi(QgsLayoutMapClippingWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutMapClippingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMapClippingWidgetBase)
    {
        QgsLayoutMapClippingWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Map Options", nullptr));
        mClipToAtlasCheckBox->setTitle(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Clip to atlas feature", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "The clipping mode determines how features from vector layers will be clipped.", nullptr));
        mClipToAtlasLabel->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "<b>When enabled, map layers will be automatically clipped to the boundary of the current atlas feature.</b>", nullptr));
        mSelectAllButton->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Select All", nullptr));
        mDeselectAllButton->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Deselect All", nullptr));
        mInvertSelectionButton->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Invert Selection", nullptr));
        mRadioClipSelectedLayers->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Clip selected layers", nullptr));
        mRadioClipAllLayers->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Clip all layers", nullptr));
        mForceLabelsInsideCheckBox->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Force labels inside atlas feature", nullptr));
        mClipToItemCheckBox->setTitle(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Clip to item", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "The clipping mode determines how features from vector layers will be clipped.", nullptr));
        mClipToItemLabel->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "<b>When enabled, the map will be automatically clipped to the selected shape.</b>", nullptr));
        mForceLabelsInsideItemCheckBox->setText(QCoreApplication::translate("QgsLayoutMapClippingWidgetBase", "Force labels inside clipping shape", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMapClippingWidgetBase: public Ui_QgsLayoutMapClippingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMAPCLIPPINGWIDGETBASE_H
