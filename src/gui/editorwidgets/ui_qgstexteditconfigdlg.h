/********************************************************************************
** Form generated from reading UI file 'qgstexteditconfigdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTEXTEDITCONFIGDLG_H
#define UI_QGSTEXTEDITCONFIGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTextEditConfigDlg
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mIsMultiline;
    QFormLayout *formLayout;
    QCheckBox *mUseHtml;

    void setupUi(QWidget *QgsTextEditConfigDlg)
    {
        if (QgsTextEditConfigDlg->objectName().isEmpty())
            QgsTextEditConfigDlg->setObjectName(QString::fromUtf8("QgsTextEditConfigDlg"));
        QgsTextEditConfigDlg->resize(400, 300);
        QgsTextEditConfigDlg->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsTextEditConfigDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mIsMultiline = new QGroupBox(QgsTextEditConfigDlg);
        mIsMultiline->setObjectName(QString::fromUtf8("mIsMultiline"));
        mIsMultiline->setCheckable(true);
        formLayout = new QFormLayout(mIsMultiline);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mUseHtml = new QCheckBox(mIsMultiline);
        mUseHtml->setObjectName(QString::fromUtf8("mUseHtml"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mUseHtml);


        gridLayout->addWidget(mIsMultiline, 0, 0, 1, 1);


        retranslateUi(QgsTextEditConfigDlg);

        QMetaObject::connectSlotsByName(QgsTextEditConfigDlg);
    } // setupUi

    void retranslateUi(QWidget *QgsTextEditConfigDlg)
    {
        mIsMultiline->setTitle(QCoreApplication::translate("QgsTextEditConfigDlg", "Multiline", nullptr));
        mUseHtml->setText(QCoreApplication::translate("QgsTextEditConfigDlg", "HTML", nullptr));
        (void)QgsTextEditConfigDlg;
    } // retranslateUi

};

namespace Ui {
    class QgsTextEditConfigDlg: public Ui_QgsTextEditConfigDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTEXTEDITCONFIGDLG_H
