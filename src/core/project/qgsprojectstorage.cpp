/***************************************************************************
  qgsprojectstorage.cpp
  --------------------------------------
  Date                 : March 2018
  Copyright            : (C) 2018 by Martin Dobias
  Email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsprojectstorage.h"

bool QgsProjectStorage::isSupportedUri( const QString & ) const
{
  return false;
}

QString QgsProjectStorage::filePath( const QString &uri )
{
  Q_UNUSED( uri );
  return QString();
}
