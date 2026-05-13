/********************************************************************************
** Form generated from reading UI file 'qgsprocessingmeshdatasettimewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGMESHDATASETTIMEWIDGET_H
#define UI_QGSPROCESSINGMESHDATASETTIMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingMeshDatasetTimeWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonCurrentCanvasTime;
    QRadioButton *radioButtonDefinedDateTime;
    QRadioButton *radioButtonDatasetGroupTimeStep;
    QComboBox *comboBoxDatasetTimeStep;
    QDateTimeEdit *dateTimeEdit;
    QLabel *labelCurrentCanvasTime;

    void setupUi(QWidget *QgsProcessingMeshDatasetTimeWidgetBase)
    {
        if (QgsProcessingMeshDatasetTimeWidgetBase->objectName().isEmpty())
            QgsProcessingMeshDatasetTimeWidgetBase->setObjectName(QString::fromUtf8("QgsProcessingMeshDatasetTimeWidgetBase"));
        QgsProcessingMeshDatasetTimeWidgetBase->resize(535, 129);
        QgsProcessingMeshDatasetTimeWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(QgsProcessingMeshDatasetTimeWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButtonCurrentCanvasTime = new QRadioButton(QgsProcessingMeshDatasetTimeWidgetBase);
        radioButtonCurrentCanvasTime->setObjectName(QString::fromUtf8("radioButtonCurrentCanvasTime"));
        radioButtonCurrentCanvasTime->setChecked(true);

        horizontalLayout->addWidget(radioButtonCurrentCanvasTime);

        radioButtonDefinedDateTime = new QRadioButton(QgsProcessingMeshDatasetTimeWidgetBase);
        radioButtonDefinedDateTime->setObjectName(QString::fromUtf8("radioButtonDefinedDateTime"));
        radioButtonDefinedDateTime->setChecked(false);

        horizontalLayout->addWidget(radioButtonDefinedDateTime);

        radioButtonDatasetGroupTimeStep = new QRadioButton(QgsProcessingMeshDatasetTimeWidgetBase);
        radioButtonDatasetGroupTimeStep->setObjectName(QString::fromUtf8("radioButtonDatasetGroupTimeStep"));

        horizontalLayout->addWidget(radioButtonDatasetGroupTimeStep);


        verticalLayout->addLayout(horizontalLayout);

        comboBoxDatasetTimeStep = new QComboBox(QgsProcessingMeshDatasetTimeWidgetBase);
        comboBoxDatasetTimeStep->setObjectName(QString::fromUtf8("comboBoxDatasetTimeStep"));

        verticalLayout->addWidget(comboBoxDatasetTimeStep);

        dateTimeEdit = new QDateTimeEdit(QgsProcessingMeshDatasetTimeWidgetBase);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setCalendarPopup(true);
        dateTimeEdit->setTimeSpec(Qt::UTC);

        verticalLayout->addWidget(dateTimeEdit);

        labelCurrentCanvasTime = new QLabel(QgsProcessingMeshDatasetTimeWidgetBase);
        labelCurrentCanvasTime->setObjectName(QString::fromUtf8("labelCurrentCanvasTime"));

        verticalLayout->addWidget(labelCurrentCanvasTime);

        QWidget::setTabOrder(radioButtonCurrentCanvasTime, radioButtonDefinedDateTime);
        QWidget::setTabOrder(radioButtonDefinedDateTime, radioButtonDatasetGroupTimeStep);
        QWidget::setTabOrder(radioButtonDatasetGroupTimeStep, comboBoxDatasetTimeStep);
        QWidget::setTabOrder(comboBoxDatasetTimeStep, dateTimeEdit);

        retranslateUi(QgsProcessingMeshDatasetTimeWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingMeshDatasetTimeWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingMeshDatasetTimeWidgetBase)
    {
        radioButtonCurrentCanvasTime->setText(QCoreApplication::translate("QgsProcessingMeshDatasetTimeWidgetBase", "Current canvas time", nullptr));
        radioButtonDefinedDateTime->setText(QCoreApplication::translate("QgsProcessingMeshDatasetTimeWidgetBase", "Defined date/time", nullptr));
        radioButtonDatasetGroupTimeStep->setText(QCoreApplication::translate("QgsProcessingMeshDatasetTimeWidgetBase", "Dataset group time step", nullptr));
        labelCurrentCanvasTime->setText(QCoreApplication::translate("QgsProcessingMeshDatasetTimeWidgetBase", "Current canvas time", nullptr));
        (void)QgsProcessingMeshDatasetTimeWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingMeshDatasetTimeWidgetBase: public Ui_QgsProcessingMeshDatasetTimeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGMESHDATASETTIMEWIDGET_H
