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

set(QGIS_APP_SRCS
  qgisapp.cpp
  qgisappinterface.cpp
  qgisappstylesheet.cpp
  qgsabout.cpp
  qgsalignrasterdialog.cpp
  qgsapplayertreeviewmenuprovider.cpp
  qgsaddattrdialog.cpp
  qgsaddtaborgroup.cpp
  qgsjoindialog.cpp
  qgsannotationwidget.cpp
  qgsattributeactiondialog.cpp
  qgsattributeactionpropertiesdialog.cpp
  qgsattributetypedialog.cpp
  qgsattributetabledialog.cpp
  qgsbookmarks.cpp
  qgsbrowserdockwidget.cpp
  qgsclipboard.cpp
  qgscustomization.cpp
  qgscustomprojectiondialog.cpp
  qgsdecorationitem.cpp
  qgsdecorationcopyright.cpp
  qgsdecorationcopyrightdialog.cpp
  qgsdecorationnortharrow.cpp
  qgsdecorationnortharrowdialog.cpp
  qgsdecorationscalebar.cpp
  qgsdecorationscalebardialog.cpp
  qgsdecorationgrid.cpp
  qgsdecorationgriddialog.cpp
  qgsdxfexportdialog.cpp
  qgsformannotationdialog.cpp
  qgsguivectorlayertools.cpp
  qgshtmlannotationdialog.cpp
  qgsdelattrdialog.cpp
  qgsdiagramproperties.cpp
  qgsdisplayangle.cpp
  qgsfieldcalculator.cpp
  qgsfieldsproperties.cpp
  qgsidentifyresultsdialog.cpp
  qgsfeatureaction.cpp
  qgslabeldialog.cpp
  qgslabelpropertydialog.cpp
  qgslabelengineconfigdialog.cpp
  qgslabelinggui.cpp
  qgslabelingwidget.cpp
  qgslabelpreview.cpp
  qgsloadstylefromdbdialog.cpp
  qgsmaplayerstyleguiutils.cpp
  qgsrulebasedlabelingwidget.cpp
  qgssavestyletodbdialog.cpp
  qgsstatusbarcoordinateswidget.cpp
  qgsstatusbarmagnifierwidget.cpp
  qgsstatusbarscalewidget.cpp
  qgsversioninfo.cpp
  qgswelcomepageitemsmodel.cpp
  qgswelcomepage.cpp

  qgsmaptooladdfeature.cpp
  qgsmaptooladdpart.cpp
  qgsmaptooladdring.cpp
  qgsmaptoolfillring.cpp
  qgsmaptoolannotation.cpp
  qgsmaptoolchangelabelproperties.cpp
  qgsmaptooldeletering.cpp
  qgsmaptooldeletepart.cpp
  qgsmaptoolfeatureaction.cpp
  qgsmaptoolformannotation.cpp
  qgsmaptoolhtmlannotation.cpp
  qgsmaptoolpinlabels.cpp
  qgsmaptoolshowhidelabels.cpp
  qgsmaptoolidentifyaction.cpp
  qgsmaptoollabel.cpp
  qgsmaptoolmeasureangle.cpp
  qgsmaptoolmovefeature.cpp
  qgsmaptoolmovelabel.cpp
  qgsmaptooloffsetcurve.cpp
  qgsmaptooloffsetpointsymbol.cpp
  qgsmaptoolpointsymbol.cpp
  qgsmaptoolreshape.cpp
  qgsmaptoolrotatefeature.cpp
  qgsmaptoolrotatelabel.cpp
  qgsmaptoolrotatepointsymbols.cpp
  qgsmaptoolselect.cpp
  qgsmaptoolselectrectangle.cpp
  qgsmaptoolselectfreehand.cpp
  qgsmaptoolselectpolygon.cpp
  qgsmaptoolselectradius.cpp
  qgsmaptoolselectutils.cpp
  qgsmaptoolsimplify.cpp
  qgsmaptoolsplitfeatures.cpp
  qgsmaptoolsplitparts.cpp
  qgsmaptoolsvgannotation.cpp
  qgsmaptooltextannotation.cpp

  nodetool/qgsmaptoolnodetool.cpp
  nodetool/qgsselectedfeature.cpp
  nodetool/qgsvertexentry.cpp
  nodetool/qgsnodeeditor.cpp

  qgslayerstylingwidget.cpp
  qgsmeasuredialog.cpp
  qgsmeasuretool.cpp
  qgsmergeattributesdialog.cpp
  qgsoptions.cpp
  qgspointmarkeritem.cpp
  qgspointrotationitem.cpp
  qgspluginmetadata.cpp
  qgspluginregistry.cpp
  qgsprojectlayergroupdialog.cpp
  qgsprojectproperties.cpp
  qgsrastercalcdialog.cpp
  qgsrasterlayerproperties.cpp
  qgsrelationmanagerdialog.cpp
  qgsrelationadddlg.cpp
  qgsselectbyformdialog.cpp
  qgsstatisticalsummarydockwidget.cpp
  qgssubstitutionlistwidget.cpp
  qgstextannotationdialog.cpp
  qgssnappingdialog.cpp
  qgssvgannotationdialog.cpp
  qgsundowidget.cpp
  qgstipgui.cpp
  qgstipfactory.cpp
  qgsvectorlayerproperties.cpp
  qgsvisibilitypresets.cpp
  qgshandlebadlayers.cpp
  qgsmaptooladdcircularstring.cpp
  qgsmaptoolcircularstringcurvepoint.cpp
  qgsmaptoolcircularstringradius.cpp

  composer/qgsattributeselectiondialog.cpp
  composer/qgscomposer.cpp
  composer/qgscomposerarrowwidget.cpp
  composer/qgscomposerattributetablewidget.cpp
  composer/qgscomposerhtmlwidget.cpp
  composer/qgscomposerimageexportoptionsdialog.cpp
  composer/qgscomposeritemwidget.cpp
  composer/qgscomposerlabelwidget.cpp
  composer/qgscomposerpicturewidget.cpp
  composer/qgscomposermanager.cpp
  composer/qgscomposermapwidget.cpp
  composer/qgscomposerscalebarwidget.cpp
  composer/qgscomposershapewidget.cpp
  composer/qgscomposerpolygonwidget.cpp
  composer/qgscomposerpolylinewidget.cpp
  composer/qgscomposertablewidget.cpp
  composer/qgscomposertablebackgroundcolorsdialog.cpp
  composer/qgscomposerlegenditemdialog.cpp
  composer/qgscomposerlegendlayersdialog.cpp
  composer/qgscomposerlegendwidget.cpp
  composer/qgscompositionwidget.cpp
  composer/qgsatlascompositionwidget.cpp

  legend/qgsapplegendinterface.cpp

  ogr/qgsogrhelperfunctions.cpp
  ogr/qgsopenvectorlayerdialog.cpp
  ogr/qgsnewogrconnection.cpp
  ogr/qgsvectorlayersaveasdialog.cpp

  # gps/qgsgpsinformationwidget.cpp
  # gps/qgsgpsmarker.cpp
  #
  # openstreetmap/qgsosmdownloaddialog.cpp
  # openstreetmap/qgsosmimportdialog.cpp
  # openstreetmap/qgsosmexportdialog.cpp

  # dwg/qgsdwgimportdialog.cpp
  # dwg/qgsdwgimporter.cpp

  pluginmanager/qgspluginmanager.cpp
  pluginmanager/qgspluginmanager_texts.cpp
  pluginmanager/qgsapppluginmanagerinterface.cpp
  pluginmanager/qgspluginsortfilterproxymodel.cpp
  pluginmanager/qgspluginitemdelegate.cpp

  qgsnewspatialitelayerdialog.cpp

  qgssettingstree.cpp
  qgsvariantdelegate.cpp
)

