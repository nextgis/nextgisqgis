/********************************************************************************
** Form generated from reading UI file 'qgsvaluemapconfigdlgbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVALUEMAPCONFIGDLGBASE_H
#define UI_QGSVALUEMAPCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsValueMapWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *valueMapLabel;
    QPushButton *loadFromLayerButton;
    QPushButton *loadFromCSVButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QLabel *mValueMapErrorsLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *addNullButton;
    QPushButton *removeSelectedButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QgsValueMapWidget)
    {
        if (QgsValueMapWidget->objectName().isEmpty())
            QgsValueMapWidget->setObjectName(QString::fromUtf8("QgsValueMapWidget"));
        QgsValueMapWidget->resize(701, 493);
        QgsValueMapWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsValueMapWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        valueMapLabel = new QLabel(QgsValueMapWidget);
        valueMapLabel->setObjectName(QString::fromUtf8("valueMapLabel"));
        valueMapLabel->setWordWrap(true);

        gridLayout->addWidget(valueMapLabel, 0, 0, 1, 3);

        loadFromLayerButton = new QPushButton(QgsValueMapWidget);
        loadFromLayerButton->setObjectName(QString::fromUtf8("loadFromLayerButton"));

        gridLayout->addWidget(loadFromLayerButton, 1, 0, 1, 1);

        loadFromCSVButton = new QPushButton(QgsValueMapWidget);
        loadFromCSVButton->setObjectName(QString::fromUtf8("loadFromCSVButton"));

        gridLayout->addWidget(loadFromCSVButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(339, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(QgsValueMapWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        mValueMapErrorsLabel = new QLabel(QgsValueMapWidget);
        mValueMapErrorsLabel->setObjectName(QString::fromUtf8("mValueMapErrorsLabel"));
        mValueMapErrorsLabel->setEnabled(true);
        mValueMapErrorsLabel->setMaximumSize(QSize(16777215, 100));
        mValueMapErrorsLabel->setWordWrap(true);

        verticalLayout->addWidget(mValueMapErrorsLabel);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addNullButton = new QPushButton(QgsValueMapWidget);
        addNullButton->setObjectName(QString::fromUtf8("addNullButton"));

        horizontalLayout->addWidget(addNullButton);

        removeSelectedButton = new QPushButton(QgsValueMapWidget);
        removeSelectedButton->setObjectName(QString::fromUtf8("removeSelectedButton"));

        horizontalLayout->addWidget(removeSelectedButton);

        horizontalSpacer_2 = new QSpacerItem(518, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 3);

        QWidget::setTabOrder(loadFromLayerButton, loadFromCSVButton);
        QWidget::setTabOrder(loadFromCSVButton, tableWidget);
        QWidget::setTabOrder(tableWidget, addNullButton);
        QWidget::setTabOrder(addNullButton, removeSelectedButton);

        retranslateUi(QgsValueMapWidget);

        QMetaObject::connectSlotsByName(QgsValueMapWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsValueMapWidget)
    {
        valueMapLabel->setText(QCoreApplication::translate("QgsValueMapWidget", "Combo box with predefined items. Value is stored in the attribute, description is shown in the combo box.", nullptr));
        loadFromLayerButton->setText(QCoreApplication::translate("QgsValueMapWidget", "Load Data from Layer", nullptr));
        loadFromCSVButton->setText(QCoreApplication::translate("QgsValueMapWidget", "Load Data from CSV File", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsValueMapWidget", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsValueMapWidget", "Description", nullptr));
        mValueMapErrorsLabel->setText(QCoreApplication::translate("QgsValueMapWidget", "No errors", nullptr));
        addNullButton->setText(QCoreApplication::translate("QgsValueMapWidget", "Add \"NULL\" value", nullptr));
        removeSelectedButton->setText(QCoreApplication::translate("QgsValueMapWidget", "Remove Selected", nullptr));
        (void)QgsValueMapWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsValueMapWidget: public Ui_QgsValueMapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVALUEMAPCONFIGDLGBASE_H
