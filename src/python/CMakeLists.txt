################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017-2018, NextGIS <info@nextgis.com>
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

if(PYTHONLIBS_VERSION_STRING VERSION_LESS 3)
    add_definitions(-DPYTHON2)
endif()

set(TARGET_LINK_LIB ${TARGET_LINK_LIB} ${PYTHON_LIBRARY})

set(QGISPYTHON_SRCS qgispython.cpp qgspythonutilsimpl.cpp)

include_directories(
  ../core
  ../core/geometry
  ../core/raster
  ../gui
)

include_directories(SYSTEM
  ${PYTHON_INCLUDE_DIR}
)

set(LIB_NAME ${NG_PREFIX}qgis_python)

add_library(${LIB_NAME} SHARED ${QGISPYTHON_SRCS})

target_compile_definitions (${LIB_NAME} PRIVATE "PYTHON_EXPORT=${DLLEXPORT}")
target_compile_definitions (${LIB_NAME} INTERFACE "PYTHON_EXPORT=${DLLIMPORT}")
set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 11)

# May be not nesessary
set_property(TARGET ${LIB_NAME} PROPERTY COMPILE_DEFINITIONS $<$<NOT:$<CONFIG:Debug>>:QT_NO_DEBUG>)

target_link_extlibraries(${LIB_NAME})
add_dependencies(${LIB_NAME} ${NG_PREFIX}qgis_core)
set(TARGET_LINK_LIB ${TARGET_LINK_LIB} ${LIB_NAME} PARENT_SCOPE)

if(OSX_FRAMEWORK)
    set_target_properties(${LIB_NAME} PROPERTIES
        FRAMEWORK TRUE
        FRAMEWORK_VERSION ${FRAMEWORK_VERSION}
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${QGIS_VERSION}
        MACOSX_FRAMEWORK_BUNDLE_VERSION ${QGIS_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER org.qgis.qgis2_python
        XCODE_ATTRIBUTE_INSTALL_PATH "@rpath"
        PUBLIC_HEADER "${QGIS_GUI_HDRS};${QGIS_GUI_MOC_HDRS}"
    )
endif()

set_target_properties(${LIB_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

#generate unversioned libs for android
set_target_properties(${LIB_NAME} PROPERTIES
    VERSION ${QGIS_VERSION}
    SOVERSION ${CPACK_PACKAGE_VERSION_MAJOR}
)

# install
if(OSX_FRAMEWORK)
    execute_process(
        COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_BINARY_DIR}/symlinks
        COMMAND ${CMAKE_COMMAND} -E create_symlink ../../Applications/${NG_PREFIX}${PROJECT_NAME}.app/Contents/Frameworks/${LIB_NAME}.framework ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework
    )
endif()

if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR} COMPONENT libraries
        LIBRARY DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
    )

    if(OSX_FRAMEWORK)
        install(FILES ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework DESTINATION ${INSTALL_LIB_DIR2})
    endif()
endif()
