/********************************************************************************
** Form generated from reading UI file 'qgsannotationcommonpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONCOMMONPROPERTIESWIDGETBASE_H
#define UI_QGSANNOTATIONCOMMONPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsscalewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationCommonPropertiesWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QgsSpinBox *mSpinZIndex;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mCalloutCheckBox;
    QToolButton *mCalloutPropertiesButton;
    QGroupBox *mReferenceScaleGroup;
    QVBoxLayout *verticalLayout;
    QgsScaleWidget *mReferenceScaleWidget;

    void setupUi(QWidget *QgsAnnotationCommonPropertiesWidgetBase)
    {
        if (QgsAnnotationCommonPropertiesWidgetBase->objectName().isEmpty())
            QgsAnnotationCommonPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationCommonPropertiesWidgetBase"));
        QgsAnnotationCommonPropertiesWidgetBase->resize(321, 155);
        gridLayout = new QGridLayout(QgsAnnotationCommonPropertiesWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsAnnotationCommonPropertiesWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mSpinZIndex = new QgsSpinBox(groupBox);
        mSpinZIndex->setObjectName(QString::fromUtf8("mSpinZIndex"));
        mSpinZIndex->setMinimum(-9999999);
        mSpinZIndex->setMaximum(9999999);

        gridLayout_2->addWidget(mSpinZIndex, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        gridLayout->addWidget(groupBox, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mCalloutCheckBox = new QCheckBox(QgsAnnotationCommonPropertiesWidgetBase);
        mCalloutCheckBox->setObjectName(QString::fromUtf8("mCalloutCheckBox"));

        horizontalLayout->addWidget(mCalloutCheckBox);

        mCalloutPropertiesButton = new QToolButton(QgsAnnotationCommonPropertiesWidgetBase);
        mCalloutPropertiesButton->setObjectName(QString::fromUtf8("mCalloutPropertiesButton"));

        horizontalLayout->addWidget(mCalloutPropertiesButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        mReferenceScaleGroup = new QGroupBox(QgsAnnotationCommonPropertiesWidgetBase);
        mReferenceScaleGroup->setObjectName(QString::fromUtf8("mReferenceScaleGroup"));
        mReferenceScaleGroup->setCheckable(true);
        verticalLayout = new QVBoxLayout(mReferenceScaleGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mReferenceScaleWidget = new QgsScaleWidget(mReferenceScaleGroup);
        mReferenceScaleWidget->setObjectName(QString::fromUtf8("mReferenceScaleWidget"));
        mReferenceScaleWidget->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(mReferenceScaleWidget);


        gridLayout->addWidget(mReferenceScaleGroup, 4, 0, 1, 1);

        QWidget::setTabOrder(mCalloutCheckBox, mCalloutPropertiesButton);
        QWidget::setTabOrder(mCalloutPropertiesButton, mReferenceScaleGroup);
        QWidget::setTabOrder(mReferenceScaleGroup, mReferenceScaleWidget);
        QWidget::setTabOrder(mReferenceScaleWidget, mSpinZIndex);

        retranslateUi(QgsAnnotationCommonPropertiesWidgetBase);

        QMetaObject::connectSlotsByName(QgsAnnotationCommonPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationCommonPropertiesWidgetBase)
    {
        QgsAnnotationCommonPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationCommonPropertiesWidgetBase", "Annotation Properties", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsAnnotationCommonPropertiesWidgetBase", "Rendering", nullptr));
        label->setText(QCoreApplication::translate("QgsAnnotationCommonPropertiesWidgetBase", "Z-index", nullptr));
        mCalloutCheckBox->setText(QCoreApplication::translate("QgsAnnotationCommonPropertiesWidgetBase", "Show callout", nullptr));
        mCalloutPropertiesButton->setText(QCoreApplication::translate("QgsAnnotationCommonPropertiesWidgetBase", "...", nullptr));
        mReferenceScaleGroup->setTitle(QCoreApplication::translate("QgsAnnotationCommonPropertiesWidgetBase", "Reference Scale", nullptr));
#if QT_CONFIG(tooltip)
        mReferenceScaleWidget->setToolTip(QCoreApplication::translate("QgsAnnotationCommonPropertiesWidgetBase", "Minimum scale, i.e. most \"zoomed out\".", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationCommonPropertiesWidgetBase: public Ui_QgsAnnotationCommonPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONCOMMONPROPERTIESWIDGETBASE_H
