/********************************************************************************
** Form generated from reading UI file 'qgsgeorefconfigdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOREFCONFIGDIALOGBASE_H
#define UI_QGSGEOREFCONFIGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <qgsdoublespinbox.h>

QT_BEGIN_NAMESPACE

class Ui_QgsGeorefConfigDialogBase
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer;
    QGroupBox *mPointTipGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *mShowIDsCheckBox;
    QCheckBox *mShowCoordsCheckBox;
    QCheckBox *mShowDockedCheckBox;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *mPaperSizeComboBox;
    QGroupBox *mPdfReportGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsDoubleSpinBox *mLeftMarginSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QgsDoubleSpinBox *mRightMarginSpinBox;
    QGroupBox *mResidualUnitsGroupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *mPixelsButton;
    QRadioButton *mMapUnitsButton;

    void setupUi(QDialog *QgsGeorefConfigDialogBase)
    {
        if (QgsGeorefConfigDialogBase->objectName().isEmpty())
            QgsGeorefConfigDialogBase->setObjectName(QString::fromUtf8("QgsGeorefConfigDialogBase"));
        QgsGeorefConfigDialogBase->resize(478, 542);
        gridLayout_4 = new QGridLayout(QgsGeorefConfigDialogBase);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 0, 1, 1);

        mPointTipGroupBox = new QGroupBox(QgsGeorefConfigDialogBase);
        mPointTipGroupBox->setObjectName(QString::fromUtf8("mPointTipGroupBox"));
        gridLayout = new QGridLayout(mPointTipGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mShowIDsCheckBox = new QCheckBox(mPointTipGroupBox);
        mShowIDsCheckBox->setObjectName(QString::fromUtf8("mShowIDsCheckBox"));

        gridLayout->addWidget(mShowIDsCheckBox, 0, 0, 1, 1);

        mShowCoordsCheckBox = new QCheckBox(mPointTipGroupBox);
        mShowCoordsCheckBox->setObjectName(QString::fromUtf8("mShowCoordsCheckBox"));

        gridLayout->addWidget(mShowCoordsCheckBox, 1, 0, 1, 1);


        gridLayout_4->addWidget(mPointTipGroupBox, 0, 0, 1, 1);

        mShowDockedCheckBox = new QCheckBox(QgsGeorefConfigDialogBase);
        mShowDockedCheckBox->setObjectName(QString::fromUtf8("mShowDockedCheckBox"));

        gridLayout_4->addWidget(mShowDockedCheckBox, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsGeorefConfigDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 6, 0, 1, 1);

        groupBox = new QGroupBox(QgsGeorefConfigDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        mPaperSizeComboBox = new QComboBox(groupBox);
        mPaperSizeComboBox->setObjectName(QString::fromUtf8("mPaperSizeComboBox"));

        horizontalLayout_3->addWidget(mPaperSizeComboBox);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 3, 0, 1, 1);

        mPdfReportGroupBox = new QGroupBox(QgsGeorefConfigDialogBase);
        mPdfReportGroupBox->setObjectName(QString::fromUtf8("mPdfReportGroupBox"));
        gridLayout_2 = new QGridLayout(mPdfReportGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(mPdfReportGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mLeftMarginSpinBox = new QgsDoubleSpinBox(mPdfReportGroupBox);
        mLeftMarginSpinBox->setObjectName(QString::fromUtf8("mLeftMarginSpinBox"));
        mLeftMarginSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout->addWidget(mLeftMarginSpinBox);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(mPdfReportGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        mRightMarginSpinBox = new QgsDoubleSpinBox(mPdfReportGroupBox);
        mRightMarginSpinBox->setObjectName(QString::fromUtf8("mRightMarginSpinBox"));
        mRightMarginSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(mRightMarginSpinBox);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_4->addWidget(mPdfReportGroupBox, 2, 0, 1, 1);

        mResidualUnitsGroupBox = new QGroupBox(QgsGeorefConfigDialogBase);
        mResidualUnitsGroupBox->setObjectName(QString::fromUtf8("mResidualUnitsGroupBox"));
        gridLayout_3 = new QGridLayout(mResidualUnitsGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mPixelsButton = new QRadioButton(mResidualUnitsGroupBox);
        mPixelsButton->setObjectName(QString::fromUtf8("mPixelsButton"));

        gridLayout_3->addWidget(mPixelsButton, 0, 0, 1, 1);

        mMapUnitsButton = new QRadioButton(mResidualUnitsGroupBox);
        mMapUnitsButton->setObjectName(QString::fromUtf8("mMapUnitsButton"));

        gridLayout_3->addWidget(mMapUnitsButton, 1, 0, 1, 1);


        gridLayout_4->addWidget(mResidualUnitsGroupBox, 1, 0, 1, 1);

        QWidget::setTabOrder(mShowIDsCheckBox, mShowCoordsCheckBox);
        QWidget::setTabOrder(mShowCoordsCheckBox, mPixelsButton);
        QWidget::setTabOrder(mPixelsButton, mMapUnitsButton);
        QWidget::setTabOrder(mMapUnitsButton, mLeftMarginSpinBox);
        QWidget::setTabOrder(mLeftMarginSpinBox, mRightMarginSpinBox);
        QWidget::setTabOrder(mRightMarginSpinBox, mPaperSizeComboBox);
        QWidget::setTabOrder(mPaperSizeComboBox, mShowDockedCheckBox);

        retranslateUi(QgsGeorefConfigDialogBase);

        QMetaObject::connectSlotsByName(QgsGeorefConfigDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeorefConfigDialogBase)
    {
        QgsGeorefConfigDialogBase->setWindowTitle(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Configure Georeferencer", nullptr));
        mPointTipGroupBox->setTitle(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Point Tip", nullptr));
        mShowIDsCheckBox->setText(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Show IDs", nullptr));
        mShowCoordsCheckBox->setText(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Show coordinates", nullptr));
        mShowDockedCheckBox->setText(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Show Georeferencer window docked", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsGeorefConfigDialogBase", "PDF Map", nullptr));
        label_3->setText(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Paper size", nullptr));
        mPdfReportGroupBox->setTitle(QCoreApplication::translate("QgsGeorefConfigDialogBase", "PDF Report", nullptr));
        label->setText(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Left margin", nullptr));
        mLeftMarginSpinBox->setPrefix(QString());
        mLeftMarginSpinBox->setSuffix(QCoreApplication::translate("QgsGeorefConfigDialogBase", " mm", nullptr));
        label_2->setText(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Right margin", nullptr));
        mRightMarginSpinBox->setSuffix(QCoreApplication::translate("QgsGeorefConfigDialogBase", " mm", nullptr));
        mResidualUnitsGroupBox->setTitle(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Residual Units", nullptr));
        mPixelsButton->setText(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Pixels", nullptr));
        mMapUnitsButton->setText(QCoreApplication::translate("QgsGeorefConfigDialogBase", "Use map units if possible", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGeorefConfigDialogBase: public Ui_QgsGeorefConfigDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOREFCONFIGDIALOGBASE_H
