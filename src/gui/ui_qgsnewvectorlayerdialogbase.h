/********************************************************************************
** Form generated from reading UI file 'qgsnewvectorlayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWVECTORLAYERDIALOGBASE_H
#define UI_QGSNEWVECTORLAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <qgsprojectionselectionwidget.h>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewVectorLayerDialogBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QSpacerItem *spacer;
    QToolButton *mRemoveAttributeButton;
    QTreeWidget *mAttributeView;
    QVBoxLayout *pushBtnBox_3;
    QPushButton *mButtonUp;
    QPushButton *mButtonDown;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QLabel *textLabel1;
    QLineEdit *mNameEdit;
    QLabel *textLabel2;
    QComboBox *mTypeBox;
    QLabel *label;
    QLineEdit *mWidth;
    QLabel *label_2;
    QLineEdit *mPrecision;
    QToolButton *mAddAttributeButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *mGeometryTypeLabel;
    QLabel *mFileFormatLabel_2;
    QLabel *mFileFormatLabel;
    QLabel *mFileNameLabel;
    QLabel *mAdditionalDimensionsLabel;
    QRadioButton *mGeometryWithNoneRadioButton;
    QRadioButton *mGeometryWithZRadioButton;
    QgsProjectionSelectionWidget *mCrsSelector;
    QRadioButton *mGeometryWithMRadioButton;
    QComboBox *mFileEncoding;
    QComboBox *mFileFormatComboBox;
    QComboBox *mGeometryTypeBox;
    QgsFileWidget *mFileName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewVectorLayerDialogBase)
    {
        if (QgsNewVectorLayerDialogBase->objectName().isEmpty())
            QgsNewVectorLayerDialogBase->setObjectName(QString::fromUtf8("QgsNewVectorLayerDialogBase"));
        QgsNewVectorLayerDialogBase->resize(867, 993);
        QgsNewVectorLayerDialogBase->setModal(true);
        gridLayout = new QGridLayout(QgsNewVectorLayerDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(QgsNewVectorLayerDialogBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacer = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacer, 3, 0, 1, 1);

        mRemoveAttributeButton = new QToolButton(groupBox_2);
        mRemoveAttributeButton->setObjectName(QString::fromUtf8("mRemoveAttributeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRemoveAttributeButton->sizePolicy().hasHeightForWidth());
        mRemoveAttributeButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAttributeButton->setIcon(icon);
        mRemoveAttributeButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        gridLayout1->addWidget(mRemoveAttributeButton, 3, 1, 1, 1);

        mAttributeView = new QTreeWidget(groupBox_2);
        mAttributeView->setObjectName(QString::fromUtf8("mAttributeView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAttributeView->sizePolicy().hasHeightForWidth());
        mAttributeView->setSizePolicy(sizePolicy1);
        mAttributeView->setAlternatingRowColors(true);
        mAttributeView->setRootIsDecorated(false);
        mAttributeView->setColumnCount(4);

        gridLayout1->addWidget(mAttributeView, 2, 0, 1, 3);

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

        gridLayout1->addLayout(pushBtnBox_3, 2, 3, 1, 1);

        gridLayout1->setColumnStretch(0, 1);

        gridLayout->addWidget(groupBox_2, 11, 0, 1, 3);

        groupBox = new QGroupBox(QgsNewVectorLayerDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout2 = new QGridLayout(groupBox);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout2->addWidget(textLabel1, 0, 0, 1, 1);

        mNameEdit = new QLineEdit(groupBox);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

        gridLayout2->addWidget(mNameEdit, 0, 1, 1, 4);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout2->addWidget(textLabel2, 1, 0, 1, 1);

        mTypeBox = new QComboBox(groupBox);
        mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));

        gridLayout2->addWidget(mTypeBox, 1, 1, 1, 4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 2, 0, 1, 1);

        mWidth = new QLineEdit(groupBox);
        mWidth->setObjectName(QString::fromUtf8("mWidth"));

        gridLayout2->addWidget(mWidth, 2, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 2, 3, 1, 1);

        mPrecision = new QLineEdit(groupBox);
        mPrecision->setObjectName(QString::fromUtf8("mPrecision"));

        gridLayout2->addWidget(mPrecision, 2, 4, 1, 1);

        mAddAttributeButton = new QToolButton(groupBox);
        mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
        sizePolicy.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy);
        mAddAttributeButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon3);
        mAddAttributeButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        gridLayout2->addWidget(mAddAttributeButton, 4, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(horizontalSpacer, 4, 0, 1, 4);


        gridLayout->addWidget(groupBox, 10, 0, 1, 3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mGeometryTypeLabel = new QLabel(QgsNewVectorLayerDialogBase);
        mGeometryTypeLabel->setObjectName(QString::fromUtf8("mGeometryTypeLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mGeometryTypeLabel->sizePolicy().hasHeightForWidth());
        mGeometryTypeLabel->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(mGeometryTypeLabel, 3, 0, 1, 1);

        mFileFormatLabel_2 = new QLabel(QgsNewVectorLayerDialogBase);
        mFileFormatLabel_2->setObjectName(QString::fromUtf8("mFileFormatLabel_2"));
        mFileFormatLabel_2->setEnabled(true);
        sizePolicy2.setHeightForWidth(mFileFormatLabel_2->sizePolicy().hasHeightForWidth());
        mFileFormatLabel_2->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(mFileFormatLabel_2, 1, 0, 1, 1);

        mFileFormatLabel = new QLabel(QgsNewVectorLayerDialogBase);
        mFileFormatLabel->setObjectName(QString::fromUtf8("mFileFormatLabel"));
        mFileFormatLabel->setEnabled(true);
        sizePolicy2.setHeightForWidth(mFileFormatLabel->sizePolicy().hasHeightForWidth());
        mFileFormatLabel->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(mFileFormatLabel, 2, 0, 1, 1);

        mFileNameLabel = new QLabel(QgsNewVectorLayerDialogBase);
        mFileNameLabel->setObjectName(QString::fromUtf8("mFileNameLabel"));

        gridLayout_3->addWidget(mFileNameLabel, 0, 0, 1, 1);

        mAdditionalDimensionsLabel = new QLabel(QgsNewVectorLayerDialogBase);
        mAdditionalDimensionsLabel->setObjectName(QString::fromUtf8("mAdditionalDimensionsLabel"));
        sizePolicy2.setHeightForWidth(mAdditionalDimensionsLabel->sizePolicy().hasHeightForWidth());
        mAdditionalDimensionsLabel->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(mAdditionalDimensionsLabel, 4, 0, 1, 1);

        mGeometryWithNoneRadioButton = new QRadioButton(QgsNewVectorLayerDialogBase);
        mGeometryWithNoneRadioButton->setObjectName(QString::fromUtf8("mGeometryWithNoneRadioButton"));
        mGeometryWithNoneRadioButton->setChecked(true);
        mGeometryWithNoneRadioButton->setAutoExclusive(true);

        gridLayout_3->addWidget(mGeometryWithNoneRadioButton, 4, 1, 1, 1);

        mGeometryWithZRadioButton = new QRadioButton(QgsNewVectorLayerDialogBase);
        mGeometryWithZRadioButton->setObjectName(QString::fromUtf8("mGeometryWithZRadioButton"));
        mGeometryWithZRadioButton->setAutoExclusive(true);

        gridLayout_3->addWidget(mGeometryWithZRadioButton, 4, 2, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsNewVectorLayerDialogBase);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setMinimumSize(QSize(0, 20));
        mCrsSelector->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_3->addWidget(mCrsSelector, 5, 1, 1, 3);

        mGeometryWithMRadioButton = new QRadioButton(QgsNewVectorLayerDialogBase);
        mGeometryWithMRadioButton->setObjectName(QString::fromUtf8("mGeometryWithMRadioButton"));
        mGeometryWithMRadioButton->setAutoExclusive(true);

        gridLayout_3->addWidget(mGeometryWithMRadioButton, 4, 3, 1, 1);

        mFileEncoding = new QComboBox(QgsNewVectorLayerDialogBase);
        mFileEncoding->setObjectName(QString::fromUtf8("mFileEncoding"));
        mFileEncoding->setEnabled(true);

        gridLayout_3->addWidget(mFileEncoding, 1, 1, 1, 3);

        mFileFormatComboBox = new QComboBox(QgsNewVectorLayerDialogBase);
        mFileFormatComboBox->setObjectName(QString::fromUtf8("mFileFormatComboBox"));
        mFileFormatComboBox->setEnabled(true);

        gridLayout_3->addWidget(mFileFormatComboBox, 2, 1, 1, 3);

        mGeometryTypeBox = new QComboBox(QgsNewVectorLayerDialogBase);
        mGeometryTypeBox->setObjectName(QString::fromUtf8("mGeometryTypeBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mGeometryTypeBox->sizePolicy().hasHeightForWidth());
        mGeometryTypeBox->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(mGeometryTypeBox, 3, 1, 1, 3);

        mFileName = new QgsFileWidget(QgsNewVectorLayerDialogBase);
        mFileName->setObjectName(QString::fromUtf8("mFileName"));

        gridLayout_3->addWidget(mFileName, 0, 1, 1, 3);


        gridLayout->addLayout(gridLayout_3, 4, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QgsNewVectorLayerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 13, 0, 1, 3);

#if QT_CONFIG(shortcut)
        textLabel1->setBuddy(mNameEdit);
        textLabel2->setBuddy(mTypeBox);
        label->setBuddy(mWidth);
        label_2->setBuddy(mPrecision);
        mFileFormatLabel_2->setBuddy(mFileFormatComboBox);
        mFileFormatLabel->setBuddy(mFileFormatComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mFileEncoding, mFileFormatComboBox);
        QWidget::setTabOrder(mFileFormatComboBox, mGeometryTypeBox);
        QWidget::setTabOrder(mGeometryTypeBox, mGeometryWithNoneRadioButton);
        QWidget::setTabOrder(mGeometryWithNoneRadioButton, mGeometryWithZRadioButton);
        QWidget::setTabOrder(mGeometryWithZRadioButton, mGeometryWithMRadioButton);
        QWidget::setTabOrder(mGeometryWithMRadioButton, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mNameEdit);
        QWidget::setTabOrder(mNameEdit, mTypeBox);
        QWidget::setTabOrder(mTypeBox, mWidth);
        QWidget::setTabOrder(mWidth, mPrecision);
        QWidget::setTabOrder(mPrecision, mAddAttributeButton);
        QWidget::setTabOrder(mAddAttributeButton, mAttributeView);
        QWidget::setTabOrder(mAttributeView, mButtonUp);
        QWidget::setTabOrder(mButtonUp, mButtonDown);
        QWidget::setTabOrder(mButtonDown, mRemoveAttributeButton);

        retranslateUi(QgsNewVectorLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewVectorLayerDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewVectorLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewVectorLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewVectorLayerDialogBase)
    {
        QgsNewVectorLayerDialogBase->setWindowTitle(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "New Shapefile Layer", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Fields List", nullptr));
#if QT_CONFIG(tooltip)
        mRemoveAttributeButton->setToolTip(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Delete selected field", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveAttributeButton->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Remove Field", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mAttributeView->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Precision", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Length", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mButtonUp->setToolTip(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mButtonDown->setToolTip(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "New Field", nullptr));
        textLabel1->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Name", nullptr));
        textLabel2->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Type", nullptr));
        label->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Length", nullptr));
        label_2->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Precision", nullptr));
#if QT_CONFIG(tooltip)
        mAddAttributeButton->setToolTip(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Add field to list", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddAttributeButton->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Add to Fields List", nullptr));
        mGeometryTypeLabel->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Geometry type", nullptr));
        mFileFormatLabel_2->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "File encoding", nullptr));
        mFileFormatLabel->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "File format", nullptr));
        mFileNameLabel->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "File name", nullptr));
        mAdditionalDimensionsLabel->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Additional dimensions", nullptr));
        mGeometryWithNoneRadioButton->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "None", nullptr));
        mGeometryWithZRadioButton->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "Z (+ M values)", nullptr));
        mGeometryWithMRadioButton->setText(QCoreApplication::translate("QgsNewVectorLayerDialogBase", "M values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewVectorLayerDialogBase: public Ui_QgsNewVectorLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWVECTORLAYERDIALOGBASE_H
