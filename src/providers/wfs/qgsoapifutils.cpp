/***************************************************************************
    qgsoapifutils.cpp
    ---------------------
    begin                : October 2019
    copyright            : (C) 2019 by Even Rouault
    email                : even.rouault at spatialys.com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsoapifutils.h"

#include <limits>

std::vector<QgsOAPIFJson::Link> QgsOAPIFJson::parseLinks( const json &jParent )
{
    std::vector<Link> links;
    if ( QgsJsonUtils::is_object(jParent) )
    {
        const auto jLinks = jParent["links"];
        if ( QgsJsonUtils::is_array(jLinks) )
        {
            for ( const auto &jLink : jLinks.ToArray() )
            {
                if ( QgsJsonUtils::is_object(jLink) )
                {
                    const auto href = jLink["href"];
                    const auto rel = jLink["rel"];
          
                    Link link;
                    link.href = QString::fromStdString( href.ToString() );
                    link.rel = QString::fromStdString( rel.ToString() );
            
                    const auto type = jLink["type"];
                    if ( type.IsValid() )
                    {
                        link.type = QString::fromStdString( type.ToString() );
                    }

            
                    const auto title = jLink["title"];
                    link.title = QString::fromStdString( title.ToString() );

                    const auto length = jLink["length"];
                    if ( QgsJsonUtils::is_number_integer(length) )
                    {
                        link.length = length.ToLong();
                    }
                    links.push_back( link );
                }
            }
        }
    }
    return links;
}

QString QgsOAPIFJson::findLink( const std::vector<QgsOAPIFJson::Link> &links,
                                const QString &rel,
                                const QStringList &preferableTypes )
{
  QString resultHref;
  int resultPriority = std::numeric_limits<int>::max();
  for ( const auto &link : links )
  {
    if ( link.rel == rel )
    {
      int priority = -1;
      if ( !link.type.isEmpty() && !preferableTypes.isEmpty() )
      {
        priority = preferableTypes.indexOf( link.type );
      }
      if ( priority < 0 )
      {
        priority = static_cast<int>( preferableTypes.size() );
      }
      if ( priority < resultPriority )
      {
        resultHref = link.href;
        resultPriority = priority;
      }
    }
  }
  return resultHref;
}
