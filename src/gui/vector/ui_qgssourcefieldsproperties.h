/********************************************************************************
** Form generated from reading UI file 'qgssourcefieldsproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSOURCEFIELDSPROPERTIES_H
#define UI_QGSSOURCEFIELDSPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSourceFieldsProperties
{
public:
    QGridLayout *gridLayout;
    QTableWidget *mFieldsList;
    QGridLayout *gridLayout_3;
    QToolButton *mCalculateFieldButton;
    QToolButton *mToggleEditingButton;
    QToolButton *mDeleteAttributeButton;
    QToolButton *mAddAttributeButton;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mSaveLayerEditsButton;

    void setupUi(QWidget *QgsSourceFieldsProperties)
    {
        if (QgsSourceFieldsProperties->objectName().isEmpty())
            QgsSourceFieldsProperties->setObjectName(QString::fromUtf8("QgsSourceFieldsProperties"));
        QgsSourceFieldsProperties->resize(384, 315);
        QgsSourceFieldsProperties->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsSourceFieldsProperties);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFieldsList = new QTableWidget(QgsSourceFieldsProperties);
        mFieldsList->setObjectName(QString::fromUtf8("mFieldsList"));

        gridLayout->addWidget(mFieldsList, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, 0, -1);
        mCalculateFieldButton = new QToolButton(QgsSourceFieldsProperties);
        mCalculateFieldButton->setObjectName(QString::fromUtf8("mCalculateFieldButton"));
        mCalculateFieldButton->setCheckable(false);

        gridLayout_3->addWidget(mCalculateFieldButton, 0, 4, 1, 1);

        mToggleEditingButton = new QToolButton(QgsSourceFieldsProperties);
        mToggleEditingButton->setObjectName(QString::fromUtf8("mToggleEditingButton"));
        mToggleEditingButton->setCheckable(true);

        gridLayout_3->addWidget(mToggleEditingButton, 0, 2, 1, 1);

        mDeleteAttributeButton = new QToolButton(QgsSourceFieldsProperties);
        mDeleteAttributeButton->setObjectName(QString::fromUtf8("mDeleteAttributeButton"));

        gridLayout_3->addWidget(mDeleteAttributeButton, 0, 1, 1, 1);

        mAddAttributeButton = new QToolButton(QgsSourceFieldsProperties);
        mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mAddAttributeButton, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 6, 1, 1);

        mSaveLayerEditsButton = new QToolButton(QgsSourceFieldsProperties);
        mSaveLayerEditsButton->setObjectName(QString::fromUtf8("mSaveLayerEditsButton"));
        mSaveLayerEditsButton->setCheckable(false);

        gridLayout_3->addWidget(mSaveLayerEditsButton, 0, 3, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);

        QWidget::setTabOrder(mFieldsList, mAddAttributeButton);
        QWidget::setTabOrder(mAddAttributeButton, mDeleteAttributeButton);
        QWidget::setTabOrder(mDeleteAttributeButton, mToggleEditingButton);
        QWidget::setTabOrder(mToggleEditingButton, mSaveLayerEditsButton);
        QWidget::setTabOrder(mSaveLayerEditsButton, mCalculateFieldButton);

        retranslateUi(QgsSourceFieldsProperties);

        QMetaObject::connectSlotsByName(QgsSourceFieldsProperties);
    } // setupUi

    void retranslateUi(QWidget *QgsSourceFieldsProperties)
    {
#if QT_CONFIG(tooltip)
        mCalculateFieldButton->setToolTip(QCoreApplication::translate("QgsSourceFieldsProperties", "Field calculator", nullptr));
#endif // QT_CONFIG(tooltip)
        mCalculateFieldButton->setText(QString());
#if QT_CONFIG(tooltip)
        mToggleEditingButton->setToolTip(QCoreApplication::translate("QgsSourceFieldsProperties", "Toggle editing mode", nullptr));
#endif // QT_CONFIG(tooltip)
        mToggleEditingButton->setText(QString());
#if QT_CONFIG(tooltip)
        mDeleteAttributeButton->setToolTip(QCoreApplication::translate("QgsSourceFieldsProperties", "Delete field", nullptr));
#endif // QT_CONFIG(tooltip)
        mDeleteAttributeButton->setText(QString());
#if QT_CONFIG(shortcut)
        mDeleteAttributeButton->setShortcut(QCoreApplication::translate("QgsSourceFieldsProperties", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        mAddAttributeButton->setToolTip(QCoreApplication::translate("QgsSourceFieldsProperties", "New field", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddAttributeButton->setText(QString());
#if QT_CONFIG(shortcut)
        mAddAttributeButton->setShortcut(QCoreApplication::translate("QgsSourceFieldsProperties", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        mSaveLayerEditsButton->setToolTip(QCoreApplication::translate("QgsSourceFieldsProperties", "Save Layer Edits", nullptr));
#endif // QT_CONFIG(tooltip)
        mSaveLayerEditsButton->setText(QString());
        (void)QgsSourceFieldsProperties;
    } // retranslateUi

};

namespace Ui {
    class QgsSourceFieldsProperties: public Ui_QgsSourceFieldsProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSOURCEFIELDSPROPERTIES_H
