/********************************************************************************
** Form generated from reading UI file 'qgsprocessingalgorithmprogressdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGALGORITHMPROGRESSDIALOGBASE_H
#define UI_QGSPROCESSINGALGORITHMPROGRESSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingProgressDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *mTxtLog;
    QHBoxLayout *horizontalLayout;
    QProgressBar *mProgressBar;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsProcessingProgressDialogBase)
    {
        if (QgsProcessingProgressDialogBase->objectName().isEmpty())
            QgsProcessingProgressDialogBase->setObjectName(QString::fromUtf8("QgsProcessingProgressDialogBase"));
        QgsProcessingProgressDialogBase->resize(1603, 1239);
        QgsProcessingProgressDialogBase->setWindowTitle(QString::fromUtf8("Dialog"));
        QgsProcessingProgressDialogBase->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(QgsProcessingProgressDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mTxtLog = new QTextEdit(QgsProcessingProgressDialogBase);
        mTxtLog->setObjectName(QString::fromUtf8("mTxtLog"));
        mTxtLog->setReadOnly(true);

        verticalLayout->addWidget(mTxtLog);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mProgressBar = new QProgressBar(QgsProcessingProgressDialogBase);
        mProgressBar->setObjectName(QString::fromUtf8("mProgressBar"));
        mProgressBar->setValue(0);

        horizontalLayout->addWidget(mProgressBar);

        mButtonBox = new QDialogButtonBox(QgsProcessingProgressDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel);

        horizontalLayout->addWidget(mButtonBox);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsProcessingProgressDialogBase);

        QMetaObject::connectSlotsByName(QgsProcessingProgressDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProcessingProgressDialogBase)
    {
        (void)QgsProcessingProgressDialogBase;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingProgressDialogBase: public Ui_QgsProcessingProgressDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGALGORITHMPROGRESSDIALOGBASE_H
