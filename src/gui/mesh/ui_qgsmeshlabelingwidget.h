/********************************************************************************
** Form generated from reading UI file 'qgsmeshlabelingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHLABELINGWIDGET_H
#define UI_QGSMESHLABELINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMeshLabelingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *mLabelModeComboBox;
    QStackedWidget *mStackedWidget;

    void setupUi(QWidget *QgsMeshLabelingWidget)
    {
        if (QgsMeshLabelingWidget->objectName().isEmpty())
            QgsMeshLabelingWidget->setObjectName(QString::fromUtf8("QgsMeshLabelingWidget"));
        QgsMeshLabelingWidget->resize(572, 300);
        verticalLayout = new QVBoxLayout(QgsMeshLabelingWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mLabelModeComboBox = new QComboBox(QgsMeshLabelingWidget);
        mLabelModeComboBox->setObjectName(QString::fromUtf8("mLabelModeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelModeComboBox->sizePolicy().hasHeightForWidth());
        mLabelModeComboBox->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mLabelModeComboBox);

        mStackedWidget = new QStackedWidget(QgsMeshLabelingWidget);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));

        verticalLayout->addWidget(mStackedWidget);


        retranslateUi(QgsMeshLabelingWidget);

        QMetaObject::connectSlotsByName(QgsMeshLabelingWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshLabelingWidget)
    {
        (void)QgsMeshLabelingWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsMeshLabelingWidget: public Ui_QgsMeshLabelingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHLABELINGWIDGET_H
