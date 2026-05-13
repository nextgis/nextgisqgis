/********************************************************************************
** Form generated from reading UI file 'qgsrasterlabelingwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERLABELINGWIDGETBASE_H
#define UI_QGSRASTERLABELINGWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLabelingWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *mLabelModeComboBox;
    QToolButton *mLabelRulesButton;
    QToolButton *mEngineSettingsButton;
    QStackedWidget *mStackedWidget;

    void setupUi(QWidget *QgsRasterLabelingWidgetBase)
    {
        if (QgsRasterLabelingWidgetBase->objectName().isEmpty())
            QgsRasterLabelingWidgetBase->setObjectName(QString::fromUtf8("QgsRasterLabelingWidgetBase"));
        QgsRasterLabelingWidgetBase->resize(572, 300);
        verticalLayout = new QVBoxLayout(QgsRasterLabelingWidgetBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mLabelModeComboBox = new QComboBox(QgsRasterLabelingWidgetBase);
        mLabelModeComboBox->setObjectName(QString::fromUtf8("mLabelModeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelModeComboBox->sizePolicy().hasHeightForWidth());
        mLabelModeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mLabelModeComboBox);

        mLabelRulesButton = new QToolButton(QgsRasterLabelingWidgetBase);
        mLabelRulesButton->setObjectName(QString::fromUtf8("mLabelRulesButton"));
        mLabelRulesButton->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconLabelingRules.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLabelRulesButton->setIcon(icon);

        horizontalLayout->addWidget(mLabelRulesButton);

        mEngineSettingsButton = new QToolButton(QgsRasterLabelingWidgetBase);
        mEngineSettingsButton->setObjectName(QString::fromUtf8("mEngineSettingsButton"));
        mEngineSettingsButton->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconAutoPlacementSettings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEngineSettingsButton->setIcon(icon1);

        horizontalLayout->addWidget(mEngineSettingsButton);


        verticalLayout->addLayout(horizontalLayout);

        mStackedWidget = new QStackedWidget(QgsRasterLabelingWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));

        verticalLayout->addWidget(mStackedWidget);


        retranslateUi(QgsRasterLabelingWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterLabelingWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterLabelingWidgetBase)
    {
#if QT_CONFIG(tooltip)
        mLabelRulesButton->setToolTip(QCoreApplication::translate("QgsRasterLabelingWidgetBase", "Configure project labeling rules", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mEngineSettingsButton->setToolTip(QCoreApplication::translate("QgsRasterLabelingWidgetBase", "Automated placement settings (applies to all layers)", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsRasterLabelingWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLabelingWidgetBase: public Ui_QgsRasterLabelingWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLABELINGWIDGETBASE_H
