/********************************************************************************
** Form generated from reading UI file 'qgsrastercalcdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERCALCDIALOGBASE_H
#define UI_QGSRASTERCALCDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsrasterformatsaveoptionswidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterCalcDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *mRasterBandsGroupBox;
    QGridLayout *gridLayout_2;
    QListWidget *mRasterBandsListWidget;
    QGroupBox *mResultGroupBox;
    QGridLayout *gridLayout_4;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *mColumnsLabel;
    QgsSpinBox *mNColumnsSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *mRowsLabel;
    QgsSpinBox *mNRowsSpinBox;
    QLabel *mOutputFormatLabel;
    QgsFileWidget *mOutputLayer;
    QLineEdit *mVirtualLayerName;
    QgsExtentGroupBox *mExtentGroupBox;
    QComboBox *mOutputFormatComboBox;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label;
    QLabel *mOutputLayerLabel;
    QLabel *mVirtualLayerLabel;
    QCheckBox *mUseVirtualProviderCheckBox;
    QCheckBox *mAddResultToProjectCheckBox;
    QgsCollapsibleGroupBox *mCreationOptionsGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsRasterFormatSaveOptionsWidget *mCreationOptionsWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QgsCollapsibleGroupBox *mOperatorsGroupBox;
    QGridLayout *gridLayout;
    QPushButton *mPlusPushButton;
    QPushButton *mMultiplyPushButton;
    QPushButton *mOpenBracketPushButton;
    QPushButton *mMinButton;
    QPushButton *mConditionalStatButton;
    QPushButton *mCosButton;
    QPushButton *mACosButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mMinusPushButton;
    QPushButton *mDividePushButton;
    QPushButton *mCloseBracketPushButton;
    QPushButton *mMaxButton;
    QPushButton *mAndButton;
    QPushButton *mSinButton;
    QPushButton *mASinButton;
    QPushButton *mLessButton;
    QPushButton *mGreaterButton;
    QPushButton *mEqualButton;
    QPushButton *mAbsButton;
    QPushButton *mOrButton;
    QPushButton *mTanButton;
    QPushButton *mATanButton;
    QPushButton *mLesserEqualButton;
    QPushButton *mGreaterEqualButton;
    QPushButton *mNotEqualButton;
    QPushButton *mExpButton;
    QPushButton *mSqrtButton;
    QPushButton *mLogButton;
    QPushButton *mLnButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *mExpressionTextEdit;
    QLabel *mExpressionValidLabel;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsRasterCalcDialogBase)
    {
        if (QgsRasterCalcDialogBase->objectName().isEmpty())
            QgsRasterCalcDialogBase->setObjectName(QString::fromUtf8("QgsRasterCalcDialogBase"));
        QgsRasterCalcDialogBase->resize(931, 576);
        verticalLayout = new QVBoxLayout(QgsRasterCalcDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QgsScrollArea(QgsRasterCalcDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 913, 502));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(scrollAreaWidgetContents);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Orientation::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        mRasterBandsGroupBox = new QGroupBox(splitter);
        mRasterBandsGroupBox->setObjectName(QString::fromUtf8("mRasterBandsGroupBox"));
        gridLayout_2 = new QGridLayout(mRasterBandsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mRasterBandsListWidget = new QListWidget(mRasterBandsGroupBox);
        mRasterBandsListWidget->setObjectName(QString::fromUtf8("mRasterBandsListWidget"));

        gridLayout_2->addWidget(mRasterBandsListWidget, 0, 0, 1, 1);

        splitter->addWidget(mRasterBandsGroupBox);
        mResultGroupBox = new QGroupBox(splitter);
        mResultGroupBox->setObjectName(QString::fromUtf8("mResultGroupBox"));
        gridLayout_4 = new QGridLayout(mResultGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea_2 = new QgsScrollArea(mResultGroupBox);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -153, 493, 334));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mColumnsLabel = new QLabel(groupBox_3);
        mColumnsLabel->setObjectName(QString::fromUtf8("mColumnsLabel"));

        horizontalLayout->addWidget(mColumnsLabel);

        mNColumnsSpinBox = new QgsSpinBox(groupBox_3);
        mNColumnsSpinBox->setObjectName(QString::fromUtf8("mNColumnsSpinBox"));
        mNColumnsSpinBox->setMaximum(999999999);

        horizontalLayout->addWidget(mNColumnsSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mRowsLabel = new QLabel(groupBox_3);
        mRowsLabel->setObjectName(QString::fromUtf8("mRowsLabel"));

        horizontalLayout->addWidget(mRowsLabel);

        mNRowsSpinBox = new QgsSpinBox(groupBox_3);
        mNRowsSpinBox->setObjectName(QString::fromUtf8("mNRowsSpinBox"));
        mNRowsSpinBox->setMaximum(999999999);

        horizontalLayout->addWidget(mNRowsSpinBox);


        gridLayout_3->addWidget(groupBox_3, 5, 0, 1, 2);

        mOutputFormatLabel = new QLabel(scrollAreaWidgetContents_2);
        mOutputFormatLabel->setObjectName(QString::fromUtf8("mOutputFormatLabel"));

        gridLayout_3->addWidget(mOutputFormatLabel, 3, 0, 1, 1);

        mOutputLayer = new QgsFileWidget(scrollAreaWidgetContents_2);
        mOutputLayer->setObjectName(QString::fromUtf8("mOutputLayer"));

        gridLayout_3->addWidget(mOutputLayer, 2, 1, 1, 1);

        mVirtualLayerName = new QLineEdit(scrollAreaWidgetContents_2);
        mVirtualLayerName->setObjectName(QString::fromUtf8("mVirtualLayerName"));

        gridLayout_3->addWidget(mVirtualLayerName, 1, 1, 1, 1);

        mExtentGroupBox = new QgsExtentGroupBox(scrollAreaWidgetContents_2);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));

        gridLayout_3->addWidget(mExtentGroupBox, 4, 0, 1, 2);

        mOutputFormatComboBox = new QComboBox(scrollAreaWidgetContents_2);
        mOutputFormatComboBox->setObjectName(QString::fromUtf8("mOutputFormatComboBox"));

        gridLayout_3->addWidget(mOutputFormatComboBox, 3, 1, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(scrollAreaWidgetContents_2);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout_3->addWidget(mCrsSelector, 7, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 7, 0, 1, 1);

        mOutputLayerLabel = new QLabel(scrollAreaWidgetContents_2);
        mOutputLayerLabel->setObjectName(QString::fromUtf8("mOutputLayerLabel"));

        gridLayout_3->addWidget(mOutputLayerLabel, 2, 0, 1, 1);

        mVirtualLayerLabel = new QLabel(scrollAreaWidgetContents_2);
        mVirtualLayerLabel->setObjectName(QString::fromUtf8("mVirtualLayerLabel"));

        gridLayout_3->addWidget(mVirtualLayerLabel, 1, 0, 1, 1);

        mUseVirtualProviderCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        mUseVirtualProviderCheckBox->setObjectName(QString::fromUtf8("mUseVirtualProviderCheckBox"));
        mUseVirtualProviderCheckBox->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        mUseVirtualProviderCheckBox->setTristate(false);

        gridLayout_3->addWidget(mUseVirtualProviderCheckBox, 0, 0, 1, 2);

        mAddResultToProjectCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        mAddResultToProjectCheckBox->setObjectName(QString::fromUtf8("mAddResultToProjectCheckBox"));
        mAddResultToProjectCheckBox->setChecked(true);

        gridLayout_3->addWidget(mAddResultToProjectCheckBox, 9, 0, 1, 1);

        mCreationOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        mCreationOptionsGroupBox->setObjectName(QString::fromUtf8("mCreationOptionsGroupBox"));
        mCreationOptionsGroupBox->setCheckable(true);
        mCreationOptionsGroupBox->setChecked(false);
        mCreationOptionsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(mCreationOptionsGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mCreationOptionsWidget = new QgsRasterFormatSaveOptionsWidget(mCreationOptionsGroupBox);
        mCreationOptionsWidget->setObjectName(QString::fromUtf8("mCreationOptionsWidget"));

        verticalLayout_3->addWidget(mCreationOptionsWidget);


        gridLayout_3->addWidget(mCreationOptionsGroupBox, 8, 0, 1, 2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_4->addWidget(scrollArea_2, 0, 0, 1, 1);

        splitter->addWidget(mResultGroupBox);
        splitter_2->addWidget(splitter);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mOperatorsGroupBox = new QgsCollapsibleGroupBox(layoutWidget);
        mOperatorsGroupBox->setObjectName(QString::fromUtf8("mOperatorsGroupBox"));
        gridLayout = new QGridLayout(mOperatorsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        mPlusPushButton = new QPushButton(mOperatorsGroupBox);
        mPlusPushButton->setObjectName(QString::fromUtf8("mPlusPushButton"));
        mPlusPushButton->setText(QString::fromUtf8("+"));

        gridLayout->addWidget(mPlusPushButton, 0, 0, 1, 1);

        mMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        mMultiplyPushButton->setObjectName(QString::fromUtf8("mMultiplyPushButton"));
        mMultiplyPushButton->setText(QString::fromUtf8("*"));

        gridLayout->addWidget(mMultiplyPushButton, 0, 1, 1, 1);

        mOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mOpenBracketPushButton->setObjectName(QString::fromUtf8("mOpenBracketPushButton"));
        mOpenBracketPushButton->setText(QString::fromUtf8("("));

        gridLayout->addWidget(mOpenBracketPushButton, 0, 2, 1, 1);

        mMinButton = new QPushButton(mOperatorsGroupBox);
        mMinButton->setObjectName(QString::fromUtf8("mMinButton"));
        mMinButton->setText(QString::fromUtf8("min"));

        gridLayout->addWidget(mMinButton, 0, 3, 1, 1);

        mConditionalStatButton = new QPushButton(mOperatorsGroupBox);
        mConditionalStatButton->setObjectName(QString::fromUtf8("mConditionalStatButton"));
        mConditionalStatButton->setText(QString::fromUtf8("IF"));

        gridLayout->addWidget(mConditionalStatButton, 0, 4, 1, 1);

        mCosButton = new QPushButton(mOperatorsGroupBox);
        mCosButton->setObjectName(QString::fromUtf8("mCosButton"));
        mCosButton->setText(QString::fromUtf8("cos"));

        gridLayout->addWidget(mCosButton, 0, 5, 1, 1);

        mACosButton = new QPushButton(mOperatorsGroupBox);
        mACosButton->setObjectName(QString::fromUtf8("mACosButton"));
        mACosButton->setText(QString::fromUtf8("acos"));

        gridLayout->addWidget(mACosButton, 0, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 7, 1, 1);

        mMinusPushButton = new QPushButton(mOperatorsGroupBox);
        mMinusPushButton->setObjectName(QString::fromUtf8("mMinusPushButton"));
        mMinusPushButton->setText(QString::fromUtf8("-"));

        gridLayout->addWidget(mMinusPushButton, 1, 0, 1, 1);

        mDividePushButton = new QPushButton(mOperatorsGroupBox);
        mDividePushButton->setObjectName(QString::fromUtf8("mDividePushButton"));
        mDividePushButton->setText(QString::fromUtf8("/"));

        gridLayout->addWidget(mDividePushButton, 1, 1, 1, 1);

        mCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mCloseBracketPushButton->setObjectName(QString::fromUtf8("mCloseBracketPushButton"));
        mCloseBracketPushButton->setText(QString::fromUtf8(")"));

        gridLayout->addWidget(mCloseBracketPushButton, 1, 2, 1, 1);

        mMaxButton = new QPushButton(mOperatorsGroupBox);
        mMaxButton->setObjectName(QString::fromUtf8("mMaxButton"));
        mMaxButton->setText(QString::fromUtf8("max"));

        gridLayout->addWidget(mMaxButton, 1, 3, 1, 1);

        mAndButton = new QPushButton(mOperatorsGroupBox);
        mAndButton->setObjectName(QString::fromUtf8("mAndButton"));
        mAndButton->setText(QString::fromUtf8("AND"));

        gridLayout->addWidget(mAndButton, 1, 4, 1, 1);

        mSinButton = new QPushButton(mOperatorsGroupBox);
        mSinButton->setObjectName(QString::fromUtf8("mSinButton"));
        mSinButton->setText(QString::fromUtf8("sin"));

        gridLayout->addWidget(mSinButton, 1, 5, 1, 1);

        mASinButton = new QPushButton(mOperatorsGroupBox);
        mASinButton->setObjectName(QString::fromUtf8("mASinButton"));
        mASinButton->setText(QString::fromUtf8("asin"));

        gridLayout->addWidget(mASinButton, 1, 6, 1, 1);

        mLessButton = new QPushButton(mOperatorsGroupBox);
        mLessButton->setObjectName(QString::fromUtf8("mLessButton"));
        mLessButton->setText(QString::fromUtf8("<"));

        gridLayout->addWidget(mLessButton, 2, 0, 1, 1);

        mGreaterButton = new QPushButton(mOperatorsGroupBox);
        mGreaterButton->setObjectName(QString::fromUtf8("mGreaterButton"));
        mGreaterButton->setText(QString::fromUtf8(">"));

        gridLayout->addWidget(mGreaterButton, 2, 1, 1, 1);

        mEqualButton = new QPushButton(mOperatorsGroupBox);
        mEqualButton->setObjectName(QString::fromUtf8("mEqualButton"));
        mEqualButton->setText(QString::fromUtf8("="));

        gridLayout->addWidget(mEqualButton, 2, 2, 1, 1);

        mAbsButton = new QPushButton(mOperatorsGroupBox);
        mAbsButton->setObjectName(QString::fromUtf8("mAbsButton"));
        mAbsButton->setText(QString::fromUtf8("abs"));

        gridLayout->addWidget(mAbsButton, 2, 3, 1, 1);

        mOrButton = new QPushButton(mOperatorsGroupBox);
        mOrButton->setObjectName(QString::fromUtf8("mOrButton"));
        mOrButton->setText(QString::fromUtf8("OR"));

        gridLayout->addWidget(mOrButton, 2, 4, 1, 1);

        mTanButton = new QPushButton(mOperatorsGroupBox);
        mTanButton->setObjectName(QString::fromUtf8("mTanButton"));
        mTanButton->setText(QString::fromUtf8("tan"));

        gridLayout->addWidget(mTanButton, 2, 5, 1, 1);

        mATanButton = new QPushButton(mOperatorsGroupBox);
        mATanButton->setObjectName(QString::fromUtf8("mATanButton"));
        mATanButton->setText(QString::fromUtf8("atan"));

        gridLayout->addWidget(mATanButton, 2, 6, 1, 1);

        mLesserEqualButton = new QPushButton(mOperatorsGroupBox);
        mLesserEqualButton->setObjectName(QString::fromUtf8("mLesserEqualButton"));
        mLesserEqualButton->setText(QString::fromUtf8("<="));

        gridLayout->addWidget(mLesserEqualButton, 3, 0, 1, 1);

        mGreaterEqualButton = new QPushButton(mOperatorsGroupBox);
        mGreaterEqualButton->setObjectName(QString::fromUtf8("mGreaterEqualButton"));
        mGreaterEqualButton->setText(QString::fromUtf8(">="));

        gridLayout->addWidget(mGreaterEqualButton, 3, 1, 1, 1);

        mNotEqualButton = new QPushButton(mOperatorsGroupBox);
        mNotEqualButton->setObjectName(QString::fromUtf8("mNotEqualButton"));
        mNotEqualButton->setText(QString::fromUtf8("!="));

        gridLayout->addWidget(mNotEqualButton, 3, 2, 1, 1);

        mExpButton = new QPushButton(mOperatorsGroupBox);
        mExpButton->setObjectName(QString::fromUtf8("mExpButton"));
        mExpButton->setText(QString::fromUtf8("^"));

        gridLayout->addWidget(mExpButton, 3, 3, 1, 1);

        mSqrtButton = new QPushButton(mOperatorsGroupBox);
        mSqrtButton->setObjectName(QString::fromUtf8("mSqrtButton"));
        mSqrtButton->setText(QString::fromUtf8("sqrt"));

        gridLayout->addWidget(mSqrtButton, 3, 4, 1, 1);

        mLogButton = new QPushButton(mOperatorsGroupBox);
        mLogButton->setObjectName(QString::fromUtf8("mLogButton"));
        mLogButton->setText(QString::fromUtf8("log10"));

        gridLayout->addWidget(mLogButton, 3, 5, 1, 1);

        mLnButton = new QPushButton(mOperatorsGroupBox);
        mLnButton->setObjectName(QString::fromUtf8("mLnButton"));
        mLnButton->setText(QString::fromUtf8("ln"));

        gridLayout->addWidget(mLnButton, 3, 6, 1, 1);


        verticalLayout_4->addWidget(mOperatorsGroupBox);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        mExpressionTextEdit = new QTextEdit(groupBox);
        mExpressionTextEdit->setObjectName(QString::fromUtf8("mExpressionTextEdit"));

        verticalLayout_2->addWidget(mExpressionTextEdit);


        verticalLayout_4->addWidget(groupBox);

        splitter_2->addWidget(layoutWidget);

        verticalLayout_5->addWidget(splitter_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        mExpressionValidLabel = new QLabel(QgsRasterCalcDialogBase);
        mExpressionValidLabel->setObjectName(QString::fromUtf8("mExpressionValidLabel"));

        verticalLayout->addWidget(mExpressionValidLabel);

        mButtonBox = new QDialogButtonBox(QgsRasterCalcDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Orientation::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsRasterCalcDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsRasterCalcDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsRasterCalcDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRasterCalcDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterCalcDialogBase)
    {
        QgsRasterCalcDialogBase->setWindowTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Raster Calculator", nullptr));
        mRasterBandsGroupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Raster Bands", nullptr));
        mResultGroupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Result Layer", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Resolution", nullptr));
        mColumnsLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Columns", nullptr));
        mRowsLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Rows", nullptr));
        mOutputFormatLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Output format", nullptr));
        mVirtualLayerName->setText(QString());
        mVirtualLayerName->setPlaceholderText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Autogenerated from expression", nullptr));
        mExtentGroupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Spatial Extent", nullptr));
        label->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Output CRS", nullptr));
        mOutputLayerLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Output layer", nullptr));
        mVirtualLayerLabel->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Layer name", nullptr));
#if QT_CONFIG(tooltip)
        mUseVirtualProviderCheckBox->setToolTip(QCoreApplication::translate("QgsRasterCalcDialogBase", "<html><head/><body><p>Note: the result raster will not be usable with any processing algorithm that expects a materialized raster.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mUseVirtualProviderCheckBox->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Create on-the-fly raster instead of writing layer to disk", nullptr));
        mAddResultToProjectCheckBox->setText(QCoreApplication::translate("QgsRasterCalcDialogBase", "Add result to project", nullptr));
        mCreationOptionsGroupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Create Options", nullptr));
        mOperatorsGroupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Operators", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsRasterCalcDialogBase", "Raster Calculator Expression", nullptr));
        mExpressionValidLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsRasterCalcDialogBase: public Ui_QgsRasterCalcDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERCALCDIALOGBASE_H
