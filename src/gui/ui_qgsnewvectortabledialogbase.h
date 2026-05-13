/********************************************************************************
** Form generated from reading UI file 'qgsnewvectortabledialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWVECTORTABLEDIALOGBASE_H
#define UI_QGSNEWVECTORTABLEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewVectorTableDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *mButtonBox;
    QGridLayout *mGeomLayout;
    QCheckBox *mHasMChk;
    QLabel *mGeomColumnLabel;
    QCheckBox *mHasZChk;
    QFrame *mValidationFrame;
    QGridLayout *gridLayout_3;
    QLabel *mValidationResults;
    QLabel *mWarningIcon;
    QLineEdit *mGeomColumn;
    QLabel *label_4;
    QLabel *mDimensionsLabel;
    QComboBox *mGeomTypeCbo;
    QLabel *label_3;
    QLabel *mCrsLabel;
    QLabel *mSpatialIndexLabel;
    QCheckBox *mSpatialIndexChk;
    QgsProjectionSelectionWidget *mCrs;
    QVBoxLayout *mButtonsLayout;
    QPushButton *mAddFieldBtn;
    QPushButton *mDeleteFieldBtn;
    QSpacerItem *spacer2;
    QPushButton *mFieldUpBtn;
    QPushButton *mFieldDownBtn;
    QTableView *mFieldsTableView;
    QGridLayout *mNamesLAyout;
    QLabel *mSchemaLabel;
    QComboBox *mSchemaCbo;
    QLabel *label;
    QLineEdit *mTableName;

    void setupUi(QDialog *QgsNewVectorTableDialogBase)
    {
        if (QgsNewVectorTableDialogBase->objectName().isEmpty())
            QgsNewVectorTableDialogBase->setObjectName(QString::fromUtf8("QgsNewVectorTableDialogBase"));
        QgsNewVectorTableDialogBase->setWindowModality(Qt::WindowModal);
        QgsNewVectorTableDialogBase->resize(936, 562);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewVectorTableDialogBase->sizePolicy().hasHeightForWidth());
        QgsNewVectorTableDialogBase->setSizePolicy(sizePolicy);
        QgsNewVectorTableDialogBase->setMinimumSize(QSize(0, 0));
        QgsNewVectorTableDialogBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsNewVectorTableDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mButtonBox = new QDialogButtonBox(QgsNewVectorTableDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(mButtonBox, 3, 0, 1, 2);

        mGeomLayout = new QGridLayout();
        mGeomLayout->setObjectName(QString::fromUtf8("mGeomLayout"));
        mHasMChk = new QCheckBox(QgsNewVectorTableDialogBase);
        mHasMChk->setObjectName(QString::fromUtf8("mHasMChk"));

        mGeomLayout->addWidget(mHasMChk, 2, 2, 1, 1);

        mGeomColumnLabel = new QLabel(QgsNewVectorTableDialogBase);
        mGeomColumnLabel->setObjectName(QString::fromUtf8("mGeomColumnLabel"));
        mGeomColumnLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mGeomLayout->addWidget(mGeomColumnLabel, 1, 0, 1, 1);

        mHasZChk = new QCheckBox(QgsNewVectorTableDialogBase);
        mHasZChk->setObjectName(QString::fromUtf8("mHasZChk"));

        mGeomLayout->addWidget(mHasZChk, 2, 1, 1, 1);

        mValidationFrame = new QFrame(QgsNewVectorTableDialogBase);
        mValidationFrame->setObjectName(QString::fromUtf8("mValidationFrame"));
        mValidationFrame->setAutoFillBackground(false);
        mValidationFrame->setStyleSheet(QString::fromUtf8("background-color: rgba(255,165,0,0.3);"));
        mValidationFrame->setFrameShape(QFrame::StyledPanel);
        mValidationFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(mValidationFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(9, 9, 9, 9);
        mValidationResults = new QLabel(mValidationFrame);
        mValidationResults->setObjectName(QString::fromUtf8("mValidationResults"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mValidationResults->sizePolicy().hasHeightForWidth());
        mValidationResults->setSizePolicy(sizePolicy1);
        mValidationResults->setAutoFillBackground(false);
        mValidationResults->setStyleSheet(QString::fromUtf8("background: transparent;"));
        mValidationResults->setFrameShape(QFrame::NoFrame);
        mValidationResults->setFrameShadow(QFrame::Plain);
        mValidationResults->setLineWidth(0);
        mValidationResults->setMargin(0);

        gridLayout_3->addWidget(mValidationResults, 0, 1, 1, 1);

        mWarningIcon = new QLabel(mValidationFrame);
        mWarningIcon->setObjectName(QString::fromUtf8("mWarningIcon"));
        mWarningIcon->setStyleSheet(QString::fromUtf8("background: transparent;"));
        mWarningIcon->setFrameShadow(QFrame::Plain);
        mWarningIcon->setLineWidth(0);
        mWarningIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/mIconWarning.svg")));
        mWarningIcon->setMargin(0);

        gridLayout_3->addWidget(mWarningIcon, 0, 0, 1, 1);


        mGeomLayout->addWidget(mValidationFrame, 5, 0, 1, 4);

        mGeomColumn = new QLineEdit(QgsNewVectorTableDialogBase);
        mGeomColumn->setObjectName(QString::fromUtf8("mGeomColumn"));
        mGeomColumn->setText(QString::fromUtf8("geom"));

        mGeomLayout->addWidget(mGeomColumn, 1, 1, 1, 2);

        label_4 = new QLabel(QgsNewVectorTableDialogBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        mGeomLayout->addWidget(label_4, 0, 3, 1, 1);

        mDimensionsLabel = new QLabel(QgsNewVectorTableDialogBase);
        mDimensionsLabel->setObjectName(QString::fromUtf8("mDimensionsLabel"));
        mDimensionsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mGeomLayout->addWidget(mDimensionsLabel, 2, 0, 1, 1);

        mGeomTypeCbo = new QComboBox(QgsNewVectorTableDialogBase);
        mGeomTypeCbo->setObjectName(QString::fromUtf8("mGeomTypeCbo"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mGeomTypeCbo->sizePolicy().hasHeightForWidth());
        mGeomTypeCbo->setSizePolicy(sizePolicy3);

        mGeomLayout->addWidget(mGeomTypeCbo, 0, 1, 1, 2);

        label_3 = new QLabel(QgsNewVectorTableDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mGeomLayout->addWidget(label_3, 0, 0, 1, 1);

        mCrsLabel = new QLabel(QgsNewVectorTableDialogBase);
        mCrsLabel->setObjectName(QString::fromUtf8("mCrsLabel"));
        mCrsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mGeomLayout->addWidget(mCrsLabel, 3, 0, 1, 1);

        mSpatialIndexLabel = new QLabel(QgsNewVectorTableDialogBase);
        mSpatialIndexLabel->setObjectName(QString::fromUtf8("mSpatialIndexLabel"));
        mSpatialIndexLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mGeomLayout->addWidget(mSpatialIndexLabel, 4, 0, 1, 1);

        mSpatialIndexChk = new QCheckBox(QgsNewVectorTableDialogBase);
        mSpatialIndexChk->setObjectName(QString::fromUtf8("mSpatialIndexChk"));
        mSpatialIndexChk->setChecked(true);

        mGeomLayout->addWidget(mSpatialIndexChk, 4, 1, 1, 1);

        mCrs = new QgsProjectionSelectionWidget(QgsNewVectorTableDialogBase);
        mCrs->setObjectName(QString::fromUtf8("mCrs"));

        mGeomLayout->addWidget(mCrs, 3, 1, 1, 2);


        gridLayout_2->addLayout(mGeomLayout, 2, 0, 1, 2);

        mButtonsLayout = new QVBoxLayout();
        mButtonsLayout->setObjectName(QString::fromUtf8("mButtonsLayout"));
        mAddFieldBtn = new QPushButton(QgsNewVectorTableDialogBase);
        mAddFieldBtn->setObjectName(QString::fromUtf8("mAddFieldBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddFieldBtn->setIcon(icon);

        mButtonsLayout->addWidget(mAddFieldBtn);

        mDeleteFieldBtn = new QPushButton(QgsNewVectorTableDialogBase);
        mDeleteFieldBtn->setObjectName(QString::fromUtf8("mDeleteFieldBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteFieldBtn->setIcon(icon1);

        mButtonsLayout->addWidget(mDeleteFieldBtn);

        spacer2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mButtonsLayout->addItem(spacer2);

        mFieldUpBtn = new QPushButton(QgsNewVectorTableDialogBase);
        mFieldUpBtn->setObjectName(QString::fromUtf8("mFieldUpBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFieldUpBtn->setIcon(icon2);

        mButtonsLayout->addWidget(mFieldUpBtn);

        mFieldDownBtn = new QPushButton(QgsNewVectorTableDialogBase);
        mFieldDownBtn->setObjectName(QString::fromUtf8("mFieldDownBtn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFieldDownBtn->setIcon(icon3);

        mButtonsLayout->addWidget(mFieldDownBtn);


        gridLayout_2->addLayout(mButtonsLayout, 1, 1, 1, 1);

        mFieldsTableView = new QTableView(QgsNewVectorTableDialogBase);
        mFieldsTableView->setObjectName(QString::fromUtf8("mFieldsTableView"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mFieldsTableView->sizePolicy().hasHeightForWidth());
        mFieldsTableView->setSizePolicy(sizePolicy4);
        mFieldsTableView->setMinimumSize(QSize(800, 0));
        mFieldsTableView->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mFieldsTableView->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(mFieldsTableView, 1, 0, 1, 1);

        mNamesLAyout = new QGridLayout();
        mNamesLAyout->setObjectName(QString::fromUtf8("mNamesLAyout"));
        mSchemaLabel = new QLabel(QgsNewVectorTableDialogBase);
        mSchemaLabel->setObjectName(QString::fromUtf8("mSchemaLabel"));
        mSchemaLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mNamesLAyout->addWidget(mSchemaLabel, 0, 0, 1, 2);

        mSchemaCbo = new QComboBox(QgsNewVectorTableDialogBase);
        mSchemaCbo->setObjectName(QString::fromUtf8("mSchemaCbo"));

        mNamesLAyout->addWidget(mSchemaCbo, 0, 2, 1, 1);

        label = new QLabel(QgsNewVectorTableDialogBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mNamesLAyout->addWidget(label, 1, 0, 1, 2);

        mTableName = new QLineEdit(QgsNewVectorTableDialogBase);
        mTableName->setObjectName(QString::fromUtf8("mTableName"));
        mTableName->setText(QString::fromUtf8(""));

        mNamesLAyout->addWidget(mTableName, 1, 2, 1, 1);


        gridLayout_2->addLayout(mNamesLAyout, 0, 0, 1, 2);

        QWidget::setTabOrder(mSchemaCbo, mTableName);
        QWidget::setTabOrder(mTableName, mFieldsTableView);
        QWidget::setTabOrder(mFieldsTableView, mAddFieldBtn);
        QWidget::setTabOrder(mAddFieldBtn, mDeleteFieldBtn);
        QWidget::setTabOrder(mDeleteFieldBtn, mFieldUpBtn);
        QWidget::setTabOrder(mFieldUpBtn, mFieldDownBtn);
        QWidget::setTabOrder(mFieldDownBtn, mGeomTypeCbo);
        QWidget::setTabOrder(mGeomTypeCbo, mGeomColumn);
        QWidget::setTabOrder(mGeomColumn, mHasZChk);
        QWidget::setTabOrder(mHasZChk, mHasMChk);
        QWidget::setTabOrder(mHasMChk, mSpatialIndexChk);

        retranslateUi(QgsNewVectorTableDialogBase);
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsNewVectorTableDialogBase, SLOT(reject()));
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsNewVectorTableDialogBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsNewVectorTableDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewVectorTableDialogBase)
    {
        QgsNewVectorTableDialogBase->setWindowTitle(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Create Table", nullptr));
        mHasMChk->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Include values (M)", nullptr));
        mGeomColumnLabel->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Geometry column name", nullptr));
        mHasZChk->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Include Z dimension", nullptr));
        mValidationResults->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Validation results", nullptr));
        mWarningIcon->setText(QString());
        label_4->setText(QString());
        mDimensionsLabel->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Dimensions", nullptr));
        mGeomTypeCbo->setCurrentText(QString());
        label_3->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Geometry type", nullptr));
        mCrsLabel->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "CRS", nullptr));
        mSpatialIndexLabel->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Create spatial index", nullptr));
        mSpatialIndexChk->setText(QString());
        mAddFieldBtn->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Add Field", nullptr));
        mDeleteFieldBtn->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Remove Field", nullptr));
        mFieldUpBtn->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Up", nullptr));
        mFieldDownBtn->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Down", nullptr));
        mSchemaLabel->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Schema", nullptr));
        label->setText(QCoreApplication::translate("QgsNewVectorTableDialogBase", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewVectorTableDialogBase: public Ui_QgsNewVectorTableDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWVECTORTABLEDIALOGBASE_H
