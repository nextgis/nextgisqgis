/********************************************************************************
** Form generated from reading UI file 'qgscompoundcolorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOUNDCOLORWIDGET_H
#define UI_QGSCOMPOUNDCOLORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscolorschemelist.h>
#include <qgscolorwidgets.h>
#include "qgscolorbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCompoundColorWidgetBase
{
public:
    QAction *mActionImportColors;
    QAction *mActionExportColors;
    QAction *mActionPasteColors;
    QAction *mActionImportPalette;
    QAction *mActionRemovePalette;
    QAction *mActionNewPalette;
    QAction *mActionCopyColors;
    QAction *mActionShowInButtons;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *mGridLayout;
    QWidget *mSwatchesWidget;
    QGridLayout *gridLayout_4;
    QgsColorButton *mSwatchButton9;
    QgsColorButton *mSwatchButton11;
    QgsColorButton *mSwatchButton12;
    QgsColorButton *mSwatchButton5;
    QgsColorButton *mSwatchButton2;
    QgsColorButton *mSwatchButton3;
    QgsColorButton *mSwatchButton1;
    QgsColorButton *mSwatchButton13;
    QgsColorButton *mSwatchButton6;
    QgsColorButton *mSwatchButton7;
    QgsColorButton *mSwatchButton14;
    QgsColorButton *mSwatchButton15;
    QgsColorButton *mSwatchButton8;
    QgsColorButton *mSwatchButton16;
    QgsColorButton *mSwatchButton4;
    QgsColorButton *mSwatchButton10;
    QWidget *mPreviewWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *mOldColorLabel;
    QPushButton *mAddCustomColorButton;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_13;
    QgsColorPreviewWidget *mColorPreview;
    QTabWidget *mTabWidget;
    QWidget *iconColorBox;
    QHBoxLayout *horizontalLayout_9;
    QgsColorBox *mColorBox;
    QgsColorRampWidget *mVerticalRamp;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QgsColorWheel *mColorWheel;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *mSchemeComboBox;
    QToolButton *mSchemeToolButton;
    QgsColorSchemeList *mSchemeList;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *mAddColorToSchemeButton;
    QPushButton *mRemoveColorsFromSchemeButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QgsSpinBox *mSpinBoxRadius;
    QPushButton *mSampleButton;
    QLabel *label_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QgsColorPreviewWidget *mSamplePreview;
    QSpacerItem *verticalSpacer_2;
    QWidget *mSlidersWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_11;
    QComboBox *mColorModel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *mRGB;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *mHueRadio;
    QLabel *label_5;
    QgsColorSliderWidget *mHueSlider;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *mSaturationRadio;
    QLabel *label_6;
    QgsColorSliderWidget *mSaturationSlider;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mValueRadio;
    QLabel *label_7;
    QgsColorSliderWidget *mValueSlider;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mRedRadio;
    QLabel *label_8;
    QgsColorSliderWidget *mRedSlider;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *mGreenRadio;
    QLabel *label_9;
    QgsColorSliderWidget *mGreenSlider;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mBlueRadio;
    QLabel *label_10;
    QgsColorSliderWidget *mBlueSlider;
    QWidget *mCMYK;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *mCyanRadio;
    QLabel *label_18;
    QgsColorSliderWidget *mCyanSlider;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *mMagentaRadio;
    QLabel *label_19;
    QgsColorSliderWidget *mMagentaSlider;
    QHBoxLayout *horizontalLayout_26;
    QRadioButton *mYellowRadio;
    QLabel *label_20;
    QgsColorSliderWidget *mYellowSlider;
    QHBoxLayout *horizontalLayout_27;
    QRadioButton *mBlackRadio;
    QLabel *label_21;
    QgsColorSliderWidget *mBlackSlider;
    QHBoxLayout *mAlphaLayout;
    QLabel *mAlphaLabel;
    QgsColorSliderWidget *mAlphaSlider;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QgsColorTextWidget *mColorText;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsCompoundColorWidgetBase)
    {
        if (QgsCompoundColorWidgetBase->objectName().isEmpty())
            QgsCompoundColorWidgetBase->setObjectName(QString::fromUtf8("QgsCompoundColorWidgetBase"));
        QgsCompoundColorWidgetBase->resize(588, 481);
        mActionImportColors = new QAction(QgsCompoundColorWidgetBase);
        mActionImportColors->setObjectName(QString::fromUtf8("mActionImportColors"));
        mActionExportColors = new QAction(QgsCompoundColorWidgetBase);
        mActionExportColors->setObjectName(QString::fromUtf8("mActionExportColors"));
        mActionPasteColors = new QAction(QgsCompoundColorWidgetBase);
        mActionPasteColors->setObjectName(QString::fromUtf8("mActionPasteColors"));
        mActionImportPalette = new QAction(QgsCompoundColorWidgetBase);
        mActionImportPalette->setObjectName(QString::fromUtf8("mActionImportPalette"));
        mActionRemovePalette = new QAction(QgsCompoundColorWidgetBase);
        mActionRemovePalette->setObjectName(QString::fromUtf8("mActionRemovePalette"));
        mActionNewPalette = new QAction(QgsCompoundColorWidgetBase);
        mActionNewPalette->setObjectName(QString::fromUtf8("mActionNewPalette"));
        mActionCopyColors = new QAction(QgsCompoundColorWidgetBase);
        mActionCopyColors->setObjectName(QString::fromUtf8("mActionCopyColors"));
        mActionShowInButtons = new QAction(QgsCompoundColorWidgetBase);
        mActionShowInButtons->setObjectName(QString::fromUtf8("mActionShowInButtons"));
        mActionShowInButtons->setCheckable(true);
        verticalLayout_7 = new QVBoxLayout(QgsCompoundColorWidgetBase);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        mGridLayout = new QGridLayout();
        mGridLayout->setObjectName(QString::fromUtf8("mGridLayout"));
        mGridLayout->setHorizontalSpacing(6);
        mSwatchesWidget = new QWidget(QgsCompoundColorWidgetBase);
        mSwatchesWidget->setObjectName(QString::fromUtf8("mSwatchesWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSwatchesWidget->sizePolicy().hasHeightForWidth());
        mSwatchesWidget->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(mSwatchesWidget);
        gridLayout_4->setSpacing(1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mSwatchButton9 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton9->setObjectName(QString::fromUtf8("mSwatchButton9"));
        mSwatchButton9->setMinimumSize(QSize(38, 30));
        mSwatchButton9->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton9, 1, 0, 1, 1);

        mSwatchButton11 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton11->setObjectName(QString::fromUtf8("mSwatchButton11"));
        mSwatchButton11->setMinimumSize(QSize(38, 30));
        mSwatchButton11->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton11, 1, 2, 1, 1);

        mSwatchButton12 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton12->setObjectName(QString::fromUtf8("mSwatchButton12"));
        mSwatchButton12->setMinimumSize(QSize(38, 30));
        mSwatchButton12->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton12, 1, 3, 1, 1);

        mSwatchButton5 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton5->setObjectName(QString::fromUtf8("mSwatchButton5"));
        mSwatchButton5->setMinimumSize(QSize(38, 30));
        mSwatchButton5->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton5, 0, 4, 1, 1);

        mSwatchButton2 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton2->setObjectName(QString::fromUtf8("mSwatchButton2"));
        mSwatchButton2->setMinimumSize(QSize(38, 30));
        mSwatchButton2->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton2, 0, 1, 1, 1);

        mSwatchButton3 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton3->setObjectName(QString::fromUtf8("mSwatchButton3"));
        mSwatchButton3->setMinimumSize(QSize(38, 30));
        mSwatchButton3->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton3, 0, 2, 1, 1);

        mSwatchButton1 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton1->setObjectName(QString::fromUtf8("mSwatchButton1"));
        mSwatchButton1->setMinimumSize(QSize(38, 30));
        mSwatchButton1->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton1, 0, 0, 1, 1);

        mSwatchButton13 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton13->setObjectName(QString::fromUtf8("mSwatchButton13"));
        mSwatchButton13->setMinimumSize(QSize(38, 30));
        mSwatchButton13->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton13, 1, 4, 1, 1);

        mSwatchButton6 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton6->setObjectName(QString::fromUtf8("mSwatchButton6"));
        mSwatchButton6->setMinimumSize(QSize(38, 30));
        mSwatchButton6->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton6, 0, 5, 1, 1);

        mSwatchButton7 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton7->setObjectName(QString::fromUtf8("mSwatchButton7"));
        mSwatchButton7->setMinimumSize(QSize(38, 30));
        mSwatchButton7->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton7, 0, 6, 1, 1);

        mSwatchButton14 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton14->setObjectName(QString::fromUtf8("mSwatchButton14"));
        mSwatchButton14->setMinimumSize(QSize(38, 30));
        mSwatchButton14->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton14, 1, 5, 1, 1);

        mSwatchButton15 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton15->setObjectName(QString::fromUtf8("mSwatchButton15"));
        mSwatchButton15->setMinimumSize(QSize(38, 30));
        mSwatchButton15->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton15, 1, 6, 1, 1);

        mSwatchButton8 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton8->setObjectName(QString::fromUtf8("mSwatchButton8"));
        mSwatchButton8->setMinimumSize(QSize(38, 30));
        mSwatchButton8->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton8, 0, 7, 1, 1);

        mSwatchButton16 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton16->setObjectName(QString::fromUtf8("mSwatchButton16"));
        mSwatchButton16->setMinimumSize(QSize(38, 30));
        mSwatchButton16->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton16, 1, 7, 1, 1);

        mSwatchButton4 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton4->setObjectName(QString::fromUtf8("mSwatchButton4"));
        mSwatchButton4->setMinimumSize(QSize(38, 30));
        mSwatchButton4->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton4, 0, 3, 1, 1);

        mSwatchButton10 = new QgsColorButton(mSwatchesWidget);
        mSwatchButton10->setObjectName(QString::fromUtf8("mSwatchButton10"));
        mSwatchButton10->setMinimumSize(QSize(38, 30));
        mSwatchButton10->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton10, 1, 1, 1, 1);


        mGridLayout->addWidget(mSwatchesWidget, 1, 1, 1, 1);

        mPreviewWidget = new QWidget(QgsCompoundColorWidgetBase);
        mPreviewWidget->setObjectName(QString::fromUtf8("mPreviewWidget"));
        sizePolicy.setHeightForWidth(mPreviewWidget->sizePolicy().hasHeightForWidth());
        mPreviewWidget->setSizePolicy(sizePolicy);
        mPreviewWidget->setMaximumSize(QSize(16777215, 80));
        gridLayout = new QGridLayout(mPreviewWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(mPreviewWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mOldColorLabel = new QLabel(mPreviewWidget);
        mOldColorLabel->setObjectName(QString::fromUtf8("mOldColorLabel"));
        mOldColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mOldColorLabel, 1, 0, 1, 1);

        mAddCustomColorButton = new QPushButton(mPreviewWidget);
        mAddCustomColorButton->setObjectName(QString::fromUtf8("mAddCustomColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAddCustomColorButton->sizePolicy().hasHeightForWidth());
        mAddCustomColorButton->setSizePolicy(sizePolicy1);
        mAddCustomColorButton->setMinimumSize(QSize(28, 0));
        mAddCustomColorButton->setMaximumSize(QSize(28, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionAtlasNext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddCustomColorButton->setIcon(icon);
        mAddCustomColorButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(mAddCustomColorButton, 0, 2, 2, 1);

        frame_2 = new QFrame(mPreviewWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_2);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(1, 1, 1, 1);
        mColorPreview = new QgsColorPreviewWidget(frame_2);
        mColorPreview->setObjectName(QString::fromUtf8("mColorPreview"));
        mColorPreview->setMinimumSize(QSize(0, 40));

        horizontalLayout_13->addWidget(mColorPreview);


        gridLayout->addWidget(frame_2, 0, 1, 2, 1);

        gridLayout->setColumnStretch(1, 1);

        mGridLayout->addWidget(mPreviewWidget, 1, 0, 1, 1);

        mTabWidget = new QTabWidget(QgsCompoundColorWidgetBase);
        mTabWidget->setObjectName(QString::fromUtf8("mTabWidget"));
        mTabWidget->setIconSize(QSize(16, 16));
        iconColorBox = new QWidget();
        iconColorBox->setObjectName(QString::fromUtf8("iconColorBox"));
        horizontalLayout_9 = new QHBoxLayout(iconColorBox);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mColorBox = new QgsColorBox(iconColorBox);
        mColorBox->setObjectName(QString::fromUtf8("mColorBox"));

        horizontalLayout_9->addWidget(mColorBox);

        mVerticalRamp = new QgsColorRampWidget(iconColorBox);
        mVerticalRamp->setObjectName(QString::fromUtf8("mVerticalRamp"));

        horizontalLayout_9->addWidget(mVerticalRamp);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconColorBox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(iconColorBox, icon1, QString());
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mColorWheel = new QgsColorWheel(widget);
        mColorWheel->setObjectName(QString::fromUtf8("mColorWheel"));

        horizontalLayout_10->addWidget(mColorWheel);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mIconColorWheel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(widget, icon2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mSchemeComboBox = new QComboBox(tab);
        mSchemeComboBox->setObjectName(QString::fromUtf8("mSchemeComboBox"));

        horizontalLayout_7->addWidget(mSchemeComboBox);

        mSchemeToolButton = new QToolButton(tab);
        mSchemeToolButton->setObjectName(QString::fromUtf8("mSchemeToolButton"));
        mSchemeToolButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_7->addWidget(mSchemeToolButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        mSchemeList = new QgsColorSchemeList(tab);
        mSchemeList->setObjectName(QString::fromUtf8("mSchemeList"));

        verticalLayout_3->addWidget(mSchemeList);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(1);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        mAddColorToSchemeButton = new QPushButton(tab);
        mAddColorToSchemeButton->setObjectName(QString::fromUtf8("mAddColorToSchemeButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddColorToSchemeButton->setIcon(icon3);

        horizontalLayout_11->addWidget(mAddColorToSchemeButton);

        mRemoveColorsFromSchemeButton = new QPushButton(tab);
        mRemoveColorsFromSchemeButton->setObjectName(QString::fromUtf8("mRemoveColorsFromSchemeButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveColorsFromSchemeButton->setIcon(icon4);

        horizontalLayout_11->addWidget(mRemoveColorsFromSchemeButton);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalLayout_3->setStretch(1, 1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mIconColorSwatches.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(tab, icon5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_12->addWidget(label_2);

        mSpinBoxRadius = new QgsSpinBox(tab_2);
        mSpinBoxRadius->setObjectName(QString::fromUtf8("mSpinBoxRadius"));
        mSpinBoxRadius->setMinimum(1);
        mSpinBoxRadius->setMaximum(100);

        horizontalLayout_12->addWidget(mSpinBoxRadius);


        verticalLayout_4->addLayout(horizontalLayout_12);

        mSampleButton = new QPushButton(tab_2);
        mSampleButton->setObjectName(QString::fromUtf8("mSampleButton"));

        verticalLayout_4->addWidget(mSampleButton);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::AutoText);
        label_4->setWordWrap(true);

        verticalLayout_4->addWidget(label_4);

        frame = new QFrame(tab_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        mSamplePreview = new QgsColorPreviewWidget(frame);
        mSamplePreview->setObjectName(QString::fromUtf8("mSamplePreview"));
        mSamplePreview->setMinimumSize(QSize(0, 40));

        verticalLayout_5->addWidget(mSamplePreview);


        verticalLayout_4->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mIconColorPicker.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(tab_2, icon6, QString());

        mGridLayout->addWidget(mTabWidget, 0, 0, 1, 1);

        mSlidersWidget = new QWidget(QgsCompoundColorWidgetBase);
        mSlidersWidget->setObjectName(QString::fromUtf8("mSlidersWidget"));
        verticalLayout = new QVBoxLayout(mSlidersWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_11 = new QLabel(mSlidersWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_15->addWidget(label_11);

        mColorModel = new QComboBox(mSlidersWidget);
        mColorModel->setObjectName(QString::fromUtf8("mColorModel"));

        horizontalLayout_15->addWidget(mColorModel);

        horizontalSpacer_2 = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_15);

        mRGB = new QWidget(mSlidersWidget);
        mRGB->setObjectName(QString::fromUtf8("mRGB"));
        verticalLayout_6 = new QVBoxLayout(mRGB);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mHueRadio = new QRadioButton(mRGB);
        mHueRadio->setObjectName(QString::fromUtf8("mHueRadio"));
        mHueRadio->setAutoExclusive(false);

        horizontalLayout_4->addWidget(mHueRadio);

        label_5 = new QLabel(mRGB);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        mHueSlider = new QgsColorSliderWidget(mRGB);
        mHueSlider->setObjectName(QString::fromUtf8("mHueSlider"));

        horizontalLayout_4->addWidget(mHueSlider);

        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mSaturationRadio = new QRadioButton(mRGB);
        mSaturationRadio->setObjectName(QString::fromUtf8("mSaturationRadio"));
        mSaturationRadio->setAutoExclusive(false);

        horizontalLayout_5->addWidget(mSaturationRadio);

        label_6 = new QLabel(mRGB);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        mSaturationSlider = new QgsColorSliderWidget(mRGB);
        mSaturationSlider->setObjectName(QString::fromUtf8("mSaturationSlider"));

        horizontalLayout_5->addWidget(mSaturationSlider);

        horizontalLayout_5->setStretch(2, 1);

        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mValueRadio = new QRadioButton(mRGB);
        mValueRadio->setObjectName(QString::fromUtf8("mValueRadio"));
        mValueRadio->setAutoExclusive(false);

        horizontalLayout_6->addWidget(mValueRadio);

        label_7 = new QLabel(mRGB);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        mValueSlider = new QgsColorSliderWidget(mRGB);
        mValueSlider->setObjectName(QString::fromUtf8("mValueSlider"));

        horizontalLayout_6->addWidget(mValueSlider);

        horizontalLayout_6->setStretch(2, 1);

        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mRedRadio = new QRadioButton(mRGB);
        mRedRadio->setObjectName(QString::fromUtf8("mRedRadio"));
        mRedRadio->setAutoExclusive(false);

        horizontalLayout->addWidget(mRedRadio);

        label_8 = new QLabel(mRGB);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        mRedSlider = new QgsColorSliderWidget(mRGB);
        mRedSlider->setObjectName(QString::fromUtf8("mRedSlider"));

        horizontalLayout->addWidget(mRedSlider);

        horizontalLayout->setStretch(2, 1);

        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mGreenRadio = new QRadioButton(mRGB);
        mGreenRadio->setObjectName(QString::fromUtf8("mGreenRadio"));
        mGreenRadio->setAutoExclusive(false);

        horizontalLayout_2->addWidget(mGreenRadio);

        label_9 = new QLabel(mRGB);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        mGreenSlider = new QgsColorSliderWidget(mRGB);
        mGreenSlider->setObjectName(QString::fromUtf8("mGreenSlider"));

        horizontalLayout_2->addWidget(mGreenSlider);

        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mBlueRadio = new QRadioButton(mRGB);
        mBlueRadio->setObjectName(QString::fromUtf8("mBlueRadio"));
        mBlueRadio->setAutoExclusive(false);

        horizontalLayout_3->addWidget(mBlueRadio);

        label_10 = new QLabel(mRGB);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);

        mBlueSlider = new QgsColorSliderWidget(mRGB);
        mBlueSlider->setObjectName(QString::fromUtf8("mBlueSlider"));

        horizontalLayout_3->addWidget(mBlueSlider);

        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(mRGB);

        mCMYK = new QWidget(mSlidersWidget);
        mCMYK->setObjectName(QString::fromUtf8("mCMYK"));
        verticalLayout_2 = new QVBoxLayout(mCMYK);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        mCyanRadio = new QRadioButton(mCMYK);
        mCyanRadio->setObjectName(QString::fromUtf8("mCyanRadio"));
        mCyanRadio->setAutoExclusive(false);

        horizontalLayout_14->addWidget(mCyanRadio);

        label_18 = new QLabel(mCMYK);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_14->addWidget(label_18);

        mCyanSlider = new QgsColorSliderWidget(mCMYK);
        mCyanSlider->setObjectName(QString::fromUtf8("mCyanSlider"));

        horizontalLayout_14->addWidget(mCyanSlider);

        horizontalLayout_14->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        mMagentaRadio = new QRadioButton(mCMYK);
        mMagentaRadio->setObjectName(QString::fromUtf8("mMagentaRadio"));
        mMagentaRadio->setAutoExclusive(false);

        horizontalLayout_16->addWidget(mMagentaRadio);

        label_19 = new QLabel(mCMYK);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_16->addWidget(label_19);

        mMagentaSlider = new QgsColorSliderWidget(mCMYK);
        mMagentaSlider->setObjectName(QString::fromUtf8("mMagentaSlider"));

        horizontalLayout_16->addWidget(mMagentaSlider);

        horizontalLayout_16->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        mYellowRadio = new QRadioButton(mCMYK);
        mYellowRadio->setObjectName(QString::fromUtf8("mYellowRadio"));
        mYellowRadio->setAutoExclusive(false);

        horizontalLayout_26->addWidget(mYellowRadio);

        label_20 = new QLabel(mCMYK);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_26->addWidget(label_20);

        mYellowSlider = new QgsColorSliderWidget(mCMYK);
        mYellowSlider->setObjectName(QString::fromUtf8("mYellowSlider"));

        horizontalLayout_26->addWidget(mYellowSlider);

        horizontalLayout_26->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        mBlackRadio = new QRadioButton(mCMYK);
        mBlackRadio->setObjectName(QString::fromUtf8("mBlackRadio"));
        mBlackRadio->setAutoExclusive(false);

        horizontalLayout_27->addWidget(mBlackRadio);

        label_21 = new QLabel(mCMYK);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_27->addWidget(label_21);

        mBlackSlider = new QgsColorSliderWidget(mCMYK);
        mBlackSlider->setObjectName(QString::fromUtf8("mBlackSlider"));

        horizontalLayout_27->addWidget(mBlackSlider);

        horizontalLayout_27->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_27);


        verticalLayout->addWidget(mCMYK);

        mAlphaLayout = new QHBoxLayout();
        mAlphaLayout->setObjectName(QString::fromUtf8("mAlphaLayout"));
        mAlphaLabel = new QLabel(mSlidersWidget);
        mAlphaLabel->setObjectName(QString::fromUtf8("mAlphaLabel"));

        mAlphaLayout->addWidget(mAlphaLabel);

        mAlphaSlider = new QgsColorSliderWidget(mSlidersWidget);
        mAlphaSlider->setObjectName(QString::fromUtf8("mAlphaSlider"));

        mAlphaLayout->addWidget(mAlphaSlider);


        verticalLayout->addLayout(mAlphaLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(mSlidersWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        mColorText = new QgsColorTextWidget(mSlidersWidget);
        mColorText->setObjectName(QString::fromUtf8("mColorText"));

        horizontalLayout_8->addWidget(mColorText);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        mGridLayout->addWidget(mSlidersWidget, 0, 1, 1, 1);

        mGridLayout->setRowStretch(0, 1);
        mGridLayout->setColumnStretch(0, 1);

        verticalLayout_7->addLayout(mGridLayout);

        QWidget::setTabOrder(mTabWidget, mSchemeComboBox);
        QWidget::setTabOrder(mSchemeComboBox, mSchemeToolButton);
        QWidget::setTabOrder(mSchemeToolButton, mAddColorToSchemeButton);
        QWidget::setTabOrder(mAddColorToSchemeButton, mRemoveColorsFromSchemeButton);
        QWidget::setTabOrder(mRemoveColorsFromSchemeButton, mSpinBoxRadius);
        QWidget::setTabOrder(mSpinBoxRadius, mSampleButton);
        QWidget::setTabOrder(mSampleButton, mHueRadio);
        QWidget::setTabOrder(mHueRadio, mSaturationRadio);
        QWidget::setTabOrder(mSaturationRadio, mValueRadio);
        QWidget::setTabOrder(mValueRadio, mRedRadio);
        QWidget::setTabOrder(mRedRadio, mGreenRadio);
        QWidget::setTabOrder(mGreenRadio, mBlueRadio);
        QWidget::setTabOrder(mBlueRadio, mAddCustomColorButton);
        QWidget::setTabOrder(mAddCustomColorButton, mSwatchButton1);
        QWidget::setTabOrder(mSwatchButton1, mSwatchButton9);
        QWidget::setTabOrder(mSwatchButton9, mSwatchButton2);
        QWidget::setTabOrder(mSwatchButton2, mSwatchButton10);
        QWidget::setTabOrder(mSwatchButton10, mSwatchButton3);
        QWidget::setTabOrder(mSwatchButton3, mSwatchButton11);
        QWidget::setTabOrder(mSwatchButton11, mSwatchButton4);
        QWidget::setTabOrder(mSwatchButton4, mSwatchButton12);
        QWidget::setTabOrder(mSwatchButton12, mSwatchButton5);
        QWidget::setTabOrder(mSwatchButton5, mSwatchButton13);
        QWidget::setTabOrder(mSwatchButton13, mSwatchButton6);
        QWidget::setTabOrder(mSwatchButton6, mSwatchButton14);
        QWidget::setTabOrder(mSwatchButton14, mSwatchButton7);
        QWidget::setTabOrder(mSwatchButton7, mSwatchButton15);
        QWidget::setTabOrder(mSwatchButton15, mSwatchButton8);
        QWidget::setTabOrder(mSwatchButton8, mSwatchButton16);

        retranslateUi(QgsCompoundColorWidgetBase);

        mTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsCompoundColorWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCompoundColorWidgetBase)
    {
        mActionImportColors->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Import Colors\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionImportColors->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Import colors from file", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionExportColors->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Export Colors\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionExportColors->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Export colors to file", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionPasteColors->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Paste Colors", nullptr));
#if QT_CONFIG(tooltip)
        mActionPasteColors->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Paste colors from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionImportPalette->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Import Palette\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionImportPalette->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Import palette from file", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionRemovePalette->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Remove Palette", nullptr));
#if QT_CONFIG(tooltip)
        mActionRemovePalette->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Remove current palette", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionNewPalette->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "New Palette\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mActionNewPalette->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Create a new palette", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionCopyColors->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Copy Colors", nullptr));
#if QT_CONFIG(tooltip)
        mActionCopyColors->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Copy selected colors", nullptr));
#endif // QT_CONFIG(tooltip)
        mActionShowInButtons->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Show in Color Buttons", nullptr));
        mSwatchButton9->setText(QString());
        mSwatchButton11->setText(QString());
        mSwatchButton12->setText(QString());
        mSwatchButton5->setText(QString());
        mSwatchButton2->setText(QString());
        mSwatchButton3->setText(QString());
        mSwatchButton1->setText(QString());
        mSwatchButton13->setText(QString());
        mSwatchButton6->setText(QString());
        mSwatchButton7->setText(QString());
        mSwatchButton14->setText(QString());
        mSwatchButton15->setText(QString());
        mSwatchButton8->setText(QString());
        mSwatchButton16->setText(QString());
        mSwatchButton4->setText(QString());
        mSwatchButton10->setText(QString());
        label_3->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Current", nullptr));
        mOldColorLabel->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Old", nullptr));
#if QT_CONFIG(tooltip)
        mAddCustomColorButton->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Add color to swatch", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddCustomColorButton->setText(QString());
        mTabWidget->setTabText(mTabWidget->indexOf(iconColorBox), QString());
#if QT_CONFIG(tooltip)
        mTabWidget->setTabToolTip(mTabWidget->indexOf(iconColorBox), QCoreApplication::translate("QgsCompoundColorWidgetBase", "Color ramp", nullptr));
#endif // QT_CONFIG(tooltip)
        mTabWidget->setTabText(mTabWidget->indexOf(widget), QString());
#if QT_CONFIG(tooltip)
        mTabWidget->setTabToolTip(mTabWidget->indexOf(widget), QCoreApplication::translate("QgsCompoundColorWidgetBase", "Color wheel", nullptr));
#endif // QT_CONFIG(tooltip)
        mSchemeToolButton->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mAddColorToSchemeButton->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Add current color", nullptr));
#endif // QT_CONFIG(tooltip)
        mAddColorToSchemeButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRemoveColorsFromSchemeButton->setToolTip(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Remove selected color", nullptr));
#endif // QT_CONFIG(tooltip)
        mRemoveColorsFromSchemeButton->setText(QString());
        mTabWidget->setTabText(mTabWidget->indexOf(tab), QString());
#if QT_CONFIG(tooltip)
        mTabWidget->setTabToolTip(mTabWidget->indexOf(tab), QCoreApplication::translate("QgsCompoundColorWidgetBase", "Color swatches", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Sample average radius", nullptr));
        mSpinBoxRadius->setSuffix(QCoreApplication::translate("QgsCompoundColorWidgetBase", " px", nullptr));
        mSampleButton->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Sample color", nullptr));
        label_4->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "<i>Press space to sample a color from under the mouse cursor</i>", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(tab_2), QString());
#if QT_CONFIG(tooltip)
        mTabWidget->setTabToolTip(mTabWidget->indexOf(tab_2), QCoreApplication::translate("QgsCompoundColorWidgetBase", "Color picker", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Color model", nullptr));
        mHueRadio->setText(QString());
        label_5->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "H", nullptr));
        mSaturationRadio->setText(QString());
        label_6->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "S", nullptr));
        mValueRadio->setText(QString());
        label_7->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "V", nullptr));
        mRedRadio->setText(QString());
        label_8->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "R", nullptr));
        mGreenRadio->setText(QString());
        label_9->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "G", nullptr));
        mBlueRadio->setText(QString());
        label_10->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "B", nullptr));
        mCyanRadio->setText(QString());
        label_18->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "C", nullptr));
        mMagentaRadio->setText(QString());
        label_19->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "M", nullptr));
        mYellowRadio->setText(QString());
        label_20->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Y", nullptr));
        mBlackRadio->setText(QString());
        label_21->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "K", nullptr));
        mAlphaLabel->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "Opacity", nullptr));
        label->setText(QCoreApplication::translate("QgsCompoundColorWidgetBase", "HTML notation", nullptr));
        (void)QgsCompoundColorWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsCompoundColorWidgetBase: public Ui_QgsCompoundColorWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOUNDCOLORWIDGET_H
