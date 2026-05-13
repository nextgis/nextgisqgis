/********************************************************************************
** Form generated from reading UI file 'qgsglobdomainwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGLOBDOMAINWIDGETBASE_H
#define UI_QGSGLOBDOMAINWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsGlobDomainWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *minimumLabel_2;
    QLineEdit *mEditGlob;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsGlobDomainWidgetBase)
    {
        if (QgsGlobDomainWidgetBase->objectName().isEmpty())
            QgsGlobDomainWidgetBase->setObjectName(QString::fromUtf8("QgsGlobDomainWidgetBase"));
        QgsGlobDomainWidgetBase->resize(339, 148);
        gridLayout_2 = new QGridLayout(QgsGlobDomainWidgetBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(QgsGlobDomainWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        minimumLabel_2 = new QLabel(groupBox);
        minimumLabel_2->setObjectName(QString::fromUtf8("minimumLabel_2"));

        gridLayout->addWidget(minimumLabel_2, 0, 0, 1, 1);

        mEditGlob = new QLineEdit(groupBox);
        mEditGlob->setObjectName(QString::fromUtf8("mEditGlob"));

        gridLayout->addWidget(mEditGlob, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(QgsGlobDomainWidgetBase);

        QMetaObject::connectSlotsByName(QgsGlobDomainWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsGlobDomainWidgetBase)
    {
        QgsGlobDomainWidgetBase->setWindowTitle(QCoreApplication::translate("QgsGlobDomainWidgetBase", "Glob Domain", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QgsGlobDomainWidgetBase", "Pattern", nullptr));
        minimumLabel_2->setText(QCoreApplication::translate("QgsGlobDomainWidgetBase", "Glob pattern", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGlobDomainWidgetBase: public Ui_QgsGlobDomainWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGLOBDOMAINWIDGETBASE_H
