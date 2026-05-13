/********************************************************************************
** Form generated from reading UI file 'qgslayoutmanagerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMANAGERBASE_H
#define UI_QGSLAYOUTMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutManagerBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QToolButton *mRemoveButton;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListView *mLayoutListView;
    QToolButton *mShowButton;
    QToolButton *mRenameButton;
    QToolButton *mDuplicateButton;
    QgsCollapsibleGroupBox *mTemplateGrpBox;
    QGridLayout *gridLayout;
    QPushButton *mAddButton;
    QgsFileWidget *mTemplateFileWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *mTemplatesUserDirBtn;
    QPushButton *mTemplatesDefaultDirBtn;
    QSpacerItem *horizontalSpacer;
    QComboBox *mTemplate;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsLayoutManagerBase)
    {
        if (QgsLayoutManagerBase->objectName().isEmpty())
            QgsLayoutManagerBase->setObjectName(QString::fromUtf8("QgsLayoutManagerBase"));
        QgsLayoutManagerBase->resize(425, 300);
        QgsLayoutManagerBase->setMinimumSize(QSize(425, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionLayoutManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QgsLayoutManagerBase->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QgsLayoutManagerBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mRemoveButton = new QToolButton(QgsLayoutManagerBase);
        mRemoveButton->setObjectName(QString::fromUtf8("mRemoveButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRemoveButton->sizePolicy().hasHeightForWidth());
        mRemoveButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mRemoveButton, 1, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mSearchLineEdit = new QgsFilterLineEdit(QgsLayoutManagerBase);
        mSearchLineEdit->setObjectName(QString::fromUtf8("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mLayoutListView = new QListView(QgsLayoutManagerBase);
        mLayoutListView->setObjectName(QString::fromUtf8("mLayoutListView"));
        mLayoutListView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mLayoutListView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(mLayoutListView);

        verticalLayout_2->setStretch(1, 1);

        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 4);

        mShowButton = new QToolButton(QgsLayoutManagerBase);
        mShowButton->setObjectName(QString::fromUtf8("mShowButton"));
        sizePolicy.setHeightForWidth(mShowButton->sizePolicy().hasHeightForWidth());
        mShowButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mShowButton, 1, 0, 1, 1);

        mRenameButton = new QToolButton(QgsLayoutManagerBase);
        mRenameButton->setObjectName(QString::fromUtf8("mRenameButton"));
        sizePolicy.setHeightForWidth(mRenameButton->sizePolicy().hasHeightForWidth());
        mRenameButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mRenameButton, 1, 3, 1, 1);

        mDuplicateButton = new QToolButton(QgsLayoutManagerBase);
        mDuplicateButton->setObjectName(QString::fromUtf8("mDuplicateButton"));
        sizePolicy.setHeightForWidth(mDuplicateButton->sizePolicy().hasHeightForWidth());
        mDuplicateButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mDuplicateButton, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        mTemplateGrpBox = new QgsCollapsibleGroupBox(QgsLayoutManagerBase);
        mTemplateGrpBox->setObjectName(QString::fromUtf8("mTemplateGrpBox"));
        mTemplateGrpBox->setMinimumSize(QSize(0, 0));
        mTemplateGrpBox->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(mTemplateGrpBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mAddButton = new QPushButton(mTemplateGrpBox);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAddButton->sizePolicy().hasHeightForWidth());
        mAddButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mAddButton, 0, 2, 1, 1);

        mTemplateFileWidget = new QgsFileWidget(mTemplateGrpBox);
        mTemplateFileWidget->setObjectName(QString::fromUtf8("mTemplateFileWidget"));
        mTemplateFileWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mTemplateFileWidget, 1, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(mTemplateGrpBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        mTemplatesUserDirBtn = new QPushButton(mTemplateGrpBox);
        mTemplatesUserDirBtn->setObjectName(QString::fromUtf8("mTemplatesUserDirBtn"));
        sizePolicy1.setHeightForWidth(mTemplatesUserDirBtn->sizePolicy().hasHeightForWidth());
        mTemplatesUserDirBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mTemplatesUserDirBtn);

        mTemplatesDefaultDirBtn = new QPushButton(mTemplateGrpBox);
        mTemplatesDefaultDirBtn->setObjectName(QString::fromUtf8("mTemplatesDefaultDirBtn"));
        sizePolicy1.setHeightForWidth(mTemplatesDefaultDirBtn->sizePolicy().hasHeightForWidth());
        mTemplatesDefaultDirBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mTemplatesDefaultDirBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 3);

        mTemplate = new QComboBox(mTemplateGrpBox);
        mTemplate->setObjectName(QString::fromUtf8("mTemplate"));

        gridLayout->addWidget(mTemplate, 0, 0, 1, 2);


        verticalLayout->addWidget(mTemplateGrpBox);

        mButtonBox = new QDialogButtonBox(QgsLayoutManagerBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(mButtonBox);

        QWidget::setTabOrder(mSearchLineEdit, mLayoutListView);
        QWidget::setTabOrder(mLayoutListView, mShowButton);
        QWidget::setTabOrder(mShowButton, mDuplicateButton);
        QWidget::setTabOrder(mDuplicateButton, mRemoveButton);
        QWidget::setTabOrder(mRemoveButton, mRenameButton);
        QWidget::setTabOrder(mRenameButton, mTemplateGrpBox);
        QWidget::setTabOrder(mTemplateGrpBox, mTemplate);
        QWidget::setTabOrder(mTemplate, mAddButton);
        QWidget::setTabOrder(mAddButton, mTemplateFileWidget);
        QWidget::setTabOrder(mTemplateFileWidget, mTemplatesUserDirBtn);
        QWidget::setTabOrder(mTemplatesUserDirBtn, mTemplatesDefaultDirBtn);

        retranslateUi(QgsLayoutManagerBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsLayoutManagerBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsLayoutManagerBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLayoutManagerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutManagerBase)
    {
        QgsLayoutManagerBase->setWindowTitle(QCoreApplication::translate("QgsLayoutManagerBase", "Layout Manager", nullptr));
        mRemoveButton->setText(QCoreApplication::translate("QgsLayoutManagerBase", "&Remove\342\200\246", nullptr));
        mSearchLineEdit->setPlaceholderText(QCoreApplication::translate("QgsLayoutManagerBase", "Search\342\200\246", nullptr));
        mShowButton->setText(QCoreApplication::translate("QgsLayoutManagerBase", "&Show", nullptr));
        mRenameButton->setText(QCoreApplication::translate("QgsLayoutManagerBase", "Re&name\342\200\246", nullptr));
        mDuplicateButton->setText(QCoreApplication::translate("QgsLayoutManagerBase", "&Duplicate\342\200\246", nullptr));
        mTemplateGrpBox->setTitle(QCoreApplication::translate("QgsLayoutManagerBase", "New from Template", nullptr));
        mAddButton->setText(QCoreApplication::translate("QgsLayoutManagerBase", "Create\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutManagerBase", "Open template directory", nullptr));
        mTemplatesUserDirBtn->setText(QCoreApplication::translate("QgsLayoutManagerBase", "User", nullptr));
        mTemplatesDefaultDirBtn->setText(QCoreApplication::translate("QgsLayoutManagerBase", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutManagerBase: public Ui_QgsLayoutManagerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMANAGERBASE_H
