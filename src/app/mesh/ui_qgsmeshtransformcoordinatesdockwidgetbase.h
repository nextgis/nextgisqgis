/********************************************************************************
** Form generated from reading UI file 'qgsmeshtransformcoordinatesdockwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHTRANSFORMCOORDINATESDOCKWIDGETBASE_H
#define UI_QGSMESHTRANSFORMCOORDINATESDOCKWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"
#include "qgsexpressionlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshTransformCoordinatesDockWidgetBase
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QCheckBox *mCheckBoxX;
    QgsExpressionLineEdit *mExpressionEditY;
    QgsExpressionLineEdit *mExpressionEditZ;
    QCheckBox *mCheckBoxZ;
    QCheckBox *mCheckBoxZFromProjectTerrain;
    QHBoxLayout *horizontalLayout;
    QToolButton *mButtonPreview;
    QToolButton *mButtonApply;
    QCheckBox *mCheckBoxY;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mLabelInformation;
    QSpacerItem *horizontalSpacer;
    QToolButton *mButtonImport;
    QSpacerItem *verticalSpacer;
    QgsExpressionLineEdit *mExpressionEditX;

    void setupUi(QgsDockWidget *QgsMeshTransformCoordinatesDockWidgetBase)
    {
        if (QgsMeshTransformCoordinatesDockWidgetBase->objectName().isEmpty())
            QgsMeshTransformCoordinatesDockWidgetBase->setObjectName(QString::fromUtf8("QgsMeshTransformCoordinatesDockWidgetBase"));
        QgsMeshTransformCoordinatesDockWidgetBase->resize(297, 211);
        QgsMeshTransformCoordinatesDockWidgetBase->setFloating(false);
        QgsMeshTransformCoordinatesDockWidgetBase->setWindowTitle(QString::fromUtf8("DockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mCheckBoxX = new QCheckBox(dockWidgetContents);
        mCheckBoxX->setObjectName(QString::fromUtf8("mCheckBoxX"));

        gridLayout->addWidget(mCheckBoxX, 1, 0, 1, 1);

        mExpressionEditY = new QgsExpressionLineEdit(dockWidgetContents);
        mExpressionEditY->setObjectName(QString::fromUtf8("mExpressionEditY"));

        gridLayout->addWidget(mExpressionEditY, 2, 1, 1, 1);

        mExpressionEditZ = new QgsExpressionLineEdit(dockWidgetContents);
        mExpressionEditZ->setObjectName(QString::fromUtf8("mExpressionEditZ"));

        gridLayout->addWidget(mExpressionEditZ, 3, 1, 1, 1);

        mCheckBoxZ = new QCheckBox(dockWidgetContents);
        mCheckBoxZ->setObjectName(QString::fromUtf8("mCheckBoxZ"));

        gridLayout->addWidget(mCheckBoxZ, 3, 0, 1, 1);

        mCheckBoxZFromProjectTerrain = new QCheckBox(dockWidgetContents);
        mCheckBoxZFromProjectTerrain->setObjectName(QString::fromUtf8("mCheckBoxZFromProjectTerrain"));

        gridLayout->addWidget(mCheckBoxZFromProjectTerrain, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        mButtonPreview = new QToolButton(dockWidgetContents);
        mButtonPreview->setObjectName(QString::fromUtf8("mButtonPreview"));

        horizontalLayout->addWidget(mButtonPreview);

        mButtonApply = new QToolButton(dockWidgetContents);
        mButtonApply->setObjectName(QString::fromUtf8("mButtonApply"));

        horizontalLayout->addWidget(mButtonApply);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 2);

        mCheckBoxY = new QCheckBox(dockWidgetContents);
        mCheckBoxY->setObjectName(QString::fromUtf8("mCheckBoxY"));

        gridLayout->addWidget(mCheckBoxY, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mLabelInformation = new QLabel(dockWidgetContents);
        mLabelInformation->setObjectName(QString::fromUtf8("mLabelInformation"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelInformation->sizePolicy().hasHeightForWidth());
        mLabelInformation->setSizePolicy(sizePolicy);
        mLabelInformation->setAlignment(Qt::AlignCenter);
        mLabelInformation->setWordWrap(true);

        horizontalLayout_2->addWidget(mLabelInformation);

        horizontalSpacer = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mButtonImport = new QToolButton(dockWidgetContents);
        mButtonImport->setObjectName(QString::fromUtf8("mButtonImport"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconVertexCoordinates.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonImport->setIcon(icon);
        mButtonImport->setIconSize(QSize(16, 16));
        mButtonImport->setCheckable(true);
        mButtonImport->setAutoRaise(true);

        horizontalLayout_2->addWidget(mButtonImport);

        horizontalLayout_2->setStretch(0, 1);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        mExpressionEditX = new QgsExpressionLineEdit(dockWidgetContents);
        mExpressionEditX->setObjectName(QString::fromUtf8("mExpressionEditX"));

        gridLayout->addWidget(mExpressionEditX, 1, 1, 1, 1);

        QgsMeshTransformCoordinatesDockWidgetBase->setWidget(dockWidgetContents);
        QWidget::setTabOrder(mCheckBoxX, mCheckBoxY);
        QWidget::setTabOrder(mCheckBoxY, mCheckBoxZ);
        QWidget::setTabOrder(mCheckBoxZ, mButtonPreview);
        QWidget::setTabOrder(mButtonPreview, mButtonApply);
        QWidget::setTabOrder(mButtonApply, mButtonImport);

        retranslateUi(QgsMeshTransformCoordinatesDockWidgetBase);

        QMetaObject::connectSlotsByName(QgsMeshTransformCoordinatesDockWidgetBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsMeshTransformCoordinatesDockWidgetBase)
    {
        mCheckBoxX->setText(QCoreApplication::translate("QgsMeshTransformCoordinatesDockWidgetBase", "X coordinate", nullptr));
        mCheckBoxZ->setText(QCoreApplication::translate("QgsMeshTransformCoordinatesDockWidgetBase", "Z value", nullptr));
        mCheckBoxZFromProjectTerrain->setText(QCoreApplication::translate("QgsMeshTransformCoordinatesDockWidgetBase", "Get the Z value from the project terrain", nullptr));
        mButtonPreview->setText(QCoreApplication::translate("QgsMeshTransformCoordinatesDockWidgetBase", "Preview Transform", nullptr));
        mButtonApply->setText(QCoreApplication::translate("QgsMeshTransformCoordinatesDockWidgetBase", "Apply Transform", nullptr));
        mCheckBoxY->setText(QCoreApplication::translate("QgsMeshTransformCoordinatesDockWidgetBase", "Y coordinate", nullptr));
        mLabelInformation->setText(QCoreApplication::translate("QgsMeshTransformCoordinatesDockWidgetBase", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        mButtonImport->setToolTip(QCoreApplication::translate("QgsMeshTransformCoordinatesDockWidgetBase", "Import Coordinates of the Selected Vertex", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonImport->setText(QString());
        (void)QgsMeshTransformCoordinatesDockWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsMeshTransformCoordinatesDockWidgetBase: public Ui_QgsMeshTransformCoordinatesDockWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHTRANSFORMCOORDINATESDOCKWIDGETBASE_H
