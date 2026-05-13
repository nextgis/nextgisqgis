/********************************************************************************
** Form generated from reading UI file 'qgssensorthingssubseteditorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSENSORTHINGSSUBSETEDITORBASE_H
#define UI_QGSSENSORTHINGSSUBSETEDITORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSensorThingsSubsetEditorBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *mButtonBox;
    QGroupBox *mEditorGroupBox;
    QLabel *lblDataUri;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QListView *lstFields;
    QgsCollapsibleGroupBox *groupBox4;
    QGridLayout *_3;
    QPushButton *mButtonNow;
    QPushButton *mButtonEq;
    QPushButton *mButtonLe;
    QPushButton *mButtonAnd;
    QLabel *mLabelDate;
    QLabel *mLabelLogical;
    QPushButton *mButtonAdd;
    QPushButton *mButtonGt;
    QPushButton *mButtonGe;
    QLabel *mLabelArithmetic;
    QPushButton *mButtonDiv;
    QPushButton *mButtonLt;
    QPushButton *mButtonSub;
    QPushButton *mButtonNot;
    QPushButton *mButtonMod;
    QLabel *mLabelComparisons;
    QPushButton *mButtonMul;
    QPushButton *mButtonNe;
    QPushButton *mButtonOr;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsSensorThingsSubsetEditorBase)
    {
        if (QgsSensorThingsSubsetEditorBase->objectName().isEmpty())
            QgsSensorThingsSubsetEditorBase->setObjectName(QString::fromUtf8("QgsSensorThingsSubsetEditorBase"));
        QgsSensorThingsSubsetEditorBase->resize(852, 740);
        gridLayout = new QGridLayout(QgsSensorThingsSubsetEditorBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mButtonBox = new QDialogButtonBox(QgsSensorThingsSubsetEditorBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);
        mButtonBox->setCenterButtons(false);

        gridLayout->addWidget(mButtonBox, 3, 0, 1, 2);

        mEditorGroupBox = new QGroupBox(QgsSensorThingsSubsetEditorBase);
        mEditorGroupBox->setObjectName(QString::fromUtf8("mEditorGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEditorGroupBox->sizePolicy().hasHeightForWidth());
        mEditorGroupBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mEditorGroupBox, 2, 0, 1, 2);

        lblDataUri = new QLabel(QgsSensorThingsSubsetEditorBase);
        lblDataUri->setObjectName(QString::fromUtf8("lblDataUri"));

        gridLayout->addWidget(lblDataUri, 0, 0, 1, 2);

        groupBox1 = new QGroupBox(QgsSensorThingsSubsetEditorBase);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        sizePolicy.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        lstFields = new QListView(groupBox1);
        lstFields->setObjectName(QString::fromUtf8("lstFields"));

        gridLayout1->addWidget(lstFields, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox1, 1, 0, 1, 1);

        groupBox4 = new QgsCollapsibleGroupBox(QgsSensorThingsSubsetEditorBase);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        _3 = new QGridLayout(groupBox4);
        _3->setObjectName(QString::fromUtf8("_3"));
        _3->setContentsMargins(11, 11, 11, 11);
        mButtonNow = new QPushButton(groupBox4);
        mButtonNow->setObjectName(QString::fromUtf8("mButtonNow"));

        _3->addWidget(mButtonNow, 3, 3, 1, 1);

        mButtonEq = new QPushButton(groupBox4);
        mButtonEq->setObjectName(QString::fromUtf8("mButtonEq"));

        _3->addWidget(mButtonEq, 1, 0, 1, 1);

        mButtonLe = new QPushButton(groupBox4);
        mButtonLe->setObjectName(QString::fromUtf8("mButtonLe"));

        _3->addWidget(mButtonLe, 1, 5, 1, 1);

        mButtonAnd = new QPushButton(groupBox4);
        mButtonAnd->setObjectName(QString::fromUtf8("mButtonAnd"));

        _3->addWidget(mButtonAnd, 3, 0, 1, 1);

        mLabelDate = new QLabel(groupBox4);
        mLabelDate->setObjectName(QString::fromUtf8("mLabelDate"));

        _3->addWidget(mLabelDate, 2, 3, 1, 3);

        mLabelLogical = new QLabel(groupBox4);
        mLabelLogical->setObjectName(QString::fromUtf8("mLabelLogical"));

        _3->addWidget(mLabelLogical, 2, 0, 1, 3);

        mButtonAdd = new QPushButton(groupBox4);
        mButtonAdd->setObjectName(QString::fromUtf8("mButtonAdd"));

        _3->addWidget(mButtonAdd, 5, 0, 1, 1);

        mButtonGt = new QPushButton(groupBox4);
        mButtonGt->setObjectName(QString::fromUtf8("mButtonGt"));

        _3->addWidget(mButtonGt, 1, 2, 1, 1);

        mButtonGe = new QPushButton(groupBox4);
        mButtonGe->setObjectName(QString::fromUtf8("mButtonGe"));

        _3->addWidget(mButtonGe, 1, 3, 1, 1);

        mLabelArithmetic = new QLabel(groupBox4);
        mLabelArithmetic->setObjectName(QString::fromUtf8("mLabelArithmetic"));

        _3->addWidget(mLabelArithmetic, 4, 0, 1, 6);

        mButtonDiv = new QPushButton(groupBox4);
        mButtonDiv->setObjectName(QString::fromUtf8("mButtonDiv"));

        _3->addWidget(mButtonDiv, 5, 3, 1, 1);

        mButtonLt = new QPushButton(groupBox4);
        mButtonLt->setObjectName(QString::fromUtf8("mButtonLt"));

        _3->addWidget(mButtonLt, 1, 4, 1, 1);

        mButtonSub = new QPushButton(groupBox4);
        mButtonSub->setObjectName(QString::fromUtf8("mButtonSub"));

        _3->addWidget(mButtonSub, 5, 1, 1, 1);

        mButtonNot = new QPushButton(groupBox4);
        mButtonNot->setObjectName(QString::fromUtf8("mButtonNot"));

        _3->addWidget(mButtonNot, 3, 2, 1, 1);

        mButtonMod = new QPushButton(groupBox4);
        mButtonMod->setObjectName(QString::fromUtf8("mButtonMod"));

        _3->addWidget(mButtonMod, 5, 4, 1, 1);

        mLabelComparisons = new QLabel(groupBox4);
        mLabelComparisons->setObjectName(QString::fromUtf8("mLabelComparisons"));

        _3->addWidget(mLabelComparisons, 0, 0, 1, 6);

        mButtonMul = new QPushButton(groupBox4);
        mButtonMul->setObjectName(QString::fromUtf8("mButtonMul"));

        _3->addWidget(mButtonMul, 5, 2, 1, 1);

        mButtonNe = new QPushButton(groupBox4);
        mButtonNe->setObjectName(QString::fromUtf8("mButtonNe"));

        _3->addWidget(mButtonNe, 1, 1, 1, 1);

        mButtonOr = new QPushButton(groupBox4);
        mButtonOr->setObjectName(QString::fromUtf8("mButtonOr"));

        _3->addWidget(mButtonOr, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _3->addItem(verticalSpacer, 6, 1, 1, 1);


        gridLayout->addWidget(groupBox4, 1, 1, 1, 1);

        QWidget::setTabOrder(lstFields, groupBox4);
        QWidget::setTabOrder(groupBox4, mButtonEq);
        QWidget::setTabOrder(mButtonEq, mButtonNe);
        QWidget::setTabOrder(mButtonNe, mButtonGt);
        QWidget::setTabOrder(mButtonGt, mButtonGe);
        QWidget::setTabOrder(mButtonGe, mButtonLt);
        QWidget::setTabOrder(mButtonLt, mButtonLe);
        QWidget::setTabOrder(mButtonLe, mButtonAnd);
        QWidget::setTabOrder(mButtonAnd, mButtonOr);
        QWidget::setTabOrder(mButtonOr, mButtonNot);
        QWidget::setTabOrder(mButtonNot, mButtonNow);
        QWidget::setTabOrder(mButtonNow, mButtonAdd);
        QWidget::setTabOrder(mButtonAdd, mButtonSub);
        QWidget::setTabOrder(mButtonSub, mButtonMul);
        QWidget::setTabOrder(mButtonMul, mButtonDiv);
        QWidget::setTabOrder(mButtonDiv, mButtonMod);

        retranslateUi(QgsSensorThingsSubsetEditorBase);

        QMetaObject::connectSlotsByName(QgsSensorThingsSubsetEditorBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSensorThingsSubsetEditorBase)
    {
        QgsSensorThingsSubsetEditorBase->setWindowTitle(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "OGC SensorThings Data Filter", nullptr));
        mEditorGroupBox->setTitle(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "OGC SensorThings Filter Expression", nullptr));
        lblDataUri->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "Datasource", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "Fields", nullptr));
#if QT_CONFIG(tooltip)
        lstFields->setToolTip(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">List of fields in this vector file</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox4->setTitle(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "Operators", nullptr));
        mButtonNow->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "now()", nullptr));
        mButtonEq->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "eq", nullptr));
        mButtonLe->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "le", nullptr));
        mButtonAnd->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "and", nullptr));
        mLabelDate->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "Date", nullptr));
        mLabelLogical->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "Logical operators", nullptr));
        mButtonAdd->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "add", nullptr));
        mButtonGt->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "gt", nullptr));
        mButtonGe->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "ge", nullptr));
        mLabelArithmetic->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "Arithmetic", nullptr));
        mButtonDiv->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "div", nullptr));
        mButtonLt->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "lt", nullptr));
        mButtonSub->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "sub", nullptr));
        mButtonNot->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "not", nullptr));
        mButtonMod->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "mod", nullptr));
        mLabelComparisons->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "Comparisons", nullptr));
        mButtonMul->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "mul", nullptr));
        mButtonNe->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "ne", nullptr));
        mButtonOr->setText(QCoreApplication::translate("QgsSensorThingsSubsetEditorBase", "or", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSensorThingsSubsetEditorBase: public Ui_QgsSensorThingsSubsetEditorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSENSORTHINGSSUBSETEDITORBASE_H
