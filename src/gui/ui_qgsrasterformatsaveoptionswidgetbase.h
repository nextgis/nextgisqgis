/********************************************************************************
** Form generated from reading UI file 'qgsrasterformatsaveoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERFORMATSAVEOPTIONSWIDGETBASE_H
#define UI_QGSRASTERFORMATSAVEOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRasterFormatSaveOptionsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QWidget *mProfileButtons;
    QHBoxLayout *mProfileButtonsLayout;
    QPushButton *mProfileNewButton;
    QPushButton *mProfileDeleteButton;
    QPushButton *mProfileResetButton;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *mProfileComboBox;
    QLabel *mProfileLabel;
    QFrame *mSeparator;
    QWidget *mOptionsWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *mTableWidget;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *mOptionsTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *mOptionsAddButton;
    QPushButton *mOptionsDeleteButton;
    QPushButton *mOptionsValidateButton;
    QPushButton *mOptionsHelpButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *mOptionsLineEdit;

    void setupUi(QWidget *QgsRasterFormatSaveOptionsWidgetBase)
    {
        if (QgsRasterFormatSaveOptionsWidgetBase->objectName().isEmpty())
            QgsRasterFormatSaveOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsRasterFormatSaveOptionsWidgetBase"));
        QgsRasterFormatSaveOptionsWidgetBase->resize(354, 331);
        QgsRasterFormatSaveOptionsWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsRasterFormatSaveOptionsWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mProfileButtons = new QWidget(QgsRasterFormatSaveOptionsWidgetBase);
        mProfileButtons->setObjectName(QString::fromUtf8("mProfileButtons"));
        mProfileButtonsLayout = new QHBoxLayout(mProfileButtons);
        mProfileButtonsLayout->setObjectName(QString::fromUtf8("mProfileButtonsLayout"));
        mProfileButtonsLayout->setContentsMargins(0, 0, 0, 0);
        mProfileNewButton = new QPushButton(mProfileButtons);
        mProfileNewButton->setObjectName(QString::fromUtf8("mProfileNewButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mProfileNewButton->setIcon(icon);

        mProfileButtonsLayout->addWidget(mProfileNewButton);

        mProfileDeleteButton = new QPushButton(mProfileButtons);
        mProfileDeleteButton->setObjectName(QString::fromUtf8("mProfileDeleteButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mProfileDeleteButton->setIcon(icon1);

        mProfileButtonsLayout->addWidget(mProfileDeleteButton);

        mProfileResetButton = new QPushButton(mProfileButtons);
        mProfileResetButton->setObjectName(QString::fromUtf8("mProfileResetButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mProfileResetButton->setIcon(icon2);

        mProfileButtonsLayout->addWidget(mProfileResetButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mProfileButtonsLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addWidget(mProfileButtons, 1, 1, 1, 1);

        mProfileComboBox = new QComboBox(QgsRasterFormatSaveOptionsWidgetBase);
        mProfileComboBox->setObjectName(QString::fromUtf8("mProfileComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mProfileComboBox->sizePolicy().hasHeightForWidth());
        mProfileComboBox->setSizePolicy(sizePolicy);
        mProfileComboBox->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(mProfileComboBox, 0, 1, 1, 1);

        mProfileLabel = new QLabel(QgsRasterFormatSaveOptionsWidgetBase);
        mProfileLabel->setObjectName(QString::fromUtf8("mProfileLabel"));

        gridLayout_3->addWidget(mProfileLabel, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        mSeparator = new QFrame(QgsRasterFormatSaveOptionsWidgetBase);
        mSeparator->setObjectName(QString::fromUtf8("mSeparator"));
        mSeparator->setFrameShape(QFrame::HLine);
        mSeparator->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(mSeparator);

        mOptionsWidget = new QWidget(QgsRasterFormatSaveOptionsWidgetBase);
        mOptionsWidget->setObjectName(QString::fromUtf8("mOptionsWidget"));
        verticalLayout_4 = new QVBoxLayout(mOptionsWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mTableWidget = new QWidget(mOptionsWidget);
        mTableWidget->setObjectName(QString::fromUtf8("mTableWidget"));
        verticalLayout_5 = new QVBoxLayout(mTableWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mOptionsTable = new QTableWidget(mTableWidget);
        if (mOptionsTable->columnCount() < 2)
            mOptionsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mOptionsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mOptionsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mOptionsTable->setObjectName(QString::fromUtf8("mOptionsTable"));
        mOptionsTable->horizontalHeader()->setMinimumSectionSize(30);
        mOptionsTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_5->addWidget(mOptionsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mOptionsAddButton = new QPushButton(mTableWidget);
        mOptionsAddButton->setObjectName(QString::fromUtf8("mOptionsAddButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsAddButton->sizePolicy().hasHeightForWidth());
        mOptionsAddButton->setSizePolicy(sizePolicy1);
        mOptionsAddButton->setIcon(icon);
        mOptionsAddButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(mOptionsAddButton);

        mOptionsDeleteButton = new QPushButton(mTableWidget);
        mOptionsDeleteButton->setObjectName(QString::fromUtf8("mOptionsDeleteButton"));
        sizePolicy1.setHeightForWidth(mOptionsDeleteButton->sizePolicy().hasHeightForWidth());
        mOptionsDeleteButton->setSizePolicy(sizePolicy1);
        mOptionsDeleteButton->setIcon(icon1);

        horizontalLayout->addWidget(mOptionsDeleteButton);

        mOptionsValidateButton = new QPushButton(mTableWidget);
        mOptionsValidateButton->setObjectName(QString::fromUtf8("mOptionsValidateButton"));

        horizontalLayout->addWidget(mOptionsValidateButton);

        mOptionsHelpButton = new QPushButton(mTableWidget);
        mOptionsHelpButton->setObjectName(QString::fromUtf8("mOptionsHelpButton"));

        horizontalLayout->addWidget(mOptionsHelpButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(mTableWidget);

        mOptionsLineEdit = new QLineEdit(mOptionsWidget);
        mOptionsLineEdit->setObjectName(QString::fromUtf8("mOptionsLineEdit"));
        mOptionsLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(mOptionsLineEdit);


        verticalLayout->addWidget(mOptionsWidget);

        QWidget::setTabOrder(mProfileComboBox, mProfileNewButton);
        QWidget::setTabOrder(mProfileNewButton, mProfileDeleteButton);
        QWidget::setTabOrder(mProfileDeleteButton, mProfileResetButton);
        QWidget::setTabOrder(mProfileResetButton, mOptionsTable);
        QWidget::setTabOrder(mOptionsTable, mOptionsAddButton);
        QWidget::setTabOrder(mOptionsAddButton, mOptionsDeleteButton);
        QWidget::setTabOrder(mOptionsDeleteButton, mOptionsValidateButton);
        QWidget::setTabOrder(mOptionsValidateButton, mOptionsHelpButton);
        QWidget::setTabOrder(mOptionsHelpButton, mOptionsLineEdit);

        retranslateUi(QgsRasterFormatSaveOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterFormatSaveOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterFormatSaveOptionsWidgetBase)
    {
        mProfileNewButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "New", nullptr));
        mProfileDeleteButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Remove", nullptr));
        mProfileResetButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Reset", nullptr));
        mProfileLabel->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Profile", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mOptionsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mOptionsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Value", nullptr));
        mOptionsAddButton->setText(QString());
        mOptionsDeleteButton->setText(QString());
        mOptionsValidateButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Validate", nullptr));
        mOptionsHelpButton->setText(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Help", nullptr));
#if QT_CONFIG(tooltip)
        mOptionsLineEdit->setToolTip(QCoreApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Insert KEY=VALUE pairs separated by spaces", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsRasterFormatSaveOptionsWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRasterFormatSaveOptionsWidgetBase: public Ui_QgsRasterFormatSaveOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERFORMATSAVEOPTIONSWIDGETBASE_H
