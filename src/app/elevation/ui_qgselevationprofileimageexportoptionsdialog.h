/********************************************************************************
** Form generated from reading UI file 'qgselevationprofileimageexportoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSELEVATIONPROFILEIMAGEEXPORTOPTIONSDIALOG_H
#define UI_QGSELEVATIONPROFILEIMAGEEXPORTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsElevationProfileImageExportOptionsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scrollAreaLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_3;
    QgsSpinBox *mWidthSpinBox;
    QgsSpinBox *mHeightSpinBox;
    QLabel *label_10;
    QWidget *widget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsElevationProfileImageExportOptionsDialogBase)
    {
        if (QgsElevationProfileImageExportOptionsDialogBase->objectName().isEmpty())
            QgsElevationProfileImageExportOptionsDialogBase->setObjectName(QString::fromUtf8("QgsElevationProfileImageExportOptionsDialogBase"));
        QgsElevationProfileImageExportOptionsDialogBase->resize(512, 209);
        verticalLayout = new QVBoxLayout(QgsElevationProfileImageExportOptionsDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QgsScrollArea(QgsElevationProfileImageExportOptionsDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 500, 141));
        scrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollAreaLayout->setObjectName(QString::fromUtf8("scrollAreaLayout"));
        scrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 1, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        mWidthSpinBox = new QgsSpinBox(groupBox);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        mWidthSpinBox->setMinimum(0);
        mWidthSpinBox->setMaximum(99999999);
        mWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mWidthSpinBox, 0, 2, 1, 2);

        mHeightSpinBox = new QgsSpinBox(groupBox);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        mHeightSpinBox->setMinimum(0);
        mHeightSpinBox->setMaximum(99999999);
        mHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mHeightSpinBox, 1, 2, 1, 2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);


        scrollAreaLayout->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        widget = new QWidget(QgsElevationProfileImageExportOptionsDialogBase);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(QgsElevationProfileImageExportOptionsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsElevationProfileImageExportOptionsDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsElevationProfileImageExportOptionsDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsElevationProfileImageExportOptionsDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsElevationProfileImageExportOptionsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsElevationProfileImageExportOptionsDialogBase)
    {
        QgsElevationProfileImageExportOptionsDialogBase->setWindowTitle(QCoreApplication::translate("QgsElevationProfileImageExportOptionsDialogBase", "Image Export Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsElevationProfileImageExportOptionsDialogBase", "Export Options", nullptr));
        label_13->setText(QCoreApplication::translate("QgsElevationProfileImageExportOptionsDialogBase", "Image height", nullptr));
        mWidthSpinBox->setSpecialValueText(QCoreApplication::translate("QgsElevationProfileImageExportOptionsDialogBase", "Auto", nullptr));
        mWidthSpinBox->setSuffix(QCoreApplication::translate("QgsElevationProfileImageExportOptionsDialogBase", " px", nullptr));
        mWidthSpinBox->setPrefix(QString());
        mHeightSpinBox->setSpecialValueText(QCoreApplication::translate("QgsElevationProfileImageExportOptionsDialogBase", "Auto", nullptr));
        mHeightSpinBox->setSuffix(QCoreApplication::translate("QgsElevationProfileImageExportOptionsDialogBase", " px", nullptr));
        mHeightSpinBox->setPrefix(QString());
        label_10->setText(QCoreApplication::translate("QgsElevationProfileImageExportOptionsDialogBase", "Image width", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsElevationProfileImageExportOptionsDialogBase: public Ui_QgsElevationProfileImageExportOptionsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSELEVATIONPROFILEIMAGEEXPORTOPTIONSDIALOG_H
