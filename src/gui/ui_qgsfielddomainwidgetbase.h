/********************************************************************************
** Form generated from reading UI file 'qgsfielddomainwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFIELDDOMAINWIDGETBASE_H
#define UI_QGSFIELDDOMAINWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsFieldDomainWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *mNameEdit;
    QLabel *label_3;
    QLineEdit *mDescriptionEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *mComboSplitPolicy;
    QLabel *label_2;
    QComboBox *mComboMergePolicy;
    QLabel *label_4;
    QStackedWidget *mStackedWidget;
    QLabel *label_5;
    QComboBox *mFieldTypeCombo;

    void setupUi(QWidget *QgsFieldDomainWidgetBase)
    {
        if (QgsFieldDomainWidgetBase->objectName().isEmpty())
            QgsFieldDomainWidgetBase->setObjectName(QString::fromUtf8("QgsFieldDomainWidgetBase"));
        QgsFieldDomainWidgetBase->resize(412, 326);
        gridLayout_2 = new QGridLayout(QgsFieldDomainWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mNameEdit = new QLineEdit(QgsFieldDomainWidgetBase);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

        gridLayout_2->addWidget(mNameEdit, 0, 1, 1, 1);

        label_3 = new QLabel(QgsFieldDomainWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        mDescriptionEdit = new QLineEdit(QgsFieldDomainWidgetBase);
        mDescriptionEdit->setObjectName(QString::fromUtf8("mDescriptionEdit"));

        gridLayout_2->addWidget(mDescriptionEdit, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(QgsFieldDomainWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        mComboSplitPolicy = new QComboBox(groupBox_2);
        mComboSplitPolicy->setObjectName(QString::fromUtf8("mComboSplitPolicy"));

        gridLayout_3->addWidget(mComboSplitPolicy, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        mComboMergePolicy = new QComboBox(groupBox_2);
        mComboMergePolicy->setObjectName(QString::fromUtf8("mComboMergePolicy"));

        gridLayout_3->addWidget(mComboMergePolicy, 1, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        gridLayout_2->addWidget(groupBox_2, 3, 0, 1, 2);

        label_4 = new QLabel(QgsFieldDomainWidgetBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsFieldDomainWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));

        gridLayout_2->addWidget(mStackedWidget, 4, 0, 1, 2);

        label_5 = new QLabel(QgsFieldDomainWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        mFieldTypeCombo = new QComboBox(QgsFieldDomainWidgetBase);
        mFieldTypeCombo->setObjectName(QString::fromUtf8("mFieldTypeCombo"));

        gridLayout_2->addWidget(mFieldTypeCombo, 2, 1, 1, 1);


        retranslateUi(QgsFieldDomainWidgetBase);

        QMetaObject::connectSlotsByName(QgsFieldDomainWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsFieldDomainWidgetBase)
    {
        QgsFieldDomainWidgetBase->setWindowTitle(QCoreApplication::translate("QgsFieldDomainWidgetBase", "Field Domain", nullptr));
        label_3->setText(QCoreApplication::translate("QgsFieldDomainWidgetBase", "Description", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsFieldDomainWidgetBase", "Policies", nullptr));
        label->setText(QCoreApplication::translate("QgsFieldDomainWidgetBase", "Split policy", nullptr));
        label_2->setText(QCoreApplication::translate("QgsFieldDomainWidgetBase", "Merge policy", nullptr));
        label_4->setText(QCoreApplication::translate("QgsFieldDomainWidgetBase", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("QgsFieldDomainWidgetBase", "Field type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsFieldDomainWidgetBase: public Ui_QgsFieldDomainWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIELDDOMAINWIDGETBASE_H
