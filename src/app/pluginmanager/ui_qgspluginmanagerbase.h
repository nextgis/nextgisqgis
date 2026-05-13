/********************************************************************************
** Form generated from reading UI file 'qgspluginmanagerbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPLUGINMANAGERBASE_H
#define UI_QGSPLUGINMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilewidget.h"
#include "qgsfilterlineedit.h"
#include "qgsscrollarea.h"
#include "qgswebview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPluginManagerBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_5;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *vlayoutRightColumn;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *pagePlugins;
    QVBoxLayout *verticalLayout_8;
    QgsFilterLineEdit *leFilter;
    QSplitter *mPluginsDetailsSplitter;
    QWidget *layoutWidget_pluginList;
    QVBoxLayout *verticalLayout_4;
    QListView *vwPlugins;
    QWidget *layoutWidget_pluginDetails;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame;
    QVBoxLayout *verticalLayout_12;
    QgsWebView *wvDetails;
    QGridLayout *gridLayout;
    QSlider *voteSlider;
    QPushButton *voteSubmit;
    QLabel *voteLabel;
    QLabel *voteRating;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *buttonUpgradeAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonUninstall;
    QPushButton *buttonInstall;
    QPushButton *buttonInstallExperimental;
    QWidget *pageInstallFromZip;
    QVBoxLayout *verticalLayout_14;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelInstallFromZip;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QgsFileWidget *mZipFileWidget;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonInstallFromZip;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageSettings;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelNoPython;
    QFrame *frameSettings;
    QVBoxLayout *verticalLayout_3;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *ckbCheckUpdates;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblCheckUpdates;
    QgsCollapsibleGroupBox *ckbExperimental;
    QVBoxLayout *verticalLayout_9;
    QLabel *lblExperimental;
    QgsCollapsibleGroupBox *ckbDeprecated;
    QVBoxLayout *verticalLayout_11;
    QLabel *lblDeprecated;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_13;
    QTreeWidget *treeRepositories;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonRefreshRepos;
    QSpacerItem *spacer_3;
    QPushButton *buttonAddRep;
    QPushButton *buttonEditRep;
    QPushButton *buttonDeleteRep;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPluginManagerBase)
    {
        if (QgsPluginManagerBase->objectName().isEmpty())
            QgsPluginManagerBase->setObjectName(QString::fromUtf8("QgsPluginManagerBase"));
        QgsPluginManagerBase->resize(887, 741);
        QgsPluginManagerBase->setMinimumSize(QSize(790, 0));
        QgsPluginManagerBase->setModal(true);
        verticalLayout = new QVBoxLayout(QgsPluginManagerBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsPluginManagerBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setOpaqueResize(true);
        mOptionsSplitter->setHandleWidth(7);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsListFrame->sizePolicy().hasHeightForWidth());
        mOptionsListFrame->setSizePolicy(sizePolicy);
        mOptionsListFrame->setMaximumSize(QSize(400, 16777215));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugins.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin-installed.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        __qlistwidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin-upgrade.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        __qlistwidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        __qlistwidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin-incompatible.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        __qlistwidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin-install_from_zip.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon7);
        __qlistwidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsListWidget->sizePolicy().hasHeightForWidth());
        mOptionsListWidget->setSizePolicy(sizePolicy1);
        mOptionsListWidget->setMinimumSize(QSize(140, 0));
        mOptionsListWidget->setMaximumSize(QSize(200, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_5->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy2);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Plain);
        mOptionsFrame->setLineWidth(0);
        vlayoutRightColumn = new QVBoxLayout(mOptionsFrame);
        vlayoutRightColumn->setSpacing(6);
        vlayoutRightColumn->setContentsMargins(11, 11, 11, 11);
        vlayoutRightColumn->setObjectName(QString::fromUtf8("vlayoutRightColumn"));
        vlayoutRightColumn->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptionsStackedWidget->setLineWidth(0);
        pagePlugins = new QWidget();
        pagePlugins->setObjectName(QString::fromUtf8("pagePlugins"));
        verticalLayout_8 = new QVBoxLayout(pagePlugins);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(2, 0, 0, 0);
        leFilter = new QgsFilterLineEdit(pagePlugins);
        leFilter->setObjectName(QString::fromUtf8("leFilter"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leFilter->sizePolicy().hasHeightForWidth());
        leFilter->setSizePolicy(sizePolicy3);

        verticalLayout_8->addWidget(leFilter);

        mPluginsDetailsSplitter = new QSplitter(pagePlugins);
        mPluginsDetailsSplitter->setObjectName(QString::fromUtf8("mPluginsDetailsSplitter"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mPluginsDetailsSplitter->sizePolicy().hasHeightForWidth());
        mPluginsDetailsSplitter->setSizePolicy(sizePolicy4);
        mPluginsDetailsSplitter->setOrientation(Qt::Horizontal);
        mPluginsDetailsSplitter->setChildrenCollapsible(false);
        layoutWidget_pluginList = new QWidget(mPluginsDetailsSplitter);
        layoutWidget_pluginList->setObjectName(QString::fromUtf8("layoutWidget_pluginList"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(layoutWidget_pluginList->sizePolicy().hasHeightForWidth());
        layoutWidget_pluginList->setSizePolicy(sizePolicy5);
        verticalLayout_4 = new QVBoxLayout(layoutWidget_pluginList);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        vwPlugins = new QListView(layoutWidget_pluginList);
        vwPlugins->setObjectName(QString::fromUtf8("vwPlugins"));
        sizePolicy5.setHeightForWidth(vwPlugins->sizePolicy().hasHeightForWidth());
        vwPlugins->setSizePolicy(sizePolicy5);
        vwPlugins->setMinimumSize(QSize(200, 0));
        vwPlugins->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        vwPlugins->setProperty("showDropIndicator", QVariant(false));
        vwPlugins->setAlternatingRowColors(true);
        vwPlugins->setSelectionMode(QAbstractItemView::SingleSelection);
        vwPlugins->setSelectionBehavior(QAbstractItemView::SelectItems);
        vwPlugins->setResizeMode(QListView::Adjust);
        vwPlugins->setWordWrap(false);

        verticalLayout_4->addWidget(vwPlugins);

        mPluginsDetailsSplitter->addWidget(layoutWidget_pluginList);
        layoutWidget_pluginDetails = new QWidget(mPluginsDetailsSplitter);
        layoutWidget_pluginDetails->setObjectName(QString::fromUtf8("layoutWidget_pluginDetails"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(2);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(layoutWidget_pluginDetails->sizePolicy().hasHeightForWidth());
        layoutWidget_pluginDetails->setSizePolicy(sizePolicy6);
        verticalLayout_7 = new QVBoxLayout(layoutWidget_pluginDetails);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget_pluginDetails);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_12 = new QVBoxLayout(frame);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        wvDetails = new QgsWebView(frame);
        wvDetails->setObjectName(QString::fromUtf8("wvDetails"));
        sizePolicy1.setHeightForWidth(wvDetails->sizePolicy().hasHeightForWidth());
        wvDetails->setSizePolicy(sizePolicy1);
        wvDetails->setProperty("url", QVariant(QUrl(QString::fromUtf8("about:blank"))));

        verticalLayout_12->addWidget(wvDetails);


        verticalLayout_7->addWidget(frame);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        voteSlider = new QSlider(layoutWidget_pluginDetails);
        voteSlider->setObjectName(QString::fromUtf8("voteSlider"));
        voteSlider->setFocusPolicy(Qt::ClickFocus);
        voteSlider->setMinimum(1);
        voteSlider->setMaximum(5);
        voteSlider->setPageStep(1);
        voteSlider->setOrientation(Qt::Horizontal);
        voteSlider->setTickPosition(QSlider::TicksAbove);
        voteSlider->setTickInterval(1);

        gridLayout->addWidget(voteSlider, 1, 1, 1, 1);

        voteSubmit = new QPushButton(layoutWidget_pluginDetails);
        voteSubmit->setObjectName(QString::fromUtf8("voteSubmit"));
        voteSubmit->setFocusPolicy(Qt::ClickFocus);
        voteSubmit->setAutoDefault(false);

        gridLayout->addWidget(voteSubmit, 1, 2, 1, 1);

        voteLabel = new QLabel(layoutWidget_pluginDetails);
        voteLabel->setObjectName(QString::fromUtf8("voteLabel"));

        gridLayout->addWidget(voteLabel, 1, 0, 1, 1);

        voteRating = new QLabel(layoutWidget_pluginDetails);
        voteRating->setObjectName(QString::fromUtf8("voteRating"));
        voteRating->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(voteRating, 0, 0, 1, 3);


        verticalLayout_7->addLayout(gridLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        buttonUpgradeAll = new QPushButton(layoutWidget_pluginDetails);
        buttonUpgradeAll->setObjectName(QString::fromUtf8("buttonUpgradeAll"));
        buttonUpgradeAll->setEnabled(false);
        buttonUpgradeAll->setFocusPolicy(Qt::ClickFocus);
        buttonUpgradeAll->setAutoDefault(false);

        horizontalLayout_6->addWidget(buttonUpgradeAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        buttonUninstall = new QPushButton(layoutWidget_pluginDetails);
        buttonUninstall->setObjectName(QString::fromUtf8("buttonUninstall"));
        buttonUninstall->setEnabled(false);
        buttonUninstall->setFocusPolicy(Qt::ClickFocus);
        buttonUninstall->setAutoDefault(false);

        horizontalLayout_6->addWidget(buttonUninstall);

        buttonInstall = new QPushButton(layoutWidget_pluginDetails);
        buttonInstall->setObjectName(QString::fromUtf8("buttonInstall"));
        buttonInstall->setEnabled(false);
        buttonInstall->setMinimumSize(QSize(160, 0));
        buttonInstall->setAutoDefault(false);

        horizontalLayout_6->addWidget(buttonInstall);

        buttonInstallExperimental = new QPushButton(layoutWidget_pluginDetails);
        buttonInstallExperimental->setObjectName(QString::fromUtf8("buttonInstallExperimental"));
        buttonInstallExperimental->setEnabled(false);
        buttonInstallExperimental->setMinimumSize(QSize(160, 0));
        buttonInstallExperimental->setStyleSheet(QString::fromUtf8("background-color: rgba(238, 238, 10, 0.25)"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/pluginExperimental.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonInstallExperimental->setIcon(icon8);
        buttonInstallExperimental->setAutoDefault(false);

        horizontalLayout_6->addWidget(buttonInstallExperimental);


        verticalLayout_7->addLayout(horizontalLayout_6);

        mPluginsDetailsSplitter->addWidget(layoutWidget_pluginDetails);

        verticalLayout_8->addWidget(mPluginsDetailsSplitter);

        mOptionsStackedWidget->addWidget(pagePlugins);
        pageInstallFromZip = new QWidget();
        pageInstallFromZip->setObjectName(QString::fromUtf8("pageInstallFromZip"));
        verticalLayout_14 = new QVBoxLayout(pageInstallFromZip);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(2, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_2);

        labelInstallFromZip = new QLabel(pageInstallFromZip);
        labelInstallFromZip->setObjectName(QString::fromUtf8("labelInstallFromZip"));
        sizePolicy.setHeightForWidth(labelInstallFromZip->sizePolicy().hasHeightForWidth());
        labelInstallFromZip->setSizePolicy(sizePolicy);
        labelInstallFromZip->setTextFormat(Qt::AutoText);
        labelInstallFromZip->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelInstallFromZip->setWordWrap(true);
        labelInstallFromZip->setMargin(20);

        verticalLayout_14->addWidget(labelInstallFromZip);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(pageInstallFromZip);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        mZipFileWidget = new QgsFileWidget(pageInstallFromZip);
        mZipFileWidget->setObjectName(QString::fromUtf8("mZipFileWidget"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mZipFileWidget->sizePolicy().hasHeightForWidth());
        mZipFileWidget->setSizePolicy(sizePolicy7);

        horizontalLayout_2->addWidget(mZipFileWidget);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_14->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        buttonInstallFromZip = new QPushButton(pageInstallFromZip);
        buttonInstallFromZip->setObjectName(QString::fromUtf8("buttonInstallFromZip"));
        buttonInstallFromZip->setEnabled(false);
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(buttonInstallFromZip->sizePolicy().hasHeightForWidth());
        buttonInstallFromZip->setSizePolicy(sizePolicy8);
        buttonInstallFromZip->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(buttonInstallFromZip);

        horizontalSpacer_5 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_14->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_4);

        mOptionsStackedWidget->addWidget(pageInstallFromZip);
        pageSettings = new QWidget();
        pageSettings->setObjectName(QString::fromUtf8("pageSettings"));
        verticalLayout_2 = new QVBoxLayout(pageSettings);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 0, 0, 0);
        labelNoPython = new QLabel(pageSettings);
        labelNoPython->setObjectName(QString::fromUtf8("labelNoPython"));
        sizePolicy.setHeightForWidth(labelNoPython->sizePolicy().hasHeightForWidth());
        labelNoPython->setSizePolicy(sizePolicy);
        labelNoPython->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelNoPython->setWordWrap(true);
        labelNoPython->setMargin(20);
        labelNoPython->setIndent(0);

        verticalLayout_2->addWidget(labelNoPython);

        frameSettings = new QFrame(pageSettings);
        frameSettings->setObjectName(QString::fromUtf8("frameSettings"));
        sizePolicy4.setHeightForWidth(frameSettings->sizePolicy().hasHeightForWidth());
        frameSettings->setSizePolicy(sizePolicy4);
        frameSettings->setFrameShape(QFrame::NoFrame);
        frameSettings->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameSettings);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(frameSettings);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        sizePolicy7.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy7);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 720, 612));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        ckbCheckUpdates = new QGroupBox(scrollAreaWidgetContents);
        ckbCheckUpdates->setObjectName(QString::fromUtf8("ckbCheckUpdates"));
        ckbCheckUpdates->setEnabled(true);
        sizePolicy.setHeightForWidth(ckbCheckUpdates->sizePolicy().hasHeightForWidth());
        ckbCheckUpdates->setSizePolicy(sizePolicy);
        ckbCheckUpdates->setCheckable(true);
        ckbCheckUpdates->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(ckbCheckUpdates);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(9, -1, -1, -1);
        lblCheckUpdates = new QLabel(ckbCheckUpdates);
        lblCheckUpdates->setObjectName(QString::fromUtf8("lblCheckUpdates"));
        sizePolicy.setHeightForWidth(lblCheckUpdates->sizePolicy().hasHeightForWidth());
        lblCheckUpdates->setSizePolicy(sizePolicy);
        lblCheckUpdates->setMinimumSize(QSize(0, 0));
        lblCheckUpdates->setWordWrap(true);

        verticalLayout_6->addWidget(lblCheckUpdates);


        verticalLayout_10->addWidget(ckbCheckUpdates);

        ckbExperimental = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        ckbExperimental->setObjectName(QString::fromUtf8("ckbExperimental"));
        ckbExperimental->setCheckable(true);
        ckbExperimental->setChecked(false);
        ckbExperimental->setProperty("collapsed", QVariant(false));
        ckbExperimental->setProperty("saveCheckedState", QVariant(true));
        ckbExperimental->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_9 = new QVBoxLayout(ckbExperimental);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        lblExperimental = new QLabel(ckbExperimental);
        lblExperimental->setObjectName(QString::fromUtf8("lblExperimental"));
        sizePolicy.setHeightForWidth(lblExperimental->sizePolicy().hasHeightForWidth());
        lblExperimental->setSizePolicy(sizePolicy);
        lblExperimental->setMinimumSize(QSize(0, 0));
        lblExperimental->setTextFormat(Qt::RichText);
        lblExperimental->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblExperimental->setWordWrap(true);

        verticalLayout_9->addWidget(lblExperimental);


        verticalLayout_10->addWidget(ckbExperimental);

        ckbDeprecated = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        ckbDeprecated->setObjectName(QString::fromUtf8("ckbDeprecated"));
        sizePolicy.setHeightForWidth(ckbDeprecated->sizePolicy().hasHeightForWidth());
        ckbDeprecated->setSizePolicy(sizePolicy);
        ckbDeprecated->setCheckable(true);
        ckbDeprecated->setChecked(false);
        ckbDeprecated->setProperty("collapsed", QVariant(false));
        ckbDeprecated->setProperty("saveCheckedState", QVariant(true));
        ckbDeprecated->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_11 = new QVBoxLayout(ckbDeprecated);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        lblDeprecated = new QLabel(ckbDeprecated);
        lblDeprecated->setObjectName(QString::fromUtf8("lblDeprecated"));
        sizePolicy.setHeightForWidth(lblDeprecated->sizePolicy().hasHeightForWidth());
        lblDeprecated->setSizePolicy(sizePolicy);
        lblDeprecated->setMinimumSize(QSize(0, 0));
        lblDeprecated->setTextFormat(Qt::RichText);
        lblDeprecated->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDeprecated->setWordWrap(true);

        verticalLayout_11->addWidget(lblDeprecated);


        verticalLayout_10->addWidget(ckbDeprecated);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setFlat(true);
        verticalLayout_13 = new QVBoxLayout(groupBox);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        treeRepositories = new QTreeWidget(groupBox);
        treeRepositories->setObjectName(QString::fromUtf8("treeRepositories"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(treeRepositories->sizePolicy().hasHeightForWidth());
        treeRepositories->setSizePolicy(sizePolicy9);
        treeRepositories->setMinimumSize(QSize(0, 30));
        treeRepositories->setMaximumSize(QSize(16777215, 150));
        treeRepositories->setRootIsDecorated(false);
        treeRepositories->setItemsExpandable(false);

        verticalLayout_13->addWidget(treeRepositories);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonRefreshRepos = new QPushButton(groupBox);
        buttonRefreshRepos->setObjectName(QString::fromUtf8("buttonRefreshRepos"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionReload.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRefreshRepos->setIcon(icon9);

        horizontalLayout->addWidget(buttonRefreshRepos);

        spacer_3 = new QSpacerItem(316, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_3);

        buttonAddRep = new QPushButton(groupBox);
        buttonAddRep->setObjectName(QString::fromUtf8("buttonAddRep"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAddRep->setIcon(icon10);

        horizontalLayout->addWidget(buttonAddRep);

        buttonEditRep = new QPushButton(groupBox);
        buttonEditRep->setObjectName(QString::fromUtf8("buttonEditRep"));
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(buttonEditRep->sizePolicy().hasHeightForWidth());
        buttonEditRep->setSizePolicy(sizePolicy10);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonEditRep->setIcon(icon11);

        horizontalLayout->addWidget(buttonEditRep);

        buttonDeleteRep = new QPushButton(groupBox);
        buttonDeleteRep->setObjectName(QString::fromUtf8("buttonDeleteRep"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonDeleteRep->setIcon(icon12);

        horizontalLayout->addWidget(buttonDeleteRep);


        verticalLayout_13->addLayout(horizontalLayout);


        verticalLayout_10->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        verticalLayout_2->addWidget(frameSettings);

        mOptionsStackedWidget->addWidget(pageSettings);

        vlayoutRightColumn->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        buttonBox = new QDialogButtonBox(QgsPluginManagerBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mOptionsListWidget, leFilter);
        QWidget::setTabOrder(leFilter, vwPlugins);
        QWidget::setTabOrder(vwPlugins, wvDetails);
        QWidget::setTabOrder(wvDetails, buttonUpgradeAll);
        QWidget::setTabOrder(buttonUpgradeAll, buttonUninstall);
        QWidget::setTabOrder(buttonUninstall, buttonInstall);
        QWidget::setTabOrder(buttonInstall, buttonBox);

        retranslateUi(QgsPluginManagerBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPluginManagerBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPluginManagerBase, SLOT(reject()));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsPluginManagerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPluginManagerBase)
    {
        QgsPluginManagerBase->setWindowTitle(QCoreApplication::translate("QgsPluginManagerBase", "Plugin Manager", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QgsPluginManagerBase", "All", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QgsPluginManagerBase", "Installed", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem1->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Installed plugins", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QgsPluginManagerBase", "Not installed", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem2->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Not installed plugins available for download", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QgsPluginManagerBase", "Upgradeable", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem3->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Installed plugins with more recent version available for download", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QgsPluginManagerBase", "New", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem4->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Not installed plugins seen for the first time", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QgsPluginManagerBase", "Invalid", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem5->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Broken and incompatible installed plugins", nullptr));
#endif // QT_CONFIG(tooltip)
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QgsPluginManagerBase", "Install from ZIP", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("QgsPluginManagerBase", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        ___qlistwidgetitem7->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        voteSubmit->setText(QCoreApplication::translate("QgsPluginManagerBase", "Vote!", nullptr));
        voteLabel->setText(QCoreApplication::translate("QgsPluginManagerBase", "Your Vote", nullptr));
        voteRating->setText(QCoreApplication::translate("QgsPluginManagerBase", "Current vote", nullptr));
#if QT_CONFIG(tooltip)
        buttonUpgradeAll->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Upgrade all upgradeable plugins", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonUpgradeAll->setText(QCoreApplication::translate("QgsPluginManagerBase", "Upgrade All", nullptr));
#if QT_CONFIG(tooltip)
        buttonUninstall->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Uninstall the selected plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonUninstall->setText(QCoreApplication::translate("QgsPluginManagerBase", "Uninstall Plugin", nullptr));
#if QT_CONFIG(tooltip)
        buttonInstall->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Install, reinstall or upgrade the selected plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonInstall->setText(QCoreApplication::translate("QgsPluginManagerBase", "Reinstall Plugin", nullptr));
#if QT_CONFIG(tooltip)
        buttonInstallExperimental->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Install, reinstall or upgrade the experimental version of selected plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonInstallExperimental->setText(QCoreApplication::translate("QgsPluginManagerBase", "Reinstall Experimental", nullptr));
        labelInstallFromZip->setText(QCoreApplication::translate("QgsPluginManagerBase", "<html><head/><body><p>If you are provided with a zip package containing a plugin to install, please select the file below and click the <span style=\" font-style:italic;\">Install plugin</span> button.</p><p>Please note for most users this function is not applicable, as the preferable way is to install plugins from a repository.</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("QgsPluginManagerBase", "ZIP file", nullptr));
        buttonInstallFromZip->setText(QCoreApplication::translate("QgsPluginManagerBase", "Install Plugin", nullptr));
        labelNoPython->setText(QCoreApplication::translate("QgsPluginManagerBase", "The settings on this tab are only applicable for Python Plugins. No Python support detected, thus no settings available.", nullptr));
        ckbCheckUpdates->setTitle(QCoreApplication::translate("QgsPluginManagerBase", "Check for Updates on Startup", nullptr));
        lblCheckUpdates->setText(QCoreApplication::translate("QgsPluginManagerBase", "<html><head/><body><p><span style=\" font-weight:600;\">If this function is enabled, QGIS will inform you every 3 days when a plugin update is available.</span> Otherwise, fetching repositories will be performed during opening of the Plugin Manager window.</p></body></html>", nullptr));
        ckbExperimental->setTitle(QCoreApplication::translate("QgsPluginManagerBase", "Show also Experimental Plugins", nullptr));
        lblExperimental->setText(QCoreApplication::translate("QgsPluginManagerBase", "<html><head/><body><p><span style=\" font-weight:600;\">Experimental plugins are generally unsuitable for production use.</span> These plugins are in early stages of development, and should be considered 'incomplete' or 'proof of concept' tools. QGIS does not recommend installing these plugins unless you intend to use them for testing purposes.</p></body></html>", nullptr));
        ckbDeprecated->setTitle(QCoreApplication::translate("QgsPluginManagerBase", "Show also Deprecated Plugins", nullptr));
        lblDeprecated->setText(QCoreApplication::translate("QgsPluginManagerBase", "<html><head/><body><p><span style=\" font-weight:600;\">Deprecated plugins are generally unsuitable for production use.</span> These plugins are unmaintained, and should be considered 'obsolete' tools. QGIS does not recommend installing these plugins unless you still need it and there are no other alternatives available.</p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsPluginManagerBase", "Plugin Repositories", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeRepositories->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("QgsPluginManagerBase", "URL", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("QgsPluginManagerBase", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsPluginManagerBase", "Status", nullptr));
#if QT_CONFIG(tooltip)
        buttonRefreshRepos->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Reload repository contents\n"
"(useful when you uploaded a plugin there)", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonRefreshRepos->setText(QCoreApplication::translate("QgsPluginManagerBase", "Reload Repository", nullptr));
#if QT_CONFIG(tooltip)
        buttonAddRep->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Configure an additional plugin repository", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonAddRep->setText(QCoreApplication::translate("QgsPluginManagerBase", "Add\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        buttonEditRep->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Edit the selected repository", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonEditRep->setText(QCoreApplication::translate("QgsPluginManagerBase", "Edit\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        buttonDeleteRep->setToolTip(QCoreApplication::translate("QgsPluginManagerBase", "Remove the selected repository", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonDeleteRep->setText(QCoreApplication::translate("QgsPluginManagerBase", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPluginManagerBase: public Ui_QgsPluginManagerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPLUGINMANAGERBASE_H
