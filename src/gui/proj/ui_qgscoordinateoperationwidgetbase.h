/********************************************************************************
** Form generated from reading UI file 'qgscoordinateoperationwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOORDINATEOPERATIONWIDGETBASE_H
#define UI_QGSCOORDINATEOPERATIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qgscoordinateboundspreviewmapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCoordinateOperationWidgetBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QPushButton *mInstallGridButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mLabelSrcDescription;
    QLabel *mLabelDstDescription;
    QgsCoordinateBoundsPreviewMapWidget *mAreaCanvas;
    QTableWidget *mCoordinateOperationTableWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mHideDeprecatedCheckBox;
    QCheckBox *mShowSupersededCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mAllowFallbackCheckBox;
    QCheckBox *mMakeDefaultCheckBox;

    void setupUi(QWidget *QgsCoordinateOperationWidgetBase)
    {
        if (QgsCoordinateOperationWidgetBase->objectName().isEmpty())
            QgsCoordinateOperationWidgetBase->setObjectName(QString::fromUtf8("QgsCoordinateOperationWidgetBase"));
        QgsCoordinateOperationWidgetBase->resize(1000, 433);
        gridLayout = new QGridLayout(QgsCoordinateOperationWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, -1, -1);
        mInstallGridButton = new QPushButton(QgsCoordinateOperationWidgetBase);
        mInstallGridButton->setObjectName(QString::fromUtf8("mInstallGridButton"));

        gridLayout_2->addWidget(mInstallGridButton, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        mLabelSrcDescription = new QLabel(QgsCoordinateOperationWidgetBase);
        mLabelSrcDescription->setObjectName(QString::fromUtf8("mLabelSrcDescription"));
        mLabelSrcDescription->setCursor(QCursor(Qt::IBeamCursor));
        mLabelSrcDescription->setText(QString::fromUtf8("Description"));
        mLabelSrcDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelSrcDescription->setWordWrap(true);
        mLabelSrcDescription->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(mLabelSrcDescription, 0, 0, 1, 2);


        horizontalLayout_2->addLayout(gridLayout_2);

        mLabelDstDescription = new QLabel(QgsCoordinateOperationWidgetBase);
        mLabelDstDescription->setObjectName(QString::fromUtf8("mLabelDstDescription"));
        mLabelDstDescription->setCursor(QCursor(Qt::IBeamCursor));
        mLabelDstDescription->setText(QString::fromUtf8("Description"));
        mLabelDstDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelDstDescription->setWordWrap(true);
        mLabelDstDescription->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(mLabelDstDescription);

        mAreaCanvas = new QgsCoordinateBoundsPreviewMapWidget(QgsCoordinateOperationWidgetBase);
        mAreaCanvas->setObjectName(QString::fromUtf8("mAreaCanvas"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAreaCanvas->sizePolicy().hasHeightForWidth());
        mAreaCanvas->setSizePolicy(sizePolicy);
        mAreaCanvas->setMinimumSize(QSize(230, 117));
        mAreaCanvas->setMaximumSize(QSize(16777214, 16777215));

        horizontalLayout_2->addWidget(mAreaCanvas);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        mCoordinateOperationTableWidget = new QTableWidget(QgsCoordinateOperationWidgetBase);
        mCoordinateOperationTableWidget->setObjectName(QString::fromUtf8("mCoordinateOperationTableWidget"));
        mCoordinateOperationTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        mCoordinateOperationTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(mCoordinateOperationTableWidget, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mHideDeprecatedCheckBox = new QCheckBox(QgsCoordinateOperationWidgetBase);
        mHideDeprecatedCheckBox->setObjectName(QString::fromUtf8("mHideDeprecatedCheckBox"));

        horizontalLayout->addWidget(mHideDeprecatedCheckBox);

        mShowSupersededCheckBox = new QCheckBox(QgsCoordinateOperationWidgetBase);
        mShowSupersededCheckBox->setObjectName(QString::fromUtf8("mShowSupersededCheckBox"));

        horizontalLayout->addWidget(mShowSupersededCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mAllowFallbackCheckBox = new QCheckBox(QgsCoordinateOperationWidgetBase);
        mAllowFallbackCheckBox->setObjectName(QString::fromUtf8("mAllowFallbackCheckBox"));
        mAllowFallbackCheckBox->setChecked(true);

        horizontalLayout->addWidget(mAllowFallbackCheckBox);

        mMakeDefaultCheckBox = new QCheckBox(QgsCoordinateOperationWidgetBase);
        mMakeDefaultCheckBox->setObjectName(QString::fromUtf8("mMakeDefaultCheckBox"));

        horizontalLayout->addWidget(mMakeDefaultCheckBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        QWidget::setTabOrder(mCoordinateOperationTableWidget, mInstallGridButton);
        QWidget::setTabOrder(mInstallGridButton, mHideDeprecatedCheckBox);
        QWidget::setTabOrder(mHideDeprecatedCheckBox, mShowSupersededCheckBox);
        QWidget::setTabOrder(mShowSupersededCheckBox, mAllowFallbackCheckBox);
        QWidget::setTabOrder(mAllowFallbackCheckBox, mMakeDefaultCheckBox);

        retranslateUi(QgsCoordinateOperationWidgetBase);

        QMetaObject::connectSlotsByName(QgsCoordinateOperationWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCoordinateOperationWidgetBase)
    {
        QgsCoordinateOperationWidgetBase->setWindowTitle(QCoreApplication::translate("QgsCoordinateOperationWidgetBase", "Select Datum Transformations", nullptr));
        mInstallGridButton->setText(QCoreApplication::translate("QgsCoordinateOperationWidgetBase", "Install Grid\342\200\246", nullptr));
        mHideDeprecatedCheckBox->setText(QCoreApplication::translate("QgsCoordinateOperationWidgetBase", "Hide deprecated transformations", nullptr));
        mShowSupersededCheckBox->setText(QCoreApplication::translate("QgsCoordinateOperationWidgetBase", "Show superseded transforms", nullptr));
#if QT_CONFIG(tooltip)
        mAllowFallbackCheckBox->setToolTip(QCoreApplication::translate("QgsCoordinateOperationWidgetBase", "Sets whether \"ballpark\" fallback transformations can be\n"
"used in the case that the specified coordinate operation fails\n"
"(such as when coordinates from outside a required grid shift\n"
"file are transformed).", nullptr));
#endif // QT_CONFIG(tooltip)
        mAllowFallbackCheckBox->setText(QCoreApplication::translate("QgsCoordinateOperationWidgetBase", "Allow fallback transforms if preferred operation fails", nullptr));
#if QT_CONFIG(tooltip)
        mMakeDefaultCheckBox->setToolTip(QCoreApplication::translate("QgsCoordinateOperationWidgetBase", "If checked, the selected transformation will become the default choice in all new projects", nullptr));
#endif // QT_CONFIG(tooltip)
        mMakeDefaultCheckBox->setText(QCoreApplication::translate("QgsCoordinateOperationWidgetBase", "Make default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsCoordinateOperationWidgetBase: public Ui_QgsCoordinateOperationWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOORDINATEOPERATIONWIDGETBASE_H
