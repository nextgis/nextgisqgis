/********************************************************************************
** Form generated from reading UI file 'qgspointclusterrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLUSTERRENDERERWIDGETBASE_H
#define UI_QGSPOINTCLUSTERRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointClusterRendererWidgetBase
{
public:
    QGridLayout *gridLayout_3;
    QComboBox *mRendererComboBox;
    QLabel *mDistanceToleranceLabel;
    QPushButton *mRendererSettingsButton;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *mDistanceSpinBox;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QSpacerItem *verticalSpacer;
    QLabel *mRendererLabel;
    QHBoxLayout *horizontalLayout_2;
    QgsSymbolButton *mCenterSymbolToolButton;
    QSpacerItem *horizontalSpacer;
    QLabel *mCenterSymbolLabel;

    void setupUi(QWidget *QgsPointClusterRendererWidgetBase)
    {
        if (QgsPointClusterRendererWidgetBase->objectName().isEmpty())
            QgsPointClusterRendererWidgetBase->setObjectName(QString::fromUtf8("QgsPointClusterRendererWidgetBase"));
        QgsPointClusterRendererWidgetBase->resize(381, 492);
        QgsPointClusterRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_3 = new QGridLayout(QgsPointClusterRendererWidgetBase);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mRendererComboBox = new QComboBox(QgsPointClusterRendererWidgetBase);
        mRendererComboBox->setObjectName(QString::fromUtf8("mRendererComboBox"));

        gridLayout_3->addWidget(mRendererComboBox, 2, 1, 1, 1);

        mDistanceToleranceLabel = new QLabel(QgsPointClusterRendererWidgetBase);
        mDistanceToleranceLabel->setObjectName(QString::fromUtf8("mDistanceToleranceLabel"));

        gridLayout_3->addWidget(mDistanceToleranceLabel, 6, 0, 1, 1);

        mRendererSettingsButton = new QPushButton(QgsPointClusterRendererWidgetBase);
        mRendererSettingsButton->setObjectName(QString::fromUtf8("mRendererSettingsButton"));

        gridLayout_3->addWidget(mRendererSettingsButton, 4, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mDistanceSpinBox = new QgsDoubleSpinBox(QgsPointClusterRendererWidgetBase);
        mDistanceSpinBox->setObjectName(QString::fromUtf8("mDistanceSpinBox"));
        mDistanceSpinBox->setDecimals(7);
        mDistanceSpinBox->setMaximum(999999999.000000000000000);

        horizontalLayout->addWidget(mDistanceSpinBox);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(QgsPointClusterRendererWidgetBase);
        mDistanceUnitWidget->setObjectName(QString::fromUtf8("mDistanceUnitWidget"));
        mDistanceUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(mDistanceUnitWidget);


        gridLayout_3->addLayout(horizontalLayout, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 7, 0, 1, 1);

        mRendererLabel = new QLabel(QgsPointClusterRendererWidgetBase);
        mRendererLabel->setObjectName(QString::fromUtf8("mRendererLabel"));

        gridLayout_3->addWidget(mRendererLabel, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mCenterSymbolToolButton = new QgsSymbolButton(QgsPointClusterRendererWidgetBase);
        mCenterSymbolToolButton->setObjectName(QString::fromUtf8("mCenterSymbolToolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCenterSymbolToolButton->sizePolicy().hasHeightForWidth());
        mCenterSymbolToolButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(mCenterSymbolToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        mCenterSymbolLabel = new QLabel(QgsPointClusterRendererWidgetBase);
        mCenterSymbolLabel->setObjectName(QString::fromUtf8("mCenterSymbolLabel"));

        gridLayout_3->addWidget(mCenterSymbolLabel, 1, 0, 1, 1);

        QWidget::setTabOrder(mCenterSymbolToolButton, mRendererComboBox);
        QWidget::setTabOrder(mRendererComboBox, mRendererSettingsButton);
        QWidget::setTabOrder(mRendererSettingsButton, mDistanceSpinBox);
        QWidget::setTabOrder(mDistanceSpinBox, mDistanceUnitWidget);

        retranslateUi(QgsPointClusterRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointClusterRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointClusterRendererWidgetBase)
    {
        mDistanceToleranceLabel->setText(QCoreApplication::translate("QgsPointClusterRendererWidgetBase", "Distance", nullptr));
        mRendererSettingsButton->setText(QCoreApplication::translate("QgsPointClusterRendererWidgetBase", "Renderer Settings\342\200\246", nullptr));
        mRendererLabel->setText(QCoreApplication::translate("QgsPointClusterRendererWidgetBase", "Renderer", nullptr));
        mCenterSymbolToolButton->setText(QString());
        mCenterSymbolLabel->setText(QCoreApplication::translate("QgsPointClusterRendererWidgetBase", "Cluster symbol", nullptr));
        (void)QgsPointClusterRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsPointClusterRendererWidgetBase: public Ui_QgsPointClusterRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLUSTERRENDERERWIDGETBASE_H
