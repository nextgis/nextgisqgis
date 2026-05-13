/********************************************************************************
** Form generated from reading UI file 'qgslayoutnewpagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTNEWPAGEDIALOG_H
#define UI_QGSLAYOUTNEWPAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgsratiolockbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutNewPageDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *mWidthLabel;
    QComboBox *mPageOrientationComboBox;
    QLabel *label_4;
    QComboBox *mPageSizeComboBox;
    QLabel *mHeightLabel;
    QGridLayout *gridLayout_3;
    QgsLayoutUnitsComboBox *mSizeUnitsComboBox;
    QHBoxLayout *_2;
    QgsRatioLockButton *mLockAspectRatio;
    QgsDoubleSpinBox *mWidthSpin;
    QgsDoubleSpinBox *mHeightSpin;
    QGridLayout *gridLayout_4;
    QgsSpinBox *mPagesSpinBox;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *mPositionComboBox;
    QgsSpinBox *mExistingPageSpinBox;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QgsLayoutNewPageDialog)
    {
        if (QgsLayoutNewPageDialog->objectName().isEmpty())
            QgsLayoutNewPageDialog->setObjectName(QString::fromUtf8("QgsLayoutNewPageDialog"));
        QgsLayoutNewPageDialog->resize(415, 321);
        gridLayout_2 = new QGridLayout(QgsLayoutNewPageDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(QgsLayoutNewPageDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mWidthLabel = new QLabel(groupBox);
        mWidthLabel->setObjectName(QString::fromUtf8("mWidthLabel"));

        gridLayout->addWidget(mWidthLabel, 2, 0, 1, 1);

        mPageOrientationComboBox = new QComboBox(groupBox);
        mPageOrientationComboBox->setObjectName(QString::fromUtf8("mPageOrientationComboBox"));

        gridLayout->addWidget(mPageOrientationComboBox, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        mPageSizeComboBox = new QComboBox(groupBox);
        mPageSizeComboBox->setObjectName(QString::fromUtf8("mPageSizeComboBox"));

        gridLayout->addWidget(mPageSizeComboBox, 0, 1, 1, 1);

        mHeightLabel = new QLabel(groupBox);
        mHeightLabel->setObjectName(QString::fromUtf8("mHeightLabel"));

        gridLayout->addWidget(mHeightLabel, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mSizeUnitsComboBox = new QgsLayoutUnitsComboBox(groupBox);
        mSizeUnitsComboBox->setObjectName(QString::fromUtf8("mSizeUnitsComboBox"));

        gridLayout_3->addWidget(mSizeUnitsComboBox, 0, 4, 2, 1);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(groupBox);
        mLockAspectRatio->setObjectName(QString::fromUtf8("mLockAspectRatio"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mLockAspectRatio);


        gridLayout_3->addLayout(_2, 0, 3, 2, 1);

        mWidthSpin = new QgsDoubleSpinBox(groupBox);
        mWidthSpin->setObjectName(QString::fromUtf8("mWidthSpin"));
        mWidthSpin->setDecimals(3);
        mWidthSpin->setMaximum(9999999.000000000000000);
        mWidthSpin->setValue(100.000000000000000);
        mWidthSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mWidthSpin, 0, 0, 1, 3);

        mHeightSpin = new QgsDoubleSpinBox(groupBox);
        mHeightSpin->setObjectName(QString::fromUtf8("mHeightSpin"));
        mHeightSpin->setDecimals(3);
        mHeightSpin->setMaximum(9999999.000000000000000);
        mHeightSpin->setValue(100.000000000000000);
        mHeightSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mHeightSpin, 1, 0, 1, 3);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(4, 1);

        gridLayout->addLayout(gridLayout_3, 2, 1, 2, 1);

        gridLayout->setColumnStretch(1, 1);

        gridLayout_2->addWidget(groupBox, 3, 0, 1, 4);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mPagesSpinBox = new QgsSpinBox(QgsLayoutNewPageDialog);
        mPagesSpinBox->setObjectName(QString::fromUtf8("mPagesSpinBox"));
        mPagesSpinBox->setMinimum(1);

        gridLayout_4->addWidget(mPagesSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(QgsLayoutNewPageDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 3, 1, 1);

        label = new QLabel(QgsLayoutNewPageDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        mPositionComboBox = new QComboBox(QgsLayoutNewPageDialog);
        mPositionComboBox->addItem(QString());
        mPositionComboBox->addItem(QString());
        mPositionComboBox->addItem(QString());
        mPositionComboBox->setObjectName(QString::fromUtf8("mPositionComboBox"));

        gridLayout_4->addWidget(mPositionComboBox, 1, 0, 1, 2);

        mExistingPageSpinBox = new QgsSpinBox(QgsLayoutNewPageDialog);
        mExistingPageSpinBox->setObjectName(QString::fromUtf8("mExistingPageSpinBox"));
        mExistingPageSpinBox->setMinimum(1);

        gridLayout_4->addWidget(mExistingPageSpinBox, 1, 2, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);
        gridLayout_4->setColumnStretch(3, 1);

        gridLayout_2->addLayout(gridLayout_4, 1, 0, 1, 4);

        buttonBox = new QDialogButtonBox(QgsLayoutNewPageDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 5, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 2, 1, 1);

        QWidget::setTabOrder(mPagesSpinBox, mPositionComboBox);
        QWidget::setTabOrder(mPositionComboBox, mExistingPageSpinBox);
        QWidget::setTabOrder(mExistingPageSpinBox, mPageSizeComboBox);
        QWidget::setTabOrder(mPageSizeComboBox, mPageOrientationComboBox);
        QWidget::setTabOrder(mPageOrientationComboBox, mWidthSpin);
        QWidget::setTabOrder(mWidthSpin, mHeightSpin);
        QWidget::setTabOrder(mHeightSpin, mLockAspectRatio);
        QWidget::setTabOrder(mLockAspectRatio, mSizeUnitsComboBox);

        retranslateUi(QgsLayoutNewPageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLayoutNewPageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLayoutNewPageDialog, SLOT(reject()));

        mPositionComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QgsLayoutNewPageDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutNewPageDialog)
    {
        QgsLayoutNewPageDialog->setWindowTitle(QCoreApplication::translate("QgsLayoutNewPageDialog", "Insert Pages", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutNewPageDialog", "Page Size", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLayoutNewPageDialog", "Size", nullptr));
        mWidthLabel->setText(QCoreApplication::translate("QgsLayoutNewPageDialog", "Width", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayoutNewPageDialog", "Orientation", nullptr));
        mHeightLabel->setText(QCoreApplication::translate("QgsLayoutNewPageDialog", "Height", nullptr));
#if QT_CONFIG(tooltip)
        mLockAspectRatio->setToolTip(QCoreApplication::translate("QgsLayoutNewPageDialog", "Lock aspect ratio (including while drawing extent onto canvas)", nullptr));
#endif // QT_CONFIG(tooltip)
        mWidthSpin->setSuffix(QString());
        mHeightSpin->setSuffix(QString());
        label_2->setText(QCoreApplication::translate("QgsLayoutNewPageDialog", "page(s)", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutNewPageDialog", "Insert", nullptr));
        mPositionComboBox->setItemText(0, QCoreApplication::translate("QgsLayoutNewPageDialog", "Before Page", nullptr));
        mPositionComboBox->setItemText(1, QCoreApplication::translate("QgsLayoutNewPageDialog", "After Page", nullptr));
        mPositionComboBox->setItemText(2, QCoreApplication::translate("QgsLayoutNewPageDialog", "At End", nullptr));

    } // retranslateUi

};

namespace Ui {
    class QgsLayoutNewPageDialog: public Ui_QgsLayoutNewPageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTNEWPAGEDIALOG_H
