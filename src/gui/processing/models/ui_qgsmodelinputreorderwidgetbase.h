/********************************************************************************
** Form generated from reading UI file 'qgsmodelinputreorderwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMODELINPUTREORDERWIDGETBASE_H
#define UI_QGSMODELINPUTREORDERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsModelInputReorderWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QListView *mInputsList;
    QVBoxLayout *pushBtnBox_2;
    QPushButton *mButtonUp;
    QPushButton *mButtonDown;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QgsModelInputReorderWidgetBase)
    {
        if (QgsModelInputReorderWidgetBase->objectName().isEmpty())
            QgsModelInputReorderWidgetBase->setObjectName(QString::fromUtf8("QgsModelInputReorderWidgetBase"));
        QgsModelInputReorderWidgetBase->resize(356, 253);
        QgsModelInputReorderWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(QgsModelInputReorderWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mInputsList = new QListView(QgsModelInputReorderWidgetBase);
        mInputsList->setObjectName(QString::fromUtf8("mInputsList"));
        mInputsList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(mInputsList);

        pushBtnBox_2 = new QVBoxLayout();
        pushBtnBox_2->setSpacing(4);
        pushBtnBox_2->setObjectName(QString::fromUtf8("pushBtnBox_2"));
        mButtonUp = new QPushButton(QgsModelInputReorderWidgetBase);
        mButtonUp->setObjectName(QString::fromUtf8("mButtonUp"));
        mButtonUp->setMaximumSize(QSize(50, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonUp->setIcon(icon);

        pushBtnBox_2->addWidget(mButtonUp);

        mButtonDown = new QPushButton(QgsModelInputReorderWidgetBase);
        mButtonDown->setObjectName(QString::fromUtf8("mButtonDown"));
        mButtonDown->setMaximumSize(QSize(50, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonDown->setIcon(icon1);

        pushBtnBox_2->addWidget(mButtonDown);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        pushBtnBox_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(pushBtnBox_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(QgsModelInputReorderWidgetBase);

        QMetaObject::connectSlotsByName(QgsModelInputReorderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsModelInputReorderWidgetBase)
    {
#if QT_CONFIG(tooltip)
        mButtonUp->setToolTip(QCoreApplication::translate("QgsModelInputReorderWidgetBase", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mButtonDown->setToolTip(QCoreApplication::translate("QgsModelInputReorderWidgetBase", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsModelInputReorderWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsModelInputReorderWidgetBase: public Ui_QgsModelInputReorderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMODELINPUTREORDERWIDGETBASE_H
