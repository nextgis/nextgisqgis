################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017-2022, NextGIS <info@nextgis.com>
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
################################################################################

include_directories(
    ${CMAKE_CURRENT_BINARY_DIR} 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/src/core
    ${CMAKE_BINARY_DIR}/src/core
)

add_executable(crssync main.cpp)
target_compile_features(crssync PRIVATE cxx_std_17)

target_link_libraries(crssync
  ${NG_PREFIX}qgis_core
  ${PROJ_LIBRARY}
  ${GDAL_LIBRARY})

if(OSX_FRAMEWORK)
    set(DST_PATH "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}")
else()
    set(DST_PATH "${BINARY_DIR}")
endif()

if(OSX_FRAMEWORK)
    set(PROJ_LIB ${DST_PATH}/proj.framework/Resources/proj)
    
    add_custom_target(synccrsdb
        COMMENT "Running crssync"
        COMMAND PROJ_LIB=${PROJ_LIB} ${BINARY_DIR}/crssync
        DEPENDS crssync)
else()
    add_custom_target(synccrsdb
    COMMENT "Running crssync"
    COMMAND ${BINARY_DIR}/crssync
    DEPENDS crssync)
endif()



# Copy dependencies to bin dir
set(RUN_DEPENDENCIES
    lib_png
    lib_tiff
    lib_jpeg
    lib_jbig
    lib_lzma
    lib_webp
    lib_openssl
    lib_curl
    lib_jsonc
    lib_bzip2
    lib_qhull
    lib_proj
    lib_pq
    lib_oci
    lib_geotiff
    lib_gif
    lib_hdf4
    lib_openjpeg
    lib_kml
    lib_opencad
    lib_xml2
    lib_spatialite
    lib_szip
    lib_uriparser
    lib_z
    lib_gdal
    lib_qca
    lib_qt5
    lib_qtkeychain
    lib_spatialindex
    lib_expat
    lib_zip
    lib_geos
    lib_sqlite
    lib_iconv
    lib_harfbuzz
    lib_freetype
    lib_qwt
    lib_qscintilla
)

get_compiler_version(COMPILER)

foreach(RUN_DEPENDENCY ${RUN_DEPENDENCIES})
    add_custom_command(TARGET crssync
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -DDST_PATH="${DST_PATH}" -DSRC_PATH="${PROJECT_BINARY_DIR}" -DREPKA_PACKAGE="${RUN_DEPENDENCY}" -DCOMPILER="${COMPILER}" -DOSX_FRAMEWORK="${OSX_FRAMEWORK}" -P ${PROJECT_SOURCE_DIR}/cmake/get_dependency.cmake
        COMMENT "Get dependency ${RUN_DEPENDENCY}"
    )
endforeach()