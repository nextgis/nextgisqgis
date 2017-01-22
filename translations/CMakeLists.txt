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

find_program(QT_LRELEASE_EXECUTABLE
    NAMES lrelease
    PATHS ${QT_BINARY_DIR}
    NO_DEFAULT_PATH
)

if(QT_LRELEASE_EXECUTABLE)

    macro(ADD_TRANSLATION_FILES _sources )

        foreach (_current_FILE ${ARGN})
            get_filename_component(_in ${_current_FILE} ABSOLUTE)
            get_filename_component(_basename ${_current_FILE} NAME_WE)

            set(_out ${CMAKE_CURRENT_BINARY_DIR}/${_basename}.qm)

            add_custom_command(
                OUTPUT ${_out}
                COMMAND ${QT_LRELEASE_EXECUTABLE}
                ARGS -verbose ${_in} -qm ${_out}
                DEPENDS ${_in}
            )

            set(${_sources} ${${_sources}} ${_out} )
        endforeach ()
    endmacro()

    set(TS_FILES qgis_ar.ts qgis_bg.ts qgis_bs.ts qgis_ca.ts qgis_cs.ts qgis_da.ts qgis_de.ts qgis_el.ts qgis_es.ts qgis_et.ts qgis_eu.ts qgis_fi.ts qgis_fr.ts qgis_gl.ts qgis_hi.ts qgis_hr.ts qgis_hu.ts qgis_id.ts qgis_it.ts qgis_ja.ts qgis_km.ts qgis_ko.ts qgis_lt.ts qgis_lv.ts qgis_nb.ts qgis_nl.ts qgis_pl.ts qgis_pt_BR.ts qgis_pt_PT.ts qgis_ro.ts qgis_ru.ts qgis_sk.ts qgis_sl.ts qgis_sr@latin.ts qgis_sv.ts qgis_tr.ts qgis_vi.ts qgis_zh-Hans.ts qgis_zh-Hant.ts)

    # creating a custom target is needed to make the files build
    # "ALL" means that it will be run by default
    add_custom_target (translations ALL
                       DEPENDS ${QM_FILES})

    # first compile sources, then compile translations
    if (WITH_DESKTOP)
        add_dependencies (translations ${NG_PREFIX}${PROJECT_NAME})
    endif ()

    if(NOT SKIP_INSTALL_FILES AND NOT SKIP_INSTALL_ALL )
        install (FILES ${QM_FILES}
             DESTINATION ${INSTALL_SHARE_DIR}/i18n)
    endif()
else()
    warning_msg("The lrelease utility not found. Translations will not be build!")
endif()
