/********************************************************************************
** Form generated from reading UI file 'qgsstackeddiagrampropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTACKEDDIAGRAMPROPERTIESBASE_H
#define UI_QGSSTACKEDDIAGRAMPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStackedDiagramPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *mSubDiagramsView;
    QHBoxLayout *horizontalLayout;
    QPushButton *mAddSubDiagramButton;
    QPushButton *mEditSubDiagramButton;
    QPushButton *mRemoveSubDiagramButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *mStackedDiagramSettingsGroupBox;
    QGridLayout *gridLayout;
    QLabel *dIagramSpacingLabel;
    QLabel *stackedDiagramModeLabel;
    QComboBox *mStackedDiagramModeComboBox;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mStackedDiagramSpacingSpinBox;
    QgsUnitSelectionWidget *mStackedDiagramSpacingUnitComboBox;

    void setupUi(QWidget *QgsStackedDiagramPropertiesBase)
    {
        if (QgsStackedDiagramPropertiesBase->objectName().isEmpty())
            QgsStackedDiagramPropertiesBase->setObjectName(QString::fromUtf8("QgsStackedDiagramPropertiesBase"));
        QgsStackedDiagramPropertiesBase->resize(802, 462);
        verticalLayout = new QVBoxLayout(QgsStackedDiagramPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mSubDiagramsView = new QTreeView(QgsStackedDiagramPropertiesBase);
        mSubDiagramsView->setObjectName(QString::fromUtf8("mSubDiagramsView"));
        mSubDiagramsView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mSubDiagramsView->setItemsExpandable(false);
        mSubDiagramsView->setExpandsOnDoubleClick(false);
        mSubDiagramsView->setAcceptDrops(true);
        mSubDiagramsView->setDragEnabled(true);
        mSubDiagramsView->setDragDropMode(QAbstractItemView::InternalMove);
        mSubDiagramsView->setAllColumnsShowFocus(true);
        mSubDiagramsView->header()->setMinimumSectionSize(100);
        mSubDiagramsView->header()->setDefaultSectionSize(150);

        verticalLayout->addWidget(mSubDiagramsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mAddSubDiagramButton = new QPushButton(QgsStackedDiagramPropertiesBase);
        mAddSubDiagramButton->setObjectName(QString::fromUtf8("mAddSubDiagramButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAddSubDiagramButton->sizePolicy().hasHeightForWidth());
        mAddSubDiagramButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddSubDiagramButton->setIcon(icon);

        horizontalLayout->addWidget(mAddSubDiagramButton);

        mEditSubDiagramButton = new QPushButton(QgsStackedDiagramPropertiesBase);
        mEditSubDiagramButton->setObjectName(QString::fromUtf8("mEditSubDiagramButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditSubDiagramButton->setIcon(icon1);

        horizontalLayout->addWidget(mEditSubDiagramButton);

        mRemoveSubDiagramButton = new QPushButton(QgsStackedDiagramPropertiesBase);
        mRemoveSubDiagramButton->setObjectName(QString::fromUtf8("mRemoveSubDiagramButton"));
        sizePolicy.setHeightForWidth(mRemoveSubDiagramButton->sizePolicy().hasHeightForWidth());
        mRemoveSubDiagramButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveSubDiagramButton->setIcon(icon2);

        horizontalLayout->addWidget(mRemoveSubDiagramButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        mStackedDiagramSettingsGroupBox = new QGroupBox(QgsStackedDiagramPropertiesBase);
        mStackedDiagramSettingsGroupBox->setObjectName(QString::fromUtf8("mStackedDiagramSettingsGroupBox"));
        gridLayout = new QGridLayout(mStackedDiagramSettingsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dIagramSpacingLabel = new QLabel(mStackedDiagramSettingsGroupBox);
        dIagramSpacingLabel->setObjectName(QString::fromUtf8("dIagramSpacingLabel"));

        gridLayout->addWidget(dIagramSpacingLabel, 1, 0, 1, 1);

        stackedDiagramModeLabel = new QLabel(mStackedDiagramSettingsGroupBox);
        stackedDiagramModeLabel->setObjectName(QString::fromUtf8("stackedDiagramModeLabel"));

        gridLayout->addWidget(stackedDiagramModeLabel, 0, 0, 1, 1);

        mStackedDiagramModeComboBox = new QComboBox(mStackedDiagramSettingsGroupBox);
        mStackedDiagramModeComboBox->setObjectName(QString::fromUtf8("mStackedDiagramModeComboBox"));

        gridLayout->addWidget(mStackedDiagramModeComboBox, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mStackedDiagramSpacingSpinBox = new QgsDoubleSpinBox(mStackedDiagramSettingsGroupBox);
        mStackedDiagramSpacingSpinBox->setObjectName(QString::fromUtf8("mStackedDiagramSpacingSpinBox"));
        mStackedDiagramSpacingSpinBox->setMinimumSize(QSize(70, 0));
        mStackedDiagramSpacingSpinBox->setDecimals(6);
        mStackedDiagramSpacingSpinBox->setMaximum(9999999999.000000000000000);

        horizontalLayout_2->addWidget(mStackedDiagramSpacingSpinBox);

        mStackedDiagramSpacingUnitComboBox = new QgsUnitSelectionWidget(mStackedDiagramSettingsGroupBox);
        mStackedDiagramSpacingUnitComboBox->setObjectName(QString::fromUtf8("mStackedDiagramSpacingUnitComboBox"));
        mStackedDiagramSpacingUnitComboBox->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(mStackedDiagramSpacingUnitComboBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(mStackedDiagramSettingsGroupBox);

        QWidget::setTabOrder(mSubDiagramsView, mAddSubDiagramButton);
        QWidget::setTabOrder(mAddSubDiagramButton, mEditSubDiagramButton);
        QWidget::setTabOrder(mEditSubDiagramButton, mRemoveSubDiagramButton);
        QWidget::setTabOrder(mRemoveSubDiagramButton, mStackedDiagramModeComboBox);
        QWidget::setTabOrder(mStackedDiagramModeComboBox, mStackedDiagramSpacingSpinBox);

        retranslateUi(QgsStackedDiagramPropertiesBase);

        QMetaObject::connectSlotsByName(QgsStackedDiagramPropertiesBase);
    } // setupUi

    void retranslateUi(QWidget *QgsStackedDiagramPropertiesBase)
    {
#if QT_CONFIG(tooltip)
        mAddSubDiagramButton->setToolTip(QCoreApplication::translate("QgsStackedDiagramPropertiesBase", "Add subdiagram to the stacked diagram", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddSubDiagramButton->setText(QString());
#if QT_CONFIG(tooltip)
        mEditSubDiagramButton->setToolTip(QCoreApplication::translate("QgsStackedDiagramPropertiesBase", "Edit subdiagram from the stacked diagram", nullptr));
#endif // QT_CONFIG(tooltip)
        mEditSubDiagramButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveSubDiagramButton->setToolTip(QCoreApplication::translate("QgsStackedDiagramPropertiesBase", "Remove subdiagram from the stacked diagram", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveSubDiagramButton->setText(QString());
        mStackedDiagramSettingsGroupBox->setTitle(QCoreApplication::translate("QgsStackedDiagramPropertiesBase", "Layout", nullptr));
        dIagramSpacingLabel->setText(QCoreApplication::translate("QgsStackedDiagramPropertiesBase", "Spacing", nullptr));
        stackedDiagramModeLabel->setText(QCoreApplication::translate("QgsStackedDiagramPropertiesBase", "Diagram arrangement", nullptr));
        mStackedDiagramSpacingUnitComboBox->setProperty("currentText", QVariant(QString()));
        (void)QgsStackedDiagramPropertiesBase;
    } // retranslateUi

};

namespace Ui {
    class QgsStackedDiagramPropertiesBase: public Ui_QgsStackedDiagramPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTACKEDDIAGRAMPROPERTIESBASE_H
