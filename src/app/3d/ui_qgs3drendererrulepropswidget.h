/********************************************************************************
** Form generated from reading UI file 'qgs3drendererrulepropswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGS3DRENDERERRULEPROPSWIDGET_H
#define UI_QGS3DRENDERERRULEPROPSWIDGET_H

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
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_Qgs3DRendererRulePropsWidget
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
    QGroupBox *groupSymbol;

    void setupUi(QWidget *Qgs3DRendererRulePropsWidget)
    {
        if (Qgs3DRendererRulePropsWidget->objectName().isEmpty())
            Qgs3DRendererRulePropsWidget->setObjectName(QString::fromUtf8("Qgs3DRendererRulePropsWidget"));
        Qgs3DRendererRulePropsWidget->resize(579, 336);
        verticalLayout = new QVBoxLayout(Qgs3DRendererRulePropsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(Qgs3DRendererRulePropsWidget);
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

        groupSymbol = new QGroupBox(scrollAreaWidgetContents);
        groupSymbol->setObjectName(QString::fromUtf8("groupSymbol"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSymbol->sizePolicy().hasHeightForWidth());
        groupSymbol->setSizePolicy(sizePolicy1);
        groupSymbol->setCheckable(true);

        verticalLayout_2->addWidget(groupSymbol);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, editDescription);
        QWidget::setTabOrder(editDescription, mFilterRadio);
        QWidget::setTabOrder(mFilterRadio, editFilter);
        QWidget::setTabOrder(editFilter, btnExpressionBuilder);
        QWidget::setTabOrder(btnExpressionBuilder, btnTestFilter);
        QWidget::setTabOrder(btnTestFilter, mElseRadio);
        QWidget::setTabOrder(mElseRadio, groupSymbol);

        retranslateUi(Qgs3DRendererRulePropsWidget);

        QMetaObject::connectSlotsByName(Qgs3DRendererRulePropsWidget);
    } // setupUi

    void retranslateUi(QWidget *Qgs3DRendererRulePropsWidget)
    {
        Qgs3DRendererRulePropsWidget->setWindowTitle(QCoreApplication::translate("Qgs3DRendererRulePropsWidget", "Rule Properties", nullptr));
        label_1->setText(QCoreApplication::translate("Qgs3DRendererRulePropsWidget", "Description", nullptr));
        mFilterRadio->setText(QCoreApplication::translate("Qgs3DRendererRulePropsWidget", "Filter", nullptr));
        mElseRadio->setText(QCoreApplication::translate("Qgs3DRendererRulePropsWidget", "Else", nullptr));
        label->setText(QCoreApplication::translate("Qgs3DRendererRulePropsWidget", "Catch-all for other features", nullptr));
        btnTestFilter->setText(QCoreApplication::translate("Qgs3DRendererRulePropsWidget", "Test", nullptr));
        groupSymbol->setTitle(QCoreApplication::translate("Qgs3DRendererRulePropsWidget", "Symbol", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qgs3DRendererRulePropsWidget: public Ui_Qgs3DRendererRulePropsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGS3DRENDERERRULEPROPSWIDGET_H
