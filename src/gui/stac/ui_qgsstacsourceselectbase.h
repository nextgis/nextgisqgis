/********************************************************************************
** Form generated from reading UI file 'qgsstacsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTACSOURCESELECTBASE_H
#define UI_QGSSTACSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsStacSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_2;
    QComboBox *cmbConnections;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *spacerItem;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mFiltersButton;
    QLabel *mFiltersLabel;
    QSpacerItem *horizontalSpacer;
    QListView *mItemsView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mStatusLabel;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mFootprintsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStacSourceSelectBase)
    {
        if (QgsStacSourceSelectBase->objectName().isEmpty())
            QgsStacSourceSelectBase->setObjectName(QString::fromUtf8("QgsStacSourceSelectBase"));
        QgsStacSourceSelectBase->resize(712, 594);
        verticalLayout = new QVBoxLayout(QgsStacSourceSelectBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        GroupBox1 = new QGroupBox(QgsStacSourceSelectBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout_2 = new QGridLayout(GroupBox1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cmbConnections = new QComboBox(GroupBox1);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout_2->addWidget(cmbConnections, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setEnabled(false);

        horizontalLayout->addWidget(btnConnect);

        btnNew = new QPushButton(GroupBox1);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnEdit = new QPushButton(GroupBox1);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setEnabled(false);

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(GroupBox1);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setEnabled(false);

        horizontalLayout->addWidget(btnDelete);

        spacerItem = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        btnLoad = new QPushButton(GroupBox1);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        horizontalLayout->addWidget(btnLoad);

        btnSave = new QPushButton(GroupBox1);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        verticalLayout->addWidget(GroupBox1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mFiltersButton = new QPushButton(QgsStacSourceSelectBase);
        mFiltersButton->setObjectName(QString::fromUtf8("mFiltersButton"));
        mFiltersButton->setEnabled(false);

        horizontalLayout_2->addWidget(mFiltersButton);

        mFiltersLabel = new QLabel(QgsStacSourceSelectBase);
        mFiltersLabel->setObjectName(QString::fromUtf8("mFiltersLabel"));

        horizontalLayout_2->addWidget(mFiltersLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        mItemsView = new QListView(QgsStacSourceSelectBase);
        mItemsView->setObjectName(QString::fromUtf8("mItemsView"));
        mItemsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(mItemsView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mStatusLabel = new QLabel(QgsStacSourceSelectBase);
        mStatusLabel->setObjectName(QString::fromUtf8("mStatusLabel"));

        horizontalLayout_3->addWidget(mStatusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        mFootprintsCheckBox = new QCheckBox(QgsStacSourceSelectBase);
        mFootprintsCheckBox->setObjectName(QString::fromUtf8("mFootprintsCheckBox"));
        mFootprintsCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(mFootprintsCheckBox);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(QgsStacSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsStacSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsStacSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsStacSourceSelectBase)
    {
        GroupBox1->setTitle(QCoreApplication::translate("QgsStacSourceSelectBase", "Connections", nullptr));
#if QT_CONFIG(tooltip)
        btnConnect->setToolTip(QCoreApplication::translate("QgsStacSourceSelectBase", "Connect to selected service", nullptr));
#endif // QT_CONFIG(tooltip)
        btnConnect->setText(QCoreApplication::translate("QgsStacSourceSelectBase", "C&onnect", nullptr));
#if QT_CONFIG(tooltip)
        btnNew->setToolTip(QCoreApplication::translate("QgsStacSourceSelectBase", "Create a new service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNew->setText(QCoreApplication::translate("QgsStacSourceSelectBase", "&New", nullptr));
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("QgsStacSourceSelectBase", "Edit selected service connection", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QCoreApplication::translate("QgsStacSourceSelectBase", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("QgsStacSourceSelectBase", "Remove connection to selected service", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("QgsStacSourceSelectBase", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        btnLoad->setToolTip(QCoreApplication::translate("QgsStacSourceSelectBase", "Load connections from file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLoad->setText(QCoreApplication::translate("QgsStacSourceSelectBase", "Load", nullptr));
#if QT_CONFIG(tooltip)
        btnSave->setToolTip(QCoreApplication::translate("QgsStacSourceSelectBase", "Save connections to file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSave->setText(QCoreApplication::translate("QgsStacSourceSelectBase", "Save", nullptr));
        mFiltersButton->setText(QCoreApplication::translate("QgsStacSourceSelectBase", "Filters\342\200\246", nullptr));
        mFiltersLabel->setText(QCoreApplication::translate("QgsStacSourceSelectBase", "Filters:", nullptr));
        mStatusLabel->setText(QString());
        mFootprintsCheckBox->setText(QCoreApplication::translate("QgsStacSourceSelectBase", "Show footprints", nullptr));
        (void)QgsStacSourceSelectBase;
    } // retranslateUi

};

namespace Ui {
    class QgsStacSourceSelectBase: public Ui_QgsStacSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTACSOURCESELECTBASE_H
