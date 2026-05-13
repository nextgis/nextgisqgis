/********************************************************************************
** Form generated from reading UI file 'qgsmergedfeaturerendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMERGEDFEATURERENDERERWIDGETBASE_H
#define UI_QGSMERGEDFEATURERENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMergedFeatureRendererWidgetBase
{
public:
    QVBoxLayout *mLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mRendererLabel;
    QComboBox *mRendererComboBox;

    void setupUi(QWidget *QgsMergedFeatureRendererWidgetBase)
    {
        if (QgsMergedFeatureRendererWidgetBase->objectName().isEmpty())
            QgsMergedFeatureRendererWidgetBase->setObjectName(QString::fromUtf8("QgsMergedFeatureRendererWidgetBase"));
        QgsMergedFeatureRendererWidgetBase->resize(316, 78);
        QgsMergedFeatureRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        mLayout = new QVBoxLayout(QgsMergedFeatureRendererWidgetBase);
        mLayout->setObjectName(QString::fromUtf8("mLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mRendererLabel = new QLabel(QgsMergedFeatureRendererWidgetBase);
        mRendererLabel->setObjectName(QString::fromUtf8("mRendererLabel"));

        horizontalLayout->addWidget(mRendererLabel);

        mRendererComboBox = new QComboBox(QgsMergedFeatureRendererWidgetBase);
        mRendererComboBox->setObjectName(QString::fromUtf8("mRendererComboBox"));

        horizontalLayout->addWidget(mRendererComboBox);


        mLayout->addLayout(horizontalLayout);


        retranslateUi(QgsMergedFeatureRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsMergedFeatureRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMergedFeatureRendererWidgetBase)
    {
        mRendererLabel->setText(QCoreApplication::translate("QgsMergedFeatureRendererWidgetBase", "Sub renderer", nullptr));
        (void)QgsMergedFeatureRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMergedFeatureRendererWidgetBase: public Ui_QgsMergedFeatureRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMERGEDFEATURERENDERERWIDGETBASE_H
