/********************************************************************************
** Form generated from reading UI file 'qgsabout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSABOUT_H
#define UI_QGSABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgswebview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAbout
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_01;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hboxLayout;
    QLabel *qgisIcon;
    QTextBrowser *txtVersion;
    QPushButton *btnCopyToClipboard;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *_2;
    QPushButton *btnQgisHome;
    QPushButton *btnQgisUser;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *txtWhatsNew;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *txtProviders;
    QWidget *page_3;
    QGridLayout *gridLayout;
    QListWidget *lstDevelopers;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_7;
    QListWidget *lstContributors;
    QWidget *developersMap;
    QGridLayout *gridLayout_2;
    QgsWebView *developersMapView;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_8;
    QgsWebView *txtTranslators;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_10;
    QTextBrowser *txtDonors;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *txtLicense;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAbout)
    {
        if (QgsAbout->objectName().isEmpty())
            QgsAbout->setObjectName(QString::fromUtf8("QgsAbout"));
        QgsAbout->resize(903, 444);
        QgsAbout->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsAbout);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsAbout);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptsPage_01 = new QWidget();
        mOptsPage_01->setObjectName(QString::fromUtf8("mOptsPage_01"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_01);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        qgisIcon = new QLabel(mOptsPage_01);
        qgisIcon->setObjectName(QString::fromUtf8("qgisIcon"));
        qgisIcon->setMaximumSize(QSize(200, 60));
        qgisIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/icons/qgis-full.png")));
        qgisIcon->setScaledContents(true);

        hboxLayout->addWidget(qgisIcon);


        verticalLayout_4->addLayout(hboxLayout);

        txtVersion = new QTextBrowser(mOptsPage_01);
        txtVersion->setObjectName(QString::fromUtf8("txtVersion"));
        txtVersion->setLineWrapMode(QTextEdit::NoWrap);
        txtVersion->setOpenExternalLinks(true);
        txtVersion->setOpenLinks(true);

        verticalLayout_4->addWidget(txtVersion);

        btnCopyToClipboard = new QPushButton(mOptsPage_01);
        btnCopyToClipboard->setObjectName(QString::fromUtf8("btnCopyToClipboard"));

        verticalLayout_4->addWidget(btnCopyToClipboard);

        label_3 = new QLabel(mOptsPage_01);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        label_2 = new QLabel(mOptsPage_01);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        btnQgisHome = new QPushButton(mOptsPage_01);
        btnQgisHome->setObjectName(QString::fromUtf8("btnQgisHome"));
        btnQgisHome->setFlat(false);

        _2->addWidget(btnQgisHome);

        btnQgisUser = new QPushButton(mOptsPage_01);
        btnQgisUser->setObjectName(QString::fromUtf8("btnQgisUser"));
        btnQgisUser->setFlat(false);

        _2->addWidget(btnQgisUser);


        verticalLayout_4->addLayout(_2);

        mOptionsStackedWidget->addWidget(mOptsPage_01);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        txtWhatsNew = new QTextBrowser(page);
        txtWhatsNew->setObjectName(QString::fromUtf8("txtWhatsNew"));

        verticalLayout_5->addWidget(txtWhatsNew);

        mOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        txtProviders = new QTextBrowser(page_2);
        txtProviders->setObjectName(QString::fromUtf8("txtProviders"));

        verticalLayout_6->addWidget(txtProviders);

        mOptionsStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout = new QGridLayout(page_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lstDevelopers = new QListWidget(page_3);
        lstDevelopers->setObjectName(QString::fromUtf8("lstDevelopers"));
        sizePolicy1.setHeightForWidth(lstDevelopers->sizePolicy().hasHeightForWidth());
        lstDevelopers->setSizePolicy(sizePolicy1);
        lstDevelopers->setAlternatingRowColors(true);
        lstDevelopers->setProperty("isWrapping", QVariant(false));

        gridLayout->addWidget(lstDevelopers, 0, 0, 2, 1);

        mOptionsStackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_7 = new QVBoxLayout(page_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        lstContributors = new QListWidget(page_4);
        lstContributors->setObjectName(QString::fromUtf8("lstContributors"));
        lstContributors->setAlternatingRowColors(true);

        verticalLayout_7->addWidget(lstContributors);

        mOptionsStackedWidget->addWidget(page_4);
        developersMap = new QWidget();
        developersMap->setObjectName(QString::fromUtf8("developersMap"));
        gridLayout_2 = new QGridLayout(developersMap);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        developersMapView = new QgsWebView(developersMap);
        developersMapView->setObjectName(QString::fromUtf8("developersMapView"));

        gridLayout_2->addWidget(developersMapView, 0, 0, 1, 1);

        mOptionsStackedWidget->addWidget(developersMap);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_8 = new QVBoxLayout(page_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        txtTranslators = new QgsWebView(page_5);
        txtTranslators->setObjectName(QString::fromUtf8("txtTranslators"));
        txtTranslators->setProperty("url", QVariant(QUrl(QString::fromUtf8("about:blank"))));

        verticalLayout_8->addWidget(txtTranslators);

        mOptionsStackedWidget->addWidget(page_5);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_10 = new QVBoxLayout(page_7);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        txtDonors = new QTextBrowser(page_7);
        txtDonors->setObjectName(QString::fromUtf8("txtDonors"));
        txtDonors->setOpenExternalLinks(true);
        txtDonors->setOpenLinks(true);

        verticalLayout_10->addWidget(txtDonors);

        mOptionsStackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        verticalLayout_11 = new QVBoxLayout(page_8);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        txtLicense = new QTextBrowser(page_8);
        txtLicense->setObjectName(QString::fromUtf8("txtLicense"));

        verticalLayout_11->addWidget(txtLicense);

        mOptionsStackedWidget->addWidget(page_8);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsAbout);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy2);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(mButtonBoxFrame);


        retranslateUi(QgsAbout);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsAbout);
    } // setupUi

    void retranslateUi(QDialog *QgsAbout)
    {
        QgsAbout->setWindowTitle(QCoreApplication::translate("QgsAbout", "About QGIS", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsAbout", "About", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsAbout", "What's New", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsAbout", "Providers", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QgsAbout", "Developers", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QgsAbout", "Contributors", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QgsAbout", "Developers Map", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QgsAbout", "Translators", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("QgsAbout", "Donors", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("QgsAbout", "License", nullptr));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        btnCopyToClipboard->setText(QCoreApplication::translate("QgsAbout", "Copy to Clipboard", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAbout", "QGIS is licensed under the GNU General Public License", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAbout", "https://www.gnu.org/licenses", nullptr));
        btnQgisHome->setText(QCoreApplication::translate("QgsAbout", "QGIS Home Page", nullptr));
        btnQgisUser->setText(QCoreApplication::translate("QgsAbout", "Join our User Mailing List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAbout: public Ui_QgsAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSABOUT_H
