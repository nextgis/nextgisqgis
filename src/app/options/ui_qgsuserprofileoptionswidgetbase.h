/********************************************************************************
** Form generated from reading UI file 'qgsuserprofileoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSUSERPROFILEOPTIONSWIDGETBASE_H
#define UI_QGSUSERPROFILEOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsUserProfileOptionsWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mProfilePolicyGroupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *mAskUser;
    QRadioButton *mDefaultProfile;
    QComboBox *mDefaultProfileComboBox;
    QRadioButton *mLastProfile;
    QGroupBox *mProfileSelectorGroupBox;
    QGridLayout *gridLayout1;
    QLabel *mIconSizeLabel;
    QComboBox *mIconSize;
    QLabel *mActiveProfileIconLabel;
    QToolButton *mActiveProfileIconButton;
    QToolButton *mResetIconButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsUserProfileOptionsWidgetBase)
    {
        if (QgsUserProfileOptionsWidgetBase->objectName().isEmpty())
            QgsUserProfileOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsUserProfileOptionsWidgetBase"));
        QgsUserProfileOptionsWidgetBase->resize(462, 340);
        verticalLayout_2 = new QVBoxLayout(QgsUserProfileOptionsWidgetBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mProfilePolicyGroupBox = new QGroupBox(QgsUserProfileOptionsWidgetBase);
        mProfilePolicyGroupBox->setObjectName(QString::fromUtf8("mProfilePolicyGroupBox"));
        gridLayout = new QGridLayout(mProfilePolicyGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(mProfilePolicyGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        font.setItalic(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 5, 0, 1, 2);

        mAskUser = new QRadioButton(mProfilePolicyGroupBox);
        mAskUser->setObjectName(QString::fromUtf8("mAskUser"));

        gridLayout->addWidget(mAskUser, 2, 0, 1, 2);

        mDefaultProfile = new QRadioButton(mProfilePolicyGroupBox);
        mDefaultProfile->setObjectName(QString::fromUtf8("mDefaultProfile"));

        gridLayout->addWidget(mDefaultProfile, 1, 0, 1, 1);

        mDefaultProfileComboBox = new QComboBox(mProfilePolicyGroupBox);
        mDefaultProfileComboBox->setObjectName(QString::fromUtf8("mDefaultProfileComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDefaultProfileComboBox->sizePolicy().hasHeightForWidth());
        mDefaultProfileComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mDefaultProfileComboBox, 1, 1, 1, 1);

        mLastProfile = new QRadioButton(mProfilePolicyGroupBox);
        mLastProfile->setObjectName(QString::fromUtf8("mLastProfile"));

        gridLayout->addWidget(mLastProfile, 0, 0, 1, 2);


        verticalLayout_2->addWidget(mProfilePolicyGroupBox);

        mProfileSelectorGroupBox = new QGroupBox(QgsUserProfileOptionsWidgetBase);
        mProfileSelectorGroupBox->setObjectName(QString::fromUtf8("mProfileSelectorGroupBox"));
        gridLayout1 = new QGridLayout(mProfileSelectorGroupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        mIconSizeLabel = new QLabel(mProfileSelectorGroupBox);
        mIconSizeLabel->setObjectName(QString::fromUtf8("mIconSizeLabel"));

        gridLayout1->addWidget(mIconSizeLabel, 0, 0, 1, 1);

        mIconSize = new QComboBox(mProfileSelectorGroupBox);
        mIconSize->addItem(QString());
        mIconSize->addItem(QString());
        mIconSize->addItem(QString());
        mIconSize->addItem(QString());
        mIconSize->addItem(QString());
        mIconSize->setObjectName(QString::fromUtf8("mIconSize"));
        mIconSize->setMaximumSize(QSize(200, 16777215));

        gridLayout1->addWidget(mIconSize, 0, 1, 1, 1);

        mActiveProfileIconLabel = new QLabel(mProfileSelectorGroupBox);
        mActiveProfileIconLabel->setObjectName(QString::fromUtf8("mActiveProfileIconLabel"));

        gridLayout1->addWidget(mActiveProfileIconLabel, 1, 0, 1, 1);

        mActiveProfileIconButton = new QToolButton(mProfileSelectorGroupBox);
        mActiveProfileIconButton->setObjectName(QString::fromUtf8("mActiveProfileIconButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActiveProfileIconButton->setIcon(icon);
        mActiveProfileIconButton->setIconSize(QSize(32, 32));

        gridLayout1->addWidget(mActiveProfileIconButton, 1, 1, 1, 1);

        mResetIconButton = new QToolButton(mProfileSelectorGroupBox);
        mResetIconButton->setObjectName(QString::fromUtf8("mResetIconButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mResetIconButton->setIcon(icon1);

        gridLayout1->addWidget(mResetIconButton, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer, 1, 3, 1, 1);


        verticalLayout_2->addWidget(mProfileSelectorGroupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(mLastProfile, mDefaultProfile);
        QWidget::setTabOrder(mDefaultProfile, mDefaultProfileComboBox);
        QWidget::setTabOrder(mDefaultProfileComboBox, mAskUser);
        QWidget::setTabOrder(mAskUser, mActiveProfileIconButton);

        retranslateUi(QgsUserProfileOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsUserProfileOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsUserProfileOptionsWidgetBase)
    {
        QgsUserProfileOptionsWidgetBase->setWindowTitle(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "User Profile Settings", nullptr));
        mProfilePolicyGroupBox->setTitle(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Startup Profile", nullptr));
        label->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "These settings do not apply if a profile was explicitly selected with the --profile command line argument", nullptr));
        mAskUser->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Choose profile at start up", nullptr));
        mDefaultProfile->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Always use profile", nullptr));
        mLastProfile->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Use last closed profile", nullptr));
        mProfileSelectorGroupBox->setTitle(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Profile Display", nullptr));
        mIconSizeLabel->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Default icon size", nullptr));
        mIconSize->setItemText(0, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "16", nullptr));
        mIconSize->setItemText(1, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "24", nullptr));
        mIconSize->setItemText(2, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "32", nullptr));
        mIconSize->setItemText(3, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "48", nullptr));
        mIconSize->setItemText(4, QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "64", nullptr));

#if QT_CONFIG(tooltip)
        mIconSize->setToolTip(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Select size of icons in the user profile selector dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        mActiveProfileIconLabel->setText(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Active profile icon", nullptr));
#if QT_CONFIG(tooltip)
        mActiveProfileIconButton->setToolTip(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Change profile icon", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mResetIconButton->setToolTip(QCoreApplication::translate("QgsUserProfileOptionsWidgetBase", "Reset icon", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsUserProfileOptionsWidgetBase: public Ui_QgsUserProfileOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSUSERPROFILEOPTIONSWIDGETBASE_H
