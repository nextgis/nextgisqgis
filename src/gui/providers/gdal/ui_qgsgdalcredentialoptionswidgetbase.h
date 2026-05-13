/********************************************************************************
** Form generated from reading UI file 'qgsgdalcredentialoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGDALCREDENTIALOPTIONSWIDGETBASE_H
#define UI_QGSGDALCREDENTIALOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsGdalCredentialOptionsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QTableView *mTableView;
    QLabel *mLabelWarning;
    QLabel *mLabelInfo;

    void setupUi(QWidget *QgsGdalCredentialOptionsWidgetBase)
    {
        if (QgsGdalCredentialOptionsWidgetBase->objectName().isEmpty())
            QgsGdalCredentialOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsGdalCredentialOptionsWidgetBase"));
        QgsGdalCredentialOptionsWidgetBase->resize(705, 446);
        gridLayout = new QGridLayout(QgsGdalCredentialOptionsWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mTableView = new QTableView(QgsGdalCredentialOptionsWidgetBase);
        mTableView->setObjectName(QString::fromUtf8("mTableView"));

        gridLayout->addWidget(mTableView, 2, 0, 1, 1);

        mLabelWarning = new QLabel(QgsGdalCredentialOptionsWidgetBase);
        mLabelWarning->setObjectName(QString::fromUtf8("mLabelWarning"));

        gridLayout->addWidget(mLabelWarning, 1, 0, 1, 1);

        mLabelInfo = new QLabel(QgsGdalCredentialOptionsWidgetBase);
        mLabelInfo->setObjectName(QString::fromUtf8("mLabelInfo"));

        gridLayout->addWidget(mLabelInfo, 3, 0, 1, 1);


        retranslateUi(QgsGdalCredentialOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsGdalCredentialOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsGdalCredentialOptionsWidgetBase)
    {
        QgsGdalCredentialOptionsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsGdalCredentialOptionsWidgetBase", "Credentials", nullptr));
        mLabelWarning->setText(QCoreApplication::translate("QgsGdalCredentialOptionsWidgetBase", "TextLabel", nullptr));
        mLabelInfo->setText(QCoreApplication::translate("QgsGdalCredentialOptionsWidgetBase", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGdalCredentialOptionsWidgetBase: public Ui_QgsGdalCredentialOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGDALCREDENTIALOPTIONSWIDGETBASE_H
