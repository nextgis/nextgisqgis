/********************************************************************************
** Form generated from reading UI file 'qgsrastertransparencywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERTRANSPARENCYWIDGET_H
#define UI_QGSRASTERTRANSPARENCYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsopacitywidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterTransparencyWidget
{
public:
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *gboxGlobalTransp;
    QGridLayout *_3;
    QgsOpacityWidget *mOpacityWidget;
    QgsPropertyOverrideButton *mOpacityDDBtn;
    QgsCollapsibleGroupBox *gboxNoDataValue;
    QGridLayout *gridLayout_11;
    QLabel *label;
    QLabel *lblUserNoDataValueLabel;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *mSrcNoDataValueCheckBox;
    QLabel *lblSrcNoDataValue;
    QLineEdit *leNoDataValue;
    QgsColorButton *mNodataColorButton;
    QgsCollapsibleGroupBox *gboxCustomTransparency;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblTransparent;
    QgsRasterBandComboBox *cboxTransparencyBand;
    QHBoxLayout *horizontalLayout;
    QToolButton *pbnExportTransparentPixelValues;
    QSpacerItem *horizontalSpacer;
    QToolButton *pbnImportTransparentPixelValues;
    QToolButton *pbnDefaultValues;
    QToolButton *pbnRemoveSelectedRow;
    QToolButton *pbnAddValuesFromDisplay;
    QToolButton *pbnAddValuesManually;
    QTableWidget *tableTransparency;

    void setupUi(QWidget *QgsRasterTransparencyWidget)
    {
        if (QgsRasterTransparencyWidget->objectName().isEmpty())
            QgsRasterTransparencyWidget->setObjectName(QString::fromUtf8("QgsRasterTransparencyWidget"));
        QgsRasterTransparencyWidget->resize(323, 623);
        QgsRasterTransparencyWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsRasterTransparencyWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gboxGlobalTransp = new QgsCollapsibleGroupBox(QgsRasterTransparencyWidget);
        gboxGlobalTransp->setObjectName(QString::fromUtf8("gboxGlobalTransp"));
        gboxGlobalTransp->setFlat(true);
        gboxGlobalTransp->setProperty("syncGroup", QVariant(QString::fromUtf8("rastertransp")));
        _3 = new QGridLayout(gboxGlobalTransp);
        _3->setObjectName(QString::fromUtf8("_3"));
        _3->setContentsMargins(3, 3, 3, 3);
        mOpacityWidget = new QgsOpacityWidget(gboxGlobalTransp);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        _3->addWidget(mOpacityWidget, 0, 0, 1, 1);

        mOpacityDDBtn = new QgsPropertyOverrideButton(gboxGlobalTransp);
        mOpacityDDBtn->setObjectName(QString::fromUtf8("mOpacityDDBtn"));

        _3->addWidget(mOpacityDDBtn, 0, 1, 1, 1);


        gridLayout->addWidget(gboxGlobalTransp, 0, 0, 1, 1);

        gboxNoDataValue = new QgsCollapsibleGroupBox(QgsRasterTransparencyWidget);
        gboxNoDataValue->setObjectName(QString::fromUtf8("gboxNoDataValue"));
        gboxNoDataValue->setFlat(true);
        gboxNoDataValue->setProperty("syncGroup", QVariant(QString::fromUtf8("rastertransp")));
        gridLayout_11 = new QGridLayout(gboxNoDataValue);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label = new QLabel(gboxNoDataValue);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_11->addWidget(label, 2, 0, 1, 1);

        lblUserNoDataValueLabel = new QLabel(gboxNoDataValue);
        lblUserNoDataValueLabel->setObjectName(QString::fromUtf8("lblUserNoDataValueLabel"));

        gridLayout_11->addWidget(lblUserNoDataValueLabel, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(1, -1, -1, -1);
        mSrcNoDataValueCheckBox = new QCheckBox(gboxNoDataValue);
        mSrcNoDataValueCheckBox->setObjectName(QString::fromUtf8("mSrcNoDataValueCheckBox"));

        horizontalLayout_5->addWidget(mSrcNoDataValueCheckBox);

        lblSrcNoDataValue = new QLabel(gboxNoDataValue);
        lblSrcNoDataValue->setObjectName(QString::fromUtf8("lblSrcNoDataValue"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblSrcNoDataValue->sizePolicy().hasHeightForWidth());
        lblSrcNoDataValue->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lblSrcNoDataValue);


        gridLayout_11->addLayout(horizontalLayout_5, 0, 0, 1, 2);

        leNoDataValue = new QLineEdit(gboxNoDataValue);
        leNoDataValue->setObjectName(QString::fromUtf8("leNoDataValue"));

        gridLayout_11->addWidget(leNoDataValue, 1, 1, 1, 1);

        mNodataColorButton = new QgsColorButton(gboxNoDataValue);
        mNodataColorButton->setObjectName(QString::fromUtf8("mNodataColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mNodataColorButton->sizePolicy().hasHeightForWidth());
        mNodataColorButton->setSizePolicy(sizePolicy1);
        mNodataColorButton->setMinimumSize(QSize(120, 0));
        mNodataColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_11->addWidget(mNodataColorButton, 2, 1, 1, 1);


        gridLayout->addWidget(gboxNoDataValue, 1, 0, 1, 1);

        gboxCustomTransparency = new QgsCollapsibleGroupBox(QgsRasterTransparencyWidget);
        gboxCustomTransparency->setObjectName(QString::fromUtf8("gboxCustomTransparency"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(5);
        sizePolicy2.setHeightForWidth(gboxCustomTransparency->sizePolicy().hasHeightForWidth());
        gboxCustomTransparency->setSizePolicy(sizePolicy2);
        gboxCustomTransparency->setFlat(true);
        gboxCustomTransparency->setProperty("syncGroup", QVariant(QString::fromUtf8("rastertransp")));
        gridLayout_3 = new QGridLayout(gboxCustomTransparency);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(3, -1, -1, -1);
        label_6 = new QLabel(gboxCustomTransparency);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lblTransparent = new QLabel(gboxCustomTransparency);
        lblTransparent->setObjectName(QString::fromUtf8("lblTransparent"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblTransparent->sizePolicy().hasHeightForWidth());
        lblTransparent->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(lblTransparent);

        cboxTransparencyBand = new QgsRasterBandComboBox(gboxCustomTransparency);
        cboxTransparencyBand->setObjectName(QString::fromUtf8("cboxTransparencyBand"));
        cboxTransparencyBand->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cboxTransparencyBand->sizePolicy().hasHeightForWidth());
        cboxTransparencyBand->setSizePolicy(sizePolicy4);
        cboxTransparencyBand->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(cboxTransparencyBand);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 6, 0, 6);
        pbnExportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnExportTransparentPixelValues->setObjectName(QString::fromUtf8("pbnExportTransparentPixelValues"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportTransparentPixelValues->setIcon(icon);

        horizontalLayout->addWidget(pbnExportTransparentPixelValues);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbnImportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnImportTransparentPixelValues->setObjectName(QString::fromUtf8("pbnImportTransparentPixelValues"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnImportTransparentPixelValues->setIcon(icon1);

        horizontalLayout->addWidget(pbnImportTransparentPixelValues);

        pbnDefaultValues = new QToolButton(gboxCustomTransparency);
        pbnDefaultValues->setObjectName(QString::fromUtf8("pbnDefaultValues"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnDefaultValues->setIcon(icon2);

        horizontalLayout->addWidget(pbnDefaultValues);

        pbnRemoveSelectedRow = new QToolButton(gboxCustomTransparency);
        pbnRemoveSelectedRow->setObjectName(QString::fromUtf8("pbnRemoveSelectedRow"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveSelectedRow->setIcon(icon3);

        horizontalLayout->addWidget(pbnRemoveSelectedRow);

        pbnAddValuesFromDisplay = new QToolButton(gboxCustomTransparency);
        pbnAddValuesFromDisplay->setObjectName(QString::fromUtf8("pbnAddValuesFromDisplay"));
        pbnAddValuesFromDisplay->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionContextHelp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesFromDisplay->setIcon(icon4);

        horizontalLayout->addWidget(pbnAddValuesFromDisplay);

        pbnAddValuesManually = new QToolButton(gboxCustomTransparency);
        pbnAddValuesManually->setObjectName(QString::fromUtf8("pbnAddValuesManually"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesManually->setIcon(icon5);

        horizontalLayout->addWidget(pbnAddValuesManually);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);

        tableTransparency = new QTableWidget(gboxCustomTransparency);
        tableTransparency->setObjectName(QString::fromUtf8("tableTransparency"));
        tableTransparency->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableTransparency->setAlternatingRowColors(true);
        tableTransparency->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableTransparency->setShowGrid(false);
        tableTransparency->setRowCount(0);
        tableTransparency->setColumnCount(0);
        tableTransparency->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableTransparency, 3, 0, 1, 1);


        gridLayout->addWidget(gboxCustomTransparency, 2, 0, 1, 1);

        QWidget::setTabOrder(mOpacityWidget, mOpacityDDBtn);
        QWidget::setTabOrder(mOpacityDDBtn, mSrcNoDataValueCheckBox);
        QWidget::setTabOrder(mSrcNoDataValueCheckBox, leNoDataValue);
        QWidget::setTabOrder(leNoDataValue, mNodataColorButton);
        QWidget::setTabOrder(mNodataColorButton, pbnExportTransparentPixelValues);
        QWidget::setTabOrder(pbnExportTransparentPixelValues, pbnImportTransparentPixelValues);
        QWidget::setTabOrder(pbnImportTransparentPixelValues, pbnDefaultValues);
        QWidget::setTabOrder(pbnDefaultValues, pbnRemoveSelectedRow);
        QWidget::setTabOrder(pbnRemoveSelectedRow, pbnAddValuesFromDisplay);
        QWidget::setTabOrder(pbnAddValuesFromDisplay, pbnAddValuesManually);
        QWidget::setTabOrder(pbnAddValuesManually, tableTransparency);

        retranslateUi(QgsRasterTransparencyWidget);

        QMetaObject::connectSlotsByName(QgsRasterTransparencyWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterTransparencyWidget)
    {
        gboxGlobalTransp->setTitle(QCoreApplication::translate("QgsRasterTransparencyWidget", "Global Opacity", nullptr));
        mOpacityDDBtn->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", nullptr));
        gboxNoDataValue->setTitle(QCoreApplication::translate("QgsRasterTransparencyWidget", "NoData Value", nullptr));
        label->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "Display NoData as", nullptr));
#if QT_CONFIG(tooltip)
        lblUserNoDataValueLabel->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Additional user defined NoData value.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblUserNoDataValueLabel->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "Additional NoData value", nullptr));
#if QT_CONFIG(tooltip)
        mSrcNoDataValueCheckBox->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Use original source NoData value.", nullptr));
#endif // QT_CONFIG(tooltip)
        mSrcNoDataValueCheckBox->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "NoData value", nullptr));
#if QT_CONFIG(tooltip)
        lblSrcNoDataValue->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Original data source NoData value, if exists.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSrcNoDataValue->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "<src NoData value>", nullptr));
#if QT_CONFIG(tooltip)
        leNoDataValue->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Additional user defined NoData value.", nullptr));
#endif // QT_CONFIG(tooltip)
        mNodataColorButton->setText(QString());
        gboxCustomTransparency->setTitle(QCoreApplication::translate("QgsRasterTransparencyWidget", "Custom Transparency Options", nullptr));
        label_6->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "Transparent Pixel List", nullptr));
        lblTransparent->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "Transparency band", nullptr));
#if QT_CONFIG(tooltip)
        pbnExportTransparentPixelValues->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Export to file", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnExportTransparentPixelValues->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnImportTransparentPixelValues->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Import from file", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnImportTransparentPixelValues->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnDefaultValues->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Default values", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnDefaultValues->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnRemoveSelectedRow->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Remove selected row", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnRemoveSelectedRow->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnAddValuesFromDisplay->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Add values from display", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnAddValuesFromDisplay->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        pbnAddValuesManually->setToolTip(QCoreApplication::translate("QgsRasterTransparencyWidget", "Add values manually", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnAddValuesManually->setText(QCoreApplication::translate("QgsRasterTransparencyWidget", "\342\200\246", nullptr));
        (void)QgsRasterTransparencyWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsRasterTransparencyWidget: public Ui_QgsRasterTransparencyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERTRANSPARENCYWIDGET_H
