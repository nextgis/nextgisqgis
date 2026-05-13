/********************************************************************************
** Form generated from reading UI file 'qgsadvanceddigitizingdockwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADVANCEDDIGITIZINGDOCKWIDGETBASE_H
#define UI_QGSADVANCEDDIGITIZINGDOCKWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAdvancedDigitizingDockWidgetBase
{
public:
    QAction *mFloaterAction;
    QAction *mConstructionAction;
    QWidget *dockWidgetContents;
    QAction *mEnableAction;
    QAction *mConstructionModeAction;
    QAction *mParallelAction;
    QAction *mPerpendicularAction;
    QAction *mToolsAction;
    QAction *mSettingsAction;
    QVBoxLayout *parentLayout;
    QToolBar *mToolbar;
    QVBoxLayout *mLayout;
    QLabel *mErrorLabel;
    QWidget *mCadWidget;
    QVBoxLayout *verticalLayout;
    QWidget *mInputWidgets;
    QGridLayout *mInputLayout;
    QToolButton *mRelativeAngleButton;
    QSpacerItem *verticalSpacer;
    QToolButton *mRepeatingLockMButton;
    QLineEdit *mMLineEdit;
    QLineEdit *mDistanceLineEdit;
    QLabel *mZLabel;
    QToolButton *mRelativeMButton;
    QLineEdit *mZLineEdit;
    QLabel *label;
    QToolButton *mLockDistanceButton;
    QToolButton *mRelativeZButton;
    QLineEdit *mXLineEdit;
    QToolButton *mLockAngleButton;
    QToolButton *mRepeatingLockZButton;
    QToolButton *mRelativeXButton;
    QToolButton *mRepeatingLockYButton;
    QLabel *mLabelY;
    QLabel *label_2;
    QLineEdit *mYLineEdit;
    QToolButton *mLockYButton;
    QLineEdit *mAngleLineEdit;
    QToolButton *mRepeatingLockAngleButton;
    QToolButton *mRepeatingLockXButton;
    QToolButton *mRelativeYButton;
    QLabel *mMLabel;
    QToolButton *mRepeatingLockDistanceButton;
    QToolButton *mLockXButton;
    QToolButton *mLockZButton;
    QToolButton *mLockMButton;
    QLabel *mLabelX;

    void setupUi(QgsDockWidget *QgsAdvancedDigitizingDockWidgetBase)
    {
        if (QgsAdvancedDigitizingDockWidgetBase->objectName().isEmpty())
            QgsAdvancedDigitizingDockWidgetBase->setObjectName(QString::fromUtf8("QgsAdvancedDigitizingDockWidgetBase"));
        QgsAdvancedDigitizingDockWidgetBase->resize(252, 344);
        mFloaterAction = new QAction(QgsAdvancedDigitizingDockWidgetBase);
        mFloaterAction->setObjectName(QString::fromUtf8("mFloaterAction"));
        mFloaterAction->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/cadtools/floater.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFloaterAction->setIcon(icon);
        mConstructionAction = new QAction(QgsAdvancedDigitizingDockWidgetBase);
        mConstructionAction->setObjectName(QString::fromUtf8("mConstructionAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/algorithms/mAlgorithmExtractVertices.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mConstructionAction->setIcon(icon1);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        mEnableAction = new QAction(dockWidgetContents);
        mEnableAction->setObjectName(QString::fromUtf8("mEnableAction"));
        mEnableAction->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/cadtools/cad.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEnableAction->setIcon(icon2);
        mConstructionModeAction = new QAction(dockWidgetContents);
        mConstructionModeAction->setObjectName(QString::fromUtf8("mConstructionModeAction"));
        mConstructionModeAction->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/cadtools/construction.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mConstructionModeAction->setIcon(icon3);
        mParallelAction = new QAction(dockWidgetContents);
        mParallelAction->setObjectName(QString::fromUtf8("mParallelAction"));
        mParallelAction->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/cadtools/parallel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mParallelAction->setIcon(icon4);
        mPerpendicularAction = new QAction(dockWidgetContents);
        mPerpendicularAction->setObjectName(QString::fromUtf8("mPerpendicularAction"));
        mPerpendicularAction->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/cadtools/perpendicular.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPerpendicularAction->setIcon(icon5);
        mToolsAction = new QAction(dockWidgetContents);
        mToolsAction->setObjectName(QString::fromUtf8("mToolsAction"));
        mToolsAction->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/cadtools/circlesintersection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mToolsAction->setIcon(icon6);
        mSettingsAction = new QAction(dockWidgetContents);
        mSettingsAction->setObjectName(QString::fromUtf8("mSettingsAction"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSettingsAction->setIcon(icon7);
        parentLayout = new QVBoxLayout(dockWidgetContents);
        parentLayout->setSpacing(0);
        parentLayout->setObjectName(QString::fromUtf8("parentLayout"));
        parentLayout->setContentsMargins(0, 0, 0, 0);
        mToolbar = new QToolBar(dockWidgetContents);
        mToolbar->setObjectName(QString::fromUtf8("mToolbar"));
        mToolbar->setIconSize(QSize(16, 16));
        mToolbar->setFloatable(false);

        parentLayout->addWidget(mToolbar);

        mLayout = new QVBoxLayout();
        mLayout->setObjectName(QString::fromUtf8("mLayout"));
        mErrorLabel = new QLabel(dockWidgetContents);
        mErrorLabel->setObjectName(QString::fromUtf8("mErrorLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mErrorLabel->sizePolicy().hasHeightForWidth());
        mErrorLabel->setSizePolicy(sizePolicy);
        mErrorLabel->setAlignment(Qt::AlignCenter);
        mErrorLabel->setWordWrap(true);

        mLayout->addWidget(mErrorLabel);

        mCadWidget = new QWidget(dockWidgetContents);
        mCadWidget->setObjectName(QString::fromUtf8("mCadWidget"));
        verticalLayout = new QVBoxLayout(mCadWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mInputWidgets = new QWidget(mCadWidget);
        mInputWidgets->setObjectName(QString::fromUtf8("mInputWidgets"));
        mInputLayout = new QGridLayout(mInputWidgets);
        mInputLayout->setSpacing(3);
        mInputLayout->setObjectName(QString::fromUtf8("mInputLayout"));
        mInputLayout->setContentsMargins(0, 0, 0, 0);
        mRelativeAngleButton = new QToolButton(mInputWidgets);
        mRelativeAngleButton->setObjectName(QString::fromUtf8("mRelativeAngleButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/cadtools/delta.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRelativeAngleButton->setIcon(icon8);
        mRelativeAngleButton->setCheckable(true);
        mRelativeAngleButton->setChecked(true);
        mRelativeAngleButton->setAutoRaise(true);

        mInputLayout->addWidget(mRelativeAngleButton, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mInputLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        mRepeatingLockMButton = new QToolButton(mInputWidgets);
        mRepeatingLockMButton->setObjectName(QString::fromUtf8("mRepeatingLockMButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/locked_repeating.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRepeatingLockMButton->setIcon(icon9);
        mRepeatingLockMButton->setCheckable(true);
        mRepeatingLockMButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockMButton, 5, 4, 1, 1);

        mMLineEdit = new QLineEdit(mInputWidgets);
        mMLineEdit->setObjectName(QString::fromUtf8("mMLineEdit"));

        mInputLayout->addWidget(mMLineEdit, 5, 2, 1, 1);

        mDistanceLineEdit = new QLineEdit(mInputWidgets);
        mDistanceLineEdit->setObjectName(QString::fromUtf8("mDistanceLineEdit"));

        mInputLayout->addWidget(mDistanceLineEdit, 0, 2, 1, 1);

        mZLabel = new QLabel(mInputWidgets);
        mZLabel->setObjectName(QString::fromUtf8("mZLabel"));

        mInputLayout->addWidget(mZLabel, 4, 1, 1, 1);

        mRelativeMButton = new QToolButton(mInputWidgets);
        mRelativeMButton->setObjectName(QString::fromUtf8("mRelativeMButton"));
        mRelativeMButton->setIcon(icon8);
        mRelativeMButton->setCheckable(true);
        mRelativeMButton->setAutoRaise(true);

        mInputLayout->addWidget(mRelativeMButton, 5, 0, 1, 1);

        mZLineEdit = new QLineEdit(mInputWidgets);
        mZLineEdit->setObjectName(QString::fromUtf8("mZLineEdit"));

        mInputLayout->addWidget(mZLineEdit, 4, 2, 1, 1);

        label = new QLabel(mInputWidgets);
        label->setObjectName(QString::fromUtf8("label"));

        mInputLayout->addWidget(label, 0, 1, 1, 1);

        mLockDistanceButton = new QToolButton(mInputWidgets);
        mLockDistanceButton->setObjectName(QString::fromUtf8("mLockDistanceButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/cadtools/lock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLockDistanceButton->setIcon(icon10);
        mLockDistanceButton->setCheckable(true);
        mLockDistanceButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockDistanceButton, 0, 3, 1, 1);

        mRelativeZButton = new QToolButton(mInputWidgets);
        mRelativeZButton->setObjectName(QString::fromUtf8("mRelativeZButton"));
        mRelativeZButton->setIcon(icon8);
        mRelativeZButton->setCheckable(true);
        mRelativeZButton->setAutoRaise(true);

        mInputLayout->addWidget(mRelativeZButton, 4, 0, 1, 1);

        mXLineEdit = new QLineEdit(mInputWidgets);
        mXLineEdit->setObjectName(QString::fromUtf8("mXLineEdit"));

        mInputLayout->addWidget(mXLineEdit, 2, 2, 1, 1);

        mLockAngleButton = new QToolButton(mInputWidgets);
        mLockAngleButton->setObjectName(QString::fromUtf8("mLockAngleButton"));
        mLockAngleButton->setIcon(icon10);
        mLockAngleButton->setCheckable(true);
        mLockAngleButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockAngleButton, 1, 3, 1, 1);

        mRepeatingLockZButton = new QToolButton(mInputWidgets);
        mRepeatingLockZButton->setObjectName(QString::fromUtf8("mRepeatingLockZButton"));
        mRepeatingLockZButton->setIcon(icon9);
        mRepeatingLockZButton->setCheckable(true);
        mRepeatingLockZButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockZButton, 4, 4, 1, 1);

        mRelativeXButton = new QToolButton(mInputWidgets);
        mRelativeXButton->setObjectName(QString::fromUtf8("mRelativeXButton"));
        mRelativeXButton->setIcon(icon8);
        mRelativeXButton->setCheckable(true);
        mRelativeXButton->setAutoRaise(true);

        mInputLayout->addWidget(mRelativeXButton, 2, 0, 1, 1);

        mRepeatingLockYButton = new QToolButton(mInputWidgets);
        mRepeatingLockYButton->setObjectName(QString::fromUtf8("mRepeatingLockYButton"));
        mRepeatingLockYButton->setIcon(icon9);
        mRepeatingLockYButton->setCheckable(true);
        mRepeatingLockYButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockYButton, 3, 4, 1, 1);

        mLabelY = new QLabel(mInputWidgets);
        mLabelY->setObjectName(QString::fromUtf8("mLabelY"));

        mInputLayout->addWidget(mLabelY, 3, 1, 1, 1);

        label_2 = new QLabel(mInputWidgets);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        mInputLayout->addWidget(label_2, 1, 1, 1, 1);

        mYLineEdit = new QLineEdit(mInputWidgets);
        mYLineEdit->setObjectName(QString::fromUtf8("mYLineEdit"));

        mInputLayout->addWidget(mYLineEdit, 3, 2, 1, 1);

        mLockYButton = new QToolButton(mInputWidgets);
        mLockYButton->setObjectName(QString::fromUtf8("mLockYButton"));
        mLockYButton->setIcon(icon10);
        mLockYButton->setCheckable(true);
        mLockYButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockYButton, 3, 3, 1, 1);

        mAngleLineEdit = new QLineEdit(mInputWidgets);
        mAngleLineEdit->setObjectName(QString::fromUtf8("mAngleLineEdit"));

        mInputLayout->addWidget(mAngleLineEdit, 1, 2, 1, 1);

        mRepeatingLockAngleButton = new QToolButton(mInputWidgets);
        mRepeatingLockAngleButton->setObjectName(QString::fromUtf8("mRepeatingLockAngleButton"));
        mRepeatingLockAngleButton->setIcon(icon9);
        mRepeatingLockAngleButton->setCheckable(true);
        mRepeatingLockAngleButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockAngleButton, 1, 4, 1, 1);

        mRepeatingLockXButton = new QToolButton(mInputWidgets);
        mRepeatingLockXButton->setObjectName(QString::fromUtf8("mRepeatingLockXButton"));
        mRepeatingLockXButton->setIcon(icon9);
        mRepeatingLockXButton->setCheckable(true);
        mRepeatingLockXButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockXButton, 2, 4, 1, 1);

        mRelativeYButton = new QToolButton(mInputWidgets);
        mRelativeYButton->setObjectName(QString::fromUtf8("mRelativeYButton"));
        mRelativeYButton->setIcon(icon8);
        mRelativeYButton->setCheckable(true);
        mRelativeYButton->setAutoRaise(true);

        mInputLayout->addWidget(mRelativeYButton, 3, 0, 1, 1);

        mMLabel = new QLabel(mInputWidgets);
        mMLabel->setObjectName(QString::fromUtf8("mMLabel"));

        mInputLayout->addWidget(mMLabel, 5, 1, 1, 1);

        mRepeatingLockDistanceButton = new QToolButton(mInputWidgets);
        mRepeatingLockDistanceButton->setObjectName(QString::fromUtf8("mRepeatingLockDistanceButton"));
        mRepeatingLockDistanceButton->setIcon(icon9);
        mRepeatingLockDistanceButton->setCheckable(true);
        mRepeatingLockDistanceButton->setAutoRaise(true);

        mInputLayout->addWidget(mRepeatingLockDistanceButton, 0, 4, 1, 1);

        mLockXButton = new QToolButton(mInputWidgets);
        mLockXButton->setObjectName(QString::fromUtf8("mLockXButton"));
        mLockXButton->setIcon(icon10);
        mLockXButton->setCheckable(true);
        mLockXButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockXButton, 2, 3, 1, 1);

        mLockZButton = new QToolButton(mInputWidgets);
        mLockZButton->setObjectName(QString::fromUtf8("mLockZButton"));
        mLockZButton->setIcon(icon10);
        mLockZButton->setCheckable(true);
        mLockZButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockZButton, 4, 3, 1, 1);

        mLockMButton = new QToolButton(mInputWidgets);
        mLockMButton->setObjectName(QString::fromUtf8("mLockMButton"));
        mLockMButton->setIcon(icon10);
        mLockMButton->setCheckable(true);
        mLockMButton->setAutoRaise(true);

        mInputLayout->addWidget(mLockMButton, 5, 3, 1, 1);

        mLabelX = new QLabel(mInputWidgets);
        mLabelX->setObjectName(QString::fromUtf8("mLabelX"));

        mInputLayout->addWidget(mLabelX, 2, 1, 1, 1);


        verticalLayout->addWidget(mInputWidgets);


        mLayout->addWidget(mCadWidget);


        parentLayout->addLayout(mLayout);

        QgsAdvancedDigitizingDockWidgetBase->setWidget(dockWidgetContents);
        QWidget::setTabOrder(mDistanceLineEdit, mLockDistanceButton);
        QWidget::setTabOrder(mLockDistanceButton, mRepeatingLockDistanceButton);
        QWidget::setTabOrder(mRepeatingLockDistanceButton, mRelativeAngleButton);
        QWidget::setTabOrder(mRelativeAngleButton, mAngleLineEdit);
        QWidget::setTabOrder(mAngleLineEdit, mLockAngleButton);
        QWidget::setTabOrder(mLockAngleButton, mRepeatingLockAngleButton);
        QWidget::setTabOrder(mRepeatingLockAngleButton, mRelativeXButton);
        QWidget::setTabOrder(mRelativeXButton, mXLineEdit);
        QWidget::setTabOrder(mXLineEdit, mLockXButton);
        QWidget::setTabOrder(mLockXButton, mRepeatingLockXButton);
        QWidget::setTabOrder(mRepeatingLockXButton, mRelativeYButton);
        QWidget::setTabOrder(mRelativeYButton, mYLineEdit);
        QWidget::setTabOrder(mYLineEdit, mLockYButton);
        QWidget::setTabOrder(mLockYButton, mRepeatingLockYButton);
        QWidget::setTabOrder(mRepeatingLockYButton, mRelativeZButton);
        QWidget::setTabOrder(mRelativeZButton, mZLineEdit);
        QWidget::setTabOrder(mZLineEdit, mLockZButton);
        QWidget::setTabOrder(mLockZButton, mRepeatingLockZButton);
        QWidget::setTabOrder(mRepeatingLockZButton, mRelativeMButton);
        QWidget::setTabOrder(mRelativeMButton, mMLineEdit);
        QWidget::setTabOrder(mMLineEdit, mLockMButton);
        QWidget::setTabOrder(mLockMButton, mRepeatingLockMButton);

        mToolbar->addAction(mEnableAction);
        mToolbar->addSeparator();
        mToolbar->addAction(mConstructionModeAction);
        mToolbar->addAction(mParallelAction);
        mToolbar->addAction(mPerpendicularAction);
        mToolbar->addAction(mConstructionAction);
        mToolbar->addSeparator();
        mToolbar->addAction(mToolsAction);
        mToolbar->addSeparator();
        mToolbar->addAction(mSettingsAction);
        mToolbar->addSeparator();
        mToolbar->addAction(mFloaterAction);

        retranslateUi(QgsAdvancedDigitizingDockWidgetBase);

        QMetaObject::connectSlotsByName(QgsAdvancedDigitizingDockWidgetBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsAdvancedDigitizingDockWidgetBase)
    {
        QgsAdvancedDigitizingDockWidgetBase->setWindowTitle(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Advanced Digitizing", nullptr));
        mFloaterAction->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Floater settings", nullptr));
        mConstructionAction->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Construction", nullptr));
#if QT_CONFIG(tooltip)
        mConstructionAction->setToolTip(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Construction", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mEnableAction->setToolTip(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "<html><head/><body><p>Enable advanced digitizing tools</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mConstructionModeAction->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mParallelAction->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mPerpendicularAction->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mErrorLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Error", nullptr));
#if QT_CONFIG(tooltip)
        mRelativeAngleButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRelativeAngleButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mRepeatingLockMButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRepeatingLockMButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mMLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mDistanceLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mZLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "z", nullptr));
#if QT_CONFIG(tooltip)
        mRelativeMButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRelativeMButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mZLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "d", nullptr));
#if QT_CONFIG(tooltip)
        mLockDistanceButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLockDistanceButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mRelativeZButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRelativeZButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mXLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mLockAngleButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLockAngleButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mRepeatingLockZButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRepeatingLockZButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mRelativeXButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRelativeXButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mRepeatingLockYButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRepeatingLockYButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
        mLabelY->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "y", nullptr));
        label_2->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "a", nullptr));
#if QT_CONFIG(tooltip)
        mYLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mLockYButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLockYButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mAngleLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mRepeatingLockAngleButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRepeatingLockAngleButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mRepeatingLockXButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRepeatingLockXButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mRelativeYButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRelativeYButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
        mMLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "m", nullptr));
#if QT_CONFIG(tooltip)
        mRepeatingLockDistanceButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mRepeatingLockDistanceButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mLockXButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLockXButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mLockZButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLockZButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mLockMButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mLockMButton->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "\342\200\246", nullptr));
        mLabelX->setText(QCoreApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsAdvancedDigitizingDockWidgetBase: public Ui_QgsAdvancedDigitizingDockWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADVANCEDDIGITIZINGDOCKWIDGETBASE_H
