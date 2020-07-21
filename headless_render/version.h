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

#ifndef HEADLESS_RENDER_LIB_MAJOR_VERSION

#define HEADLESS_RENDER_LIB_MAJOR_VERSION 0
#define HEADLESS_RENDER_LIB_MINOR_VERSION 1
#define HEADLESS_RENDER_LIB_PATCH_NUMBER 0

#define STRINGIZE(x)  #x
#define MAKE_VERSION_DOT_STRING(x, y, z) STRINGIZE(x) "." STRINGIZE(y) "." \
    STRINGIZE(z)

#define HEADLESS_RENDER_LIB_VERSION_STRING MAKE_VERSION_DOT_STRING(HEADLESS_RENDER_LIB_MAJOR_VERSION, \
     HEADLESS_RENDER_LIB_MINOR_VERSION,  HEADLESS_RENDER_LIB_PATCH_NUMBER)

#endif // HEADLESS_RENDER_LIB_MAJOR_VERSION
