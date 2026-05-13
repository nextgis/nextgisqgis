/********************************************************************************
** Form generated from reading UI file 'qgsexternalresourceconfigdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXTERNALRESOURCECONFIGDLG_H
#define UI_QGSEXTERNALRESOURCECONFIGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthsettingswidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExternalResourceConfigDlg
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *mFileWidgetGroupBox;
    QGridLayout *gridLayout_3;
    QGroupBox *mUseLink;
    QFormLayout *formLayout;
    QCheckBox *mFullUrl;
    QGroupBox *mFileWidgetButtonGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *mFileWidgetFilterLineEdit;
    QGroupBox *mDocumentViewerGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *mDocumentViewerContentComboBox;
    QSpacerItem *horizontalSpacer;
    QWidget *mDocumentViewerContentSettingsWidget;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QLabel *label_2;
    QgsSpinBox *mDocumentViewerHeight;
    QgsSpinBox *mDocumentViewerWidth;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_2;
    QgsPropertyOverrideButton *mDocumentViewerContentPropertyOverrideButton;
    QLineEdit *mDocumentViewerContentExpression;
    QHBoxLayout *horizontalLayout_3;
    QLabel *storageTypeLbl;
    QComboBox *mStorageType;
    QGroupBox *mPathGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *mStoragePathLbl;
    QComboBox *mStoragePathCbx;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *mRootPath;
    QLineEdit *mRootPathExpression;
    QToolButton *mRootPathButton;
    QgsPropertyOverrideButton *mRootPathPropertyOverrideButton;
    QComboBox *mStorageModeCbx;
    QLabel *mStorageModeLbl;
    QGroupBox *mExternalStorageGroupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *mStorageUrl;
    QLineEdit *mStorageUrlExpression;
    QgsPropertyOverrideButton *mStorageUrlPropertyOverrideButton;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_6;
    QgsAuthSettingsWidget *mAuthSettingsProtocol;

    void setupUi(QWidget *QgsExternalResourceConfigDlg)
    {
        if (QgsExternalResourceConfigDlg->objectName().isEmpty())
            QgsExternalResourceConfigDlg->setObjectName(QString::fromUtf8("QgsExternalResourceConfigDlg"));
        QgsExternalResourceConfigDlg->resize(437, 649);
        QgsExternalResourceConfigDlg->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_5 = new QGridLayout(QgsExternalResourceConfigDlg);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mFileWidgetGroupBox = new QGroupBox(QgsExternalResourceConfigDlg);
        mFileWidgetGroupBox->setObjectName(QString::fromUtf8("mFileWidgetGroupBox"));
        mFileWidgetGroupBox->setCheckable(true);
        gridLayout_3 = new QGridLayout(mFileWidgetGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mUseLink = new QGroupBox(mFileWidgetGroupBox);
        mUseLink->setObjectName(QString::fromUtf8("mUseLink"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mUseLink->sizePolicy().hasHeightForWidth());
        mUseLink->setSizePolicy(sizePolicy);
        mUseLink->setCheckable(true);
        mUseLink->setChecked(false);
        formLayout = new QFormLayout(mUseLink);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mFullUrl = new QCheckBox(mUseLink);
        mFullUrl->setObjectName(QString::fromUtf8("mFullUrl"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mFullUrl);


        gridLayout_3->addWidget(mUseLink, 1, 0, 1, 1);

        mFileWidgetButtonGroupBox = new QGroupBox(mFileWidgetGroupBox);
        mFileWidgetButtonGroupBox->setObjectName(QString::fromUtf8("mFileWidgetButtonGroupBox"));
        mFileWidgetButtonGroupBox->setCheckable(true);
        formLayout_2 = new QFormLayout(mFileWidgetButtonGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(mFileWidgetButtonGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        mFileWidgetFilterLineEdit = new QLineEdit(mFileWidgetButtonGroupBox);
        mFileWidgetFilterLineEdit->setObjectName(QString::fromUtf8("mFileWidgetFilterLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mFileWidgetFilterLineEdit);


        gridLayout_3->addWidget(mFileWidgetButtonGroupBox, 0, 0, 1, 1);


        gridLayout_5->addWidget(mFileWidgetGroupBox, 3, 0, 1, 1);

        mDocumentViewerGroupBox = new QGroupBox(QgsExternalResourceConfigDlg);
        mDocumentViewerGroupBox->setObjectName(QString::fromUtf8("mDocumentViewerGroupBox"));
        mDocumentViewerGroupBox->setCheckable(false);
        gridLayout = new QGridLayout(mDocumentViewerGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(mDocumentViewerGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        mDocumentViewerContentComboBox = new QComboBox(mDocumentViewerGroupBox);
        mDocumentViewerContentComboBox->setObjectName(QString::fromUtf8("mDocumentViewerContentComboBox"));

        gridLayout->addWidget(mDocumentViewerContentComboBox, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);

        mDocumentViewerContentSettingsWidget = new QWidget(mDocumentViewerGroupBox);
        mDocumentViewerContentSettingsWidget->setObjectName(QString::fromUtf8("mDocumentViewerContentSettingsWidget"));
        gridLayout_4 = new QGridLayout(mDocumentViewerContentSettingsWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(mDocumentViewerContentSettingsWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        label_2 = new QLabel(mDocumentViewerContentSettingsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setWordWrap(true);

        gridLayout_4->addWidget(label_2, 0, 2, 2, 1);

        mDocumentViewerHeight = new QgsSpinBox(mDocumentViewerContentSettingsWidget);
        mDocumentViewerHeight->setObjectName(QString::fromUtf8("mDocumentViewerHeight"));
        mDocumentViewerHeight->setMaximum(10000);

        gridLayout_4->addWidget(mDocumentViewerHeight, 1, 1, 1, 1);

        mDocumentViewerWidth = new QgsSpinBox(mDocumentViewerContentSettingsWidget);
        mDocumentViewerWidth->setObjectName(QString::fromUtf8("mDocumentViewerWidth"));
        mDocumentViewerWidth->setMaximum(10000);

        gridLayout_4->addWidget(mDocumentViewerWidth, 0, 1, 1, 1);

        label_13 = new QLabel(mDocumentViewerContentSettingsWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout->addWidget(mDocumentViewerContentSettingsWidget, 1, 1, 1, 5);

        mDocumentViewerContentPropertyOverrideButton = new QgsPropertyOverrideButton(mDocumentViewerGroupBox);
        mDocumentViewerContentPropertyOverrideButton->setObjectName(QString::fromUtf8("mDocumentViewerContentPropertyOverrideButton"));

        gridLayout->addWidget(mDocumentViewerContentPropertyOverrideButton, 0, 4, 1, 1);

        mDocumentViewerContentExpression = new QLineEdit(mDocumentViewerGroupBox);
        mDocumentViewerContentExpression->setObjectName(QString::fromUtf8("mDocumentViewerContentExpression"));
        mDocumentViewerContentExpression->setEnabled(true);
        mDocumentViewerContentExpression->setReadOnly(true);

        gridLayout->addWidget(mDocumentViewerContentExpression, 0, 3, 1, 1);


        gridLayout_5->addWidget(mDocumentViewerGroupBox, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        storageTypeLbl = new QLabel(QgsExternalResourceConfigDlg);
        storageTypeLbl->setObjectName(QString::fromUtf8("storageTypeLbl"));

        horizontalLayout_3->addWidget(storageTypeLbl);

        mStorageType = new QComboBox(QgsExternalResourceConfigDlg);
        mStorageType->setObjectName(QString::fromUtf8("mStorageType"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mStorageType->sizePolicy().hasHeightForWidth());
        mStorageType->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(mStorageType);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        mPathGroupBox = new QGroupBox(QgsExternalResourceConfigDlg);
        mPathGroupBox->setObjectName(QString::fromUtf8("mPathGroupBox"));
        gridLayout_2 = new QGridLayout(mPathGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mStoragePathLbl = new QLabel(mPathGroupBox);
        mStoragePathLbl->setObjectName(QString::fromUtf8("mStoragePathLbl"));

        gridLayout_2->addWidget(mStoragePathLbl, 1, 0, 1, 1);

        mStoragePathCbx = new QComboBox(mPathGroupBox);
        mStoragePathCbx->setObjectName(QString::fromUtf8("mStoragePathCbx"));

        gridLayout_2->addWidget(mStoragePathCbx, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(mPathGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mRootPath = new QLineEdit(mPathGroupBox);
        mRootPath->setObjectName(QString::fromUtf8("mRootPath"));
        mRootPath->setEnabled(true);
        mRootPath->setAutoFillBackground(false);

        horizontalLayout->addWidget(mRootPath);

        mRootPathExpression = new QLineEdit(mPathGroupBox);
        mRootPathExpression->setObjectName(QString::fromUtf8("mRootPathExpression"));
        mRootPathExpression->setEnabled(true);
        mRootPathExpression->setReadOnly(true);

        horizontalLayout->addWidget(mRootPathExpression);

        mRootPathButton = new QToolButton(mPathGroupBox);
        mRootPathButton->setObjectName(QString::fromUtf8("mRootPathButton"));
        sizePolicy.setHeightForWidth(mRootPathButton->sizePolicy().hasHeightForWidth());
        mRootPathButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mRootPathButton);

        mRootPathPropertyOverrideButton = new QgsPropertyOverrideButton(mPathGroupBox);
        mRootPathPropertyOverrideButton->setObjectName(QString::fromUtf8("mRootPathPropertyOverrideButton"));

        horizontalLayout->addWidget(mRootPathPropertyOverrideButton);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        mStorageModeCbx = new QComboBox(mPathGroupBox);
        mStorageModeCbx->setObjectName(QString::fromUtf8("mStorageModeCbx"));

        gridLayout_2->addWidget(mStorageModeCbx, 2, 1, 1, 1);

        mStorageModeLbl = new QLabel(mPathGroupBox);
        mStorageModeLbl->setObjectName(QString::fromUtf8("mStorageModeLbl"));

        gridLayout_2->addWidget(mStorageModeLbl, 2, 0, 1, 1);


        gridLayout_5->addWidget(mPathGroupBox, 2, 0, 1, 1);

        mExternalStorageGroupBox = new QGroupBox(QgsExternalResourceConfigDlg);
        mExternalStorageGroupBox->setObjectName(QString::fromUtf8("mExternalStorageGroupBox"));
        verticalLayout_7 = new QVBoxLayout(mExternalStorageGroupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(mExternalStorageGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        mStorageUrl = new QLineEdit(mExternalStorageGroupBox);
        mStorageUrl->setObjectName(QString::fromUtf8("mStorageUrl"));

        horizontalLayout_2->addWidget(mStorageUrl);

        mStorageUrlExpression = new QLineEdit(mExternalStorageGroupBox);
        mStorageUrlExpression->setObjectName(QString::fromUtf8("mStorageUrlExpression"));

        horizontalLayout_2->addWidget(mStorageUrlExpression);

        mStorageUrlPropertyOverrideButton = new QgsPropertyOverrideButton(mExternalStorageGroupBox);
        mStorageUrlPropertyOverrideButton->setObjectName(QString::fromUtf8("mStorageUrlPropertyOverrideButton"));

        horizontalLayout_2->addWidget(mStorageUrlPropertyOverrideButton);


        verticalLayout_7->addLayout(horizontalLayout_2);

        mAuthGroupBox = new QGroupBox(mExternalStorageGroupBox);
        mAuthGroupBox->setObjectName(QString::fromUtf8("mAuthGroupBox"));
        verticalLayout_6 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(6, 6, 6, 6);
        mAuthSettingsProtocol = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettingsProtocol->setObjectName(QString::fromUtf8("mAuthSettingsProtocol"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mAuthSettingsProtocol->sizePolicy().hasHeightForWidth());
        mAuthSettingsProtocol->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(mAuthSettingsProtocol);


        verticalLayout_7->addWidget(mAuthGroupBox);


        gridLayout_5->addWidget(mExternalStorageGroupBox, 1, 0, 1, 1);

        QWidget::setTabOrder(mStorageType, mStorageUrl);
        QWidget::setTabOrder(mStorageUrl, mStorageUrlExpression);
        QWidget::setTabOrder(mStorageUrlExpression, mStorageUrlPropertyOverrideButton);
        QWidget::setTabOrder(mStorageUrlPropertyOverrideButton, mRootPath);
        QWidget::setTabOrder(mRootPath, mRootPathExpression);
        QWidget::setTabOrder(mRootPathExpression, mRootPathButton);
        QWidget::setTabOrder(mRootPathButton, mRootPathPropertyOverrideButton);
        QWidget::setTabOrder(mRootPathPropertyOverrideButton, mStoragePathCbx);
        QWidget::setTabOrder(mStoragePathCbx, mStorageModeCbx);
        QWidget::setTabOrder(mStorageModeCbx, mFileWidgetGroupBox);
        QWidget::setTabOrder(mFileWidgetGroupBox, mFileWidgetButtonGroupBox);
        QWidget::setTabOrder(mFileWidgetButtonGroupBox, mFileWidgetFilterLineEdit);
        QWidget::setTabOrder(mFileWidgetFilterLineEdit, mUseLink);
        QWidget::setTabOrder(mUseLink, mFullUrl);
        QWidget::setTabOrder(mFullUrl, mDocumentViewerContentComboBox);
        QWidget::setTabOrder(mDocumentViewerContentComboBox, mDocumentViewerContentExpression);
        QWidget::setTabOrder(mDocumentViewerContentExpression, mDocumentViewerContentPropertyOverrideButton);
        QWidget::setTabOrder(mDocumentViewerContentPropertyOverrideButton, mDocumentViewerWidth);
        QWidget::setTabOrder(mDocumentViewerWidth, mDocumentViewerHeight);

        retranslateUi(QgsExternalResourceConfigDlg);

        QMetaObject::connectSlotsByName(QgsExternalResourceConfigDlg);
    } // setupUi

    void retranslateUi(QWidget *QgsExternalResourceConfigDlg)
    {
        mFileWidgetGroupBox->setTitle(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Display Resource Path", nullptr));
#if QT_CONFIG(tooltip)
        mUseLink->setToolTip(QCoreApplication::translate("QgsExternalResourceConfigDlg", "<html><head/><body><p>This option displays file paths as clickable hyperlinks. When you click on the file path, the file should normally be opened by the default viewer defined in your operating system.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mUseLink->setTitle(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Use a hyperlink for document path (read-only)", nullptr));
#if QT_CONFIG(tooltip)
        mFullUrl->setToolTip(QCoreApplication::translate("QgsExternalResourceConfigDlg", "<html><head/><body><p>By default, the hyperlink is only displayed with the name of the file and not the full path. If you check this option, hyperlinks will be displayed with the complete path.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mFullUrl->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Display the full path", nullptr));
        mFileWidgetButtonGroupBox->setTitle(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Display button to open file dialog", nullptr));
        label_4->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Filter", nullptr));
#if QT_CONFIG(tooltip)
        mFileWidgetFilterLineEdit->setToolTip(QCoreApplication::translate("QgsExternalResourceConfigDlg", "<html><head/><body><p>Filter syntax is borrowed from Qt <a href=\"http://doc.qt.io/qt-4.8/qfiledialog.html#getOpenFileName\"><span style=\" text-decoration: underline; color:#0000ff;\">QFileDialog::getOpenFileName</span></a><span style=\" font-family:'Courier New,courier';\">.</span></p><p>If you want simple filter on all pdf files, just use:</p><p><span style=\" font-family:'Courier New,courier';\">*.pdf</span></p><p>If you want one filter for multiple file extensions (on .pdf, .odt and .doc files):</p><p><span style=\" font-family:'Courier New,courier';\">*.pdf *.odt *.doc</span></p><p>If you want to describe your filter, use parentheses:</p><p><span style=\" font-family:'Courier New,courier';\">Text documents (*.pdf, *.odt, *.doc)</span></p><p>If you want multiple filters, separate them with ';;':</p><p><span style=\" font-family:'Courier New,courier';\">&quot;Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)&quot;</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mFileWidgetFilterLineEdit->setPlaceholderText(QString());
        mDocumentViewerGroupBox->setTitle(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Integrated Document Viewer", nullptr));
        label_3->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Type", nullptr));
        label_12->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Width", nullptr));
        label_2->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Specify the size of the preview. If you leave it set to Auto, an optimal size will be calculated.", nullptr));
        mDocumentViewerHeight->setSpecialValueText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Auto", nullptr));
        mDocumentViewerHeight->setSuffix(QCoreApplication::translate("QgsExternalResourceConfigDlg", " px", nullptr));
        mDocumentViewerHeight->setPrefix(QString());
        mDocumentViewerWidth->setSpecialValueText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Auto", nullptr));
        mDocumentViewerWidth->setSuffix(QCoreApplication::translate("QgsExternalResourceConfigDlg", " px", nullptr));
        label_13->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Height", nullptr));
        mDocumentViewerContentPropertyOverrideButton->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "\342\200\246", nullptr));
        storageTypeLbl->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Storage type", nullptr));
#if QT_CONFIG(tooltip)
        mStorageType->setToolTip(QCoreApplication::translate("QgsExternalResourceConfigDlg", "<html><head/><body>Way of dealing with attachment file<p>\"Select existing file\" allows you to pick an existing file from the file system or set an existing URL external resource.</p><p>Other items allows you to pick a local resource and store it on an external storage system. You cannot use relative path in this mode and you can only pick file and not directory.</p></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mPathGroupBox->setTitle(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Path", nullptr));
        mStoragePathLbl->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Store path as", nullptr));
#if QT_CONFIG(tooltip)
        mStoragePathCbx->setToolTip(QCoreApplication::translate("QgsExternalResourceConfigDlg", "<html><head/><body><p>Select how to store path in the attribute field</p><p><br/>- Absolute path: stores the filenames with their absolute full paths</p><p>- Relative to project path: stores the filenames with relative paths from the current QGIS project path.</p><p>For example, if your QGIS project is in <span style=\" font-style:italic;\">&quot;/home/user/my_project.qgs&quot;</span> and your filename is <span style=\" font-style:italic;\">&quot;/home/user/data/files/test.pdf&quot;</span>, the attribute will only store <span style=\" font-style:italic;\">&quot;data/files/test.pdf&quot;</span>.</p><p><br/>- Relative to default path: stores the filenames with relative paths from the default path set just above.</p><p>For example, if your default path is <span style=\" font-style:italic;\">&quot;/home/user/data/&quot;</span> and your filename is <span style=\" font-style:italic;\">&quot;/home/user/data/files/test.pdf&quot;</span>, the attribute will only store <span style=\" font-style:italic;\">&quot;files/test"
                        ".pdf&quot;</span>.</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Default path", nullptr));
#if QT_CONFIG(tooltip)
        mRootPath->setToolTip(QCoreApplication::translate("QgsExternalResourceConfigDlg", "<html><head/><body><p>When not empty, always open the file selector at the root of this path for searching new files. If empty, the last used path of this editor widget will be used. If this editor widget has never been used by the user, the project path will be used.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mRootPath->setPlaceholderText(QString());
        mRootPathButton->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "\342\200\246", nullptr));
        mRootPathPropertyOverrideButton->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        mStorageModeCbx->setToolTip(QCoreApplication::translate("QgsExternalResourceConfigDlg", "<html><head/><body><p>Allows storing file paths or directory paths</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mStorageModeLbl->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Storage mode", nullptr));
        mExternalStorageGroupBox->setTitle(QCoreApplication::translate("QgsExternalResourceConfigDlg", "External Storage", nullptr));
        label_5->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Store URL", nullptr));
#if QT_CONFIG(tooltip)
        mStorageUrl->setToolTip(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Url used to store file selected from the attachment widget.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mStorageUrlExpression->setToolTip(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Url used to store file selected from the attachment widget.", nullptr));
#endif // QT_CONFIG(tooltip)
        mStorageUrlPropertyOverrideButton->setText(QCoreApplication::translate("QgsExternalResourceConfigDlg", "\342\200\246", nullptr));
        mAuthGroupBox->setTitle(QCoreApplication::translate("QgsExternalResourceConfigDlg", "Authentication", nullptr));
        (void)QgsExternalResourceConfigDlg;
    } // retranslateUi

};

namespace Ui {
    class QgsExternalResourceConfigDlg: public Ui_QgsExternalResourceConfigDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXTERNALRESOURCECONFIGDLG_H
