/********************************************************************************
** Form generated from reading UI file 'qgsexpressionselectiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONSELECTIONDIALOGBASE_H
#define UI_QGSEXPRESSIONSELECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include "qgsexpressionbuilderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionSelectionDialogBase
{
public:
    QAction *mActionSelect;
    QAction *mActionAddToSelection;
    QAction *mActionRemoveFromSelection;
    QAction *mActionSelectIntersect;
    QGridLayout *gridLayout;
    QPushButton *mPbnClose;
    QToolButton *mButtonZoomToFeatures;
    QSpacerItem *horizontalSpacer;
    QToolButton *mButtonSelect;
    QDialogButtonBox *buttonBox;
    QgsExpressionBuilderWidget *mExpressionBuilder;

    void setupUi(QDialog *QgsExpressionSelectionDialogBase)
    {
        if (QgsExpressionSelectionDialogBase->objectName().isEmpty())
            QgsExpressionSelectionDialogBase->setObjectName(QString::fromUtf8("QgsExpressionSelectionDialogBase"));
        QgsExpressionSelectionDialogBase->resize(863, 547);
        mActionSelect = new QAction(QgsExpressionSelectionDialogBase);
        mActionSelect->setObjectName(QString::fromUtf8("mActionSelect"));
        mActionAddToSelection = new QAction(QgsExpressionSelectionDialogBase);
        mActionAddToSelection->setObjectName(QString::fromUtf8("mActionAddToSelection"));
        mActionRemoveFromSelection = new QAction(QgsExpressionSelectionDialogBase);
        mActionRemoveFromSelection->setObjectName(QString::fromUtf8("mActionRemoveFromSelection"));
        mActionSelectIntersect = new QAction(QgsExpressionSelectionDialogBase);
        mActionSelectIntersect->setObjectName(QString::fromUtf8("mActionSelectIntersect"));
        gridLayout = new QGridLayout(QgsExpressionSelectionDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        mPbnClose = new QPushButton(QgsExpressionSelectionDialogBase);
        mPbnClose->setObjectName(QString::fromUtf8("mPbnClose"));

        gridLayout->addWidget(mPbnClose, 1, 5, 1, 1);

        mButtonZoomToFeatures = new QToolButton(QgsExpressionSelectionDialogBase);
        mButtonZoomToFeatures->setObjectName(QString::fromUtf8("mButtonZoomToFeatures"));

        gridLayout->addWidget(mButtonZoomToFeatures, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        mButtonSelect = new QToolButton(QgsExpressionSelectionDialogBase);
        mButtonSelect->setObjectName(QString::fromUtf8("mButtonSelect"));
        mButtonSelect->setPopupMode(QToolButton::MenuButtonPopup);
        mButtonSelect->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(mButtonSelect, 1, 3, 1, 1);

        buttonBox = new QDialogButtonBox(QgsExpressionSelectionDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        mExpressionBuilder = new QgsExpressionBuilderWidget(QgsExpressionSelectionDialogBase);
        mExpressionBuilder->setObjectName(QString::fromUtf8("mExpressionBuilder"));

        gridLayout->addWidget(mExpressionBuilder, 0, 0, 1, 6);

        QWidget::setTabOrder(mButtonZoomToFeatures, mButtonSelect);
        QWidget::setTabOrder(mButtonSelect, mPbnClose);

        retranslateUi(QgsExpressionSelectionDialogBase);

        QMetaObject::connectSlotsByName(QgsExpressionSelectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsExpressionSelectionDialogBase)
    {
        QgsExpressionSelectionDialogBase->setWindowTitle(QCoreApplication::translate("QgsExpressionSelectionDialogBase", "Select by Expression", nullptr));
        mActionSelect->setText(QCoreApplication::translate("QgsExpressionSelectionDialogBase", "Select Features", nullptr));
        mActionAddToSelection->setText(QCoreApplication::translate("QgsExpressionSelectionDialogBase", "Add to Current Selection", nullptr));
        mActionRemoveFromSelection->setText(QCoreApplication::translate("QgsExpressionSelectionDialogBase", "Remove from Current Selection", nullptr));
        mActionSelectIntersect->setText(QCoreApplication::translate("QgsExpressionSelectionDialogBase", "Filter Current Selection", nullptr));
        mPbnClose->setText(QCoreApplication::translate("QgsExpressionSelectionDialogBase", "&Close", nullptr));
        mButtonZoomToFeatures->setText(QCoreApplication::translate("QgsExpressionSelectionDialogBase", "Zoom to Features", nullptr));
        mButtonSelect->setText(QCoreApplication::translate("QgsExpressionSelectionDialogBase", "\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionSelectionDialogBase: public Ui_QgsExpressionSelectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONSELECTIONDIALOGBASE_H
