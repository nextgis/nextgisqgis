/********************************************************************************
** Form generated from reading UI file 'qgslayertreeembeddedconfigwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYERTREEEMBEDDEDCONFIGWIDGETBASE_H
#define UI_QGSLAYERTREEEMBEDDEDCONFIGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsLayerTreeEmbeddedConfigWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QListView *mListAvailable;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QToolButton *mBtnAdd;
    QToolButton *mBtnRemove;
    QSpacerItem *verticalSpacer;
    QListView *mListUsed;

    void setupUi(QWidget *QgsLayerTreeEmbeddedConfigWidgetBase)
    {
        if (QgsLayerTreeEmbeddedConfigWidgetBase->objectName().isEmpty())
            QgsLayerTreeEmbeddedConfigWidgetBase->setObjectName(QString::fromUtf8("QgsLayerTreeEmbeddedConfigWidgetBase"));
        QgsLayerTreeEmbeddedConfigWidgetBase->resize(580, 300);
        QgsLayerTreeEmbeddedConfigWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsLayerTreeEmbeddedConfigWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsLayerTreeEmbeddedConfigWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(QgsLayerTreeEmbeddedConfigWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        mListAvailable = new QListView(QgsLayerTreeEmbeddedConfigWidgetBase);
        mListAvailable->setObjectName(QString::fromUtf8("mListAvailable"));

        gridLayout->addWidget(mListAvailable, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        mBtnAdd = new QToolButton(QgsLayerTreeEmbeddedConfigWidgetBase);
        mBtnAdd->setObjectName(QString::fromUtf8("mBtnAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnAdd->setIcon(icon);

        verticalLayout->addWidget(mBtnAdd);

        mBtnRemove = new QToolButton(QgsLayerTreeEmbeddedConfigWidgetBase);
        mBtnRemove->setObjectName(QString::fromUtf8("mBtnRemove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRemove->setIcon(icon1);

        verticalLayout->addWidget(mBtnRemove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        mListUsed = new QListView(QgsLayerTreeEmbeddedConfigWidgetBase);
        mListUsed->setObjectName(QString::fromUtf8("mListUsed"));

        gridLayout->addWidget(mListUsed, 1, 2, 1, 1);


        retranslateUi(QgsLayerTreeEmbeddedConfigWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayerTreeEmbeddedConfigWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayerTreeEmbeddedConfigWidgetBase)
    {
        label->setText(QCoreApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "Available widgets", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "Used widgets", nullptr));
#if QT_CONFIG(tooltip)
        mBtnAdd->setToolTip(QCoreApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "Add  selected widgets", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnAdd->setText(QCoreApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "->", nullptr));
#if QT_CONFIG(tooltip)
        mBtnRemove->setToolTip(QCoreApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "Remove selected widgets", nullptr));
#endif // QT_CONFIG(tooltip)
        mBtnRemove->setText(QCoreApplication::translate("QgsLayerTreeEmbeddedConfigWidgetBase", "<-", nullptr));
        (void)QgsLayerTreeEmbeddedConfigWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsLayerTreeEmbeddedConfigWidgetBase: public Ui_QgsLayerTreeEmbeddedConfigWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYERTREEEMBEDDEDCONFIGWIDGETBASE_H
