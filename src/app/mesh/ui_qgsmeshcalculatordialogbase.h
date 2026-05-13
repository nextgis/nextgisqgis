/********************************************************************************
** Form generated from reading UI file 'qgsmeshcalculatordialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHCALCULATORDIALOGBASE_H
#define UI_QGSMESHCALCULATORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsfilewidget.h"
#include "qgsmaplayercombobox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshCalculatorDialogBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *mRasterBandsGroupBox;
    QGridLayout *gridLayout_2;
    QListView *mDatasetsListWidget;
    QGroupBox *mResultGroupBox;
    QVBoxLayout *verticalLayout_4;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *mOutputFormatLabel_2;
    QCheckBox *mUseVirtualProviderCheckBox;
    QgsFileWidget *mOutputDatasetFileWidget;
    QLabel *mOutputDatasetFileLabel;
    QLineEdit *mOutputGroupNameLineEdit;
    QLabel *mOutputFormatLabel;
    QComboBox *mOutputFormatComboBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *useExtentCb;
    QRadioButton *useMaskCb;
    QWidget *maskBox;
    QHBoxLayout *maskBoxLayout;
    QLabel *label_3;
    QgsMapLayerComboBox *cboLayerMask;
    QgsExtentGroupBox *mExtentGroupBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label;
    QComboBox *mStartTimeComboBox;
    QComboBox *mEndTimeComboBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mAllTimesButton;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mAddResultToProjectCheckBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mOperatorsGroupBox;
    QGridLayout *gridLayout;
    QPushButton *mPlusPushButton;
    QPushButton *mMultiplyPushButton;
    QPushButton *mOpenBracketPushButton;
    QPushButton *mMinButton;
    QPushButton *mIfButton;
    QPushButton *mSumAggrButton;
    QSpacerItem *horizontalSpacer_1;
    QPushButton *mMinusPushButton;
    QPushButton *mDividePushButton;
    QPushButton *mCloseBracketPushButton;
    QPushButton *mMaxButton;
    QPushButton *mAndButton;
    QPushButton *mMaxAggrButton;
    QPushButton *mLessButton;
    QPushButton *mGreaterButton;
    QPushButton *mEqualButton;
    QPushButton *mAbsButton;
    QPushButton *mOrButton;
    QPushButton *mMinAggrButton;
    QPushButton *mLesserEqualButton;
    QPushButton *mGreaterEqualButton;
    QPushButton *mNotEqualButton;
    QPushButton *mPowButton;
    QPushButton *mNotButton;
    QPushButton *mAverageAggrButton;
    QPushButton *mNoDataButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *mExpressionTextEdit;
    QLabel *mExpressionValidLabel;
    QDialogButtonBox *mButtonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QgsMeshCalculatorDialogBase)
    {
        if (QgsMeshCalculatorDialogBase->objectName().isEmpty())
            QgsMeshCalculatorDialogBase->setObjectName(QString::fromUtf8("QgsMeshCalculatorDialogBase"));
        QgsMeshCalculatorDialogBase->resize(912, 982);
        verticalLayout_3 = new QVBoxLayout(QgsMeshCalculatorDialogBase);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea_2 = new QgsScrollArea(QgsMeshCalculatorDialogBase);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 900, 906));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(scrollAreaWidgetContents_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Orientation::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        mRasterBandsGroupBox = new QGroupBox(splitter);
        mRasterBandsGroupBox->setObjectName(QString::fromUtf8("mRasterBandsGroupBox"));
        gridLayout_2 = new QGridLayout(mRasterBandsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDatasetsListWidget = new QListView(mRasterBandsGroupBox);
        mDatasetsListWidget->setObjectName(QString::fromUtf8("mDatasetsListWidget"));

        gridLayout_2->addWidget(mDatasetsListWidget, 0, 0, 1, 1);

        splitter->addWidget(mRasterBandsGroupBox);
        mResultGroupBox = new QGroupBox(splitter);
        mResultGroupBox->setObjectName(QString::fromUtf8("mResultGroupBox"));
        verticalLayout_4 = new QVBoxLayout(mResultGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        scrollArea = new QgsScrollArea(mResultGroupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 509, 406));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mOutputFormatLabel_2 = new QLabel(scrollAreaWidgetContents);
        mOutputFormatLabel_2->setObjectName(QString::fromUtf8("mOutputFormatLabel_2"));

        gridLayout_5->addWidget(mOutputFormatLabel_2, 3, 0, 1, 1);

        mUseVirtualProviderCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mUseVirtualProviderCheckBox->setObjectName(QString::fromUtf8("mUseVirtualProviderCheckBox"));
        mUseVirtualProviderCheckBox->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        mUseVirtualProviderCheckBox->setTristate(false);

        gridLayout_5->addWidget(mUseVirtualProviderCheckBox, 0, 0, 1, 3);

        mOutputDatasetFileWidget = new QgsFileWidget(scrollAreaWidgetContents);
        mOutputDatasetFileWidget->setObjectName(QString::fromUtf8("mOutputDatasetFileWidget"));

        gridLayout_5->addWidget(mOutputDatasetFileWidget, 1, 1, 1, 2);

        mOutputDatasetFileLabel = new QLabel(scrollAreaWidgetContents);
        mOutputDatasetFileLabel->setObjectName(QString::fromUtf8("mOutputDatasetFileLabel"));

        gridLayout_5->addWidget(mOutputDatasetFileLabel, 1, 0, 1, 1);

        mOutputGroupNameLineEdit = new QLineEdit(scrollAreaWidgetContents);
        mOutputGroupNameLineEdit->setObjectName(QString::fromUtf8("mOutputGroupNameLineEdit"));

        gridLayout_5->addWidget(mOutputGroupNameLineEdit, 3, 1, 1, 2);

        mOutputFormatLabel = new QLabel(scrollAreaWidgetContents);
        mOutputFormatLabel->setObjectName(QString::fromUtf8("mOutputFormatLabel"));

        gridLayout_5->addWidget(mOutputFormatLabel, 2, 0, 1, 1);

        mOutputFormatComboBox = new QComboBox(scrollAreaWidgetContents);
        mOutputFormatComboBox->setObjectName(QString::fromUtf8("mOutputFormatComboBox"));

        gridLayout_5->addWidget(mOutputFormatComboBox, 2, 1, 1, 2);


        verticalLayout_6->addLayout(gridLayout_5);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalWidget = new QWidget(groupBox_3);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        useExtentCb = new QRadioButton(horizontalWidget);
        buttonGroup = new QButtonGroup(QgsMeshCalculatorDialogBase);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(useExtentCb);
        useExtentCb->setObjectName(QString::fromUtf8("useExtentCb"));
        useExtentCb->setChecked(true);

        horizontalLayout_5->addWidget(useExtentCb);

        useMaskCb = new QRadioButton(horizontalWidget);
        buttonGroup->addButton(useMaskCb);
        useMaskCb->setObjectName(QString::fromUtf8("useMaskCb"));

        horizontalLayout_5->addWidget(useMaskCb);


        verticalLayout_5->addWidget(horizontalWidget);

        maskBox = new QWidget(groupBox_3);
        maskBox->setObjectName(QString::fromUtf8("maskBox"));
        maskBoxLayout = new QHBoxLayout(maskBox);
        maskBoxLayout->setObjectName(QString::fromUtf8("maskBoxLayout"));
        maskBoxLayout->setContentsMargins(-1, 0, -1, 0);
        label_3 = new QLabel(maskBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(206, 0));

        maskBoxLayout->addWidget(label_3);

        cboLayerMask = new QgsMapLayerComboBox(maskBox);
        cboLayerMask->setObjectName(QString::fromUtf8("cboLayerMask"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboLayerMask->sizePolicy().hasHeightForWidth());
        cboLayerMask->setSizePolicy(sizePolicy);
        cboLayerMask->setEditable(false);

        maskBoxLayout->addWidget(cboLayerMask);


        verticalLayout_5->addWidget(maskBox);

        mExtentGroupBox = new QgsExtentGroupBox(groupBox_3);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));

        verticalLayout_5->addWidget(mExtentGroupBox);


        verticalLayout_6->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_6->addWidget(label_2, 1, 3, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 1, 0, 1, 1);

        mStartTimeComboBox = new QComboBox(groupBox_2);
        mStartTimeComboBox->setObjectName(QString::fromUtf8("mStartTimeComboBox"));

        gridLayout_6->addWidget(mStartTimeComboBox, 1, 1, 1, 1);

        mEndTimeComboBox = new QComboBox(groupBox_2);
        mEndTimeComboBox->setObjectName(QString::fromUtf8("mEndTimeComboBox"));

        gridLayout_6->addWidget(mEndTimeComboBox, 1, 4, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mAllTimesButton = new QPushButton(groupBox_2);
        mAllTimesButton->setObjectName(QString::fromUtf8("mAllTimesButton"));

        horizontalLayout_2->addWidget(mAllTimesButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_6->addLayout(horizontalLayout_2, 0, 0, 1, 5);


        verticalLayout_6->addWidget(groupBox_2);

        mAddResultToProjectCheckBox = new QCheckBox(scrollAreaWidgetContents);
        mAddResultToProjectCheckBox->setObjectName(QString::fromUtf8("mAddResultToProjectCheckBox"));
        mAddResultToProjectCheckBox->setChecked(true);

        verticalLayout_6->addWidget(mAddResultToProjectCheckBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        splitter->addWidget(mResultGroupBox);
        splitter_2->addWidget(splitter);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOperatorsGroupBox = new QgsCollapsibleGroupBox(verticalLayoutWidget);
        mOperatorsGroupBox->setObjectName(QString::fromUtf8("mOperatorsGroupBox"));
        gridLayout = new QGridLayout(mOperatorsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        mPlusPushButton = new QPushButton(mOperatorsGroupBox);
        mPlusPushButton->setObjectName(QString::fromUtf8("mPlusPushButton"));

        gridLayout->addWidget(mPlusPushButton, 0, 0, 1, 1);

        mMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        mMultiplyPushButton->setObjectName(QString::fromUtf8("mMultiplyPushButton"));

        gridLayout->addWidget(mMultiplyPushButton, 0, 1, 1, 1);

        mOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mOpenBracketPushButton->setObjectName(QString::fromUtf8("mOpenBracketPushButton"));

        gridLayout->addWidget(mOpenBracketPushButton, 0, 2, 1, 1);

        mMinButton = new QPushButton(mOperatorsGroupBox);
        mMinButton->setObjectName(QString::fromUtf8("mMinButton"));

        gridLayout->addWidget(mMinButton, 0, 3, 1, 1);

        mIfButton = new QPushButton(mOperatorsGroupBox);
        mIfButton->setObjectName(QString::fromUtf8("mIfButton"));

        gridLayout->addWidget(mIfButton, 0, 4, 1, 1);

        mSumAggrButton = new QPushButton(mOperatorsGroupBox);
        mSumAggrButton->setObjectName(QString::fromUtf8("mSumAggrButton"));

        gridLayout->addWidget(mSumAggrButton, 0, 5, 1, 1);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_1, 0, 6, 1, 1);

        mMinusPushButton = new QPushButton(mOperatorsGroupBox);
        mMinusPushButton->setObjectName(QString::fromUtf8("mMinusPushButton"));

        gridLayout->addWidget(mMinusPushButton, 1, 0, 1, 1);

        mDividePushButton = new QPushButton(mOperatorsGroupBox);
        mDividePushButton->setObjectName(QString::fromUtf8("mDividePushButton"));

        gridLayout->addWidget(mDividePushButton, 1, 1, 1, 1);

        mCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mCloseBracketPushButton->setObjectName(QString::fromUtf8("mCloseBracketPushButton"));

        gridLayout->addWidget(mCloseBracketPushButton, 1, 2, 1, 1);

        mMaxButton = new QPushButton(mOperatorsGroupBox);
        mMaxButton->setObjectName(QString::fromUtf8("mMaxButton"));

        gridLayout->addWidget(mMaxButton, 1, 3, 1, 1);

        mAndButton = new QPushButton(mOperatorsGroupBox);
        mAndButton->setObjectName(QString::fromUtf8("mAndButton"));

        gridLayout->addWidget(mAndButton, 1, 4, 1, 1);

        mMaxAggrButton = new QPushButton(mOperatorsGroupBox);
        mMaxAggrButton->setObjectName(QString::fromUtf8("mMaxAggrButton"));

        gridLayout->addWidget(mMaxAggrButton, 1, 5, 1, 1);

        mLessButton = new QPushButton(mOperatorsGroupBox);
        mLessButton->setObjectName(QString::fromUtf8("mLessButton"));

        gridLayout->addWidget(mLessButton, 2, 0, 1, 1);

        mGreaterButton = new QPushButton(mOperatorsGroupBox);
        mGreaterButton->setObjectName(QString::fromUtf8("mGreaterButton"));

        gridLayout->addWidget(mGreaterButton, 2, 1, 1, 1);

        mEqualButton = new QPushButton(mOperatorsGroupBox);
        mEqualButton->setObjectName(QString::fromUtf8("mEqualButton"));

        gridLayout->addWidget(mEqualButton, 2, 2, 1, 1);

        mAbsButton = new QPushButton(mOperatorsGroupBox);
        mAbsButton->setObjectName(QString::fromUtf8("mAbsButton"));

        gridLayout->addWidget(mAbsButton, 2, 3, 1, 1);

        mOrButton = new QPushButton(mOperatorsGroupBox);
        mOrButton->setObjectName(QString::fromUtf8("mOrButton"));

        gridLayout->addWidget(mOrButton, 2, 4, 1, 1);

        mMinAggrButton = new QPushButton(mOperatorsGroupBox);
        mMinAggrButton->setObjectName(QString::fromUtf8("mMinAggrButton"));

        gridLayout->addWidget(mMinAggrButton, 2, 5, 1, 1);

        mLesserEqualButton = new QPushButton(mOperatorsGroupBox);
        mLesserEqualButton->setObjectName(QString::fromUtf8("mLesserEqualButton"));

        gridLayout->addWidget(mLesserEqualButton, 3, 0, 1, 1);

        mGreaterEqualButton = new QPushButton(mOperatorsGroupBox);
        mGreaterEqualButton->setObjectName(QString::fromUtf8("mGreaterEqualButton"));

        gridLayout->addWidget(mGreaterEqualButton, 3, 1, 1, 1);

        mNotEqualButton = new QPushButton(mOperatorsGroupBox);
        mNotEqualButton->setObjectName(QString::fromUtf8("mNotEqualButton"));

        gridLayout->addWidget(mNotEqualButton, 3, 2, 1, 1);

        mPowButton = new QPushButton(mOperatorsGroupBox);
        mPowButton->setObjectName(QString::fromUtf8("mPowButton"));

        gridLayout->addWidget(mPowButton, 3, 3, 1, 1);

        mNotButton = new QPushButton(mOperatorsGroupBox);
        mNotButton->setObjectName(QString::fromUtf8("mNotButton"));

        gridLayout->addWidget(mNotButton, 3, 4, 1, 1);

        mAverageAggrButton = new QPushButton(mOperatorsGroupBox);
        mAverageAggrButton->setObjectName(QString::fromUtf8("mAverageAggrButton"));

        gridLayout->addWidget(mAverageAggrButton, 3, 5, 1, 1);

        mNoDataButton = new QPushButton(mOperatorsGroupBox);
        mNoDataButton->setObjectName(QString::fromUtf8("mNoDataButton"));

        gridLayout->addWidget(mNoDataButton, 4, 0, 1, 6);


        verticalLayout->addWidget(mOperatorsGroupBox);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        mExpressionTextEdit = new QTextEdit(groupBox);
        mExpressionTextEdit->setObjectName(QString::fromUtf8("mExpressionTextEdit"));

        verticalLayout_2->addWidget(mExpressionTextEdit);


        verticalLayout->addWidget(groupBox);

        splitter_2->addWidget(verticalLayoutWidget);

        verticalLayout_7->addWidget(splitter_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea_2);

        mExpressionValidLabel = new QLabel(QgsMeshCalculatorDialogBase);
        mExpressionValidLabel->setObjectName(QString::fromUtf8("mExpressionValidLabel"));

        verticalLayout_3->addWidget(mExpressionValidLabel);

        mButtonBox = new QDialogButtonBox(QgsMeshCalculatorDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Orientation::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(mButtonBox);

        mButtonBox->raise();
        mExpressionValidLabel->raise();
        scrollArea_2->raise();
        QWidget::setTabOrder(mDatasetsListWidget, mUseVirtualProviderCheckBox);
        QWidget::setTabOrder(mUseVirtualProviderCheckBox, mOutputFormatComboBox);
        QWidget::setTabOrder(mOutputFormatComboBox, mOutputGroupNameLineEdit);
        QWidget::setTabOrder(mOutputGroupNameLineEdit, useExtentCb);
        QWidget::setTabOrder(useExtentCb, useMaskCb);
        QWidget::setTabOrder(useMaskCb, cboLayerMask);
        QWidget::setTabOrder(cboLayerMask, mAllTimesButton);
        QWidget::setTabOrder(mAllTimesButton, mStartTimeComboBox);
        QWidget::setTabOrder(mStartTimeComboBox, mEndTimeComboBox);
        QWidget::setTabOrder(mEndTimeComboBox, mPlusPushButton);
        QWidget::setTabOrder(mPlusPushButton, mMultiplyPushButton);
        QWidget::setTabOrder(mMultiplyPushButton, mOpenBracketPushButton);
        QWidget::setTabOrder(mOpenBracketPushButton, mMinButton);
        QWidget::setTabOrder(mMinButton, mIfButton);
        QWidget::setTabOrder(mIfButton, mSumAggrButton);
        QWidget::setTabOrder(mSumAggrButton, mMinusPushButton);
        QWidget::setTabOrder(mMinusPushButton, mDividePushButton);
        QWidget::setTabOrder(mDividePushButton, mCloseBracketPushButton);
        QWidget::setTabOrder(mCloseBracketPushButton, mMaxButton);
        QWidget::setTabOrder(mMaxButton, mAndButton);
        QWidget::setTabOrder(mAndButton, mMaxAggrButton);
        QWidget::setTabOrder(mMaxAggrButton, mLessButton);
        QWidget::setTabOrder(mLessButton, mGreaterButton);
        QWidget::setTabOrder(mGreaterButton, mEqualButton);
        QWidget::setTabOrder(mEqualButton, mAbsButton);
        QWidget::setTabOrder(mAbsButton, mOrButton);
        QWidget::setTabOrder(mOrButton, mMinAggrButton);
        QWidget::setTabOrder(mMinAggrButton, mLesserEqualButton);
        QWidget::setTabOrder(mLesserEqualButton, mGreaterEqualButton);
        QWidget::setTabOrder(mGreaterEqualButton, mNotEqualButton);
        QWidget::setTabOrder(mNotEqualButton, mPowButton);
        QWidget::setTabOrder(mPowButton, mNotButton);
        QWidget::setTabOrder(mNotButton, mAverageAggrButton);
        QWidget::setTabOrder(mAverageAggrButton, mNoDataButton);
        QWidget::setTabOrder(mNoDataButton, mExpressionTextEdit);
        QWidget::setTabOrder(mExpressionTextEdit, mButtonBox);

        retranslateUi(QgsMeshCalculatorDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsMeshCalculatorDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsMeshCalculatorDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMeshCalculatorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeshCalculatorDialogBase)
    {
        QgsMeshCalculatorDialogBase->setWindowTitle(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Mesh Calculator", nullptr));
        mRasterBandsGroupBox->setTitle(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Datasets", nullptr));
        mResultGroupBox->setTitle(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Result Layer", nullptr));
        mOutputFormatLabel_2->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Group name", nullptr));
        mUseVirtualProviderCheckBox->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Create on-the-fly dataset group instead of writing layer to disk", nullptr));
        mOutputDatasetFileLabel->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Output file", nullptr));
        mOutputFormatLabel->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Output format", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Spatial Extent", nullptr));
        useExtentCb->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Custom extent", nullptr));
#if QT_CONFIG(tooltip)
        useMaskCb->setToolTip(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Clips the datasets using features from vector polygon layer.", nullptr));
#endif // QT_CONFIG(tooltip)
        useMaskCb->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Mask layer", nullptr));
        label_3->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Mask layer", nullptr));
        mExtentGroupBox->setTitle(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Spatial Extent", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Temporal Extent", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "End time", nullptr));
        label->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Start time", nullptr));
        mAllTimesButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Use all Selected Dataset Times", nullptr));
        mAddResultToProjectCheckBox->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Add result to project", nullptr));
        mOperatorsGroupBox->setTitle(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Operators", nullptr));
        mPlusPushButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "+", nullptr));
        mMultiplyPushButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "*", nullptr));
        mOpenBracketPushButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "(", nullptr));
        mMinButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "min", nullptr));
        mIfButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "IF", nullptr));
        mSumAggrButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "sum (aggr)", nullptr));
        mMinusPushButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "-", nullptr));
        mDividePushButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "/", nullptr));
        mCloseBracketPushButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", ")", nullptr));
        mMaxButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "max", nullptr));
        mAndButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "AND", nullptr));
        mMaxAggrButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "max (aggr)", nullptr));
        mLessButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "<", nullptr));
        mGreaterButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", ">", nullptr));
        mEqualButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "=", nullptr));
        mAbsButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "abs", nullptr));
        mOrButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "OR", nullptr));
        mMinAggrButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "min (aggr)", nullptr));
        mLesserEqualButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "<=", nullptr));
        mGreaterEqualButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", ">=", nullptr));
        mNotEqualButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "!=", nullptr));
        mPowButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "^", nullptr));
        mNotButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "NOT", nullptr));
        mAverageAggrButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "average (aggr)", nullptr));
        mNoDataButton->setText(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "NODATA", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsMeshCalculatorDialogBase", "Mesh Calculator Expression", nullptr));
        mExpressionValidLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsMeshCalculatorDialogBase: public Ui_QgsMeshCalculatorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHCALCULATORDIALOGBASE_H
