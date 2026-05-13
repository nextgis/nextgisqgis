/********************************************************************************
** Form generated from reading UI file 'qgsdwgimportbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDWGIMPORTBASE_H
#define UI_QGSDWGIMPORTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"
#include "qgsmapcanvas.h"
#include "qgsmessagebar.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDwgImportBase
{
public:
    QGridLayout *gridLayout_2;
    QgsMessageBar *bar;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QgsProjectionSelectionWidget *mCrsSelector;
    QHBoxLayout *horizontalLayout_2;
    QgsFileWidget *mDatabaseFileWidget;
    QPushButton *pbLoadDatabase;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QgsFileWidget *mSourceDrawingFileWidget;
    QPushButton *pbImportDrawing;
    QLabel *lblMessage;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *mBlockModeComboBox;
    QCheckBox *cbUseCurves;
    QGroupBox *mGroupBox;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTableWidget *mLayers;
    QLineEdit *leLayerGroup;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbMergeLayers;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbDeselectAll;
    QPushButton *pbSelectAll;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QgsMapCanvas *mMapCanvas;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDwgImportBase)
    {
        if (QgsDwgImportBase->objectName().isEmpty())
            QgsDwgImportBase->setObjectName(QString::fromUtf8("QgsDwgImportBase"));
        QgsDwgImportBase->resize(935, 705);
        gridLayout_2 = new QGridLayout(QgsDwgImportBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        bar = new QgsMessageBar(QgsDwgImportBase);
        bar->setObjectName(QString::fromUtf8("bar"));

        gridLayout_2->addWidget(bar, 0, 0, 1, 1);

        groupBox = new QGroupBox(QgsDwgImportBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mCrsSelector = new QgsProjectionSelectionWidget(groupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mDatabaseFileWidget = new QgsFileWidget(groupBox);
        mDatabaseFileWidget->setObjectName(QString::fromUtf8("mDatabaseFileWidget"));
        mDatabaseFileWidget->setProperty("filter", QVariant(QString::fromUtf8("*.gpkg;;*.GPKG")));

        horizontalLayout_2->addWidget(mDatabaseFileWidget);

        pbLoadDatabase = new QPushButton(groupBox);
        pbLoadDatabase->setObjectName(QString::fromUtf8("pbLoadDatabase"));

        horizontalLayout_2->addWidget(pbLoadDatabase);


        gridLayout_4->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mSourceDrawingFileWidget = new QgsFileWidget(groupBox);
        mSourceDrawingFileWidget->setObjectName(QString::fromUtf8("mSourceDrawingFileWidget"));
        mSourceDrawingFileWidget->setProperty("filter", QVariant(QString::fromUtf8("*.dwg;;*.DWG;;*.dxf;;*.DXF")));

        horizontalLayout->addWidget(mSourceDrawingFileWidget);

        pbImportDrawing = new QPushButton(groupBox);
        pbImportDrawing->setObjectName(QString::fromUtf8("pbImportDrawing"));

        horizontalLayout->addWidget(pbImportDrawing);


        gridLayout_4->addLayout(horizontalLayout, 0, 1, 1, 1);

        lblMessage = new QLabel(groupBox);
        lblMessage->setObjectName(QString::fromUtf8("lblMessage"));
        lblMessage->setText(QString::fromUtf8("TextLabel"));

        gridLayout_4->addWidget(lblMessage, 5, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mBlockModeComboBox = new QComboBox(groupBox);
        mBlockModeComboBox->setObjectName(QString::fromUtf8("mBlockModeComboBox"));

        horizontalLayout_4->addWidget(mBlockModeComboBox);

        cbUseCurves = new QCheckBox(groupBox);
        cbUseCurves->setObjectName(QString::fromUtf8("cbUseCurves"));

        horizontalLayout_4->addWidget(cbUseCurves);


        gridLayout_4->addLayout(horizontalLayout_4, 7, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        mGroupBox = new QGroupBox(QgsDwgImportBase);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        mGroupBox->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(mGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(mGroupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        gridLayoutWidget = new QWidget(splitter);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mLayers = new QTableWidget(gridLayoutWidget);
        if (mLayers->columnCount() < 2)
            mLayers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mLayers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mLayers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mLayers->setObjectName(QString::fromUtf8("mLayers"));
        mLayers->setAlternatingRowColors(true);
        mLayers->setSortingEnabled(true);

        gridLayout->addWidget(mLayers, 1, 0, 1, 2);

        leLayerGroup = new QLineEdit(gridLayoutWidget);
        leLayerGroup->setObjectName(QString::fromUtf8("leLayerGroup"));

        gridLayout->addWidget(leLayerGroup, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cbMergeLayers = new QCheckBox(gridLayoutWidget);
        cbMergeLayers->setObjectName(QString::fromUtf8("cbMergeLayers"));

        horizontalLayout_3->addWidget(cbMergeLayers);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbDeselectAll = new QPushButton(gridLayoutWidget);
        pbDeselectAll->setObjectName(QString::fromUtf8("pbDeselectAll"));

        horizontalLayout_3->addWidget(pbDeselectAll);

        pbSelectAll = new QPushButton(gridLayoutWidget);
        pbSelectAll->setObjectName(QString::fromUtf8("pbSelectAll"));

        horizontalLayout_3->addWidget(pbSelectAll);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        splitter->addWidget(gridLayoutWidget);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        mMapCanvas = new QgsMapCanvas(verticalLayoutWidget);
        mMapCanvas->setObjectName(QString::fromUtf8("mMapCanvas"));

        verticalLayout->addWidget(mMapCanvas);

        verticalLayout->setStretch(1, 50);
        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_2->addWidget(splitter);


        gridLayout_2->addWidget(mGroupBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsDwgImportBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        gridLayout_2->setRowStretch(2, 10);
#if QT_CONFIG(shortcut)
        label_2->setBuddy(mSourceDrawingFileWidget);
        label_4->setBuddy(mCrsSelector);
        label_3->setBuddy(leLayerGroup);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mSourceDrawingFileWidget, pbImportDrawing);
        QWidget::setTabOrder(pbImportDrawing, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mDatabaseFileWidget);
        QWidget::setTabOrder(mDatabaseFileWidget, pbLoadDatabase);
        QWidget::setTabOrder(pbLoadDatabase, mBlockModeComboBox);
        QWidget::setTabOrder(mBlockModeComboBox, cbUseCurves);
        QWidget::setTabOrder(cbUseCurves, leLayerGroup);
        QWidget::setTabOrder(leLayerGroup, mLayers);
        QWidget::setTabOrder(mLayers, cbMergeLayers);
        QWidget::setTabOrder(cbMergeLayers, pbDeselectAll);
        QWidget::setTabOrder(pbDeselectAll, pbSelectAll);

        retranslateUi(QgsDwgImportBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDwgImportBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDwgImportBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDwgImportBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDwgImportBase)
    {
        QgsDwgImportBase->setWindowTitle(QCoreApplication::translate("QgsDwgImportBase", "DWG/DXF Import", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsDwgImportBase", "Import Drawing into GeoPackage", nullptr));
        mDatabaseFileWidget->setProperty("dialogTitle", QVariant(QCoreApplication::translate("QgsDwgImportBase", "Select GeoPackage Database", nullptr)));
        pbLoadDatabase->setText(QCoreApplication::translate("QgsDwgImportBase", "Load layers", nullptr));
        label_2->setText(QCoreApplication::translate("QgsDwgImportBase", "Target package", nullptr));
        label->setText(QCoreApplication::translate("QgsDwgImportBase", "Source drawing", nullptr));
        label_4->setText(QCoreApplication::translate("QgsDwgImportBase", "CRS", nullptr));
        mSourceDrawingFileWidget->setProperty("dialogTitle", QVariant(QCoreApplication::translate("QgsDwgImportBase", "Select DWG/DXF file", nullptr)));
        pbImportDrawing->setText(QCoreApplication::translate("QgsDwgImportBase", "Import", nullptr));
        cbUseCurves->setText(QCoreApplication::translate("QgsDwgImportBase", "Use curves", nullptr));
        mGroupBox->setTitle(QCoreApplication::translate("QgsDwgImportBase", "Layers to import into the project", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsDwgImportBase", "Layer", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsDwgImportBase", "Visible", nullptr));
        label_3->setText(QCoreApplication::translate("QgsDwgImportBase", "Group name", nullptr));
        cbMergeLayers->setText(QCoreApplication::translate("QgsDwgImportBase", "Merge layers", nullptr));
        pbDeselectAll->setText(QCoreApplication::translate("QgsDwgImportBase", "Deselect All", nullptr));
        pbSelectAll->setText(QCoreApplication::translate("QgsDwgImportBase", "Select All", nullptr));
        label_6->setText(QCoreApplication::translate("QgsDwgImportBase", "Preview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsDwgImportBase: public Ui_QgsDwgImportBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDWGIMPORTBASE_H
