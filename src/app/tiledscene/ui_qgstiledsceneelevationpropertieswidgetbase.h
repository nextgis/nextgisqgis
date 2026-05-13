/********************************************************************************
** Form generated from reading UI file 'qgstiledsceneelevationpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTILEDSCENEELEVATIONPROPERTIESWIDGETBASE_H
#define UI_QGSTILEDSCENEELEVATIONPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTiledSceneElevationPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mCrsGroupBox_2;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *mOffsetZSpinBox;
    QFrame *line_3;
    QgsDoubleSpinBox *mScaleZSpinBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *mShiftZAxisButton;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsTiledSceneElevationPropertiesWidgetBase)
    {
        if (QgsTiledSceneElevationPropertiesWidgetBase->objectName().isEmpty())
            QgsTiledSceneElevationPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsTiledSceneElevationPropertiesWidgetBase"));
        QgsTiledSceneElevationPropertiesWidgetBase->resize(413, 448);
        verticalLayout = new QVBoxLayout(QgsTiledSceneElevationPropertiesWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mCrsGroupBox_2 = new QgsCollapsibleGroupBox(QgsTiledSceneElevationPropertiesWidgetBase);
        mCrsGroupBox_2->setObjectName(QString::fromUtf8("mCrsGroupBox_2"));
        mCrsGroupBox_2->setFocusPolicy(Qt::StrongFocus);
        mCrsGroupBox_2->setCheckable(false);
        mCrsGroupBox_2->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout_2 = new QGridLayout(mCrsGroupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mOffsetZSpinBox = new QgsDoubleSpinBox(mCrsGroupBox_2);
        mOffsetZSpinBox->setObjectName(QString::fromUtf8("mOffsetZSpinBox"));
        mOffsetZSpinBox->setDecimals(6);
        mOffsetZSpinBox->setMinimum(-99999999999.000000000000000);
        mOffsetZSpinBox->setMaximum(99999999999.000000000000000);

        gridLayout_2->addWidget(mOffsetZSpinBox, 2, 1, 1, 1);

        line_3 = new QFrame(mCrsGroupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 3, 0, 1, 1);

        mScaleZSpinBox = new QgsDoubleSpinBox(mCrsGroupBox_2);
        mScaleZSpinBox->setObjectName(QString::fromUtf8("mScaleZSpinBox"));
        mScaleZSpinBox->setDecimals(6);
        mScaleZSpinBox->setMinimum(-99999999999.000000000000000);
        mScaleZSpinBox->setMaximum(99999999999.000000000000000);
        mScaleZSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(mScaleZSpinBox, 1, 1, 1, 1);

        label = new QLabel(mCrsGroupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(mCrsGroupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mShiftZAxisButton = new QPushButton(mCrsGroupBox_2);
        mShiftZAxisButton->setObjectName(QString::fromUtf8("mShiftZAxisButton"));
        mShiftZAxisButton->setMinimumSize(QSize(24, 24));
        mShiftZAxisButton->setMaximumSize(QSize(24, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::On);
        mShiftZAxisButton->setIcon(icon);

        gridLayout_2->addWidget(mShiftZAxisButton, 2, 2, 1, 1);

        label_3 = new QLabel(mCrsGroupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 3);


        verticalLayout->addWidget(mCrsGroupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mCrsGroupBox_2, mScaleZSpinBox);
        QWidget::setTabOrder(mScaleZSpinBox, mOffsetZSpinBox);
        QWidget::setTabOrder(mOffsetZSpinBox, mShiftZAxisButton);

        retranslateUi(QgsTiledSceneElevationPropertiesWidgetBase);

        QMetaObject::connectSlotsByName(QgsTiledSceneElevationPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsTiledSceneElevationPropertiesWidgetBase)
    {
        QgsTiledSceneElevationPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsTiledSceneElevationPropertiesWidgetBase", "Tiled Scene Elevation Properties", nullptr));
        mCrsGroupBox_2->setTitle(QCoreApplication::translate("QgsTiledSceneElevationPropertiesWidgetBase", "Elevation", nullptr));
        label->setText(QCoreApplication::translate("QgsTiledSceneElevationPropertiesWidgetBase", "Offset", nullptr));
        label_2->setText(QCoreApplication::translate("QgsTiledSceneElevationPropertiesWidgetBase", "Scale", nullptr));
#if QT_CONFIG(tooltip)
        mShiftZAxisButton->setToolTip(QCoreApplication::translate("QgsTiledSceneElevationPropertiesWidgetBase", "Automatically sets the offset so that the lowest point in the scene sits at an elevation of 0.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QgsTiledSceneElevationPropertiesWidgetBase", "<html><head/><body><p><span style=\" font-weight:600;\">Elevation scaling and offset can be used to manually correct elevation values in the tiled scene at render time.</span></p><p>The scale is applied to the tiled scene elevation values before adding the offset.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTiledSceneElevationPropertiesWidgetBase: public Ui_QgsTiledSceneElevationPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTILEDSCENEELEVATIONPROPERTIESWIDGETBASE_H
