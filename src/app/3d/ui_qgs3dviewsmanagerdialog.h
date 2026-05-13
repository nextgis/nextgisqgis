/********************************************************************************
** Form generated from reading UI file 'qgs3dviewsmanagerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGS3DVIEWSMANAGERDIALOG_H
#define UI_QGS3DVIEWSMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Qgs3DViewsManagerDialog
{
public:
    QGridLayout *gridLayout;
    QToolButton *mRemoveButton;
    QListView *m3DViewsListView;
    QToolButton *mDuplicateButton;
    QToolButton *mShowButton;
    QToolButton *mRenameButton;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *Qgs3DViewsManagerDialog)
    {
        if (Qgs3DViewsManagerDialog->objectName().isEmpty())
            Qgs3DViewsManagerDialog->setObjectName(QString::fromUtf8("Qgs3DViewsManagerDialog"));
        Qgs3DViewsManagerDialog->resize(566, 381);
        gridLayout = new QGridLayout(Qgs3DViewsManagerDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mRemoveButton = new QToolButton(Qgs3DViewsManagerDialog);
        mRemoveButton->setObjectName(QString::fromUtf8("mRemoveButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRemoveButton->sizePolicy().hasHeightForWidth());
        mRemoveButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mRemoveButton, 1, 2, 1, 1);

        m3DViewsListView = new QListView(Qgs3DViewsManagerDialog);
        m3DViewsListView->setObjectName(QString::fromUtf8("m3DViewsListView"));
        m3DViewsListView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        m3DViewsListView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(m3DViewsListView, 0, 0, 1, 4);

        mDuplicateButton = new QToolButton(Qgs3DViewsManagerDialog);
        mDuplicateButton->setObjectName(QString::fromUtf8("mDuplicateButton"));
        sizePolicy.setHeightForWidth(mDuplicateButton->sizePolicy().hasHeightForWidth());
        mDuplicateButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mDuplicateButton, 1, 1, 1, 1);

        mShowButton = new QToolButton(Qgs3DViewsManagerDialog);
        mShowButton->setObjectName(QString::fromUtf8("mShowButton"));
        sizePolicy.setHeightForWidth(mShowButton->sizePolicy().hasHeightForWidth());
        mShowButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mShowButton, 1, 0, 1, 1);

        mRenameButton = new QToolButton(Qgs3DViewsManagerDialog);
        mRenameButton->setObjectName(QString::fromUtf8("mRenameButton"));
        sizePolicy.setHeightForWidth(mRenameButton->sizePolicy().hasHeightForWidth());
        mRenameButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mRenameButton, 1, 3, 1, 1);

        mButtonBox = new QDialogButtonBox(Qgs3DViewsManagerDialog);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(mButtonBox, 2, 0, 1, 4);


        retranslateUi(Qgs3DViewsManagerDialog);

        QMetaObject::connectSlotsByName(Qgs3DViewsManagerDialog);
    } // setupUi

    void retranslateUi(QDialog *Qgs3DViewsManagerDialog)
    {
        Qgs3DViewsManagerDialog->setWindowTitle(QCoreApplication::translate("Qgs3DViewsManagerDialog", "3D Map Views Manager", nullptr));
        mRemoveButton->setText(QCoreApplication::translate("Qgs3DViewsManagerDialog", "&Remove\342\200\246", nullptr));
        mDuplicateButton->setText(QCoreApplication::translate("Qgs3DViewsManagerDialog", "&Duplicate\342\200\246", nullptr));
        mShowButton->setText(QCoreApplication::translate("Qgs3DViewsManagerDialog", "&Show", nullptr));
        mRenameButton->setText(QCoreApplication::translate("Qgs3DViewsManagerDialog", "&Rename\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qgs3DViewsManagerDialog: public Ui_Qgs3DViewsManagerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGS3DVIEWSMANAGERDIALOG_H
