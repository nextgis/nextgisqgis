/********************************************************************************
** Form generated from reading UI file 'qgsprocessingpointcloudexpressiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGPOINTCLOUDEXPRESSIONDIALOGBASE_H
#define UI_QGSPROCESSINGPOINTCLOUDEXPRESSIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingPointCloudExpressionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QListView *lstAttributes;
    QListView *lstValues;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QPushButton *btnEqual;
    QPushButton *btnLessThan;
    QPushButton *btnLessEqual;
    QPushButton *btnGreaterThan;
    QPushButton *btnAnd;
    QPushButton *btnOr;
    QPushButton *btnGreaterEqual;
    QPushButton *btnIn;
    QPushButton *btnNotEqual;
    QPushButton *btnNotIn;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QGridLayout *_2;
    QgsCodeEditorSQL *mTxtSql;

    void setupUi(QDialog *QgsProcessingPointCloudExpressionDialogBase)
    {
        if (QgsProcessingPointCloudExpressionDialogBase->objectName().isEmpty())
            QgsProcessingPointCloudExpressionDialogBase->setObjectName(QString::fromUtf8("QgsProcessingPointCloudExpressionDialogBase"));
        QgsProcessingPointCloudExpressionDialogBase->resize(560, 481);
        gridLayout_2 = new QGridLayout(QgsProcessingPointCloudExpressionDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(QgsProcessingPointCloudExpressionDialogBase);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        lstAttributes = new QListView(frame);
        lstAttributes->setObjectName(QString::fromUtf8("lstAttributes"));
        lstAttributes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstAttributes->setAlternatingRowColors(true);
        lstAttributes->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstAttributes->setUniformItemSizes(true);

        gridLayout->addWidget(lstAttributes, 1, 0, 1, 1);

        lstValues = new QListView(frame);
        lstValues->setObjectName(QString::fromUtf8("lstValues"));
        lstValues->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstValues->setAlternatingRowColors(true);
        lstValues->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstValues->setUniformItemSizes(true);

        gridLayout->addWidget(lstValues, 1, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 2);

        groupBox = new QgsCollapsibleGroupBox(QgsProcessingPointCloudExpressionDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        btnEqual = new QPushButton(groupBox);
        btnEqual->setObjectName(QString::fromUtf8("btnEqual"));

        gridLayout1->addWidget(btnEqual, 0, 0, 1, 1);

        btnLessThan = new QPushButton(groupBox);
        btnLessThan->setObjectName(QString::fromUtf8("btnLessThan"));

        gridLayout1->addWidget(btnLessThan, 0, 1, 1, 1);

        btnLessEqual = new QPushButton(groupBox);
        btnLessEqual->setObjectName(QString::fromUtf8("btnLessEqual"));

        gridLayout1->addWidget(btnLessEqual, 1, 0, 1, 1);

        btnGreaterThan = new QPushButton(groupBox);
        btnGreaterThan->setObjectName(QString::fromUtf8("btnGreaterThan"));

        gridLayout1->addWidget(btnGreaterThan, 0, 2, 1, 1);

        btnAnd = new QPushButton(groupBox);
        btnAnd->setObjectName(QString::fromUtf8("btnAnd"));

        gridLayout1->addWidget(btnAnd, 0, 3, 1, 1);

        btnOr = new QPushButton(groupBox);
        btnOr->setObjectName(QString::fromUtf8("btnOr"));

        gridLayout1->addWidget(btnOr, 1, 3, 1, 1);

        btnGreaterEqual = new QPushButton(groupBox);
        btnGreaterEqual->setObjectName(QString::fromUtf8("btnGreaterEqual"));

        gridLayout1->addWidget(btnGreaterEqual, 1, 1, 1, 1);

        btnIn = new QPushButton(groupBox);
        btnIn->setObjectName(QString::fromUtf8("btnIn"));

        gridLayout1->addWidget(btnIn, 0, 4, 1, 1);

        btnNotEqual = new QPushButton(groupBox);
        btnNotEqual->setObjectName(QString::fromUtf8("btnNotEqual"));

        gridLayout1->addWidget(btnNotEqual, 1, 2, 1, 1);

        btnNotIn = new QPushButton(groupBox);
        btnNotIn->setObjectName(QString::fromUtf8("btnNotIn"));

        gridLayout1->addWidget(btnNotIn, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer, 0, 5, 2, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsProcessingPointCloudExpressionDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 1, 1, 1);

        groupBox_2 = new QGroupBox(QgsProcessingPointCloudExpressionDialogBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        _2 = new QGridLayout(groupBox_2);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(11, 11, 11, 11);
        mTxtSql = new QgsCodeEditorSQL(groupBox_2);
        mTxtSql->setObjectName(QString::fromUtf8("mTxtSql"));

        _2->addWidget(mTxtSql, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 2, 0, 1, 2);


        retranslateUi(QgsProcessingPointCloudExpressionDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsProcessingPointCloudExpressionDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsProcessingPointCloudExpressionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsProcessingPointCloudExpressionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProcessingPointCloudExpressionDialogBase)
    {
        QgsProcessingPointCloudExpressionDialogBase->setWindowTitle(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "Point Cloud Expression", nullptr));
        label->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "Attributes", nullptr));
        label_2->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "Values", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "Operators", nullptr));
        btnEqual->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "=", nullptr));
        btnLessThan->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "<", nullptr));
        btnLessEqual->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "<=", nullptr));
        btnGreaterThan->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", ">", nullptr));
        btnAnd->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "AND", nullptr));
        btnOr->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "OR", nullptr));
        btnGreaterEqual->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", ">=", nullptr));
        btnIn->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "IN", nullptr));
        btnNotEqual->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "!=", nullptr));
        btnNotIn->setText(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "NOT IN", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsProcessingPointCloudExpressionDialogBase", "Filter Expression", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingPointCloudExpressionDialogBase: public Ui_QgsProcessingPointCloudExpressionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGPOINTCLOUDEXPRESSIONDIALOGBASE_H
