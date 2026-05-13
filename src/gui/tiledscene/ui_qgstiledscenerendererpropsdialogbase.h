/********************************************************************************
** Form generated from reading UI file 'qgstiledscenerendererpropsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILEDSCENERENDERERPROPSDIALOGBASE_H
#define UI_QGSTILEDSCENERENDERERPROPSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgsdoublespinbox.h"
#include "qgsopacitywidget.h"
#include "qgspanelwidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTiledSceneRendererPropsDialogBase
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
    QGroupBox *mLayerRenderingGroupBox;
    QGridLayout *gridLayout;
    QLabel *lblTransparency;
    QLabel *lblTransparency_2;
    QLabel *lblBlend;
    QgsDoubleSpinBox *mMaxErrorSpinBox;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QgsOpacityWidget *mOpacityWidget;
    QgsUnitSelectionWidget *mMaxErrorUnitWidget;

    void setupUi(QgsPanelWidget *QgsTiledSceneRendererPropsDialogBase)
    {
        if (QgsTiledSceneRendererPropsDialogBase->objectName().isEmpty())
            QgsTiledSceneRendererPropsDialogBase->setObjectName(QString::fromUtf8("QgsTiledSceneRendererPropsDialogBase"));
        QgsTiledSceneRendererPropsDialogBase->resize(569, 529);
        verticalLayout_5 = new QVBoxLayout(QgsTiledSceneRendererPropsDialogBase);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mainStack = new QStackedWidget(QgsTiledSceneRendererPropsDialogBase);
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

        mLayerRenderingGroupBox = new QGroupBox(page);
        mLayerRenderingGroupBox->setObjectName(QString::fromUtf8("mLayerRenderingGroupBox"));
        mLayerRenderingGroupBox->setFlat(true);
        mLayerRenderingGroupBox->setCheckable(false);
        gridLayout = new QGridLayout(mLayerRenderingGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 3, -1);
        lblTransparency = new QLabel(mLayerRenderingGroupBox);
        lblTransparency->setObjectName(QString::fromUtf8("lblTransparency"));

        gridLayout->addWidget(lblTransparency, 1, 0, 1, 1);

        lblTransparency_2 = new QLabel(mLayerRenderingGroupBox);
        lblTransparency_2->setObjectName(QString::fromUtf8("lblTransparency_2"));

        gridLayout->addWidget(lblTransparency_2, 0, 0, 1, 1);

        lblBlend = new QLabel(mLayerRenderingGroupBox);
        lblBlend->setObjectName(QString::fromUtf8("lblBlend"));

        gridLayout->addWidget(lblBlend, 2, 0, 1, 1);

        mMaxErrorSpinBox = new QgsDoubleSpinBox(mLayerRenderingGroupBox);
        mMaxErrorSpinBox->setObjectName(QString::fromUtf8("mMaxErrorSpinBox"));
        mMaxErrorSpinBox->setDecimals(6);
        mMaxErrorSpinBox->setMaximum(99999999999.000000000000000);
        mMaxErrorSpinBox->setValue(0.300000000000000);

        gridLayout->addWidget(mMaxErrorSpinBox, 0, 1, 1, 2);

        mBlendModeComboBox = new QgsBlendModeComboBox(mLayerRenderingGroupBox);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));
        sizePolicy.setHeightForWidth(mBlendModeComboBox->sizePolicy().hasHeightForWidth());
        mBlendModeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mBlendModeComboBox, 2, 1, 1, 3);

        mOpacityWidget = new QgsOpacityWidget(mLayerRenderingGroupBox);
        mOpacityWidget->setObjectName(QString::fromUtf8("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOpacityWidget, 1, 1, 1, 3);

        mMaxErrorUnitWidget = new QgsUnitSelectionWidget(mLayerRenderingGroupBox);
        mMaxErrorUnitWidget->setObjectName(QString::fromUtf8("mMaxErrorUnitWidget"));
        mMaxErrorUnitWidget->setMinimumSize(QSize(0, 0));
        mMaxErrorUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mMaxErrorUnitWidget, 0, 3, 1, 1);


        verticalLayout_2->addWidget(mLayerRenderingGroupBox);


        verticalLayout_4->addLayout(verticalLayout_2);

        mainStack->addWidget(page);

        verticalLayout_5->addWidget(mainStack);

        QWidget::setTabOrder(cboRenderers, mMaxErrorSpinBox);
        QWidget::setTabOrder(mMaxErrorSpinBox, mMaxErrorUnitWidget);
        QWidget::setTabOrder(mMaxErrorUnitWidget, mOpacityWidget);
        QWidget::setTabOrder(mOpacityWidget, mBlendModeComboBox);

        retranslateUi(QgsTiledSceneRendererPropsDialogBase);

        QMetaObject::connectSlotsByName(QgsTiledSceneRendererPropsDialogBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsTiledSceneRendererPropsDialogBase)
    {
        QgsTiledSceneRendererPropsDialogBase->setWindowTitle(QCoreApplication::translate("QgsTiledSceneRendererPropsDialogBase", "Renderer Settings", nullptr));
        label->setText(QCoreApplication::translate("QgsTiledSceneRendererPropsDialogBase", "This renderer doesn't implement a graphical interface.", nullptr));
        mLayerRenderingGroupBox->setTitle(QCoreApplication::translate("QgsTiledSceneRendererPropsDialogBase", "Layer Rendering", nullptr));
        lblTransparency->setText(QCoreApplication::translate("QgsTiledSceneRendererPropsDialogBase", "Opacity", nullptr));
        lblTransparency_2->setText(QCoreApplication::translate("QgsTiledSceneRendererPropsDialogBase", "Maximum error", nullptr));
        lblBlend->setText(QCoreApplication::translate("QgsTiledSceneRendererPropsDialogBase", "Blending mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTiledSceneRendererPropsDialogBase: public Ui_QgsTiledSceneRendererPropsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILEDSCENERENDERERPROPSDIALOGBASE_H
