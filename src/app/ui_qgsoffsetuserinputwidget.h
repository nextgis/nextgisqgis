/********************************************************************************
** Form generated from reading UI file 'qgsoffsetuserinputwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOFFSETUSERINPUTWIDGET_H
#define UI_QGSOFFSETUSERINPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOffsetUserInputBase
{
public:
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mOffsetSpinBox;
    QLabel *label;
    QToolButton *mShowAdvancedButton;
    QWidget *mAdvancedConfigWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *mJoinStyleComboBox;
    QLabel *label_3;
    QgsSpinBox *mQuadrantSpinBox;
    QLabel *label_4;
    QgsDoubleSpinBox *mMiterLimitSpinBox;
    QLabel *mCapStyleLabel;
    QComboBox *mCapStyleComboBox;

    void setupUi(QWidget *QgsOffsetUserInputBase)
    {
        if (QgsOffsetUserInputBase->objectName().isEmpty())
            QgsOffsetUserInputBase->setObjectName(QString::fromUtf8("QgsOffsetUserInputBase"));
        QgsOffsetUserInputBase->resize(430, 142);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsOffsetUserInputBase->sizePolicy().hasHeightForWidth());
        QgsOffsetUserInputBase->setSizePolicy(sizePolicy);
        QgsOffsetUserInputBase->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(QgsOffsetUserInputBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mOffsetSpinBox = new QgsDoubleSpinBox(QgsOffsetUserInputBase);
        mOffsetSpinBox->setObjectName(QString::fromUtf8("mOffsetSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOffsetSpinBox->sizePolicy().hasHeightForWidth());
        mOffsetSpinBox->setSizePolicy(sizePolicy1);
        mOffsetSpinBox->setMinimum(-9999999.000000000000000);
        mOffsetSpinBox->setMaximum(999999.989999999990687);

        gridLayout->addWidget(mOffsetSpinBox, 1, 2, 1, 1);

        label = new QLabel(QgsOffsetUserInputBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        mShowAdvancedButton = new QToolButton(QgsOffsetUserInputBase);
        mShowAdvancedButton->setObjectName(QString::fromUtf8("mShowAdvancedButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mShowAdvancedButton->setIcon(icon);
        mShowAdvancedButton->setCheckable(true);
        mShowAdvancedButton->setChecked(true);
        mShowAdvancedButton->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(mShowAdvancedButton, 1, 0, 1, 1);

        mAdvancedConfigWidget = new QWidget(QgsOffsetUserInputBase);
        mAdvancedConfigWidget->setObjectName(QString::fromUtf8("mAdvancedConfigWidget"));
        gridLayout_2 = new QGridLayout(mAdvancedConfigWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(mAdvancedConfigWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        mJoinStyleComboBox = new QComboBox(mAdvancedConfigWidget);
        mJoinStyleComboBox->setObjectName(QString::fromUtf8("mJoinStyleComboBox"));

        gridLayout_2->addWidget(mJoinStyleComboBox, 0, 1, 1, 1);

        label_3 = new QLabel(mAdvancedConfigWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        mQuadrantSpinBox = new QgsSpinBox(mAdvancedConfigWidget);
        mQuadrantSpinBox->setObjectName(QString::fromUtf8("mQuadrantSpinBox"));
        mQuadrantSpinBox->setMinimum(1);

        gridLayout_2->addWidget(mQuadrantSpinBox, 0, 3, 1, 1);

        label_4 = new QLabel(mAdvancedConfigWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        mMiterLimitSpinBox = new QgsDoubleSpinBox(mAdvancedConfigWidget);
        mMiterLimitSpinBox->setObjectName(QString::fromUtf8("mMiterLimitSpinBox"));
        mMiterLimitSpinBox->setMinimum(1.000000000000000);

        gridLayout_2->addWidget(mMiterLimitSpinBox, 1, 1, 1, 1);

        mCapStyleLabel = new QLabel(mAdvancedConfigWidget);
        mCapStyleLabel->setObjectName(QString::fromUtf8("mCapStyleLabel"));
        mCapStyleLabel->setWordWrap(true);

        gridLayout_2->addWidget(mCapStyleLabel, 1, 2, 1, 1);

        mCapStyleComboBox = new QComboBox(mAdvancedConfigWidget);
        mCapStyleComboBox->setObjectName(QString::fromUtf8("mCapStyleComboBox"));

        gridLayout_2->addWidget(mCapStyleComboBox, 1, 3, 1, 1);


        gridLayout->addWidget(mAdvancedConfigWidget, 0, 0, 1, 3);


        retranslateUi(QgsOffsetUserInputBase);

        QMetaObject::connectSlotsByName(QgsOffsetUserInputBase);
    } // setupUi

    void retranslateUi(QWidget *QgsOffsetUserInputBase)
    {
        label->setText(QCoreApplication::translate("QgsOffsetUserInputBase", "Offset", nullptr));
        mShowAdvancedButton->setText(QCoreApplication::translate("QgsOffsetUserInputBase", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("QgsOffsetUserInputBase", "Join style", nullptr));
        label_3->setText(QCoreApplication::translate("QgsOffsetUserInputBase", "Quadrant segments", nullptr));
        label_4->setText(QCoreApplication::translate("QgsOffsetUserInputBase", "Miter limit", nullptr));
        mCapStyleLabel->setText(QCoreApplication::translate("QgsOffsetUserInputBase", "Cap style", nullptr));
        (void)QgsOffsetUserInputBase;
    } // retranslateUi

};

namespace Ui {
    class QgsOffsetUserInputBase: public Ui_QgsOffsetUserInputBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOFFSETUSERINPUTWIDGET_H
