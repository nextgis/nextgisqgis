/********************************************************************************
** Form generated from reading UI file 'qgspointcloudrgbrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDRGBRENDERERWIDGETBASE_H
#define UI_QGSPOINTCLOUDRGBRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspointcloudattributecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudRgbRendererWidgetBase
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
    QgsPointCloudAttributeComboBox *mRedAttributeComboBox;
    QLabel *mBlueMinLabel;
    QLabel *mBlueMaxLabel;
    QgsPointCloudAttributeComboBox *mGreenAttributeComboBox;
    QLabel *mGreenMinLabel;
    QLabel *mGreenMaxLabel;
    QgsPointCloudAttributeComboBox *mBlueAttributeComboBox;
    QLineEdit *mRedMaxLineEdit;
    QLineEdit *mGreenMinLineEdit;
    QLabel *mBlueBandLabel;
    QLineEdit *mBlueMinLineEdit;
    QLineEdit *mBlueMaxLineEdit;
    QLabel *mGreenBandLabel;
    QLineEdit *mGreenMaxLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsPointCloudRgbRendererWidgetBase)
    {
        if (QgsPointCloudRgbRendererWidgetBase->objectName().isEmpty())
            QgsPointCloudRgbRendererWidgetBase->setObjectName(QString::fromUtf8("QgsPointCloudRgbRendererWidgetBase"));
        QgsPointCloudRgbRendererWidgetBase->resize(350, 345);
        QgsPointCloudRgbRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsPointCloudRgbRendererWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mContrastEnhancementAlgorithmLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mContrastEnhancementAlgorithmLabel->setObjectName(QString::fromUtf8("mContrastEnhancementAlgorithmLabel"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmLabel, 6, 0, 1, 1);

        mRedBandLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mRedBandLabel->setObjectName(QString::fromUtf8("mRedBandLabel"));

        gridLayout->addWidget(mRedBandLabel, 0, 0, 1, 1);

        mContrastEnhancementAlgorithmComboBox = new QComboBox(QgsPointCloudRgbRendererWidgetBase);
        mContrastEnhancementAlgorithmComboBox->setObjectName(QString::fromUtf8("mContrastEnhancementAlgorithmComboBox"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmComboBox, 6, 1, 1, 4);

        mRedMinLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mRedMinLabel->setObjectName(QString::fromUtf8("mRedMinLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRedMinLabel->sizePolicy().hasHeightForWidth());
        mRedMinLabel->setSizePolicy(sizePolicy);
        mRedMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mRedMinLabel, 1, 1, 1, 1);

        mRedMaxLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mRedMaxLabel->setObjectName(QString::fromUtf8("mRedMaxLabel"));
        sizePolicy.setHeightForWidth(mRedMaxLabel->sizePolicy().hasHeightForWidth());
        mRedMaxLabel->setSizePolicy(sizePolicy);
        mRedMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mRedMaxLabel, 1, 3, 1, 1);

        mRedMinLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mRedMinLineEdit->setObjectName(QString::fromUtf8("mRedMinLineEdit"));
        mRedMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMinLineEdit, 1, 2, 1, 1);

        mRedAttributeComboBox = new QgsPointCloudAttributeComboBox(QgsPointCloudRgbRendererWidgetBase);
        mRedAttributeComboBox->setObjectName(QString::fromUtf8("mRedAttributeComboBox"));

        gridLayout->addWidget(mRedAttributeComboBox, 0, 1, 1, 4);

        mBlueMinLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mBlueMinLabel->setObjectName(QString::fromUtf8("mBlueMinLabel"));
        sizePolicy.setHeightForWidth(mBlueMinLabel->sizePolicy().hasHeightForWidth());
        mBlueMinLabel->setSizePolicy(sizePolicy);
        mBlueMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueMinLabel, 5, 1, 1, 1);

        mBlueMaxLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mBlueMaxLabel->setObjectName(QString::fromUtf8("mBlueMaxLabel"));
        sizePolicy.setHeightForWidth(mBlueMaxLabel->sizePolicy().hasHeightForWidth());
        mBlueMaxLabel->setSizePolicy(sizePolicy);
        mBlueMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueMaxLabel, 5, 3, 1, 1);

        mGreenAttributeComboBox = new QgsPointCloudAttributeComboBox(QgsPointCloudRgbRendererWidgetBase);
        mGreenAttributeComboBox->setObjectName(QString::fromUtf8("mGreenAttributeComboBox"));

        gridLayout->addWidget(mGreenAttributeComboBox, 2, 1, 1, 4);

        mGreenMinLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mGreenMinLabel->setObjectName(QString::fromUtf8("mGreenMinLabel"));
        sizePolicy.setHeightForWidth(mGreenMinLabel->sizePolicy().hasHeightForWidth());
        mGreenMinLabel->setSizePolicy(sizePolicy);
        mGreenMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenMinLabel, 3, 1, 1, 1);

        mGreenMaxLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mGreenMaxLabel->setObjectName(QString::fromUtf8("mGreenMaxLabel"));
        sizePolicy.setHeightForWidth(mGreenMaxLabel->sizePolicy().hasHeightForWidth());
        mGreenMaxLabel->setSizePolicy(sizePolicy);
        mGreenMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenMaxLabel, 3, 3, 1, 1);

        mBlueAttributeComboBox = new QgsPointCloudAttributeComboBox(QgsPointCloudRgbRendererWidgetBase);
        mBlueAttributeComboBox->setObjectName(QString::fromUtf8("mBlueAttributeComboBox"));

        gridLayout->addWidget(mBlueAttributeComboBox, 4, 1, 1, 4);

        mRedMaxLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mRedMaxLineEdit->setObjectName(QString::fromUtf8("mRedMaxLineEdit"));
        mRedMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMaxLineEdit, 1, 4, 1, 1);

        mGreenMinLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mGreenMinLineEdit->setObjectName(QString::fromUtf8("mGreenMinLineEdit"));
        mGreenMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMinLineEdit, 3, 2, 1, 1);

        mBlueBandLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mBlueBandLabel->setObjectName(QString::fromUtf8("mBlueBandLabel"));
        sizePolicy.setHeightForWidth(mBlueBandLabel->sizePolicy().hasHeightForWidth());
        mBlueBandLabel->setSizePolicy(sizePolicy);
        mBlueBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueBandLabel, 4, 0, 1, 1);

        mBlueMinLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mBlueMinLineEdit->setObjectName(QString::fromUtf8("mBlueMinLineEdit"));
        mBlueMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMinLineEdit, 5, 2, 1, 1);

        mBlueMaxLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mBlueMaxLineEdit->setObjectName(QString::fromUtf8("mBlueMaxLineEdit"));
        mBlueMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMaxLineEdit, 5, 4, 1, 1);

        mGreenBandLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mGreenBandLabel->setObjectName(QString::fromUtf8("mGreenBandLabel"));
        sizePolicy.setHeightForWidth(mGreenBandLabel->sizePolicy().hasHeightForWidth());
        mGreenBandLabel->setSizePolicy(sizePolicy);
        mGreenBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenBandLabel, 2, 0, 1, 1);

        mGreenMaxLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mGreenMaxLineEdit->setObjectName(QString::fromUtf8("mGreenMaxLineEdit"));
        mGreenMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMaxLineEdit, 3, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mRedAttributeComboBox, mRedMinLineEdit);
        QWidget::setTabOrder(mRedMinLineEdit, mRedMaxLineEdit);
        QWidget::setTabOrder(mRedMaxLineEdit, mGreenAttributeComboBox);
        QWidget::setTabOrder(mGreenAttributeComboBox, mGreenMinLineEdit);
        QWidget::setTabOrder(mGreenMinLineEdit, mGreenMaxLineEdit);
        QWidget::setTabOrder(mGreenMaxLineEdit, mBlueAttributeComboBox);
        QWidget::setTabOrder(mBlueAttributeComboBox, mBlueMinLineEdit);
        QWidget::setTabOrder(mBlueMinLineEdit, mBlueMaxLineEdit);
        QWidget::setTabOrder(mBlueMaxLineEdit, mContrastEnhancementAlgorithmComboBox);

        retranslateUi(QgsPointCloudRgbRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointCloudRgbRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointCloudRgbRendererWidgetBase)
    {
        mContrastEnhancementAlgorithmLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Contrast\n"
"enhancement", nullptr));
        mRedBandLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Red band", nullptr));
        mRedMinLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Min", nullptr));
        mRedMaxLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Max", nullptr));
        mBlueMinLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Min", nullptr));
        mBlueMaxLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Max", nullptr));
        mGreenMinLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Min", nullptr));
        mGreenMaxLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Max", nullptr));
        mBlueBandLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Blue band", nullptr));
        mGreenBandLabel->setText(QCoreApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Green band", nullptr));
        (void)QgsPointCloudRgbRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudRgbRendererWidgetBase: public Ui_QgsPointCloudRgbRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDRGBRENDERERWIDGETBASE_H
