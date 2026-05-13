/********************************************************************************
** Form generated from reading UI file 'qgsformannotationdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFORMANNOTATIONDIALOGBASE_H
#define UI_QGSFORMANNOTATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgscodeeditorhtml.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFormAnnotationDialogBase
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QWidget *page_2;
    QRadioButton *mSourceRadioButton;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mFileRadioButton;
    QLineEdit *mFileLineEdit;
    QToolButton *mBrowseToolButton;
    QDialogButtonBox *mButtonBox;
    QgsCodeEditorHTML *mHtmlSourceTextEdit;
    QCheckBox *mLiveCheckBox;

    void setupUi(QDialog *QgsFormAnnotationDialogBase)
    {
        if (QgsFormAnnotationDialogBase->objectName().isEmpty())
            QgsFormAnnotationDialogBase->setObjectName(QString::fromUtf8("QgsFormAnnotationDialogBase"));
        QgsFormAnnotationDialogBase->resize(433, 246);
        gridLayout = new QGridLayout(QgsFormAnnotationDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mStackedWidget = new QStackedWidget(QgsFormAnnotationDialogBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mStackedWidget, 3, 0, 1, 1);

        mSourceRadioButton = new QRadioButton(QgsFormAnnotationDialogBase);
        mSourceRadioButton->setObjectName(QString::fromUtf8("mSourceRadioButton"));

        gridLayout->addWidget(mSourceRadioButton, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFileRadioButton = new QRadioButton(QgsFormAnnotationDialogBase);
        mFileRadioButton->setObjectName(QString::fromUtf8("mFileRadioButton"));
        mFileRadioButton->setChecked(true);

        horizontalLayout->addWidget(mFileRadioButton);

        mFileLineEdit = new QLineEdit(QgsFormAnnotationDialogBase);
        mFileLineEdit->setObjectName(QString::fromUtf8("mFileLineEdit"));

        horizontalLayout->addWidget(mFileLineEdit);

        mBrowseToolButton = new QToolButton(QgsFormAnnotationDialogBase);
        mBrowseToolButton->setObjectName(QString::fromUtf8("mBrowseToolButton"));

        horizontalLayout->addWidget(mBrowseToolButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsFormAnnotationDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 5, 0, 1, 1);

        mHtmlSourceTextEdit = new QgsCodeEditorHTML(QgsFormAnnotationDialogBase);
        mHtmlSourceTextEdit->setObjectName(QString::fromUtf8("mHtmlSourceTextEdit"));

        gridLayout->addWidget(mHtmlSourceTextEdit, 2, 0, 1, 1);

        mLiveCheckBox = new QCheckBox(QgsFormAnnotationDialogBase);
        mLiveCheckBox->setObjectName(QString::fromUtf8("mLiveCheckBox"));

        gridLayout->addWidget(mLiveCheckBox, 4, 0, 1, 1);


        retranslateUi(QgsFormAnnotationDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFormAnnotationDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFormAnnotationDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFormAnnotationDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsFormAnnotationDialogBase)
    {
        QgsFormAnnotationDialogBase->setWindowTitle(QCoreApplication::translate("QgsFormAnnotationDialogBase", "Form Annotation", nullptr));
        mSourceRadioButton->setText(QCoreApplication::translate("QgsFormAnnotationDialogBase", "Source", nullptr));
        mFileRadioButton->setText(QCoreApplication::translate("QgsFormAnnotationDialogBase", "File", nullptr));
        mBrowseToolButton->setText(QCoreApplication::translate("QgsFormAnnotationDialogBase", "\342\200\246", nullptr));
        mLiveCheckBox->setText(QCoreApplication::translate("QgsFormAnnotationDialogBase", "Live update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsFormAnnotationDialogBase: public Ui_QgsFormAnnotationDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFORMANNOTATIONDIALOGBASE_H
