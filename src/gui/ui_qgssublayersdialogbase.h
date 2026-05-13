/********************************************************************************
** Form generated from reading UI file 'qgssublayersdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSUBLAYERSDIALOGBASE_H
#define UI_QGSSUBLAYERSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSublayersDialogBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *layersTable;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *mBtnSelectAll;
    QPushButton *mBtnDeselectAll;
    QCheckBox *mCbxAddToGroup;
    QSpacerItem *horizontalSpacer;
    QLabel *mLblFilePath;

    void setupUi(QDialog *QgsSublayersDialogBase)
    {
        if (QgsSublayersDialogBase->objectName().isEmpty())
            QgsSublayersDialogBase->setObjectName(QString::fromUtf8("QgsSublayersDialogBase"));
        QgsSublayersDialogBase->resize(584, 236);
        gridLayout = new QGridLayout(QgsSublayersDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        layersTable = new QTreeWidget(QgsSublayersDialogBase);
        layersTable->setObjectName(QString::fromUtf8("layersTable"));
        layersTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        layersTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        layersTable->setSortingEnabled(false);
        layersTable->header()->setProperty("showSortIndicator", QVariant(true));

        gridLayout->addWidget(layersTable, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSublayersDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mBtnSelectAll = new QPushButton(QgsSublayersDialogBase);
        mBtnSelectAll->setObjectName(QString::fromUtf8("mBtnSelectAll"));

        horizontalLayout->addWidget(mBtnSelectAll);

        mBtnDeselectAll = new QPushButton(QgsSublayersDialogBase);
        mBtnDeselectAll->setObjectName(QString::fromUtf8("mBtnDeselectAll"));

        horizontalLayout->addWidget(mBtnDeselectAll);

        mCbxAddToGroup = new QCheckBox(QgsSublayersDialogBase);
        mCbxAddToGroup->setObjectName(QString::fromUtf8("mCbxAddToGroup"));

        horizontalLayout->addWidget(mCbxAddToGroup);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        mLblFilePath = new QLabel(QgsSublayersDialogBase);
        mLblFilePath->setObjectName(QString::fromUtf8("mLblFilePath"));
        mLblFilePath->setWordWrap(true);
        mLblFilePath->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(mLblFilePath, 0, 0, 1, 1);


        retranslateUi(QgsSublayersDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSublayersDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSublayersDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSublayersDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSublayersDialogBase)
    {
        QgsSublayersDialogBase->setWindowTitle(QCoreApplication::translate("QgsSublayersDialogBase", "Select Layers to Load", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = layersTable->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsSublayersDialogBase", "1", nullptr));
        mBtnSelectAll->setText(QCoreApplication::translate("QgsSublayersDialogBase", "Select All", nullptr));
        mBtnDeselectAll->setText(QCoreApplication::translate("QgsSublayersDialogBase", "Deselect All", nullptr));
        mCbxAddToGroup->setText(QCoreApplication::translate("QgsSublayersDialogBase", "Add layers to a group", nullptr));
#if QT_CONFIG(tooltip)
        mLblFilePath->setToolTip(QCoreApplication::translate("QgsSublayersDialogBase", "Current file source", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsSublayersDialogBase: public Ui_QgsSublayersDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSUBLAYERSDIALOGBASE_H
