/********************************************************************************
** Form generated from reading UI file 'qgsnewspatialitelayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWSPATIALITELAYERDIALOGBASE_H
#define UI_QGSNEWSPATIALITELAYERDIALOGBASE_H

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
#include "qgscollapsiblegroupbox.h"
#include "qgsproviderconnectioncombobox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewSpatialiteLayerDialogBase
{
public:
    QGridLayout *gridLayout_4;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QToolButton *toolButtonNewDatabase;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QToolButton *mRemoveAttributeButton;
    QTreeWidget *mAttributeView;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *pushBtnBox_3;
    QPushButton *mButtonUp;
    QPushButton *mButtonDown;
    QSpacerItem *verticalSpacer_3;
    QLabel *label1;
    QLabel *mFileFormatLabel;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QLabel *label_2;
    QLineEdit *leGeometryColumn;
    QCheckBox *checkBoxPrimaryKey;
    QLineEdit *leLayerName;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mGeometryWithZCheckBox;
    QCheckBox *mGeometryWithMCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *leSRID;
    QPushButton *pbnFindSRID;
    QComboBox *mGeometryTypeBox;
    QgsProviderConnectionComboBox *mDatabaseComboBox;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout_7;
    QLabel *textLabel1;
    QLineEdit *mNameEdit;
    QLabel *textLabel2;
    QComboBox *mTypeBox;
    QToolButton *mAddAttributeButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewSpatialiteLayerDialogBase)
    {
        if (QgsNewSpatialiteLayerDialogBase->objectName().isEmpty())
            QgsNewSpatialiteLayerDialogBase->setObjectName(QString::fromUtf8("QgsNewSpatialiteLayerDialogBase"));
        QgsNewSpatialiteLayerDialogBase->resize(470, 627);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewSpatialiteLayerDialogBase->sizePolicy().hasHeightForWidth());
        QgsNewSpatialiteLayerDialogBase->setSizePolicy(sizePolicy);
        QgsNewSpatialiteLayerDialogBase->setMinimumSize(QSize(351, 0));
        QgsNewSpatialiteLayerDialogBase->setMaximumSize(QSize(16777215, 16777215));
        QgsNewSpatialiteLayerDialogBase->setModal(true);
        gridLayout_4 = new QGridLayout(QgsNewSpatialiteLayerDialogBase);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea = new QgsScrollArea(QgsNewSpatialiteLayerDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 452, 577));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 2, 0, 1, 1);

        toolButtonNewDatabase = new QToolButton(scrollAreaWidgetContents);
        toolButtonNewDatabase->setObjectName(QString::fromUtf8("toolButtonNewDatabase"));

        gridLayout_5->addWidget(toolButtonNewDatabase, 0, 2, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mRemoveAttributeButton = new QToolButton(groupBox_2);
        mRemoveAttributeButton->setObjectName(QString::fromUtf8("mRemoveAttributeButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mRemoveAttributeButton->sizePolicy().hasHeightForWidth());
        mRemoveAttributeButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAttributeButton->setIcon(icon);
        mRemoveAttributeButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        gridLayout_3->addWidget(mRemoveAttributeButton, 2, 1, 1, 2);

        mAttributeView = new QTreeWidget(groupBox_2);
        mAttributeView->setObjectName(QString::fromUtf8("mAttributeView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mAttributeView->sizePolicy().hasHeightForWidth());
        mAttributeView->setSizePolicy(sizePolicy2);
        mAttributeView->setAlternatingRowColors(true);
        mAttributeView->setRootIsDecorated(false);
        mAttributeView->setColumnCount(2);

        gridLayout_3->addWidget(mAttributeView, 1, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 0, 1, 1);

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

        gridLayout_5->addWidget(groupBox_2, 6, 0, 1, 3);

        label1 = new QLabel(scrollAreaWidgetContents);
        label1->setObjectName(QString::fromUtf8("label1"));

        gridLayout_5->addWidget(label1, 1, 0, 1, 1);

        mFileFormatLabel = new QLabel(scrollAreaWidgetContents);
        mFileFormatLabel->setObjectName(QString::fromUtf8("mFileFormatLabel"));
        mFileFormatLabel->setEnabled(true);

        gridLayout_5->addWidget(mFileFormatLabel, 0, 0, 1, 1);

        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setProperty("collapsed", QVariant(true));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);

        leGeometryColumn = new QLineEdit(groupBox);
        leGeometryColumn->setObjectName(QString::fromUtf8("leGeometryColumn"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leGeometryColumn->sizePolicy().hasHeightForWidth());
        leGeometryColumn->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(leGeometryColumn, 0, 1, 1, 1);

        checkBoxPrimaryKey = new QCheckBox(groupBox);
        checkBoxPrimaryKey->setObjectName(QString::fromUtf8("checkBoxPrimaryKey"));
        checkBoxPrimaryKey->setChecked(true);

        gridLayout_6->addWidget(checkBoxPrimaryKey, 1, 0, 1, 2);


        gridLayout_5->addWidget(groupBox, 7, 0, 1, 3);

        leLayerName = new QLineEdit(scrollAreaWidgetContents);
        leLayerName->setObjectName(QString::fromUtf8("leLayerName"));
        sizePolicy3.setHeightForWidth(leLayerName->sizePolicy().hasHeightForWidth());
        leLayerName->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(leLayerName, 1, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mGeometryWithZCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mGeometryWithZCheckBox->setObjectName(QString::fromUtf8("mGeometryWithZCheckBox"));

        horizontalLayout_2->addWidget(mGeometryWithZCheckBox);

        mGeometryWithMCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mGeometryWithMCheckBox->setObjectName(QString::fromUtf8("mGeometryWithMCheckBox"));

        horizontalLayout_2->addWidget(mGeometryWithMCheckBox);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout_2, 3, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        leSRID = new QLineEdit(scrollAreaWidgetContents);
        leSRID->setObjectName(QString::fromUtf8("leSRID"));
        leSRID->setReadOnly(true);

        horizontalLayout_3->addWidget(leSRID);

        pbnFindSRID = new QPushButton(scrollAreaWidgetContents);
        pbnFindSRID->setObjectName(QString::fromUtf8("pbnFindSRID"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pbnFindSRID->sizePolicy().hasHeightForWidth());
        pbnFindSRID->setSizePolicy(sizePolicy4);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionSetProjection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnFindSRID->setIcon(icon3);

        horizontalLayout_3->addWidget(pbnFindSRID);


        gridLayout_5->addLayout(horizontalLayout_3, 4, 1, 1, 2);

        mGeometryTypeBox = new QComboBox(scrollAreaWidgetContents);
        mGeometryTypeBox->setObjectName(QString::fromUtf8("mGeometryTypeBox"));
        mGeometryTypeBox->setEnabled(true);
        sizePolicy3.setHeightForWidth(mGeometryTypeBox->sizePolicy().hasHeightForWidth());
        mGeometryTypeBox->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mGeometryTypeBox, 2, 1, 1, 2);

        mDatabaseComboBox = new QgsProviderConnectionComboBox(scrollAreaWidgetContents);
        mDatabaseComboBox->setObjectName(QString::fromUtf8("mDatabaseComboBox"));
        mDatabaseComboBox->setEnabled(true);
        sizePolicy3.setHeightForWidth(mDatabaseComboBox->sizePolicy().hasHeightForWidth());
        mDatabaseComboBox->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mDatabaseComboBox, 0, 1, 1, 1);

        groupBox1 = new QGroupBox(scrollAreaWidgetContents);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout_7 = new QGridLayout(groupBox1);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        textLabel1 = new QLabel(groupBox1);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy5);

        gridLayout_7->addWidget(textLabel1, 0, 0, 1, 1);

        mNameEdit = new QLineEdit(groupBox1);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));
        sizePolicy3.setHeightForWidth(mNameEdit->sizePolicy().hasHeightForWidth());
        mNameEdit->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(mNameEdit, 0, 1, 1, 2);

        textLabel2 = new QLabel(groupBox1);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        sizePolicy5.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy5);

        gridLayout_7->addWidget(textLabel2, 1, 0, 1, 1);

        mTypeBox = new QComboBox(groupBox1);
        mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));
        sizePolicy3.setHeightForWidth(mTypeBox->sizePolicy().hasHeightForWidth());
        mTypeBox->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(mTypeBox, 1, 1, 1, 2);

        mAddAttributeButton = new QToolButton(groupBox1);
        mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
        sizePolicy1.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy1);
        mAddAttributeButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon4);
        mAddAttributeButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        gridLayout_7->addWidget(mAddAttributeButton, 2, 2, 1, 1);


        gridLayout_5->addWidget(groupBox1, 5, 0, 1, 3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsNewSpatialiteLayerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        gridLayout_4->addWidget(buttonBox, 9, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(mGeometryTypeBox);
        label1->setBuddy(leLayerName);
        mFileFormatLabel->setBuddy(mDatabaseComboBox);
        label_2->setBuddy(leGeometryColumn);
        textLabel1->setBuddy(mNameEdit);
        textLabel2->setBuddy(mTypeBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, toolButtonNewDatabase);
        QWidget::setTabOrder(toolButtonNewDatabase, leLayerName);
        QWidget::setTabOrder(leLayerName, mGeometryTypeBox);
        QWidget::setTabOrder(mGeometryTypeBox, mGeometryWithZCheckBox);
        QWidget::setTabOrder(mGeometryWithZCheckBox, mGeometryWithMCheckBox);
        QWidget::setTabOrder(mGeometryWithMCheckBox, leSRID);
        QWidget::setTabOrder(leSRID, pbnFindSRID);
        QWidget::setTabOrder(pbnFindSRID, mNameEdit);
        QWidget::setTabOrder(mNameEdit, mTypeBox);
        QWidget::setTabOrder(mTypeBox, mAddAttributeButton);
        QWidget::setTabOrder(mAddAttributeButton, mAttributeView);
        QWidget::setTabOrder(mAttributeView, mButtonUp);
        QWidget::setTabOrder(mButtonUp, mButtonDown);
        QWidget::setTabOrder(mButtonDown, mRemoveAttributeButton);
        QWidget::setTabOrder(mRemoveAttributeButton, leGeometryColumn);
        QWidget::setTabOrder(leGeometryColumn, checkBoxPrimaryKey);

        retranslateUi(QgsNewSpatialiteLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewSpatialiteLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewSpatialiteLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewSpatialiteLayerDialogBase)
    {
        QgsNewSpatialiteLayerDialogBase->setWindowTitle(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "New SpatiaLite Layer", nullptr));
        label->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Geometry type", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonNewDatabase->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Create a new SpatiaLite database", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonNewDatabase->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "\342\200\246", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Fields List", nullptr));
#if QT_CONFIG(tooltip)
        mRemoveAttributeButton->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Delete selected field", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveAttributeButton->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Remove Field", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mAttributeView->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mButtonUp->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mButtonDown->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
        label1->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Layer name", nullptr));
        mFileFormatLabel->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Database", nullptr));
        groupBox->setProperty("title", QVariant(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Advanced Options", nullptr)));
        label_2->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Geometry column", nullptr));
#if QT_CONFIG(tooltip)
        leGeometryColumn->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Name of the geometry column", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBoxPrimaryKey->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Add an integer id field as the primary key for the new layer", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxPrimaryKey->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Create an autoincrementing primary key", nullptr));
#if QT_CONFIG(tooltip)
        leLayerName->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Name for the new layer", nullptr));
#endif // QT_CONFIG(tooltip)
        mGeometryWithZCheckBox->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Include Z dimension", nullptr));
        mGeometryWithMCheckBox->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Include M values", nullptr));
#if QT_CONFIG(tooltip)
        leSRID->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Spatial Reference Id", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbnFindSRID->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Specify the coordinate reference system of the layer's geometry.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mGeometryTypeBox->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "<html><head/><body><p>Geometry type</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox1->setTitle(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "New Field", nullptr));
        textLabel1->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mNameEdit->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "A field name", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel2->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Type", nullptr));
#if QT_CONFIG(tooltip)
        mAddAttributeButton->setToolTip(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Add field to list", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddAttributeButton->setText(QCoreApplication::translate("QgsNewSpatialiteLayerDialogBase", "Add to Fields List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewSpatialiteLayerDialogBase: public Ui_QgsNewSpatialiteLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWSPATIALITELAYERDIALOGBASE_H
