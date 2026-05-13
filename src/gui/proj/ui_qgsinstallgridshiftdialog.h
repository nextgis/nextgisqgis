/********************************************************************************
** Form generated from reading UI file 'qgsinstallgridshiftdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSINSTALLGRIDSHIFTDIALOG_H
#define UI_QGSINSTALLGRIDSHIFTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsInstallGridShiftFileDialogBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *mButtonBox;
    QTextEdit *mSummaryLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *mDownloadLabel;
    QPushButton *mInstallButton;

    void setupUi(QDialog *QgsInstallGridShiftFileDialogBase)
    {
        if (QgsInstallGridShiftFileDialogBase->objectName().isEmpty())
            QgsInstallGridShiftFileDialogBase->setObjectName(QString::fromUtf8("QgsInstallGridShiftFileDialogBase"));
        QgsInstallGridShiftFileDialogBase->resize(720, 353);
        gridLayout = new QGridLayout(QgsInstallGridShiftFileDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mButtonBox = new QDialogButtonBox(QgsInstallGridShiftFileDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 6, 0, 1, 2);

        mSummaryLabel = new QTextEdit(QgsInstallGridShiftFileDialogBase);
        mSummaryLabel->setObjectName(QString::fromUtf8("mSummaryLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSummaryLabel->sizePolicy().hasHeightForWidth());
        mSummaryLabel->setSizePolicy(sizePolicy);
        mSummaryLabel->setFocusPolicy(Qt::NoFocus);
        mSummaryLabel->setAcceptDrops(false);
        mSummaryLabel->setFrameShadow(QFrame::Plain);
        mSummaryLabel->setLineWidth(2);
        mSummaryLabel->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mSummaryLabel->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mSummaryLabel->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        mSummaryLabel->setReadOnly(true);

        gridLayout->addWidget(mSummaryLabel, 0, 0, 1, 2);

        groupBox = new QGroupBox(QgsInstallGridShiftFileDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mDownloadLabel = new QLabel(groupBox);
        mDownloadLabel->setObjectName(QString::fromUtf8("mDownloadLabel"));
        mDownloadLabel->setWordWrap(true);
        mDownloadLabel->setOpenExternalLinks(true);
        mDownloadLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(mDownloadLabel, 0, 0, 1, 2);

        mInstallButton = new QPushButton(groupBox);
        mInstallButton->setObjectName(QString::fromUtf8("mInstallButton"));

        gridLayout_2->addWidget(mInstallButton, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 2);

        gridLayout->setRowStretch(0, 1);

        retranslateUi(QgsInstallGridShiftFileDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsInstallGridShiftFileDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsInstallGridShiftFileDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsInstallGridShiftFileDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsInstallGridShiftFileDialogBase)
    {
        QgsInstallGridShiftFileDialogBase->setWindowTitle(QString());
        mSummaryLabel->setHtml(QCoreApplication::translate("QgsInstallGridShiftFileDialogBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsInstallGridShiftFileDialogBase", "Install Grid Shift File", nullptr));
        mDownloadLabel->setText(QCoreApplication::translate("QgsInstallGridShiftFileDialogBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p></body></html>", nullptr));
        mInstallButton->setText(QCoreApplication::translate("QgsInstallGridShiftFileDialogBase", "Install from Folder\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsInstallGridShiftFileDialogBase: public Ui_QgsInstallGridShiftFileDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSINSTALLGRIDSHIFTDIALOG_H
