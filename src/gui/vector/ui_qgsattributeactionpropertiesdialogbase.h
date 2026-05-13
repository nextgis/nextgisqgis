/********************************************************************************
** Form generated from reading UI file 'qgsattributeactionpropertiesdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEACTIONPROPERTIESDIALOGBASE_H
#define UI_QGSATTRIBUTEACTIONPROPERTIESDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include "qgscodeeditorpython.h"
#include "qgsfieldexpressionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeActionPropertiesDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QGroupBox *mActionGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QLineEdit *mNotificationMessage;
    QHBoxLayout *horizontalLayout_2;
    QgsFieldExpressionWidget *mFieldExpression;
    QPushButton *mInsertFieldOrExpression;
    QGridLayout *gridLayout_4;
    QgsCodeEditorPython *mActionText;
    QToolButton *mBrowseButton;
    QLabel *label_4;
    QCheckBox *mIsEnabledOnlyWhenEditable;
    QDialogButtonBox *mButtonBox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mIconPreview;
    QLineEdit *mActionIcon;
    QToolButton *mChooseIconButton;
    QLabel *label;
    QComboBox *mActionType;
    QGroupBox *mActionScopesGroupBox;
    QFormLayout *formLayout;
    QLineEdit *mActionName;
    QLabel *label_3;
    QLineEdit *mShortTitle;
    QCheckBox *mCaptureOutput;

    void setupUi(QDialog *QgsAttributeActionPropertiesDialogBase)
    {
        if (QgsAttributeActionPropertiesDialogBase->objectName().isEmpty())
            QgsAttributeActionPropertiesDialogBase->setObjectName(QString::fromUtf8("QgsAttributeActionPropertiesDialogBase"));
        QgsAttributeActionPropertiesDialogBase->resize(702, 554);
        QgsAttributeActionPropertiesDialogBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(QgsAttributeActionPropertiesDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textLabel1 = new QLabel(QgsAttributeActionPropertiesDialogBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout_2->addWidget(textLabel1, 1, 0, 1, 1);

        mActionGroupBox = new QGroupBox(QgsAttributeActionPropertiesDialogBase);
        mActionGroupBox->setObjectName(QString::fromUtf8("mActionGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mActionGroupBox->sizePolicy().hasHeightForWidth());
        mActionGroupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(mActionGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(mActionGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_11->addWidget(label_6);

        mNotificationMessage = new QLineEdit(mActionGroupBox);
        mNotificationMessage->setObjectName(QString::fromUtf8("mNotificationMessage"));

        horizontalLayout_11->addWidget(mNotificationMessage);


        gridLayout->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mFieldExpression = new QgsFieldExpressionWidget(mActionGroupBox);
        mFieldExpression->setObjectName(QString::fromUtf8("mFieldExpression"));
        mFieldExpression->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(mFieldExpression);

        mInsertFieldOrExpression = new QPushButton(mActionGroupBox);
        mInsertFieldOrExpression->setObjectName(QString::fromUtf8("mInsertFieldOrExpression"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mInsertFieldOrExpression->sizePolicy().hasHeightForWidth());
        mInsertFieldOrExpression->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(mInsertFieldOrExpression);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mActionText = new QgsCodeEditorPython(mActionGroupBox);
        mActionText->setObjectName(QString::fromUtf8("mActionText"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mActionText->sizePolicy().hasHeightForWidth());
        mActionText->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mActionText, 2, 0, 1, 1);

        mBrowseButton = new QToolButton(mActionGroupBox);
        mBrowseButton->setObjectName(QString::fromUtf8("mBrowseButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBrowseButton->setIcon(icon);

        gridLayout_4->addWidget(mBrowseButton, 2, 1, 1, 1, Qt::AlignTop);

        label_4 = new QLabel(mActionGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 2);


        gridLayout->addLayout(gridLayout_4, 0, 0, 1, 1);

        mIsEnabledOnlyWhenEditable = new QCheckBox(mActionGroupBox);
        mIsEnabledOnlyWhenEditable->setObjectName(QString::fromUtf8("mIsEnabledOnlyWhenEditable"));

        gridLayout->addWidget(mIsEnabledOnlyWhenEditable, 3, 0, 1, 1);


        gridLayout_2->addWidget(mActionGroupBox, 5, 0, 1, 4);

        mButtonBox = new QDialogButtonBox(QgsAttributeActionPropertiesDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(mButtonBox, 6, 0, 1, 4);

        label_2 = new QLabel(QgsAttributeActionPropertiesDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mIconPreview = new QLabel(QgsAttributeActionPropertiesDialogBase);
        mIconPreview->setObjectName(QString::fromUtf8("mIconPreview"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(24);
        sizePolicy3.setVerticalStretch(24);
        sizePolicy3.setHeightForWidth(mIconPreview->sizePolicy().hasHeightForWidth());
        mIconPreview->setSizePolicy(sizePolicy3);
        mIconPreview->setMinimumSize(QSize(24, 24));

        horizontalLayout_5->addWidget(mIconPreview);

        mActionIcon = new QLineEdit(QgsAttributeActionPropertiesDialogBase);
        mActionIcon->setObjectName(QString::fromUtf8("mActionIcon"));

        horizontalLayout_5->addWidget(mActionIcon);

        mChooseIconButton = new QToolButton(QgsAttributeActionPropertiesDialogBase);
        mChooseIconButton->setObjectName(QString::fromUtf8("mChooseIconButton"));
        mChooseIconButton->setIcon(icon);

        horizontalLayout_5->addWidget(mChooseIconButton);


        gridLayout_2->addLayout(horizontalLayout_5, 3, 1, 1, 3);

        label = new QLabel(QgsAttributeActionPropertiesDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        mActionType = new QComboBox(QgsAttributeActionPropertiesDialogBase);
        mActionType->setObjectName(QString::fromUtf8("mActionType"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mActionType->sizePolicy().hasHeightForWidth());
        mActionType->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(mActionType, 0, 1, 1, 1);

        mActionScopesGroupBox = new QGroupBox(QgsAttributeActionPropertiesDialogBase);
        mActionScopesGroupBox->setObjectName(QString::fromUtf8("mActionScopesGroupBox"));
        mActionScopesGroupBox->setFocusPolicy(Qt::StrongFocus);
        formLayout = new QFormLayout(mActionScopesGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        gridLayout_2->addWidget(mActionScopesGroupBox, 4, 0, 1, 3);

        mActionName = new QLineEdit(QgsAttributeActionPropertiesDialogBase);
        mActionName->setObjectName(QString::fromUtf8("mActionName"));

        gridLayout_2->addWidget(mActionName, 1, 1, 1, 3);

        label_3 = new QLabel(QgsAttributeActionPropertiesDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        mShortTitle = new QLineEdit(QgsAttributeActionPropertiesDialogBase);
        mShortTitle->setObjectName(QString::fromUtf8("mShortTitle"));

        gridLayout_2->addWidget(mShortTitle, 2, 1, 1, 3);

        mCaptureOutput = new QCheckBox(QgsAttributeActionPropertiesDialogBase);
        mCaptureOutput->setObjectName(QString::fromUtf8("mCaptureOutput"));

        gridLayout_2->addWidget(mCaptureOutput, 0, 2, 1, 1);

#if QT_CONFIG(shortcut)
        textLabel1->setBuddy(mActionName);
        label->setBuddy(mActionType);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mActionType, mCaptureOutput);
        QWidget::setTabOrder(mCaptureOutput, mActionName);
        QWidget::setTabOrder(mActionName, mShortTitle);
        QWidget::setTabOrder(mShortTitle, mActionIcon);
        QWidget::setTabOrder(mActionIcon, mChooseIconButton);
        QWidget::setTabOrder(mChooseIconButton, mActionScopesGroupBox);
        QWidget::setTabOrder(mActionScopesGroupBox, mBrowseButton);
        QWidget::setTabOrder(mBrowseButton, mFieldExpression);
        QWidget::setTabOrder(mFieldExpression, mInsertFieldOrExpression);

        retranslateUi(QgsAttributeActionPropertiesDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsAttributeActionPropertiesDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsAttributeActionPropertiesDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAttributeActionPropertiesDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeActionPropertiesDialogBase)
    {
#if QT_CONFIG(tooltip)
        textLabel1->setToolTip(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Enter the name of an action here. The name should be unique (QGIS will make it unique if necessary).", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel1->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Description", nullptr));
        mActionGroupBox->setTitle(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Action Text", nullptr));
        label_6->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Execute if notification matches", nullptr));
#if QT_CONFIG(tooltip)
        mNotificationMessage->setToolTip(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "<html><head/><body><p>If specified, listen to data source notification and performs action if notification message matches the specified value.</p><p>E.g. to match message beginning with <span style=\" font-weight:600;\">whatever </span>use <span style=\" font-weight:600;\">^whatever</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mInsertFieldOrExpression->setToolTip(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Inserts the selected field into the action", nullptr));
#endif // QT_CONFIG(tooltip)
        mInsertFieldOrExpression->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Insert", nullptr));
#if QT_CONFIG(tooltip)
        mBrowseButton->setToolTip(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Browse for action\n"
"Clicking the button will let you select an application to use as the action", nullptr));
#endif // QT_CONFIG(tooltip)
        mBrowseButton->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "\342\200\246", nullptr));
        label_4->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "<html><head/><body><p>The action text defines what happens if the action is triggered.<br/>The content depends on the type.<br/>For the type <span style=\" font-style:italic;\">Python</span> the content should be Python code, if the action is triggered from a button widget embedded in a drag and drop designer form, the form instance is exposed to Python as the  <span style=\" font-family:'monospace';\">form</span>  variable.<br/>For other types it should be a file or application with optional parameters.</p></body></html>", nullptr));
        mIsEnabledOnlyWhenEditable->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Enable only when editable", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Icon", nullptr));
        mIconPreview->setText(QString());
        mChooseIconButton->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Type", nullptr));
        mActionScopesGroupBox->setTitle(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Action Scopes", nullptr));
#if QT_CONFIG(tooltip)
        mActionName->setToolTip(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Enter the name of an action here. The name should be unique (QGIS will make it unique if necessary).", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionName->setPlaceholderText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Mandatory description", nullptr));
        label_3->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Short Name", nullptr));
        mShortTitle->setPlaceholderText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Leave empty to use only icon", nullptr));
#if QT_CONFIG(tooltip)
        mCaptureOutput->setToolTip(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Captures the standard output or error generated by the action and displays it in a dialog box", nullptr));
#endif // QT_CONFIG(tooltip)
        mCaptureOutput->setText(QCoreApplication::translate("QgsAttributeActionPropertiesDialogBase", "Capture output", nullptr));
        (void)QgsAttributeActionPropertiesDialogBase;
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeActionPropertiesDialogBase: public Ui_QgsAttributeActionPropertiesDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEACTIONPROPERTIESDIALOGBASE_H
