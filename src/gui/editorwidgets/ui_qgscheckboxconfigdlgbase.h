/********************************************************************************
** Form generated from reading UI file 'qgscheckboxconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCHECKBOXCONFIGDLGBASE_H
#define UI_QGSCHECKBOXCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCheckBoxConfigDlgBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *mDisplayAsTextComboBox;
    QCheckBox *mAllowNullState;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *leUncheckedState;
    QLabel *label_2;
    QLineEdit *leCheckedState;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsCheckBoxConfigDlgBase)
    {
        if (QgsCheckBoxConfigDlgBase->objectName().isEmpty())
            QgsCheckBoxConfigDlgBase->setObjectName(QString::fromUtf8("QgsCheckBoxConfigDlgBase"));
        QgsCheckBoxConfigDlgBase->resize(395, 351);
        QgsCheckBoxConfigDlgBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsCheckBoxConfigDlgBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(QgsCheckBoxConfigDlgBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 2);

        mDisplayAsTextComboBox = new QComboBox(groupBox_2);
        mDisplayAsTextComboBox->setObjectName(QString::fromUtf8("mDisplayAsTextComboBox"));

        gridLayout_3->addWidget(mDisplayAsTextComboBox, 1, 0, 1, 2);

        mAllowNullState = new QCheckBox(groupBox_2);
        mAllowNullState->setObjectName(QString::fromUtf8("mAllowNullState"));

        gridLayout_3->addWidget(mAllowNullState, 2, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox = new QGroupBox(QgsCheckBoxConfigDlgBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        leUncheckedState = new QLineEdit(groupBox);
        leUncheckedState->setObjectName(QString::fromUtf8("leUncheckedState"));

        gridLayout_2->addWidget(leUncheckedState, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        leCheckedState = new QLineEdit(groupBox);
        leCheckedState->setObjectName(QString::fromUtf8("leCheckedState"));

        gridLayout_2->addWidget(leCheckedState, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(leCheckedState, leUncheckedState);
        QWidget::setTabOrder(leUncheckedState, mDisplayAsTextComboBox);

        retranslateUi(QgsCheckBoxConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsCheckBoxConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCheckBoxConfigDlgBase)
    {
        groupBox_2->setTitle(QCoreApplication::translate("QgsCheckBoxConfigDlgBase", "Display Settings", nullptr));
        label_5->setText(QCoreApplication::translate("QgsCheckBoxConfigDlgBase", "Display the checkbox state as a plain text value (e.g. in an attribute table) using", nullptr));
        mAllowNullState->setText(QCoreApplication::translate("QgsCheckBoxConfigDlgBase", "Allow NULL representation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsCheckBoxConfigDlgBase", "Representation", nullptr));
        label_3->setText(QCoreApplication::translate("QgsCheckBoxConfigDlgBase", "Unchecked state", nullptr));
        label_2->setText(QCoreApplication::translate("QgsCheckBoxConfigDlgBase", "Checked state", nullptr));
        label_4->setText(QCoreApplication::translate("QgsCheckBoxConfigDlgBase", "The checked and unchecked representation state are the raw values stored in the layer when the checkbox is checked or unchecked.", nullptr));
        (void)QgsCheckBoxConfigDlgBase;
    } // retranslateUi

};

namespace Ui {
    class QgsCheckBoxConfigDlgBase: public Ui_QgsCheckBoxConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCHECKBOXCONFIGDLGBASE_H
