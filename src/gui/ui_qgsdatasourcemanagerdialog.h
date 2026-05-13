/********************************************************************************
** Form generated from reading UI file 'qgsdatasourcemanagerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATASOURCEMANAGERDIALOG_H
#define UI_QGSDATASOURCEMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsDataSourceManagerDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *mOptionsStackedWidget;

    void setupUi(QDialog *QgsDataSourceManagerDialog)
    {
        if (QgsDataSourceManagerDialog->objectName().isEmpty())
            QgsDataSourceManagerDialog->setObjectName(QString::fromUtf8("QgsDataSourceManagerDialog"));
        QgsDataSourceManagerDialog->setEnabled(true);
        QgsDataSourceManagerDialog->resize(1000, 600);
        verticalLayout_3 = new QVBoxLayout(QgsDataSourceManagerDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mOptionsSplitter = new QSplitter(QgsDataSourceManagerDialog);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsListFrame->sizePolicy().hasHeightForWidth());
        mOptionsListFrame->setSizePolicy(sizePolicy);
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setMaximumSize(QSize(350, 16777215));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(mOptionsListFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsListWidget->sizePolicy().hasHeightForWidth());
        mOptionsListWidget->setSizePolicy(sizePolicy1);
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(350, 16777215));
        mOptionsListWidget->setFrameShape(QFrame::StyledPanel);
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy2);
        mOptionsFrame->setMinimumSize(QSize(400, 0));
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy3);
        mOptionsStackedWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout_3->addWidget(mOptionsSplitter);


        retranslateUi(QgsDataSourceManagerDialog);

        mOptionsStackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsDataSourceManagerDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDataSourceManagerDialog)
    {
        QgsDataSourceManagerDialog->setWindowTitle(QCoreApplication::translate("QgsDataSourceManagerDialog", "Data Source Manager", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsDataSourceManagerDialog", "Browser", nullptr));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class QgsDataSourceManagerDialog: public Ui_QgsDataSourceManagerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATASOURCEMANAGERDIALOG_H
