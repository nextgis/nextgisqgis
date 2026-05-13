/********************************************************************************
** Form generated from reading UI file 'qgslayermetadatasearchwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYERMETADATASEARCHWIDGET_H
#define UI_QGSLAYERMETADATASEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayerMetadataSearchWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QgsFilterLineEdit *mSearchFilterLineEdit;
    QLabel *label_2;
    QComboBox *mExtentFilterComboBox;
    QLabel *label_3;
    QComboBox *mGeometryTypeComboBox;
    QSpacerItem *horizontalSpacer;
    QProgressBar *mProgressBar;
    QPushButton *mAbortPushButton;
    QTableView *mMetadataTableView;
    QDialogButtonBox *mButtonBox;

    void setupUi(QWidget *QgsLayerMetadataSearchWidget)
    {
        if (QgsLayerMetadataSearchWidget->objectName().isEmpty())
            QgsLayerMetadataSearchWidget->setObjectName(QString::fromUtf8("QgsLayerMetadataSearchWidget"));
        QgsLayerMetadataSearchWidget->resize(718, 399);
        verticalLayout = new QVBoxLayout(QgsLayerMetadataSearchWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(QgsLayerMetadataSearchWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        mSearchFilterLineEdit = new QgsFilterLineEdit(QgsLayerMetadataSearchWidget);
        mSearchFilterLineEdit->setObjectName(QString::fromUtf8("mSearchFilterLineEdit"));

        horizontalLayout_2->addWidget(mSearchFilterLineEdit);

        label_2 = new QLabel(QgsLayerMetadataSearchWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        mExtentFilterComboBox = new QComboBox(QgsLayerMetadataSearchWidget);
        mExtentFilterComboBox->setObjectName(QString::fromUtf8("mExtentFilterComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mExtentFilterComboBox->sizePolicy().hasHeightForWidth());
        mExtentFilterComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(mExtentFilterComboBox);

        label_3 = new QLabel(QgsLayerMetadataSearchWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        mGeometryTypeComboBox = new QComboBox(QgsLayerMetadataSearchWidget);
        mGeometryTypeComboBox->setObjectName(QString::fromUtf8("mGeometryTypeComboBox"));
        sizePolicy.setHeightForWidth(mGeometryTypeComboBox->sizePolicy().hasHeightForWidth());
        mGeometryTypeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(mGeometryTypeComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mProgressBar = new QProgressBar(QgsLayerMetadataSearchWidget);
        mProgressBar->setObjectName(QString::fromUtf8("mProgressBar"));
        mProgressBar->setValue(24);

        horizontalLayout_2->addWidget(mProgressBar);

        mAbortPushButton = new QPushButton(QgsLayerMetadataSearchWidget);
        mAbortPushButton->setObjectName(QString::fromUtf8("mAbortPushButton"));

        horizontalLayout_2->addWidget(mAbortPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        mMetadataTableView = new QTableView(QgsLayerMetadataSearchWidget);
        mMetadataTableView->setObjectName(QString::fromUtf8("mMetadataTableView"));

        verticalLayout->addWidget(mMetadataTableView);

        mButtonBox = new QDialogButtonBox(QgsLayerMetadataSearchWidget);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(mButtonBox);

        QWidget::setTabOrder(mSearchFilterLineEdit, mExtentFilterComboBox);
        QWidget::setTabOrder(mExtentFilterComboBox, mGeometryTypeComboBox);
        QWidget::setTabOrder(mGeometryTypeComboBox, mAbortPushButton);
        QWidget::setTabOrder(mAbortPushButton, mMetadataTableView);

        retranslateUi(QgsLayerMetadataSearchWidget);

        QMetaObject::connectSlotsByName(QgsLayerMetadataSearchWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLayerMetadataSearchWidget)
    {
        QgsLayerMetadataSearchWidget->setWindowTitle(QCoreApplication::translate("QgsLayerMetadataSearchWidget", "Layer Metadata Search", nullptr));
        label->setText(QCoreApplication::translate("QgsLayerMetadataSearchWidget", "Filter", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayerMetadataSearchWidget", "limit extent to", nullptr));
        label_3->setText(QCoreApplication::translate("QgsLayerMetadataSearchWidget", "layer type", nullptr));
        mAbortPushButton->setText(QCoreApplication::translate("QgsLayerMetadataSearchWidget", "Abort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayerMetadataSearchWidget: public Ui_QgsLayerMetadataSearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYERMETADATASEARCHWIDGET_H
