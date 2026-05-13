/********************************************************************************
** Form generated from reading UI file 'qgsattributesformproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTESFORMPROPERTIES_H
#define UI_QGSATTRIBUTESFORMPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributesFormProperties
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *mEditorLayoutComboBox;
    QToolButton *mTbInitCode;
    QComboBox *mFormSuppressCmbBx;
    QWidget *mUiFileFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *mEditFormLineEdit;
    QToolButton *pbnSelectEditForm;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *searchBarLayout;
    QgsFilterLineEdit *mSearchLineEdit;
    QVBoxLayout *verticalLayout;
    QToolButton *mShowAliasesButton;
    QToolButton *mAddContainerButton;
    QToolButton *mRemoveLayoutItemButton;
    QToolButton *mInvertSelectionButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QWidget *mAvailableWidgetsWidget;
    QSpacerItem *mTreeViewHorizontalSpacer;
    QWidget *mFormLayoutWidget;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_4;
    QWidget *mAttributeTypeFrame;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *QgsAttributesFormProperties)
    {
        if (QgsAttributesFormProperties->objectName().isEmpty())
            QgsAttributesFormProperties->setObjectName(QString::fromUtf8("QgsAttributesFormProperties"));
        QgsAttributesFormProperties->resize(1117, 556);
        QgsAttributesFormProperties->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsAttributesFormProperties);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(QgsAttributesFormProperties);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mEditorLayoutComboBox = new QComboBox(widget_2);
        mEditorLayoutComboBox->setObjectName(QString::fromUtf8("mEditorLayoutComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEditorLayoutComboBox->sizePolicy().hasHeightForWidth());
        mEditorLayoutComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mEditorLayoutComboBox);

        mTbInitCode = new QToolButton(widget_2);
        mTbInitCode->setObjectName(QString::fromUtf8("mTbInitCode"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/processingScript.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTbInitCode->setIcon(icon);
        mTbInitCode->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(mTbInitCode);

        mFormSuppressCmbBx = new QComboBox(widget_2);
        mFormSuppressCmbBx->setObjectName(QString::fromUtf8("mFormSuppressCmbBx"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFormSuppressCmbBx->sizePolicy().hasHeightForWidth());
        mFormSuppressCmbBx->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mFormSuppressCmbBx);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        mUiFileFrame = new QWidget(QgsAttributesFormProperties);
        mUiFileFrame->setObjectName(QString::fromUtf8("mUiFileFrame"));
        horizontalLayout_2 = new QHBoxLayout(mUiFileFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(mUiFileFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        mEditFormLineEdit = new QLineEdit(mUiFileFrame);
        mEditFormLineEdit->setObjectName(QString::fromUtf8("mEditFormLineEdit"));

        horizontalLayout_2->addWidget(mEditFormLineEdit);

        pbnSelectEditForm = new QToolButton(mUiFileFrame);
        pbnSelectEditForm->setObjectName(QString::fromUtf8("pbnSelectEditForm"));
        pbnSelectEditForm->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pbnSelectEditForm);


        gridLayout->addWidget(mUiFileFrame, 1, 0, 1, 1);

        splitter = new QSplitter(QgsAttributesFormProperties);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        searchBarLayout = new QHBoxLayout();
        searchBarLayout->setObjectName(QString::fromUtf8("searchBarLayout"));
        mSearchLineEdit = new QgsFilterLineEdit(widget);
        mSearchLineEdit->setObjectName(QString::fromUtf8("mSearchLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSearchLineEdit->sizePolicy().hasHeightForWidth());
        mSearchLineEdit->setSizePolicy(sizePolicy2);
        mSearchLineEdit->setShowSearchIcon(true);
        mSearchLineEdit->setProperty("qgisRelation", QVariant(QString::fromUtf8("")));

        searchBarLayout->addWidget(mSearchLineEdit);


        gridLayout_3->addLayout(searchBarLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        mShowAliasesButton = new QToolButton(widget);
        mShowAliasesButton->setObjectName(QString::fromUtf8("mShowAliasesButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mToggleAliases.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mShowAliasesButton->setIcon(icon1);
        mShowAliasesButton->setIconSize(QSize(20, 20));
        mShowAliasesButton->setCheckable(true);

        verticalLayout->addWidget(mShowAliasesButton);

        mAddContainerButton = new QToolButton(widget);
        mAddContainerButton->setObjectName(QString::fromUtf8("mAddContainerButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddContainerButton->setIcon(icon2);
        mAddContainerButton->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(mAddContainerButton);

        mRemoveLayoutItemButton = new QToolButton(widget);
        mRemoveLayoutItemButton->setObjectName(QString::fromUtf8("mRemoveLayoutItemButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveLayoutItemButton->setIcon(icon3);
        mRemoveLayoutItemButton->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(mRemoveLayoutItemButton);

        mInvertSelectionButton = new QToolButton(widget);
        mInvertSelectionButton->setObjectName(QString::fromUtf8("mInvertSelectionButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionInvertSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mInvertSelectionButton->setIcon(icon4);
        mInvertSelectionButton->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(mInvertSelectionButton);

        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout, 0, 1, 2, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mAvailableWidgetsWidget = new QWidget(widget);
        mAvailableWidgetsWidget->setObjectName(QString::fromUtf8("mAvailableWidgetsWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mAvailableWidgetsWidget->sizePolicy().hasHeightForWidth());
        mAvailableWidgetsWidget->setSizePolicy(sizePolicy3);
        mAvailableWidgetsWidget->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(mAvailableWidgetsWidget);

        mTreeViewHorizontalSpacer = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(mTreeViewHorizontalSpacer);

        mFormLayoutWidget = new QWidget(widget);
        mFormLayoutWidget->setObjectName(QString::fromUtf8("mFormLayoutWidget"));
        sizePolicy3.setHeightForWidth(mFormLayoutWidget->sizePolicy().hasHeightForWidth());
        mFormLayoutWidget->setSizePolicy(sizePolicy3);
        mFormLayoutWidget->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(mFormLayoutWidget);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        splitter->addWidget(widget);
        scrollArea_2 = new QgsScrollArea(splitter);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        sizePolicy3.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy3);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 86, 488));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mAttributeTypeFrame = new QWidget(scrollAreaWidgetContents_5);
        mAttributeTypeFrame->setObjectName(QString::fromUtf8("mAttributeTypeFrame"));
        sizePolicy3.setHeightForWidth(mAttributeTypeFrame->sizePolicy().hasHeightForWidth());
        mAttributeTypeFrame->setSizePolicy(sizePolicy3);
        gridLayout_2 = new QGridLayout(mAttributeTypeFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout_4->addWidget(mAttributeTypeFrame, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_5);
        splitter->addWidget(scrollArea_2);

        gridLayout->addWidget(splitter, 2, 0, 1, 1);

        gridLayout->setRowStretch(2, 1);
        QWidget::setTabOrder(mEditorLayoutComboBox, mTbInitCode);
        QWidget::setTabOrder(mTbInitCode, mFormSuppressCmbBx);
        QWidget::setTabOrder(mFormSuppressCmbBx, mEditFormLineEdit);
        QWidget::setTabOrder(mEditFormLineEdit, pbnSelectEditForm);
        QWidget::setTabOrder(pbnSelectEditForm, mSearchLineEdit);
        QWidget::setTabOrder(mSearchLineEdit, mShowAliasesButton);
        QWidget::setTabOrder(mShowAliasesButton, mAddContainerButton);
        QWidget::setTabOrder(mAddContainerButton, mRemoveLayoutItemButton);
        QWidget::setTabOrder(mRemoveLayoutItemButton, mInvertSelectionButton);
        QWidget::setTabOrder(mInvertSelectionButton, scrollArea_2);

        retranslateUi(QgsAttributesFormProperties);

        QMetaObject::connectSlotsByName(QgsAttributesFormProperties);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributesFormProperties)
    {
#if QT_CONFIG(tooltip)
        mEditorLayoutComboBox->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "Select attribute layout editor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mTbInitCode->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "QGIS forms can have a Python function that is called when the form is opened.\n"
"Use this function to add extra logic to your forms.", nullptr));
#endif // QT_CONFIG(tooltip)
        mTbInitCode->setText(QCoreApplication::translate("QgsAttributesFormProperties", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAttributesFormProperties", "Edit UI", nullptr));
        pbnSelectEditForm->setText(QCoreApplication::translate("QgsAttributesFormProperties", "\342\200\246", nullptr));
        mSearchLineEdit->setPlaceholderText(QCoreApplication::translate("QgsAttributesFormProperties", "Search...", nullptr));
#if QT_CONFIG(tooltip)
        mShowAliasesButton->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "Show field aliases instead of names", nullptr));
#endif // QT_CONFIG(tooltip)
        mShowAliasesButton->setText(QCoreApplication::translate("QgsAttributesFormProperties", "...", nullptr));
#if QT_CONFIG(tooltip)
        mAddContainerButton->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "Add a new tab or group to the form layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddContainerButton->setText(QCoreApplication::translate("QgsAttributesFormProperties", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mRemoveLayoutItemButton->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "Remove selected item(s) from the form layout", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveLayoutItemButton->setText(QCoreApplication::translate("QgsAttributesFormProperties", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mInvertSelectionButton->setToolTip(QCoreApplication::translate("QgsAttributesFormProperties", "Invert selection", nullptr));
#endif // QT_CONFIG(tooltip)
        mInvertSelectionButton->setText(QCoreApplication::translate("QgsAttributesFormProperties", "Invert selection", nullptr));
        (void)QgsAttributesFormProperties;
    } // retranslateUi

};

namespace Ui {
    class QgsAttributesFormProperties: public Ui_QgsAttributesFormProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTESFORMPROPERTIES_H
