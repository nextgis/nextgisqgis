/********************************************************************************
** Form generated from reading UI file 'qgsgenericprojectionselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGENERICPROJECTIONSELECTORBASE_H
#define UI_QGSGENERICPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscrsdefinitionwidget.h"
#include "qgspanelwidget.h"
#include "qgsprojectionselectiontreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGenericProjectionSelectorBase
{
public:
    QVBoxLayout *verticalLayout_4;
    QSplitter *mSplitter;
    QTextEdit *textEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QComboBox *mComboCrsType;
    QStackedWidget *mStackedWidget;
    QWidget *mPageDatabase;
    QVBoxLayout *verticalLayout_2;
    QgsProjectionSelectionTreeWidget *projectionSelector;
    QWidget *mPageCustom;
    QVBoxLayout *verticalLayout_5;
    QgsCrsDefinitionWidget *mCrsDefinitionWidget;
    QWidget *mPageNoCrs;
    QVBoxLayout *verticalLayout;
    QLabel *mLabelNoCrs;

    void setupUi(QgsPanelWidget *QgsGenericProjectionSelectorBase)
    {
        if (QgsGenericProjectionSelectorBase->objectName().isEmpty())
            QgsGenericProjectionSelectorBase->setObjectName(QString::fromUtf8("QgsGenericProjectionSelectorBase"));
        QgsGenericProjectionSelectorBase->setProperty("modal", QVariant(false));
        QgsGenericProjectionSelectorBase->resize(342, 636);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsGenericProjectionSelectorBase->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(QgsGenericProjectionSelectorBase);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mSplitter = new QSplitter(QgsGenericProjectionSelectorBase);
        mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
        mSplitter->setOrientation(Qt::Vertical);
        textEdit = new QTextEdit(mSplitter);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 160));
        textEdit->setFocusPolicy(Qt::NoFocus);
        textEdit->setAcceptDrops(false);
        textEdit->setLineWidth(2);
        textEdit->setReadOnly(true);
        mSplitter->addWidget(textEdit);
        widget = new QWidget(mSplitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mComboCrsType = new QComboBox(widget);
        mComboCrsType->setObjectName(QString::fromUtf8("mComboCrsType"));

        verticalLayout_3->addWidget(mComboCrsType);

        mStackedWidget = new QStackedWidget(widget);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        mPageDatabase = new QWidget();
        mPageDatabase->setObjectName(QString::fromUtf8("mPageDatabase"));
        verticalLayout_2 = new QVBoxLayout(mPageDatabase);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        projectionSelector = new QgsProjectionSelectionTreeWidget(mPageDatabase);
        projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

        verticalLayout_2->addWidget(projectionSelector);

        mStackedWidget->addWidget(mPageDatabase);
        mPageCustom = new QWidget();
        mPageCustom->setObjectName(QString::fromUtf8("mPageCustom"));
        verticalLayout_5 = new QVBoxLayout(mPageCustom);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mCrsDefinitionWidget = new QgsCrsDefinitionWidget(mPageCustom);
        mCrsDefinitionWidget->setObjectName(QString::fromUtf8("mCrsDefinitionWidget"));

        verticalLayout_5->addWidget(mCrsDefinitionWidget);

        mStackedWidget->addWidget(mPageCustom);
        mPageNoCrs = new QWidget();
        mPageNoCrs->setObjectName(QString::fromUtf8("mPageNoCrs"));
        verticalLayout = new QVBoxLayout(mPageNoCrs);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mLabelNoCrs = new QLabel(mPageNoCrs);
        mLabelNoCrs->setObjectName(QString::fromUtf8("mLabelNoCrs"));
        mLabelNoCrs->setWordWrap(true);

        verticalLayout->addWidget(mLabelNoCrs);

        mStackedWidget->addWidget(mPageNoCrs);

        verticalLayout_3->addWidget(mStackedWidget);

        mSplitter->addWidget(widget);

        verticalLayout_4->addWidget(mSplitter);


        retranslateUi(QgsGenericProjectionSelectorBase);

        mStackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QgsGenericProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsGenericProjectionSelectorBase)
    {
        QgsGenericProjectionSelectorBase->setWindowTitle(QCoreApplication::translate("QgsGenericProjectionSelectorBase", "Coordinate Reference System Selector", nullptr));
        mLabelNoCrs->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsGenericProjectionSelectorBase: public Ui_QgsGenericProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGENERICPROJECTIONSELECTORBASE_H
