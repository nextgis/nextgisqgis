/********************************************************************************
** Form generated from reading UI file 'qgstemporalcontrollerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTEMPORALCONTROLLERWIDGETBASE_H
#define UI_QGSTEMPORALCONTROLLERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgspanelwidget.h"
#include "qgsplaybackcontrollerwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTemporalControllerWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *mNavigationOff;
    QToolButton *mNavigationFixedRange;
    QToolButton *mNavigationAnimated;
    QToolButton *mNavigationMovie;
    QLabel *mCurrentRangeLabel;
    QToolButton *mSettings;
    QStackedWidget *mNavigationModeStackedWidget;
    QWidget *p1;
    QVBoxLayout *verticalLayoutP1;
    QWidget *p2;
    QVBoxLayout *verticalLayoutP2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mFixedRangeRangeLabel;
    QDateTimeEdit *mFixedRangeStartDateTime;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mFixedRangeRangeToLabel;
    QSpacerItem *horizontalSpacer_3;
    QDateTimeEdit *mFixedRangeEndDateTime;
    QToolButton *mFixedRangeSetRangeButton;
    QSpacerItem *horizontalSpacer2;
    QSpacerItem *verticalSpacer2;
    QWidget *p3;
    QVBoxLayout *verticalLayoutP3;
    QHBoxLayout *horizontalLayout1;
    QgsPlaybackControllerWidget *mAnimationController;
    QSlider *mAnimationSlider;
    QCheckBox *mAnimationLoopingCheckBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mRangeLabel;
    QDateTimeEdit *mStartDateTime;
    QSpacerItem *horizontalSpacer_4;
    QLabel *mRangeToLabel;
    QSpacerItem *horizontalSpacer_5;
    QDateTimeEdit *mEndDateTime;
    QToolButton *mSetRangeButton;
    QLabel *mStepLabel;
    QgsDoubleSpinBox *mStepSpinBox;
    QComboBox *mTimeStepsComboBox;
    QToolButton *mExportAnimationButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *page;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QSlider *mMovieSlider;
    QHBoxLayout *horizontalLayout_7;
    QLabel *mMovieRangeLabel;
    QgsSpinBox *mTotalFramesSpinBox;
    QToolButton *mExportMovieButton;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *mMovieLoopingCheckBox;
    QgsPlaybackControllerWidget *mMovieController;
    QWidget *widget;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsTemporalControllerWidgetBase)
    {
        if (QgsTemporalControllerWidgetBase->objectName().isEmpty())
            QgsTemporalControllerWidgetBase->setObjectName(QString::fromUtf8("QgsTemporalControllerWidgetBase"));
        QgsTemporalControllerWidgetBase->resize(752, 116);
        verticalLayout = new QVBoxLayout(QgsTemporalControllerWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mNavigationOff = new QToolButton(QgsTemporalControllerWidgetBase);
        mNavigationOff->setObjectName(QString::fromUtf8("mNavigationOff"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mTemporalNavigationOff.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNavigationOff->setIcon(icon);
        mNavigationOff->setCheckable(true);
        mNavigationOff->setAutoRaise(false);

        horizontalLayout->addWidget(mNavigationOff);

        mNavigationFixedRange = new QToolButton(QgsTemporalControllerWidgetBase);
        mNavigationFixedRange->setObjectName(QString::fromUtf8("mNavigationFixedRange"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mTemporalNavigationFixedRange.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNavigationFixedRange->setIcon(icon1);
        mNavigationFixedRange->setCheckable(true);
        mNavigationFixedRange->setAutoRaise(false);

        horizontalLayout->addWidget(mNavigationFixedRange);

        mNavigationAnimated = new QToolButton(QgsTemporalControllerWidgetBase);
        mNavigationAnimated->setObjectName(QString::fromUtf8("mNavigationAnimated"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mTemporalNavigationAnimated.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNavigationAnimated->setIcon(icon2);
        mNavigationAnimated->setCheckable(true);
        mNavigationAnimated->setAutoRaise(false);

        horizontalLayout->addWidget(mNavigationAnimated);

        mNavigationMovie = new QToolButton(QgsTemporalControllerWidgetBase);
        mNavigationMovie->setObjectName(QString::fromUtf8("mNavigationMovie"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mTemporalNavigationMovie.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mNavigationMovie->setIcon(icon3);
        mNavigationMovie->setCheckable(true);
        mNavigationMovie->setAutoRaise(false);

        horizontalLayout->addWidget(mNavigationMovie);

        mCurrentRangeLabel = new QLabel(QgsTemporalControllerWidgetBase);
        mCurrentRangeLabel->setObjectName(QString::fromUtf8("mCurrentRangeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCurrentRangeLabel->sizePolicy().hasHeightForWidth());
        mCurrentRangeLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mCurrentRangeLabel);

        mSettings = new QToolButton(QgsTemporalControllerWidgetBase);
        mSettings->setObjectName(QString::fromUtf8("mSettings"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSettings->setIcon(icon4);
        mSettings->setAutoRaise(true);

        horizontalLayout->addWidget(mSettings);


        verticalLayout->addLayout(horizontalLayout);

        mNavigationModeStackedWidget = new QStackedWidget(QgsTemporalControllerWidgetBase);
        mNavigationModeStackedWidget->setObjectName(QString::fromUtf8("mNavigationModeStackedWidget"));
        p1 = new QWidget();
        p1->setObjectName(QString::fromUtf8("p1"));
        verticalLayoutP1 = new QVBoxLayout(p1);
        verticalLayoutP1->setSpacing(2);
        verticalLayoutP1->setObjectName(QString::fromUtf8("verticalLayoutP1"));
        verticalLayoutP1->setContentsMargins(0, 0, 0, 0);
        mNavigationModeStackedWidget->addWidget(p1);
        p2 = new QWidget();
        p2->setObjectName(QString::fromUtf8("p2"));
        verticalLayoutP2 = new QVBoxLayout(p2);
        verticalLayoutP2->setSpacing(2);
        verticalLayoutP2->setObjectName(QString::fromUtf8("verticalLayoutP2"));
        verticalLayoutP2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mFixedRangeRangeLabel = new QLabel(p2);
        mFixedRangeRangeLabel->setObjectName(QString::fromUtf8("mFixedRangeRangeLabel"));

        horizontalLayout_5->addWidget(mFixedRangeRangeLabel);

        mFixedRangeStartDateTime = new QDateTimeEdit(p2);
        mFixedRangeStartDateTime->setObjectName(QString::fromUtf8("mFixedRangeStartDateTime"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mFixedRangeStartDateTime->sizePolicy().hasHeightForWidth());
        mFixedRangeStartDateTime->setSizePolicy(sizePolicy1);
        mFixedRangeStartDateTime->setTimeSpec(Qt::UTC);

        horizontalLayout_5->addWidget(mFixedRangeStartDateTime);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        mFixedRangeRangeToLabel = new QLabel(p2);
        mFixedRangeRangeToLabel->setObjectName(QString::fromUtf8("mFixedRangeRangeToLabel"));

        horizontalLayout_5->addWidget(mFixedRangeRangeToLabel);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        mFixedRangeEndDateTime = new QDateTimeEdit(p2);
        mFixedRangeEndDateTime->setObjectName(QString::fromUtf8("mFixedRangeEndDateTime"));
        sizePolicy1.setHeightForWidth(mFixedRangeEndDateTime->sizePolicy().hasHeightForWidth());
        mFixedRangeEndDateTime->setSizePolicy(sizePolicy1);
        mFixedRangeEndDateTime->setTimeSpec(Qt::UTC);

        horizontalLayout_5->addWidget(mFixedRangeEndDateTime);

        mFixedRangeSetRangeButton = new QToolButton(p2);
        mFixedRangeSetRangeButton->setObjectName(QString::fromUtf8("mFixedRangeSetRangeButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFixedRangeSetRangeButton->setIcon(icon5);
        mFixedRangeSetRangeButton->setAutoRaise(true);

        horizontalLayout_5->addWidget(mFixedRangeSetRangeButton);

        horizontalSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer2);


        verticalLayoutP2->addLayout(horizontalLayout_5);

        verticalSpacer2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutP2->addItem(verticalSpacer2);

        mNavigationModeStackedWidget->addWidget(p2);
        p3 = new QWidget();
        p3->setObjectName(QString::fromUtf8("p3"));
        verticalLayoutP3 = new QVBoxLayout(p3);
        verticalLayoutP3->setSpacing(2);
        verticalLayoutP3->setObjectName(QString::fromUtf8("verticalLayoutP3"));
        verticalLayoutP3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setSpacing(2);
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        mAnimationController = new QgsPlaybackControllerWidget(p3);
        mAnimationController->setObjectName(QString::fromUtf8("mAnimationController"));
        mAnimationController->setMinimumSize(QSize(33, 0));
        mAnimationController->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout1->addWidget(mAnimationController);

        mAnimationSlider = new QSlider(p3);
        mAnimationSlider->setObjectName(QString::fromUtf8("mAnimationSlider"));
        mAnimationSlider->setOrientation(Qt::Horizontal);
        mAnimationSlider->setInvertedAppearance(false);
        mAnimationSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout1->addWidget(mAnimationSlider);

        mAnimationLoopingCheckBox = new QCheckBox(p3);
        mAnimationLoopingCheckBox->setObjectName(QString::fromUtf8("mAnimationLoopingCheckBox"));

        horizontalLayout1->addWidget(mAnimationLoopingCheckBox);


        verticalLayoutP3->addLayout(horizontalLayout1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mRangeLabel = new QLabel(p3);
        mRangeLabel->setObjectName(QString::fromUtf8("mRangeLabel"));

        horizontalLayout_6->addWidget(mRangeLabel);

        mStartDateTime = new QDateTimeEdit(p3);
        mStartDateTime->setObjectName(QString::fromUtf8("mStartDateTime"));
        sizePolicy1.setHeightForWidth(mStartDateTime->sizePolicy().hasHeightForWidth());
        mStartDateTime->setSizePolicy(sizePolicy1);
        mStartDateTime->setTimeSpec(Qt::UTC);

        horizontalLayout_6->addWidget(mStartDateTime);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        mRangeToLabel = new QLabel(p3);
        mRangeToLabel->setObjectName(QString::fromUtf8("mRangeToLabel"));

        horizontalLayout_6->addWidget(mRangeToLabel);

        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        mEndDateTime = new QDateTimeEdit(p3);
        mEndDateTime->setObjectName(QString::fromUtf8("mEndDateTime"));
        sizePolicy1.setHeightForWidth(mEndDateTime->sizePolicy().hasHeightForWidth());
        mEndDateTime->setSizePolicy(sizePolicy1);
        mEndDateTime->setTimeSpec(Qt::UTC);

        horizontalLayout_6->addWidget(mEndDateTime);

        mSetRangeButton = new QToolButton(p3);
        mSetRangeButton->setObjectName(QString::fromUtf8("mSetRangeButton"));
        mSetRangeButton->setIcon(icon5);
        mSetRangeButton->setAutoRaise(true);

        horizontalLayout_6->addWidget(mSetRangeButton);

        mStepLabel = new QLabel(p3);
        mStepLabel->setObjectName(QString::fromUtf8("mStepLabel"));

        horizontalLayout_6->addWidget(mStepLabel);

        mStepSpinBox = new QgsDoubleSpinBox(p3);
        mStepSpinBox->setObjectName(QString::fromUtf8("mStepSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mStepSpinBox->sizePolicy().hasHeightForWidth());
        mStepSpinBox->setSizePolicy(sizePolicy2);
        mStepSpinBox->setMaximumSize(QSize(130, 16777215));
        mStepSpinBox->setDecimals(3);

        horizontalLayout_6->addWidget(mStepSpinBox);

        mTimeStepsComboBox = new QComboBox(p3);
        mTimeStepsComboBox->setObjectName(QString::fromUtf8("mTimeStepsComboBox"));
        mTimeStepsComboBox->setEditable(false);

        horizontalLayout_6->addWidget(mTimeStepsComboBox);

        mExportAnimationButton = new QToolButton(p3);
        mExportAnimationButton->setObjectName(QString::fromUtf8("mExportAnimationButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExportAnimationButton->setIcon(icon6);
        mExportAnimationButton->setAutoRaise(true);

        horizontalLayout_6->addWidget(mExportAnimationButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayoutP3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutP3->addItem(verticalSpacer_2);

        mNavigationModeStackedWidget->addWidget(p3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mMovieSlider = new QSlider(page);
        mMovieSlider->setObjectName(QString::fromUtf8("mMovieSlider"));
        mMovieSlider->setOrientation(Qt::Horizontal);
        mMovieSlider->setInvertedAppearance(false);
        mMovieSlider->setTickPosition(QSlider::NoTicks);

        gridLayout_2->addWidget(mMovieSlider, 0, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mMovieRangeLabel = new QLabel(page);
        mMovieRangeLabel->setObjectName(QString::fromUtf8("mMovieRangeLabel"));

        horizontalLayout_7->addWidget(mMovieRangeLabel);

        mTotalFramesSpinBox = new QgsSpinBox(page);
        mTotalFramesSpinBox->setObjectName(QString::fromUtf8("mTotalFramesSpinBox"));
        sizePolicy1.setHeightForWidth(mTotalFramesSpinBox->sizePolicy().hasHeightForWidth());
        mTotalFramesSpinBox->setSizePolicy(sizePolicy1);
        mTotalFramesSpinBox->setMaximum(999999999);

        horizontalLayout_7->addWidget(mTotalFramesSpinBox);

        mExportMovieButton = new QToolButton(page);
        mExportMovieButton->setObjectName(QString::fromUtf8("mExportMovieButton"));
        mExportMovieButton->setIcon(icon6);
        mExportMovieButton->setAutoRaise(true);

        horizontalLayout_7->addWidget(mExportMovieButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(3, 3);

        gridLayout_2->addLayout(horizontalLayout_7, 1, 0, 1, 4);

        mMovieLoopingCheckBox = new QCheckBox(page);
        mMovieLoopingCheckBox->setObjectName(QString::fromUtf8("mMovieLoopingCheckBox"));

        gridLayout_2->addWidget(mMovieLoopingCheckBox, 0, 3, 1, 1);

        mMovieController = new QgsPlaybackControllerWidget(page);
        mMovieController->setObjectName(QString::fromUtf8("mMovieController"));
        mMovieController->setMinimumSize(QSize(33, 0));
        mMovieController->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mMovieController, 0, 0, 1, 2);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        mNavigationModeStackedWidget->addWidget(page);

        verticalLayout->addWidget(mNavigationModeStackedWidget);

        widget = new QWidget(QgsTemporalControllerWidgetBase);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mNavigationOff, mNavigationFixedRange);
        QWidget::setTabOrder(mNavigationFixedRange, mNavigationAnimated);
        QWidget::setTabOrder(mNavigationAnimated, mNavigationMovie);
        QWidget::setTabOrder(mNavigationMovie, mSettings);
        QWidget::setTabOrder(mSettings, mFixedRangeStartDateTime);
        QWidget::setTabOrder(mFixedRangeStartDateTime, mFixedRangeEndDateTime);
        QWidget::setTabOrder(mFixedRangeEndDateTime, mFixedRangeSetRangeButton);
        QWidget::setTabOrder(mFixedRangeSetRangeButton, mAnimationController);
        QWidget::setTabOrder(mAnimationController, mAnimationSlider);
        QWidget::setTabOrder(mAnimationSlider, mAnimationLoopingCheckBox);
        QWidget::setTabOrder(mAnimationLoopingCheckBox, mStartDateTime);
        QWidget::setTabOrder(mStartDateTime, mEndDateTime);
        QWidget::setTabOrder(mEndDateTime, mSetRangeButton);
        QWidget::setTabOrder(mSetRangeButton, mStepSpinBox);
        QWidget::setTabOrder(mStepSpinBox, mTimeStepsComboBox);
        QWidget::setTabOrder(mTimeStepsComboBox, mExportAnimationButton);
        QWidget::setTabOrder(mExportAnimationButton, mMovieController);
        QWidget::setTabOrder(mMovieController, mMovieSlider);
        QWidget::setTabOrder(mMovieSlider, mMovieLoopingCheckBox);
        QWidget::setTabOrder(mMovieLoopingCheckBox, mTotalFramesSpinBox);
        QWidget::setTabOrder(mTotalFramesSpinBox, mExportMovieButton);

        retranslateUi(QgsTemporalControllerWidgetBase);

        mNavigationModeStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsTemporalControllerWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsTemporalControllerWidgetBase)
    {
        QgsTemporalControllerWidgetBase->setWindowTitle(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "QgsDockWidget", nullptr));
#if QT_CONFIG(tooltip)
        mNavigationOff->setToolTip(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Turn off temporal navigation", nullptr));
#endif // QT_CONFIG(tooltip)
        mNavigationOff->setText(QString());
#if QT_CONFIG(tooltip)
        mNavigationFixedRange->setToolTip(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Fixed range temporal navigation", nullptr));
#endif // QT_CONFIG(tooltip)
        mNavigationFixedRange->setText(QString());
#if QT_CONFIG(tooltip)
        mNavigationAnimated->setToolTip(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Animated temporal navigation", nullptr));
#endif // QT_CONFIG(tooltip)
        mNavigationAnimated->setText(QString());
#if QT_CONFIG(tooltip)
        mNavigationMovie->setToolTip(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Animated movie", nullptr));
#endif // QT_CONFIG(tooltip)
        mNavigationMovie->setText(QString());
        mCurrentRangeLabel->setText(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Temporal navigation disabled", nullptr));
        mSettings->setText(QString());
        mFixedRangeRangeLabel->setText(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Range", nullptr));
        mFixedRangeStartDateTime->setDisplayFormat(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        mFixedRangeRangeToLabel->setText(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "<html><head/><body><p>\342\211\244 <span style=\" font-style:italic;\">t</span> &lt;</p></body></html>", nullptr));
        mFixedRangeEndDateTime->setDisplayFormat(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        mFixedRangeSetRangeButton->setText(QString());
#if QT_CONFIG(tooltip)
        mAnimationLoopingCheckBox->setToolTip(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Automatically reset and repeat the animation endlessly", nullptr));
#endif // QT_CONFIG(tooltip)
        mAnimationLoopingCheckBox->setText(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Loop", nullptr));
        mRangeLabel->setText(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Animation range", nullptr));
        mStartDateTime->setDisplayFormat(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        mRangeToLabel->setText(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "to", nullptr));
        mEndDateTime->setDisplayFormat(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "M/d/yyyy h:mm AP", nullptr));
        mSetRangeButton->setText(QString());
        mStepLabel->setText(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Step", nullptr));
        mTimeStepsComboBox->setCurrentText(QString());
#if QT_CONFIG(tooltip)
        mExportAnimationButton->setToolTip(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Export Animation", nullptr));
#endif // QT_CONFIG(tooltip)
        mExportAnimationButton->setText(QString());
        mMovieRangeLabel->setText(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Total frames", nullptr));
#if QT_CONFIG(tooltip)
        mExportMovieButton->setToolTip(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Export Animation", nullptr));
#endif // QT_CONFIG(tooltip)
        mExportMovieButton->setText(QString());
#if QT_CONFIG(tooltip)
        mMovieLoopingCheckBox->setToolTip(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Automatically reset and repeat the animation endlessly", nullptr));
#endif // QT_CONFIG(tooltip)
        mMovieLoopingCheckBox->setText(QCoreApplication::translate("QgsTemporalControllerWidgetBase", "Loop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTemporalControllerWidgetBase: public Ui_QgsTemporalControllerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTEMPORALCONTROLLERWIDGETBASE_H
