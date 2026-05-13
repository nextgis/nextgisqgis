/********************************************************************************
** Form generated from reading UI file 'qgsmapcoordsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPCOORDSDIALOGBASE_H
#define UI_QGSMAPCOORDSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapCoordsDialogBase
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *coordinatesLayout;
    QLabel *textLabel1;
    QLineEdit *leXCoord;
    QLabel *textLabel2;
    QLineEdit *leYCoord;
    QgsProjectionSelectionWidget *mProjectionSelector;
    QCheckBox *mMinimizeWindowCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMapCoordsDialogBase)
    {
        if (QgsMapCoordsDialogBase->objectName().isEmpty())
            QgsMapCoordsDialogBase->setObjectName(QString::fromUtf8("QgsMapCoordsDialogBase"));
        QgsMapCoordsDialogBase->resize(584, 421);
        QgsMapCoordsDialogBase->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(QgsMapCoordsDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsMapCoordsDialogBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        coordinatesLayout = new QGridLayout();
        coordinatesLayout->setSpacing(6);
        coordinatesLayout->setObjectName(QString::fromUtf8("coordinatesLayout"));
        textLabel1 = new QLabel(QgsMapCoordsDialogBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        coordinatesLayout->addWidget(textLabel1, 0, 0, 1, 1);

        leXCoord = new QLineEdit(QgsMapCoordsDialogBase);
        leXCoord->setObjectName(QString::fromUtf8("leXCoord"));

        coordinatesLayout->addWidget(leXCoord, 0, 1, 1, 1);

        textLabel2 = new QLabel(QgsMapCoordsDialogBase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        coordinatesLayout->addWidget(textLabel2, 1, 0, 1, 1);

        leYCoord = new QLineEdit(QgsMapCoordsDialogBase);
        leYCoord->setObjectName(QString::fromUtf8("leYCoord"));

        coordinatesLayout->addWidget(leYCoord, 1, 1, 1, 1);


        verticalLayout->addLayout(coordinatesLayout);

        mProjectionSelector = new QgsProjectionSelectionWidget(QgsMapCoordsDialogBase);
        mProjectionSelector->setObjectName(QString::fromUtf8("mProjectionSelector"));
        mProjectionSelector->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(mProjectionSelector);

        mMinimizeWindowCheckBox = new QCheckBox(QgsMapCoordsDialogBase);
        mMinimizeWindowCheckBox->setObjectName(QString::fromUtf8("mMinimizeWindowCheckBox"));

        verticalLayout->addWidget(mMinimizeWindowCheckBox);

        verticalSpacer = new QSpacerItem(12, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsMapCoordsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(leXCoord, leYCoord);

        retranslateUi(QgsMapCoordsDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMapCoordsDialogBase, SLOT(close()));
        QObject::connect(leXCoord, SIGNAL(returnPressed()), leYCoord, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(QgsMapCoordsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMapCoordsDialogBase)
    {
        QgsMapCoordsDialogBase->setWindowTitle(QCoreApplication::translate("QgsMapCoordsDialogBase", "Enter Map Coordinates", nullptr));
        label->setText(QCoreApplication::translate("QgsMapCoordsDialogBase", "<html><head/><body><p>Enter X and Y coordinates (DMS (<span style=\" font-style:italic;\">dd mm ss.ss</span>), DD (<span style=\" font-style:italic;\">dd.dd</span>) or projected coordinates (<span style=\" font-style:italic;\">mmmm.mm</span>)) which correspond with the selected point on the image. Alternatively, click the button with icon of a pencil and then click a corresponding point on map canvas of QGIS to fill in coordinates of that point.</p></body></html>", nullptr));
        textLabel1->setText(QCoreApplication::translate("QgsMapCoordsDialogBase", "X / East", nullptr));
        textLabel2->setText(QCoreApplication::translate("QgsMapCoordsDialogBase", "Y / North", nullptr));
        mMinimizeWindowCheckBox->setText(QCoreApplication::translate("QgsMapCoordsDialogBase", "Automatically hide georeferencer window ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMapCoordsDialogBase: public Ui_QgsMapCoordsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPCOORDSDIALOGBASE_H
