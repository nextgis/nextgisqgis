/********************************************************************************
** Form generated from reading UI file '3dnavigationwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_3DNAVIGATIONWIDGET_H
#define UI_3DNAVIGATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_compass.h"
#include "qwt_dial.h"

QT_BEGIN_NAMESPACE

class Ui_Q3DNavigationWidget
{
public:
    QVBoxLayout *widgetLayout;
    QGridLayout *compassLayout;
    QToolButton *mMoveUpButton;
    QToolButton *mZoomInButton;
    QToolButton *mTiltUpButton;
    QToolButton *mMoveLeftButton;
    QwtCompass *mCompass;
    QToolButton *mMoveRightButton;
    QToolButton *mZoomOutButton;
    QToolButton *mMoveDownButton;
    QToolButton *mTiltDownButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Q3DNavigationWidget)
    {
        if (Q3DNavigationWidget->objectName().isEmpty())
            Q3DNavigationWidget->setObjectName(QString::fromUtf8("Q3DNavigationWidget"));
        Q3DNavigationWidget->resize(276, 452);
        Q3DNavigationWidget->setWindowTitle(QString::fromUtf8("Form"));
        widgetLayout = new QVBoxLayout(Q3DNavigationWidget);
        widgetLayout->setObjectName(QString::fromUtf8("widgetLayout"));
        widgetLayout->setContentsMargins(2, 2, 2, 2);
        compassLayout = new QGridLayout();
        compassLayout->setObjectName(QString::fromUtf8("compassLayout"));
        compassLayout->setContentsMargins(-1, 10, -1, -1);
        mMoveUpButton = new QToolButton(Q3DNavigationWidget);
        mMoveUpButton->setObjectName(QString::fromUtf8("mMoveUpButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveUpButton->setIcon(icon);
        mMoveUpButton->setAutoRepeat(true);
        mMoveUpButton->setAutoRaise(true);

        compassLayout->addWidget(mMoveUpButton, 0, 0, 1, 1);

        mZoomInButton = new QToolButton(Q3DNavigationWidget);
        mZoomInButton->setObjectName(QString::fromUtf8("mZoomInButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomIn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mZoomInButton->setIcon(icon1);
        mZoomInButton->setAutoRepeat(true);
        mZoomInButton->setAutoRaise(true);

        compassLayout->addWidget(mZoomInButton, 0, 2, 1, 1);

        mTiltUpButton = new QToolButton(Q3DNavigationWidget);
        mTiltUpButton->setObjectName(QString::fromUtf8("mTiltUpButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionTiltUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTiltUpButton->setIcon(icon2);
        mTiltUpButton->setAutoRepeat(true);
        mTiltUpButton->setAutoRaise(true);

        compassLayout->addWidget(mTiltUpButton, 0, 1, 1, 1, Qt::AlignHCenter);

        mMoveLeftButton = new QToolButton(Q3DNavigationWidget);
        mMoveLeftButton->setObjectName(QString::fromUtf8("mMoveLeftButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveLeftButton->setIcon(icon3);
        mMoveLeftButton->setAutoRepeat(true);
        mMoveLeftButton->setAutoRaise(true);

        compassLayout->addWidget(mMoveLeftButton, 1, 0, 1, 1, Qt::AlignVCenter);

        mCompass = new QwtCompass(Q3DNavigationWidget);
        mCompass->setObjectName(QString::fromUtf8("mCompass"));
        mCompass->setWrapping(true);
        mCompass->setLineWidth(4);

        compassLayout->addWidget(mCompass, 1, 1, 1, 1);

        mMoveRightButton = new QToolButton(Q3DNavigationWidget);
        mMoveRightButton->setObjectName(QString::fromUtf8("mMoveRightButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveRightButton->setIcon(icon4);
        mMoveRightButton->setAutoRepeat(true);
        mMoveRightButton->setAutoRaise(true);

        compassLayout->addWidget(mMoveRightButton, 1, 2, 1, 1, Qt::AlignVCenter);

        mZoomOutButton = new QToolButton(Q3DNavigationWidget);
        mZoomOutButton->setObjectName(QString::fromUtf8("mZoomOutButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomOut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mZoomOutButton->setIcon(icon5);
        mZoomOutButton->setAutoRepeat(true);
        mZoomOutButton->setAutoRaise(true);

        compassLayout->addWidget(mZoomOutButton, 2, 2, 1, 1);

        mMoveDownButton = new QToolButton(Q3DNavigationWidget);
        mMoveDownButton->setObjectName(QString::fromUtf8("mMoveDownButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveDownButton->setIcon(icon6);
        mMoveDownButton->setAutoRepeat(true);
        mMoveDownButton->setAutoRaise(true);

        compassLayout->addWidget(mMoveDownButton, 2, 0, 1, 1);

        mTiltDownButton = new QToolButton(Q3DNavigationWidget);
        mTiltDownButton->setObjectName(QString::fromUtf8("mTiltDownButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionTiltDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTiltDownButton->setIcon(icon7);
        mTiltDownButton->setAutoRepeat(true);
        mTiltDownButton->setAutoRaise(true);

        compassLayout->addWidget(mTiltDownButton, 2, 1, 1, 1, Qt::AlignHCenter);


        widgetLayout->addLayout(compassLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        widgetLayout->addItem(verticalSpacer);


        retranslateUi(Q3DNavigationWidget);

        QMetaObject::connectSlotsByName(Q3DNavigationWidget);
    } // setupUi

    void retranslateUi(QWidget *Q3DNavigationWidget)
    {
#if QT_CONFIG(tooltip)
        mMoveUpButton->setToolTip(QCoreApplication::translate("Q3DNavigationWidget", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
        mMoveUpButton->setText(QString());
#if QT_CONFIG(tooltip)
        mZoomInButton->setToolTip(QCoreApplication::translate("Q3DNavigationWidget", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
        mZoomInButton->setText(QString());
#if QT_CONFIG(tooltip)
        mTiltUpButton->setToolTip(QCoreApplication::translate("Q3DNavigationWidget", "Tilt up", nullptr));
#endif // QT_CONFIG(tooltip)
        mTiltUpButton->setText(QString());
#if QT_CONFIG(tooltip)
        mMoveLeftButton->setToolTip(QCoreApplication::translate("Q3DNavigationWidget", "Move left", nullptr));
#endif // QT_CONFIG(tooltip)
        mMoveLeftButton->setText(QString());
#if QT_CONFIG(tooltip)
        mCompass->setToolTip(QCoreApplication::translate("Q3DNavigationWidget", "Rotate view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mMoveRightButton->setToolTip(QCoreApplication::translate("Q3DNavigationWidget", "Move right", nullptr));
#endif // QT_CONFIG(tooltip)
        mMoveRightButton->setText(QString());
#if QT_CONFIG(tooltip)
        mZoomOutButton->setToolTip(QCoreApplication::translate("Q3DNavigationWidget", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
        mZoomOutButton->setText(QString());
#if QT_CONFIG(tooltip)
        mMoveDownButton->setToolTip(QCoreApplication::translate("Q3DNavigationWidget", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
        mMoveDownButton->setText(QString());
#if QT_CONFIG(tooltip)
        mTiltDownButton->setToolTip(QCoreApplication::translate("Q3DNavigationWidget", "Tilt down", nullptr));
#endif // QT_CONFIG(tooltip)
        mTiltDownButton->setText(QString());
        (void)Q3DNavigationWidget;
    } // retranslateUi

};

namespace Ui {
    class Q3DNavigationWidget: public Ui_Q3DNavigationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_3DNAVIGATIONWIDGET_H
