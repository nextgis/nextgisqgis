/********************************************************************************
** Form generated from reading UI file 'qgscrsdefinitionwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCRSDEFINITIONWIDGETBASE_H
#define UI_QGSCRSDEFINITIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCrsDefinitionWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_4;
    QPushButton *mButtonValidate;
    QPushButton *mButtonCopyCRS;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *mTextEditParameters;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *mFormatComboBox;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *textLabel2_2_2;
    QLabel *label_2;
    QLabel *textLabel1_3;
    QLabel *textLabel2_3;
    QLabel *textLabel2_2;
    QLineEdit *mNorthWGS84Edit;
    QLabel *mProjectedXLabel;
    QLineEdit *mEastWGS84Edit;
    QLabel *mProjectedYLabel;
    QPushButton *mButtonCalculate;

    void setupUi(QWidget *QgsCrsDefinitionWidgetBase)
    {
        if (QgsCrsDefinitionWidgetBase->objectName().isEmpty())
            QgsCrsDefinitionWidgetBase->setObjectName(QString::fromUtf8("QgsCrsDefinitionWidgetBase"));
        QgsCrsDefinitionWidgetBase->resize(499, 540);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsCrsDefinitionWidgetBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsCrsDefinitionWidgetBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QgsCollapsibleGroupBox(QgsCrsDefinitionWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mButtonValidate = new QPushButton(groupBox);
        mButtonValidate->setObjectName(QString::fromUtf8("mButtonValidate"));

        gridLayout_4->addWidget(mButtonValidate, 0, 2, 1, 1);

        mButtonCopyCRS = new QPushButton(groupBox);
        mButtonCopyCRS->setObjectName(QString::fromUtf8("mButtonCopyCRS"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonCopyCRS->setIcon(icon1);

        gridLayout_4->addWidget(mButtonCopyCRS, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 2, 1, 1);

        mTextEditParameters = new QPlainTextEdit(groupBox);
        mTextEditParameters->setObjectName(QString::fromUtf8("mTextEditParameters"));

        gridLayout_4->addWidget(mTextEditParameters, 0, 0, 2, 1);


        gridLayout_3->addLayout(gridLayout_4, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        mFormatComboBox = new QComboBox(groupBox);
        mFormatComboBox->setObjectName(QString::fromUtf8("mFormatComboBox"));

        gridLayout_3->addWidget(mFormatComboBox, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QgsCollapsibleGroupBox(QgsCrsDefinitionWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setProperty("collapsed", QVariant(true));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel2_2_2 = new QLabel(groupBox_2);
        textLabel2_2_2->setObjectName(QString::fromUtf8("textLabel2_2_2"));

        gridLayout1->addWidget(textLabel2_2_2, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout1->addWidget(label_2, 0, 0, 1, 3);

        textLabel1_3 = new QLabel(groupBox_2);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        gridLayout1->addWidget(textLabel1_3, 1, 1, 1, 1);

        textLabel2_3 = new QLabel(groupBox_2);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

        gridLayout1->addWidget(textLabel2_3, 1, 2, 1, 1);

        textLabel2_2 = new QLabel(groupBox_2);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout1->addWidget(textLabel2_2, 2, 0, 1, 1);

        mNorthWGS84Edit = new QLineEdit(groupBox_2);
        mNorthWGS84Edit->setObjectName(QString::fromUtf8("mNorthWGS84Edit"));
        mNorthWGS84Edit->setEnabled(true);

        gridLayout1->addWidget(mNorthWGS84Edit, 2, 1, 1, 1);

        mProjectedXLabel = new QLabel(groupBox_2);
        mProjectedXLabel->setObjectName(QString::fromUtf8("mProjectedXLabel"));
        mProjectedXLabel->setEnabled(true);
        mProjectedXLabel->setFrameShape(QFrame::Box);

        gridLayout1->addWidget(mProjectedXLabel, 2, 2, 1, 1);

        mEastWGS84Edit = new QLineEdit(groupBox_2);
        mEastWGS84Edit->setObjectName(QString::fromUtf8("mEastWGS84Edit"));

        gridLayout1->addWidget(mEastWGS84Edit, 3, 1, 1, 1);

        mProjectedYLabel = new QLabel(groupBox_2);
        mProjectedYLabel->setObjectName(QString::fromUtf8("mProjectedYLabel"));
        mProjectedYLabel->setEnabled(true);
        mProjectedYLabel->setFrameShape(QFrame::Box);
        mProjectedYLabel->setMargin(1);

        gridLayout1->addWidget(mProjectedYLabel, 3, 2, 1, 1);

        mButtonCalculate = new QPushButton(groupBox_2);
        mButtonCalculate->setObjectName(QString::fromUtf8("mButtonCalculate"));

        gridLayout1->addWidget(mButtonCalculate, 4, 0, 1, 3);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        textLabel2_2_2->setBuddy(mEastWGS84Edit);
        textLabel2_2->setBuddy(mNorthWGS84Edit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mFormatComboBox, mTextEditParameters);
        QWidget::setTabOrder(mTextEditParameters, mButtonCopyCRS);
        QWidget::setTabOrder(mButtonCopyCRS, mButtonValidate);
        QWidget::setTabOrder(mButtonValidate, mNorthWGS84Edit);
        QWidget::setTabOrder(mNorthWGS84Edit, mEastWGS84Edit);
        QWidget::setTabOrder(mEastWGS84Edit, mButtonCalculate);

        retranslateUi(QgsCrsDefinitionWidgetBase);

        QMetaObject::connectSlotsByName(QgsCrsDefinitionWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCrsDefinitionWidgetBase)
    {
        QgsCrsDefinitionWidgetBase->setWindowTitle(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Custom Coordinate Reference System Definition", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Definition", nullptr));
#if QT_CONFIG(tooltip)
        mButtonValidate->setToolTip(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Validate the current CRS definition and test whether it is an acceptable projection definition", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonValidate->setText(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "&Validate", nullptr));
#if QT_CONFIG(tooltip)
        mButtonCopyCRS->setToolTip(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Copy parameters from existing CRS", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonCopyCRS->setText(QString());
        label_5->setText(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Format", nullptr));
        label_4->setText(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Parameters", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Test", nullptr));
        textLabel2_2_2->setText(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Longitude", nullptr));
        label_2->setText(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Use the text boxes below to test the CRS definition you are creating. Enter a coordinate where both the lat/long and the transformed result are known (for example by reading off a map). Then press the calculate button to see if the CRS definition you are creating is accurate.", nullptr));
        textLabel1_3->setText(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Geographic / WGS84", nullptr));
        textLabel2_3->setText(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Destination CRS        ", nullptr));
        textLabel2_2->setText(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Latitude", nullptr));
        mProjectedXLabel->setText(QString());
        mProjectedYLabel->setText(QString());
        mButtonCalculate->setText(QCoreApplication::translate("QgsCrsDefinitionWidgetBase", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsCrsDefinitionWidgetBase: public Ui_QgsCrsDefinitionWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCRSDEFINITIONWIDGETBASE_H
