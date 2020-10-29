################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017, NextGIS <info@nextgis.com>
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

find_anyproject(SIP REQUIRED VERSION 4.19.8 EXACT)
find_anyproject(PyQt4 REQUIRED)
find_anyproject(Qsci DEFAULT ON VERSION 2.10.4 EXACT NAMES Qsci Qscintilla)

include(SIPMacros)
include(PyQtMacros)

# setup SIP variables
set(PYQT_SIP_FLAGS ${PYQT4_SIP_FLAGS})
set(PYQT_SIP_DIR ${PYQT4_SIP_DIR})
set(PYUIC_PROGRAM ${PYQT4_PYUIC_PROGRAM})
set(PYRCC_PROGRAM ${PYQT4_PYRCC_PROGRAM})

# Copy libraries to work pyrcc4

get_filename_component(PY_PROGRAMS_DIR "${PYRCC_PROGRAM}" PATH)
if(OSX_FRAMEWORK)
    get_filename_component(LIB_DIR "${PY_PROGRAMS_DIR}" PATH)

    # Get QtCore and QtXml and zlib frameworks paths
    get_property(QTCORE_INCLUDE_DIRS TARGET Qt4::QtCore PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
    get_filename_component(QTCORE_FRAMEWORK "${QTCORE_INCLUDE_DIRS}" PATH)
    set(COPY_FRAMEWORKS ${QTCORE_FRAMEWORK})

    get_property(QTXML_INCLUDE_DIRS TARGET Qt4::QtXml PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
    get_filename_component(QTXML_FRAMEWORK "${QTXML_INCLUDE_DIRS}" PATH)
    set(COPY_FRAMEWORKS ${COPY_FRAMEWORKS} ${QTXML_FRAMEWORK})

    if(WITH_ZLIB_EXTERNAL)
        get_filename_component(ZLIB_FRAMEWORK "${ZLIB_INCLUDE_DIRS}" PATH)
        set(COPY_FRAMEWORKS ${COPY_FRAMEWORKS} ${ZLIB_FRAMEWORK})
    endif()
    file(COPY ${COPY_FRAMEWORKS} DESTINATION ${LIB_DIR}/Library/Frameworks)
elseif(WIN32)
    get_property(QTCORE_LIBRARIES TARGET Qt4::QtCore PROPERTY IMPORTED_LOCATION_RELEASE)
    set(COPY_LIBRARIES ${QTCORE_LIBRARIES})

    get_property(QTXML_LIBRARIES TARGET Qt4::QtXml PROPERTY IMPORTED_LOCATION_RELEASE)
    set(COPY_LIBRARIES ${COPY_LIBRARIES} ${QTXML_LIBRARIES})

    get_property(ZLIB_LIBRARIES_PATH TARGET ${ZLIB_LIBRARIES} PROPERTY IMPORTED_LOCATION_RELEASE)

    set(COPY_LIBRARIES ${COPY_LIBRARIES} ${ZLIB_LIBRARIES_PATH})
    file(COPY ${COPY_LIBRARIES} DESTINATION ${PY_PROGRAMS_DIR})

    # Copy sip and PyQt4 to Python lib dir
    get_filename_component(LIB_DIR "${PY_PROGRAMS_DIR}" PATH)

    get_filename_component(SITE_PACKAGES_DIR "${PYTHON_EXECUTABLE}" PATH)
    set(SITE_PACKAGES_DIR "${SITE_PACKAGES_DIR}/Lib/site-packages/")

    file(COPY ${LIB_DIR}/lib/python${PYTHON_VERSION_MAJOR}${PYTHON_VERSION_MINOR}/site-packages/PyQt4 DESTINATION ${SITE_PACKAGES_DIR})
    file(COPY ${COPY_LIBRARIES} DESTINATION ${SITE_PACKAGES_DIR}/PyQt4)
    file(GLOB SIP_FILES "${SIP_PYTHON_DIR}/*")

    file(COPY ${SIP_FILES} DESTINATION ${SITE_PACKAGES_DIR})
endif()

set(SIP_INCLUDES ${PYQT_SIP_DIR} ${QSCI_SIP_DIR} ${CMAKE_CURRENT_SOURCE_DIR})
set(SIP_CONCAT_PARTS 4)
separate_arguments(PYQT_SIP_FLAGS)

add_subdirectory(plugins)
if(QSCI_FOUND) # PyQScintilla required
    add_subdirectory(console)
endif()
add_subdirectory(PyQt)
add_subdirectory(pyplugin_installer)

include_directories(
    ../src/core
    ../src/core/auth
    ../src/core/pal
    ../src/core/composer
    ../src/core/diagram
    ../src/core/effects
    ../src/core/dxf
    ../src/core/geometry
    ../src/core/gps
    ../src/core/layertree
    ../src/core/raster
    ../src/core/symbology-ng

    ../src/gui/raster
    ../src/gui/attributetable
    ../src/gui/auth
    ../src/gui/editorwidgets
    ../src/gui/editorwidgets/core
    ../src/gui/effects
    ../src/gui/layertree

    ${CMAKE_BINARY_DIR}  # qgsconfig.h, qgsversion.h

    ../src/gui
    ../src/gui/symbology-ng
    ../src/gui/effects
    ../src/plugins
    ${CMAKE_BINARY_DIR}/src/gui
    ${CMAKE_BINARY_DIR}/src/ui

    ../src/analysis/vector
    ../src/analysis/raster
    ../src/analysis/network
    ../src/analysis/interpolation
    ../src/analysis/openstreetmap
    ${CMAKE_BINARY_DIR}/src/analysis/vector
    ${CMAKE_BINARY_DIR}/src/analysis/network
    ${CMAKE_BINARY_DIR}/src/analysis/raster
    ${CMAKE_BINARY_DIR}/src/analysis/interpolation
    ${CMAKE_BINARY_DIR}/src/analysis/openstreetmap

    ${PYTHON_INCLUDE_PATH}
)

if(QT4_BUILD)
    set(SIP_DISABLE_FEATURES ${SIP_DISABLE_FEATURES} QT5_SUPPORT CHIMERA_NULL_VARIANT_CONVERSION)
endif()

set(SIP_DISABLE_FEATURES ${SIP_DISABLE_FEATURES}
    ANDROID
    ARM
    HAVE_TOUCH
    MOBILITY_LOCATION
)

if(PYQT4_VERSION_NUM LESS 263680)	# 0x040600
    set(SIP_DISABLE_FEATURES ${SIP_DISABLE_FEATURES} PROXY_FACTORY)
endif()

IF(NOT PYQT4_VERSION_NUM LESS 263941 AND QT4_BUILD)	# 0x040705
    set(SIP_DISABLE_FEATURES ${SIP_DISABLE_FEATURES} QSETINT_CONVERSION)
endif()

if(NOT PYQT4_VERSION_NUM LESS 264194)	# 0x040802
    set(SIP_DISABLE_FEATURES ${SIP_DISABLE_FEATURES} QSETTYPE_CONVERSION)
endif()

if(PYQT4_VERSION_NUM LESS 264196)       # 0x040804
    set(SIP_DISABLE_FEATURES ${SIP_DISABLE_FEATURES} QLISTCONSTPTR_CONVERSION)
endif()

if(NOT PYQT4_VERSION_NUM LESS 264453)	# 0x040905
    set(SIP_DISABLE_FEATURES ${SIP_DISABLE_FEATURES} QVECTORINT_CONVERSION)
endif()

add_definitions("-DCORE_EXPORT=${DLLIMPORT}")
add_definitions("-DGUI_EXPORT=${DLLIMPORT}")
add_definitions("-DPYTHON_EXPORT=${DLLIMPORT}")
add_definitions("-DANALYSIS_EXPORT=${DLLIMPORT}")
add_definitions("-DAPP_EXPORT=${DLLIMPORT}")

set(PY_MODULES
    core
    gui
    analysis
)

foreach(PY_MODULE ${PY_MODULES})
    file(GLOB_RECURSE sip_files_${PY_MODULE} ${PY_MODULE}/*.sip)
    set(SIP_EXTRA_FILES_DEPEND ${sip_files_${PY_MODULE}})
    set(SIP_EXTRA_OPTIONS ${PYQT_SIP_FLAGS} -o -a ${CMAKE_CURRENT_BINARY_DIR}/qgis.${PY_MODULE}.api)

    if(PY_MODULE MATCHES "gui")
        if(QSCI_SIP_DIR)
            set(SIP_EXTRA_OPTIONS ${SIP_EXTRA_OPTIONS} -I ${QSCI_SIP_DIR})
        else()
            MESSAGE(STATUS "Qsci sip file not found - disabling bindings for derived classes")
            SET(SIP_DISABLE_FEATURES ${SIP_DISABLE_FEATURES} HAVE_QSCI_SIP)
        endif()
        if(UNIX AND NOT SIP_VERSION_NUM LESS 265984)
            set(SIP_EXTRA_OPTIONS -P ${SIP_EXTRA_OPTIONS})
            add_definitions(-Dprotected=public)
        endif()
    endif()

    set(MODULES_SIP ${MODULES_SIP} ${NG_PREFIX}qgis_${PY_MODULE})
    ADD_SIP_PYTHON_MODULE(qgis._${PY_MODULE} ${PY_MODULE}/${PY_MODULE}.sip ${MODULES_SIP} ${TARGET_LINK_LIB})
endforeach()

configure_file(${CMAKE_SOURCE_DIR}/cmake/utils.py.in ${CMAKE_CURRENT_BINARY_DIR}/utils.py IMMEDIATE @ONLY)
# Plugin utilities files to copy to staging or install
set(PY_FILES
  __init__.py
  ${CMAKE_CURRENT_BINARY_DIR}/utils.py
  user.py
)

install(FILES ${PY_FILES} DESTINATION "${QGIS_PYTHON_DIR}")

foreach(PY_MODULE ${PY_MODULES})
    add_custom_target(py${PY_MODULE} ALL)
    add_dependencies(py${PY_MODULE} python_module_qgis__${PY_MODULE})
    file(GLOB_RECURSE PY_FILES "${PY_MODULE}/*.py")
    install(FILES ${PY_FILES} DESTINATION "${QGIS_PYTHON_DIR}/${PY_MODULE}")
endforeach()

install(FILES qsci_apis/pyqgis.pap DESTINATION "${QGIS_DATA_SUBDIR}/python/qsci_apis")