set(QGIS_APP_MOC_HDRS
  qgisapp.h
  qgisappinterface.h
  qgisappstylesheet.h
  qgsabout.h
  qgsaddattrdialog.h
  qgsalignrasterdialog.h
  qgsjoindialog.h
  qgsaddtaborgroup.h
  qgsannotationwidget.h
  qgsapplayertreeviewmenuprovider.h
  qgsattributeactiondialog.h
  qgsattributeactionpropertiesdialog.h
  qgsattributetypedialog.h
  qgsattributetabledialog.h
  qgsbookmarks.h
  qgsbrowserdockwidget.h
  qgsclipboard.h
  qgscustomization.h
  qgscustomprojectiondialog.h
  qgsdecorationitem.h
  qgsdecorationcopyright.h
  qgsdecorationcopyrightdialog.h
  qgsdecorationnortharrow.h
  qgsdecorationnortharrowdialog.h
  qgsdecorationscalebar.h
  qgsdecorationscalebardialog.h
  qgsdecorationgrid.h
  qgsdecorationgriddialog.h
  qgsdelattrdialog.h
  qgsdiagramproperties.h
  qgsdisplayangle.h
  qgsdxfexportdialog.h
  qgsfeatureaction.h
  qgsfieldcalculator.h
  qgsfieldsproperties.h
  qgsformannotationdialog.h
  qgsguivectorlayertools.h
  qgshtmlannotationdialog.h
  qgsidentifyresultsdialog.h
  qgslabeldialog.h
  qgslabelengineconfigdialog.h
  qgslabelinggui.h
  qgslabelpreview.h
  qgslabelingwidget.h
  qgslabelpropertydialog.h
  qgsloadstylefromdbdialog.h
  qgsmaplayerstyleguiutils.h
  qgsrulebasedlabelingwidget.h
  qgssavestyletodbdialog.h
  qgsstatusbarcoordinateswidget.h
  qgsstatusbarmagnifierwidget.h
  qgsstatusbarscalewidget.h
  qgsversioninfo.h
  qgswelcomepageitemsmodel.h
  qgswelcomepage.h

  qgsmaptooladdfeature.h
  qgsmaptoolannotation.h
  qgsmaptoolcircularstringradius.h
  qgsmaptooladdpart.h
  qgsmaptooladdring.h
  qgsmaptoolfillring.h
  qgsmaptoolchangelabelproperties.h
  qgsmaptooldeletepart.h
  qgsmaptooldeletering.h
  qgsmaptoolfeatureaction.h
  qgsmaptoolformannotation.h
  qgsmaptoolhtmlannotation.h
  qgsmaptoolpinlabels.h
  qgsmaptoolshowhidelabels.h
  qgsmaptoolidentifyaction.h
  qgsmaptoolmeasureangle.h
  qgsmaptoolmovefeature.h
  qgsmaptoolmovelabel.h
  qgsmaptoollabel.h
  qgsmaptooloffsetcurve.h
  qgsmaptooloffsetpointsymbol.h
  qgsmaptoolpointsymbol.h
  qgsmaptoolreshape.h
  qgsmaptoolrotatefeature.h
  qgsmaptoolrotatelabel.h
  qgsmaptoolrotatepointsymbols.h
  qgsmaptoolselectfreehand.h
  qgsmaptoolselect.h
  qgsmaptoolselectpolygon.h
  qgsmaptoolselectradius.h
  qgsmaptoolselectrectangle.h
  qgsmaptoolsimplify.h
  qgsmaptoolsplitfeatures.h
  qgsmaptoolsplitparts.h
  qgsmaptoolsvgannotation.h
  qgsmaptooltextannotation.h
  qgsmaptooladdcircularstring.h
  qgsmaptoolcircularstringcurvepoint.h

  nodetool/qgsmaptoolnodetool.h
  nodetool/qgsselectedfeature.h
  nodetool/qgsnodeeditor.h

  qgslayerstylingwidget.h
  qgsmeasuredialog.h
  qgsmeasuretool.h
  qgsmergeattributesdialog.h
  qgsoptions.h
  qgsprojectlayergroupdialog.h
  qgsprojectproperties.h
  qgsrastercalcdialog.h
  qgsrasterlayerproperties.h
  qgsrelationmanagerdialog.h
  qgsrelationadddlg.h
  qgsselectbyformdialog.h
  qgssnappingdialog.h
  qgsstatisticalsummarydockwidget.h
  qgssubstitutionlistwidget.h
  qgssvgannotationdialog.h
  qgstextannotationdialog.h
  qgstipgui.h
  qgstipfactory.h
  qgsundowidget.h
  qgsvectorlayerproperties.h
  qgsvisibilitypresets.h
  qgshandlebadlayers.h

  composer/qgsattributeselectiondialog.h
  composer/qgscomposer.h
  composer/qgscomposerarrowwidget.h
  composer/qgscomposerattributetablewidget.h
  composer/qgscomposerhtmlwidget.h
  composer/qgscomposerimageexportoptionsdialog.h
  composer/qgscomposeritemwidget.h
  composer/qgscomposerlabelwidget.h
  composer/qgscomposerlegendwidget.h
  composer/qgscomposerlegenditemdialog.h
  composer/qgscomposerlegendlayersdialog.h
  composer/qgscomposermanager.h
  composer/qgscomposermapwidget.h
  composer/qgscomposerpicturewidget.h
  composer/qgscomposerscalebarwidget.h
  composer/qgscomposertablewidget.h
  composer/qgscomposertablebackgroundcolorsdialog.h
  composer/qgscomposershapewidget.h
  composer/qgscomposerpolygonwidget.h
  composer/qgscomposerpolylinewidget.h
  composer/qgscompositionwidget.h
  composer/qgsatlascompositionwidget.h

  legend/qgsapplegendinterface.h

  ogr/qgsopenvectorlayerdialog.h
  ogr/qgsnewogrconnection.h
  ogr/qgsvectorlayersaveasdialog.h

  # gps/qgsgpsinformationwidget.h
  #
  # openstreetmap/qgsosmdownloaddialog.h
  # openstreetmap/qgsosmimportdialog.h
  # openstreetmap/qgsosmexportdialog.h

  # dwg/qgsdwgimportdialog.h

  pluginmanager/qgspluginmanager.h
  pluginmanager/qgsapppluginmanagerinterface.h
  pluginmanager/qgspluginsortfilterproxymodel.h
  pluginmanager/qgspluginitemdelegate.h

  qgsnewspatialitelayerdialog.h

  qgssettingstree.h
  qgsvariantdelegate.h
)

