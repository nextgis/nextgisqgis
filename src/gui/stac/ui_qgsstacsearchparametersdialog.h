/********************************************************************************
** Form generated from reading UI file 'qgsstacsearchparametersdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTACSEARCHPARAMETERSDIALOG_H
#define UI_QGSSTACSEARCHPARAMETERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsdatetimeedit.h"
#include "qgsextentwidget.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStacSearchParametersDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mSpatialGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsExtentWidget *mSpatialExtent;
    QgsCollapsibleGroupBox *mTemporalGroupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QgsDateTimeEdit *mFromDateTimeEdit;
    QLabel *label_2;
    QgsDateTimeEdit *mToDateTimeEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mTemporalToolButton;
    QgsCollapsibleGroupBox *mCollectionsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mCollectionsFilterLineEdit;
    QListView *mCollectionsListView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mSelectAllCollectionsButton;
    QPushButton *mDeselectAllCollectionsButton;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStacSearchParametersDialog)
    {
        if (QgsStacSearchParametersDialog->objectName().isEmpty())
            QgsStacSearchParametersDialog->setObjectName(QString::fromUtf8("QgsStacSearchParametersDialog"));
        QgsStacSearchParametersDialog->resize(486, 650);
        verticalLayout = new QVBoxLayout(QgsStacSearchParametersDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mSpatialGroupBox = new QgsCollapsibleGroupBox(QgsStacSearchParametersDialog);
        mSpatialGroupBox->setObjectName(QString::fromUtf8("mSpatialGroupBox"));
        mSpatialGroupBox->setCheckable(true);
        mSpatialGroupBox->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(mSpatialGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mSpatialExtent = new QgsExtentWidget(mSpatialGroupBox);
        mSpatialExtent->setObjectName(QString::fromUtf8("mSpatialExtent"));

        verticalLayout_3->addWidget(mSpatialExtent);


        verticalLayout->addWidget(mSpatialGroupBox);

        mTemporalGroupBox = new QgsCollapsibleGroupBox(QgsStacSearchParametersDialog);
        mTemporalGroupBox->setObjectName(QString::fromUtf8("mTemporalGroupBox"));
        mTemporalGroupBox->setCheckable(true);
        mTemporalGroupBox->setChecked(false);
        formLayout = new QFormLayout(mTemporalGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(mTemporalGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mFromDateTimeEdit = new QgsDateTimeEdit(mTemporalGroupBox);
        mFromDateTimeEdit->setObjectName(QString::fromUtf8("mFromDateTimeEdit"));
        mFromDateTimeEdit->setCurrentSection(QDateTimeEdit::Section::YearSection);
        mFromDateTimeEdit->setCalendarPopup(true);
        mFromDateTimeEdit->setTimeSpec(Qt::TimeSpec::UTC);

        formLayout->setWidget(0, QFormLayout::FieldRole, mFromDateTimeEdit);

        label_2 = new QLabel(mTemporalGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        mToDateTimeEdit = new QgsDateTimeEdit(mTemporalGroupBox);
        mToDateTimeEdit->setObjectName(QString::fromUtf8("mToDateTimeEdit"));
        mToDateTimeEdit->setCurrentSection(QDateTimeEdit::Section::YearSection);
        mToDateTimeEdit->setCalendarPopup(true);
        mToDateTimeEdit->setTimeSpec(Qt::TimeSpec::UTC);

        formLayout->setWidget(1, QFormLayout::FieldRole, mToDateTimeEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mTemporalToolButton = new QToolButton(mTemporalGroupBox);
        mTemporalToolButton->setObjectName(QString::fromUtf8("mTemporalToolButton"));

        horizontalLayout->addWidget(mTemporalToolButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addWidget(mTemporalGroupBox);

        mCollectionsGroupBox = new QgsCollapsibleGroupBox(QgsStacSearchParametersDialog);
        mCollectionsGroupBox->setObjectName(QString::fromUtf8("mCollectionsGroupBox"));
        mCollectionsGroupBox->setCheckable(true);
        mCollectionsGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(mCollectionsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mCollectionsFilterLineEdit = new QgsFilterLineEdit(mCollectionsGroupBox);
        mCollectionsFilterLineEdit->setObjectName(QString::fromUtf8("mCollectionsFilterLineEdit"));

        verticalLayout_2->addWidget(mCollectionsFilterLineEdit);

        mCollectionsListView = new QListView(mCollectionsGroupBox);
        mCollectionsListView->setObjectName(QString::fromUtf8("mCollectionsListView"));
        mCollectionsListView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        mCollectionsListView->setProperty("showDropIndicator", QVariant(false));

        verticalLayout_2->addWidget(mCollectionsListView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSelectAllCollectionsButton = new QPushButton(mCollectionsGroupBox);
        mSelectAllCollectionsButton->setObjectName(QString::fromUtf8("mSelectAllCollectionsButton"));

        horizontalLayout_2->addWidget(mSelectAllCollectionsButton);

        mDeselectAllCollectionsButton = new QPushButton(mCollectionsGroupBox);
        mDeselectAllCollectionsButton->setObjectName(QString::fromUtf8("mDeselectAllCollectionsButton"));

        horizontalLayout_2->addWidget(mDeselectAllCollectionsButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(mCollectionsGroupBox);

        buttonBox = new QDialogButtonBox(QgsStacSearchParametersDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsStacSearchParametersDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsStacSearchParametersDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStacSearchParametersDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsStacSearchParametersDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsStacSearchParametersDialog)
    {
        QgsStacSearchParametersDialog->setWindowTitle(QCoreApplication::translate("QgsStacSearchParametersDialog", "STAC Search Filters", nullptr));
        mSpatialGroupBox->setTitle(QCoreApplication::translate("QgsStacSearchParametersDialog", "Spatial Extent", nullptr));
        mTemporalGroupBox->setTitle(QCoreApplication::translate("QgsStacSearchParametersDialog", "Temporal Extent", nullptr));
        label->setText(QCoreApplication::translate("QgsStacSearchParametersDialog", "Start date", nullptr));
        mFromDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsStacSearchParametersDialog", "yyyy-MM-dd HH:mm:ss", nullptr));
        label_2->setText(QCoreApplication::translate("QgsStacSearchParametersDialog", "End date", nullptr));
        mToDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsStacSearchParametersDialog", "yyyy-MM-dd HH:mm:ss", nullptr));
        mTemporalToolButton->setText(QCoreApplication::translate("QgsStacSearchParametersDialog", "...", nullptr));
        mCollectionsGroupBox->setTitle(QCoreApplication::translate("QgsStacSearchParametersDialog", "Only search within specific collections", nullptr));
        mSelectAllCollectionsButton->setText(QCoreApplication::translate("QgsStacSearchParametersDialog", "Select all", nullptr));
        mDeselectAllCollectionsButton->setText(QCoreApplication::translate("QgsStacSearchParametersDialog", "Deselect all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsStacSearchParametersDialog: public Ui_QgsStacSearchParametersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTACSEARCHPARAMETERSDIALOG_H
