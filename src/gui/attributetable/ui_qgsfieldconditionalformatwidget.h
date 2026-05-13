/********************************************************************************
** Form generated from reading UI file 'qgsfieldconditionalformatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFIELDCONDITIONALFORMATWIDGET_H
#define UI_QGSFIELDCONDITIONALFORMATWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFieldConditionalWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QPushButton *mNewButton;
    QHBoxLayout *horizontalLayout;
    QRadioButton *fieldRadio;
    QgsFieldComboBox *mFieldCombo;
    QRadioButton *rowRadio;
    QListView *listView;

    void setupUi(QWidget *QgsFieldConditionalWidget)
    {
        if (QgsFieldConditionalWidget->objectName().isEmpty())
            QgsFieldConditionalWidget->setObjectName(QString::fromUtf8("QgsFieldConditionalWidget"));
        QgsFieldConditionalWidget->resize(335, 376);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsFieldConditionalWidget->sizePolicy().hasHeightForWidth());
        QgsFieldConditionalWidget->setSizePolicy(sizePolicy);
        QgsFieldConditionalWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsFieldConditionalWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, -1);
        mNewButton = new QPushButton(QgsFieldConditionalWidget);
        mNewButton->setObjectName(QString::fromUtf8("mNewButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mNewButton->sizePolicy().hasHeightForWidth());
        mNewButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNewButton->setIcon(icon);

        gridLayout_4->addWidget(mNewButton, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fieldRadio = new QRadioButton(QgsFieldConditionalWidget);
        fieldRadio->setObjectName(QString::fromUtf8("fieldRadio"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fieldRadio->sizePolicy().hasHeightForWidth());
        fieldRadio->setSizePolicy(sizePolicy2);
        fieldRadio->setChecked(true);

        horizontalLayout->addWidget(fieldRadio);

        mFieldCombo = new QgsFieldComboBox(QgsFieldConditionalWidget);
        mFieldCombo->setObjectName(QString::fromUtf8("mFieldCombo"));
        sizePolicy1.setHeightForWidth(mFieldCombo->sizePolicy().hasHeightForWidth());
        mFieldCombo->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mFieldCombo);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        rowRadio = new QRadioButton(QgsFieldConditionalWidget);
        rowRadio->setObjectName(QString::fromUtf8("rowRadio"));
        sizePolicy2.setHeightForWidth(rowRadio->sizePolicy().hasHeightForWidth());
        rowRadio->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(rowRadio, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        listView = new QListView(QgsFieldConditionalWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setIconSize(QSize(64, 32));

        verticalLayout->addWidget(listView);

        QWidget::setTabOrder(fieldRadio, mFieldCombo);
        QWidget::setTabOrder(mFieldCombo, rowRadio);
        QWidget::setTabOrder(rowRadio, mNewButton);
        QWidget::setTabOrder(mNewButton, listView);

        retranslateUi(QgsFieldConditionalWidget);

        QMetaObject::connectSlotsByName(QgsFieldConditionalWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsFieldConditionalWidget)
    {
        mNewButton->setText(QCoreApplication::translate("QgsFieldConditionalWidget", "New Rule", nullptr));
        fieldRadio->setText(QCoreApplication::translate("QgsFieldConditionalWidget", "Field", nullptr));
        rowRadio->setText(QCoreApplication::translate("QgsFieldConditionalWidget", "Full row", nullptr));
        (void)QgsFieldConditionalWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsFieldConditionalWidget: public Ui_QgsFieldConditionalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIELDCONDITIONALFORMATWIDGET_H