if(NGSTD_FOUND)

    set(QGIS_APP_SRCS ${QGIS_APP_SRCS}
        ngupdater.cpp
    )

    set(QGIS_APP_MOC_HDRS ${QGIS_APP_MOC_HDRS}
        ngupdater.h
    )
endif()

set(QGIS_APP_SRCS ${QGIS_APP_SRCS}
    ngcustomization.cpp
    ngsaboutdialog.cpp
)

set(QGIS_APP_MOC_HDRS ${QGIS_APP_MOC_HDRS}
    ngcustomization.h
    ngsaboutdialog.h
)

set(IMAGE_RCCS ../../images/images.qrc)

if(NOT PREPARE_ONLY)
    qt4_add_resources(IMAGE_RCC_SRCS ${IMAGE_RCCS})

    qt4_wrap_cpp(QGIS_APP_MOC_SRCS ${QGIS_APP_MOC_HDRS})
endif()

set(QGIS_APPMAIN_SRCS main.cpp)

if(WIN32)
    if(MSVC)
        set(QGIS_APPMAIN_SRCS ${QGIS_APPMAIN_SRCS} ${CMAKE_CURRENT_SOURCE_DIR}/qgis_win32.rc)
    endif()
endif()

if(PEDANTIC)
    # disable deprecation warnings
    if(MSVC)
        set_source_files_properties(
            qgisappinterface.cpp
            ${CMAKE_BINARY_DIR}/src/app/moc_qgisappinterface.cxx
            PROPERTIES COMPILE_FLAGS "/wd4996"
        )
    else()
        set_source_files_properties(
            qgisappinterface.cpp
            ${CMAKE_BINARY_DIR}/src/app/moc_qgisappinterface.cxx
            PROPERTIES COMPILE_FLAGS "-Wno-deprecated-declarations"
        )
    endif()
