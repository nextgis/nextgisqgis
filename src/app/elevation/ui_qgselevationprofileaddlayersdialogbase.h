/********************************************************************************
** Form generated from reading UI file 'qgselevationprofileaddlayersdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSELEVATIONPROFILEADDLAYERSDIALOGBASE_H
#define UI_QGSELEVATIONPROFILEADDLAYERSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsElevationProfileAddLayersDialogBase
{
public:
    QGridLayout *gridLayout;
    QListView *listMapLayers;
    QDialogButtonBox *buttonBox;
    QgsFilterLineEdit *mFilterLineEdit;
    QCheckBox *mCheckBoxVisibleLayers;

    void setupUi(QDialog *QgsElevationProfileAddLayersDialogBase)
    {
        if (QgsElevationProfileAddLayersDialogBase->objectName().isEmpty())
            QgsElevationProfileAddLayersDialogBase->setObjectName(QString::fromUtf8("QgsElevationProfileAddLayersDialogBase"));
        QgsElevationProfileAddLayersDialogBase->resize(270, 205);
        gridLayout = new QGridLayout(QgsElevationProfileAddLayersDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listMapLayers = new QListView(QgsElevationProfileAddLayersDialogBase);
        listMapLayers->setObjectName(QString::fromUtf8("listMapLayers"));
        listMapLayers->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);

        gridLayout->addWidget(listMapLayers, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsElevationProfileAddLayersDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        mFilterLineEdit = new QgsFilterLineEdit(QgsElevationProfileAddLayersDialogBase);
        mFilterLineEdit->setObjectName(QString::fromUtf8("mFilterLineEdit"));

        gridLayout->addWidget(mFilterLineEdit, 0, 0, 1, 1);

        mCheckBoxVisibleLayers = new QCheckBox(QgsElevationProfileAddLayersDialogBase);
        mCheckBoxVisibleLayers->setObjectName(QString::fromUtf8("mCheckBoxVisibleLayers"));

        gridLayout->addWidget(mCheckBoxVisibleLayers, 2, 0, 1, 1);

        QWidget::setTabOrder(mFilterLineEdit, listMapLayers);

        retranslateUi(QgsElevationProfileAddLayersDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsElevationProfileAddLayersDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsElevationProfileAddLayersDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsElevationProfileAddLayersDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsElevationProfileAddLayersDialogBase)
    {
        QgsElevationProfileAddLayersDialogBase->setWindowTitle(QCoreApplication::translate("QgsElevationProfileAddLayersDialogBase", "Add Layers to Elevation Profile", nullptr));
        mFilterLineEdit->setPlaceholderText(QCoreApplication::translate("QgsElevationProfileAddLayersDialogBase", "Search", nullptr));
#if QT_CONFIG(tooltip)
        mCheckBoxVisibleLayers->setToolTip(QCoreApplication::translate("QgsElevationProfileAddLayersDialogBase", "If checked, only layers visible within the map will be listed", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxVisibleLayers->setText(QCoreApplication::translate("QgsElevationProfileAddLayersDialogBase", "Show visible layers only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsElevationProfileAddLayersDialogBase: public Ui_QgsElevationProfileAddLayersDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSELEVATIONPROFILEADDLAYERSDIALOGBASE_H
