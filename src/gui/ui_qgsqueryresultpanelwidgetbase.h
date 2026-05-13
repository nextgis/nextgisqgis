/********************************************************************************
** Form generated from reading UI file 'qgsqueryresultpanelwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSQUERYRESULTPANELWIDGETBASE_H
#define UI_QGSQUERYRESULTPANELWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscheckablecombobox.h"
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsQueryResultPanelWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QgsMessageBar *mMessageBar;
    QVBoxLayout *mainLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *mSqlEditorContainer;
    QHBoxLayout *progressLayout;
    QPushButton *mExecuteButton;
    QPushButton *mStopButton;
    QLabel *mStatusLabel;
    QSpacerItem *horizontalSpacer;
    QProgressBar *mProgressBar;
    QWidget *mResultsContainer;
    QVBoxLayout *verticalLayout_5;
    QgsCodeEditorSQL *mSqlErrorText;
    QTableView *mQueryResultsTableView;
    QgsCollapsibleGroupBox *mLoadAsNewLayerGroupBox;
    QFormLayout *formLayout;
    QCheckBox *mPkColumnsCheckBox;
    QgsCheckableComboBox *mPkColumnsComboBox;
    QCheckBox *mGeometryColumnCheckBox;
    QComboBox *mGeometryColumnComboBox;
    QLabel *mFilterLabel;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *mFilterLineEdit;
    QToolButton *mFilterToolButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mLayerNameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mLoadLayerPushButton;
    QCheckBox *mAvoidSelectingAsFeatureIdCheckBox;
    QLabel *mLayerNameLabel;

    void setupUi(QWidget *QgsQueryResultPanelWidgetBase)
    {
        if (QgsQueryResultPanelWidgetBase->objectName().isEmpty())
            QgsQueryResultPanelWidgetBase->setObjectName(QString::fromUtf8("QgsQueryResultPanelWidgetBase"));
        QgsQueryResultPanelWidgetBase->resize(662, 485);
        QgsQueryResultPanelWidgetBase->setWindowTitle(QString::fromUtf8("Dialog"));
        verticalLayout = new QVBoxLayout(QgsQueryResultPanelWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mMessageBar = new QgsMessageBar(QgsQueryResultPanelWidgetBase);
        mMessageBar->setObjectName(QString::fromUtf8("mMessageBar"));

        verticalLayout_2->addWidget(mMessageBar);


        verticalLayout->addLayout(verticalLayout_2);

        mainLayout = new QVBoxLayout();
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(6, 0, 6, 6);
        widget = new QWidget(QgsQueryResultPanelWidgetBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setOrientation(Qt::Vertical);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mSqlEditorContainer = new QWidget(verticalLayoutWidget);
        mSqlEditorContainer->setObjectName(QString::fromUtf8("mSqlEditorContainer"));

        verticalLayout_3->addWidget(mSqlEditorContainer);

        progressLayout = new QHBoxLayout();
        progressLayout->setObjectName(QString::fromUtf8("progressLayout"));
        mExecuteButton = new QPushButton(verticalLayoutWidget);
        mExecuteButton->setObjectName(QString::fromUtf8("mExecuteButton"));
        mExecuteButton->setEnabled(false);

        progressLayout->addWidget(mExecuteButton);

        mStopButton = new QPushButton(verticalLayoutWidget);
        mStopButton->setObjectName(QString::fromUtf8("mStopButton"));
        mStopButton->setEnabled(false);

        progressLayout->addWidget(mStopButton);

        mStatusLabel = new QLabel(verticalLayoutWidget);
        mStatusLabel->setObjectName(QString::fromUtf8("mStatusLabel"));

        progressLayout->addWidget(mStatusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        progressLayout->addItem(horizontalSpacer);

        mProgressBar = new QProgressBar(verticalLayoutWidget);
        mProgressBar->setObjectName(QString::fromUtf8("mProgressBar"));
        mProgressBar->setValue(24);

        progressLayout->addWidget(mProgressBar);

        progressLayout->setStretch(3, 1);

        verticalLayout_3->addLayout(progressLayout);

        splitter->addWidget(verticalLayoutWidget);
        mResultsContainer = new QWidget(splitter);
        mResultsContainer->setObjectName(QString::fromUtf8("mResultsContainer"));
        verticalLayout_5 = new QVBoxLayout(mResultsContainer);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mSqlErrorText = new QgsCodeEditorSQL(mResultsContainer);
        mSqlErrorText->setObjectName(QString::fromUtf8("mSqlErrorText"));

        verticalLayout_5->addWidget(mSqlErrorText);

        mQueryResultsTableView = new QTableView(mResultsContainer);
        mQueryResultsTableView->setObjectName(QString::fromUtf8("mQueryResultsTableView"));

        verticalLayout_5->addWidget(mQueryResultsTableView);

        splitter->addWidget(mResultsContainer);

        verticalLayout_4->addWidget(splitter);


        mainLayout->addWidget(widget);

        mLoadAsNewLayerGroupBox = new QgsCollapsibleGroupBox(QgsQueryResultPanelWidgetBase);
        mLoadAsNewLayerGroupBox->setObjectName(QString::fromUtf8("mLoadAsNewLayerGroupBox"));
        formLayout = new QFormLayout(mLoadAsNewLayerGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mPkColumnsCheckBox = new QCheckBox(mLoadAsNewLayerGroupBox);
        mPkColumnsCheckBox->setObjectName(QString::fromUtf8("mPkColumnsCheckBox"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mPkColumnsCheckBox);

        mPkColumnsComboBox = new QgsCheckableComboBox(mLoadAsNewLayerGroupBox);
        mPkColumnsComboBox->setObjectName(QString::fromUtf8("mPkColumnsComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mPkColumnsComboBox);

        mGeometryColumnCheckBox = new QCheckBox(mLoadAsNewLayerGroupBox);
        mGeometryColumnCheckBox->setObjectName(QString::fromUtf8("mGeometryColumnCheckBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mGeometryColumnCheckBox);

        mGeometryColumnComboBox = new QComboBox(mLoadAsNewLayerGroupBox);
        mGeometryColumnComboBox->setObjectName(QString::fromUtf8("mGeometryColumnComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mGeometryColumnComboBox);

        mFilterLabel = new QLabel(mLoadAsNewLayerGroupBox);
        mFilterLabel->setObjectName(QString::fromUtf8("mFilterLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mFilterLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mFilterLineEdit = new QLineEdit(mLoadAsNewLayerGroupBox);
        mFilterLineEdit->setObjectName(QString::fromUtf8("mFilterLineEdit"));

        horizontalLayout_5->addWidget(mFilterLineEdit);

        mFilterToolButton = new QToolButton(mLoadAsNewLayerGroupBox);
        mFilterToolButton->setObjectName(QString::fromUtf8("mFilterToolButton"));

        horizontalLayout_5->addWidget(mFilterToolButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mLayerNameLineEdit = new QLineEdit(mLoadAsNewLayerGroupBox);
        mLayerNameLineEdit->setObjectName(QString::fromUtf8("mLayerNameLineEdit"));

        horizontalLayout_2->addWidget(mLayerNameLineEdit);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        mLoadLayerPushButton = new QPushButton(mLoadAsNewLayerGroupBox);
        mLoadLayerPushButton->setObjectName(QString::fromUtf8("mLoadLayerPushButton"));

        horizontalLayout_3->addWidget(mLoadLayerPushButton);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout_3);

        mAvoidSelectingAsFeatureIdCheckBox = new QCheckBox(mLoadAsNewLayerGroupBox);
        mAvoidSelectingAsFeatureIdCheckBox->setObjectName(QString::fromUtf8("mAvoidSelectingAsFeatureIdCheckBox"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mAvoidSelectingAsFeatureIdCheckBox);

        mLayerNameLabel = new QLabel(mLoadAsNewLayerGroupBox);
        mLayerNameLabel->setObjectName(QString::fromUtf8("mLayerNameLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mLayerNameLabel);


        mainLayout->addWidget(mLoadAsNewLayerGroupBox);

        mainLayout->setStretch(0, 1);

        verticalLayout->addLayout(mainLayout);

        QWidget::setTabOrder(mExecuteButton, mStopButton);
        QWidget::setTabOrder(mStopButton, mPkColumnsCheckBox);
        QWidget::setTabOrder(mPkColumnsCheckBox, mPkColumnsComboBox);
        QWidget::setTabOrder(mPkColumnsComboBox, mGeometryColumnCheckBox);
        QWidget::setTabOrder(mGeometryColumnCheckBox, mGeometryColumnComboBox);
        QWidget::setTabOrder(mGeometryColumnComboBox, mFilterLineEdit);
        QWidget::setTabOrder(mFilterLineEdit, mFilterToolButton);
        QWidget::setTabOrder(mFilterToolButton, mAvoidSelectingAsFeatureIdCheckBox);
        QWidget::setTabOrder(mAvoidSelectingAsFeatureIdCheckBox, mLayerNameLineEdit);
        QWidget::setTabOrder(mLayerNameLineEdit, mLoadLayerPushButton);

        retranslateUi(QgsQueryResultPanelWidgetBase);

        QMetaObject::connectSlotsByName(QgsQueryResultPanelWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsQueryResultPanelWidgetBase)
    {
        mExecuteButton->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Execute", nullptr));
        mStopButton->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Stop", nullptr));
        mStatusLabel->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Status and errors go here.", nullptr));
        mLoadAsNewLayerGroupBox->setTitle(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Load as new layer", nullptr));
#if QT_CONFIG(tooltip)
        mPkColumnsCheckBox->setToolTip(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Column(s) that can be used as an index to uniquely identify features, they are usually part of a primary key.", nullptr));
#endif // QT_CONFIG(tooltip)
        mPkColumnsCheckBox->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Column(s) with unique values", nullptr));
#if QT_CONFIG(tooltip)
        mGeometryColumnCheckBox->setToolTip(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Column that contains the geometry.", nullptr));
#endif // QT_CONFIG(tooltip)
        mGeometryColumnCheckBox->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Geometry column", nullptr));
#if QT_CONFIG(tooltip)
        mFilterLabel->setToolTip(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "SQL filter to restrict the features available in the layer", nullptr));
#endif // QT_CONFIG(tooltip)
        mFilterLabel->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Subset filter", nullptr));
        mFilterLineEdit->setText(QString());
        mFilterLineEdit->setPlaceholderText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Enter the optional SQL filter or click on the button to open the query builder tool", nullptr));
        mFilterToolButton->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "...", nullptr));
        mLayerNameLineEdit->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "QueryLayer", nullptr));
        mLoadLayerPushButton->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Load Layer", nullptr));
#if QT_CONFIG(tooltip)
        mAvoidSelectingAsFeatureIdCheckBox->setToolTip(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Disable 'Fast Access to Features at ID' capability to force keeping the attribute table in memory (e.g. in case of expensive views)", nullptr));
#endif // QT_CONFIG(tooltip)
        mAvoidSelectingAsFeatureIdCheckBox->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Avoid selecting by feature ID", nullptr));
        mLayerNameLabel->setText(QCoreApplication::translate("QgsQueryResultPanelWidgetBase", "Layer name", nullptr));
        (void)QgsQueryResultPanelWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsQueryResultPanelWidgetBase: public Ui_QgsQueryResultPanelWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSQUERYRESULTPANELWIDGETBASE_H
