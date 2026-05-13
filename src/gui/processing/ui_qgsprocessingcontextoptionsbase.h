/********************************************************************************
** Form generated from reading UI file 'qgsprocessingcontextoptionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGCONTEXTOPTIONSBASE_H
#define UI_QGSPROCESSINGCONTEXTOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsfilewidget.h"
#include "qgspanelwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingContextOptionsBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_4;
    QgsSpinBox *mThreadsSpinBox;
    QgsFileWidget *mTemporaryFolderWidget;
    QLabel *label_6;
    QComboBox *mLogLevelComboBox;
    QComboBox *mComboInvalidFeatureFiltering;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *mDistanceUnitsCombo;
    QLabel *label_3;
    QComboBox *mAreaUnitsCombo;
    QSpacerItem *verticalSpacer;

    void setupUi(QgsPanelWidget *QgsProcessingContextOptionsBase)
    {
        if (QgsProcessingContextOptionsBase->objectName().isEmpty())
            QgsProcessingContextOptionsBase->setObjectName(QString::fromUtf8("QgsProcessingContextOptionsBase"));
        QgsProcessingContextOptionsBase->resize(448, 328);
        QgsProcessingContextOptionsBase->setWindowTitle(QString::fromUtf8("Processing Context Options"));
        verticalLayout = new QVBoxLayout(QgsProcessingContextOptionsBase);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QgsScrollArea(QgsProcessingContextOptionsBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 328));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        mThreadsSpinBox = new QgsSpinBox(groupBox_2);
        mThreadsSpinBox->setObjectName(QString::fromUtf8("mThreadsSpinBox"));

        gridLayout_3->addWidget(mThreadsSpinBox, 1, 1, 1, 1);

        mTemporaryFolderWidget = new QgsFileWidget(groupBox_2);
        mTemporaryFolderWidget->setObjectName(QString::fromUtf8("mTemporaryFolderWidget"));

        gridLayout_3->addWidget(mTemporaryFolderWidget, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        mLogLevelComboBox = new QComboBox(groupBox_2);
        mLogLevelComboBox->setObjectName(QString::fromUtf8("mLogLevelComboBox"));

        gridLayout_3->addWidget(mLogLevelComboBox, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 2);

        mComboInvalidFeatureFiltering = new QComboBox(scrollAreaWidgetContents);
        mComboInvalidFeatureFiltering->setObjectName(QString::fromUtf8("mComboInvalidFeatureFiltering"));

        gridLayout->addWidget(mComboInvalidFeatureFiltering, 1, 1, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        mDistanceUnitsCombo = new QComboBox(groupBox);
        mDistanceUnitsCombo->setObjectName(QString::fromUtf8("mDistanceUnitsCombo"));

        gridLayout_2->addWidget(mDistanceUnitsCombo, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        mAreaUnitsCombo = new QComboBox(groupBox);
        mAreaUnitsCombo->setObjectName(QString::fromUtf8("mAreaUnitsCombo"));

        gridLayout_2->addWidget(mAreaUnitsCombo, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(QgsProcessingContextOptionsBase);

        QMetaObject::connectSlotsByName(QgsProcessingContextOptionsBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsProcessingContextOptionsBase)
    {
        label->setText(QCoreApplication::translate("QgsProcessingContextOptionsBase", "Invalid feature filtering", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsProcessingContextOptionsBase", "Environment Settings", nullptr));
        label_5->setText(QCoreApplication::translate("QgsProcessingContextOptionsBase", "Number of threads to use", nullptr));
        label_4->setText(QCoreApplication::translate("QgsProcessingContextOptionsBase", "Temporary folder", nullptr));
        label_6->setText(QCoreApplication::translate("QgsProcessingContextOptionsBase", "Logging level", nullptr));
#if QT_CONFIG(tooltip)
        mComboInvalidFeatureFiltering->setToolTip(QCoreApplication::translate("QgsProcessingContextOptionsBase", "If set, allows the default method for handling features with invalid geometries to be overridden", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("QgsProcessingContextOptionsBase", "Calculation Settings", nullptr));
        label_2->setText(QCoreApplication::translate("QgsProcessingContextOptionsBase", "Distance units", nullptr));
        label_3->setText(QCoreApplication::translate("QgsProcessingContextOptionsBase", "Area units", nullptr));
        (void)QgsProcessingContextOptionsBase;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingContextOptionsBase: public Ui_QgsProcessingContextOptionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGCONTEXTOPTIONSBASE_H
