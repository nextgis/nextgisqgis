/********************************************************************************
** Form generated from reading UI file 'qgslayouthtmlwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTHTMLWIDGETBASE_H
#define UI_QGSLAYOUTHTMLWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutHtmlWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *mEvaluateExpressionsCheckbox;
    QPushButton *mReloadPushButton;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mUrlLineEdit;
    QToolButton *mFileToolButton;
    QgsPropertyOverrideButton *mUrlDDBtn;
    QRadioButton *mRadioManualSource;
    QVBoxLayout *htmlEditorLayout;
    QRadioButton *mRadioUrlSource;
    QPushButton *mInsertExpressionButton;
    QgsCollapsibleGroupBoxBasic *frameGroupBox;
    QGridLayout *gridLayout;
    QComboBox *mResizeModeComboBox;
    QCheckBox *mEmptyFrameCheckBox;
    QPushButton *mAddFramePushButton;
    QLabel *mResizeModeLabel;
    QCheckBox *mHideEmptyBgCheckBox;
    QgsCollapsibleGroupBoxBasic *mUseSmartBreaksCheckBox;
    QGridLayout *gridLayout_3;
    QLabel *mLabelMaxDistance;
    QgsDoubleSpinBox *mMaxDistanceSpinBox;
    QgsCollapsibleGroupBoxBasic *mUserStylesheetCheckBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *stylesheetEditorLayout;
    QPushButton *mReloadPushButton2;

    void setupUi(QWidget *QgsLayoutHtmlWidgetBase)
    {
        if (QgsLayoutHtmlWidgetBase->objectName().isEmpty())
            QgsLayoutHtmlWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutHtmlWidgetBase"));
        QgsLayoutHtmlWidgetBase->resize(409, 383);
        verticalLayout = new QVBoxLayout(QgsLayoutHtmlWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLayoutHtmlWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout->addWidget(label);

        scrollArea = new QgsScrollArea(QgsLayoutHtmlWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 393, 585));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mEvaluateExpressionsCheckbox = new QCheckBox(groupBox);
        mEvaluateExpressionsCheckbox->setObjectName(QString::fromUtf8("mEvaluateExpressionsCheckbox"));

        gridLayout_2->addWidget(mEvaluateExpressionsCheckbox, 5, 0, 1, 2);

        mReloadPushButton = new QPushButton(groupBox);
        mReloadPushButton->setObjectName(QString::fromUtf8("mReloadPushButton"));

        gridLayout_2->addWidget(mReloadPushButton, 6, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mUrlLineEdit = new QLineEdit(groupBox);
        mUrlLineEdit->setObjectName(QString::fromUtf8("mUrlLineEdit"));

        horizontalLayout->addWidget(mUrlLineEdit);

        mFileToolButton = new QToolButton(groupBox);
        mFileToolButton->setObjectName(QString::fromUtf8("mFileToolButton"));

        horizontalLayout->addWidget(mFileToolButton);

        mUrlDDBtn = new QgsPropertyOverrideButton(groupBox);
        mUrlDDBtn->setObjectName(QString::fromUtf8("mUrlDDBtn"));

        horizontalLayout->addWidget(mUrlDDBtn);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        mRadioManualSource = new QRadioButton(groupBox);
        mRadioManualSource->setObjectName(QString::fromUtf8("mRadioManualSource"));

        gridLayout_2->addWidget(mRadioManualSource, 2, 0, 1, 2);

        htmlEditorLayout = new QVBoxLayout();
        htmlEditorLayout->setObjectName(QString::fromUtf8("htmlEditorLayout"));

        gridLayout_2->addLayout(htmlEditorLayout, 3, 0, 1, 2);

        mRadioUrlSource = new QRadioButton(groupBox);
        mRadioUrlSource->setObjectName(QString::fromUtf8("mRadioUrlSource"));

        gridLayout_2->addWidget(mRadioUrlSource, 0, 0, 1, 1);

        mInsertExpressionButton = new QPushButton(groupBox);
        mInsertExpressionButton->setObjectName(QString::fromUtf8("mInsertExpressionButton"));

        gridLayout_2->addWidget(mInsertExpressionButton, 4, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        frameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        frameGroupBox->setObjectName(QString::fromUtf8("frameGroupBox"));
        frameGroupBox->setFocusPolicy(Qt::StrongFocus);
        frameGroupBox->setCheckable(false);
        frameGroupBox->setChecked(false);
        frameGroupBox->setProperty("collapsed", QVariant(false));
        frameGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout = new QGridLayout(frameGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mResizeModeComboBox = new QComboBox(frameGroupBox);
        mResizeModeComboBox->setObjectName(QString::fromUtf8("mResizeModeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mResizeModeComboBox->sizePolicy().hasHeightForWidth());
        mResizeModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mResizeModeComboBox, 0, 1, 1, 1);

        mEmptyFrameCheckBox = new QCheckBox(frameGroupBox);
        mEmptyFrameCheckBox->setObjectName(QString::fromUtf8("mEmptyFrameCheckBox"));

        gridLayout->addWidget(mEmptyFrameCheckBox, 2, 0, 1, 2);

        mAddFramePushButton = new QPushButton(frameGroupBox);
        mAddFramePushButton->setObjectName(QString::fromUtf8("mAddFramePushButton"));

        gridLayout->addWidget(mAddFramePushButton, 1, 0, 1, 2);

        mResizeModeLabel = new QLabel(frameGroupBox);
        mResizeModeLabel->setObjectName(QString::fromUtf8("mResizeModeLabel"));
        mResizeModeLabel->setWordWrap(true);

        gridLayout->addWidget(mResizeModeLabel, 0, 0, 1, 1);

        mHideEmptyBgCheckBox = new QCheckBox(frameGroupBox);
        mHideEmptyBgCheckBox->setObjectName(QString::fromUtf8("mHideEmptyBgCheckBox"));

        gridLayout->addWidget(mHideEmptyBgCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(frameGroupBox);

        mUseSmartBreaksCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mUseSmartBreaksCheckBox->setObjectName(QString::fromUtf8("mUseSmartBreaksCheckBox"));
        mUseSmartBreaksCheckBox->setCheckable(true);
        mUseSmartBreaksCheckBox->setChecked(false);
        mUseSmartBreaksCheckBox->setProperty("collapsed", QVariant(false));
        mUseSmartBreaksCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout_3 = new QGridLayout(mUseSmartBreaksCheckBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mLabelMaxDistance = new QLabel(mUseSmartBreaksCheckBox);
        mLabelMaxDistance->setObjectName(QString::fromUtf8("mLabelMaxDistance"));

        gridLayout_3->addWidget(mLabelMaxDistance, 0, 0, 1, 1);

        mMaxDistanceSpinBox = new QgsDoubleSpinBox(mUseSmartBreaksCheckBox);
        mMaxDistanceSpinBox->setObjectName(QString::fromUtf8("mMaxDistanceSpinBox"));
        mMaxDistanceSpinBox->setDecimals(1);
        mMaxDistanceSpinBox->setMaximum(1000.000000000000000);
        mMaxDistanceSpinBox->setSingleStep(1.000000000000000);
        mMaxDistanceSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mMaxDistanceSpinBox, 0, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        mainLayout->addWidget(mUseSmartBreaksCheckBox);

        mUserStylesheetCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mUserStylesheetCheckBox->setObjectName(QString::fromUtf8("mUserStylesheetCheckBox"));
        mUserStylesheetCheckBox->setCheckable(true);
        mUserStylesheetCheckBox->setChecked(false);
        mUserStylesheetCheckBox->setProperty("collapsed", QVariant(true));
        mUserStylesheetCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        verticalLayout_2 = new QVBoxLayout(mUserStylesheetCheckBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stylesheetEditorLayout = new QVBoxLayout();
        stylesheetEditorLayout->setObjectName(QString::fromUtf8("stylesheetEditorLayout"));

        verticalLayout_2->addLayout(stylesheetEditorLayout);

        mReloadPushButton2 = new QPushButton(mUserStylesheetCheckBox);
        mReloadPushButton2->setObjectName(QString::fromUtf8("mReloadPushButton2"));

        verticalLayout_2->addWidget(mReloadPushButton2);


        mainLayout->addWidget(mUserStylesheetCheckBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mRadioUrlSource);
        QWidget::setTabOrder(mRadioUrlSource, mUrlLineEdit);
        QWidget::setTabOrder(mUrlLineEdit, mFileToolButton);
        QWidget::setTabOrder(mFileToolButton, mUrlDDBtn);
        QWidget::setTabOrder(mUrlDDBtn, mRadioManualSource);
        QWidget::setTabOrder(mRadioManualSource, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mEvaluateExpressionsCheckbox);
        QWidget::setTabOrder(mEvaluateExpressionsCheckbox, mReloadPushButton);
        QWidget::setTabOrder(mReloadPushButton, frameGroupBox);
        QWidget::setTabOrder(frameGroupBox, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAddFramePushButton);
        QWidget::setTabOrder(mAddFramePushButton, mEmptyFrameCheckBox);
        QWidget::setTabOrder(mEmptyFrameCheckBox, mHideEmptyBgCheckBox);
        QWidget::setTabOrder(mHideEmptyBgCheckBox, mUseSmartBreaksCheckBox);
        QWidget::setTabOrder(mUseSmartBreaksCheckBox, mMaxDistanceSpinBox);
        QWidget::setTabOrder(mMaxDistanceSpinBox, mUserStylesheetCheckBox);
        QWidget::setTabOrder(mUserStylesheetCheckBox, mReloadPushButton2);

        retranslateUi(QgsLayoutHtmlWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutHtmlWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutHtmlWidgetBase)
    {
        QgsLayoutHtmlWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "HTML Frame", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "HTML frame", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "HTML Source", nullptr));
#if QT_CONFIG(tooltip)
        mEvaluateExpressionsCheckbox->setToolTip(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "If checked, expressions inside [% %] tags will be evaluated prior to rendering the HTML", nullptr));
#endif // QT_CONFIG(tooltip)
        mEvaluateExpressionsCheckbox->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Evaluate QGIS expressions in HTML source", nullptr));
        mReloadPushButton->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Refresh HTML", nullptr));
        mFileToolButton->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "\342\200\246", nullptr));
        mUrlDDBtn->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "\342\200\246", nullptr));
        mRadioManualSource->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Source", nullptr));
        mRadioUrlSource->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "URL", nullptr));
        mInsertExpressionButton->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Insert or Edit an Expression\342\200\246", nullptr));
        frameGroupBox->setTitle(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Frames", nullptr));
        mEmptyFrameCheckBox->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Don't export page if frame is empty", nullptr));
        mAddFramePushButton->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Add Frame", nullptr));
        mResizeModeLabel->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Resize mode", nullptr));
        mHideEmptyBgCheckBox->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Don't draw background if frame is empty", nullptr));
        mUseSmartBreaksCheckBox->setTitle(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Use Smart Page Breaks", nullptr));
        mLabelMaxDistance->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Maximum distance", nullptr));
        mMaxDistanceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", " mm", nullptr));
        mUserStylesheetCheckBox->setTitle(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "User Stylesheet", nullptr));
        mReloadPushButton2->setText(QCoreApplication::translate("QgsLayoutHtmlWidgetBase", "Update HTML", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutHtmlWidgetBase: public Ui_QgsLayoutHtmlWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTHTMLWIDGETBASE_H
