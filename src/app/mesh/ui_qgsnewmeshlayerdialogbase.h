/********************************************************************************
** Form generated from reading UI file 'qgsnewmeshlayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWMESHLAYERDIALOGBASE_H
#define UI_QGSNEWMESHLAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <qgsmaplayercombobox.h>
#include <qgsprojectionselectionwidget.h>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsNewMeshLayerDialogBase
{
public:
    QGridLayout *gridLayout1;
    QgsProjectionSelectionWidget *mProjectionSelectionWidget;
    QLineEdit *mLayerNameLineEdit;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLabel *label;
    QGroupBox *mInitializeMeshGroupBox;
    QGridLayout *gridLayout;
    QgsFileWidget *mMeshFromFileWidget;
    QgsMapLayerComboBox *mMeshProjectComboBox;
    QTextBrowser *mInformationTextBrowser;
    QRadioButton *mMeshFileRadioButton;
    QRadioButton *mMeshProjectRadioButton;
    QComboBox *mFormatComboBox;
    QLabel *label_2;
    QgsFileWidget *mFileWidget;

    void setupUi(QDialog *QgsNewMeshLayerDialogBase)
    {
        if (QgsNewMeshLayerDialogBase->objectName().isEmpty())
            QgsNewMeshLayerDialogBase->setObjectName(QString::fromUtf8("QgsNewMeshLayerDialogBase"));
        QgsNewMeshLayerDialogBase->resize(477, 450);
        gridLayout1 = new QGridLayout(QgsNewMeshLayerDialogBase);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        mProjectionSelectionWidget = new QgsProjectionSelectionWidget(QgsNewMeshLayerDialogBase);
        mProjectionSelectionWidget->setObjectName(QString::fromUtf8("mProjectionSelectionWidget"));

        gridLayout1->addWidget(mProjectionSelectionWidget, 4, 1, 1, 1);

        mLayerNameLineEdit = new QLineEdit(QgsNewMeshLayerDialogBase);
        mLayerNameLineEdit->setObjectName(QString::fromUtf8("mLayerNameLineEdit"));

        gridLayout1->addWidget(mLayerNameLineEdit, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsNewMeshLayerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout1->addWidget(buttonBox, 6, 0, 1, 2);

        label_3 = new QLabel(QgsNewMeshLayerDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(QgsNewMeshLayerDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 3, 0, 1, 1);

        mInitializeMeshGroupBox = new QGroupBox(QgsNewMeshLayerDialogBase);
        mInitializeMeshGroupBox->setObjectName(QString::fromUtf8("mInitializeMeshGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mInitializeMeshGroupBox->sizePolicy().hasHeightForWidth());
        mInitializeMeshGroupBox->setSizePolicy(sizePolicy);
        mInitializeMeshGroupBox->setCheckable(true);
        mInitializeMeshGroupBox->setChecked(false);
        gridLayout = new QGridLayout(mInitializeMeshGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mMeshFromFileWidget = new QgsFileWidget(mInitializeMeshGroupBox);
        mMeshFromFileWidget->setObjectName(QString::fromUtf8("mMeshFromFileWidget"));

        gridLayout->addWidget(mMeshFromFileWidget, 1, 1, 1, 1);

        mMeshProjectComboBox = new QgsMapLayerComboBox(mInitializeMeshGroupBox);
        mMeshProjectComboBox->setObjectName(QString::fromUtf8("mMeshProjectComboBox"));

        gridLayout->addWidget(mMeshProjectComboBox, 0, 1, 1, 1);

        mInformationTextBrowser = new QTextBrowser(mInitializeMeshGroupBox);
        mInformationTextBrowser->setObjectName(QString::fromUtf8("mInformationTextBrowser"));

        gridLayout->addWidget(mInformationTextBrowser, 2, 0, 1, 2);

        mMeshFileRadioButton = new QRadioButton(mInitializeMeshGroupBox);
        mMeshFileRadioButton->setObjectName(QString::fromUtf8("mMeshFileRadioButton"));

        gridLayout->addWidget(mMeshFileRadioButton, 1, 0, 1, 1);

        mMeshProjectRadioButton = new QRadioButton(mInitializeMeshGroupBox);
        mMeshProjectRadioButton->setObjectName(QString::fromUtf8("mMeshProjectRadioButton"));
        mMeshProjectRadioButton->setChecked(true);

        gridLayout->addWidget(mMeshProjectRadioButton, 0, 0, 1, 1);


        gridLayout1->addWidget(mInitializeMeshGroupBox, 5, 0, 1, 2);

        mFormatComboBox = new QComboBox(QgsNewMeshLayerDialogBase);
        mFormatComboBox->setObjectName(QString::fromUtf8("mFormatComboBox"));

        gridLayout1->addWidget(mFormatComboBox, 3, 1, 1, 1);

        label_2 = new QLabel(QgsNewMeshLayerDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        mFileWidget = new QgsFileWidget(QgsNewMeshLayerDialogBase);
        mFileWidget->setObjectName(QString::fromUtf8("mFileWidget"));

        gridLayout1->addWidget(mFileWidget, 0, 1, 1, 1);

        QWidget::setTabOrder(mLayerNameLineEdit, mFormatComboBox);
        QWidget::setTabOrder(mFormatComboBox, mMeshProjectRadioButton);
        QWidget::setTabOrder(mMeshProjectRadioButton, mMeshProjectComboBox);
        QWidget::setTabOrder(mMeshProjectComboBox, mMeshFileRadioButton);
        QWidget::setTabOrder(mMeshFileRadioButton, mInformationTextBrowser);

        retranslateUi(QgsNewMeshLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewMeshLayerDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewMeshLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewMeshLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewMeshLayerDialogBase)
    {
        QgsNewMeshLayerDialogBase->setWindowTitle(QCoreApplication::translate("QgsNewMeshLayerDialogBase", "New Mesh Layer", nullptr));
        mLayerNameLineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("QgsNewMeshLayerDialogBase", "Layer name", nullptr));
        label->setText(QCoreApplication::translate("QgsNewMeshLayerDialogBase", "File format", nullptr));
        mInitializeMeshGroupBox->setTitle(QCoreApplication::translate("QgsNewMeshLayerDialogBase", "Initialize Mesh Using", nullptr));
        mMeshFileRadioButton->setText(QCoreApplication::translate("QgsNewMeshLayerDialogBase", "Mesh from file", nullptr));
        mMeshProjectRadioButton->setText(QCoreApplication::translate("QgsNewMeshLayerDialogBase", "Mesh from the current project", nullptr));
        label_2->setText(QCoreApplication::translate("QgsNewMeshLayerDialogBase", "File name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsNewMeshLayerDialogBase: public Ui_QgsNewMeshLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWMESHLAYERDIALOGBASE_H
