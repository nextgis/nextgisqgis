/********************************************************************************
** Form generated from reading UI file 'qgstextannotationdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTEXTANNOTATIONDIALOGBASE_H
#define UI_QGSTEXTANNOTATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTextAnnotationDialogBase
{
public:
    QGridLayout *gridLayout;
    QTextEdit *mTextEdit;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QWidget *page_2;
    QDialogButtonBox *mButtonBox;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *mFontComboBox;
    QSpacerItem *horizontalSpacer;
    QgsSpinBox *mFontSizeSpinBox;
    QPushButton *mBoldPushButton;
    QPushButton *mItalicsPushButton;
    QgsColorButton *mFontColorButton;
    QCheckBox *mLiveCheckBox;

    void setupUi(QDialog *QgsTextAnnotationDialogBase)
    {
        if (QgsTextAnnotationDialogBase->objectName().isEmpty())
            QgsTextAnnotationDialogBase->setObjectName(QString::fromUtf8("QgsTextAnnotationDialogBase"));
        QgsTextAnnotationDialogBase->resize(551, 364);
        gridLayout = new QGridLayout(QgsTextAnnotationDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mTextEdit = new QTextEdit(QgsTextAnnotationDialogBase);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));

        gridLayout->addWidget(mTextEdit, 1, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsTextAnnotationDialogBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mStackedWidget, 2, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsTextAnnotationDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFontComboBox = new QFontComboBox(QgsTextAnnotationDialogBase);
        mFontComboBox->setObjectName(QString::fromUtf8("mFontComboBox"));

        horizontalLayout->addWidget(mFontComboBox);

        horizontalSpacer = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mFontSizeSpinBox = new QgsSpinBox(QgsTextAnnotationDialogBase);
        mFontSizeSpinBox->setObjectName(QString::fromUtf8("mFontSizeSpinBox"));

        horizontalLayout->addWidget(mFontSizeSpinBox);

        mBoldPushButton = new QPushButton(QgsTextAnnotationDialogBase);
        mBoldPushButton->setObjectName(QString::fromUtf8("mBoldPushButton"));
        mBoldPushButton->setMinimumSize(QSize(50, 0));
        mBoldPushButton->setCheckable(true);

        horizontalLayout->addWidget(mBoldPushButton);

        mItalicsPushButton = new QPushButton(QgsTextAnnotationDialogBase);
        mItalicsPushButton->setObjectName(QString::fromUtf8("mItalicsPushButton"));
        mItalicsPushButton->setMinimumSize(QSize(50, 0));
        mItalicsPushButton->setCheckable(true);

        horizontalLayout->addWidget(mItalicsPushButton);

        mFontColorButton = new QgsColorButton(QgsTextAnnotationDialogBase);
        mFontColorButton->setObjectName(QString::fromUtf8("mFontColorButton"));
        mFontColorButton->setMinimumSize(QSize(100, 0));
        mFontColorButton->setMaximumSize(QSize(100, 16777215));
        mFontColorButton->setProperty("autoDefault", QVariant(false));

        horizontalLayout->addWidget(mFontColorButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mLiveCheckBox = new QCheckBox(QgsTextAnnotationDialogBase);
        mLiveCheckBox->setObjectName(QString::fromUtf8("mLiveCheckBox"));

        gridLayout->addWidget(mLiveCheckBox, 3, 0, 1, 1);

        QWidget::setTabOrder(mFontComboBox, mFontSizeSpinBox);
        QWidget::setTabOrder(mFontSizeSpinBox, mBoldPushButton);
        QWidget::setTabOrder(mBoldPushButton, mItalicsPushButton);
        QWidget::setTabOrder(mItalicsPushButton, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mTextEdit);
        QWidget::setTabOrder(mTextEdit, mButtonBox);

        retranslateUi(QgsTextAnnotationDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsTextAnnotationDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsTextAnnotationDialogBase, SLOT(reject()));

        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsTextAnnotationDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsTextAnnotationDialogBase)
    {
        QgsTextAnnotationDialogBase->setWindowTitle(QCoreApplication::translate("QgsTextAnnotationDialogBase", "Annotation Text", nullptr));
        mBoldPushButton->setText(QCoreApplication::translate("QgsTextAnnotationDialogBase", "B", nullptr));
        mItalicsPushButton->setText(QCoreApplication::translate("QgsTextAnnotationDialogBase", "I", nullptr));
        mFontColorButton->setText(QString());
        mLiveCheckBox->setText(QCoreApplication::translate("QgsTextAnnotationDialogBase", "Live update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTextAnnotationDialogBase: public Ui_QgsTextAnnotationDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTEXTANNOTATIONDIALOGBASE_H
