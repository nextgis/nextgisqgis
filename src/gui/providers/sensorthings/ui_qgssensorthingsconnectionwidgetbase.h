/********************************************************************************
** Form generated from reading UI file 'qgssensorthingsconnectionwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSENSORTHINGSCONNECTIONWIDGETBASE_H
#define UI_QGSSENSORTHINGSCONNECTIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthsettingswidget.h"
#include "qgsprovidersourcewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSensorThingsConnectionWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *lblReferer;
    QLabel *label_2;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettings;
    QLineEdit *mEditReferer;
    QLineEdit *mEditUrl;

    void setupUi(QWidget *QgsSensorThingsConnectionWidgetBase)
    {
        if (QgsSensorThingsConnectionWidgetBase->objectName().isEmpty())
            QgsSensorThingsConnectionWidgetBase->setObjectName(QString::fromUtf8("QgsSensorThingsConnectionWidgetBase"));
        QgsSensorThingsConnectionWidgetBase->resize(360, 168);
        gridLayout = new QGridLayout(QgsSensorThingsConnectionWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblReferer = new QLabel(QgsSensorThingsConnectionWidgetBase);
        lblReferer->setObjectName(QString::fromUtf8("lblReferer"));

        gridLayout->addWidget(lblReferer, 2, 0, 1, 1);

        label_2 = new QLabel(QgsSensorThingsConnectionWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mAuthGroupBox = new QGroupBox(QgsSensorThingsConnectionWidgetBase);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettings = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettings->setObjectName(QString::fromUtf8("mAuthSettings"));

        verticalLayout_3->addWidget(mAuthSettings);


        gridLayout->addWidget(mAuthGroupBox, 1, 0, 1, 2);

        mEditReferer = new QLineEdit(QgsSensorThingsConnectionWidgetBase);
        mEditReferer->setObjectName(QString::fromUtf8("mEditReferer"));

        gridLayout->addWidget(mEditReferer, 2, 1, 1, 1);

        mEditUrl = new QLineEdit(QgsSensorThingsConnectionWidgetBase);
        mEditUrl->setObjectName(QString::fromUtf8("mEditUrl"));

        gridLayout->addWidget(mEditUrl, 0, 1, 1, 1);

#if QT_CONFIG(shortcut)
        lblReferer->setBuddy(mEditReferer);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mEditUrl, mEditReferer);

        retranslateUi(QgsSensorThingsConnectionWidgetBase);

        QMetaObject::connectSlotsByName(QgsSensorThingsConnectionWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSensorThingsConnectionWidgetBase)
    {
        QgsSensorThingsConnectionWidgetBase->setWindowTitle(QCoreApplication::translate("QgsSensorThingsConnectionWidgetBase", "SensorThings Connection", nullptr));
        lblReferer->setText(QCoreApplication::translate("QgsSensorThingsConnectionWidgetBase", "Referer", nullptr));
        label_2->setText(QCoreApplication::translate("QgsSensorThingsConnectionWidgetBase", "URL", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsSensorThingsConnectionWidgetBase", "Authentication", nullptr));
#if QT_CONFIG(tooltip)
        mEditReferer->setToolTip(QCoreApplication::translate("QgsSensorThingsConnectionWidgetBase", "Optional custom referer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mEditUrl->setToolTip(QCoreApplication::translate("QgsSensorThingsConnectionWidgetBase", "URL of the connection, {x}, {y}, and {z} will be replaced with actual values. Use {-y} for inverted y axis.", nullptr));
#endif // QT_CONFIG(tooltip)
        mEditUrl->setPlaceholderText(QCoreApplication::translate("QgsSensorThingsConnectionWidgetBase", "http://example.com/v1.1/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSensorThingsConnectionWidgetBase: public Ui_QgsSensorThingsConnectionWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSENSORTHINGSCONNECTIONWIDGETBASE_H
