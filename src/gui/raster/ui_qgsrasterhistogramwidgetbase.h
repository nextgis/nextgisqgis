/********************************************************************************
** Form generated from reading UI file 'qgsrasterhistogramwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERHISTOGRAMWIDGETBASE_H
#define UI_QGSRASTERHISTOGRAMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterHistogramWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QwtPlot *mpPlot;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget2;
    QWidget *page1_2;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *leHistoMax;
    QToolButton *btnHistoMax;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *leHistoMin;
    QToolButton *btnHistoMin;
    QLabel *label_9;
    QLabel *label_11;
    QComboBox *cboHistoBand;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *mSaveAsImageButton;
    QLabel *label_10;
    QToolButton *btnHistoActions;
    QWidget *page2_2;
    QHBoxLayout *horizontalLayout_12;
    QProgressBar *mHistogramProgress;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *btnHistoCompute;
    QSpacerItem *horizontalSpacer_19;

    void setupUi(QWidget *QgsRasterHistogramWidgetBase)
    {
        if (QgsRasterHistogramWidgetBase->objectName().isEmpty())
            QgsRasterHistogramWidgetBase->setObjectName(QString::fromUtf8("QgsRasterHistogramWidgetBase"));
        QgsRasterHistogramWidgetBase->resize(343, 412);
        QgsRasterHistogramWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsRasterHistogramWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mpPlot = new QwtPlot(QgsRasterHistogramWidgetBase);
        mpPlot->setObjectName(QString::fromUtf8("mpPlot"));

        verticalLayout->addWidget(mpPlot);

        verticalSpacer = new QSpacerItem(0, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        stackedWidget2 = new QStackedWidget(QgsRasterHistogramWidgetBase);
        stackedWidget2->setObjectName(QString::fromUtf8("stackedWidget2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget2->sizePolicy().hasHeightForWidth());
        stackedWidget2->setSizePolicy(sizePolicy);
        page1_2 = new QWidget();
        page1_2->setObjectName(QString::fromUtf8("page1_2"));
        horizontalLayout_8 = new QHBoxLayout(page1_2);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        frame_2 = new QFrame(page1_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(5, 1, 5, 1);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(1);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        leHistoMax = new QLineEdit(frame_2);
        leHistoMax->setObjectName(QString::fromUtf8("leHistoMax"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leHistoMax->sizePolicy().hasHeightForWidth());
        leHistoMax->setSizePolicy(sizePolicy1);
        leHistoMax->setMinimumSize(QSize(50, 0));

        horizontalLayout_11->addWidget(leHistoMax);

        btnHistoMax = new QToolButton(frame_2);
        btnHistoMax->setObjectName(QString::fromUtf8("btnHistoMax"));
        btnHistoMax->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionTouch2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHistoMax->setIcon(icon);
        btnHistoMax->setCheckable(true);
        btnHistoMax->setAutoRaise(true);

        horizontalLayout_11->addWidget(btnHistoMax);


        gridLayout->addLayout(horizontalLayout_11, 8, 2, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(1);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        leHistoMin = new QLineEdit(frame_2);
        leHistoMin->setObjectName(QString::fromUtf8("leHistoMin"));
        sizePolicy1.setHeightForWidth(leHistoMin->sizePolicy().hasHeightForWidth());
        leHistoMin->setSizePolicy(sizePolicy1);
        leHistoMin->setMinimumSize(QSize(50, 0));

        horizontalLayout_10->addWidget(leHistoMin);

        btnHistoMin = new QToolButton(frame_2);
        btnHistoMin->setObjectName(QString::fromUtf8("btnHistoMin"));
        btnHistoMin->setEnabled(true);
        btnHistoMin->setIcon(icon);
        btnHistoMin->setCheckable(true);
        btnHistoMin->setAutoRaise(true);

        horizontalLayout_10->addWidget(btnHistoMin);


        gridLayout->addLayout(horizontalLayout_10, 7, 2, 1, 1);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_11, 8, 0, 1, 1);

        cboHistoBand = new QComboBox(frame_2);
        cboHistoBand->setObjectName(QString::fromUtf8("cboHistoBand"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cboHistoBand->sizePolicy().hasHeightForWidth());
        cboHistoBand->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(cboHistoBand, 6, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mSaveAsImageButton = new QToolButton(frame_2);
        mSaveAsImageButton->setObjectName(QString::fromUtf8("mSaveAsImageButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSaveAsImageButton->setIcon(icon1);

        horizontalLayout_2->addWidget(mSaveAsImageButton);


        gridLayout->addLayout(horizontalLayout_2, 5, 2, 1, 1);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_10, 7, 0, 1, 1);

        btnHistoActions = new QToolButton(frame_2);
        btnHistoActions->setObjectName(QString::fromUtf8("btnHistoActions"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mAction.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnHistoActions->setIcon(icon2);
        btnHistoActions->setPopupMode(QToolButton::InstantPopup);
        btnHistoActions->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnHistoActions->setAutoRaise(true);

        gridLayout->addWidget(btnHistoActions, 5, 0, 1, 1);


        horizontalLayout_8->addWidget(frame_2);

        stackedWidget2->addWidget(page1_2);
        page2_2 = new QWidget();
        page2_2->setObjectName(QString::fromUtf8("page2_2"));
        horizontalLayout_12 = new QHBoxLayout(page2_2);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        mHistogramProgress = new QProgressBar(page2_2);
        mHistogramProgress->setObjectName(QString::fromUtf8("mHistogramProgress"));
        mHistogramProgress->setValue(0);

        horizontalLayout_12->addWidget(mHistogramProgress);

        stackedWidget2->addWidget(page2_2);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_20);

        btnHistoCompute = new QPushButton(page);
        btnHistoCompute->setObjectName(QString::fromUtf8("btnHistoCompute"));

        horizontalLayout->addWidget(btnHistoCompute);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_19);

        stackedWidget2->addWidget(page);

        verticalLayout->addWidget(stackedWidget2);

        QWidget::setTabOrder(btnHistoActions, mSaveAsImageButton);
        QWidget::setTabOrder(mSaveAsImageButton, cboHistoBand);
        QWidget::setTabOrder(cboHistoBand, leHistoMin);
        QWidget::setTabOrder(leHistoMin, btnHistoMin);
        QWidget::setTabOrder(btnHistoMin, leHistoMax);
        QWidget::setTabOrder(leHistoMax, btnHistoMax);
        QWidget::setTabOrder(btnHistoMax, btnHistoCompute);

        retranslateUi(QgsRasterHistogramWidgetBase);

        stackedWidget2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterHistogramWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterHistogramWidgetBase)
    {
#if QT_CONFIG(tooltip)
        btnHistoMax->setToolTip(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "Pick Max value on graph", nullptr));
#endif // QT_CONFIG(tooltip)
        btnHistoMax->setText(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        btnHistoMin->setToolTip(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "Pick Min value on graph", nullptr));
#endif // QT_CONFIG(tooltip)
        btnHistoMin->setText(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "\342\200\246", nullptr));
        label_9->setText(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "Set min/max style for", nullptr));
        label_11->setText(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "Max", nullptr));
#if QT_CONFIG(tooltip)
        mSaveAsImageButton->setToolTip(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "Save plot", nullptr));
#endif // QT_CONFIG(tooltip)
        mSaveAsImageButton->setText(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "Save as image\342\200\246", nullptr));
        label_10->setText(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "Min", nullptr));
#if QT_CONFIG(tooltip)
        btnHistoActions->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btnHistoActions->setText(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "Prefs/Actions", nullptr));
        btnHistoCompute->setText(QCoreApplication::translate("QgsRasterHistogramWidgetBase", "Compute Histogram", nullptr));
        (void)QgsRasterHistogramWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRasterHistogramWidgetBase: public Ui_QgsRasterHistogramWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERHISTOGRAMWIDGETBASE_H
