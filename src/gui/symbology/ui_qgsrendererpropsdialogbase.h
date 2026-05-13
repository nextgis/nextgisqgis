/********************************************************************************
** Form generated from reading UI file 'qgsrendererpropsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERPROPSDIALOGBASE_H
#define UI_QGSRENDERERPROPSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgseffectstackpropertieswidget.h"
#include "qgsopacitywidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererPropsDialogBase
{
public:
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *mainStack;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cboRenderers;
    QStackedWidget *stackedWidget;
    QWidget *pageNoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsCollapsibleGroupBox *mLayerRenderingGroupBox;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_1;
    QLabel *lblLayerBlend;
    QLabel *lblFeatureBlend;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QgsBlendModeComboBox *mFeatureBlendComboBox;
    QLabel *lblTransparency;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkboxEnableOrderBy;
    QToolButton *btnOrderBy;
    QgsEffectStackCompactWidget *mEffectWidget;
    QLabel *lblBlend;
    QgsOpacityWidget *mOpacityWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRendererPropsDialogBase)
    {
        if (QgsRendererPropsDialogBase->objectName().isEmpty())
            QgsRendererPropsDialogBase->setObjectName(QString::fromUtf8("QgsRendererPropsDialogBase"));
        QgsRendererPropsDialogBase->resize(370, 501);
        verticalLayout_5 = new QVBoxLayout(QgsRendererPropsDialogBase);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mainStack = new QStackedWidget(QgsRendererPropsDialogBase);
        mainStack->setObjectName(QString::fromUtf8("mainStack"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cboRenderers = new QComboBox(page);
        cboRenderers->setObjectName(QString::fromUtf8("cboRenderers"));

        horizontalLayout->addWidget(cboRenderers);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(page);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageNoWidget = new QWidget();
        pageNoWidget->setObjectName(QString::fromUtf8("pageNoWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageNoWidget->sizePolicy().hasHeightForWidth());
        pageNoWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(pageNoWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pageNoWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        stackedWidget->addWidget(pageNoWidget);

        verticalLayout_2->addWidget(stackedWidget);

        mLayerRenderingGroupBox = new QgsCollapsibleGroupBox(page);
        mLayerRenderingGroupBox->setObjectName(QString::fromUtf8("mLayerRenderingGroupBox"));
        mLayerRenderingGroupBox->setFlat(true);
        mLayerRenderingGroupBox->setCheckable(false);
        mLayerRenderingGroupBox->setProperty("collapsed", QVariant(true));
        mLayerRenderingGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout = new QGridLayout(mLayerRenderingGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 3, -1);
        gridLayout_1 = new QGridLayout();
        gridLayout_1->setSpacing(1);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        gridLayout_1->setContentsMargins(0, -1, 0, -1);
        lblLayerBlend = new QLabel(mLayerRenderingGroupBox);
        lblLayerBlend->setObjectName(QString::fromUtf8("lblLayerBlend"));

        gridLayout_1->addWidget(lblLayerBlend, 0, 0, 1, 1);

        lblFeatureBlend = new QLabel(mLayerRenderingGroupBox);
        lblFeatureBlend->setObjectName(QString::fromUtf8("lblFeatureBlend"));

        gridLayout_1->addWidget(lblFeatureBlend, 0, 1, 1, 1);

        mBlendModeComboBox = new QgsBlendModeComboBox(mLayerRenderingGroupBox);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));
        sizePolicy.setHeightForWidth(mBlendModeComboBox->sizePolicy().hasHeightForWidth());
        mBlendModeComboBox->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(mBlendModeComboBox, 1, 0, 1, 1);

        mFeatureBlendComboBox = new QgsBlendModeComboBox(mLayerRenderingGroupBox);
        mFeatureBlendComboBox->setObjectName(QString::fromUtf8("mFeatureBlendComboBox"));
        sizePolicy.setHeightForWidth(mFeatureBlendComboBox->sizePolicy().hasHeightForWidth());
        mFeatureBlendComboBox->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(mFeatureBlendComboBox, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_1, 1, 1, 1, 2);

        lblTransparency = new QLabel(mLayerRenderingGroupBox);
        lblTransparency->setObjectName(QString::fromUtf8("lblTransparency"));

        gridLayout->addWidget(lblTransparency, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkboxEnableOrderBy = new QCheckBox(mLayerRenderingGroupBox);
        checkboxEnableOrderBy->setObjectName(QString::fromUtf8("checkboxEnableOrderBy"));

        horizontalLayout_3->addWidget(checkboxEnableOrderBy);

        btnOrderBy = new QToolButton(mLayerRenderingGroupBox);
        btnOrderBy->setObjectName(QString::fromUtf8("btnOrderBy"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/sort.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnOrderBy->setIcon(icon);

        horizontalLayout_3->addWidget(btnOrderBy);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 3);

        mEffectWidget = new QgsEffectStackCompactWidget(mLayerRenderingGroupBox);
        mEffectWidget->setObjectName(QString::fromUtf8("mEffectWidget"));
        mEffectWidget->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(mEffectWidget, 2, 0, 1, 3);

        lblBlend = new QLabel(mLayerRenderingGroupBox);
        lblBlend->setObjectName(QString::fromUtf8("lblBlend"));

        gridLayout->addWidget(lblBlend, 1, 0, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mLayerRenderingGroupBox);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        sizePolicy.setHeightForWidth(mOpacityWidget->sizePolicy().hasHeightForWidth());
        mOpacityWidget->setSizePolicy(sizePolicy);
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOpacityWidget, 0, 1, 1, 2);


        verticalLayout_2->addWidget(mLayerRenderingGroupBox);

        buttonBox = new QDialogButtonBox(page);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout_4->addLayout(verticalLayout_2);

        mainStack->addWidget(page);

        verticalLayout_5->addWidget(mainStack);

        QWidget::setTabOrder(cboRenderers, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mFeatureBlendComboBox);
        QWidget::setTabOrder(mFeatureBlendComboBox, checkboxEnableOrderBy);
        QWidget::setTabOrder(checkboxEnableOrderBy, btnOrderBy);

        retranslateUi(QgsRendererPropsDialogBase);

        QMetaObject::connectSlotsByName(QgsRendererPropsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRendererPropsDialogBase)
    {
        QgsRendererPropsDialogBase->setWindowTitle(QCoreApplication::translate("QgsRendererPropsDialogBase", "Renderer Settings", nullptr));
        label->setText(QCoreApplication::translate("QgsRendererPropsDialogBase", "This renderer doesn't implement a graphical interface.", nullptr));
        mLayerRenderingGroupBox->setTitle(QCoreApplication::translate("QgsRendererPropsDialogBase", "Layer Rendering", nullptr));
        lblLayerBlend->setText(QCoreApplication::translate("QgsRendererPropsDialogBase", "Layer", nullptr));
        lblFeatureBlend->setText(QCoreApplication::translate("QgsRendererPropsDialogBase", "Feature", nullptr));
        lblTransparency->setText(QCoreApplication::translate("QgsRendererPropsDialogBase", "Opacity", nullptr));
        checkboxEnableOrderBy->setText(QCoreApplication::translate("QgsRendererPropsDialogBase", "Control feature rendering order", nullptr));
        btnOrderBy->setText(QCoreApplication::translate("QgsRendererPropsDialogBase", "\342\200\246", nullptr));
        lblBlend->setText(QCoreApplication::translate("QgsRendererPropsDialogBase", "Blending mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsRendererPropsDialogBase: public Ui_QgsRendererPropsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERPROPSDIALOGBASE_H
