/********************************************************************************
** Form generated from reading UI file 'qgslayoutshapewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTSHAPEWIDGETBASE_H
#define UI_QGSLAYOUTSHAPEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutShapeWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mCornerRadiusSpinBox;
    QgsLayoutUnitsComboBox *mRadiusUnitsComboBox;
    QLabel *label;
    QgsSymbolButton *mShapeStyleButton;
    QComboBox *mShapeComboBox;

    void setupUi(QWidget *QgsLayoutShapeWidgetBase)
    {
        if (QgsLayoutShapeWidgetBase->objectName().isEmpty())
            QgsLayoutShapeWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutShapeWidgetBase"));
        QgsLayoutShapeWidgetBase->resize(308, 189);
        QgsLayoutShapeWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsLayoutShapeWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsLayoutShapeWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout->addWidget(label_2);

        scrollArea = new QgsScrollArea(QgsLayoutShapeWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 306, 163));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mCornerRadiusSpinBox = new QgsDoubleSpinBox(groupBox);
        mCornerRadiusSpinBox->setObjectName(QString::fromUtf8("mCornerRadiusSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCornerRadiusSpinBox->sizePolicy().hasHeightForWidth());
        mCornerRadiusSpinBox->setSizePolicy(sizePolicy1);
        mCornerRadiusSpinBox->setMaximum(999.000000000000000);

        horizontalLayout->addWidget(mCornerRadiusSpinBox);

        mRadiusUnitsComboBox = new QgsLayoutUnitsComboBox(groupBox);
        mRadiusUnitsComboBox->setObjectName(QString::fromUtf8("mRadiusUnitsComboBox"));

        horizontalLayout->addWidget(mRadiusUnitsComboBox);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        mShapeStyleButton = new QgsSymbolButton(groupBox);
        mShapeStyleButton->setObjectName(QString::fromUtf8("mShapeStyleButton"));
        sizePolicy1.setHeightForWidth(mShapeStyleButton->sizePolicy().hasHeightForWidth());
        mShapeStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mShapeStyleButton, 2, 1, 1, 1);

        mShapeComboBox = new QComboBox(groupBox);
        mShapeComboBox->setObjectName(QString::fromUtf8("mShapeComboBox"));

        gridLayout->addWidget(mShapeComboBox, 0, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(groupBox, scrollArea);
        QWidget::setTabOrder(scrollArea, mShapeComboBox);
        QWidget::setTabOrder(mShapeComboBox, mCornerRadiusSpinBox);
        QWidget::setTabOrder(mCornerRadiusSpinBox, mRadiusUnitsComboBox);
        QWidget::setTabOrder(mRadiusUnitsComboBox, mShapeStyleButton);

        retranslateUi(QgsLayoutShapeWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutShapeWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutShapeWidgetBase)
    {
        label_2->setText(QCoreApplication::translate("QgsLayoutShapeWidgetBase", "Shape", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutShapeWidgetBase", "Main Properties", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLayoutShapeWidgetBase", "Corner radius", nullptr));
        mCornerRadiusSpinBox->setSuffix(QString());
        label->setText(QCoreApplication::translate("QgsLayoutShapeWidgetBase", "Style", nullptr));
        mShapeStyleButton->setText(QCoreApplication::translate("QgsLayoutShapeWidgetBase", "Change\342\200\246", nullptr));
        (void)QgsLayoutShapeWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutShapeWidgetBase: public Ui_QgsLayoutShapeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTSHAPEWIDGETBASE_H
