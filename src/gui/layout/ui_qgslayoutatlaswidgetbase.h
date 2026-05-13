/********************************************************************************
** Form generated from reading UI file 'qgslayoutatlaswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTATLASWIDGETBASE_H
#define UI_QGSLAYOUTATLASWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsfieldexpressionwidget.h"
#include "qgsmaplayercombobox.h"
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutAtlasWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *verticalFrame;
    QGridLayout *gridLayout;
    QCheckBox *mUseAtlasCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mConfigurationGroup;
    QGridLayout *gridLayout_2;
    QToolButton *mAtlasSortFeatureDirectionButton;
    QgsFieldExpressionWidget *mAtlasSortExpressionWidget;
    QCheckBox *mAtlasFeatureFilterCheckBox;
    QToolButton *mAtlasFeatureFilterButton;
    QCheckBox *mAtlasHideCoverageCheckBox;
    QLabel *mHorizontalAlignementLabel;
    QLabel *label;
    QLineEdit *mAtlasFeatureFilterEdit;
    QgsMapLayerComboBox *mAtlasCoverageLayerComboBox;
    QgsFieldExpressionWidget *mPageNameWidget;
    QCheckBox *mAtlasSortFeatureCheckBox;
    QgsCollapsibleGroupBoxBasic *mOutputGroup;
    QGridLayout *gridLayout_3;
    QToolButton *mAtlasFilenameExpressionButton;
    QLineEdit *mAtlasFilenamePatternEdit;
    QCheckBox *mAtlasSingleFileCheckBox;
    QComboBox *mAtlasFileFormat;
    QLabel *mFileFormatLabel;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayoutAtlasWidgetBase)
    {
        if (QgsLayoutAtlasWidgetBase->objectName().isEmpty())
            QgsLayoutAtlasWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutAtlasWidgetBase"));
        QgsLayoutAtlasWidgetBase->resize(435, 359);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLayoutAtlasWidgetBase->sizePolicy().hasHeightForWidth());
        QgsLayoutAtlasWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLayoutAtlasWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalFrame = new QFrame(QgsLayoutAtlasWidgetBase);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setFrameShape(QFrame::StyledPanel);
        gridLayout = new QGridLayout(verticalFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mUseAtlasCheckBox = new QCheckBox(verticalFrame);
        mUseAtlasCheckBox->setObjectName(QString::fromUtf8("mUseAtlasCheckBox"));

        gridLayout->addWidget(mUseAtlasCheckBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        scrollArea = new QgsScrollArea(verticalFrame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFocusPolicy(Qt::WheelFocus);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setEnabled(true);
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 417, 354));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(-1, -1, -1, 0);
        mConfigurationGroup = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mConfigurationGroup->setObjectName(QString::fromUtf8("mConfigurationGroup"));
        mConfigurationGroup->setEnabled(false);
        mConfigurationGroup->setFocusPolicy(Qt::StrongFocus);
        mConfigurationGroup->setCheckable(false);
        mConfigurationGroup->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mConfigurationGroup->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mConfigurationGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mAtlasSortFeatureDirectionButton = new QToolButton(mConfigurationGroup);
        mAtlasSortFeatureDirectionButton->setObjectName(QString::fromUtf8("mAtlasSortFeatureDirectionButton"));
        mAtlasSortFeatureDirectionButton->setArrowType(Qt::UpArrow);

        gridLayout_2->addWidget(mAtlasSortFeatureDirectionButton, 4, 2, 1, 1);

        mAtlasSortExpressionWidget = new QgsFieldExpressionWidget(mConfigurationGroup);
        mAtlasSortExpressionWidget->setObjectName(QString::fromUtf8("mAtlasSortExpressionWidget"));

        gridLayout_2->addWidget(mAtlasSortExpressionWidget, 4, 1, 1, 1);

        mAtlasFeatureFilterCheckBox = new QCheckBox(mConfigurationGroup);
        mAtlasFeatureFilterCheckBox->setObjectName(QString::fromUtf8("mAtlasFeatureFilterCheckBox"));

        gridLayout_2->addWidget(mAtlasFeatureFilterCheckBox, 3, 0, 1, 1);

        mAtlasFeatureFilterButton = new QToolButton(mConfigurationGroup);
        mAtlasFeatureFilterButton->setObjectName(QString::fromUtf8("mAtlasFeatureFilterButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAtlasFeatureFilterButton->setIcon(icon);

        gridLayout_2->addWidget(mAtlasFeatureFilterButton, 3, 2, 1, 1);

        mAtlasHideCoverageCheckBox = new QCheckBox(mConfigurationGroup);
        mAtlasHideCoverageCheckBox->setObjectName(QString::fromUtf8("mAtlasHideCoverageCheckBox"));

        gridLayout_2->addWidget(mAtlasHideCoverageCheckBox, 1, 0, 1, 3);

        mHorizontalAlignementLabel = new QLabel(mConfigurationGroup);
        mHorizontalAlignementLabel->setObjectName(QString::fromUtf8("mHorizontalAlignementLabel"));

        gridLayout_2->addWidget(mHorizontalAlignementLabel, 0, 0, 1, 1);

        label = new QLabel(mConfigurationGroup);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        mAtlasFeatureFilterEdit = new QLineEdit(mConfigurationGroup);
        mAtlasFeatureFilterEdit->setObjectName(QString::fromUtf8("mAtlasFeatureFilterEdit"));

        gridLayout_2->addWidget(mAtlasFeatureFilterEdit, 3, 1, 1, 1);

        mAtlasCoverageLayerComboBox = new QgsMapLayerComboBox(mConfigurationGroup);
        mAtlasCoverageLayerComboBox->setObjectName(QString::fromUtf8("mAtlasCoverageLayerComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAtlasCoverageLayerComboBox->sizePolicy().hasHeightForWidth());
        mAtlasCoverageLayerComboBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mAtlasCoverageLayerComboBox, 0, 1, 1, 2);

        mPageNameWidget = new QgsFieldExpressionWidget(mConfigurationGroup);
        mPageNameWidget->setObjectName(QString::fromUtf8("mPageNameWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPageNameWidget->sizePolicy().hasHeightForWidth());
        mPageNameWidget->setSizePolicy(sizePolicy2);
        mPageNameWidget->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(mPageNameWidget, 2, 1, 1, 2);

        mAtlasSortFeatureCheckBox = new QCheckBox(mConfigurationGroup);
        mAtlasSortFeatureCheckBox->setObjectName(QString::fromUtf8("mAtlasSortFeatureCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mAtlasSortFeatureCheckBox->sizePolicy().hasHeightForWidth());
        mAtlasSortFeatureCheckBox->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(mAtlasSortFeatureCheckBox, 4, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        mainLayout->addWidget(mConfigurationGroup);

        mOutputGroup = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mOutputGroup->setObjectName(QString::fromUtf8("mOutputGroup"));
        mOutputGroup->setEnabled(false);
        mOutputGroup->setFocusPolicy(Qt::StrongFocus);
        mOutputGroup->setCheckable(false);
        mOutputGroup->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mOutputGroup->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(mOutputGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mAtlasFilenameExpressionButton = new QToolButton(mOutputGroup);
        mAtlasFilenameExpressionButton->setObjectName(QString::fromUtf8("mAtlasFilenameExpressionButton"));
        mAtlasFilenameExpressionButton->setIcon(icon);

        gridLayout_3->addWidget(mAtlasFilenameExpressionButton, 1, 2, 1, 1);

        mAtlasFilenamePatternEdit = new QLineEdit(mOutputGroup);
        mAtlasFilenamePatternEdit->setObjectName(QString::fromUtf8("mAtlasFilenamePatternEdit"));

        gridLayout_3->addWidget(mAtlasFilenamePatternEdit, 1, 0, 1, 2);

        mAtlasSingleFileCheckBox = new QCheckBox(mOutputGroup);
        mAtlasSingleFileCheckBox->setObjectName(QString::fromUtf8("mAtlasSingleFileCheckBox"));

        gridLayout_3->addWidget(mAtlasSingleFileCheckBox, 2, 0, 1, 3);

        mAtlasFileFormat = new QComboBox(mOutputGroup);
        mAtlasFileFormat->setObjectName(QString::fromUtf8("mAtlasFileFormat"));

        gridLayout_3->addWidget(mAtlasFileFormat, 3, 1, 1, 2);

        mFileFormatLabel = new QLabel(mOutputGroup);
        mFileFormatLabel->setObjectName(QString::fromUtf8("mFileFormatLabel"));

        gridLayout_3->addWidget(mFileFormatLabel, 3, 0, 1, 1);

        label_4 = new QLabel(mOutputGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 3);

        gridLayout_3->setColumnStretch(1, 1);

        mainLayout->addWidget(mOutputGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 3);


        verticalLayout->addWidget(verticalFrame);

        QWidget::setTabOrder(mUseAtlasCheckBox, scrollArea);
        QWidget::setTabOrder(scrollArea, mConfigurationGroup);
        QWidget::setTabOrder(mConfigurationGroup, mAtlasCoverageLayerComboBox);
        QWidget::setTabOrder(mAtlasCoverageLayerComboBox, mAtlasHideCoverageCheckBox);
        QWidget::setTabOrder(mAtlasHideCoverageCheckBox, mAtlasFeatureFilterCheckBox);
        QWidget::setTabOrder(mAtlasFeatureFilterCheckBox, mAtlasFeatureFilterEdit);
        QWidget::setTabOrder(mAtlasFeatureFilterEdit, mAtlasFeatureFilterButton);
        QWidget::setTabOrder(mAtlasFeatureFilterButton, mAtlasSortFeatureCheckBox);
        QWidget::setTabOrder(mAtlasSortFeatureCheckBox, mAtlasSortFeatureDirectionButton);
        QWidget::setTabOrder(mAtlasSortFeatureDirectionButton, mOutputGroup);
        QWidget::setTabOrder(mOutputGroup, mAtlasFilenamePatternEdit);
        QWidget::setTabOrder(mAtlasFilenamePatternEdit, mAtlasFilenameExpressionButton);
        QWidget::setTabOrder(mAtlasFilenameExpressionButton, mAtlasSingleFileCheckBox);
        QWidget::setTabOrder(mAtlasSingleFileCheckBox, mAtlasFileFormat);

        retranslateUi(QgsLayoutAtlasWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutAtlasWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutAtlasWidgetBase)
    {
        QgsLayoutAtlasWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Atlas Generation", nullptr));
        mUseAtlasCheckBox->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Generate an atlas", nullptr));
        mConfigurationGroup->setTitle(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Configuration", nullptr));
#if QT_CONFIG(tooltip)
        mAtlasSortFeatureDirectionButton->setToolTip(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Sort direction", nullptr));
#endif // QT_CONFIG(tooltip)
        mAtlasSortFeatureDirectionButton->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "\342\200\246", nullptr));
        mAtlasFeatureFilterCheckBox->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Filter with", nullptr));
        mAtlasFeatureFilterButton->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "\342\200\246", nullptr));
        mAtlasHideCoverageCheckBox->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Hidden coverage layer", nullptr));
        mHorizontalAlignementLabel->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Coverage layer", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Page name", nullptr));
        mAtlasSortFeatureCheckBox->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Sort by", nullptr));
        mOutputGroup->setTitle(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Output", nullptr));
        mAtlasFilenameExpressionButton->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "\342\200\246", nullptr));
        mAtlasSingleFileCheckBox->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Single file export when possible", nullptr));
        mFileFormatLabel->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Image export format", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayoutAtlasWidgetBase", "Output filename expression", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutAtlasWidgetBase: public Ui_QgsLayoutAtlasWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTATLASWIDGETBASE_H
