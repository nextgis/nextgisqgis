/********************************************************************************
** Form generated from reading UI file 'qgsmeshselectbyexpressiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHSELECTBYEXPRESSIONDIALOGBASE_H
#define UI_QGSMESHSELECTBYEXPRESSIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgsexpressionbuilderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshSelectByExpressionDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QToolButton *mButtonSelect;
    QPushButton *mButtonClose;
    QgsExpressionBuilderWidget *mExpressionBuilder;
    QToolButton *mButtonZoomToSelected;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QComboBox *mComboBoxElementType;

    void setupUi(QDialog *QgsMeshSelectByExpressionDialogBase)
    {
        if (QgsMeshSelectByExpressionDialogBase->objectName().isEmpty())
            QgsMeshSelectByExpressionDialogBase->setObjectName(QString::fromUtf8("QgsMeshSelectByExpressionDialogBase"));
        QgsMeshSelectByExpressionDialogBase->resize(757, 465);
        QgsMeshSelectByExpressionDialogBase->setWindowTitle(QString::fromUtf8("Dialog"));
        verticalLayout = new QVBoxLayout(QgsMeshSelectByExpressionDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mButtonSelect = new QToolButton(QgsMeshSelectByExpressionDialogBase);
        mButtonSelect->setObjectName(QString::fromUtf8("mButtonSelect"));
        mButtonSelect->setPopupMode(QToolButton::MenuButtonPopup);
        mButtonSelect->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(mButtonSelect, 1, 4, 1, 1);

        mButtonClose = new QPushButton(QgsMeshSelectByExpressionDialogBase);
        mButtonClose->setObjectName(QString::fromUtf8("mButtonClose"));

        gridLayout->addWidget(mButtonClose, 1, 5, 1, 1);

        mExpressionBuilder = new QgsExpressionBuilderWidget(QgsMeshSelectByExpressionDialogBase);
        mExpressionBuilder->setObjectName(QString::fromUtf8("mExpressionBuilder"));

        gridLayout->addWidget(mExpressionBuilder, 0, 0, 1, 6);

        mButtonZoomToSelected = new QToolButton(QgsMeshSelectByExpressionDialogBase);
        mButtonZoomToSelected->setObjectName(QString::fromUtf8("mButtonZoomToSelected"));

        gridLayout->addWidget(mButtonZoomToSelected, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsMeshSelectByExpressionDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        mComboBoxElementType = new QComboBox(QgsMeshSelectByExpressionDialogBase);
        mComboBoxElementType->setObjectName(QString::fromUtf8("mComboBoxElementType"));

        gridLayout->addWidget(mComboBoxElementType, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(QgsMeshSelectByExpressionDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMeshSelectByExpressionDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMeshSelectByExpressionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMeshSelectByExpressionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeshSelectByExpressionDialogBase)
    {
        mButtonSelect->setText(QCoreApplication::translate("QgsMeshSelectByExpressionDialogBase", "...", nullptr));
        mButtonClose->setText(QCoreApplication::translate("QgsMeshSelectByExpressionDialogBase", "Close", nullptr));
        mButtonZoomToSelected->setText(QCoreApplication::translate("QgsMeshSelectByExpressionDialogBase", "Zoom to Selected", nullptr));
        (void)QgsMeshSelectByExpressionDialogBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMeshSelectByExpressionDialogBase: public Ui_QgsMeshSelectByExpressionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHSELECTBYEXPRESSIONDIALOGBASE_H
