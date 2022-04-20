# Find QtKeychain
# ~~~~~~~~~~~~~~~
# Copyright (c) 2016, Boundless Spatial
# Author: Larry Shaffer <lshaffer (at) boundlessgeo (dot) com>
#
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.
#
# CMake module to search for QtKeychain library from:
#    https://github.com/frankosterfeld/qtkeychain
#
# If it's found it sets QTKEYCHAIN_FOUND to TRUE
# and following variables are set:
#    QTKEYCHAIN_INCLUDE_DIR
#    QTKEYCHAIN_LIBRARY

find_path(QTKEYCHAIN_INCLUDE_DIR keychain.h
    PATHS
    ${LIB_DIR}/include
    "$ENV{LIB_DIR}/include"
    $ENV{INCLUDE}
    /usr/local/include
    /usr/include
    PATH_SUFFIXES qt5keychain qtkeychain
)

find_library(QTKEYCHAIN_LIBRARY NAMES qt5keychain qtkeychain
    PATHS
    ${LIB_DIR}
    "$ENV{LIB_DIR}"
    $ENV{LIB_DIR}/lib
    $ENV{LIB}
    /usr/local/lib
    /usr/lib
)


if (QTKEYCHAIN_INCLUDE_DIR AND QTKEYCHAIN_LIBRARY)
    set(QTKEYCHAIN_FOUND TRUE)
else ()
    set(QTKEYCHAIN_FOUND FALSE)
endif ()

if (QTKEYCHAIN_FOUND)
    if (NOT QTKEYCHAIN_FIND_QUIETLY)
        MESSAGE(STATUS "Found QtKeychain: ${QTKEYCHAIN_LIBRARY}")
    endif ()
else ()
    if (QTKEYCHAIN_FIND_REQUIRED)
        MESSAGE(FATAL_ERROR "Could not find QtKeychain")
    endif ()
endif ()
