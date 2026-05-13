/********************************************************************************
** Form generated from reading UI file 'qgsjsoneditconfigdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSJSONEDITCONFIGDLG_H
#define UI_QGSJSONEDITCONFIGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsJsonEditConfigDlg
{
public:
    QGridLayout *gridLayout;
    QComboBox *mDefaultViewComboBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLabel *label;
    QComboBox *mFormatJsonComboBox;

    void setupUi(QWidget *QgsJsonEditConfigDlg)
    {
        if (QgsJsonEditConfigDlg->objectName().isEmpty())
            QgsJsonEditConfigDlg->setObjectName(QString::fromUtf8("QgsJsonEditConfigDlg"));
        QgsJsonEditConfigDlg->resize(400, 300);
        QgsJsonEditConfigDlg->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsJsonEditConfigDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mDefaultViewComboBox = new QComboBox(QgsJsonEditConfigDlg);
        mDefaultViewComboBox->addItem(QString());
        mDefaultViewComboBox->addItem(QString());
        mDefaultViewComboBox->setObjectName(QString::fromUtf8("mDefaultViewComboBox"));

        gridLayout->addWidget(mDefaultViewComboBox, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        label_2 = new QLabel(QgsJsonEditConfigDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(QgsJsonEditConfigDlg);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mFormatJsonComboBox = new QComboBox(QgsJsonEditConfigDlg);
        mFormatJsonComboBox->addItem(QString());
        mFormatJsonComboBox->addItem(QString());
        mFormatJsonComboBox->addItem(QString());
        mFormatJsonComboBox->setObjectName(QString::fromUtf8("mFormatJsonComboBox"));

        gridLayout->addWidget(mFormatJsonComboBox, 1, 1, 1, 1);


        retranslateUi(QgsJsonEditConfigDlg);

        QMetaObject::connectSlotsByName(QgsJsonEditConfigDlg);
    } // setupUi

    void retranslateUi(QWidget *QgsJsonEditConfigDlg)
    {
        mDefaultViewComboBox->setItemText(0, QCoreApplication::translate("QgsJsonEditConfigDlg", "Text", nullptr));
        mDefaultViewComboBox->setItemText(1, QCoreApplication::translate("QgsJsonEditConfigDlg", "Tree", nullptr));

        label_2->setText(QCoreApplication::translate("QgsJsonEditConfigDlg", "Format JSON", nullptr));
        label->setText(QCoreApplication::translate("QgsJsonEditConfigDlg", "Default view", nullptr));
        mFormatJsonComboBox->setItemText(0, QCoreApplication::translate("QgsJsonEditConfigDlg", "Indented", nullptr));
        mFormatJsonComboBox->setItemText(1, QCoreApplication::translate("QgsJsonEditConfigDlg", "Compact", nullptr));
        mFormatJsonComboBox->setItemText(2, QCoreApplication::translate("QgsJsonEditConfigDlg", "Disabled", nullptr));

#if QT_CONFIG(tooltip)
        mFormatJsonComboBox->setToolTip(QCoreApplication::translate("QgsJsonEditConfigDlg", "<ul>\n"
"<li><strong>Indented</strong>: Display data in a human readable form with newlines and four space characters for indentation.</li>\n"
"<li><strong>Compact</strong>: Display data in a one-line size optimized string without newlines or spaces.</li>\n"
"<li><strong>Disabled</strong>: Display data as it comes from the provider.</li>\n"
"</ul>", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsJsonEditConfigDlg;
    } // retranslateUi

};

namespace Ui {
    class QgsJsonEditConfigDlg: public Ui_QgsJsonEditConfigDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSJSONEDITCONFIGDLG_H
