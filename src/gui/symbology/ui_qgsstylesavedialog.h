/********************************************************************************
** Form generated from reading UI file 'qgsstylesavedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLESAVEDIALOG_H
#define UI_QGSSTYLESAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsStyleSaveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *mLabelSaveAs;
    QCheckBox *mFavorite;
    QLabel *label_1;
    QLabel *label_101;
    QComboBox *mComboSaveAs;
    QLabel *label_10;
    QComboBox *mTags;
    QLineEdit *mName;
    QComboBox *mComboBoxDestination;
    QLabel *mLabelDestination;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStyleSaveDialog)
    {
        if (QgsStyleSaveDialog->objectName().isEmpty())
            QgsStyleSaveDialog->setObjectName(QString::fromUtf8("QgsStyleSaveDialog"));
        QgsStyleSaveDialog->resize(533, 241);
        verticalLayout = new QVBoxLayout(QgsStyleSaveDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLabelSaveAs = new QLabel(QgsStyleSaveDialog);
        mLabelSaveAs->setObjectName(QString::fromUtf8("mLabelSaveAs"));

        gridLayout->addWidget(mLabelSaveAs, 1, 0, 1, 1);

        mFavorite = new QCheckBox(QgsStyleSaveDialog);
        mFavorite->setObjectName(QString::fromUtf8("mFavorite"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFavorite->sizePolicy().hasHeightForWidth());
        mFavorite->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mFavorite, 5, 0, 1, 2);

        label_1 = new QLabel(QgsStyleSaveDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        gridLayout->addWidget(label_1, 2, 0, 1, 1);

        label_101 = new QLabel(QgsStyleSaveDialog);
        label_101->setObjectName(QString::fromUtf8("label_101"));

        gridLayout->addWidget(label_101, 3, 0, 1, 1);

        mComboSaveAs = new QComboBox(QgsStyleSaveDialog);
        mComboSaveAs->setObjectName(QString::fromUtf8("mComboSaveAs"));

        gridLayout->addWidget(mComboSaveAs, 1, 1, 1, 1);

        label_10 = new QLabel(QgsStyleSaveDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 1, 1, 1);

        mTags = new QComboBox(QgsStyleSaveDialog);
        mTags->setObjectName(QString::fromUtf8("mTags"));
        mTags->setEditable(true);

        gridLayout->addWidget(mTags, 3, 1, 1, 1);

        mName = new QLineEdit(QgsStyleSaveDialog);
        mName->setObjectName(QString::fromUtf8("mName"));

        gridLayout->addWidget(mName, 2, 1, 1, 1);

        mComboBoxDestination = new QComboBox(QgsStyleSaveDialog);
        mComboBoxDestination->setObjectName(QString::fromUtf8("mComboBoxDestination"));

        gridLayout->addWidget(mComboBoxDestination, 0, 1, 1, 1);

        mLabelDestination = new QLabel(QgsStyleSaveDialog);
        mLabelDestination->setObjectName(QString::fromUtf8("mLabelDestination"));

        gridLayout->addWidget(mLabelDestination, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsStyleSaveDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mComboBoxDestination, mComboSaveAs);
        QWidget::setTabOrder(mComboSaveAs, mName);
        QWidget::setTabOrder(mName, mTags);
        QWidget::setTabOrder(mTags, mFavorite);

        retranslateUi(QgsStyleSaveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsStyleSaveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStyleSaveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsStyleSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsStyleSaveDialog)
    {
        QgsStyleSaveDialog->setWindowTitle(QCoreApplication::translate("QgsStyleSaveDialog", "Save New Style", nullptr));
        mLabelSaveAs->setText(QCoreApplication::translate("QgsStyleSaveDialog", "Save as", nullptr));
        mFavorite->setText(QCoreApplication::translate("QgsStyleSaveDialog", "Add to favorites", nullptr));
        label_1->setText(QCoreApplication::translate("QgsStyleSaveDialog", "Name", nullptr));
        label_101->setText(QCoreApplication::translate("QgsStyleSaveDialog", "Tag(s)", nullptr));
        label_10->setText(QCoreApplication::translate("QgsStyleSaveDialog", "Tip: separate multiple tags with commas", nullptr));
        mLabelDestination->setText(QCoreApplication::translate("QgsStyleSaveDialog", "Destination", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsStyleSaveDialog: public Ui_QgsStyleSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLESAVEDIALOG_H
