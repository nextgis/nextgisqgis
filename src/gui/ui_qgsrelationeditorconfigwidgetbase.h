/********************************************************************************
** Form generated from reading UI file 'qgsrelationeditorconfigwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONEDITORCONFIGWIDGETBASE_H
#define UI_QGSRELATIONEDITORCONFIGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRelationEditorConfigWidgetBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mShowFirstFeature;
    QGroupBox *mButtonsVisibility;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *mRelationShowLinkCheckBox;
    QCheckBox *mRelationShowUnlinkCheckBox;
    QCheckBox *mRelationShowSaveChildEditsCheckBox;
    QCheckBox *mRelationShowAddChildCheckBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mAllowAddChildFeatureWithNoGeometry;
    QCheckBox *mRelationShowDuplicateChildFeatureCheckBox;
    QCheckBox *mRelationDeleteChildFeatureCheckBox;
    QCheckBox *mRelationShowZoomToFeatureCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *filterExpressionLabel;
    QToolButton *mEditExpression;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *mFilterExpression;

    void setupUi(QWidget *QgsRelationEditorConfigWidgetBase)
    {
        if (QgsRelationEditorConfigWidgetBase->objectName().isEmpty())
            QgsRelationEditorConfigWidgetBase->setObjectName(QString::fromUtf8("QgsRelationEditorConfigWidgetBase"));
        QgsRelationEditorConfigWidgetBase->resize(486, 494);
        gridLayout = new QGridLayout(QgsRelationEditorConfigWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mShowFirstFeature = new QCheckBox(QgsRelationEditorConfigWidgetBase);
        mShowFirstFeature->setObjectName(QString::fromUtf8("mShowFirstFeature"));

        gridLayout->addWidget(mShowFirstFeature, 0, 0, 1, 1);

        mButtonsVisibility = new QGroupBox(QgsRelationEditorConfigWidgetBase);
        mButtonsVisibility->setObjectName(QString::fromUtf8("mButtonsVisibility"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(4);
        sizePolicy.setHeightForWidth(mButtonsVisibility->sizePolicy().hasHeightForWidth());
        mButtonsVisibility->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(mButtonsVisibility);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mRelationShowLinkCheckBox = new QCheckBox(mButtonsVisibility);
        mRelationShowLinkCheckBox->setObjectName(QString::fromUtf8("mRelationShowLinkCheckBox"));

        verticalLayout_2->addWidget(mRelationShowLinkCheckBox);

        mRelationShowUnlinkCheckBox = new QCheckBox(mButtonsVisibility);
        mRelationShowUnlinkCheckBox->setObjectName(QString::fromUtf8("mRelationShowUnlinkCheckBox"));

        verticalLayout_2->addWidget(mRelationShowUnlinkCheckBox);

        mRelationShowSaveChildEditsCheckBox = new QCheckBox(mButtonsVisibility);
        mRelationShowSaveChildEditsCheckBox->setObjectName(QString::fromUtf8("mRelationShowSaveChildEditsCheckBox"));

        verticalLayout_2->addWidget(mRelationShowSaveChildEditsCheckBox);

        mRelationShowAddChildCheckBox = new QCheckBox(mButtonsVisibility);
        mRelationShowAddChildCheckBox->setObjectName(QString::fromUtf8("mRelationShowAddChildCheckBox"));

        verticalLayout_2->addWidget(mRelationShowAddChildCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mAllowAddChildFeatureWithNoGeometry = new QCheckBox(mButtonsVisibility);
        mAllowAddChildFeatureWithNoGeometry->setObjectName(QString::fromUtf8("mAllowAddChildFeatureWithNoGeometry"));

        horizontalLayout->addWidget(mAllowAddChildFeatureWithNoGeometry);


        verticalLayout_2->addLayout(horizontalLayout);

        mRelationShowDuplicateChildFeatureCheckBox = new QCheckBox(mButtonsVisibility);
        mRelationShowDuplicateChildFeatureCheckBox->setObjectName(QString::fromUtf8("mRelationShowDuplicateChildFeatureCheckBox"));

        verticalLayout_2->addWidget(mRelationShowDuplicateChildFeatureCheckBox);

        mRelationDeleteChildFeatureCheckBox = new QCheckBox(mButtonsVisibility);
        mRelationDeleteChildFeatureCheckBox->setObjectName(QString::fromUtf8("mRelationDeleteChildFeatureCheckBox"));

        verticalLayout_2->addWidget(mRelationDeleteChildFeatureCheckBox);

        mRelationShowZoomToFeatureCheckBox = new QCheckBox(mButtonsVisibility);
        mRelationShowZoomToFeatureCheckBox->setObjectName(QString::fromUtf8("mRelationShowZoomToFeatureCheckBox"));

        verticalLayout_2->addWidget(mRelationShowZoomToFeatureCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 10, -1, -1);
        filterExpressionLabel = new QLabel(mButtonsVisibility);
        filterExpressionLabel->setObjectName(QString::fromUtf8("filterExpressionLabel"));

        horizontalLayout_2->addWidget(filterExpressionLabel);

        mEditExpression = new QToolButton(mButtonsVisibility);
        mEditExpression->setObjectName(QString::fromUtf8("mEditExpression"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEditExpression->setIcon(icon);

        horizontalLayout_2->addWidget(mEditExpression);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        mFilterExpression = new QTextEdit(mButtonsVisibility);
        mFilterExpression->setObjectName(QString::fromUtf8("mFilterExpression"));

        verticalLayout_2->addWidget(mFilterExpression);


        gridLayout->addWidget(mButtonsVisibility, 1, 0, 1, 1);


        retranslateUi(QgsRelationEditorConfigWidgetBase);

        QMetaObject::connectSlotsByName(QgsRelationEditorConfigWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRelationEditorConfigWidgetBase)
    {
        QgsRelationEditorConfigWidgetBase->setWindowTitle(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Attribute Widget Relation Edit Widget", nullptr));
#if QT_CONFIG(tooltip)
        mShowFirstFeature->setToolTip(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Unchecking this can lead to faster loading time of attribute forms and avoid unnecessary queries.", nullptr));
#endif // QT_CONFIG(tooltip)
        mShowFirstFeature->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Automatically select first child feature and show attribute form", nullptr));
        mButtonsVisibility->setTitle(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Buttons and Context Menu", nullptr));
        mRelationShowLinkCheckBox->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Link child feature", nullptr));
        mRelationShowUnlinkCheckBox->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Unlink child feature", nullptr));
        mRelationShowSaveChildEditsCheckBox->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Save child layer edits", nullptr));
        mRelationShowAddChildCheckBox->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Add child feature", nullptr));
#if QT_CONFIG(tooltip)
        mAllowAddChildFeatureWithNoGeometry->setToolTip(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "<html><head/><body><p>If checked, it is possible to add a feature without geometry to a spatial layer. Two &quot;Add child feature&quot; buttons are showed: with and without geometry.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mAllowAddChildFeatureWithNoGeometry->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Allow add child feature with no geometry (for spatial layer)", nullptr));
        mRelationShowDuplicateChildFeatureCheckBox->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Duplicate child feature", nullptr));
        mRelationDeleteChildFeatureCheckBox->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Delete child feature", nullptr));
        mRelationShowZoomToFeatureCheckBox->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Zoom to child feature", nullptr));
        filterExpressionLabel->setText(QCoreApplication::translate("QgsRelationEditorConfigWidgetBase", "Filter expression", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRelationEditorConfigWidgetBase: public Ui_QgsRelationEditorConfigWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONEDITORCONFIGWIDGETBASE_H
