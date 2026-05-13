/********************************************************************************
** Form generated from reading UI file 'qgsannotationlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONLAYERPROPERTIESBASE_H
#define UI_QGSANNOTATIONLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgsmaplayercombobox.h>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgseffectstackpropertieswidget.h"
#include "qgsfilterlineedit.h"
#include "qgsopacitywidget.h"
#include "qgsprojectionselectionwidget.h"
#include "qgsscalerangewidget.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QgsFilterLineEdit *mSearchLineEdit;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_Information;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *mInformationTextBrowser;
    QWidget *mOptsPage_Source;
    QVBoxLayout *verticalLayout_9;
    QgsCollapsibleGroupBox *groupBox_60;
    QVBoxLayout *verticalLayout_260;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_6;
    QLineEdit *mLayerOrigNameLineEdit;
    QgsCollapsibleGroupBox *mCrsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_7;
    QFrame *line_2;
    QSpacerItem *verticalSpacer;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QgsScrollArea *scrollArea_19;
    QWidget *scrollAreaWidgetContents_19;
    QVBoxLayout *verticalLayout_6;
    QgsCollapsibleGroupBox *mScaleVisibilityGroupBox;
    QGridLayout *gridLayout_6;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QGroupBox *mLayerRenderingGroupBox;
    QGridLayout *gridLayout_2;
    QgsEffectStackCompactWidget *mEffectWidget;
    QLabel *lblTransparency;
    QgsOpacityWidget *mOpacityWidget;
    QLabel *lblBlend;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QLabel *layerLabel;
    QgsMapLayerComboBox *mLayerComboBox;
    QSpacerItem *verticalSpacer_2;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAnnotationLayerPropertiesBase)
    {
        if (QgsAnnotationLayerPropertiesBase->objectName().isEmpty())
            QgsAnnotationLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsAnnotationLayerPropertiesBase"));
        QgsAnnotationLayerPropertiesBase->resize(966, 691);
        QgsAnnotationLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsAnnotationLayerPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        mOptionsSplitter = new QSplitter(QgsAnnotationLayerPropertiesBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mSearchLineEdit = new QgsFilterLineEdit(mOptionsListFrame);
        mSearchLineEdit->setObjectName(QString::fromUtf8("mSearchLineEdit"));

        verticalLayout_2->addWidget(mSearchLineEdit);

        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/rendering.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptionsStackedWidget->setFrameShadow(QFrame::Plain);
        mOptsPage_Information = new QWidget();
        mOptsPage_Information->setObjectName(QString::fromUtf8("mOptsPage_Information"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_Information);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mInformationTextBrowser = new QTextBrowser(mOptsPage_Information);
        mInformationTextBrowser->setObjectName(QString::fromUtf8("mInformationTextBrowser"));

        verticalLayout_4->addWidget(mInformationTextBrowser);

        mOptionsStackedWidget->addWidget(mOptsPage_Information);
        mOptsPage_Source = new QWidget();
        mOptsPage_Source->setObjectName(QString::fromUtf8("mOptsPage_Source"));
        verticalLayout_9 = new QVBoxLayout(mOptsPage_Source);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        groupBox_60 = new QgsCollapsibleGroupBox(mOptsPage_Source);
        groupBox_60->setObjectName(QString::fromUtf8("groupBox_60"));
        verticalLayout_260 = new QVBoxLayout(groupBox_60);
        verticalLayout_260->setObjectName(QString::fromUtf8("verticalLayout_260"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_6 = new QLabel(groupBox_60);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_13->addWidget(label_6);

        mLayerOrigNameLineEdit = new QLineEdit(groupBox_60);
        mLayerOrigNameLineEdit->setObjectName(QString::fromUtf8("mLayerOrigNameLineEdit"));

        horizontalLayout_13->addWidget(mLayerOrigNameLineEdit);


        verticalLayout_260->addLayout(horizontalLayout_13);


        verticalLayout_9->addWidget(groupBox_60);

        mCrsGroupBox = new QgsCollapsibleGroupBox(mOptsPage_Source);
        mCrsGroupBox->setObjectName(QString::fromUtf8("mCrsGroupBox"));
        mCrsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mCrsGroupBox->setCheckable(false);
        mCrsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        verticalLayout_28 = new QVBoxLayout(mCrsGroupBox);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        mCrsSelector = new QgsProjectionSelectionWidget(mCrsGroupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_28->addWidget(mCrsSelector);

        label_7 = new QLabel(mCrsGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setTextFormat(Qt::RichText);
        label_7->setWordWrap(true);

        verticalLayout_28->addWidget(label_7);

        line_2 = new QFrame(mCrsGroupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_2);


        verticalLayout_9->addWidget(mCrsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        mOptionsStackedWidget->addWidget(mOptsPage_Source);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea_19 = new QgsScrollArea(page);
        scrollArea_19->setObjectName(QString::fromUtf8("scrollArea_19"));
        scrollArea_19->setFrameShape(QFrame::NoFrame);
        scrollArea_19->setWidgetResizable(true);
        scrollAreaWidgetContents_19 = new QWidget();
        scrollAreaWidgetContents_19->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_19"));
        scrollAreaWidgetContents_19->setGeometry(QRect(0, 0, 812, 641));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_19);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mScaleVisibilityGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_19);
        mScaleVisibilityGroupBox->setObjectName(QString::fromUtf8("mScaleVisibilityGroupBox"));
        mScaleVisibilityGroupBox->setCheckable(true);
        gridLayout_6 = new QGridLayout(mScaleVisibilityGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mScaleRangeWidget = new QgsScaleRangeWidget(mScaleVisibilityGroupBox);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));
        mScaleRangeWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_6->addWidget(mScaleRangeWidget, 0, 0, 1, 1);


        verticalLayout_6->addWidget(mScaleVisibilityGroupBox);

        mLayerRenderingGroupBox = new QGroupBox(scrollAreaWidgetContents_19);
        mLayerRenderingGroupBox->setObjectName(QString::fromUtf8("mLayerRenderingGroupBox"));
        mLayerRenderingGroupBox->setFlat(true);
        mLayerRenderingGroupBox->setCheckable(false);
        mLayerRenderingGroupBox->setProperty("collapsed", QVariant(true));
        mLayerRenderingGroupBox->setProperty("saveCollapsedState", QVariant(false));
        gridLayout_2 = new QGridLayout(mLayerRenderingGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 3, -1);
        mEffectWidget = new QgsEffectStackCompactWidget(mLayerRenderingGroupBox);
        mEffectWidget->setObjectName(QString::fromUtf8("mEffectWidget"));
        mEffectWidget->setMinimumSize(QSize(16, 16));
        mEffectWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mEffectWidget, 3, 0, 1, 4);

        lblTransparency = new QLabel(mLayerRenderingGroupBox);
        lblTransparency->setObjectName(QString::fromUtf8("lblTransparency"));

        gridLayout_2->addWidget(lblTransparency, 1, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mLayerRenderingGroupBox);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mOpacityWidget, 1, 1, 1, 3);

        lblBlend = new QLabel(mLayerRenderingGroupBox);
        lblBlend->setObjectName(QString::fromUtf8("lblBlend"));

        gridLayout_2->addWidget(lblBlend, 2, 0, 1, 1);

        mBlendModeComboBox = new QgsBlendModeComboBox(mLayerRenderingGroupBox);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mBlendModeComboBox->sizePolicy().hasHeightForWidth());
        mBlendModeComboBox->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(mBlendModeComboBox, 2, 1, 1, 3);

        layerLabel = new QLabel(mLayerRenderingGroupBox);
        layerLabel->setObjectName(QString::fromUtf8("layerLabel"));

        gridLayout_2->addWidget(layerLabel, 0, 0, 1, 1);

        mLayerComboBox = new QgsMapLayerComboBox(mLayerRenderingGroupBox);
        mLayerComboBox->setObjectName(QString::fromUtf8("mLayerComboBox"));

        gridLayout_2->addWidget(mLayerComboBox, 0, 1, 1, 3);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(3, 2);

        verticalLayout_6->addWidget(mLayerRenderingGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        scrollArea_19->setWidget(scrollAreaWidgetContents_19);

        verticalLayout_5->addWidget(scrollArea_19);

        mOptionsStackedWidget->addWidget(page);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsAnnotationLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy3);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mButtonBoxFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Apply|QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 2);


        verticalLayout->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mSearchLineEdit, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, mInformationTextBrowser);
        QWidget::setTabOrder(mInformationTextBrowser, mLayerOrigNameLineEdit);
        QWidget::setTabOrder(mLayerOrigNameLineEdit, mCrsGroupBox);
        QWidget::setTabOrder(mCrsGroupBox, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, scrollArea_19);
        QWidget::setTabOrder(scrollArea_19, mScaleVisibilityGroupBox);
        QWidget::setTabOrder(mScaleVisibilityGroupBox, mScaleRangeWidget);
        QWidget::setTabOrder(mScaleRangeWidget, mLayerComboBox);
        QWidget::setTabOrder(mLayerComboBox, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mEffectWidget);

        retranslateUi(QgsAnnotationLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QgsAnnotationLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAnnotationLayerPropertiesBase)
    {
        QgsAnnotationLayerPropertiesBase->setWindowTitle(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Annotation Layer Properties", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Information", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem->setToolTip(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Information", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Source", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem1->setToolTip(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Source", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Rendering", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem2->setToolTip(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Rendering", nullptr));
#endif // QT_CONFIG(tooltip)
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupBox_60->setTitle(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Settings", nullptr));
        label_6->setText(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Layer name", nullptr));
        mCrsGroupBox->setTitle(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Assigned Coordinate Reference System (CRS)", nullptr));
        label_7->setText(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "<html><head/><body><p><span style=\" font-weight:600;\">Changing this option does not modify the original data source or perform any reprojection of points. Rather, it can be used to override the layer's CRS within this project if it could not be detected or has been incorrectly detected.</span></p></body></html>", nullptr));
        mScaleVisibilityGroupBox->setTitle(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Scale Dependen&t Visibility", nullptr));
        mLayerRenderingGroupBox->setTitle(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Layer Rendering", nullptr));
        lblTransparency->setText(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Opacity", nullptr));
        lblBlend->setText(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Blending mode", nullptr));
        layerLabel->setText(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Linked layer", nullptr));
#if QT_CONFIG(tooltip)
        mLayerComboBox->setToolTip(QCoreApplication::translate("QgsAnnotationLayerPropertiesBase", "Allows the annotation layer to be associated with a map layer. If set, the annotations will only be visible when the layer is visible.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationLayerPropertiesBase: public Ui_QgsAnnotationLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONLAYERPROPERTIESBASE_H
