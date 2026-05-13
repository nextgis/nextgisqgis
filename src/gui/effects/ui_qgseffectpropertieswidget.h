/********************************************************************************
** Form generated from reading UI file 'qgseffectpropertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEFFECTPROPERTIESWIDGET_H
#define UI_QGSEFFECTPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EffectPropertiesWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mEffectTypeCombo;
    QStackedWidget *stackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;

    void setupUi(QWidget *EffectPropertiesWidget)
    {
        if (EffectPropertiesWidget->objectName().isEmpty())
            EffectPropertiesWidget->setObjectName(QString::fromUtf8("EffectPropertiesWidget"));
        EffectPropertiesWidget->resize(330, 439);
        EffectPropertiesWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(EffectPropertiesWidget);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(EffectPropertiesWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mEffectTypeCombo = new QComboBox(EffectPropertiesWidget);
        mEffectTypeCombo->setObjectName(QString::fromUtf8("mEffectTypeCombo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEffectTypeCombo->sizePolicy().hasHeightForWidth());
        mEffectTypeCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mEffectTypeCombo);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(EffectPropertiesWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QString::fromUtf8("pageDummy"));
        verticalLayout = new QVBoxLayout(pageDummy);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(pageDummy);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(pageDummy);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(EffectPropertiesWidget);

        QMetaObject::connectSlotsByName(EffectPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *EffectPropertiesWidget)
    {
        label->setText(QCoreApplication::translate("EffectPropertiesWidget", "Effect type", nullptr));
        label_2->setText(QCoreApplication::translate("EffectPropertiesWidget", "This effect doesn't have any editable properties", nullptr));
        (void)EffectPropertiesWidget;
    } // retranslateUi

};

namespace Ui {
    class EffectPropertiesWidget: public Ui_EffectPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEFFECTPROPERTIESWIDGET_H
