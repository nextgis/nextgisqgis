/********************************************************************************
** Form generated from reading UI file 'qgsmultibandcolorrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMULTIBANDCOLORRENDERERWIDGETBASE_H
#define UI_QGSMULTIBANDCOLORRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMultiBandColorRendererWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *mContrastEnhancementAlgorithmLabel;
    QLabel *mRedBandLabel;
    QComboBox *mContrastEnhancementAlgorithmComboBox;
    QLabel *mRedMinLabel;
    QLabel *mRedMaxLabel;
    QLineEdit *mRedMinLineEdit;
    QgsRasterBandComboBox *mRedBandComboBox;
    QLabel *mBlueMinLabel;
    QLabel *mBlueMaxLabel;
    QgsRasterBandComboBox *mGreenBandComboBox;
    QLabel *mGreenMinLabel;
    QLabel *mGreenMaxLabel;
    QgsRasterBandComboBox *mBlueBandComboBox;
    QLineEdit *mRedMaxLineEdit;
    QLineEdit *mGreenMinLineEdit;
    QLabel *mBlueBandLabel;
    QLineEdit *mBlueMinLineEdit;
    QLineEdit *mBlueMaxLineEdit;
    QLabel *mGreenBandLabel;
    QLineEdit *mGreenMaxLineEdit;
    QWidget *mMinMaxContainerWidget;

    void setupUi(QWidget *QgsMultiBandColorRendererWidgetBase)
    {
        if (QgsMultiBandColorRendererWidgetBase->objectName().isEmpty())
            QgsMultiBandColorRendererWidgetBase->setObjectName(QString::fromUtf8("QgsMultiBandColorRendererWidgetBase"));
        QgsMultiBandColorRendererWidgetBase->resize(350, 321);
        QgsMultiBandColorRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsMultiBandColorRendererWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mContrastEnhancementAlgorithmLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mContrastEnhancementAlgorithmLabel->setObjectName(QString::fromUtf8("mContrastEnhancementAlgorithmLabel"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmLabel, 6, 0, 1, 1);

        mRedBandLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mRedBandLabel->setObjectName(QString::fromUtf8("mRedBandLabel"));

        gridLayout->addWidget(mRedBandLabel, 0, 0, 1, 1);

        mContrastEnhancementAlgorithmComboBox = new QComboBox(QgsMultiBandColorRendererWidgetBase);
        mContrastEnhancementAlgorithmComboBox->setObjectName(QString::fromUtf8("mContrastEnhancementAlgorithmComboBox"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmComboBox, 6, 1, 1, 4);

        mRedMinLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mRedMinLabel->setObjectName(QString::fromUtf8("mRedMinLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRedMinLabel->sizePolicy().hasHeightForWidth());
        mRedMinLabel->setSizePolicy(sizePolicy);
        mRedMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mRedMinLabel, 1, 1, 1, 1);

        mRedMaxLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mRedMaxLabel->setObjectName(QString::fromUtf8("mRedMaxLabel"));
        sizePolicy.setHeightForWidth(mRedMaxLabel->sizePolicy().hasHeightForWidth());
        mRedMaxLabel->setSizePolicy(sizePolicy);
        mRedMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mRedMaxLabel, 1, 3, 1, 1);

        mRedMinLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mRedMinLineEdit->setObjectName(QString::fromUtf8("mRedMinLineEdit"));
        mRedMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMinLineEdit, 1, 2, 1, 1);

        mRedBandComboBox = new QgsRasterBandComboBox(QgsMultiBandColorRendererWidgetBase);
        mRedBandComboBox->setObjectName(QString::fromUtf8("mRedBandComboBox"));

        gridLayout->addWidget(mRedBandComboBox, 0, 1, 1, 4);

        mBlueMinLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mBlueMinLabel->setObjectName(QString::fromUtf8("mBlueMinLabel"));
        sizePolicy.setHeightForWidth(mBlueMinLabel->sizePolicy().hasHeightForWidth());
        mBlueMinLabel->setSizePolicy(sizePolicy);
        mBlueMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueMinLabel, 5, 1, 1, 1);

        mBlueMaxLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mBlueMaxLabel->setObjectName(QString::fromUtf8("mBlueMaxLabel"));
        sizePolicy.setHeightForWidth(mBlueMaxLabel->sizePolicy().hasHeightForWidth());
        mBlueMaxLabel->setSizePolicy(sizePolicy);
        mBlueMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueMaxLabel, 5, 3, 1, 1);

        mGreenBandComboBox = new QgsRasterBandComboBox(QgsMultiBandColorRendererWidgetBase);
        mGreenBandComboBox->setObjectName(QString::fromUtf8("mGreenBandComboBox"));

        gridLayout->addWidget(mGreenBandComboBox, 2, 1, 1, 4);

        mGreenMinLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mGreenMinLabel->setObjectName(QString::fromUtf8("mGreenMinLabel"));
        sizePolicy.setHeightForWidth(mGreenMinLabel->sizePolicy().hasHeightForWidth());
        mGreenMinLabel->setSizePolicy(sizePolicy);
        mGreenMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenMinLabel, 3, 1, 1, 1);

        mGreenMaxLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mGreenMaxLabel->setObjectName(QString::fromUtf8("mGreenMaxLabel"));
        sizePolicy.setHeightForWidth(mGreenMaxLabel->sizePolicy().hasHeightForWidth());
        mGreenMaxLabel->setSizePolicy(sizePolicy);
        mGreenMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenMaxLabel, 3, 3, 1, 1);

        mBlueBandComboBox = new QgsRasterBandComboBox(QgsMultiBandColorRendererWidgetBase);
        mBlueBandComboBox->setObjectName(QString::fromUtf8("mBlueBandComboBox"));

        gridLayout->addWidget(mBlueBandComboBox, 4, 1, 1, 4);

        mRedMaxLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mRedMaxLineEdit->setObjectName(QString::fromUtf8("mRedMaxLineEdit"));
        mRedMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMaxLineEdit, 1, 4, 1, 1);

        mGreenMinLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mGreenMinLineEdit->setObjectName(QString::fromUtf8("mGreenMinLineEdit"));
        mGreenMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMinLineEdit, 3, 2, 1, 1);

        mBlueBandLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mBlueBandLabel->setObjectName(QString::fromUtf8("mBlueBandLabel"));
        sizePolicy.setHeightForWidth(mBlueBandLabel->sizePolicy().hasHeightForWidth());
        mBlueBandLabel->setSizePolicy(sizePolicy);
        mBlueBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueBandLabel, 4, 0, 1, 1);

        mBlueMinLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mBlueMinLineEdit->setObjectName(QString::fromUtf8("mBlueMinLineEdit"));
        mBlueMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMinLineEdit, 5, 2, 1, 1);

        mBlueMaxLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mBlueMaxLineEdit->setObjectName(QString::fromUtf8("mBlueMaxLineEdit"));
        mBlueMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMaxLineEdit, 5, 4, 1, 1);

        mGreenBandLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mGreenBandLabel->setObjectName(QString::fromUtf8("mGreenBandLabel"));
        sizePolicy.setHeightForWidth(mGreenBandLabel->sizePolicy().hasHeightForWidth());
        mGreenBandLabel->setSizePolicy(sizePolicy);
        mGreenBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenBandLabel, 2, 0, 1, 1);

        mGreenMaxLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mGreenMaxLineEdit->setObjectName(QString::fromUtf8("mGreenMaxLineEdit"));
        mGreenMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMaxLineEdit, 3, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        mMinMaxContainerWidget = new QWidget(QgsMultiBandColorRendererWidgetBase);
        mMinMaxContainerWidget->setObjectName(QString::fromUtf8("mMinMaxContainerWidget"));

        verticalLayout->addWidget(mMinMaxContainerWidget);

        QWidget::setTabOrder(mRedBandComboBox, mRedMinLineEdit);
        QWidget::setTabOrder(mRedMinLineEdit, mRedMaxLineEdit);
        QWidget::setTabOrder(mRedMaxLineEdit, mGreenBandComboBox);
        QWidget::setTabOrder(mGreenBandComboBox, mGreenMinLineEdit);
        QWidget::setTabOrder(mGreenMinLineEdit, mGreenMaxLineEdit);
        QWidget::setTabOrder(mGreenMaxLineEdit, mBlueBandComboBox);
        QWidget::setTabOrder(mBlueBandComboBox, mBlueMinLineEdit);
        QWidget::setTabOrder(mBlueMinLineEdit, mBlueMaxLineEdit);
        QWidget::setTabOrder(mBlueMaxLineEdit, mContrastEnhancementAlgorithmComboBox);

        retranslateUi(QgsMultiBandColorRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsMultiBandColorRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMultiBandColorRendererWidgetBase)
    {
        mContrastEnhancementAlgorithmLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Contrast\n"
"enhancement", nullptr));
        mRedBandLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Red band", nullptr));
        mRedMinLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Min", nullptr));
        mRedMaxLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Max", nullptr));
        mBlueMinLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Min", nullptr));
        mBlueMaxLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Max", nullptr));
        mGreenMinLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Min", nullptr));
        mGreenMaxLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Max", nullptr));
        mBlueBandLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Blue band", nullptr));
        mGreenBandLabel->setText(QCoreApplication::translate("QgsMultiBandColorRendererWidgetBase", "Green band", nullptr));
        (void)QgsMultiBandColorRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMultiBandColorRendererWidgetBase: public Ui_QgsMultiBandColorRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMULTIBANDCOLORRENDERERWIDGETBASE_H
