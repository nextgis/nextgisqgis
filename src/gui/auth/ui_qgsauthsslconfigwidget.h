/********************************************************************************
** Form generated from reading UI file 'qgsauthsslconfigwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHSSLCONFIGWIDGET_H
#define UI_QGSAUTHSSLCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthSslConfigWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grpbxCert;
    QGridLayout *gridLayout_2;
    QLabel *lblCert;
    QLineEdit *leHost;
    QLineEdit *leCommonName;
    QToolButton *btnCertInfo;
    QLabel *lblServer;
    QFrame *line;
    QGroupBox *grpbxSslConfig;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeSslConfig;
    QLabel *lblLoadedConfig;

    void setupUi(QWidget *QgsAuthSslConfigWidget)
    {
        if (QgsAuthSslConfigWidget->objectName().isEmpty())
            QgsAuthSslConfigWidget->setObjectName(QString::fromUtf8("QgsAuthSslConfigWidget"));
        QgsAuthSslConfigWidget->resize(322, 327);
        QgsAuthSslConfigWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(QgsAuthSslConfigWidget);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        grpbxCert = new QGroupBox(QgsAuthSslConfigWidget);
        grpbxCert->setObjectName(QString::fromUtf8("grpbxCert"));
        gridLayout_2 = new QGridLayout(grpbxCert);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(12);
        lblCert = new QLabel(grpbxCert);
        lblCert->setObjectName(QString::fromUtf8("lblCert"));

        gridLayout_2->addWidget(lblCert, 1, 0, 1, 1);

        leHost = new QLineEdit(grpbxCert);
        leHost->setObjectName(QString::fromUtf8("leHost"));
        leHost->setMinimumSize(QSize(175, 0));

        gridLayout_2->addWidget(leHost, 2, 1, 1, 1);

        leCommonName = new QLineEdit(grpbxCert);
        leCommonName->setObjectName(QString::fromUtf8("leCommonName"));
        leCommonName->setReadOnly(true);

        gridLayout_2->addWidget(leCommonName, 1, 1, 1, 1);

        btnCertInfo = new QToolButton(grpbxCert);
        btnCertInfo->setObjectName(QString::fromUtf8("btnCertInfo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnCertInfo->setIcon(icon);

        gridLayout_2->addWidget(btnCertInfo, 1, 2, 1, 1);

        lblServer = new QLabel(grpbxCert);
        lblServer->setObjectName(QString::fromUtf8("lblServer"));

        gridLayout_2->addWidget(lblServer, 2, 0, 1, 1);

        line = new QFrame(grpbxCert);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 4, 0, 1, 3);

        grpbxSslConfig = new QGroupBox(grpbxCert);
        grpbxSslConfig->setObjectName(QString::fromUtf8("grpbxSslConfig"));
        grpbxSslConfig->setCheckable(true);
        grpbxSslConfig->setChecked(false);
        verticalLayout = new QVBoxLayout(grpbxSslConfig);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeSslConfig = new QTreeWidget(grpbxSslConfig);
        treeSslConfig->setObjectName(QString::fromUtf8("treeSslConfig"));
        treeSslConfig->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeSslConfig->header()->setVisible(false);

        verticalLayout->addWidget(treeSslConfig);


        gridLayout_2->addWidget(grpbxSslConfig, 7, 0, 1, 3);

        lblLoadedConfig = new QLabel(grpbxCert);
        lblLoadedConfig->setObjectName(QString::fromUtf8("lblLoadedConfig"));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        lblLoadedConfig->setFont(font);
        lblLoadedConfig->setStyleSheet(QString::fromUtf8("color: rgb(128, 128, 128);"));
        lblLoadedConfig->setText(QString::fromUtf8("Configuration loaded from database"));
        lblLoadedConfig->setAlignment(Qt::AlignCenter);
        lblLoadedConfig->setWordWrap(true);

        gridLayout_2->addWidget(lblLoadedConfig, 5, 0, 1, 3);


        verticalLayout_2->addWidget(grpbxCert);

        QWidget::setTabOrder(leCommonName, btnCertInfo);
        QWidget::setTabOrder(btnCertInfo, leHost);
        QWidget::setTabOrder(leHost, grpbxSslConfig);
        QWidget::setTabOrder(grpbxSslConfig, treeSslConfig);

        retranslateUi(QgsAuthSslConfigWidget);

        QMetaObject::connectSlotsByName(QgsAuthSslConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthSslConfigWidget)
    {
        grpbxCert->setTitle(QCoreApplication::translate("QgsAuthSslConfigWidget", "Certificate", nullptr));
        lblCert->setText(QCoreApplication::translate("QgsAuthSslConfigWidget", "Name", nullptr));
        leHost->setPlaceholderText(QCoreApplication::translate("QgsAuthSslConfigWidget", "host:port (required)", nullptr));
        leCommonName->setPlaceholderText(QString());
#if QT_CONFIG(tooltip)
        btnCertInfo->setToolTip(QCoreApplication::translate("QgsAuthSslConfigWidget", "Show information for certificate", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCertInfo->setText(QCoreApplication::translate("QgsAuthSslConfigWidget", "?", nullptr));
        lblServer->setText(QCoreApplication::translate("QgsAuthSslConfigWidget", "Server", nullptr));
        grpbxSslConfig->setTitle(QCoreApplication::translate("QgsAuthSslConfigWidget", "Custom SSL Configuration", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeSslConfig->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("QgsAuthSslConfigWidget", "Field", nullptr));
        (void)QgsAuthSslConfigWidget;
    } // retranslateUi

};

namespace Ui {
    class QgsAuthSslConfigWidget: public Ui_QgsAuthSslConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHSSLCONFIGWIDGET_H
