/********************************************************************************
** Form generated from reading UI file 'qgslayoutwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTWIDGETBASE_H
#define UI_QGSLAYOUTWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutitemcombobox.h"
#include "qgslayoutunitscombobox.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"
#include "qgsvariableeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QgsLayoutItemComboBox *mReferenceMapComboBox;
    QgsCollapsibleGroupBoxBasic *mSnapToGridGroupCheckBox;
    QGridLayout *gridLayout_2;
    QgsLayoutUnitsComboBox *mGridSpacingUnitsCombo;
    QVBoxLayout *verticalLayout_3;
    QgsDoubleSpinBox *mOffsetXSpinBox;
    QgsDoubleSpinBox *mOffsetYSpinBox;
    QgsLayoutUnitsComboBox *mGridOffsetUnitsComboBox;
    QgsDoubleSpinBox *mGridResolutionSpinBox;
    QgsSpinBox *mSnapToleranceSpinBox;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_7;
    QgsCollapsibleGroupBoxBasic *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *mGenerateWorldFileCheckBox;
    QLabel *label_9;
    QgsSpinBox *mResolutionSpinBox;
    QCheckBox *mRasterizeCheckBox;
    QCheckBox *mForceVectorCheckBox;
    QgsCollapsibleGroupBoxBasic *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsLayoutUnitsComboBox *mMarginUnitsComboBox;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QgsDoubleSpinBox *mTopMarginSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QgsDoubleSpinBox *mLeftMarginSpinBox;
    QLabel *label_11;
    QgsDoubleSpinBox *mRightMarginSpinBox;
    QLabel *label_12;
    QgsDoubleSpinBox *mBottomMarginSpinBox;
    QPushButton *mResizePageButton;
    QgsCollapsibleGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QgsVariableEditorWidget *mVariableEditor;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsLayoutWidgetBase)
    {
        if (QgsLayoutWidgetBase->objectName().isEmpty())
            QgsLayoutWidgetBase->setObjectName(QString::fromUtf8("QgsLayoutWidgetBase"));
        QgsLayoutWidgetBase->resize(311, 357);
        verticalLayout = new QVBoxLayout(QgsLayoutWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsLayoutWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setFocusPolicy(Qt::WheelFocus);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 297, 953));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mReferenceMapComboBox = new QgsLayoutItemComboBox(groupBox);
        mReferenceMapComboBox->setObjectName(QString::fromUtf8("mReferenceMapComboBox"));
        mReferenceMapComboBox->setEnabled(true);
        mReferenceMapComboBox->setEditable(false);

        gridLayout->addWidget(mReferenceMapComboBox, 0, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_2->addWidget(groupBox);

        mSnapToGridGroupCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSnapToGridGroupCheckBox->setObjectName(QString::fromUtf8("mSnapToGridGroupCheckBox"));
        mSnapToGridGroupCheckBox->setFocusPolicy(Qt::StrongFocus);
        mSnapToGridGroupCheckBox->setCheckable(false);
        mSnapToGridGroupCheckBox->setChecked(false);
        mSnapToGridGroupCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSnapToGridGroupCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mSnapToGridGroupCheckBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mGridSpacingUnitsCombo = new QgsLayoutUnitsComboBox(mSnapToGridGroupCheckBox);
        mGridSpacingUnitsCombo->setObjectName(QString::fromUtf8("mGridSpacingUnitsCombo"));

        gridLayout_2->addWidget(mGridSpacingUnitsCombo, 1, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mOffsetXSpinBox = new QgsDoubleSpinBox(mSnapToGridGroupCheckBox);
        mOffsetXSpinBox->setObjectName(QString::fromUtf8("mOffsetXSpinBox"));
        mOffsetXSpinBox->setMaximum(9999.000000000000000);

        verticalLayout_3->addWidget(mOffsetXSpinBox);

        mOffsetYSpinBox = new QgsDoubleSpinBox(mSnapToGridGroupCheckBox);
        mOffsetYSpinBox->setObjectName(QString::fromUtf8("mOffsetYSpinBox"));
        mOffsetYSpinBox->setMaximum(9999.000000000000000);

        verticalLayout_3->addWidget(mOffsetYSpinBox);


        gridLayout_2->addLayout(verticalLayout_3, 3, 0, 1, 1);

        mGridOffsetUnitsComboBox = new QgsLayoutUnitsComboBox(mSnapToGridGroupCheckBox);
        mGridOffsetUnitsComboBox->setObjectName(QString::fromUtf8("mGridOffsetUnitsComboBox"));

        gridLayout_2->addWidget(mGridOffsetUnitsComboBox, 3, 1, 1, 1);

        mGridResolutionSpinBox = new QgsDoubleSpinBox(mSnapToGridGroupCheckBox);
        mGridResolutionSpinBox->setObjectName(QString::fromUtf8("mGridResolutionSpinBox"));
        mGridResolutionSpinBox->setMinimum(0.500000000000000);
        mGridResolutionSpinBox->setMaximum(9999.000000000000000);
        mGridResolutionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mGridResolutionSpinBox, 1, 0, 1, 1);

        mSnapToleranceSpinBox = new QgsSpinBox(mSnapToGridGroupCheckBox);
        mSnapToleranceSpinBox->setObjectName(QString::fromUtf8("mSnapToleranceSpinBox"));
        mSnapToleranceSpinBox->setMaximum(200);
        mSnapToleranceSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mSnapToleranceSpinBox, 5, 0, 1, 2);

        label_8 = new QLabel(mSnapToGridGroupCheckBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 2);

        label_6 = new QLabel(mSnapToGridGroupCheckBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setWordWrap(true);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 2);

        label_7 = new QLabel(mSnapToGridGroupCheckBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 4, 0, 1, 2);


        verticalLayout_2->addWidget(mSnapToGridGroupCheckBox);

        groupBox_3 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mGenerateWorldFileCheckBox = new QCheckBox(groupBox_3);
        mGenerateWorldFileCheckBox->setObjectName(QString::fromUtf8("mGenerateWorldFileCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mGenerateWorldFileCheckBox->sizePolicy().hasHeightForWidth());
        mGenerateWorldFileCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mGenerateWorldFileCheckBox, 4, 0, 1, 2);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        mResolutionSpinBox = new QgsSpinBox(groupBox_3);
        mResolutionSpinBox->setObjectName(QString::fromUtf8("mResolutionSpinBox"));
        mResolutionSpinBox->setMaximum(3000);
        mResolutionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mResolutionSpinBox, 1, 1, 1, 1);

        mRasterizeCheckBox = new QCheckBox(groupBox_3);
        mRasterizeCheckBox->setObjectName(QString::fromUtf8("mRasterizeCheckBox"));

        gridLayout_3->addWidget(mRasterizeCheckBox, 2, 0, 1, 2);

        mForceVectorCheckBox = new QCheckBox(groupBox_3);
        mForceVectorCheckBox->setObjectName(QString::fromUtf8("mForceVectorCheckBox"));

        gridLayout_3->addWidget(mForceVectorCheckBox, 3, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_5 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mMarginUnitsComboBox = new QgsLayoutUnitsComboBox(groupBox_5);
        mMarginUnitsComboBox->setObjectName(QString::fromUtf8("mMarginUnitsComboBox"));

        horizontalLayout->addWidget(mMarginUnitsComboBox);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_5->addLayout(horizontalLayout);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        mTopMarginSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mTopMarginSpinBox->setObjectName(QString::fromUtf8("mTopMarginSpinBox"));
        mTopMarginSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(mTopMarginSpinBox, 0, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        mLeftMarginSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mLeftMarginSpinBox->setObjectName(QString::fromUtf8("mLeftMarginSpinBox"));
        mLeftMarginSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(mLeftMarginSpinBox);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        mRightMarginSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mRightMarginSpinBox->setObjectName(QString::fromUtf8("mRightMarginSpinBox"));
        mRightMarginSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(mRightMarginSpinBox);


        gridLayout_5->addLayout(horizontalLayout_7, 1, 0, 1, 4);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 2, 1, 1, 1);

        mBottomMarginSpinBox = new QgsDoubleSpinBox(groupBox_5);
        mBottomMarginSpinBox->setObjectName(QString::fromUtf8("mBottomMarginSpinBox"));
        mBottomMarginSpinBox->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(mBottomMarginSpinBox, 2, 2, 1, 1);

        mResizePageButton = new QPushButton(groupBox_5);
        mResizePageButton->setObjectName(QString::fromUtf8("mResizePageButton"));

        gridLayout_5->addWidget(mResizePageButton, 3, 1, 1, 2);


        verticalLayout_5->addLayout(gridLayout_5);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_2);
        mVariableEditor->setObjectName(QString::fromUtf8("mVariableEditor"));
        mVariableEditor->setMinimumSize(QSize(0, 200));

        verticalLayout_4->addWidget(mVariableEditor);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mReferenceMapComboBox);
        QWidget::setTabOrder(mReferenceMapComboBox, mSnapToGridGroupCheckBox);
        QWidget::setTabOrder(mSnapToGridGroupCheckBox, mGridResolutionSpinBox);
        QWidget::setTabOrder(mGridResolutionSpinBox, mGridSpacingUnitsCombo);
        QWidget::setTabOrder(mGridSpacingUnitsCombo, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mGridOffsetUnitsComboBox);
        QWidget::setTabOrder(mGridOffsetUnitsComboBox, mSnapToleranceSpinBox);
        QWidget::setTabOrder(mSnapToleranceSpinBox, mResolutionSpinBox);
        QWidget::setTabOrder(mResolutionSpinBox, mRasterizeCheckBox);
        QWidget::setTabOrder(mRasterizeCheckBox, mForceVectorCheckBox);
        QWidget::setTabOrder(mForceVectorCheckBox, mGenerateWorldFileCheckBox);
        QWidget::setTabOrder(mGenerateWorldFileCheckBox, mMarginUnitsComboBox);
        QWidget::setTabOrder(mMarginUnitsComboBox, mTopMarginSpinBox);
        QWidget::setTabOrder(mTopMarginSpinBox, mLeftMarginSpinBox);
        QWidget::setTabOrder(mLeftMarginSpinBox, mRightMarginSpinBox);
        QWidget::setTabOrder(mRightMarginSpinBox, mBottomMarginSpinBox);
        QWidget::setTabOrder(mBottomMarginSpinBox, mResizePageButton);

        retranslateUi(QgsLayoutWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutWidgetBase)
    {
        QgsLayoutWidgetBase->setWindowTitle(QCoreApplication::translate("QgsLayoutWidgetBase", "Composition", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsLayoutWidgetBase", "General Settings", nullptr));
        label_2->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Reference map", nullptr));
#if QT_CONFIG(tooltip)
        mReferenceMapComboBox->setToolTip(QCoreApplication::translate("QgsLayoutWidgetBase", "Specifies the master map for this composition, which is used to georeference composer exports and for scale calculation for item styles.", nullptr));
#endif // QT_CONFIG(tooltip)
        mSnapToGridGroupCheckBox->setTitle(QCoreApplication::translate("QgsLayoutWidgetBase", "Guides and Grid", nullptr));
        mOffsetXSpinBox->setPrefix(QCoreApplication::translate("QgsLayoutWidgetBase", "x: ", nullptr));
        mOffsetXSpinBox->setSuffix(QString());
        mOffsetYSpinBox->setPrefix(QCoreApplication::translate("QgsLayoutWidgetBase", "y: ", nullptr));
        mOffsetYSpinBox->setSuffix(QString());
        mGridResolutionSpinBox->setPrefix(QString());
        mSnapToleranceSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutWidgetBase", " px", nullptr));
        label_8->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Grid spacing", nullptr));
        label_6->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Grid offset", nullptr));
        label_7->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Snap tolerance", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QgsLayoutWidgetBase", "Export Settings", nullptr));
#if QT_CONFIG(tooltip)
        mGenerateWorldFileCheckBox->setToolTip(QCoreApplication::translate("QgsLayoutWidgetBase", "If checked, a separate world file which georeferences exported images will be created", nullptr));
#endif // QT_CONFIG(tooltip)
        mGenerateWorldFileCheckBox->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Save world file", nullptr));
        label_9->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Export resolution", nullptr));
        mResolutionSpinBox->setSuffix(QCoreApplication::translate("QgsLayoutWidgetBase", " dpi", nullptr));
        mResolutionSpinBox->setPrefix(QString());
#if QT_CONFIG(tooltip)
        mRasterizeCheckBox->setToolTip(QCoreApplication::translate("QgsLayoutWidgetBase", "If checked, exports from this layout will be rasterized.", nullptr));
#endif // QT_CONFIG(tooltip)
        mRasterizeCheckBox->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Print as raster", nullptr));
#if QT_CONFIG(tooltip)
        mForceVectorCheckBox->setToolTip(QCoreApplication::translate("QgsLayoutWidgetBase", "If checked, the layout will always be kept as vector objects when exported to a compatible format, even if the appearance of the resultant file does not match the layouts settings. If unchecked, some elements in the layout may be rasterized in order to keep their appearance intact.", nullptr));
#endif // QT_CONFIG(tooltip)
        mForceVectorCheckBox->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Always export as vectors", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QgsLayoutWidgetBase", "Resize Layout to Content", nullptr));
        label->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Margin units", nullptr));
        label_4->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Top margin", nullptr));
        label_5->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Left", nullptr));
        label_11->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Right", nullptr));
        label_12->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Bottom", nullptr));
        mResizePageButton->setText(QCoreApplication::translate("QgsLayoutWidgetBase", "Resize layout", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsLayoutWidgetBase", "Variables", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutWidgetBase: public Ui_QgsLayoutWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTWIDGETBASE_H
