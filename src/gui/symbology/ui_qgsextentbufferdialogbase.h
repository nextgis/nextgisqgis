/********************************************************************************
** Form generated from reading UI file 'qgsextentbufferdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXTENTBUFFERDIALOGBASE_H
#define UI_QGSEXTENTBUFFERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExtentBufferDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QgsDoubleSpinBox *mExtentBufferSpinBox;
    QgsUnitSelectionWidget *mExtentBufferUnitSelectionWidget;
    QgsPropertyOverrideButton *mExtentBufferDDButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsExtentBufferDialogBase)
    {
        if (QgsExtentBufferDialogBase->objectName().isEmpty())
            QgsExtentBufferDialogBase->setObjectName(QString::fromUtf8("QgsExtentBufferDialogBase"));
        QgsExtentBufferDialogBase->resize(406, 337);
        verticalLayout = new QVBoxLayout(QgsExtentBufferDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsExtentBufferDialogBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(QgsExtentBufferDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        mExtentBufferSpinBox = new QgsDoubleSpinBox(QgsExtentBufferDialogBase);
        mExtentBufferSpinBox->setObjectName(QString::fromUtf8("mExtentBufferSpinBox"));
        mExtentBufferSpinBox->setMinimum(0.000000000000000);
        mExtentBufferSpinBox->setMaximum(999999999.000000000000000);
        mExtentBufferSpinBox->setClearValue(false);
        mExtentBufferSpinBox->setExpressionsEnabled(false);

        horizontalLayout->addWidget(mExtentBufferSpinBox);

        mExtentBufferUnitSelectionWidget = new QgsUnitSelectionWidget(QgsExtentBufferDialogBase);
        mExtentBufferUnitSelectionWidget->setObjectName(QString::fromUtf8("mExtentBufferUnitSelectionWidget"));

        horizontalLayout->addWidget(mExtentBufferUnitSelectionWidget);

        mExtentBufferDDButton = new QgsPropertyOverrideButton(QgsExtentBufferDialogBase);
        mExtentBufferDDButton->setObjectName(QString::fromUtf8("mExtentBufferDDButton"));

        horizontalLayout->addWidget(mExtentBufferDDButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsExtentBufferDialogBase);

        QMetaObject::connectSlotsByName(QgsExtentBufferDialogBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsExtentBufferDialogBase)
    {
        QgsExtentBufferDialogBase->setWindowTitle(QCoreApplication::translate("QgsExtentBufferDialogBase", "Symbol Levels", nullptr));
        label->setText(QCoreApplication::translate("QgsExtentBufferDialogBase", "Define an extent buffer distance. The symbol will be rendered for features which are within the buffered map extent.", nullptr));
        label_2->setText(QCoreApplication::translate("QgsExtentBufferDialogBase", "Distance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsExtentBufferDialogBase: public Ui_QgsExtentBufferDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXTENTBUFFERDIALOGBASE_H
