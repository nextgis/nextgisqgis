# Find Spatialindex
# ~~~~~~~~
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.
#
# Once run this will define:
#
# SPATIALINDEX_FOUND       = system has Spatialindex lib
# SPATIALINDEX_LIBRARY     = full path to the Spatialindex library
# SPATIALINDEX_INCLUDE_DIR = where to find headers
#


FIND_PATH(SPATIALINDEX_INCLUDE_DIR NAMES SpatialIndex.h PATHS
  /usr/include
  /usr/local/include
  "$ENV{LIB_DIR}/include"
  "$ENV{INCLUDE}"
  "$ENV{OSGEO4W_ROOT}/include"
  PATH_SUFFIXES spatialindex
  )

FIND_LIBRARY(SPATIALINDEX_LIBRARY NAMES spatialindex_i spatialindex PATHS
  /usr/lib
  /usr/local/lib
  "$ENV{LIB_DIR}/lib"
  "$ENV{LIB}/lib"
  "$ENV{OSGEO4W_ROOT}/lib"
  )

# TODO Check version

# Handle the QUIETLY and REQUIRED arguments and set GEOS_FOUND to TRUE
# if all listed variables are TRUE
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(SPATIALINDEX DEFAULT_MSG SPATIALINDEX_LIBRARY SPATIALINDEX_INCLUDE_DIR)

if(SPATIALINDEX_FOUND)
  set(SPATIALINDEX_LIBRARIES ${SPATIALINDEX_LIBRARY})
  set(SPATIALINDEX_INCLUDE_DIRS ${SPATIALINDEX_INCLUDE_DIR})
endif()

# Hide internal variables
mark_as_advanced(SPATIALINDEX_LIBRARY SPATIALINDEX_INCLUDE_DIR)
