/********************************************************************************
** Form generated from reading UI file 'qgsdiagramwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDIAGRAMWIDGET_H
#define UI_QGSDIAGRAMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDiagramWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *mDiagramTypeComboBox;
    QToolButton *mEngineSettingsButton;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *QgsDiagramWidget)
    {
        if (QgsDiagramWidget->objectName().isEmpty())
            QgsDiagramWidget->setObjectName(QString::fromUtf8("QgsDiagramWidget"));
        QgsDiagramWidget->resize(842, 472);
        gridLayout = new QGridLayout(QgsDiagramWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mDiagramTypeComboBox = new QComboBox(QgsDiagramWidget);
        mDiagramTypeComboBox->setObjectName(QString::fromUtf8("mDiagramTypeComboBox"));

        horizontalLayout_4->addWidget(mDiagramTypeComboBox);

        mEngineSettingsButton = new QToolButton(QgsDiagramWidget);
        mEngineSettingsButton->setObjectName(QString::fromUtf8("mEngineSettingsButton"));
        mEngineSettingsButton->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconAutoPlacementSettings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEngineSettingsButton->setIcon(icon);

        horizontalLayout_4->addWidget(mEngineSettingsButton);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsDiagramWidget);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mStackedWidget, 1, 0, 1, 1);


        retranslateUi(QgsDiagramWidget);

        QMetaObject::connectSlotsByName(QgsDiagramWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsDiagramWidget)
    {
#if QT_CONFIG(tooltip)
        mEngineSettingsButton->setToolTip(QCoreApplication::translate("QgsDiagramWidget", "Automated placement settings (applies to all layers)", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)QgsDiagramWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsDiagramWidget: public Ui_QgsDiagramWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDIAGRAMWIDGET_H
