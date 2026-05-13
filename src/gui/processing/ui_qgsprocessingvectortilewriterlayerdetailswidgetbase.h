/********************************************************************************
** Form generated from reading UI file 'qgsprocessingvectortilewriterlayerdetailswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGVECTORTILEWRITERLAYERDETAILSWIDGETBASE_H
#define UI_QGSPROCESSINGVECTORTILEWRITERLAYERDETAILSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>
#include "qgsexpressionlineedit.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingVectorTileWriterLayerDetailsWidget
{
public:
    QGridLayout *gridLayout;
    QgsSpinBox *mSpinMinZoom;
    QLabel *label;
    QLabel *label_2;
    QgsSpinBox *mSpinMaxZoom;
    QLabel *label_3;
    QLineEdit *mEditLayerName;
    QLabel *label_4;
    QgsExpressionLineEdit *mEditFilterExpression;
    QDialogButtonBox *mButtonBox;

    void setupUi(QWidget *QgsProcessingVectorTileWriterLayerDetailsWidget)
    {
        if (QgsProcessingVectorTileWriterLayerDetailsWidget->objectName().isEmpty())
            QgsProcessingVectorTileWriterLayerDetailsWidget->setObjectName(QString::fromUtf8("QgsProcessingVectorTileWriterLayerDetailsWidget"));
        QgsProcessingVectorTileWriterLayerDetailsWidget->resize(465, 563);
        gridLayout = new QGridLayout(QgsProcessingVectorTileWriterLayerDetailsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSpinMinZoom = new QgsSpinBox(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mSpinMinZoom->setObjectName(QString::fromUtf8("mSpinMinZoom"));
        mSpinMinZoom->setMinimum(-1);
        mSpinMinZoom->setMaximum(24);
        mSpinMinZoom->setValue(-1);

        gridLayout->addWidget(mSpinMinZoom, 0, 1, 1, 1);

        label = new QLabel(QgsProcessingVectorTileWriterLayerDetailsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(QgsProcessingVectorTileWriterLayerDetailsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mSpinMaxZoom = new QgsSpinBox(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mSpinMaxZoom->setObjectName(QString::fromUtf8("mSpinMaxZoom"));
        mSpinMaxZoom->setMinimum(-1);
        mSpinMaxZoom->setMaximum(24);
        mSpinMaxZoom->setValue(-1);

        gridLayout->addWidget(mSpinMaxZoom, 1, 1, 1, 1);

        label_3 = new QLabel(QgsProcessingVectorTileWriterLayerDetailsWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        mEditLayerName = new QLineEdit(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mEditLayerName->setObjectName(QString::fromUtf8("mEditLayerName"));

        gridLayout->addWidget(mEditLayerName, 2, 1, 1, 1);

        label_4 = new QLabel(QgsProcessingVectorTileWriterLayerDetailsWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        mEditFilterExpression = new QgsExpressionLineEdit(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mEditFilterExpression->setObjectName(QString::fromUtf8("mEditFilterExpression"));

        gridLayout->addWidget(mEditFilterExpression, 4, 0, 1, 2);

        mButtonBox = new QDialogButtonBox(QgsProcessingVectorTileWriterLayerDetailsWidget);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 5, 0, 1, 2);


        retranslateUi(QgsProcessingVectorTileWriterLayerDetailsWidget);

        QMetaObject::connectSlotsByName(QgsProcessingVectorTileWriterLayerDetailsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingVectorTileWriterLayerDetailsWidget)
    {
        label->setText(QCoreApplication::translate("QgsProcessingVectorTileWriterLayerDetailsWidget", "Min. zoom level", nullptr));
        label_2->setText(QCoreApplication::translate("QgsProcessingVectorTileWriterLayerDetailsWidget", "Max. zoom level", nullptr));
        label_3->setText(QCoreApplication::translate("QgsProcessingVectorTileWriterLayerDetailsWidget", "Layer name", nullptr));
        label_4->setText(QCoreApplication::translate("QgsProcessingVectorTileWriterLayerDetailsWidget", "Filter expression", nullptr));
        (void)QgsProcessingVectorTileWriterLayerDetailsWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingVectorTileWriterLayerDetailsWidget: public Ui_QgsProcessingVectorTileWriterLayerDetailsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGVECTORTILEWRITERLAYERDETAILSWIDGETBASE_H
