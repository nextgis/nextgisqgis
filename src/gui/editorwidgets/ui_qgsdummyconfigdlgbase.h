/********************************************************************************
** Form generated from reading UI file 'qgsdummyconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDUMMYCONFIGDLGBASE_H
#define UI_QGSDUMMYCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDummyConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *mDummyTextLabel;

    void setupUi(QWidget *QgsDummyConfigDlgBase)
    {
        if (QgsDummyConfigDlgBase->objectName().isEmpty())
            QgsDummyConfigDlgBase->setObjectName(QString::fromUtf8("QgsDummyConfigDlgBase"));
        QgsDummyConfigDlgBase->resize(400, 300);
        QgsDummyConfigDlgBase->setWindowTitle(QString::fromUtf8("Form"));
        formLayout = new QFormLayout(QgsDummyConfigDlgBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mDummyTextLabel = new QLabel(QgsDummyConfigDlgBase);
        mDummyTextLabel->setObjectName(QString::fromUtf8("mDummyTextLabel"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, mDummyTextLabel);


        retranslateUi(QgsDummyConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsDummyConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDummyConfigDlgBase)
    {
        mDummyTextLabel->setText(QCoreApplication::translate("QgsDummyConfigDlgBase", "Dummy Text", nullptr));
        (void)QgsDummyConfigDlgBase;
    } // retranslateUi

};

namespace Ui {
    class QgsDummyConfigDlgBase: public Ui_QgsDummyConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDUMMYCONFIGDLGBASE_H
