/********************************************************************************
** Form generated from reading UI file 'qgsrelationmanagerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONMANAGERDIALOGBASE_H
#define UI_QGSRELATIONMANAGERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRelationManagerDialogBase
{
public:
    QAction *mActionAddPolymorphicRelation;
    QAction *mActionEditPolymorphicRelation;
    QVBoxLayout *verticalLayout;
    QTreeWidget *mRelationsTree;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *mBtnAddRelation;
    QPushButton *mBtnDiscoverRelations;
    QPushButton *mBtnRemoveRelation;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QgsRelationManagerDialogBase)
    {
        if (QgsRelationManagerDialogBase->objectName().isEmpty())
            QgsRelationManagerDialogBase->setObjectName(QString::fromUtf8("QgsRelationManagerDialogBase"));
        QgsRelationManagerDialogBase->resize(713, 427);
        QgsRelationManagerDialogBase->setWindowTitle(QString::fromUtf8("Dialog"));
        mActionAddPolymorphicRelation = new QAction(QgsRelationManagerDialogBase);
        mActionAddPolymorphicRelation->setObjectName(QString::fromUtf8("mActionAddPolymorphicRelation"));
        mActionEditPolymorphicRelation = new QAction(QgsRelationManagerDialogBase);
        mActionEditPolymorphicRelation->setObjectName(QString::fromUtf8("mActionEditPolymorphicRelation"));
        mActionEditPolymorphicRelation->setEnabled(false);
        verticalLayout = new QVBoxLayout(QgsRelationManagerDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mRelationsTree = new QTreeWidget(QgsRelationManagerDialogBase);
        mRelationsTree->setObjectName(QString::fromUtf8("mRelationsTree"));
        mRelationsTree->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(mRelationsTree);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mBtnAddRelation = new QToolButton(QgsRelationManagerDialogBase);
        mBtnAddRelation->setObjectName(QString::fromUtf8("mBtnAddRelation"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mBtnAddRelation->sizePolicy().hasHeightForWidth());
        mBtnAddRelation->setSizePolicy(sizePolicy);
        mBtnAddRelation->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnAddRelation->setIcon(icon);
        mBtnAddRelation->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(mBtnAddRelation);

        mBtnDiscoverRelations = new QPushButton(QgsRelationManagerDialogBase);
        mBtnDiscoverRelations->setObjectName(QString::fromUtf8("mBtnDiscoverRelations"));
        mBtnDiscoverRelations->setIcon(icon);

        horizontalLayout->addWidget(mBtnDiscoverRelations);

        mBtnRemoveRelation = new QPushButton(QgsRelationManagerDialogBase);
        mBtnRemoveRelation->setObjectName(QString::fromUtf8("mBtnRemoveRelation"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRemoveRelation->setIcon(icon1);

        horizontalLayout->addWidget(mBtnRemoveRelation);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsRelationManagerDialogBase);

        QMetaObject::connectSlotsByName(QgsRelationManagerDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRelationManagerDialogBase)
    {
        mActionAddPolymorphicRelation->setText(QCoreApplication::translate("QgsRelationManagerDialogBase", "Add Polymorphic Relation", nullptr));
#if QT_CONFIG(tooltip)
        mActionAddPolymorphicRelation->setToolTip(QCoreApplication::translate("QgsRelationManagerDialogBase", "Polymorphic relations are for advanced usage where a set of standard relations have the same referencing layer but the referenced layer is calculated from an expression.", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionEditPolymorphicRelation->setText(QCoreApplication::translate("QgsRelationManagerDialogBase", "Edit Polymorphic Relation", nullptr));
#if QT_CONFIG(tooltip)
        mActionEditPolymorphicRelation->setToolTip(QCoreApplication::translate("QgsRelationManagerDialogBase", "Polymorphic relations are for advanced usage where a set of standard relations have the same referencing layer but the referenced layer is calculated from an expression.", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = mRelationsTree->headerItem();
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("QgsRelationManagerDialogBase", "Strength", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("QgsRelationManagerDialogBase", "Id", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("QgsRelationManagerDialogBase", "Referencing Field(s)", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("QgsRelationManagerDialogBase", "Referencing Layer", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsRelationManagerDialogBase", "Referenced Field(s)", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsRelationManagerDialogBase", "Referenced Layer", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsRelationManagerDialogBase", "Name", nullptr));
        mBtnAddRelation->setText(QCoreApplication::translate("QgsRelationManagerDialogBase", "Add Relation", nullptr));
        mBtnDiscoverRelations->setText(QCoreApplication::translate("QgsRelationManagerDialogBase", "Discover Relations", nullptr));
        mBtnRemoveRelation->setText(QCoreApplication::translate("QgsRelationManagerDialogBase", "Remove Relation", nullptr));
        (void)QgsRelationManagerDialogBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRelationManagerDialogBase: public Ui_QgsRelationManagerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONMANAGERDIALOGBASE_H
