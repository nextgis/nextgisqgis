/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayerdigitizingproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERDIGITIZINGPROPERTIES_H
#define UI_QGSVECTORLAYERDIGITIZINGPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsscrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerDigitizingPropertiesPage
{
public:
    QVBoxLayout *verticalLayout;
    QgsScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *mGeometryAutoFixesGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *mRemoveDuplicateNodesCheckbox;
    QLabel *label;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mPrecisionUnitsLabel;
    QLineEdit *mGeometryPrecisionLineEdit;
    QGroupBox *mGeometryValidationGroupBox;
    QGroupBox *mTopologyChecksGroupBox;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *QgsVectorLayerDigitizingPropertiesPage)
    {
        if (QgsVectorLayerDigitizingPropertiesPage->objectName().isEmpty())
            QgsVectorLayerDigitizingPropertiesPage->setObjectName(QString::fromUtf8("QgsVectorLayerDigitizingPropertiesPage"));
        QgsVectorLayerDigitizingPropertiesPage->resize(400, 300);
        QgsVectorLayerDigitizingPropertiesPage->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsVectorLayerDigitizingPropertiesPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QgsScrollArea(QgsVectorLayerDigitizingPropertiesPage);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 400, 300));
        verticalLayout_20 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mGeometryAutoFixesGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        mGeometryAutoFixesGroupBox->setObjectName(QString::fromUtf8("mGeometryAutoFixesGroupBox"));
        gridLayout = new QGridLayout(mGeometryAutoFixesGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mRemoveDuplicateNodesCheckbox = new QCheckBox(mGeometryAutoFixesGroupBox);
        mRemoveDuplicateNodesCheckbox->setObjectName(QString::fromUtf8("mRemoveDuplicateNodesCheckbox"));

        gridLayout->addWidget(mRemoveDuplicateNodesCheckbox, 0, 0, 1, 2);

        label = new QLabel(mGeometryAutoFixesGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mPrecisionUnitsLabel = new QLabel(mGeometryAutoFixesGroupBox);
        mPrecisionUnitsLabel->setObjectName(QString::fromUtf8("mPrecisionUnitsLabel"));

        horizontalLayout_11->addWidget(mPrecisionUnitsLabel);

        mGeometryPrecisionLineEdit = new QLineEdit(mGeometryAutoFixesGroupBox);
        mGeometryPrecisionLineEdit->setObjectName(QString::fromUtf8("mGeometryPrecisionLineEdit"));
        mGeometryPrecisionLineEdit->setInputMethodHints(Qt::ImhFormattedNumbersOnly);

        horizontalLayout_11->addWidget(mGeometryPrecisionLineEdit);


        gridLayout->addLayout(horizontalLayout_11, 1, 1, 1, 1);


        verticalLayout_20->addWidget(mGeometryAutoFixesGroupBox);

        mGeometryValidationGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        mGeometryValidationGroupBox->setObjectName(QString::fromUtf8("mGeometryValidationGroupBox"));

        verticalLayout_20->addWidget(mGeometryValidationGroupBox);

        mTopologyChecksGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        mTopologyChecksGroupBox->setObjectName(QString::fromUtf8("mTopologyChecksGroupBox"));

        verticalLayout_20->addWidget(mTopologyChecksGroupBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_4);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea_2);


        retranslateUi(QgsVectorLayerDigitizingPropertiesPage);

        QMetaObject::connectSlotsByName(QgsVectorLayerDigitizingPropertiesPage);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorLayerDigitizingPropertiesPage)
    {
        mGeometryAutoFixesGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Automatic Fixes", nullptr));
        mRemoveDuplicateNodesCheckbox->setText(QCoreApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Remove duplicate nodes", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "<html><head/><body><p>The geometry precision defines the maximum precision of geometry coordinates that should be stored on this layer. A snap to grid algorithm will be applied on every geometry entering this layer, resulting in coordinates being rounded to multiples of this value. The operation is applied in this layer's coordinate reference system.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Geometry precision", nullptr));
        mPrecisionUnitsLabel->setText(QCoreApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "[Units]", nullptr));
        mGeometryPrecisionLineEdit->setText(QString());
        mGeometryPrecisionLineEdit->setPlaceholderText(QCoreApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "[No precision restriction]", nullptr));
        mGeometryValidationGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Geometry checks", nullptr));
        mTopologyChecksGroupBox->setTitle(QCoreApplication::translate("QgsVectorLayerDigitizingPropertiesPage", "Topology checks", nullptr));
        (void)QgsVectorLayerDigitizingPropertiesPage;
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerDigitizingPropertiesPage: public Ui_QgsVectorLayerDigitizingPropertiesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERDIGITIZINGPROPERTIES_H
