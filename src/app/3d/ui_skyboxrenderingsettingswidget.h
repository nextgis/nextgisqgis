/********************************************************************************
** Form generated from reading UI file 'skyboxrenderingsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKYBOXRENDERINGSETTINGSWIDGET_H
#define UI_SKYBOXRENDERINGSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgsfilecontentsourcelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SkyboxRenderingSettingsWidget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *skyboxTypeLabel;
    QComboBox *skyboxTypeComboBox;
    QGridLayout *hdrTextureLayout;
    QLabel *panoramicTextureLabel;
    QgsImageSourceLineEdit *panoramicTextureImageSource;
    QGridLayout *faceTexturesLayout;
    QLabel *negXImageSourceLabel;
    QgsImageSourceLineEdit *negXImageSource;
    QLabel *negYImageSourceLabel;
    QgsImageSourceLineEdit *negYImageSource;
    QLabel *negZImageSourceLabel;
    QgsImageSourceLineEdit *negZImageSource;
    QLabel *posXImageSourceLabel;
    QgsImageSourceLineEdit *posXImageSource;
    QLabel *posYImageSourceLabel;
    QgsImageSourceLineEdit *posYImageSource;
    QLabel *posZImageSourceLabel;
    QgsImageSourceLineEdit *posZImageSource;

    void setupUi(QWidget *SkyboxRenderingSettingsWidget)
    {
        if (SkyboxRenderingSettingsWidget->objectName().isEmpty())
            SkyboxRenderingSettingsWidget->setObjectName(QString::fromUtf8("SkyboxRenderingSettingsWidget"));
        SkyboxRenderingSettingsWidget->resize(301, 228);
        gridLayout_2 = new QGridLayout(SkyboxRenderingSettingsWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        skyboxTypeLabel = new QLabel(SkyboxRenderingSettingsWidget);
        skyboxTypeLabel->setObjectName(QString::fromUtf8("skyboxTypeLabel"));

        gridLayout_2->addWidget(skyboxTypeLabel, 0, 1, 1, 1);

        skyboxTypeComboBox = new QComboBox(SkyboxRenderingSettingsWidget);
        skyboxTypeComboBox->setObjectName(QString::fromUtf8("skyboxTypeComboBox"));

        gridLayout_2->addWidget(skyboxTypeComboBox, 0, 2, 1, 1);

        hdrTextureLayout = new QGridLayout();
        hdrTextureLayout->setObjectName(QString::fromUtf8("hdrTextureLayout"));
        panoramicTextureLabel = new QLabel(SkyboxRenderingSettingsWidget);
        panoramicTextureLabel->setObjectName(QString::fromUtf8("panoramicTextureLabel"));

        hdrTextureLayout->addWidget(panoramicTextureLabel, 0, 0, 1, 1);

        panoramicTextureImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        panoramicTextureImageSource->setObjectName(QString::fromUtf8("panoramicTextureImageSource"));

        hdrTextureLayout->addWidget(panoramicTextureImageSource, 0, 1, 1, 1);


        gridLayout_2->addLayout(hdrTextureLayout, 1, 1, 1, 2);

        faceTexturesLayout = new QGridLayout();
        faceTexturesLayout->setObjectName(QString::fromUtf8("faceTexturesLayout"));
        negXImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        negXImageSourceLabel->setObjectName(QString::fromUtf8("negXImageSourceLabel"));

        faceTexturesLayout->addWidget(negXImageSourceLabel, 0, 0, 1, 1);

        negXImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        negXImageSource->setObjectName(QString::fromUtf8("negXImageSource"));

        faceTexturesLayout->addWidget(negXImageSource, 0, 1, 1, 1);

        negYImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        negYImageSourceLabel->setObjectName(QString::fromUtf8("negYImageSourceLabel"));

        faceTexturesLayout->addWidget(negYImageSourceLabel, 1, 0, 1, 1);

        negYImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        negYImageSource->setObjectName(QString::fromUtf8("negYImageSource"));

        faceTexturesLayout->addWidget(negYImageSource, 1, 1, 1, 1);

        negZImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        negZImageSourceLabel->setObjectName(QString::fromUtf8("negZImageSourceLabel"));

        faceTexturesLayout->addWidget(negZImageSourceLabel, 2, 0, 1, 1);

        negZImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        negZImageSource->setObjectName(QString::fromUtf8("negZImageSource"));

        faceTexturesLayout->addWidget(negZImageSource, 2, 1, 1, 1);

        posXImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        posXImageSourceLabel->setObjectName(QString::fromUtf8("posXImageSourceLabel"));

        faceTexturesLayout->addWidget(posXImageSourceLabel, 3, 0, 1, 1);

        posXImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        posXImageSource->setObjectName(QString::fromUtf8("posXImageSource"));

        faceTexturesLayout->addWidget(posXImageSource, 3, 1, 1, 1);

        posYImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        posYImageSourceLabel->setObjectName(QString::fromUtf8("posYImageSourceLabel"));

        faceTexturesLayout->addWidget(posYImageSourceLabel, 4, 0, 1, 1);

        posYImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        posYImageSource->setObjectName(QString::fromUtf8("posYImageSource"));

        faceTexturesLayout->addWidget(posYImageSource, 4, 1, 1, 1);

        posZImageSourceLabel = new QLabel(SkyboxRenderingSettingsWidget);
        posZImageSourceLabel->setObjectName(QString::fromUtf8("posZImageSourceLabel"));

        faceTexturesLayout->addWidget(posZImageSourceLabel, 5, 0, 1, 1);

        posZImageSource = new QgsImageSourceLineEdit(SkyboxRenderingSettingsWidget);
        posZImageSource->setObjectName(QString::fromUtf8("posZImageSource"));

        faceTexturesLayout->addWidget(posZImageSource, 5, 1, 1, 1);


        gridLayout_2->addLayout(faceTexturesLayout, 2, 1, 1, 2);


        retranslateUi(SkyboxRenderingSettingsWidget);

        QMetaObject::connectSlotsByName(SkyboxRenderingSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SkyboxRenderingSettingsWidget)
    {
        skyboxTypeLabel->setText(QCoreApplication::translate("SkyboxRenderingSettingsWidget", "Skybox type", nullptr));
        panoramicTextureLabel->setText(QCoreApplication::translate("SkyboxRenderingSettingsWidget", "Panoramic texture file", nullptr));
        negXImageSourceLabel->setText(QCoreApplication::translate("SkyboxRenderingSettingsWidget", "Left (-X)", nullptr));
        negYImageSourceLabel->setText(QCoreApplication::translate("SkyboxRenderingSettingsWidget", "Back (-Y)", nullptr));
        negZImageSourceLabel->setText(QCoreApplication::translate("SkyboxRenderingSettingsWidget", "Down (-Z)", nullptr));
        posXImageSourceLabel->setText(QCoreApplication::translate("SkyboxRenderingSettingsWidget", "Right (+X)", nullptr));
        posYImageSourceLabel->setText(QCoreApplication::translate("SkyboxRenderingSettingsWidget", "Front (+Y)", nullptr));
        posZImageSourceLabel->setText(QCoreApplication::translate("SkyboxRenderingSettingsWidget", "Top (+Z)", nullptr));
        (void)SkyboxRenderingSettingsWidget;
    } // retranslateUi

};

namespace Ui {
    class SkyboxRenderingSettingsWidget: public Ui_SkyboxRenderingSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKYBOXRENDERINGSETTINGSWIDGET_H
