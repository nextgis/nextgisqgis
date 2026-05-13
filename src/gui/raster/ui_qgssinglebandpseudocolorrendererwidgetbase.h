/********************************************************************************
** Form generated from reading UI file 'qgssinglebandpseudocolorrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSINGLEBANDPSEUDOCOLORRENDERERWIDGETBASE_H
#define UI_QGSSINGLEBANDPSEUDOCOLORRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorrampshaderwidget.h"
#include "qgsrasterbandcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSingleBandPseudoColorRendererWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *mMinLineEdit;
    QLabel *mMinLabel;
    QLabel *mBandLabel;
    QLabel *mMaxLabel;
    QLineEdit *mMaxLineEdit;
    QgsRasterBandComboBox *mBandComboBox;
    QWidget *mMinMaxContainerWidget;
    QgsColorRampShaderWidget *mColorRampShaderWidget;

    void setupUi(QWidget *QgsSingleBandPseudoColorRendererWidgetBase)
    {
        if (QgsSingleBandPseudoColorRendererWidgetBase->objectName().isEmpty())
            QgsSingleBandPseudoColorRendererWidgetBase->setObjectName(QString::fromUtf8("QgsSingleBandPseudoColorRendererWidgetBase"));
        QgsSingleBandPseudoColorRendererWidgetBase->resize(396, 605);
        QgsSingleBandPseudoColorRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsSingleBandPseudoColorRendererWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mMinLineEdit = new QLineEdit(QgsSingleBandPseudoColorRendererWidgetBase);
        mMinLineEdit->setObjectName(QString::fromUtf8("mMinLineEdit"));

        gridLayout_2->addWidget(mMinLineEdit, 1, 1, 1, 1);

        mMinLabel = new QLabel(QgsSingleBandPseudoColorRendererWidgetBase);
        mMinLabel->setObjectName(QString::fromUtf8("mMinLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mMinLabel->sizePolicy().hasHeightForWidth());
        mMinLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mMinLabel, 1, 0, 1, 1);

        mBandLabel = new QLabel(QgsSingleBandPseudoColorRendererWidgetBase);
        mBandLabel->setObjectName(QString::fromUtf8("mBandLabel"));

        gridLayout_2->addWidget(mBandLabel, 0, 0, 1, 1);

        mMaxLabel = new QLabel(QgsSingleBandPseudoColorRendererWidgetBase);
        mMaxLabel->setObjectName(QString::fromUtf8("mMaxLabel"));
        sizePolicy.setHeightForWidth(mMaxLabel->sizePolicy().hasHeightForWidth());
        mMaxLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mMaxLabel, 1, 2, 1, 1);

        mMaxLineEdit = new QLineEdit(QgsSingleBandPseudoColorRendererWidgetBase);
        mMaxLineEdit->setObjectName(QString::fromUtf8("mMaxLineEdit"));

        gridLayout_2->addWidget(mMaxLineEdit, 1, 3, 1, 1);

        mBandComboBox = new QgsRasterBandComboBox(QgsSingleBandPseudoColorRendererWidgetBase);
        mBandComboBox->setObjectName(QString::fromUtf8("mBandComboBox"));

        gridLayout_2->addWidget(mBandComboBox, 0, 1, 1, 3);


        verticalLayout->addLayout(gridLayout_2);

        mMinMaxContainerWidget = new QWidget(QgsSingleBandPseudoColorRendererWidgetBase);
        mMinMaxContainerWidget->setObjectName(QString::fromUtf8("mMinMaxContainerWidget"));

        verticalLayout->addWidget(mMinMaxContainerWidget);

        mColorRampShaderWidget = new QgsColorRampShaderWidget(QgsSingleBandPseudoColorRendererWidgetBase);
        mColorRampShaderWidget->setObjectName(QString::fromUtf8("mColorRampShaderWidget"));

        verticalLayout->addWidget(mColorRampShaderWidget);

        QWidget::setTabOrder(mBandComboBox, mMinLineEdit);
        QWidget::setTabOrder(mMinLineEdit, mMaxLineEdit);

        retranslateUi(QgsSingleBandPseudoColorRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsSingleBandPseudoColorRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSingleBandPseudoColorRendererWidgetBase)
    {
        mMinLabel->setText(QCoreApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Min", nullptr));
        mBandLabel->setText(QCoreApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Band", nullptr));
        mMaxLabel->setText(QCoreApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Max", nullptr));
        (void)QgsSingleBandPseudoColorRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsSingleBandPseudoColorRendererWidgetBase: public Ui_QgsSingleBandPseudoColorRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSINGLEBANDPSEUDOCOLORRENDERERWIDGETBASE_H
