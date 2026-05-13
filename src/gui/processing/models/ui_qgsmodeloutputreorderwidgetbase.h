/********************************************************************************
** Form generated from reading UI file 'qgsmodeloutputreorderwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMODELOUTPUTREORDERWIDGETBASE_H
#define UI_QGSMODELOUTPUTREORDERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsModelOutputReorderWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QListView *mOutputsList;
    QVBoxLayout *pushBtnBox_2;
    QPushButton *mButtonUp;
    QPushButton *mButtonDown;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *mPlaceInGroupCheck;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *mGroupNameEdit;

    void setupUi(QWidget *QgsModelOutputReorderWidgetBase)
    {
        if (QgsModelOutputReorderWidgetBase->objectName().isEmpty())
            QgsModelOutputReorderWidgetBase->setObjectName(QString::fromUtf8("QgsModelOutputReorderWidgetBase"));
        QgsModelOutputReorderWidgetBase->resize(356, 253);
        QgsModelOutputReorderWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(QgsModelOutputReorderWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mOutputsList = new QListView(QgsModelOutputReorderWidgetBase);
        mOutputsList->setObjectName(QString::fromUtf8("mOutputsList"));
        mOutputsList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(mOutputsList);

        pushBtnBox_2 = new QVBoxLayout();
        pushBtnBox_2->setSpacing(4);
        pushBtnBox_2->setObjectName(QString::fromUtf8("pushBtnBox_2"));
        mButtonUp = new QPushButton(QgsModelOutputReorderWidgetBase);
        mButtonUp->setObjectName(QString::fromUtf8("mButtonUp"));
        mButtonUp->setMaximumSize(QSize(50, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonUp->setIcon(icon);

        pushBtnBox_2->addWidget(mButtonUp);

        mButtonDown = new QPushButton(QgsModelOutputReorderWidgetBase);
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

        mPlaceInGroupCheck = new QGroupBox(QgsModelOutputReorderWidgetBase);
        mPlaceInGroupCheck->setObjectName(QString::fromUtf8("mPlaceInGroupCheck"));
        mPlaceInGroupCheck->setCheckable(true);
        horizontalLayout_2 = new QHBoxLayout(mPlaceInGroupCheck);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(mPlaceInGroupCheck);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        mGroupNameEdit = new QLineEdit(mPlaceInGroupCheck);
        mGroupNameEdit->setObjectName(QString::fromUtf8("mGroupNameEdit"));

        horizontalLayout_2->addWidget(mGroupNameEdit);


        gridLayout_2->addWidget(mPlaceInGroupCheck, 2, 0, 1, 1);


        retranslateUi(QgsModelOutputReorderWidgetBase);

        QMetaObject::connectSlotsByName(QgsModelOutputReorderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsModelOutputReorderWidgetBase)
    {
#if QT_CONFIG(tooltip)
        mButtonUp->setToolTip(QCoreApplication::translate("QgsModelOutputReorderWidgetBase", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mButtonDown->setToolTip(QCoreApplication::translate("QgsModelOutputReorderWidgetBase", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
        mPlaceInGroupCheck->setTitle(QCoreApplication::translate("QgsModelOutputReorderWidgetBase", "Place outputs in a group", nullptr));
        label->setText(QCoreApplication::translate("QgsModelOutputReorderWidgetBase", "Group name", nullptr));
        (void)QgsModelOutputReorderWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsModelOutputReorderWidgetBase: public Ui_QgsModelOutputReorderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMODELOUTPUTREORDERWIDGETBASE_H
