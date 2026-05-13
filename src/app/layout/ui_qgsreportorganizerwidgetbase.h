/********************************************************************************
** Form generated from reading UI file 'qgsreportorganizerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSREPORTORGANIZERWIDGETBASE_H
#define UI_QGSREPORTORGANIZERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsReportOrganizerBase
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *mViewSections;
    QHBoxLayout *horizontalLayout;
    QPushButton *mButtonAddSection;
    QPushButton *mButtonRemoveSection;
    QSpacerItem *horizontalSpacer;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *mSettingsFrame;

    void setupUi(QWidget *QgsReportOrganizerBase)
    {
        if (QgsReportOrganizerBase->objectName().isEmpty())
            QgsReportOrganizerBase->setObjectName(QString::fromUtf8("QgsReportOrganizerBase"));
        QgsReportOrganizerBase->resize(320, 520);
        QgsReportOrganizerBase->setMinimumSize(QSize(320, 300));
        verticalLayout = new QVBoxLayout(QgsReportOrganizerBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mViewSections = new QTreeView(QgsReportOrganizerBase);
        mViewSections->setObjectName(QString::fromUtf8("mViewSections"));
        mViewSections->setContextMenuPolicy(Qt::CustomContextMenu);
        mViewSections->setAcceptDrops(true);
        mViewSections->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        mViewSections->setDragEnabled(true);
        mViewSections->setDragDropMode(QAbstractItemView::InternalMove);
        mViewSections->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mViewSections->setAllColumnsShowFocus(true);
        mViewSections->header()->setMinimumSectionSize(100);
        mViewSections->header()->setStretchLastSection(true);

        verticalLayout->addWidget(mViewSections);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mButtonAddSection = new QPushButton(QgsReportOrganizerBase);
        mButtonAddSection->setObjectName(QString::fromUtf8("mButtonAddSection"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddSection->setIcon(icon);

        horizontalLayout->addWidget(mButtonAddSection);

        mButtonRemoveSection = new QPushButton(QgsReportOrganizerBase);
        mButtonRemoveSection->setObjectName(QString::fromUtf8("mButtonRemoveSection"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveSection->setIcon(icon1);

        horizontalLayout->addWidget(mButtonRemoveSection);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QgsScrollArea(QgsReportOrganizerBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 302, 232));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mSettingsFrame = new QFrame(scrollAreaWidgetContents);
        mSettingsFrame->setObjectName(QString::fromUtf8("mSettingsFrame"));
        mSettingsFrame->setFrameShape(QFrame::NoFrame);
        mSettingsFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(mSettingsFrame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(mViewSections, mButtonAddSection);
        QWidget::setTabOrder(mButtonAddSection, mButtonRemoveSection);
        QWidget::setTabOrder(mButtonRemoveSection, scrollArea);

        retranslateUi(QgsReportOrganizerBase);

        QMetaObject::connectSlotsByName(QgsReportOrganizerBase);
    } // setupUi

    void retranslateUi(QWidget *QgsReportOrganizerBase)
    {
        QgsReportOrganizerBase->setWindowTitle(QCoreApplication::translate("QgsReportOrganizerBase", "Layout Manager", nullptr));
#if QT_CONFIG(tooltip)
        mButtonAddSection->setToolTip(QCoreApplication::translate("QgsReportOrganizerBase", "Add section", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddSection->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonRemoveSection->setToolTip(QCoreApplication::translate("QgsReportOrganizerBase", "Remove selected section", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveSection->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsReportOrganizerBase: public Ui_QgsReportOrganizerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSREPORTORGANIZERWIDGETBASE_H
