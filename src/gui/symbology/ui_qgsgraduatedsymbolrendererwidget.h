/********************************************************************************
** Form generated from reading UI file 'qgsgraduatedsymbolrendererwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGRADUATEDSYMBOLRENDERERWIDGET_H
#define UI_QGSGRADUATEDSYMBOLRENDERERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorrampbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsgraduatedhistogramwidget.h"
#include "qgsspinbox.h"
#include "qgssymbolbutton.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGraduatedSymbolRendererWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *methodComboBox;
    QgsFieldExpressionWidget *mExpressionWidget;
    QLabel *label;
    QLabel *labelMethod;
    QLabel *lblSize;
    QgsColorRampButton *btnColorRamp;
    QLabel *label_4;
    QHBoxLayout *layoutSize;
    QgsDoubleSpinBox *minSizeSpinBox;
    QLabel *lblSizeTo;
    QgsDoubleSpinBox *maxSizeSpinBox;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *txtLegendFormat;
    QgsSpinBox *spinPrecision;
    QCheckBox *cbxTrimTrailingZeroes;
    QgsSymbolButton *btnChangeGraduatedSymbol;
    QLabel *lblColorRamp;
    QLabel *label_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QFormLayout *mParametersLayout;
    QgsCollapsibleGroupBoxBasic *mGroupBoxSymmetric;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *cboSymmetryPoint;
    QCheckBox *cbxAstride;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QComboBox *cboGraduatedMode;
    QWidget *widget;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QgsSpinBox *spinGraduatedClasses;
    QTreeView *viewGraduated;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnGraduatedClassify;
    QPushButton *btnGraduatedAdd;
    QPushButton *btnGraduatedDelete;
    QPushButton *btnDeleteAllClasses;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAdvanced;
    QHBoxLayout *_2;
    QCheckBox *cbxLinkBoundaries;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QgsGraduatedHistogramWidget *mHistogramWidget;

    void setupUi(QWidget *QgsGraduatedSymbolRendererWidget)
    {
        if (QgsGraduatedSymbolRendererWidget->objectName().isEmpty())
            QgsGraduatedSymbolRendererWidget->setObjectName(QString::fromUtf8("QgsGraduatedSymbolRendererWidget"));
        QgsGraduatedSymbolRendererWidget->resize(668, 720);
        gridLayout = new QGridLayout(QgsGraduatedSymbolRendererWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        methodComboBox = new QComboBox(QgsGraduatedSymbolRendererWidget);
        methodComboBox->setObjectName(QString::fromUtf8("methodComboBox"));

        gridLayout->addWidget(methodComboBox, 3, 1, 1, 1);

        mExpressionWidget = new QgsFieldExpressionWidget(QgsGraduatedSymbolRendererWidget);
        mExpressionWidget->setObjectName(QString::fromUtf8("mExpressionWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mExpressionWidget->sizePolicy().hasHeightForWidth());
        mExpressionWidget->setSizePolicy(sizePolicy);
        mExpressionWidget->setMinimumSize(QSize(10, 0));
        mExpressionWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExpressionWidget, 0, 1, 1, 1);

        label = new QLabel(QgsGraduatedSymbolRendererWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        labelMethod = new QLabel(QgsGraduatedSymbolRendererWidget);
        labelMethod->setObjectName(QString::fromUtf8("labelMethod"));

        gridLayout->addWidget(labelMethod, 3, 0, 1, 1);

        lblSize = new QLabel(QgsGraduatedSymbolRendererWidget);
        lblSize->setObjectName(QString::fromUtf8("lblSize"));

        gridLayout->addWidget(lblSize, 5, 0, 1, 1);

        btnColorRamp = new QgsColorRampButton(QgsGraduatedSymbolRendererWidget);
        btnColorRamp->setObjectName(QString::fromUtf8("btnColorRamp"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnColorRamp->sizePolicy().hasHeightForWidth());
        btnColorRamp->setSizePolicy(sizePolicy1);
        btnColorRamp->setMinimumSize(QSize(120, 0));
        btnColorRamp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(btnColorRamp, 4, 1, 1, 1);

        label_4 = new QLabel(QgsGraduatedSymbolRendererWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        layoutSize = new QHBoxLayout();
        layoutSize->setObjectName(QString::fromUtf8("layoutSize"));
        minSizeSpinBox = new QgsDoubleSpinBox(QgsGraduatedSymbolRendererWidget);
        minSizeSpinBox->setObjectName(QString::fromUtf8("minSizeSpinBox"));
        minSizeSpinBox->setDecimals(6);
        minSizeSpinBox->setMaximum(999999999.000000000000000);
        minSizeSpinBox->setSingleStep(0.200000000000000);
        minSizeSpinBox->setValue(1.000000000000000);
        minSizeSpinBox->setProperty("showClearButton", QVariant(false));

        layoutSize->addWidget(minSizeSpinBox);

        lblSizeTo = new QLabel(QgsGraduatedSymbolRendererWidget);
        lblSizeTo->setObjectName(QString::fromUtf8("lblSizeTo"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblSizeTo->sizePolicy().hasHeightForWidth());
        lblSizeTo->setSizePolicy(sizePolicy2);

        layoutSize->addWidget(lblSizeTo);

        maxSizeSpinBox = new QgsDoubleSpinBox(QgsGraduatedSymbolRendererWidget);
        maxSizeSpinBox->setObjectName(QString::fromUtf8("maxSizeSpinBox"));
        maxSizeSpinBox->setDecimals(6);
        maxSizeSpinBox->setMaximum(999999999.000000000000000);
        maxSizeSpinBox->setSingleStep(0.200000000000000);
        maxSizeSpinBox->setValue(10.000000000000000);
        maxSizeSpinBox->setProperty("showClearButton", QVariant(false));

        layoutSize->addWidget(maxSizeSpinBox);


        gridLayout->addLayout(layoutSize, 5, 1, 1, 1);

        mSizeUnitWidget = new QgsUnitSelectionWidget(QgsGraduatedSymbolRendererWidget);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(14, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mSizeUnitWidget, 6, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        txtLegendFormat = new QLineEdit(QgsGraduatedSymbolRendererWidget);
        txtLegendFormat->setObjectName(QString::fromUtf8("txtLegendFormat"));
        txtLegendFormat->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(txtLegendFormat);

        spinPrecision = new QgsSpinBox(QgsGraduatedSymbolRendererWidget);
        spinPrecision->setObjectName(QString::fromUtf8("spinPrecision"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinPrecision->sizePolicy().hasHeightForWidth());
        spinPrecision->setSizePolicy(sizePolicy3);
        spinPrecision->setMinimum(0);
        spinPrecision->setMaximum(10);
        spinPrecision->setValue(4);

        horizontalLayout_6->addWidget(spinPrecision);

        cbxTrimTrailingZeroes = new QCheckBox(QgsGraduatedSymbolRendererWidget);
        cbxTrimTrailingZeroes->setObjectName(QString::fromUtf8("cbxTrimTrailingZeroes"));

        horizontalLayout_6->addWidget(cbxTrimTrailingZeroes);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        btnChangeGraduatedSymbol = new QgsSymbolButton(QgsGraduatedSymbolRendererWidget);
        btnChangeGraduatedSymbol->setObjectName(QString::fromUtf8("btnChangeGraduatedSymbol"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnChangeGraduatedSymbol->sizePolicy().hasHeightForWidth());
        btnChangeGraduatedSymbol->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(btnChangeGraduatedSymbol, 1, 1, 1, 1);

        lblColorRamp = new QLabel(QgsGraduatedSymbolRendererWidget);
        lblColorRamp->setObjectName(QString::fromUtf8("lblColorRamp"));

        gridLayout->addWidget(lblColorRamp, 4, 0, 1, 1);

        label_6 = new QLabel(QgsGraduatedSymbolRendererWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        tabWidget = new QTabWidget(QgsGraduatedSymbolRendererWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, -1, 0, -1);
        mParametersLayout = new QFormLayout();
        mParametersLayout->setObjectName(QString::fromUtf8("mParametersLayout"));

        gridLayout_3->addLayout(mParametersLayout, 2, 0, 1, 1);

        mGroupBoxSymmetric = new QgsCollapsibleGroupBoxBasic(tab);
        mGroupBoxSymmetric->setObjectName(QString::fromUtf8("mGroupBoxSymmetric"));
        mGroupBoxSymmetric->setCheckable(true);
        gridLayout_2 = new QGridLayout(mGroupBoxSymmetric);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(mGroupBoxSymmetric);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        cboSymmetryPoint = new QComboBox(mGroupBoxSymmetric);
        cboSymmetryPoint->setObjectName(QString::fromUtf8("cboSymmetryPoint"));
        cboSymmetryPoint->setEditable(true);

        gridLayout_2->addWidget(cboSymmetryPoint, 0, 1, 1, 1);

        cbxAstride = new QCheckBox(mGroupBoxSymmetric);
        cbxAstride->setObjectName(QString::fromUtf8("cbxAstride"));

        gridLayout_2->addWidget(cbxAstride, 2, 0, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);

        gridLayout_3->addWidget(mGroupBoxSymmetric, 3, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        cboGraduatedMode = new QComboBox(tab);
        cboGraduatedMode->setObjectName(QString::fromUtf8("cboGraduatedMode"));
        cboGraduatedMode->setEditable(false);

        horizontalLayout_5->addWidget(cboGraduatedMode);

        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout_5->addWidget(widget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        spinGraduatedClasses = new QgsSpinBox(tab);
        spinGraduatedClasses->setObjectName(QString::fromUtf8("spinGraduatedClasses"));
        sizePolicy3.setHeightForWidth(spinGraduatedClasses->sizePolicy().hasHeightForWidth());
        spinGraduatedClasses->setSizePolicy(sizePolicy3);
        spinGraduatedClasses->setMinimum(1);
        spinGraduatedClasses->setMaximum(999);
        spinGraduatedClasses->setValue(5);

        horizontalLayout_5->addWidget(spinGraduatedClasses);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 3);

        viewGraduated = new QTreeView(tab);
        viewGraduated->setObjectName(QString::fromUtf8("viewGraduated"));
        viewGraduated->setContextMenuPolicy(Qt::CustomContextMenu);
        viewGraduated->setProperty("showDropIndicator", QVariant(true));
        viewGraduated->setDragDropMode(QAbstractItemView::InternalMove);
        viewGraduated->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewGraduated->setRootIsDecorated(false);
        viewGraduated->setItemsExpandable(false);
        viewGraduated->setSortingEnabled(true);

        gridLayout_3->addWidget(viewGraduated, 0, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnGraduatedClassify = new QPushButton(tab);
        btnGraduatedClassify->setObjectName(QString::fromUtf8("btnGraduatedClassify"));

        horizontalLayout_3->addWidget(btnGraduatedClassify);

        btnGraduatedAdd = new QPushButton(tab);
        btnGraduatedAdd->setObjectName(QString::fromUtf8("btnGraduatedAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnGraduatedAdd->setIcon(icon);

        horizontalLayout_3->addWidget(btnGraduatedAdd);

        btnGraduatedDelete = new QPushButton(tab);
        btnGraduatedDelete->setObjectName(QString::fromUtf8("btnGraduatedDelete"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnGraduatedDelete->setIcon(icon1);

        horizontalLayout_3->addWidget(btnGraduatedDelete);

        btnDeleteAllClasses = new QPushButton(tab);
        btnDeleteAllClasses->setObjectName(QString::fromUtf8("btnDeleteAllClasses"));

        horizontalLayout_3->addWidget(btnDeleteAllClasses);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnAdvanced = new QPushButton(tab);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));

        horizontalLayout_3->addWidget(btnAdvanced);


        gridLayout_3->addLayout(horizontalLayout_3, 4, 0, 1, 3);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        cbxLinkBoundaries = new QCheckBox(tab);
        cbxLinkBoundaries->setObjectName(QString::fromUtf8("cbxLinkBoundaries"));
        cbxLinkBoundaries->setChecked(true);

        _2->addWidget(cbxLinkBoundaries);


        gridLayout_3->addLayout(_2, 5, 0, 1, 3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mHistogramWidget = new QgsGraduatedHistogramWidget(tab_2);
        mHistogramWidget->setObjectName(QString::fromUtf8("mHistogramWidget"));

        verticalLayout_2->addWidget(mHistogramWidget);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 7, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label->setBuddy(txtLegendFormat);
        lblSize->setBuddy(minSizeSpinBox);
        lblColorRamp->setBuddy(btnColorRamp);
        label_6->setBuddy(btnChangeGraduatedSymbol);
        label_8->setBuddy(cboGraduatedMode);
        label_5->setBuddy(spinGraduatedClasses);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(mExpressionWidget, btnChangeGraduatedSymbol);
        QWidget::setTabOrder(btnChangeGraduatedSymbol, txtLegendFormat);
        QWidget::setTabOrder(txtLegendFormat, spinPrecision);
        QWidget::setTabOrder(spinPrecision, cbxTrimTrailingZeroes);
        QWidget::setTabOrder(cbxTrimTrailingZeroes, methodComboBox);
        QWidget::setTabOrder(methodComboBox, btnColorRamp);
        QWidget::setTabOrder(btnColorRamp, minSizeSpinBox);
        QWidget::setTabOrder(minSizeSpinBox, maxSizeSpinBox);
        QWidget::setTabOrder(maxSizeSpinBox, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, tabWidget);
        QWidget::setTabOrder(tabWidget, viewGraduated);
        QWidget::setTabOrder(viewGraduated, cboGraduatedMode);
        QWidget::setTabOrder(cboGraduatedMode, spinGraduatedClasses);
        QWidget::setTabOrder(spinGraduatedClasses, mGroupBoxSymmetric);
        QWidget::setTabOrder(mGroupBoxSymmetric, cboSymmetryPoint);
        QWidget::setTabOrder(cboSymmetryPoint, cbxAstride);
        QWidget::setTabOrder(cbxAstride, btnGraduatedClassify);
        QWidget::setTabOrder(btnGraduatedClassify, btnGraduatedAdd);
        QWidget::setTabOrder(btnGraduatedAdd, btnGraduatedDelete);
        QWidget::setTabOrder(btnGraduatedDelete, btnDeleteAllClasses);
        QWidget::setTabOrder(btnDeleteAllClasses, btnAdvanced);
        QWidget::setTabOrder(btnAdvanced, cbxLinkBoundaries);

        retranslateUi(QgsGraduatedSymbolRendererWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsGraduatedSymbolRendererWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsGraduatedSymbolRendererWidget)
    {
#if QT_CONFIG(tooltip)
        methodComboBox->setToolTip(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "<html><head/><body><p>Choose between color and size graduation. </p><p><br/></p><p>If you want to combine both, use a data-defined size for the symbol and graduate by color.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Legend format", nullptr));
        labelMethod->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Method", nullptr));
        lblSize->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Size from", nullptr));
        label_4->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Value", nullptr));
        lblSizeTo->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "to", nullptr));
#if QT_CONFIG(tooltip)
        txtLegendFormat->setToolTip(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Template for the legend text associated with each classification.  \n"
"Use \"%1\" for the lower bound of the classification, and \"%2\" for the upper bound.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spinPrecision->setToolTip(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Precision of upper and lower values in label text.\n"
"Positive is number of decimal places\n"
"Negative rounds to powers of 10", nullptr));
#endif // QT_CONFIG(tooltip)
        spinPrecision->setPrefix(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Precision ", nullptr));
#if QT_CONFIG(tooltip)
        cbxTrimTrailingZeroes->setToolTip(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Check to remove trailing zeroes after the decimal point from the upper and lower values in the legend.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbxTrimTrailingZeroes->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Trim", nullptr));
        btnChangeGraduatedSymbol->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Change\342\200\246", nullptr));
        lblColorRamp->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Color ramp", nullptr));
        label_6->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Symbol", nullptr));
        mGroupBoxSymmetric->setTitle(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Symmetric Classification", nullptr));
        label_2->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Around", nullptr));
        cbxAstride->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Create class astride symmetry value", nullptr));
        label_8->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Mode", nullptr));
        label_5->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Classes", nullptr));
        btnGraduatedClassify->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Classify", nullptr));
#if QT_CONFIG(tooltip)
        btnGraduatedAdd->setToolTip(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Add class", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnGraduatedDelete->setToolTip(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDeleteAllClasses->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Delete All", nullptr));
        btnAdvanced->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Advanced", nullptr));
        cbxLinkBoundaries->setText(QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Link class boundaries", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Classes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("QgsGraduatedSymbolRendererWidget", "Histogram", nullptr));
        (void)QgsGraduatedSymbolRendererWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsGraduatedSymbolRendererWidget: public Ui_QgsGraduatedSymbolRendererWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGRADUATEDSYMBOLRENDERERWIDGET_H
