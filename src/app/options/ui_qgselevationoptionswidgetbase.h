/********************************************************************************
** Form generated from reading UI file 'qgselevationoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSELEVATIONOPTIONSWIDGETBASE_H
#define UI_QGSELEVATIONOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsElevationOptionsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QgsColorButton *mButtonBackgroundColor;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsElevationOptionsWidgetBase)
    {
        if (QgsElevationOptionsWidgetBase->objectName().isEmpty())
            QgsElevationOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsElevationOptionsWidgetBase"));
        QgsElevationOptionsWidgetBase->resize(417, 382);
        verticalLayout = new QVBoxLayout(QgsElevationOptionsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsElevationOptionsWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        mButtonBackgroundColor = new QgsColorButton(groupBox);
        mButtonBackgroundColor->setObjectName(QString::fromUtf8("mButtonBackgroundColor"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonBackgroundColor->sizePolicy().hasHeightForWidth());
        mButtonBackgroundColor->setSizePolicy(sizePolicy);
        mButtonBackgroundColor->setMinimumSize(QSize(120, 0));
        mButtonBackgroundColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mButtonBackgroundColor, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsElevationOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsElevationOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsElevationOptionsWidgetBase)
    {
        QgsElevationOptionsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsElevationOptionsWidgetBase", "Raster Elevation Properties", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsElevationOptionsWidgetBase", "Profile Chart Appearance", nullptr));
        label_6->setText(QCoreApplication::translate("QgsElevationOptionsWidgetBase", "Background color", nullptr));
        mButtonBackgroundColor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsElevationOptionsWidgetBase: public Ui_QgsElevationOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSELEVATIONOPTIONSWIDGETBASE_H
