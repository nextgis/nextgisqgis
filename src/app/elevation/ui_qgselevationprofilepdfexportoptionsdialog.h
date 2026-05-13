/********************************************************************************
** Form generated from reading UI file 'qgselevationprofilepdfexportoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSELEVATIONPROFILEPDFEXPORTOPTIONSDIALOG_H
#define UI_QGSELEVATIONPROFILEPDFEXPORTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgsratiolockbutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsElevationProfilePdfExportOptionsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scrollAreaLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *mWidthLabel;
    QGridLayout *gridLayout_3;
    QgsLayoutUnitsComboBox *mSizeUnitsComboBox;
    QgsDoubleSpinBox *mWidthSpin;
    QHBoxLayout *_2;
    QgsRatioLockButton *mLockAspectRatio;
    QgsDoubleSpinBox *mHeightSpin;
    QLabel *mHeightLabel;
    QHBoxLayout *horizontalLayout;
    QComboBox *mPageSizeComboBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mPageOrientationComboBox;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsElevationProfilePdfExportOptionsDialogBase)
    {
        if (QgsElevationProfilePdfExportOptionsDialogBase->objectName().isEmpty())
            QgsElevationProfilePdfExportOptionsDialogBase->setObjectName(QString::fromUtf8("QgsElevationProfilePdfExportOptionsDialogBase"));
        QgsElevationProfilePdfExportOptionsDialogBase->resize(512, 506);
        verticalLayout = new QVBoxLayout(QgsElevationProfilePdfExportOptionsDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QgsScrollArea(QgsElevationProfilePdfExportOptionsDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 494, 455));
        scrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollAreaLayout->setObjectName(QString::fromUtf8("scrollAreaLayout"));
        scrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mWidthLabel = new QLabel(groupBox_2);
        mWidthLabel->setObjectName(QString::fromUtf8("mWidthLabel"));

        gridLayout->addWidget(mWidthLabel, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mSizeUnitsComboBox = new QgsLayoutUnitsComboBox(groupBox_2);
        mSizeUnitsComboBox->setObjectName(QString::fromUtf8("mSizeUnitsComboBox"));

        gridLayout_3->addWidget(mSizeUnitsComboBox, 0, 4, 2, 1);

        mWidthSpin = new QgsDoubleSpinBox(groupBox_2);
        mWidthSpin->setObjectName(QString::fromUtf8("mWidthSpin"));
        mWidthSpin->setDecimals(3);
        mWidthSpin->setMaximum(9999999.000000000000000);
        mWidthSpin->setValue(100.000000000000000);
        mWidthSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mWidthSpin, 0, 0, 1, 3);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(groupBox_2);
        mLockAspectRatio->setObjectName(QString::fromUtf8("mLockAspectRatio"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mLockAspectRatio);


        gridLayout_3->addLayout(_2, 0, 3, 2, 1);

        mHeightSpin = new QgsDoubleSpinBox(groupBox_2);
        mHeightSpin->setObjectName(QString::fromUtf8("mHeightSpin"));
        mHeightSpin->setDecimals(3);
        mHeightSpin->setMaximum(9999999.000000000000000);
        mHeightSpin->setValue(100.000000000000000);
        mHeightSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mHeightSpin, 1, 0, 1, 3);

        gridLayout_3->setColumnStretch(0, 1);

        gridLayout->addLayout(gridLayout_3, 3, 1, 2, 1);

        mHeightLabel = new QLabel(groupBox_2);
        mHeightLabel->setObjectName(QString::fromUtf8("mHeightLabel"));

        gridLayout->addWidget(mHeightLabel, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mPageSizeComboBox = new QComboBox(groupBox_2);
        mPageSizeComboBox->setObjectName(QString::fromUtf8("mPageSizeComboBox"));

        horizontalLayout->addWidget(mPageSizeComboBox);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mPageOrientationComboBox = new QComboBox(groupBox_2);
        mPageOrientationComboBox->setObjectName(QString::fromUtf8("mPageOrientationComboBox"));

        horizontalLayout_3->addWidget(mPageOrientationComboBox);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        scrollAreaLayout->addWidget(groupBox_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(QgsElevationProfilePdfExportOptionsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsElevationProfilePdfExportOptionsDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsElevationProfilePdfExportOptionsDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsElevationProfilePdfExportOptionsDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsElevationProfilePdfExportOptionsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsElevationProfilePdfExportOptionsDialogBase)
    {
        QgsElevationProfilePdfExportOptionsDialogBase->setWindowTitle(QCoreApplication::translate("QgsElevationProfilePdfExportOptionsDialogBase", "PDF Export Options", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsElevationProfilePdfExportOptionsDialogBase", "Page Size", nullptr));
        mWidthLabel->setText(QCoreApplication::translate("QgsElevationProfilePdfExportOptionsDialogBase", "Width", nullptr));
        mWidthSpin->setSuffix(QString());
#if QT_CONFIG(tooltip)
        mLockAspectRatio->setToolTip(QCoreApplication::translate("QgsElevationProfilePdfExportOptionsDialogBase", "Lock aspect ratio (including while drawing extent onto canvas)", nullptr));
#endif // QT_CONFIG(tooltip)
        mHeightSpin->setSuffix(QString());
        mHeightLabel->setText(QCoreApplication::translate("QgsElevationProfilePdfExportOptionsDialogBase", "Height", nullptr));
        label_3->setText(QCoreApplication::translate("QgsElevationProfilePdfExportOptionsDialogBase", "Size", nullptr));
        label_4->setText(QCoreApplication::translate("QgsElevationProfilePdfExportOptionsDialogBase", "Orientation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsElevationProfilePdfExportOptionsDialogBase: public Ui_QgsElevationProfilePdfExportOptionsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSELEVATIONPROFILEPDFEXPORTOPTIONSDIALOG_H
