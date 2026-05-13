/********************************************************************************
** Form generated from reading UI file 'qgsprocessingrastercalculatorexpressiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGRASTERCALCULATOREXPRESSIONDIALOGBASE_H
#define UI_QGSPROCESSINGRASTERCALCULATOREXPRESSIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingRasterCalculatorExpressionDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *mLayersList;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *mBtnOpenBracket;
    QPushButton *mBtnGreaterEqual;
    QPushButton *mBtnTan;
    QPushButton *mBtnNotEqual;
    QPushButton *mBtnSin;
    QPushButton *mBtnSqrt;
    QPushButton *mBtnAsin;
    QPushButton *mBtnLess;
    QPushButton *mBtnCos;
    QPushButton *mBtnPower;
    QPushButton *mBtnMinus;
    QPushButton *mBtnPlus;
    QPushButton *mBtnAnd;
    QPushButton *mBtnIf;
    QPushButton *mBtnMin;
    QPushButton *mBtnMultiply;
    QPushButton *mBtnAcos;
    QPushButton *mBtnAtan;
    QPushButton *mBtnGreater;
    QPushButton *mBtnMax;
    QPushButton *mBtnEqual;
    QPushButton *mBtnDivide;
    QPushButton *mBtnCloseBracket;
    QPushButton *mBtnLessEqual;
    QPushButton *mBtnOr;
    QPushButton *mBtnAbs;
    QPushButton *mBtnLog;
    QPushButton *mBtnLn;
    QLabel *label_2;
    QTextEdit *mExpressionTextEdit;
    QLabel *mExpressionValidLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsProcessingRasterCalculatorExpressionDialogBase)
    {
        if (QgsProcessingRasterCalculatorExpressionDialogBase->objectName().isEmpty())
            QgsProcessingRasterCalculatorExpressionDialogBase->setObjectName(QString::fromUtf8("QgsProcessingRasterCalculatorExpressionDialogBase"));
        QgsProcessingRasterCalculatorExpressionDialogBase->resize(714, 318);
        verticalLayout_2 = new QVBoxLayout(QgsProcessingRasterCalculatorExpressionDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(QgsProcessingRasterCalculatorExpressionDialogBase);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mLayersList = new QListWidget(widget);
        mLayersList->setObjectName(QString::fromUtf8("mLayersList"));

        verticalLayout->addWidget(mLayersList);

        splitter->addWidget(widget);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mBtnOpenBracket = new QPushButton(groupBox);
        mBtnOpenBracket->setObjectName(QString::fromUtf8("mBtnOpenBracket"));

        gridLayout->addWidget(mBtnOpenBracket, 2, 1, 1, 1);

        mBtnGreaterEqual = new QPushButton(groupBox);
        mBtnGreaterEqual->setObjectName(QString::fromUtf8("mBtnGreaterEqual"));

        gridLayout->addWidget(mBtnGreaterEqual, 1, 2, 1, 1);

        mBtnTan = new QPushButton(groupBox);
        mBtnTan->setObjectName(QString::fromUtf8("mBtnTan"));

        gridLayout->addWidget(mBtnTan, 2, 6, 1, 1);

        mBtnNotEqual = new QPushButton(groupBox);
        mBtnNotEqual->setObjectName(QString::fromUtf8("mBtnNotEqual"));

        gridLayout->addWidget(mBtnNotEqual, 1, 3, 1, 1);

        mBtnSin = new QPushButton(groupBox);
        mBtnSin->setObjectName(QString::fromUtf8("mBtnSin"));

        gridLayout->addWidget(mBtnSin, 0, 6, 1, 1);

        mBtnSqrt = new QPushButton(groupBox);
        mBtnSqrt->setObjectName(QString::fromUtf8("mBtnSqrt"));

        gridLayout->addWidget(mBtnSqrt, 1, 1, 1, 1);

        mBtnAsin = new QPushButton(groupBox);
        mBtnAsin->setObjectName(QString::fromUtf8("mBtnAsin"));

        gridLayout->addWidget(mBtnAsin, 0, 7, 1, 1);

        mBtnLess = new QPushButton(groupBox);
        mBtnLess->setObjectName(QString::fromUtf8("mBtnLess"));

        gridLayout->addWidget(mBtnLess, 2, 2, 1, 1);

        mBtnCos = new QPushButton(groupBox);
        mBtnCos->setObjectName(QString::fromUtf8("mBtnCos"));

        gridLayout->addWidget(mBtnCos, 1, 6, 1, 1);

        mBtnPower = new QPushButton(groupBox);
        mBtnPower->setObjectName(QString::fromUtf8("mBtnPower"));

        gridLayout->addWidget(mBtnPower, 0, 1, 1, 1);

        mBtnMinus = new QPushButton(groupBox);
        mBtnMinus->setObjectName(QString::fromUtf8("mBtnMinus"));

        gridLayout->addWidget(mBtnMinus, 1, 0, 1, 1);

        mBtnPlus = new QPushButton(groupBox);
        mBtnPlus->setObjectName(QString::fromUtf8("mBtnPlus"));

        gridLayout->addWidget(mBtnPlus, 0, 0, 1, 1);

        mBtnAnd = new QPushButton(groupBox);
        mBtnAnd->setObjectName(QString::fromUtf8("mBtnAnd"));

        gridLayout->addWidget(mBtnAnd, 2, 3, 1, 1);

        mBtnIf = new QPushButton(groupBox);
        mBtnIf->setObjectName(QString::fromUtf8("mBtnIf"));

        gridLayout->addWidget(mBtnIf, 0, 4, 1, 1);

        mBtnMin = new QPushButton(groupBox);
        mBtnMin->setObjectName(QString::fromUtf8("mBtnMin"));

        gridLayout->addWidget(mBtnMin, 1, 4, 1, 1);

        mBtnMultiply = new QPushButton(groupBox);
        mBtnMultiply->setObjectName(QString::fromUtf8("mBtnMultiply"));

        gridLayout->addWidget(mBtnMultiply, 2, 0, 1, 1);

        mBtnAcos = new QPushButton(groupBox);
        mBtnAcos->setObjectName(QString::fromUtf8("mBtnAcos"));

        gridLayout->addWidget(mBtnAcos, 1, 7, 1, 1);

        mBtnAtan = new QPushButton(groupBox);
        mBtnAtan->setObjectName(QString::fromUtf8("mBtnAtan"));

        gridLayout->addWidget(mBtnAtan, 2, 7, 1, 1);

        mBtnGreater = new QPushButton(groupBox);
        mBtnGreater->setObjectName(QString::fromUtf8("mBtnGreater"));

        gridLayout->addWidget(mBtnGreater, 0, 2, 1, 1);

        mBtnMax = new QPushButton(groupBox);
        mBtnMax->setObjectName(QString::fromUtf8("mBtnMax"));

        gridLayout->addWidget(mBtnMax, 2, 4, 1, 1);

        mBtnEqual = new QPushButton(groupBox);
        mBtnEqual->setObjectName(QString::fromUtf8("mBtnEqual"));

        gridLayout->addWidget(mBtnEqual, 0, 3, 1, 1);

        mBtnDivide = new QPushButton(groupBox);
        mBtnDivide->setObjectName(QString::fromUtf8("mBtnDivide"));

        gridLayout->addWidget(mBtnDivide, 3, 0, 1, 1);

        mBtnCloseBracket = new QPushButton(groupBox);
        mBtnCloseBracket->setObjectName(QString::fromUtf8("mBtnCloseBracket"));

        gridLayout->addWidget(mBtnCloseBracket, 3, 1, 1, 1);

        mBtnLessEqual = new QPushButton(groupBox);
        mBtnLessEqual->setObjectName(QString::fromUtf8("mBtnLessEqual"));

        gridLayout->addWidget(mBtnLessEqual, 3, 2, 1, 1);

        mBtnOr = new QPushButton(groupBox);
        mBtnOr->setObjectName(QString::fromUtf8("mBtnOr"));

        gridLayout->addWidget(mBtnOr, 3, 3, 1, 1);

        mBtnAbs = new QPushButton(groupBox);
        mBtnAbs->setObjectName(QString::fromUtf8("mBtnAbs"));

        gridLayout->addWidget(mBtnAbs, 3, 4, 1, 1);

        mBtnLog = new QPushButton(groupBox);
        mBtnLog->setObjectName(QString::fromUtf8("mBtnLog"));

        gridLayout->addWidget(mBtnLog, 3, 6, 1, 1);

        mBtnLn = new QPushButton(groupBox);
        mBtnLn->setObjectName(QString::fromUtf8("mBtnLn"));

        gridLayout->addWidget(mBtnLn, 3, 7, 1, 1);

        splitter->addWidget(groupBox);

        verticalLayout_2->addWidget(splitter);

        label_2 = new QLabel(QgsProcessingRasterCalculatorExpressionDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        mExpressionTextEdit = new QTextEdit(QgsProcessingRasterCalculatorExpressionDialogBase);
        mExpressionTextEdit->setObjectName(QString::fromUtf8("mExpressionTextEdit"));

        verticalLayout_2->addWidget(mExpressionTextEdit);

        mExpressionValidLabel = new QLabel(QgsProcessingRasterCalculatorExpressionDialogBase);
        mExpressionValidLabel->setObjectName(QString::fromUtf8("mExpressionValidLabel"));

        verticalLayout_2->addWidget(mExpressionValidLabel);

        buttonBox = new QDialogButtonBox(QgsProcessingRasterCalculatorExpressionDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(QgsProcessingRasterCalculatorExpressionDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsProcessingRasterCalculatorExpressionDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsProcessingRasterCalculatorExpressionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsProcessingRasterCalculatorExpressionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProcessingRasterCalculatorExpressionDialogBase)
    {
        QgsProcessingRasterCalculatorExpressionDialogBase->setWindowTitle(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "Raster Calculator Expression", nullptr));
        label->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "Layers", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "Operators", nullptr));
        mBtnOpenBracket->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "(", nullptr));
        mBtnGreaterEqual->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", ">=", nullptr));
        mBtnTan->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "tan", nullptr));
        mBtnNotEqual->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "!=", nullptr));
        mBtnSin->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "sin", nullptr));
        mBtnSqrt->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "sqrt", nullptr));
        mBtnAsin->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "asin", nullptr));
        mBtnLess->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "<", nullptr));
        mBtnCos->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "cos", nullptr));
        mBtnPower->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "^", nullptr));
        mBtnMinus->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "-", nullptr));
        mBtnPlus->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "+", nullptr));
        mBtnAnd->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "AND", nullptr));
        mBtnIf->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "IF", nullptr));
        mBtnMin->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "min", nullptr));
        mBtnMultiply->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "*", nullptr));
        mBtnAcos->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "acos", nullptr));
        mBtnAtan->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "atan", nullptr));
        mBtnGreater->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", ">", nullptr));
        mBtnMax->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "max", nullptr));
        mBtnEqual->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "=", nullptr));
        mBtnDivide->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "/", nullptr));
        mBtnCloseBracket->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", ")", nullptr));
        mBtnLessEqual->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "<=", nullptr));
        mBtnOr->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "OR", nullptr));
        mBtnAbs->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "abs", nullptr));
        mBtnLog->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "log10", nullptr));
        mBtnLn->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "ln", nullptr));
        label_2->setText(QCoreApplication::translate("QgsProcessingRasterCalculatorExpressionDialogBase", "Raster Calculator Expression", nullptr));
        mExpressionValidLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingRasterCalculatorExpressionDialogBase: public Ui_QgsProcessingRasterCalculatorExpressionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGRASTERCALCULATOREXPRESSIONDIALOGBASE_H
