/********************************************************************************
** Form generated from reading UI file 'qgslistconfigdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLISTCONFIGDLG_H
#define UI_QGSLISTCONFIGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsListConfigDlg
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mNullBehavior;
    QFormLayout *formLayout_2;
    QRadioButton *mEmptyisNull;
    QRadioButton *mEmptyisEmptyArray;

    void setupUi(QWidget *QgsListConfigDlg)
    {
        if (QgsListConfigDlg->objectName().isEmpty())
            QgsListConfigDlg->setObjectName(QString::fromUtf8("QgsListConfigDlg"));
        QgsListConfigDlg->resize(400, 78);
        QgsListConfigDlg->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsListConfigDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mNullBehavior = new QGroupBox(QgsListConfigDlg);
        mNullBehavior->setObjectName(QString::fromUtf8("mNullBehavior"));
        formLayout_2 = new QFormLayout(mNullBehavior);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        mEmptyisNull = new QRadioButton(mNullBehavior);
        mEmptyisNull->setObjectName(QString::fromUtf8("mEmptyisNull"));
        mEmptyisNull->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, mEmptyisNull);

        mEmptyisEmptyArray = new QRadioButton(mNullBehavior);
        mEmptyisEmptyArray->setObjectName(QString::fromUtf8("mEmptyisEmptyArray"));
        mEmptyisEmptyArray->setChecked(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mEmptyisEmptyArray);


        gridLayout->addWidget(mNullBehavior, 0, 0, 1, 1);


        retranslateUi(QgsListConfigDlg);

        QMetaObject::connectSlotsByName(QgsListConfigDlg);
    } // setupUi

    void retranslateUi(QWidget *QgsListConfigDlg)
    {
        mNullBehavior->setTitle(QCoreApplication::translate("QgsListConfigDlg", "Treatment of Empty Cells", nullptr));
        mEmptyisNull->setText(QCoreApplication::translate("QgsListConfigDlg", "NULL", nullptr));
        mEmptyisEmptyArray->setText(QCoreApplication::translate("QgsListConfigDlg", "Empty Array", nullptr));
        (void)QgsListConfigDlg;
    } // retranslateUi

};

namespace Ui {
    class QgsListConfigDlg: public Ui_QgsListConfigDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLISTCONFIGDLG_H
