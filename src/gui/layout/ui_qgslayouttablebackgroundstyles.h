/********************************************************************************
** Form generated from reading UI file 'qgslayouttablebackgroundstyles.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTTABLEBACKGROUNDSTYLES_H
#define UI_QGSLAYOUTTABLEBACKGROUNDSTYLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutTableBackgroundDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mFirstRowCheckBox;
    QCheckBox *mHeaderRowCheckBox;
    QgsColorButton *mLastRowColorButton;
    QgsColorButton *mEvenColumnsColorButton;
    QCheckBox *mEvenColumnsCheckBox;
    QCheckBox *mFirstColumnCheckBox;
    QCheckBox *mEvenRowsCheckBox;
    QgsColorButton *mOddColumnsColorButton;
    QgsColorButton *mHeaderRowColorButton;
    QCheckBox *mOddColumnsCheckBox;
    QCheckBox *mLastRowCheckBox;
    QgsColorButton *mFirstColumnColorButton;
    QCheckBox *mLastColumnCheckBox;
    QLabel *label_2;
    QgsColorButton *mDefaultColorButton;
    QDialogButtonBox *buttonBox;
    QgsColorButton *mFirstRowColorButton;
    QgsColorButton *mOddRowsColorButton;
    QCheckBox *mOddRowsCheckBox;
    QgsColorButton *mEvenRowsColorButton;
    QgsColorButton *mLastColumnColorButton;
    QLabel *label;

    void setupUi(QDialog *QgsLayoutTableBackgroundDialog)
    {
        if (QgsLayoutTableBackgroundDialog->objectName().isEmpty())
            QgsLayoutTableBackgroundDialog->setObjectName(QString::fromUtf8("QgsLayoutTableBackgroundDialog"));
        QgsLayoutTableBackgroundDialog->resize(481, 904);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutTableBackgroundDialog->sizePolicy().hasHeightForWidth());
        QgsLayoutTableBackgroundDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QgsLayoutTableBackgroundDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFirstRowCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mFirstRowCheckBox->setObjectName(QString::fromUtf8("mFirstRowCheckBox"));

        gridLayout->addWidget(mFirstRowCheckBox, 14, 0, 1, 2);

        mHeaderRowCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mHeaderRowCheckBox->setObjectName(QString::fromUtf8("mHeaderRowCheckBox"));

        gridLayout->addWidget(mHeaderRowCheckBox, 13, 0, 1, 2);

        mLastRowColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mLastRowColorButton->setObjectName(QString::fromUtf8("mLastRowColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLastRowColorButton->sizePolicy().hasHeightForWidth());
        mLastRowColorButton->setSizePolicy(sizePolicy1);
        mLastRowColorButton->setMinimumSize(QSize(120, 0));
        mLastRowColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mLastRowColorButton, 15, 2, 1, 1);

        mEvenColumnsColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mEvenColumnsColorButton->setObjectName(QString::fromUtf8("mEvenColumnsColorButton"));
        sizePolicy1.setHeightForWidth(mEvenColumnsColorButton->sizePolicy().hasHeightForWidth());
        mEvenColumnsColorButton->setSizePolicy(sizePolicy1);
        mEvenColumnsColorButton->setMinimumSize(QSize(120, 0));
        mEvenColumnsColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mEvenColumnsColorButton, 7, 2, 1, 1);

        mEvenColumnsCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mEvenColumnsCheckBox->setObjectName(QString::fromUtf8("mEvenColumnsCheckBox"));

        gridLayout->addWidget(mEvenColumnsCheckBox, 7, 0, 1, 2);

        mFirstColumnCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mFirstColumnCheckBox->setObjectName(QString::fromUtf8("mFirstColumnCheckBox"));

        gridLayout->addWidget(mFirstColumnCheckBox, 11, 0, 1, 2);

        mEvenRowsCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mEvenRowsCheckBox->setObjectName(QString::fromUtf8("mEvenRowsCheckBox"));

        gridLayout->addWidget(mEvenRowsCheckBox, 10, 0, 1, 2);

        mOddColumnsColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mOddColumnsColorButton->setObjectName(QString::fromUtf8("mOddColumnsColorButton"));
        sizePolicy1.setHeightForWidth(mOddColumnsColorButton->sizePolicy().hasHeightForWidth());
        mOddColumnsColorButton->setSizePolicy(sizePolicy1);
        mOddColumnsColorButton->setMinimumSize(QSize(120, 0));
        mOddColumnsColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mOddColumnsColorButton, 5, 2, 1, 1);

        mHeaderRowColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mHeaderRowColorButton->setObjectName(QString::fromUtf8("mHeaderRowColorButton"));
        sizePolicy1.setHeightForWidth(mHeaderRowColorButton->sizePolicy().hasHeightForWidth());
        mHeaderRowColorButton->setSizePolicy(sizePolicy1);
        mHeaderRowColorButton->setMinimumSize(QSize(120, 0));
        mHeaderRowColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mHeaderRowColorButton, 13, 2, 1, 1);

        mOddColumnsCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mOddColumnsCheckBox->setObjectName(QString::fromUtf8("mOddColumnsCheckBox"));

        gridLayout->addWidget(mOddColumnsCheckBox, 5, 0, 1, 2);

        mLastRowCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mLastRowCheckBox->setObjectName(QString::fromUtf8("mLastRowCheckBox"));

        gridLayout->addWidget(mLastRowCheckBox, 15, 0, 1, 2);

        mFirstColumnColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mFirstColumnColorButton->setObjectName(QString::fromUtf8("mFirstColumnColorButton"));
        sizePolicy1.setHeightForWidth(mFirstColumnColorButton->sizePolicy().hasHeightForWidth());
        mFirstColumnColorButton->setSizePolicy(sizePolicy1);
        mFirstColumnColorButton->setMinimumSize(QSize(120, 0));
        mFirstColumnColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mFirstColumnColorButton, 11, 2, 1, 1);

        mLastColumnCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mLastColumnCheckBox->setObjectName(QString::fromUtf8("mLastColumnCheckBox"));

        gridLayout->addWidget(mLastColumnCheckBox, 12, 0, 1, 2);

        label_2 = new QLabel(QgsLayoutTableBackgroundDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        mDefaultColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mDefaultColorButton->setObjectName(QString::fromUtf8("mDefaultColorButton"));
        sizePolicy1.setHeightForWidth(mDefaultColorButton->sizePolicy().hasHeightForWidth());
        mDefaultColorButton->setSizePolicy(sizePolicy1);
        mDefaultColorButton->setMinimumSize(QSize(120, 0));
        mDefaultColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mDefaultColorButton, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLayoutTableBackgroundDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 16, 0, 1, 3);

        mFirstRowColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mFirstRowColorButton->setObjectName(QString::fromUtf8("mFirstRowColorButton"));
        sizePolicy1.setHeightForWidth(mFirstRowColorButton->sizePolicy().hasHeightForWidth());
        mFirstRowColorButton->setSizePolicy(sizePolicy1);
        mFirstRowColorButton->setMinimumSize(QSize(120, 0));
        mFirstRowColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mFirstRowColorButton, 14, 2, 1, 1);

        mOddRowsColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mOddRowsColorButton->setObjectName(QString::fromUtf8("mOddRowsColorButton"));
        sizePolicy1.setHeightForWidth(mOddRowsColorButton->sizePolicy().hasHeightForWidth());
        mOddRowsColorButton->setSizePolicy(sizePolicy1);
        mOddRowsColorButton->setMinimumSize(QSize(120, 0));
        mOddRowsColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mOddRowsColorButton, 9, 2, 1, 1);

        mOddRowsCheckBox = new QCheckBox(QgsLayoutTableBackgroundDialog);
        mOddRowsCheckBox->setObjectName(QString::fromUtf8("mOddRowsCheckBox"));

        gridLayout->addWidget(mOddRowsCheckBox, 9, 0, 1, 2);

        mEvenRowsColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mEvenRowsColorButton->setObjectName(QString::fromUtf8("mEvenRowsColorButton"));
        sizePolicy1.setHeightForWidth(mEvenRowsColorButton->sizePolicy().hasHeightForWidth());
        mEvenRowsColorButton->setSizePolicy(sizePolicy1);
        mEvenRowsColorButton->setMinimumSize(QSize(120, 0));
        mEvenRowsColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mEvenRowsColorButton, 10, 2, 1, 1);

        mLastColumnColorButton = new QgsColorButton(QgsLayoutTableBackgroundDialog);
        mLastColumnColorButton->setObjectName(QString::fromUtf8("mLastColumnColorButton"));
        sizePolicy1.setHeightForWidth(mLastColumnColorButton->sizePolicy().hasHeightForWidth());
        mLastColumnColorButton->setSizePolicy(sizePolicy1);
        mLastColumnColorButton->setMinimumSize(QSize(120, 0));
        mLastColumnColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mLastColumnColorButton, 12, 2, 1, 1);

        label = new QLabel(QgsLayoutTableBackgroundDialog);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 2, 0, 1, 3);

        QWidget::setTabOrder(mDefaultColorButton, mOddColumnsCheckBox);
        QWidget::setTabOrder(mOddColumnsCheckBox, mOddColumnsColorButton);
        QWidget::setTabOrder(mOddColumnsColorButton, mEvenColumnsCheckBox);
        QWidget::setTabOrder(mEvenColumnsCheckBox, mEvenColumnsColorButton);
        QWidget::setTabOrder(mEvenColumnsColorButton, mOddRowsCheckBox);
        QWidget::setTabOrder(mOddRowsCheckBox, mOddRowsColorButton);
        QWidget::setTabOrder(mOddRowsColorButton, mEvenRowsCheckBox);
        QWidget::setTabOrder(mEvenRowsCheckBox, mEvenRowsColorButton);
        QWidget::setTabOrder(mEvenRowsColorButton, mFirstColumnCheckBox);
        QWidget::setTabOrder(mFirstColumnCheckBox, mFirstColumnColorButton);
        QWidget::setTabOrder(mFirstColumnColorButton, mLastColumnCheckBox);
        QWidget::setTabOrder(mLastColumnCheckBox, mLastColumnColorButton);
        QWidget::setTabOrder(mLastColumnColorButton, mHeaderRowCheckBox);
        QWidget::setTabOrder(mHeaderRowCheckBox, mHeaderRowColorButton);
        QWidget::setTabOrder(mHeaderRowColorButton, mFirstRowCheckBox);
        QWidget::setTabOrder(mFirstRowCheckBox, mFirstRowColorButton);
        QWidget::setTabOrder(mFirstRowColorButton, mLastRowCheckBox);
        QWidget::setTabOrder(mLastRowCheckBox, mLastRowColorButton);

        retranslateUi(QgsLayoutTableBackgroundDialog);
        QObject::connect(mOddColumnsCheckBox, SIGNAL(toggled(bool)), mOddColumnsColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mEvenColumnsCheckBox, SIGNAL(toggled(bool)), mEvenColumnsColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mOddRowsCheckBox, SIGNAL(toggled(bool)), mOddRowsColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mEvenRowsCheckBox, SIGNAL(toggled(bool)), mEvenRowsColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mFirstColumnCheckBox, SIGNAL(toggled(bool)), mFirstColumnColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mLastColumnCheckBox, SIGNAL(toggled(bool)), mLastColumnColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mHeaderRowCheckBox, SIGNAL(toggled(bool)), mHeaderRowColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mFirstRowCheckBox, SIGNAL(toggled(bool)), mFirstRowColorButton, SLOT(setEnabled(bool)));
        QObject::connect(mLastRowCheckBox, SIGNAL(toggled(bool)), mLastRowColorButton, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(QgsLayoutTableBackgroundDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutTableBackgroundDialog)
    {
        QgsLayoutTableBackgroundDialog->setWindowTitle(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "Table Background Colors", nullptr));
        mFirstRowCheckBox->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "First row", nullptr));
        mHeaderRowCheckBox->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "Header row", nullptr));
        mLastRowColorButton->setText(QString());
        mEvenColumnsColorButton->setText(QString());
        mEvenColumnsCheckBox->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "Even columns", nullptr));
        mFirstColumnCheckBox->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "First column", nullptr));
        mEvenRowsCheckBox->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "Even rows", nullptr));
        mOddColumnsColorButton->setText(QString());
        mHeaderRowColorButton->setText(QString());
        mOddColumnsCheckBox->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "Odd columns", nullptr));
        mLastRowCheckBox->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "Last row", nullptr));
        mFirstColumnColorButton->setText(QString());
        mLastColumnCheckBox->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "Last column", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "Default cell background", nullptr));
        mDefaultColorButton->setText(QString());
        mFirstRowColorButton->setText(QString());
        mOddRowsColorButton->setText(QString());
        mOddRowsCheckBox->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "Odd rows", nullptr));
        mEvenRowsColorButton->setText(QString());
        mLastColumnColorButton->setText(QString());
        label->setText(QCoreApplication::translate("QgsLayoutTableBackgroundDialog", "<html><head/><body><p>Check options to enable shading for matching cells. Options lower in this list will take precedence over higher options. For example, if both &quot;<span style=\" font-style:italic;\">First row</span>&quot; and &quot;<span style=\" font-style:italic;\">Odd rows</span>&quot; are checked, the cells in the first row will be shaded using the color specified for &quot;<span style=\" font-style:italic;\">First row</span>&quot;.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutTableBackgroundDialog: public Ui_QgsLayoutTableBackgroundDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTTABLEBACKGROUNDSTYLES_H
