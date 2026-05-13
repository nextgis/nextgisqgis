/********************************************************************************
** Form generated from reading UI file 'qgssmartgroupconditionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSMARTGROUPCONDITIONWIDGET_H
#define UI_QGSSMARTGROUPCONDITIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSmartGroupConditionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mCondCombo;
    QLineEdit *mCondLineEdit;
    QPushButton *mRemoveBtn;

    void setupUi(QWidget *QgsSmartGroupConditionWidget)
    {
        if (QgsSmartGroupConditionWidget->objectName().isEmpty())
            QgsSmartGroupConditionWidget->setObjectName(QString::fromUtf8("QgsSmartGroupConditionWidget"));
        QgsSmartGroupConditionWidget->resize(494, 29);
        QgsSmartGroupConditionWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsSmartGroupConditionWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QgsSmartGroupConditionWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mCondCombo = new QComboBox(QgsSmartGroupConditionWidget);
        mCondCombo->setObjectName(QString::fromUtf8("mCondCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCondCombo->sizePolicy().hasHeightForWidth());
        mCondCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mCondCombo);

        mCondLineEdit = new QLineEdit(QgsSmartGroupConditionWidget);
        mCondLineEdit->setObjectName(QString::fromUtf8("mCondLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCondLineEdit->sizePolicy().hasHeightForWidth());
        mCondLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mCondLineEdit);

        mRemoveBtn = new QPushButton(QgsSmartGroupConditionWidget);
        mRemoveBtn->setObjectName(QString::fromUtf8("mRemoveBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mRemoveBtn->sizePolicy().hasHeightForWidth());
        mRemoveBtn->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(mRemoveBtn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsSmartGroupConditionWidget);

        QMetaObject::connectSlotsByName(QgsSmartGroupConditionWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsSmartGroupConditionWidget)
    {
        label->setText(QCoreApplication::translate("QgsSmartGroupConditionWidget", "The symbol", nullptr));
        mRemoveBtn->setText(QString());
        (void)QgsSmartGroupConditionWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsSmartGroupConditionWidget: public Ui_QgsSmartGroupConditionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSMARTGROUPCONDITIONWIDGET_H