endif()

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR} composer legend pluginmanager
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}/../ui
  ../analysis/raster
  # ../analysis/openstreetmap
  ../core
  ../core/auth
  # ../core/gps
  ../core/composer
  ../core/dxf
  ../core/geometry
  ../core/layertree
  ../core/raster
  ../core/symbology-ng
  ../gui
  ../gui/symbology-ng
  ../gui/attributetable
  ../gui/auth
  ../gui/raster
  ../gui/editorwidgets
  ../gui/editorwidgets/core
  ../gui/layertree
  ../plugins
  ../python
  # dwg
  # gps
  # openstreetmap
)

if(${CMAKE_VERSION} VERSION_GREATER "3.3.2")
    cmake_policy(SET CMP0063 NEW)
endif()

set(LIB_NAME ${NG_PREFIX}qgis_app)

add_library(${LIB_NAME} SHARED ${QGIS_APP_SRCS} ${QGIS_APP_MOC_SRCS} ${QGIS_APP_HDRS} ${QGIS_APP_MOC_HDRS})

target_compile_definitions (${LIB_NAME} PRIVATE "APP_EXPORT=${DLLEXPORT}")
target_compile_definitions (${LIB_NAME} INTERFACE "APP_EXPORT=${DLLIMPORT}")

target_compile_definitions (${LIB_NAME} PRIVATE "PYTHON_EXPORT=${DLLIMPORT}")
target_compile_definitions (${LIB_NAME} PRIVATE "ANALYSIS_EXPORT=${DLLIMPORT}")
# set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 11)

set(TARGET_LINK_LIBEX)
if(OSX_FRAMEWORK)
    find_library(CARBON_FRAMEWORK Carbon)
    find_library(COREFOUNDATION_FRAMEWORK CoreFoundation)

    set(TARGET_LINK_LIBEX ${TARGET_LINK_LIBEX} ${CARBON_FRAMEWORK} ${COREFOUNDATION_FRAMEWORK})
endif()

set(TARGET_LINK_LIBEX ${TARGET_LINK_LIBEX}
    ${QWT_LIBRARIES}
    Qt4::QtUiTools
    ${NGSTD_LIBRARIES}
    ${QSCINTILLA_LIBRARIES}

    ${NG_PREFIX}qgis_core
    ${NG_PREFIX}qgis_gui
    ${NG_PREFIX}qgis_analysis
)

