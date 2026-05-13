/********************************************************************************
** Form generated from reading UI file 'qgsmetadatawidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMETADATAWIDGET_H
#define UI_QGSMETADATAWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdatetimeedit.h"
#include "qgsdoublespinbox.h"
#include "qgsextentgroupbox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMetadataWidgetBase
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tabIdentificationDialog;
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_15;
    QLabel *mIdLabel;
    QLabel *label_27;
    QLineEdit *lineEditParentId;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditIdentifier;
    QPushButton *btnAutoSource;
    QLabel *label_2;
    QLineEdit *lineEditTitle;
    QLabel *label_7;
    QComboBox *comboType;
    QFrame *mAuthorFrame;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QgsDateTimeEdit *mCreationDateTimeEdit;
    QLineEdit *mLineEditAuthor;
    QLabel *label_11;
    QLabel *label_4;
    QComboBox *comboLanguage;
    QLabel *label_6;
    QTextEdit *textEditAbstract;
    QFrame *encodingFrame;
    QVBoxLayout *verticalLayout_13;
    QFrame *mEncodingFrame;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboEncoding;
    QPushButton *btnAutoEncoding;
    QWidget *tabCategoriesDialog;
    QVBoxLayout *verticalLayout_14;
    QLabel *mLabelCategories;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_23;
    QListView *listDefaultCategories;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnAddDefaultCategory;
    QPushButton *btnNewCategory;
    QPushButton *btnRemoveCategory;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_22;
    QListView *listCategories;
    QWidget *tabKeywordsDialog;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelKeywords;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnAddVocabulary;
    QPushButton *btnRemoveVocabulary;
    QTableWidget *tabKeywords;
    QWidget *tabAccessDialog;
    QVBoxLayout *verticalLayout_3;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *lineEditFees;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddLicence;
    QPushButton *btnRemoveLicence;
    QTableWidget *tabLicenses;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnAddRight;
    QPushButton *btnRemoveRight;
    QListView *listRights;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnAddConstraint;
    QPushButton *btnRemoveConstraint;
    QTableView *tabConstraints;
    QWidget *tabExtentDialog;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QgsCollapsibleGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblCurrentCrs;
    QPushButton *btnSetCrsFromLayer;
    QPushButton *btnSetCrsFromProvider;
    QLabel *lblCurrentCrsStatus;
    QgsExtentGroupBox *spatialExtentSelector;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_32;
    QgsDoubleSpinBox *spinBoxZMaximum;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_31;
    QgsDoubleSpinBox *spinBoxZMinimum;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_33;
    QgsDateTimeEdit *dateTimeFrom;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_34;
    QgsDateTimeEdit *dateTimeTo;
    QSpacerItem *verticalSpacer;
    QWidget *tabContactsDialog;
    QVBoxLayout *verticalLayout_10;
    QLabel *mLabelContact;
    QHBoxLayout *horizontalLayout_3;
    QgsScrollArea *panelDetails;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditContactPosition;
    QLineEdit *lineEditContactName;
    QLabel *label_15;
    QLabel *label_14;
    QLineEdit *lineEditContactOrganization;
    QLabel *label_10;
    QLineEdit *lineEditContactVoice;
    QLineEdit *lineEditContactFax;
    QLabel *label_20;
    QLabel *label_12;
    QComboBox *comboContactRole;
    QLineEdit *lineEditContactEmail;
    QLabel *label_19;
    QLabel *label_21;
    QTableWidget *tabAddresses;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btnAddAddress;
    QPushButton *btnRemoveAddress;
    QWidget *tabLinksDialog;
    QVBoxLayout *verticalLayout_5;
    QLabel *mLabelLinks;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAddLink;
    QPushButton *btnRemoveLink;
    QTableView *tabLinks;
    QWidget *tab;
    QVBoxLayout *verticalLayout_17;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QgsDateTimeEdit *mCreationDateTimeEdit2;
    QgsDateTimeEdit *mPublishedDateTimeEdit;
    QLabel *label_17;
    QgsDateTimeEdit *mRevisedDateTimeEdit;
    QLabel *label_25;
    QgsDateTimeEdit *mSupersededDateTimeEdit;
    QLabel *label_16;
    QLabel *label_30;
    QLabel *mLabelHistory;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnAddHistory;
    QPushButton *btnRemoveHistory;
    QListView *listHistory;
    QWidget *tabValidationDialog;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_28;
    QTextBrowser *resultsCheckMetadata;

    void setupUi(QWidget *QgsMetadataWidgetBase)
    {
        if (QgsMetadataWidgetBase->objectName().isEmpty())
            QgsMetadataWidgetBase->setObjectName(QString::fromUtf8("QgsMetadataWidgetBase"));
        QgsMetadataWidgetBase->resize(804, 668);
        QgsMetadataWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_4 = new QVBoxLayout(QgsMetadataWidgetBase);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(QgsMetadataWidgetBase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabIdentificationDialog = new QWidget();
        tabIdentificationDialog->setObjectName(QString::fromUtf8("tabIdentificationDialog"));
        verticalLayout = new QVBoxLayout(tabIdentificationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(tabIdentificationDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 786, 687));
        verticalLayout_15 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        mIdLabel = new QLabel(scrollAreaWidgetContents_2);
        mIdLabel->setObjectName(QString::fromUtf8("mIdLabel"));
        mIdLabel->setText(QString::fromUtf8("Label text set in qgsmetadatawidget.cpp"));
        mIdLabel->setWordWrap(true);

        verticalLayout_15->addWidget(mIdLabel);

        label_27 = new QLabel(scrollAreaWidgetContents_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_15->addWidget(label_27);

        lineEditParentId = new QLineEdit(scrollAreaWidgetContents_2);
        lineEditParentId->setObjectName(QString::fromUtf8("lineEditParentId"));

        verticalLayout_15->addWidget(lineEditParentId);

        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_15->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditIdentifier = new QLineEdit(scrollAreaWidgetContents_2);
        lineEditIdentifier->setObjectName(QString::fromUtf8("lineEditIdentifier"));

        horizontalLayout->addWidget(lineEditIdentifier);

        btnAutoSource = new QPushButton(scrollAreaWidgetContents_2);
        btnAutoSource->setObjectName(QString::fromUtf8("btnAutoSource"));

        horizontalLayout->addWidget(btnAutoSource);


        verticalLayout_15->addLayout(horizontalLayout);

        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_15->addWidget(label_2);

        lineEditTitle = new QLineEdit(scrollAreaWidgetContents_2);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditTitle->sizePolicy().hasHeightForWidth());
        lineEditTitle->setSizePolicy(sizePolicy);

        verticalLayout_15->addWidget(lineEditTitle);

        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_15->addWidget(label_7);

        comboType = new QComboBox(scrollAreaWidgetContents_2);
        comboType->setObjectName(QString::fromUtf8("comboType"));
        comboType->setEnabled(true);
        comboType->setEditable(true);

        verticalLayout_15->addWidget(comboType);

        mAuthorFrame = new QFrame(scrollAreaWidgetContents_2);
        mAuthorFrame->setObjectName(QString::fromUtf8("mAuthorFrame"));
        mAuthorFrame->setFrameShape(QFrame::NoFrame);
        mAuthorFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mAuthorFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(mAuthorFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 2, 0, 1, 1);

        mCreationDateTimeEdit = new QgsDateTimeEdit(mAuthorFrame);
        mCreationDateTimeEdit->setObjectName(QString::fromUtf8("mCreationDateTimeEdit"));
        mCreationDateTimeEdit->setCalendarPopup(true);

        gridLayout->addWidget(mCreationDateTimeEdit, 2, 1, 1, 1);

        mLineEditAuthor = new QLineEdit(mAuthorFrame);
        mLineEditAuthor->setObjectName(QString::fromUtf8("mLineEditAuthor"));
        sizePolicy.setHeightForWidth(mLineEditAuthor->sizePolicy().hasHeightForWidth());
        mLineEditAuthor->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLineEditAuthor, 1, 0, 1, 2);

        label_11 = new QLabel(mAuthorFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 0, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_15->addWidget(mAuthorFrame);

        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_15->addWidget(label_4);

        comboLanguage = new QComboBox(scrollAreaWidgetContents_2);
        comboLanguage->setObjectName(QString::fromUtf8("comboLanguage"));
        comboLanguage->setEnabled(true);
        comboLanguage->setEditable(true);

        verticalLayout_15->addWidget(comboLanguage);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_15->addWidget(label_6);

        textEditAbstract = new QTextEdit(scrollAreaWidgetContents_2);
        textEditAbstract->setObjectName(QString::fromUtf8("textEditAbstract"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEditAbstract->sizePolicy().hasHeightForWidth());
        textEditAbstract->setSizePolicy(sizePolicy1);

        verticalLayout_15->addWidget(textEditAbstract);

        encodingFrame = new QFrame(scrollAreaWidgetContents_2);
        encodingFrame->setObjectName(QString::fromUtf8("encodingFrame"));
        encodingFrame->setEnabled(true);
        encodingFrame->setFrameShape(QFrame::NoFrame);
        encodingFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(encodingFrame);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        mEncodingFrame = new QFrame(encodingFrame);
        mEncodingFrame->setObjectName(QString::fromUtf8("mEncodingFrame"));
        mEncodingFrame->setFrameShape(QFrame::NoFrame);
        mEncodingFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(mEncodingFrame);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(mEncodingFrame);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_18->addWidget(label_24);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        comboEncoding = new QComboBox(mEncodingFrame);
        comboEncoding->setObjectName(QString::fromUtf8("comboEncoding"));
        sizePolicy.setHeightForWidth(comboEncoding->sizePolicy().hasHeightForWidth());
        comboEncoding->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(comboEncoding);

        btnAutoEncoding = new QPushButton(mEncodingFrame);
        btnAutoEncoding->setObjectName(QString::fromUtf8("btnAutoEncoding"));

        horizontalLayout_8->addWidget(btnAutoEncoding);


        verticalLayout_18->addLayout(horizontalLayout_8);


        verticalLayout_13->addWidget(mEncodingFrame);


        verticalLayout_15->addWidget(encodingFrame);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        tabWidget->addTab(tabIdentificationDialog, QString());
        tabCategoriesDialog = new QWidget();
        tabCategoriesDialog->setObjectName(QString::fromUtf8("tabCategoriesDialog"));
        verticalLayout_14 = new QVBoxLayout(tabCategoriesDialog);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        mLabelCategories = new QLabel(tabCategoriesDialog);
        mLabelCategories->setObjectName(QString::fromUtf8("mLabelCategories"));
        mLabelCategories->setText(QString::fromUtf8("Label text set in qgsmetadatawidget.cpp"));

        verticalLayout_14->addWidget(mLabelCategories);

        frame = new QFrame(tabCategoriesDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_23 = new QLabel(frame);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_11->addWidget(label_23);

        listDefaultCategories = new QListView(frame);
        listDefaultCategories->setObjectName(QString::fromUtf8("listDefaultCategories"));
        listDefaultCategories->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listDefaultCategories->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_11->addWidget(listDefaultCategories);


        horizontalLayout_4->addLayout(verticalLayout_11);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        btnAddDefaultCategory = new QPushButton(frame);
        btnAddDefaultCategory->setObjectName(QString::fromUtf8("btnAddDefaultCategory"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnAddDefaultCategory->sizePolicy().hasHeightForWidth());
        btnAddDefaultCategory->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddDefaultCategory->setIcon(icon);

        verticalLayout_6->addWidget(btnAddDefaultCategory);

        btnNewCategory = new QPushButton(frame);
        btnNewCategory->setObjectName(QString::fromUtf8("btnNewCategory"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnNewCategory->setIcon(icon1);

        verticalLayout_6->addWidget(btnNewCategory);

        btnRemoveCategory = new QPushButton(frame);
        btnRemoveCategory->setObjectName(QString::fromUtf8("btnRemoveCategory"));
        sizePolicy2.setHeightForWidth(btnRemoveCategory->sizePolicy().hasHeightForWidth());
        btnRemoveCategory->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveCategory->setIcon(icon2);

        verticalLayout_6->addWidget(btnRemoveCategory);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_22 = new QLabel(frame);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_12->addWidget(label_22);

        listCategories = new QListView(frame);
        listCategories->setObjectName(QString::fromUtf8("listCategories"));
        listCategories->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listCategories->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_12->addWidget(listCategories);


        horizontalLayout_4->addLayout(verticalLayout_12);


        verticalLayout_14->addWidget(frame);

        tabWidget->addTab(tabCategoriesDialog, QString());
        tabKeywordsDialog = new QWidget();
        tabKeywordsDialog->setObjectName(QString::fromUtf8("tabKeywordsDialog"));
        verticalLayout_2 = new QVBoxLayout(tabKeywordsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelKeywords = new QLabel(tabKeywordsDialog);
        labelKeywords->setObjectName(QString::fromUtf8("labelKeywords"));
        labelKeywords->setText(QString::fromUtf8("<html><head/><body><p>Label text set in qgsmetadatawidget.cpp</p></body></html>"));
        labelKeywords->setWordWrap(true);
        labelKeywords->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(labelKeywords);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        btnAddVocabulary = new QPushButton(tabKeywordsDialog);
        btnAddVocabulary->setObjectName(QString::fromUtf8("btnAddVocabulary"));
        btnAddVocabulary->setIcon(icon1);
        btnAddVocabulary->setAutoDefault(false);

        horizontalLayout_5->addWidget(btnAddVocabulary);

        btnRemoveVocabulary = new QPushButton(tabKeywordsDialog);
        btnRemoveVocabulary->setObjectName(QString::fromUtf8("btnRemoveVocabulary"));
        btnRemoveVocabulary->setIcon(icon2);
        btnRemoveVocabulary->setAutoDefault(false);

        horizontalLayout_5->addWidget(btnRemoveVocabulary);


        verticalLayout_2->addLayout(horizontalLayout_5);

        tabKeywords = new QTableWidget(tabKeywordsDialog);
        if (tabKeywords->columnCount() < 2)
            tabKeywords->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabKeywords->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabKeywords->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tabKeywords->setObjectName(QString::fromUtf8("tabKeywords"));
        tabKeywords->setAlternatingRowColors(true);
        tabKeywords->setSelectionMode(QAbstractItemView::SingleSelection);
        tabKeywords->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabKeywords->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tabKeywords);

        tabWidget->addTab(tabKeywordsDialog, QString());
        tabAccessDialog = new QWidget();
        tabAccessDialog->setObjectName(QString::fromUtf8("tabAccessDialog"));
        verticalLayout_3 = new QVBoxLayout(tabAccessDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(tabAccessDialog);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 800, 636));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_5 = new QLabel(scrollAreaWidgetContents_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_16->addWidget(label_5);

        label = new QLabel(scrollAreaWidgetContents_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_16->addWidget(label);

        lineEditFees = new QLineEdit(scrollAreaWidgetContents_3);
        lineEditFees->setObjectName(QString::fromUtf8("lineEditFees"));

        verticalLayout_16->addWidget(lineEditFees);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(scrollAreaWidgetContents_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        btnAddLicence = new QPushButton(scrollAreaWidgetContents_3);
        btnAddLicence->setObjectName(QString::fromUtf8("btnAddLicence"));
        btnAddLicence->setIcon(icon1);

        horizontalLayout_6->addWidget(btnAddLicence);

        btnRemoveLicence = new QPushButton(scrollAreaWidgetContents_3);
        btnRemoveLicence->setObjectName(QString::fromUtf8("btnRemoveLicence"));
        btnRemoveLicence->setIcon(icon2);

        horizontalLayout_6->addWidget(btnRemoveLicence);


        verticalLayout_16->addLayout(horizontalLayout_6);

        tabLicenses = new QTableWidget(scrollAreaWidgetContents_3);
        if (tabLicenses->columnCount() < 1)
            tabLicenses->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabLicenses->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        tabLicenses->setObjectName(QString::fromUtf8("tabLicenses"));
        tabLicenses->setSelectionMode(QAbstractItemView::SingleSelection);
        tabLicenses->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabLicenses->horizontalHeader()->setVisible(false);
        tabLicenses->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_16->addWidget(tabLicenses);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_26 = new QLabel(scrollAreaWidgetContents_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_9->addWidget(label_26);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        btnAddRight = new QPushButton(scrollAreaWidgetContents_3);
        btnAddRight->setObjectName(QString::fromUtf8("btnAddRight"));
        btnAddRight->setIcon(icon1);

        horizontalLayout_9->addWidget(btnAddRight);

        btnRemoveRight = new QPushButton(scrollAreaWidgetContents_3);
        btnRemoveRight->setObjectName(QString::fromUtf8("btnRemoveRight"));
        btnRemoveRight->setIcon(icon2);

        horizontalLayout_9->addWidget(btnRemoveRight);


        verticalLayout_16->addLayout(horizontalLayout_9);

        listRights = new QListView(scrollAreaWidgetContents_3);
        listRights->setObjectName(QString::fromUtf8("listRights"));

        verticalLayout_16->addWidget(listRights);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_29 = new QLabel(scrollAreaWidgetContents_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_11->addWidget(label_29);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);

        btnAddConstraint = new QPushButton(scrollAreaWidgetContents_3);
        btnAddConstraint->setObjectName(QString::fromUtf8("btnAddConstraint"));
        btnAddConstraint->setIcon(icon1);

        horizontalLayout_11->addWidget(btnAddConstraint);

        btnRemoveConstraint = new QPushButton(scrollAreaWidgetContents_3);
        btnRemoveConstraint->setObjectName(QString::fromUtf8("btnRemoveConstraint"));
        btnRemoveConstraint->setIcon(icon2);

        horizontalLayout_11->addWidget(btnRemoveConstraint);


        verticalLayout_16->addLayout(horizontalLayout_11);

        tabConstraints = new QTableView(scrollAreaWidgetContents_3);
        tabConstraints->setObjectName(QString::fromUtf8("tabConstraints"));
        tabConstraints->setSelectionMode(QAbstractItemView::SingleSelection);
        tabConstraints->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabConstraints->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_16->addWidget(tabConstraints);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollArea_2);

        tabWidget->addTab(tabAccessDialog, QString());
        tabExtentDialog = new QWidget();
        tabExtentDialog->setObjectName(QString::fromUtf8("tabExtentDialog"));
        verticalLayout_9 = new QVBoxLayout(tabExtentDialog);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_9 = new QLabel(tabExtentDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_9->addWidget(label_9);

        groupBox = new QgsCollapsibleGroupBox(tabExtentDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lblCurrentCrs = new QLabel(groupBox);
        lblCurrentCrs->setObjectName(QString::fromUtf8("lblCurrentCrs"));
        lblCurrentCrs->setText(QString::fromUtf8("CRS label set in cpp code"));

        horizontalLayout_7->addWidget(lblCurrentCrs);

        btnSetCrsFromLayer = new QPushButton(groupBox);
        btnSetCrsFromLayer->setObjectName(QString::fromUtf8("btnSetCrsFromLayer"));
        sizePolicy2.setHeightForWidth(btnSetCrsFromLayer->sizePolicy().hasHeightForWidth());
        btnSetCrsFromLayer->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(btnSetCrsFromLayer);

        btnSetCrsFromProvider = new QPushButton(groupBox);
        btnSetCrsFromProvider->setObjectName(QString::fromUtf8("btnSetCrsFromProvider"));
        sizePolicy2.setHeightForWidth(btnSetCrsFromProvider->sizePolicy().hasHeightForWidth());
        btnSetCrsFromProvider->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(btnSetCrsFromProvider);


        verticalLayout_8->addLayout(horizontalLayout_7);

        lblCurrentCrsStatus = new QLabel(groupBox);
        lblCurrentCrsStatus->setObjectName(QString::fromUtf8("lblCurrentCrsStatus"));
        lblCurrentCrsStatus->setText(QString::fromUtf8("CRS status set in cpp code"));

        verticalLayout_8->addWidget(lblCurrentCrsStatus);


        verticalLayout_9->addWidget(groupBox);

        spatialExtentSelector = new QgsExtentGroupBox(tabExtentDialog);
        spatialExtentSelector->setObjectName(QString::fromUtf8("spatialExtentSelector"));

        verticalLayout_9->addWidget(spatialExtentSelector);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_32 = new QLabel(tabExtentDialog);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_14->addWidget(label_32);

        spinBoxZMaximum = new QgsDoubleSpinBox(tabExtentDialog);
        spinBoxZMaximum->setObjectName(QString::fromUtf8("spinBoxZMaximum"));
        spinBoxZMaximum->setMinimum(-9999999999.000000000000000);
        spinBoxZMaximum->setMaximum(9999999999.000000000000000);

        horizontalLayout_14->addWidget(spinBoxZMaximum);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_31 = new QLabel(tabExtentDialog);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_13->addWidget(label_31);

        spinBoxZMinimum = new QgsDoubleSpinBox(tabExtentDialog);
        spinBoxZMinimum->setObjectName(QString::fromUtf8("spinBoxZMinimum"));
        spinBoxZMinimum->setMinimum(-9999999999.000000000000000);
        spinBoxZMinimum->setMaximum(9999999999.000000000000000);

        horizontalLayout_13->addWidget(spinBoxZMinimum);


        verticalLayout_9->addLayout(horizontalLayout_13);

        label_35 = new QLabel(tabExtentDialog);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        verticalLayout_9->addWidget(label_35);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_33 = new QLabel(tabExtentDialog);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_15->addWidget(label_33);

        dateTimeFrom = new QgsDateTimeEdit(tabExtentDialog);
        dateTimeFrom->setObjectName(QString::fromUtf8("dateTimeFrom"));

        horizontalLayout_15->addWidget(dateTimeFrom);


        verticalLayout_9->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_34 = new QLabel(tabExtentDialog);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_16->addWidget(label_34);

        dateTimeTo = new QgsDateTimeEdit(tabExtentDialog);
        dateTimeTo->setObjectName(QString::fromUtf8("dateTimeTo"));

        horizontalLayout_16->addWidget(dateTimeTo);


        verticalLayout_9->addLayout(horizontalLayout_16);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        tabWidget->addTab(tabExtentDialog, QString());
        tabContactsDialog = new QWidget();
        tabContactsDialog->setObjectName(QString::fromUtf8("tabContactsDialog"));
        verticalLayout_10 = new QVBoxLayout(tabContactsDialog);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        mLabelContact = new QLabel(tabContactsDialog);
        mLabelContact->setObjectName(QString::fromUtf8("mLabelContact"));
        mLabelContact->setText(QString::fromUtf8("Label text set in qgsmetadatawidget.cpp"));

        verticalLayout_10->addWidget(mLabelContact);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        panelDetails = new QgsScrollArea(tabContactsDialog);
        panelDetails->setObjectName(QString::fromUtf8("panelDetails"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(panelDetails->sizePolicy().hasHeightForWidth());
        panelDetails->setSizePolicy(sizePolicy3);
        panelDetails->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 778, 590));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEditContactPosition = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactPosition->setObjectName(QString::fromUtf8("lineEditContactPosition"));

        gridLayout_2->addWidget(lineEditContactPosition, 3, 2, 1, 2);

        lineEditContactName = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactName->setObjectName(QString::fromUtf8("lineEditContactName"));

        gridLayout_2->addWidget(lineEditContactName, 0, 2, 1, 2);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 1, 0, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        lineEditContactOrganization = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactOrganization->setObjectName(QString::fromUtf8("lineEditContactOrganization"));

        gridLayout_2->addWidget(lineEditContactOrganization, 2, 2, 1, 2);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        lineEditContactVoice = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactVoice->setObjectName(QString::fromUtf8("lineEditContactVoice"));

        gridLayout_2->addWidget(lineEditContactVoice, 5, 2, 1, 2);

        lineEditContactFax = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactFax->setObjectName(QString::fromUtf8("lineEditContactFax"));

        gridLayout_2->addWidget(lineEditContactFax, 6, 2, 1, 2);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 6, 0, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        comboContactRole = new QComboBox(scrollAreaWidgetContents);
        comboContactRole->addItem(QString());
        comboContactRole->addItem(QString::fromUtf8("custodian"));
        comboContactRole->addItem(QString::fromUtf8("distributor"));
        comboContactRole->addItem(QString::fromUtf8("owner"));
        comboContactRole->setObjectName(QString::fromUtf8("comboContactRole"));
        comboContactRole->setEditable(true);

        gridLayout_2->addWidget(comboContactRole, 1, 2, 1, 2);

        lineEditContactEmail = new QLineEdit(scrollAreaWidgetContents);
        lineEditContactEmail->setObjectName(QString::fromUtf8("lineEditContactEmail"));

        gridLayout_2->addWidget(lineEditContactEmail, 4, 2, 1, 2);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 5, 0, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 7, 0, 1, 1);

        tabAddresses = new QTableWidget(scrollAreaWidgetContents);
        if (tabAddresses->columnCount() < 6)
            tabAddresses->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabAddresses->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        tabAddresses->setObjectName(QString::fromUtf8("tabAddresses"));
        tabAddresses->setSelectionMode(QAbstractItemView::SingleSelection);
        tabAddresses->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabAddresses->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tabAddresses, 8, 0, 1, 4);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        btnAddAddress = new QPushButton(scrollAreaWidgetContents);
        btnAddAddress->setObjectName(QString::fromUtf8("btnAddAddress"));
        btnAddAddress->setIcon(icon1);

        horizontalLayout_10->addWidget(btnAddAddress);

        btnRemoveAddress = new QPushButton(scrollAreaWidgetContents);
        btnRemoveAddress->setObjectName(QString::fromUtf8("btnRemoveAddress"));
        btnRemoveAddress->setIcon(icon2);

        horizontalLayout_10->addWidget(btnRemoveAddress);


        gridLayout_2->addLayout(horizontalLayout_10, 7, 3, 1, 1);

        panelDetails->setWidget(scrollAreaWidgetContents);

        horizontalLayout_3->addWidget(panelDetails);


        verticalLayout_10->addLayout(horizontalLayout_3);

        tabWidget->addTab(tabContactsDialog, QString());
        tabLinksDialog = new QWidget();
        tabLinksDialog->setObjectName(QString::fromUtf8("tabLinksDialog"));
        verticalLayout_5 = new QVBoxLayout(tabLinksDialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mLabelLinks = new QLabel(tabLinksDialog);
        mLabelLinks->setObjectName(QString::fromUtf8("mLabelLinks"));
        mLabelLinks->setText(QString::fromUtf8("Label text set in qgsmetadatawidget.cpp"));

        verticalLayout_5->addWidget(mLabelLinks);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnAddLink = new QPushButton(tabLinksDialog);
        btnAddLink->setObjectName(QString::fromUtf8("btnAddLink"));
        btnAddLink->setIcon(icon1);

        horizontalLayout_2->addWidget(btnAddLink);

        btnRemoveLink = new QPushButton(tabLinksDialog);
        btnRemoveLink->setObjectName(QString::fromUtf8("btnRemoveLink"));
        btnRemoveLink->setIcon(icon2);

        horizontalLayout_2->addWidget(btnRemoveLink);


        verticalLayout_5->addLayout(horizontalLayout_2);

        tabLinks = new QTableView(tabLinksDialog);
        tabLinks->setObjectName(QString::fromUtf8("tabLinks"));
        tabLinks->setAlternatingRowColors(true);
        tabLinks->setSelectionMode(QAbstractItemView::SingleSelection);
        tabLinks->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabLinks->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_5->addWidget(tabLinks);

        tabWidget->addTab(tabLinksDialog, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_17 = new QVBoxLayout(tab);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        groupBox_2 = new QgsCollapsibleGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mCreationDateTimeEdit2 = new QgsDateTimeEdit(groupBox_2);
        mCreationDateTimeEdit2->setObjectName(QString::fromUtf8("mCreationDateTimeEdit2"));
        mCreationDateTimeEdit2->setCalendarPopup(true);

        gridLayout_3->addWidget(mCreationDateTimeEdit2, 0, 1, 1, 1);

        mPublishedDateTimeEdit = new QgsDateTimeEdit(groupBox_2);
        mPublishedDateTimeEdit->setObjectName(QString::fromUtf8("mPublishedDateTimeEdit"));
        mPublishedDateTimeEdit->setCalendarPopup(true);

        gridLayout_3->addWidget(mPublishedDateTimeEdit, 1, 1, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 2, 0, 1, 1);

        mRevisedDateTimeEdit = new QgsDateTimeEdit(groupBox_2);
        mRevisedDateTimeEdit->setObjectName(QString::fromUtf8("mRevisedDateTimeEdit"));
        mRevisedDateTimeEdit->setCalendarPopup(true);

        gridLayout_3->addWidget(mRevisedDateTimeEdit, 2, 1, 1, 1);

        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_3->addWidget(label_25, 1, 0, 1, 1);

        mSupersededDateTimeEdit = new QgsDateTimeEdit(groupBox_2);
        mSupersededDateTimeEdit->setObjectName(QString::fromUtf8("mSupersededDateTimeEdit"));
        mSupersededDateTimeEdit->setCalendarPopup(true);

        gridLayout_3->addWidget(mSupersededDateTimeEdit, 3, 1, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 0, 0, 1, 1);

        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_3->addWidget(label_30, 3, 0, 1, 1);


        verticalLayout_17->addWidget(groupBox_2);

        mLabelHistory = new QLabel(tab);
        mLabelHistory->setObjectName(QString::fromUtf8("mLabelHistory"));
        mLabelHistory->setText(QString::fromUtf8("Label text set in qgsmetadatawidget.cpp"));
        mLabelHistory->setWordWrap(true);

        verticalLayout_17->addWidget(mLabelHistory);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        btnAddHistory = new QPushButton(tab);
        btnAddHistory->setObjectName(QString::fromUtf8("btnAddHistory"));
        btnAddHistory->setIcon(icon1);
        btnAddHistory->setAutoDefault(false);

        horizontalLayout_12->addWidget(btnAddHistory);

        btnRemoveHistory = new QPushButton(tab);
        btnRemoveHistory->setObjectName(QString::fromUtf8("btnRemoveHistory"));
        btnRemoveHistory->setIcon(icon2);
        btnRemoveHistory->setAutoDefault(false);

        horizontalLayout_12->addWidget(btnRemoveHistory);


        verticalLayout_17->addLayout(horizontalLayout_12);

        listHistory = new QListView(tab);
        listHistory->setObjectName(QString::fromUtf8("listHistory"));

        verticalLayout_17->addWidget(listHistory);

        tabWidget->addTab(tab, QString());
        tabValidationDialog = new QWidget();
        tabValidationDialog->setObjectName(QString::fromUtf8("tabValidationDialog"));
        verticalLayout_7 = new QVBoxLayout(tabValidationDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_28 = new QLabel(tabValidationDialog);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_7->addWidget(label_28);

        resultsCheckMetadata = new QTextBrowser(tabValidationDialog);
        resultsCheckMetadata->setObjectName(QString::fromUtf8("resultsCheckMetadata"));

        verticalLayout_7->addWidget(resultsCheckMetadata);

        tabWidget->addTab(tabValidationDialog, QString());

        verticalLayout_4->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, lineEditParentId);
        QWidget::setTabOrder(lineEditParentId, lineEditIdentifier);
        QWidget::setTabOrder(lineEditIdentifier, btnAutoSource);
        QWidget::setTabOrder(btnAutoSource, lineEditTitle);
        QWidget::setTabOrder(lineEditTitle, comboType);
        QWidget::setTabOrder(comboType, mLineEditAuthor);
        QWidget::setTabOrder(mLineEditAuthor, mCreationDateTimeEdit);
        QWidget::setTabOrder(mCreationDateTimeEdit, comboLanguage);
        QWidget::setTabOrder(comboLanguage, textEditAbstract);
        QWidget::setTabOrder(textEditAbstract, comboEncoding);
        QWidget::setTabOrder(comboEncoding, btnAutoEncoding);
        QWidget::setTabOrder(btnAutoEncoding, listDefaultCategories);
        QWidget::setTabOrder(listDefaultCategories, btnAddDefaultCategory);
        QWidget::setTabOrder(btnAddDefaultCategory, btnNewCategory);
        QWidget::setTabOrder(btnNewCategory, btnRemoveCategory);
        QWidget::setTabOrder(btnRemoveCategory, listCategories);
        QWidget::setTabOrder(listCategories, btnAddVocabulary);
        QWidget::setTabOrder(btnAddVocabulary, btnRemoveVocabulary);
        QWidget::setTabOrder(btnRemoveVocabulary, tabKeywords);
        QWidget::setTabOrder(tabKeywords, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, lineEditFees);
        QWidget::setTabOrder(lineEditFees, btnAddLicence);
        QWidget::setTabOrder(btnAddLicence, btnRemoveLicence);
        QWidget::setTabOrder(btnRemoveLicence, tabLicenses);
        QWidget::setTabOrder(tabLicenses, btnAddRight);
        QWidget::setTabOrder(btnAddRight, btnRemoveRight);
        QWidget::setTabOrder(btnRemoveRight, listRights);
        QWidget::setTabOrder(listRights, btnAddConstraint);
        QWidget::setTabOrder(btnAddConstraint, btnRemoveConstraint);
        QWidget::setTabOrder(btnRemoveConstraint, tabConstraints);
        QWidget::setTabOrder(tabConstraints, btnSetCrsFromLayer);
        QWidget::setTabOrder(btnSetCrsFromLayer, btnSetCrsFromProvider);
        QWidget::setTabOrder(btnSetCrsFromProvider, spinBoxZMaximum);
        QWidget::setTabOrder(spinBoxZMaximum, spinBoxZMinimum);
        QWidget::setTabOrder(spinBoxZMinimum, dateTimeFrom);
        QWidget::setTabOrder(dateTimeFrom, dateTimeTo);
        QWidget::setTabOrder(dateTimeTo, panelDetails);
        QWidget::setTabOrder(panelDetails, lineEditContactName);
        QWidget::setTabOrder(lineEditContactName, comboContactRole);
        QWidget::setTabOrder(comboContactRole, lineEditContactOrganization);
        QWidget::setTabOrder(lineEditContactOrganization, lineEditContactPosition);
        QWidget::setTabOrder(lineEditContactPosition, lineEditContactEmail);
        QWidget::setTabOrder(lineEditContactEmail, lineEditContactVoice);
        QWidget::setTabOrder(lineEditContactVoice, lineEditContactFax);
        QWidget::setTabOrder(lineEditContactFax, btnAddAddress);
        QWidget::setTabOrder(btnAddAddress, btnRemoveAddress);
        QWidget::setTabOrder(btnRemoveAddress, tabAddresses);
        QWidget::setTabOrder(tabAddresses, btnAddLink);
        QWidget::setTabOrder(btnAddLink, btnRemoveLink);
        QWidget::setTabOrder(btnRemoveLink, tabLinks);
        QWidget::setTabOrder(tabLinks, mCreationDateTimeEdit2);
        QWidget::setTabOrder(mCreationDateTimeEdit2, mPublishedDateTimeEdit);
        QWidget::setTabOrder(mPublishedDateTimeEdit, mRevisedDateTimeEdit);
        QWidget::setTabOrder(mRevisedDateTimeEdit, mSupersededDateTimeEdit);
        QWidget::setTabOrder(mSupersededDateTimeEdit, btnAddHistory);
        QWidget::setTabOrder(btnAddHistory, btnRemoveHistory);
        QWidget::setTabOrder(btnRemoveHistory, listHistory);
        QWidget::setTabOrder(listHistory, resultsCheckMetadata);

        retranslateUi(QgsMetadataWidgetBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsMetadataWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMetadataWidgetBase)
    {
#if QT_CONFIG(tooltip)
        label_27->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "A reference, URI, URL or some other mechanism to identify the parent resource that this resource is a part (child) of.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_27->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Parent identifier", nullptr));
#if QT_CONFIG(tooltip)
        lineEditParentId->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "A reference, URI, URL or some other mechanism to identify the parent resource that this resource is a part (child) of.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "A reference, URI, URL or some other mechanism to identify the resource.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Identifier", nullptr));
#if QT_CONFIG(tooltip)
        lineEditIdentifier->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "A reference, URI, URL or some other mechanism to identify the resource.", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAutoSource->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Set from Layer", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Title", nullptr));
#if QT_CONFIG(tooltip)
        lineEditTitle->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "While a formal vocabulary is not imposed, it is advised to use the ISO 19115 MD_ScopeCode values. E.g. 'dataset' or 'series'. If unsure about which type to select, use 'dataset'.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Type", nullptr));
#if QT_CONFIG(tooltip)
        comboType->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "While a formal vocabulary is not imposed, it is advised to use the ISO 19115 MD_ScopeCode values. E.g. 'dataset' or 'series'. If unsure about which type to select, use 'dataset'.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Creation date", nullptr));
        mCreationDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsMetadataWidgetBase", "yyyy-MM-dd HH:mm:ss", nullptr));
#if QT_CONFIG(tooltip)
        mLineEditAuthor->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Author", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Usually the returned string will follow either the ISO 639.2 or ISO 3166 specifications, e.g. 'ENG' or 'SPA', however this is not a hard requirement and the caller must account for non compliant values.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Language", nullptr));
#if QT_CONFIG(tooltip)
        comboLanguage->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Usually the returned string will follow either the ISO 639.2 or ISO 3166 specifications, e.g. 'ENG' or 'SPA', however this is not a hard requirement and the caller must account for non compliant values.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Free-form description of the resource", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Abstract", nullptr));
#if QT_CONFIG(tooltip)
        textEditAbstract->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Free-form description of the resource", nullptr));
#endif // QT_CONFIG(tooltip)
        label_24->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Encoding", nullptr));
        btnAutoEncoding->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Set from Layer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabIdentificationDialog), QCoreApplication::translate("QgsMetadataWidgetBase", "Identification", nullptr));
        label_23->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "ISO categories", nullptr));
#if QT_CONFIG(tooltip)
        listDefaultCategories->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Categories chosen will be added as a new entry in the keywords tab.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnAddDefaultCategory->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Add selected ISO categories to metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddDefaultCategory->setText(QString());
#if QT_CONFIG(tooltip)
        btnNewCategory->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Add a new custom category to the metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNewCategory->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemoveCategory->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Remove selected categories from metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveCategory->setText(QString());
        label_22->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Chosen categories", nullptr));
#if QT_CONFIG(tooltip)
        listCategories->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Categories chosen will be added as a new entry in the keywords tab.", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabCategoriesDialog), QCoreApplication::translate("QgsMetadataWidgetBase", "Categories", nullptr));
#if QT_CONFIG(tooltip)
        btnAddVocabulary->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Adds a list of descriptive keywords for a specified vocabulary.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnRemoveVocabulary->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Removes a specified vocabulary.", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem = tabKeywords->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Concept", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabKeywords->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Keywords", nullptr));
#if QT_CONFIG(tooltip)
        tabKeywords->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "A set of descriptive keywords associated with the resource for a specified concept.", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabKeywordsDialog), QCoreApplication::translate("QgsMetadataWidgetBase", "Keywords", nullptr));
        label_5->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "The fees, licences and rights for this dataset.", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Any fees associated with using the resource", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Fees", nullptr));
#if QT_CONFIG(tooltip)
        lineEditFees->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Any fees associated with using the resource", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "A list of licenses associated with the resource", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Licenses", nullptr));
#if QT_CONFIG(tooltip)
        btnAddLicence->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Add license", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnRemoveLicence->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Remove license", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem2 = tabLicenses->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Label", nullptr));
#if QT_CONFIG(tooltip)
        tabLicenses->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "A list of licenses associated with the resource", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_26->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "List of attribution or copyright strings associated with the resource", nullptr));
#endif // QT_CONFIG(tooltip)
        label_26->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Rights (attribution or copyright)", nullptr));
#if QT_CONFIG(tooltip)
        btnAddRight->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Add Right", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnRemoveRight->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Remove Right", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        listRights->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "List of attribution or copyright strings associated with the resource", nullptr));
#endif // QT_CONFIG(tooltip)
        label_29->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Constraints", nullptr));
#if QT_CONFIG(tooltip)
        btnAddConstraint->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Add Right", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnRemoveConstraint->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Remove Right", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabAccessDialog), QCoreApplication::translate("QgsMetadataWidgetBase", "Access", nullptr));
        label_9->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Coordinate Reference System and spatial extent for this dataset.", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "The coordinate reference system described by the layer's metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("QgsMetadataWidgetBase", "Coordinate Reference System", nullptr));
        btnSetCrsFromLayer->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Set CRS from Layer", nullptr));
        btnSetCrsFromProvider->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Set CRS from Provider", nullptr));
        spatialExtentSelector->setTitle(QString());
        label_32->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Z maximum", nullptr));
        label_31->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Z minimum", nullptr));
        label_35->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Temporal extent for this dataset.", nullptr));
        label_33->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "From", nullptr));
        label_34->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "To", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabExtentDialog), QCoreApplication::translate("QgsMetadataWidgetBase", "Extent", nullptr));
#if QT_CONFIG(tooltip)
        lineEditContactPosition->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Position/title of contact", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEditContactName->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Name of contact", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_15->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Role of contact", nullptr));
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Role", nullptr));
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Position/title of contact", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Position", nullptr));
#if QT_CONFIG(tooltip)
        lineEditContactOrganization->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Organization contact belongs to/represents", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Name of contact", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Name", nullptr));
#if QT_CONFIG(tooltip)
        lineEditContactVoice->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Phone number", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEditContactFax->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Fax number", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_20->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Fax number", nullptr));
#endif // QT_CONFIG(tooltip)
        label_20->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Fax", nullptr));
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Organization contact belongs to/represents", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Organization", nullptr));
        comboContactRole->setItemText(0, QString());

#if QT_CONFIG(tooltip)
        comboContactRole->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Role of contact", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEditContactEmail->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Electronic mail address", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_19->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Phone number", nullptr));
#endif // QT_CONFIG(tooltip)
        label_19->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Voice", nullptr));
        label_21->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabAddresses->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Type", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem3->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Type of address, e.g 'postal'", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem4 = tabAddresses->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Address", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem4->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Free-form physical address component", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem5 = tabAddresses->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Postal Code", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem5->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Postal (or ZIP) code", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem6 = tabAddresses->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "City", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem6->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "City or locality name", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem7 = tabAddresses->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Administrative Area", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem7->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Administrative area (state, province/territory, etc.)", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem8 = tabAddresses->horizontalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Country", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem8->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Free-form country", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Electronic mail address", nullptr));
#endif // QT_CONFIG(tooltip)
        label_18->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Email", nullptr));
#if QT_CONFIG(tooltip)
        btnAddAddress->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Add address", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnRemoveAddress->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Remove Address", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabContactsDialog), QCoreApplication::translate("QgsMetadataWidgetBase", "Contact", nullptr));
#if QT_CONFIG(tooltip)
        mLabelLinks->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "a list of online resources associated with the resource.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnAddLink->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Add link", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnRemoveLink->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Remove link", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tabLinks->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "a list of online resources associated with the resource.", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabLinksDialog), QCoreApplication::translate("QgsMetadataWidgetBase", "Links", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsMetadataWidgetBase", "Key Dates", nullptr));
        mCreationDateTimeEdit2->setDisplayFormat(QCoreApplication::translate("QgsMetadataWidgetBase", "yyyy-MM-dd HH:mm:ss", nullptr));
        mPublishedDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsMetadataWidgetBase", "yyyy-MM-dd HH:mm:ss", nullptr));
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Revised", nullptr));
        mRevisedDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsMetadataWidgetBase", "yyyy-MM-dd HH:mm:ss", nullptr));
#if QT_CONFIG(tooltip)
        label_25->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_25->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Published", nullptr));
        mSupersededDateTimeEdit->setDisplayFormat(QCoreApplication::translate("QgsMetadataWidgetBase", "yyyy-MM-dd HH:mm:ss", nullptr));
#if QT_CONFIG(tooltip)
        label_16->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_16->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Created", nullptr));
#if QT_CONFIG(tooltip)
        label_30->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Returns the human readable name of the resource, typically displayed in search results.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_30->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Superseded", nullptr));
#if QT_CONFIG(tooltip)
        btnAddHistory->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Adds a list of descriptive keywords for a specified vocabulary.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnRemoveHistory->setToolTip(QCoreApplication::translate("QgsMetadataWidgetBase", "Removes a specified vocabulary.", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("QgsMetadataWidgetBase", "History", nullptr));
        label_28->setText(QCoreApplication::translate("QgsMetadataWidgetBase", "Validation is not enforced, but it's recommended to resolve any validation issues listed here.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabValidationDialog), QCoreApplication::translate("QgsMetadataWidgetBase", "Validation", nullptr));
        (void)QgsMetadataWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMetadataWidgetBase: public Ui_QgsMetadataWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMETADATAWIDGET_H
