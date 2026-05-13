/********************************************************************************
** Form generated from reading UI file 'qgsmeshstaticdatasetwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHSTATICDATASETWIDGETBASE_H
#define UI_QGSMESHSTATICDATASETWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMeshStaticDatasetWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QComboBox *mVectorDatasetComboBox;
    QLabel *label_3;
    QLabel *label;
    QComboBox *mScalarDatasetComboBox;
    QFrame *line;
    QLabel *mScalarName;
    QLabel *mVectorName;

    void setupUi(QWidget *QgsMeshStaticDatasetWidget)
    {
        if (QgsMeshStaticDatasetWidget->objectName().isEmpty())
            QgsMeshStaticDatasetWidget->setObjectName(QString::fromUtf8("QgsMeshStaticDatasetWidget"));
        QgsMeshStaticDatasetWidget->resize(400, 128);
        QgsMeshStaticDatasetWidget->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsMeshStaticDatasetWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        mVectorDatasetComboBox = new QComboBox(QgsMeshStaticDatasetWidget);
        mVectorDatasetComboBox->setObjectName(QString::fromUtf8("mVectorDatasetComboBox"));

        gridLayout->addWidget(mVectorDatasetComboBox, 3, 2, 1, 1);

        label_3 = new QLabel(QgsMeshStaticDatasetWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(QgsMeshStaticDatasetWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mScalarDatasetComboBox = new QComboBox(QgsMeshStaticDatasetWidget);
        mScalarDatasetComboBox->setObjectName(QString::fromUtf8("mScalarDatasetComboBox"));

        gridLayout->addWidget(mScalarDatasetComboBox, 3, 0, 1, 1);

        line = new QFrame(QgsMeshStaticDatasetWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 4, 1);

        mScalarName = new QLabel(QgsMeshStaticDatasetWidget);
        mScalarName->setObjectName(QString::fromUtf8("mScalarName"));

        gridLayout->addWidget(mScalarName, 1, 0, 2, 1);

        mVectorName = new QLabel(QgsMeshStaticDatasetWidget);
        mVectorName->setObjectName(QString::fromUtf8("mVectorName"));

        gridLayout->addWidget(mVectorName, 1, 2, 2, 1);

        QWidget::setTabOrder(mScalarDatasetComboBox, mVectorDatasetComboBox);

        retranslateUi(QgsMeshStaticDatasetWidget);

        QMetaObject::connectSlotsByName(QgsMeshStaticDatasetWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshStaticDatasetWidget)
    {
#if QT_CONFIG(tooltip)
        mVectorDatasetComboBox->setToolTip(QCoreApplication::translate("QgsMeshStaticDatasetWidget", "Select the timestamp to use for the vector dataset group display", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QgsMeshStaticDatasetWidget", "Vector Dataset Group", nullptr));
        label->setText(QCoreApplication::translate("QgsMeshStaticDatasetWidget", "Scalar Dataset Group", nullptr));
#if QT_CONFIG(tooltip)
        mScalarDatasetComboBox->setToolTip(QCoreApplication::translate("QgsMeshStaticDatasetWidget", "Select the timestamp to use for the scalar dataset group display", nullptr));
#endif // QT_CONFIG(tooltip)
        mScalarName->setText(QCoreApplication::translate("QgsMeshStaticDatasetWidget", "Name", nullptr));
        mVectorName->setText(QCoreApplication::translate("QgsMeshStaticDatasetWidget", "Name", nullptr));
        (void)QgsMeshStaticDatasetWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsMeshStaticDatasetWidget: public Ui_QgsMeshStaticDatasetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHSTATICDATASETWIDGETBASE_H
