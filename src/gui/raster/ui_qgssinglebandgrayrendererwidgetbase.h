/********************************************************************************
** Form generated from reading UI file 'qgssinglebandgrayrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSINGLEBANDGRAYRENDERERWIDGETBASE_H
#define UI_QGSSINGLEBANDGRAYRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSingleBandGrayRendererWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *mMinLineEdit;
    QLabel *mGrayBandLabel;
    QLineEdit *mMaxLineEdit;
    QgsRasterBandComboBox *mGrayBandComboBox;
    QLabel *mContrastEnhancementLabel;
    QComboBox *mContrastEnhancementComboBox;
    QLabel *label;
    QComboBox *mGradientComboBox;
    QLabel *mMinLabel;
    QLabel *mMaxLabel;
    QWidget *mMinMaxContainerWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mLegendSettingsButton;

    void setupUi(QWidget *QgsSingleBandGrayRendererWidgetBase)
    {
        if (QgsSingleBandGrayRendererWidgetBase->objectName().isEmpty())
            QgsSingleBandGrayRendererWidgetBase->setObjectName(QString::fromUtf8("QgsSingleBandGrayRendererWidgetBase"));
        QgsSingleBandGrayRendererWidgetBase->resize(395, 409);
        QgsSingleBandGrayRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsSingleBandGrayRendererWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mMinLineEdit = new QLineEdit(QgsSingleBandGrayRendererWidgetBase);
        mMinLineEdit->setObjectName(QString::fromUtf8("mMinLineEdit"));

        gridLayout->addWidget(mMinLineEdit, 2, 2, 1, 1);

        mGrayBandLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mGrayBandLabel->setObjectName(QString::fromUtf8("mGrayBandLabel"));

        gridLayout->addWidget(mGrayBandLabel, 0, 0, 1, 1);

        mMaxLineEdit = new QLineEdit(QgsSingleBandGrayRendererWidgetBase);
        mMaxLineEdit->setObjectName(QString::fromUtf8("mMaxLineEdit"));

        gridLayout->addWidget(mMaxLineEdit, 2, 4, 1, 1);

        mGrayBandComboBox = new QgsRasterBandComboBox(QgsSingleBandGrayRendererWidgetBase);
        mGrayBandComboBox->setObjectName(QString::fromUtf8("mGrayBandComboBox"));

        gridLayout->addWidget(mGrayBandComboBox, 0, 1, 1, 4);

        mContrastEnhancementLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mContrastEnhancementLabel->setObjectName(QString::fromUtf8("mContrastEnhancementLabel"));

        gridLayout->addWidget(mContrastEnhancementLabel, 3, 0, 1, 1);

        mContrastEnhancementComboBox = new QComboBox(QgsSingleBandGrayRendererWidgetBase);
        mContrastEnhancementComboBox->setObjectName(QString::fromUtf8("mContrastEnhancementComboBox"));

        gridLayout->addWidget(mContrastEnhancementComboBox, 3, 1, 1, 4);

        label = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mGradientComboBox = new QComboBox(QgsSingleBandGrayRendererWidgetBase);
        mGradientComboBox->setObjectName(QString::fromUtf8("mGradientComboBox"));

        gridLayout->addWidget(mGradientComboBox, 1, 1, 1, 4);

        mMinLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mMinLabel->setObjectName(QString::fromUtf8("mMinLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mMinLabel->sizePolicy().hasHeightForWidth());
        mMinLabel->setSizePolicy(sizePolicy);
        mMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mMinLabel, 2, 1, 1, 1);

        mMaxLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mMaxLabel->setObjectName(QString::fromUtf8("mMaxLabel"));
        sizePolicy.setHeightForWidth(mMaxLabel->sizePolicy().hasHeightForWidth());
        mMaxLabel->setSizePolicy(sizePolicy);
        mMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mMaxLabel, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        mMinMaxContainerWidget = new QWidget(QgsSingleBandGrayRendererWidgetBase);
        mMinMaxContainerWidget->setObjectName(QString::fromUtf8("mMinMaxContainerWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mMinMaxContainerWidget->sizePolicy().hasHeightForWidth());
        mMinMaxContainerWidget->setSizePolicy(sizePolicy1);
        mMinMaxContainerWidget->setMinimumSize(QSize(200, 0));

        verticalLayout->addWidget(mMinMaxContainerWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mLegendSettingsButton = new QPushButton(QgsSingleBandGrayRendererWidgetBase);
        mLegendSettingsButton->setObjectName(QString::fromUtf8("mLegendSettingsButton"));

        horizontalLayout->addWidget(mLegendSettingsButton);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(mGrayBandComboBox, mGradientComboBox);
        QWidget::setTabOrder(mGradientComboBox, mMinLineEdit);
        QWidget::setTabOrder(mMinLineEdit, mMaxLineEdit);
        QWidget::setTabOrder(mMaxLineEdit, mContrastEnhancementComboBox);

        retranslateUi(QgsSingleBandGrayRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsSingleBandGrayRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSingleBandGrayRendererWidgetBase)
    {
        mGrayBandLabel->setText(QCoreApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Gray band", nullptr));
        mContrastEnhancementLabel->setText(QCoreApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Contrast\n"
"enhancement", nullptr));
        label->setText(QCoreApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Color gradient", nullptr));
        mMinLabel->setText(QCoreApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Min", nullptr));
        mMaxLabel->setText(QCoreApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Max", nullptr));
        mLegendSettingsButton->setText(QCoreApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Legend Settings\342\200\246", nullptr));
        (void)QgsSingleBandGrayRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsSingleBandGrayRendererWidgetBase: public Ui_QgsSingleBandGrayRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSINGLEBANDGRAYRENDERERWIDGETBASE_H
