/********************************************************************************
** Form generated from reading UI file 'qgscustomizationdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCUSTOMIZATIONDIALOGBASE_H
#define UI_QGSCUSTOMIZATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgsfilterlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_QgsCustomizationDialogBase
{
public:
    QAction *actionCatch;
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionExpandAll;
    QAction *actionCollapseAll;
    QAction *actionSelectAll;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *mCustomizationEnabledCheckBox;
    QgsFilterLineEdit *mLeFilter;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QgsCustomizationDialogBase)
    {
        if (QgsCustomizationDialogBase->objectName().isEmpty())
            QgsCustomizationDialogBase->setObjectName(QString::fromUtf8("QgsCustomizationDialogBase"));
        QgsCustomizationDialogBase->resize(503, 370);
        actionCatch = new QAction(QgsCustomizationDialogBase);
        actionCatch->setObjectName(QString::fromUtf8("actionCatch"));
        actionCatch->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCatch->setIcon(icon);
        actionSave = new QAction(QgsCustomizationDialogBase);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionLoad = new QAction(QgsCustomizationDialogBase);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon2);
        actionExpandAll = new QAction(QgsCustomizationDialogBase);
        actionExpandAll->setObjectName(QString::fromUtf8("actionExpandAll"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionExpandTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExpandAll->setIcon(icon3);
        actionCollapseAll = new QAction(QgsCustomizationDialogBase);
        actionCollapseAll->setObjectName(QString::fromUtf8("actionCollapseAll"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionCollapseTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCollapseAll->setIcon(icon4);
        actionSelectAll = new QAction(QgsCustomizationDialogBase);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionSelectAllTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectAll->setIcon(icon5);
        centralwidget = new QWidget(QgsCustomizationDialogBase);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mCustomizationEnabledCheckBox = new QCheckBox(centralwidget);
        mCustomizationEnabledCheckBox->setObjectName(QString::fromUtf8("mCustomizationEnabledCheckBox"));

        verticalLayout_2->addWidget(mCustomizationEnabledCheckBox);

        mLeFilter = new QgsFilterLineEdit(centralwidget);
        mLeFilter->setObjectName(QString::fromUtf8("mLeFilter"));

        verticalLayout_2->addWidget(mLeFilter);

        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeWidget->setColumnCount(2);
        treeWidget->header()->setVisible(true);

        verticalLayout_2->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_2->addWidget(buttonBox);

        QgsCustomizationDialogBase->setCentralWidget(centralwidget);
        toolBar = new QToolBar(QgsCustomizationDialogBase);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(24, 24));
        QgsCustomizationDialogBase->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionCatch);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionLoad);
        toolBar->addAction(actionExpandAll);
        toolBar->addAction(actionCollapseAll);
        toolBar->addAction(actionSelectAll);

        retranslateUi(QgsCustomizationDialogBase);

        QMetaObject::connectSlotsByName(QgsCustomizationDialogBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsCustomizationDialogBase)
    {
        QgsCustomizationDialogBase->setWindowTitle(QCoreApplication::translate("QgsCustomizationDialogBase", "Interface Customization", nullptr));
        actionCatch->setText(QCoreApplication::translate("QgsCustomizationDialogBase", "Catch", nullptr));
#if QT_CONFIG(tooltip)
        actionCatch->setToolTip(QCoreApplication::translate("QgsCustomizationDialogBase", "Switch to catching widgets in main application", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave->setText(QCoreApplication::translate("QgsCustomizationDialogBase", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("QgsCustomizationDialogBase", "Save to file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLoad->setText(QCoreApplication::translate("QgsCustomizationDialogBase", "Load", nullptr));
#if QT_CONFIG(tooltip)
        actionLoad->setToolTip(QCoreApplication::translate("QgsCustomizationDialogBase", "Load from file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExpandAll->setText(QCoreApplication::translate("QgsCustomizationDialogBase", "Expand All", nullptr));
        actionCollapseAll->setText(QCoreApplication::translate("QgsCustomizationDialogBase", "Collapse All", nullptr));
        actionSelectAll->setText(QCoreApplication::translate("QgsCustomizationDialogBase", "Check All", nullptr));
        mCustomizationEnabledCheckBox->setText(QCoreApplication::translate("QgsCustomizationDialogBase", "Enable customization", nullptr));
        mLeFilter->setPlaceholderText(QCoreApplication::translate("QgsCustomizationDialogBase", "Search\342\200\246", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("QgsCustomizationDialogBase", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsCustomizationDialogBase: public Ui_QgsCustomizationDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCUSTOMIZATIONDIALOGBASE_H
