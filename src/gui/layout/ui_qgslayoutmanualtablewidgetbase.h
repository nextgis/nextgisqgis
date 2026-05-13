/********************************************************************************
** Form generated from reading UI file 'qgslayoutmanualtablewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMANUALTABLEWIDGETBASE_H
#define UI_QGSLAYOUTMANUALTABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfontbutton.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutManualTableWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_4;
    QPushButton *mSetContentsButton;
    QgsCollapsibleGroupBoxBasic *groupBox_6;
    QGridLayout *gridLayout_6;
    QPushButton *mAdvancedCustomizationButton;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButton *mBackgroundColorButton;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *mHeaderModeComboBox;
    QLabel *mMarginLabel;
    QComboBox *mWrapBehaviorComboBox;
    QgsDoubleSpinBox *mMarginSpinBox;
    QLabel *label_10;
    QLabel *label_12;
    QCheckBox *mDrawEmptyCheckBox;
    QLabel *label_7;
    QgsCollapsibleGroupBoxBasic *mShowGridGroupCheckBox;
    QGridLayout *gridLayout_7;
    QLabel *mGridStrokeWidthLabel;
    QgsDoubleSpinBox *mGridStrokeWidthSpinBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QgsColorButton *mGridColorButton;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mDrawHorizontalGrid;
    QCheckBox *mDrawVerticalGrid;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QComboBox *mHeaderHAlignmentComboBox;
    QLabel *label_5;
    QgsFontButton *mHeaderFontToolButton;
    QLabel *label_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QLabel *lblContentsFont;
    QgsFontButton *mContentFontToolButton;
    QgsCollapsibleGroupBoxBasic *frameGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *mResizeModeLabel;
    QComboBox *mResizeModeComboBox;
    QPushButton *mAddFramePushButton;
    QCheckBox *mEmptyFrameCheckBox;
    QCheckBox *mHideEmptyBgCheckBox;

    void setupUi(QWidget *QgsLayoutManualTableWidgetBase)
    {
        if (QgsLayoutManualTableWidgetBase->objectName().isEmpty())
            QgsLayoutManualTableWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutManualTableWidgetBase"));
        QgsLayoutManualTableWidgetBase->resize(410, 815);
        verticalLayout = new QVBoxLayout(QgsLayoutManualTableWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsLayoutManualTableWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: palette(mid);"));

        verticalLayout->addWidget(label);

        scrollArea = new QgsScrollArea(QgsLayoutManualTableWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -76, 394, 868));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mSetContentsButton = new QPushButton(groupBox);
        mSetContentsButton->setObjectName(QString::fromUtf8("mSetContentsButton"));

        gridLayout_4->addWidget(mSetContentsButton, 3, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        groupBox_6 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setFocusPolicy(Qt::StrongFocus);
        groupBox_6->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_6->setProperty("collapsed", QVariant(false));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mAdvancedCustomizationButton = new QPushButton(groupBox_6);
        mAdvancedCustomizationButton->setObjectName(QString::fromUtf8("mAdvancedCustomizationButton"));

        gridLayout_6->addWidget(mAdvancedCustomizationButton, 5, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mBackgroundColorButton = new QgsColorButton(groupBox_6);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(mBackgroundColorButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        mHeaderModeComboBox = new QComboBox(groupBox_6);
        mHeaderModeComboBox->setObjectName(QString::fromUtf8("mHeaderModeComboBox"));

        gridLayout_6->addWidget(mHeaderModeComboBox, 3, 1, 1, 1);

        mMarginLabel = new QLabel(groupBox_6);
        mMarginLabel->setObjectName(QString::fromUtf8("mMarginLabel"));
        mMarginLabel->setWordWrap(true);

        gridLayout_6->addWidget(mMarginLabel, 2, 0, 1, 1);

        mWrapBehaviorComboBox = new QComboBox(groupBox_6);
        mWrapBehaviorComboBox->setObjectName(QString::fromUtf8("mWrapBehaviorComboBox"));

        gridLayout_6->addWidget(mWrapBehaviorComboBox, 6, 1, 1, 1);

        mMarginSpinBox = new QgsDoubleSpinBox(groupBox_6);
        mMarginSpinBox->setObjectName(QString::fromUtf8("mMarginSpinBox"));
        mMarginSpinBox->setSingleStep(0.100000000000000);
        mMarginSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mMarginSpinBox, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 4, 0, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 6, 0, 1, 1);

        mDrawEmptyCheckBox = new QCheckBox(groupBox_6);
        mDrawEmptyCheckBox->setObjectName(QString::fromUtf8("mDrawEmptyCheckBox"));

        gridLayout_6->addWidget(mDrawEmptyCheckBox, 1, 0, 1, 2);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 3, 0, 1, 1);


        mainLayout->addWidget(groupBox_6);

        mShowGridGroupCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mShowGridGroupCheckBox->setObjectName(QString::fromUtf8("mShowGridGroupCheckBox"));
        mShowGridGroupCheckBox->setFocusPolicy(Qt::StrongFocus);
        mShowGridGroupCheckBox->setCheckable(true);
        mShowGridGroupCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mShowGridGroupCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_7 = new QGridLayout(mShowGridGroupCheckBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mGridStrokeWidthLabel = new QLabel(mShowGridGroupCheckBox);
        mGridStrokeWidthLabel->setObjectName(QString::fromUtf8("mGridStrokeWidthLabel"));
        mGridStrokeWidthLabel->setWordWrap(true);

        gridLayout_7->addWidget(mGridStrokeWidthLabel, 0, 0, 1, 1);

        mGridStrokeWidthSpinBox = new QgsDoubleSpinBox(mShowGridGroupCheckBox);
        mGridStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mGridStrokeWidthSpinBox"));
        mGridStrokeWidthSpinBox->setSingleStep(0.100000000000000);
        mGridStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mGridStrokeWidthSpinBox, 0, 1, 1, 1);

        label_6 = new QLabel(mShowGridGroupCheckBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_7->addWidget(label_6, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mGridColorButton = new QgsColorButton(mShowGridGroupCheckBox);
        mGridColorButton->setObjectName(QString::fromUtf8("mGridColorButton"));
        mGridColorButton->setMinimumSize(QSize(120, 0));
        mGridColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(mGridColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_7->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        mDrawHorizontalGrid = new QCheckBox(mShowGridGroupCheckBox);
        mDrawHorizontalGrid->setObjectName(QString::fromUtf8("mDrawHorizontalGrid"));

        gridLayout_7->addWidget(mDrawHorizontalGrid, 2, 0, 1, 2);

        mDrawVerticalGrid = new QCheckBox(mShowGridGroupCheckBox);
        mDrawVerticalGrid->setObjectName(QString::fromUtf8("mDrawVerticalGrid"));

        gridLayout_7->addWidget(mDrawVerticalGrid, 3, 0, 1, 2);


        mainLayout->addWidget(mShowGridGroupCheckBox);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mHeaderHAlignmentComboBox = new QComboBox(groupBox_3);
        mHeaderHAlignmentComboBox->setObjectName(QString::fromUtf8("mHeaderHAlignmentComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mHeaderHAlignmentComboBox->sizePolicy().hasHeightForWidth());
        mHeaderHAlignmentComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderHAlignmentComboBox, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        mHeaderFontToolButton = new QgsFontButton(groupBox_3);
        mHeaderFontToolButton->setObjectName(QString::fromUtf8("mHeaderFontToolButton"));
        sizePolicy1.setHeightForWidth(mHeaderFontToolButton->sizePolicy().hasHeightForWidth());
        mHeaderFontToolButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderFontToolButton, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblContentsFont = new QLabel(groupBox_5);
        lblContentsFont->setObjectName(QString::fromUtf8("lblContentsFont"));

        gridLayout_2->addWidget(lblContentsFont, 0, 0, 1, 1);

        mContentFontToolButton = new QgsFontButton(groupBox_5);
        mContentFontToolButton->setObjectName(QString::fromUtf8("mContentFontToolButton"));
        sizePolicy1.setHeightForWidth(mContentFontToolButton->sizePolicy().hasHeightForWidth());
        mContentFontToolButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mContentFontToolButton, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);


        mainLayout->addWidget(groupBox_4);

        frameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        frameGroupBox->setObjectName(QString::fromUtf8("frameGroupBox"));
        frameGroupBox->setFocusPolicy(Qt::StrongFocus);
        frameGroupBox->setCheckable(false);
        frameGroupBox->setChecked(false);
        frameGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(frameGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mResizeModeLabel = new QLabel(frameGroupBox);
        mResizeModeLabel->setObjectName(QString::fromUtf8("mResizeModeLabel"));
        mResizeModeLabel->setWordWrap(true);

        gridLayout_3->addWidget(mResizeModeLabel, 0, 0, 1, 1);

        mResizeModeComboBox = new QComboBox(frameGroupBox);
        mResizeModeComboBox->setObjectName(QString::fromUtf8("mResizeModeComboBox"));
        sizePolicy1.setHeightForWidth(mResizeModeComboBox->sizePolicy().hasHeightForWidth());
        mResizeModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mResizeModeComboBox, 0, 1, 1, 1);

        mAddFramePushButton = new QPushButton(frameGroupBox);
        mAddFramePushButton->setObjectName(QString::fromUtf8("mAddFramePushButton"));

        gridLayout_3->addWidget(mAddFramePushButton, 1, 0, 1, 2);

        mEmptyFrameCheckBox = new QCheckBox(frameGroupBox);
        mEmptyFrameCheckBox->setObjectName(QString::fromUtf8("mEmptyFrameCheckBox"));

        gridLayout_3->addWidget(mEmptyFrameCheckBox, 2, 0, 1, 2);

        mHideEmptyBgCheckBox = new QCheckBox(frameGroupBox);
        mHideEmptyBgCheckBox->setObjectName(QString::fromUtf8("mHideEmptyBgCheckBox"));

        gridLayout_3->addWidget(mHideEmptyBgCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(frameGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        mMarginLabel->setBuddy(mMarginSpinBox);
        mGridStrokeWidthLabel->setBuddy(mGridStrokeWidthSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mSetContentsButton);
        QWidget::setTabOrder(mSetContentsButton, groupBox_6);
        QWidget::setTabOrder(groupBox_6, mDrawEmptyCheckBox);
        QWidget::setTabOrder(mDrawEmptyCheckBox, mMarginSpinBox);
        QWidget::setTabOrder(mMarginSpinBox, mHeaderModeComboBox);
        QWidget::setTabOrder(mHeaderModeComboBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mAdvancedCustomizationButton);
        QWidget::setTabOrder(mAdvancedCustomizationButton, mWrapBehaviorComboBox);
        QWidget::setTabOrder(mWrapBehaviorComboBox, mShowGridGroupCheckBox);
        QWidget::setTabOrder(mShowGridGroupCheckBox, mGridStrokeWidthSpinBox);
        QWidget::setTabOrder(mGridStrokeWidthSpinBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, mDrawHorizontalGrid);
        QWidget::setTabOrder(mDrawHorizontalGrid, mDrawVerticalGrid);
        QWidget::setTabOrder(mDrawVerticalGrid, mHeaderFontToolButton);
        QWidget::setTabOrder(mHeaderFontToolButton, mHeaderHAlignmentComboBox);
        QWidget::setTabOrder(mHeaderHAlignmentComboBox, mContentFontToolButton);
        QWidget::setTabOrder(mContentFontToolButton, frameGroupBox);
        QWidget::setTabOrder(frameGroupBox, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAddFramePushButton);
        QWidget::setTabOrder(mAddFramePushButton, mEmptyFrameCheckBox);
        QWidget::setTabOrder(mEmptyFrameCheckBox, mHideEmptyBgCheckBox);

        retranslateUi(QgsLayoutManualTableWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutManualTableWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutManualTableWidgetBase)
    {
        QgsLayoutManualTableWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Attribute Table", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Table", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Main Properties", nullptr));
        mSetContentsButton->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Edit Table\342\200\246", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Appearance", nullptr));
        mAdvancedCustomizationButton->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Advanced Customization\342\200\246", nullptr));
        mBackgroundColorButton->setText(QString());
        mMarginLabel->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Cell margins", nullptr));
        mMarginSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", " mm", nullptr));
        label_10->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Background color", nullptr));
        label_12->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Oversized text", nullptr));
        mDrawEmptyCheckBox->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Show empty rows", nullptr));
        label_7->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Display header", nullptr));
        mShowGridGroupCheckBox->setTitle(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Show Grid", nullptr));
        mGridStrokeWidthLabel->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Line width", nullptr));
        mGridStrokeWidthSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", " mm", nullptr));
        label_6->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Color", nullptr));
        mGridColorButton->setText(QString());
        mDrawHorizontalGrid->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Draw horizontal lines", nullptr));
        mDrawVerticalGrid->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Draw vertical lines", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Fonts and Text Styling", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Table Heading", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Font", nullptr));
        mHeaderFontToolButton->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Heading Font", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Alignment", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Table Contents", nullptr));
        lblContentsFont->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Font", nullptr));
        mContentFontToolButton->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Contents Font", nullptr));
        frameGroupBox->setTitle(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Frames", nullptr));
        mResizeModeLabel->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Resize mode", nullptr));
        mAddFramePushButton->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Add Frame", nullptr));
        mEmptyFrameCheckBox->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Don't export page if frame is empty", nullptr));
        mHideEmptyBgCheckBox->setText(QCoreApplication::translate("QgsLayoutManualTableWidgetBase", "Don't draw background if frame is empty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutManualTableWidgetBase: public Ui_QgsLayoutManualTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMANUALTABLEWIDGETBASE_H
