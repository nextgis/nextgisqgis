/********************************************************************************
** Form generated from reading UI file 'qgsexpressionpreviewbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONPREVIEWBASE_H
#define UI_QGSEXPRESSIONPREVIEWBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsfeaturepickerwidget.h"
#include "qgsstackedwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionPreviewWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *mPreviewLabel;
    QgsStackedWidget *mStackedWidget;
    QWidget *mPageFeaturePicker;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QgsFeaturePickerWidget *mFeaturePickerWidget;
    QWidget *mPageCustomPicker;
    QHBoxLayout *horizontalLayout;
    QLabel *mCustomLabel;
    QComboBox *mCustomComboBox;
    QToolButton *mCustomButtonPrev;
    QToolButton *mCustomButtonNext;

    void setupUi(QWidget *QgsExpressionPreviewWidgetBase)
    {
        if (QgsExpressionPreviewWidgetBase->objectName().isEmpty())
            QgsExpressionPreviewWidgetBase->setObjectName(QString::fromUtf8("QgsExpressionPreviewWidgetBase"));
        QgsExpressionPreviewWidgetBase->resize(400, 50);
        gridLayout = new QGridLayout(QgsExpressionPreviewWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsExpressionPreviewWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mPreviewLabel = new QLabel(QgsExpressionPreviewWidgetBase);
        mPreviewLabel->setObjectName(QString::fromUtf8("mPreviewLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mPreviewLabel->sizePolicy().hasHeightForWidth());
        mPreviewLabel->setSizePolicy(sizePolicy1);
        mPreviewLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mPreviewLabel->setWordWrap(true);
        mPreviewLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mPreviewLabel, 1, 1, 1, 1);

        mStackedWidget = new QgsStackedWidget(QgsExpressionPreviewWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mStackedWidget->sizePolicy().hasHeightForWidth());
        mStackedWidget->setSizePolicy(sizePolicy2);
        mPageFeaturePicker = new QWidget();
        mPageFeaturePicker->setObjectName(QString::fromUtf8("mPageFeaturePicker"));
        sizePolicy2.setHeightForWidth(mPageFeaturePicker->sizePolicy().hasHeightForWidth());
        mPageFeaturePicker->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(mPageFeaturePicker);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(mPageFeaturePicker);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        mFeaturePickerWidget = new QgsFeaturePickerWidget(mPageFeaturePicker);
        mFeaturePickerWidget->setObjectName(QString::fromUtf8("mFeaturePickerWidget"));

        horizontalLayout_2->addWidget(mFeaturePickerWidget);

        mStackedWidget->addWidget(mPageFeaturePicker);
        mPageCustomPicker = new QWidget();
        mPageCustomPicker->setObjectName(QString::fromUtf8("mPageCustomPicker"));
        sizePolicy2.setHeightForWidth(mPageCustomPicker->sizePolicy().hasHeightForWidth());
        mPageCustomPicker->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(mPageCustomPicker);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mCustomLabel = new QLabel(mPageCustomPicker);
        mCustomLabel->setObjectName(QString::fromUtf8("mCustomLabel"));

        horizontalLayout->addWidget(mCustomLabel);

        mCustomComboBox = new QComboBox(mPageCustomPicker);
        mCustomComboBox->setObjectName(QString::fromUtf8("mCustomComboBox"));

        horizontalLayout->addWidget(mCustomComboBox);

        mCustomButtonPrev = new QToolButton(mPageCustomPicker);
        mCustomButtonPrev->setObjectName(QString::fromUtf8("mCustomButtonPrev"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCustomButtonPrev->setIcon(icon);

        horizontalLayout->addWidget(mCustomButtonPrev);

        mCustomButtonNext = new QToolButton(mPageCustomPicker);
        mCustomButtonNext->setObjectName(QString::fromUtf8("mCustomButtonNext"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCustomButtonNext->setIcon(icon1);

        horizontalLayout->addWidget(mCustomButtonNext);

        horizontalLayout->setStretch(1, 1);
        mStackedWidget->addWidget(mPageCustomPicker);

        gridLayout->addWidget(mStackedWidget, 0, 0, 1, 2);


        retranslateUi(QgsExpressionPreviewWidgetBase);

        mStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsExpressionPreviewWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsExpressionPreviewWidgetBase)
    {
        QgsExpressionPreviewWidgetBase->setWindowTitle(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "Expression Preview", nullptr));
        label->setText(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "Preview:", nullptr));
        mPreviewLabel->setText(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "Select the feature to use for the output preview", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "Feature", nullptr));
        mCustomLabel->setText(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "Result", nullptr));
        mCustomButtonPrev->setText(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "...", nullptr));
        mCustomButtonNext->setText(QCoreApplication::translate("QgsExpressionPreviewWidgetBase", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionPreviewWidgetBase: public Ui_QgsExpressionPreviewWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONPREVIEWBASE_H
