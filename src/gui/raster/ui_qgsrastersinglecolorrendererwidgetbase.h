/********************************************************************************
** Form generated from reading UI file 'qgsrastersinglecolorrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERSINGLECOLORRENDERERWIDGETBASE_H
#define UI_QGSRASTERSINGLECOLORRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterSingleColorRendererWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *mBandLabel;
    QgsRasterBandComboBox *mBandComboBox;
    QLabel *mColorLabel;
    QgsColorButton *mColorButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsRasterSingleColorRendererWidgetBase)
    {
        if (QgsRasterSingleColorRendererWidgetBase->objectName().isEmpty())
            QgsRasterSingleColorRendererWidgetBase->setObjectName(QString::fromUtf8("QgsRasterSingleColorRendererWidgetBase"));
        QgsRasterSingleColorRendererWidgetBase->resize(395, 409);
        QgsRasterSingleColorRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsRasterSingleColorRendererWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mBandLabel = new QLabel(QgsRasterSingleColorRendererWidgetBase);
        mBandLabel->setObjectName(QString::fromUtf8("mBandLabel"));

        gridLayout->addWidget(mBandLabel, 0, 0, 1, 1);

        mBandComboBox = new QgsRasterBandComboBox(QgsRasterSingleColorRendererWidgetBase);
        mBandComboBox->setObjectName(QString::fromUtf8("mBandComboBox"));

        gridLayout->addWidget(mBandComboBox, 0, 1, 1, 1);

        mColorLabel = new QLabel(QgsRasterSingleColorRendererWidgetBase);
        mColorLabel->setObjectName(QString::fromUtf8("mColorLabel"));

        gridLayout->addWidget(mColorLabel, 1, 0, 1, 1);

        mColorButton = new QgsColorButton(QgsRasterSingleColorRendererWidgetBase);
        mColorButton->setObjectName(QString::fromUtf8("mColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mColorButton->sizePolicy().hasHeightForWidth());
        mColorButton->setSizePolicy(sizePolicy);
        mColorButton->setMinimumSize(QSize(120, 0));
        mColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mColorButton, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(QgsRasterSingleColorRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterSingleColorRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterSingleColorRendererWidgetBase)
    {
        mBandLabel->setText(QCoreApplication::translate("QgsRasterSingleColorRendererWidgetBase", "Band", nullptr));
        mColorLabel->setText(QCoreApplication::translate("QgsRasterSingleColorRendererWidgetBase", "Color", nullptr));
        (void)QgsRasterSingleColorRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRasterSingleColorRendererWidgetBase: public Ui_QgsRasterSingleColorRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERSINGLECOLORRENDERERWIDGETBASE_H
