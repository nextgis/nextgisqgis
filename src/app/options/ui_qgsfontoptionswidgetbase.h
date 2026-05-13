/********************************************************************************
** Form generated from reading UI file 'qgsfontoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFONTOPTIONSWIDGETBASE_H
#define UI_QGSFONTOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsFontOptionsWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QToolButton *mButtonAddReplacement;
    QTableWidget *mTableReplacements;
    QToolButton *mButtonRemoveReplacement;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QToolButton *mButtonRemoveUserFont;
    QTableWidget *mTableUserFonts;
    QCheckBox *mCheckBoxDownloadFonts;

    void setupUi(QWidget *QgsFontOptionsWidgetBase)
    {
        if (QgsFontOptionsWidgetBase->objectName().isEmpty())
            QgsFontOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsFontOptionsWidgetBase"));
        QgsFontOptionsWidgetBase->resize(968, 792);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsFontOptionsWidgetBase->sizePolicy().hasHeightForWidth());
        QgsFontOptionsWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsFontOptionsWidgetBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(QgsFontOptionsWidgetBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mButtonAddReplacement = new QToolButton(groupBox_2);
        mButtonAddReplacement->setObjectName(QString::fromUtf8("mButtonAddReplacement"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddReplacement->setIcon(icon);

        gridLayout->addWidget(mButtonAddReplacement, 0, 1, 1, 1);

        mTableReplacements = new QTableWidget(groupBox_2);
        if (mTableReplacements->columnCount() < 2)
            mTableReplacements->setColumnCount(2);
        mTableReplacements->setObjectName(QString::fromUtf8("mTableReplacements"));
        mTableReplacements->setColumnCount(2);

        gridLayout->addWidget(mTableReplacements, 1, 0, 1, 3);

        mButtonRemoveReplacement = new QToolButton(groupBox_2);
        mButtonRemoveReplacement->setObjectName(QString::fromUtf8("mButtonRemoveReplacement"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveReplacement->setIcon(icon1);

        gridLayout->addWidget(mButtonRemoveReplacement, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(QgsFontOptionsWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mButtonRemoveUserFont = new QToolButton(groupBox);
        mButtonRemoveUserFont->setObjectName(QString::fromUtf8("mButtonRemoveUserFont"));
        mButtonRemoveUserFont->setIcon(icon1);

        gridLayout_2->addWidget(mButtonRemoveUserFont, 0, 1, 1, 1);

        mTableUserFonts = new QTableWidget(groupBox);
        if (mTableUserFonts->columnCount() < 2)
            mTableUserFonts->setColumnCount(2);
        mTableUserFonts->setObjectName(QString::fromUtf8("mTableUserFonts"));
        mTableUserFonts->setColumnCount(2);

        gridLayout_2->addWidget(mTableUserFonts, 1, 0, 1, 2);

        mCheckBoxDownloadFonts = new QCheckBox(groupBox);
        mCheckBoxDownloadFonts->setObjectName(QString::fromUtf8("mCheckBoxDownloadFonts"));

        gridLayout_2->addWidget(mCheckBoxDownloadFonts, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(QgsFontOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsFontOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsFontOptionsWidgetBase)
    {
        QgsFontOptionsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsFontOptionsWidgetBase", "GPS Device Editor", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QgsFontOptionsWidgetBase", "Font Replacements", nullptr));
        label->setText(QCoreApplication::translate("QgsFontOptionsWidgetBase", "References to fonts present in this replacement list will automatically be replaced with the matching replacement font family", nullptr));
#if QT_CONFIG(tooltip)
        mButtonAddReplacement->setToolTip(QCoreApplication::translate("QgsFontOptionsWidgetBase", "Add new replacement", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonAddReplacement->setText(QString());
#if QT_CONFIG(tooltip)
        mButtonRemoveReplacement->setToolTip(QCoreApplication::translate("QgsFontOptionsWidgetBase", "Remove selected replacement", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveReplacement->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("QgsFontOptionsWidgetBase", "User Fonts", nullptr));
#if QT_CONFIG(tooltip)
        mButtonRemoveUserFont->setToolTip(QCoreApplication::translate("QgsFontOptionsWidgetBase", "Remove selected fonts", nullptr));
#endif // QT_CONFIG(tooltip)
        mButtonRemoveUserFont->setText(QString());
#if QT_CONFIG(tooltip)
        mCheckBoxDownloadFonts->setToolTip(QCoreApplication::translate("QgsFontOptionsWidgetBase", "If checked, known freely licensed fonts which are not installed locally but are referenced in a project or style will be automatically downloaded and made available for use.", nullptr));
#endif // QT_CONFIG(tooltip)
        mCheckBoxDownloadFonts->setText(QCoreApplication::translate("QgsFontOptionsWidgetBase", "Automatically download missing, freely-licensed fonts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsFontOptionsWidgetBase: public Ui_QgsFontOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFONTOPTIONSWIDGETBASE_H
