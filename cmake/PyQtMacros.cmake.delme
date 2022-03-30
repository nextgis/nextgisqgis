# Macros for PyQt
# ~~~~~~~~~~~~~~~~
# Copyright (c) 2009, Juergen E. Fischer <jef at norbit dot de>
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.

# Adapted from QT4_WRAP_UI
MACRO(PYQT_WRAP_UI outfiles )
  FOREACH(it ${ARGN})
    GET_FILENAME_COMPONENT(outfile ${it} NAME_WE)
    GET_FILENAME_COMPONENT(infile ${it} ABSOLUTE)
    SET(outfile ${CMAKE_CURRENT_BINARY_DIR}/ui_${outfile}.py)
    ADD_CUSTOM_COMMAND(OUTPUT ${outfile}
      COMMAND ${PYUIC_PROGRAM} -o ${outfile} ${infile}
      MAIN_DEPENDENCY ${infile}
      DEPENDS pygui pycore
    )
    SET(${outfiles} ${${outfiles}} ${outfile})
  ENDFOREACH()
ENDMACRO()

# Adapted from QT4_ADD_RESOURCES
MACRO (PYQT_ADD_RESOURCES outfiles )
  FOREACH (it ${ARGN})
    GET_FILENAME_COMPONENT(outfile ${it} NAME_WE)
    GET_FILENAME_COMPONENT(infile ${it} ABSOLUTE)
    GET_FILENAME_COMPONENT(rc_path ${infile} PATH)
    SET(outfile ${CMAKE_CURRENT_BINARY_DIR}/${outfile}_rc.py)
    #  parse file for dependencies
    #  all files are absolute paths or relative to the location of the qrc file
    FILE(READ "${infile}" _RC_FILE_CONTENTS)
    STRING(REGEX MATCHALL "<file[^<]+" _RC_FILES "${_RC_FILE_CONTENTS}")
    SET(_RC_DEPENDS)
    FOREACH(_RC_FILE ${_RC_FILES})
      STRING(REGEX REPLACE "^<file[^>]*>" "" _RC_FILE "${_RC_FILE}")
      STRING(REGEX MATCH "^/|([A-Za-z]:/)" _ABS_PATH_INDICATOR "${_RC_FILE}")
      IF(NOT _ABS_PATH_INDICATOR)
        SET(_RC_FILE "${rc_path}/${_RC_FILE}")
      ENDIF(NOT _ABS_PATH_INDICATOR)
      SET(_RC_DEPENDS ${_RC_DEPENDS} "${_RC_FILE}")
    ENDFOREACH(_RC_FILE)
    ADD_CUSTOM_COMMAND(OUTPUT ${outfile}
      COMMAND ${PYRCC_PROGRAM} -name ${outfile} -o ${outfile} ${infile}
      MAIN_DEPENDENCY ${infile}
      DEPENDS ${_RC_DEPENDS})
    SET(${outfiles} ${${outfiles}} ${outfile})
  ENDFOREACH()
ENDMACRO()
