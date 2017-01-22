# Based on Macros for Bison
# ~~~~~~~~~~~~~~~~
# Copyright (c) 2007, Martin Dobias <wonder.sk at gmail.com>
# Copyright (c) 2017, NextGIS <info@nextgis.com>
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.

# use bison for .yy files

# search for bison
macro(find_bison)
if(NOT BISON_EXECUTABLE)
    if (MSVC)
        find_program(BISON_EXECUTABLE PATHS
            NAMES bison.exe
            PATHS $ENV{LIB_DIR}/bin c:/cygwin/bin $ENV{PROGRAMFILES}/GnuWin32/bin
        )
    else ()
        find_program(BISON_EXECUTABLE bison)
    endif ()

    if (BISON_EXECUTABLE)
        exec_program(${BISON_EXECUTABLE} ARGS --version OUTPUT_VARIABLE BISON_VERSION_STR)
        # get first line in case it's multiline
        string(REGEX REPLACE "([^\n]+).*" "\\1" FIRST_LINE "${BISON_VERSION_STR}")
        # get version information
        string(REGEX REPLACE ".* ([0-9]+)\\.([0-9]+)(\\..*)?" "\\1" BISON_VERSION_MAJOR "${FIRST_LINE}")
        string(REGEX REPLACE ".* ([0-9]+)\\.([0-9]+)(\\..*)?" "\\2" BISON_VERSION_MINOR "${FIRST_LINE}")
        if (BISON_VERSION_MAJOR LESS 2 OR (BISON_VERSION_MAJOR EQUAL 2 AND BISON_VERSION_MINOR LESS 4))
            warning_msg("Bison version is too old (${BISON_VERSION_MAJOR}.${BISON_VERSION_MINOR}). Use 2.4 or higher.")
            unset(BISON_EXECUTABLE)
        endif ()
    endif ()
endif()

endmacro()

macro(add_bison_files)
    find_bison()

    if(NOT BISON_EXECUTABLE)
        warning_msg("Bison: Skip creating ${ARGN}")
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
            -o${_out} -d -v
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
        warning_msg("Bison: Skip creating ${ARGN}")
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
            -o${_out} -d -v
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
    if(NOT FLEX_EXECUTABLE)
        if(MSVC)
            find_program(FLEX_EXECUTABLE
                NAMES flex.exe
                PATHS $ENV{LIB_DIR}/bin c:/cygwin/bin $ENV{PROGRAMFILES}/GnuWin32/bin
            )
        else()
            find_program(FLEX_EXECUTABLE flex)
        endif()

        if(NOT FLEX_EXECUTABLE)
            warning_msg("flex not found")
        endif ()
    endif()
endmacro()

macro(add_flex_files)
    find_flex()

    if(NOT FLEX_EXECUTABLE)
        warning_msg("Flex: Skip creating ${ARGN}")
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
        warning_msg("Flex: Skip creating ${ARGN}")
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
