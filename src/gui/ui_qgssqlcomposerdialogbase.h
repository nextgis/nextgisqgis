/********************************************************************************
** Form generated from reading UI file 'qgssqlcomposerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSQLCOMPOSERDIALOGBASE_H
#define UI_QGSSQLCOMPOSERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorsql.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSQLComposerDialogBase
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mSQLStatementLabel;
    QgsCodeEditorSQL *mQueryEdit;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout;
    QLabel *mColumnsLabel;
    QTextEdit *mColumnsEditor;
    QLabel *mTablesLabel;
    QLineEdit *mTablesEditor;
    QLabel *mJoinsLabels;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *mTableJoins;
    QHBoxLayout *mAddRemoveLayout;
    QPushButton *mAddJoinButton;
    QPushButton *mRemoveJoinButton;
    QSpacerItem *mAddRemoveSpacer;
    QLabel *mWhereLabel;
    QTextEdit *mWhereEditor;
    QLabel *mOrderLabel;
    QTextEdit *mOrderEditor;
    QVBoxLayout *verticalLayout_4;
    QToolBox *mToolbox;
    QWidget *mPageData;
    QVBoxLayout *verticalLayout_5;
    QComboBox *mTablesCombo;
    QComboBox *mColumnsCombo;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_2;
    QComboBox *mAggregatesCombo;
    QComboBox *mFunctionsCombo;
    QComboBox *mSpatialPredicatesCombo;
    QComboBox *mStringFunctionsCombo;
    QComboBox *mOperatorsCombo;
    QWidget *mPageColumnsValues;
    QVBoxLayout *verticalLayout_6;
    QComboBox *columns_2;
    QCheckBox *extract;
    QListView *values;
    QHBoxLayout *horizontalLayout_7;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsSQLComposerDialogBase)
    {
        if (QgsSQLComposerDialogBase->objectName().isEmpty())
            QgsSQLComposerDialogBase->setObjectName(QString::fromUtf8("QgsSQLComposerDialogBase"));
        QgsSQLComposerDialogBase->resize(747, 641);
        verticalLayout_7 = new QVBoxLayout(QgsSQLComposerDialogBase);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSQLStatementLabel = new QLabel(QgsSQLComposerDialogBase);
        mSQLStatementLabel->setObjectName(QString::fromUtf8("mSQLStatementLabel"));

        horizontalLayout_2->addWidget(mSQLStatementLabel);

        mQueryEdit = new QgsCodeEditorSQL(QgsSQLComposerDialogBase);
        mQueryEdit->setObjectName(QString::fromUtf8("mQueryEdit"));

        horizontalLayout_2->addWidget(mQueryEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(verticalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        mColumnsLabel = new QLabel(QgsSQLComposerDialogBase);
        mColumnsLabel->setObjectName(QString::fromUtf8("mColumnsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mColumnsLabel);

        mColumnsEditor = new QTextEdit(QgsSQLComposerDialogBase);
        mColumnsEditor->setObjectName(QString::fromUtf8("mColumnsEditor"));
        mColumnsEditor->setMinimumSize(QSize(400, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, mColumnsEditor);

        mTablesLabel = new QLabel(QgsSQLComposerDialogBase);
        mTablesLabel->setObjectName(QString::fromUtf8("mTablesLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mTablesLabel);

        mTablesEditor = new QLineEdit(QgsSQLComposerDialogBase);
        mTablesEditor->setObjectName(QString::fromUtf8("mTablesEditor"));
        mTablesEditor->setFrame(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, mTablesEditor);

        mJoinsLabels = new QLabel(QgsSQLComposerDialogBase);
        mJoinsLabels->setObjectName(QString::fromUtf8("mJoinsLabels"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mJoinsLabels);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        mTableJoins = new QTableWidget(QgsSQLComposerDialogBase);
        if (mTableJoins->columnCount() < 2)
            mTableJoins->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mTableJoins->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mTableJoins->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mTableJoins->setObjectName(QString::fromUtf8("mTableJoins"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTableJoins->sizePolicy().hasHeightForWidth());
        mTableJoins->setSizePolicy(sizePolicy);
        mTableJoins->setMinimumSize(QSize(398, 0));
        mTableJoins->setFrameShape(QFrame::NoFrame);
        mTableJoins->setRowCount(0);
        mTableJoins->horizontalHeader()->setDefaultSectionSize(200);
        mTableJoins->horizontalHeader()->setStretchLastSection(false);
        mTableJoins->verticalHeader()->setVisible(false);

        verticalLayout_8->addWidget(mTableJoins);

        mAddRemoveLayout = new QHBoxLayout();
        mAddRemoveLayout->setObjectName(QString::fromUtf8("mAddRemoveLayout"));
        mAddJoinButton = new QPushButton(QgsSQLComposerDialogBase);
        mAddJoinButton->setObjectName(QString::fromUtf8("mAddJoinButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddJoinButton->setIcon(icon);

        mAddRemoveLayout->addWidget(mAddJoinButton);

        mRemoveJoinButton = new QPushButton(QgsSQLComposerDialogBase);
        mRemoveJoinButton->setObjectName(QString::fromUtf8("mRemoveJoinButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveJoinButton->setIcon(icon1);

        mAddRemoveLayout->addWidget(mRemoveJoinButton);

        mAddRemoveSpacer = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mAddRemoveLayout->addItem(mAddRemoveSpacer);


        verticalLayout_8->addLayout(mAddRemoveLayout);


        formLayout->setLayout(2, QFormLayout::FieldRole, verticalLayout_8);

        mWhereLabel = new QLabel(QgsSQLComposerDialogBase);
        mWhereLabel->setObjectName(QString::fromUtf8("mWhereLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mWhereLabel);

        mWhereEditor = new QTextEdit(QgsSQLComposerDialogBase);
        mWhereEditor->setObjectName(QString::fromUtf8("mWhereEditor"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mWhereEditor);

        mOrderLabel = new QLabel(QgsSQLComposerDialogBase);
        mOrderLabel->setObjectName(QString::fromUtf8("mOrderLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mOrderLabel);

        mOrderEditor = new QTextEdit(QgsSQLComposerDialogBase);
        mOrderEditor->setObjectName(QString::fromUtf8("mOrderEditor"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOrderEditor->sizePolicy().hasHeightForWidth());
        mOrderEditor->setSizePolicy(sizePolicy1);
        mOrderEditor->setMaximumSize(QSize(16777215, 25));
        mOrderEditor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOrderEditor->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        formLayout->setWidget(4, QFormLayout::FieldRole, mOrderEditor);


        horizontalLayout_6->addLayout(formLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mToolbox = new QToolBox(QgsSQLComposerDialogBase);
        mToolbox->setObjectName(QString::fromUtf8("mToolbox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mToolbox->sizePolicy().hasHeightForWidth());
        mToolbox->setSizePolicy(sizePolicy2);
        mToolbox->setMinimumSize(QSize(250, 0));
        mToolbox->setMaximumSize(QSize(250, 16777215));
        mPageData = new QWidget();
        mPageData->setObjectName(QString::fromUtf8("mPageData"));
        mPageData->setGeometry(QRect(0, 0, 250, 495));
        verticalLayout_5 = new QVBoxLayout(mPageData);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mTablesCombo = new QComboBox(mPageData);
        mTablesCombo->addItem(QString());
        mTablesCombo->setObjectName(QString::fromUtf8("mTablesCombo"));

        verticalLayout_5->addWidget(mTablesCombo);

        mColumnsCombo = new QComboBox(mPageData);
        mColumnsCombo->addItem(QString());
        mColumnsCombo->setObjectName(QString::fromUtf8("mColumnsCombo"));

        verticalLayout_5->addWidget(mColumnsCombo);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        line_2 = new QFrame(mPageData);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        mAggregatesCombo = new QComboBox(mPageData);
        mAggregatesCombo->addItem(QString());
        mAggregatesCombo->setObjectName(QString::fromUtf8("mAggregatesCombo"));

        verticalLayout_5->addWidget(mAggregatesCombo);

        mFunctionsCombo = new QComboBox(mPageData);
        mFunctionsCombo->addItem(QString());
        mFunctionsCombo->setObjectName(QString::fromUtf8("mFunctionsCombo"));

        verticalLayout_5->addWidget(mFunctionsCombo);

        mSpatialPredicatesCombo = new QComboBox(mPageData);
        mSpatialPredicatesCombo->addItem(QString());
        mSpatialPredicatesCombo->setObjectName(QString::fromUtf8("mSpatialPredicatesCombo"));

        verticalLayout_5->addWidget(mSpatialPredicatesCombo);

        mStringFunctionsCombo = new QComboBox(mPageData);
        mStringFunctionsCombo->addItem(QString());
        mStringFunctionsCombo->setObjectName(QString::fromUtf8("mStringFunctionsCombo"));

        verticalLayout_5->addWidget(mStringFunctionsCombo);

        mOperatorsCombo = new QComboBox(mPageData);
        mOperatorsCombo->addItem(QString());
        mOperatorsCombo->setObjectName(QString::fromUtf8("mOperatorsCombo"));

        verticalLayout_5->addWidget(mOperatorsCombo);

        mToolbox->addItem(mPageData, QString::fromUtf8("Data"));
        mPageColumnsValues = new QWidget();
        mPageColumnsValues->setObjectName(QString::fromUtf8("mPageColumnsValues"));
        mPageColumnsValues->setGeometry(QRect(0, 0, 250, 495));
        verticalLayout_6 = new QVBoxLayout(mPageColumnsValues);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        columns_2 = new QComboBox(mPageColumnsValues);
        columns_2->addItem(QString());
        columns_2->setObjectName(QString::fromUtf8("columns_2"));

        verticalLayout_6->addWidget(columns_2);

        extract = new QCheckBox(mPageColumnsValues);
        extract->setObjectName(QString::fromUtf8("extract"));

        verticalLayout_6->addWidget(extract);

        values = new QListView(mPageColumnsValues);
        values->setObjectName(QString::fromUtf8("values"));
        values->setMaximumSize(QSize(16777215, 16777215));
        values->setEditTriggers(QAbstractItemView::NoEditTriggers);
        values->setProperty("showDropIndicator", QVariant(false));
        values->setDragEnabled(false);
        values->setDragDropMode(QAbstractItemView::NoDragDrop);

        verticalLayout_6->addWidget(values);

        mToolbox->addItem(mPageColumnsValues, QString::fromUtf8("Columns' values"));

        verticalLayout_4->addWidget(mToolbox);


        horizontalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mButtonBox = new QDialogButtonBox(QgsSQLComposerDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::Reset);
        mButtonBox->setCenterButtons(false);

        horizontalLayout_7->addWidget(mButtonBox);


        verticalLayout_7->addLayout(horizontalLayout_7);


        retranslateUi(QgsSQLComposerDialogBase);
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsSQLComposerDialogBase, SLOT(reject()));
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsSQLComposerDialogBase, SLOT(accept()));

        mToolbox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsSQLComposerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSQLComposerDialogBase)
    {
        QgsSQLComposerDialogBase->setWindowTitle(QCoreApplication::translate("QgsSQLComposerDialogBase", "SQL Query Composer", nullptr));
        mSQLStatementLabel->setText(QCoreApplication::translate("QgsSQLComposerDialogBase", "SQL Statement", nullptr));
#if QT_CONFIG(tooltip)
        mQueryEdit->setToolTip(QCoreApplication::translate("QgsSQLComposerDialogBase", "<html><head/><body><p>This is the SQL query editor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mColumnsLabel->setText(QCoreApplication::translate("QgsSQLComposerDialogBase", "Columns", nullptr));
        mTablesLabel->setText(QCoreApplication::translate("QgsSQLComposerDialogBase", "Table(s)", nullptr));
        mTablesEditor->setText(QString());
        mJoinsLabels->setText(QCoreApplication::translate("QgsSQLComposerDialogBase", "Joins", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mTableJoins->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsSQLComposerDialogBase", "Joint layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mTableJoins->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsSQLComposerDialogBase", "ON condition", nullptr));
        mAddJoinButton->setText(QString());
        mRemoveJoinButton->setText(QString());
        mWhereLabel->setText(QCoreApplication::translate("QgsSQLComposerDialogBase", "Where    ", nullptr));
        mOrderLabel->setText(QCoreApplication::translate("QgsSQLComposerDialogBase", "Order by", nullptr));
        mTablesCombo->setItemText(0, QCoreApplication::translate("QgsSQLComposerDialogBase", "Tables", nullptr));

        mColumnsCombo->setItemText(0, QCoreApplication::translate("QgsSQLComposerDialogBase", "Columns", nullptr));

        mAggregatesCombo->setItemText(0, QCoreApplication::translate("QgsSQLComposerDialogBase", "Aggregates", nullptr));

        mFunctionsCombo->setItemText(0, QCoreApplication::translate("QgsSQLComposerDialogBase", "Functions", nullptr));

        mSpatialPredicatesCombo->setItemText(0, QCoreApplication::translate("QgsSQLComposerDialogBase", "Spatial predicates", nullptr));

        mStringFunctionsCombo->setItemText(0, QCoreApplication::translate("QgsSQLComposerDialogBase", "Strings functions", nullptr));

        mOperatorsCombo->setItemText(0, QCoreApplication::translate("QgsSQLComposerDialogBase", "Operators", nullptr));

        mToolbox->setItemText(mToolbox->indexOf(mPageData), QCoreApplication::translate("QgsSQLComposerDialogBase", "Data", nullptr));
        columns_2->setItemText(0, QCoreApplication::translate("QgsSQLComposerDialogBase", "Columns", nullptr));

        extract->setText(QCoreApplication::translate("QgsSQLComposerDialogBase", "Only 10 first values", nullptr));
        mToolbox->setItemText(mToolbox->indexOf(mPageColumnsValues), QCoreApplication::translate("QgsSQLComposerDialogBase", "Columns' values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSQLComposerDialogBase: public Ui_QgsSQLComposerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSQLCOMPOSERDIALOGBASE_H
