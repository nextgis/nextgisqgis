/********************************************************************************
** Form generated from reading UI file 'qgsmeshrenderermeshsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERMESHSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERMESHSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererMeshSettingsWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QgsUnitSelectionWidget *mLineUnitsComboBox;
    QgsDoubleSpinBox *mLineWidthSpinBox;
    QgsColorButton *mColorWidget;
    QLabel *mLineWidthLabel;
    QLabel *label_2;

    void setupUi(QWidget *QgsMeshRendererMeshSettingsWidgetBase)
    {
        if (QgsMeshRendererMeshSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererMeshSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsMeshRendererMeshSettingsWidgetBase"));
        QgsMeshRendererMeshSettingsWidgetBase->resize(327, 67);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsMeshRendererMeshSettingsWidgetBase->sizePolicy().hasHeightForWidth());
        QgsMeshRendererMeshSettingsWidgetBase->setSizePolicy(sizePolicy);
        QgsMeshRendererMeshSettingsWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(QgsMeshRendererMeshSettingsWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mLineUnitsComboBox = new QgsUnitSelectionWidget(QgsMeshRendererMeshSettingsWidgetBase);
        mLineUnitsComboBox->setObjectName(QString::fromUtf8("mLineUnitsComboBox"));

        gridLayout_2->addWidget(mLineUnitsComboBox, 0, 2, 1, 1);

        mLineWidthSpinBox = new QgsDoubleSpinBox(QgsMeshRendererMeshSettingsWidgetBase);
        mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
        sizePolicy.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mLineWidthSpinBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mLineWidthSpinBox, 0, 1, 1, 1);

        mColorWidget = new QgsColorButton(QgsMeshRendererMeshSettingsWidgetBase);
        mColorWidget->setObjectName(QString::fromUtf8("mColorWidget"));
        sizePolicy.setHeightForWidth(mColorWidget->sizePolicy().hasHeightForWidth());
        mColorWidget->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mColorWidget, 1, 1, 1, 1);

        mLineWidthLabel = new QLabel(QgsMeshRendererMeshSettingsWidgetBase);
        mLineWidthLabel->setObjectName(QString::fromUtf8("mLineWidthLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineWidthLabel->sizePolicy().hasHeightForWidth());
        mLineWidthLabel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mLineWidthLabel, 0, 0, 1, 1);

        label_2 = new QLabel(QgsMeshRendererMeshSettingsWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        QWidget::setTabOrder(mLineWidthSpinBox, mLineUnitsComboBox);
        QWidget::setTabOrder(mLineUnitsComboBox, mColorWidget);

        retranslateUi(QgsMeshRendererMeshSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshRendererMeshSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererMeshSettingsWidgetBase)
    {
        mLineWidthLabel->setText(QCoreApplication::translate("QgsMeshRendererMeshSettingsWidgetBase", "Line width", nullptr));
        label_2->setText(QCoreApplication::translate("QgsMeshRendererMeshSettingsWidgetBase", "Line color", nullptr));
        (void)QgsMeshRendererMeshSettingsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererMeshSettingsWidgetBase: public Ui_QgsMeshRendererMeshSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERMESHSETTINGSWIDGETBASE_H
