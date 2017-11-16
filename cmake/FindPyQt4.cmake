# Find PyQt4
# ~~~~~~~~~~
# Copyright (c) 2007-2008, Simon Edwards <simon@simonzone.com>
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.
#
# PyQt4 website: http://www.riverbankcomputing.co.uk/pyqt/index.php
#
# Find the installed version of PyQt4. FindPyQt4 should only be called after
# Python has been found.
#
# This file defines the following variables:
#
# PYQT4_VERSION - The version of PyQt4 found expressed as a 6 digit hex number
#     suitable for comparision as a string
#
# PYQT4_VERSION_STR - The version of PyQt4 as a human readable string.
#
# PYQT4_VERSION_TAG - The PyQt version tag using by PyQt's sip files.
#
# PYQT4_SIP_DIR - The directory holding the PyQt4 .sip files.
#
# PYQT4_SIP_FLAGS - The SIP flags used to build PyQt.
#
# PYQT4_PYUIC_PROGRAM - The pyuic4 program path.
#
# PYQT4_PYRCC_PROGRAM - The pyrcc4 program path.

IF(EXISTS PYQT4_VERSION)
  # Already in cache, be silent
  SET(PYQT4_FOUND TRUE)
ELSE()

  FIND_FILE(_find_pyqt4_py FindPyQt4.py PATHS ${CMAKE_MODULE_PATH})

  EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} ${_find_pyqt4_py} OUTPUT_VARIABLE pyqt_config)
  IF(pyqt_config)
    STRING(REGEX REPLACE "^pyqt_version:([^\n]+).*$" "\\1" PYQT4_VERSION ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_version_str:([^\n]+).*$" "\\1" PYQT4_VERSION_STR ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_version_tag:([^\n]+).*$" "\\1" PYQT4_VERSION_TAG ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_version_num:([^\n]+).*$" "\\1" PYQT4_VERSION_NUM ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_mod_dir:([^\n]+).*$" "\\1" PYQT4_MOD_DIR ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_sip_dir:([^\n]+).*$" "\\1" PYQT4_SIP_DIR ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_sip_flags:([^\n]+).*$" "\\1" PYQT4_SIP_FLAGS ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_bin_dir:([^\n]+).*$" "\\1" PYQT4_BIN_DIR ${pyqt_config})

    SET(PYUIC_PROG_NAME pyuic4)
    SET(PYUIC_PROG_NAMES python2-pyuic4 pyuic4)
    SET(PYRCC_PROG_NAME pyrcc4)

    SET(PYQT4_SIP_FLAGS ${PYQT4_SIP_FLAGS} CACHE INTERNAL "PyQt4 sip flags")
    SET(PYQT4_SIP_DIR ${PYQT4_SIP_DIR} CACHE INTERNAL "PyQt4 sip dir")

    IF (MSVC)
        FIND_PROGRAM(PYUIC_PROGRAM
            NAMES ${PYUIC_PROG_NAME}.bat
            PATHS $ENV{LIB_DIR}/bin
        )

        FIND_PROGRAM(PYRCC_PROGRAM
          NAMES ${PYRCC_PROG_NAME}.exe
          PATHS $ENV{LIB_DIR}/bin
        )
    ELSE()
        FIND_PROGRAM(PYUIC_PROGRAM NAMES ${PYUIC_PROG_NAMES})
        FIND_PROGRAM(PYRCC_PROGRAM ${PYRCC_PROG_NAME})
    ENDIF()

    IF (PYUIC_PROGRAM AND PYRCC_PROGRAM)
        set(PYQT4_PYUIC_PROGRAM ${PYUIC_PROGRAM})
        set(PYQT4_PYRCC_PROGRAM ${PYRCC_PROGRAM})
        set(PYQT4_FOUND TRUE)
    ENDIF()

  ENDIF()

    IF(PYQT4_FOUND)
        IF(NOT PYQT4_FIND_QUIETLY)
            MESSAGE(STATUS "Found PyQt4 version: ${PYQT4_VERSION_STR}")
        ENDIF(NOT PYQT4_FIND_QUIETLY)
    ELSE(PYQT4_FOUND)
        IF(PYQT4_FIND_REQUIRED)
            MESSAGE(FATAL_ERROR "Could not find Python")
        ENDIF(PYQT4_FIND_REQUIRED)
    ENDIF(PYQT4_FOUND)

ENDIF()
