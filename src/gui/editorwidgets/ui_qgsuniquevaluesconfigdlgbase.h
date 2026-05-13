/********************************************************************************
** Form generated from reading UI file 'qgsuniquevaluesconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSUNIQUEVALUESCONFIGDLGBASE_H
#define UI_QGSUNIQUEVALUESCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsUniqueValuesConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QCheckBox *editableUniqueValues;

    void setupUi(QWidget *QgsUniqueValuesConfigDlgBase)
    {
        if (QgsUniqueValuesConfigDlgBase->objectName().isEmpty())
            QgsUniqueValuesConfigDlgBase->setObjectName(QString::fromUtf8("QgsUniqueValuesConfigDlgBase"));
        QgsUniqueValuesConfigDlgBase->resize(400, 300);
        QgsUniqueValuesConfigDlgBase->setWindowTitle(QString::fromUtf8("Form"));
        formLayout = new QFormLayout(QgsUniqueValuesConfigDlgBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(QgsUniqueValuesConfigDlgBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);

        editableUniqueValues = new QCheckBox(QgsUniqueValuesConfigDlgBase);
        editableUniqueValues->setObjectName(QString::fromUtf8("editableUniqueValues"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, editableUniqueValues);


        retranslateUi(QgsUniqueValuesConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsUniqueValuesConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsUniqueValuesConfigDlgBase)
    {
        label->setText(QCoreApplication::translate("QgsUniqueValuesConfigDlgBase", "The user can select one of the values already used in the field. If editable, a line edit is shown with autocompletion support, otherwise a combo box is used.", nullptr));
        editableUniqueValues->setText(QCoreApplication::translate("QgsUniqueValuesConfigDlgBase", "Editable", nullptr));
        (void)QgsUniqueValuesConfigDlgBase;
    } // retranslateUi

};

namespace Ui {
    class QgsUniqueValuesConfigDlgBase: public Ui_QgsUniqueValuesConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSUNIQUEVALUESCONFIGDLGBASE_H
