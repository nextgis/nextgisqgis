/********************************************************************************
** Form generated from reading UI file 'qgsgeometryvalidationdockbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOMETRYVALIDATIONDOCKBASE_H
#define UI_QGSGEOMETRYVALIDATIONDOCKBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGeometryValidationDockBase
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *mZoomToFeatureButton;
    QToolButton *mNextButton;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *mZoomToProblemButton;
    QToolButton *mPreviousButton;
    QListView *mErrorListView;
    QWidget *mProblemDetailWidget;
    QGridLayout *gridLayout;
    QLabel *mProblemDescriptionLabel;
    QWidget *mResolutionWidget;

    void setupUi(QgsDockWidget *QgsGeometryValidationDockBase)
    {
        if (QgsGeometryValidationDockBase->objectName().isEmpty())
            QgsGeometryValidationDockBase->setObjectName(QString::fromUtf8("QgsGeometryValidationDockBase"));
        QgsGeometryValidationDockBase->resize(616, 968);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 5, 1, 1);

        mZoomToFeatureButton = new QToolButton(dockWidgetContents);
        mZoomToFeatureButton->setObjectName(QString::fromUtf8("mZoomToFeatureButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mZoomToFeatureButton->setIcon(icon);
        mZoomToFeatureButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(mZoomToFeatureButton, 0, 3, 1, 1);

        mNextButton = new QToolButton(dockWidgetContents);
        mNextButton->setObjectName(QString::fromUtf8("mNextButton"));
        mNextButton->setArrowType(Qt::RightArrow);

        gridLayout_2->addWidget(mNextButton, 0, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        mZoomToProblemButton = new QToolButton(dockWidgetContents);
        mZoomToProblemButton->setObjectName(QString::fromUtf8("mZoomToProblemButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mZoomToProblemButton->setIcon(icon1);
        mZoomToProblemButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(mZoomToProblemButton, 0, 4, 1, 1);

        mPreviousButton = new QToolButton(dockWidgetContents);
        mPreviousButton->setObjectName(QString::fromUtf8("mPreviousButton"));
        mPreviousButton->setArrowType(Qt::LeftArrow);

        gridLayout_2->addWidget(mPreviousButton, 0, 1, 1, 1);

        mErrorListView = new QListView(dockWidgetContents);
        mErrorListView->setObjectName(QString::fromUtf8("mErrorListView"));

        gridLayout_2->addWidget(mErrorListView, 1, 0, 1, 8);

        mProblemDetailWidget = new QWidget(dockWidgetContents);
        mProblemDetailWidget->setObjectName(QString::fromUtf8("mProblemDetailWidget"));
        gridLayout = new QGridLayout(mProblemDetailWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mProblemDescriptionLabel = new QLabel(mProblemDetailWidget);
        mProblemDescriptionLabel->setObjectName(QString::fromUtf8("mProblemDescriptionLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mProblemDescriptionLabel->sizePolicy().hasHeightForWidth());
        mProblemDescriptionLabel->setSizePolicy(sizePolicy);
        mProblemDescriptionLabel->setWordWrap(true);

        gridLayout->addWidget(mProblemDescriptionLabel, 0, 2, 1, 4);

        mResolutionWidget = new QWidget(mProblemDetailWidget);
        mResolutionWidget->setObjectName(QString::fromUtf8("mResolutionWidget"));
        sizePolicy.setHeightForWidth(mResolutionWidget->sizePolicy().hasHeightForWidth());
        mResolutionWidget->setSizePolicy(sizePolicy);
        mResolutionWidget->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(mResolutionWidget, 3, 2, 1, 4);


        gridLayout_2->addWidget(mProblemDetailWidget, 2, 0, 1, 8);

        QgsGeometryValidationDockBase->setWidget(dockWidgetContents);
        QWidget::setTabOrder(mPreviousButton, mZoomToFeatureButton);
        QWidget::setTabOrder(mZoomToFeatureButton, mZoomToProblemButton);
        QWidget::setTabOrder(mZoomToProblemButton, mNextButton);
        QWidget::setTabOrder(mNextButton, mErrorListView);

        retranslateUi(QgsGeometryValidationDockBase);

        QMetaObject::connectSlotsByName(QgsGeometryValidationDockBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsGeometryValidationDockBase)
    {
        QgsGeometryValidationDockBase->setWindowTitle(QCoreApplication::translate("QgsGeometryValidationDockBase", "Geometry Validation", nullptr));
        mZoomToFeatureButton->setText(QCoreApplication::translate("QgsGeometryValidationDockBase", "Zoom To Feature(s)", nullptr));
        mNextButton->setText(QCoreApplication::translate("QgsGeometryValidationDockBase", "Next", nullptr));
        mZoomToProblemButton->setText(QCoreApplication::translate("QgsGeometryValidationDockBase", "Zoom To Problem", nullptr));
        mPreviousButton->setText(QCoreApplication::translate("QgsGeometryValidationDockBase", "Previous", nullptr));
        mProblemDescriptionLabel->setText(QCoreApplication::translate("QgsGeometryValidationDockBase", "Detailed Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGeometryValidationDockBase: public Ui_QgsGeometryValidationDockBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOMETRYVALIDATIONDOCKBASE_H
