/********************************************************************************
** Form generated from reading UI file 'qgsdisplayanglebase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDISPLAYANGLEBASE_H
#define UI_QGSDISPLAYANGLEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QgsDisplayAngleBase
{
public:
    QGridLayout *gridLayout;
    QLineEdit *mAngleLineEdit;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDisplayAngleBase)
    {
        if (QgsDisplayAngleBase->objectName().isEmpty())
            QgsDisplayAngleBase->setObjectName(QString::fromUtf8("QgsDisplayAngleBase"));
        QgsDisplayAngleBase->resize(293, 105);
        gridLayout = new QGridLayout(QgsDisplayAngleBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mAngleLineEdit = new QLineEdit(QgsDisplayAngleBase);
        mAngleLineEdit->setObjectName(QString::fromUtf8("mAngleLineEdit"));
        mAngleLineEdit->setReadOnly(true);

        gridLayout->addWidget(mAngleLineEdit, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(129, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsDisplayAngleBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(QgsDisplayAngleBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDisplayAngleBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDisplayAngleBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDisplayAngleBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDisplayAngleBase)
    {
        QgsDisplayAngleBase->setWindowTitle(QCoreApplication::translate("QgsDisplayAngleBase", "Angle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDisplayAngleBase: public Ui_QgsDisplayAngleBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDISPLAYANGLEBASE_H
