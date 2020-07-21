/******************************************************************************
*  Project: NextGIS GIS libraries
*  Purpose: Core Library
*  Author:  Dmitry Baryshnikov, bishop.dev@gmail.com
*******************************************************************************
*  Copyright (C) 2012-2020 NextGIS, info@nextgis.ru
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 2 of the License, or
*   (at your option) any later version.
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

#ifndef HEADLESS_RENDER_H
#define HEADLESS_RENDER_H

#include <QtGlobal>

namespace HeadlessRender
{
    struct Image
    {
        uchar *data;
        int size;
    };

    HEADLESS_RENDER_EXPORT void init();
    HEADLESS_RENDER_EXPORT Image renderVector(const char *uri, const char *qmlString, int width, int height, int epsg);
    HEADLESS_RENDER_EXPORT const char *getVersion();
}

#endif // HEADLESS_RENDER_H
