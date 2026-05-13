/********************************************************************************
** Form generated from reading UI file 'qgslayoutmarkerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMARKERWIDGETBASE_H
#define UI_QGSLAYOUTMARKERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsdoublespinbox.h"
#include "qgslayoutitemcombobox.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMarkerWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QgsSymbolButton *mShapeStyleButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBoxBasic *mRotationGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QComboBox *mNorthTypeComboBox;
    QCheckBox *mRotationFromMapCheckBox;
    QgsDoubleSpinBox *mNorthOffsetSpinBox;
    QLabel *label_7;
    QgsLayoutItemComboBox *mMapComboBox;

    void setupUi(QWidget *QgsLayoutMarkerWidgetBase)
    {
        if (QgsLayoutMarkerWidgetBase->objectName().isEmpty())
            QgsLayoutMarkerWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutMarkerWidgetBase"));
        QgsLayoutMarkerWidgetBase->resize(308, 272);
        QgsLayoutMarkerWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsLayoutMarkerWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsLayoutMarkerWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout->addWidget(label_2);

        scrollArea = new QgsScrollArea(QgsLayoutMarkerWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 306, 248));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mShapeStyleButton = new QgsSymbolButton(groupBox);
        mShapeStyleButton->setObjectName(QString::fromUtf8("mShapeStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mShapeStyleButton->sizePolicy().hasHeightForWidth());
        mShapeStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mShapeStyleButton, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);


        mainLayout->addWidget(groupBox);

        mRotationGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mRotationGroupBox->setObjectName(QString::fromUtf8("mRotationGroupBox"));
        mRotationGroupBox->setFocusPolicy(Qt::StrongFocus);
        mRotationGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mRotationGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mRotationGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(mRotationGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        mNorthTypeComboBox = new QComboBox(mRotationGroupBox);
        mNorthTypeComboBox->setObjectName(QString::fromUtf8("mNorthTypeComboBox"));

        gridLayout_2->addWidget(mNorthTypeComboBox, 1, 1, 1, 1);

        mRotationFromMapCheckBox = new QCheckBox(mRotationGroupBox);
        mRotationFromMapCheckBox->setObjectName(QString::fromUtf8("mRotationFromMapCheckBox"));

        gridLayout_2->addWidget(mRotationFromMapCheckBox, 0, 0, 1, 1);

        mNorthOffsetSpinBox = new QgsDoubleSpinBox(mRotationGroupBox);
        mNorthOffsetSpinBox->setObjectName(QString::fromUtf8("mNorthOffsetSpinBox"));
        mNorthOffsetSpinBox->setWrapping(true);
        mNorthOffsetSpinBox->setMinimum(-360.000000000000000);
        mNorthOffsetSpinBox->setMaximum(360.000000000000000);

        gridLayout_2->addWidget(mNorthOffsetSpinBox, 2, 1, 1, 1);

        label_7 = new QLabel(mRotationGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        mMapComboBox = new QgsLayoutItemComboBox(mRotationGroupBox);
        mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));

        gridLayout_2->addWidget(mMapComboBox, 0, 1, 1, 1);


        mainLayout->addWidget(mRotationGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mShapeStyleButton);
        QWidget::setTabOrder(mShapeStyleButton, mRotationGroupBox);
        QWidget::setTabOrder(mRotationGroupBox, mRotationFromMapCheckBox);
        QWidget::setTabOrder(mRotationFromMapCheckBox, mMapComboBox);
        QWidget::setTabOrder(mMapComboBox, mNorthTypeComboBox);
        QWidget::setTabOrder(mNorthTypeComboBox, mNorthOffsetSpinBox);

        retranslateUi(QgsLayoutMarkerWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutMarkerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMarkerWidgetBase)
    {
        label_2->setText(QCoreApplication::translate("QgsLayoutMarkerWidgetBase", "Marker", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutMarkerWidgetBase", "Main Properties", nullptr));
        mShapeStyleButton->setText(QCoreApplication::translate("QgsLayoutMarkerWidgetBase", "Change\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutMarkerWidgetBase", "Symbol", nullptr));
        mRotationGroupBox->setTitle(QCoreApplication::translate("QgsLayoutMarkerWidgetBase", "Marker Rotation", nullptr));
        label_8->setText(QCoreApplication::translate("QgsLayoutMarkerWidgetBase", "Offset", nullptr));
        mRotationFromMapCheckBox->setText(QCoreApplication::translate("QgsLayoutMarkerWidgetBase", "Sync with map", nullptr));
        mNorthOffsetSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutMarkerWidgetBase", " \302\260", nullptr));
        label_7->setText(QCoreApplication::translate("QgsLayoutMarkerWidgetBase", "North alignment", nullptr));
        (void)QgsLayoutMarkerWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMarkerWidgetBase: public Ui_QgsLayoutMarkerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMARKERWIDGETBASE_H
