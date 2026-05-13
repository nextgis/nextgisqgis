/********************************************************************************
** Form generated from reading UI file 'qgsuserprofileselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSUSERPROFILESELECTIONDIALOG_H
#define UI_QGSUSERPROFILESELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsUserProfileSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QLabel *label;
    QListWidget *mProfileListWidget;
    QToolButton *mAddProfileButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsUserProfileSelectionDialog)
    {
        if (QgsUserProfileSelectionDialog->objectName().isEmpty())
            QgsUserProfileSelectionDialog->setObjectName(QString::fromUtf8("QgsUserProfileSelectionDialog"));
        QgsUserProfileSelectionDialog->resize(332, 417);
        verticalLayout = new QVBoxLayout(QgsUserProfileSelectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_2 = new QLabel(QgsUserProfileSelectionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 100));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/icons/qgis_icon.svg")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(label_2);


        verticalLayout->addLayout(hboxLayout);

        label = new QLabel(QgsUserProfileSelectionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        mProfileListWidget = new QListWidget(QgsUserProfileSelectionDialog);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mProfileListWidget);
        __qlistwidgetitem->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mProfileListWidget);
        __qlistwidgetitem1->setIcon(icon);
        mProfileListWidget->setObjectName(QString::fromUtf8("mProfileListWidget"));
        mProfileListWidget->setUniformItemSizes(true);

        verticalLayout->addWidget(mProfileListWidget);

        mAddProfileButton = new QToolButton(QgsUserProfileSelectionDialog);
        mAddProfileButton->setObjectName(QString::fromUtf8("mAddProfileButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAddProfileButton->sizePolicy().hasHeightForWidth());
        mAddProfileButton->setSizePolicy(sizePolicy);
        mAddProfileButton->setMinimumSize(QSize(40, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddProfileButton->setIcon(icon1);
        mAddProfileButton->setIconSize(QSize(16, 16));
        mAddProfileButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mAddProfileButton->setAutoRaise(true);

        verticalLayout->addWidget(mAddProfileButton);

        buttonBox = new QDialogButtonBox(QgsUserProfileSelectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsUserProfileSelectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsUserProfileSelectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsUserProfileSelectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsUserProfileSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsUserProfileSelectionDialog)
    {
        QgsUserProfileSelectionDialog->setWindowTitle(QCoreApplication::translate("QgsUserProfileSelectionDialog", "User Profile Selector", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("QgsUserProfileSelectionDialog", "Choose a profile", nullptr));

        const bool __sortingEnabled = mProfileListWidget->isSortingEnabled();
        mProfileListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mProfileListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsUserProfileSelectionDialog", "default", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = mProfileListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsUserProfileSelectionDialog", "New User", nullptr));
        mProfileListWidget->setSortingEnabled(__sortingEnabled);

        mAddProfileButton->setText(QCoreApplication::translate("QgsUserProfileSelectionDialog", "Add new profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsUserProfileSelectionDialog: public Ui_QgsUserProfileSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSUSERPROFILESELECTIONDIALOG_H
