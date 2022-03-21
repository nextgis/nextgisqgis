/***************************************************************************
  qgsdb2tablemodel.h - description
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

#ifndef QGSDB2TABLEMODEL_H
#define QGSDB2TABLEMODEL_H

#include <QString>
#include <QObject>
#include "qgswkbtypes.h"
#include "qgsabstractdbtablemodel.h"


//! Layer Property structure
struct QgsDb2LayerProperty
{
  QString     type;
  QString     schemaName;
  QString     tableName;
  QString     geometryColName;
  QStringList pkCols;
  QString     pkColumnName;
  QString     srid;
  QString     srsName;
  QString     sql;
  QString     extents;
};


class QIcon;

/**
 * A model that holds the tables of a database in a hierarchy where the
 * schemas are the root elements that contain the individual tables as children.
 *
 * The tables have the following columns: Type, Schema, Tablename, Geometry Column, Sql
*/
class QgsDb2TableModel : public QgsAbstractDbTableModel
{
    Q_OBJECT
  public:
    QgsDb2TableModel( QObject *parent = nullptr );

    QStringList columns() const override;
    int defaultSearchColumn() const override;
    bool searchableColumn( int column ) const override;

    //! Adds entry for one database table to the model
    void addTableEntry( const QgsDb2LayerProperty &property );

    //! Sets an sql statement that belongs to a cell specified by a model index
    void setSql( const QModelIndex &index, const QString &sql ) override;

    /**
     * Sets one or more geometry types to a row. In case of several types, additional rows are inserted.
     * This is for tables where the type is detected later by thread.
    */
    void setGeometryTypesForTable( QgsDb2LayerProperty layerProperty );

    //! Returns the number of tables in the model
    int tableCount() const { return mTableCount; }

    enum Columns
    {
      DbtmSchema = 0,
      DbtmTable,
      DbtmType,
      DbtmGeomCol,
      DbtmSrid,
      DbtmPkCol,
      DbtmSelectAtId,
      DbtmSql,
    };

    bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole ) override;

    QString layerURI( const QModelIndex &index, const QString &connInfo, bool useEstimatedMetadata );

    static QgsWkbTypes::Type wkbTypeFromDb2( QString dbType, int dim = 2 );

  private:
    //! Number of tables in the model
    int mTableCount = 0;
    QStringList mColumns;
};
#endif
