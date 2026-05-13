/********************************************************************************
** Form generated from reading UI file 'qgsrastercontourrendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERCONTOURRENDERERWIDGET_H
#define UI_QGSRASTERCONTOURRENDERERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsrasterbandcombobox.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterContourRendererWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QgsRasterBandComboBox *mInputBandComboBox;
    QLabel *label_4;
    QLabel *mGrayBandLabel;
    QgsSymbolButton *mContourSymbolButton;
    QgsDoubleSpinBox *mContourIntervalSpinBox;
    QLabel *label_3;
    QgsSymbolButton *mIndexContourSymbolButton;
    QLabel *label;
    QgsDoubleSpinBox *mIndexContourIntervalSpinBox;
    QLabel *label_5;
    QgsDoubleSpinBox *mDownscaleSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsRasterContourRendererWidget)
    {
        if (QgsRasterContourRendererWidget->objectName().isEmpty())
            QgsRasterContourRendererWidget->setObjectName(QString::fromUtf8("QgsRasterContourRendererWidget"));
        QgsRasterContourRendererWidget->resize(336, 294);
        QgsRasterContourRendererWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsRasterContourRendererWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsRasterContourRendererWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mInputBandComboBox = new QgsRasterBandComboBox(QgsRasterContourRendererWidget);
        mInputBandComboBox->setObjectName(QString::fromUtf8("mInputBandComboBox"));

        gridLayout->addWidget(mInputBandComboBox, 0, 1, 1, 1);

        label_4 = new QLabel(QgsRasterContourRendererWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        mGrayBandLabel = new QLabel(QgsRasterContourRendererWidget);
        mGrayBandLabel->setObjectName(QString::fromUtf8("mGrayBandLabel"));

        gridLayout->addWidget(mGrayBandLabel, 0, 0, 1, 1);

        mContourSymbolButton = new QgsSymbolButton(QgsRasterContourRendererWidget);
        mContourSymbolButton->setObjectName(QString::fromUtf8("mContourSymbolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mContourSymbolButton->sizePolicy().hasHeightForWidth());
        mContourSymbolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mContourSymbolButton, 2, 1, 1, 1);

        mContourIntervalSpinBox = new QgsDoubleSpinBox(QgsRasterContourRendererWidget);
        mContourIntervalSpinBox->setObjectName(QString::fromUtf8("mContourIntervalSpinBox"));
        mContourIntervalSpinBox->setDecimals(2);
        mContourIntervalSpinBox->setMinimum(0.100000000000000);
        mContourIntervalSpinBox->setMaximum(999999.000000000000000);
        mContourIntervalSpinBox->setValue(100.000000000000000);

        gridLayout->addWidget(mContourIntervalSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(QgsRasterContourRendererWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        mIndexContourSymbolButton = new QgsSymbolButton(QgsRasterContourRendererWidget);
        mIndexContourSymbolButton->setObjectName(QString::fromUtf8("mIndexContourSymbolButton"));
        sizePolicy.setHeightForWidth(mIndexContourSymbolButton->sizePolicy().hasHeightForWidth());
        mIndexContourSymbolButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mIndexContourSymbolButton, 4, 1, 1, 1);

        label = new QLabel(QgsRasterContourRendererWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mIndexContourIntervalSpinBox = new QgsDoubleSpinBox(QgsRasterContourRendererWidget);
        mIndexContourIntervalSpinBox->setObjectName(QString::fromUtf8("mIndexContourIntervalSpinBox"));
        mIndexContourIntervalSpinBox->setDecimals(2);
        mIndexContourIntervalSpinBox->setMaximum(999999.000000000000000);
        mIndexContourIntervalSpinBox->setValue(500.000000000000000);

        gridLayout->addWidget(mIndexContourIntervalSpinBox, 3, 1, 1, 1);

        label_5 = new QLabel(QgsRasterContourRendererWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        mDownscaleSpinBox = new QgsDoubleSpinBox(QgsRasterContourRendererWidget);
        mDownscaleSpinBox->setObjectName(QString::fromUtf8("mDownscaleSpinBox"));
        mDownscaleSpinBox->setDecimals(2);
        mDownscaleSpinBox->setMinimum(1.000000000000000);
        mDownscaleSpinBox->setValue(4.000000000000000);

        gridLayout->addWidget(mDownscaleSpinBox, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        QWidget::setTabOrder(mInputBandComboBox, mContourIntervalSpinBox);
        QWidget::setTabOrder(mContourIntervalSpinBox, mContourSymbolButton);
        QWidget::setTabOrder(mContourSymbolButton, mIndexContourIntervalSpinBox);
        QWidget::setTabOrder(mIndexContourIntervalSpinBox, mIndexContourSymbolButton);
        QWidget::setTabOrder(mIndexContourSymbolButton, mDownscaleSpinBox);

        retranslateUi(QgsRasterContourRendererWidget);

        QMetaObject::connectSlotsByName(QgsRasterContourRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterContourRendererWidget)
    {
        label_2->setText(QCoreApplication::translate("QgsRasterContourRendererWidget", "Contour Symbol", nullptr));
        label_4->setText(QCoreApplication::translate("QgsRasterContourRendererWidget", "Index Contour Symbol", nullptr));
        mGrayBandLabel->setText(QCoreApplication::translate("QgsRasterContourRendererWidget", "Input band", nullptr));
        mContourSymbolButton->setText(QString());
        label_3->setText(QCoreApplication::translate("QgsRasterContourRendererWidget", "Index Contour Interval", nullptr));
        mIndexContourSymbolButton->setText(QString());
        label->setText(QCoreApplication::translate("QgsRasterContourRendererWidget", "Contour Interval", nullptr));
        label_5->setText(QCoreApplication::translate("QgsRasterContourRendererWidget", "Input Downscaling", nullptr));
        (void)QgsRasterContourRendererWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsRasterContourRendererWidget: public Ui_QgsRasterContourRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERCONTOURRENDERERWIDGET_H
