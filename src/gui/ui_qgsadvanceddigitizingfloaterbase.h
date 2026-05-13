/********************************************************************************
** Form generated from reading UI file 'qgsadvanceddigitizingfloaterbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADVANCEDDIGITIZINGFLOATERBASE_H
#define UI_QGSADVANCEDDIGITIZINGFLOATERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAdvancedDigitizingFloaterBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mZLabel;
    QLabel *mMLabel;
    QLabel *mYLabel;
    QLabel *mXLabel;
    QLineEdit *mYLineEdit;
    QLabel *mAngleLabel;
    QLineEdit *mDistanceLineEdit;
    QLineEdit *mZLineEdit;
    QLineEdit *mAngleLineEdit;
    QLabel *mCommonAngleSnappingLabel;
    QLabel *mDistanceLabel;
    QLineEdit *mMLineEdit;
    QLineEdit *mXLineEdit;
    QLineEdit *mCommonAngleSnappingLineEdit;
    QLabel *mBearingLabel;
    QLineEdit *mBearingLineEdit;

    void setupUi(QWidget *QgsAdvancedDigitizingFloaterBase)
    {
        if (QgsAdvancedDigitizingFloaterBase->objectName().isEmpty())
            QgsAdvancedDigitizingFloaterBase->setObjectName(QString::fromUtf8("QgsAdvancedDigitizingFloaterBase"));
        QgsAdvancedDigitizingFloaterBase->resize(310, 233);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 127));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QgsAdvancedDigitizingFloaterBase->setPalette(palette);
        QgsAdvancedDigitizingFloaterBase->setAutoFillBackground(true);
        QgsAdvancedDigitizingFloaterBase->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgba(255,255,255,127)}"));
        gridLayout = new QGridLayout(QgsAdvancedDigitizingFloaterBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(2, 0, 0, 0);
        mZLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mZLabel->setObjectName(QString::fromUtf8("mZLabel"));
        mZLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mZLabel, 6, 1, 1, 1);

        mMLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mMLabel->setObjectName(QString::fromUtf8("mMLabel"));
        mMLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mMLabel, 7, 1, 1, 1);

        mYLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mYLabel->setObjectName(QString::fromUtf8("mYLabel"));
        mYLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mYLabel, 5, 1, 1, 1);

        mXLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mXLabel->setObjectName(QString::fromUtf8("mXLabel"));
        mXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mXLabel, 4, 1, 1, 1);

        mYLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mYLineEdit->setObjectName(QString::fromUtf8("mYLineEdit"));
        mYLineEdit->setMinimumSize(QSize(40, 0));
        mYLineEdit->setFrame(false);

        gridLayout->addWidget(mYLineEdit, 5, 3, 1, 1);

        mAngleLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mAngleLabel->setObjectName(QString::fromUtf8("mAngleLabel"));
        mAngleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mAngleLabel, 3, 1, 1, 1);

        mDistanceLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mDistanceLineEdit->setObjectName(QString::fromUtf8("mDistanceLineEdit"));
        mDistanceLineEdit->setFrame(false);
        mDistanceLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mDistanceLineEdit, 2, 3, 1, 1);

        mZLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mZLineEdit->setObjectName(QString::fromUtf8("mZLineEdit"));
        mZLineEdit->setSizeIncrement(QSize(40, 0));
        mZLineEdit->setFrame(false);

        gridLayout->addWidget(mZLineEdit, 6, 3, 1, 1);

        mAngleLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mAngleLineEdit->setObjectName(QString::fromUtf8("mAngleLineEdit"));
        mAngleLineEdit->setMinimumSize(QSize(40, 0));
        mAngleLineEdit->setFrame(false);

        gridLayout->addWidget(mAngleLineEdit, 3, 3, 1, 1);

        mCommonAngleSnappingLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mCommonAngleSnappingLabel->setObjectName(QString::fromUtf8("mCommonAngleSnappingLabel"));

        gridLayout->addWidget(mCommonAngleSnappingLabel, 9, 1, 1, 1);

        mDistanceLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mDistanceLabel->setObjectName(QString::fromUtf8("mDistanceLabel"));
        mDistanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mDistanceLabel, 2, 1, 1, 1);

        mMLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mMLineEdit->setObjectName(QString::fromUtf8("mMLineEdit"));
        mMLineEdit->setSizeIncrement(QSize(40, 0));
        mMLineEdit->setFrame(false);

        gridLayout->addWidget(mMLineEdit, 7, 3, 1, 1);

        mXLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mXLineEdit->setObjectName(QString::fromUtf8("mXLineEdit"));
        mXLineEdit->setMinimumSize(QSize(40, 0));
        mXLineEdit->setFrame(false);

        gridLayout->addWidget(mXLineEdit, 4, 3, 1, 1);

        mCommonAngleSnappingLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mCommonAngleSnappingLineEdit->setObjectName(QString::fromUtf8("mCommonAngleSnappingLineEdit"));
        mCommonAngleSnappingLineEdit->setFrame(false);

        gridLayout->addWidget(mCommonAngleSnappingLineEdit, 9, 3, 1, 1);

        mBearingLabel = new QLabel(QgsAdvancedDigitizingFloaterBase);
        mBearingLabel->setObjectName(QString::fromUtf8("mBearingLabel"));

        gridLayout->addWidget(mBearingLabel, 8, 1, 1, 1);

        mBearingLineEdit = new QLineEdit(QgsAdvancedDigitizingFloaterBase);
        mBearingLineEdit->setObjectName(QString::fromUtf8("mBearingLineEdit"));
        mBearingLineEdit->setFrame(false);

        gridLayout->addWidget(mBearingLineEdit, 8, 3, 1, 1);

        QWidget::setTabOrder(mDistanceLineEdit, mAngleLineEdit);
        QWidget::setTabOrder(mAngleLineEdit, mXLineEdit);
        QWidget::setTabOrder(mXLineEdit, mYLineEdit);

        retranslateUi(QgsAdvancedDigitizingFloaterBase);

        QMetaObject::connectSlotsByName(QgsAdvancedDigitizingFloaterBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAdvancedDigitizingFloaterBase)
    {
        mZLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "z", nullptr));
        mMLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "m", nullptr));
        mYLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "y", nullptr));
        mXLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "x", nullptr));
#if QT_CONFIG(tooltip)
        mYLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mYLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
        mAngleLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "a", nullptr));
#if QT_CONFIG(tooltip)
        mDistanceLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mDistanceLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
        mZLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
#if QT_CONFIG(tooltip)
        mAngleLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mAngleLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
        mCommonAngleSnappingLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "\342\210\240", nullptr));
        mDistanceLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "d", nullptr));
        mMLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
#if QT_CONFIG(tooltip)
        mXLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mXLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
        mCommonAngleSnappingLineEdit->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "-", nullptr));
        mBearingLabel->setText(QCoreApplication::translate("QgsAdvancedDigitizingFloaterBase", "\342\206\273", nullptr));
        (void)QgsAdvancedDigitizingFloaterBase;
    } // retranslateUi

};

namespace Ui {
    class QgsAdvancedDigitizingFloaterBase: public Ui_QgsAdvancedDigitizingFloaterBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADVANCEDDIGITIZINGFLOATERBASE_H
