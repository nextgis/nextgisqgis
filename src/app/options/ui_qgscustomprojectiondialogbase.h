/********************************************************************************
** Form generated from reading UI file 'qgscustomprojectiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
#define UI_QGSCUSTOMPROJECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscrsdefinitionwidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCustomProjectionWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *leNameList;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbnAdd;
    QPushButton *pbnRemove;
    QSpacerItem *verticalSpacer;
    QLineEdit *leName;
    QLabel *label;
    QgsCrsDefinitionWidget *mCrsDefinitionWidget;

    void setupUi(QWidget *QgsCustomProjectionWidgetBase)
    {
        if (QgsCustomProjectionWidgetBase->objectName().isEmpty())
            QgsCustomProjectionWidgetBase->setObjectName(QString::fromUtf8("QgsCustomProjectionWidgetBase"));
        QgsCustomProjectionWidgetBase->resize(542, 650);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsCustomProjectionWidgetBase->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(QgsCustomProjectionWidgetBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsCustomProjectionWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFocusPolicy(Qt::NoFocus);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 542, 650));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, -1, 0);
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leNameList = new QTreeWidget(scrollAreaWidgetContents);
        leNameList->setObjectName(QString::fromUtf8("leNameList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leNameList->sizePolicy().hasHeightForWidth());
        leNameList->setSizePolicy(sizePolicy);
        leNameList->setAlternatingRowColors(true);
        leNameList->setSortingEnabled(false);
        leNameList->header()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout->addWidget(leNameList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pbnAdd = new QPushButton(scrollAreaWidgetContents);
        pbnAdd->setObjectName(QString::fromUtf8("pbnAdd"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAdd->setIcon(icon1);

        verticalLayout_2->addWidget(pbnAdd);

        pbnRemove = new QPushButton(scrollAreaWidgetContents);
        pbnRemove->setObjectName(QString::fromUtf8("pbnRemove"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemove->setIcon(icon2);

        verticalLayout_2->addWidget(pbnRemove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        leName = new QLineEdit(scrollAreaWidgetContents);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout->addWidget(leName, 2, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        mCrsDefinitionWidget = new QgsCrsDefinitionWidget(scrollAreaWidgetContents);
        mCrsDefinitionWidget->setObjectName(QString::fromUtf8("mCrsDefinitionWidget"));

        gridLayout->addWidget(mCrsDefinitionWidget, 3, 0, 1, 2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        QWidget::setTabOrder(leNameList, pbnAdd);
        QWidget::setTabOrder(pbnAdd, pbnRemove);

        retranslateUi(QgsCustomProjectionWidgetBase);

        QMetaObject::connectSlotsByName(QgsCustomProjectionWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCustomProjectionWidgetBase)
    {
        QgsCustomProjectionWidgetBase->setWindowTitle(QCoreApplication::translate("QgsCustomProjectionWidgetBase", "Custom Coordinate Reference System Definition", nullptr));
        label_3->setText(QCoreApplication::translate("QgsCustomProjectionWidgetBase", "Name", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = leNameList->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsCustomProjectionWidgetBase", "Parameters", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsCustomProjectionWidgetBase", "ID", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsCustomProjectionWidgetBase", "Name", nullptr));
#if QT_CONFIG(tooltip)
        pbnAdd->setToolTip(QCoreApplication::translate("QgsCustomProjectionWidgetBase", "Add new CRS", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnAdd->setText(QString());
#if QT_CONFIG(tooltip)
        pbnRemove->setToolTip(QCoreApplication::translate("QgsCustomProjectionWidgetBase", "Remove CRS", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnRemove->setText(QString());
        label->setText(QCoreApplication::translate("QgsCustomProjectionWidgetBase", "You can define your own custom Coordinate Reference System (CRS) here. The definition must conform to a WKT or Proj string format for specifying a CRS.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsCustomProjectionWidgetBase: public Ui_QgsCustomProjectionWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
