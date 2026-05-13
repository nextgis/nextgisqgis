/********************************************************************************
** Form generated from reading UI file 'qgsrendererrulepropsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERRULEPROPSDIALOGBASE_H
#define UI_QGSRENDERERRULEPROPSDIALOGBASE_H

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

QT_BEGIN_NAMESPACE

class Ui_QgsRendererRulePropsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLineEdit *editLabel;
    QLabel *label_4;
    QLineEdit *editDescription;
    QFrame *filterFrame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editFilter;
    QPushButton *btnExpressionBuilder;
    QPushButton *btnTestFilter;
    QRadioButton *mElseRadio;
    QLabel *label_1;
    QRadioButton *mFilterRadio;
    QLabel *label;
    QGroupBox *groupScale;
    QHBoxLayout *horizontalLayout_2;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QGroupBox *groupSymbol;

    void setupUi(QWidget *QgsRendererRulePropsWidget)
    {
        if (QgsRendererRulePropsWidget->objectName().isEmpty())
            QgsRendererRulePropsWidget->setObjectName(QString::fromUtf8("QgsRendererRulePropsWidget"));
        QgsRendererRulePropsWidget->resize(443, 315);
        QgsRendererRulePropsWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsRendererRulePropsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        editLabel = new QLineEdit(QgsRendererRulePropsWidget);
        editLabel->setObjectName(QString::fromUtf8("editLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editLabel);

        label_4 = new QLabel(QgsRendererRulePropsWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        editDescription = new QLineEdit(QgsRendererRulePropsWidget);
        editDescription->setObjectName(QString::fromUtf8("editDescription"));

        formLayout->setWidget(6, QFormLayout::FieldRole, editDescription);

        filterFrame = new QFrame(QgsRendererRulePropsWidget);
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


        formLayout->setWidget(3, QFormLayout::FieldRole, filterFrame);

        mElseRadio = new QRadioButton(QgsRendererRulePropsWidget);
        mElseRadio->setObjectName(QString::fromUtf8("mElseRadio"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mElseRadio);

        label_1 = new QLabel(QgsRendererRulePropsWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        mFilterRadio = new QRadioButton(QgsRendererRulePropsWidget);
        mFilterRadio->setObjectName(QString::fromUtf8("mFilterRadio"));
        mFilterRadio->setChecked(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, mFilterRadio);

        label = new QLabel(QgsRendererRulePropsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label);


        verticalLayout->addLayout(formLayout);

        groupScale = new QGroupBox(QgsRendererRulePropsWidget);
        groupScale->setObjectName(QString::fromUtf8("groupScale"));
        groupScale->setCheckable(true);
        groupScale->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(groupScale);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mScaleRangeWidget = new QgsScaleRangeWidget(groupScale);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        horizontalLayout_2->addWidget(mScaleRangeWidget);


        verticalLayout->addWidget(groupScale);

        groupSymbol = new QGroupBox(QgsRendererRulePropsWidget);
        groupSymbol->setObjectName(QString::fromUtf8("groupSymbol"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSymbol->sizePolicy().hasHeightForWidth());
        groupSymbol->setSizePolicy(sizePolicy1);
        groupSymbol->setCheckable(true);

        verticalLayout->addWidget(groupSymbol);

        QWidget::setTabOrder(editLabel, mFilterRadio);
        QWidget::setTabOrder(mFilterRadio, editFilter);
        QWidget::setTabOrder(editFilter, btnExpressionBuilder);
        QWidget::setTabOrder(btnExpressionBuilder, btnTestFilter);
        QWidget::setTabOrder(btnTestFilter, mElseRadio);
        QWidget::setTabOrder(mElseRadio, editDescription);
        QWidget::setTabOrder(editDescription, groupScale);
        QWidget::setTabOrder(groupScale, groupSymbol);

        retranslateUi(QgsRendererRulePropsWidget);
        QObject::connect(mFilterRadio, SIGNAL(toggled(bool)), filterFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(QgsRendererRulePropsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsRendererRulePropsWidget)
    {
        label_4->setText(QCoreApplication::translate("QgsRendererRulePropsWidget", "Description", nullptr));
        btnTestFilter->setText(QCoreApplication::translate("QgsRendererRulePropsWidget", "Test", nullptr));
        mElseRadio->setText(QCoreApplication::translate("QgsRendererRulePropsWidget", "Else", nullptr));
        label_1->setText(QCoreApplication::translate("QgsRendererRulePropsWidget", "Label", nullptr));
        mFilterRadio->setText(QCoreApplication::translate("QgsRendererRulePropsWidget", "Filter", nullptr));
        label->setText(QCoreApplication::translate("QgsRendererRulePropsWidget", "Catch-all for other features", nullptr));
        groupScale->setTitle(QCoreApplication::translate("QgsRendererRulePropsWidget", "Scale range", nullptr));
#if QT_CONFIG(tooltip)
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupSymbol->setTitle(QCoreApplication::translate("QgsRendererRulePropsWidget", "Symbol", nullptr));
        (void)QgsRendererRulePropsWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsRendererRulePropsWidget: public Ui_QgsRendererRulePropsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERRULEPROPSDIALOGBASE_H
