/********************************************************************************
** Form generated from reading UI file 'qgsprocessingfeaturesourceoptionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGFEATURESOURCEOPTIONSBASE_H
#define UI_QGSPROCESSINGFEATURESOURCEOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsexpressionlineedit.h"
#include "qgspanelwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingFeatureSourceOptionsBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QComboBox *mComboInvalidFeatureFiltering;
    QgsSpinBox *mFeatureLimitSpinBox;
    QgsExpressionLineEdit *mFilterExpressionWidget;
    QLabel *label_3;

    void setupUi(QgsPanelWidget *QgsProcessingFeatureSourceOptionsBase)
    {
        if (QgsProcessingFeatureSourceOptionsBase->objectName().isEmpty())
            QgsProcessingFeatureSourceOptionsBase->setObjectName(QString::fromUtf8("QgsProcessingFeatureSourceOptionsBase"));
        QgsProcessingFeatureSourceOptionsBase->resize(448, 197);
        QgsProcessingFeatureSourceOptionsBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsProcessingFeatureSourceOptionsBase);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsProcessingFeatureSourceOptionsBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 197));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mComboInvalidFeatureFiltering = new QComboBox(scrollAreaWidgetContents);
        mComboInvalidFeatureFiltering->setObjectName(QString::fromUtf8("mComboInvalidFeatureFiltering"));

        gridLayout->addWidget(mComboInvalidFeatureFiltering, 1, 1, 1, 1);

        mFeatureLimitSpinBox = new QgsSpinBox(scrollAreaWidgetContents);
        mFeatureLimitSpinBox->setObjectName(QString::fromUtf8("mFeatureLimitSpinBox"));
        mFeatureLimitSpinBox->setMaximum(999999999);

        gridLayout->addWidget(mFeatureLimitSpinBox, 2, 1, 1, 1);

        mFilterExpressionWidget = new QgsExpressionLineEdit(scrollAreaWidgetContents);
        mFilterExpressionWidget->setObjectName(QString::fromUtf8("mFilterExpressionWidget"));
        mFilterExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mFilterExpressionWidget, 3, 1, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(QgsProcessingFeatureSourceOptionsBase);

        QMetaObject::connectSlotsByName(QgsProcessingFeatureSourceOptionsBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsProcessingFeatureSourceOptionsBase)
    {
        label_2->setText(QCoreApplication::translate("QgsProcessingFeatureSourceOptionsBase", "Limit features processed", nullptr));
        label->setText(QCoreApplication::translate("QgsProcessingFeatureSourceOptionsBase", "Invalid feature filtering", nullptr));
#if QT_CONFIG(tooltip)
        mComboInvalidFeatureFiltering->setToolTip(QCoreApplication::translate("QgsProcessingFeatureSourceOptionsBase", "If set, allows the default method for handling features with invalid geometries to be overridden", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mFeatureLimitSpinBox->setToolTip(QCoreApplication::translate("QgsProcessingFeatureSourceOptionsBase", "If set, limits the maximum number of features which will be processed from this source", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QgsProcessingFeatureSourceOptionsBase", "Feature filter", nullptr));
        (void)QgsProcessingFeatureSourceOptionsBase;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingFeatureSourceOptionsBase: public Ui_QgsProcessingFeatureSourceOptionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGFEATURESOURCEOPTIONSBASE_H
