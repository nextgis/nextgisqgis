/********************************************************************************
** Form generated from reading UI file 'qgsdatumtransformtablewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATUMTRANSFORMTABLEWIDGETBASE_H
#define UI_QGSDATUMTRANSFORMTABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDatumTransformTableWidgetBase
{
public:
    QGridLayout *gridLayout;
    QToolButton *mAddButton;
    QToolButton *mRemoveButton;
    QToolButton *mEditButton;
    QSpacerItem *horizontalSpacer_5;
    QTableView *mTableView;

    void setupUi(QWidget *QgsDatumTransformTableWidgetBase)
    {
        if (QgsDatumTransformTableWidgetBase->objectName().isEmpty())
            QgsDatumTransformTableWidgetBase->setObjectName(QString::fromUtf8("QgsDatumTransformTableWidgetBase"));
        QgsDatumTransformTableWidgetBase->resize(400, 300);
        QgsDatumTransformTableWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsDatumTransformTableWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mAddButton = new QToolButton(QgsDatumTransformTableWidgetBase);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddButton->setIcon(icon);

        gridLayout->addWidget(mAddButton, 0, 1, 1, 1);

        mRemoveButton = new QToolButton(QgsDatumTransformTableWidgetBase);
        mRemoveButton->setObjectName(QString::fromUtf8("mRemoveButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveButton->setIcon(icon1);

        gridLayout->addWidget(mRemoveButton, 0, 2, 1, 1);

        mEditButton = new QToolButton(QgsDatumTransformTableWidgetBase);
        mEditButton->setObjectName(QString::fromUtf8("mEditButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionToggleEditing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditButton->setIcon(icon2);

        gridLayout->addWidget(mEditButton, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(237, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        mTableView = new QTableView(QgsDatumTransformTableWidgetBase);
        mTableView->setObjectName(QString::fromUtf8("mTableView"));

        gridLayout->addWidget(mTableView, 1, 1, 1, 4);


        retranslateUi(QgsDatumTransformTableWidgetBase);

        QMetaObject::connectSlotsByName(QgsDatumTransformTableWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDatumTransformTableWidgetBase)
    {
        mAddButton->setText(QCoreApplication::translate("QgsDatumTransformTableWidgetBase", "\342\200\246", nullptr));
        mRemoveButton->setText(QCoreApplication::translate("QgsDatumTransformTableWidgetBase", "\342\200\246", nullptr));
        mEditButton->setText(QCoreApplication::translate("QgsDatumTransformTableWidgetBase", "\342\200\246", nullptr));
        (void)QgsDatumTransformTableWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsDatumTransformTableWidgetBase: public Ui_QgsDatumTransformTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATUMTRANSFORMTABLEWIDGETBASE_H
