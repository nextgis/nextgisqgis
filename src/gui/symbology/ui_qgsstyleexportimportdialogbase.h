/********************************************************************************
** Form generated from reading UI file 'qgsstyleexportimportdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLEEXPORTIMPORTDIALOGBASE_H
#define UI_QGSSTYLEEXPORTIMPORTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStyleExportImportDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *mSymbolTags;
    QCheckBox *mIgnoreXMLTags;
    QLabel *tagHintLabel;
    QLabel *fromLabel;
    QLabel *mLocationLabel;
    QCheckBox *mFavorite;
    QComboBox *importTypeCombo;
    QLabel *tagLabel;
    QStackedWidget *mLocationStackedEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QgsFileWidget *mImportFileWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mUrlLineEdit;
    QPushButton *mButtonFetch;
    QLabel *label;
    QListView *listItems;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStyleExportImportDialogBase)
    {
        if (QgsStyleExportImportDialogBase->objectName().isEmpty())
            QgsStyleExportImportDialogBase->setObjectName(QString::fromUtf8("QgsStyleExportImportDialogBase"));
        QgsStyleExportImportDialogBase->resize(413, 379);
        gridLayout_2 = new QGridLayout(QgsStyleExportImportDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSymbolTags = new QLineEdit(QgsStyleExportImportDialogBase);
        mSymbolTags->setObjectName(QString::fromUtf8("mSymbolTags"));

        gridLayout->addWidget(mSymbolTags, 4, 1, 1, 2);

        mIgnoreXMLTags = new QCheckBox(QgsStyleExportImportDialogBase);
        mIgnoreXMLTags->setObjectName(QString::fromUtf8("mIgnoreXMLTags"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mIgnoreXMLTags->sizePolicy().hasHeightForWidth());
        mIgnoreXMLTags->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mIgnoreXMLTags, 3, 0, 1, 3);

        tagHintLabel = new QLabel(QgsStyleExportImportDialogBase);
        tagHintLabel->setObjectName(QString::fromUtf8("tagHintLabel"));

        gridLayout->addWidget(tagHintLabel, 5, 1, 1, 2);

        fromLabel = new QLabel(QgsStyleExportImportDialogBase);
        fromLabel->setObjectName(QString::fromUtf8("fromLabel"));

        gridLayout->addWidget(fromLabel, 0, 0, 1, 1);

        mLocationLabel = new QLabel(QgsStyleExportImportDialogBase);
        mLocationLabel->setObjectName(QString::fromUtf8("mLocationLabel"));

        gridLayout->addWidget(mLocationLabel, 1, 0, 1, 1);

        mFavorite = new QCheckBox(QgsStyleExportImportDialogBase);
        mFavorite->setObjectName(QString::fromUtf8("mFavorite"));
        sizePolicy.setHeightForWidth(mFavorite->sizePolicy().hasHeightForWidth());
        mFavorite->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mFavorite, 2, 0, 1, 3);

        importTypeCombo = new QComboBox(QgsStyleExportImportDialogBase);
        importTypeCombo->setObjectName(QString::fromUtf8("importTypeCombo"));

        gridLayout->addWidget(importTypeCombo, 0, 1, 1, 2);

        tagLabel = new QLabel(QgsStyleExportImportDialogBase);
        tagLabel->setObjectName(QString::fromUtf8("tagLabel"));

        gridLayout->addWidget(tagLabel, 4, 0, 1, 1);

        mLocationStackedEdit = new QStackedWidget(QgsStyleExportImportDialogBase);
        mLocationStackedEdit->setObjectName(QString::fromUtf8("mLocationStackedEdit"));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mImportFileWidget = new QgsFileWidget(widget);
        mImportFileWidget->setObjectName(QString::fromUtf8("mImportFileWidget"));

        horizontalLayout_2->addWidget(mImportFileWidget);

        mLocationStackedEdit->addWidget(widget);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mUrlLineEdit = new QLineEdit(page);
        mUrlLineEdit->setObjectName(QString::fromUtf8("mUrlLineEdit"));

        horizontalLayout->addWidget(mUrlLineEdit);

        mButtonFetch = new QPushButton(page);
        mButtonFetch->setObjectName(QString::fromUtf8("mButtonFetch"));

        horizontalLayout->addWidget(mButtonFetch);

        horizontalLayout->setStretch(0, 1);
        mLocationStackedEdit->addWidget(page);

        gridLayout->addWidget(mLocationStackedEdit, 1, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        label = new QLabel(QgsStyleExportImportDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        listItems = new QListView(QgsStyleExportImportDialogBase);
        listItems->setObjectName(QString::fromUtf8("listItems"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(listItems->sizePolicy().hasHeightForWidth());
        listItems->setSizePolicy(sizePolicy1);
        listItems->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listItems->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listItems->setIconSize(QSize(77, 70));
        listItems->setTextElideMode(Qt::ElideNone);
        listItems->setFlow(QListView::LeftToRight);
        listItems->setResizeMode(QListView::Adjust);
        listItems->setSpacing(5);
        listItems->setViewMode(QListView::IconMode);
        listItems->setWordWrap(true);

        gridLayout_2->addWidget(listItems, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsStyleExportImportDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        QWidget::setTabOrder(importTypeCombo, mFavorite);
        QWidget::setTabOrder(mFavorite, mIgnoreXMLTags);
        QWidget::setTabOrder(mIgnoreXMLTags, mSymbolTags);
        QWidget::setTabOrder(mSymbolTags, listItems);

        retranslateUi(QgsStyleExportImportDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsStyleExportImportDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStyleExportImportDialogBase, SLOT(reject()));

        mLocationStackedEdit->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsStyleExportImportDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsStyleExportImportDialogBase)
    {
        QgsStyleExportImportDialogBase->setWindowTitle(QCoreApplication::translate("QgsStyleExportImportDialogBase", "Styles Import/Export", nullptr));
        mIgnoreXMLTags->setText(QCoreApplication::translate("QgsStyleExportImportDialogBase", "Do not import embedded tags", nullptr));
        tagHintLabel->setText(QCoreApplication::translate("QgsStyleExportImportDialogBase", "Tip: separate multiple tags with commas", nullptr));
        fromLabel->setText(QCoreApplication::translate("QgsStyleExportImportDialogBase", "Import from", nullptr));
        mLocationLabel->setText(QCoreApplication::translate("QgsStyleExportImportDialogBase", "Location", nullptr));
        mFavorite->setText(QCoreApplication::translate("QgsStyleExportImportDialogBase", "Add to favorites", nullptr));
        tagLabel->setText(QCoreApplication::translate("QgsStyleExportImportDialogBase", "Additional tag(s)", nullptr));
        mButtonFetch->setText(QCoreApplication::translate("QgsStyleExportImportDialogBase", "Fetch Items", nullptr));
        label->setText(QCoreApplication::translate("QgsStyleExportImportDialogBase", "Select items to export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsStyleExportImportDialogBase: public Ui_QgsStyleExportImportDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEEXPORTIMPORTDIALOGBASE_H
