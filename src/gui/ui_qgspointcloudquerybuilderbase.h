/*
Query builder for point cloud layers
*/

/********************************************************************************
** Form generated from reading UI file 'qgspointcloudquerybuilderbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDQUERYBUILDERBASE_H
#define UI_QGSPOINTCLOUDQUERYBUILDERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudQueryBuilderBase
{
public:
    QGridLayout *gridLayout;
    QLabel *lblDataUri;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QListView *lstAttributes;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QListView *lstValues;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *groupBox4;
    QGridLayout *gridLayout3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLessThan;
    QPushButton *btnGreaterThan;
    QPushButton *btnEqual;
    QPushButton *btnLessEqual;
    QPushButton *btnIn;
    QPushButton *btnGreaterEqual;
    QPushButton *btnNotEqual;
    QPushButton *btnAnd;
    QPushButton *btnOr;
    QPushButton *btnNotIn;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout4;
    QgsCodeEditorSQL *mTxtSql;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPointCloudQueryBuilderBase)
    {
        if (QgsPointCloudQueryBuilderBase->objectName().isEmpty())
            QgsPointCloudQueryBuilderBase->setObjectName(QString::fromUtf8("QgsPointCloudQueryBuilderBase"));
        QgsPointCloudQueryBuilderBase->resize(727, 707);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsPointCloudQueryBuilderBase->sizePolicy().hasHeightForWidth());
        QgsPointCloudQueryBuilderBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsPointCloudQueryBuilderBase->setWindowIcon(icon);
        QgsPointCloudQueryBuilderBase->setModal(true);
        gridLayout = new QGridLayout(QgsPointCloudQueryBuilderBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblDataUri = new QLabel(QgsPointCloudQueryBuilderBase);
        lblDataUri->setObjectName(QString::fromUtf8("lblDataUri"));

        gridLayout->addWidget(lblDataUri, 0, 0, 1, 1);

        splitter_2 = new QSplitter(QgsPointCloudQueryBuilderBase);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox1 = new QGroupBox(splitter);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        lstAttributes = new QListView(groupBox1);
        lstAttributes->setObjectName(QString::fromUtf8("lstAttributes"));

        gridLayout1->addWidget(lstAttributes, 0, 0, 1, 1);

        splitter->addWidget(groupBox1);
        groupBox2 = new QGroupBox(splitter);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        sizePolicy1.setHeightForWidth(groupBox2->sizePolicy().hasHeightForWidth());
        groupBox2->setSizePolicy(sizePolicy1);
        gridLayout2 = new QGridLayout(groupBox2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        lstValues = new QListView(groupBox2);
        lstValues->setObjectName(QString::fromUtf8("lstValues"));
        lstValues->setAutoFillBackground(true);
        lstValues->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstValues->setUniformItemSizes(true);

        gridLayout2->addWidget(lstValues, 0, 0, 1, 2);

        splitter->addWidget(groupBox2);
        splitter_2->addWidget(splitter);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox4 = new QgsCollapsibleGroupBox(verticalLayoutWidget);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        gridLayout3 = new QGridLayout(groupBox4);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(horizontalSpacer, 0, 6, 1, 1);

        btnLessThan = new QPushButton(groupBox4);
        btnLessThan->setObjectName(QString::fromUtf8("btnLessThan"));

        gridLayout3->addWidget(btnLessThan, 0, 1, 1, 1);

        btnGreaterThan = new QPushButton(groupBox4);
        btnGreaterThan->setObjectName(QString::fromUtf8("btnGreaterThan"));

        gridLayout3->addWidget(btnGreaterThan, 0, 2, 1, 1);

        btnEqual = new QPushButton(groupBox4);
        btnEqual->setObjectName(QString::fromUtf8("btnEqual"));

        gridLayout3->addWidget(btnEqual, 0, 0, 1, 1);

        btnLessEqual = new QPushButton(groupBox4);
        btnLessEqual->setObjectName(QString::fromUtf8("btnLessEqual"));

        gridLayout3->addWidget(btnLessEqual, 1, 0, 1, 1);

        btnIn = new QPushButton(groupBox4);
        btnIn->setObjectName(QString::fromUtf8("btnIn"));

        gridLayout3->addWidget(btnIn, 0, 4, 1, 1);

        btnGreaterEqual = new QPushButton(groupBox4);
        btnGreaterEqual->setObjectName(QString::fromUtf8("btnGreaterEqual"));

        gridLayout3->addWidget(btnGreaterEqual, 1, 1, 1, 1);

        btnNotEqual = new QPushButton(groupBox4);
        btnNotEqual->setObjectName(QString::fromUtf8("btnNotEqual"));

        gridLayout3->addWidget(btnNotEqual, 1, 2, 1, 1);

        btnAnd = new QPushButton(groupBox4);
        btnAnd->setObjectName(QString::fromUtf8("btnAnd"));

        gridLayout3->addWidget(btnAnd, 0, 3, 1, 1);

        btnOr = new QPushButton(groupBox4);
        btnOr->setObjectName(QString::fromUtf8("btnOr"));

        gridLayout3->addWidget(btnOr, 1, 3, 1, 1);

        btnNotIn = new QPushButton(groupBox4);
        btnNotIn->setObjectName(QString::fromUtf8("btnNotIn"));

        gridLayout3->addWidget(btnNotIn, 1, 4, 1, 1);


        verticalLayout->addWidget(groupBox4);

        groupBox3 = new QGroupBox(verticalLayoutWidget);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox3->sizePolicy().hasHeightForWidth());
        groupBox3->setSizePolicy(sizePolicy2);
        gridLayout4 = new QGridLayout(groupBox3);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        mTxtSql = new QgsCodeEditorSQL(groupBox3);
        mTxtSql->setObjectName(QString::fromUtf8("mTxtSql"));

        gridLayout4->addWidget(mTxtSql, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox3);

        splitter_2->addWidget(verticalLayoutWidget);

        gridLayout->addWidget(splitter_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsPointCloudQueryBuilderBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        splitter_2->raise();
        lblDataUri->raise();
        buttonBox->raise();
        QWidget::setTabOrder(lstAttributes, btnEqual);
        QWidget::setTabOrder(btnEqual, btnLessThan);
        QWidget::setTabOrder(btnLessThan, btnGreaterThan);
        QWidget::setTabOrder(btnGreaterThan, btnIn);
        QWidget::setTabOrder(btnIn, btnLessEqual);
        QWidget::setTabOrder(btnLessEqual, btnGreaterEqual);
        QWidget::setTabOrder(btnGreaterEqual, btnNotEqual);

        retranslateUi(QgsPointCloudQueryBuilderBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPointCloudQueryBuilderBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPointCloudQueryBuilderBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsPointCloudQueryBuilderBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPointCloudQueryBuilderBase)
    {
        QgsPointCloudQueryBuilderBase->setWindowTitle(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "Query Builder", nullptr));
        lblDataUri->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "Datasource", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "Fields", nullptr));
#if QT_CONFIG(tooltip)
        lstAttributes->setToolTip(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "<html><head/><body><p>List of attributes in this point cloud</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox2->setTitle(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "Values", nullptr));
#if QT_CONFIG(tooltip)
        lstValues->setToolTip(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "<html><head/><body><p>List of values for the current attribute.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox4->setTitle(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "Operators", nullptr));
        btnLessThan->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "<", nullptr));
        btnGreaterThan->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", ">", nullptr));
        btnEqual->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "=", nullptr));
        btnLessEqual->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "<=", nullptr));
        btnIn->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "IN", nullptr));
        btnGreaterEqual->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", ">=", nullptr));
        btnNotEqual->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "!=", nullptr));
        btnAnd->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "AND", nullptr));
        btnOr->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "OR", nullptr));
        btnNotIn->setText(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "NOT IN", nullptr));
        groupBox3->setTitle(QCoreApplication::translate("QgsPointCloudQueryBuilderBase", "Provider Specific Filter Expression", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudQueryBuilderBase: public Ui_QgsPointCloudQueryBuilderBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDQUERYBUILDERBASE_H
