/********************************************************************************
** Form generated from reading UI file 'qgsattributesforminitcode.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTESFORMINITCODE_H
#define UI_QGSATTRIBUTESFORMINITCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscodeeditorpython.h"
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributesFormInitCode
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *mInitCodeSourceComboBox;
    QWidget *mInitFunctionContainer;
    QGridLayout *gridLayout;
    QLabel *mInitFilePathLabel;
    QgsFileWidget *mInitFileWidget;
    QLabel *mInitFunctionLabel;
    QLineEdit *mInitFunctionLineEdit;
    QDialogButtonBox *buttonBox;
    QgsCodeEditorPython *mInitCodeEditorPython;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QgsAttributesFormInitCode)
    {
        if (QgsAttributesFormInitCode->objectName().isEmpty())
            QgsAttributesFormInitCode->setObjectName(QString::fromUtf8("QgsAttributesFormInitCode"));
        QgsAttributesFormInitCode->resize(400, 283);
        gridLayout_2 = new QGridLayout(QgsAttributesFormInitCode);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(QgsAttributesFormInitCode);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        mInitCodeSourceComboBox = new QComboBox(QgsAttributesFormInitCode);
        mInitCodeSourceComboBox->setObjectName(QString::fromUtf8("mInitCodeSourceComboBox"));

        gridLayout_2->addWidget(mInitCodeSourceComboBox, 0, 1, 1, 2);

        mInitFunctionContainer = new QWidget(QgsAttributesFormInitCode);
        mInitFunctionContainer->setObjectName(QString::fromUtf8("mInitFunctionContainer"));
        gridLayout = new QGridLayout(mInitFunctionContainer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, -1);
        mInitFilePathLabel = new QLabel(mInitFunctionContainer);
        mInitFilePathLabel->setObjectName(QString::fromUtf8("mInitFilePathLabel"));

        gridLayout->addWidget(mInitFilePathLabel, 0, 0, 1, 1);

        mInitFileWidget = new QgsFileWidget(mInitFunctionContainer);
        mInitFileWidget->setObjectName(QString::fromUtf8("mInitFileWidget"));

        gridLayout->addWidget(mInitFileWidget, 0, 1, 1, 1);

        mInitFunctionLabel = new QLabel(mInitFunctionContainer);
        mInitFunctionLabel->setObjectName(QString::fromUtf8("mInitFunctionLabel"));

        gridLayout->addWidget(mInitFunctionLabel, 1, 0, 1, 1);

        mInitFunctionLineEdit = new QLineEdit(mInitFunctionContainer);
        mInitFunctionLineEdit->setObjectName(QString::fromUtf8("mInitFunctionLineEdit"));

        gridLayout->addWidget(mInitFunctionLineEdit, 1, 1, 1, 1);


        gridLayout_2->addWidget(mInitFunctionContainer, 1, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QgsAttributesFormInitCode);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 5, 0, 1, 3);

        mInitCodeEditorPython = new QgsCodeEditorPython(QgsAttributesFormInitCode);
        mInitCodeEditorPython->setObjectName(QString::fromUtf8("mInitCodeEditorPython"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(mInitCodeEditorPython->sizePolicy().hasHeightForWidth());
        mInitCodeEditorPython->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mInitCodeEditorPython, 3, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 1, 1, 1);

        QWidget::setTabOrder(mInitCodeSourceComboBox, mInitFunctionLineEdit);

        retranslateUi(QgsAttributesFormInitCode);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributesFormInitCode, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAttributesFormInitCode, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAttributesFormInitCode);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributesFormInitCode)
    {
        QgsAttributesFormInitCode->setWindowTitle(QCoreApplication::translate("QgsAttributesFormInitCode", "Python Init Code Configuration", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("QgsAttributesFormInitCode", "The function code of the function can be loaded from the source code entered \n"
"in this dialog, from an external python file or from the environment (for example \n"
"from a plugin or from startup.py).\n"
"\n"
"An example is:\n"
"\n"
"          from qgis.PyQt.QtWidgets import QWidget\n"
"\n"
"          def my_form_open(dialog, layer, feature):\n"
"	geom = feature.geometry()\n"
"	control = dialog.findChild(QWidget,\"MyLineEdit\")\n"
"\n"
"Reference in function name: my_form_open\n"
"\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QgsAttributesFormInitCode", "Python Init function", nullptr));
#if QT_CONFIG(tooltip)
        mInitCodeSourceComboBox->setToolTip(QCoreApplication::translate("QgsAttributesFormInitCode", "The function code of the function can be loaded from the source code entered \n"
"in this dialog,  from an external python file or from the environment (for example \n"
"from a plugin or from startup.py).\n"
"\n"
"An example is:\n"
"\n"
"          from qgis.PyQt.QtWidgets import QWidget\n"
"\n"
"          def my_form_open(dialog, layer, feature):\n"
"	geom = feature.geometry()\n"
"	control = dialog.findChild(QWidget,\"MyLineEdit\")\n"
"\n"
"Reference in function name: my_form_open\n"
"\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
        mInitFilePathLabel->setText(QCoreApplication::translate("QgsAttributesFormInitCode", "External file", nullptr));
        mInitFunctionLabel->setText(QCoreApplication::translate("QgsAttributesFormInitCode", "Function name", nullptr));
#if QT_CONFIG(tooltip)
        mInitFunctionLineEdit->setToolTip(QCoreApplication::translate("QgsAttributesFormInitCode", "Enter the name of the form init function.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsAttributesFormInitCode: public Ui_QgsAttributesFormInitCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTESFORMINITCODE_H
