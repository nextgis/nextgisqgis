/********************************************************************************
** Form generated from reading UI file 'qgsanimationexportdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANIMATIONEXPORTDIALOGBASE_H
#define UI_QGSANIMATIONEXPORTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsextentgroupbox.h"
#include "qgsfilewidget.h"
#include "qgsratiolockbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnimationExportDialogBase
{
public:
    QGridLayout *gridLayout_5;
    QLabel *mOutputDirLabel_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QDateTimeEdit *mEndDateTime;
    QLabel *label_5;
    QDateTimeEdit *mStartDateTime;
    QToolButton *mSetToProjectTimeButton;
    QLabel *label_2;
    QgsDoubleSpinBox *mFrameDurationSpinBox;
    QComboBox *mTimeStepsComboBox;
    QCheckBox *mCumulativeTemporalRange;
    QSpacerItem *verticalSpacer;
    QLabel *mTemplateLabel_2;
    QLineEdit *mTemplateLineEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QgsSpinBox *mOutputHeightSpinBox;
    QgsSpinBox *mOutputWidthSpinBox;
    QgsRatioLockButton *mLockAspectRatio;
    QgsExtentGroupBox *mExtentGroupBox;
    QLabel *label_4;
    QCheckBox *mDrawDecorations;
    QgsFileWidget *mOutputDirFileWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAnimationExportDialogBase)
    {
        if (QgsAnimationExportDialogBase->objectName().isEmpty())
            QgsAnimationExportDialogBase->setObjectName(QString::fromUtf8("QgsAnimationExportDialogBase"));
        QgsAnimationExportDialogBase->resize(600, 456);
        gridLayout_5 = new QGridLayout(QgsAnimationExportDialogBase);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mOutputDirLabel_2 = new QLabel(QgsAnimationExportDialogBase);
        mOutputDirLabel_2->setObjectName(QString::fromUtf8("mOutputDirLabel_2"));

        gridLayout_5->addWidget(mOutputDirLabel_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(QgsAnimationExportDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        mEndDateTime = new QDateTimeEdit(groupBox);
        mEndDateTime->setObjectName(QString::fromUtf8("mEndDateTime"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEndDateTime->sizePolicy().hasHeightForWidth());
        mEndDateTime->setSizePolicy(sizePolicy);
        mEndDateTime->setTimeSpec(Qt::UTC);

        gridLayout->addWidget(mEndDateTime, 0, 4, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        mStartDateTime = new QDateTimeEdit(groupBox);
        mStartDateTime->setObjectName(QString::fromUtf8("mStartDateTime"));
        sizePolicy.setHeightForWidth(mStartDateTime->sizePolicy().hasHeightForWidth());
        mStartDateTime->setSizePolicy(sizePolicy);
        mStartDateTime->setTimeSpec(Qt::UTC);

        gridLayout->addWidget(mStartDateTime, 0, 2, 1, 1);

        mSetToProjectTimeButton = new QToolButton(groupBox);
        mSetToProjectTimeButton->setObjectName(QString::fromUtf8("mSetToProjectTimeButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSetToProjectTimeButton->setIcon(icon);
        mSetToProjectTimeButton->setAutoRaise(true);

        gridLayout->addWidget(mSetToProjectTimeButton, 0, 5, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mFrameDurationSpinBox = new QgsDoubleSpinBox(groupBox);
        mFrameDurationSpinBox->setObjectName(QString::fromUtf8("mFrameDurationSpinBox"));
        mFrameDurationSpinBox->setDecimals(3);
        mFrameDurationSpinBox->setMaximum(9999999999.000000000000000);

        gridLayout->addWidget(mFrameDurationSpinBox, 1, 2, 1, 1);

        mTimeStepsComboBox = new QComboBox(groupBox);
        mTimeStepsComboBox->setObjectName(QString::fromUtf8("mTimeStepsComboBox"));
        mTimeStepsComboBox->setEditable(false);

        gridLayout->addWidget(mTimeStepsComboBox, 1, 3, 1, 3);

        mCumulativeTemporalRange = new QCheckBox(groupBox);
        mCumulativeTemporalRange->setObjectName(QString::fromUtf8("mCumulativeTemporalRange"));

        gridLayout->addWidget(mCumulativeTemporalRange, 2, 2, 1, 4);


        gridLayout_5->addWidget(groupBox, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 6, 0, 1, 1);

        mTemplateLabel_2 = new QLabel(QgsAnimationExportDialogBase);
        mTemplateLabel_2->setObjectName(QString::fromUtf8("mTemplateLabel_2"));

        gridLayout_5->addWidget(mTemplateLabel_2, 0, 0, 1, 1);

        mTemplateLineEdit = new QLineEdit(QgsAnimationExportDialogBase);
        mTemplateLineEdit->setObjectName(QString::fromUtf8("mTemplateLineEdit"));

        gridLayout_5->addWidget(mTemplateLineEdit, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(QgsAnimationExportDialogBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        mOutputHeightSpinBox = new QgsSpinBox(groupBox_2);
        mOutputHeightSpinBox->setObjectName(QString::fromUtf8("mOutputHeightSpinBox"));
        mOutputHeightSpinBox->setMinimum(1);
        mOutputHeightSpinBox->setMaximum(99999);
        mOutputHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mOutputHeightSpinBox, 2, 1, 1, 1);

        mOutputWidthSpinBox = new QgsSpinBox(groupBox_2);
        mOutputWidthSpinBox->setObjectName(QString::fromUtf8("mOutputWidthSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOutputWidthSpinBox->sizePolicy().hasHeightForWidth());
        mOutputWidthSpinBox->setSizePolicy(sizePolicy1);
        mOutputWidthSpinBox->setMinimum(1);
        mOutputWidthSpinBox->setMaximum(99999);
        mOutputWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mOutputWidthSpinBox, 1, 1, 1, 1);

        mLockAspectRatio = new QgsRatioLockButton(groupBox_2);
        mLockAspectRatio->setObjectName(QString::fromUtf8("mLockAspectRatio"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy2);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        gridLayout_3->addWidget(mLockAspectRatio, 1, 2, 2, 1);

        mExtentGroupBox = new QgsExtentGroupBox(groupBox_2);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));
        mExtentGroupBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(mExtentGroupBox, 0, 0, 1, 3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        mDrawDecorations = new QCheckBox(groupBox_2);
        mDrawDecorations->setObjectName(QString::fromUtf8("mDrawDecorations"));
        mDrawDecorations->setChecked(true);

        gridLayout_3->addWidget(mDrawDecorations, 3, 0, 1, 2);


        gridLayout_5->addWidget(groupBox_2, 2, 0, 1, 2);

        mOutputDirFileWidget = new QgsFileWidget(QgsAnimationExportDialogBase);
        mOutputDirFileWidget->setObjectName(QString::fromUtf8("mOutputDirFileWidget"));

        gridLayout_5->addWidget(mOutputDirFileWidget, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsAnimationExportDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        gridLayout_5->addWidget(buttonBox, 7, 0, 1, 2);

        QWidget::setTabOrder(mTemplateLineEdit, mExtentGroupBox);
        QWidget::setTabOrder(mExtentGroupBox, mOutputWidthSpinBox);
        QWidget::setTabOrder(mOutputWidthSpinBox, mOutputHeightSpinBox);
        QWidget::setTabOrder(mOutputHeightSpinBox, mLockAspectRatio);
        QWidget::setTabOrder(mLockAspectRatio, mDrawDecorations);
        QWidget::setTabOrder(mDrawDecorations, mStartDateTime);
        QWidget::setTabOrder(mStartDateTime, mEndDateTime);
        QWidget::setTabOrder(mEndDateTime, mSetToProjectTimeButton);
        QWidget::setTabOrder(mSetToProjectTimeButton, mFrameDurationSpinBox);
        QWidget::setTabOrder(mFrameDurationSpinBox, mTimeStepsComboBox);

        retranslateUi(QgsAnimationExportDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAnimationExportDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAnimationExportDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAnimationExportDialogBase)
    {
        QgsAnimationExportDialogBase->setWindowTitle(QCoreApplication::translate("QgsAnimationExportDialogBase", "Export Map Animation", nullptr));
        mOutputDirLabel_2->setText(QCoreApplication::translate("QgsAnimationExportDialogBase", "Output directory", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsAnimationExportDialogBase", "Temporal Settings", nullptr));
        label_6->setText(QCoreApplication::translate("QgsAnimationExportDialogBase", "Range", nullptr));
        mEndDateTime->setDisplayFormat(QCoreApplication::translate("QgsAnimationExportDialogBase", "M/d/yyyy h:mm AP", nullptr));
        label_5->setText(QCoreApplication::translate("QgsAnimationExportDialogBase", "to ", nullptr));
        mStartDateTime->setDisplayFormat(QCoreApplication::translate("QgsAnimationExportDialogBase", "M/d/yyyy h:mm AP", nullptr));
#if QT_CONFIG(tooltip)
        mSetToProjectTimeButton->setToolTip(QCoreApplication::translate("QgsAnimationExportDialogBase", "Set to the project fixed time extent or the extent from the project's layers", nullptr));
#endif // QT_CONFIG(tooltip)
        mSetToProjectTimeButton->setText(QString());
        label_2->setText(QCoreApplication::translate("QgsAnimationExportDialogBase", "Step (frame length)", nullptr));
        mTimeStepsComboBox->setCurrentText(QString());
        mCumulativeTemporalRange->setText(QCoreApplication::translate("QgsAnimationExportDialogBase", "Cumulative range", nullptr));
        mTemplateLabel_2->setText(QCoreApplication::translate("QgsAnimationExportDialogBase", "Template", nullptr));
#if QT_CONFIG(tooltip)
        mTemplateLineEdit->setToolTip(QCoreApplication::translate("QgsAnimationExportDialogBase", "Number of # represents number of digits (e.g. frame###.png -> frame001.png)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("QgsAnimationExportDialogBase", "Map Settings", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAnimationExportDialogBase", "Output width", nullptr));
        mOutputHeightSpinBox->setSuffix(QCoreApplication::translate("QgsAnimationExportDialogBase", " px", nullptr));
        mOutputHeightSpinBox->setPrefix(QString());
        mOutputWidthSpinBox->setSuffix(QCoreApplication::translate("QgsAnimationExportDialogBase", " px", nullptr));
        mOutputWidthSpinBox->setPrefix(QString());
#if QT_CONFIG(tooltip)
        mLockAspectRatio->setToolTip(QCoreApplication::translate("QgsAnimationExportDialogBase", "Lock aspect ratio (including while drawing extent onto canvas)", nullptr));
#endif // QT_CONFIG(tooltip)
        mExtentGroupBox->setTitle(QCoreApplication::translate("QgsAnimationExportDialogBase", "Extent", nullptr));
        label_4->setText(QCoreApplication::translate("QgsAnimationExportDialogBase", "Output height", nullptr));
        mDrawDecorations->setText(QCoreApplication::translate("QgsAnimationExportDialogBase", "Draw active decorations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAnimationExportDialogBase: public Ui_QgsAnimationExportDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANIMATIONEXPORTDIALOGBASE_H
