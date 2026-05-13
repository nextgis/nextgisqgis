/********************************************************************************
** Form generated from reading UI file 'qgsvectortileconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORTILECONNECTIONDIALOG_H
#define UI_QGSVECTORTILECONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsettingswidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorTileConnectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QgsSpinBox *mSpinZMax;
    QCheckBox *mCheckBoxZMax;
    QLabel *lblReferer;
    QLineEdit *mEditUrl;
    QCheckBox *mCheckBoxZMin;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLineEdit *mEditReferer;
    QLabel *label_2;
    QgsSpinBox *mSpinZMin;
    QLabel *label;
    QLineEdit *mEditName;
    QLineEdit *mEditStyleUrl;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorTileConnectionDialog)
    {
        if (QgsVectorTileConnectionDialog->objectName().isEmpty())
            QgsVectorTileConnectionDialog->setObjectName(QString::fromUtf8("QgsVectorTileConnectionDialog"));
        QgsVectorTileConnectionDialog->resize(659, 442);
        verticalLayout = new QVBoxLayout(QgsVectorTileConnectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mGroupBox = new QGroupBox(QgsVectorTileConnectionDialog);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSpinZMax = new QgsSpinBox(mGroupBox);
        mSpinZMax->setObjectName(QString::fromUtf8("mSpinZMax"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinZMax->sizePolicy().hasHeightForWidth());
        mSpinZMax->setSizePolicy(sizePolicy);
        mSpinZMax->setValue(14);

        gridLayout->addWidget(mSpinZMax, 8, 2, 1, 1);

        mCheckBoxZMax = new QCheckBox(mGroupBox);
        mCheckBoxZMax->setObjectName(QString::fromUtf8("mCheckBoxZMax"));
        mCheckBoxZMax->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMax, 8, 0, 1, 2);

        lblReferer = new QLabel(mGroupBox);
        lblReferer->setObjectName(QString::fromUtf8("lblReferer"));

        gridLayout->addWidget(lblReferer, 11, 0, 1, 1);

        mEditUrl = new QLineEdit(mGroupBox);
        mEditUrl->setObjectName(QString::fromUtf8("mEditUrl"));

        gridLayout->addWidget(mEditUrl, 2, 2, 1, 1);

        mCheckBoxZMin = new QCheckBox(mGroupBox);
        mCheckBoxZMin->setObjectName(QString::fromUtf8("mCheckBoxZMin"));
        mCheckBoxZMin->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMin, 4, 0, 1, 2);

        mAuthGroupBox = new QGroupBox(mGroupBox);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));

        verticalLayout_3->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 10, 0, 1, 3);

        mEditReferer = new QLineEdit(mGroupBox);
        mEditReferer->setObjectName(QString::fromUtf8("mEditReferer"));

        gridLayout->addWidget(mEditReferer, 11, 2, 1, 1);

        label_2 = new QLabel(mGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        mSpinZMin = new QgsSpinBox(mGroupBox);
        mSpinZMin->setObjectName(QString::fromUtf8("mSpinZMin"));
        sizePolicy.setHeightForWidth(mSpinZMin->sizePolicy().hasHeightForWidth());
        mSpinZMin->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mSpinZMin, 4, 2, 1, 1);

        label = new QLabel(mGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        mEditName = new QLineEdit(mGroupBox);
        mEditName->setObjectName(QString::fromUtf8("mEditName"));

        gridLayout->addWidget(mEditName, 0, 2, 1, 1);

        mEditStyleUrl = new QLineEdit(mGroupBox);
        mEditStyleUrl->setObjectName(QString::fromUtf8("mEditStyleUrl"));
        mEditStyleUrl->setClearButtonEnabled(true);

        gridLayout->addWidget(mEditStyleUrl, 1, 2, 1, 1);

        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 2);


        verticalLayout->addWidget(mGroupBox);

        buttonBox = new QDialogButtonBox(QgsVectorTileConnectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        lblReferer->setBuddy(mEditReferer);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mEditName, mEditStyleUrl);
        QWidget::setTabOrder(mEditStyleUrl, mEditUrl);
        QWidget::setTabOrder(mEditUrl, mSpinZMin);
        QWidget::setTabOrder(mSpinZMin, mSpinZMax);
        QWidget::setTabOrder(mSpinZMax, mEditReferer);
        QWidget::setTabOrder(mEditReferer, mCheckBoxZMax);
        QWidget::setTabOrder(mCheckBoxZMax, mCheckBoxZMin);

        retranslateUi(QgsVectorTileConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsVectorTileConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVectorTileConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsVectorTileConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorTileConnectionDialog)
    {
        QgsVectorTileConnectionDialog->setWindowTitle(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Vector Tiles Connection", nullptr));
        mGroupBox->setTitle(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Connection Details", nullptr));
        mCheckBoxZMax->setText(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Max. Zoom Level", nullptr));
        lblReferer->setText(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Referer", nullptr));
#if QT_CONFIG(tooltip)
        mEditUrl->setToolTip(QCoreApplication::translate("QgsVectorTileConnectionDialog", "URL of the connection, {x}, {y}, and {z} will be replaced with actual values. Use {-y} for inverted y axis.", nullptr));
#endif // QT_CONFIG(tooltip)
        mEditUrl->setPlaceholderText(QCoreApplication::translate("QgsVectorTileConnectionDialog", "http://example.com/{z}/{x}/{y}.pbf", nullptr));
        mCheckBoxZMin->setText(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Min. Zoom Level", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Authentication", nullptr));
#if QT_CONFIG(tooltip)
        mEditReferer->setToolTip(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Optional custom referer", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Source URL", nullptr));
        label->setText(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mEditName->setToolTip(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mEditStyleUrl->setToolTip(QCoreApplication::translate("QgsVectorTileConnectionDialog", "If specified, the layer will be automatically styled using styling JSON from the entered URL.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QgsVectorTileConnectionDialog", "Style URL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorTileConnectionDialog: public Ui_QgsVectorTileConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORTILECONNECTIONDIALOG_H
