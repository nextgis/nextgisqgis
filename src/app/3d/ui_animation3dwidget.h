/********************************************************************************
** Form generated from reading UI file 'animation3dwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATION3DWIDGET_H
#define UI_ANIMATION3DWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Animation3DWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cboKeyframe;
    QToolButton *btnAddKeyframe;
    QToolButton *btnRemoveKeyframe;
    QToolButton *btnEditKeyframe;
    QToolButton *btnDuplicateKeyframe;
    QToolButton *btnExportAnimation;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *cboInterpolation;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnPlayPause;
    QSlider *sliderTime;
    QCheckBox *mLoopingCheckBox;

    void setupUi(QWidget *Animation3DWidget)
    {
        if (Animation3DWidget->objectName().isEmpty())
            Animation3DWidget->setObjectName(QString::fromUtf8("Animation3DWidget"));
        Animation3DWidget->resize(986, 129);
        Animation3DWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(Animation3DWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Animation3DWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cboKeyframe = new QComboBox(Animation3DWidget);
        cboKeyframe->setObjectName(QString::fromUtf8("cboKeyframe"));

        horizontalLayout->addWidget(cboKeyframe);

        btnAddKeyframe = new QToolButton(Animation3DWidget);
        btnAddKeyframe->setObjectName(QString::fromUtf8("btnAddKeyframe"));

        horizontalLayout->addWidget(btnAddKeyframe);

        btnRemoveKeyframe = new QToolButton(Animation3DWidget);
        btnRemoveKeyframe->setObjectName(QString::fromUtf8("btnRemoveKeyframe"));

        horizontalLayout->addWidget(btnRemoveKeyframe);

        btnEditKeyframe = new QToolButton(Animation3DWidget);
        btnEditKeyframe->setObjectName(QString::fromUtf8("btnEditKeyframe"));

        horizontalLayout->addWidget(btnEditKeyframe);

        btnDuplicateKeyframe = new QToolButton(Animation3DWidget);
        btnDuplicateKeyframe->setObjectName(QString::fromUtf8("btnDuplicateKeyframe"));

        horizontalLayout->addWidget(btnDuplicateKeyframe);

        btnExportAnimation = new QToolButton(Animation3DWidget);
        btnExportAnimation->setObjectName(QString::fromUtf8("btnExportAnimation"));
        btnExportAnimation->setAcceptDrops(true);

        horizontalLayout->addWidget(btnExportAnimation);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(Animation3DWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        cboInterpolation = new QComboBox(Animation3DWidget);
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->addItem(QString());
        cboInterpolation->setObjectName(QString::fromUtf8("cboInterpolation"));

        horizontalLayout->addWidget(cboInterpolation);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnPlayPause = new QPushButton(Animation3DWidget);
        btnPlayPause->setObjectName(QString::fromUtf8("btnPlayPause"));

        horizontalLayout_2->addWidget(btnPlayPause);

        sliderTime = new QSlider(Animation3DWidget);
        sliderTime->setObjectName(QString::fromUtf8("sliderTime"));
        sliderTime->setMaximum(100);
        sliderTime->setOrientation(Qt::Horizontal);
        sliderTime->setTickPosition(QSlider::TicksBothSides);
        sliderTime->setTickInterval(10);

        horizontalLayout_2->addWidget(sliderTime);

        mLoopingCheckBox = new QCheckBox(Animation3DWidget);
        mLoopingCheckBox->setObjectName(QString::fromUtf8("mLoopingCheckBox"));

        horizontalLayout_2->addWidget(mLoopingCheckBox);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(cboKeyframe, btnAddKeyframe);
        QWidget::setTabOrder(btnAddKeyframe, btnRemoveKeyframe);
        QWidget::setTabOrder(btnRemoveKeyframe, btnEditKeyframe);
        QWidget::setTabOrder(btnEditKeyframe, btnDuplicateKeyframe);
        QWidget::setTabOrder(btnDuplicateKeyframe, btnExportAnimation);
        QWidget::setTabOrder(btnExportAnimation, cboInterpolation);
        QWidget::setTabOrder(cboInterpolation, btnPlayPause);
        QWidget::setTabOrder(btnPlayPause, sliderTime);
        QWidget::setTabOrder(sliderTime, mLoopingCheckBox);

        retranslateUi(Animation3DWidget);

        QMetaObject::connectSlotsByName(Animation3DWidget);
    } // setupUi

    void retranslateUi(QWidget *Animation3DWidget)
    {
        label->setText(QCoreApplication::translate("Animation3DWidget", "Keyframe", nullptr));
#if QT_CONFIG(tooltip)
        btnAddKeyframe->setToolTip(QCoreApplication::translate("Animation3DWidget", "Add keyframe", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddKeyframe->setText(QCoreApplication::translate("Animation3DWidget", " + ", nullptr));
#if QT_CONFIG(tooltip)
        btnRemoveKeyframe->setToolTip(QCoreApplication::translate("Animation3DWidget", "Remove keyframe", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveKeyframe->setText(QCoreApplication::translate("Animation3DWidget", " - ", nullptr));
#if QT_CONFIG(tooltip)
        btnEditKeyframe->setToolTip(QCoreApplication::translate("Animation3DWidget", "Edit keyframe", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEditKeyframe->setText(QCoreApplication::translate("Animation3DWidget", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        btnDuplicateKeyframe->setToolTip(QCoreApplication::translate("Animation3DWidget", "Duplicate keyframe", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDuplicateKeyframe->setText(QCoreApplication::translate("Animation3DWidget", "\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        btnExportAnimation->setToolTip(QCoreApplication::translate("Animation3DWidget", "Export Animation Frames", nullptr));
#endif // QT_CONFIG(tooltip)
        btnExportAnimation->setText(QCoreApplication::translate("Animation3DWidget", "\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("Animation3DWidget", "Interpolation", nullptr));
        cboInterpolation->setItemText(0, QCoreApplication::translate("Animation3DWidget", "Linear", nullptr));
        cboInterpolation->setItemText(1, QCoreApplication::translate("Animation3DWidget", "InQuad", nullptr));
        cboInterpolation->setItemText(2, QCoreApplication::translate("Animation3DWidget", "OutQuad", nullptr));
        cboInterpolation->setItemText(3, QCoreApplication::translate("Animation3DWidget", "InOutQuad", nullptr));
        cboInterpolation->setItemText(4, QCoreApplication::translate("Animation3DWidget", "OutInQuad", nullptr));
        cboInterpolation->setItemText(5, QCoreApplication::translate("Animation3DWidget", "InCubic", nullptr));
        cboInterpolation->setItemText(6, QCoreApplication::translate("Animation3DWidget", "OutCubic", nullptr));
        cboInterpolation->setItemText(7, QCoreApplication::translate("Animation3DWidget", "InOutCubic", nullptr));
        cboInterpolation->setItemText(8, QCoreApplication::translate("Animation3DWidget", "OutInCubic", nullptr));
        cboInterpolation->setItemText(9, QCoreApplication::translate("Animation3DWidget", "InQuart", nullptr));
        cboInterpolation->setItemText(10, QCoreApplication::translate("Animation3DWidget", "OutQuart", nullptr));
        cboInterpolation->setItemText(11, QCoreApplication::translate("Animation3DWidget", "InOutQuart", nullptr));
        cboInterpolation->setItemText(12, QCoreApplication::translate("Animation3DWidget", "OutInQuart", nullptr));
        cboInterpolation->setItemText(13, QCoreApplication::translate("Animation3DWidget", "InQuint", nullptr));
        cboInterpolation->setItemText(14, QCoreApplication::translate("Animation3DWidget", "OutQuint", nullptr));
        cboInterpolation->setItemText(15, QCoreApplication::translate("Animation3DWidget", "InOutQuint", nullptr));
        cboInterpolation->setItemText(16, QCoreApplication::translate("Animation3DWidget", "OutInQuint", nullptr));
        cboInterpolation->setItemText(17, QCoreApplication::translate("Animation3DWidget", "InSine", nullptr));
        cboInterpolation->setItemText(18, QCoreApplication::translate("Animation3DWidget", "OutSine", nullptr));
        cboInterpolation->setItemText(19, QCoreApplication::translate("Animation3DWidget", "InOutSine", nullptr));
        cboInterpolation->setItemText(20, QCoreApplication::translate("Animation3DWidget", "OutInSine", nullptr));
        cboInterpolation->setItemText(21, QCoreApplication::translate("Animation3DWidget", "InExpo", nullptr));
        cboInterpolation->setItemText(22, QCoreApplication::translate("Animation3DWidget", "OutExpo", nullptr));
        cboInterpolation->setItemText(23, QCoreApplication::translate("Animation3DWidget", "InOutExpo", nullptr));
        cboInterpolation->setItemText(24, QCoreApplication::translate("Animation3DWidget", "OutInExpo", nullptr));
        cboInterpolation->setItemText(25, QCoreApplication::translate("Animation3DWidget", "InCirc", nullptr));
        cboInterpolation->setItemText(26, QCoreApplication::translate("Animation3DWidget", "OutCirc", nullptr));
        cboInterpolation->setItemText(27, QCoreApplication::translate("Animation3DWidget", "InOutCirc", nullptr));
        cboInterpolation->setItemText(28, QCoreApplication::translate("Animation3DWidget", "OutInCirc", nullptr));

        btnPlayPause->setText(QString());
#if QT_CONFIG(tooltip)
        mLoopingCheckBox->setToolTip(QCoreApplication::translate("Animation3DWidget", "Automatically reset and repeat the animation endlessly", nullptr));
#endif // QT_CONFIG(tooltip)
        mLoopingCheckBox->setText(QCoreApplication::translate("Animation3DWidget", "Loop", nullptr));
        (void)Animation3DWidget;
    } // retranslateUi

};

namespace Ui {
    class Animation3DWidget: public Ui_Animation3DWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATION3DWIDGET_H
