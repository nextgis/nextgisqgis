/********************************************************************************
** Form generated from reading UI file 'qgsplaybackcontrollerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPLAYBACKCONTROLLERWIDGETBASE_H
#define UI_QGSPLAYBACKCONTROLLERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsPlaybackControllerWidgetBase
{
public:
    QGridLayout *gridLayout;
    QPushButton *mNextButton;
    QPushButton *mForwardButton;
    QPushButton *mRewindButton;
    QPushButton *mPreviousButton;
    QPushButton *mPauseButton;
    QPushButton *mBackButton;
    QPushButton *mFastForwardButton;

    void setupUi(QWidget *QgsPlaybackControllerWidgetBase)
    {
        if (QgsPlaybackControllerWidgetBase->objectName().isEmpty())
            QgsPlaybackControllerWidgetBase->setObjectName(QString::fromUtf8("QgsPlaybackControllerWidgetBase"));
        QgsPlaybackControllerWidgetBase->resize(232, 24);
        QgsPlaybackControllerWidgetBase->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(QgsPlaybackControllerWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mNextButton = new QPushButton(QgsPlaybackControllerWidgetBase);
        mNextButton->setObjectName(QString::fromUtf8("mNextButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/temporal_navigation/next.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNextButton->setIcon(icon);

        gridLayout->addWidget(mNextButton, 0, 5, 1, 1);

        mForwardButton = new QPushButton(QgsPlaybackControllerWidgetBase);
        mForwardButton->setObjectName(QString::fromUtf8("mForwardButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/temporal_navigation/forward.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mForwardButton->setIcon(icon1);
        mForwardButton->setCheckable(true);

        gridLayout->addWidget(mForwardButton, 0, 4, 1, 1);

        mRewindButton = new QPushButton(QgsPlaybackControllerWidgetBase);
        mRewindButton->setObjectName(QString::fromUtf8("mRewindButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/temporal_navigation/rewindToStart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRewindButton->setIcon(icon2);

        gridLayout->addWidget(mRewindButton, 0, 0, 1, 1);

        mPreviousButton = new QPushButton(QgsPlaybackControllerWidgetBase);
        mPreviousButton->setObjectName(QString::fromUtf8("mPreviousButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/temporal_navigation/previous.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPreviousButton->setIcon(icon3);

        gridLayout->addWidget(mPreviousButton, 0, 1, 1, 1);

        mPauseButton = new QPushButton(QgsPlaybackControllerWidgetBase);
        mPauseButton->setObjectName(QString::fromUtf8("mPauseButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/temporal_navigation/pause.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPauseButton->setIcon(icon4);
        mPauseButton->setCheckable(true);
        mPauseButton->setChecked(true);

        gridLayout->addWidget(mPauseButton, 0, 3, 1, 1);

        mBackButton = new QPushButton(QgsPlaybackControllerWidgetBase);
        mBackButton->setObjectName(QString::fromUtf8("mBackButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/temporal_navigation/back.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBackButton->setIcon(icon5);
        mBackButton->setCheckable(true);

        gridLayout->addWidget(mBackButton, 0, 2, 1, 1);

        mFastForwardButton = new QPushButton(QgsPlaybackControllerWidgetBase);
        mFastForwardButton->setObjectName(QString::fromUtf8("mFastForwardButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/temporal_navigation/skipToEnd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFastForwardButton->setIcon(icon6);

        gridLayout->addWidget(mFastForwardButton, 0, 6, 1, 1);

        QWidget::setTabOrder(mRewindButton, mPreviousButton);
        QWidget::setTabOrder(mPreviousButton, mBackButton);
        QWidget::setTabOrder(mBackButton, mPauseButton);
        QWidget::setTabOrder(mPauseButton, mForwardButton);
        QWidget::setTabOrder(mForwardButton, mNextButton);
        QWidget::setTabOrder(mNextButton, mFastForwardButton);

        retranslateUi(QgsPlaybackControllerWidgetBase);

        QMetaObject::connectSlotsByName(QgsPlaybackControllerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPlaybackControllerWidgetBase)
    {
        QgsPlaybackControllerWidgetBase->setWindowTitle(QCoreApplication::translate("QgsPlaybackControllerWidgetBase", "Playback controller", nullptr));
        mNextButton->setText(QString());
        mForwardButton->setText(QString());
        mRewindButton->setText(QString());
        mPreviousButton->setText(QString());
        mPauseButton->setText(QString());
        mBackButton->setText(QString());
        mFastForwardButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsPlaybackControllerWidgetBase: public Ui_QgsPlaybackControllerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPLAYBACKCONTROLLERWIDGETBASE_H
