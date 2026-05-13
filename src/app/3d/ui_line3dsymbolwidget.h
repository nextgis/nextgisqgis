/********************************************************************************
** Form generated from reading UI file 'line3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINE3DSYMBOLWIDGET_H
#define UI_LINE3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsmaterialwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Line3DSymbolWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelOffset;
    QgsDoubleSpinBox *spinOffset;
    QLabel *labelExtrusion;
    QgsDoubleSpinBox *spinExtrusion;
    QLabel *labelClamping;
    QComboBox *cboAltClamping;
    QLabel *labelBinding;
    QComboBox *cboAltBinding;
    QLabel *labelWidth;
    QgsDoubleSpinBox *spinWidth;
    QCheckBox *chkSimpleLines;
    QgsCollapsibleGroupBox *groupShading;
    QGridLayout *gridLayout;
    QgsMaterialWidget *widgetMaterial;

    void setupUi(QWidget *Line3DSymbolWidget)
    {
        if (Line3DSymbolWidget->objectName().isEmpty())
            Line3DSymbolWidget->setObjectName(QString::fromUtf8("Line3DSymbolWidget"));
        Line3DSymbolWidget->resize(382, 242);
        Line3DSymbolWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(Line3DSymbolWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelOffset = new QLabel(Line3DSymbolWidget);
        labelOffset->setObjectName(QString::fromUtf8("labelOffset"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelOffset);

        spinOffset = new QgsDoubleSpinBox(Line3DSymbolWidget);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        spinOffset->setMinimum(-99999.000000000000000);
        spinOffset->setMaximum(99999.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinOffset);

        labelExtrusion = new QLabel(Line3DSymbolWidget);
        labelExtrusion->setObjectName(QString::fromUtf8("labelExtrusion"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelExtrusion);

        spinExtrusion = new QgsDoubleSpinBox(Line3DSymbolWidget);
        spinExtrusion->setObjectName(QString::fromUtf8("spinExtrusion"));
        spinExtrusion->setMaximum(99999.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinExtrusion);

        labelClamping = new QLabel(Line3DSymbolWidget);
        labelClamping->setObjectName(QString::fromUtf8("labelClamping"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelClamping);

        cboAltClamping = new QComboBox(Line3DSymbolWidget);
        cboAltClamping->setObjectName(QString::fromUtf8("cboAltClamping"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cboAltClamping);

        labelBinding = new QLabel(Line3DSymbolWidget);
        labelBinding->setObjectName(QString::fromUtf8("labelBinding"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelBinding);

        cboAltBinding = new QComboBox(Line3DSymbolWidget);
        cboAltBinding->addItem(QString());
        cboAltBinding->addItem(QString());
        cboAltBinding->setObjectName(QString::fromUtf8("cboAltBinding"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cboAltBinding);

        labelWidth = new QLabel(Line3DSymbolWidget);
        labelWidth->setObjectName(QString::fromUtf8("labelWidth"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelWidth);

        spinWidth = new QgsDoubleSpinBox(Line3DSymbolWidget);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        spinWidth->setMaximum(99999.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinWidth);


        verticalLayout->addLayout(formLayout);

        chkSimpleLines = new QCheckBox(Line3DSymbolWidget);
        chkSimpleLines->setObjectName(QString::fromUtf8("chkSimpleLines"));

        verticalLayout->addWidget(chkSimpleLines);

        groupShading = new QgsCollapsibleGroupBox(Line3DSymbolWidget);
        groupShading->setObjectName(QString::fromUtf8("groupShading"));
        gridLayout = new QGridLayout(groupShading);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widgetMaterial = new QgsMaterialWidget(groupShading);
        widgetMaterial->setObjectName(QString::fromUtf8("widgetMaterial"));
        widgetMaterial->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(widgetMaterial, 3, 0, 1, 2);


        verticalLayout->addWidget(groupShading);

        QWidget::setTabOrder(spinWidth, spinOffset);
        QWidget::setTabOrder(spinOffset, spinExtrusion);
        QWidget::setTabOrder(spinExtrusion, cboAltClamping);
        QWidget::setTabOrder(cboAltClamping, cboAltBinding);

        retranslateUi(Line3DSymbolWidget);

        QMetaObject::connectSlotsByName(Line3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *Line3DSymbolWidget)
    {
        labelOffset->setText(QCoreApplication::translate("Line3DSymbolWidget", "Offset", nullptr));
        labelExtrusion->setText(QCoreApplication::translate("Line3DSymbolWidget", "Extrusion", nullptr));
        labelClamping->setText(QCoreApplication::translate("Line3DSymbolWidget", "Altitude clamping", nullptr));
        labelBinding->setText(QCoreApplication::translate("Line3DSymbolWidget", "Altitude binding", nullptr));
        cboAltBinding->setItemText(0, QCoreApplication::translate("Line3DSymbolWidget", "Vertex", nullptr));
        cboAltBinding->setItemText(1, QCoreApplication::translate("Line3DSymbolWidget", "Centroid", nullptr));

        labelWidth->setText(QCoreApplication::translate("Line3DSymbolWidget", "Width", nullptr));
        chkSimpleLines->setText(QCoreApplication::translate("Line3DSymbolWidget", "Render as simple 3D lines", nullptr));
        groupShading->setTitle(QCoreApplication::translate("Line3DSymbolWidget", "Shading", nullptr));
        (void)Line3DSymbolWidget;
    } // retranslateUi

};

namespace Ui {
    class Line3DSymbolWidget: public Ui_Line3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINE3DSYMBOLWIDGET_H
