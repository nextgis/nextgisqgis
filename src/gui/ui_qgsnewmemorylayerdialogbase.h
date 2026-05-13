/********************************************************************************
** Form generated from reading UI file 'qgsnewmemorylayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWMEMORYLAYERDIALOGBASE_H
#define UI_QGSNEWMEMORYLAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <qgsprojectionselectionwidget.h>

QT_BEGIN_NAMESPACE

class Ui_QgsNewMemoryLayerDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *mNameLineEdit;
    QCheckBox *mGeometryWithMCheckBox;
    QgsProjectionSelectionWidget *mCrsSelector;
    QCheckBox *mGeometryWithZCheckBox;
    QDialogButtonBox *mButtonBox;
    QLabel *label;
    QComboBox *mGeometryTypeBox;
    QGroupBox *groupBox;
    QGridLayout *_2;
    QLabel *textLabel1;
    QLineEdit *mFieldNameEdit;
    QLabel *textLabel2;
    QComboBox *mTypeBox;
    QLabel *label_4;
    QLineEdit *mWidth;
    QLabel *label_5;
    QLineEdit *mPrecision;
    QToolButton *mAddAttributeButton;
    QGroupBox *groupBox_2;
    QGridLayout *_3;
    QVBoxLayout *pushBtnBox_2;
    QPushButton *mButtonUp;
    QPushButton *mButtonDown;
    QSpacerItem *verticalSpacer_2;
    QTreeWidget *mAttributeView;
    QToolButton *mRemoveAttributeButton;
    QLabel *label_3;

    void setupUi(QDialog *QgsNewMemoryLayerDialogBase)
    {
        if (QgsNewMemoryLayerDialogBase->objectName().isEmpty())
            QgsNewMemoryLayerDialogBase->setObjectName(QString::fromUtf8("QgsNewMemoryLayerDialogBase"));
        QgsNewMemoryLayerDialogBase->resize(507, 749);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewMemoryLayerDialogBase->sizePolicy().hasHeightForWidth());
        QgsNewMemoryLayerDialogBase->setSizePolicy(sizePolicy);
        QgsNewMemoryLayerDialogBase->setModal(true);
        gridLayout = new QGridLayout(QgsNewMemoryLayerDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(QgsNewMemoryLayerDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::TextFormat::AutoText);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 6, 0, 1, 3);

        mNameLineEdit = new QLineEdit(QgsNewMemoryLayerDialogBase);
        mNameLineEdit->setObjectName(QString::fromUtf8("mNameLineEdit"));

        gridLayout->addWidget(mNameLineEdit, 0, 1, 1, 2);

        mGeometryWithMCheckBox = new QCheckBox(QgsNewMemoryLayerDialogBase);
        mGeometryWithMCheckBox->setObjectName(QString::fromUtf8("mGeometryWithMCheckBox"));

        gridLayout->addWidget(mGeometryWithMCheckBox, 2, 2, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsNewMemoryLayerDialogBase);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout->addWidget(mCrsSelector, 3, 0, 1, 3);

        mGeometryWithZCheckBox = new QCheckBox(QgsNewMemoryLayerDialogBase);
        mGeometryWithZCheckBox->setObjectName(QString::fromUtf8("mGeometryWithZCheckBox"));

        gridLayout->addWidget(mGeometryWithZCheckBox, 2, 1, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsNewMemoryLayerDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Orientation::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(mButtonBox, 7, 0, 1, 3);

        label = new QLabel(QgsNewMemoryLayerDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mGeometryTypeBox = new QComboBox(QgsNewMemoryLayerDialogBase);
        mGeometryTypeBox->setObjectName(QString::fromUtf8("mGeometryTypeBox"));

        gridLayout->addWidget(mGeometryTypeBox, 1, 1, 1, 2);

        groupBox = new QGroupBox(QgsNewMemoryLayerDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        _2 = new QGridLayout(groupBox);
        _2->setSpacing(6);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName(QString::fromUtf8("_2"));
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        _2->addWidget(textLabel1, 0, 0, 1, 1);

        mFieldNameEdit = new QLineEdit(groupBox);
        mFieldNameEdit->setObjectName(QString::fromUtf8("mFieldNameEdit"));

        _2->addWidget(mFieldNameEdit, 0, 1, 1, 4);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        _2->addWidget(textLabel2, 1, 0, 1, 1);

        mTypeBox = new QComboBox(groupBox);
        mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));

        _2->addWidget(mTypeBox, 1, 1, 1, 4);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        _2->addWidget(label_4, 2, 0, 1, 1);

        mWidth = new QLineEdit(groupBox);
        mWidth->setObjectName(QString::fromUtf8("mWidth"));

        _2->addWidget(mWidth, 2, 1, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        _2->addWidget(label_5, 2, 3, 1, 1);

        mPrecision = new QLineEdit(groupBox);
        mPrecision->setObjectName(QString::fromUtf8("mPrecision"));

        _2->addWidget(mPrecision, 2, 4, 1, 1);

        mAddAttributeButton = new QToolButton(groupBox);
        mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy1);
        mAddAttributeButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon);
        mAddAttributeButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        _2->addWidget(mAddAttributeButton, 4, 4, 1, 1);


        gridLayout->addWidget(groupBox, 4, 0, 1, 3);

        groupBox_2 = new QGroupBox(QgsNewMemoryLayerDialogBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        _3 = new QGridLayout(groupBox_2);
        _3->setSpacing(6);
        _3->setContentsMargins(11, 11, 11, 11);
        _3->setObjectName(QString::fromUtf8("_3"));
        pushBtnBox_2 = new QVBoxLayout();
        pushBtnBox_2->setSpacing(4);
        pushBtnBox_2->setObjectName(QString::fromUtf8("pushBtnBox_2"));
        mButtonUp = new QPushButton(groupBox_2);
        mButtonUp->setObjectName(QString::fromUtf8("mButtonUp"));
        mButtonUp->setMaximumSize(QSize(50, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonUp->setIcon(icon1);

        pushBtnBox_2->addWidget(mButtonUp);

        mButtonDown = new QPushButton(groupBox_2);
        mButtonDown->setObjectName(QString::fromUtf8("mButtonDown"));
        mButtonDown->setMaximumSize(QSize(50, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonDown->setIcon(icon2);

        pushBtnBox_2->addWidget(mButtonDown);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pushBtnBox_2->addItem(verticalSpacer_2);

        pushBtnBox_2->setStretch(2, 1);

        _3->addLayout(pushBtnBox_2, 0, 2, 1, 1);

        mAttributeView = new QTreeWidget(groupBox_2);
        mAttributeView->setObjectName(QString::fromUtf8("mAttributeView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mAttributeView->sizePolicy().hasHeightForWidth());
        mAttributeView->setSizePolicy(sizePolicy2);
        mAttributeView->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
        mAttributeView->setAlternatingRowColors(true);
        mAttributeView->setRootIsDecorated(false);
        mAttributeView->setColumnCount(4);

        _3->addWidget(mAttributeView, 0, 0, 1, 2);

        mRemoveAttributeButton = new QToolButton(groupBox_2);
        mRemoveAttributeButton->setObjectName(QString::fromUtf8("mRemoveAttributeButton"));
        sizePolicy1.setHeightForWidth(mRemoveAttributeButton->sizePolicy().hasHeightForWidth());
        mRemoveAttributeButton->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAttributeButton->setIcon(icon3);
        mRemoveAttributeButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        _3->addWidget(mRemoveAttributeButton, 1, 1, 1, 1);

        _3->setColumnStretch(0, 1);

        gridLayout->addWidget(groupBox_2, 5, 0, 1, 3);

        label_3 = new QLabel(QgsNewMemoryLayerDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        textLabel1->setBuddy(mFieldNameEdit);
        textLabel2->setBuddy(mTypeBox);
        label_4->setBuddy(mWidth);
        label_5->setBuddy(mPrecision);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mNameLineEdit, mGeometryTypeBox);
        QWidget::setTabOrder(mGeometryTypeBox, mGeometryWithZCheckBox);
        QWidget::setTabOrder(mGeometryWithZCheckBox, mGeometryWithMCheckBox);
        QWidget::setTabOrder(mGeometryWithMCheckBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mFieldNameEdit);
        QWidget::setTabOrder(mFieldNameEdit, mTypeBox);
        QWidget::setTabOrder(mTypeBox, mWidth);
        QWidget::setTabOrder(mWidth, mPrecision);
        QWidget::setTabOrder(mPrecision, mAddAttributeButton);
        QWidget::setTabOrder(mAddAttributeButton, mAttributeView);
        QWidget::setTabOrder(mAttributeView, mButtonUp);
        QWidget::setTabOrder(mButtonUp, mButtonDown);
        QWidget::setTabOrder(mButtonDown, mRemoveAttributeButton);

        retranslateUi(QgsNewMemoryLayerDialogBase);

        QMetaObject::connectSlotsByName(QgsNewMemoryLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewMemoryLayerDialogBase)
    {
        QgsNewMemoryLayerDialogBase->setWindowTitle(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "New Temporary Scratch Layer", nullptr));
        label_2->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "<i><b>Warning:</b> Temporary scratch layers are not saved and will be discarded when QGIS is closed.</i>", nullptr));
        mGeometryWithMCheckBox->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Include M values", nullptr));
        mGeometryWithZCheckBox->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Include Z dimension", nullptr));
        label->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Layer name", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "New Field", nullptr));
        textLabel1->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Name", nullptr));
        textLabel2->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Type", nullptr));
        label_4->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Length", nullptr));
        label_5->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Precision", nullptr));
#if QT_CONFIG(tooltip)
        mAddAttributeButton->setToolTip(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Add field to list", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddAttributeButton->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Add to Fields List", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Fields List", nullptr));
#if QT_CONFIG(tooltip)
        mButtonUp->setToolTip(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mButtonDown->setToolTip(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = mAttributeView->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Precision", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Length", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mRemoveAttributeButton->setToolTip(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Delete selected field", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveAttributeButton->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Remove Field", nullptr));
        label_3->setText(QCoreApplication::translate("QgsNewMemoryLayerDialogBase", "Geometry type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewMemoryLayerDialogBase: public Ui_QgsNewMemoryLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWMEMORYLAYERDIALOGBASE_H
