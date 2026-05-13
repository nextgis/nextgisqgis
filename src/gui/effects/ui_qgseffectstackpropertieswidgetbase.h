/********************************************************************************
** Form generated from reading UI file 'qgseffectstackpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEFFECTSTACKPROPERTIESWIDGETBASE_H
#define UI_QGSEFFECTSTACKPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsEffectStackPropertiesWidgetBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *lblPreview;
    QListView *mEffectsList;
    QVBoxLayout *pushBtnBox_1;
    QPushButton *mAddButton;
    QPushButton *mRemoveButton;
    QSpacerItem *verticalSpacer_1;
    QVBoxLayout *pushBtnBox_2;
    QPushButton *mUpButton;
    QPushButton *mDownButton;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;

    void setupUi(QWidget *QgsEffectStackPropertiesWidgetBase)
    {
        if (QgsEffectStackPropertiesWidgetBase->objectName().isEmpty())
            QgsEffectStackPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsEffectStackPropertiesWidgetBase"));
        QgsEffectStackPropertiesWidgetBase->resize(347, 402);
        verticalLayout_3 = new QVBoxLayout(QgsEffectStackPropertiesWidgetBase);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblPreview = new QLabel(QgsEffectStackPropertiesWidgetBase);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        lblPreview->setMinimumSize(QSize(100, 100));
        lblPreview->setMaximumSize(QSize(120, 100));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setLineWidth(1);
        lblPreview->setMidLineWidth(0);
        lblPreview->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblPreview);

        mEffectsList = new QListView(QgsEffectStackPropertiesWidgetBase);
        mEffectsList->setObjectName(QString::fromUtf8("mEffectsList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mEffectsList->sizePolicy().hasHeightForWidth());
        mEffectsList->setSizePolicy(sizePolicy1);
        mEffectsList->setMaximumSize(QSize(16777215, 150));
        mEffectsList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(mEffectsList);

        pushBtnBox_1 = new QVBoxLayout();
        pushBtnBox_1->setSpacing(4);
        pushBtnBox_1->setObjectName(QString::fromUtf8("pushBtnBox_1"));
        mAddButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));
        mAddButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox_1->addWidget(mAddButton);

        mRemoveButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mRemoveButton->setObjectName(QString::fromUtf8("mRemoveButton"));
        mRemoveButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox_1->addWidget(mRemoveButton);

        verticalSpacer_1 = new QSpacerItem(10, 80, QSizePolicy::Minimum, QSizePolicy::Preferred);

        pushBtnBox_1->addItem(verticalSpacer_1);


        horizontalLayout->addLayout(pushBtnBox_1);

        pushBtnBox_2 = new QVBoxLayout();
        pushBtnBox_2->setSpacing(4);
        pushBtnBox_2->setObjectName(QString::fromUtf8("pushBtnBox_2"));
        mUpButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mUpButton->setObjectName(QString::fromUtf8("mUpButton"));
        mUpButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox_2->addWidget(mUpButton);

        mDownButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mDownButton->setObjectName(QString::fromUtf8("mDownButton"));
        mDownButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox_2->addWidget(mDownButton);

        verticalSpacer_2 = new QSpacerItem(10, 80, QSizePolicy::Minimum, QSizePolicy::Preferred);

        pushBtnBox_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(pushBtnBox_2);


        verticalLayout_3->addLayout(horizontalLayout);

        line = new QFrame(QgsEffectStackPropertiesWidgetBase);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        frame = new QFrame(QgsEffectStackPropertiesWidgetBase);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout_3->addWidget(frame);


        retranslateUi(QgsEffectStackPropertiesWidgetBase);

        QMetaObject::connectSlotsByName(QgsEffectStackPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsEffectStackPropertiesWidgetBase)
    {
        QgsEffectStackPropertiesWidgetBase->setWindowTitle(QCoreApplication::translate("QgsEffectStackPropertiesWidgetBase", "Effects", nullptr));
        lblPreview->setText(QString());
#if QT_CONFIG(tooltip)
        mAddButton->setToolTip(QCoreApplication::translate("QgsEffectStackPropertiesWidgetBase", "Add new effect", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mRemoveButton->setToolTip(QCoreApplication::translate("QgsEffectStackPropertiesWidgetBase", "Remove effect", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mUpButton->setToolTip(QCoreApplication::translate("QgsEffectStackPropertiesWidgetBase", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mDownButton->setToolTip(QCoreApplication::translate("QgsEffectStackPropertiesWidgetBase", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class QgsEffectStackPropertiesWidgetBase: public Ui_QgsEffectStackPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEFFECTSTACKPROPERTIESWIDGETBASE_H
