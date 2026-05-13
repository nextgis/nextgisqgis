/********************************************************************************
** Form generated from reading UI file 'qgslabelingrulepropswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGRULEPROPSWIDGET_H
#define UI_QGSLABELINGRULEPROPSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingRulePropsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLineEdit *editDescription;
    QRadioButton *mFilterRadio;
    QRadioButton *mElseRadio;
    QLabel *label;
    QFrame *filterFrame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editFilter;
    QPushButton *btnExpressionBuilder;
    QPushButton *btnTestFilter;
    QGroupBox *groupScale;
    QHBoxLayout *horizontalLayout_2;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QGroupBox *groupSettings;

    void setupUi(QWidget *QgsLabelingRulePropsWidget)
    {
        if (QgsLabelingRulePropsWidget->objectName().isEmpty())
            QgsLabelingRulePropsWidget->setObjectName(QString::fromUtf8("QgsLabelingRulePropsWidget"));
        QgsLabelingRulePropsWidget->resize(579, 336);
        verticalLayout = new QVBoxLayout(QgsLabelingRulePropsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsLabelingRulePropsWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 579, 336));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_1 = new QLabel(scrollAreaWidgetContents);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        editDescription = new QLineEdit(scrollAreaWidgetContents);
        editDescription->setObjectName(QString::fromUtf8("editDescription"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editDescription);

        mFilterRadio = new QRadioButton(scrollAreaWidgetContents);
        mFilterRadio->setObjectName(QString::fromUtf8("mFilterRadio"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mFilterRadio);

        mElseRadio = new QRadioButton(scrollAreaWidgetContents);
        mElseRadio->setObjectName(QString::fromUtf8("mElseRadio"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mElseRadio);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label);

        filterFrame = new QFrame(scrollAreaWidgetContents);
        filterFrame->setObjectName(QString::fromUtf8("filterFrame"));
        horizontalLayout = new QHBoxLayout(filterFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        editFilter = new QLineEdit(filterFrame);
        editFilter->setObjectName(QString::fromUtf8("editFilter"));

        horizontalLayout->addWidget(editFilter);

        btnExpressionBuilder = new QPushButton(filterFrame);
        btnExpressionBuilder->setObjectName(QString::fromUtf8("btnExpressionBuilder"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnExpressionBuilder->sizePolicy().hasHeightForWidth());
        btnExpressionBuilder->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnExpressionBuilder->setIcon(icon);

        horizontalLayout->addWidget(btnExpressionBuilder);

        btnTestFilter = new QPushButton(filterFrame);
        btnTestFilter->setObjectName(QString::fromUtf8("btnTestFilter"));

        horizontalLayout->addWidget(btnTestFilter);


        formLayout->setWidget(1, QFormLayout::FieldRole, filterFrame);


        verticalLayout_2->addLayout(formLayout);

        groupScale = new QGroupBox(scrollAreaWidgetContents);
        groupScale->setObjectName(QString::fromUtf8("groupScale"));
        groupScale->setCheckable(true);
        groupScale->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(groupScale);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mScaleRangeWidget = new QgsScaleRangeWidget(groupScale);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        horizontalLayout_2->addWidget(mScaleRangeWidget);


        verticalLayout_2->addWidget(groupScale);

        groupSettings = new QGroupBox(scrollAreaWidgetContents);
        groupSettings->setObjectName(QString::fromUtf8("groupSettings"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSettings->sizePolicy().hasHeightForWidth());
        groupSettings->setSizePolicy(sizePolicy1);
        groupSettings->setCheckable(true);

        verticalLayout_2->addWidget(groupSettings);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, editDescription);
        QWidget::setTabOrder(editDescription, mFilterRadio);
        QWidget::setTabOrder(mFilterRadio, editFilter);
        QWidget::setTabOrder(editFilter, btnExpressionBuilder);
        QWidget::setTabOrder(btnExpressionBuilder, btnTestFilter);
        QWidget::setTabOrder(btnTestFilter, mElseRadio);
        QWidget::setTabOrder(mElseRadio, groupScale);
        QWidget::setTabOrder(groupScale, groupSettings);

        retranslateUi(QgsLabelingRulePropsWidget);

        QMetaObject::connectSlotsByName(QgsLabelingRulePropsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelingRulePropsWidget)
    {
        QgsLabelingRulePropsWidget->setWindowTitle(QCoreApplication::translate("QgsLabelingRulePropsWidget", "Rule Properties", nullptr));
        label_1->setText(QCoreApplication::translate("QgsLabelingRulePropsWidget", "Description", nullptr));
        mFilterRadio->setText(QCoreApplication::translate("QgsLabelingRulePropsWidget", "Filter", nullptr));
        mElseRadio->setText(QCoreApplication::translate("QgsLabelingRulePropsWidget", "Else", nullptr));
        label->setText(QCoreApplication::translate("QgsLabelingRulePropsWidget", "Catch-all for other features", nullptr));
        btnTestFilter->setText(QCoreApplication::translate("QgsLabelingRulePropsWidget", "Test", nullptr));
        groupScale->setTitle(QCoreApplication::translate("QgsLabelingRulePropsWidget", "Scale Range", nullptr));
#if QT_CONFIG(tooltip)
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupSettings->setTitle(QCoreApplication::translate("QgsLabelingRulePropsWidget", "Labels", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingRulePropsWidget: public Ui_QgsLabelingRulePropsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGRULEPROPSWIDGET_H
