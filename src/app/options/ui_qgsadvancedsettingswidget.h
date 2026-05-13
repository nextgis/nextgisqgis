/********************************************************************************
** Form generated from reading UI file 'qgsadvancedsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADVANCEDSETTINGSWIDGET_H
#define UI_QGSADVANCEDSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAdvancedSettingsWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mGroupBox;
    QVBoxLayout *verticalLayout;
    QWidget *mAdvancedSettingsWarning;
    QVBoxLayout *verticalLayout_44;
    QLabel *label_44;
    QCheckBox *mUseNewSettingsTree;
    QPushButton *mAdvancedSettingsEnableButton;

    void setupUi(QWidget *QgsAdvancedSettingsWidgetBase)
    {
        if (QgsAdvancedSettingsWidgetBase->objectName().isEmpty())
            QgsAdvancedSettingsWidgetBase->setObjectName(QString::fromUtf8("QgsAdvancedSettingsWidgetBase"));
        QgsAdvancedSettingsWidgetBase->resize(714, 610);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsAdvancedSettingsWidgetBase->sizePolicy().hasHeightForWidth());
        QgsAdvancedSettingsWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsAdvancedSettingsWidgetBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mGroupBox = new QGroupBox(QgsAdvancedSettingsWidgetBase);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        sizePolicy.setHeightForWidth(mGroupBox->sizePolicy().hasHeightForWidth());
        mGroupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(mGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mAdvancedSettingsWarning = new QWidget(mGroupBox);
        mAdvancedSettingsWarning->setObjectName(QString::fromUtf8("mAdvancedSettingsWarning"));
        verticalLayout_44 = new QVBoxLayout(mAdvancedSettingsWarning);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        label_44 = new QLabel(mAdvancedSettingsWarning);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setWordWrap(true);

        verticalLayout_44->addWidget(label_44);

        mUseNewSettingsTree = new QCheckBox(mAdvancedSettingsWarning);
        mUseNewSettingsTree->setObjectName(QString::fromUtf8("mUseNewSettingsTree"));

        verticalLayout_44->addWidget(mUseNewSettingsTree);

        mAdvancedSettingsEnableButton = new QPushButton(mAdvancedSettingsWarning);
        mAdvancedSettingsEnableButton->setObjectName(QString::fromUtf8("mAdvancedSettingsEnableButton"));

        verticalLayout_44->addWidget(mAdvancedSettingsEnableButton);


        verticalLayout->addWidget(mAdvancedSettingsWarning);


        verticalLayout_2->addWidget(mGroupBox);


        retranslateUi(QgsAdvancedSettingsWidgetBase);

        QMetaObject::connectSlotsByName(QgsAdvancedSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAdvancedSettingsWidgetBase)
    {
        mGroupBox->setTitle(QCoreApplication::translate("QgsAdvancedSettingsWidgetBase", "Advanced Settings Editor", nullptr));
        label_44->setText(QCoreApplication::translate("QgsAdvancedSettingsWidgetBase", "<html><head/><body><p>Changes on this page are dangerous and can break your QGIS installation in various ways. Any change you make is applied immediately, without clicking the <span style=\" font-style:italic;\">OK</span> button.</p></body></html>", nullptr));
        mUseNewSettingsTree->setText(QCoreApplication::translate("QgsAdvancedSettingsWidgetBase", "Use new settings tree widget (some settings will be missing)", nullptr));
        mAdvancedSettingsEnableButton->setText(QCoreApplication::translate("QgsAdvancedSettingsWidgetBase", "I will be careful, I promise!", nullptr));
        (void)QgsAdvancedSettingsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsAdvancedSettingsWidgetBase: public Ui_QgsAdvancedSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADVANCEDSETTINGSWIDGET_H
