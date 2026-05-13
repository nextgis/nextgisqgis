/********************************************************************************
** Form generated from reading UI file 'qgslabelingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGWIDGET_H
#define UI_QGSLABELINGWIDGET_H

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

class Ui_QgsLabelingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *mLabelModeComboBox;
    QToolButton *mLabelRulesButton;
    QToolButton *mEngineSettingsButton;
    QStackedWidget *mStackedWidget;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QWidget *QgsLabelingWidget)
    {
        if (QgsLabelingWidget->objectName().isEmpty())
            QgsLabelingWidget->setObjectName(QString::fromUtf8("QgsLabelingWidget"));
        QgsLabelingWidget->resize(572, 300);
        verticalLayout = new QVBoxLayout(QgsLabelingWidget);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mLabelModeComboBox = new QComboBox(QgsLabelingWidget);
        mLabelModeComboBox->setObjectName(QString::fromUtf8("mLabelModeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelModeComboBox->sizePolicy().hasHeightForWidth());
        mLabelModeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mLabelModeComboBox);

        mLabelRulesButton = new QToolButton(QgsLabelingWidget);
        mLabelRulesButton->setObjectName(QString::fromUtf8("mLabelRulesButton"));
        mLabelRulesButton->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconLabelingRules.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLabelRulesButton->setIcon(icon);

        horizontalLayout->addWidget(mLabelRulesButton);

        mEngineSettingsButton = new QToolButton(QgsLabelingWidget);
        mEngineSettingsButton->setObjectName(QString::fromUtf8("mEngineSettingsButton"));
        mEngineSettingsButton->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconAutoPlacementSettings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEngineSettingsButton->setIcon(icon1);

        horizontalLayout->addWidget(mEngineSettingsButton);


        verticalLayout->addLayout(horizontalLayout);

        mStackedWidget = new QStackedWidget(QgsLabelingWidget);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));

        verticalLayout->addWidget(mStackedWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);

        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(mLabelModeComboBox, mLabelRulesButton);
        QWidget::setTabOrder(mLabelRulesButton, mEngineSettingsButton);

        retranslateUi(QgsLabelingWidget);

        QMetaObject::connectSlotsByName(QgsLabelingWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelingWidget)
    {
#if QT_CONFIG(tooltip)
        mLabelRulesButton->setToolTip(QCoreApplication::translate("QgsLabelingWidget", "Configure project labeling rules", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mEngineSettingsButton->setToolTip(QCoreApplication::translate("QgsLabelingWidget", "Automated placement settings (applies to all layers)", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsLabelingWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingWidget: public Ui_QgsLabelingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGWIDGET_H
