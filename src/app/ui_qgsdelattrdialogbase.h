/********************************************************************************
** Form generated from reading UI file 'qgsdelattrdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDELATTRDIALOGBASE_H
#define UI_QGSDELATTRDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDelAttrDialogBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QListWidget *listBox2;
    QLabel *mEditModeInfo;
    QLabel *mCanDeleteAttributesInfo;

    void setupUi(QDialog *QgsDelAttrDialogBase)
    {
        if (QgsDelAttrDialogBase->objectName().isEmpty())
            QgsDelAttrDialogBase->setObjectName(QString::fromUtf8("QgsDelAttrDialogBase"));
        QgsDelAttrDialogBase->resize(463, 301);
        gridLayout = new QGridLayout(QgsDelAttrDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 3);
        buttonBox = new QDialogButtonBox(QgsDelAttrDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        listBox2 = new QListWidget(QgsDelAttrDialogBase);
        listBox2->setObjectName(QString::fromUtf8("listBox2"));
        listBox2->setFrameShape(QFrame::NoFrame);
        listBox2->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout->addWidget(listBox2, 0, 0, 1, 1);

        mEditModeInfo = new QLabel(QgsDelAttrDialogBase);
        mEditModeInfo->setObjectName(QString::fromUtf8("mEditModeInfo"));

        gridLayout->addWidget(mEditModeInfo, 1, 0, 1, 1);

        mCanDeleteAttributesInfo = new QLabel(QgsDelAttrDialogBase);
        mCanDeleteAttributesInfo->setObjectName(QString::fromUtf8("mCanDeleteAttributesInfo"));

        gridLayout->addWidget(mCanDeleteAttributesInfo, 2, 0, 1, 1);

        QWidget::setTabOrder(listBox2, buttonBox);

        retranslateUi(QgsDelAttrDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDelAttrDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDelAttrDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDelAttrDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDelAttrDialogBase)
    {
        QgsDelAttrDialogBase->setWindowTitle(QCoreApplication::translate("QgsDelAttrDialogBase", "Delete Fields", nullptr));
        mEditModeInfo->setText(QCoreApplication::translate("QgsDelAttrDialogBase", "Provider fields can only be deleted when the layer is in edit mode.", nullptr));
        mCanDeleteAttributesInfo->setText(QCoreApplication::translate("QgsDelAttrDialogBase", "Provider does not support deleting fields.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDelAttrDialogBase: public Ui_QgsDelAttrDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDELATTRDIALOGBASE_H
