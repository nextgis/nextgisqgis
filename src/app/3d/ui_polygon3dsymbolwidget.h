/********************************************************************************
** Form generated from reading UI file 'polygon3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYGON3DSYMBOLWIDGET_H
#define UI_POLYGON3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsmaterialwidget.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_Polygon3DSymbolWidget
{
public:
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *spinOffset;
    QLabel *label_2;
    QgsCollapsibleGroupBox *groupShading;
    QGridLayout *gridLayout_3;
    QgsMaterialWidget *widgetMaterial;
    QgsPropertyOverrideButton *btnExtrusionDD;
    QCheckBox *chkInvertNormals;
    QComboBox *cboAltClamping;
    QgsDoubleSpinBox *spinExtrusion;
    QLabel *label_4;
    QComboBox *cboCullingMode;
    QComboBox *cboAltBinding;
    QgsPropertyOverrideButton *btnHeightDD;
    QLabel *label_3;
    QgsCollapsibleGroupBox *groupEdges;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QgsDoubleSpinBox *spinEdgeWidth;
    QLabel *label_7;
    QgsColorButton *btnEdgeColor;
    QLabel *label_5;
    QCheckBox *chkAddBackFaces;
    QLabel *labelOffset;
    QLabel *label_8;
    QComboBox *cboRenderedFacade;

    void setupUi(QWidget *Polygon3DSymbolWidget)
    {
        if (Polygon3DSymbolWidget->objectName().isEmpty())
            Polygon3DSymbolWidget->setObjectName(QString::fromUtf8("Polygon3DSymbolWidget"));
        Polygon3DSymbolWidget->resize(479, 397);
        Polygon3DSymbolWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_2 = new QGridLayout(Polygon3DSymbolWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, -1);
        spinOffset = new QgsDoubleSpinBox(Polygon3DSymbolWidget);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        spinOffset->setMinimum(-99999.000000000000000);
        spinOffset->setMaximum(99999.000000000000000);

        gridLayout_2->addWidget(spinOffset, 0, 1, 1, 1);

        label_2 = new QLabel(Polygon3DSymbolWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        groupShading = new QgsCollapsibleGroupBox(Polygon3DSymbolWidget);
        groupShading->setObjectName(QString::fromUtf8("groupShading"));
        gridLayout_3 = new QGridLayout(groupShading);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widgetMaterial = new QgsMaterialWidget(groupShading);
        widgetMaterial->setObjectName(QString::fromUtf8("widgetMaterial"));

        gridLayout_3->addWidget(widgetMaterial, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupShading, 8, 0, 1, 3);

        btnExtrusionDD = new QgsPropertyOverrideButton(Polygon3DSymbolWidget);
        btnExtrusionDD->setObjectName(QString::fromUtf8("btnExtrusionDD"));

        gridLayout_2->addWidget(btnExtrusionDD, 1, 2, 1, 1);

        chkInvertNormals = new QCheckBox(Polygon3DSymbolWidget);
        chkInvertNormals->setObjectName(QString::fromUtf8("chkInvertNormals"));

        gridLayout_2->addWidget(chkInvertNormals, 7, 0, 1, 2);

        cboAltClamping = new QComboBox(Polygon3DSymbolWidget);
        cboAltClamping->addItem(QString());
        cboAltClamping->addItem(QString());
        cboAltClamping->addItem(QString());
        cboAltClamping->setObjectName(QString::fromUtf8("cboAltClamping"));

        gridLayout_2->addWidget(cboAltClamping, 2, 1, 1, 1);

        spinExtrusion = new QgsDoubleSpinBox(Polygon3DSymbolWidget);
        spinExtrusion->setObjectName(QString::fromUtf8("spinExtrusion"));
        spinExtrusion->setMaximum(99999.000000000000000);

        gridLayout_2->addWidget(spinExtrusion, 1, 1, 1, 1);

        label_4 = new QLabel(Polygon3DSymbolWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        cboCullingMode = new QComboBox(Polygon3DSymbolWidget);
        cboCullingMode->setObjectName(QString::fromUtf8("cboCullingMode"));

        gridLayout_2->addWidget(cboCullingMode, 4, 1, 1, 1);

        cboAltBinding = new QComboBox(Polygon3DSymbolWidget);
        cboAltBinding->addItem(QString());
        cboAltBinding->addItem(QString());
        cboAltBinding->setObjectName(QString::fromUtf8("cboAltBinding"));

        gridLayout_2->addWidget(cboAltBinding, 3, 1, 1, 1);

        btnHeightDD = new QgsPropertyOverrideButton(Polygon3DSymbolWidget);
        btnHeightDD->setObjectName(QString::fromUtf8("btnHeightDD"));

        gridLayout_2->addWidget(btnHeightDD, 0, 2, 1, 1);

        label_3 = new QLabel(Polygon3DSymbolWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        groupEdges = new QgsCollapsibleGroupBox(Polygon3DSymbolWidget);
        groupEdges->setObjectName(QString::fromUtf8("groupEdges"));
        groupEdges->setCheckable(true);
        gridLayout = new QGridLayout(groupEdges);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupEdges);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        spinEdgeWidth = new QgsDoubleSpinBox(groupEdges);
        spinEdgeWidth->setObjectName(QString::fromUtf8("spinEdgeWidth"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinEdgeWidth->sizePolicy().hasHeightForWidth());
        spinEdgeWidth->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(spinEdgeWidth, 0, 1, 1, 1);

        label_7 = new QLabel(groupEdges);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        btnEdgeColor = new QgsColorButton(groupEdges);
        btnEdgeColor->setObjectName(QString::fromUtf8("btnEdgeColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnEdgeColor->sizePolicy().hasHeightForWidth());
        btnEdgeColor->setSizePolicy(sizePolicy2);
        btnEdgeColor->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnEdgeColor, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupEdges, 9, 0, 1, 3);

        label_5 = new QLabel(Polygon3DSymbolWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        chkAddBackFaces = new QCheckBox(Polygon3DSymbolWidget);
        chkAddBackFaces->setObjectName(QString::fromUtf8("chkAddBackFaces"));

        gridLayout_2->addWidget(chkAddBackFaces, 6, 0, 1, 2);

        labelOffset = new QLabel(Polygon3DSymbolWidget);
        labelOffset->setObjectName(QString::fromUtf8("labelOffset"));

        gridLayout_2->addWidget(labelOffset, 0, 0, 1, 1);

        label_8 = new QLabel(Polygon3DSymbolWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        cboRenderedFacade = new QComboBox(Polygon3DSymbolWidget);
        cboRenderedFacade->addItem(QString());
        cboRenderedFacade->addItem(QString());
        cboRenderedFacade->addItem(QString());
        cboRenderedFacade->addItem(QString());
        cboRenderedFacade->setObjectName(QString::fromUtf8("cboRenderedFacade"));

        gridLayout_2->addWidget(cboRenderedFacade, 5, 1, 1, 1);

        QWidget::setTabOrder(spinOffset, btnHeightDD);
        QWidget::setTabOrder(btnHeightDD, spinExtrusion);
        QWidget::setTabOrder(spinExtrusion, btnExtrusionDD);
        QWidget::setTabOrder(btnExtrusionDD, cboAltClamping);
        QWidget::setTabOrder(cboAltClamping, cboAltBinding);
        QWidget::setTabOrder(cboAltBinding, cboCullingMode);
        QWidget::setTabOrder(cboCullingMode, cboRenderedFacade);
        QWidget::setTabOrder(cboRenderedFacade, chkAddBackFaces);
        QWidget::setTabOrder(chkAddBackFaces, chkInvertNormals);
        QWidget::setTabOrder(chkInvertNormals, groupEdges);
        QWidget::setTabOrder(groupEdges, spinEdgeWidth);
        QWidget::setTabOrder(spinEdgeWidth, btnEdgeColor);

        retranslateUi(Polygon3DSymbolWidget);

        cboRenderedFacade->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Polygon3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *Polygon3DSymbolWidget)
    {
        label_2->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Extrusion", nullptr));
        groupShading->setTitle(QCoreApplication::translate("Polygon3DSymbolWidget", "Shading", nullptr));
        btnExtrusionDD->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "\342\200\246", nullptr));
        chkInvertNormals->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Invert normals (experimental)", nullptr));
        cboAltClamping->setItemText(0, QCoreApplication::translate("Polygon3DSymbolWidget", "Absolute", nullptr));
        cboAltClamping->setItemText(1, QCoreApplication::translate("Polygon3DSymbolWidget", "Relative", nullptr));
        cboAltClamping->setItemText(2, QCoreApplication::translate("Polygon3DSymbolWidget", "Terrain", nullptr));

        label_4->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Altitude binding", nullptr));
        cboAltBinding->setItemText(0, QCoreApplication::translate("Polygon3DSymbolWidget", "Vertex", nullptr));
        cboAltBinding->setItemText(1, QCoreApplication::translate("Polygon3DSymbolWidget", "Centroid", nullptr));

        btnHeightDD->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "\342\200\246", nullptr));
        label_3->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Altitude clamping", nullptr));
        groupEdges->setTitle(QCoreApplication::translate("Polygon3DSymbolWidget", "Edges", nullptr));
        label_6->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Width", nullptr));
        spinEdgeWidth->setSuffix(QCoreApplication::translate("Polygon3DSymbolWidget", " px", nullptr));
        label_7->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Color", nullptr));
        label_5->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Culling mode", nullptr));
        chkAddBackFaces->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Add back faces", nullptr));
        labelOffset->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Offset", nullptr));
        label_8->setText(QCoreApplication::translate("Polygon3DSymbolWidget", "Rendered facade", nullptr));
        cboRenderedFacade->setItemText(0, QCoreApplication::translate("Polygon3DSymbolWidget", "No Facades", nullptr));
        cboRenderedFacade->setItemText(1, QCoreApplication::translate("Polygon3DSymbolWidget", "Walls", nullptr));
        cboRenderedFacade->setItemText(2, QCoreApplication::translate("Polygon3DSymbolWidget", "Roofs", nullptr));
        cboRenderedFacade->setItemText(3, QCoreApplication::translate("Polygon3DSymbolWidget", "Walls and Roofs", nullptr));

        (void)Polygon3DSymbolWidget;
    } // retranslateUi

};

namespace Ui {
    class Polygon3DSymbolWidget: public Ui_Polygon3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYGON3DSYMBOLWIDGET_H
