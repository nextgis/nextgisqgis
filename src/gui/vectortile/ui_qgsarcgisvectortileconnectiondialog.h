/********************************************************************************
** Form generated from reading UI file 'qgsarcgisvectortileconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSARCGISVECTORTILECONNECTIONDIALOG_H
#define UI_QGSARCGISVECTORTILECONNECTIONDIALOG_H

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

class Ui_QgsArcgisVectorTileConnectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLabel *lblReferer;
    QCheckBox *mCheckBoxZMin;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *mEditReferer;
    QLineEdit *mEditUrl;
    QgsSpinBox *mSpinZMin;
    QLineEdit *mEditName;
    QgsSpinBox *mSpinZMax;
    QCheckBox *mCheckBoxZMax;
    QLabel *label_3;
    QLineEdit *mEditStyleUrl;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsArcgisVectorTileConnectionDialog)
    {
        if (QgsArcgisVectorTileConnectionDialog->objectName().isEmpty())
            QgsArcgisVectorTileConnectionDialog->setObjectName(QString::fromUtf8("QgsArcgisVectorTileConnectionDialog"));
        QgsArcgisVectorTileConnectionDialog->resize(529, 386);
        verticalLayout = new QVBoxLayout(QgsArcgisVectorTileConnectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mGroupBox = new QGroupBox(QgsArcgisVectorTileConnectionDialog);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mAuthGroupBox = new QGroupBox(mGroupBox);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));

        verticalLayout_3->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 8, 0, 1, 3);

        lblReferer = new QLabel(mGroupBox);
        lblReferer->setObjectName(QString::fromUtf8("lblReferer"));

        gridLayout->addWidget(lblReferer, 9, 0, 1, 1);

        mCheckBoxZMin = new QCheckBox(mGroupBox);
        mCheckBoxZMin->setObjectName(QString::fromUtf8("mCheckBoxZMin"));
        mCheckBoxZMin->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMin, 3, 0, 1, 1);

        label_2 = new QLabel(mGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(mGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        mEditReferer = new QLineEdit(mGroupBox);
        mEditReferer->setObjectName(QString::fromUtf8("mEditReferer"));

        gridLayout->addWidget(mEditReferer, 9, 2, 1, 1);

        mEditUrl = new QLineEdit(mGroupBox);
        mEditUrl->setObjectName(QString::fromUtf8("mEditUrl"));

        gridLayout->addWidget(mEditUrl, 1, 2, 1, 1);

        mSpinZMin = new QgsSpinBox(mGroupBox);
        mSpinZMin->setObjectName(QString::fromUtf8("mSpinZMin"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinZMin->sizePolicy().hasHeightForWidth());
        mSpinZMin->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mSpinZMin, 3, 2, 1, 1);

        mEditName = new QLineEdit(mGroupBox);
        mEditName->setObjectName(QString::fromUtf8("mEditName"));

        gridLayout->addWidget(mEditName, 0, 2, 1, 1);

        mSpinZMax = new QgsSpinBox(mGroupBox);
        mSpinZMax->setObjectName(QString::fromUtf8("mSpinZMax"));
        sizePolicy.setHeightForWidth(mSpinZMax->sizePolicy().hasHeightForWidth());
        mSpinZMax->setSizePolicy(sizePolicy);
        mSpinZMax->setValue(14);

        gridLayout->addWidget(mSpinZMax, 4, 2, 1, 1);

        mCheckBoxZMax = new QCheckBox(mGroupBox);
        mCheckBoxZMax->setObjectName(QString::fromUtf8("mCheckBoxZMax"));
        mCheckBoxZMax->setChecked(true);

        gridLayout->addWidget(mCheckBoxZMax, 4, 0, 1, 1);

        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        mEditStyleUrl = new QLineEdit(mGroupBox);
        mEditStyleUrl->setObjectName(QString::fromUtf8("mEditStyleUrl"));
        mEditStyleUrl->setClearButtonEnabled(true);

        gridLayout->addWidget(mEditStyleUrl, 6, 2, 1, 1);


        verticalLayout->addWidget(mGroupBox);

        buttonBox = new QDialogButtonBox(QgsArcgisVectorTileConnectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        lblReferer->setBuddy(mEditReferer);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mEditName, mEditUrl);
        QWidget::setTabOrder(mEditUrl, mCheckBoxZMin);
        QWidget::setTabOrder(mCheckBoxZMin, mSpinZMin);
        QWidget::setTabOrder(mSpinZMin, mCheckBoxZMax);
        QWidget::setTabOrder(mCheckBoxZMax, mSpinZMax);
        QWidget::setTabOrder(mSpinZMax, mEditStyleUrl);
        QWidget::setTabOrder(mEditStyleUrl, mEditReferer);

        retranslateUi(QgsArcgisVectorTileConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsArcgisVectorTileConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsArcgisVectorTileConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsArcgisVectorTileConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsArcgisVectorTileConnectionDialog)
    {
        QgsArcgisVectorTileConnectionDialog->setWindowTitle(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "ArcGIS Vector Tile Service Connection", nullptr));
        mGroupBox->setTitle(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Connection Details", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Authentication", nullptr));
        lblReferer->setText(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Referer", nullptr));
        mCheckBoxZMin->setText(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Min. Zoom Level", nullptr));
        label_2->setText(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Service URL", nullptr));
        label->setText(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Name", nullptr));
#if QT_CONFIG(tooltip)
        mEditReferer->setToolTip(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Optional custom referer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mEditUrl->setToolTip(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "URL of the VectorTileServer API endpoint, e.g. https://domain/arcgis/rest/services/Layer_1/VectorTileServer", nullptr));
#endif // QT_CONFIG(tooltip)
        mEditUrl->setPlaceholderText(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "https://domain/arcgis/rest/services/Layer_1/VectorTileServer", nullptr));
#if QT_CONFIG(tooltip)
        mEditName->setToolTip(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Name of the new connection", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxZMax->setText(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Max. Zoom Level", nullptr));
        label_3->setText(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Style URL", nullptr));
#if QT_CONFIG(tooltip)
        mEditStyleUrl->setToolTip(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "If specified, will override the default style defined for the layer with the entered URL", nullptr));
#endif // QT_CONFIG(tooltip)
        mEditStyleUrl->setPlaceholderText(QCoreApplication::translate("QgsArcgisVectorTileConnectionDialog", "Optional", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsArcgisVectorTileConnectionDialog: public Ui_QgsArcgisVectorTileConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSARCGISVECTORTILECONNECTIONDIALOG_H
