###############################################################################
# CMake module to search for EXIV2 library
#
# On success, the macro sets the following variables:
# EXIV2_FOUND        = if the library found
# EXIV2_LIBRARIES    = full path to the library
# EXIV2_INCLUDE_DIRS = where to find the library headers
#
# Copyright (c) 2020 NextGIS <info@nextgis.com>
#
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.
#
###############################################################################

IF(WIN32)

  SET(OSGEO4W_ROOT "C:/OSGeo4W")

  IF($ENV{OSGEO4W_HOME})
    SET(OSGEO4W_ROOT "$ENV{OSGEO4W_HOME}")
  ENDIF()

  IF($ENV{OSGEO4W_ROOT})
    SET(OSGEO4W_ROOT "$ENV{OSGEO4W_ROOT}")
  ENDIF()

  IF (NOT OSGEO4W_QGIS_SUBDIR OR "${OSGEO4W_QGIS_SUBDIR}" STREQUAL "")
    IF (NOT "$ENV{OSGEO4W_QGIS_SUBDIR}" STREQUAL "")
      SET (OSGEO4W_QGIS_SUBDIR $ENV{OSGEO4W_QGIS_SUBDIR})
    ELSE ()
      SET (OSGEO4W_QGIS_SUBDIR qgis)
    ENDIF ()
  ENDIF ()

  IF (MSVC)
    FIND_PATH(QGIS_CORE_INCLUDE_DIRS
      NAMES exiv2.hpp
      PATHS
        "${OSGEO4W_ROOT}/include/exiv2"
    )
    FIND_LIBRARY(EXIV2_LIBRARIES
      NAMES exiv2
      PATHS
        "${OSGEO4W_ROOT}/lib"
    )
  ENDIF (MSVC)
ELSE(WIN32)
  IF(UNIX)
    FIND_PATH(EXIV2_INCLUDE_DIRS
      NAMES exiv2.hpp
      PATHS
        /usr/include/exiv2
        /usr/local/include/exiv2
    )
    FIND_LIBRARY(EXIV2_LIBRARIES
      NAMES exiv2
      PATHS
        /usr/lib/x86_64-linux-gnu
        /usr/lib64
        /usr/lib
        /usr/local/lib
        /Library/Frameworks
    )
  ENDIF(UNIX)
ENDIF(WIN32)

IF (EXIV2_INCLUDE_DIRS AND EXIV2_LIBRARIES)
   SET(EXIV2_FOUND TRUE)
ENDIF ()
