/***************************************************************************
  qgsdb2newconnection.h - new DB2 connection dialog
  --------------------------------------
  Date      : 2016-01-27
  Copyright : (C) 2016 by David Adler
                          Shirley Xiao, David Nguyen
  Email     : dadler at adtechgeospatial.com
              xshirley2012 at yahoo.com, davidng0123 at gmail.com
****************************************************************************
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 ***************************************************************************/

#ifndef QGSDB2NEWCONNECTION_H
#define QGSDB2NEWCONNECTION_H
#include "ui_qgsdb2newconnectionbase.h"
#include "qgsguiutils.h"
#include "qgshelp.h"

/**
 * \class QgsDb2NewConnection
 * \brief Dialog to allow the user to configure and save connection
 * information for an DB2 database
 */
class QgsDb2NewConnection : public QDialog, private Ui::QgsDb2NewConnectionBase
{
    Q_OBJECT
  public:
    //! Constructor
    QgsDb2NewConnection( QWidget *parent = nullptr, const QString &connName = QString(), Qt::WindowFlags fl = QgsGuiUtils::ModalDialogFlags );

    //! Tests the connection using the parameters supplied
    bool testConnection();

    /**
     * \brief List all databases found for the given server.
     */
    void listDatabases();
  public slots:
    void accept() override;
    void btnListDatabase_clicked();
    void btnConnect_clicked();
    void on_cb_trustedConnection_clicked();
  private slots:
    //! Updates state of the OK button depending of the filled fields
    void updateOkButtonState();
  private:
    QString mOriginalConnName; //store initial name to delete entry in case of rename
    void showHelp();
};

#endif //  QGSDB2NEWCONNECTION_H
