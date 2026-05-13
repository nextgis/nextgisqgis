/********************************************************************************
** Form generated from reading UI file 'qgserrordialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSERRORDIALOGBASE_H
#define UI_QGSERRORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsErrorDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mIconLabel;
    QVBoxLayout *verticalLayout;
    QTextBrowser *mSummaryTextBrowser;
    QTextBrowser *mDetailTextBrowser;
    QCheckBox *mDetailCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *mDetailPushButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsErrorDialogBase)
    {
        if (QgsErrorDialogBase->objectName().isEmpty())
            QgsErrorDialogBase->setObjectName(QString::fromUtf8("QgsErrorDialogBase"));
        QgsErrorDialogBase->resize(580, 245);
        QgsErrorDialogBase->setWindowTitle(QString::fromUtf8("Dialog"));
        verticalLayout_2 = new QVBoxLayout(QgsErrorDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mIconLabel = new QLabel(QgsErrorDialogBase);
        mIconLabel->setObjectName(QString::fromUtf8("mIconLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mIconLabel->sizePolicy().hasHeightForWidth());
        mIconLabel->setSizePolicy(sizePolicy);
        mIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/mIconWarning.svg")));

        horizontalLayout_2->addWidget(mIconLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mSummaryTextBrowser = new QTextBrowser(QgsErrorDialogBase);
        mSummaryTextBrowser->setObjectName(QString::fromUtf8("mSummaryTextBrowser"));
        mSummaryTextBrowser->setFrameShape(QFrame::NoFrame);
        mSummaryTextBrowser->setFrameShadow(QFrame::Plain);
        mSummaryTextBrowser->setLineWidth(0);

        verticalLayout->addWidget(mSummaryTextBrowser);

        mDetailTextBrowser = new QTextBrowser(QgsErrorDialogBase);
        mDetailTextBrowser->setObjectName(QString::fromUtf8("mDetailTextBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDetailTextBrowser->sizePolicy().hasHeightForWidth());
        mDetailTextBrowser->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(mDetailTextBrowser);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        mDetailCheckBox = new QCheckBox(QgsErrorDialogBase);
        mDetailCheckBox->setObjectName(QString::fromUtf8("mDetailCheckBox"));

        verticalLayout_2->addWidget(mDetailCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mDetailPushButton = new QPushButton(QgsErrorDialogBase);
        mDetailPushButton->setObjectName(QString::fromUtf8("mDetailPushButton"));

        horizontalLayout->addWidget(mDetailPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(QgsErrorDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(mSummaryTextBrowser, mDetailTextBrowser);
        QWidget::setTabOrder(mDetailTextBrowser, mDetailCheckBox);
        QWidget::setTabOrder(mDetailCheckBox, mDetailPushButton);
        QWidget::setTabOrder(mDetailPushButton, buttonBox);

        retranslateUi(QgsErrorDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsErrorDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsErrorDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsErrorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsErrorDialogBase)
    {
        mIconLabel->setText(QString());
        mSummaryTextBrowser->setHtml(QCoreApplication::translate("QgsErrorDialogBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial,Open Sans,sans-serif'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:10pt;\">Summary</span></p></body></html>", nullptr));
        mDetailTextBrowser->setHtml(QCoreApplication::translate("QgsErrorDialogBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial,Open Sans,sans-serif'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:10pt;\">Detailed report.</span></p></body></html>", nullptr));
        mDetailCheckBox->setText(QCoreApplication::translate("QgsErrorDialogBase", "Always show details", nullptr));
        mDetailPushButton->setText(QCoreApplication::translate("QgsErrorDialogBase", "Details >>", nullptr));
        (void)QgsErrorDialogBase;
    } // retranslateUi

};

namespace Ui {
    class QgsErrorDialogBase: public Ui_QgsErrorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSERRORDIALOGBASE_H
