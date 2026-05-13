/********************************************************************************
** Form generated from reading UI file 'qgsbookmarkeditordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBOOKMARKEDITORDIALOG_H
#define UI_QGSBOOKMARKEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsdoublespinbox.h"
#include "qgsextentgroupbox.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsBookmarkEditorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *lblRotation;
    QLabel *lblCRS;
    QComboBox *mSaveLocation;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *lblSaveLocation;
    QLabel *lblName;
    QLabel *lblGroup;
    QLineEdit *mName;
    QComboBox *mGroup;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsDoubleSpinBox *mRotation;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsBookmarkEditorDialog)
    {
        if (QgsBookmarkEditorDialog->objectName().isEmpty())
            QgsBookmarkEditorDialog->setObjectName(QString::fromUtf8("QgsBookmarkEditorDialog"));
        QgsBookmarkEditorDialog->resize(600, 429);
        verticalLayout = new QVBoxLayout(QgsBookmarkEditorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblRotation = new QLabel(QgsBookmarkEditorDialog);
        lblRotation->setObjectName(QString::fromUtf8("lblRotation"));

        gridLayout->addWidget(lblRotation, 3, 0, 1, 1);

        lblCRS = new QLabel(QgsBookmarkEditorDialog);
        lblCRS->setObjectName(QString::fromUtf8("lblCRS"));

        gridLayout->addWidget(lblCRS, 4, 0, 1, 1);

        mSaveLocation = new QComboBox(QgsBookmarkEditorDialog);
        mSaveLocation->setObjectName(QString::fromUtf8("mSaveLocation"));

        gridLayout->addWidget(mSaveLocation, 5, 1, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsBookmarkEditorDialog);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mCrsSelector, 4, 1, 1, 1);

        lblSaveLocation = new QLabel(QgsBookmarkEditorDialog);
        lblSaveLocation->setObjectName(QString::fromUtf8("lblSaveLocation"));

        gridLayout->addWidget(lblSaveLocation, 5, 0, 1, 1);

        lblName = new QLabel(QgsBookmarkEditorDialog);
        lblName->setObjectName(QString::fromUtf8("lblName"));

        gridLayout->addWidget(lblName, 0, 0, 1, 1);

        lblGroup = new QLabel(QgsBookmarkEditorDialog);
        lblGroup->setObjectName(QString::fromUtf8("lblGroup"));

        gridLayout->addWidget(lblGroup, 1, 0, 1, 1);

        mName = new QLineEdit(QgsBookmarkEditorDialog);
        mName->setObjectName(QString::fromUtf8("mName"));

        gridLayout->addWidget(mName, 0, 1, 1, 1);

        mGroup = new QComboBox(QgsBookmarkEditorDialog);
        mGroup->setObjectName(QString::fromUtf8("mGroup"));
        mGroup->setEditable(true);

        gridLayout->addWidget(mGroup, 1, 1, 1, 1);

        mExtentGroupBox = new QgsExtentGroupBox(QgsBookmarkEditorDialog);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));
        mExtentGroupBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExtentGroupBox, 2, 0, 1, 2);

        mRotation = new QgsDoubleSpinBox(QgsBookmarkEditorDialog);
        mRotation->setObjectName(QString::fromUtf8("mRotation"));
        mRotation->setDecimals(1);
        mRotation->setMinimum(-360.000000000000000);
        mRotation->setMaximum(360.000000000000000);
        mRotation->setProperty("clearValue", QVariant(0.000000000000000));

        gridLayout->addWidget(mRotation, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsBookmarkEditorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mName, mGroup);
        QWidget::setTabOrder(mGroup, mExtentGroupBox);
        QWidget::setTabOrder(mExtentGroupBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mSaveLocation);

        retranslateUi(QgsBookmarkEditorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsBookmarkEditorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsBookmarkEditorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsBookmarkEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsBookmarkEditorDialog)
    {
        QgsBookmarkEditorDialog->setWindowTitle(QCoreApplication::translate("QgsBookmarkEditorDialog", "Bookmark Editor", nullptr));
        lblRotation->setText(QCoreApplication::translate("QgsBookmarkEditorDialog", "Rotation", nullptr));
        lblCRS->setText(QCoreApplication::translate("QgsBookmarkEditorDialog", "CRS", nullptr));
        lblSaveLocation->setText(QCoreApplication::translate("QgsBookmarkEditorDialog", "Saved in", nullptr));
        lblName->setText(QCoreApplication::translate("QgsBookmarkEditorDialog", "Name", nullptr));
        lblGroup->setText(QCoreApplication::translate("QgsBookmarkEditorDialog", "Group", nullptr));
        mExtentGroupBox->setProperty("title", QVariant(QCoreApplication::translate("QgsBookmarkEditorDialog", "Extent", nullptr)));
        mRotation->setSuffix(QCoreApplication::translate("QgsBookmarkEditorDialog", " \302\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsBookmarkEditorDialog: public Ui_QgsBookmarkEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBOOKMARKEDITORDIALOG_H
