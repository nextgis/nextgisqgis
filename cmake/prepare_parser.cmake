# Based on Macros for Bison
# ~~~~~~~~~~~~~~~~
# Copyright (c) 2007, Martin Dobias <wonder.sk at gmail.com>
# Copyright (c) 2017, NextGIS <info@nextgis.com>
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.

# use bison for .yy files

# search for bison
macro(find_bison)
  IF(NOT BISON_EXECUTABLE)
    IF (MSVC)
      FIND_PROGRAM(BISON_EXECUTABLE PATHS
      		   NAMES bison.exe
	           PATHS $ENV{LIB_DIR}/bin c:/cygwin/bin $ENV{PROGRAMFILES}/GnuWin32/bin
	)
    ELSE ()
      FIND_PROGRAM(BISON_EXECUTABLE bison)
    ENDIF ()

    IF (BISON_EXECUTABLE)

      EXEC_PROGRAM(${BISON_EXECUTABLE} ARGS --version OUTPUT_VARIABLE BISON_VERSION_STR)
      # get first line in case it's multiline
      STRING(REGEX REPLACE "([^\n]+).*" "\\1" FIRST_LINE "${BISON_VERSION_STR}")
      # get version information
      STRING(REGEX REPLACE ".* ([0-9]+)\\.([0-9]+)(\\..*)?" "\\1" BISON_VERSION_MAJOR "${FIRST_LINE}")
      STRING(REGEX REPLACE ".* ([0-9]+)\\.([0-9]+)(\\..*)?" "\\2" BISON_VERSION_MINOR "${FIRST_LINE}")
      IF (BISON_VERSION_MAJOR LESS 2 OR (BISON_VERSION_MAJOR EQUAL 2 AND BISON_VERSION_MINOR LESS 4))
        message(WARNING "Bison version is too old (${BISON_VERSION_MAJOR}.${BISON_VERSION_MINOR}). Use 2.4 or higher.")
        unset(BISON_EXECUTABLE)
      ENDIF ()

    ENDIF ()
  ENDIF()

endmacro()

macro(add_bison_files)
    find_bison()

    if(NOT BISON_EXECUTABLE)
        message(WARNING "Bison: Skip creating ${ARGN}")
        return()
    endif()

    foreach (_current_FILE ${ARGN})
        get_filename_component(_in ${_current_FILE} ABSOLUTE)
        get_filename_component(_basename ${_current_FILE} NAME_WE)

        set(_out ${CMAKE_CURRENT_SOURCE_DIR}/${_basename}.cpp)

        # bison options:
        # -t add debugging facilities
        # -d produce additional header file (used in parser.l)
        # -v produce additional *.output file with parser states

        add_custom_command(
            OUTPUT ${_out}
            COMMAND ${BISON_EXECUTABLE}
            ARGS
            -o${_out} -d -v -t
            ${_in}
            DEPENDS ${_in}
        )

        add_custom_target(bison_${_basename} DEPENDS ${_out})
        set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} bison_${_basename})
    endforeach ()
    set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} PARENT_SCOPE)
endmacro()

macro(add_bison_files_prefix prefix)
    find_bison()

    if(NOT BISON_EXECUTABLE)
        message(WARNING "Bison: Skip creating ${ARGN}")
        return()
    endif()

    foreach (_current_FILE ${ARGN})
        get_filename_component(_in ${_current_FILE} ABSOLUTE)
        get_filename_component(_basename ${_current_FILE} NAME_WE)

        set(_out ${CMAKE_CURRENT_SOURCE_DIR}/${_basename}.cpp)


        # bison options:
        # -t add debugging facilities
        # -d produce additional header file (used in parser.l)
        # -v produce additional *.output file with parser states

        add_custom_command(
            OUTPUT ${_out}
            COMMAND ${BISON_EXECUTABLE}
            ARGS
            -p ${prefix}
            -o${_out} -d -v -t
            ${_in}
            DEPENDS ${_in}
        )
        add_custom_target(bison_prefix_${_basename} DEPENDS ${_out})
        set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} bison_prefix_${_basename})
    endforeach ()
    set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} PARENT_SCOPE)
endmacro()

# flex a .ll file

# search flex
macro(find_flex)
    IF(NOT FLEX_EXECUTABLE)
      IF (MSVC)
        FIND_PROGRAM(FLEX_EXECUTABLE
                     NAMES flex.exe
                     PATHS $ENV{LIB_DIR}/bin c:/cygwin/bin $ENV{PROGRAMFILES}/GnuWin32/bin
                    )
      ELSE(MSVC)
        FIND_PROGRAM(FLEX_EXECUTABLE flex)
      ENDIF (MSVC)
        IF (NOT FLEX_EXECUTABLE)
          MESSAGE(WARNING "flex not found - aborting")
        ENDIF (NOT FLEX_EXECUTABLE)
    ENDIF(NOT FLEX_EXECUTABLE)
endmacro()

macro(add_flex_files)
    find_flex()

    if(NOT FLEX_EXECUTABLE)
        message(WARNING "Flex: Skip creating ${ARGN}")
        return()
    endif()

    foreach (_current_FILE ${ARGN})
        get_filename_component(_in ${_current_FILE} ABSOLUTE)
        get_filename_component(_basename ${_current_FILE} NAME_WE)

        set(_out ${CMAKE_CURRENT_SOURCE_DIR}/flex_${_basename}.cpp)

        # -d option for flex means that it will produce output to stderr while analyzing

        add_custom_command(
            OUTPUT ${_out}
            COMMAND ${FLEX_EXECUTABLE}
            ARGS
            -o${_out}
            ${_in}
            DEPENDS ${_in}
        )
        add_custom_target(flex_${_basename} DEPENDS ${_out})
        set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} flex_${_basename})
    endforeach ()
    set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} PARENT_SCOPE)
endmacro()


macro(add_flex_files_prefix prefix)
    find_flex()

    if(NOT FLEX_EXECUTABLE)
        message(WARNING "Flex: Skip creating ${ARGN}")
        return()
    endif()

    foreach (_current_FILE ${ARGN})
        get_filename_component(_in ${_current_FILE} ABSOLUTE)
        get_filename_component(_basename ${_current_FILE} NAME_WE)

        set(_out ${CMAKE_CURRENT_SOURCE_DIR}/flex_${_basename}.cpp)

        # -d option for flex means that it will produce output to stderr while analyzing

        add_custom_command(
            OUTPUT ${_out}
            COMMAND ${FLEX_EXECUTABLE}
            ARGS
            -P${prefix}
            -o${_out}
            ${_in}
            DEPENDS ${_in}
        )
        add_custom_target(flex_prefix_${_basename} DEPENDS ${_out})
        set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} flex_prefix_${_basename})
    endforeach ()
    set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} PARENT_SCOPE)
endmacro()
