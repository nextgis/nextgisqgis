/********************************************************************************
** Form generated from reading UI file 'qgslayoutlegendlayersdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTLEGENDLAYERSDIALOGBASE_H
#define UI_QGSLAYOUTLEGENDLAYERSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutLegendLayersDialogBase
{
public:
    QGridLayout *gridLayout;
    QListView *listMapLayers;
    QDialogButtonBox *buttonBox;
    QgsFilterLineEdit *mFilterLineEdit;
    QCheckBox *mCheckBoxVisibleLayers;

    void setupUi(QDialog *QgsLayoutLegendLayersDialogBase)
    {
        if (QgsLayoutLegendLayersDialogBase->objectName().isEmpty())
            QgsLayoutLegendLayersDialogBase->setObjectName(QString::fromUtf8("QgsLayoutLegendLayersDialogBase"));
        QgsLayoutLegendLayersDialogBase->resize(252, 194);
        gridLayout = new QGridLayout(QgsLayoutLegendLayersDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listMapLayers = new QListView(QgsLayoutLegendLayersDialogBase);
        listMapLayers->setObjectName(QString::fromUtf8("listMapLayers"));
        listMapLayers->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(listMapLayers, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLayoutLegendLayersDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        mFilterLineEdit = new QgsFilterLineEdit(QgsLayoutLegendLayersDialogBase);
        mFilterLineEdit->setObjectName(QString::fromUtf8("mFilterLineEdit"));

        gridLayout->addWidget(mFilterLineEdit, 0, 0, 1, 1);

        mCheckBoxVisibleLayers = new QCheckBox(QgsLayoutLegendLayersDialogBase);
        mCheckBoxVisibleLayers->setObjectName(QString::fromUtf8("mCheckBoxVisibleLayers"));

        gridLayout->addWidget(mCheckBoxVisibleLayers, 2, 0, 1, 1);

        QWidget::setTabOrder(mFilterLineEdit, listMapLayers);

        retranslateUi(QgsLayoutLegendLayersDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLayoutLegendLayersDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLayoutLegendLayersDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLayoutLegendLayersDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutLegendLayersDialogBase)
    {
        QgsLayoutLegendLayersDialogBase->setWindowTitle(QCoreApplication::translate("QgsLayoutLegendLayersDialogBase", "Add Layer to Legend", nullptr));
        mFilterLineEdit->setPlaceholderText(QCoreApplication::translate("QgsLayoutLegendLayersDialogBase", "Search", nullptr));
#if QT_CONFIG(tooltip)
        mCheckBoxVisibleLayers->setToolTip(QCoreApplication::translate("QgsLayoutLegendLayersDialogBase", "If checked, only layers visible within the map will be listed", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxVisibleLayers->setText(QCoreApplication::translate("QgsLayoutLegendLayersDialogBase", "Show visible layers only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutLegendLayersDialogBase: public Ui_QgsLayoutLegendLayersDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTLEGENDLAYERSDIALOGBASE_H
