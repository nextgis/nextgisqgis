/********************************************************************************
** Form generated from reading UI file 'qgsnewgeopackagelayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWGEOPACKAGELAYERDIALOGBASE_H
#define UI_QGSNEWGEOPACKAGELAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgsprojectionselectionwidget.h>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewGeoPackageLayerDialogBase
{
public:
    QGridLayout *gridLayout_4;
    QDialogButtonBox *buttonBox;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_51;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *mLayerIdentifierLabel;
    QLineEdit *mLayerIdentifierEdit;
    QLabel *mLayerDescriptionLabel;
    QLineEdit *mLayerDescriptionEdit;
    QLabel *mFeatureIdLabel;
    QLineEdit *mFeatureIdColumnEdit;
    QLabel *mGeometryColumnLabel;
    QLineEdit *mGeometryColumnEdit;
    QCheckBox *mCheckBoxCreateSpatialIndex;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QToolButton *mRemoveAttributeButton;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *mAttributeView;
    QVBoxLayout *pushBtnBox_3;
    QPushButton *mButtonUp;
    QPushButton *mButtonDown;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_3;
    QGridLayout *_2;
    QLineEdit *mFieldNameEdit;
    QComboBox *mFieldTypeBox;
    QLabel *mFieldLengthLabel;
    QLabel *mFieldNameLabel;
    QToolButton *mAddAttributeButton;
    QLabel *mFieldTypeLabel;
    QLineEdit *mFieldLengthEdit;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QgsFileWidget *mFileName;
    QLabel *mGeometryTypeLabel;
    QLineEdit *mTableNameEdit;
    QLabel *mFileNameLabel;
    QLabel *mTableNameLabel;
    QComboBox *mGeometryTypeBox;
    QHBoxLayout *horizontalZMLayout;
    QCheckBox *mGeometryWithZCheckBox;
    QCheckBox *mGeometryWithMCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QgsProjectionSelectionWidget *mCrsSelector;

    void setupUi(QDialog *QgsNewGeoPackageLayerDialogBase)
    {
        if (QgsNewGeoPackageLayerDialogBase->objectName().isEmpty())
            QgsNewGeoPackageLayerDialogBase->setObjectName(QString::fromUtf8("QgsNewGeoPackageLayerDialogBase"));
        QgsNewGeoPackageLayerDialogBase->resize(548, 771);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewGeoPackageLayerDialogBase->sizePolicy().hasHeightForWidth());
        QgsNewGeoPackageLayerDialogBase->setSizePolicy(sizePolicy);
        QgsNewGeoPackageLayerDialogBase->setMinimumSize(QSize(351, 0));
        QgsNewGeoPackageLayerDialogBase->setMaximumSize(QSize(16777215, 16777215));
        QgsNewGeoPackageLayerDialogBase->setModal(true);
        gridLayout_4 = new QGridLayout(QgsNewGeoPackageLayerDialogBase);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        buttonBox = new QDialogButtonBox(QgsNewGeoPackageLayerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        gridLayout_4->addWidget(buttonBox, 9, 0, 1, 1);

        scrollArea = new QgsScrollArea(QgsNewGeoPackageLayerDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 530, 721));
        gridLayout_51 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_51->setSpacing(6);
        gridLayout_51->setContentsMargins(11, 11, 11, 11);
        gridLayout_51->setObjectName(QString::fromUtf8("gridLayout_51"));
        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setProperty("collapsed", QVariant(true));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mLayerIdentifierLabel = new QLabel(groupBox);
        mLayerIdentifierLabel->setObjectName(QString::fromUtf8("mLayerIdentifierLabel"));

        gridLayout_5->addWidget(mLayerIdentifierLabel, 1, 0, 1, 1);

        mLayerIdentifierEdit = new QLineEdit(groupBox);
        mLayerIdentifierEdit->setObjectName(QString::fromUtf8("mLayerIdentifierEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLayerIdentifierEdit->sizePolicy().hasHeightForWidth());
        mLayerIdentifierEdit->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(mLayerIdentifierEdit, 1, 2, 1, 1);

        mLayerDescriptionLabel = new QLabel(groupBox);
        mLayerDescriptionLabel->setObjectName(QString::fromUtf8("mLayerDescriptionLabel"));

        gridLayout_5->addWidget(mLayerDescriptionLabel, 2, 0, 1, 1);

        mLayerDescriptionEdit = new QLineEdit(groupBox);
        mLayerDescriptionEdit->setObjectName(QString::fromUtf8("mLayerDescriptionEdit"));
        sizePolicy1.setHeightForWidth(mLayerDescriptionEdit->sizePolicy().hasHeightForWidth());
        mLayerDescriptionEdit->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(mLayerDescriptionEdit, 2, 2, 1, 1);

        mFeatureIdLabel = new QLabel(groupBox);
        mFeatureIdLabel->setObjectName(QString::fromUtf8("mFeatureIdLabel"));

        gridLayout_5->addWidget(mFeatureIdLabel, 3, 0, 1, 1);

        mFeatureIdColumnEdit = new QLineEdit(groupBox);
        mFeatureIdColumnEdit->setObjectName(QString::fromUtf8("mFeatureIdColumnEdit"));
        sizePolicy1.setHeightForWidth(mFeatureIdColumnEdit->sizePolicy().hasHeightForWidth());
        mFeatureIdColumnEdit->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(mFeatureIdColumnEdit, 3, 2, 1, 1);

        mGeometryColumnLabel = new QLabel(groupBox);
        mGeometryColumnLabel->setObjectName(QString::fromUtf8("mGeometryColumnLabel"));

        gridLayout_5->addWidget(mGeometryColumnLabel, 4, 0, 1, 1);

        mGeometryColumnEdit = new QLineEdit(groupBox);
        mGeometryColumnEdit->setObjectName(QString::fromUtf8("mGeometryColumnEdit"));
        sizePolicy1.setHeightForWidth(mGeometryColumnEdit->sizePolicy().hasHeightForWidth());
        mGeometryColumnEdit->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(mGeometryColumnEdit, 4, 2, 1, 1);

        mCheckBoxCreateSpatialIndex = new QCheckBox(groupBox);
        mCheckBoxCreateSpatialIndex->setObjectName(QString::fromUtf8("mCheckBoxCreateSpatialIndex"));

        gridLayout_5->addWidget(mCheckBoxCreateSpatialIndex, 5, 2, 1, 1);


        gridLayout_51->addWidget(groupBox, 5, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mRemoveAttributeButton = new QToolButton(groupBox_2);
        mRemoveAttributeButton->setObjectName(QString::fromUtf8("mRemoveAttributeButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mRemoveAttributeButton->sizePolicy().hasHeightForWidth());
        mRemoveAttributeButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAttributeButton->setIcon(icon);
        mRemoveAttributeButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        gridLayout_3->addWidget(mRemoveAttributeButton, 2, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        mAttributeView = new QTreeWidget(groupBox_2);
        mAttributeView->setObjectName(QString::fromUtf8("mAttributeView"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mAttributeView->sizePolicy().hasHeightForWidth());
        mAttributeView->setSizePolicy(sizePolicy3);
        mAttributeView->setAlternatingRowColors(true);
        mAttributeView->setRootIsDecorated(false);
        mAttributeView->setColumnCount(3);

        gridLayout_3->addWidget(mAttributeView, 1, 0, 1, 3);

        pushBtnBox_3 = new QVBoxLayout();
        pushBtnBox_3->setSpacing(4);
        pushBtnBox_3->setObjectName(QString::fromUtf8("pushBtnBox_3"));
        mButtonUp = new QPushButton(groupBox_2);
        mButtonUp->setObjectName(QString::fromUtf8("mButtonUp"));
        mButtonUp->setMaximumSize(QSize(50, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonUp->setIcon(icon1);

        pushBtnBox_3->addWidget(mButtonUp);

        mButtonDown = new QPushButton(groupBox_2);
        mButtonDown->setObjectName(QString::fromUtf8("mButtonDown"));
        mButtonDown->setMaximumSize(QSize(50, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonDown->setIcon(icon2);

        pushBtnBox_3->addWidget(mButtonDown);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pushBtnBox_3->addItem(verticalSpacer_3);

        pushBtnBox_3->setStretch(2, 1);

        gridLayout_3->addLayout(pushBtnBox_3, 1, 3, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout_51->addWidget(groupBox_2, 4, 0, 1, 1);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        _2 = new QGridLayout(groupBox_3);
        _2->setSpacing(6);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName(QString::fromUtf8("_2"));
        mFieldNameEdit = new QLineEdit(groupBox_3);
        mFieldNameEdit->setObjectName(QString::fromUtf8("mFieldNameEdit"));

        _2->addWidget(mFieldNameEdit, 0, 1, 1, 3);

        mFieldTypeBox = new QComboBox(groupBox_3);
        mFieldTypeBox->setObjectName(QString::fromUtf8("mFieldTypeBox"));

        _2->addWidget(mFieldTypeBox, 1, 1, 1, 3);

        mFieldLengthLabel = new QLabel(groupBox_3);
        mFieldLengthLabel->setObjectName(QString::fromUtf8("mFieldLengthLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mFieldLengthLabel->sizePolicy().hasHeightForWidth());
        mFieldLengthLabel->setSizePolicy(sizePolicy4);

        _2->addWidget(mFieldLengthLabel, 2, 0, 1, 1);

        mFieldNameLabel = new QLabel(groupBox_3);
        mFieldNameLabel->setObjectName(QString::fromUtf8("mFieldNameLabel"));

        _2->addWidget(mFieldNameLabel, 0, 0, 1, 1);

        mAddAttributeButton = new QToolButton(groupBox_3);
        mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy5);
        mAddAttributeButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon3);
        mAddAttributeButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        _2->addWidget(mAddAttributeButton, 4, 3, 1, 1);

        mFieldTypeLabel = new QLabel(groupBox_3);
        mFieldTypeLabel->setObjectName(QString::fromUtf8("mFieldTypeLabel"));

        _2->addWidget(mFieldTypeLabel, 1, 0, 1, 1);

        mFieldLengthEdit = new QLineEdit(groupBox_3);
        mFieldLengthEdit->setObjectName(QString::fromUtf8("mFieldLengthEdit"));

        _2->addWidget(mFieldLengthEdit, 2, 1, 1, 3);


        gridLayout_51->addWidget(groupBox_3, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFileName = new QgsFileWidget(scrollAreaWidgetContents);
        mFileName->setObjectName(QString::fromUtf8("mFileName"));
        sizePolicy1.setHeightForWidth(mFileName->sizePolicy().hasHeightForWidth());
        mFileName->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mFileName);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        mGeometryTypeLabel = new QLabel(scrollAreaWidgetContents);
        mGeometryTypeLabel->setObjectName(QString::fromUtf8("mGeometryTypeLabel"));
        mGeometryTypeLabel->setEnabled(true);

        gridLayout_2->addWidget(mGeometryTypeLabel, 2, 0, 1, 1);

        mTableNameEdit = new QLineEdit(scrollAreaWidgetContents);
        mTableNameEdit->setObjectName(QString::fromUtf8("mTableNameEdit"));
        sizePolicy1.setHeightForWidth(mTableNameEdit->sizePolicy().hasHeightForWidth());
        mTableNameEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mTableNameEdit, 1, 1, 1, 1);

        mFileNameLabel = new QLabel(scrollAreaWidgetContents);
        mFileNameLabel->setObjectName(QString::fromUtf8("mFileNameLabel"));
        mFileNameLabel->setEnabled(true);

        gridLayout_2->addWidget(mFileNameLabel, 0, 0, 1, 1);

        mTableNameLabel = new QLabel(scrollAreaWidgetContents);
        mTableNameLabel->setObjectName(QString::fromUtf8("mTableNameLabel"));

        gridLayout_2->addWidget(mTableNameLabel, 1, 0, 1, 1);

        mGeometryTypeBox = new QComboBox(scrollAreaWidgetContents);
        mGeometryTypeBox->setObjectName(QString::fromUtf8("mGeometryTypeBox"));
        mGeometryTypeBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(mGeometryTypeBox->sizePolicy().hasHeightForWidth());
        mGeometryTypeBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mGeometryTypeBox, 2, 1, 1, 1);

        horizontalZMLayout = new QHBoxLayout();
        horizontalZMLayout->setSpacing(6);
        horizontalZMLayout->setObjectName(QString::fromUtf8("horizontalZMLayout"));
        mGeometryWithZCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mGeometryWithZCheckBox->setObjectName(QString::fromUtf8("mGeometryWithZCheckBox"));

        horizontalZMLayout->addWidget(mGeometryWithZCheckBox);

        mGeometryWithMCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mGeometryWithMCheckBox->setObjectName(QString::fromUtf8("mGeometryWithMCheckBox"));

        horizontalZMLayout->addWidget(mGeometryWithMCheckBox);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalZMLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalZMLayout, 3, 1, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(scrollAreaWidgetContents);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_2->addWidget(mCrsSelector, 4, 1, 1, 1);


        gridLayout_51->addLayout(gridLayout_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        mLayerIdentifierLabel->setBuddy(mLayerIdentifierEdit);
        mLayerDescriptionLabel->setBuddy(mLayerIdentifierEdit);
        mFeatureIdLabel->setBuddy(mGeometryColumnEdit);
        mGeometryColumnLabel->setBuddy(mGeometryColumnEdit);
        mFieldNameLabel->setBuddy(mFieldNameEdit);
        mFieldTypeLabel->setBuddy(mFieldTypeBox);
        mTableNameLabel->setBuddy(mLayerIdentifierEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, mTableNameEdit);
        QWidget::setTabOrder(mTableNameEdit, mGeometryTypeBox);
        QWidget::setTabOrder(mGeometryTypeBox, mGeometryWithZCheckBox);
        QWidget::setTabOrder(mGeometryWithZCheckBox, mGeometryWithMCheckBox);
        QWidget::setTabOrder(mGeometryWithMCheckBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mFieldNameEdit);
        QWidget::setTabOrder(mFieldNameEdit, mFieldTypeBox);
        QWidget::setTabOrder(mFieldTypeBox, mFieldLengthEdit);
        QWidget::setTabOrder(mFieldLengthEdit, mAddAttributeButton);
        QWidget::setTabOrder(mAddAttributeButton, mAttributeView);
        QWidget::setTabOrder(mAttributeView, mButtonUp);
        QWidget::setTabOrder(mButtonUp, mButtonDown);
        QWidget::setTabOrder(mButtonDown, mRemoveAttributeButton);
        QWidget::setTabOrder(mRemoveAttributeButton, mLayerIdentifierEdit);
        QWidget::setTabOrder(mLayerIdentifierEdit, mLayerDescriptionEdit);
        QWidget::setTabOrder(mLayerDescriptionEdit, mFeatureIdColumnEdit);
        QWidget::setTabOrder(mFeatureIdColumnEdit, mGeometryColumnEdit);
        QWidget::setTabOrder(mGeometryColumnEdit, mCheckBoxCreateSpatialIndex);

        retranslateUi(QgsNewGeoPackageLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewGeoPackageLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewGeoPackageLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewGeoPackageLayerDialogBase)
    {
        QgsNewGeoPackageLayerDialogBase->setWindowTitle(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "New GeoPackage Layer", nullptr));
        groupBox->setProperty("title", QVariant(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Advanced Options", nullptr)));
        mLayerIdentifierLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Layer identifier", nullptr));
#if QT_CONFIG(tooltip)
        mLayerIdentifierEdit->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Human-readable identifier (e.g. short name) for the layer content</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mLayerDescriptionLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Layer description", nullptr));
#if QT_CONFIG(tooltip)
        mLayerDescriptionEdit->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Human-readable description for the layer content</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mFeatureIdLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Feature id column", nullptr));
#if QT_CONFIG(tooltip)
        mFeatureIdColumnEdit->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Name of the feature id column</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mGeometryColumnLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Geometry column", nullptr));
#if QT_CONFIG(tooltip)
        mGeometryColumnEdit->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Name of the geometry column</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mCheckBoxCreateSpatialIndex->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Create a spatial index for this layer", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxCreateSpatialIndex->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Create a spatial index", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Fields List", nullptr));
#if QT_CONFIG(tooltip)
        mRemoveAttributeButton->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Delete selected field", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveAttributeButton->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Remove Field", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mAttributeView->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Length", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mButtonUp->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mButtonDown->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "New Field", nullptr));
        mFieldLengthLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Maximum length", nullptr));
        mFieldNameLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mAddAttributeButton->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Add field to list", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddAttributeButton->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Add to Fields List", nullptr));
        mFieldTypeLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Type", nullptr));
#if QT_CONFIG(tooltip)
        mFieldLengthEdit->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Field length / width</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mFileName->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Existing or new GeoPackage database file name</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mGeometryTypeLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Geometry type", nullptr));
#if QT_CONFIG(tooltip)
        mTableNameEdit->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Table name in the database</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mFileNameLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "File name", nullptr));
        mTableNameLabel->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Table name", nullptr));
#if QT_CONFIG(tooltip)
        mGeometryTypeBox->setToolTip(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "<html><head/><body><p>Geometry type</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mGeometryWithZCheckBox->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Include Z dimension", nullptr));
        mGeometryWithMCheckBox->setText(QCoreApplication::translate("QgsNewGeoPackageLayerDialogBase", "Include M values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewGeoPackageLayerDialogBase: public Ui_QgsNewGeoPackageLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWGEOPACKAGELAYERDIALOGBASE_H
