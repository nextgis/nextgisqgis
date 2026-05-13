/********************************************************************************
** Form generated from reading UI file 'qgsfirstrundialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFIRSTRUNDIALOG_H
#define UI_QGSFIRSTRUNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsFirstRunDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *mMigrationWidget;
    QGridLayout *gridLayout_2;
    QRadioButton *mImportSettingsYes;
    QLabel *label_4;
    QRadioButton *mImportSettingsNo;
    QLabel *label;
    QLabel *mWelcomeLabel;
    QLabel *mWelcomeProdLabel;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *mWelcomeDevLabel;

    void setupUi(QDialog *QgsFirstRunDialog)
    {
        if (QgsFirstRunDialog->objectName().isEmpty())
            QgsFirstRunDialog->setObjectName(QString::fromUtf8("QgsFirstRunDialog"));
        QgsFirstRunDialog->resize(738, 365);
        gridLayout = new QGridLayout(QgsFirstRunDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(50);
        mMigrationWidget = new QWidget(QgsFirstRunDialog);
        mMigrationWidget->setObjectName(QString::fromUtf8("mMigrationWidget"));
        gridLayout_2 = new QGridLayout(mMigrationWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, -1, -1);
        mImportSettingsYes = new QRadioButton(mMigrationWidget);
        mImportSettingsYes->setObjectName(QString::fromUtf8("mImportSettingsYes"));
        mImportSettingsYes->setChecked(true);

        gridLayout_2->addWidget(mImportSettingsYes, 1, 0, 1, 2);

        label_4 = new QLabel(mMigrationWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 2);

        mImportSettingsNo = new QRadioButton(mMigrationWidget);
        mImportSettingsNo->setObjectName(QString::fromUtf8("mImportSettingsNo"));

        gridLayout_2->addWidget(mImportSettingsNo, 2, 0, 1, 2);

        label = new QLabel(mMigrationWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(mMigrationWidget, 3, 1, 1, 1);

        mWelcomeLabel = new QLabel(QgsFirstRunDialog);
        mWelcomeLabel->setObjectName(QString::fromUtf8("mWelcomeLabel"));
        QFont font;
        font.setPointSize(23);
        mWelcomeLabel->setFont(font);

        gridLayout->addWidget(mWelcomeLabel, 0, 1, 1, 1);

        mWelcomeProdLabel = new QLabel(QgsFirstRunDialog);
        mWelcomeProdLabel->setObjectName(QString::fromUtf8("mWelcomeProdLabel"));
        mWelcomeProdLabel->setWordWrap(true);

        gridLayout->addWidget(mWelcomeProdLabel, 2, 1, 1, 1);

        pushButton = new QPushButton(QgsFirstRunDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 2);

        label_3 = new QLabel(QgsFirstRunDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/icons/qgis_icon.svg")));
        label_3->setScaledContents(false);

        gridLayout->addWidget(label_3, 0, 0, 4, 1);

        mWelcomeDevLabel = new QLabel(QgsFirstRunDialog);
        mWelcomeDevLabel->setObjectName(QString::fromUtf8("mWelcomeDevLabel"));

        gridLayout->addWidget(mWelcomeDevLabel, 1, 1, 1, 1);


        retranslateUi(QgsFirstRunDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), QgsFirstRunDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsFirstRunDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsFirstRunDialog)
    {
        QgsFirstRunDialog->setWindowTitle(QCoreApplication::translate("QgsFirstRunDialog", "Welcome to QGIS", nullptr));
        mImportSettingsYes->setText(QCoreApplication::translate("QgsFirstRunDialog", "Import settings from QGIS 2.", nullptr));
        label_4->setText(QCoreApplication::translate("QgsFirstRunDialog", "Settings will be imported into the default profile and you will only see this screen once.", nullptr));
        mImportSettingsNo->setText(QCoreApplication::translate("QgsFirstRunDialog", "I want a clean start. Don't import my QGIS 2 settings.", nullptr));
        label->setText(QCoreApplication::translate("QgsFirstRunDialog", "Ready to go?", nullptr));
        mWelcomeLabel->setText(QCoreApplication::translate("QgsFirstRunDialog", "Welcome to QGIS 3", nullptr));
        mWelcomeProdLabel->setText(QCoreApplication::translate("QgsFirstRunDialog", "<html><head/><body><a href=\"https://www.qgis.org/en/site/forusers/visualchangelogVERSION_TOKEN/index.html\"><span style=\" text-decoration: underline; color:#2a76c6;\">Check out </span></a>the change log for all the great new features introduced with this release!</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("QgsFirstRunDialog", "Let's get started!", nullptr));
        label_3->setText(QString());
        mWelcomeDevLabel->setText(QCoreApplication::translate("QgsFirstRunDialog", "<html><head/><body><p><span style=\" font-style:italic;\">You are running a dev version. We would love your feedback and testing!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsFirstRunDialog: public Ui_QgsFirstRunDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIRSTRUNDIALOG_H
