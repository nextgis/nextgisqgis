/********************************************************************************
** Form generated from reading UI file 'point3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT3DSYMBOLWIDGET_H
#define UI_POINT3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgs3dmodelsourcelineedit.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsmaterialwidget.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_Point3DSymbolWidget
{
public:
    QFormLayout *formLayout;
    QgsCollapsibleGroupBox *transformationWidget;
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *spinSX;
    QgsDoubleSpinBox *spinTZ;
    QgsDoubleSpinBox *spinTX;
    QLabel *label_5;
    QgsDoubleSpinBox *spinTY;
    QgsDoubleSpinBox *spinRX;
    QgsDoubleSpinBox *spinSY;
    QgsDoubleSpinBox *spinRZ;
    QLabel *label_4;
    QgsDoubleSpinBox *spinRY;
    QLabel *label_6;
    QgsDoubleSpinBox *spinSZ;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QgsCollapsibleGroupBox *materialsGroupBox;
    QGridLayout *shadingGroup;
    QgsMaterialWidget *widgetMaterial;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *spinSize;
    QHBoxLayout *horizontalLayout_2;
    QgsSymbolButton *btnChangeSymbol;
    QSpacerItem *horizontalSpacer;
    QLabel *labelAltClamping;
    QLabel *labelRadius;
    QgsDoubleSpinBox *spinBottomRadius;
    QHBoxLayout *horizontalLayout;
    Qgs3DModelSourceLineEdit *lineEditModel;
    QLabel *labelBillboardSymbol;
    QLabel *labelBillboardHeight;
    QgsDoubleSpinBox *spinLength;
    QComboBox *cboShape;
    QgsDoubleSpinBox *spinBillboardHeight;
    QLabel *labelBottomRadius;
    QgsDoubleSpinBox *spinMinorRadius;
    QLabel *labelModel;
    QLabel *labelLength;
    QLabel *labelMinorRadius;
    QLabel *labelTopRadius;
    QgsDoubleSpinBox *spinRadius;
    QComboBox *cboAltClamping;
    QgsDoubleSpinBox *spinTopRadius;
    QLabel *labelSize;
    QLabel *label;

    void setupUi(QWidget *Point3DSymbolWidget)
    {
        if (Point3DSymbolWidget->objectName().isEmpty())
            Point3DSymbolWidget->setObjectName(QString::fromUtf8("Point3DSymbolWidget"));
        Point3DSymbolWidget->resize(457, 562);
        Point3DSymbolWidget->setWindowTitle(QString::fromUtf8("Form"));
        formLayout = new QFormLayout(Point3DSymbolWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        transformationWidget = new QgsCollapsibleGroupBox(Point3DSymbolWidget);
        transformationWidget->setObjectName(QString::fromUtf8("transformationWidget"));
        gridLayout = new QGridLayout(transformationWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinSX = new QgsDoubleSpinBox(transformationWidget);
        spinSX->setObjectName(QString::fromUtf8("spinSX"));
        spinSX->setMinimum(-99999.899999999994179);
        spinSX->setMaximum(99999.899999999994179);
        spinSX->setValue(1.000000000000000);

        gridLayout->addWidget(spinSX, 2, 1, 1, 1);

        spinTZ = new QgsDoubleSpinBox(transformationWidget);
        spinTZ->setObjectName(QString::fromUtf8("spinTZ"));
        spinTZ->setMinimum(-99999.899999999994179);
        spinTZ->setMaximum(99999.899999999994179);

        gridLayout->addWidget(spinTZ, 1, 3, 1, 1);

        spinTX = new QgsDoubleSpinBox(transformationWidget);
        spinTX->setObjectName(QString::fromUtf8("spinTX"));
        spinTX->setMinimum(-99999.899999999994179);
        spinTX->setMaximum(99999.899999999994179);

        gridLayout->addWidget(spinTX, 1, 1, 1, 1);

        label_5 = new QLabel(transformationWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        spinTY = new QgsDoubleSpinBox(transformationWidget);
        spinTY->setObjectName(QString::fromUtf8("spinTY"));
        spinTY->setMinimum(-99999.899999999994179);
        spinTY->setMaximum(99999.899999999994179);

        gridLayout->addWidget(spinTY, 1, 2, 1, 1);

        spinRX = new QgsDoubleSpinBox(transformationWidget);
        spinRX->setObjectName(QString::fromUtf8("spinRX"));
        spinRX->setDecimals(0);
        spinRX->setMaximum(360.000000000000000);

        gridLayout->addWidget(spinRX, 3, 1, 1, 1);

        spinSY = new QgsDoubleSpinBox(transformationWidget);
        spinSY->setObjectName(QString::fromUtf8("spinSY"));
        spinSY->setMinimum(-99999.899999999994179);
        spinSY->setMaximum(99999.899999999994179);
        spinSY->setValue(1.000000000000000);

        gridLayout->addWidget(spinSY, 2, 2, 1, 1);

        spinRZ = new QgsDoubleSpinBox(transformationWidget);
        spinRZ->setObjectName(QString::fromUtf8("spinRZ"));
        spinRZ->setDecimals(0);
        spinRZ->setMaximum(360.000000000000000);

        gridLayout->addWidget(spinRZ, 3, 3, 1, 1);

        label_4 = new QLabel(transformationWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinRY = new QgsDoubleSpinBox(transformationWidget);
        spinRY->setObjectName(QString::fromUtf8("spinRY"));
        spinRY->setDecimals(0);
        spinRY->setMaximum(360.000000000000000);

        gridLayout->addWidget(spinRY, 3, 2, 1, 1);

        label_6 = new QLabel(transformationWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        spinSZ = new QgsDoubleSpinBox(transformationWidget);
        spinSZ->setObjectName(QString::fromUtf8("spinSZ"));
        spinSZ->setMinimum(-99999.899999999994179);
        spinSZ->setMaximum(99999.899999999994179);
        spinSZ->setValue(1.000000000000000);

        gridLayout->addWidget(spinSZ, 2, 3, 1, 1);

        label_2 = new QLabel(transformationWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(transformationWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(transformationWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 3, 1, 1);


        formLayout->setWidget(2, QFormLayout::SpanningRole, transformationWidget);

        materialsGroupBox = new QgsCollapsibleGroupBox(Point3DSymbolWidget);
        materialsGroupBox->setObjectName(QString::fromUtf8("materialsGroupBox"));
        shadingGroup = new QGridLayout(materialsGroupBox);
        shadingGroup->setObjectName(QString::fromUtf8("shadingGroup"));
        shadingGroup->setContentsMargins(0, 0, 0, 0);
        widgetMaterial = new QgsMaterialWidget(materialsGroupBox);
        widgetMaterial->setObjectName(QString::fromUtf8("widgetMaterial"));
        widgetMaterial->setEnabled(true);
        widgetMaterial->setMinimumSize(QSize(0, 0));

        shadingGroup->addWidget(widgetMaterial, 0, 0, 1, 1);


        formLayout->setWidget(1, QFormLayout::SpanningRole, materialsGroupBox);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        spinSize = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setMaximum(99999.000000000000000);
        spinSize->setValue(10.000000000000000);

        gridLayout_2->addWidget(spinSize, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnChangeSymbol = new QgsSymbolButton(Point3DSymbolWidget);
        btnChangeSymbol->setObjectName(QString::fromUtf8("btnChangeSymbol"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeSymbol->sizePolicy().hasHeightForWidth());
        btnChangeSymbol->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(btnChangeSymbol);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 9, 1, 1, 1);

        labelAltClamping = new QLabel(Point3DSymbolWidget);
        labelAltClamping->setObjectName(QString::fromUtf8("labelAltClamping"));

        gridLayout_2->addWidget(labelAltClamping, 10, 0, 1, 1);

        labelRadius = new QLabel(Point3DSymbolWidget);
        labelRadius->setObjectName(QString::fromUtf8("labelRadius"));

        gridLayout_2->addWidget(labelRadius, 1, 0, 1, 1);

        spinBottomRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinBottomRadius->setObjectName(QString::fromUtf8("spinBottomRadius"));
        spinBottomRadius->setMaximum(99999.000000000000000);
        spinBottomRadius->setValue(10.000000000000000);

        gridLayout_2->addWidget(spinBottomRadius, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditModel = new Qgs3DModelSourceLineEdit(Point3DSymbolWidget);
        lineEditModel->setObjectName(QString::fromUtf8("lineEditModel"));

        horizontalLayout->addWidget(lineEditModel);


        gridLayout_2->addLayout(horizontalLayout, 7, 1, 1, 1);

        labelBillboardSymbol = new QLabel(Point3DSymbolWidget);
        labelBillboardSymbol->setObjectName(QString::fromUtf8("labelBillboardSymbol"));

        gridLayout_2->addWidget(labelBillboardSymbol, 9, 0, 1, 1);

        labelBillboardHeight = new QLabel(Point3DSymbolWidget);
        labelBillboardHeight->setObjectName(QString::fromUtf8("labelBillboardHeight"));

        gridLayout_2->addWidget(labelBillboardHeight, 8, 0, 1, 1);

        spinLength = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinLength->setObjectName(QString::fromUtf8("spinLength"));
        spinLength->setMaximum(99999.000000000000000);
        spinLength->setValue(10.000000000000000);

        gridLayout_2->addWidget(spinLength, 6, 1, 1, 1);

        cboShape = new QComboBox(Point3DSymbolWidget);
        cboShape->setObjectName(QString::fromUtf8("cboShape"));

        gridLayout_2->addWidget(cboShape, 0, 1, 1, 1);

        spinBillboardHeight = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinBillboardHeight->setObjectName(QString::fromUtf8("spinBillboardHeight"));
        spinBillboardHeight->setMaximum(99999.000000000000000);
        spinBillboardHeight->setMinimum(-99999.000000000000000);

        gridLayout_2->addWidget(spinBillboardHeight, 8, 1, 1, 1);

        labelBottomRadius = new QLabel(Point3DSymbolWidget);
        labelBottomRadius->setObjectName(QString::fromUtf8("labelBottomRadius"));

        gridLayout_2->addWidget(labelBottomRadius, 4, 0, 1, 1);

        spinMinorRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinMinorRadius->setObjectName(QString::fromUtf8("spinMinorRadius"));
        spinMinorRadius->setMaximum(99999.000000000000000);
        spinMinorRadius->setValue(5.000000000000000);

        gridLayout_2->addWidget(spinMinorRadius, 2, 1, 1, 1);

        labelModel = new QLabel(Point3DSymbolWidget);
        labelModel->setObjectName(QString::fromUtf8("labelModel"));

        gridLayout_2->addWidget(labelModel, 7, 0, 1, 1);

        labelLength = new QLabel(Point3DSymbolWidget);
        labelLength->setObjectName(QString::fromUtf8("labelLength"));

        gridLayout_2->addWidget(labelLength, 6, 0, 1, 1);

        labelMinorRadius = new QLabel(Point3DSymbolWidget);
        labelMinorRadius->setObjectName(QString::fromUtf8("labelMinorRadius"));

        gridLayout_2->addWidget(labelMinorRadius, 2, 0, 1, 1);

        labelTopRadius = new QLabel(Point3DSymbolWidget);
        labelTopRadius->setObjectName(QString::fromUtf8("labelTopRadius"));

        gridLayout_2->addWidget(labelTopRadius, 3, 0, 1, 1);

        spinRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinRadius->setObjectName(QString::fromUtf8("spinRadius"));
        spinRadius->setMaximum(99999.000000000000000);
        spinRadius->setValue(10.000000000000000);

        gridLayout_2->addWidget(spinRadius, 1, 1, 1, 1);

        cboAltClamping = new QComboBox(Point3DSymbolWidget);
        cboAltClamping->addItem(QString());
        cboAltClamping->addItem(QString());
        cboAltClamping->addItem(QString());
        cboAltClamping->setObjectName(QString::fromUtf8("cboAltClamping"));

        gridLayout_2->addWidget(cboAltClamping, 10, 1, 1, 1);

        spinTopRadius = new QgsDoubleSpinBox(Point3DSymbolWidget);
        spinTopRadius->setObjectName(QString::fromUtf8("spinTopRadius"));
        spinTopRadius->setMaximum(99999.000000000000000);

        gridLayout_2->addWidget(spinTopRadius, 3, 1, 1, 1);

        labelSize = new QLabel(Point3DSymbolWidget);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        gridLayout_2->addWidget(labelSize, 5, 0, 1, 1);

        label = new QLabel(Point3DSymbolWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        formLayout->setLayout(0, QFormLayout::SpanningRole, gridLayout_2);

        QWidget::setTabOrder(cboShape, spinRadius);
        QWidget::setTabOrder(spinRadius, spinMinorRadius);
        QWidget::setTabOrder(spinMinorRadius, spinTopRadius);
        QWidget::setTabOrder(spinTopRadius, spinBottomRadius);
        QWidget::setTabOrder(spinBottomRadius, spinSize);
        QWidget::setTabOrder(spinSize, spinLength);
        QWidget::setTabOrder(spinLength, spinBillboardHeight);
        QWidget::setTabOrder(spinBillboardHeight, btnChangeSymbol);
        QWidget::setTabOrder(btnChangeSymbol, cboAltClamping);
        QWidget::setTabOrder(cboAltClamping, spinTX);
        QWidget::setTabOrder(spinTX, spinTY);
        QWidget::setTabOrder(spinTY, spinTZ);
        QWidget::setTabOrder(spinTZ, spinSX);
        QWidget::setTabOrder(spinSX, spinSY);
        QWidget::setTabOrder(spinSY, spinSZ);
        QWidget::setTabOrder(spinSZ, spinRX);
        QWidget::setTabOrder(spinRX, spinRY);
        QWidget::setTabOrder(spinRY, spinRZ);

        retranslateUi(Point3DSymbolWidget);

        QMetaObject::connectSlotsByName(Point3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *Point3DSymbolWidget)
    {
        transformationWidget->setTitle(QCoreApplication::translate("Point3DSymbolWidget", "Transformation", nullptr));
        label_5->setText(QCoreApplication::translate("Point3DSymbolWidget", "X", nullptr));
        label_4->setText(QCoreApplication::translate("Point3DSymbolWidget", "Rotation", nullptr));
        label_6->setText(QCoreApplication::translate("Point3DSymbolWidget", "Y", nullptr));
        label_2->setText(QCoreApplication::translate("Point3DSymbolWidget", "Translation", nullptr));
        label_3->setText(QCoreApplication::translate("Point3DSymbolWidget", "Scale", nullptr));
        label_7->setText(QCoreApplication::translate("Point3DSymbolWidget", "Z", nullptr));
        materialsGroupBox->setTitle(QCoreApplication::translate("Point3DSymbolWidget", "Shading", nullptr));
        btnChangeSymbol->setText(QString());
        labelAltClamping->setText(QCoreApplication::translate("Point3DSymbolWidget", "Altitude clamping", nullptr));
        labelRadius->setText(QCoreApplication::translate("Point3DSymbolWidget", "Radius", nullptr));
        labelBillboardSymbol->setText(QCoreApplication::translate("Point3DSymbolWidget", "Billboard symbol", nullptr));
        labelBillboardHeight->setText(QCoreApplication::translate("Point3DSymbolWidget", "Billboard Height", nullptr));
        labelBottomRadius->setText(QCoreApplication::translate("Point3DSymbolWidget", "Bottom radius", nullptr));
        labelModel->setText(QCoreApplication::translate("Point3DSymbolWidget", "Model", nullptr));
        labelLength->setText(QCoreApplication::translate("Point3DSymbolWidget", "Length", nullptr));
        labelMinorRadius->setText(QCoreApplication::translate("Point3DSymbolWidget", "Minor radius", nullptr));
        labelTopRadius->setText(QCoreApplication::translate("Point3DSymbolWidget", "Top radius", nullptr));
        cboAltClamping->setItemText(0, QCoreApplication::translate("Point3DSymbolWidget", "Absolute", nullptr));
        cboAltClamping->setItemText(1, QCoreApplication::translate("Point3DSymbolWidget", "Relative", nullptr));
        cboAltClamping->setItemText(2, QCoreApplication::translate("Point3DSymbolWidget", "Terrain", nullptr));

        labelSize->setText(QCoreApplication::translate("Point3DSymbolWidget", "Size", nullptr));
        label->setText(QCoreApplication::translate("Point3DSymbolWidget", "Shape", nullptr));
        (void)Point3DSymbolWidget;
    } // retranslateUi

};

namespace Ui {
    class Point3DSymbolWidget: public Ui_Point3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT3DSYMBOLWIDGET_H