target_link_libraries(${LIB_NAME} PRIVATE ${TARGET_LINK_LIBEX})
# target_link_extlibraries(${LIB_NAME})
# set(TARGET_LINK_LIB ${TARGET_LINK_LIB} ${LIB_NAME})

add_executable(${QGIS_APP_NAME} MACOSX_BUNDLE WIN32 ${QGIS_APPMAIN_SRCS} ${IMAGE_RCC_SRCS} ${TEST_RCC_SRCS})
target_compile_definitions (${QGIS_APP_NAME} PRIVATE "APP_EXPORT=${DLLIMPORT}")
target_compile_definitions (${QGIS_APP_NAME} PRIVATE "CORE_EXPORT=${DLLIMPORT}")
target_compile_definitions (${QGIS_APP_NAME} PRIVATE "GUI_EXPORT=${DLLIMPORT}")
target_compile_definitions (${QGIS_APP_NAME} PRIVATE "PYTHON_EXPORT=${DLLIMPORT}")
target_compile_definitions (${QGIS_APP_NAME} PRIVATE "ANALYSIS_EXPORT=${DLLIMPORT}")

set_property(TARGET ${QGIS_APP_NAME} PROPERTY CXX_STANDARD 11)

set(TARGET_LINK_LIBEX)
if(WIN32)
    set_target_properties(${QGIS_APP_NAME}
                          PROPERTIES COMPILE_FLAGS "/Zc:wchar_t-")
    set_property(TARGET ${QGIS_APP_NAME} APPEND PROPERTY LINK_FLAGS /entry:mainCRTStartup)
    set(TARGET_LINK_LIBEX ${TARGET_LINK_LIBEX} ${QT_QTMAIN_LIBRARY})
endif(WIN32)

set(TARGET_LINK_LIBEX ${TARGET_LINK_LIBEX}
    Qt4::QtCore
    ${LIB_NAME}
    ${NG_PREFIX}qgis_core
    ${NG_PREFIX}qgis_gui
    ${NG_PREFIX}qgis_analysis
    ${NGSTD_LIBRARIES}
)
target_link_libraries(${QGIS_APP_NAME} PRIVATE ${TARGET_LINK_LIBEX})
# target_link_extlibraries(${QGIS_APP_NAME})

if(OSX_FRAMEWORK)
    set_target_properties(${LIB_NAME} PROPERTIES
        FRAMEWORK TRUE
        FRAMEWORK_VERSION ${FRAMEWORK_VERSION}
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${QGIS_VERSION}
        MACOSX_FRAMEWORK_BUNDLE_VERSION ${QGIS_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER org.qgis.qgis2_core
        XCODE_ATTRIBUTE_INSTALL_PATH "@rpath"
        PUBLIC_HEADER "${QGIS_CORE_HDRS};${QGIS_CORE_MOC_HDRS}"
        LINK_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}"
    )

    set_target_properties(${QGIS_APP_NAME} PROPERTIES
        MACOSX_BUNDLE_INFO_PLIST "${CMAKE_SOURCE_DIR}/cmake/app.info.plist.in"
        INSTALL_RPATH "@executable_path/../../../../Library/Frameworks;@executable_path/../Frameworks"
    )
endif()

set_target_properties(${LIB_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

#generate unversioned libs for android
set_target_properties(${LIB_NAME} PROPERTIES
    VERSION ${QGIS_VERSION}
    SOVERSION ${CPACK_PACKAGE_VERSION_MAJOR}
)

if(MSVC AND CMAKE_SIZEOF_VOID_P EQUAL 8)
    set_target_properties(${LIB_NAME} PROPERTIES STATIC_LIBRARY_FLAGS "/machine:x64")
endif()

# install
if(OSX_FRAMEWORK)
    execute_process(
        COMMAND ${CMAKE_COMMAND} -E create_symlink ../../Applications/${QGIS_APP_NAME}.app/Contents/Frameworks/${LIB_NAME}.framework ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework
    )
endif()

if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR} COMPONENT libraries
        LIBRARY DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
    )

    if(OSX_FRAMEWORK)
        install(FILES ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework DESTINATION ${INSTALL_LIB_DIR2})
    endif()
endif()

if(NOT SKIP_INSTALL_EXECUTABLES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${QGIS_APP_NAME}
        BUNDLE DESTINATION ${INSTALL_BIN_DIR}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR}
        LIBRARY DESTINATION ${INSTALL_LIB_DIR}
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR}
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
    )
endif()
