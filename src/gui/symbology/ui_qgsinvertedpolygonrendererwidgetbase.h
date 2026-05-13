/********************************************************************************
** Form generated from reading UI file 'qgsinvertedpolygonrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSINVERTEDPOLYGONRENDERERWIDGETBASE_H
#define UI_QGSINVERTEDPOLYGONRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsInvertedPolygonRendererWidgetBase
{
public:
    QVBoxLayout *mLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mRendererLabel;
    QComboBox *mRendererComboBox;
    QCheckBox *mMergePolygonsCheckBox;

    void setupUi(QWidget *QgsInvertedPolygonRendererWidgetBase)
    {
        if (QgsInvertedPolygonRendererWidgetBase->objectName().isEmpty())
            QgsInvertedPolygonRendererWidgetBase->setObjectName(QString::fromUtf8("QgsInvertedPolygonRendererWidgetBase"));
        QgsInvertedPolygonRendererWidgetBase->resize(316, 75);
        QgsInvertedPolygonRendererWidgetBase->setWindowTitle(QString::fromUtf8("Form"));
        mLayout = new QVBoxLayout(QgsInvertedPolygonRendererWidgetBase);
        mLayout->setObjectName(QString::fromUtf8("mLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mRendererLabel = new QLabel(QgsInvertedPolygonRendererWidgetBase);
        mRendererLabel->setObjectName(QString::fromUtf8("mRendererLabel"));

        horizontalLayout->addWidget(mRendererLabel);

        mRendererComboBox = new QComboBox(QgsInvertedPolygonRendererWidgetBase);
        mRendererComboBox->setObjectName(QString::fromUtf8("mRendererComboBox"));

        horizontalLayout->addWidget(mRendererComboBox);


        mLayout->addLayout(horizontalLayout);

        mMergePolygonsCheckBox = new QCheckBox(QgsInvertedPolygonRendererWidgetBase);
        mMergePolygonsCheckBox->setObjectName(QString::fromUtf8("mMergePolygonsCheckBox"));

        mLayout->addWidget(mMergePolygonsCheckBox);

        QWidget::setTabOrder(mRendererComboBox, mMergePolygonsCheckBox);

        retranslateUi(QgsInvertedPolygonRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsInvertedPolygonRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsInvertedPolygonRendererWidgetBase)
    {
        mRendererLabel->setText(QCoreApplication::translate("QgsInvertedPolygonRendererWidgetBase", "Sub renderer", nullptr));
#if QT_CONFIG(tooltip)
        mMergePolygonsCheckBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mMergePolygonsCheckBox->setText(QCoreApplication::translate("QgsInvertedPolygonRendererWidgetBase", "Merge polygons before rendering (slow)", nullptr));
        (void)QgsInvertedPolygonRendererWidgetBase;
    } // retranslateUi

};

namespace Ui {
    class QgsInvertedPolygonRendererWidgetBase: public Ui_QgsInvertedPolygonRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSINVERTEDPOLYGONRENDERERWIDGETBASE_H
