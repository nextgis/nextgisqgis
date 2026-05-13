/********************************************************************************
** Form generated from reading UI file 'qgsauthconfigidedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGIDEDIT_H
#define UI_QGSAUTHCONFIGIDEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigIdEdit
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *leAuthCfg;
    QToolButton *btnLock;

    void setupUi(QWidget *QgsAuthConfigIdEdit)
    {
        if (QgsAuthConfigIdEdit->objectName().isEmpty())
            QgsAuthConfigIdEdit->setObjectName(QString::fromUtf8("QgsAuthConfigIdEdit"));
        QgsAuthConfigIdEdit->resize(120, 22);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsAuthConfigIdEdit->sizePolicy().hasHeightForWidth());
        QgsAuthConfigIdEdit->setSizePolicy(sizePolicy);
        QgsAuthConfigIdEdit->setMaximumSize(QSize(120, 16777215));
        QgsAuthConfigIdEdit->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(QgsAuthConfigIdEdit);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leAuthCfg = new QLineEdit(QgsAuthConfigIdEdit);
        leAuthCfg->setObjectName(QString::fromUtf8("leAuthCfg"));
        leAuthCfg->setMinimumSize(QSize(80, 0));
        leAuthCfg->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(leAuthCfg);

        btnLock = new QToolButton(QgsAuthConfigIdEdit);
        btnLock->setObjectName(QString::fromUtf8("btnLock"));
        btnLock->setMaximumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/locked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/images/themes/default/unlocked.svg"), QSize(), QIcon::Normal, QIcon::On);
        btnLock->setIcon(icon);
        btnLock->setCheckable(true);

        horizontalLayout->addWidget(btnLock);


        retranslateUi(QgsAuthConfigIdEdit);

        QMetaObject::connectSlotsByName(QgsAuthConfigIdEdit);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthConfigIdEdit)
    {
        leAuthCfg->setPlaceholderText(QCoreApplication::translate("QgsAuthConfigIdEdit", "Generated", nullptr));
#if QT_CONFIG(tooltip)
        btnLock->setToolTip(QCoreApplication::translate("QgsAuthConfigIdEdit", "<html><head/><body><p>Unlock to edit the ID</p><p><span style=\" font-style:italic;\">7-character alphanumeric only</span></p><p><span style=\" font-weight:600; color:#a80b0a;\">Editing may break things!</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLock->setText(QCoreApplication::translate("QgsAuthConfigIdEdit", "\342\200\246", nullptr));
        (void)QgsAuthConfigIdEdit;
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigIdEdit: public Ui_QgsAuthConfigIdEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGIDEDIT_H
