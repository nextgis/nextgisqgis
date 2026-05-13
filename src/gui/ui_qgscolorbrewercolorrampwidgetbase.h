/********************************************************************************
** Form generated from reading UI file 'qgscolorbrewercolorrampwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOLORBREWERCOLORRAMPWIDGETBASE_H
#define UI_QGSCOLORBREWERCOLORRAMPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsColorBrewerColorRampWidgetBase
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *cboSchemeName;
    QComboBox *cboColors;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QLabel *lblPreview;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsColorBrewerColorRampWidgetBase)
    {
        if (QgsColorBrewerColorRampWidgetBase->objectName().isEmpty())
            QgsColorBrewerColorRampWidgetBase->setObjectName(QString::fromUtf8("QgsColorBrewerColorRampWidgetBase"));
        QgsColorBrewerColorRampWidgetBase->resize(224, 164);
        vboxLayout = new QVBoxLayout(QgsColorBrewerColorRampWidgetBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(QgsColorBrewerColorRampWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cboSchemeName = new QComboBox(QgsColorBrewerColorRampWidgetBase);
        cboSchemeName->setObjectName(QString::fromUtf8("cboSchemeName"));

        gridLayout->addWidget(cboSchemeName, 0, 1, 1, 1);

        cboColors = new QComboBox(QgsColorBrewerColorRampWidgetBase);
        cboColors->setObjectName(QString::fromUtf8("cboColors"));

        gridLayout->addWidget(cboColors, 1, 1, 1, 1);

        label = new QLabel(QgsColorBrewerColorRampWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        groupBox = new QGroupBox(QgsColorBrewerColorRampWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        lblPreview = new QLabel(groupBox);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(lblPreview);


        vboxLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(cboColors);
        label->setBuddy(cboSchemeName);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(cboSchemeName, cboColors);

        retranslateUi(QgsColorBrewerColorRampWidgetBase);

        QMetaObject::connectSlotsByName(QgsColorBrewerColorRampWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsColorBrewerColorRampWidgetBase)
    {
        QgsColorBrewerColorRampWidgetBase->setWindowTitle(QCoreApplication::translate("QgsColorBrewerColorRampWidgetBase", "ColorBrewer Ramp", nullptr));
        label_2->setText(QCoreApplication::translate("QgsColorBrewerColorRampWidgetBase", "Colors", nullptr));
        label->setText(QCoreApplication::translate("QgsColorBrewerColorRampWidgetBase", "Scheme name", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsColorBrewerColorRampWidgetBase", "Preview", nullptr));
        lblPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsColorBrewerColorRampWidgetBase: public Ui_QgsColorBrewerColorRampWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOLORBREWERCOLORRAMPWIDGETBASE_H
